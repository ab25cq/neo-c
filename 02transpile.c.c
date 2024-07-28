// source head
typedef unsigned long int size_t;
typedef long ssize_t;
typedef long off_t;
typedef struct _IO_FILE FILE;
typedef __builtin_va_list va_list;
typedef __builtin_va_list __isoc_va_list;
union _G_fpos64_t
{
char __opaque[16];
long long __lldata;
double __align;
};
typedef union _G_fpos64_t fpos_t;
extern struct _IO_FILE* stdin;
extern struct _IO_FILE* stdout;
extern struct _IO_FILE* stderr;
typedef long (*cookie_read_function_t)(void*,char*,unsigned long int);
typedef long (*cookie_write_function_t)(void*,const char*,unsigned long int);
typedef int (*cookie_seek_function_t)(void*,long*,int);
typedef int (*cookie_close_function_t)(void*);
struct _IO_cookie_io_functions_t
{
    long (*read)(void*,char*,unsigned long int);
    long (*write)(void*,const char*,unsigned long int);
    int (*seek)(void*,long*,int);
    int (*close)(void*);
};
typedef struct _IO_cookie_io_functions_t cookie_io_functions_t;
typedef unsigned int wchar_t;
struct anonymous_typeX1
{
    int quot;
    int rem;
};
typedef struct anonymous_typeX1 div_t;
struct anonymous_typeX2
{
    long quot;
    long rem;
};
typedef struct anonymous_typeX2 ldiv_t;
struct anonymous_typeX3
{
    long long quot;
    long long rem;
};
typedef struct anonymous_typeX3 lldiv_t;
struct __locale_struct;
typedef struct __locale_struct* locale_t;
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
    _Bool mUniq;
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
    int mTypedefOriginalPointerNum;
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
    _Bool mLambdaArray;
    _Bool mNoNumberArray;
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
    struct buffer* mSourceHead2;
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
    _Bool no_label;
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
    _Bool constructor_;
    struct sClass* defining_class;
    _Bool array_initializer;
    _Bool va_arg;
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
typedef long intptr_t;
typedef int pid_t;
typedef unsigned int uid_t;
typedef unsigned int gid_t;
typedef unsigned int useconds_t;
extern char* optarg;
extern int optind;
extern int opterr;
extern int optopt;
extern int optreset;
extern char** environ;
typedef int blksize_t;
typedef unsigned int nlink_t;
typedef long register_t;
typedef long time_t;
typedef long suseconds_t;
typedef char int8_t;
typedef short short int16_t;
typedef int int32_t;
typedef long int64_t;
typedef unsigned long int u_int64_t;
typedef unsigned int mode_t;
typedef unsigned long int ino_t;
typedef unsigned long int dev_t;
typedef long blkcnt_t;
typedef unsigned long int fsblkcnt_t;
typedef unsigned long int fsfilcnt_t;
typedef void* timer_t;
typedef int clockid_t;
typedef long clock_t;
typedef unsigned int id_t;
typedef int key_t;
typedef struct __pthread* pthread_t;
typedef int pthread_once_t;
typedef unsigned int pthread_key_t;
typedef int pthread_spinlock_t;
struct anonymous_typeX4
{
    unsigned int __attr;
};
typedef struct anonymous_typeX4 pthread_mutexattr_t;
struct anonymous_typeX5
{
    unsigned int __attr;
};
typedef struct anonymous_typeX5 pthread_condattr_t;
struct anonymous_typeX6
{
    unsigned int __attr;
};
typedef struct anonymous_typeX6 pthread_barrierattr_t;
struct anonymous_typeX7
{
    unsigned int __attr[2];
};
typedef struct anonymous_typeX7 pthread_rwlockattr_t;
union anonymous_typeZ9
{
int __i[sizeof(long)==8?14:9];
int __vi[sizeof(long)==8?14:9];
unsigned long int __s[sizeof(long)==8?7:9];
};
union anonymous_typeZ10
{
int __i[sizeof(long)==8?14:9];
int __vi[sizeof(long)==8?14:9];
unsigned long int __s[sizeof(long)==8?7:9];
};
struct anonymous_typeX8
{
    union anonymous_typeZ10 __u;
};
typedef struct anonymous_typeX8 pthread_attr_t;
union anonymous_typeZ12
{
int __i[sizeof(long)==8?10:6];
int __vi[sizeof(long)==8?10:6];
void* __p[sizeof(long)==8?5:6];
};
union anonymous_typeZ13
{
int __i[sizeof(long)==8?10:6];
int __vi[sizeof(long)==8?10:6];
void* __p[sizeof(long)==8?5:6];
};
struct anonymous_typeX11
{
    union anonymous_typeZ13 __u;
};
typedef struct anonymous_typeX11 pthread_mutex_t;
union anonymous_typeZ15
{
int __i[12];
int __vi[12];
void* __p[12*sizeof(int)/sizeof(void*)];
};
union anonymous_typeZ16
{
int __i[12];
int __vi[12];
void* __p[12*sizeof(int)/sizeof(void*)];
};
struct anonymous_typeX14
{
    union anonymous_typeZ16 __u;
};
typedef struct anonymous_typeX14 pthread_cond_t;
union anonymous_typeZ18
{
int __i[sizeof(long)==8?14:8];
int __vi[sizeof(long)==8?14:8];
void* __p[sizeof(long)==8?7:8];
};
union anonymous_typeZ19
{
int __i[sizeof(long)==8?14:8];
int __vi[sizeof(long)==8?14:8];
void* __p[sizeof(long)==8?7:8];
};
struct anonymous_typeX17
{
    union anonymous_typeZ19 __u;
};
typedef struct anonymous_typeX17 pthread_rwlock_t;
union anonymous_typeZ21
{
int __i[sizeof(long)==8?8:5];
int __vi[sizeof(long)==8?8:5];
void* __p[sizeof(long)==8?4:5];
};
union anonymous_typeZ22
{
int __i[sizeof(long)==8?8:5];
int __vi[sizeof(long)==8?8:5];
void* __p[sizeof(long)==8?4:5];
};
struct anonymous_typeX20
{
    union anonymous_typeZ22 __u;
};
typedef struct anonymous_typeX20 pthread_barrier_t;
typedef unsigned char u_int8_t;
typedef unsigned short int u_int16_t;
typedef unsigned int u_int32_t;
typedef char* caddr_t;
typedef unsigned char u_char;
typedef unsigned short int u_short;
typedef unsigned short int ushort;
typedef unsigned int u_int;
typedef unsigned int uint;
typedef unsigned long int u_long;
typedef unsigned long int ulong;
typedef long long quad_t;
typedef unsigned long long u_quad_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long int uint64_t;
struct timeval
{
    long tv_sec;
    long tv_usec;
};
struct timespec
{
    long tv_sec;
    int :8*(sizeof(long)-sizeof(long))*(1234==4321);
    long tv_nsec;
    int :8*(sizeof(long)-sizeof(long))*(1234!=4321);
};
struct __sigset_t
{
    unsigned long int __bits[128/sizeof(long)];
};
typedef struct __sigset_t sigset_t;
typedef unsigned long int fd_mask;
struct anonymous_typeX23
{
    unsigned long int fds_bits[1024/8/sizeof(long)];
};
typedef struct anonymous_typeX23 fd_set;
struct stat
{
    unsigned long int st_dev;
    unsigned long int st_ino;
    unsigned int st_mode;
    unsigned int st_nlink;
    unsigned int st_uid;
    unsigned int st_gid;
    unsigned long int st_rdev;
    unsigned long int __pad;
    long st_size;
    int st_blksize;
    int __pad2;
    long st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    unsigned int __unused[2];
};
extern char* program_invocation_short_name;
extern char* program_invocation_name;
_Bool gComeGC=(_Bool)0;
_Bool gComeLink=(_Bool)1;
_Bool gComeC=(_Bool)1;
char* gProgramName=((void*)0);
_Bool gCommonHeader=(_Bool)0;
_Bool gComeMalloc=(_Bool)0;
_Bool gComeDebug=(_Bool)0;
_Bool gComeOriginalSourcePosition=(_Bool)1;
int gComeDebugStackFrameID=0;
struct __current_stack1__
{
    int* n_56;
    char** msg2_50;
    char** p_52;
    char** last_lf_53;
    struct sInfo** info;
    char** msg;
};
struct __current_stack2__
{
    struct sInfo* info_304;
    struct buffer** clang_option_287;
    struct buffer** cpp_option_288;
    struct list$1charph** files_289;
    struct list$1charph** object_files_290;
    _Bool* output_object_file_291;
    _Bool* output_cpp_file_292;
    _Bool* output_source_file_flag_293;
    char** output_file_name_294;
    _Bool* verbose_295;
    _Bool* come_debug_296;
    _Bool* come_malloc_297;
    _Bool* come_str_298;
    int* argc;
    char*** argv;
};

// uniq global variable
// header function
void come_heap_init(int come_malloc, int come_debug, int come_gc);

void come_heap_final();

struct _IO_FILE* fopen(const char* anonymous_var_nameX1, const char* anonymous_var_nameX2);

struct _IO_FILE* freopen(const char* anonymous_var_nameX3, const char* anonymous_var_nameX4, struct _IO_FILE* anonymous_var_nameX5);

int fclose(struct _IO_FILE* anonymous_var_nameX6);

int remove(const char* anonymous_var_nameX7);

int rename(const char* anonymous_var_nameX8, const char* anonymous_var_nameX9);

int feof(struct _IO_FILE* anonymous_var_nameX10);

int ferror(struct _IO_FILE* anonymous_var_nameX11);

int fflush(struct _IO_FILE* anonymous_var_nameX12);

void clearerr(struct _IO_FILE* anonymous_var_nameX13);

int fseek(struct _IO_FILE* anonymous_var_nameX14, long anonymous_var_nameX15, int anonymous_var_nameX16);

long ftell(struct _IO_FILE* anonymous_var_nameX17);

void rewind(struct _IO_FILE* anonymous_var_nameX18);

int fgetpos(struct _IO_FILE* anonymous_var_nameX19, union _G_fpos64_t* anonymous_var_nameX20);

int fsetpos(struct _IO_FILE* anonymous_var_nameX21, const union _G_fpos64_t* anonymous_var_nameX22);

unsigned long int fread(void* anonymous_var_nameX23, unsigned long int anonymous_var_nameX24, unsigned long int anonymous_var_nameX25, struct _IO_FILE* anonymous_var_nameX26);

unsigned long int fwrite(const void* anonymous_var_nameX27, unsigned long int anonymous_var_nameX28, unsigned long int anonymous_var_nameX29, struct _IO_FILE* anonymous_var_nameX30);

int fgetc(struct _IO_FILE* anonymous_var_nameX31);

int getc(struct _IO_FILE* anonymous_var_nameX32);

int getchar();

int ungetc(int anonymous_var_nameX33, struct _IO_FILE* anonymous_var_nameX34);

int fputc(int anonymous_var_nameX35, struct _IO_FILE* anonymous_var_nameX36);

int putc(int anonymous_var_nameX37, struct _IO_FILE* anonymous_var_nameX38);

int putchar(int anonymous_var_nameX39);

char* fgets(char* anonymous_var_nameX40, int anonymous_var_nameX41, struct _IO_FILE* anonymous_var_nameX42);

int fputs(const char* anonymous_var_nameX43, struct _IO_FILE* anonymous_var_nameX44);

int puts(const char* anonymous_var_nameX45);

int printf(const char* anonymous_var_nameX46, ...);

int fprintf(struct _IO_FILE* anonymous_var_nameX47, const char* anonymous_var_nameX48, ...);

int sprintf(char* anonymous_var_nameX49, const char* anonymous_var_nameX50, ...);

int snprintf(char* anonymous_var_nameX51, unsigned long int anonymous_var_nameX52, const char* anonymous_var_nameX53, ...);

int vprintf(const char* anonymous_var_nameX54, va_list anonymous_var_nameX55);

int vfprintf(struct _IO_FILE* anonymous_var_nameX56, const char* anonymous_var_nameX57, va_list anonymous_var_nameX58);

int vsprintf(char* anonymous_var_nameX59, const char* anonymous_var_nameX60, va_list anonymous_var_nameX61);

int vsnprintf(char* anonymous_var_nameX62, unsigned long int anonymous_var_nameX63, const char* anonymous_var_nameX64, va_list anonymous_var_nameX65);

int scanf(const char* anonymous_var_nameX66, ...);

int fscanf(struct _IO_FILE* anonymous_var_nameX67, const char* anonymous_var_nameX68, ...);

int sscanf(const char* anonymous_var_nameX69, const char* anonymous_var_nameX70, ...);

int vscanf(const char* anonymous_var_nameX71, va_list anonymous_var_nameX72);

int vfscanf(struct _IO_FILE* anonymous_var_nameX73, const char* anonymous_var_nameX74, va_list anonymous_var_nameX75);

int vsscanf(const char* anonymous_var_nameX76, const char* anonymous_var_nameX77, va_list anonymous_var_nameX78);

void perror(const char* anonymous_var_nameX79);

int setvbuf(struct _IO_FILE* anonymous_var_nameX80, char* anonymous_var_nameX81, int anonymous_var_nameX82, unsigned long int anonymous_var_nameX83);

void setbuf(struct _IO_FILE* anonymous_var_nameX84, char* anonymous_var_nameX85);

char* tmpnam(char* anonymous_var_nameX86);

struct _IO_FILE* tmpfile();

struct _IO_FILE* fmemopen(void* anonymous_var_nameX87, unsigned long int anonymous_var_nameX88, const char* anonymous_var_nameX89);

struct _IO_FILE* open_memstream(char** anonymous_var_nameX90, unsigned long int* anonymous_var_nameX91);

struct _IO_FILE* fdopen(int anonymous_var_nameX92, const char* anonymous_var_nameX93);

struct _IO_FILE* popen(const char* anonymous_var_nameX94, const char* anonymous_var_nameX95);

int pclose(struct _IO_FILE* anonymous_var_nameX96);

int fileno(struct _IO_FILE* anonymous_var_nameX97);

int fseeko(struct _IO_FILE* anonymous_var_nameX98, long anonymous_var_nameX99, int anonymous_var_nameX100);

long ftello(struct _IO_FILE* anonymous_var_nameX101);

int dprintf(int anonymous_var_nameX102, const char* anonymous_var_nameX103, ...);

int vdprintf(int anonymous_var_nameX104, const char* anonymous_var_nameX105, va_list anonymous_var_nameX106);

void flockfile(struct _IO_FILE* anonymous_var_nameX107);

int ftrylockfile(struct _IO_FILE* anonymous_var_nameX108);

void funlockfile(struct _IO_FILE* anonymous_var_nameX109);

int getc_unlocked(struct _IO_FILE* anonymous_var_nameX110);

int getchar_unlocked();

int putc_unlocked(int anonymous_var_nameX111, struct _IO_FILE* anonymous_var_nameX112);

int putchar_unlocked(int anonymous_var_nameX113);

long getdelim(char** anonymous_var_nameX114, unsigned long int* anonymous_var_nameX115, int anonymous_var_nameX116, struct _IO_FILE* anonymous_var_nameX117);

long getline(char** anonymous_var_nameX118, unsigned long int* anonymous_var_nameX119, struct _IO_FILE* anonymous_var_nameX120);

int renameat(int anonymous_var_nameX121, const char* anonymous_var_nameX122, int anonymous_var_nameX123, const char* anonymous_var_nameX124);

char* tempnam(const char* anonymous_var_nameX126, const char* anonymous_var_nameX127);

char* cuserid(char* anonymous_var_nameX128);

void setlinebuf(struct _IO_FILE* anonymous_var_nameX129);

void setbuffer(struct _IO_FILE* anonymous_var_nameX130, char* anonymous_var_nameX131, unsigned long int anonymous_var_nameX132);

int fgetc_unlocked(struct _IO_FILE* anonymous_var_nameX133);

int fputc_unlocked(int anonymous_var_nameX134, struct _IO_FILE* anonymous_var_nameX135);

int fflush_unlocked(struct _IO_FILE* anonymous_var_nameX136);

unsigned long int fread_unlocked(void* anonymous_var_nameX137, unsigned long int anonymous_var_nameX138, unsigned long int anonymous_var_nameX139, struct _IO_FILE* anonymous_var_nameX140);

unsigned long int fwrite_unlocked(const void* anonymous_var_nameX141, unsigned long int anonymous_var_nameX142, unsigned long int anonymous_var_nameX143, struct _IO_FILE* anonymous_var_nameX144);

void clearerr_unlocked(struct _IO_FILE* anonymous_var_nameX145);

int feof_unlocked(struct _IO_FILE* anonymous_var_nameX146);

int ferror_unlocked(struct _IO_FILE* anonymous_var_nameX147);

int fileno_unlocked(struct _IO_FILE* anonymous_var_nameX148);

int getw(struct _IO_FILE* anonymous_var_nameX149);

int putw(int anonymous_var_nameX150, struct _IO_FILE* anonymous_var_nameX151);

char* fgetln(struct _IO_FILE* anonymous_var_nameX152, unsigned long int* anonymous_var_nameX153);

int asprintf(char** anonymous_var_nameX154, const char* anonymous_var_nameX155, ...);

int vasprintf(char** anonymous_var_nameX156, const char* anonymous_var_nameX157, va_list anonymous_var_nameX158);

char* fgets_unlocked(char* anonymous_var_nameX159, int anonymous_var_nameX160, struct _IO_FILE* anonymous_var_nameX161);

int fputs_unlocked(const char* anonymous_var_nameX162, struct _IO_FILE* anonymous_var_nameX163);

struct _IO_FILE* fopencookie(void* anonymous_var_nameX174, const char* anonymous_var_nameX175, struct _IO_cookie_io_functions_t anonymous_var_nameX176);

int atoi(const char* anonymous_var_nameX177);

long atol(const char* anonymous_var_nameX178);

long long atoll(const char* anonymous_var_nameX179);

double atof(const char* anonymous_var_nameX180);

float strtof(const char* anonymous_var_nameX181, char** anonymous_var_nameX182);

double strtod(const char* anonymous_var_nameX183, char** anonymous_var_nameX184);

long double strtold(const char* anonymous_var_nameX185, char** anonymous_var_nameX186);

long strtol(const char* anonymous_var_nameX187, char** anonymous_var_nameX188, int anonymous_var_nameX189);

unsigned long int strtoul(const char* anonymous_var_nameX190, char** anonymous_var_nameX191, int anonymous_var_nameX192);

long long strtoll(const char* anonymous_var_nameX193, char** anonymous_var_nameX194, int anonymous_var_nameX195);

unsigned long long strtoull(const char* anonymous_var_nameX196, char** anonymous_var_nameX197, int anonymous_var_nameX198);

int rand();

void srand(unsigned int anonymous_var_nameX199);

void* malloc(unsigned long int anonymous_var_nameX200);

void* calloc(unsigned long int anonymous_var_nameX201, unsigned long int anonymous_var_nameX202);

void* realloc(void* anonymous_var_nameX203, unsigned long int anonymous_var_nameX204);

void free(void* anonymous_var_nameX205);

void* aligned_alloc(unsigned long int anonymous_var_nameX206, unsigned long int anonymous_var_nameX207);

void abort();

int atexit(void (*anonymous_lambda_var_nameZ1)());

void exit(int anonymous_var_nameX208);

void _Exit(int anonymous_var_nameX209);

int at_quick_exit(void (*anonymous_lambda_var_nameZ2)());

void quick_exit(int anonymous_var_nameX210);

char* getenv(const char* anonymous_var_nameX211);

int system(const char* anonymous_var_nameX212);

void* bsearch(const void* anonymous_var_nameX213, const void* anonymous_var_nameX214, unsigned long int anonymous_var_nameX215, unsigned long int anonymous_var_nameX216, int (*anonymous_lambda_var_nameZ3)(const void*,const void*));

void qsort(void* anonymous_var_nameX219, unsigned long int anonymous_var_nameX220, unsigned long int anonymous_var_nameX221, int (*anonymous_lambda_var_nameZ4)(const void*,const void*));

int abs(int anonymous_var_nameX224);

long labs(long anonymous_var_nameX225);

long long llabs(long long anonymous_var_nameX226);

struct anonymous_typeX1 div(int anonymous_var_nameX227, int anonymous_var_nameX228);

struct anonymous_typeX2 ldiv(long anonymous_var_nameX229, long anonymous_var_nameX230);

struct anonymous_typeX3 lldiv(long long anonymous_var_nameX231, long long anonymous_var_nameX232);

int mblen(const char* anonymous_var_nameX233, unsigned long int anonymous_var_nameX234);

int mbtowc(unsigned int* anonymous_var_nameX235, const char* anonymous_var_nameX236, unsigned long int anonymous_var_nameX237);

int wctomb(char* anonymous_var_nameX238, unsigned int anonymous_var_nameX239);

unsigned long int mbstowcs(unsigned int* anonymous_var_nameX240, const char* anonymous_var_nameX241, unsigned long int anonymous_var_nameX242);

unsigned long int wcstombs(char* anonymous_var_nameX243, const unsigned int* anonymous_var_nameX244, unsigned long int anonymous_var_nameX245);

unsigned long int __ctype_get_mb_cur_max();

int posix_memalign(void** anonymous_var_nameX246, unsigned long int anonymous_var_nameX247, unsigned long int anonymous_var_nameX248);

int setenv(const char* anonymous_var_nameX249, const char* anonymous_var_nameX250, int anonymous_var_nameX251);

int unsetenv(const char* anonymous_var_nameX252);

int mkstemp(char* anonymous_var_nameX253);

int mkostemp(char* anonymous_var_nameX254, int anonymous_var_nameX255);

char* mkdtemp(char* anonymous_var_nameX256);

int getsubopt(char** anonymous_var_nameX257, char** anonymous_var_nameX258, char** anonymous_var_nameX259);

int rand_r(unsigned int* anonymous_var_nameX260);

char* realpath(const char* anonymous_var_nameX261, char* anonymous_var_nameX262);

long int random();

void srandom(unsigned int anonymous_var_nameX263);

char* initstate(unsigned int anonymous_var_nameX264, char* anonymous_var_nameX265, unsigned long int anonymous_var_nameX266);

char* setstate(char* anonymous_var_nameX267);

int putenv(char* anonymous_var_nameX268);

int posix_openpt(int anonymous_var_nameX269);

int grantpt(int anonymous_var_nameX270);

int unlockpt(int anonymous_var_nameX271);

char* ptsname(int anonymous_var_nameX272);

char* l64a(long anonymous_var_nameX273);

long a64l(const char* anonymous_var_nameX274);

void setkey(const char* anonymous_var_nameX275);

double drand48();

double erand48(unsigned short int anonymous_var_nameX276[3]);

long int lrand48();

long int nrand48(unsigned short int anonymous_var_nameX277[3]);

long mrand48();

long jrand48(unsigned short int anonymous_var_nameX278[3]);

void srand48(long anonymous_var_nameX279);

unsigned short int* seed48(unsigned short int anonymous_var_nameX280[3]);

void lcong48(unsigned short int anonymous_var_nameX281[7]);

void* alloca(unsigned long int anonymous_var_nameX282);

char* mktemp(char* anonymous_var_nameX283);

int mkstemps(char* anonymous_var_nameX284, int anonymous_var_nameX285);

int mkostemps(char* anonymous_var_nameX286, int anonymous_var_nameX287, int anonymous_var_nameX288);

void* valloc(unsigned long int anonymous_var_nameX289);

void* memalign(unsigned long int anonymous_var_nameX290, unsigned long int anonymous_var_nameX291);

int getloadavg(double* anonymous_var_nameX292, int anonymous_var_nameX293);

int clearenv();

void* reallocarray(void* anonymous_var_nameX294, unsigned long int anonymous_var_nameX295, unsigned long int anonymous_var_nameX296);

void qsort_r(void* anonymous_var_nameX297, unsigned long int anonymous_var_nameX298, unsigned long int anonymous_var_nameX299, int (*anonymous_lambda_var_nameZ5)(const void*,const void*,void*), void* anonymous_var_nameX303);

int ptsname_r(int anonymous_var_nameX304, char* anonymous_var_nameX305, unsigned long int anonymous_var_nameX306);

char* ecvt(double anonymous_var_nameX307, int anonymous_var_nameX308, int* anonymous_var_nameX309, int* anonymous_var_nameX310);

char* fcvt(double anonymous_var_nameX311, int anonymous_var_nameX312, int* anonymous_var_nameX313, int* anonymous_var_nameX314);

char* gcvt(double anonymous_var_nameX315, int anonymous_var_nameX316, char* anonymous_var_nameX317);

char* secure_getenv(const char* anonymous_var_nameX318);

float strtof_l(const char* anonymous_var_nameX319, char** anonymous_var_nameX320, struct __locale_struct* anonymous_var_nameX321);

double strtod_l(const char* anonymous_var_nameX322, char** anonymous_var_nameX323, struct __locale_struct* anonymous_var_nameX324);

long double strtold_l(const char* anonymous_var_nameX325, char** anonymous_var_nameX326, struct __locale_struct* anonymous_var_nameX327);

void* memcpy(void* anonymous_var_nameX328, const void* anonymous_var_nameX329, unsigned long int anonymous_var_nameX330);

void* memmove(void* anonymous_var_nameX331, const void* anonymous_var_nameX332, unsigned long int anonymous_var_nameX333);

void* memset(void* anonymous_var_nameX334, int anonymous_var_nameX335, unsigned long int anonymous_var_nameX336);

int memcmp(const void* anonymous_var_nameX337, const void* anonymous_var_nameX338, unsigned long int anonymous_var_nameX339);

void* memchr(const void* anonymous_var_nameX340, int anonymous_var_nameX341, unsigned long int anonymous_var_nameX342);

char* strcpy(char* anonymous_var_nameX343, const char* anonymous_var_nameX344);

char* strncpy(char* anonymous_var_nameX345, const char* anonymous_var_nameX346, unsigned long int anonymous_var_nameX347);

char* strcat(char* anonymous_var_nameX348, const char* anonymous_var_nameX349);

char* strncat(char* anonymous_var_nameX350, const char* anonymous_var_nameX351, unsigned long int anonymous_var_nameX352);

int strcmp(const char* anonymous_var_nameX353, const char* anonymous_var_nameX354);

int strncmp(const char* anonymous_var_nameX355, const char* anonymous_var_nameX356, unsigned long int anonymous_var_nameX357);

int strcoll(const char* anonymous_var_nameX358, const char* anonymous_var_nameX359);

unsigned long int strxfrm(char* anonymous_var_nameX360, const char* anonymous_var_nameX361, unsigned long int anonymous_var_nameX362);

char* strchr(const char* anonymous_var_nameX363, int anonymous_var_nameX364);

char* strrchr(const char* anonymous_var_nameX365, int anonymous_var_nameX366);

unsigned long int strcspn(const char* anonymous_var_nameX367, const char* anonymous_var_nameX368);

unsigned long int strspn(const char* anonymous_var_nameX369, const char* anonymous_var_nameX370);

char* strpbrk(const char* anonymous_var_nameX371, const char* anonymous_var_nameX372);

char* strstr(const char* anonymous_var_nameX373, const char* anonymous_var_nameX374);

char* strtok(char* anonymous_var_nameX375, const char* anonymous_var_nameX376);

unsigned long int strlen(const char* anonymous_var_nameX377);

char* strerror(int anonymous_var_nameX378);

int bcmp(const void* anonymous_var_nameX379, const void* anonymous_var_nameX380, unsigned long int anonymous_var_nameX381);

void bcopy(const void* anonymous_var_nameX382, void* anonymous_var_nameX383, unsigned long int anonymous_var_nameX384);

void bzero(void* anonymous_var_nameX385, unsigned long int anonymous_var_nameX386);

char* index(const char* anonymous_var_nameX387, int anonymous_var_nameX388);

char* rindex(const char* anonymous_var_nameX389, int anonymous_var_nameX390);

int ffs(int anonymous_var_nameX391);

int ffsl(long anonymous_var_nameX392);

int ffsll(long long anonymous_var_nameX393);

int strcasecmp(const char* anonymous_var_nameX394, const char* anonymous_var_nameX395);

int strncasecmp(const char* anonymous_var_nameX396, const char* anonymous_var_nameX397, unsigned long int anonymous_var_nameX398);

int strcasecmp_l(const char* anonymous_var_nameX399, const char* anonymous_var_nameX400, struct __locale_struct* anonymous_var_nameX401);

int strncasecmp_l(const char* anonymous_var_nameX402, const char* anonymous_var_nameX403, unsigned long int anonymous_var_nameX404, struct __locale_struct* anonymous_var_nameX405);

char* strtok_r(char* anonymous_var_nameX406, const char* anonymous_var_nameX407, char** anonymous_var_nameX408);

int strerror_r(int anonymous_var_nameX409, char* anonymous_var_nameX410, unsigned long int anonymous_var_nameX411);

char* stpcpy(char* anonymous_var_nameX412, const char* anonymous_var_nameX413);

char* stpncpy(char* anonymous_var_nameX414, const char* anonymous_var_nameX415, unsigned long int anonymous_var_nameX416);

unsigned long int strnlen(const char* anonymous_var_nameX417, unsigned long int anonymous_var_nameX418);

char* strdup(const char* anonymous_var_nameX419);

char* strndup(const char* anonymous_var_nameX420, unsigned long int anonymous_var_nameX421);

char* strsignal(int anonymous_var_nameX422);

char* strerror_l(int anonymous_var_nameX423, struct __locale_struct* anonymous_var_nameX424);

int strcoll_l(const char* anonymous_var_nameX425, const char* anonymous_var_nameX426, struct __locale_struct* anonymous_var_nameX427);

unsigned long int strxfrm_l(char* anonymous_var_nameX428, const char* anonymous_var_nameX429, unsigned long int anonymous_var_nameX430, struct __locale_struct* anonymous_var_nameX431);

void* memmem(const void* anonymous_var_nameX432, unsigned long int anonymous_var_nameX433, const void* anonymous_var_nameX434, unsigned long int anonymous_var_nameX435);

void* memccpy(void* anonymous_var_nameX436, const void* anonymous_var_nameX437, int anonymous_var_nameX438, unsigned long int anonymous_var_nameX439);

char* strsep(char** anonymous_var_nameX440, const char* anonymous_var_nameX441);

unsigned long int strlcat(char* anonymous_var_nameX442, const char* anonymous_var_nameX443, unsigned long int anonymous_var_nameX444);

unsigned long int strlcpy(char* anonymous_var_nameX445, const char* anonymous_var_nameX446, unsigned long int anonymous_var_nameX447);

void explicit_bzero(void* anonymous_var_nameX448, unsigned long int anonymous_var_nameX449);

int strverscmp(const char* anonymous_var_nameX450, const char* anonymous_var_nameX451);

char* strchrnul(const char* anonymous_var_nameX452, int anonymous_var_nameX453);

char* strcasestr(const char* anonymous_var_nameX454, const char* anonymous_var_nameX455);

void* memrchr(const void* anonymous_var_nameX456, int anonymous_var_nameX457, unsigned long int anonymous_var_nameX458);

void* mempcpy(void* anonymous_var_nameX459, const void* anonymous_var_nameX460, unsigned long int anonymous_var_nameX461);

char* basename();

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

void* come_calloc(unsigned long int count, unsigned long int size, char* sname, int sline, char* class_name);

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

struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long int size);

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

unsigned long int size_t_clone(long self);

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

char* size_t_to_string(unsigned long int self);

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

struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);

_Bool sNodeBase_terminated(struct sNodeBase* self);

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

void add_come_code_at_source_head2(struct sInfo* info, const char* msg, ...);

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

struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);

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

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

struct sNode* expression_node_v96(struct sInfo* info);

struct sNode* parse_tuple(struct sInfo* info);

struct sNode* parse_array_initializer(struct sInfo* info);

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

struct sNode* create_null_node(struct sInfo* info);

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

struct sNode* string_node_v17(char* buf, char* head, int head_sline, struct sInfo* info);

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

int pipe(int anonymous_var_nameX517[2]);

int pipe2(int anonymous_var_nameX518[2], int anonymous_var_nameX519);

int close(int anonymous_var_nameX520);

int posix_close(int anonymous_var_nameX521, int anonymous_var_nameX522);

int dup(int anonymous_var_nameX523);

int dup2(int anonymous_var_nameX524, int anonymous_var_nameX525);

int dup3(int anonymous_var_nameX526, int anonymous_var_nameX527, int anonymous_var_nameX528);

long lseek(int anonymous_var_nameX529, long anonymous_var_nameX530, int anonymous_var_nameX531);

int fsync(int anonymous_var_nameX532);

int fdatasync(int anonymous_var_nameX533);

long read(int anonymous_var_nameX534, void* anonymous_var_nameX535, unsigned long int anonymous_var_nameX536);

long write(int anonymous_var_nameX537, const void* anonymous_var_nameX538, unsigned long int anonymous_var_nameX539);

long pread(int anonymous_var_nameX540, void* anonymous_var_nameX541, unsigned long int anonymous_var_nameX542, long anonymous_var_nameX543);

long pwrite(int anonymous_var_nameX544, const void* anonymous_var_nameX545, unsigned long int anonymous_var_nameX546, long anonymous_var_nameX547);

int chown(const char* anonymous_var_nameX548, unsigned int anonymous_var_nameX549, unsigned int anonymous_var_nameX550);

int fchown(int anonymous_var_nameX551, unsigned int anonymous_var_nameX552, unsigned int anonymous_var_nameX553);

int lchown(const char* anonymous_var_nameX554, unsigned int anonymous_var_nameX555, unsigned int anonymous_var_nameX556);

int fchownat(int anonymous_var_nameX557, const char* anonymous_var_nameX558, unsigned int anonymous_var_nameX559, unsigned int anonymous_var_nameX560, int anonymous_var_nameX561);

int link(const char* anonymous_var_nameX562, const char* anonymous_var_nameX563);

int linkat(int anonymous_var_nameX564, const char* anonymous_var_nameX565, int anonymous_var_nameX566, const char* anonymous_var_nameX567, int anonymous_var_nameX568);

int symlink(const char* anonymous_var_nameX569, const char* anonymous_var_nameX570);

int symlinkat(const char* anonymous_var_nameX571, int anonymous_var_nameX572, const char* anonymous_var_nameX573);

long readlink(const char* anonymous_var_nameX574, char* anonymous_var_nameX575, unsigned long int anonymous_var_nameX576);

long readlinkat(int anonymous_var_nameX577, const char* anonymous_var_nameX578, char* anonymous_var_nameX579, unsigned long int anonymous_var_nameX580);

int unlink(const char* anonymous_var_nameX581);

int unlinkat(int anonymous_var_nameX582, const char* anonymous_var_nameX583, int anonymous_var_nameX584);

int rmdir(const char* anonymous_var_nameX585);

int truncate(const char* anonymous_var_nameX586, long anonymous_var_nameX587);

int ftruncate(int anonymous_var_nameX588, long anonymous_var_nameX589);

int access(const char* anonymous_var_nameX590, int anonymous_var_nameX591);

int faccessat(int anonymous_var_nameX592, const char* anonymous_var_nameX593, int anonymous_var_nameX594, int anonymous_var_nameX595);

int chdir(const char* anonymous_var_nameX596);

int fchdir(int anonymous_var_nameX597);

char* getcwd(char* anonymous_var_nameX598, unsigned long int anonymous_var_nameX599);

unsigned int alarm(unsigned int anonymous_var_nameX600);

unsigned int sleep(unsigned int anonymous_var_nameX601);

int pause();

int fork();

int _Fork();

int execve(const char* anonymous_var_nameX602, char* anonymous_var_nameX603[], char* anonymous_var_nameX604[]);

int execv(const char* anonymous_var_nameX605, char* anonymous_var_nameX606[]);

int execle(const char* anonymous_var_nameX607, const char* anonymous_var_nameX608, ...);

int execl(const char* anonymous_var_nameX609, const char* anonymous_var_nameX610, ...);

int execvp(const char* anonymous_var_nameX611, char* anonymous_var_nameX612[]);

int execlp(const char* anonymous_var_nameX613, const char* anonymous_var_nameX614, ...);

int fexecve(int anonymous_var_nameX615, char* anonymous_var_nameX616[], char* anonymous_var_nameX617[]);

void _exit(int anonymous_var_nameX618);

int getpid();

int getppid();

int getpgrp();

int getpgid(int anonymous_var_nameX619);

int setpgid(int anonymous_var_nameX620, int anonymous_var_nameX621);

int setsid();

int getsid(int anonymous_var_nameX622);

char* ttyname(int anonymous_var_nameX623);

int ttyname_r(int anonymous_var_nameX624, char* anonymous_var_nameX625, unsigned long int anonymous_var_nameX626);

int isatty(int anonymous_var_nameX627);

int tcgetpgrp(int anonymous_var_nameX628);

int tcsetpgrp(int anonymous_var_nameX629, int anonymous_var_nameX630);

unsigned int getuid();

unsigned int geteuid();

unsigned int getgid();

unsigned int getegid();

int getgroups(int anonymous_var_nameX631, unsigned int anonymous_var_nameX632[]);

int setuid(unsigned int anonymous_var_nameX633);

int seteuid(unsigned int anonymous_var_nameX634);

int setgid(unsigned int anonymous_var_nameX635);

int setegid(unsigned int anonymous_var_nameX636);

char* getlogin();

int getlogin_r(char* anonymous_var_nameX637, unsigned long int anonymous_var_nameX638);

int gethostname(char* anonymous_var_nameX639, unsigned long int anonymous_var_nameX640);

char* ctermid(char* anonymous_var_nameX641);

int getopt(int anonymous_var_nameX642, char* anonymous_var_nameX643[], const char* anonymous_var_nameX644);

long pathconf(const char* anonymous_var_nameX645, int anonymous_var_nameX646);

long fpathconf(int anonymous_var_nameX647, int anonymous_var_nameX648);

long sysconf(int anonymous_var_nameX649);

unsigned long int confstr(int anonymous_var_nameX650, char* anonymous_var_nameX651, unsigned long int anonymous_var_nameX652);

int setreuid(unsigned int anonymous_var_nameX653, unsigned int anonymous_var_nameX654);

int setregid(unsigned int anonymous_var_nameX655, unsigned int anonymous_var_nameX656);

int lockf(int anonymous_var_nameX657, int anonymous_var_nameX658, long anonymous_var_nameX659);

long gethostid();

int nice(int anonymous_var_nameX660);

void sync();

int setpgrp();

char* crypt(const char* anonymous_var_nameX661, const char* anonymous_var_nameX662);

void encrypt(char* anonymous_var_nameX663, int anonymous_var_nameX664);

void swab(const void* anonymous_var_nameX665, void* anonymous_var_nameX666, long anonymous_var_nameX667);

int usleep(unsigned int anonymous_var_nameX668);

unsigned int ualarm(unsigned int anonymous_var_nameX669, unsigned int anonymous_var_nameX670);

int brk(void* anonymous_var_nameX671);

void* sbrk(long anonymous_var_nameX672);

int vfork();

int vhangup();

int chroot(const char* anonymous_var_nameX673);

int getpagesize();

int getdtablesize();

int sethostname(const char* anonymous_var_nameX674, unsigned long int anonymous_var_nameX675);

int getdomainname(char* anonymous_var_nameX676, unsigned long int anonymous_var_nameX677);

int setdomainname(const char* anonymous_var_nameX678, unsigned long int anonymous_var_nameX679);

int setgroups(unsigned long int anonymous_var_nameX680, const unsigned int* anonymous_var_nameX681);

char* getpass(const char* anonymous_var_nameX682);

int daemon(int anonymous_var_nameX683, int anonymous_var_nameX684);

void setusershell();

void endusershell();

char* getusershell();

int acct(const char* anonymous_var_nameX685);

long syscall(long anonymous_var_nameX686, ...);

int execvpe(const char* anonymous_var_nameX687, char* anonymous_var_nameX688[], char* anonymous_var_nameX689[]);

int issetugid();

int getentropy(void* anonymous_var_nameX690, unsigned long int anonymous_var_nameX691);

int setresuid(unsigned int anonymous_var_nameX692, unsigned int anonymous_var_nameX693, unsigned int anonymous_var_nameX694);

int setresgid(unsigned int anonymous_var_nameX695, unsigned int anonymous_var_nameX696, unsigned int anonymous_var_nameX697);

int getresuid(unsigned int* anonymous_var_nameX698, unsigned int* anonymous_var_nameX699, unsigned int* anonymous_var_nameX700);

int getresgid(unsigned int* anonymous_var_nameX701, unsigned int* anonymous_var_nameX702, unsigned int* anonymous_var_nameX703);

char* get_current_dir_name();

int syncfs(int anonymous_var_nameX704);

int euidaccess(const char* anonymous_var_nameX705, int anonymous_var_nameX706);

int eaccess(const char* anonymous_var_nameX707, int anonymous_var_nameX708);

long copy_file_range(int anonymous_var_nameX709, long* anonymous_var_nameX710, int anonymous_var_nameX711, long* anonymous_var_nameX712, unsigned long int anonymous_var_nameX713, unsigned int anonymous_var_nameX714);

int gettid();

int select(int anonymous_var_nameX715, struct anonymous_typeX23* anonymous_var_nameX716, struct anonymous_typeX23* anonymous_var_nameX717, struct anonymous_typeX23* anonymous_var_nameX718, struct timeval* anonymous_var_nameX719);

int pselect(int anonymous_var_nameX720, struct anonymous_typeX23* anonymous_var_nameX721, struct anonymous_typeX23* anonymous_var_nameX722, struct anonymous_typeX23* anonymous_var_nameX723, const struct timespec* anonymous_var_nameX724, const struct __sigset_t* anonymous_var_nameX725);

int stat(const char* anonymous_var_nameX726, struct stat* anonymous_var_nameX727);

int fstat(int anonymous_var_nameX728, struct stat* anonymous_var_nameX729);

int lstat(const char* anonymous_var_nameX730, struct stat* anonymous_var_nameX731);

int fstatat(int anonymous_var_nameX732, const char* anonymous_var_nameX733, struct stat* anonymous_var_nameX734, int anonymous_var_nameX735);

int chmod(const char* anonymous_var_nameX736, unsigned int anonymous_var_nameX737);

int fchmod(int anonymous_var_nameX738, unsigned int anonymous_var_nameX739);

int fchmodat(int anonymous_var_nameX740, const char* anonymous_var_nameX741, unsigned int anonymous_var_nameX742, int anonymous_var_nameX743);

unsigned int umask(unsigned int anonymous_var_nameX744);

int mkdir(const char* anonymous_var_nameX745, unsigned int anonymous_var_nameX746);

int mkfifo(const char* anonymous_var_nameX747, unsigned int anonymous_var_nameX748);

int mkdirat(int anonymous_var_nameX749, const char* anonymous_var_nameX750, unsigned int anonymous_var_nameX751);

int mkfifoat(int anonymous_var_nameX752, const char* anonymous_var_nameX753, unsigned int anonymous_var_nameX754);

int mknod(const char* anonymous_var_nameX755, unsigned int anonymous_var_nameX756, unsigned long int anonymous_var_nameX757);

int mknodat(int anonymous_var_nameX758, const char* anonymous_var_nameX759, unsigned int anonymous_var_nameX760, unsigned long int anonymous_var_nameX761);

int futimens(int anonymous_var_nameX762, const struct timespec anonymous_var_nameX763[2]);

int utimensat(int anonymous_var_nameX764, const char* anonymous_var_nameX765, const struct timespec anonymous_var_nameX766[2], int anonymous_var_nameX767);

int lchmod(const char* anonymous_var_nameX768, unsigned int anonymous_var_nameX769);

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
static inline _Bool die(char* msg){
void* __result_obj__;
_Bool __result1__;
memset(&__result_obj__, 0, sizeof(void*));
    (come_push_stackframe("./neo-c.h", 51,0),perror(msg),come_pop_stackframe());
    (come_push_stackframe("./neo-c.h", 52,1),stackframe(),come_pop_stackframe());
    (come_push_stackframe("./neo-c.h", 53,2),exit(4),come_pop_stackframe());
    __result1__ = (_Bool)0;
    return __result1__;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long int len){
void* __result_obj__;
void* right_value0;
void* right_value1;
struct buffer* __exception_result_var_b1;
struct buffer* result_0;
struct buffer* __exception_result_var_b2;
struct buffer* __result2__;
memset(&__result_obj__, 0, sizeof(void*));
right_value0 = (void*)0;
right_value1 = (void*)0;
memset(&result_0, 0, sizeof(struct buffer*));
    result_0=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 1903, 4),__exception_result_var_b1=((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1903, "buffer"))), "./neo-c.h", 1903, 3)))))), come_pop_stackframe(), __exception_result_var_b1));
    come_call_finalizer3(right_value0,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value1,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("./neo-c.h", 1904, 7),__exception_result_var_b2=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_0, "./neo-c.h", 1904, 5)), "./neo-c.h", 1904, 6)),self,sizeof(char)*len), come_pop_stackframe(), __exception_result_var_b2);
    __result2__ = __result_obj__ = result_0;
    come_call_finalizer3(result_0,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result2__;
    come_call_finalizer3(result_0,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* shortpa_to_buffer(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value2;
void* right_value3;
struct buffer* __exception_result_var_b3;
struct buffer* result_1;
struct buffer* __exception_result_var_b4;
struct buffer* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
right_value2 = (void*)0;
right_value3 = (void*)0;
memset(&result_1, 0, sizeof(struct buffer*));
    result_1=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 1910, 9),__exception_result_var_b3=((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1910, "buffer"))), "./neo-c.h", 1910, 8)))))), come_pop_stackframe(), __exception_result_var_b3));
    come_call_finalizer3(right_value2,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value3,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("./neo-c.h", 1911, 12),__exception_result_var_b4=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_1, "./neo-c.h", 1911, 10)), "./neo-c.h", 1911, 11)),(char*)self,sizeof(short short)*len), come_pop_stackframe(), __exception_result_var_b4);
    __result3__ = __result_obj__ = result_1;
    come_call_finalizer3(result_1,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result3__;
    come_call_finalizer3(result_1,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long int len){
void* __result_obj__;
void* right_value4;
void* right_value5;
struct buffer* __exception_result_var_b5;
struct buffer* result_2;
struct buffer* __exception_result_var_b6;
struct buffer* __result4__;
memset(&__result_obj__, 0, sizeof(void*));
right_value4 = (void*)0;
right_value5 = (void*)0;
memset(&result_2, 0, sizeof(struct buffer*));
    result_2=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 1917, 14),__exception_result_var_b5=((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1917, "buffer"))), "./neo-c.h", 1917, 13)))))), come_pop_stackframe(), __exception_result_var_b5));
    come_call_finalizer3(right_value4,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value5,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("./neo-c.h", 1918, 17),__exception_result_var_b6=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_2, "./neo-c.h", 1918, 15)), "./neo-c.h", 1918, 16)),(char*)self,sizeof(int)*len), come_pop_stackframe(), __exception_result_var_b6);
    __result4__ = __result_obj__ = result_2;
    come_call_finalizer3(result_2,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result4__;
    come_call_finalizer3(result_2,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long int len){
void* __result_obj__;
void* right_value6;
void* right_value7;
struct buffer* __exception_result_var_b7;
struct buffer* result_3;
struct buffer* __exception_result_var_b8;
struct buffer* __result5__;
memset(&__result_obj__, 0, sizeof(void*));
right_value6 = (void*)0;
right_value7 = (void*)0;
memset(&result_3, 0, sizeof(struct buffer*));
    result_3=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 1924, 19),__exception_result_var_b7=((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1924, "buffer"))), "./neo-c.h", 1924, 18)))))), come_pop_stackframe(), __exception_result_var_b7));
    come_call_finalizer3(right_value6,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value7,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("./neo-c.h", 1925, 22),__exception_result_var_b8=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_3, "./neo-c.h", 1925, 20)), "./neo-c.h", 1925, 21)),(char*)self,sizeof(long)*len), come_pop_stackframe(), __exception_result_var_b8);
    __result5__ = __result_obj__ = result_3;
    come_call_finalizer3(result_3,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result5__;
    come_call_finalizer3(result_3,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long int len){
void* __result_obj__;
void* right_value8;
void* right_value9;
struct buffer* __exception_result_var_b9;
struct buffer* result_4;
struct buffer* __exception_result_var_b10;
struct buffer* __result6__;
memset(&__result_obj__, 0, sizeof(void*));
right_value8 = (void*)0;
right_value9 = (void*)0;
memset(&result_4, 0, sizeof(struct buffer*));
    result_4=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 1931, 24),__exception_result_var_b9=((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1931, "buffer"))), "./neo-c.h", 1931, 23)))))), come_pop_stackframe(), __exception_result_var_b9));
    come_call_finalizer3(right_value8,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value9,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("./neo-c.h", 1932, 27),__exception_result_var_b10=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_4, "./neo-c.h", 1932, 25)), "./neo-c.h", 1932, 26)),(char*)self,sizeof(float)*len), come_pop_stackframe(), __exception_result_var_b10);
    __result6__ = __result_obj__ = result_4;
    come_call_finalizer3(result_4,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result6__;
    come_call_finalizer3(result_4,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long int len){
void* __result_obj__;
void* right_value10;
void* right_value11;
struct buffer* __exception_result_var_b11;
struct buffer* result_5;
struct buffer* __exception_result_var_b12;
struct buffer* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
right_value11 = (void*)0;
memset(&result_5, 0, sizeof(struct buffer*));
    result_5=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 1938, 29),__exception_result_var_b11=((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1938, "buffer"))), "./neo-c.h", 1938, 28)))))), come_pop_stackframe(), __exception_result_var_b11));
    come_call_finalizer3(right_value10,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value11,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("./neo-c.h", 1939, 32),__exception_result_var_b12=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_5, "./neo-c.h", 1939, 30)), "./neo-c.h", 1939, 31)),(char*)self,sizeof(double)*len), come_pop_stackframe(), __exception_result_var_b12);
    __result7__ = __result_obj__ = result_5;
    come_call_finalizer3(result_5,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result7__;
    come_call_finalizer3(result_5,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__;
void* right_value12;
struct smart_pointer$1char* result_6;
struct buffer* __exception_result_var_b13;
void* right_value13;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
right_value12 = (void*)0;
memset(&result_6, 0, sizeof(struct smart_pointer$1char*));
right_value13 = (void*)0;
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1954, "smart_pointer$1char"))));
    come_call_finalizer3(right_value12,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj1=((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_6, "./neo-c.h", 1956, 37)), "./neo-c.h", 1956, 38))->memory;
    ((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_6, "./neo-c.h", 1956, 37)), "./neo-c.h", 1956, 38))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=(come_push_stackframe("./neo-c.h", 1956, 39),__exception_result_var_b13=buffer_clone(self), come_pop_stackframe(), __exception_result_var_b13))));
    come_call_finalizer3(__dec_obj1,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value13,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_6, "./neo-c.h", 1957, 40)), "./neo-c.h", 1957, 41))->p=((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_6, "./neo-c.h", 1957, 42)), "./neo-c.h", 1957, 43))->memory, "./neo-c.h", 1957, 44)), "./neo-c.h", 1957, 45))->buf;
    __result8__ = __result_obj__ = result_6;
    come_call_finalizer3(result_6,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result8__;
    come_call_finalizer3(result_6,smart_pointer$1charp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__;
void* right_value14;
struct smart_pointer$1char* result_7;
struct buffer* __exception_result_var_b14;
void* right_value15;
struct buffer* __dec_obj2;
struct smart_pointer$1char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
right_value14 = (void*)0;
memset(&result_7, 0, sizeof(struct smart_pointer$1char*));
right_value15 = (void*)0;
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1964, "smart_pointer$1char"))));
    come_call_finalizer3(right_value14,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj2=((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_7, "./neo-c.h", 1966, 46)), "./neo-c.h", 1966, 47))->memory;
    ((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_7, "./neo-c.h", 1966, 46)), "./neo-c.h", 1966, 47))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=(come_push_stackframe("./neo-c.h", 1966, 48),__exception_result_var_b14=buffer_clone(self), come_pop_stackframe(), __exception_result_var_b14))));
    come_call_finalizer3(__dec_obj2,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value15,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_7, "./neo-c.h", 1967, 49)), "./neo-c.h", 1967, 50))->p=(char*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_7, "./neo-c.h", 1967, 51)), "./neo-c.h", 1967, 52))->memory, "./neo-c.h", 1967, 53)), "./neo-c.h", 1967, 54))->buf;
    __result9__ = __result_obj__ = result_7;
    come_call_finalizer3(result_7,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result9__;
    come_call_finalizer3(result_7,smart_pointer$1charp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__;
void* right_value16;
struct smart_pointer$1short* result_8;
struct buffer* __exception_result_var_b15;
void* right_value17;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
right_value16 = (void*)0;
memset(&result_8, 0, sizeof(struct smart_pointer$1short*));
right_value17 = (void*)0;
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 1974, "smart_pointer$1short"))));
    come_call_finalizer3(right_value16,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj3=((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(result_8, "./neo-c.h", 1976, 59)), "./neo-c.h", 1976, 60))->memory;
    ((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(result_8, "./neo-c.h", 1976, 59)), "./neo-c.h", 1976, 60))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value17=(come_push_stackframe("./neo-c.h", 1976, 61),__exception_result_var_b15=buffer_clone(self), come_pop_stackframe(), __exception_result_var_b15))));
    come_call_finalizer3(__dec_obj3,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value17,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(result_8, "./neo-c.h", 1977, 62)), "./neo-c.h", 1977, 63))->p=(short short*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(result_8, "./neo-c.h", 1977, 64)), "./neo-c.h", 1977, 65))->memory, "./neo-c.h", 1977, 66)), "./neo-c.h", 1977, 67))->buf;
    __result10__ = __result_obj__ = result_8;
    come_call_finalizer3(result_8,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    return __result10__;
    come_call_finalizer3(result_8,smart_pointer$1shortp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__;
void* right_value18;
struct smart_pointer$1int* result_9;
struct buffer* __exception_result_var_b16;
void* right_value19;
struct buffer* __dec_obj4;
struct smart_pointer$1int* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
right_value18 = (void*)0;
memset(&result_9, 0, sizeof(struct smart_pointer$1int*));
right_value19 = (void*)0;
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 1984, "smart_pointer$1int"))));
    come_call_finalizer3(right_value18,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj4=((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(result_9, "./neo-c.h", 1986, 72)), "./neo-c.h", 1986, 73))->memory;
    ((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(result_9, "./neo-c.h", 1986, 72)), "./neo-c.h", 1986, 73))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=(come_push_stackframe("./neo-c.h", 1986, 74),__exception_result_var_b16=buffer_clone(self), come_pop_stackframe(), __exception_result_var_b16))));
    come_call_finalizer3(__dec_obj4,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value19,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(result_9, "./neo-c.h", 1987, 75)), "./neo-c.h", 1987, 76))->p=(int*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(result_9, "./neo-c.h", 1987, 77)), "./neo-c.h", 1987, 78))->memory, "./neo-c.h", 1987, 79)), "./neo-c.h", 1987, 80))->buf;
    __result11__ = __result_obj__ = result_9;
    come_call_finalizer3(result_9,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    return __result11__;
    come_call_finalizer3(result_9,smart_pointer$1intp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__;
void* right_value20;
struct smart_pointer$1long* result_10;
struct buffer* __exception_result_var_b17;
void* right_value21;
struct buffer* __dec_obj5;
struct smart_pointer$1long* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
right_value20 = (void*)0;
memset(&result_10, 0, sizeof(struct smart_pointer$1long*));
right_value21 = (void*)0;
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 1994, "smart_pointer$1long"))));
    come_call_finalizer3(right_value20,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj5=((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(result_10, "./neo-c.h", 1996, 85)), "./neo-c.h", 1996, 86))->memory;
    ((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(result_10, "./neo-c.h", 1996, 85)), "./neo-c.h", 1996, 86))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value21=(come_push_stackframe("./neo-c.h", 1996, 87),__exception_result_var_b17=buffer_clone(self), come_pop_stackframe(), __exception_result_var_b17))));
    come_call_finalizer3(__dec_obj5,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value21,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(result_10, "./neo-c.h", 1997, 88)), "./neo-c.h", 1997, 89))->p=(long*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(result_10, "./neo-c.h", 1997, 90)), "./neo-c.h", 1997, 91))->memory, "./neo-c.h", 1997, 92)), "./neo-c.h", 1997, 93))->buf;
    __result12__ = __result_obj__ = result_10;
    come_call_finalizer3(result_10,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    return __result12__;
    come_call_finalizer3(result_10,smart_pointer$1longp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long int len){
void* __result_obj__;
void* right_value22;
void* right_value25;
struct smart_pointer$1char* __exception_result_var_b20;
struct smart_pointer$1char* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
right_value22 = (void*)0;
right_value25 = (void*)0;
    __result14__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2165, 110),__exception_result_var_b20=((struct smart_pointer$1char*)(right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)(right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2165, "smart_pointer$1char"))), "./neo-c.h", 2165, 94))),self,len))), come_pop_stackframe(), __exception_result_var_b20);
    come_call_finalizer3(right_value22,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value25,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result14__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value26;
void* right_value29;
struct smart_pointer$1short* __exception_result_var_b23;
struct smart_pointer$1short* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
right_value26 = (void*)0;
right_value29 = (void*)0;
    __result16__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2170, 127),__exception_result_var_b23=((struct smart_pointer$1short*)(right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)(right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2170, "smart_pointer$1short"))), "./neo-c.h", 2170, 111))),self,len))), come_pop_stackframe(), __exception_result_var_b23);
    come_call_finalizer3(right_value26,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value29,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result16__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long int len){
void* __result_obj__;
void* right_value30;
void* right_value33;
struct smart_pointer$1int* __exception_result_var_b26;
struct smart_pointer$1int* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
right_value30 = (void*)0;
right_value33 = (void*)0;
    __result18__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2175, 144),__exception_result_var_b26=((struct smart_pointer$1int*)(right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)(right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2175, "smart_pointer$1int"))), "./neo-c.h", 2175, 128))),self,len))), come_pop_stackframe(), __exception_result_var_b26);
    come_call_finalizer3(right_value30,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value33,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result18__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long int len){
void* __result_obj__;
void* right_value34;
void* right_value37;
struct smart_pointer$1long* __exception_result_var_b29;
struct smart_pointer$1long* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
right_value34 = (void*)0;
right_value37 = (void*)0;
    __result20__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2180, 161),__exception_result_var_b29=((struct smart_pointer$1long*)(right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)(right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2180, "smart_pointer$1long"))), "./neo-c.h", 2180, 145))),self,len))), come_pop_stackframe(), __exception_result_var_b29);
    come_call_finalizer3(right_value34,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value37,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result20__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long int len){
void* __result_obj__;
void* right_value38;
void* right_value41;
struct smart_pointer$1float* __exception_result_var_b32;
struct smart_pointer$1float* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
right_value38 = (void*)0;
right_value41 = (void*)0;
    __result22__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2185, 182),__exception_result_var_b32=((struct smart_pointer$1float*)(right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)come_null_check(((struct smart_pointer$1float*)(right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./neo-c.h", 2185, "smart_pointer$1float"))), "./neo-c.h", 2185, 162))),self,len))), come_pop_stackframe(), __exception_result_var_b32);
    come_call_finalizer3(right_value38,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value41,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result22__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long int len){
void* __result_obj__;
void* right_value42;
void* right_value45;
struct smart_pointer$1double* __exception_result_var_b35;
struct smart_pointer$1double* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
right_value42 = (void*)0;
right_value45 = (void*)0;
    __result24__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2190, 203),__exception_result_var_b35=((struct smart_pointer$1double*)(right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)come_null_check(((struct smart_pointer$1double*)(right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./neo-c.h", 2190, "smart_pointer$1double"))), "./neo-c.h", 2190, 183))),self,len))), come_pop_stackframe(), __exception_result_var_b35);
    come_call_finalizer3(right_value42,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value45,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    return __result24__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long int len){
void* __result_obj__;
void* right_value46;
void* right_value50;
struct list$1char* __exception_result_var_b37;
struct list$1char* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
right_value46 = (void*)0;
right_value50 = (void*)0;
    __result27__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2195, 264),__exception_result_var_b37=((struct list$1char*)(right_value50=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count(((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(((struct list$1char*)(right_value46=(struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./neo-c.h", 2195, "list$1char"))), "./neo-c.h", 2195, 204)), "./neo-c.h", 2195, 205))),len,self))), come_pop_stackframe(), __exception_result_var_b37);
    come_call_finalizer3(right_value46,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value50,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result27__;
}
static inline struct list$1short* shortpa_to_list(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value51;
void* right_value55;
struct list$1short* __exception_result_var_b39;
struct list$1short* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
right_value51 = (void*)0;
right_value55 = (void*)0;
    __result30__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2200, 325),__exception_result_var_b39=((struct list$1short*)(right_value55=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count(((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(((struct list$1short*)(right_value51=(struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./neo-c.h", 2200, "list$1short"))), "./neo-c.h", 2200, 265)), "./neo-c.h", 2200, 266))),len,self))), come_pop_stackframe(), __exception_result_var_b39);
    come_call_finalizer3(right_value51,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value55,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result30__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long int len){
void* __result_obj__;
void* right_value56;
void* right_value60;
struct list$1int* __exception_result_var_b41;
struct list$1int* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
right_value56 = (void*)0;
right_value60 = (void*)0;
    __result33__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2205, 386),__exception_result_var_b41=((struct list$1int*)(right_value60=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(((struct list$1int*)(right_value56=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./neo-c.h", 2205, "list$1int"))), "./neo-c.h", 2205, 326)), "./neo-c.h", 2205, 327))),len,self))), come_pop_stackframe(), __exception_result_var_b41);
    come_call_finalizer3(right_value56,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value60,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result33__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long int len){
void* __result_obj__;
void* right_value61;
void* right_value65;
struct list$1long* __exception_result_var_b43;
struct list$1long* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value61 = (void*)0;
right_value65 = (void*)0;
    __result36__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2210, 447),__exception_result_var_b43=((struct list$1long*)(right_value65=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count(((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(((struct list$1long*)(right_value61=(struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./neo-c.h", 2210, "list$1long"))), "./neo-c.h", 2210, 387)), "./neo-c.h", 2210, 388))),len,self))), come_pop_stackframe(), __exception_result_var_b43);
    come_call_finalizer3(right_value61,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value65,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result36__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long int len){
void* __result_obj__;
void* right_value66;
void* right_value70;
struct list$1float* __exception_result_var_b45;
struct list$1float* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
right_value66 = (void*)0;
right_value70 = (void*)0;
    __result39__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2215, 508),__exception_result_var_b45=((struct list$1float*)(right_value70=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count(((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(((struct list$1float*)(right_value66=(struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./neo-c.h", 2215, "list$1float"))), "./neo-c.h", 2215, 448)), "./neo-c.h", 2215, 449))),len,self))), come_pop_stackframe(), __exception_result_var_b45);
    come_call_finalizer3(right_value66,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value70,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result39__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long int len){
void* __result_obj__;
void* right_value71;
void* right_value75;
struct list$1double* __exception_result_var_b47;
struct list$1double* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
right_value71 = (void*)0;
right_value75 = (void*)0;
    __result42__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2220, 569),__exception_result_var_b47=((struct list$1double*)(right_value75=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count(((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(((struct list$1double*)(right_value71=(struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./neo-c.h", 2220, "list$1double"))), "./neo-c.h", 2220, 509)), "./neo-c.h", 2220, 510))),len,self))), come_pop_stackframe(), __exception_result_var_b47);
    come_call_finalizer3(right_value71,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value75,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    return __result42__;
}
static inline unsigned long int charpa_length(char* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result43__;
memset(&__result_obj__, 0, sizeof(void*));
    __result43__ = len;
    return __result43__;
}
static inline unsigned long int shortpa_length(short short* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result44__;
memset(&__result_obj__, 0, sizeof(void*));
    __result44__ = len;
    return __result44__;
}
static inline unsigned long int intpa_length(int* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result45__;
memset(&__result_obj__, 0, sizeof(void*));
    __result45__ = len;
    return __result45__;
}
static inline unsigned long int longpa_length(long* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result46__;
memset(&__result_obj__, 0, sizeof(void*));
    __result46__ = len;
    return __result46__;
}
static inline unsigned long int floatpa_length(float* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result47__;
memset(&__result_obj__, 0, sizeof(void*));
    __result47__ = len;
    return __result47__;
}
static inline unsigned long int doublepa_length(double* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result48__;
memset(&__result_obj__, 0, sizeof(void*));
    __result48__ = len;
    return __result48__;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value76;
char* __exception_result_var_b48;
char* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
right_value76 = (void*)0;
    __result49__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2336, 570),__exception_result_var_b48=((char*)(right_value76=xsprintf(msg,self))), come_pop_stackframe(), __exception_result_var_b48);
    right_value76 = come_decrement_ref_count2(right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result49__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value77;
char* __exception_result_var_b49;
char* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
right_value77 = (void*)0;
    __result50__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2341, 571),__exception_result_var_b49=((char*)(right_value77=xsprintf(msg,self))), come_pop_stackframe(), __exception_result_var_b49);
    right_value77 = come_decrement_ref_count2(right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result50__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__;
void* right_value78;
char* __exception_result_var_b50;
char* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value78 = (void*)0;
    __result51__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2346, 572),__exception_result_var_b50=((char*)(right_value78=xsprintf(msg,self))), come_pop_stackframe(), __exception_result_var_b50);
    right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result51__;
}
static inline unsigned short int __bswap16(unsigned short int __x){
void* __result_obj__;
unsigned short int __result52__;
memset(&__result_obj__, 0, sizeof(void*));
    __result52__ = __x<<8|__x>>8;
    return __result52__;
}
static inline unsigned int __bswap32(unsigned int __x){
void* __result_obj__;
unsigned int __result53__;
memset(&__result_obj__, 0, sizeof(void*));
    __result53__ = __x>>24|__x>>8&65280|__x<<8&16711680|__x<<24;
    return __result53__;
}
static inline unsigned long int __bswap64(unsigned long int __x){
void* __result_obj__;
unsigned int __exception_result_var_b51;
unsigned int __exception_result_var_b52;
unsigned long int __result54__;
memset(&__result_obj__, 0, sizeof(void*));
    __result54__ = (come_push_stackframe("/usr/include/endian.h", 31, 573),__exception_result_var_b51=__bswap32(__x), come_pop_stackframe(), __exception_result_var_b51)+0<<32|(come_push_stackframe("/usr/include/endian.h", 31, 574),__exception_result_var_b52=__bswap32(__x>>32), come_pop_stackframe(), __exception_result_var_b52);
    return __result54__;
}

// body function








static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
void* __result_obj__;
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional1=self!=((void*)0)&&((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(self, "smart_pointer$1charp_finalize", 0, 33)), "smart_pointer$1charp_finalize", 0, 34))->memory!=((void*)0),        _if_conditional1) {
            come_call_finalizer3(((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(self, "smart_pointer$1charp_finalize", 0, 35)), "smart_pointer$1charp_finalize", 0, 36))->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
void* __result_obj__;
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional2=self!=((void*)0)&&((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(self, "smart_pointer$1shortp_finalize", 0, 55)), "smart_pointer$1shortp_finalize", 0, 56))->memory!=((void*)0),        _if_conditional2) {
            come_call_finalizer3(((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(self, "smart_pointer$1shortp_finalize", 0, 57)), "smart_pointer$1shortp_finalize", 0, 58))->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
void* __result_obj__;
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional3=self!=((void*)0)&&((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(self, "smart_pointer$1intp_finalize", 0, 68)), "smart_pointer$1intp_finalize", 0, 69))->memory!=((void*)0),        _if_conditional3) {
            come_call_finalizer3(((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(self, "smart_pointer$1intp_finalize", 0, 70)), "smart_pointer$1intp_finalize", 0, 71))->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
void* __result_obj__;
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional4=self!=((void*)0)&&((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(self, "smart_pointer$1longp_finalize", 0, 81)), "smart_pointer$1longp_finalize", 0, 82))->memory!=((void*)0),        _if_conditional4) {
            come_call_finalizer3(((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(self, "smart_pointer$1longp_finalize", 0, 83)), "smart_pointer$1longp_finalize", 0, 84))->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}


static struct smart_pointer$1char* smart_pointer$1char_initialize(struct smart_pointer$1char* self, void* memory, int size){
void* __result_obj__;
void* right_value23;
void* right_value24;
struct buffer* __exception_result_var_b18;
struct buffer* __dec_obj6;
struct buffer* __exception_result_var_b19;
struct smart_pointer$1char* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
right_value23 = (void*)0;
right_value24 = (void*)0;
        __dec_obj6=((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(self, "./neo-c.h", 2006, 95)), "./neo-c.h", 2006, 96))->memory;
        ((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(self, "./neo-c.h", 2006, 95)), "./neo-c.h", 2006, 96))->memory=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 2006, 98),__exception_result_var_b18=((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))), "./neo-c.h", 2006, 97)))))), come_pop_stackframe(), __exception_result_var_b18));
        come_call_finalizer3(__dec_obj6,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value23,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value24,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("./neo-c.h", 2008, 103),__exception_result_var_b19=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(self, "./neo-c.h", 2008, 99)), "./neo-c.h", 2008, 100))->memory, "./neo-c.h", 2008, 101)), "./neo-c.h", 2008, 102)),memory,sizeof(char)*size), come_pop_stackframe(), __exception_result_var_b19);
        ((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(self, "./neo-c.h", 2010, 104)), "./neo-c.h", 2010, 105))->p=(char*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(self, "./neo-c.h", 2010, 106)), "./neo-c.h", 2010, 107))->memory, "./neo-c.h", 2010, 108)), "./neo-c.h", 2010, 109))->buf;
        __result13__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
        return __result13__;
        come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size){
void* __result_obj__;
void* right_value27;
void* right_value28;
struct buffer* __exception_result_var_b21;
struct buffer* __dec_obj7;
struct buffer* __exception_result_var_b22;
struct smart_pointer$1short* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
right_value27 = (void*)0;
right_value28 = (void*)0;
        __dec_obj7=((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(self, "./neo-c.h", 2006, 112)), "./neo-c.h", 2006, 113))->memory;
        ((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(self, "./neo-c.h", 2006, 112)), "./neo-c.h", 2006, 113))->memory=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 2006, 115),__exception_result_var_b21=((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))), "./neo-c.h", 2006, 114)))))), come_pop_stackframe(), __exception_result_var_b21));
        come_call_finalizer3(__dec_obj7,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value27,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value28,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("./neo-c.h", 2008, 120),__exception_result_var_b22=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(self, "./neo-c.h", 2008, 116)), "./neo-c.h", 2008, 117))->memory, "./neo-c.h", 2008, 118)), "./neo-c.h", 2008, 119)),memory,sizeof(short short)*size), come_pop_stackframe(), __exception_result_var_b22);
        ((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(self, "./neo-c.h", 2010, 121)), "./neo-c.h", 2010, 122))->p=(short short*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(self, "./neo-c.h", 2010, 123)), "./neo-c.h", 2010, 124))->memory, "./neo-c.h", 2010, 125)), "./neo-c.h", 2010, 126))->buf;
        __result15__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
        return __result15__;
        come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size){
void* __result_obj__;
void* right_value31;
void* right_value32;
struct buffer* __exception_result_var_b24;
struct buffer* __dec_obj8;
struct buffer* __exception_result_var_b25;
struct smart_pointer$1int* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
right_value31 = (void*)0;
right_value32 = (void*)0;
        __dec_obj8=((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(self, "./neo-c.h", 2006, 129)), "./neo-c.h", 2006, 130))->memory;
        ((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(self, "./neo-c.h", 2006, 129)), "./neo-c.h", 2006, 130))->memory=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 2006, 132),__exception_result_var_b24=((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))), "./neo-c.h", 2006, 131)))))), come_pop_stackframe(), __exception_result_var_b24));
        come_call_finalizer3(__dec_obj8,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value31,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value32,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("./neo-c.h", 2008, 137),__exception_result_var_b25=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(self, "./neo-c.h", 2008, 133)), "./neo-c.h", 2008, 134))->memory, "./neo-c.h", 2008, 135)), "./neo-c.h", 2008, 136)),memory,sizeof(int)*size), come_pop_stackframe(), __exception_result_var_b25);
        ((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(self, "./neo-c.h", 2010, 138)), "./neo-c.h", 2010, 139))->p=(int*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(self, "./neo-c.h", 2010, 140)), "./neo-c.h", 2010, 141))->memory, "./neo-c.h", 2010, 142)), "./neo-c.h", 2010, 143))->buf;
        __result17__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
        return __result17__;
        come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size){
void* __result_obj__;
void* right_value35;
void* right_value36;
struct buffer* __exception_result_var_b27;
struct buffer* __dec_obj9;
struct buffer* __exception_result_var_b28;
struct smart_pointer$1long* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
right_value35 = (void*)0;
right_value36 = (void*)0;
        __dec_obj9=((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(self, "./neo-c.h", 2006, 146)), "./neo-c.h", 2006, 147))->memory;
        ((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(self, "./neo-c.h", 2006, 146)), "./neo-c.h", 2006, 147))->memory=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 2006, 149),__exception_result_var_b27=((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))), "./neo-c.h", 2006, 148)))))), come_pop_stackframe(), __exception_result_var_b27));
        come_call_finalizer3(__dec_obj9,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value35,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value36,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("./neo-c.h", 2008, 154),__exception_result_var_b28=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(self, "./neo-c.h", 2008, 150)), "./neo-c.h", 2008, 151))->memory, "./neo-c.h", 2008, 152)), "./neo-c.h", 2008, 153)),memory,sizeof(long)*size), come_pop_stackframe(), __exception_result_var_b28);
        ((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(self, "./neo-c.h", 2010, 155)), "./neo-c.h", 2010, 156))->p=(long*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(self, "./neo-c.h", 2010, 157)), "./neo-c.h", 2010, 158))->memory, "./neo-c.h", 2010, 159)), "./neo-c.h", 2010, 160))->buf;
        __result19__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
        return __result19__;
        come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size){
void* __result_obj__;
void* right_value39;
void* right_value40;
struct buffer* __exception_result_var_b30;
struct buffer* __dec_obj10;
struct buffer* __exception_result_var_b31;
struct smart_pointer$1float* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
right_value39 = (void*)0;
right_value40 = (void*)0;
        __dec_obj10=((struct smart_pointer$1float*)come_null_check(((struct smart_pointer$1float*)come_null_check(self, "./neo-c.h", 2006, 163)), "./neo-c.h", 2006, 164))->memory;
        ((struct smart_pointer$1float*)come_null_check(((struct smart_pointer$1float*)come_null_check(self, "./neo-c.h", 2006, 163)), "./neo-c.h", 2006, 164))->memory=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 2006, 166),__exception_result_var_b30=((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))), "./neo-c.h", 2006, 165)))))), come_pop_stackframe(), __exception_result_var_b30));
        come_call_finalizer3(__dec_obj10,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value39,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value40,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("./neo-c.h", 2008, 171),__exception_result_var_b31=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1float*)come_null_check(((struct smart_pointer$1float*)come_null_check(self, "./neo-c.h", 2008, 167)), "./neo-c.h", 2008, 168))->memory, "./neo-c.h", 2008, 169)), "./neo-c.h", 2008, 170)),memory,sizeof(float)*size), come_pop_stackframe(), __exception_result_var_b31);
        ((struct smart_pointer$1float*)come_null_check(((struct smart_pointer$1float*)come_null_check(self, "./neo-c.h", 2010, 172)), "./neo-c.h", 2010, 173))->p=(float*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1float*)come_null_check(((struct smart_pointer$1float*)come_null_check(self, "./neo-c.h", 2010, 174)), "./neo-c.h", 2010, 175))->memory, "./neo-c.h", 2010, 176)), "./neo-c.h", 2010, 177))->buf;
        __result21__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
        return __result21__;
        come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
void* __result_obj__;
_Bool _if_conditional5;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional5=self!=((void*)0)&&((struct smart_pointer$1float*)come_null_check(((struct smart_pointer$1float*)come_null_check(self, "smart_pointer$1floatp_finalize", 0, 178)), "smart_pointer$1floatp_finalize", 0, 179))->memory!=((void*)0),            _if_conditional5) {
                come_call_finalizer3(((struct smart_pointer$1float*)come_null_check(((struct smart_pointer$1float*)come_null_check(self, "smart_pointer$1floatp_finalize", 0, 180)), "smart_pointer$1floatp_finalize", 0, 181))->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct smart_pointer$1double* smart_pointer$1double_initialize(struct smart_pointer$1double* self, void* memory, int size){
void* __result_obj__;
void* right_value43;
void* right_value44;
struct buffer* __exception_result_var_b33;
struct buffer* __dec_obj11;
struct buffer* __exception_result_var_b34;
struct smart_pointer$1double* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
right_value43 = (void*)0;
right_value44 = (void*)0;
        __dec_obj11=((struct smart_pointer$1double*)come_null_check(((struct smart_pointer$1double*)come_null_check(self, "./neo-c.h", 2006, 184)), "./neo-c.h", 2006, 185))->memory;
        ((struct smart_pointer$1double*)come_null_check(((struct smart_pointer$1double*)come_null_check(self, "./neo-c.h", 2006, 184)), "./neo-c.h", 2006, 185))->memory=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 2006, 187),__exception_result_var_b33=((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))), "./neo-c.h", 2006, 186)))))), come_pop_stackframe(), __exception_result_var_b33));
        come_call_finalizer3(__dec_obj11,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value43,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value44,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("./neo-c.h", 2008, 192),__exception_result_var_b34=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1double*)come_null_check(((struct smart_pointer$1double*)come_null_check(self, "./neo-c.h", 2008, 188)), "./neo-c.h", 2008, 189))->memory, "./neo-c.h", 2008, 190)), "./neo-c.h", 2008, 191)),memory,sizeof(double)*size), come_pop_stackframe(), __exception_result_var_b34);
        ((struct smart_pointer$1double*)come_null_check(((struct smart_pointer$1double*)come_null_check(self, "./neo-c.h", 2010, 193)), "./neo-c.h", 2010, 194))->p=(double*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1double*)come_null_check(((struct smart_pointer$1double*)come_null_check(self, "./neo-c.h", 2010, 195)), "./neo-c.h", 2010, 196))->memory, "./neo-c.h", 2010, 197)), "./neo-c.h", 2010, 198))->buf;
        __result23__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
        return __result23__;
        come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
void* __result_obj__;
_Bool _if_conditional6;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional6=self!=((void*)0)&&((struct smart_pointer$1double*)come_null_check(((struct smart_pointer$1double*)come_null_check(self, "smart_pointer$1doublep_finalize", 0, 199)), "smart_pointer$1doublep_finalize", 0, 200))->memory!=((void*)0),            _if_conditional6) {
                come_call_finalizer3(((struct smart_pointer$1double*)come_null_check(((struct smart_pointer$1double*)come_null_check(self, "smart_pointer$1doublep_finalize", 0, 201)), "smart_pointer$1doublep_finalize", 0, 202))->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__;
int i_11;
struct list$1char* __exception_result_var_b36;
struct list$1char* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_11, 0, sizeof(int));
        ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 109, 206)), "./neo-c.h", 109, 207))->head=((void*)0);
        ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 110, 208)), "./neo-c.h", 110, 209))->tail=((void*)0);
        ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 111, 210)), "./neo-c.h", 111, 211))->len=0;
        for(        i_11=0;        i_11<num_value;        i_11++        ){
            (come_push_stackframe("./neo-c.h", 114, 259),__exception_result_var_b36=list$1char_push_back(((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 114, 212)), "./neo-c.h", 114, 213)),((char*)come_null_check(values, "./neo-c.h", 114, 258))[i_11]), come_pop_stackframe(), __exception_result_var_b36);
        }
        __result26__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
        return __result26__;
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
struct list$1char* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
right_value47 = (void*)0;
memset(&litem_12, 0, sizeof(struct list_item$1char*));
right_value48 = (void*)0;
memset(&litem_13, 0, sizeof(struct list_item$1char*));
right_value49 = (void*)0;
memset(&litem_14, 0, sizeof(struct list_item$1char*));
                if(_if_conditional7=((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 222, 214)), "./neo-c.h", 222, 215))->len==0,                _if_conditional7) {
                    litem_12=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value47=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 223, "list_item$1char"))));
                    come_call_finalizer3(right_value47,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_12, "./neo-c.h", 225, 216)), "./neo-c.h", 225, 217))->prev=((void*)0);
                    ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_12, "./neo-c.h", 226, 218)), "./neo-c.h", 226, 219))->next=((void*)0);
                    ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_12, "./neo-c.h", 227, 220)), "./neo-c.h", 227, 221))->item=item;
                    ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 229, 222)), "./neo-c.h", 229, 223))->tail=litem_12;
                    ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 230, 224)), "./neo-c.h", 230, 225))->head=litem_12;
                }
                else {
                    if(_if_conditional8=((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 232, 226)), "./neo-c.h", 232, 227))->len==1,                    _if_conditional8) {
                        litem_13=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value48=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 233, "list_item$1char"))));
                        come_call_finalizer3(right_value48,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_13, "./neo-c.h", 235, 228)), "./neo-c.h", 235, 229))->prev=((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 235, 230)), "./neo-c.h", 235, 231))->head;
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_13, "./neo-c.h", 236, 232)), "./neo-c.h", 236, 233))->next=((void*)0);
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_13, "./neo-c.h", 237, 234)), "./neo-c.h", 237, 235))->item=item;
                        ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 239, 236)), "./neo-c.h", 239, 237))->tail=litem_13;
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 240, 238)), "./neo-c.h", 240, 239))->head, "./neo-c.h", 240, 240)), "./neo-c.h", 240, 241))->next=litem_13;
                    }
                    else {
                        litem_14=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value49=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 243, "list_item$1char"))));
                        come_call_finalizer3(right_value49,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_14, "./neo-c.h", 245, 242)), "./neo-c.h", 245, 243))->prev=((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 245, 244)), "./neo-c.h", 245, 245))->tail;
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_14, "./neo-c.h", 246, 246)), "./neo-c.h", 246, 247))->next=((void*)0);
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_14, "./neo-c.h", 247, 248)), "./neo-c.h", 247, 249))->item=item;
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 249, 250)), "./neo-c.h", 249, 251))->tail, "./neo-c.h", 249, 252)), "./neo-c.h", 249, 253))->next=litem_14;
                        ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 250, 254)), "./neo-c.h", 250, 255))->tail=litem_14;
                    }
                }
                ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 253, 256)), "./neo-c.h", 253, 257))->len++;
                __result25__ = __result_obj__ = self;
                return __result25__;
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
            it_15=((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 120, 260)), "./neo-c.h", 120, 261))->head;
            while(_while_condtional1=it_15!=((void*)0),            _while_condtional1) {
                prev_it_16=it_15;
                it_15=((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(it_15, "./neo-c.h", 123, 262)), "./neo-c.h", 123, 263))->next;
                come_call_finalizer3(prev_it_16,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values){
void* __result_obj__;
int i_17;
struct list$1short* __exception_result_var_b38;
struct list$1short* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_17, 0, sizeof(int));
        ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 109, 267)), "./neo-c.h", 109, 268))->head=((void*)0);
        ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 110, 269)), "./neo-c.h", 110, 270))->tail=((void*)0);
        ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 111, 271)), "./neo-c.h", 111, 272))->len=0;
        for(        i_17=0;        i_17<num_value;        i_17++        ){
            (come_push_stackframe("./neo-c.h", 114, 320),__exception_result_var_b38=list$1short_push_back(((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 114, 273)), "./neo-c.h", 114, 274)),((short short*)come_null_check(values, "./neo-c.h", 114, 319))[i_17]), come_pop_stackframe(), __exception_result_var_b38);
        }
        __result29__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
        return __result29__;
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
struct list$1short* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
right_value52 = (void*)0;
memset(&litem_18, 0, sizeof(struct list_item$1short*));
right_value53 = (void*)0;
memset(&litem_19, 0, sizeof(struct list_item$1short*));
right_value54 = (void*)0;
memset(&litem_20, 0, sizeof(struct list_item$1short*));
                if(_if_conditional9=((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 222, 275)), "./neo-c.h", 222, 276))->len==0,                _if_conditional9) {
                    litem_18=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value52=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 223, "list_item$1short"))));
                    come_call_finalizer3(right_value52,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_18, "./neo-c.h", 225, 277)), "./neo-c.h", 225, 278))->prev=((void*)0);
                    ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_18, "./neo-c.h", 226, 279)), "./neo-c.h", 226, 280))->next=((void*)0);
                    ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_18, "./neo-c.h", 227, 281)), "./neo-c.h", 227, 282))->item=item;
                    ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 229, 283)), "./neo-c.h", 229, 284))->tail=litem_18;
                    ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 230, 285)), "./neo-c.h", 230, 286))->head=litem_18;
                }
                else {
                    if(_if_conditional10=((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 232, 287)), "./neo-c.h", 232, 288))->len==1,                    _if_conditional10) {
                        litem_19=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value53=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 233, "list_item$1short"))));
                        come_call_finalizer3(right_value53,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_19, "./neo-c.h", 235, 289)), "./neo-c.h", 235, 290))->prev=((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 235, 291)), "./neo-c.h", 235, 292))->head;
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_19, "./neo-c.h", 236, 293)), "./neo-c.h", 236, 294))->next=((void*)0);
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_19, "./neo-c.h", 237, 295)), "./neo-c.h", 237, 296))->item=item;
                        ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 239, 297)), "./neo-c.h", 239, 298))->tail=litem_19;
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 240, 299)), "./neo-c.h", 240, 300))->head, "./neo-c.h", 240, 301)), "./neo-c.h", 240, 302))->next=litem_19;
                    }
                    else {
                        litem_20=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value54=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 243, "list_item$1short"))));
                        come_call_finalizer3(right_value54,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_20, "./neo-c.h", 245, 303)), "./neo-c.h", 245, 304))->prev=((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 245, 305)), "./neo-c.h", 245, 306))->tail;
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_20, "./neo-c.h", 246, 307)), "./neo-c.h", 246, 308))->next=((void*)0);
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_20, "./neo-c.h", 247, 309)), "./neo-c.h", 247, 310))->item=item;
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 249, 311)), "./neo-c.h", 249, 312))->tail, "./neo-c.h", 249, 313)), "./neo-c.h", 249, 314))->next=litem_20;
                        ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 250, 315)), "./neo-c.h", 250, 316))->tail=litem_20;
                    }
                }
                ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 253, 317)), "./neo-c.h", 253, 318))->len++;
                __result28__ = __result_obj__ = self;
                return __result28__;
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
            it_21=((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 120, 321)), "./neo-c.h", 120, 322))->head;
            while(_while_condtional2=it_21!=((void*)0),            _while_condtional2) {
                prev_it_22=it_21;
                it_21=((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(it_21, "./neo-c.h", 123, 323)), "./neo-c.h", 123, 324))->next;
                come_call_finalizer3(prev_it_22,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__;
int i_23;
struct list$1int* __exception_result_var_b40;
struct list$1int* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_23, 0, sizeof(int));
        ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 109, 328)), "./neo-c.h", 109, 329))->head=((void*)0);
        ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 110, 330)), "./neo-c.h", 110, 331))->tail=((void*)0);
        ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 111, 332)), "./neo-c.h", 111, 333))->len=0;
        for(        i_23=0;        i_23<num_value;        i_23++        ){
            (come_push_stackframe("./neo-c.h", 114, 381),__exception_result_var_b40=list$1int_push_back(((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 114, 334)), "./neo-c.h", 114, 335)),((int*)come_null_check(values, "./neo-c.h", 114, 380))[i_23]), come_pop_stackframe(), __exception_result_var_b40);
        }
        __result32__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
        return __result32__;
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
struct list$1int* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
right_value57 = (void*)0;
memset(&litem_24, 0, sizeof(struct list_item$1int*));
right_value58 = (void*)0;
memset(&litem_25, 0, sizeof(struct list_item$1int*));
right_value59 = (void*)0;
memset(&litem_26, 0, sizeof(struct list_item$1int*));
                if(_if_conditional11=((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 222, 336)), "./neo-c.h", 222, 337))->len==0,                _if_conditional11) {
                    litem_24=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value57=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 223, "list_item$1int"))));
                    come_call_finalizer3(right_value57,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_24, "./neo-c.h", 225, 338)), "./neo-c.h", 225, 339))->prev=((void*)0);
                    ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_24, "./neo-c.h", 226, 340)), "./neo-c.h", 226, 341))->next=((void*)0);
                    ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_24, "./neo-c.h", 227, 342)), "./neo-c.h", 227, 343))->item=item;
                    ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 229, 344)), "./neo-c.h", 229, 345))->tail=litem_24;
                    ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 230, 346)), "./neo-c.h", 230, 347))->head=litem_24;
                }
                else {
                    if(_if_conditional12=((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 232, 348)), "./neo-c.h", 232, 349))->len==1,                    _if_conditional12) {
                        litem_25=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value58=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 233, "list_item$1int"))));
                        come_call_finalizer3(right_value58,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_25, "./neo-c.h", 235, 350)), "./neo-c.h", 235, 351))->prev=((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 235, 352)), "./neo-c.h", 235, 353))->head;
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_25, "./neo-c.h", 236, 354)), "./neo-c.h", 236, 355))->next=((void*)0);
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_25, "./neo-c.h", 237, 356)), "./neo-c.h", 237, 357))->item=item;
                        ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 239, 358)), "./neo-c.h", 239, 359))->tail=litem_25;
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 240, 360)), "./neo-c.h", 240, 361))->head, "./neo-c.h", 240, 362)), "./neo-c.h", 240, 363))->next=litem_25;
                    }
                    else {
                        litem_26=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value59=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 243, "list_item$1int"))));
                        come_call_finalizer3(right_value59,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_26, "./neo-c.h", 245, 364)), "./neo-c.h", 245, 365))->prev=((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 245, 366)), "./neo-c.h", 245, 367))->tail;
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_26, "./neo-c.h", 246, 368)), "./neo-c.h", 246, 369))->next=((void*)0);
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_26, "./neo-c.h", 247, 370)), "./neo-c.h", 247, 371))->item=item;
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 249, 372)), "./neo-c.h", 249, 373))->tail, "./neo-c.h", 249, 374)), "./neo-c.h", 249, 375))->next=litem_26;
                        ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 250, 376)), "./neo-c.h", 250, 377))->tail=litem_26;
                    }
                }
                ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 253, 378)), "./neo-c.h", 253, 379))->len++;
                __result31__ = __result_obj__ = self;
                return __result31__;
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
            it_27=((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 120, 382)), "./neo-c.h", 120, 383))->head;
            while(_while_condtional3=it_27!=((void*)0),            _while_condtional3) {
                prev_it_28=it_27;
                it_27=((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(it_27, "./neo-c.h", 123, 384)), "./neo-c.h", 123, 385))->next;
                come_call_finalizer3(prev_it_28,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__;
int i_29;
struct list$1long* __exception_result_var_b42;
struct list$1long* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_29, 0, sizeof(int));
        ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 109, 389)), "./neo-c.h", 109, 390))->head=((void*)0);
        ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 110, 391)), "./neo-c.h", 110, 392))->tail=((void*)0);
        ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 111, 393)), "./neo-c.h", 111, 394))->len=0;
        for(        i_29=0;        i_29<num_value;        i_29++        ){
            (come_push_stackframe("./neo-c.h", 114, 442),__exception_result_var_b42=list$1long_push_back(((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 114, 395)), "./neo-c.h", 114, 396)),((long*)come_null_check(values, "./neo-c.h", 114, 441))[i_29]), come_pop_stackframe(), __exception_result_var_b42);
        }
        __result35__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
        return __result35__;
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
struct list$1long* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
right_value62 = (void*)0;
memset(&litem_30, 0, sizeof(struct list_item$1long*));
right_value63 = (void*)0;
memset(&litem_31, 0, sizeof(struct list_item$1long*));
right_value64 = (void*)0;
memset(&litem_32, 0, sizeof(struct list_item$1long*));
                if(_if_conditional13=((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 222, 397)), "./neo-c.h", 222, 398))->len==0,                _if_conditional13) {
                    litem_30=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value62=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 223, "list_item$1long"))));
                    come_call_finalizer3(right_value62,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_30, "./neo-c.h", 225, 399)), "./neo-c.h", 225, 400))->prev=((void*)0);
                    ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_30, "./neo-c.h", 226, 401)), "./neo-c.h", 226, 402))->next=((void*)0);
                    ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_30, "./neo-c.h", 227, 403)), "./neo-c.h", 227, 404))->item=item;
                    ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 229, 405)), "./neo-c.h", 229, 406))->tail=litem_30;
                    ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 230, 407)), "./neo-c.h", 230, 408))->head=litem_30;
                }
                else {
                    if(_if_conditional14=((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 232, 409)), "./neo-c.h", 232, 410))->len==1,                    _if_conditional14) {
                        litem_31=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value63=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 233, "list_item$1long"))));
                        come_call_finalizer3(right_value63,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_31, "./neo-c.h", 235, 411)), "./neo-c.h", 235, 412))->prev=((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 235, 413)), "./neo-c.h", 235, 414))->head;
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_31, "./neo-c.h", 236, 415)), "./neo-c.h", 236, 416))->next=((void*)0);
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_31, "./neo-c.h", 237, 417)), "./neo-c.h", 237, 418))->item=item;
                        ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 239, 419)), "./neo-c.h", 239, 420))->tail=litem_31;
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 240, 421)), "./neo-c.h", 240, 422))->head, "./neo-c.h", 240, 423)), "./neo-c.h", 240, 424))->next=litem_31;
                    }
                    else {
                        litem_32=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value64=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 243, "list_item$1long"))));
                        come_call_finalizer3(right_value64,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_32, "./neo-c.h", 245, 425)), "./neo-c.h", 245, 426))->prev=((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 245, 427)), "./neo-c.h", 245, 428))->tail;
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_32, "./neo-c.h", 246, 429)), "./neo-c.h", 246, 430))->next=((void*)0);
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_32, "./neo-c.h", 247, 431)), "./neo-c.h", 247, 432))->item=item;
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 249, 433)), "./neo-c.h", 249, 434))->tail, "./neo-c.h", 249, 435)), "./neo-c.h", 249, 436))->next=litem_32;
                        ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 250, 437)), "./neo-c.h", 250, 438))->tail=litem_32;
                    }
                }
                ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 253, 439)), "./neo-c.h", 253, 440))->len++;
                __result34__ = __result_obj__ = self;
                return __result34__;
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
            it_33=((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 120, 443)), "./neo-c.h", 120, 444))->head;
            while(_while_condtional4=it_33!=((void*)0),            _while_condtional4) {
                prev_it_34=it_33;
                it_33=((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(it_33, "./neo-c.h", 123, 445)), "./neo-c.h", 123, 446))->next;
                come_call_finalizer3(prev_it_34,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__;
int i_35;
struct list$1float* __exception_result_var_b44;
struct list$1float* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_35, 0, sizeof(int));
        ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 109, 450)), "./neo-c.h", 109, 451))->head=((void*)0);
        ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 110, 452)), "./neo-c.h", 110, 453))->tail=((void*)0);
        ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 111, 454)), "./neo-c.h", 111, 455))->len=0;
        for(        i_35=0;        i_35<num_value;        i_35++        ){
            (come_push_stackframe("./neo-c.h", 114, 503),__exception_result_var_b44=list$1float_push_back(((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 114, 456)), "./neo-c.h", 114, 457)),((float*)come_null_check(values, "./neo-c.h", 114, 502))[i_35]), come_pop_stackframe(), __exception_result_var_b44);
        }
        __result38__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
        return __result38__;
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
struct list$1float* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
right_value67 = (void*)0;
memset(&litem_36, 0, sizeof(struct list_item$1float*));
right_value68 = (void*)0;
memset(&litem_37, 0, sizeof(struct list_item$1float*));
right_value69 = (void*)0;
memset(&litem_38, 0, sizeof(struct list_item$1float*));
                if(_if_conditional15=((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 222, 458)), "./neo-c.h", 222, 459))->len==0,                _if_conditional15) {
                    litem_36=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value67=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 223, "list_item$1float"))));
                    come_call_finalizer3(right_value67,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_36, "./neo-c.h", 225, 460)), "./neo-c.h", 225, 461))->prev=((void*)0);
                    ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_36, "./neo-c.h", 226, 462)), "./neo-c.h", 226, 463))->next=((void*)0);
                    ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_36, "./neo-c.h", 227, 464)), "./neo-c.h", 227, 465))->item=item;
                    ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 229, 466)), "./neo-c.h", 229, 467))->tail=litem_36;
                    ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 230, 468)), "./neo-c.h", 230, 469))->head=litem_36;
                }
                else {
                    if(_if_conditional16=((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 232, 470)), "./neo-c.h", 232, 471))->len==1,                    _if_conditional16) {
                        litem_37=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value68=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 233, "list_item$1float"))));
                        come_call_finalizer3(right_value68,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_37, "./neo-c.h", 235, 472)), "./neo-c.h", 235, 473))->prev=((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 235, 474)), "./neo-c.h", 235, 475))->head;
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_37, "./neo-c.h", 236, 476)), "./neo-c.h", 236, 477))->next=((void*)0);
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_37, "./neo-c.h", 237, 478)), "./neo-c.h", 237, 479))->item=item;
                        ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 239, 480)), "./neo-c.h", 239, 481))->tail=litem_37;
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 240, 482)), "./neo-c.h", 240, 483))->head, "./neo-c.h", 240, 484)), "./neo-c.h", 240, 485))->next=litem_37;
                    }
                    else {
                        litem_38=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value69=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 243, "list_item$1float"))));
                        come_call_finalizer3(right_value69,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_38, "./neo-c.h", 245, 486)), "./neo-c.h", 245, 487))->prev=((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 245, 488)), "./neo-c.h", 245, 489))->tail;
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_38, "./neo-c.h", 246, 490)), "./neo-c.h", 246, 491))->next=((void*)0);
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_38, "./neo-c.h", 247, 492)), "./neo-c.h", 247, 493))->item=item;
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 249, 494)), "./neo-c.h", 249, 495))->tail, "./neo-c.h", 249, 496)), "./neo-c.h", 249, 497))->next=litem_38;
                        ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 250, 498)), "./neo-c.h", 250, 499))->tail=litem_38;
                    }
                }
                ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 253, 500)), "./neo-c.h", 253, 501))->len++;
                __result37__ = __result_obj__ = self;
                return __result37__;
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
            it_39=((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 120, 504)), "./neo-c.h", 120, 505))->head;
            while(_while_condtional5=it_39!=((void*)0),            _while_condtional5) {
                prev_it_40=it_39;
                it_39=((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(it_39, "./neo-c.h", 123, 506)), "./neo-c.h", 123, 507))->next;
                come_call_finalizer3(prev_it_40,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__;
int i_41;
struct list$1double* __exception_result_var_b46;
struct list$1double* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_41, 0, sizeof(int));
        ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 109, 511)), "./neo-c.h", 109, 512))->head=((void*)0);
        ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 110, 513)), "./neo-c.h", 110, 514))->tail=((void*)0);
        ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 111, 515)), "./neo-c.h", 111, 516))->len=0;
        for(        i_41=0;        i_41<num_value;        i_41++        ){
            (come_push_stackframe("./neo-c.h", 114, 564),__exception_result_var_b46=list$1double_push_back(((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 114, 517)), "./neo-c.h", 114, 518)),((double*)come_null_check(values, "./neo-c.h", 114, 563))[i_41]), come_pop_stackframe(), __exception_result_var_b46);
        }
        __result41__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
        return __result41__;
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
struct list$1double* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
right_value72 = (void*)0;
memset(&litem_42, 0, sizeof(struct list_item$1double*));
right_value73 = (void*)0;
memset(&litem_43, 0, sizeof(struct list_item$1double*));
right_value74 = (void*)0;
memset(&litem_44, 0, sizeof(struct list_item$1double*));
                if(_if_conditional17=((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 222, 519)), "./neo-c.h", 222, 520))->len==0,                _if_conditional17) {
                    litem_42=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value72=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 223, "list_item$1double"))));
                    come_call_finalizer3(right_value72,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_42, "./neo-c.h", 225, 521)), "./neo-c.h", 225, 522))->prev=((void*)0);
                    ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_42, "./neo-c.h", 226, 523)), "./neo-c.h", 226, 524))->next=((void*)0);
                    ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_42, "./neo-c.h", 227, 525)), "./neo-c.h", 227, 526))->item=item;
                    ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 229, 527)), "./neo-c.h", 229, 528))->tail=litem_42;
                    ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 230, 529)), "./neo-c.h", 230, 530))->head=litem_42;
                }
                else {
                    if(_if_conditional18=((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 232, 531)), "./neo-c.h", 232, 532))->len==1,                    _if_conditional18) {
                        litem_43=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value73=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 233, "list_item$1double"))));
                        come_call_finalizer3(right_value73,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_43, "./neo-c.h", 235, 533)), "./neo-c.h", 235, 534))->prev=((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 235, 535)), "./neo-c.h", 235, 536))->head;
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_43, "./neo-c.h", 236, 537)), "./neo-c.h", 236, 538))->next=((void*)0);
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_43, "./neo-c.h", 237, 539)), "./neo-c.h", 237, 540))->item=item;
                        ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 239, 541)), "./neo-c.h", 239, 542))->tail=litem_43;
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 240, 543)), "./neo-c.h", 240, 544))->head, "./neo-c.h", 240, 545)), "./neo-c.h", 240, 546))->next=litem_43;
                    }
                    else {
                        litem_44=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value74=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 243, "list_item$1double"))));
                        come_call_finalizer3(right_value74,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_44, "./neo-c.h", 245, 547)), "./neo-c.h", 245, 548))->prev=((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 245, 549)), "./neo-c.h", 245, 550))->tail;
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_44, "./neo-c.h", 246, 551)), "./neo-c.h", 246, 552))->next=((void*)0);
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_44, "./neo-c.h", 247, 553)), "./neo-c.h", 247, 554))->item=item;
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 249, 555)), "./neo-c.h", 249, 556))->tail, "./neo-c.h", 249, 557)), "./neo-c.h", 249, 558))->next=litem_44;
                        ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 250, 559)), "./neo-c.h", 250, 560))->tail=litem_44;
                    }
                }
                ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 253, 561)), "./neo-c.h", 253, 562))->len++;
                __result40__ = __result_obj__ = self;
                return __result40__;
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
            it_45=((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 120, 565)), "./neo-c.h", 120, 566))->head;
            while(_while_condtional6=it_45!=((void*)0),            _while_condtional6) {
                prev_it_46=it_45;
                it_45=((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(it_45, "./neo-c.h", 123, 567)), "./neo-c.h", 123, 568))->next;
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
        if(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 24, 575)), "02transpile.c", 24, 576))->writing_source_file_position) {
            (come_push_stackframe("02transpile.c", 25,581),add_come_code(info,((char*)(right_value81=xsprintf("# \%s \"\%s\"\n",((char*)(right_value79=int_to_string(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 25, 577)), "02transpile.c", 25, 578))->sline))),((char*)(right_value80=string_to_string(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 25, 579)), "02transpile.c", 25, 580))->sname))))))),come_pop_stackframe());
            right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 26, 582)), "02transpile.c", 26, 583))->writing_source_file_position=(_Bool)0;
        }
    }
}

_Bool node_compile(struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value82;
char* __exception_result_var_b53;
char* sname_47;
int sline_48;
void* right_value83;
void* right_value84;
char* __exception_result_var_b54;
char* __dec_obj12;
_Bool result_49;
void* right_value85;
char* __exception_result_var_b55;
char* __dec_obj13;
_Bool __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
memset(&sname_47, 0, sizeof(char*));
memset(&sline_48, 0, sizeof(int));
right_value83 = (void*)0;
right_value84 = (void*)0;
memset(&result_49, 0, sizeof(_Bool));
right_value85 = (void*)0;
    sname_47=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 33, 586),__exception_result_var_b53=((char*)(right_value82=__builtin_string(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 33, 584)), "02transpile.c", 33, 585))->sname))), come_pop_stackframe(), __exception_result_var_b53));
    right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    sline_48=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 34, 587)), "02transpile.c", 34, 588))->sline;
    __dec_obj12=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 36, 589)), "02transpile.c", 36, 590))->sname;
    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 36, 589)), "02transpile.c", 36, 590))->sname=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 36, 593),__exception_result_var_b54=((char*)(right_value84=__builtin_string(((char*)(right_value83=((struct sNode*)come_null_check(((struct sNode*)come_null_check(node, "02transpile.c", 36, 591)), "02transpile.c", 36, 592))->sname(((struct sNode*)come_null_check(((struct sNode*)come_null_check(node, "02transpile.c", 36, 591)), "02transpile.c", 36, 592))->_protocol_obj)))))), come_pop_stackframe(), __exception_result_var_b54));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 37, 594)), "02transpile.c", 37, 595))->sline=((struct sNode*)come_null_check(((struct sNode*)come_null_check(node, "02transpile.c", 37, 596)), "02transpile.c", 37, 597))->sline(((struct sNode*)come_null_check(((struct sNode*)come_null_check(node, "02transpile.c", 37, 596)), "02transpile.c", 37, 597))->_protocol_obj);
    (come_push_stackframe("02transpile.c", 39,598),write_source_file_position_to_source(info),come_pop_stackframe());
    result_49=((struct sNode*)come_null_check(((struct sNode*)come_null_check(node, "02transpile.c", 41, 599)), "02transpile.c", 41, 600))->compile(((struct sNode*)come_null_check(((struct sNode*)come_null_check(node, "02transpile.c", 41, 599)), "02transpile.c", 41, 600))->_protocol_obj,info);
    __dec_obj13=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 43, 601)), "02transpile.c", 43, 602))->sname;
    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 43, 601)), "02transpile.c", 43, 602))->sname=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 43, 603),__exception_result_var_b55=((char*)(right_value85=__builtin_string(sname_47))), come_pop_stackframe(), __exception_result_var_b55));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 44, 604)), "02transpile.c", 44, 605))->sline=sline_48;
    __result55__ = result_49;
    sname_47 = come_decrement_ref_count2(sname_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result55__;
    sname_47 = come_decrement_ref_count2(sname_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void err_msg(struct sInfo* info, char* msg, ...){
void* __result_obj__;
_Bool _if_conditional21;
char* msg2_50;
va_list args_51;
int __exception_result_var_b56;
char* p_52;
char* last_lf_53;
_Bool _while_condtional7;
_Bool _if_conditional22;
_Bool _if_conditional23;
int col_54;
int __exception_result_var_b57;
int col_55;
int __exception_result_var_b58;
_Bool _if_conditional24;
int n_56;
void* right_value86;
char* __exception_result_var_b59;
void* right_value87;
struct list$1charph* __exception_result_var_b60;
void* right_value93;
struct list$1charph* __exception_result_var_b63;
struct __current_stack1__ __current_stack1__;
void* right_value98;
struct list$1charph* __exception_result_var_b67;
void* right_value102;
char* __exception_result_var_b80;
void* right_value103;
char* __exception_result_var_b81;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_50, 0, sizeof(char*));
memset(&args_51, 0, sizeof(va_list));
memset(&p_52, 0, sizeof(char*));
memset(&last_lf_53, 0, sizeof(char*));
memset(&col_54, 0, sizeof(int));
memset(&col_55, 0, sizeof(int));
memset(&n_56, 0, sizeof(int));
right_value86 = (void*)0;
right_value87 = (void*)0;
right_value93 = (void*)0;
memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
right_value98 = (void*)0;
right_value102 = (void*)0;
right_value103 = (void*)0;
    if(_if_conditional21=!((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 51, 606)), "02transpile.c", 51, 607))->no_output_err,    _if_conditional21) {
        (come_push_stackframe("02transpile.c", 55,608),__builtin_va_start(args_51,msg),come_pop_stackframe());
        (come_push_stackframe("02transpile.c", 56, 609),__exception_result_var_b56=vasprintf(&msg2_50,msg,args_51), come_pop_stackframe(), __exception_result_var_b56);
        (come_push_stackframe("02transpile.c", 57,610),__builtin_va_end(args_51),come_pop_stackframe());
        p_52=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 59, 611)), "02transpile.c", 59, 612))->p;
        last_lf_53=((void*)0);
        while(_while_condtional7=p_52>=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 62, 613)), "02transpile.c", 62, 614))->head,        _while_condtional7) {
            if(_if_conditional22=*((char*)come_null_check(p_52, "02transpile.c", 63, 615))==10,            _if_conditional22) {
                last_lf_53=p_52;
                break;
            }
            p_52--;
        }
        if(last_lf_53) {
            col_54=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 71, 616)), "02transpile.c", 71, 617))->p-last_lf_53;
            (come_push_stackframe("02transpile.c", 73, 622),__exception_result_var_b57=printf("%s %d %d: %s\n",((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 73, 618)), "02transpile.c", 73, 619))->sname,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 73, 620)), "02transpile.c", 73, 621))->sline,col_54,msg2_50), come_pop_stackframe(), __exception_result_var_b57);
        }
        else {
            col_55=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 76, 623)), "02transpile.c", 76, 624))->p-((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 76, 625)), "02transpile.c", 76, 626))->head;
            (come_push_stackframe("02transpile.c", 78, 631),__exception_result_var_b58=printf("%s %d %d: %s\n",((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 78, 627)), "02transpile.c", 78, 628))->sname,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 78, 629)), "02transpile.c", 78, 630))->sline,col_55,msg2_50), come_pop_stackframe(), __exception_result_var_b58);
        }
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 81, 632)), "02transpile.c", 81, 633))->err_num++;
        (come_push_stackframe("02transpile.c", 82,634),stackframe(),come_pop_stackframe());
        if(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 84, 635)), "02transpile.c", 84, 636))->come_fun) {
            n_56=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 85, 637)), "02transpile.c", 85, 638))->sline-5;
            __current_stack1__.n_56 = &n_56;
            __current_stack1__.msg2_50 = &msg2_50;
            __current_stack1__.p_52 = &p_52;
            __current_stack1__.last_lf_53 = &last_lf_53;
            __current_stack1__.info = &info;
            __current_stack1__.msg = &msg;
            (come_push_stackframe("02transpile.c", 86, 804),__exception_result_var_b81=((char*)(right_value103=string_puts(((char*)come_null_check(((char*)come_null_check((come_push_stackframe("02transpile.c", 86, 801),__exception_result_var_b80=((char*)(right_value102=list$1charph_join(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((come_push_stackframe("02transpile.c", 86, 743),__exception_result_var_b67=((struct list$1charph*)(right_value98=list$1charph_map2(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((come_push_stackframe("02transpile.c", 86, 727),__exception_result_var_b63=((struct list$1charph*)(right_value93=list$1charph_sublist(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((come_push_stackframe("02transpile.c", 86, 646),__exception_result_var_b60=((struct list$1charph*)(right_value87=string_split_char(((char*)come_null_check(((char*)come_null_check((come_push_stackframe("02transpile.c", 86, 643),__exception_result_var_b59=((char*)(right_value86=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 86, 639)), "02transpile.c", 86, 640))->original_source, "02transpile.c", 86, 641)), "02transpile.c", 86, 642))))), come_pop_stackframe(), __exception_result_var_b59), "02transpile.c", 86, 644)), "02transpile.c", 86, 645)),10))), come_pop_stackframe(), __exception_result_var_b60), "02transpile.c", 86, 647)), "02transpile.c", 86, 648)),n_56,n_56+10))), come_pop_stackframe(), __exception_result_var_b63), "02transpile.c", 86, 728)), "02transpile.c", 86, 729)),&__current_stack1__,(void*)method_block1_02transpilec))), come_pop_stackframe(), __exception_result_var_b67), "02transpile.c", 86, 744)), "02transpile.c", 86, 745)),"\n"))), come_pop_stackframe(), __exception_result_var_b80), "02transpile.c", 86, 802)), "02transpile.c", 86, 803))))), come_pop_stackframe(), __exception_result_var_b81);
            right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value87,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value93,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value98,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        (come_push_stackframe("02transpile.c", 89,805),free(msg2_50),come_pop_stackframe());
        come_call_finalizer3((&args_51),va_list_finalize, 1, 0, 0, 0, (void*)0);
    }
}

static struct list$1charph* list$1charph_sublist(struct list$1charph* self, int begin, int tail){
void* __result_obj__;
void* right_value88;
void* right_value89;
struct list$1charph* __exception_result_var_b61;
struct list$1charph* result_57;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional29;
struct list_item$1charph* it_60;
int i_61;
_Bool _while_condtional9;
_Bool _if_conditional30;
struct list$1charph* __exception_result_var_b62;
struct list$1charph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
right_value89 = (void*)0;
memset(&result_57, 0, sizeof(struct list$1charph*));
memset(&it_60, 0, sizeof(struct list_item$1charph*));
memset(&i_61, 0, sizeof(int));
                result_57=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 639, 665),__exception_result_var_b61=((struct list$1charph*)(right_value89=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value88=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 639, "list$1charph"))), "./neo-c.h", 639, 649)), "./neo-c.h", 639, 650)))))), come_pop_stackframe(), __exception_result_var_b61));
                come_call_finalizer3(right_value88,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value89,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional26=begin<0,                _if_conditional26) {
                    begin+=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 642, 666)), "./neo-c.h", 642, 667))->len;
                }
                if(_if_conditional27=tail<0,                _if_conditional27) {
                    tail+=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 646, 668)), "./neo-c.h", 646, 669))->len+1;
                }
                if(_if_conditional28=begin<0,                _if_conditional28) {
                    begin=0;
                }
                if(_if_conditional29=tail>=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 653, 670)), "./neo-c.h", 653, 671))->len,                _if_conditional29) {
                    tail=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 654, 672)), "./neo-c.h", 654, 673))->len;
                }
                it_60=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 657, 674)), "./neo-c.h", 657, 675))->head;
                i_61=0;
                while(_while_condtional9=it_60!=((void*)0),                _while_condtional9) {
                    if(_if_conditional30=i_61>=begin&&i_61<tail,                    _if_conditional30) {
                        (come_push_stackframe("./neo-c.h", 661, 724),__exception_result_var_b62=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_57, "./neo-c.h", 661, 676)), "./neo-c.h", 661, 677)),(char*)come_increment_ref_count(((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_60, "./neo-c.h", 661, 722)), "./neo-c.h", 661, 723))->item)), come_pop_stackframe(), __exception_result_var_b62);
                    }
                    it_60=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_60, "./neo-c.h", 663, 725)), "./neo-c.h", 663, 726))->next;
                    i_61++;
                }
                __result58__ = __result_obj__ = result_57;
                come_call_finalizer3(result_57,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result58__;
                come_call_finalizer3(result_57,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 101, 651)), "./neo-c.h", 101, 652))->head=((void*)0);
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 102, 653)), "./neo-c.h", 102, 654))->tail=((void*)0);
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 103, 655)), "./neo-c.h", 103, 656))->len=0;
                    __result56__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result56__;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_58;
_Bool _while_condtional8;
struct list_item$1charph* prev_it_59;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_58, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_59, 0, sizeof(struct list_item$1charph*));
                        it_58=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 120, 657)), "./neo-c.h", 120, 658))->head;
                        while(_while_condtional8=it_58!=((void*)0),                        _while_condtional8) {
                            prev_it_59=it_58;
                            it_58=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_58, "./neo-c.h", 123, 659)), "./neo-c.h", 123, 660))->next;
                            come_call_finalizer3(prev_it_59,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional25=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 661)), "list_item$1charphp_finalize", 0, 662))->item!=((void*)0),                                _if_conditional25) {
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 663)), "list_item$1charphp_finalize", 0, 664))->item = come_decrement_ref_count2(((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 663)), "list_item$1charphp_finalize", 0, 664))->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional31;
void* right_value90;
struct list_item$1charph* litem_62;
char* __dec_obj14;
_Bool _if_conditional32;
void* right_value91;
struct list_item$1charph* litem_63;
char* __dec_obj15;
void* right_value92;
struct list_item$1charph* litem_64;
char* __dec_obj16;
struct list$1charph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
memset(&litem_62, 0, sizeof(struct list_item$1charph*));
right_value91 = (void*)0;
memset(&litem_63, 0, sizeof(struct list_item$1charph*));
right_value92 = (void*)0;
memset(&litem_64, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional31=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 222, 678)), "./neo-c.h", 222, 679))->len==0,                            _if_conditional31) {
                                litem_62=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value90=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 223, "list_item$1charph"))));
                                come_call_finalizer3(right_value90,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_62, "./neo-c.h", 225, 680)), "./neo-c.h", 225, 681))->prev=((void*)0);
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_62, "./neo-c.h", 226, 682)), "./neo-c.h", 226, 683))->next=((void*)0);
                                __dec_obj14=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_62, "./neo-c.h", 227, 684)), "./neo-c.h", 227, 685))->item;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_62, "./neo-c.h", 227, 684)), "./neo-c.h", 227, 685))->item=(char*)come_increment_ref_count(item);
                                __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
                                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 229, 686)), "./neo-c.h", 229, 687))->tail=litem_62;
                                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 230, 688)), "./neo-c.h", 230, 689))->head=litem_62;
                            }
                            else {
                                if(_if_conditional32=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 232, 690)), "./neo-c.h", 232, 691))->len==1,                                _if_conditional32) {
                                    litem_63=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value91=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 233, "list_item$1charph"))));
                                    come_call_finalizer3(right_value91,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_63, "./neo-c.h", 235, 692)), "./neo-c.h", 235, 693))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 235, 694)), "./neo-c.h", 235, 695))->head;
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_63, "./neo-c.h", 236, 696)), "./neo-c.h", 236, 697))->next=((void*)0);
                                    __dec_obj15=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_63, "./neo-c.h", 237, 698)), "./neo-c.h", 237, 699))->item;
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_63, "./neo-c.h", 237, 698)), "./neo-c.h", 237, 699))->item=(char*)come_increment_ref_count(item);
                                    __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 239, 700)), "./neo-c.h", 239, 701))->tail=litem_63;
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 240, 702)), "./neo-c.h", 240, 703))->head, "./neo-c.h", 240, 704)), "./neo-c.h", 240, 705))->next=litem_63;
                                }
                                else {
                                    litem_64=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value92=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 243, "list_item$1charph"))));
                                    come_call_finalizer3(right_value92,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_64, "./neo-c.h", 245, 706)), "./neo-c.h", 245, 707))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 245, 708)), "./neo-c.h", 245, 709))->tail;
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_64, "./neo-c.h", 246, 710)), "./neo-c.h", 246, 711))->next=((void*)0);
                                    __dec_obj16=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_64, "./neo-c.h", 247, 712)), "./neo-c.h", 247, 713))->item;
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_64, "./neo-c.h", 247, 712)), "./neo-c.h", 247, 713))->item=(char*)come_increment_ref_count(item);
                                    __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 249, 714)), "./neo-c.h", 249, 715))->tail, "./neo-c.h", 249, 716)), "./neo-c.h", 249, 717))->next=litem_64;
                                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 250, 718)), "./neo-c.h", 250, 719))->tail=litem_64;
                                }
                            }
                            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 253, 720)), "./neo-c.h", 253, 721))->len++;
                            __result57__ = __result_obj__ = self;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result57__;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_map2(struct list$1charph* self, void* parent, char* (*block)(void*,char*)){
void* __result_obj__;
void* right_value94;
void* right_value95;
struct list$1charph* __exception_result_var_b64;
struct list$1charph* result_65;
struct list_item$1charph* it_66;
_Bool _while_condtional10;
void* right_value96;
struct list$1charph* __exception_result_var_b65;
struct list$1charph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
right_value95 = (void*)0;
memset(&result_65, 0, sizeof(struct list$1charph*));
memset(&it_66, 0, sizeof(struct list_item$1charph*));
right_value96 = (void*)0;
                result_65=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 933, 732),__exception_result_var_b64=((struct list$1charph*)(right_value95=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value94=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 933, "list$1charph"))), "./neo-c.h", 933, 730)), "./neo-c.h", 933, 731)))))), come_pop_stackframe(), __exception_result_var_b64));
                come_call_finalizer3(right_value94,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value95,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                it_66=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 935, 733)), "./neo-c.h", 935, 734))->head;
                while(_while_condtional10=it_66!=((void*)0),                _while_condtional10) {
                    (come_push_stackframe("./neo-c.h", 937, 739),__exception_result_var_b65=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_65, "./neo-c.h", 937, 735)), "./neo-c.h", 937, 736)),(char*)come_increment_ref_count(((char*)(right_value96=block(parent,((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_66, "./neo-c.h", 937, 737)), "./neo-c.h", 937, 738))->item))))), come_pop_stackframe(), __exception_result_var_b65);
                    right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    it_66=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_66, "./neo-c.h", 939, 740)), "./neo-c.h", 939, 741))->next;
                }
                __result59__ = __result_obj__ = result_65;
                come_call_finalizer3(result_65,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result59__;
                come_call_finalizer3(result_65,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

char* method_block1_02transpilec(struct __current_stack1__* parent, char* it){
void* __result_obj__;
void* right_value97;
char* __exception_result_var_b66;
char* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value97 = (void*)0;
                __result60__ = __result_obj__ = (come_push_stackframe("02transpile.c", 87, 742),__exception_result_var_b66=((char*)(right_value97=xsprintf("%d %s",++(*(parent->n_56)),it))), come_pop_stackframe(), __exception_result_var_b66);
                right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result60__;
}

static char* list$1charph_join(struct list$1charph* self, char* sep){
void* __result_obj__;
void* right_value99;
void* right_value100;
struct buffer* __exception_result_var_b68;
struct buffer* buf_67;
int n_68;
char* __exception_result_var_b71;
char* it_71;
_Bool __exception_result_var_b72;
char* __exception_result_var_b75;
struct buffer* __exception_result_var_b76;
int __exception_result_var_b77;
_Bool _if_conditional38;
struct buffer* __exception_result_var_b78;
void* right_value101;
char* __exception_result_var_b79;
char* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value99 = (void*)0;
right_value100 = (void*)0;
memset(&buf_67, 0, sizeof(struct buffer*));
memset(&n_68, 0, sizeof(int));
memset(&it_71, 0, sizeof(char*));
right_value101 = (void*)0;
                buf_67=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 1028, 747),__exception_result_var_b68=((struct buffer*)(right_value100=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value99=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1028, "buffer"))), "./neo-c.h", 1028, 746)))))), come_pop_stackframe(), __exception_result_var_b68));
                come_call_finalizer3(right_value99,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value100,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                n_68=0;
                for(                it_71=(come_push_stackframe("./neo-c.h", 1031, 762),__exception_result_var_b71=list$1charph_begin(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 1031, 748)), "./neo-c.h", 1031, 749))), come_pop_stackframe(), __exception_result_var_b71);                !(come_push_stackframe("./neo-c.h", 1031, 767),__exception_result_var_b72=list$1charph_end(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 1031, 763)), "./neo-c.h", 1031, 764))), come_pop_stackframe(), __exception_result_var_b72);                it_71=(come_push_stackframe("./neo-c.h", 1031, 786),__exception_result_var_b75=list$1charph_next(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 1031, 768)), "./neo-c.h", 1031, 769))), come_pop_stackframe(), __exception_result_var_b75)                ){
                    (come_push_stackframe("./neo-c.h", 1032, 789),__exception_result_var_b76=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_67, "./neo-c.h", 1032, 787)), "./neo-c.h", 1032, 788)),it_71), come_pop_stackframe(), __exception_result_var_b76);
                    if(_if_conditional38=n_68<(come_push_stackframe("./neo-c.h", 1034, 794),__exception_result_var_b77=list$1charph_length(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 1034, 790)), "./neo-c.h", 1034, 791))), come_pop_stackframe(), __exception_result_var_b77)-1,                    _if_conditional38) {
                        (come_push_stackframe("./neo-c.h", 1035, 797),__exception_result_var_b78=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_67, "./neo-c.h", 1035, 795)), "./neo-c.h", 1035, 796)),sep), come_pop_stackframe(), __exception_result_var_b78);
                    }
                    n_68++;
                }
                __result70__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 1041, 800),__exception_result_var_b79=((char*)(right_value101=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_67, "./neo-c.h", 1041, 798)), "./neo-c.h", 1041, 799))))), come_pop_stackframe(), __exception_result_var_b79);
                come_call_finalizer3(buf_67,buffer_finalize, 0, 0, 0, 0, (void*)0);
                right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result70__;
                come_call_finalizer3(buf_67,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional33;
char* result_69;
void* __exception_result_var_b69;
char* __result61__;
_Bool _if_conditional34;
char* __result62__;
char* result_70;
void* __exception_result_var_b70;
char* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_69, 0, sizeof(char*));
memset(&result_70, 0, sizeof(char*));
                    if(_if_conditional33=self==((void*)0),                    _if_conditional33) {
                        (come_push_stackframe("./neo-c.h", 284, 750),__exception_result_var_b69=memset(&result_69,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b69);
                        __result61__ = __result_obj__ = result_69;
                        return __result61__;
                    }
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 287, 751)), "./neo-c.h", 287, 752))->it=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 287, 753)), "./neo-c.h", 287, 754))->head;
                    if(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 289, 755)), "./neo-c.h", 289, 756))->it) {
                        __result62__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 290, 757)), "./neo-c.h", 290, 758))->it, "./neo-c.h", 290, 759)), "./neo-c.h", 290, 760))->item;
                        return __result62__;
                    }
                    (come_push_stackframe("./neo-c.h", 294, 761),__exception_result_var_b70=memset(&result_70,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b70);
                    __result63__ = __result_obj__ = result_70;
                    return __result63__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result64__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result64__ = self==((void*)0)||((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 317, 765)), "./neo-c.h", 317, 766))->it==((void*)0);
                    return __result64__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional35;
char* result_72;
void* __exception_result_var_b73;
char* __result65__;
_Bool _if_conditional36;
char* __result66__;
char* result_73;
void* __exception_result_var_b74;
char* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_72, 0, sizeof(char*));
memset(&result_73, 0, sizeof(char*));
                    if(_if_conditional35=self==((void*)0)||((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 299, 770)), "./neo-c.h", 299, 771))->it==((void*)0),                    _if_conditional35) {
                        (come_push_stackframe("./neo-c.h", 301, 772),__exception_result_var_b73=memset(&result_72,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b73);
                        __result65__ = __result_obj__ = result_72;
                        return __result65__;
                    }
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 305, 773)), "./neo-c.h", 305, 774))->it=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 305, 775)), "./neo-c.h", 305, 776))->it, "./neo-c.h", 305, 777)), "./neo-c.h", 305, 778))->next;
                    if(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 307, 779)), "./neo-c.h", 307, 780))->it) {
                        __result66__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 308, 781)), "./neo-c.h", 308, 782))->it, "./neo-c.h", 308, 783)), "./neo-c.h", 308, 784))->item;
                        return __result66__;
                    }
                    (come_push_stackframe("./neo-c.h", 312, 785),__exception_result_var_b74=memset(&result_73,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b74);
                    __result67__ = __result_obj__ = result_73;
                    return __result67__;
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional37;
int __result68__;
int __result69__;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional37=self==((void*)0),                        _if_conditional37) {
                            __result68__ = 0;
                            return __result68__;
                        }
                        __result69__ = ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 360, 792)), "./neo-c.h", 360, 793))->len;
                        return __result69__;
}

static void va_list_finalize(va_list self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

int transpile_v2(struct sInfo* info){
void* __result_obj__;
int __result71__;
memset(&__result_obj__, 0, sizeof(void*));
    __result71__ = 0;
    return __result71__;
}

_Bool output_source_file_v2(struct sInfo* info){
void* __result_obj__;
void* right_value104;
char* __exception_result_var_b82;
char* output_file_name_74;
void* right_value105;
char* __exception_result_var_b83;
int __exception_result_var_b84;
_Bool __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
memset(&output_file_name_74, 0, sizeof(char*));
right_value105 = (void*)0;
    output_file_name_74=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 100, 808),__exception_result_var_b82=((char*)(right_value104=xsprintf("%s.c",((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 100, 806)), "02transpile.c", 100, 807))->sname))), come_pop_stackframe(), __exception_result_var_b82));
    right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("02transpile.c", 104, 812),__exception_result_var_b84=string_write(((char*)come_null_check(((char*)come_null_check((come_push_stackframe("02transpile.c", 104, 809),__exception_result_var_b83=((char*)(right_value105=__builtin_string("int main(int argc, char** argv) { return 0; }\n"))), come_pop_stackframe(), __exception_result_var_b83), "02transpile.c", 104, 810)), "02transpile.c", 104, 811)),output_file_name_74,(_Bool)0), come_pop_stackframe(), __exception_result_var_b84);
    right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result72__ = (_Bool)1;
    output_file_name_74 = come_decrement_ref_count2(output_file_name_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result72__;
    output_file_name_74 = come_decrement_ref_count2(output_file_name_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void clear_tmp_file(struct sInfo* info){
void* __result_obj__;
char* input_file_name_75;
_Bool __exception_result_var_b85;
_Bool _if_conditional39;
void* right_value106;
void* right_value107;
int __exception_result_var_b86;
memset(&__result_obj__, 0, sizeof(void*));
memset(&input_file_name_75, 0, sizeof(char*));
right_value106 = (void*)0;
right_value107 = (void*)0;
    input_file_name_75=(char*)come_increment_ref_count(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 111, 813)), "02transpile.c", 111, 814))->sname);
    if(_if_conditional39=input_file_name_75!=((void*)0)&&(come_push_stackframe("02transpile.c", 113, 815),__exception_result_var_b85=string_operator_not_equals(input_file_name_75,""), come_pop_stackframe(), __exception_result_var_b85),    _if_conditional39) {
        (come_push_stackframe("02transpile.c", 114, 816),__exception_result_var_b86=system(((char*)(right_value107=xsprintf("rm -f \%s.*",((char*)(right_value106=string_to_string(input_file_name_75))))))), come_pop_stackframe(), __exception_result_var_b86);
        right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    input_file_name_75 = come_decrement_ref_count2(input_file_name_75, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void clear_tmp_file_without_object_file(struct sInfo* info){
void* __result_obj__;
char* input_file_name_76;
_Bool __exception_result_var_b87;
_Bool _if_conditional40;
void* right_value108;
void* right_value109;
void* right_value110;
int __exception_result_var_b88;
memset(&__result_obj__, 0, sizeof(void*));
memset(&input_file_name_76, 0, sizeof(char*));
right_value108 = (void*)0;
right_value109 = (void*)0;
right_value110 = (void*)0;
    input_file_name_76=(char*)come_increment_ref_count(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 120, 817)), "02transpile.c", 120, 818))->sname);
    if(_if_conditional40=input_file_name_76!=((void*)0)&&(come_push_stackframe("02transpile.c", 122, 819),__exception_result_var_b87=string_operator_not_equals(input_file_name_76,""), come_pop_stackframe(), __exception_result_var_b87),    _if_conditional40) {
        (come_push_stackframe("02transpile.c", 123, 820),__exception_result_var_b88=system(((char*)(right_value110=xsprintf("rm -f \%s.i* \%s.c*",((char*)(right_value108=string_to_string(input_file_name_76))),((char*)(right_value109=string_to_string(input_file_name_76))))))), come_pop_stackframe(), __exception_result_var_b88);
        right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    input_file_name_76 = come_decrement_ref_count2(input_file_name_76, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void clear_tmp_file_without_object_file_and_ccfile(struct sInfo* info){
void* __result_obj__;
char* input_file_name_77;
_Bool __exception_result_var_b89;
_Bool _if_conditional41;
void* right_value111;
void* right_value112;
void* right_value113;
int __exception_result_var_b90;
memset(&__result_obj__, 0, sizeof(void*));
memset(&input_file_name_77, 0, sizeof(char*));
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
    input_file_name_77=(char*)come_increment_ref_count(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 129, 821)), "02transpile.c", 129, 822))->sname);
    if(_if_conditional41=input_file_name_77!=((void*)0)&&(come_push_stackframe("02transpile.c", 131, 823),__exception_result_var_b89=string_operator_not_equals(input_file_name_77,""), come_pop_stackframe(), __exception_result_var_b89),    _if_conditional41) {
        (come_push_stackframe("02transpile.c", 132, 824),__exception_result_var_b90=system(((char*)(right_value113=xsprintf("rm -f \%s.i* \%s.c.out",((char*)(right_value111=string_to_string(input_file_name_77))),((char*)(right_value112=string_to_string(input_file_name_77))))))), come_pop_stackframe(), __exception_result_var_b90);
        right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    input_file_name_77 = come_decrement_ref_count2(input_file_name_77, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static _Bool cpp(struct sInfo* info){
void* __result_obj__;
char* input_file_name_78;
char* output_file_name_79;
_Bool _if_conditional42;
void* right_value114;
char* __exception_result_var_b91;
char* __dec_obj17;
void* right_value115;
char* __exception_result_var_b92;
char* __dec_obj18;
void* right_value116;
char* __exception_result_var_b93;
char* cmd_80;
_Bool exist_common_h_81;
struct _IO_FILE* __exception_result_var_b94;
struct _IO_FILE* f_82;
_Bool _if_conditional43;
_Bool __exception_result_var_b95;
_Bool _if_conditional44;
_Bool _if_conditional45;
int __exception_result_var_b96;
_Bool _if_conditional46;
int __exception_result_var_b97;
int rc_83;
_Bool _if_conditional47;
void* right_value117;
char* __exception_result_var_b98;
void* right_value118;
char* __exception_result_var_b99;
char* cmd2_84;
_Bool _if_conditional48;
int __exception_result_var_b100;
int __exception_result_var_b101;
int rc_85;
_Bool _if_conditional49;
int __exception_result_var_b102;
void* right_value119;
char* __exception_result_var_b103;
char* command2_86;
_Bool _if_conditional50;
int __exception_result_var_b104;
int __exception_result_var_b105;
char* __exception_result_var_b106;
void* right_value120;
char* __exception_result_var_b107;
void* right_value121;
char* __exception_result_var_b108;
char* cmd3_87;
_Bool _if_conditional51;
int __exception_result_var_b109;
int __exception_result_var_b110;
int rc_88;
void* right_value122;
char* __exception_result_var_b111;
char* command2_89;
_Bool _if_conditional52;
int __exception_result_var_b112;
int __exception_result_var_b113;
_Bool _if_conditional53;
void* right_value123;
char* __exception_result_var_b114;
void* right_value124;
char* __exception_result_var_b115;
char* cmd4_90;
void* right_value125;
char* __exception_result_var_b116;
char* command_91;
_Bool _if_conditional54;
int __exception_result_var_b117;
int __exception_result_var_b118;
void* right_value126;
char* __exception_result_var_b119;
char* command2_92;
_Bool _if_conditional55;
int __exception_result_var_b120;
int __exception_result_var_b121;
_Bool _if_conditional56;
int __exception_result_var_b122;
_Bool __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&input_file_name_78, 0, sizeof(char*));
memset(&output_file_name_79, 0, sizeof(char*));
right_value114 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
memset(&cmd_80, 0, sizeof(char*));
memset(&exist_common_h_81, 0, sizeof(_Bool));
memset(&f_82, 0, sizeof(struct _IO_FILE*));
memset(&rc_83, 0, sizeof(int));
right_value117 = (void*)0;
right_value118 = (void*)0;
memset(&cmd2_84, 0, sizeof(char*));
memset(&rc_85, 0, sizeof(int));
right_value119 = (void*)0;
memset(&command2_86, 0, sizeof(char*));
right_value120 = (void*)0;
right_value121 = (void*)0;
memset(&cmd3_87, 0, sizeof(char*));
memset(&rc_88, 0, sizeof(int));
right_value122 = (void*)0;
memset(&command2_89, 0, sizeof(char*));
right_value123 = (void*)0;
right_value124 = (void*)0;
memset(&cmd4_90, 0, sizeof(char*));
right_value125 = (void*)0;
memset(&command_91, 0, sizeof(char*));
right_value126 = (void*)0;
memset(&command2_92, 0, sizeof(char*));
    input_file_name_78=(char*)come_increment_ref_count(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 138, 825)), "02transpile.c", 138, 826))->sname);
    if(_if_conditional42=!((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 141, 827)), "02transpile.c", 141, 828))->output_header_file&&((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 141, 829)), "02transpile.c", 141, 830))->output_file_name,    _if_conditional42) {
        __dec_obj17=output_file_name_79;
        output_file_name_79=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 142, 833),__exception_result_var_b91=((char*)(right_value114=string_operator_add(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 142, 831)), "02transpile.c", 142, 832))->output_file_name,".i"))), come_pop_stackframe(), __exception_result_var_b91));
        __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj18=output_file_name_79;
        output_file_name_79=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 145, 836),__exception_result_var_b92=((char*)(right_value115=string_operator_add(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 145, 834)), "02transpile.c", 145, 835))->sname,".i"))), come_pop_stackframe(), __exception_result_var_b92));
        __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    cmd_80=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 148, 837),__exception_result_var_b93=((char*)(right_value116=xsprintf("uname -a | grep Darwin 1> /dev/null 2>/dev/null"))), come_pop_stackframe(), __exception_result_var_b93));
    right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    exist_common_h_81=(_Bool)0;
    {
        f_82=(come_push_stackframe("02transpile.c", 152, 838),__exception_result_var_b94=fopen("common.h","r"), come_pop_stackframe(), __exception_result_var_b94);
        if(f_82) {
            exist_common_h_81=(_Bool)1;
        }
        if(_if_conditional44=(come_push_stackframe("02transpile.c", 156, 841),__exception_result_var_b95=string_operator_equals(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 156, 839)), "02transpile.c", 156, 840))->output_file_name,"common.h"), come_pop_stackframe(), __exception_result_var_b95),        _if_conditional44) {
            exist_common_h_81=(_Bool)0;
        }
        if(f_82) {
            (come_push_stackframe("02transpile.c", 160, 842),__exception_result_var_b96=fclose(f_82), come_pop_stackframe(), __exception_result_var_b96);
        }
    }
    if(_if_conditional46=!gCommonHeader,    _if_conditional46) {
        exist_common_h_81=(_Bool)0;
    }
    rc_83=(come_push_stackframe("02transpile.c", 169, 843),__exception_result_var_b97=system(cmd_80), come_pop_stackframe(), __exception_result_var_b97);
    if(_if_conditional47=rc_83==0,    _if_conditional47) {
        cmd2_84=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 171, 847),__exception_result_var_b99=((char*)(right_value118=xsprintf("gcc -E -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DCOMELANG2 -D__DARWIN_ARM__ -I/opt/homebrew/opt/pcre/include -I/opt/homebrew/opt/boehmgc/include/ -U__GNUC__ %s %s > %s 2> %s.cpp.out",((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 171, 844)), "02transpile.c", 171, 845))->cpp_option,"/usr/local/","/usr/local/",exist_common_h_81?(come_push_stackframe("02transpile.c", 171, 846),__exception_result_var_b98=((char*)(right_value117=__builtin_string(" -include common.h "))), come_pop_stackframe(), __exception_result_var_b98):"",input_file_name_78,output_file_name_79,output_file_name_79))), come_pop_stackframe(), __exception_result_var_b99));
        right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 173, 848)), "02transpile.c", 173, 849))->verbose) {
            (come_push_stackframe("02transpile.c", 173, 850),__exception_result_var_b100=puts(cmd2_84), come_pop_stackframe(), __exception_result_var_b100);
        }
        rc_85=(come_push_stackframe("02transpile.c", 175, 851),__exception_result_var_b101=system(cmd2_84), come_pop_stackframe(), __exception_result_var_b101);
        if(_if_conditional49=rc_85!=0,        _if_conditional49) {
            (come_push_stackframe("02transpile.c", 178, 852),__exception_result_var_b102=printf("failed to cpp(2) (%s)\n",cmd2_84), come_pop_stackframe(), __exception_result_var_b102);
            (come_push_stackframe("02transpile.c", 179,853),exit(5),come_pop_stackframe());
        }
        command2_86=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 182, 854),__exception_result_var_b103=((char*)(right_value119=xsprintf("grep error\\: %s.cpp.out",output_file_name_79))), come_pop_stackframe(), __exception_result_var_b103));
        right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 184, 855)), "02transpile.c", 184, 856))->verbose) {
            (come_push_stackframe("02transpile.c", 184, 857),__exception_result_var_b104=puts(command2_86), come_pop_stackframe(), __exception_result_var_b104);
        }
        (void)(come_push_stackframe("02transpile.c", 185, 858),__exception_result_var_b105=system(command2_86), come_pop_stackframe(), __exception_result_var_b105);
        cmd2_84 = come_decrement_ref_count2(cmd2_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_86 = come_decrement_ref_count2(command2_86, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        cmd3_87=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 189, 863),__exception_result_var_b108=((char*)(right_value121=xsprintf("cpp -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DCOMELANG2 -U__GNUC__ %s %s > %s 2> %s.cpp.out",((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 189, 859)), "02transpile.c", 189, 860))->cpp_option,(come_push_stackframe("02transpile.c", 189, 861),__exception_result_var_b106=getenv("HOME"), come_pop_stackframe(), __exception_result_var_b106),"/usr/local/","/usr/local/",exist_common_h_81?(come_push_stackframe("02transpile.c", 189, 862),__exception_result_var_b107=((char*)(right_value120=__builtin_string(" -include common.h "))), come_pop_stackframe(), __exception_result_var_b107):"",input_file_name_78,output_file_name_79,output_file_name_79))), come_pop_stackframe(), __exception_result_var_b108));
        right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 191, 864)), "02transpile.c", 191, 865))->verbose) {
            (come_push_stackframe("02transpile.c", 191, 866),__exception_result_var_b109=puts(cmd3_87), come_pop_stackframe(), __exception_result_var_b109);
        }
        rc_88=(come_push_stackframe("02transpile.c", 192, 867),__exception_result_var_b110=system(cmd3_87), come_pop_stackframe(), __exception_result_var_b110);
        command2_89=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 194, 868),__exception_result_var_b111=((char*)(right_value122=xsprintf("grep error\\: %s.cpp.out",output_file_name_79))), come_pop_stackframe(), __exception_result_var_b111));
        right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 196, 869)), "02transpile.c", 196, 870))->verbose) {
            (come_push_stackframe("02transpile.c", 196, 871),__exception_result_var_b112=puts(command2_89), come_pop_stackframe(), __exception_result_var_b112);
        }
        (void)(come_push_stackframe("02transpile.c", 197, 872),__exception_result_var_b113=system(command2_89), come_pop_stackframe(), __exception_result_var_b113);
        if(_if_conditional53=rc_88!=0,        _if_conditional53) {
            cmd4_90=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 200, 876),__exception_result_var_b115=((char*)(right_value124=xsprintf("cpp -I. %s -DPREFIX=%s -I%s/include -C %s %s > %s 2> %s.cpp.out",((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 200, 873)), "02transpile.c", 200, 874))->cpp_option,"/usr/local/","/usr/local/",exist_common_h_81?(come_push_stackframe("02transpile.c", 200, 875),__exception_result_var_b114=((char*)(right_value123=__builtin_string(" -include common.h "))), come_pop_stackframe(), __exception_result_var_b114):"",input_file_name_78,output_file_name_79,output_file_name_79))), come_pop_stackframe(), __exception_result_var_b115));
            right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            command_91=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 201, 879),__exception_result_var_b116=((char*)(right_value125=xsprintf("clang -o %s -c %s %s >> %s.out 2>&1",output_file_name_79,input_file_name_78,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 201, 877)), "02transpile.c", 201, 878))->clang_option,input_file_name_78))), come_pop_stackframe(), __exception_result_var_b116));
            right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 203, 880)), "02transpile.c", 203, 881))->verbose) {
                (come_push_stackframe("02transpile.c", 203, 882),__exception_result_var_b117=puts(cmd4_90), come_pop_stackframe(), __exception_result_var_b117);
            }
            rc_88=(come_push_stackframe("02transpile.c", 204, 883),__exception_result_var_b118=system(cmd4_90), come_pop_stackframe(), __exception_result_var_b118);
            command2_92=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 206, 884),__exception_result_var_b119=((char*)(right_value126=xsprintf("grep error\\: %s.cpp.out",output_file_name_79))), come_pop_stackframe(), __exception_result_var_b119));
            right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 208, 885)), "02transpile.c", 208, 886))->verbose) {
                (come_push_stackframe("02transpile.c", 208, 887),__exception_result_var_b120=puts(command2_92), come_pop_stackframe(), __exception_result_var_b120);
            }
            (void)(come_push_stackframe("02transpile.c", 209, 888),__exception_result_var_b121=system(command2_92), come_pop_stackframe(), __exception_result_var_b121);
            if(_if_conditional56=rc_88!=0,            _if_conditional56) {
                (come_push_stackframe("02transpile.c", 212, 889),__exception_result_var_b122=printf("failed to cpp(2) (%s)\n",cmd4_90), come_pop_stackframe(), __exception_result_var_b122);
                (come_push_stackframe("02transpile.c", 213,890),exit(5),come_pop_stackframe());
            }
            cmd4_90 = come_decrement_ref_count2(cmd4_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            command_91 = come_decrement_ref_count2(command_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            command2_92 = come_decrement_ref_count2(command2_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        cmd3_87 = come_decrement_ref_count2(cmd3_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_89 = come_decrement_ref_count2(command2_89, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result73__ = (_Bool)1;
    input_file_name_78 = come_decrement_ref_count2(input_file_name_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_79 = come_decrement_ref_count2(output_file_name_79, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cmd_80 = come_decrement_ref_count2(cmd_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result73__;
    input_file_name_78 = come_decrement_ref_count2(input_file_name_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_79 = come_decrement_ref_count2(output_file_name_79, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cmd_80 = come_decrement_ref_count2(cmd_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1charph* object_files){
void* __result_obj__;
void* right_value127;
char* __exception_result_var_b123;
char* input_file_name_93;
char* __dec_obj19;
char* output_file_name_94;
_Bool _if_conditional57;
void* right_value128;
char* __exception_result_var_b124;
char* __dec_obj20;
void* right_value129;
char* __exception_result_var_b125;
char* __dec_obj21;
void* right_value130;
char* __exception_result_var_b126;
char* command_95;
_Bool _if_conditional58;
int __exception_result_var_b127;
int __exception_result_var_b128;
int rc_96;
void* right_value131;
char* __exception_result_var_b129;
char* command2_97;
_Bool _if_conditional59;
int __exception_result_var_b130;
int __exception_result_var_b131;
_Bool _if_conditional60;
int __exception_result_var_b132;
_Bool __result74__;
_Bool _if_conditional61;
void* right_value132;
char* __exception_result_var_b133;
struct list$1charph* __exception_result_var_b134;
_Bool __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value127 = (void*)0;
memset(&input_file_name_93, 0, sizeof(char*));
memset(&output_file_name_94, 0, sizeof(char*));
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
memset(&command_95, 0, sizeof(char*));
memset(&rc_96, 0, sizeof(int));
right_value131 = (void*)0;
memset(&command2_97, 0, sizeof(char*));
right_value132 = (void*)0;
    input_file_name_93=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 223, 893),__exception_result_var_b123=((char*)(right_value127=string_operator_add(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 223, 891)), "02transpile.c", 223, 892))->sname,".c"))), come_pop_stackframe(), __exception_result_var_b123));
    right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj19=output_file_name_94;
    output_file_name_94=((void*)0);
    __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(_if_conditional57=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 226, 894)), "02transpile.c", 226, 895))->output_file_name&&output_object_file,    _if_conditional57) {
        __dec_obj20=output_file_name_94;
        output_file_name_94=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 227, 898),__exception_result_var_b124=((char*)(right_value128=__builtin_string(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 227, 896)), "02transpile.c", 227, 897))->output_file_name))), come_pop_stackframe(), __exception_result_var_b124));
        __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj21=output_file_name_94;
        output_file_name_94=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 230, 901),__exception_result_var_b125=((char*)(right_value129=string_operator_add(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 230, 899)), "02transpile.c", 230, 900))->sname,".o"))), come_pop_stackframe(), __exception_result_var_b125));
        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    command_95=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 233, 904),__exception_result_var_b126=((char*)(right_value130=xsprintf("clang -o %s -c %s %s >> %s.out 2>&1",output_file_name_94,input_file_name_93,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 233, 902)), "02transpile.c", 233, 903))->clang_option,input_file_name_93))), come_pop_stackframe(), __exception_result_var_b126));
    right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 235, 905)), "02transpile.c", 235, 906))->verbose) {
        (come_push_stackframe("02transpile.c", 235, 907),__exception_result_var_b127=puts(command_95), come_pop_stackframe(), __exception_result_var_b127);
    }
    rc_96=(come_push_stackframe("02transpile.c", 236, 908),__exception_result_var_b128=system(command_95), come_pop_stackframe(), __exception_result_var_b128);
    command2_97=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 238, 909),__exception_result_var_b129=((char*)(right_value131=xsprintf("grep error\\: %s.out",input_file_name_93))), come_pop_stackframe(), __exception_result_var_b129));
    right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 240, 910)), "02transpile.c", 240, 911))->verbose) {
        (come_push_stackframe("02transpile.c", 240, 912),__exception_result_var_b130=puts(command2_97), come_pop_stackframe(), __exception_result_var_b130);
    }
    (void)(come_push_stackframe("02transpile.c", 241, 913),__exception_result_var_b131=system(command2_97), come_pop_stackframe(), __exception_result_var_b131);
    if(_if_conditional60=rc_96!=0,    _if_conditional60) {
        (come_push_stackframe("02transpile.c", 244, 918),__exception_result_var_b132=printf("%s %d: clang is faild\n",((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 244, 914)), "02transpile.c", 244, 915))->sname,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 244, 916)), "02transpile.c", 244, 917))->sline), come_pop_stackframe(), __exception_result_var_b132);
        __result74__ = (_Bool)0;
        input_file_name_93 = come_decrement_ref_count2(input_file_name_93, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        output_file_name_94 = come_decrement_ref_count2(output_file_name_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command_95 = come_decrement_ref_count2(command_95, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_97 = come_decrement_ref_count2(command2_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result74__;
    }
    if(_if_conditional61=!output_object_file,    _if_conditional61) {
        (come_push_stackframe("02transpile.c", 249, 922),__exception_result_var_b134=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(object_files, "02transpile.c", 249, 919)), "02transpile.c", 249, 920)),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 249, 921),__exception_result_var_b133=((char*)(right_value132=__builtin_string(output_file_name_94))), come_pop_stackframe(), __exception_result_var_b133))), come_pop_stackframe(), __exception_result_var_b134);
        right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __result75__ = (_Bool)1;
    input_file_name_93 = come_decrement_ref_count2(input_file_name_93, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_94 = come_decrement_ref_count2(output_file_name_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command_95 = come_decrement_ref_count2(command_95, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command2_97 = come_decrement_ref_count2(command2_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result75__;
    input_file_name_93 = come_decrement_ref_count2(input_file_name_93, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_94 = come_decrement_ref_count2(output_file_name_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command_95 = come_decrement_ref_count2(command_95, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command2_97 = come_decrement_ref_count2(command2_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static _Bool linker(struct sInfo* info, struct list$1charph* object_files){
void* __result_obj__;
char* __dec_obj22;
char* output_file_name_98;
_Bool _if_conditional62;
void* right_value133;
char* __exception_result_var_b135;
char* __dec_obj23;
void* right_value134;
char* __exception_result_var_b136;
char* __dec_obj24;
void* right_value135;
void* right_value136;
struct buffer* __exception_result_var_b137;
struct buffer* command_99;
char* __exception_result_var_b138;
void* right_value137;
char* __exception_result_var_b139;
struct buffer* __exception_result_var_b140;
struct list$1charph* o2_saved_100;
char* __exception_result_var_b141;
char* it_101;
_Bool __exception_result_var_b142;
char* __exception_result_var_b143;
void* right_value138;
char* __exception_result_var_b144;
struct buffer* __exception_result_var_b145;
_Bool _if_conditional63;
struct buffer* __exception_result_var_b146;
_Bool _if_conditional64;
struct buffer* __exception_result_var_b147;
struct buffer* __exception_result_var_b148;
void* right_value139;
char* __exception_result_var_b149;
char* cmd_102;
int __exception_result_var_b150;
int rc_103;
_Bool _if_conditional65;
struct buffer* __exception_result_var_b151;
void* right_value140;
char* __exception_result_var_b152;
struct buffer* __exception_result_var_b153;
_Bool _if_conditional66;
void* right_value141;
char* __exception_result_var_b154;
struct buffer* __exception_result_var_b155;
_Bool _if_conditional67;
void* right_value142;
char* __exception_result_var_b156;
int __exception_result_var_b157;
void* right_value143;
char* __exception_result_var_b158;
int __exception_result_var_b159;
_Bool _if_conditional68;
int __exception_result_var_b160;
_Bool __result76__;
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&output_file_name_98, 0, sizeof(char*));
right_value133 = (void*)0;
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value136 = (void*)0;
memset(&command_99, 0, sizeof(struct buffer*));
right_value137 = (void*)0;
memset(&o2_saved_100, 0, sizeof(struct list$1charph*));
memset(&it_101, 0, sizeof(char*));
right_value138 = (void*)0;
right_value139 = (void*)0;
memset(&cmd_102, 0, sizeof(char*));
memset(&rc_103, 0, sizeof(int));
right_value140 = (void*)0;
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
    __dec_obj22=output_file_name_98;
    output_file_name_98=((void*)0);
    __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 258, 923)), "02transpile.c", 258, 924))->output_file_name) {
        __dec_obj23=output_file_name_98;
        output_file_name_98=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 259, 927),__exception_result_var_b135=((char*)(right_value133=__builtin_string(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 259, 925)), "02transpile.c", 259, 926))->output_file_name))), come_pop_stackframe(), __exception_result_var_b135));
        __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj24=output_file_name_98;
        output_file_name_98=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 262, 930),__exception_result_var_b136=((char*)(right_value134=xnoextname(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 262, 928)), "02transpile.c", 262, 929))->sname))), come_pop_stackframe(), __exception_result_var_b136));
        __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    command_99=(struct buffer*)come_increment_ref_count((come_push_stackframe("02transpile.c", 265, 932),__exception_result_var_b137=((struct buffer*)(right_value136=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value135=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 265, "buffer"))), "02transpile.c", 265, 931)))))), come_pop_stackframe(), __exception_result_var_b137));
    come_call_finalizer3(right_value135,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value136,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("02transpile.c", 267, 937),__exception_result_var_b140=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(command_99, "02transpile.c", 267, 933)), "02transpile.c", 267, 934)),(come_push_stackframe("02transpile.c", 267, 936),__exception_result_var_b139=((char*)(right_value137=xsprintf("clang -o %s -L%s/lib -L%s/lib ",output_file_name_98,(come_push_stackframe("02transpile.c", 267, 935),__exception_result_var_b138=getenv("HOME"), come_pop_stackframe(), __exception_result_var_b138),"/usr/local/"))), come_pop_stackframe(), __exception_result_var_b139)), come_pop_stackframe(), __exception_result_var_b140);
    right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    o2_saved_100=(object_files),it_101=(come_push_stackframe("02transpile.c", 269, 940),__exception_result_var_b141=list$1charph_begin(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((o2_saved_100), "02transpile.c", 269, 938)), "02transpile.c", 269, 939))), come_pop_stackframe(), __exception_result_var_b141);    !(come_push_stackframe("02transpile.c", 269, 943),__exception_result_var_b142=list$1charph_end(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((o2_saved_100), "02transpile.c", 269, 941)), "02transpile.c", 269, 942))), come_pop_stackframe(), __exception_result_var_b142);    it_101=(come_push_stackframe("02transpile.c", 269, 946),__exception_result_var_b143=list$1charph_next(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((o2_saved_100), "02transpile.c", 269, 944)), "02transpile.c", 269, 945))), come_pop_stackframe(), __exception_result_var_b143)    ){
        (come_push_stackframe("02transpile.c", 270, 950),__exception_result_var_b145=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(command_99, "02transpile.c", 270, 947)), "02transpile.c", 270, 948)),(come_push_stackframe("02transpile.c", 270, 949),__exception_result_var_b144=((char*)(right_value138=xsprintf("%s ",it_101))), come_pop_stackframe(), __exception_result_var_b144)), come_pop_stackframe(), __exception_result_var_b145);
        right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    if(gComeGC) {
        (come_push_stackframe("02transpile.c", 274, 953),__exception_result_var_b146=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(command_99, "02transpile.c", 274, 951)), "02transpile.c", 274, 952)),"-L/usr/local/lib -lneo-c-gc "), come_pop_stackframe(), __exception_result_var_b146);
    }
    else {
        if(gComeLink) {
            (come_push_stackframe("02transpile.c", 277, 956),__exception_result_var_b147=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(command_99, "02transpile.c", 277, 954)), "02transpile.c", 277, 955)),"-L/usr/local/lib -lneo-c "), come_pop_stackframe(), __exception_result_var_b147);
        }
        else {
            (come_push_stackframe("02transpile.c", 280, 959),__exception_result_var_b148=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(command_99, "02transpile.c", 280, 957)), "02transpile.c", 280, 958)),"-L/usr/local/lib "), come_pop_stackframe(), __exception_result_var_b148);
        }
    }
    cmd_102=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 282, 960),__exception_result_var_b149=((char*)(right_value139=xsprintf("which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null"))), come_pop_stackframe(), __exception_result_var_b149));
    right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    rc_103=(come_push_stackframe("02transpile.c", 284, 961),__exception_result_var_b150=system(cmd_102), come_pop_stackframe(), __exception_result_var_b150);
    if(_if_conditional65=rc_103==0,    _if_conditional65) {
        (come_push_stackframe("02transpile.c", 286, 964),__exception_result_var_b151=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(command_99, "02transpile.c", 286, 962)), "02transpile.c", 286, 963))," -L/opt/homebrew/opt/pcre/lib "), come_pop_stackframe(), __exception_result_var_b151);
    }
    (come_push_stackframe("02transpile.c", 288, 970),__exception_result_var_b153=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(command_99, "02transpile.c", 288, 965)), "02transpile.c", 288, 966)),(come_push_stackframe("02transpile.c", 288, 969),__exception_result_var_b152=((char*)(right_value140=xsprintf(" %s ",((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 288, 967)), "02transpile.c", 288, 968))->clang_option))), come_pop_stackframe(), __exception_result_var_b152)), come_pop_stackframe(), __exception_result_var_b153);
    right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(gComeGC) {
        (come_push_stackframe("02transpile.c", 291, 974),__exception_result_var_b155=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(command_99, "02transpile.c", 291, 971)), "02transpile.c", 291, 972)),(come_push_stackframe("02transpile.c", 291, 973),__exception_result_var_b154=((char*)(right_value141=xsprintf(" -L/opt/homebrew/opt/boehmgc/lib -lgc "))), come_pop_stackframe(), __exception_result_var_b154)), come_pop_stackframe(), __exception_result_var_b155);
        right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    if(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 294, 975)), "02transpile.c", 294, 976))->verbose) {
        (come_push_stackframe("02transpile.c", 294, 980),__exception_result_var_b157=puts((come_push_stackframe("02transpile.c", 294, 979),__exception_result_var_b156=((char*)(right_value142=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(command_99, "02transpile.c", 294, 977)), "02transpile.c", 294, 978))))), come_pop_stackframe(), __exception_result_var_b156)), come_pop_stackframe(), __exception_result_var_b157);
        right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    rc_103=(come_push_stackframe("02transpile.c", 295, 984),__exception_result_var_b159=system((come_push_stackframe("02transpile.c", 295, 983),__exception_result_var_b158=((char*)(right_value143=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(command_99, "02transpile.c", 295, 981)), "02transpile.c", 295, 982))))), come_pop_stackframe(), __exception_result_var_b158)), come_pop_stackframe(), __exception_result_var_b159);
    right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional68=rc_103!=0,    _if_conditional68) {
        (come_push_stackframe("02transpile.c", 298, 989),__exception_result_var_b160=printf("%s %d: clang is faild\n",((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 298, 985)), "02transpile.c", 298, 986))->sname,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 298, 987)), "02transpile.c", 298, 988))->sline), come_pop_stackframe(), __exception_result_var_b160);
        __result76__ = (_Bool)0;
        output_file_name_98 = come_decrement_ref_count2(output_file_name_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(command_99,buffer_finalize, 0, 0, 0, 0, (void*)0);
        cmd_102 = come_decrement_ref_count2(cmd_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result76__;
    }
    __result77__ = (_Bool)1;
    output_file_name_98 = come_decrement_ref_count2(output_file_name_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(command_99,buffer_finalize, 0, 0, 0, 0, (void*)0);
    cmd_102 = come_decrement_ref_count2(cmd_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result77__;
    output_file_name_98 = come_decrement_ref_count2(output_file_name_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(command_99,buffer_finalize, 0, 0, 0, 0, (void*)0);
    cmd_102 = come_decrement_ref_count2(cmd_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool new_project(int argc, char** argv){
void* __result_obj__;
void* right_value144;
char* __exception_result_var_b161;
char* project_name_104;
void* right_value145;
char* __exception_result_var_b162;
void* right_value146;
char* __exception_result_var_b163;
void* right_value147;
char* __exception_result_var_b164;
char* project_name_debug_105;
void* right_value148;
char* __exception_result_var_b165;
char* cc_106;
void* right_value149;
char* __exception_result_var_b166;
char* install_107;
void* right_value150;
char* __exception_result_var_b167;
char* libs_108;
void* right_value151;
char* __exception_result_var_b168;
char* os_109;
void* right_value152;
char* __exception_result_var_b169;
char* prefix_110;
void* right_value153;
char* __exception_result_var_b170;
char* cflags_111;
void* right_value154;
char* __exception_result_var_b171;
char* cflags_debug_112;
int __exception_result_var_b172;
_Bool _or_conditional1;
_Bool __exception_result_var_b173;
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
int __exception_result_var_b174;
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value144 = (void*)0;
memset(&project_name_104, 0, sizeof(char*));
right_value145 = (void*)0;
right_value146 = (void*)0;
right_value147 = (void*)0;
memset(&project_name_debug_105, 0, sizeof(char*));
right_value148 = (void*)0;
memset(&cc_106, 0, sizeof(char*));
right_value149 = (void*)0;
memset(&install_107, 0, sizeof(char*));
right_value150 = (void*)0;
memset(&libs_108, 0, sizeof(char*));
right_value151 = (void*)0;
memset(&os_109, 0, sizeof(char*));
right_value152 = (void*)0;
memset(&prefix_110, 0, sizeof(char*));
right_value153 = (void*)0;
memset(&cflags_111, 0, sizeof(char*));
right_value154 = (void*)0;
memset(&cflags_debug_112, 0, sizeof(char*));
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
    project_name_104=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 307, 991),__exception_result_var_b161=((char*)(right_value144=__builtin_string(((char**)come_null_check(argv, "02transpile.c", 307, 990))[2]))), come_pop_stackframe(), __exception_result_var_b161));
    right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    project_name_debug_105=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 308, 995),__exception_result_var_b164=((char*)(right_value147=string_operator_add((come_push_stackframe("02transpile.c", 308, 993),__exception_result_var_b162=((char*)(right_value145=__builtin_string(((char**)come_null_check(argv, "02transpile.c", 308, 992))[2]))), come_pop_stackframe(), __exception_result_var_b162),(come_push_stackframe("02transpile.c", 308, 994),__exception_result_var_b163=((char*)(right_value146=__builtin_string("-debug"))), come_pop_stackframe(), __exception_result_var_b163)))), come_pop_stackframe(), __exception_result_var_b164));
    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    cc_106=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 309, 996),__exception_result_var_b165=((char*)(right_value148=__builtin_string("neo-c"))), come_pop_stackframe(), __exception_result_var_b165));
    right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    install_107=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 310, 997),__exception_result_var_b166=((char*)(right_value149=__builtin_string("install"))), come_pop_stackframe(), __exception_result_var_b166));
    right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    libs_108=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 311, 998),__exception_result_var_b167=((char*)(right_value150=__builtin_string("-lpcre"))), come_pop_stackframe(), __exception_result_var_b167));
    right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    os_109=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 312, 999),__exception_result_var_b168=((char*)(right_value151=__builtin_string("linux"))), come_pop_stackframe(), __exception_result_var_b168));
    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    prefix_110=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 313, 1000),__exception_result_var_b169=((char*)(right_value152=__builtin_string("/usr/local/"))), come_pop_stackframe(), __exception_result_var_b169));
    right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    cflags_111=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 314, 1001),__exception_result_var_b170=((char*)(right_value153=__builtin_string(" -common-header -O2 "))), come_pop_stackframe(), __exception_result_var_b170));
    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    cflags_debug_112=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 315, 1002),__exception_result_var_b171=((char*)(right_value154=__builtin_string(" -common-header -gdwarf-4 -cg "))), come_pop_stackframe(), __exception_result_var_b171));
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_or_conditional1=(come_push_stackframe("02transpile.c", 317, 1003),__exception_result_var_b172=mkdir(project_name_104,448|56|4|1), come_pop_stackframe(), __exception_result_var_b172),    _or_conditional1 != 0) {
        (come_push_stackframe("02transpile.c", 317, 1004),__exception_result_var_b173=die("mkdir error"), come_pop_stackframe(), __exception_result_var_b173);
    }
    (come_push_stackframe("02transpile.c", 411, 1007),__exception_result_var_b174=charp_write(((char*)come_null_check(((char*)come_null_check(((char*)(right_value181=xsprintf("\#########################################\n\# istalled directories\n\#########################################\nprefix=\%s\nexec_prefix=${prefix}\nbindir=${exec_prefix}/bin\ndatadir=${datarootdir}\nmandir=${datarootdir}/man\nsharedstatedir=${prefix}/\%s\nsysconfdir=${prefix}/etc/\%s\nincludedir=${prefix}/include/\%s\ndatarootdir=${prefix}/share/\%s\ndocdir=${datarootdir}/doc\nlibdir=${exec_prefix}/lib\n\n\#########################################\n\# environmnet variables\n\#########################################\nCC=\%s\nINSTALL=\%s\nCFLAGS=\%s\nCFLAGS_DEBUG=\%s\nLIBS=\%s\nOS=\%s\nDESTDIR=\%s\nSRCS=$(wildcard *.c)\nSINGLE_SRCS=$(filter-out %%.c.c, $(SRCS))\nOBJS=$(SINGLE_SRCS:.c=.o)\nDEBUG_OBJS=$(SINGLE_SRCS:.c=.debug.o)\nTARGET=\%s\nTARGET_DEBUG=\%s\n\n\#########################################\n\# main\n\#########################################\nall: $(TARGET)\n\n$(TARGET): $(OBJS)\n\t$(CC) $(CFLAGS) $^ -o $@\n\n$(TARGET_DEBUG): $(DEBUG_OBJS)\n\t$(CC) $(CFLAGS_DEBUG) $^ -o $@\n\n%%.o: %%.c\n\t$(CC) $(CFLAGS) -c $< -o $@\n\n%%.debug.o: %%.c\n\t$(CC) $(CFLAGS_DEBUG) -c $< -o $@\n\n\#########################################\n\# header\n\#########################################\n\nheader: common.h\n\ncommon.h: $(SINGLE_SRCS)\n\tneo-c header -common-header $(SINGLE_SRCS)\n\n\#########################################\n\# install\n\#########################################\ninstall:\n\tmkdir -p \"$(DESTDIR)/bin\"\n\t$(INSTALL) -m 755 ./\%s \"$(DESTDIR)/bin\"\n\tmkdir -p \"$(DESTDIR)/include\"\n\tmkdir -p \"$(DESTDIR)/lib\"\n\tmkdir -p \"$(DESTDIR)/share/doc/\%s\"\n\t$(INSTALL) -m 644 README.md \"$(DESTDIR)/share/doc/\%s/README.md\"\n\n\#########################################\n\# clean\n\#########################################\nclean:\n\trm -fR *.o *.c.i *.c.out *.c.c \%s *.log *.out common.h \%s\n\n\#########################################\n\# uninstall\n\#########################################\nuninstall:\n\trm -f \"$(DESTDIR)\"/bin/\%s\n\trm -f \"$(DESTDIR)/share/doc/\%s/README.md\"\n\nrun: \%s\n\trm -f *.log\n\t./\%s\n\ncompile: \%s\n\ndebug: \%s\n\trm -f *.log\n\t./\%s\n",((char*)(right_value155=string_to_string(prefix_110))),((char*)(right_value156=string_to_string(project_name_104))),((char*)(right_value157=string_to_string(project_name_104))),((char*)(right_value158=string_to_string(project_name_104))),((char*)(right_value159=string_to_string(project_name_104))),((char*)(right_value160=string_to_string(cc_106))),((char*)(right_value161=string_to_string(install_107))),((char*)(right_value162=string_to_string(cflags_111))),((char*)(right_value163=string_to_string(cflags_debug_112))),((char*)(right_value164=string_to_string(libs_108))),((char*)(right_value165=string_to_string(os_109))),((char*)(right_value166=string_to_string(prefix_110))),((char*)(right_value167=string_to_string(project_name_104))),((char*)(right_value168=string_to_string(project_name_debug_105))),((char*)(right_value169=string_to_string(project_name_104))),((char*)(right_value170=string_to_string(project_name_104))),((char*)(right_value171=string_to_string(project_name_104))),((char*)(right_value172=string_to_string(project_name_104))),((char*)(right_value173=string_to_string(project_name_debug_105))),((char*)(right_value174=string_to_string(project_name_104))),((char*)(right_value175=string_to_string(project_name_104))),((char*)(right_value176=string_to_string(project_name_104))),((char*)(right_value177=string_to_string(project_name_104))),((char*)(right_value178=string_to_string(project_name_104))),((char*)(right_value179=string_to_string(project_name_debug_105))),((char*)(right_value180=string_to_string(project_name_debug_105)))))), "02transpile.c", 411, 1005)), "02transpile.c", 411, 1006)),((char*)(right_value183=xsprintf("\%s/Makefile",((char*)(right_value182=string_to_string(project_name_104)))))),(_Bool)0), come_pop_stackframe(), __exception_result_var_b174);
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
    __result78__ = (_Bool)1;
    project_name_104 = come_decrement_ref_count2(project_name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    project_name_debug_105 = come_decrement_ref_count2(project_name_debug_105, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cc_106 = come_decrement_ref_count2(cc_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    install_107 = come_decrement_ref_count2(install_107, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    libs_108 = come_decrement_ref_count2(libs_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    os_109 = come_decrement_ref_count2(os_109, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    prefix_110 = come_decrement_ref_count2(prefix_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_111 = come_decrement_ref_count2(cflags_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_debug_112 = come_decrement_ref_count2(cflags_debug_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result78__;
    project_name_104 = come_decrement_ref_count2(project_name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    project_name_debug_105 = come_decrement_ref_count2(project_name_debug_105, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cc_106 = come_decrement_ref_count2(cc_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    install_107 = come_decrement_ref_count2(install_107, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    libs_108 = come_decrement_ref_count2(libs_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    os_109 = come_decrement_ref_count2(os_109, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    prefix_110 = come_decrement_ref_count2(prefix_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_111 = come_decrement_ref_count2(cflags_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_debug_112 = come_decrement_ref_count2(cflags_debug_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool run_project(int argc, char** argv){
void* __result_obj__;
int __exception_result_var_b175;
_Bool _or_conditional2;
_Bool __exception_result_var_b176;
_Bool __result79__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_or_conditional2=(come_push_stackframe("02transpile.c", 418, 1008),__exception_result_var_b175=system("make run"), come_pop_stackframe(), __exception_result_var_b175),    _or_conditional2 != 0) {
        (come_push_stackframe("02transpile.c", 418, 1009),__exception_result_var_b176=die("system"), come_pop_stackframe(), __exception_result_var_b176);
    }
    __result79__ = (_Bool)1;
    return __result79__;
}

_Bool make_header_project(int argc, char** argv){
void* __result_obj__;
int __exception_result_var_b177;
_Bool _or_conditional3;
_Bool __exception_result_var_b178;
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_or_conditional3=(come_push_stackframe("02transpile.c", 425, 1010),__exception_result_var_b177=system("make header"), come_pop_stackframe(), __exception_result_var_b177),    _or_conditional3 != 0) {
        (come_push_stackframe("02transpile.c", 425, 1011),__exception_result_var_b178=die("system"), come_pop_stackframe(), __exception_result_var_b178);
    }
    __result80__ = (_Bool)1;
    return __result80__;
}

_Bool compile_project(int argc, char** argv){
void* __result_obj__;
int __exception_result_var_b179;
_Bool _or_conditional4;
_Bool __exception_result_var_b180;
_Bool __result81__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_or_conditional4=(come_push_stackframe("02transpile.c", 432, 1012),__exception_result_var_b179=system("make compile"), come_pop_stackframe(), __exception_result_var_b179),    _or_conditional4 != 0) {
        (come_push_stackframe("02transpile.c", 432, 1013),__exception_result_var_b180=die("system"), come_pop_stackframe(), __exception_result_var_b180);
    }
    __result81__ = (_Bool)1;
    return __result81__;
}

_Bool debug_run_project(int argc, char** argv){
void* __result_obj__;
int __exception_result_var_b181;
_Bool _or_conditional5;
_Bool __exception_result_var_b182;
_Bool __result82__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_or_conditional5=(come_push_stackframe("02transpile.c", 439, 1014),__exception_result_var_b181=system("make debug"), come_pop_stackframe(), __exception_result_var_b181),    _or_conditional5 != 0) {
        (come_push_stackframe("02transpile.c", 439, 1015),__exception_result_var_b182=die("system"), come_pop_stackframe(), __exception_result_var_b182);
    }
    __result82__ = (_Bool)1;
    return __result82__;
}

_Bool clean_project(int argc, char** argv){
void* __result_obj__;
int __exception_result_var_b183;
_Bool _or_conditional6;
_Bool __exception_result_var_b184;
_Bool __result83__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_or_conditional6=(come_push_stackframe("02transpile.c", 446, 1016),__exception_result_var_b183=system("make clean"), come_pop_stackframe(), __exception_result_var_b183),    _or_conditional6 != 0) {
        (come_push_stackframe("02transpile.c", 446, 1017),__exception_result_var_b184=die("system"), come_pop_stackframe(), __exception_result_var_b184);
    }
    __result83__ = (_Bool)1;
    return __result83__;
}

_Bool install_project(int argc, char** argv, char* prefix){
void* __result_obj__;
void* right_value184;
void* right_value185;
int __exception_result_var_b185;
_Bool _or_conditional7;
_Bool __exception_result_var_b186;
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value184 = (void*)0;
right_value185 = (void*)0;
    if(_or_conditional7=(come_push_stackframe("02transpile.c", 453, 1018),__exception_result_var_b185=system(((char*)(right_value185=xsprintf("make install DESTDIR=\%s",((char*)(right_value184=charp_to_string(prefix))))))), come_pop_stackframe(), __exception_result_var_b185),    right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
    right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
    _or_conditional7 != 0) {
        (come_push_stackframe("02transpile.c", 453, 1019),__exception_result_var_b186=die("system"), come_pop_stackframe(), __exception_result_var_b186);
    }
    __result84__ = (_Bool)1;
    return __result84__;
}

static void init_classes(struct sInfo* info){
void* __result_obj__;
void* right_value192;
char* __exception_result_var_b218;
void* right_value193;
void* right_value194;
struct sClass* __exception_result_var_b219;
struct map$2charphsClassph* __exception_result_var_b220;
void* right_value195;
char* __exception_result_var_b221;
void* right_value196;
void* right_value197;
struct sClass* __exception_result_var_b222;
struct map$2charphsClassph* __exception_result_var_b223;
void* right_value198;
char* __exception_result_var_b224;
void* right_value199;
void* right_value200;
struct sClass* __exception_result_var_b225;
struct map$2charphsClassph* __exception_result_var_b226;
void* right_value201;
char* __exception_result_var_b227;
void* right_value202;
void* right_value203;
struct sClass* __exception_result_var_b228;
struct map$2charphsClassph* __exception_result_var_b229;
void* right_value204;
char* __exception_result_var_b230;
void* right_value205;
void* right_value206;
struct sClass* __exception_result_var_b231;
struct map$2charphsClassph* __exception_result_var_b232;
void* right_value207;
char* __exception_result_var_b233;
void* right_value208;
void* right_value209;
struct sClass* __exception_result_var_b234;
struct map$2charphsClassph* __exception_result_var_b235;
void* right_value210;
char* __exception_result_var_b236;
void* right_value211;
void* right_value212;
struct sClass* __exception_result_var_b237;
struct map$2charphsClassph* __exception_result_var_b238;
void* right_value213;
char* __exception_result_var_b239;
void* right_value214;
void* right_value215;
struct sClass* __exception_result_var_b240;
struct map$2charphsClassph* __exception_result_var_b241;
void* right_value216;
char* __exception_result_var_b242;
void* right_value217;
void* right_value218;
struct sClass* __exception_result_var_b243;
struct map$2charphsClassph* __exception_result_var_b244;
void* right_value219;
char* __exception_result_var_b245;
void* right_value220;
void* right_value221;
struct sClass* __exception_result_var_b246;
struct map$2charphsClassph* __exception_result_var_b247;
void* right_value222;
char* __exception_result_var_b248;
void* right_value223;
void* right_value224;
struct sClass* __exception_result_var_b249;
struct map$2charphsClassph* __exception_result_var_b250;
void* right_value225;
char* __exception_result_var_b251;
void* right_value226;
void* right_value227;
struct sClass* __exception_result_var_b252;
struct map$2charphsClassph* __exception_result_var_b253;
int i_163;
void* right_value228;
char* __exception_result_var_b254;
char* generics_type_164;
void* right_value229;
void* right_value230;
struct sClass* __exception_result_var_b255;
struct map$2charphsClassph* __exception_result_var_b256;
int i_165;
void* right_value231;
char* __exception_result_var_b257;
char* generics_type_166;
void* right_value232;
void* right_value233;
struct sClass* __exception_result_var_b258;
struct map$2charphsClassph* __exception_result_var_b259;
int __exception_result_var_b260;
int __exception_result_var_b261;
int rc_168;
_Bool _if_conditional139;
void* right_value234;
char* __exception_result_var_b262;
void* right_value235;
void* right_value236;
struct sClass* __exception_result_var_b263;
struct map$2charphsClassph* __exception_result_var_b264;
void* right_value237;
char* __exception_result_var_b265;
char* type_name_169;
void* right_value238;
void* right_value239;
struct sType* __exception_result_var_b266;
struct sType* type_170;
void* right_value240;
char* __exception_result_var_b267;
char* __dec_obj25;
void* right_value244;
char* __exception_result_var_b292;
struct map$2charphsTypeph* __exception_result_var_b293;
void* right_value245;
void* right_value246;
struct sClass* __exception_result_var_b294;
struct sClass* klass_192;
void* right_value250;
char* __exception_result_var_b295;
void* right_value251;
void* right_value252;
struct sType* __exception_result_var_b296;
void* right_value253;
void* right_value254;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b297;
void* right_value255;
char* __exception_result_var_b298;
void* right_value256;
void* right_value257;
struct sType* __exception_result_var_b299;
void* right_value258;
void* right_value259;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b300;
void* right_value260;
char* __exception_result_var_b301;
void* right_value261;
void* right_value262;
struct sType* __exception_result_var_b302;
void* right_value263;
void* right_value264;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b303;
void* right_value265;
char* __exception_result_var_b304;
void* right_value266;
void* right_value267;
struct sType* __exception_result_var_b305;
void* right_value268;
void* right_value269;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b306;
void* right_value270;
char* __exception_result_var_b307;
void* right_value271;
void* right_value272;
struct sType* __exception_result_var_b308;
void* right_value273;
void* right_value274;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b309;
void* right_value275;
char* __exception_result_var_b310;
struct sClass* __exception_result_var_b345;
void* right_value329;
struct map$2charphsClassph* __exception_result_var_b346;
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
memset(&i_163, 0, sizeof(int));
right_value228 = (void*)0;
memset(&generics_type_164, 0, sizeof(char*));
right_value229 = (void*)0;
right_value230 = (void*)0;
memset(&i_165, 0, sizeof(int));
right_value231 = (void*)0;
memset(&generics_type_166, 0, sizeof(char*));
right_value232 = (void*)0;
right_value233 = (void*)0;
memset(&rc_168, 0, sizeof(int));
right_value234 = (void*)0;
right_value235 = (void*)0;
right_value236 = (void*)0;
right_value237 = (void*)0;
memset(&type_name_169, 0, sizeof(char*));
right_value238 = (void*)0;
right_value239 = (void*)0;
memset(&type_170, 0, sizeof(struct sType*));
right_value240 = (void*)0;
right_value244 = (void*)0;
right_value245 = (void*)0;
right_value246 = (void*)0;
memset(&klass_192, 0, sizeof(struct sClass*));
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
    (come_push_stackframe("02transpile.c", 460, 1503),__exception_result_var_b220=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 460, 1020)), "02transpile.c", 460, 1021))->classes, "02transpile.c", 460, 1022)), "02transpile.c", 460, 1023)),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 460, 1500),__exception_result_var_b218=((char*)(right_value192=__builtin_string("int"))), come_pop_stackframe(), __exception_result_var_b218)),(struct sClass*)come_increment_ref_count((come_push_stackframe("02transpile.c", 460, 1502),__exception_result_var_b219=((struct sClass*)(right_value194=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)come_null_check(((struct sClass*)(right_value193=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 460, "sClass"))), "02transpile.c", 460, 1501))),"int",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b219))), come_pop_stackframe(), __exception_result_var_b220);
    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value193,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value194,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("02transpile.c", 461, 1511),__exception_result_var_b223=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 461, 1504)), "02transpile.c", 461, 1505))->classes, "02transpile.c", 461, 1506)), "02transpile.c", 461, 1507)),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 461, 1508),__exception_result_var_b221=((char*)(right_value195=__builtin_string("short"))), come_pop_stackframe(), __exception_result_var_b221)),(struct sClass*)come_increment_ref_count((come_push_stackframe("02transpile.c", 461, 1510),__exception_result_var_b222=((struct sClass*)(right_value197=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)come_null_check(((struct sClass*)(right_value196=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 461, "sClass"))), "02transpile.c", 461, 1509))),"short",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b222))), come_pop_stackframe(), __exception_result_var_b223);
    right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value196,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value197,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("02transpile.c", 462, 1519),__exception_result_var_b226=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 462, 1512)), "02transpile.c", 462, 1513))->classes, "02transpile.c", 462, 1514)), "02transpile.c", 462, 1515)),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 462, 1516),__exception_result_var_b224=((char*)(right_value198=__builtin_string("long"))), come_pop_stackframe(), __exception_result_var_b224)),(struct sClass*)come_increment_ref_count((come_push_stackframe("02transpile.c", 462, 1518),__exception_result_var_b225=((struct sClass*)(right_value200=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)come_null_check(((struct sClass*)(right_value199=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 462, "sClass"))), "02transpile.c", 462, 1517))),"long",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b225))), come_pop_stackframe(), __exception_result_var_b226);
    right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value199,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value200,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("02transpile.c", 463, 1527),__exception_result_var_b229=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 463, 1520)), "02transpile.c", 463, 1521))->classes, "02transpile.c", 463, 1522)), "02transpile.c", 463, 1523)),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 463, 1524),__exception_result_var_b227=((char*)(right_value201=__builtin_string("char"))), come_pop_stackframe(), __exception_result_var_b227)),(struct sClass*)come_increment_ref_count((come_push_stackframe("02transpile.c", 463, 1526),__exception_result_var_b228=((struct sClass*)(right_value203=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)come_null_check(((struct sClass*)(right_value202=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 463, "sClass"))), "02transpile.c", 463, 1525))),"char",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b228))), come_pop_stackframe(), __exception_result_var_b229);
    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value202,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value203,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("02transpile.c", 464, 1535),__exception_result_var_b232=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 464, 1528)), "02transpile.c", 464, 1529))->classes, "02transpile.c", 464, 1530)), "02transpile.c", 464, 1531)),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 464, 1532),__exception_result_var_b230=((char*)(right_value204=__builtin_string("bool"))), come_pop_stackframe(), __exception_result_var_b230)),(struct sClass*)come_increment_ref_count((come_push_stackframe("02transpile.c", 464, 1534),__exception_result_var_b231=((struct sClass*)(right_value206=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)come_null_check(((struct sClass*)(right_value205=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 464, "sClass"))), "02transpile.c", 464, 1533))),"bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b231))), come_pop_stackframe(), __exception_result_var_b232);
    right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value205,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value206,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("02transpile.c", 465, 1543),__exception_result_var_b235=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 465, 1536)), "02transpile.c", 465, 1537))->classes, "02transpile.c", 465, 1538)), "02transpile.c", 465, 1539)),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 465, 1540),__exception_result_var_b233=((char*)(right_value207=__builtin_string("_Bool"))), come_pop_stackframe(), __exception_result_var_b233)),(struct sClass*)come_increment_ref_count((come_push_stackframe("02transpile.c", 465, 1542),__exception_result_var_b234=((struct sClass*)(right_value209=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)come_null_check(((struct sClass*)(right_value208=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 465, "sClass"))), "02transpile.c", 465, 1541))),"_Bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b234))), come_pop_stackframe(), __exception_result_var_b235);
    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value208,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value209,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("02transpile.c", 466, 1551),__exception_result_var_b238=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 466, 1544)), "02transpile.c", 466, 1545))->classes, "02transpile.c", 466, 1546)), "02transpile.c", 466, 1547)),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 466, 1548),__exception_result_var_b236=((char*)(right_value210=__builtin_string("void"))), come_pop_stackframe(), __exception_result_var_b236)),(struct sClass*)come_increment_ref_count((come_push_stackframe("02transpile.c", 466, 1550),__exception_result_var_b237=((struct sClass*)(right_value212=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)come_null_check(((struct sClass*)(right_value211=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 466, "sClass"))), "02transpile.c", 466, 1549))),"void",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b237))), come_pop_stackframe(), __exception_result_var_b238);
    right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value211,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value212,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("02transpile.c", 467, 1559),__exception_result_var_b241=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 467, 1552)), "02transpile.c", 467, 1553))->classes, "02transpile.c", 467, 1554)), "02transpile.c", 467, 1555)),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 467, 1556),__exception_result_var_b239=((char*)(right_value213=__builtin_string("float"))), come_pop_stackframe(), __exception_result_var_b239)),(struct sClass*)come_increment_ref_count((come_push_stackframe("02transpile.c", 467, 1558),__exception_result_var_b240=((struct sClass*)(right_value215=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)come_null_check(((struct sClass*)(right_value214=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 467, "sClass"))), "02transpile.c", 467, 1557))),"float",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b240))), come_pop_stackframe(), __exception_result_var_b241);
    right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value214,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value215,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("02transpile.c", 468, 1567),__exception_result_var_b244=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 468, 1560)), "02transpile.c", 468, 1561))->classes, "02transpile.c", 468, 1562)), "02transpile.c", 468, 1563)),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 468, 1564),__exception_result_var_b242=((char*)(right_value216=__builtin_string("double"))), come_pop_stackframe(), __exception_result_var_b242)),(struct sClass*)come_increment_ref_count((come_push_stackframe("02transpile.c", 468, 1566),__exception_result_var_b243=((struct sClass*)(right_value218=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)come_null_check(((struct sClass*)(right_value217=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 468, "sClass"))), "02transpile.c", 468, 1565))),"double",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b243))), come_pop_stackframe(), __exception_result_var_b244);
    right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value217,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value218,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("02transpile.c", 469, 1575),__exception_result_var_b247=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 469, 1568)), "02transpile.c", 469, 1569))->classes, "02transpile.c", 469, 1570)), "02transpile.c", 469, 1571)),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 469, 1572),__exception_result_var_b245=((char*)(right_value219=__builtin_string("lambda"))), come_pop_stackframe(), __exception_result_var_b245)),(struct sClass*)come_increment_ref_count((come_push_stackframe("02transpile.c", 469, 1574),__exception_result_var_b246=((struct sClass*)(right_value221=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)come_null_check(((struct sClass*)(right_value220=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 469, "sClass"))), "02transpile.c", 469, 1573))),"lambda",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b246))), come_pop_stackframe(), __exception_result_var_b247);
    right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value220,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value221,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("02transpile.c", 470, 1583),__exception_result_var_b250=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 470, 1576)), "02transpile.c", 470, 1577))->classes, "02transpile.c", 470, 1578)), "02transpile.c", 470, 1579)),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 470, 1580),__exception_result_var_b248=((char*)(right_value222=__builtin_string("__uint128_t"))), come_pop_stackframe(), __exception_result_var_b248)),(struct sClass*)come_increment_ref_count((come_push_stackframe("02transpile.c", 470, 1582),__exception_result_var_b249=((struct sClass*)(right_value224=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)come_null_check(((struct sClass*)(right_value223=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 470, "sClass"))), "02transpile.c", 470, 1581))),"__uint128_t",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b249))), come_pop_stackframe(), __exception_result_var_b250);
    right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value223,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value224,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("02transpile.c", 471, 1591),__exception_result_var_b253=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 471, 1584)), "02transpile.c", 471, 1585))->classes, "02transpile.c", 471, 1586)), "02transpile.c", 471, 1587)),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 471, 1588),__exception_result_var_b251=((char*)(right_value225=__builtin_string("__int128"))), come_pop_stackframe(), __exception_result_var_b251)),(struct sClass*)come_increment_ref_count((come_push_stackframe("02transpile.c", 471, 1590),__exception_result_var_b252=((struct sClass*)(right_value227=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)come_null_check(((struct sClass*)(right_value226=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 471, "sClass"))), "02transpile.c", 471, 1589))),"__int128",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b252))), come_pop_stackframe(), __exception_result_var_b253);
    right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value226,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value227,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    for(    i_163=0;    i_163<12;    i_163++    ){
        generics_type_164=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 473, 1592),__exception_result_var_b254=((char*)(right_value228=xsprintf("generics_type%d",i_163))), come_pop_stackframe(), __exception_result_var_b254));
        right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("02transpile.c", 474, 1599),__exception_result_var_b256=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 474, 1593)), "02transpile.c", 474, 1594))->classes, "02transpile.c", 474, 1595)), "02transpile.c", 474, 1596)),(char*)come_increment_ref_count(generics_type_164),(struct sClass*)come_increment_ref_count((come_push_stackframe("02transpile.c", 474, 1598),__exception_result_var_b255=((struct sClass*)(right_value230=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)come_null_check(((struct sClass*)(right_value229=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 474, "sClass"))), "02transpile.c", 474, 1597))),generics_type_164,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,i_163,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b255))), come_pop_stackframe(), __exception_result_var_b256);
        come_call_finalizer3(right_value229,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value230,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        generics_type_164 = come_decrement_ref_count2(generics_type_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    for(    i_165=0;    i_165<7;    i_165++    ){
        generics_type_166=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 477, 1600),__exception_result_var_b257=((char*)(right_value231=xsprintf("mgenerics_type%d",i_165))), come_pop_stackframe(), __exception_result_var_b257));
        right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("02transpile.c", 478, 1607),__exception_result_var_b259=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 478, 1601)), "02transpile.c", 478, 1602))->classes, "02transpile.c", 478, 1603)), "02transpile.c", 478, 1604)),(char*)come_increment_ref_count(generics_type_166),(struct sClass*)come_increment_ref_count((come_push_stackframe("02transpile.c", 478, 1606),__exception_result_var_b258=((struct sClass*)(right_value233=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)come_null_check(((struct sClass*)(right_value232=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 478, "sClass"))), "02transpile.c", 478, 1605))),generics_type_166,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,-1,i_165,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b258))), come_pop_stackframe(), __exception_result_var_b259);
        come_call_finalizer3(right_value232,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value233,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        generics_type_166 = come_decrement_ref_count2(generics_type_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    char cmd_167[1024];
    memset(&cmd_167, 0, sizeof(char)    *(1024)    );
    (come_push_stackframe("02transpile.c", 482, 1608),__exception_result_var_b260=snprintf(cmd_167,1024,"which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null"), come_pop_stackframe(), __exception_result_var_b260);
    rc_168=(come_push_stackframe("02transpile.c", 484, 1609),__exception_result_var_b261=system(cmd_167), come_pop_stackframe(), __exception_result_var_b261);
    if(_if_conditional139=rc_168==0,    _if_conditional139) {
        (come_push_stackframe("02transpile.c", 486, 1617),__exception_result_var_b264=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 486, 1610)), "02transpile.c", 486, 1611))->classes, "02transpile.c", 486, 1612)), "02transpile.c", 486, 1613)),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 486, 1614),__exception_result_var_b262=((char*)(right_value234=__builtin_string("__builtin_va_list"))), come_pop_stackframe(), __exception_result_var_b262)),(struct sClass*)come_increment_ref_count((come_push_stackframe("02transpile.c", 486, 1616),__exception_result_var_b263=((struct sClass*)(right_value236=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)come_null_check(((struct sClass*)(right_value235=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 486, "sClass"))), "02transpile.c", 486, 1615))),"__builtin_va_list",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b263))), come_pop_stackframe(), __exception_result_var_b264);
        right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value235,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value236,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        type_name_169=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 488, 1618),__exception_result_var_b265=((char*)(right_value237=__builtin_string("__builtin_va_list"))), come_pop_stackframe(), __exception_result_var_b265));
        right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        type_170=(struct sType*)come_increment_ref_count((come_push_stackframe("02transpile.c", 490, 1620),__exception_result_var_b266=((struct sType*)(right_value239=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value238=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 490, "sType"))), "02transpile.c", 490, 1619))),"__builtin_va_list",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b266));
        come_call_finalizer3(right_value238,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value239,sType_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj25=((struct sType*)come_null_check(((struct sType*)come_null_check(type_170, "02transpile.c", 491, 1621)), "02transpile.c", 491, 1622))->mOriginalTypeName;
        ((struct sType*)come_null_check(((struct sType*)come_null_check(type_170, "02transpile.c", 491, 1621)), "02transpile.c", 491, 1622))->mOriginalTypeName=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 491, 1623),__exception_result_var_b267=((char*)(right_value240=__builtin_string("__builtin_va_list"))), come_pop_stackframe(), __exception_result_var_b267));
        __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("02transpile.c", 493, 1846),__exception_result_var_b293=map$2charphsTypeph_insert(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 493, 1624)), "02transpile.c", 493, 1625))->types, "02transpile.c", 493, 1626)), "02transpile.c", 493, 1627)),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 493, 1845),__exception_result_var_b292=((char*)(right_value244=__builtin_string(type_name_169))), come_pop_stackframe(), __exception_result_var_b292)),(struct sType*)come_increment_ref_count(type_170)), come_pop_stackframe(), __exception_result_var_b293);
        right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        type_name_169 = come_decrement_ref_count2(type_name_169, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_170,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        klass_192=(struct sClass*)come_increment_ref_count((come_push_stackframe("02transpile.c", 498, 1848),__exception_result_var_b294=((struct sClass*)(right_value246=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)come_null_check(((struct sClass*)(right_value245=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 498, "sClass"))), "02transpile.c", 498, 1847))),"__builtin_va_list",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b294));
        come_call_finalizer3(right_value245,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value246,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("02transpile.c", 500, 1928),__exception_result_var_b297=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_192, "02transpile.c", 500, 1849)), "02transpile.c", 500, 1850))->mFields, "02transpile.c", 500, 1851)), "02transpile.c", 500, 1852)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value254=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value253=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 500, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 500, 1921),__exception_result_var_b295=((char*)(right_value250=__builtin_string("v1"))), come_pop_stackframe(), __exception_result_var_b295)),(struct sType*)come_increment_ref_count((come_push_stackframe("02transpile.c", 500, 1923),__exception_result_var_b296=((struct sType*)(right_value252=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value251=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 500, "sType"))), "02transpile.c", 500, 1922))),"char*",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b296))))))), come_pop_stackframe(), __exception_result_var_b297);
        right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value251,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value252,sType_finalize, 0, 1, 0, 0, __result_obj__);
        right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value254,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("02transpile.c", 501, 1936),__exception_result_var_b300=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_192, "02transpile.c", 501, 1929)), "02transpile.c", 501, 1930))->mFields, "02transpile.c", 501, 1931)), "02transpile.c", 501, 1932)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value259=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value258=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 501, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 501, 1933),__exception_result_var_b298=((char*)(right_value255=__builtin_string("v2"))), come_pop_stackframe(), __exception_result_var_b298)),(struct sType*)come_increment_ref_count((come_push_stackframe("02transpile.c", 501, 1935),__exception_result_var_b299=((struct sType*)(right_value257=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value256=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 501, "sType"))), "02transpile.c", 501, 1934))),"char*",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b299))))))), come_pop_stackframe(), __exception_result_var_b300);
        right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value256,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value257,sType_finalize, 0, 1, 0, 0, __result_obj__);
        right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value259,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("02transpile.c", 502, 1944),__exception_result_var_b303=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_192, "02transpile.c", 502, 1937)), "02transpile.c", 502, 1938))->mFields, "02transpile.c", 502, 1939)), "02transpile.c", 502, 1940)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value264=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value263=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 502, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 502, 1941),__exception_result_var_b301=((char*)(right_value260=__builtin_string("v3"))), come_pop_stackframe(), __exception_result_var_b301)),(struct sType*)come_increment_ref_count((come_push_stackframe("02transpile.c", 502, 1943),__exception_result_var_b302=((struct sType*)(right_value262=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value261=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 502, "sType"))), "02transpile.c", 502, 1942))),"char*",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b302))))))), come_pop_stackframe(), __exception_result_var_b303);
        right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value261,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value262,sType_finalize, 0, 1, 0, 0, __result_obj__);
        right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value264,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("02transpile.c", 503, 1952),__exception_result_var_b306=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_192, "02transpile.c", 503, 1945)), "02transpile.c", 503, 1946))->mFields, "02transpile.c", 503, 1947)), "02transpile.c", 503, 1948)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value269=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value268=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 503, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 503, 1949),__exception_result_var_b304=((char*)(right_value265=__builtin_string("v4"))), come_pop_stackframe(), __exception_result_var_b304)),(struct sType*)come_increment_ref_count((come_push_stackframe("02transpile.c", 503, 1951),__exception_result_var_b305=((struct sType*)(right_value267=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value266=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 503, "sType"))), "02transpile.c", 503, 1950))),"int",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b305))))))), come_pop_stackframe(), __exception_result_var_b306);
        right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value266,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value267,sType_finalize, 0, 1, 0, 0, __result_obj__);
        right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value269,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("02transpile.c", 504, 1960),__exception_result_var_b309=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_192, "02transpile.c", 504, 1953)), "02transpile.c", 504, 1954))->mFields, "02transpile.c", 504, 1955)), "02transpile.c", 504, 1956)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value274=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value273=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 504, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 504, 1957),__exception_result_var_b307=((char*)(right_value270=__builtin_string("v5"))), come_pop_stackframe(), __exception_result_var_b307)),(struct sType*)come_increment_ref_count((come_push_stackframe("02transpile.c", 504, 1959),__exception_result_var_b308=((struct sType*)(right_value272=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value271=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 504, "sType"))), "02transpile.c", 504, 1958))),"int",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b308))))))), come_pop_stackframe(), __exception_result_var_b309);
        right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value271,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value272,sType_finalize, 0, 1, 0, 0, __result_obj__);
        right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value274,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("02transpile.c", 506, 2677),__exception_result_var_b346=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 506, 1961)), "02transpile.c", 506, 1962))->classes, "02transpile.c", 506, 1963)), "02transpile.c", 506, 1964)),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 506, 1965),__exception_result_var_b310=((char*)(right_value275=__builtin_string("__builtin_va_list"))), come_pop_stackframe(), __exception_result_var_b310)),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value329=(come_push_stackframe("02transpile.c", 506, 2676),__exception_result_var_b345=sClass_clone(klass_192), come_pop_stackframe(), __exception_result_var_b345))))), come_pop_stackframe(), __exception_result_var_b346);
        right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value329,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(klass_192,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional69;
unsigned int __exception_result_var_b201;
unsigned int hash_136;
unsigned int it_137;
_Bool _while_condtional16;
_Bool _if_conditional104;
_Bool __exception_result_var_b202;
_Bool _if_conditional105;
_Bool _if_conditional106;
struct list$1charp* __exception_result_var_b206;
struct list$1charp* __exception_result_var_b207;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
int __exception_result_var_b208;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool same_key_exist_154;
char* __exception_result_var_b211;
char* it2_157;
_Bool __exception_result_var_b212;
char* __exception_result_var_b215;
_Bool __exception_result_var_b216;
_Bool _if_conditional135;
_Bool _if_conditional136;
struct list$1charp* __exception_result_var_b217;
struct map$2charphsClassph* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_136, 0, sizeof(unsigned int));
memset(&it_137, 0, sizeof(unsigned int));
memset(&same_key_exist_154, 0, sizeof(_Bool));
memset(&it2_157, 0, sizeof(char*));
        if(_if_conditional69=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1371, 1024)), "./neo-c.h", 1371, 1025))->len*10>=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1371, 1026)), "./neo-c.h", 1371, 1027))->size,        _if_conditional69) {
            (come_push_stackframe("./neo-c.h", 1372,1251),map$2charphsClassph_rehash(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1372, 1028)), "./neo-c.h", 1372, 1029))),come_pop_stackframe());
        }
        hash_136=(come_push_stackframe("./neo-c.h", 1374, 1254),__exception_result_var_b201=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(key, "./neo-c.h", 1374, 1252)), "./neo-c.h", 1374, 1253))), come_pop_stackframe(), __exception_result_var_b201)%((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1374, 1255)), "./neo-c.h", 1374, 1256))->size;
        it_137=hash_136;
        while(_while_condtional16=(_Bool)1,        _while_condtional16) {
            if(_if_conditional104=((_Bool*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1378, 1257)), "./neo-c.h", 1378, 1258))->item_existance, "./neo-c.h", 1378, 1259))[it_137],            _if_conditional104) {
                if(_if_conditional105=(come_push_stackframe("./neo-c.h", 1380, 1265),__exception_result_var_b202=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1380, 1260)), "./neo-c.h", 1380, 1261))->keys, "./neo-c.h", 1380, 1262))[it_137], "./neo-c.h", 1380, 1263)), "./neo-c.h", 1380, 1264)),key), come_pop_stackframe(), __exception_result_var_b202),                _if_conditional105) {
                    if(_if_conditional106=1,                    _if_conditional106) {
                        (come_push_stackframe("./neo-c.h", 1383, 1354),__exception_result_var_b206=list$1charp_remove(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1383, 1266)), "./neo-c.h", 1383, 1267))->key_list, "./neo-c.h", 1383, 1268)), "./neo-c.h", 1383, 1269)),((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1383, 1351)), "./neo-c.h", 1383, 1352))->keys, "./neo-c.h", 1383, 1353))[it_137]), come_pop_stackframe(), __exception_result_var_b206);
                        ((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1384, 1355)), "./neo-c.h", 1384, 1356))->keys, "./neo-c.h", 1384, 1357))[it_137] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1384, 1355)), "./neo-c.h", 1384, 1356))->keys, "./neo-c.h", 1384, 1357))[it_137], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        ((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1385, 1358)), "./neo-c.h", 1385, 1359))->keys, "./neo-c.h", 1385, 1360))[it_137]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        (come_push_stackframe("./neo-c.h", 1388, 1368),__exception_result_var_b207=list$1charp_remove(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1388, 1361)), "./neo-c.h", 1388, 1362))->key_list, "./neo-c.h", 1388, 1363)), "./neo-c.h", 1388, 1364)),((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1388, 1365)), "./neo-c.h", 1388, 1366))->keys, "./neo-c.h", 1388, 1367))[it_137]), come_pop_stackframe(), __exception_result_var_b207);
                        ((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1389, 1369)), "./neo-c.h", 1389, 1370))->keys, "./neo-c.h", 1389, 1371))[it_137]=key;
                    }
                    if(_if_conditional126=1,                    _if_conditional126) {
                        come_call_finalizer3(((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1392, 1372)), "./neo-c.h", 1392, 1373))->items, "./neo-c.h", 1392, 1374))[it_137],sClass_finalize, 0, 0, 0, 0, (void*)0);
                        ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1393, 1375)), "./neo-c.h", 1393, 1376))->items, "./neo-c.h", 1393, 1377))[it_137]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1396, 1378)), "./neo-c.h", 1396, 1379))->items, "./neo-c.h", 1396, 1380))[it_137]=item;
                    }
                    break;
                }
                it_137++;
                if(_if_conditional127=it_137>=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1403, 1381)), "./neo-c.h", 1403, 1382))->size,                _if_conditional127) {
                    it_137=0;
                }
                else {
                    if(_if_conditional128=it_137==hash_136,                    _if_conditional128) {
                        (come_push_stackframe("./neo-c.h", 1407, 1383),__exception_result_var_b208=printf("unexpected error in map.insert\n"), come_pop_stackframe(), __exception_result_var_b208);
                        (come_push_stackframe("./neo-c.h", 1408,1384),stackframe(),come_pop_stackframe());
                        (come_push_stackframe("./neo-c.h", 1409,1385),exit(2),come_pop_stackframe());
                    }
                }
            }
            else {
                ((_Bool*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1413, 1386)), "./neo-c.h", 1413, 1387))->item_existance, "./neo-c.h", 1413, 1388))[it_137]=(_Bool)1;
                if(_if_conditional129=1,                _if_conditional129) {
                    ((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1415, 1389)), "./neo-c.h", 1415, 1390))->keys, "./neo-c.h", 1415, 1391))[it_137]=(char*)come_increment_ref_count(key);
                }
                else {
                    ((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1418, 1392)), "./neo-c.h", 1418, 1393))->keys, "./neo-c.h", 1418, 1394))[it_137]=key;
                }
                if(_if_conditional130=1,                _if_conditional130) {
                    ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1421, 1395)), "./neo-c.h", 1421, 1396))->items, "./neo-c.h", 1421, 1397))[it_137]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1424, 1398)), "./neo-c.h", 1424, 1399))->items, "./neo-c.h", 1424, 1400))[it_137]=item;
                }
                ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1427, 1401)), "./neo-c.h", 1427, 1402))->len++;
                break;
            }
        }
        same_key_exist_154=(_Bool)0;
        for(        it2_157=(come_push_stackframe("./neo-c.h", 1434, 1419),__exception_result_var_b211=list$1charp_begin(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1434, 1403)), "./neo-c.h", 1434, 1404))->key_list, "./neo-c.h", 1434, 1405)), "./neo-c.h", 1434, 1406))), come_pop_stackframe(), __exception_result_var_b211);        !(come_push_stackframe("./neo-c.h", 1434, 1426),__exception_result_var_b212=list$1charp_end(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1434, 1420)), "./neo-c.h", 1434, 1421))->key_list, "./neo-c.h", 1434, 1422)), "./neo-c.h", 1434, 1423))), come_pop_stackframe(), __exception_result_var_b212);        it2_157=(come_push_stackframe("./neo-c.h", 1434, 1447),__exception_result_var_b215=list$1charp_next(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1434, 1427)), "./neo-c.h", 1434, 1428))->key_list, "./neo-c.h", 1434, 1429)), "./neo-c.h", 1434, 1430))), come_pop_stackframe(), __exception_result_var_b215)        ){
            if(_if_conditional135=(come_push_stackframe("./neo-c.h", 1436, 1450),__exception_result_var_b216=string_equals(((char*)come_null_check(((char*)come_null_check(it2_157, "./neo-c.h", 1436, 1448)), "./neo-c.h", 1436, 1449)),key), come_pop_stackframe(), __exception_result_var_b216),            _if_conditional135) {
                same_key_exist_154=(_Bool)1;
            }
        }
        if(_if_conditional136=!same_key_exist_154,        _if_conditional136) {
            (come_push_stackframe("./neo-c.h", 1442, 1499),__exception_result_var_b217=list$1charp_push_back(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1442, 1451)), "./neo-c.h", 1442, 1452))->key_list, "./neo-c.h", 1442, 1453)), "./neo-c.h", 1442, 1454)),key), come_pop_stackframe(), __exception_result_var_b217);
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
int size_113;
void* right_value186;
char** keys_114;
void* right_value187;
struct sClass** items_115;
void* right_value188;
_Bool* item_existance_122;
int len_123;
char* __exception_result_var_b189;
char* it_126;
_Bool __exception_result_var_b190;
char* __exception_result_var_b193;
struct sClass* default_value_129;
void* __exception_result_var_b194;
struct sClass* __exception_result_var_b197;
struct sClass* it2_130;
unsigned int __exception_result_var_b198;
unsigned int hash_133;
int n_134;
_Bool _while_condtional15;
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
int __exception_result_var_b199;
struct sClass* default_value_135;
struct sClass* __exception_result_var_b200;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_113, 0, sizeof(int));
right_value186 = (void*)0;
memset(&keys_114, 0, sizeof(char**));
right_value187 = (void*)0;
memset(&items_115, 0, sizeof(struct sClass**));
right_value188 = (void*)0;
memset(&item_existance_122, 0, sizeof(_Bool*));
memset(&len_123, 0, sizeof(int));
memset(&it_126, 0, sizeof(char*));
memset(&default_value_129, 0, sizeof(struct sClass*));
memset(&it2_130, 0, sizeof(struct sClass*));
memset(&hash_133, 0, sizeof(unsigned int));
memset(&n_134, 0, sizeof(int));
memset(&default_value_135, 0, sizeof(struct sClass*));
                size_113=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1318, 1030)), "./neo-c.h", 1318, 1031))->size*10;
                keys_114=(char**)come_increment_ref_count(((char**)(right_value186=(char**)come_calloc(1, sizeof(char*)*(1*(size_113)), "./neo-c.h", 1319, "char*%"))));
                right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                items_115=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value187=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_113)), "./neo-c.h", 1320, "sClass*%"))));
                come_call_finalizer3(right_value187,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                item_existance_122=(_Bool*)come_increment_ref_count(((_Bool*)(right_value188=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_113)), "./neo-c.h", 1321, "bool"))));
                right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                len_123=0;
                for(                it_126=(come_push_stackframe("./neo-c.h", 1325, 1158),__exception_result_var_b189=map$2charphsClassph_begin(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1325, 1136)), "./neo-c.h", 1325, 1137))), come_pop_stackframe(), __exception_result_var_b189);                !(come_push_stackframe("./neo-c.h", 1325, 1167),__exception_result_var_b190=map$2charphsClassph_end(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1325, 1159)), "./neo-c.h", 1325, 1160))), come_pop_stackframe(), __exception_result_var_b190);                it_126=(come_push_stackframe("./neo-c.h", 1325, 1196),__exception_result_var_b193=map$2charphsClassph_next(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1325, 1168)), "./neo-c.h", 1325, 1169))), come_pop_stackframe(), __exception_result_var_b193)                ){
                    (come_push_stackframe("./neo-c.h", 1327, 1197),__exception_result_var_b194=memset(&default_value_129,0,sizeof(struct sClass*)), come_pop_stackframe(), __exception_result_var_b194);
                    it2_130=(come_push_stackframe("./neo-c.h", 1328, 1219),__exception_result_var_b197=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1328, 1198)), "./neo-c.h", 1328, 1199)),it_126,default_value_129), come_pop_stackframe(), __exception_result_var_b197);
                    hash_133=(come_push_stackframe("./neo-c.h", 1329, 1222),__exception_result_var_b198=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(it_126, "./neo-c.h", 1329, 1220)), "./neo-c.h", 1329, 1221))), come_pop_stackframe(), __exception_result_var_b198)%size_113;
                    n_134=hash_133;
                    while(_while_condtional15=(_Bool)1,                    _while_condtional15) {
                        if(_if_conditional101=((_Bool*)come_null_check(item_existance_122, "./neo-c.h", 1333, 1223))[n_134],                        _if_conditional101) {
                            n_134++;
                            if(_if_conditional102=n_134>=size_113,                            _if_conditional102) {
                                n_134=0;
                            }
                            else {
                                if(_if_conditional103=n_134==hash_133,                                _if_conditional103) {
                                    (come_push_stackframe("./neo-c.h", 1341, 1224),__exception_result_var_b199=printf("unexpected error in map.rehash(1)\n"), come_pop_stackframe(), __exception_result_var_b199);
                                    (come_push_stackframe("./neo-c.h", 1342,1225),stackframe(),come_pop_stackframe());
                                    (come_push_stackframe("./neo-c.h", 1343,1226),exit(2),come_pop_stackframe());
                                }
                            }
                        }
                        else {
                            ((_Bool*)come_null_check(item_existance_122, "./neo-c.h", 1347, 1227))[n_134]=(_Bool)1;
                            ((char**)come_null_check(keys_114, "./neo-c.h", 1348, 1228))[n_134]=it_126;
                            ((struct sClass**)come_null_check(items_115, "./neo-c.h", 1350, 1229))[n_134]=(come_push_stackframe("./neo-c.h", 1350, 1232),__exception_result_var_b200=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1350, 1230)), "./neo-c.h", 1350, 1231)),it_126,default_value_135), come_pop_stackframe(), __exception_result_var_b200);
                            len_123++;
                            break;
                        }
                    }
                }
                (come_push_stackframe("./neo-c.h", 1358,1235),come_free((char*)((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1358, 1233)), "./neo-c.h", 1358, 1234))->items),come_pop_stackframe());
                ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1359, 1236)), "./neo-c.h", 1359, 1237))->item_existance = come_decrement_ref_count2(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1359, 1236)), "./neo-c.h", 1359, 1237))->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (come_push_stackframe("./neo-c.h", 1360,1240),come_free((char*)((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1360, 1238)), "./neo-c.h", 1360, 1239))->keys),come_pop_stackframe());
                ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1362, 1241)), "./neo-c.h", 1362, 1242))->keys=keys_114;
                ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1363, 1243)), "./neo-c.h", 1363, 1244))->items=items_115;
                ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1364, 1245)), "./neo-c.h", 1364, 1246))->item_existance=item_existance_122;
                ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1366, 1247)), "./neo-c.h", 1366, 1248))->size=size_113;
                ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1367, 1249)), "./neo-c.h", 1367, 1250))->len=len_123;
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional70;
_Bool _if_conditional71;
_Bool _if_conditional91;
_Bool _if_conditional92;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional70=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 0, 1032)), "sClass_finalize", 0, 1033))->mName!=((void*)0),                    _if_conditional70) {
                        ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 0, 1034)), "sClass_finalize", 0, 1035))->mName = come_decrement_ref_count2(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 0, 1034)), "sClass_finalize", 0, 1035))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional71=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 1, 1036)), "sClass_finalize", 1, 1037))->mFields!=((void*)0),                    _if_conditional71) {
                        come_call_finalizer3(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 1, 1038)), "sClass_finalize", 1, 1039))->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional91=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 2, 1128)), "sClass_finalize", 2, 1129))->mDeclareSName!=((void*)0),                    _if_conditional91) {
                        ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 2, 1130)), "sClass_finalize", 2, 1131))->mDeclareSName = come_decrement_ref_count2(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 2, 1130)), "sClass_finalize", 2, 1131))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional92=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 3, 1132)), "sClass_finalize", 3, 1133))->mParentClassName!=((void*)0),                    _if_conditional92) {
                        ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 3, 1134)), "sClass_finalize", 3, 1135))->mParentClassName = come_decrement_ref_count2(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 3, 1134)), "sClass_finalize", 3, 1135))->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_116;
_Bool _while_condtional11;
struct list_item$1tuple2$2charphsTypephph* prev_it_117;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_116, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_117, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                            it_116=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 120, 1040)), "./neo-c.h", 120, 1041))->head;
                            while(_while_condtional11=it_116!=((void*)0),                            _while_condtional11) {
                                prev_it_117=it_116;
                                it_116=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_116, "./neo-c.h", 123, 1042)), "./neo-c.h", 123, 1043))->next;
                                come_call_finalizer3(prev_it_117,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional72;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional72=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0, 1044)), "list_item$1tuple2$2charphsTypephphp_finalize", 0, 1045))->item!=((void*)0),                                    _if_conditional72) {
                                        come_call_finalizer3(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0, 1046)), "list_item$1tuple2$2charphsTypephphp_finalize", 0, 1047))->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional75;
_Bool _if_conditional77;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
memset(&__result_obj__, 0, sizeof(void*));
                                                    if(_if_conditional75=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 0, 1056)), "sType_finalize", 0, 1057))->mMultipleTypes!=((void*)0),                                                    _if_conditional75) {
                                                        come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 0, 1058)), "sType_finalize", 0, 1059))->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(_if_conditional77=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 1, 1068)), "sType_finalize", 1, 1069))->mNoSolvedGenericsType!=((void*)0),                                                    _if_conditional77) {
                                                        come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 1, 1070)), "sType_finalize", 1, 1071))->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(_if_conditional79=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 2, 1076)), "sType_finalize", 2, 1077))->mOriginalLoadVarType!=((void*)0),                                                    _if_conditional79) {
                                                        come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 2, 1078)), "sType_finalize", 2, 1079))->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(_if_conditional80=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 1080)), "sType_finalize", 3, 1081))->mGenericsName!=((void*)0),                                                    _if_conditional80) {
                                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 1082)), "sType_finalize", 3, 1083))->mGenericsName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 1082)), "sType_finalize", 3, 1083))->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(_if_conditional81=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 4, 1084)), "sType_finalize", 4, 1085))->mGenericsTypes!=((void*)0),                                                    _if_conditional81) {
                                                        come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 4, 1086)), "sType_finalize", 4, 1087))->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(_if_conditional82=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 5, 1088)), "sType_finalize", 5, 1089))->mArrayNum!=((void*)0),                                                    _if_conditional82) {
                                                        come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 5, 1090)), "sType_finalize", 5, 1091))->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(_if_conditional84=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 6, 1100)), "sType_finalize", 6, 1101))->mParamTypes!=((void*)0),                                                    _if_conditional84) {
                                                        come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 6, 1102)), "sType_finalize", 6, 1103))->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(_if_conditional85=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 7, 1104)), "sType_finalize", 7, 1105))->mParamNames!=((void*)0),                                                    _if_conditional85) {
                                                        come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 7, 1106)), "sType_finalize", 7, 1107))->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(_if_conditional86=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 8, 1108)), "sType_finalize", 8, 1109))->mResultType!=((void*)0),                                                    _if_conditional86) {
                                                        come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 8, 1110)), "sType_finalize", 8, 1111))->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(_if_conditional87=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 1112)), "sType_finalize", 9, 1113))->mAlignas!=((void*)0),                                                    _if_conditional87) {
                                                        if(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 1114)), "sType_finalize", 9, 1115))->mAlignas) { ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 1114)), "sType_finalize", 9, 1115))->mAlignas = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 1114)), "sType_finalize", 9, 1115))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 1114)), "sType_finalize", 9, 1115))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 1114)), "sType_finalize", 9, 1115))->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    if(_if_conditional88=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 1116)), "sType_finalize", 10, 1117))->mSizeNum!=((void*)0),                                                    _if_conditional88) {
                                                        if(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 1118)), "sType_finalize", 10, 1119))->mSizeNum) { ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 1118)), "sType_finalize", 10, 1119))->mSizeNum = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 1118)), "sType_finalize", 10, 1119))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 1118)), "sType_finalize", 10, 1119))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 1118)), "sType_finalize", 10, 1119))->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    if(_if_conditional89=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 1120)), "sType_finalize", 11, 1121))->mOriginalTypeName!=((void*)0),                                                    _if_conditional89) {
                                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 1122)), "sType_finalize", 11, 1123))->mOriginalTypeName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 1122)), "sType_finalize", 11, 1123))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(_if_conditional90=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 1124)), "sType_finalize", 12, 1125))->mAsmName!=((void*)0),                                                    _if_conditional90) {
                                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 1126)), "sType_finalize", 12, 1127))->mAsmName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 1126)), "sType_finalize", 12, 1127))->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_118;
_Bool _while_condtional12;
struct list_item$1sTypeph* prev_it_119;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_118, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_119, 0, sizeof(struct list_item$1sTypeph*));
                                                            it_118=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 120, 1060)), "./neo-c.h", 120, 1061))->head;
                                                            while(_while_condtional12=it_118!=((void*)0),                                                            _while_condtional12) {
                                                                prev_it_119=it_118;
                                                                it_118=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_118, "./neo-c.h", 123, 1062)), "./neo-c.h", 123, 1063))->next;
                                                                come_call_finalizer3(prev_it_119,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                            }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional76;
memset(&__result_obj__, 0, sizeof(void*));
                                                                    if(_if_conditional76=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0, 1064)), "list_item$1sTypephp_finalize", 0, 1065))->item!=((void*)0),                                                                    _if_conditional76) {
                                                                        come_call_finalizer3(((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0, 1066)), "list_item$1sTypephp_finalize", 0, 1067))->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional78;
memset(&__result_obj__, 0, sizeof(void*));
                                                            if(_if_conditional78=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0, 1072)), "tuple1$1sTypephp_finalize", 0, 1073))->v1!=((void*)0),                                                            _if_conditional78) {
                                                                come_call_finalizer3(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0, 1074)), "tuple1$1sTypephp_finalize", 0, 1075))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_120;
_Bool _while_condtional13;
struct list_item$1sNodeph* prev_it_121;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_120, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_121, 0, sizeof(struct list_item$1sNodeph*));
                                                            it_120=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 120, 1092)), "./neo-c.h", 120, 1093))->head;
                                                            while(_while_condtional13=it_120!=((void*)0),                                                            _while_condtional13) {
                                                                prev_it_121=it_120;
                                                                it_120=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_120, "./neo-c.h", 123, 1094)), "./neo-c.h", 123, 1095))->next;
                                                                come_call_finalizer3(prev_it_121,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                            }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional83;
memset(&__result_obj__, 0, sizeof(void*));
                                                                    if(_if_conditional83=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 1096)), "list_item$1sNodephp_finalize", 0, 1097))->item!=((void*)0),                                                                    _if_conditional83) {
                                                                        if(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 1098)), "list_item$1sNodephp_finalize", 0, 1099))->item) { ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 1098)), "list_item$1sNodephp_finalize", 0, 1099))->item = come_decrement_ref_count2(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 1098)), "list_item$1sNodephp_finalize", 0, 1099))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 1098)), "list_item$1sNodephp_finalize", 0, 1099))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 1098)), "list_item$1sNodephp_finalize", 0, 1099))->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                    }
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional93;
char* result_124;
void* __exception_result_var_b187;
char* __result85__;
_Bool _if_conditional94;
char* __result86__;
char* result_125;
void* __exception_result_var_b188;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_124, 0, sizeof(char*));
memset(&result_125, 0, sizeof(char*));
                    if(_if_conditional93=self==((void*)0),                    _if_conditional93) {
                        (come_push_stackframe("./neo-c.h", 1282, 1138),__exception_result_var_b187=memset(&result_124,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b187);
                        __result85__ = __result_obj__ = result_124;
                        return __result85__;
                    }
                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1285, 1139)), "./neo-c.h", 1285, 1140))->key_list, "./neo-c.h", 1285, 1141)), "./neo-c.h", 1285, 1142))->it=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1285, 1143)), "./neo-c.h", 1285, 1144))->key_list, "./neo-c.h", 1285, 1145)), "./neo-c.h", 1285, 1146))->head;
                    if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1287, 1147)), "./neo-c.h", 1287, 1148))->key_list, "./neo-c.h", 1287, 1149)), "./neo-c.h", 1287, 1150))->it) {
                        __result86__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1288, 1151)), "./neo-c.h", 1288, 1152))->key_list, "./neo-c.h", 1288, 1153)), "./neo-c.h", 1288, 1154))->it, "./neo-c.h", 1288, 1155)), "./neo-c.h", 1288, 1156))->item;
                        return __result86__;
                    }
                    (come_push_stackframe("./neo-c.h", 1292, 1157),__exception_result_var_b188=memset(&result_125,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b188);
                    __result87__ = __result_obj__ = result_125;
                    return __result87__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result88__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result88__ = self==((void*)0)||((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1314, 1161)), "./neo-c.h", 1314, 1162))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1314, 1163)), "./neo-c.h", 1314, 1164))->key_list, "./neo-c.h", 1314, 1165)), "./neo-c.h", 1314, 1166))->it==((void*)0);
                    return __result88__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional95;
char* result_127;
void* __exception_result_var_b191;
char* __result89__;
_Bool _if_conditional96;
char* __result90__;
char* result_128;
void* __exception_result_var_b192;
char* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_127, 0, sizeof(char*));
memset(&result_128, 0, sizeof(char*));
                    if(_if_conditional95=self==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1297, 1170)), "./neo-c.h", 1297, 1171))->key_list, "./neo-c.h", 1297, 1172)), "./neo-c.h", 1297, 1173))->it==((void*)0),                    _if_conditional95) {
                        (come_push_stackframe("./neo-c.h", 1299, 1174),__exception_result_var_b191=memset(&result_127,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b191);
                        __result89__ = __result_obj__ = result_127;
                        return __result89__;
                    }
                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1302, 1175)), "./neo-c.h", 1302, 1176))->key_list, "./neo-c.h", 1302, 1177)), "./neo-c.h", 1302, 1178))->it=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1302, 1179)), "./neo-c.h", 1302, 1180))->key_list, "./neo-c.h", 1302, 1181)), "./neo-c.h", 1302, 1182))->it, "./neo-c.h", 1302, 1183)), "./neo-c.h", 1302, 1184))->next;
                    if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1304, 1185)), "./neo-c.h", 1304, 1186))->key_list, "./neo-c.h", 1304, 1187)), "./neo-c.h", 1304, 1188))->it) {
                        __result90__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1305, 1189)), "./neo-c.h", 1305, 1190))->key_list, "./neo-c.h", 1305, 1191)), "./neo-c.h", 1305, 1192))->it, "./neo-c.h", 1305, 1193)), "./neo-c.h", 1305, 1194))->item;
                        return __result90__;
                    }
                    (come_push_stackframe("./neo-c.h", 1309, 1195),__exception_result_var_b192=memset(&result_128,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b192);
                    __result91__ = __result_obj__ = result_128;
                    return __result91__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int __exception_result_var_b195;
unsigned int hash_131;
unsigned int it_132;
_Bool _while_condtional14;
_Bool _if_conditional97;
_Bool __exception_result_var_b196;
_Bool _if_conditional98;
struct sClass* __result92__;
_Bool _if_conditional99;
_Bool _if_conditional100;
struct sClass* __result93__;
struct sClass* __result94__;
struct sClass* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_131, 0, sizeof(unsigned int));
memset(&it_132, 0, sizeof(unsigned int));
                        hash_131=(come_push_stackframe("./neo-c.h", 1207, 1202),__exception_result_var_b195=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1207, 1200)), "./neo-c.h", 1207, 1201))), come_pop_stackframe(), __exception_result_var_b195)%((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1207, 1203)), "./neo-c.h", 1207, 1204))->size;
                        it_132=hash_131;
                        while(_while_condtional14=(_Bool)1,                        _while_condtional14) {
                            if(_if_conditional97=((_Bool*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1211, 1205)), "./neo-c.h", 1211, 1206))->item_existance, "./neo-c.h", 1211, 1207))[it_132],                            _if_conditional97) {
                                if(_if_conditional98=(come_push_stackframe("./neo-c.h", 1213, 1213),__exception_result_var_b196=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1213, 1208)), "./neo-c.h", 1213, 1209))->keys, "./neo-c.h", 1213, 1210))[it_132], "./neo-c.h", 1213, 1211)), "./neo-c.h", 1213, 1212)),key), come_pop_stackframe(), __exception_result_var_b196),                                _if_conditional98) {
                                    __result92__ = __result_obj__ = ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1215, 1214)), "./neo-c.h", 1215, 1215))->items, "./neo-c.h", 1215, 1216))[it_132];
                                    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result92__;
                                }
                                it_132++;
                                if(_if_conditional99=it_132>=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1220, 1217)), "./neo-c.h", 1220, 1218))->size,                                _if_conditional99) {
                                    it_132=0;
                                }
                                else {
                                    if(_if_conditional100=it_132==hash_131,                                    _if_conditional100) {
                                        __result93__ = __result_obj__ = default_value;
                                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result93__;
                                    }
                                }
                            }
                            else {
                                __result94__ = __result_obj__ = default_value;
                                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                return __result94__;
                            }
                        }
                        __result95__ = __result_obj__ = default_value;
                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                        return __result95__;
                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_138;
struct list_item$1charp* it_139;
_Bool _while_condtional17;
_Bool __exception_result_var_b203;
_Bool _if_conditional107;
struct list$1charp* __exception_result_var_b205;
struct list$1charp* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_138, 0, sizeof(int));
memset(&it_139, 0, sizeof(struct list_item$1charp*));
                            it2_138=0;
                            it_139=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 442, 1270)), "./neo-c.h", 442, 1271))->head;
                            while(_while_condtional17=it_139!=((void*)0),                            _while_condtional17) {
                                if(_if_conditional107=(come_push_stackframe("./neo-c.h", 444, 1276),__exception_result_var_b203=string_equals(((char*)come_null_check(((char*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_139, "./neo-c.h", 444, 1272)), "./neo-c.h", 444, 1273))->item, "./neo-c.h", 444, 1274)), "./neo-c.h", 444, 1275)),item), come_pop_stackframe(), __exception_result_var_b203),                                _if_conditional107) {
                                    (come_push_stackframe("./neo-c.h", 445, 1348),__exception_result_var_b205=list$1charp_delete(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 445, 1277)), "./neo-c.h", 445, 1278)),it2_138,it2_138+1), come_pop_stackframe(), __exception_result_var_b205);
                                    break;
                                }
                                it2_138++;
                                it_139=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_139, "./neo-c.h", 450, 1349)), "./neo-c.h", 450, 1350))->next;
                            }
                            __result99__ = __result_obj__ = self;
                            return __result99__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
int tmp_140;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
struct list$1charp* __result96__;
_Bool _if_conditional114;
struct list$1charp* __exception_result_var_b204;
_Bool _if_conditional115;
struct list_item$1charp* it_143;
int i_144;
_Bool _while_condtional19;
_Bool _if_conditional116;
struct list_item$1charp* prev_it_145;
_Bool _if_conditional117;
_Bool _if_conditional118;
struct list_item$1charp* it_146;
int i_147;
_Bool _while_condtional20;
_Bool _if_conditional119;
_Bool _if_conditional120;
struct list_item$1charp* prev_it_148;
struct list_item$1charp* it_149;
struct list_item$1charp* head_prev_it_150;
struct list_item$1charp* tail_it_151;
int i_152;
_Bool _while_condtional21;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
struct list_item$1charp* prev_it_153;
_Bool _if_conditional124;
_Bool _if_conditional125;
struct list$1charp* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_140, 0, sizeof(int));
memset(&it_143, 0, sizeof(struct list_item$1charp*));
memset(&i_144, 0, sizeof(int));
memset(&prev_it_145, 0, sizeof(struct list_item$1charp*));
memset(&it_146, 0, sizeof(struct list_item$1charp*));
memset(&i_147, 0, sizeof(int));
memset(&prev_it_148, 0, sizeof(struct list_item$1charp*));
memset(&it_149, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_150, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_151, 0, sizeof(struct list_item$1charp*));
memset(&i_152, 0, sizeof(int));
memset(&prev_it_153, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional108=head<0,                                        _if_conditional108) {
                                            head+=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 458, 1279)), "./neo-c.h", 458, 1280))->len;
                                        }
                                        if(_if_conditional109=tail<0,                                        _if_conditional109) {
                                            tail+=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 461, 1281)), "./neo-c.h", 461, 1282))->len+1;
                                        }
                                        if(_if_conditional110=head>tail,                                        _if_conditional110) {
                                            tmp_140=tail;
                                            tail=head;
                                            head=tmp_140;
                                        }
                                        if(_if_conditional111=head<0,                                        _if_conditional111) {
                                            head=0;
                                        }
                                        if(_if_conditional112=tail>((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 474, 1283)), "./neo-c.h", 474, 1284))->len,                                        _if_conditional112) {
                                            tail=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 475, 1285)), "./neo-c.h", 475, 1286))->len;
                                        }
                                        if(_if_conditional113=head==tail,                                        _if_conditional113) {
                                            __result96__ = __result_obj__ = self;
                                            return __result96__;
                                        }
                                        if(_if_conditional114=head==0&&tail==((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 482, 1287)), "./neo-c.h", 482, 1288))->len,                                        _if_conditional114) {
                                            (come_push_stackframe("./neo-c.h", 484, 1301),__exception_result_var_b204=list$1charp_reset(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 484, 1289)), "./neo-c.h", 484, 1290))), come_pop_stackframe(), __exception_result_var_b204);
                                        }
                                        else {
                                            if(_if_conditional115=head==0,                                            _if_conditional115) {
                                                it_143=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 487, 1302)), "./neo-c.h", 487, 1303))->head;
                                                i_144=0;
                                                while(_while_condtional19=it_143!=((void*)0),                                                _while_condtional19) {
                                                    if(_if_conditional116=i_144<tail,                                                    _if_conditional116) {
                                                        prev_it_145=it_143;
                                                        it_143=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_143, "./neo-c.h", 493, 1304)), "./neo-c.h", 493, 1305))->next;
                                                        i_144++;
                                                        come_call_finalizer3(prev_it_145,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 498, 1306)), "./neo-c.h", 498, 1307))->len--;
                                                    }
                                                    else {
                                                        if(_if_conditional117=i_144==tail,                                                        _if_conditional117) {
                                                            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 501, 1308)), "./neo-c.h", 501, 1309))->head=it_143;
                                                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 502, 1310)), "./neo-c.h", 502, 1311))->head, "./neo-c.h", 502, 1312)), "./neo-c.h", 502, 1313))->prev=((void*)0);
                                                            break;
                                                        }
                                                        else {
                                                            it_143=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_143, "./neo-c.h", 506, 1314)), "./neo-c.h", 506, 1315))->next;
                                                            i_144++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                if(_if_conditional118=tail==((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 511, 1316)), "./neo-c.h", 511, 1317))->len,                                                _if_conditional118) {
                                                    it_146=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 512, 1318)), "./neo-c.h", 512, 1319))->head;
                                                    i_147=0;
                                                    while(_while_condtional20=it_146!=((void*)0),                                                    _while_condtional20) {
                                                        if(_if_conditional119=i_147==head,                                                        _if_conditional119) {
                                                            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 516, 1320)), "./neo-c.h", 516, 1321))->tail=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_146, "./neo-c.h", 516, 1322)), "./neo-c.h", 516, 1323))->prev;
                                                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 517, 1324)), "./neo-c.h", 517, 1325))->tail, "./neo-c.h", 517, 1326)), "./neo-c.h", 517, 1327))->next=((void*)0);
                                                        }
                                                        if(_if_conditional120=i_147>=head,                                                        _if_conditional120) {
                                                            prev_it_148=it_146;
                                                            it_146=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_146, "./neo-c.h", 523, 1328)), "./neo-c.h", 523, 1329))->next;
                                                            i_147++;
                                                            come_call_finalizer3(prev_it_148,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 528, 1330)), "./neo-c.h", 528, 1331))->len--;
                                                        }
                                                        else {
                                                            it_146=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_146, "./neo-c.h", 531, 1332)), "./neo-c.h", 531, 1333))->next;
                                                            i_147++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    it_149=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 537, 1334)), "./neo-c.h", 537, 1335))->head;
                                                    head_prev_it_150=((void*)0);
                                                    tail_it_151=((void*)0);
                                                    i_152=0;
                                                    while(_while_condtional21=it_149!=((void*)0),                                                    _while_condtional21) {
                                                        if(_if_conditional121=i_152==head,                                                        _if_conditional121) {
                                                            head_prev_it_150=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_149, "./neo-c.h", 546, 1336)), "./neo-c.h", 546, 1337))->prev;
                                                        }
                                                        if(_if_conditional122=i_152==tail,                                                        _if_conditional122) {
                                                            tail_it_151=it_149;
                                                        }
                                                        if(_if_conditional123=i_152>=head&&i_152<tail,                                                        _if_conditional123) {
                                                            prev_it_153=it_149;
                                                            it_149=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_149, "./neo-c.h", 556, 1338)), "./neo-c.h", 556, 1339))->next;
                                                            i_152++;
                                                            come_call_finalizer3(prev_it_153,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 561, 1340)), "./neo-c.h", 561, 1341))->len--;
                                                        }
                                                        else {
                                                            it_149=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_149, "./neo-c.h", 564, 1342)), "./neo-c.h", 564, 1343))->next;
                                                            i_152++;
                                                        }
                                                    }
                                                    if(_if_conditional124=head_prev_it_150!=((void*)0),                                                    _if_conditional124) {
                                                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(head_prev_it_150, "./neo-c.h", 570, 1344)), "./neo-c.h", 570, 1345))->next=tail_it_151;
                                                    }
                                                    if(_if_conditional125=tail_it_151!=((void*)0),                                                    _if_conditional125) {
                                                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(tail_it_151, "./neo-c.h", 573, 1346)), "./neo-c.h", 573, 1347))->prev=head_prev_it_150;
                                                    }
                                                }
                                            }
                                        }
                                        __result98__ = __result_obj__ = self;
                                        return __result98__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_141;
_Bool _while_condtional18;
struct list_item$1charp* prev_it_142;
struct list$1charp* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_141, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_142, 0, sizeof(struct list_item$1charp*));
                                                it_141=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 426, 1291)), "./neo-c.h", 426, 1292))->head;
                                                while(_while_condtional18=it_141!=((void*)0),                                                _while_condtional18) {
                                                    prev_it_142=it_141;
                                                    it_141=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_141, "./neo-c.h", 429, 1293)), "./neo-c.h", 429, 1294))->next;
                                                    come_call_finalizer3(prev_it_142,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 433, 1295)), "./neo-c.h", 433, 1296))->head=((void*)0);
                                                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 434, 1297)), "./neo-c.h", 434, 1298))->tail=((void*)0);
                                                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 436, 1299)), "./neo-c.h", 436, 1300))->len=0;
                                                __result97__ = __result_obj__ = self;
                                                return __result97__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional131;
char* result_155;
void* __exception_result_var_b209;
char* __result100__;
_Bool _if_conditional132;
char* __result101__;
char* result_156;
void* __exception_result_var_b210;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_155, 0, sizeof(char*));
memset(&result_156, 0, sizeof(char*));
            if(_if_conditional131=self==((void*)0),            _if_conditional131) {
                (come_push_stackframe("./neo-c.h", 284, 1407),__exception_result_var_b209=memset(&result_155,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b209);
                __result100__ = __result_obj__ = result_155;
                return __result100__;
            }
            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 287, 1408)), "./neo-c.h", 287, 1409))->it=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 287, 1410)), "./neo-c.h", 287, 1411))->head;
            if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 289, 1412)), "./neo-c.h", 289, 1413))->it) {
                __result101__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 290, 1414)), "./neo-c.h", 290, 1415))->it, "./neo-c.h", 290, 1416)), "./neo-c.h", 290, 1417))->item;
                return __result101__;
            }
            (come_push_stackframe("./neo-c.h", 294, 1418),__exception_result_var_b210=memset(&result_156,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b210);
            __result102__ = __result_obj__ = result_156;
            return __result102__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result103__;
memset(&__result_obj__, 0, sizeof(void*));
            __result103__ = self==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 317, 1424)), "./neo-c.h", 317, 1425))->it==((void*)0);
            return __result103__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional133;
char* result_158;
void* __exception_result_var_b213;
char* __result104__;
_Bool _if_conditional134;
char* __result105__;
char* result_159;
void* __exception_result_var_b214;
char* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_158, 0, sizeof(char*));
memset(&result_159, 0, sizeof(char*));
            if(_if_conditional133=self==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 299, 1431)), "./neo-c.h", 299, 1432))->it==((void*)0),            _if_conditional133) {
                (come_push_stackframe("./neo-c.h", 301, 1433),__exception_result_var_b213=memset(&result_158,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b213);
                __result104__ = __result_obj__ = result_158;
                return __result104__;
            }
            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 305, 1434)), "./neo-c.h", 305, 1435))->it=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 305, 1436)), "./neo-c.h", 305, 1437))->it, "./neo-c.h", 305, 1438)), "./neo-c.h", 305, 1439))->next;
            if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 307, 1440)), "./neo-c.h", 307, 1441))->it) {
                __result105__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 308, 1442)), "./neo-c.h", 308, 1443))->it, "./neo-c.h", 308, 1444)), "./neo-c.h", 308, 1445))->item;
                return __result105__;
            }
            (come_push_stackframe("./neo-c.h", 312, 1446),__exception_result_var_b214=memset(&result_159,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b214);
            __result106__ = __result_obj__ = result_159;
            return __result106__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional137;
void* right_value189;
struct list_item$1charp* litem_160;
_Bool _if_conditional138;
void* right_value190;
struct list_item$1charp* litem_161;
void* right_value191;
struct list_item$1charp* litem_162;
struct list$1charp* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
right_value189 = (void*)0;
memset(&litem_160, 0, sizeof(struct list_item$1charp*));
right_value190 = (void*)0;
memset(&litem_161, 0, sizeof(struct list_item$1charp*));
right_value191 = (void*)0;
memset(&litem_162, 0, sizeof(struct list_item$1charp*));
                if(_if_conditional137=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 222, 1455)), "./neo-c.h", 222, 1456))->len==0,                _if_conditional137) {
                    litem_160=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value189=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 223, "list_item$1charp"))));
                    come_call_finalizer3(right_value189,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_160, "./neo-c.h", 225, 1457)), "./neo-c.h", 225, 1458))->prev=((void*)0);
                    ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_160, "./neo-c.h", 226, 1459)), "./neo-c.h", 226, 1460))->next=((void*)0);
                    ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_160, "./neo-c.h", 227, 1461)), "./neo-c.h", 227, 1462))->item=item;
                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 229, 1463)), "./neo-c.h", 229, 1464))->tail=litem_160;
                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 230, 1465)), "./neo-c.h", 230, 1466))->head=litem_160;
                }
                else {
                    if(_if_conditional138=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 232, 1467)), "./neo-c.h", 232, 1468))->len==1,                    _if_conditional138) {
                        litem_161=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value190=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 233, "list_item$1charp"))));
                        come_call_finalizer3(right_value190,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_161, "./neo-c.h", 235, 1469)), "./neo-c.h", 235, 1470))->prev=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 235, 1471)), "./neo-c.h", 235, 1472))->head;
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_161, "./neo-c.h", 236, 1473)), "./neo-c.h", 236, 1474))->next=((void*)0);
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_161, "./neo-c.h", 237, 1475)), "./neo-c.h", 237, 1476))->item=item;
                        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 239, 1477)), "./neo-c.h", 239, 1478))->tail=litem_161;
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 240, 1479)), "./neo-c.h", 240, 1480))->head, "./neo-c.h", 240, 1481)), "./neo-c.h", 240, 1482))->next=litem_161;
                    }
                    else {
                        litem_162=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value191=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 243, "list_item$1charp"))));
                        come_call_finalizer3(right_value191,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_162, "./neo-c.h", 245, 1483)), "./neo-c.h", 245, 1484))->prev=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 245, 1485)), "./neo-c.h", 245, 1486))->tail;
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_162, "./neo-c.h", 246, 1487)), "./neo-c.h", 246, 1488))->next=((void*)0);
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_162, "./neo-c.h", 247, 1489)), "./neo-c.h", 247, 1490))->item=item;
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 249, 1491)), "./neo-c.h", 249, 1492))->tail, "./neo-c.h", 249, 1493)), "./neo-c.h", 249, 1494))->next=litem_162;
                        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 250, 1495)), "./neo-c.h", 250, 1496))->tail=litem_162;
                    }
                }
                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 253, 1497)), "./neo-c.h", 253, 1498))->len++;
                __result107__ = __result_obj__ = self;
                return __result107__;
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__;
_Bool _if_conditional140;
unsigned int __exception_result_var_b282;
unsigned int hash_188;
unsigned int it_189;
_Bool _while_condtional24;
_Bool _if_conditional152;
_Bool __exception_result_var_b283;
_Bool _if_conditional153;
_Bool _if_conditional154;
struct list$1charp* __exception_result_var_b284;
struct list$1charp* __exception_result_var_b285;
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool _if_conditional157;
int __exception_result_var_b286;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool same_key_exist_190;
char* __exception_result_var_b287;
char* it2_191;
_Bool __exception_result_var_b288;
char* __exception_result_var_b289;
_Bool __exception_result_var_b290;
_Bool _if_conditional160;
_Bool _if_conditional161;
struct list$1charp* __exception_result_var_b291;
struct map$2charphsTypeph* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_188, 0, sizeof(unsigned int));
memset(&it_189, 0, sizeof(unsigned int));
memset(&same_key_exist_190, 0, sizeof(_Bool));
memset(&it2_191, 0, sizeof(char*));
            if(_if_conditional140=((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1371, 1628)), "./neo-c.h", 1371, 1629))->len*10>=((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1371, 1630)), "./neo-c.h", 1371, 1631))->size,            _if_conditional140) {
                (come_push_stackframe("./neo-c.h", 1372,1751),map$2charphsTypeph_rehash(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1372, 1632)), "./neo-c.h", 1372, 1633))),come_pop_stackframe());
            }
            hash_188=(come_push_stackframe("./neo-c.h", 1374, 1754),__exception_result_var_b282=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(key, "./neo-c.h", 1374, 1752)), "./neo-c.h", 1374, 1753))), come_pop_stackframe(), __exception_result_var_b282)%((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1374, 1755)), "./neo-c.h", 1374, 1756))->size;
            it_189=hash_188;
            while(_while_condtional24=(_Bool)1,            _while_condtional24) {
                if(_if_conditional152=((_Bool*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1378, 1757)), "./neo-c.h", 1378, 1758))->item_existance, "./neo-c.h", 1378, 1759))[it_189],                _if_conditional152) {
                    if(_if_conditional153=(come_push_stackframe("./neo-c.h", 1380, 1765),__exception_result_var_b283=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1380, 1760)), "./neo-c.h", 1380, 1761))->keys, "./neo-c.h", 1380, 1762))[it_189], "./neo-c.h", 1380, 1763)), "./neo-c.h", 1380, 1764)),key), come_pop_stackframe(), __exception_result_var_b283),                    _if_conditional153) {
                        if(_if_conditional154=1,                        _if_conditional154) {
                            (come_push_stackframe("./neo-c.h", 1383, 1773),__exception_result_var_b284=list$1charp_remove(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1383, 1766)), "./neo-c.h", 1383, 1767))->key_list, "./neo-c.h", 1383, 1768)), "./neo-c.h", 1383, 1769)),((char**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1383, 1770)), "./neo-c.h", 1383, 1771))->keys, "./neo-c.h", 1383, 1772))[it_189]), come_pop_stackframe(), __exception_result_var_b284);
                            ((char**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1384, 1774)), "./neo-c.h", 1384, 1775))->keys, "./neo-c.h", 1384, 1776))[it_189] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1384, 1774)), "./neo-c.h", 1384, 1775))->keys, "./neo-c.h", 1384, 1776))[it_189], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            ((char**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1385, 1777)), "./neo-c.h", 1385, 1778))->keys, "./neo-c.h", 1385, 1779))[it_189]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            (come_push_stackframe("./neo-c.h", 1388, 1787),__exception_result_var_b285=list$1charp_remove(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1388, 1780)), "./neo-c.h", 1388, 1781))->key_list, "./neo-c.h", 1388, 1782)), "./neo-c.h", 1388, 1783)),((char**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1388, 1784)), "./neo-c.h", 1388, 1785))->keys, "./neo-c.h", 1388, 1786))[it_189]), come_pop_stackframe(), __exception_result_var_b285);
                            ((char**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1389, 1788)), "./neo-c.h", 1389, 1789))->keys, "./neo-c.h", 1389, 1790))[it_189]=key;
                        }
                        if(_if_conditional155=1,                        _if_conditional155) {
                            come_call_finalizer3(((struct sType**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1392, 1791)), "./neo-c.h", 1392, 1792))->items, "./neo-c.h", 1392, 1793))[it_189],sType_finalize, 0, 0, 0, 0, (void*)0);
                            ((struct sType**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1393, 1794)), "./neo-c.h", 1393, 1795))->items, "./neo-c.h", 1393, 1796))[it_189]=(struct sType*)come_increment_ref_count(item);
                        }
                        else {
                            ((struct sType**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1396, 1797)), "./neo-c.h", 1396, 1798))->items, "./neo-c.h", 1396, 1799))[it_189]=item;
                        }
                        break;
                    }
                    it_189++;
                    if(_if_conditional156=it_189>=((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1403, 1800)), "./neo-c.h", 1403, 1801))->size,                    _if_conditional156) {
                        it_189=0;
                    }
                    else {
                        if(_if_conditional157=it_189==hash_188,                        _if_conditional157) {
                            (come_push_stackframe("./neo-c.h", 1407, 1802),__exception_result_var_b286=printf("unexpected error in map.insert\n"), come_pop_stackframe(), __exception_result_var_b286);
                            (come_push_stackframe("./neo-c.h", 1408,1803),stackframe(),come_pop_stackframe());
                            (come_push_stackframe("./neo-c.h", 1409,1804),exit(2),come_pop_stackframe());
                        }
                    }
                }
                else {
                    ((_Bool*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1413, 1805)), "./neo-c.h", 1413, 1806))->item_existance, "./neo-c.h", 1413, 1807))[it_189]=(_Bool)1;
                    if(_if_conditional158=1,                    _if_conditional158) {
                        ((char**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1415, 1808)), "./neo-c.h", 1415, 1809))->keys, "./neo-c.h", 1415, 1810))[it_189]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        ((char**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1418, 1811)), "./neo-c.h", 1418, 1812))->keys, "./neo-c.h", 1418, 1813))[it_189]=key;
                    }
                    if(_if_conditional159=1,                    _if_conditional159) {
                        ((struct sType**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1421, 1814)), "./neo-c.h", 1421, 1815))->items, "./neo-c.h", 1421, 1816))[it_189]=(struct sType*)come_increment_ref_count(item);
                    }
                    else {
                        ((struct sType**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1424, 1817)), "./neo-c.h", 1424, 1818))->items, "./neo-c.h", 1424, 1819))[it_189]=item;
                    }
                    ((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1427, 1820)), "./neo-c.h", 1427, 1821))->len++;
                    break;
                }
            }
            same_key_exist_190=(_Bool)0;
            for(            it2_191=(come_push_stackframe("./neo-c.h", 1434, 1826),__exception_result_var_b287=list$1charp_begin(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1434, 1822)), "./neo-c.h", 1434, 1823))->key_list, "./neo-c.h", 1434, 1824)), "./neo-c.h", 1434, 1825))), come_pop_stackframe(), __exception_result_var_b287);            !(come_push_stackframe("./neo-c.h", 1434, 1831),__exception_result_var_b288=list$1charp_end(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1434, 1827)), "./neo-c.h", 1434, 1828))->key_list, "./neo-c.h", 1434, 1829)), "./neo-c.h", 1434, 1830))), come_pop_stackframe(), __exception_result_var_b288);            it2_191=(come_push_stackframe("./neo-c.h", 1434, 1836),__exception_result_var_b289=list$1charp_next(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1434, 1832)), "./neo-c.h", 1434, 1833))->key_list, "./neo-c.h", 1434, 1834)), "./neo-c.h", 1434, 1835))), come_pop_stackframe(), __exception_result_var_b289)            ){
                if(_if_conditional160=(come_push_stackframe("./neo-c.h", 1436, 1839),__exception_result_var_b290=string_equals(((char*)come_null_check(((char*)come_null_check(it2_191, "./neo-c.h", 1436, 1837)), "./neo-c.h", 1436, 1838)),key), come_pop_stackframe(), __exception_result_var_b290),                _if_conditional160) {
                    same_key_exist_190=(_Bool)1;
                }
            }
            if(_if_conditional161=!same_key_exist_190,            _if_conditional161) {
                (come_push_stackframe("./neo-c.h", 1442, 1844),__exception_result_var_b291=list$1charp_push_back(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1442, 1840)), "./neo-c.h", 1442, 1841))->key_list, "./neo-c.h", 1442, 1842)), "./neo-c.h", 1442, 1843)),key), come_pop_stackframe(), __exception_result_var_b291);
            }
            __result120__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result120__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
void* __result_obj__;
int size_171;
void* right_value241;
char** keys_172;
void* right_value242;
struct sType** items_173;
void* right_value243;
_Bool* item_existance_174;
int len_175;
char* __exception_result_var_b270;
char* it_178;
_Bool __exception_result_var_b271;
char* __exception_result_var_b274;
struct sType* default_value_181;
void* __exception_result_var_b275;
struct sType* __exception_result_var_b278;
struct sType* it2_182;
unsigned int __exception_result_var_b279;
unsigned int hash_185;
int n_186;
_Bool _while_condtional23;
_Bool _if_conditional149;
_Bool _if_conditional150;
_Bool _if_conditional151;
int __exception_result_var_b280;
struct sType* default_value_187;
struct sType* __exception_result_var_b281;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_171, 0, sizeof(int));
right_value241 = (void*)0;
memset(&keys_172, 0, sizeof(char**));
right_value242 = (void*)0;
memset(&items_173, 0, sizeof(struct sType**));
right_value243 = (void*)0;
memset(&item_existance_174, 0, sizeof(_Bool*));
memset(&len_175, 0, sizeof(int));
memset(&it_178, 0, sizeof(char*));
memset(&default_value_181, 0, sizeof(struct sType*));
memset(&it2_182, 0, sizeof(struct sType*));
memset(&hash_185, 0, sizeof(unsigned int));
memset(&n_186, 0, sizeof(int));
memset(&default_value_187, 0, sizeof(struct sType*));
                    size_171=((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1318, 1634)), "./neo-c.h", 1318, 1635))->size*10;
                    keys_172=(char**)come_increment_ref_count(((char**)(right_value241=(char**)come_calloc(1, sizeof(char*)*(1*(size_171)), "./neo-c.h", 1319, "char*%"))));
                    right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    items_173=(struct sType**)come_increment_ref_count(((struct sType**)(right_value242=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_171)), "./neo-c.h", 1320, "sType*%"))));
                    come_call_finalizer3(right_value242,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    item_existance_174=(_Bool*)come_increment_ref_count(((_Bool*)(right_value243=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_171)), "./neo-c.h", 1321, "bool"))));
                    right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    len_175=0;
                    for(                    it_178=(come_push_stackframe("./neo-c.h", 1325, 1658),__exception_result_var_b270=map$2charphsTypeph_begin(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1325, 1636)), "./neo-c.h", 1325, 1637))), come_pop_stackframe(), __exception_result_var_b270);                    !(come_push_stackframe("./neo-c.h", 1325, 1667),__exception_result_var_b271=map$2charphsTypeph_end(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1325, 1659)), "./neo-c.h", 1325, 1660))), come_pop_stackframe(), __exception_result_var_b271);                    it_178=(come_push_stackframe("./neo-c.h", 1325, 1696),__exception_result_var_b274=map$2charphsTypeph_next(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1325, 1668)), "./neo-c.h", 1325, 1669))), come_pop_stackframe(), __exception_result_var_b274)                    ){
                        (come_push_stackframe("./neo-c.h", 1327, 1697),__exception_result_var_b275=memset(&default_value_181,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b275);
                        it2_182=(come_push_stackframe("./neo-c.h", 1328, 1719),__exception_result_var_b278=map$2charphsTypeph_at(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1328, 1698)), "./neo-c.h", 1328, 1699)),it_178,default_value_181), come_pop_stackframe(), __exception_result_var_b278);
                        hash_185=(come_push_stackframe("./neo-c.h", 1329, 1722),__exception_result_var_b279=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(it_178, "./neo-c.h", 1329, 1720)), "./neo-c.h", 1329, 1721))), come_pop_stackframe(), __exception_result_var_b279)%size_171;
                        n_186=hash_185;
                        while(_while_condtional23=(_Bool)1,                        _while_condtional23) {
                            if(_if_conditional149=((_Bool*)come_null_check(item_existance_174, "./neo-c.h", 1333, 1723))[n_186],                            _if_conditional149) {
                                n_186++;
                                if(_if_conditional150=n_186>=size_171,                                _if_conditional150) {
                                    n_186=0;
                                }
                                else {
                                    if(_if_conditional151=n_186==hash_185,                                    _if_conditional151) {
                                        (come_push_stackframe("./neo-c.h", 1341, 1724),__exception_result_var_b280=printf("unexpected error in map.rehash(1)\n"), come_pop_stackframe(), __exception_result_var_b280);
                                        (come_push_stackframe("./neo-c.h", 1342,1725),stackframe(),come_pop_stackframe());
                                        (come_push_stackframe("./neo-c.h", 1343,1726),exit(2),come_pop_stackframe());
                                    }
                                }
                            }
                            else {
                                ((_Bool*)come_null_check(item_existance_174, "./neo-c.h", 1347, 1727))[n_186]=(_Bool)1;
                                ((char**)come_null_check(keys_172, "./neo-c.h", 1348, 1728))[n_186]=it_178;
                                ((struct sType**)come_null_check(items_173, "./neo-c.h", 1350, 1729))[n_186]=(come_push_stackframe("./neo-c.h", 1350, 1732),__exception_result_var_b281=map$2charphsTypeph_at(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1350, 1730)), "./neo-c.h", 1350, 1731)),it_178,default_value_187), come_pop_stackframe(), __exception_result_var_b281);
                                len_175++;
                                break;
                            }
                        }
                    }
                    (come_push_stackframe("./neo-c.h", 1358,1735),come_free((char*)((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1358, 1733)), "./neo-c.h", 1358, 1734))->items),come_pop_stackframe());
                    ((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1359, 1736)), "./neo-c.h", 1359, 1737))->item_existance = come_decrement_ref_count2(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1359, 1736)), "./neo-c.h", 1359, 1737))->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (come_push_stackframe("./neo-c.h", 1360,1740),come_free((char*)((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1360, 1738)), "./neo-c.h", 1360, 1739))->keys),come_pop_stackframe());
                    ((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1362, 1741)), "./neo-c.h", 1362, 1742))->keys=keys_172;
                    ((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1363, 1743)), "./neo-c.h", 1363, 1744))->items=items_173;
                    ((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1364, 1745)), "./neo-c.h", 1364, 1746))->item_existance=item_existance_174;
                    ((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1366, 1747)), "./neo-c.h", 1366, 1748))->size=size_171;
                    ((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1367, 1749)), "./neo-c.h", 1367, 1750))->len=len_175;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional141;
char* result_176;
void* __exception_result_var_b268;
char* __result109__;
_Bool _if_conditional142;
char* __result110__;
char* result_177;
void* __exception_result_var_b269;
char* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_176, 0, sizeof(char*));
memset(&result_177, 0, sizeof(char*));
                        if(_if_conditional141=self==((void*)0),                        _if_conditional141) {
                            (come_push_stackframe("./neo-c.h", 1282, 1638),__exception_result_var_b268=memset(&result_176,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b268);
                            __result109__ = __result_obj__ = result_176;
                            return __result109__;
                        }
                        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1285, 1639)), "./neo-c.h", 1285, 1640))->key_list, "./neo-c.h", 1285, 1641)), "./neo-c.h", 1285, 1642))->it=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1285, 1643)), "./neo-c.h", 1285, 1644))->key_list, "./neo-c.h", 1285, 1645)), "./neo-c.h", 1285, 1646))->head;
                        if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1287, 1647)), "./neo-c.h", 1287, 1648))->key_list, "./neo-c.h", 1287, 1649)), "./neo-c.h", 1287, 1650))->it) {
                            __result110__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1288, 1651)), "./neo-c.h", 1288, 1652))->key_list, "./neo-c.h", 1288, 1653)), "./neo-c.h", 1288, 1654))->it, "./neo-c.h", 1288, 1655)), "./neo-c.h", 1288, 1656))->item;
                            return __result110__;
                        }
                        (come_push_stackframe("./neo-c.h", 1292, 1657),__exception_result_var_b269=memset(&result_177,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b269);
                        __result111__ = __result_obj__ = result_177;
                        return __result111__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result112__ = self==((void*)0)||((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1314, 1661)), "./neo-c.h", 1314, 1662))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1314, 1663)), "./neo-c.h", 1314, 1664))->key_list, "./neo-c.h", 1314, 1665)), "./neo-c.h", 1314, 1666))->it==((void*)0);
                        return __result112__;
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional143;
char* result_179;
void* __exception_result_var_b272;
char* __result113__;
_Bool _if_conditional144;
char* __result114__;
char* result_180;
void* __exception_result_var_b273;
char* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_179, 0, sizeof(char*));
memset(&result_180, 0, sizeof(char*));
                        if(_if_conditional143=self==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1297, 1670)), "./neo-c.h", 1297, 1671))->key_list, "./neo-c.h", 1297, 1672)), "./neo-c.h", 1297, 1673))->it==((void*)0),                        _if_conditional143) {
                            (come_push_stackframe("./neo-c.h", 1299, 1674),__exception_result_var_b272=memset(&result_179,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b272);
                            __result113__ = __result_obj__ = result_179;
                            return __result113__;
                        }
                        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1302, 1675)), "./neo-c.h", 1302, 1676))->key_list, "./neo-c.h", 1302, 1677)), "./neo-c.h", 1302, 1678))->it=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1302, 1679)), "./neo-c.h", 1302, 1680))->key_list, "./neo-c.h", 1302, 1681)), "./neo-c.h", 1302, 1682))->it, "./neo-c.h", 1302, 1683)), "./neo-c.h", 1302, 1684))->next;
                        if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1304, 1685)), "./neo-c.h", 1304, 1686))->key_list, "./neo-c.h", 1304, 1687)), "./neo-c.h", 1304, 1688))->it) {
                            __result114__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1305, 1689)), "./neo-c.h", 1305, 1690))->key_list, "./neo-c.h", 1305, 1691)), "./neo-c.h", 1305, 1692))->it, "./neo-c.h", 1305, 1693)), "./neo-c.h", 1305, 1694))->item;
                            return __result114__;
                        }
                        (come_push_stackframe("./neo-c.h", 1309, 1695),__exception_result_var_b273=memset(&result_180,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b273);
                        __result115__ = __result_obj__ = result_180;
                        return __result115__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__;
unsigned int __exception_result_var_b276;
unsigned int hash_183;
unsigned int it_184;
_Bool _while_condtional22;
_Bool _if_conditional145;
_Bool __exception_result_var_b277;
_Bool _if_conditional146;
struct sType* __result116__;
_Bool _if_conditional147;
_Bool _if_conditional148;
struct sType* __result117__;
struct sType* __result118__;
struct sType* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_183, 0, sizeof(unsigned int));
memset(&it_184, 0, sizeof(unsigned int));
                            hash_183=(come_push_stackframe("./neo-c.h", 1207, 1702),__exception_result_var_b276=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1207, 1700)), "./neo-c.h", 1207, 1701))), come_pop_stackframe(), __exception_result_var_b276)%((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1207, 1703)), "./neo-c.h", 1207, 1704))->size;
                            it_184=hash_183;
                            while(_while_condtional22=(_Bool)1,                            _while_condtional22) {
                                if(_if_conditional145=((_Bool*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1211, 1705)), "./neo-c.h", 1211, 1706))->item_existance, "./neo-c.h", 1211, 1707))[it_184],                                _if_conditional145) {
                                    if(_if_conditional146=(come_push_stackframe("./neo-c.h", 1213, 1713),__exception_result_var_b277=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1213, 1708)), "./neo-c.h", 1213, 1709))->keys, "./neo-c.h", 1213, 1710))[it_184], "./neo-c.h", 1213, 1711)), "./neo-c.h", 1213, 1712)),key), come_pop_stackframe(), __exception_result_var_b277),                                    _if_conditional146) {
                                        __result116__ = __result_obj__ = ((struct sType**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1215, 1714)), "./neo-c.h", 1215, 1715))->items, "./neo-c.h", 1215, 1716))[it_184];
                                        come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result116__;
                                    }
                                    it_184++;
                                    if(_if_conditional147=it_184>=((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1220, 1717)), "./neo-c.h", 1220, 1718))->size,                                    _if_conditional147) {
                                        it_184=0;
                                    }
                                    else {
                                        if(_if_conditional148=it_184==hash_183,                                        _if_conditional148) {
                                            __result117__ = __result_obj__ = default_value;
                                            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result117__;
                                        }
                                    }
                                }
                                else {
                                    __result118__ = __result_obj__ = default_value;
                                    come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result118__;
                                }
                            }
                            __result119__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                            return __result119__;
                            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional162;
void* right_value247;
struct list_item$1tuple2$2charphsTypephph* litem_193;
struct tuple2$2charphsTypeph* __dec_obj26;
_Bool _if_conditional165;
void* right_value248;
struct list_item$1tuple2$2charphsTypephph* litem_194;
struct tuple2$2charphsTypeph* __dec_obj27;
void* right_value249;
struct list_item$1tuple2$2charphsTypephph* litem_195;
struct tuple2$2charphsTypeph* __dec_obj28;
struct list$1tuple2$2charphsTypephph* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
right_value247 = (void*)0;
memset(&litem_193, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value248 = (void*)0;
memset(&litem_194, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value249 = (void*)0;
memset(&litem_195, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
            if(_if_conditional162=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 222, 1853)), "./neo-c.h", 222, 1854))->len==0,            _if_conditional162) {
                litem_193=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value247=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 223, "list_item$1tuple2$2charphsTypephph"))));
                come_call_finalizer3(right_value247,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_193, "./neo-c.h", 225, 1855)), "./neo-c.h", 225, 1856))->prev=((void*)0);
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_193, "./neo-c.h", 226, 1857)), "./neo-c.h", 226, 1858))->next=((void*)0);
                __dec_obj26=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_193, "./neo-c.h", 227, 1859)), "./neo-c.h", 227, 1860))->item;
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_193, "./neo-c.h", 227, 1859)), "./neo-c.h", 227, 1860))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj26,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 229, 1869)), "./neo-c.h", 229, 1870))->tail=litem_193;
                ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 230, 1871)), "./neo-c.h", 230, 1872))->head=litem_193;
            }
            else {
                if(_if_conditional165=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 232, 1873)), "./neo-c.h", 232, 1874))->len==1,                _if_conditional165) {
                    litem_194=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value248=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 233, "list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer3(right_value248,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_194, "./neo-c.h", 235, 1875)), "./neo-c.h", 235, 1876))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 235, 1877)), "./neo-c.h", 235, 1878))->head;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_194, "./neo-c.h", 236, 1879)), "./neo-c.h", 236, 1880))->next=((void*)0);
                    __dec_obj27=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_194, "./neo-c.h", 237, 1881)), "./neo-c.h", 237, 1882))->item;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_194, "./neo-c.h", 237, 1881)), "./neo-c.h", 237, 1882))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj27,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 239, 1891)), "./neo-c.h", 239, 1892))->tail=litem_194;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 240, 1893)), "./neo-c.h", 240, 1894))->head, "./neo-c.h", 240, 1895)), "./neo-c.h", 240, 1896))->next=litem_194;
                }
                else {
                    litem_195=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value249=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 243, "list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer3(right_value249,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_195, "./neo-c.h", 245, 1897)), "./neo-c.h", 245, 1898))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 245, 1899)), "./neo-c.h", 245, 1900))->tail;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_195, "./neo-c.h", 246, 1901)), "./neo-c.h", 246, 1902))->next=((void*)0);
                    __dec_obj28=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_195, "./neo-c.h", 247, 1903)), "./neo-c.h", 247, 1904))->item;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_195, "./neo-c.h", 247, 1903)), "./neo-c.h", 247, 1904))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj28,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 249, 1913)), "./neo-c.h", 249, 1914))->tail, "./neo-c.h", 249, 1915)), "./neo-c.h", 249, 1916))->next=litem_195;
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 250, 1917)), "./neo-c.h", 250, 1918))->tail=litem_195;
                }
            }
            ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 253, 1919)), "./neo-c.h", 253, 1920))->len++;
            __result121__ = __result_obj__ = self;
            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result121__;
            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
char* __dec_obj29;
struct sType* __dec_obj30;
struct tuple2$2charphsTypeph* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
            __dec_obj29=((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1744, 1924)), "./neo-c.h", 1744, 1925))->v1;
            ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1744, 1924)), "./neo-c.h", 1744, 1925))->v1=(char*)come_increment_ref_count(v1);
            __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj30=((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1745, 1926)), "./neo-c.h", 1745, 1927))->v2;
            ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1745, 1926)), "./neo-c.h", 1745, 1927))->v2=(struct sType*)come_increment_ref_count(v2);
            come_call_finalizer3(__dec_obj30,sType_finalize, 0, 0, 0, 0, (void*)0);
            __result122__ = __result_obj__ = self;
            come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(v2,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result122__;
            come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(v2,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional170;
struct sClass* __result123__;
void* right_value276;
struct sClass* result_196;
_Bool _if_conditional171;
_Bool _if_conditional172;
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
char* __exception_result_var_b311;
void* right_value277;
char* __dec_obj31;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b342;
void* right_value326;
struct list$1tuple2$2charphsTypephph* __dec_obj62;
_Bool _if_conditional279;
_Bool _if_conditional280;
_Bool _if_conditional281;
char* __exception_result_var_b343;
void* right_value327;
char* __dec_obj63;
_Bool _if_conditional282;
_Bool _if_conditional283;
char* __exception_result_var_b344;
void* right_value328;
char* __dec_obj64;
struct sClass* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
right_value276 = (void*)0;
memset(&result_196, 0, sizeof(struct sClass*));
right_value277 = (void*)0;
right_value326 = (void*)0;
right_value327 = (void*)0;
right_value328 = (void*)0;
            if(_if_conditional170=self==(void*)0,            _if_conditional170) {
                __result123__ = __result_obj__ = (void*)0;
                return __result123__;
            }
            result_196=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value276=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "sClass"))));
            come_call_finalizer3(right_value276,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional171=self!=((void*)0),            _if_conditional171) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_196, "sClass_clone", 4, 1966)), "sClass_clone", 4, 1967))->mStruct=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 4, 1968)), "sClass_clone", 4, 1969))->mStruct;
            }
            if(_if_conditional172=self!=((void*)0),            _if_conditional172) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_196, "sClass_clone", 5, 1970)), "sClass_clone", 5, 1971))->mFloat=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 5, 1972)), "sClass_clone", 5, 1973))->mFloat;
            }
            if(_if_conditional173=self!=((void*)0),            _if_conditional173) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_196, "sClass_clone", 6, 1974)), "sClass_clone", 6, 1975))->mUnion=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 6, 1976)), "sClass_clone", 6, 1977))->mUnion;
            }
            if(_if_conditional174=self!=((void*)0),            _if_conditional174) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_196, "sClass_clone", 7, 1978)), "sClass_clone", 7, 1979))->mGenerics=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 7, 1980)), "sClass_clone", 7, 1981))->mGenerics;
            }
            if(_if_conditional175=self!=((void*)0),            _if_conditional175) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_196, "sClass_clone", 8, 1982)), "sClass_clone", 8, 1983))->mMethodGenerics=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 8, 1984)), "sClass_clone", 8, 1985))->mMethodGenerics;
            }
            if(_if_conditional176=self!=((void*)0),            _if_conditional176) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_196, "sClass_clone", 9, 1986)), "sClass_clone", 9, 1987))->mEnum=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 9, 1988)), "sClass_clone", 9, 1989))->mEnum;
            }
            if(_if_conditional177=self!=((void*)0),            _if_conditional177) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_196, "sClass_clone", 10, 1990)), "sClass_clone", 10, 1991))->mProtocol=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 10, 1992)), "sClass_clone", 10, 1993))->mProtocol;
            }
            if(_if_conditional178=self!=((void*)0),            _if_conditional178) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_196, "sClass_clone", 11, 1994)), "sClass_clone", 11, 1995))->mNumber=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 11, 1996)), "sClass_clone", 11, 1997))->mNumber;
            }
            if(_if_conditional179=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 12, 1998)), "sClass_clone", 12, 1999))->mName!=((void*)0),            _if_conditional179) {
                __dec_obj31=((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_196, "sClass_clone", 12, 2000)), "sClass_clone", 12, 2001))->mName;
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_196, "sClass_clone", 12, 2000)), "sClass_clone", 12, 2001))->mName=(char*)come_increment_ref_count(((char*)(right_value277=(come_push_stackframe("sClass_clone", 12, 2004),__exception_result_var_b311=string_clone(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 12, 2002)), "sClass_clone", 12, 2003))->mName), come_pop_stackframe(), __exception_result_var_b311))));
                __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional180=self!=((void*)0),            _if_conditional180) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_196, "sClass_clone", 13, 2005)), "sClass_clone", 13, 2006))->mGenericsNum=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 13, 2007)), "sClass_clone", 13, 2008))->mGenericsNum;
            }
            if(_if_conditional181=self!=((void*)0),            _if_conditional181) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_196, "sClass_clone", 14, 2009)), "sClass_clone", 14, 2010))->mMethodGenericsNum=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 14, 2011)), "sClass_clone", 14, 2012))->mMethodGenericsNum;
            }
            if(_if_conditional182=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 15, 2013)), "sClass_clone", 15, 2014))->mFields!=((void*)0),            _if_conditional182) {
                __dec_obj62=((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_196, "sClass_clone", 15, 2015)), "sClass_clone", 15, 2016))->mFields;
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_196, "sClass_clone", 15, 2015)), "sClass_clone", 15, 2016))->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value326=(come_push_stackframe("sClass_clone", 15, 2645),__exception_result_var_b342=list$1tuple2$2charphsTypephphp_clone(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 15, 2017)), "sClass_clone", 15, 2018))->mFields), come_pop_stackframe(), __exception_result_var_b342))));
                come_call_finalizer3(__dec_obj62,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value326,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional279=self!=((void*)0),            _if_conditional279) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_196, "sClass_clone", 16, 2650)), "sClass_clone", 16, 2651))->mOutputed=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 16, 2652)), "sClass_clone", 16, 2653))->mOutputed;
            }
            if(_if_conditional280=self!=((void*)0),            _if_conditional280) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_196, "sClass_clone", 17, 2654)), "sClass_clone", 17, 2655))->mOutputed2=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 17, 2656)), "sClass_clone", 17, 2657))->mOutputed2;
            }
            if(_if_conditional281=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 18, 2658)), "sClass_clone", 18, 2659))->mDeclareSName!=((void*)0),            _if_conditional281) {
                __dec_obj63=((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_196, "sClass_clone", 18, 2660)), "sClass_clone", 18, 2661))->mDeclareSName;
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_196, "sClass_clone", 18, 2660)), "sClass_clone", 18, 2661))->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value327=(come_push_stackframe("sClass_clone", 18, 2664),__exception_result_var_b343=string_clone(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 18, 2662)), "sClass_clone", 18, 2663))->mDeclareSName), come_pop_stackframe(), __exception_result_var_b343))));
                __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value327 = come_decrement_ref_count2(right_value327, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional282=self!=((void*)0),            _if_conditional282) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_196, "sClass_clone", 19, 2665)), "sClass_clone", 19, 2666))->mNobodyStruct=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 19, 2667)), "sClass_clone", 19, 2668))->mNobodyStruct;
            }
            if(_if_conditional283=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 20, 2669)), "sClass_clone", 20, 2670))->mParentClassName!=((void*)0),            _if_conditional283) {
                __dec_obj64=((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_196, "sClass_clone", 20, 2671)), "sClass_clone", 20, 2672))->mParentClassName;
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_196, "sClass_clone", 20, 2671)), "sClass_clone", 20, 2672))->mParentClassName=(char*)come_increment_ref_count(((char*)(right_value328=(come_push_stackframe("sClass_clone", 20, 2675),__exception_result_var_b344=string_clone(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 20, 2673)), "sClass_clone", 20, 2674))->mParentClassName), come_pop_stackframe(), __exception_result_var_b344))));
                __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value328 = come_decrement_ref_count2(right_value328, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result151__ = __result_obj__ = result_196;
            come_call_finalizer3(result_196,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result151__;
            come_call_finalizer3(result_196,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional183;
struct list$1tuple2$2charphsTypephph* __result124__;
void* right_value278;
void* right_value279;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b312;
struct list$1tuple2$2charphsTypephph* result_197;
struct list_item$1tuple2$2charphsTypephph* it_198;
_Bool _while_condtional25;
struct tuple2$2charphsTypeph* __exception_result_var_b340;
void* right_value325;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b341;
struct list$1tuple2$2charphsTypephph* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
right_value278 = (void*)0;
right_value279 = (void*)0;
memset(&result_197, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_198, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value325 = (void*)0;
                    if(_if_conditional183=self==((void*)0),                    _if_conditional183) {
                        __result124__ = __result_obj__ = ((void*)0);
                        return __result124__;
                    }
                    result_197=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 2027),__exception_result_var_b312=((struct list$1tuple2$2charphsTypephph*)(right_value279=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)(right_value278=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 139, "list$1tuple2$2charphsTypephph"))), "./neo-c.h", 139, 2019)), "./neo-c.h", 139, 2020)))))), come_pop_stackframe(), __exception_result_var_b312));
                    come_call_finalizer3(right_value278,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value279,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_198=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 141, 2028)), "./neo-c.h", 141, 2029))->head;
                    while(_while_condtional25=it_198!=((void*)0),                    _while_condtional25) {
                        (come_push_stackframe("./neo-c.h", 143, 2642),__exception_result_var_b341=list$1tuple2$2charphsTypephph_add(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(result_197, "./neo-c.h", 143, 2030)), "./neo-c.h", 143, 2031)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value325=(come_push_stackframe("./neo-c.h", 143, 2641),__exception_result_var_b340=tuple2$2charphsTypephp_clone(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_198, "./neo-c.h", 143, 2100)), "./neo-c.h", 143, 2101))->item), come_pop_stackframe(), __exception_result_var_b340))))), come_pop_stackframe(), __exception_result_var_b341);
                        come_call_finalizer3(right_value325,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        it_198=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_198, "./neo-c.h", 145, 2643)), "./neo-c.h", 145, 2644))->next;
                    }
                    __result150__ = __result_obj__ = result_197;
                    come_call_finalizer3(result_197,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result150__;
                    come_call_finalizer3(result_197,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsTypephph* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 101, 2021)), "./neo-c.h", 101, 2022))->head=((void*)0);
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 102, 2023)), "./neo-c.h", 102, 2024))->tail=((void*)0);
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 103, 2025)), "./neo-c.h", 103, 2026))->len=0;
                        __result125__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result125__;
                        come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional184;
void* right_value280;
struct list_item$1tuple2$2charphsTypephph* litem_199;
struct tuple2$2charphsTypeph* __dec_obj32;
_Bool _if_conditional187;
void* right_value281;
struct list_item$1tuple2$2charphsTypephph* litem_200;
struct tuple2$2charphsTypeph* __dec_obj33;
void* right_value282;
struct list_item$1tuple2$2charphsTypephph* litem_201;
struct tuple2$2charphsTypeph* __dec_obj34;
struct list$1tuple2$2charphsTypephph* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value280 = (void*)0;
memset(&litem_199, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value281 = (void*)0;
memset(&litem_200, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value282 = (void*)0;
memset(&litem_201, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                            if(_if_conditional184=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 152, 2032)), "./neo-c.h", 152, 2033))->len==0,                            _if_conditional184) {
                                litem_199=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value280=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 153, "list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer3(right_value280,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_199, "./neo-c.h", 155, 2034)), "./neo-c.h", 155, 2035))->prev=((void*)0);
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_199, "./neo-c.h", 156, 2036)), "./neo-c.h", 156, 2037))->next=((void*)0);
                                __dec_obj32=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_199, "./neo-c.h", 157, 2038)), "./neo-c.h", 157, 2039))->item;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_199, "./neo-c.h", 157, 2038)), "./neo-c.h", 157, 2039))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj32,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 159, 2048)), "./neo-c.h", 159, 2049))->tail=litem_199;
                                ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 160, 2050)), "./neo-c.h", 160, 2051))->head=litem_199;
                            }
                            else {
                                if(_if_conditional187=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 162, 2052)), "./neo-c.h", 162, 2053))->len==1,                                _if_conditional187) {
                                    litem_200=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value281=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 163, "list_item$1tuple2$2charphsTypephph"))));
                                    come_call_finalizer3(right_value281,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_200, "./neo-c.h", 165, 2054)), "./neo-c.h", 165, 2055))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 165, 2056)), "./neo-c.h", 165, 2057))->head;
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_200, "./neo-c.h", 166, 2058)), "./neo-c.h", 166, 2059))->next=((void*)0);
                                    __dec_obj33=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_200, "./neo-c.h", 167, 2060)), "./neo-c.h", 167, 2061))->item;
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_200, "./neo-c.h", 167, 2060)), "./neo-c.h", 167, 2061))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj33,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 169, 2070)), "./neo-c.h", 169, 2071))->tail=litem_200;
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 170, 2072)), "./neo-c.h", 170, 2073))->head, "./neo-c.h", 170, 2074)), "./neo-c.h", 170, 2075))->next=litem_200;
                                }
                                else {
                                    litem_201=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value282=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 173, "list_item$1tuple2$2charphsTypephph"))));
                                    come_call_finalizer3(right_value282,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_201, "./neo-c.h", 175, 2076)), "./neo-c.h", 175, 2077))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 175, 2078)), "./neo-c.h", 175, 2079))->tail;
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_201, "./neo-c.h", 176, 2080)), "./neo-c.h", 176, 2081))->next=((void*)0);
                                    __dec_obj34=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_201, "./neo-c.h", 177, 2082)), "./neo-c.h", 177, 2083))->item;
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_201, "./neo-c.h", 177, 2082)), "./neo-c.h", 177, 2083))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj34,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 179, 2092)), "./neo-c.h", 179, 2093))->tail, "./neo-c.h", 179, 2094)), "./neo-c.h", 179, 2095))->next=litem_201;
                                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 180, 2096)), "./neo-c.h", 180, 2097))->tail=litem_201;
                                }
                            }
                            ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 183, 2098)), "./neo-c.h", 183, 2099))->len++;
                            __result126__ = __result_obj__ = self;
                            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                            return __result126__;
                            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional190;
_Bool _if_conditional191;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional190=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0, 2084)), "tuple2$2charphsTypephp_finalize", 0, 2085))->v1!=((void*)0),                                        _if_conditional190) {
                                            ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0, 2086)), "tuple2$2charphsTypephp_finalize", 0, 2087))->v1 = come_decrement_ref_count2(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0, 2086)), "tuple2$2charphsTypephp_finalize", 0, 2087))->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional191=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1, 2088)), "tuple2$2charphsTypephp_finalize", 1, 2089))->v2!=((void*)0),                                        _if_conditional191) {
                                            come_call_finalizer3(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1, 2090)), "tuple2$2charphsTypephp_finalize", 1, 2091))->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional192;
struct tuple2$2charphsTypeph* __result127__;
void* right_value283;
struct tuple2$2charphsTypeph* result_202;
_Bool _if_conditional195;
char* __exception_result_var_b313;
void* right_value284;
char* __dec_obj35;
_Bool _if_conditional196;
struct sType* __exception_result_var_b339;
void* right_value324;
struct sType* __dec_obj61;
struct tuple2$2charphsTypeph* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
right_value283 = (void*)0;
memset(&result_202, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value284 = (void*)0;
right_value324 = (void*)0;
                            if(_if_conditional192=self==(void*)0,                            _if_conditional192) {
                                __result127__ = __result_obj__ = (void*)0;
                                return __result127__;
                            }
                            result_202=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value283=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"))));
                            come_call_finalizer3(right_value283,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional195=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 4, 2110)), "tuple2$2charphsTypephp_clone", 4, 2111))->v1!=((void*)0),                            _if_conditional195) {
                                __dec_obj35=((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(result_202, "tuple2$2charphsTypephp_clone", 4, 2112)), "tuple2$2charphsTypephp_clone", 4, 2113))->v1;
                                ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(result_202, "tuple2$2charphsTypephp_clone", 4, 2112)), "tuple2$2charphsTypephp_clone", 4, 2113))->v1=(char*)come_increment_ref_count(((char*)(right_value284=(come_push_stackframe("tuple2$2charphsTypephp_clone", 4, 2116),__exception_result_var_b313=string_clone(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 4, 2114)), "tuple2$2charphsTypephp_clone", 4, 2115))->v1), come_pop_stackframe(), __exception_result_var_b313))));
                                __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(_if_conditional196=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 5, 2117)), "tuple2$2charphsTypephp_clone", 5, 2118))->v2!=((void*)0),                            _if_conditional196) {
                                __dec_obj61=((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(result_202, "tuple2$2charphsTypephp_clone", 5, 2119)), "tuple2$2charphsTypephp_clone", 5, 2120))->v2;
                                ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(result_202, "tuple2$2charphsTypephp_clone", 5, 2119)), "tuple2$2charphsTypephp_clone", 5, 2120))->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value324=(come_push_stackframe("tuple2$2charphsTypephp_clone", 5, 2640),__exception_result_var_b339=sType_clone(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 5, 2121)), "tuple2$2charphsTypephp_clone", 5, 2122))->v2), come_pop_stackframe(), __exception_result_var_b339))));
                                come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value324,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            }
                            __result149__ = __result_obj__ = result_202;
                            come_call_finalizer3(result_202,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
                            return __result149__;
                            come_call_finalizer3(result_202,tuple2$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional193;
_Bool _if_conditional194;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional193=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0, 2102)), "tuple2$2charphsTypeph_finalize", 0, 2103))->v1!=((void*)0),                                _if_conditional193) {
                                    ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0, 2104)), "tuple2$2charphsTypeph_finalize", 0, 2105))->v1 = come_decrement_ref_count2(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0, 2104)), "tuple2$2charphsTypeph_finalize", 0, 2105))->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional194=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1, 2106)), "tuple2$2charphsTypeph_finalize", 1, 2107))->v2!=((void*)0),                                _if_conditional194) {
                                    come_call_finalizer3(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1, 2108)), "tuple2$2charphsTypeph_finalize", 1, 2109))->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional197;
struct sType* __result128__;
void* right_value285;
struct sType* result_203;
_Bool _if_conditional198;
_Bool _if_conditional199;
struct list$1sTypeph* __exception_result_var_b317;
void* right_value292;
struct list$1sTypeph* __dec_obj39;
_Bool _if_conditional203;
struct tuple1$1sTypeph* __exception_result_var_b319;
void* right_value295;
struct tuple1$1sTypeph* __dec_obj41;
_Bool _if_conditional207;
struct tuple1$1sTypeph* __exception_result_var_b321;
void* right_value298;
struct tuple1$1sTypeph* __dec_obj43;
_Bool _if_conditional210;
char* __exception_result_var_b322;
void* right_value299;
char* __dec_obj44;
_Bool _if_conditional211;
struct list$1sTypeph* __exception_result_var_b323;
void* right_value300;
struct list$1sTypeph* __dec_obj45;
_Bool _if_conditional212;
struct list$1sNodeph* __exception_result_var_b327;
void* right_value308;
struct list$1sNodeph* __dec_obj49;
_Bool _if_conditional225;
_Bool _if_conditional226;
struct list$1sTypeph* __exception_result_var_b328;
void* right_value309;
struct list$1sTypeph* __dec_obj50;
_Bool _if_conditional227;
struct list$1charph* __exception_result_var_b332;
void* right_value316;
struct list$1charph* __dec_obj54;
_Bool _if_conditional231;
struct tuple1$1sTypeph* __exception_result_var_b334;
void* right_value319;
struct tuple1$1sTypeph* __dec_obj56;
_Bool _if_conditional234;
_Bool _if_conditional235;
struct sNode* __exception_result_var_b335;
void* right_value320;
struct sNode* __dec_obj57;
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
_Bool _if_conditional258;
_Bool _if_conditional259;
_Bool _if_conditional260;
_Bool _if_conditional261;
_Bool _if_conditional262;
struct sNode* __exception_result_var_b336;
void* right_value321;
struct sNode* __dec_obj58;
_Bool _if_conditional263;
_Bool _if_conditional264;
_Bool _if_conditional265;
char* __exception_result_var_b337;
void* right_value322;
char* __dec_obj59;
_Bool _if_conditional266;
_Bool _if_conditional267;
_Bool _if_conditional268;
_Bool _if_conditional269;
_Bool _if_conditional270;
_Bool _if_conditional271;
_Bool _if_conditional272;
_Bool _if_conditional273;
_Bool _if_conditional274;
_Bool _if_conditional275;
char* __exception_result_var_b338;
void* right_value323;
char* __dec_obj60;
_Bool _if_conditional276;
_Bool _if_conditional277;
_Bool _if_conditional278;
struct sType* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
right_value285 = (void*)0;
memset(&result_203, 0, sizeof(struct sType*));
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
                                    if(_if_conditional197=self==(void*)0,                                    _if_conditional197) {
                                        __result128__ = __result_obj__ = (void*)0;
                                        return __result128__;
                                    }
                                    result_203=(struct sType*)come_increment_ref_count(((struct sType*)(right_value285=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
                                    come_call_finalizer3(right_value285,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional198=self!=((void*)0),                                    _if_conditional198) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 4, 2123)), "sType_clone", 4, 2124))->mClass=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 4, 2125)), "sType_clone", 4, 2126))->mClass;
                                    }
                                    if(_if_conditional199=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 5, 2127)), "sType_clone", 5, 2128))->mMultipleTypes!=((void*)0),                                    _if_conditional199) {
                                        __dec_obj39=((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 5, 2129)), "sType_clone", 5, 2130))->mMultipleTypes;
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 5, 2129)), "sType_clone", 5, 2130))->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value292=(come_push_stackframe("sType_clone", 5, 2196),__exception_result_var_b317=list$1sTypeph_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 5, 2131)), "sType_clone", 5, 2132))->mMultipleTypes), come_pop_stackframe(), __exception_result_var_b317))));
                                        come_call_finalizer3(__dec_obj39,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value292,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional203=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 6, 2201)), "sType_clone", 6, 2202))->mNoSolvedGenericsType!=((void*)0),                                    _if_conditional203) {
                                        __dec_obj41=((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 6, 2203)), "sType_clone", 6, 2204))->mNoSolvedGenericsType;
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 6, 2203)), "sType_clone", 6, 2204))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value295=(come_push_stackframe("sType_clone", 6, 2218),__exception_result_var_b319=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 6, 2205)), "sType_clone", 6, 2206))->mNoSolvedGenericsType), come_pop_stackframe(), __exception_result_var_b319))));
                                        come_call_finalizer3(__dec_obj41,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value295,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional207=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 7, 2219)), "sType_clone", 7, 2220))->mOriginalLoadVarType!=((void*)0),                                    _if_conditional207) {
                                        __dec_obj43=((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 7, 2221)), "sType_clone", 7, 2222))->mOriginalLoadVarType;
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 7, 2221)), "sType_clone", 7, 2222))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value298=(come_push_stackframe("sType_clone", 7, 2232),__exception_result_var_b321=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 7, 2223)), "sType_clone", 7, 2224))->mOriginalLoadVarType), come_pop_stackframe(), __exception_result_var_b321))));
                                        come_call_finalizer3(__dec_obj43,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value298,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional210=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 8, 2233)), "sType_clone", 8, 2234))->mGenericsName!=((void*)0),                                    _if_conditional210) {
                                        __dec_obj44=((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 8, 2235)), "sType_clone", 8, 2236))->mGenericsName;
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 8, 2235)), "sType_clone", 8, 2236))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value299=(come_push_stackframe("sType_clone", 8, 2239),__exception_result_var_b322=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 8, 2237)), "sType_clone", 8, 2238))->mGenericsName), come_pop_stackframe(), __exception_result_var_b322))));
                                        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value299 = come_decrement_ref_count2(right_value299, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional211=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 9, 2240)), "sType_clone", 9, 2241))->mGenericsTypes!=((void*)0),                                    _if_conditional211) {
                                        __dec_obj45=((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 9, 2242)), "sType_clone", 9, 2243))->mGenericsTypes;
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 9, 2242)), "sType_clone", 9, 2243))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value300=(come_push_stackframe("sType_clone", 9, 2246),__exception_result_var_b323=list$1sTypeph_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 9, 2244)), "sType_clone", 9, 2245))->mGenericsTypes), come_pop_stackframe(), __exception_result_var_b323))));
                                        come_call_finalizer3(__dec_obj45,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value300,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional212=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 10, 2247)), "sType_clone", 10, 2248))->mArrayNum!=((void*)0),                                    _if_conditional212) {
                                        __dec_obj49=((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 10, 2249)), "sType_clone", 10, 2250))->mArrayNum;
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 10, 2249)), "sType_clone", 10, 2250))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value308=(come_push_stackframe("sType_clone", 10, 2350),__exception_result_var_b327=list$1sNodeph_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 10, 2251)), "sType_clone", 10, 2252))->mArrayNum), come_pop_stackframe(), __exception_result_var_b327))));
                                        come_call_finalizer3(__dec_obj49,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value308,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional225=self!=((void*)0),                                    _if_conditional225) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 11, 2355)), "sType_clone", 11, 2356))->mOmitArrayNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 11, 2357)), "sType_clone", 11, 2358))->mOmitArrayNum;
                                    }
                                    if(_if_conditional226=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 12, 2359)), "sType_clone", 12, 2360))->mParamTypes!=((void*)0),                                    _if_conditional226) {
                                        __dec_obj50=((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 12, 2361)), "sType_clone", 12, 2362))->mParamTypes;
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 12, 2361)), "sType_clone", 12, 2362))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value309=(come_push_stackframe("sType_clone", 12, 2365),__exception_result_var_b328=list$1sTypeph_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 12, 2363)), "sType_clone", 12, 2364))->mParamTypes), come_pop_stackframe(), __exception_result_var_b328))));
                                        come_call_finalizer3(__dec_obj50,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value309,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional227=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 13, 2366)), "sType_clone", 13, 2367))->mParamNames!=((void*)0),                                    _if_conditional227) {
                                        __dec_obj54=((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 13, 2368)), "sType_clone", 13, 2369))->mParamNames;
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 13, 2368)), "sType_clone", 13, 2369))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value316=(come_push_stackframe("sType_clone", 13, 2429),__exception_result_var_b332=list$1charph_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 13, 2370)), "sType_clone", 13, 2371))->mParamNames), come_pop_stackframe(), __exception_result_var_b332))));
                                        come_call_finalizer3(__dec_obj54,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value316,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional231=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 14, 2434)), "sType_clone", 14, 2435))->mResultType!=((void*)0),                                    _if_conditional231) {
                                        __dec_obj56=((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 14, 2436)), "sType_clone", 14, 2437))->mResultType;
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 14, 2436)), "sType_clone", 14, 2437))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value319=(come_push_stackframe("sType_clone", 14, 2447),__exception_result_var_b334=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 14, 2438)), "sType_clone", 14, 2439))->mResultType), come_pop_stackframe(), __exception_result_var_b334))));
                                        come_call_finalizer3(__dec_obj56,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value319,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional234=self!=((void*)0),                                    _if_conditional234) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 15, 2448)), "sType_clone", 15, 2449))->mVarArgs=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 15, 2450)), "sType_clone", 15, 2451))->mVarArgs;
                                    }
                                    if(_if_conditional235=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 16, 2452)), "sType_clone", 16, 2453))->mAlignas!=((void*)0),                                    _if_conditional235) {
                                        __dec_obj57=((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 16, 2454)), "sType_clone", 16, 2455))->mAlignas;
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 16, 2454)), "sType_clone", 16, 2455))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value320=(come_push_stackframe("sType_clone", 16, 2458),__exception_result_var_b335=sNode_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 16, 2456)), "sType_clone", 16, 2457))->mAlignas), come_pop_stackframe(), __exception_result_var_b335))));
                                        if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count2(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value320) { right_value320 = come_decrement_ref_count2(right_value320, ((struct sNode*)right_value320)->finalize, ((struct sNode*)right_value320)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional236=self!=((void*)0),                                    _if_conditional236) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 17, 2459)), "sType_clone", 17, 2460))->mUnsigned=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 17, 2461)), "sType_clone", 17, 2462))->mUnsigned;
                                    }
                                    if(_if_conditional237=self!=((void*)0),                                    _if_conditional237) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 18, 2463)), "sType_clone", 18, 2464))->mShort=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 18, 2465)), "sType_clone", 18, 2466))->mShort;
                                    }
                                    if(_if_conditional238=self!=((void*)0),                                    _if_conditional238) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 19, 2467)), "sType_clone", 19, 2468))->mLong=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 19, 2469)), "sType_clone", 19, 2470))->mLong;
                                    }
                                    if(_if_conditional239=self!=((void*)0),                                    _if_conditional239) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 20, 2471)), "sType_clone", 20, 2472))->mLongLong=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 20, 2473)), "sType_clone", 20, 2474))->mLongLong;
                                    }
                                    if(_if_conditional240=self!=((void*)0),                                    _if_conditional240) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 21, 2475)), "sType_clone", 21, 2476))->mConstant=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 21, 2477)), "sType_clone", 21, 2478))->mConstant;
                                    }
                                    if(_if_conditional241=self!=((void*)0),                                    _if_conditional241) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 22, 2479)), "sType_clone", 22, 2480))->mRegister=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 22, 2481)), "sType_clone", 22, 2482))->mRegister;
                                    }
                                    if(_if_conditional242=self!=((void*)0),                                    _if_conditional242) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 23, 2483)), "sType_clone", 23, 2484))->mVolatile=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 23, 2485)), "sType_clone", 23, 2486))->mVolatile;
                                    }
                                    if(_if_conditional243=self!=((void*)0),                                    _if_conditional243) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 24, 2487)), "sType_clone", 24, 2488))->mStatic=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 24, 2489)), "sType_clone", 24, 2490))->mStatic;
                                    }
                                    if(_if_conditional244=self!=((void*)0),                                    _if_conditional244) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 25, 2491)), "sType_clone", 25, 2492))->mUniq=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 25, 2493)), "sType_clone", 25, 2494))->mUniq;
                                    }
                                    if(_if_conditional245=self!=((void*)0),                                    _if_conditional245) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 26, 2495)), "sType_clone", 26, 2496))->mRecord=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 26, 2497)), "sType_clone", 26, 2498))->mRecord;
                                    }
                                    if(_if_conditional246=self!=((void*)0),                                    _if_conditional246) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 27, 2499)), "sType_clone", 27, 2500))->mExtern=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 27, 2501)), "sType_clone", 27, 2502))->mExtern;
                                    }
                                    if(_if_conditional247=self!=((void*)0),                                    _if_conditional247) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 28, 2503)), "sType_clone", 28, 2504))->mRestrict=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 28, 2505)), "sType_clone", 28, 2506))->mRestrict;
                                    }
                                    if(_if_conditional248=self!=((void*)0),                                    _if_conditional248) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 29, 2507)), "sType_clone", 29, 2508))->mImmutable=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 29, 2509)), "sType_clone", 29, 2510))->mImmutable;
                                    }
                                    if(_if_conditional249=self!=((void*)0),                                    _if_conditional249) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 30, 2511)), "sType_clone", 30, 2512))->mHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 30, 2513)), "sType_clone", 30, 2514))->mHeap;
                                    }
                                    if(_if_conditional250=self!=((void*)0),                                    _if_conditional250) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 31, 2515)), "sType_clone", 31, 2516))->mDummyHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 31, 2517)), "sType_clone", 31, 2518))->mDummyHeap;
                                    }
                                    if(_if_conditional251=self!=((void*)0),                                    _if_conditional251) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 32, 2519)), "sType_clone", 32, 2520))->mDelegate=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 32, 2521)), "sType_clone", 32, 2522))->mDelegate;
                                    }
                                    if(_if_conditional252=self!=((void*)0),                                    _if_conditional252) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 33, 2523)), "sType_clone", 33, 2524))->mShare=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 33, 2525)), "sType_clone", 33, 2526))->mShare;
                                    }
                                    if(_if_conditional253=self!=((void*)0),                                    _if_conditional253) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 34, 2527)), "sType_clone", 34, 2528))->mClone=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 34, 2529)), "sType_clone", 34, 2530))->mClone;
                                    }
                                    if(_if_conditional254=self!=((void*)0),                                    _if_conditional254) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 35, 2531)), "sType_clone", 35, 2532))->mNoHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 35, 2533)), "sType_clone", 35, 2534))->mNoHeap;
                                    }
                                    if(_if_conditional255=self!=((void*)0),                                    _if_conditional255) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 36, 2535)), "sType_clone", 36, 2536))->mNoCallingDestructor=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 36, 2537)), "sType_clone", 36, 2538))->mNoCallingDestructor;
                                    }
                                    if(_if_conditional256=self!=((void*)0),                                    _if_conditional256) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 37, 2539)), "sType_clone", 37, 2540))->mRefference=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 37, 2541)), "sType_clone", 37, 2542))->mRefference;
                                    }
                                    if(_if_conditional257=self!=((void*)0),                                    _if_conditional257) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 38, 2543)), "sType_clone", 38, 2544))->mException=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 38, 2545)), "sType_clone", 38, 2546))->mException;
                                    }
                                    if(_if_conditional258=self!=((void*)0),                                    _if_conditional258) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 39, 2547)), "sType_clone", 39, 2548))->mPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 39, 2549)), "sType_clone", 39, 2550))->mPointerNum;
                                    }
                                    if(_if_conditional259=self!=((void*)0),                                    _if_conditional259) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 40, 2551)), "sType_clone", 40, 2552))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 40, 2553)), "sType_clone", 40, 2554))->mOriginalTypeNamePointerNum;
                                    }
                                    if(_if_conditional260=self!=((void*)0),                                    _if_conditional260) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 41, 2555)), "sType_clone", 41, 2556))->mNoArrayPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 41, 2557)), "sType_clone", 41, 2558))->mNoArrayPointerNum;
                                    }
                                    if(_if_conditional261=self!=((void*)0),                                    _if_conditional261) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 42, 2559)), "sType_clone", 42, 2560))->mTypedefOriginalPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 42, 2561)), "sType_clone", 42, 2562))->mTypedefOriginalPointerNum;
                                    }
                                    if(_if_conditional262=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 43, 2563)), "sType_clone", 43, 2564))->mSizeNum!=((void*)0),                                    _if_conditional262) {
                                        __dec_obj58=((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 43, 2565)), "sType_clone", 43, 2566))->mSizeNum;
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 43, 2565)), "sType_clone", 43, 2566))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value321=(come_push_stackframe("sType_clone", 43, 2569),__exception_result_var_b336=sNode_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 43, 2567)), "sType_clone", 43, 2568))->mSizeNum), come_pop_stackframe(), __exception_result_var_b336))));
                                        if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count2(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value321) { right_value321 = come_decrement_ref_count2(right_value321, ((struct sNode*)right_value321)->finalize, ((struct sNode*)right_value321)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional263=self!=((void*)0),                                    _if_conditional263) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 44, 2570)), "sType_clone", 44, 2571))->mDynamicArrayNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 44, 2572)), "sType_clone", 44, 2573))->mDynamicArrayNum;
                                    }
                                    if(_if_conditional264=self!=((void*)0),                                    _if_conditional264) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 45, 2574)), "sType_clone", 45, 2575))->mTypeOfExpression=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 45, 2576)), "sType_clone", 45, 2577))->mTypeOfExpression;
                                    }
                                    if(_if_conditional265=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 46, 2578)), "sType_clone", 46, 2579))->mOriginalTypeName!=((void*)0),                                    _if_conditional265) {
                                        __dec_obj59=((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 46, 2580)), "sType_clone", 46, 2581))->mOriginalTypeName;
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 46, 2580)), "sType_clone", 46, 2581))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value322=(come_push_stackframe("sType_clone", 46, 2584),__exception_result_var_b337=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 46, 2582)), "sType_clone", 46, 2583))->mOriginalTypeName), come_pop_stackframe(), __exception_result_var_b337))));
                                        __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value322 = come_decrement_ref_count2(right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional266=self!=((void*)0),                                    _if_conditional266) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 47, 2585)), "sType_clone", 47, 2586))->mOriginalPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 47, 2587)), "sType_clone", 47, 2588))->mOriginalPointerNum;
                                    }
                                    if(_if_conditional267=self!=((void*)0),                                    _if_conditional267) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 48, 2589)), "sType_clone", 48, 2590))->mFunctionParam=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 48, 2591)), "sType_clone", 48, 2592))->mFunctionParam;
                                    }
                                    if(_if_conditional268=self!=((void*)0),                                    _if_conditional268) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 49, 2593)), "sType_clone", 49, 2594))->mAllocaValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 49, 2595)), "sType_clone", 49, 2596))->mAllocaValue;
                                    }
                                    if(_if_conditional269=self!=((void*)0),                                    _if_conditional269) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 50, 2597)), "sType_clone", 50, 2598))->mGenericsStruct=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 50, 2599)), "sType_clone", 50, 2600))->mGenericsStruct;
                                    }
                                    if(_if_conditional270=self!=((void*)0),                                    _if_conditional270) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 51, 2601)), "sType_clone", 51, 2602))->mSolvedGenericsName=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 51, 2603)), "sType_clone", 51, 2604))->mSolvedGenericsName;
                                    }
                                    if(_if_conditional271=self!=((void*)0),                                    _if_conditional271) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 52, 2605)), "sType_clone", 52, 2606))->mComeMemCore=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 52, 2607)), "sType_clone", 52, 2608))->mComeMemCore;
                                    }
                                    if(_if_conditional272=self!=((void*)0),                                    _if_conditional272) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 53, 2609)), "sType_clone", 53, 2610))->mInline=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 53, 2611)), "sType_clone", 53, 2612))->mInline;
                                    }
                                    if(_if_conditional273=self!=((void*)0),                                    _if_conditional273) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 54, 2613)), "sType_clone", 54, 2614))->mNullValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 54, 2615)), "sType_clone", 54, 2616))->mNullValue;
                                    }
                                    if(_if_conditional274=self!=((void*)0),                                    _if_conditional274) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 55, 2617)), "sType_clone", 55, 2618))->mGuardValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 55, 2619)), "sType_clone", 55, 2620))->mGuardValue;
                                    }
                                    if(_if_conditional275=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 56, 2621)), "sType_clone", 56, 2622))->mAsmName!=((void*)0),                                    _if_conditional275) {
                                        __dec_obj60=((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 56, 2623)), "sType_clone", 56, 2624))->mAsmName;
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 56, 2623)), "sType_clone", 56, 2624))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value323=(come_push_stackframe("sType_clone", 56, 2627),__exception_result_var_b338=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 56, 2625)), "sType_clone", 56, 2626))->mAsmName), come_pop_stackframe(), __exception_result_var_b338))));
                                        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value323 = come_decrement_ref_count2(right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional276=self!=((void*)0),                                    _if_conditional276) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 57, 2628)), "sType_clone", 57, 2629))->mArrayPointerType=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 57, 2630)), "sType_clone", 57, 2631))->mArrayPointerType;
                                    }
                                    if(_if_conditional277=self!=((void*)0),                                    _if_conditional277) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 58, 2632)), "sType_clone", 58, 2633))->mLambdaArray=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 58, 2634)), "sType_clone", 58, 2635))->mLambdaArray;
                                    }
                                    if(_if_conditional278=self!=((void*)0),                                    _if_conditional278) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_203, "sType_clone", 59, 2636)), "sType_clone", 59, 2637))->mNoNumberArray=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 59, 2638)), "sType_clone", 59, 2639))->mNoNumberArray;
                                    }
                                    __result148__ = __result_obj__ = result_203;
                                    come_call_finalizer3(result_203,sType_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result148__;
                                    come_call_finalizer3(result_203,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional200;
struct list$1sTypeph* __result129__;
void* right_value286;
void* right_value287;
struct list$1sTypeph* __exception_result_var_b314;
struct list$1sTypeph* result_204;
struct list_item$1sTypeph* it_205;
_Bool _while_condtional26;
struct sType* __exception_result_var_b315;
void* right_value291;
struct list$1sTypeph* __exception_result_var_b316;
struct list$1sTypeph* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
right_value286 = (void*)0;
right_value287 = (void*)0;
memset(&result_204, 0, sizeof(struct list$1sTypeph*));
memset(&it_205, 0, sizeof(struct list_item$1sTypeph*));
right_value291 = (void*)0;
                                            if(_if_conditional200=self==((void*)0),                                            _if_conditional200) {
                                                __result129__ = __result_obj__ = ((void*)0);
                                                return __result129__;
                                            }
                                            result_204=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 2141),__exception_result_var_b314=((struct list$1sTypeph*)(right_value287=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value286=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 139, "list$1sTypeph"))), "./neo-c.h", 139, 2133)), "./neo-c.h", 139, 2134)))))), come_pop_stackframe(), __exception_result_var_b314));
                                            come_call_finalizer3(right_value286,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value287,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            it_205=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 141, 2142)), "./neo-c.h", 141, 2143))->head;
                                            while(_while_condtional26=it_205!=((void*)0),                                            _while_condtional26) {
                                                (come_push_stackframe("./neo-c.h", 143, 2193),__exception_result_var_b316=list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(result_204, "./neo-c.h", 143, 2144)), "./neo-c.h", 143, 2145)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value291=(come_push_stackframe("./neo-c.h", 143, 2192),__exception_result_var_b315=sType_clone(((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_205, "./neo-c.h", 143, 2190)), "./neo-c.h", 143, 2191))->item), come_pop_stackframe(), __exception_result_var_b315))))), come_pop_stackframe(), __exception_result_var_b316);
                                                come_call_finalizer3(right_value291,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                it_205=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_205, "./neo-c.h", 145, 2194)), "./neo-c.h", 145, 2195))->next;
                                            }
                                            __result132__ = __result_obj__ = result_204;
                                            come_call_finalizer3(result_204,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result132__;
                                            come_call_finalizer3(result_204,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
                                                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 101, 2135)), "./neo-c.h", 101, 2136))->head=((void*)0);
                                                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 102, 2137)), "./neo-c.h", 102, 2138))->tail=((void*)0);
                                                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 103, 2139)), "./neo-c.h", 103, 2140))->len=0;
                                                __result130__ = __result_obj__ = self;
                                                come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result130__;
                                                come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional201;
void* right_value288;
struct list_item$1sTypeph* litem_206;
struct sType* __dec_obj36;
_Bool _if_conditional202;
void* right_value289;
struct list_item$1sTypeph* litem_207;
struct sType* __dec_obj37;
void* right_value290;
struct list_item$1sTypeph* litem_208;
struct sType* __dec_obj38;
struct list$1sTypeph* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
right_value288 = (void*)0;
memset(&litem_206, 0, sizeof(struct list_item$1sTypeph*));
right_value289 = (void*)0;
memset(&litem_207, 0, sizeof(struct list_item$1sTypeph*));
right_value290 = (void*)0;
memset(&litem_208, 0, sizeof(struct list_item$1sTypeph*));
                                                    if(_if_conditional201=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 152, 2146)), "./neo-c.h", 152, 2147))->len==0,                                                    _if_conditional201) {
                                                        litem_206=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value288=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 153, "list_item$1sTypeph"))));
                                                        come_call_finalizer3(right_value288,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_206, "./neo-c.h", 155, 2148)), "./neo-c.h", 155, 2149))->prev=((void*)0);
                                                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_206, "./neo-c.h", 156, 2150)), "./neo-c.h", 156, 2151))->next=((void*)0);
                                                        __dec_obj36=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_206, "./neo-c.h", 157, 2152)), "./neo-c.h", 157, 2153))->item;
                                                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_206, "./neo-c.h", 157, 2152)), "./neo-c.h", 157, 2153))->item=(struct sType*)come_increment_ref_count(item);
                                                        come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 159, 2154)), "./neo-c.h", 159, 2155))->tail=litem_206;
                                                        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 160, 2156)), "./neo-c.h", 160, 2157))->head=litem_206;
                                                    }
                                                    else {
                                                        if(_if_conditional202=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 162, 2158)), "./neo-c.h", 162, 2159))->len==1,                                                        _if_conditional202) {
                                                            litem_207=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value289=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 163, "list_item$1sTypeph"))));
                                                            come_call_finalizer3(right_value289,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_207, "./neo-c.h", 165, 2160)), "./neo-c.h", 165, 2161))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 165, 2162)), "./neo-c.h", 165, 2163))->head;
                                                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_207, "./neo-c.h", 166, 2164)), "./neo-c.h", 166, 2165))->next=((void*)0);
                                                            __dec_obj37=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_207, "./neo-c.h", 167, 2166)), "./neo-c.h", 167, 2167))->item;
                                                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_207, "./neo-c.h", 167, 2166)), "./neo-c.h", 167, 2167))->item=(struct sType*)come_increment_ref_count(item);
                                                            come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 169, 2168)), "./neo-c.h", 169, 2169))->tail=litem_207;
                                                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 170, 2170)), "./neo-c.h", 170, 2171))->head, "./neo-c.h", 170, 2172)), "./neo-c.h", 170, 2173))->next=litem_207;
                                                        }
                                                        else {
                                                            litem_208=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value290=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 173, "list_item$1sTypeph"))));
                                                            come_call_finalizer3(right_value290,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_208, "./neo-c.h", 175, 2174)), "./neo-c.h", 175, 2175))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 175, 2176)), "./neo-c.h", 175, 2177))->tail;
                                                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_208, "./neo-c.h", 176, 2178)), "./neo-c.h", 176, 2179))->next=((void*)0);
                                                            __dec_obj38=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_208, "./neo-c.h", 177, 2180)), "./neo-c.h", 177, 2181))->item;
                                                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_208, "./neo-c.h", 177, 2180)), "./neo-c.h", 177, 2181))->item=(struct sType*)come_increment_ref_count(item);
                                                            come_call_finalizer3(__dec_obj38,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 179, 2182)), "./neo-c.h", 179, 2183))->tail, "./neo-c.h", 179, 2184)), "./neo-c.h", 179, 2185))->next=litem_208;
                                                            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 180, 2186)), "./neo-c.h", 180, 2187))->tail=litem_208;
                                                        }
                                                    }
                                                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 183, 2188)), "./neo-c.h", 183, 2189))->len++;
                                                    __result131__ = __result_obj__ = self;
                                                    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                                                    return __result131__;
                                                    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_209;
_Bool _while_condtional27;
struct list_item$1sTypeph* prev_it_210;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_209, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_210, 0, sizeof(struct list_item$1sTypeph*));
                                            it_209=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 120, 2197)), "./neo-c.h", 120, 2198))->head;
                                            while(_while_condtional27=it_209!=((void*)0),                                            _while_condtional27) {
                                                prev_it_210=it_209;
                                                it_209=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_209, "./neo-c.h", 123, 2199)), "./neo-c.h", 123, 2200))->next;
                                                come_call_finalizer3(prev_it_210,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional205;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional205=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0, 2207)), "tuple1$1sTypeph_finalize", 0, 2208))->v1!=((void*)0),                                                _if_conditional205) {
                                                    come_call_finalizer3(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0, 2209)), "tuple1$1sTypeph_finalize", 0, 2210))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional213;
struct list$1sNodeph* __result137__;
void* right_value301;
void* right_value302;
struct list$1sNodeph* __exception_result_var_b324;
struct list$1sNodeph* result_213;
struct list_item$1sNodeph* it_214;
_Bool _while_condtional28;
struct sNode* __exception_result_var_b325;
void* right_value307;
struct list$1sNodeph* __exception_result_var_b326;
struct list$1sNodeph* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
right_value301 = (void*)0;
right_value302 = (void*)0;
memset(&result_213, 0, sizeof(struct list$1sNodeph*));
memset(&it_214, 0, sizeof(struct list_item$1sNodeph*));
right_value307 = (void*)0;
                                            if(_if_conditional213=self==((void*)0),                                            _if_conditional213) {
                                                __result137__ = __result_obj__ = ((void*)0);
                                                return __result137__;
                                            }
                                            result_213=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 2261),__exception_result_var_b324=((struct list$1sNodeph*)(right_value302=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value301=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 139, "list$1sNodeph"))), "./neo-c.h", 139, 2253)), "./neo-c.h", 139, 2254)))))), come_pop_stackframe(), __exception_result_var_b324));
                                            come_call_finalizer3(right_value301,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value302,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            it_214=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 141, 2262)), "./neo-c.h", 141, 2263))->head;
                                            while(_while_condtional28=it_214!=((void*)0),                                            _while_condtional28) {
                                                (come_push_stackframe("./neo-c.h", 143, 2347),__exception_result_var_b326=list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(result_213, "./neo-c.h", 143, 2264)), "./neo-c.h", 143, 2265)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value307=(come_push_stackframe("./neo-c.h", 143, 2346),__exception_result_var_b325=sNode_clone(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_214, "./neo-c.h", 143, 2310)), "./neo-c.h", 143, 2311))->item), come_pop_stackframe(), __exception_result_var_b325))))), come_pop_stackframe(), __exception_result_var_b326);
                                                if(right_value307) { right_value307 = come_decrement_ref_count2(right_value307, ((struct sNode*)right_value307)->finalize, ((struct sNode*)right_value307)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                it_214=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_214, "./neo-c.h", 145, 2348)), "./neo-c.h", 145, 2349))->next;
                                            }
                                            __result142__ = __result_obj__ = result_213;
                                            come_call_finalizer3(result_213,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result142__;
                                            come_call_finalizer3(result_213,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
                                                ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 101, 2255)), "./neo-c.h", 101, 2256))->head=((void*)0);
                                                ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 102, 2257)), "./neo-c.h", 102, 2258))->tail=((void*)0);
                                                ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 103, 2259)), "./neo-c.h", 103, 2260))->len=0;
                                                __result138__ = __result_obj__ = self;
                                                come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result138__;
                                                come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional214;
void* right_value303;
struct list_item$1sNodeph* litem_215;
struct sNode* __dec_obj46;
_Bool _if_conditional215;
void* right_value304;
struct list_item$1sNodeph* litem_216;
struct sNode* __dec_obj47;
void* right_value305;
struct list_item$1sNodeph* litem_217;
struct sNode* __dec_obj48;
struct list$1sNodeph* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
right_value303 = (void*)0;
memset(&litem_215, 0, sizeof(struct list_item$1sNodeph*));
right_value304 = (void*)0;
memset(&litem_216, 0, sizeof(struct list_item$1sNodeph*));
right_value305 = (void*)0;
memset(&litem_217, 0, sizeof(struct list_item$1sNodeph*));
                                                    if(_if_conditional214=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 152, 2266)), "./neo-c.h", 152, 2267))->len==0,                                                    _if_conditional214) {
                                                        litem_215=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value303=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 153, "list_item$1sNodeph"))));
                                                        come_call_finalizer3(right_value303,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_215, "./neo-c.h", 155, 2268)), "./neo-c.h", 155, 2269))->prev=((void*)0);
                                                        ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_215, "./neo-c.h", 156, 2270)), "./neo-c.h", 156, 2271))->next=((void*)0);
                                                        __dec_obj46=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_215, "./neo-c.h", 157, 2272)), "./neo-c.h", 157, 2273))->item;
                                                        ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_215, "./neo-c.h", 157, 2272)), "./neo-c.h", 157, 2273))->item=(struct sNode*)come_increment_ref_count(item);
                                                        if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); }
                                                        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 159, 2274)), "./neo-c.h", 159, 2275))->tail=litem_215;
                                                        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 160, 2276)), "./neo-c.h", 160, 2277))->head=litem_215;
                                                    }
                                                    else {
                                                        if(_if_conditional215=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 162, 2278)), "./neo-c.h", 162, 2279))->len==1,                                                        _if_conditional215) {
                                                            litem_216=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value304=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 163, "list_item$1sNodeph"))));
                                                            come_call_finalizer3(right_value304,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_216, "./neo-c.h", 165, 2280)), "./neo-c.h", 165, 2281))->prev=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 165, 2282)), "./neo-c.h", 165, 2283))->head;
                                                            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_216, "./neo-c.h", 166, 2284)), "./neo-c.h", 166, 2285))->next=((void*)0);
                                                            __dec_obj47=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_216, "./neo-c.h", 167, 2286)), "./neo-c.h", 167, 2287))->item;
                                                            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_216, "./neo-c.h", 167, 2286)), "./neo-c.h", 167, 2287))->item=(struct sNode*)come_increment_ref_count(item);
                                                            if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count2(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0, (void*)0); }
                                                            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 169, 2288)), "./neo-c.h", 169, 2289))->tail=litem_216;
                                                            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 170, 2290)), "./neo-c.h", 170, 2291))->head, "./neo-c.h", 170, 2292)), "./neo-c.h", 170, 2293))->next=litem_216;
                                                        }
                                                        else {
                                                            litem_217=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value305=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 173, "list_item$1sNodeph"))));
                                                            come_call_finalizer3(right_value305,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_217, "./neo-c.h", 175, 2294)), "./neo-c.h", 175, 2295))->prev=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 175, 2296)), "./neo-c.h", 175, 2297))->tail;
                                                            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_217, "./neo-c.h", 176, 2298)), "./neo-c.h", 176, 2299))->next=((void*)0);
                                                            __dec_obj48=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_217, "./neo-c.h", 177, 2300)), "./neo-c.h", 177, 2301))->item;
                                                            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_217, "./neo-c.h", 177, 2300)), "./neo-c.h", 177, 2301))->item=(struct sNode*)come_increment_ref_count(item);
                                                            if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); }
                                                            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 179, 2302)), "./neo-c.h", 179, 2303))->tail, "./neo-c.h", 179, 2304)), "./neo-c.h", 179, 2305))->next=litem_217;
                                                            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 180, 2306)), "./neo-c.h", 180, 2307))->tail=litem_217;
                                                        }
                                                    }
                                                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 183, 2308)), "./neo-c.h", 183, 2309))->len++;
                                                    __result139__ = __result_obj__ = self;
                                                    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                    return __result139__;
                                                    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional216;
struct sNode* __result140__;
void* right_value306;
struct sNode* result_218;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional223;
_Bool _if_conditional224;
struct sNode* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value306 = (void*)0;
memset(&result_218, 0, sizeof(struct sNode*));
                                                    if(_if_conditional216=self==(void*)0,                                                    _if_conditional216) {
                                                        __result140__ = __result_obj__ = (void*)0;
                                                        return __result140__;
                                                    }
                                                    result_218=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value306=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                                                    if(right_value306) { right_value306 = come_decrement_ref_count2(right_value306, ((struct sNode*)right_value306)->finalize, ((struct sNode*)right_value306)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    if(_if_conditional217=self!=((void*)0)&&((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 2312)), "sNode_clone", 4, 2313))->clone!=((void*)0),                                                    _if_conditional217) {
                                                        ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_218, "sNode_clone", 4, 2314)), "sNode_clone", 4, 2315))->_protocol_obj=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 2316)), "sNode_clone", 4, 2317))->clone(((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 2316)), "sNode_clone", 4, 2317))->_protocol_obj);
                                                    }
                                                    if(_if_conditional218=self!=((void*)0),                                                    _if_conditional218) {
                                                        ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_218, "sNode_clone", 5, 2318)), "sNode_clone", 5, 2319))->finalize=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 5, 2320)), "sNode_clone", 5, 2321))->finalize;
                                                    }
                                                    if(_if_conditional219=self!=((void*)0),                                                    _if_conditional219) {
                                                        ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_218, "sNode_clone", 6, 2322)), "sNode_clone", 6, 2323))->clone=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 6, 2324)), "sNode_clone", 6, 2325))->clone;
                                                    }
                                                    if(_if_conditional220=self!=((void*)0),                                                    _if_conditional220) {
                                                        ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_218, "sNode_clone", 7, 2326)), "sNode_clone", 7, 2327))->compile=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 7, 2328)), "sNode_clone", 7, 2329))->compile;
                                                    }
                                                    if(_if_conditional221=self!=((void*)0),                                                    _if_conditional221) {
                                                        ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_218, "sNode_clone", 8, 2330)), "sNode_clone", 8, 2331))->sline=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 8, 2332)), "sNode_clone", 8, 2333))->sline;
                                                    }
                                                    if(_if_conditional222=self!=((void*)0),                                                    _if_conditional222) {
                                                        ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_218, "sNode_clone", 9, 2334)), "sNode_clone", 9, 2335))->sname=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 9, 2336)), "sNode_clone", 9, 2337))->sname;
                                                    }
                                                    if(_if_conditional223=self!=((void*)0),                                                    _if_conditional223) {
                                                        ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_218, "sNode_clone", 10, 2338)), "sNode_clone", 10, 2339))->terminated=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 10, 2340)), "sNode_clone", 10, 2341))->terminated;
                                                    }
                                                    if(_if_conditional224=self!=((void*)0),                                                    _if_conditional224) {
                                                        ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_218, "sNode_clone", 11, 2342)), "sNode_clone", 11, 2343))->kind=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 11, 2344)), "sNode_clone", 11, 2345))->kind;
                                                    }
                                                    __result141__ = __result_obj__ = result_218;
                                                    if(result_218) { result_218 = come_decrement_ref_count2(result_218, ((struct sNode*)result_218)->finalize, ((struct sNode*)result_218)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                    return __result141__;
                                                    if(result_218) { result_218 = come_decrement_ref_count2(result_218, ((struct sNode*)result_218)->finalize, ((struct sNode*)result_218)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_219;
_Bool _while_condtional29;
struct list_item$1sNodeph* prev_it_220;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_219, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_220, 0, sizeof(struct list_item$1sNodeph*));
                                            it_219=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 120, 2351)), "./neo-c.h", 120, 2352))->head;
                                            while(_while_condtional29=it_219!=((void*)0),                                            _while_condtional29) {
                                                prev_it_220=it_219;
                                                it_219=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_219, "./neo-c.h", 123, 2353)), "./neo-c.h", 123, 2354))->next;
                                                come_call_finalizer3(prev_it_220,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional228;
struct list$1charph* __result143__;
void* right_value310;
void* right_value311;
struct list$1charph* __exception_result_var_b329;
struct list$1charph* result_221;
struct list_item$1charph* it_222;
_Bool _while_condtional30;
char* __exception_result_var_b330;
void* right_value315;
struct list$1charph* __exception_result_var_b331;
struct list$1charph* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
right_value310 = (void*)0;
right_value311 = (void*)0;
memset(&result_221, 0, sizeof(struct list$1charph*));
memset(&it_222, 0, sizeof(struct list_item$1charph*));
right_value315 = (void*)0;
                                            if(_if_conditional228=self==((void*)0),                                            _if_conditional228) {
                                                __result143__ = __result_obj__ = ((void*)0);
                                                return __result143__;
                                            }
                                            result_221=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 2374),__exception_result_var_b329=((struct list$1charph*)(right_value311=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value310=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 139, "list$1charph"))), "./neo-c.h", 139, 2372)), "./neo-c.h", 139, 2373)))))), come_pop_stackframe(), __exception_result_var_b329));
                                            come_call_finalizer3(right_value310,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value311,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                            it_222=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 141, 2375)), "./neo-c.h", 141, 2376))->head;
                                            while(_while_condtional30=it_222!=((void*)0),                                            _while_condtional30) {
                                                (come_push_stackframe("./neo-c.h", 143, 2426),__exception_result_var_b331=list$1charph_add(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_221, "./neo-c.h", 143, 2377)), "./neo-c.h", 143, 2378)),(char*)come_increment_ref_count(((char*)(right_value315=(come_push_stackframe("./neo-c.h", 143, 2425),__exception_result_var_b330=string_clone(((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_222, "./neo-c.h", 143, 2423)), "./neo-c.h", 143, 2424))->item), come_pop_stackframe(), __exception_result_var_b330))))), come_pop_stackframe(), __exception_result_var_b331);
                                                right_value315 = come_decrement_ref_count2(right_value315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                it_222=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_222, "./neo-c.h", 145, 2427)), "./neo-c.h", 145, 2428))->next;
                                            }
                                            __result145__ = __result_obj__ = result_221;
                                            come_call_finalizer3(result_221,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result145__;
                                            come_call_finalizer3(result_221,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional229;
void* right_value312;
struct list_item$1charph* litem_223;
char* __dec_obj51;
_Bool _if_conditional230;
void* right_value313;
struct list_item$1charph* litem_224;
char* __dec_obj52;
void* right_value314;
struct list_item$1charph* litem_225;
char* __dec_obj53;
struct list$1charph* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
right_value312 = (void*)0;
memset(&litem_223, 0, sizeof(struct list_item$1charph*));
right_value313 = (void*)0;
memset(&litem_224, 0, sizeof(struct list_item$1charph*));
right_value314 = (void*)0;
memset(&litem_225, 0, sizeof(struct list_item$1charph*));
                                                    if(_if_conditional229=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 152, 2379)), "./neo-c.h", 152, 2380))->len==0,                                                    _if_conditional229) {
                                                        litem_223=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value312=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 153, "list_item$1charph"))));
                                                        come_call_finalizer3(right_value312,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_223, "./neo-c.h", 155, 2381)), "./neo-c.h", 155, 2382))->prev=((void*)0);
                                                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_223, "./neo-c.h", 156, 2383)), "./neo-c.h", 156, 2384))->next=((void*)0);
                                                        __dec_obj51=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_223, "./neo-c.h", 157, 2385)), "./neo-c.h", 157, 2386))->item;
                                                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_223, "./neo-c.h", 157, 2385)), "./neo-c.h", 157, 2386))->item=(char*)come_increment_ref_count(item);
                                                        __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 159, 2387)), "./neo-c.h", 159, 2388))->tail=litem_223;
                                                        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 160, 2389)), "./neo-c.h", 160, 2390))->head=litem_223;
                                                    }
                                                    else {
                                                        if(_if_conditional230=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 162, 2391)), "./neo-c.h", 162, 2392))->len==1,                                                        _if_conditional230) {
                                                            litem_224=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value313=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 163, "list_item$1charph"))));
                                                            come_call_finalizer3(right_value313,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_224, "./neo-c.h", 165, 2393)), "./neo-c.h", 165, 2394))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 165, 2395)), "./neo-c.h", 165, 2396))->head;
                                                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_224, "./neo-c.h", 166, 2397)), "./neo-c.h", 166, 2398))->next=((void*)0);
                                                            __dec_obj52=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_224, "./neo-c.h", 167, 2399)), "./neo-c.h", 167, 2400))->item;
                                                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_224, "./neo-c.h", 167, 2399)), "./neo-c.h", 167, 2400))->item=(char*)come_increment_ref_count(item);
                                                            __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 169, 2401)), "./neo-c.h", 169, 2402))->tail=litem_224;
                                                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 170, 2403)), "./neo-c.h", 170, 2404))->head, "./neo-c.h", 170, 2405)), "./neo-c.h", 170, 2406))->next=litem_224;
                                                        }
                                                        else {
                                                            litem_225=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value314=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 173, "list_item$1charph"))));
                                                            come_call_finalizer3(right_value314,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_225, "./neo-c.h", 175, 2407)), "./neo-c.h", 175, 2408))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 175, 2409)), "./neo-c.h", 175, 2410))->tail;
                                                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_225, "./neo-c.h", 176, 2411)), "./neo-c.h", 176, 2412))->next=((void*)0);
                                                            __dec_obj53=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_225, "./neo-c.h", 177, 2413)), "./neo-c.h", 177, 2414))->item;
                                                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_225, "./neo-c.h", 177, 2413)), "./neo-c.h", 177, 2414))->item=(char*)come_increment_ref_count(item);
                                                            __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 179, 2415)), "./neo-c.h", 179, 2416))->tail, "./neo-c.h", 179, 2417)), "./neo-c.h", 179, 2418))->next=litem_225;
                                                            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 180, 2419)), "./neo-c.h", 180, 2420))->tail=litem_225;
                                                        }
                                                    }
                                                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 183, 2421)), "./neo-c.h", 183, 2422))->len++;
                                                    __result144__ = __result_obj__ = self;
                                                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                    return __result144__;
                                                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_226;
_Bool _while_condtional31;
struct list_item$1charph* prev_it_227;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_226, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_227, 0, sizeof(struct list_item$1charph*));
                                            it_226=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 120, 2430)), "./neo-c.h", 120, 2431))->head;
                                            while(_while_condtional31=it_226!=((void*)0),                                            _while_condtional31) {
                                                prev_it_227=it_226;
                                                it_226=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_226, "./neo-c.h", 123, 2432)), "./neo-c.h", 123, 2433))->next;
                                                come_call_finalizer3(prev_it_227,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional232;
struct tuple1$1sTypeph* __result146__;
void* right_value317;
struct tuple1$1sTypeph* result_228;
_Bool _if_conditional233;
struct sType* __exception_result_var_b333;
void* right_value318;
struct sType* __dec_obj55;
struct tuple1$1sTypeph* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
right_value317 = (void*)0;
memset(&result_228, 0, sizeof(struct tuple1$1sTypeph*));
right_value318 = (void*)0;
                                            if(_if_conditional232=self==(void*)0,                                            _if_conditional232) {
                                                __result146__ = __result_obj__ = (void*)0;
                                                return __result146__;
                                            }
                                            result_228=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value317=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                                            come_call_finalizer3(right_value317,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(_if_conditional233=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4, 2440)), "tuple1$1sTypephp_clone", 4, 2441))->v1!=((void*)0),                                            _if_conditional233) {
                                                __dec_obj55=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(result_228, "tuple1$1sTypephp_clone", 4, 2442)), "tuple1$1sTypephp_clone", 4, 2443))->v1;
                                                ((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(result_228, "tuple1$1sTypephp_clone", 4, 2442)), "tuple1$1sTypephp_clone", 4, 2443))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value318=(come_push_stackframe("tuple1$1sTypephp_clone", 4, 2446),__exception_result_var_b333=sType_clone(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4, 2444)), "tuple1$1sTypephp_clone", 4, 2445))->v1), come_pop_stackframe(), __exception_result_var_b333))));
                                                come_call_finalizer3(__dec_obj55,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                come_call_finalizer3(right_value318,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                            }
                                            __result147__ = __result_obj__ = result_228;
                                            come_call_finalizer3(result_228,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result147__;
                                            come_call_finalizer3(result_228,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_229;
_Bool _while_condtional32;
struct list_item$1tuple2$2charphsTypephph* prev_it_230;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_229, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_230, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                    it_229=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 120, 2646)), "./neo-c.h", 120, 2647))->head;
                    while(_while_condtional32=it_229!=((void*)0),                    _while_condtional32) {
                        prev_it_230=it_229;
                        it_229=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_229, "./neo-c.h", 123, 2648)), "./neo-c.h", 123, 2649))->next;
                        come_call_finalizer3(prev_it_230,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

int come_main_v2(int argc, char** argv){
void* __result_obj__;
_Bool __exception_result_var_b347;
_Bool _if_conditional284;
void* right_value330;
void* right_value331;
struct buffer* __exception_result_var_b348;
struct buffer* clang_option_231;
void* right_value332;
void* right_value333;
struct buffer* __exception_result_var_b349;
struct buffer* cpp_option_232;
void* right_value334;
void* right_value335;
struct list$1charph* __exception_result_var_b350;
struct list$1charph* files_233;
void* right_value336;
void* right_value337;
struct list$1charph* __exception_result_var_b351;
struct list$1charph* object_files_234;
_Bool output_object_file_235;
_Bool output_cpp_file_236;
_Bool output_source_file_flag_237;
void* right_value338;
char* __exception_result_var_b352;
char* output_file_name_238;
_Bool verbose_239;
_Bool prohibit_common_header_240;
_Bool come_debug_241;
_Bool come_malloc_242;
_Bool come_str_243;
int i_244;
_Bool __exception_result_var_b353;
_Bool _if_conditional285;
void* right_value339;
char* __exception_result_var_b354;
char* __dec_obj65;
_Bool __exception_result_var_b355;
_Bool _if_conditional286;
_Bool __exception_result_var_b356;
_Bool _if_conditional287;
_Bool __exception_result_var_b357;
_Bool _if_conditional288;
_Bool __exception_result_var_b358;
_Bool _if_conditional289;
void* right_value340;
struct buffer* __exception_result_var_b359;
_Bool __exception_result_var_b360;
_Bool _if_conditional290;
struct buffer* __exception_result_var_b361;
_Bool __exception_result_var_b362;
_Bool _if_conditional291;
struct buffer* __exception_result_var_b363;
_Bool __exception_result_var_b364;
_Bool _if_conditional292;
_Bool __exception_result_var_b365;
_Bool _if_conditional293;
void* right_value341;
char* __exception_result_var_b366;
_Bool __exception_result_var_b367;
_Bool _if_conditional294;
void* right_value342;
void* right_value343;
struct buffer* __exception_result_var_b368;
void* right_value344;
char* __exception_result_var_b369;
_Bool __exception_result_var_b370;
_Bool _if_conditional295;
void* right_value345;
void* right_value346;
struct buffer* __exception_result_var_b371;
void* right_value347;
void* right_value348;
struct buffer* __exception_result_var_b372;
_Bool __exception_result_var_b373;
_Bool _if_conditional296;
struct buffer* __exception_result_var_b374;
unsigned long int __exception_result_var_b375;
unsigned long int __exception_result_var_b376;
int __exception_result_var_b377;
_Bool _if_conditional297;
void* right_value349;
char* __exception_result_var_b378;
void* right_value350;
char* __exception_result_var_b379;
struct buffer* __exception_result_var_b380;
_Bool __exception_result_var_b381;
_Bool _if_conditional298;
struct buffer* __exception_result_var_b382;
_Bool __exception_result_var_b383;
_Bool __exception_result_var_b384;
_Bool _if_conditional299;
_Bool __exception_result_var_b385;
_Bool _if_conditional300;
_Bool __exception_result_var_b386;
_Bool _if_conditional301;
_Bool _if_conditional302;
void* right_value351;
char* __exception_result_var_b387;
struct buffer* __exception_result_var_b388;
unsigned long int __exception_result_var_b389;
unsigned long int __exception_result_var_b390;
int __exception_result_var_b391;
_Bool _if_conditional303;
void* right_value352;
char* __exception_result_var_b392;
struct list$1charph* __exception_result_var_b393;
void* right_value353;
char* __exception_result_var_b394;
struct list$1charph* __exception_result_var_b395;
_Bool _if_conditional304;
_Bool _if_conditional305;
struct buffer* __exception_result_var_b396;
struct buffer* __exception_result_var_b397;
struct _IO_FILE* __exception_result_var_b398;
struct _IO_FILE* f_245;
_Bool _and_conditional1;
_Bool __exception_result_var_b399;
int __exception_result_var_b400;
int __exception_result_var_b401;
_Bool _or_conditional8;
_Bool __exception_result_var_b402;
void* right_value354;
char* __exception_result_var_b403;
char* tmp_file_246;
void* right_value355;
char* __exception_result_var_b404;
void* right_value356;
void* right_value357;
void* right_value358;
int __exception_result_var_b405;
struct sInfo info_247;
void* __exception_result_var_b406;
void* right_value359;
char* __exception_result_var_b407;
char* __dec_obj66;
void* right_value360;
char* __exception_result_var_b408;
char* __dec_obj67;
void* right_value361;
char* __exception_result_var_b409;
char* __dec_obj68;
void* right_value362;
char* __exception_result_var_b410;
char* __dec_obj69;
void* right_value363;
void* right_value369;
struct map$2charphsFunph* __exception_result_var_b412;
struct map$2charphsFunph* __dec_obj71;
void* right_value370;
void* right_value376;
struct map$2charphsGenericsFunph* __exception_result_var_b414;
struct map$2charphsGenericsFunph* __dec_obj73;
void* right_value377;
void* right_value383;
struct map$2charphsClassph* __exception_result_var_b416;
struct map$2charphsClassph* __dec_obj75;
void* right_value384;
void* right_value390;
struct map$2charphsClassModuleph* __exception_result_var_b418;
struct map$2charphsClassModuleph* __dec_obj77;
void* right_value391;
void* right_value397;
struct map$2charphsTypeph* __exception_result_var_b420;
struct map$2charphsTypeph* __dec_obj79;
void* right_value398;
void* right_value399;
struct sModule* __exception_result_var_b421;
struct sModule* __dec_obj80;
void* right_value400;
void* right_value401;
struct list$1sRightValueObjectph* __exception_result_var_b422;
struct list$1sRightValueObjectph* __dec_obj81;
void* right_value402;
void* right_value403;
struct list$1CVALUEph* __exception_result_var_b423;
struct list$1CVALUEph* __dec_obj82;
void* right_value404;
void* right_value405;
struct sVarTable* __exception_result_var_b424;
struct sVarTable* __dec_obj83;
void* right_value406;
void* right_value407;
struct sVarTable* __exception_result_var_b425;
struct sVarTable* lv_table_283;
void* right_value408;
void* right_value409;
struct list$1charph* __exception_result_var_b426;
struct list$1charph* __dec_obj84;
void* right_value410;
void* right_value411;
struct list$1charph* __exception_result_var_b427;
struct list$1charph* __dec_obj85;
void* right_value412;
void* right_value413;
struct map$2charphsClassph* __exception_result_var_b428;
struct map$2charphsClassph* __dec_obj86;
int __exception_result_var_b429;
void* right_value414;
char* __exception_result_var_b430;
char* __dec_obj87;
_Bool __exception_result_var_b431;
_Bool _if_conditional389;
int __exception_result_var_b432;
void* right_value415;
char* __exception_result_var_b433;
void* right_value416;
char* __exception_result_var_b434;
void* right_value417;
struct buffer* __exception_result_var_b435;
struct buffer* __dec_obj88;
void* right_value418;
char* __exception_result_var_b436;
void* right_value419;
char* __exception_result_var_b437;
void* right_value420;
struct buffer* __exception_result_var_b438;
struct buffer* __dec_obj89;
_Bool _if_conditional390;
int __exception_result_var_b439;
_Bool __exception_result_var_b440;
_Bool _if_conditional391;
int __exception_result_var_b441;
void* right_value421;
void* right_value422;
int __exception_result_var_b442;
_Bool __exception_result_var_b443;
_Bool _if_conditional424;
_Bool __exception_result_var_b444;
_Bool _if_conditional425;
int __result160__;
_Bool __exception_result_var_b445;
_Bool _if_conditional426;
_Bool __exception_result_var_b446;
_Bool _if_conditional427;
int __result161__;
_Bool __exception_result_var_b447;
_Bool _if_conditional428;
_Bool __exception_result_var_b448;
_Bool _if_conditional429;
int __result162__;
_Bool __exception_result_var_b449;
_Bool _if_conditional430;
_Bool __exception_result_var_b450;
_Bool _if_conditional431;
int __result163__;
_Bool __exception_result_var_b451;
_Bool _if_conditional432;
_Bool __exception_result_var_b452;
_Bool _if_conditional433;
int __result164__;
_Bool __exception_result_var_b453;
_Bool _if_conditional434;
_Bool __exception_result_var_b454;
_Bool _if_conditional435;
int __result165__;
_Bool __exception_result_var_b455;
_Bool _if_conditional436;
_Bool _if_conditional437;
_Bool __exception_result_var_b456;
_Bool _if_conditional438;
int __result166__;
_Bool _if_conditional439;
_Bool __exception_result_var_b457;
_Bool _if_conditional440;
int __result167__;
void* right_value423;
void* right_value424;
struct buffer* __exception_result_var_b458;
struct buffer* clang_option_287;
void* right_value425;
void* right_value426;
struct buffer* __exception_result_var_b459;
struct buffer* cpp_option_288;
void* right_value427;
void* right_value428;
struct list$1charph* __exception_result_var_b460;
struct list$1charph* files_289;
void* right_value429;
void* right_value430;
struct list$1charph* __exception_result_var_b461;
struct list$1charph* object_files_290;
_Bool output_object_file_291;
_Bool output_cpp_file_292;
_Bool output_source_file_flag_293;
char* __dec_obj90;
char* output_file_name_294;
_Bool verbose_295;
_Bool come_debug_296;
_Bool come_malloc_297;
_Bool come_str_298;
int i_299;
_Bool __exception_result_var_b462;
_Bool _if_conditional441;
void* right_value431;
char* __exception_result_var_b463;
char* __dec_obj91;
_Bool __exception_result_var_b464;
_Bool _if_conditional442;
_Bool __exception_result_var_b465;
_Bool _if_conditional443;
_Bool __exception_result_var_b466;
_Bool _if_conditional444;
_Bool __exception_result_var_b467;
_Bool _if_conditional445;
void* right_value432;
struct buffer* __exception_result_var_b468;
_Bool __exception_result_var_b469;
_Bool _if_conditional446;
struct buffer* __exception_result_var_b470;
_Bool __exception_result_var_b471;
_Bool _if_conditional447;
_Bool __exception_result_var_b472;
_Bool _if_conditional448;
void* right_value433;
char* __exception_result_var_b473;
_Bool __exception_result_var_b474;
_Bool _if_conditional449;
void* right_value434;
void* right_value435;
struct buffer* __exception_result_var_b475;
void* right_value436;
char* __exception_result_var_b476;
_Bool __exception_result_var_b477;
_Bool _if_conditional450;
void* right_value437;
void* right_value438;
struct buffer* __exception_result_var_b478;
void* right_value439;
void* right_value440;
struct buffer* __exception_result_var_b479;
_Bool __exception_result_var_b480;
_Bool _if_conditional451;
struct buffer* __exception_result_var_b481;
_Bool __exception_result_var_b482;
_Bool _if_conditional452;
struct buffer* __exception_result_var_b483;
unsigned long int __exception_result_var_b484;
unsigned long int __exception_result_var_b485;
int __exception_result_var_b486;
_Bool _if_conditional453;
void* right_value441;
char* __exception_result_var_b487;
void* right_value442;
char* __exception_result_var_b488;
struct buffer* __exception_result_var_b489;
_Bool __exception_result_var_b490;
_Bool _if_conditional454;
struct buffer* __exception_result_var_b491;
_Bool __exception_result_var_b492;
_Bool __exception_result_var_b493;
_Bool _if_conditional455;
_Bool __exception_result_var_b494;
_Bool _if_conditional456;
_Bool __exception_result_var_b495;
_Bool _if_conditional457;
_Bool _if_conditional458;
void* right_value443;
char* __exception_result_var_b496;
struct buffer* __exception_result_var_b497;
unsigned long int __exception_result_var_b498;
unsigned long int __exception_result_var_b499;
int __exception_result_var_b500;
_Bool _if_conditional459;
void* right_value444;
char* __exception_result_var_b501;
struct list$1charph* __exception_result_var_b502;
void* right_value445;
char* __exception_result_var_b503;
char* __exception_result_var_b504;
void* right_value446;
struct list$1charph* __exception_result_var_b505;
_Bool _if_conditional460;
_Bool _if_conditional461;
struct buffer* __exception_result_var_b506;
struct buffer* __exception_result_var_b507;
struct list$1charph* o2_saved_300;
char* __exception_result_var_b508;
char* it_301;
_Bool __exception_result_var_b509;
char* __exception_result_var_b510;
struct sInfo info_302;
void* __exception_result_var_b511;
void* right_value447;
char* __exception_result_var_b512;
char* __dec_obj92;
void* right_value448;
char* __exception_result_var_b513;
char* __dec_obj93;
void* right_value449;
char* __exception_result_var_b514;
char* __dec_obj94;
void* right_value450;
void* right_value451;
struct map$2charphsFunph* __exception_result_var_b515;
struct map$2charphsFunph* __dec_obj95;
void* right_value452;
void* right_value453;
struct map$2charphsGenericsFunph* __exception_result_var_b516;
struct map$2charphsGenericsFunph* __dec_obj96;
void* right_value454;
void* right_value455;
struct map$2charphsClassph* __exception_result_var_b517;
struct map$2charphsClassph* __dec_obj97;
void* right_value456;
void* right_value457;
struct map$2charphsClassModuleph* __exception_result_var_b518;
struct map$2charphsClassModuleph* __dec_obj98;
void* right_value458;
void* right_value459;
struct map$2charphsTypeph* __exception_result_var_b519;
struct map$2charphsTypeph* __dec_obj99;
void* right_value460;
void* right_value461;
struct sModule* __exception_result_var_b520;
struct sModule* __dec_obj100;
void* right_value462;
void* right_value463;
struct list$1sRightValueObjectph* __exception_result_var_b521;
struct list$1sRightValueObjectph* __dec_obj101;
void* right_value464;
void* right_value465;
struct list$1CVALUEph* __exception_result_var_b522;
struct list$1CVALUEph* __dec_obj102;
void* right_value466;
void* right_value467;
struct sVarTable* __exception_result_var_b523;
struct sVarTable* __dec_obj103;
void* right_value468;
void* right_value469;
struct sVarTable* __exception_result_var_b524;
struct sVarTable* lv_table_303;
void* right_value470;
void* right_value471;
struct list$1charph* __exception_result_var_b525;
struct list$1charph* __dec_obj104;
void* right_value472;
void* right_value473;
struct list$1charph* __exception_result_var_b526;
struct list$1charph* __dec_obj105;
void* right_value474;
void* right_value475;
struct map$2charphsClassph* __exception_result_var_b527;
struct map$2charphsClassph* __dec_obj106;
_Bool __exception_result_var_b528;
_Bool _if_conditional462;
int __exception_result_var_b529;
void* right_value476;
char* __exception_result_var_b530;
void* right_value477;
char* __exception_result_var_b531;
void* right_value478;
struct buffer* __exception_result_var_b532;
struct buffer* __dec_obj107;
void* right_value479;
char* __exception_result_var_b533;
void* right_value480;
char* __exception_result_var_b534;
void* right_value481;
struct buffer* __exception_result_var_b535;
struct buffer* __dec_obj108;
_Bool _if_conditional463;
void* right_value482;
char* __exception_result_var_b536;
char* __dec_obj109;
char* __dec_obj110;
_Bool _if_conditional464;
int __exception_result_var_b537;
_Bool __exception_result_var_b538;
_Bool _if_conditional465;
int __exception_result_var_b539;
_Bool _if_conditional466;
int __exception_result_var_b540;
_Bool __exception_result_var_b541;
_Bool _if_conditional467;
int __exception_result_var_b542;
_Bool _if_conditional468;
_Bool _if_conditional469;
_Bool _if_conditional470;
int __exception_result_var_b543;
int __exception_result_var_b544;
_Bool _if_conditional471;
struct sInfo info_304;
void* __exception_result_var_b545;
char* __exception_result_var_b547;
char* __exception_result_var_b548;
void* right_value483;
char* __dec_obj111;
void* right_value484;
char* __exception_result_var_b549;
char* __dec_obj112;
_Bool _if_conditional474;
void* right_value485;
char* __exception_result_var_b550;
char* __dec_obj113;
char* __dec_obj114;
_Bool __exception_result_var_b551;
struct __current_stack2__ __current_stack2__;
_Bool __exception_result_var_b553;
_Bool _if_conditional475;
int __result170__;
memset(&__result_obj__, 0, sizeof(void*));
right_value330 = (void*)0;
right_value331 = (void*)0;
memset(&clang_option_231, 0, sizeof(struct buffer*));
right_value332 = (void*)0;
right_value333 = (void*)0;
memset(&cpp_option_232, 0, sizeof(struct buffer*));
right_value334 = (void*)0;
right_value335 = (void*)0;
memset(&files_233, 0, sizeof(struct list$1charph*));
right_value336 = (void*)0;
right_value337 = (void*)0;
memset(&object_files_234, 0, sizeof(struct list$1charph*));
memset(&output_object_file_235, 0, sizeof(_Bool));
memset(&output_cpp_file_236, 0, sizeof(_Bool));
memset(&output_source_file_flag_237, 0, sizeof(_Bool));
right_value338 = (void*)0;
memset(&output_file_name_238, 0, sizeof(char*));
memset(&verbose_239, 0, sizeof(_Bool));
memset(&prohibit_common_header_240, 0, sizeof(_Bool));
memset(&come_debug_241, 0, sizeof(_Bool));
memset(&come_malloc_242, 0, sizeof(_Bool));
memset(&come_str_243, 0, sizeof(_Bool));
memset(&i_244, 0, sizeof(int));
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
right_value353 = (void*)0;
memset(&f_245, 0, sizeof(struct _IO_FILE*));
right_value354 = (void*)0;
memset(&tmp_file_246, 0, sizeof(char*));
right_value355 = (void*)0;
right_value356 = (void*)0;
right_value357 = (void*)0;
right_value358 = (void*)0;
memset(&info_247, 0, sizeof(struct sInfo));
right_value359 = (void*)0;
right_value360 = (void*)0;
right_value361 = (void*)0;
right_value362 = (void*)0;
right_value363 = (void*)0;
right_value369 = (void*)0;
right_value370 = (void*)0;
right_value376 = (void*)0;
right_value377 = (void*)0;
right_value383 = (void*)0;
right_value384 = (void*)0;
right_value390 = (void*)0;
right_value391 = (void*)0;
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
right_value407 = (void*)0;
memset(&lv_table_283, 0, sizeof(struct sVarTable*));
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
right_value424 = (void*)0;
memset(&clang_option_287, 0, sizeof(struct buffer*));
right_value425 = (void*)0;
right_value426 = (void*)0;
memset(&cpp_option_288, 0, sizeof(struct buffer*));
right_value427 = (void*)0;
right_value428 = (void*)0;
memset(&files_289, 0, sizeof(struct list$1charph*));
right_value429 = (void*)0;
right_value430 = (void*)0;
memset(&object_files_290, 0, sizeof(struct list$1charph*));
memset(&output_object_file_291, 0, sizeof(_Bool));
memset(&output_cpp_file_292, 0, sizeof(_Bool));
memset(&output_source_file_flag_293, 0, sizeof(_Bool));
memset(&output_file_name_294, 0, sizeof(char*));
memset(&verbose_295, 0, sizeof(_Bool));
memset(&come_debug_296, 0, sizeof(_Bool));
memset(&come_malloc_297, 0, sizeof(_Bool));
memset(&come_str_298, 0, sizeof(_Bool));
memset(&i_299, 0, sizeof(int));
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
right_value445 = (void*)0;
right_value446 = (void*)0;
memset(&o2_saved_300, 0, sizeof(struct list$1charph*));
memset(&it_301, 0, sizeof(char*));
memset(&info_302, 0, sizeof(struct sInfo));
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
right_value468 = (void*)0;
right_value469 = (void*)0;
memset(&lv_table_303, 0, sizeof(struct sVarTable*));
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
right_value481 = (void*)0;
right_value482 = (void*)0;
memset(&info_304, 0, sizeof(struct sInfo));
right_value483 = (void*)0;
right_value484 = (void*)0;
right_value485 = (void*)0;
memset(&__current_stack2__, 0, sizeof(struct __current_stack2__));
    if(_if_conditional284=(come_push_stackframe("02transpile.c", 512, 2679),__exception_result_var_b347=charp_operator_equals(((char**)come_null_check(argv, "02transpile.c", 512, 2678))[1],"header"), come_pop_stackframe(), __exception_result_var_b347)&&argc>=3,    _if_conditional284) {
        gProgramName=((char**)come_null_check(argv, "02transpile.c", 513, 2680))[0];
        clang_option_231=(struct buffer*)come_increment_ref_count((come_push_stackframe("02transpile.c", 515, 2682),__exception_result_var_b348=((struct buffer*)(right_value331=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value330=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 515, "buffer"))), "02transpile.c", 515, 2681)))))), come_pop_stackframe(), __exception_result_var_b348));
        come_call_finalizer3(right_value330,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value331,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        cpp_option_232=(struct buffer*)come_increment_ref_count((come_push_stackframe("02transpile.c", 516, 2684),__exception_result_var_b349=((struct buffer*)(right_value333=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value332=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 516, "buffer"))), "02transpile.c", 516, 2683)))))), come_pop_stackframe(), __exception_result_var_b349));
        come_call_finalizer3(right_value332,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value333,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        files_233=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 517, 2686),__exception_result_var_b350=((struct list$1charph*)(right_value335=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value334=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 517, "list$1charph"))), "02transpile.c", 517, 2685)))))), come_pop_stackframe(), __exception_result_var_b350));
        come_call_finalizer3(right_value334,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value335,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        object_files_234=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 518, 2688),__exception_result_var_b351=((struct list$1charph*)(right_value337=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value336=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 518, "list$1charph"))), "02transpile.c", 518, 2687)))))), come_pop_stackframe(), __exception_result_var_b351));
        come_call_finalizer3(right_value336,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value337,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        output_object_file_235=(_Bool)0;
        output_cpp_file_236=(_Bool)0;
        output_source_file_flag_237=(_Bool)0;
        output_file_name_238=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 522, 2689),__exception_result_var_b352=((char*)(right_value338=__builtin_string("common.h"))), come_pop_stackframe(), __exception_result_var_b352));
        right_value338 = come_decrement_ref_count2(right_value338, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        verbose_239=(_Bool)0;
        prohibit_common_header_240=(_Bool)0;
        come_debug_241=(_Bool)0;
        come_malloc_242=(_Bool)0;
        come_str_243=(_Bool)0;
        for(        i_244=2;        i_244<argc;        i_244++        ){
            if(_if_conditional285=(come_push_stackframe("02transpile.c", 529, 2691),__exception_result_var_b353=charp_operator_equals(((char**)come_null_check(argv, "02transpile.c", 529, 2690))[i_244],"-o"), come_pop_stackframe(), __exception_result_var_b353)&&i_244+1<argc,            _if_conditional285) {
                __dec_obj65=output_file_name_238;
                output_file_name_238=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 530, 2693),__exception_result_var_b354=((char*)(right_value339=__builtin_string(((char**)come_null_check(argv, "02transpile.c", 530, 2692))[i_244+1]))), come_pop_stackframe(), __exception_result_var_b354));
                __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value339 = come_decrement_ref_count2(right_value339, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                i_244++;
            }
            else {
                if(_if_conditional286=(come_push_stackframe("02transpile.c", 533, 2695),__exception_result_var_b355=charp_operator_equals(((char**)come_null_check(argv, "02transpile.c", 533, 2694))[i_244],"-str"), come_pop_stackframe(), __exception_result_var_b355),                _if_conditional286) {
                    come_str_243=(_Bool)1;
                }
                else {
                    if(_if_conditional287=(come_push_stackframe("02transpile.c", 536, 2697),__exception_result_var_b356=charp_operator_equals(((char**)come_null_check(argv, "02transpile.c", 536, 2696))[i_244],"-leak"), come_pop_stackframe(), __exception_result_var_b356),                    _if_conditional287) {
                        come_malloc_242=(_Bool)1;
                    }
                    else {
                        if(_if_conditional288=(come_push_stackframe("02transpile.c", 539, 2699),__exception_result_var_b357=charp_operator_equals(((char**)come_null_check(argv, "02transpile.c", 539, 2698))[i_244],"-gc"), come_pop_stackframe(), __exception_result_var_b357),                        _if_conditional288) {
                            gComeGC=(_Bool)1;
                        }
                        else {
                            if(_if_conditional289=(come_push_stackframe("02transpile.c", 542, 2701),__exception_result_var_b358=charp_operator_equals(((char**)come_null_check(argv, "02transpile.c", 542, 2700))[i_244],"-stdc"), come_pop_stackframe(), __exception_result_var_b358),                            _if_conditional289) {
                                gComeLink=(_Bool)0;
                                (come_push_stackframe("02transpile.c", 544, 2704),__exception_result_var_b359=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(cpp_option_232, "02transpile.c", 544, 2702)), "02transpile.c", 544, 2703)),((char*)(right_value340=xsprintf(" -DNEO_C_STDC=1 ")))), come_pop_stackframe(), __exception_result_var_b359);
                                right_value340 = come_decrement_ref_count2(right_value340, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                output_source_file_flag_237=(_Bool)1;
                                gComeOriginalSourcePosition=(_Bool)0;
                            }
                            else {
                                if(_if_conditional290=(come_push_stackframe("02transpile.c", 548, 2706),__exception_result_var_b360=charp_operator_equals(((char**)come_null_check(argv, "02transpile.c", 548, 2705))[i_244],"-g"), come_pop_stackframe(), __exception_result_var_b360),                                _if_conditional290) {
                                    (come_push_stackframe("02transpile.c", 549, 2709),__exception_result_var_b361=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(clang_option_231, "02transpile.c", 549, 2707)), "02transpile.c", 549, 2708)),"-g "), come_pop_stackframe(), __exception_result_var_b361);
                                }
                                else {
                                    if(_if_conditional291=(come_push_stackframe("02transpile.c", 551, 2711),__exception_result_var_b362=charp_operator_equals(((char**)come_null_check(argv, "02transpile.c", 551, 2710))[i_244],"-cg"), come_pop_stackframe(), __exception_result_var_b362),                                    _if_conditional291) {
                                        (come_push_stackframe("02transpile.c", 552, 2714),__exception_result_var_b363=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(clang_option_231, "02transpile.c", 552, 2712)), "02transpile.c", 552, 2713)),"-g "), come_pop_stackframe(), __exception_result_var_b363);
                                        come_debug_241=(_Bool)1;
                                    }
                                    else {
                                        if(_if_conditional292=(come_push_stackframe("02transpile.c", 555, 2716),__exception_result_var_b364=charp_operator_equals(((char**)come_null_check(argv, "02transpile.c", 555, 2715))[i_244],"-common-header"), come_pop_stackframe(), __exception_result_var_b364),                                        _if_conditional292) {
                                            gCommonHeader=(_Bool)1;
                                        }
                                        else {
                                            if(_if_conditional293=(come_push_stackframe("02transpile.c", 558, 2718),__exception_result_var_b365=charp_operator_equals(((char**)come_null_check(argv, "02transpile.c", 558, 2717))[i_244],"-original-position"), come_pop_stackframe(), __exception_result_var_b365),                                            _if_conditional293) {
                                                gComeOriginalSourcePosition=(_Bool)0;
                                            }
                                            else {
                                                if(_if_conditional294=(come_push_stackframe("02transpile.c", 561, 2721),__exception_result_var_b367=string_operator_equals((come_push_stackframe("02transpile.c", 561, 2720),__exception_result_var_b366=((char*)(right_value341=charp_operator_load_range_element(((char**)come_null_check(argv, "02transpile.c", 561, 2719))[i_244],0,2))), come_pop_stackframe(), __exception_result_var_b366),"-O"), come_pop_stackframe(), __exception_result_var_b367),                                                right_value341 = come_decrement_ref_count2(right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                                                _if_conditional294) {
                                                    (come_push_stackframe("02transpile.c", 562, 2725),__exception_result_var_b368=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(clang_option_231, "02transpile.c", 562, 2722)), "02transpile.c", 562, 2723)),((char*)(right_value343=xsprintf(" \%s ",((char*)(right_value342=charp_to_string(((char**)come_null_check(argv, "02transpile.c", 562, 2724))[i_244]))))))), come_pop_stackframe(), __exception_result_var_b368);
                                                    right_value342 = come_decrement_ref_count2(right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    right_value343 = come_decrement_ref_count2(right_value343, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    come_debug_241=(_Bool)0;
                                                }
                                                else {
                                                    if(_if_conditional295=(come_push_stackframe("02transpile.c", 565, 2728),__exception_result_var_b370=string_operator_equals((come_push_stackframe("02transpile.c", 565, 2727),__exception_result_var_b369=((char*)(right_value344=charp_operator_load_range_element(((char**)come_null_check(argv, "02transpile.c", 565, 2726))[i_244],0,2))), come_pop_stackframe(), __exception_result_var_b369),"-D"), come_pop_stackframe(), __exception_result_var_b370),                                                    right_value344 = come_decrement_ref_count2(right_value344, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                                                    _if_conditional295) {
                                                        (come_push_stackframe("02transpile.c", 566, 2732),__exception_result_var_b371=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(cpp_option_232, "02transpile.c", 566, 2729)), "02transpile.c", 566, 2730)),((char*)(right_value346=xsprintf(" \%s ",((char*)(right_value345=charp_to_string(((char**)come_null_check(argv, "02transpile.c", 566, 2731))[i_244]))))))), come_pop_stackframe(), __exception_result_var_b371);
                                                        right_value345 = come_decrement_ref_count2(right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        right_value346 = come_decrement_ref_count2(right_value346, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        (come_push_stackframe("02transpile.c", 567, 2736),__exception_result_var_b372=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(clang_option_231, "02transpile.c", 567, 2733)), "02transpile.c", 567, 2734)),((char*)(right_value348=xsprintf(" \%s ",((char*)(right_value347=charp_to_string(((char**)come_null_check(argv, "02transpile.c", 567, 2735))[i_244]))))))), come_pop_stackframe(), __exception_result_var_b372);
                                                        right_value347 = come_decrement_ref_count2(right_value347, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        right_value348 = come_decrement_ref_count2(right_value348, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    }
                                                    else {
                                                        if(_if_conditional296=(come_push_stackframe("02transpile.c", 569, 2738),__exception_result_var_b373=charp_operator_equals(((char**)come_null_check(argv, "02transpile.c", 569, 2737))[i_244],"-v"), come_pop_stackframe(), __exception_result_var_b373),                                                        _if_conditional296) {
                                                            (come_push_stackframe("02transpile.c", 570, 2741),__exception_result_var_b374=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(clang_option_231, "02transpile.c", 570, 2739)), "02transpile.c", 570, 2740)),"-v "), come_pop_stackframe(), __exception_result_var_b374);
                                                            verbose_239=(_Bool)1;
                                                        }
                                                        else {
                                                            if(_if_conditional297=(come_push_stackframe("02transpile.c", 573, 2743),__exception_result_var_b375=strlen(((char**)come_null_check(argv, "02transpile.c", 573, 2742))[i_244]), come_pop_stackframe(), __exception_result_var_b375)>=2&&(come_push_stackframe("02transpile.c", 573, 2746),__exception_result_var_b377=memcmp(((char**)come_null_check(argv, "02transpile.c", 573, 2744))[i_244],"-I",(come_push_stackframe("02transpile.c", 573, 2745),__exception_result_var_b376=strlen("-I"), come_pop_stackframe(), __exception_result_var_b376)), come_pop_stackframe(), __exception_result_var_b377)==0,                                                            _if_conditional297) {
                                                                (come_push_stackframe("02transpile.c", 574, 2752),__exception_result_var_b380=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(cpp_option_232, "02transpile.c", 574, 2747)), "02transpile.c", 574, 2748)),(come_push_stackframe("02transpile.c", 574, 2751),__exception_result_var_b379=((char*)(right_value350=charp_operator_add(" ",(come_push_stackframe("02transpile.c", 574, 2750),__exception_result_var_b378=((char*)(right_value349=charp_operator_add(((char**)come_null_check(argv, "02transpile.c", 574, 2749))[i_244]," "))), come_pop_stackframe(), __exception_result_var_b378)))), come_pop_stackframe(), __exception_result_var_b379)), come_pop_stackframe(), __exception_result_var_b380);
                                                                right_value349 = come_decrement_ref_count2(right_value349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                right_value350 = come_decrement_ref_count2(right_value350, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            else {
                                                                if(_if_conditional298=(come_push_stackframe("02transpile.c", 576, 2754),__exception_result_var_b381=charp_operator_equals(((char**)come_null_check(argv, "02transpile.c", 576, 2753))[i_244],"-gdwarf-4"), come_pop_stackframe(), __exception_result_var_b381),                                                                _if_conditional298) {
                                                                    (come_push_stackframe("02transpile.c", 577, 2757),__exception_result_var_b382=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(clang_option_231, "02transpile.c", 577, 2755)), "02transpile.c", 577, 2756)),"-gdwarf-4 "), come_pop_stackframe(), __exception_result_var_b382);
                                                                }
                                                                else {
                                                                    if(_if_conditional299=(come_push_stackframe("02transpile.c", 579, 2759),__exception_result_var_b383=charp_operator_equals(((char**)come_null_check(argv, "02transpile.c", 579, 2758))[i_244],"-s"), come_pop_stackframe(), __exception_result_var_b383)||(come_push_stackframe("02transpile.c", 579, 2761),__exception_result_var_b384=charp_operator_equals(((char**)come_null_check(argv, "02transpile.c", 579, 2760))[i_244],"-S"), come_pop_stackframe(), __exception_result_var_b384),                                                                    _if_conditional299) {
                                                                        output_source_file_flag_237=(_Bool)1;
                                                                        gComeOriginalSourcePosition=(_Bool)0;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional300=(come_push_stackframe("02transpile.c", 583, 2763),__exception_result_var_b385=charp_operator_equals(((char**)come_null_check(argv, "02transpile.c", 583, 2762))[i_244],"-c"), come_pop_stackframe(), __exception_result_var_b385),                                                                        _if_conditional300) {
                                                                            output_object_file_235=(_Bool)1;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional301=(come_push_stackframe("02transpile.c", 586, 2765),__exception_result_var_b386=charp_operator_equals(((char**)come_null_check(argv, "02transpile.c", 586, 2764))[i_244],"-E"), come_pop_stackframe(), __exception_result_var_b386),                                                                            _if_conditional301) {
                                                                                output_cpp_file_236=(_Bool)1;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional302=((char**)come_null_check(argv, "02transpile.c", 589, 2766))[i_244][0]==45,                                                                                _if_conditional302) {
                                                                                    (come_push_stackframe("02transpile.c", 590, 2771),__exception_result_var_b388=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(clang_option_231, "02transpile.c", 590, 2767)), "02transpile.c", 590, 2768)),(come_push_stackframe("02transpile.c", 590, 2770),__exception_result_var_b387=((char*)(right_value351=charp_operator_add(((char**)come_null_check(argv, "02transpile.c", 590, 2769))[i_244]," "))), come_pop_stackframe(), __exception_result_var_b387)), come_pop_stackframe(), __exception_result_var_b388);
                                                                                    right_value351 = come_decrement_ref_count2(right_value351, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional303=(come_push_stackframe("02transpile.c", 592, 2773),__exception_result_var_b389=strlen(((char**)come_null_check(argv, "02transpile.c", 592, 2772))[i_244]), come_pop_stackframe(), __exception_result_var_b389)>2&&(come_push_stackframe("02transpile.c", 592, 2777),__exception_result_var_b391=memcmp(((char**)come_null_check(argv, "02transpile.c", 592, 2774))[i_244]+(come_push_stackframe("02transpile.c", 592, 2776),__exception_result_var_b390=strlen(((char**)come_null_check(argv, "02transpile.c", 592, 2775))[i_244]), come_pop_stackframe(), __exception_result_var_b390)-2,".o",2), come_pop_stackframe(), __exception_result_var_b391)==0,                                                                                    _if_conditional303) {
                                                                                        (come_push_stackframe("02transpile.c", 593, 2782),__exception_result_var_b393=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(object_files_234, "02transpile.c", 593, 2778)), "02transpile.c", 593, 2779)),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 593, 2781),__exception_result_var_b392=((char*)(right_value352=__builtin_string(((char**)come_null_check(argv, "02transpile.c", 593, 2780))[i_244]))), come_pop_stackframe(), __exception_result_var_b392))), come_pop_stackframe(), __exception_result_var_b393);
                                                                                        right_value352 = come_decrement_ref_count2(right_value352, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    }
                                                                                    else {
                                                                                        (come_push_stackframe("02transpile.c", 596, 2787),__exception_result_var_b395=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(files_233, "02transpile.c", 596, 2783)), "02transpile.c", 596, 2784)),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 596, 2786),__exception_result_var_b394=((char*)(right_value353=__builtin_string(((char**)come_null_check(argv, "02transpile.c", 596, 2785))[i_244]))), come_pop_stackframe(), __exception_result_var_b394))), come_pop_stackframe(), __exception_result_var_b395);
                                                                                        right_value353 = come_decrement_ref_count2(right_value353, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
        }
        gComeDebug=come_debug_241;
        gComeMalloc=come_malloc_242;
        if(come_str_243) {
            if(gComeGC) {
                (come_push_stackframe("02transpile.c", 605, 2790),__exception_result_var_b396=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(clang_option_231, "02transpile.c", 605, 2788)), "02transpile.c", 605, 2789))," -lneo-c-str-gc -lpcre "), come_pop_stackframe(), __exception_result_var_b396);
            }
            else {
                (come_push_stackframe("02transpile.c", 608, 2793),__exception_result_var_b397=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(clang_option_231, "02transpile.c", 608, 2791)), "02transpile.c", 608, 2792))," -lneo-c-str -lpcre "), come_pop_stackframe(), __exception_result_var_b397);
            }
        }
        if(_and_conditional1=f_245=(come_push_stackframe("02transpile.c", 612, 2794),__exception_result_var_b398=fopen(output_file_name_238,"w"), come_pop_stackframe(), __exception_result_var_b398),        _and_conditional1 == 0) {
            (come_push_stackframe("02transpile.c", 612, 2795),__exception_result_var_b399=die("fopen"), come_pop_stackframe(), __exception_result_var_b399);
        }
        (come_push_stackframe("02transpile.c", 613, 2796),__exception_result_var_b400=fclose(f_245), come_pop_stackframe(), __exception_result_var_b400);
        if(_or_conditional8=(come_push_stackframe("02transpile.c", 615, 2797),__exception_result_var_b401=truncate(output_file_name_238,0), come_pop_stackframe(), __exception_result_var_b401),        _or_conditional8 != 0) {
            (come_push_stackframe("02transpile.c", 615, 2798),__exception_result_var_b402=die("truncate"), come_pop_stackframe(), __exception_result_var_b402);
        }
        tmp_file_246=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 617, 2799),__exception_result_var_b403=((char*)(right_value354=__builtin_string("tmp-common-header"))), come_pop_stackframe(), __exception_result_var_b403));
        right_value354 = come_decrement_ref_count2(right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("02transpile.c", 619, 2803),__exception_result_var_b405=system(((char*)(right_value358=xsprintf("cat \%s > \%s",((char*)(right_value356=string_to_string((come_push_stackframe("02transpile.c", 619, 2802),__exception_result_var_b404=((char*)(right_value355=list$1charph_join(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(files_233, "02transpile.c", 619, 2800)), "02transpile.c", 619, 2801))," "))), come_pop_stackframe(), __exception_result_var_b404)))),((char*)(right_value357=string_to_string(tmp_file_246))))))), come_pop_stackframe(), __exception_result_var_b405);
        right_value355 = come_decrement_ref_count2(right_value355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value356 = come_decrement_ref_count2(right_value356, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value357 = come_decrement_ref_count2(right_value357, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value358 = come_decrement_ref_count2(right_value358, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("02transpile.c", 623, 2804),__exception_result_var_b406=memset(&info_247,0,sizeof(struct sInfo)), come_pop_stackframe(), __exception_result_var_b406);
        __dec_obj66=info_247.base_sname;
        info_247.base_sname=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 625, 2805),__exception_result_var_b407=((char*)(right_value359=__builtin_string(tmp_file_246))), come_pop_stackframe(), __exception_result_var_b407));
        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value359 = come_decrement_ref_count2(right_value359, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj67=info_247.sname;
        info_247.sname=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 626, 2806),__exception_result_var_b408=((char*)(right_value360=__builtin_string(tmp_file_246))), come_pop_stackframe(), __exception_result_var_b408));
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value360 = come_decrement_ref_count2(right_value360, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info_247.sline=1;
        info_247.err_num=0;
        __dec_obj68=info_247.clang_option;
        info_247.clang_option=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 629, 2809),__exception_result_var_b409=((char*)(right_value361=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(clang_option_231, "02transpile.c", 629, 2807)), "02transpile.c", 629, 2808))))), come_pop_stackframe(), __exception_result_var_b409));
        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value361 = come_decrement_ref_count2(right_value361, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj69=info_247.cpp_option;
        info_247.cpp_option=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 630, 2812),__exception_result_var_b410=((char*)(right_value362=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(cpp_option_232, "02transpile.c", 630, 2810)), "02transpile.c", 630, 2811))))), come_pop_stackframe(), __exception_result_var_b410));
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value362 = come_decrement_ref_count2(right_value362, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info_247.no_output_err=(_Bool)0;
        __dec_obj71=info_247.funcs;
        info_247.funcs=(struct map$2charphsFunph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 632, 2929),__exception_result_var_b412=((struct map$2charphsFunph*)(right_value369=map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)(right_value363=(struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 632, "map$2charphsFunph"))), "02transpile.c", 632, 2813)))))), come_pop_stackframe(), __exception_result_var_b412));
        come_call_finalizer3(__dec_obj71,map$2charphsFunph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value363,map$2charphsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value369,map$2charphsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj73=info_247.generics_funcs;
        info_247.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 633, 3042),__exception_result_var_b414=((struct map$2charphsGenericsFunph*)(right_value376=map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)(right_value370=(struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 633, "map$2charphsGenericsFunph"))), "02transpile.c", 633, 2956)))))), come_pop_stackframe(), __exception_result_var_b414));
        come_call_finalizer3(__dec_obj73,map$2charphsGenericsFunph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value370,map$2charphsGenericsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value376,map$2charphsGenericsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj75=info_247.classes;
        info_247.classes=(struct map$2charphsClassph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 634, 3115),__exception_result_var_b416=((struct map$2charphsClassph*)(right_value383=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)(right_value377=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 634, "map$2charphsClassph"))), "02transpile.c", 634, 3069)))))), come_pop_stackframe(), __exception_result_var_b416));
        come_call_finalizer3(__dec_obj75,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value377,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value383,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj77=info_247.modules;
        info_247.modules=(struct map$2charphsClassModuleph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 635, 3204),__exception_result_var_b418=((struct map$2charphsClassModuleph*)(right_value390=map$2charphsClassModuleph_initialize((struct map$2charphsClassModuleph*)come_increment_ref_count(((struct map$2charphsClassModuleph*)come_null_check(((struct map$2charphsClassModuleph*)(right_value384=(struct map$2charphsClassModuleph*)come_calloc(1, sizeof(struct map$2charphsClassModuleph)*(1), "02transpile.c", 635, "map$2charphsClassModuleph"))), "02transpile.c", 635, 3142)))))), come_pop_stackframe(), __exception_result_var_b418));
        come_call_finalizer3(__dec_obj77,map$2charphsClassModuleph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value384,map$2charphsClassModulephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value390,map$2charphsClassModulephp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj79=info_247.types;
        info_247.types=(struct map$2charphsTypeph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 636, 3277),__exception_result_var_b420=((struct map$2charphsTypeph*)(right_value397=map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)(right_value391=(struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 636, "map$2charphsTypeph"))), "02transpile.c", 636, 3231)))))), come_pop_stackframe(), __exception_result_var_b420));
        come_call_finalizer3(__dec_obj79,map$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value391,map$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value397,map$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj80=info_247.module;
        info_247.module=(struct sModule*)come_increment_ref_count((come_push_stackframe("02transpile.c", 637, 3305),__exception_result_var_b421=((struct sModule*)(right_value399=sModule_initialize((struct sModule*)come_increment_ref_count(((struct sModule*)come_null_check(((struct sModule*)(right_value398=(struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 637, "sModule"))), "02transpile.c", 637, 3304)))))), come_pop_stackframe(), __exception_result_var_b421));
        come_call_finalizer3(__dec_obj80,sModule_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value398,sModule_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value399,sModule_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj81=info_247.right_value_objects;
        info_247.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 638, 3361),__exception_result_var_b422=((struct list$1sRightValueObjectph*)(right_value401=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)(right_value400=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 638, "list$1sRightValueObjectph"))), "02transpile.c", 638, 3334)))))), come_pop_stackframe(), __exception_result_var_b422));
        come_call_finalizer3(__dec_obj81,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value400,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value401,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj82=info_247.stack;
        info_247.stack=(struct list$1CVALUEph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 639, 3389),__exception_result_var_b423=((struct list$1CVALUEph*)(right_value403=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)(right_value402=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 639, "list$1CVALUEph"))), "02transpile.c", 639, 3366)))))), come_pop_stackframe(), __exception_result_var_b423));
        come_call_finalizer3(__dec_obj82,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value402,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value403,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj83=info_247.gv_table;
        info_247.gv_table=(struct sVarTable*)come_increment_ref_count((come_push_stackframe("02transpile.c", 640, 3395),__exception_result_var_b424=((struct sVarTable*)(right_value405=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)come_null_check(((struct sVarTable*)(right_value404=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 640, "sVarTable"))), "02transpile.c", 640, 3394))),(_Bool)1,((void*)0)))), come_pop_stackframe(), __exception_result_var_b424));
        come_call_finalizer3(__dec_obj83,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value404,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value405,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        lv_table_283=(struct sVarTable*)come_increment_ref_count((come_push_stackframe("02transpile.c", 641, 3397),__exception_result_var_b425=((struct sVarTable*)(right_value407=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)come_null_check(((struct sVarTable*)(right_value406=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 641, "sVarTable"))), "02transpile.c", 641, 3396))),(_Bool)0,((void*)0)))), come_pop_stackframe(), __exception_result_var_b425));
        come_call_finalizer3(right_value406,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value407,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        info_247.lv_table=lv_table_283;
        __dec_obj84=info_247.generics_type_names;
        info_247.generics_type_names=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 643, 3399),__exception_result_var_b426=((struct list$1charph*)(right_value409=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value408=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 643, "list$1charph"))), "02transpile.c", 643, 3398)))))), come_pop_stackframe(), __exception_result_var_b426));
        come_call_finalizer3(__dec_obj84,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value408,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value409,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj85=info_247.method_generics_type_names;
        info_247.method_generics_type_names=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 644, 3401),__exception_result_var_b427=((struct list$1charph*)(right_value411=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value410=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 644, "list$1charph"))), "02transpile.c", 644, 3400)))))), come_pop_stackframe(), __exception_result_var_b427));
        come_call_finalizer3(__dec_obj85,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value410,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value411,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj86=info_247.generics_classes;
        info_247.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 645, 3403),__exception_result_var_b428=((struct map$2charphsClassph*)(right_value413=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)(right_value412=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 645, "map$2charphsClassph"))), "02transpile.c", 645, 3402)))))), come_pop_stackframe(), __exception_result_var_b428));
        come_call_finalizer3(__dec_obj86,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value412,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value413,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
        info_247.verbose=verbose_239;
        info_247.output_header_file=(_Bool)1;
        static int n_284=0;
        info_247.num_source_files=n_284++;
        info_247.max_source_files=(come_push_stackframe("02transpile.c", 651, 3406),__exception_result_var_b429=list$1charph_length(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(files_233, "02transpile.c", 651, 3404)), "02transpile.c", 651, 3405))), come_pop_stackframe(), __exception_result_var_b429);
        __dec_obj87=info_247.output_file_name;
        info_247.output_file_name=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 653, 3407),__exception_result_var_b430=((char*)(right_value414=__builtin_string(output_file_name_238))), come_pop_stackframe(), __exception_result_var_b430));
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value414 = come_decrement_ref_count2(right_value414, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("02transpile.c", 655,3408),init_classes(&info_247),come_pop_stackframe());
        (come_push_stackframe("02transpile.c", 657,3409),clear_tmp_file(&info_247),come_pop_stackframe());
        if(_if_conditional389=!(come_push_stackframe("02transpile.c", 659, 3410),__exception_result_var_b431=cpp(&info_247), come_pop_stackframe(), __exception_result_var_b431),        _if_conditional389) {
            (come_push_stackframe("02transpile.c", 660, 3411),__exception_result_var_b432=printf("%s %d: transpile failed\n",info_247.sname,info_247.sline), come_pop_stackframe(), __exception_result_var_b432);
            (come_push_stackframe("02transpile.c", 661,3412),exit(2),come_pop_stackframe());
        }
        __dec_obj88=info_247.original_source;
        info_247.original_source=(struct buffer*)come_increment_ref_count((come_push_stackframe("02transpile.c", 664, 3419),__exception_result_var_b435=((struct buffer*)(right_value417=string_to_buffer(((char*)come_null_check(((char*)come_null_check((come_push_stackframe("02transpile.c", 664, 3416),__exception_result_var_b434=((char*)(right_value416=string_read(((char*)come_null_check(((char*)come_null_check((come_push_stackframe("02transpile.c", 664, 3413),__exception_result_var_b433=((char*)(right_value415=xsprintf("%s",tmp_file_246))), come_pop_stackframe(), __exception_result_var_b433), "02transpile.c", 664, 3414)), "02transpile.c", 664, 3415))))), come_pop_stackframe(), __exception_result_var_b434), "02transpile.c", 664, 3417)), "02transpile.c", 664, 3418))))), come_pop_stackframe(), __exception_result_var_b435));
        come_call_finalizer3(__dec_obj88,buffer_finalize, 0, 0, 0, 0, (void*)0);
        right_value415 = come_decrement_ref_count2(right_value415, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value416 = come_decrement_ref_count2(right_value416, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value417,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj89=info_247.source;
        info_247.source=(struct buffer*)come_increment_ref_count((come_push_stackframe("02transpile.c", 665, 3426),__exception_result_var_b438=((struct buffer*)(right_value420=string_to_buffer(((char*)come_null_check(((char*)come_null_check((come_push_stackframe("02transpile.c", 665, 3423),__exception_result_var_b437=((char*)(right_value419=string_read(((char*)come_null_check(((char*)come_null_check((come_push_stackframe("02transpile.c", 665, 3420),__exception_result_var_b436=((char*)(right_value418=xsprintf("%s.i",tmp_file_246))), come_pop_stackframe(), __exception_result_var_b436), "02transpile.c", 665, 3421)), "02transpile.c", 665, 3422))))), come_pop_stackframe(), __exception_result_var_b437), "02transpile.c", 665, 3424)), "02transpile.c", 665, 3425))))), come_pop_stackframe(), __exception_result_var_b438));
        come_call_finalizer3(__dec_obj89,buffer_finalize, 0, 0, 0, 0, (void*)0);
        right_value418 = come_decrement_ref_count2(right_value418, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value419 = come_decrement_ref_count2(right_value419, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value420,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        info_247.p=((struct buffer*)come_null_check(((struct buffer*)come_null_check(info_247.source, "02transpile.c", 666, 3427)), "02transpile.c", 666, 3428))->buf;
        info_247.head=((struct buffer*)come_null_check(((struct buffer*)come_null_check(info_247.source, "02transpile.c", 667, 3429)), "02transpile.c", 667, 3430))->buf;
        if(_if_conditional390=!output_cpp_file_236,        _if_conditional390) {
            (come_push_stackframe("02transpile.c", 670, 3431),__exception_result_var_b439=transpile_v5(&info_247), come_pop_stackframe(), __exception_result_var_b439);
            if(_if_conditional391=!(come_push_stackframe("02transpile.c", 672, 3432),__exception_result_var_b440=output_header_file(&info_247), come_pop_stackframe(), __exception_result_var_b440),            _if_conditional391) {
                (come_push_stackframe("02transpile.c", 673, 3433),__exception_result_var_b441=printf("%s %d: output source file faield\n",info_247.sname,info_247.sline), come_pop_stackframe(), __exception_result_var_b441);
                (come_push_stackframe("02transpile.c", 674,3434),exit(2),come_pop_stackframe());
            }
        }
        (come_push_stackframe("02transpile.c", 678, 3435),__exception_result_var_b442=system(((char*)(right_value422=xsprintf("rm -rf \%s*",((char*)(right_value421=string_to_string(tmp_file_246))))))), come_pop_stackframe(), __exception_result_var_b442);
        right_value421 = come_decrement_ref_count2(right_value421, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value422 = come_decrement_ref_count2(right_value422, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(clang_option_231,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(cpp_option_232,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(files_233,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(object_files_234,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        output_file_name_238 = come_decrement_ref_count2(output_file_name_238, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        tmp_file_246 = come_decrement_ref_count2(tmp_file_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3((&info_247),sInfo_finalize, 1, 0, 0, 0, (void*)0);
        come_call_finalizer3(lv_table_283,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional424=(come_push_stackframe("02transpile.c", 680, 3575),__exception_result_var_b443=charp_operator_equals(((char**)come_null_check(argv, "02transpile.c", 680, 3574))[1],"new"), come_pop_stackframe(), __exception_result_var_b443)&&argc==3,        _if_conditional424) {
            if(_if_conditional425=!(come_push_stackframe("02transpile.c", 681, 3576),__exception_result_var_b444=new_project(argc,argv), come_pop_stackframe(), __exception_result_var_b444),            _if_conditional425) {
                __result160__ = (_Bool)0;
                return __result160__;
            }
        }
        else {
            if(_if_conditional426=(come_push_stackframe("02transpile.c", 685, 3578),__exception_result_var_b445=charp_operator_equals(((char**)come_null_check(argv, "02transpile.c", 685, 3577))[1],"run"), come_pop_stackframe(), __exception_result_var_b445)&&argc==2,            _if_conditional426) {
                if(_if_conditional427=!(come_push_stackframe("02transpile.c", 686, 3579),__exception_result_var_b446=run_project(argc,argv), come_pop_stackframe(), __exception_result_var_b446),                _if_conditional427) {
                    __result161__ = (_Bool)0;
                    return __result161__;
                }
            }
            else {
                if(_if_conditional428=(come_push_stackframe("02transpile.c", 690, 3581),__exception_result_var_b447=charp_operator_equals(((char**)come_null_check(argv, "02transpile.c", 690, 3580))[1],"header"), come_pop_stackframe(), __exception_result_var_b447)&&argc==2,                _if_conditional428) {
                    if(_if_conditional429=!(come_push_stackframe("02transpile.c", 691, 3582),__exception_result_var_b448=make_header_project(argc,argv), come_pop_stackframe(), __exception_result_var_b448),                    _if_conditional429) {
                        __result162__ = (_Bool)0;
                        return __result162__;
                    }
                }
                else {
                    if(_if_conditional430=(come_push_stackframe("02transpile.c", 695, 3584),__exception_result_var_b449=charp_operator_equals(((char**)come_null_check(argv, "02transpile.c", 695, 3583))[1],"compile"), come_pop_stackframe(), __exception_result_var_b449)&&argc==2,                    _if_conditional430) {
                        if(_if_conditional431=!(come_push_stackframe("02transpile.c", 696, 3585),__exception_result_var_b450=compile_project(argc,argv), come_pop_stackframe(), __exception_result_var_b450),                        _if_conditional431) {
                            __result163__ = (_Bool)0;
                            return __result163__;
                        }
                    }
                    else {
                        if(_if_conditional432=(come_push_stackframe("02transpile.c", 700, 3587),__exception_result_var_b451=charp_operator_equals(((char**)come_null_check(argv, "02transpile.c", 700, 3586))[1],"debug"), come_pop_stackframe(), __exception_result_var_b451)&&argc==2,                        _if_conditional432) {
                            if(_if_conditional433=!(come_push_stackframe("02transpile.c", 701, 3588),__exception_result_var_b452=debug_run_project(argc,argv), come_pop_stackframe(), __exception_result_var_b452),                            _if_conditional433) {
                                __result164__ = (_Bool)0;
                                return __result164__;
                            }
                        }
                        else {
                            if(_if_conditional434=(come_push_stackframe("02transpile.c", 705, 3590),__exception_result_var_b453=charp_operator_equals(((char**)come_null_check(argv, "02transpile.c", 705, 3589))[1],"clean"), come_pop_stackframe(), __exception_result_var_b453)&&argc==2,                            _if_conditional434) {
                                if(_if_conditional435=!(come_push_stackframe("02transpile.c", 706, 3591),__exception_result_var_b454=clean_project(argc,argv), come_pop_stackframe(), __exception_result_var_b454),                                _if_conditional435) {
                                    __result165__ = (_Bool)0;
                                    return __result165__;
                                }
                            }
                            else {
                                if(_if_conditional436=(come_push_stackframe("02transpile.c", 710, 3593),__exception_result_var_b455=charp_operator_equals(((char**)come_null_check(argv, "02transpile.c", 710, 3592))[1],"install"), come_pop_stackframe(), __exception_result_var_b455)&&argc>=2,                                _if_conditional436) {
                                    if(_if_conditional437=argc==2,                                    _if_conditional437) {
                                        if(_if_conditional438=!(come_push_stackframe("02transpile.c", 712, 3594),__exception_result_var_b456=install_project(argc,argv,"/usr/local"), come_pop_stackframe(), __exception_result_var_b456),                                        _if_conditional438) {
                                            __result166__ = (_Bool)0;
                                            return __result166__;
                                        }
                                    }
                                    else {
                                        if(_if_conditional439=argc>=3,                                        _if_conditional439) {
                                            if(_if_conditional440=!(come_push_stackframe("02transpile.c", 717, 3596),__exception_result_var_b457=install_project(argc,argv,((char**)come_null_check(argv, "02transpile.c", 717, 3595))[2]), come_pop_stackframe(), __exception_result_var_b457),                                            _if_conditional440) {
                                                __result167__ = (_Bool)0;
                                                return __result167__;
                                            }
                                        }
                                    }
                                }
                                else {
                                    gProgramName=((char**)come_null_check(argv, "02transpile.c", 723, 3597))[0];
                                    clang_option_287=(struct buffer*)come_increment_ref_count((come_push_stackframe("02transpile.c", 725, 3599),__exception_result_var_b458=((struct buffer*)(right_value424=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value423=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 725, "buffer"))), "02transpile.c", 725, 3598)))))), come_pop_stackframe(), __exception_result_var_b458));
                                    come_call_finalizer3(right_value423,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value424,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    cpp_option_288=(struct buffer*)come_increment_ref_count((come_push_stackframe("02transpile.c", 726, 3601),__exception_result_var_b459=((struct buffer*)(right_value426=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value425=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 726, "buffer"))), "02transpile.c", 726, 3600)))))), come_pop_stackframe(), __exception_result_var_b459));
                                    come_call_finalizer3(right_value425,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value426,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    files_289=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 727, 3603),__exception_result_var_b460=((struct list$1charph*)(right_value428=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value427=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 727, "list$1charph"))), "02transpile.c", 727, 3602)))))), come_pop_stackframe(), __exception_result_var_b460));
                                    come_call_finalizer3(right_value427,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value428,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    object_files_290=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 728, 3605),__exception_result_var_b461=((struct list$1charph*)(right_value430=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value429=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 728, "list$1charph"))), "02transpile.c", 728, 3604)))))), come_pop_stackframe(), __exception_result_var_b461));
                                    come_call_finalizer3(right_value429,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value430,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    output_object_file_291=(_Bool)0;
                                    output_cpp_file_292=(_Bool)0;
                                    output_source_file_flag_293=(_Bool)0;
                                    __dec_obj90=output_file_name_294;
                                    output_file_name_294=((void*)0);
                                    __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    verbose_295=(_Bool)0;
                                    come_debug_296=(_Bool)0;
                                    come_malloc_297=(_Bool)0;
                                    come_str_298=(_Bool)0;
                                    for(                                    i_299=1;                                    i_299<argc;                                    i_299++                                    ){
                                        if(_if_conditional441=(come_push_stackframe("02transpile.c", 738, 3607),__exception_result_var_b462=charp_operator_equals(((char**)come_null_check(argv, "02transpile.c", 738, 3606))[i_299],"-o"), come_pop_stackframe(), __exception_result_var_b462)&&i_299+1<argc,                                        _if_conditional441) {
                                            __dec_obj91=output_file_name_294;
                                            output_file_name_294=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 739, 3609),__exception_result_var_b463=((char*)(right_value431=__builtin_string(((char**)come_null_check(argv, "02transpile.c", 739, 3608))[i_299+1]))), come_pop_stackframe(), __exception_result_var_b463));
                                            __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value431 = come_decrement_ref_count2(right_value431, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            i_299++;
                                        }
                                        else {
                                            if(_if_conditional442=(come_push_stackframe("02transpile.c", 742, 3611),__exception_result_var_b464=charp_operator_equals(((char**)come_null_check(argv, "02transpile.c", 742, 3610))[i_299],"-str"), come_pop_stackframe(), __exception_result_var_b464),                                            _if_conditional442) {
                                                come_str_298=(_Bool)1;
                                            }
                                            else {
                                                if(_if_conditional443=(come_push_stackframe("02transpile.c", 745, 3613),__exception_result_var_b465=charp_operator_equals(((char**)come_null_check(argv, "02transpile.c", 745, 3612))[i_299],"-leak"), come_pop_stackframe(), __exception_result_var_b465),                                                _if_conditional443) {
                                                    come_malloc_297=(_Bool)1;
                                                }
                                                else {
                                                    if(_if_conditional444=(come_push_stackframe("02transpile.c", 748, 3615),__exception_result_var_b466=charp_operator_equals(((char**)come_null_check(argv, "02transpile.c", 748, 3614))[i_299],"-gc"), come_pop_stackframe(), __exception_result_var_b466),                                                    _if_conditional444) {
                                                        gComeGC=(_Bool)1;
                                                    }
                                                    else {
                                                        if(_if_conditional445=(come_push_stackframe("02transpile.c", 751, 3617),__exception_result_var_b467=charp_operator_equals(((char**)come_null_check(argv, "02transpile.c", 751, 3616))[i_299],"-stdc"), come_pop_stackframe(), __exception_result_var_b467),                                                        _if_conditional445) {
                                                            gComeLink=(_Bool)0;
                                                            (come_push_stackframe("02transpile.c", 753, 3620),__exception_result_var_b468=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(cpp_option_288, "02transpile.c", 753, 3618)), "02transpile.c", 753, 3619)),((char*)(right_value432=xsprintf(" -DNEO_C_STDC=1 ")))), come_pop_stackframe(), __exception_result_var_b468);
                                                            right_value432 = come_decrement_ref_count2(right_value432, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            output_source_file_flag_293=(_Bool)1;
                                                            gComeOriginalSourcePosition=(_Bool)0;
                                                        }
                                                        else {
                                                            if(_if_conditional446=(come_push_stackframe("02transpile.c", 757, 3622),__exception_result_var_b469=charp_operator_equals(((char**)come_null_check(argv, "02transpile.c", 757, 3621))[i_299],"-cg"), come_pop_stackframe(), __exception_result_var_b469),                                                            _if_conditional446) {
                                                                come_debug_296=(_Bool)1;
                                                                (come_push_stackframe("02transpile.c", 759, 3625),__exception_result_var_b470=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(clang_option_287, "02transpile.c", 759, 3623)), "02transpile.c", 759, 3624)),"-g "), come_pop_stackframe(), __exception_result_var_b470);
                                                            }
                                                            else {
                                                                if(_if_conditional447=(come_push_stackframe("02transpile.c", 761, 3627),__exception_result_var_b471=charp_operator_equals(((char**)come_null_check(argv, "02transpile.c", 761, 3626))[i_299],"-common-header"), come_pop_stackframe(), __exception_result_var_b471),                                                                _if_conditional447) {
                                                                    gCommonHeader=(_Bool)1;
                                                                }
                                                                else {
                                                                    if(_if_conditional448=(come_push_stackframe("02transpile.c", 764, 3629),__exception_result_var_b472=charp_operator_equals(((char**)come_null_check(argv, "02transpile.c", 764, 3628))[i_299],"-original-position"), come_pop_stackframe(), __exception_result_var_b472),                                                                    _if_conditional448) {
                                                                        gComeOriginalSourcePosition=(_Bool)0;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional449=(come_push_stackframe("02transpile.c", 767, 3632),__exception_result_var_b474=string_operator_equals((come_push_stackframe("02transpile.c", 767, 3631),__exception_result_var_b473=((char*)(right_value433=charp_operator_load_range_element(((char**)come_null_check(argv, "02transpile.c", 767, 3630))[i_299],0,2))), come_pop_stackframe(), __exception_result_var_b473),"-O"), come_pop_stackframe(), __exception_result_var_b474),                                                                        right_value433 = come_decrement_ref_count2(right_value433, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                                                                        _if_conditional449) {
                                                                            (come_push_stackframe("02transpile.c", 768, 3636),__exception_result_var_b475=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(clang_option_287, "02transpile.c", 768, 3633)), "02transpile.c", 768, 3634)),((char*)(right_value435=xsprintf(" \%s ",((char*)(right_value434=charp_to_string(((char**)come_null_check(argv, "02transpile.c", 768, 3635))[i_299]))))))), come_pop_stackframe(), __exception_result_var_b475);
                                                                            right_value434 = come_decrement_ref_count2(right_value434, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            right_value435 = come_decrement_ref_count2(right_value435, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            come_debug_296=(_Bool)0;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional450=(come_push_stackframe("02transpile.c", 771, 3639),__exception_result_var_b477=string_operator_equals((come_push_stackframe("02transpile.c", 771, 3638),__exception_result_var_b476=((char*)(right_value436=charp_operator_load_range_element(((char**)come_null_check(argv, "02transpile.c", 771, 3637))[i_299],0,2))), come_pop_stackframe(), __exception_result_var_b476),"-D"), come_pop_stackframe(), __exception_result_var_b477),                                                                            right_value436 = come_decrement_ref_count2(right_value436, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                                                                            _if_conditional450) {
                                                                                (come_push_stackframe("02transpile.c", 772, 3643),__exception_result_var_b478=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(cpp_option_288, "02transpile.c", 772, 3640)), "02transpile.c", 772, 3641)),((char*)(right_value438=xsprintf(" \%s ",((char*)(right_value437=charp_to_string(((char**)come_null_check(argv, "02transpile.c", 772, 3642))[i_299]))))))), come_pop_stackframe(), __exception_result_var_b478);
                                                                                right_value437 = come_decrement_ref_count2(right_value437, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                right_value438 = come_decrement_ref_count2(right_value438, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                (come_push_stackframe("02transpile.c", 773, 3647),__exception_result_var_b479=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(clang_option_287, "02transpile.c", 773, 3644)), "02transpile.c", 773, 3645)),((char*)(right_value440=xsprintf(" \%s ",((char*)(right_value439=charp_to_string(((char**)come_null_check(argv, "02transpile.c", 773, 3646))[i_299]))))))), come_pop_stackframe(), __exception_result_var_b479);
                                                                                right_value439 = come_decrement_ref_count2(right_value439, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                right_value440 = come_decrement_ref_count2(right_value440, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            }
                                                                            else {
                                                                                if(_if_conditional451=(come_push_stackframe("02transpile.c", 775, 3649),__exception_result_var_b480=charp_operator_equals(((char**)come_null_check(argv, "02transpile.c", 775, 3648))[i_299],"-g"), come_pop_stackframe(), __exception_result_var_b480),                                                                                _if_conditional451) {
                                                                                    (come_push_stackframe("02transpile.c", 776, 3652),__exception_result_var_b481=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(clang_option_287, "02transpile.c", 776, 3650)), "02transpile.c", 776, 3651)),"-g "), come_pop_stackframe(), __exception_result_var_b481);
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional452=(come_push_stackframe("02transpile.c", 778, 3654),__exception_result_var_b482=charp_operator_equals(((char**)come_null_check(argv, "02transpile.c", 778, 3653))[i_299],"-v"), come_pop_stackframe(), __exception_result_var_b482),                                                                                    _if_conditional452) {
                                                                                        (come_push_stackframe("02transpile.c", 779, 3657),__exception_result_var_b483=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(clang_option_287, "02transpile.c", 779, 3655)), "02transpile.c", 779, 3656)),"-v "), come_pop_stackframe(), __exception_result_var_b483);
                                                                                        verbose_295=(_Bool)1;
                                                                                    }
                                                                                    else {
                                                                                        if(_if_conditional453=(come_push_stackframe("02transpile.c", 782, 3659),__exception_result_var_b484=strlen(((char**)come_null_check(argv, "02transpile.c", 782, 3658))[i_299]), come_pop_stackframe(), __exception_result_var_b484)>=2&&(come_push_stackframe("02transpile.c", 782, 3662),__exception_result_var_b486=memcmp(((char**)come_null_check(argv, "02transpile.c", 782, 3660))[i_299],"-I",(come_push_stackframe("02transpile.c", 782, 3661),__exception_result_var_b485=strlen("-I"), come_pop_stackframe(), __exception_result_var_b485)), come_pop_stackframe(), __exception_result_var_b486)==0,                                                                                        _if_conditional453) {
                                                                                            (come_push_stackframe("02transpile.c", 783, 3668),__exception_result_var_b489=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(cpp_option_288, "02transpile.c", 783, 3663)), "02transpile.c", 783, 3664)),(come_push_stackframe("02transpile.c", 783, 3667),__exception_result_var_b488=((char*)(right_value442=charp_operator_add(" ",(come_push_stackframe("02transpile.c", 783, 3666),__exception_result_var_b487=((char*)(right_value441=charp_operator_add(((char**)come_null_check(argv, "02transpile.c", 783, 3665))[i_299]," "))), come_pop_stackframe(), __exception_result_var_b487)))), come_pop_stackframe(), __exception_result_var_b488)), come_pop_stackframe(), __exception_result_var_b489);
                                                                                            right_value441 = come_decrement_ref_count2(right_value441, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            right_value442 = come_decrement_ref_count2(right_value442, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                        }
                                                                                        else {
                                                                                            if(_if_conditional454=(come_push_stackframe("02transpile.c", 785, 3670),__exception_result_var_b490=charp_operator_equals(((char**)come_null_check(argv, "02transpile.c", 785, 3669))[i_299],"-gdwarf-4"), come_pop_stackframe(), __exception_result_var_b490),                                                                                            _if_conditional454) {
                                                                                                (come_push_stackframe("02transpile.c", 786, 3673),__exception_result_var_b491=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(clang_option_287, "02transpile.c", 786, 3671)), "02transpile.c", 786, 3672)),"-gdwarf-4 "), come_pop_stackframe(), __exception_result_var_b491);
                                                                                            }
                                                                                            else {
                                                                                                if(_if_conditional455=(come_push_stackframe("02transpile.c", 788, 3675),__exception_result_var_b492=charp_operator_equals(((char**)come_null_check(argv, "02transpile.c", 788, 3674))[i_299],"-s"), come_pop_stackframe(), __exception_result_var_b492)||(come_push_stackframe("02transpile.c", 788, 3677),__exception_result_var_b493=charp_operator_equals(((char**)come_null_check(argv, "02transpile.c", 788, 3676))[i_299],"-S"), come_pop_stackframe(), __exception_result_var_b493),                                                                                                _if_conditional455) {
                                                                                                    output_source_file_flag_293=(_Bool)1;
                                                                                                    gComeOriginalSourcePosition=(_Bool)0;
                                                                                                }
                                                                                                else {
                                                                                                    if(_if_conditional456=(come_push_stackframe("02transpile.c", 792, 3679),__exception_result_var_b494=charp_operator_equals(((char**)come_null_check(argv, "02transpile.c", 792, 3678))[i_299],"-c"), come_pop_stackframe(), __exception_result_var_b494),                                                                                                    _if_conditional456) {
                                                                                                        output_object_file_291=(_Bool)1;
                                                                                                    }
                                                                                                    else {
                                                                                                        if(_if_conditional457=(come_push_stackframe("02transpile.c", 795, 3681),__exception_result_var_b495=charp_operator_equals(((char**)come_null_check(argv, "02transpile.c", 795, 3680))[i_299],"-E"), come_pop_stackframe(), __exception_result_var_b495),                                                                                                        _if_conditional457) {
                                                                                                            output_cpp_file_292=(_Bool)1;
                                                                                                        }
                                                                                                        else {
                                                                                                            if(_if_conditional458=((char**)come_null_check(argv, "02transpile.c", 798, 3682))[i_299][0]==45,                                                                                                            _if_conditional458) {
                                                                                                                (come_push_stackframe("02transpile.c", 799, 3687),__exception_result_var_b497=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(clang_option_287, "02transpile.c", 799, 3683)), "02transpile.c", 799, 3684)),(come_push_stackframe("02transpile.c", 799, 3686),__exception_result_var_b496=((char*)(right_value443=charp_operator_add(((char**)come_null_check(argv, "02transpile.c", 799, 3685))[i_299]," "))), come_pop_stackframe(), __exception_result_var_b496)), come_pop_stackframe(), __exception_result_var_b497);
                                                                                                                right_value443 = come_decrement_ref_count2(right_value443, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                            }
                                                                                                            else {
                                                                                                                if(_if_conditional459=(come_push_stackframe("02transpile.c", 801, 3689),__exception_result_var_b498=strlen(((char**)come_null_check(argv, "02transpile.c", 801, 3688))[i_299]), come_pop_stackframe(), __exception_result_var_b498)>2&&(come_push_stackframe("02transpile.c", 801, 3693),__exception_result_var_b500=memcmp(((char**)come_null_check(argv, "02transpile.c", 801, 3690))[i_299]+(come_push_stackframe("02transpile.c", 801, 3692),__exception_result_var_b499=strlen(((char**)come_null_check(argv, "02transpile.c", 801, 3691))[i_299]), come_pop_stackframe(), __exception_result_var_b499)-2,".o",2), come_pop_stackframe(), __exception_result_var_b500)==0,                                                                                                                _if_conditional459) {
                                                                                                                    (come_push_stackframe("02transpile.c", 802, 3698),__exception_result_var_b502=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(object_files_290, "02transpile.c", 802, 3694)), "02transpile.c", 802, 3695)),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 802, 3697),__exception_result_var_b501=((char*)(right_value444=__builtin_string(((char**)come_null_check(argv, "02transpile.c", 802, 3696))[i_299]))), come_pop_stackframe(), __exception_result_var_b501))), come_pop_stackframe(), __exception_result_var_b502);
                                                                                                                    right_value444 = come_decrement_ref_count2(right_value444, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                }
                                                                                                                else {
                                                                                                                    (come_push_stackframe("02transpile.c", 805, 3704),__exception_result_var_b505=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(files_289, "02transpile.c", 805, 3699)), "02transpile.c", 805, 3700)),(char*)come_increment_ref_count(((char*)(right_value446=(come_push_stackframe("02transpile.c", 805, 3703),__exception_result_var_b504=string_clone((come_push_stackframe("02transpile.c", 805, 3702),__exception_result_var_b503=((char*)(right_value445=__builtin_string(((char**)come_null_check(argv, "02transpile.c", 805, 3701))[i_299]))), come_pop_stackframe(), __exception_result_var_b503)), come_pop_stackframe(), __exception_result_var_b504))))), come_pop_stackframe(), __exception_result_var_b505);
                                                                                                                    right_value445 = come_decrement_ref_count2(right_value445, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                    right_value446 = come_decrement_ref_count2(right_value446, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
                                    }
                                    gComeDebug=come_debug_296;
                                    gComeMalloc=come_malloc_297;
                                    if(come_str_298) {
                                        if(gComeGC) {
                                            (come_push_stackframe("02transpile.c", 814, 3707),__exception_result_var_b506=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(clang_option_287, "02transpile.c", 814, 3705)), "02transpile.c", 814, 3706))," -lneo-c-str-gc -lpcre "), come_pop_stackframe(), __exception_result_var_b506);
                                        }
                                        else {
                                            (come_push_stackframe("02transpile.c", 817, 3710),__exception_result_var_b507=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(clang_option_287, "02transpile.c", 817, 3708)), "02transpile.c", 817, 3709))," -lneo-c-str -lpcre "), come_pop_stackframe(), __exception_result_var_b507);
                                        }
                                    }
                                    for(                                    o2_saved_300=(struct list$1charph*)come_increment_ref_count((files_289)),it_301=(come_push_stackframe("02transpile.c", 821, 3713),__exception_result_var_b508=list$1charph_begin(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((o2_saved_300), "02transpile.c", 821, 3711)), "02transpile.c", 821, 3712))), come_pop_stackframe(), __exception_result_var_b508);                                    !(come_push_stackframe("02transpile.c", 821, 3716),__exception_result_var_b509=list$1charph_end(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((o2_saved_300), "02transpile.c", 821, 3714)), "02transpile.c", 821, 3715))), come_pop_stackframe(), __exception_result_var_b509);                                    it_301=(come_push_stackframe("02transpile.c", 821, 3719),__exception_result_var_b510=list$1charph_next(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((o2_saved_300), "02transpile.c", 821, 3717)), "02transpile.c", 821, 3718))), come_pop_stackframe(), __exception_result_var_b510)                                    ){
                                        (come_push_stackframe("02transpile.c", 824, 3720),__exception_result_var_b511=memset(&info_302,0,sizeof(struct sInfo)), come_pop_stackframe(), __exception_result_var_b511);
                                        __dec_obj92=info_302.sname;
                                        info_302.sname=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 826, 3721),__exception_result_var_b512=((char*)(right_value447=__builtin_string(it_301))), come_pop_stackframe(), __exception_result_var_b512));
                                        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value447 = come_decrement_ref_count2(right_value447, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        info_302.sline=1;
                                        info_302.err_num=0;
                                        __dec_obj93=info_302.clang_option;
                                        info_302.clang_option=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 829, 3724),__exception_result_var_b513=((char*)(right_value448=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(clang_option_287, "02transpile.c", 829, 3722)), "02transpile.c", 829, 3723))))), come_pop_stackframe(), __exception_result_var_b513));
                                        __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value448 = come_decrement_ref_count2(right_value448, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        __dec_obj94=info_302.cpp_option;
                                        info_302.cpp_option=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 830, 3727),__exception_result_var_b514=((char*)(right_value449=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(cpp_option_288, "02transpile.c", 830, 3725)), "02transpile.c", 830, 3726))))), come_pop_stackframe(), __exception_result_var_b514));
                                        __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value449 = come_decrement_ref_count2(right_value449, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        info_302.no_output_err=(_Bool)0;
                                        __dec_obj95=info_302.funcs;
                                        info_302.funcs=(struct map$2charphsFunph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 832, 3729),__exception_result_var_b515=((struct map$2charphsFunph*)(right_value451=map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)(right_value450=(struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 832, "map$2charphsFunph"))), "02transpile.c", 832, 3728)))))), come_pop_stackframe(), __exception_result_var_b515));
                                        come_call_finalizer3(__dec_obj95,map$2charphsFunph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value450,map$2charphsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value451,map$2charphsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        __dec_obj96=info_302.generics_funcs;
                                        info_302.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 833, 3731),__exception_result_var_b516=((struct map$2charphsGenericsFunph*)(right_value453=map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)(right_value452=(struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 833, "map$2charphsGenericsFunph"))), "02transpile.c", 833, 3730)))))), come_pop_stackframe(), __exception_result_var_b516));
                                        come_call_finalizer3(__dec_obj96,map$2charphsGenericsFunph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value452,map$2charphsGenericsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value453,map$2charphsGenericsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        __dec_obj97=info_302.classes;
                                        info_302.classes=(struct map$2charphsClassph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 834, 3733),__exception_result_var_b517=((struct map$2charphsClassph*)(right_value455=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)(right_value454=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 834, "map$2charphsClassph"))), "02transpile.c", 834, 3732)))))), come_pop_stackframe(), __exception_result_var_b517));
                                        come_call_finalizer3(__dec_obj97,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value454,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value455,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        __dec_obj98=info_302.modules;
                                        info_302.modules=(struct map$2charphsClassModuleph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 835, 3735),__exception_result_var_b518=((struct map$2charphsClassModuleph*)(right_value457=map$2charphsClassModuleph_initialize((struct map$2charphsClassModuleph*)come_increment_ref_count(((struct map$2charphsClassModuleph*)come_null_check(((struct map$2charphsClassModuleph*)(right_value456=(struct map$2charphsClassModuleph*)come_calloc(1, sizeof(struct map$2charphsClassModuleph)*(1), "02transpile.c", 835, "map$2charphsClassModuleph"))), "02transpile.c", 835, 3734)))))), come_pop_stackframe(), __exception_result_var_b518));
                                        come_call_finalizer3(__dec_obj98,map$2charphsClassModuleph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value456,map$2charphsClassModulephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value457,map$2charphsClassModulephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        __dec_obj99=info_302.types;
                                        info_302.types=(struct map$2charphsTypeph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 836, 3737),__exception_result_var_b519=((struct map$2charphsTypeph*)(right_value459=map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)(right_value458=(struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 836, "map$2charphsTypeph"))), "02transpile.c", 836, 3736)))))), come_pop_stackframe(), __exception_result_var_b519));
                                        come_call_finalizer3(__dec_obj99,map$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value458,map$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value459,map$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        __dec_obj100=info_302.module;
                                        info_302.module=(struct sModule*)come_increment_ref_count((come_push_stackframe("02transpile.c", 837, 3739),__exception_result_var_b520=((struct sModule*)(right_value461=sModule_initialize((struct sModule*)come_increment_ref_count(((struct sModule*)come_null_check(((struct sModule*)(right_value460=(struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 837, "sModule"))), "02transpile.c", 837, 3738)))))), come_pop_stackframe(), __exception_result_var_b520));
                                        come_call_finalizer3(__dec_obj100,sModule_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value460,sModule_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value461,sModule_finalize, 0, 1, 0, 0, __result_obj__);
                                        __dec_obj101=info_302.right_value_objects;
                                        info_302.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 838, 3741),__exception_result_var_b521=((struct list$1sRightValueObjectph*)(right_value463=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)(right_value462=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 838, "list$1sRightValueObjectph"))), "02transpile.c", 838, 3740)))))), come_pop_stackframe(), __exception_result_var_b521));
                                        come_call_finalizer3(__dec_obj101,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value462,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value463,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        __dec_obj102=info_302.stack;
                                        info_302.stack=(struct list$1CVALUEph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 839, 3743),__exception_result_var_b522=((struct list$1CVALUEph*)(right_value465=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)(right_value464=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 839, "list$1CVALUEph"))), "02transpile.c", 839, 3742)))))), come_pop_stackframe(), __exception_result_var_b522));
                                        come_call_finalizer3(__dec_obj102,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value464,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value465,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        __dec_obj103=info_302.gv_table;
                                        info_302.gv_table=(struct sVarTable*)come_increment_ref_count((come_push_stackframe("02transpile.c", 840, 3745),__exception_result_var_b523=((struct sVarTable*)(right_value467=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)come_null_check(((struct sVarTable*)(right_value466=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 840, "sVarTable"))), "02transpile.c", 840, 3744))),(_Bool)1,((void*)0)))), come_pop_stackframe(), __exception_result_var_b523));
                                        come_call_finalizer3(__dec_obj103,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value466,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value467,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                                        lv_table_303=(struct sVarTable*)come_increment_ref_count((come_push_stackframe("02transpile.c", 841, 3747),__exception_result_var_b524=((struct sVarTable*)(right_value469=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)come_null_check(((struct sVarTable*)(right_value468=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 841, "sVarTable"))), "02transpile.c", 841, 3746))),(_Bool)0,((void*)0)))), come_pop_stackframe(), __exception_result_var_b524));
                                        come_call_finalizer3(right_value468,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value469,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                                        info_302.lv_table=lv_table_303;
                                        __dec_obj104=info_302.generics_type_names;
                                        info_302.generics_type_names=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 843, 3749),__exception_result_var_b525=((struct list$1charph*)(right_value471=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value470=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 843, "list$1charph"))), "02transpile.c", 843, 3748)))))), come_pop_stackframe(), __exception_result_var_b525));
                                        come_call_finalizer3(__dec_obj104,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value470,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value471,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        __dec_obj105=info_302.method_generics_type_names;
                                        info_302.method_generics_type_names=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 844, 3751),__exception_result_var_b526=((struct list$1charph*)(right_value473=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value472=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 844, "list$1charph"))), "02transpile.c", 844, 3750)))))), come_pop_stackframe(), __exception_result_var_b526));
                                        come_call_finalizer3(__dec_obj105,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value472,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value473,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        __dec_obj106=info_302.generics_classes;
                                        info_302.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 845, 3753),__exception_result_var_b527=((struct map$2charphsClassph*)(right_value475=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)(right_value474=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 845, "map$2charphsClassph"))), "02transpile.c", 845, 3752)))))), come_pop_stackframe(), __exception_result_var_b527));
                                        come_call_finalizer3(__dec_obj106,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value474,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value475,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        info_302.verbose=verbose_295;
                                        (come_push_stackframe("02transpile.c", 848,3754),init_classes(&info_302),come_pop_stackframe());
                                        (come_push_stackframe("02transpile.c", 850,3755),clear_tmp_file(&info_302),come_pop_stackframe());
                                        if(_if_conditional462=!(come_push_stackframe("02transpile.c", 852, 3756),__exception_result_var_b528=cpp(&info_302), come_pop_stackframe(), __exception_result_var_b528),                                        _if_conditional462) {
                                            (come_push_stackframe("02transpile.c", 853, 3757),__exception_result_var_b529=printf("%s %d: transpile failed\n",info_302.sname,info_302.sline), come_pop_stackframe(), __exception_result_var_b529);
                                            (come_push_stackframe("02transpile.c", 854,3758),exit(2),come_pop_stackframe());
                                        }
                                        __dec_obj107=info_302.original_source;
                                        info_302.original_source=(struct buffer*)come_increment_ref_count((come_push_stackframe("02transpile.c", 857, 3765),__exception_result_var_b532=((struct buffer*)(right_value478=string_to_buffer(((char*)come_null_check(((char*)come_null_check((come_push_stackframe("02transpile.c", 857, 3762),__exception_result_var_b531=((char*)(right_value477=string_read(((char*)come_null_check(((char*)come_null_check((come_push_stackframe("02transpile.c", 857, 3759),__exception_result_var_b530=((char*)(right_value476=xsprintf("%s",it_301))), come_pop_stackframe(), __exception_result_var_b530), "02transpile.c", 857, 3760)), "02transpile.c", 857, 3761))))), come_pop_stackframe(), __exception_result_var_b531), "02transpile.c", 857, 3763)), "02transpile.c", 857, 3764))))), come_pop_stackframe(), __exception_result_var_b532));
                                        come_call_finalizer3(__dec_obj107,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                        right_value476 = come_decrement_ref_count2(right_value476, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value477 = come_decrement_ref_count2(right_value477, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value478,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        __dec_obj108=info_302.source;
                                        info_302.source=(struct buffer*)come_increment_ref_count((come_push_stackframe("02transpile.c", 858, 3772),__exception_result_var_b535=((struct buffer*)(right_value481=string_to_buffer(((char*)come_null_check(((char*)come_null_check((come_push_stackframe("02transpile.c", 858, 3769),__exception_result_var_b534=((char*)(right_value480=string_read(((char*)come_null_check(((char*)come_null_check((come_push_stackframe("02transpile.c", 858, 3766),__exception_result_var_b533=((char*)(right_value479=xsprintf("%s.i",it_301))), come_pop_stackframe(), __exception_result_var_b533), "02transpile.c", 858, 3767)), "02transpile.c", 858, 3768))))), come_pop_stackframe(), __exception_result_var_b534), "02transpile.c", 858, 3770)), "02transpile.c", 858, 3771))))), come_pop_stackframe(), __exception_result_var_b535));
                                        come_call_finalizer3(__dec_obj108,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                        right_value479 = come_decrement_ref_count2(right_value479, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value480 = come_decrement_ref_count2(right_value480, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value481,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        info_302.p=((struct buffer*)come_null_check(((struct buffer*)come_null_check(info_302.source, "02transpile.c", 859, 3773)), "02transpile.c", 859, 3774))->buf;
                                        info_302.head=((struct buffer*)come_null_check(((struct buffer*)come_null_check(info_302.source, "02transpile.c", 860, 3775)), "02transpile.c", 860, 3776))->buf;
                                        if(output_file_name_294) {
                                            __dec_obj109=info_302.output_file_name;
                                            info_302.output_file_name=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 863, 3777),__exception_result_var_b536=((char*)(right_value482=__builtin_string(output_file_name_294))), come_pop_stackframe(), __exception_result_var_b536));
                                            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value482 = come_decrement_ref_count2(right_value482, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        else {
                                            __dec_obj110=info_302.output_file_name;
                                            info_302.output_file_name=((void*)0);
                                            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        }
                                        if(_if_conditional464=!output_cpp_file_292,                                        _if_conditional464) {
                                            (come_push_stackframe("02transpile.c", 870, 3778),__exception_result_var_b537=transpile_v5(&info_302), come_pop_stackframe(), __exception_result_var_b537);
                                            if(_if_conditional465=!(come_push_stackframe("02transpile.c", 872, 3779),__exception_result_var_b538=output_source_file_v3(&info_302), come_pop_stackframe(), __exception_result_var_b538),                                            _if_conditional465) {
                                                (come_push_stackframe("02transpile.c", 873, 3780),__exception_result_var_b539=printf("%s %d: output source file faield\n",info_302.sname,info_302.sline), come_pop_stackframe(), __exception_result_var_b539);
                                                (come_push_stackframe("02transpile.c", 874,3781),exit(2),come_pop_stackframe());
                                            }
                                            if(_if_conditional466=info_302.err_num>0,                                            _if_conditional466) {
                                                (come_push_stackframe("02transpile.c", 878, 3782),__exception_result_var_b540=printf("transpile error. err num %d\n",info_302.err_num), come_pop_stackframe(), __exception_result_var_b540);
                                                (come_push_stackframe("02transpile.c", 880,3783),exit(2),come_pop_stackframe());
                                            }
                                            else {
                                                if(_if_conditional467=!(come_push_stackframe("02transpile.c", 883, 3784),__exception_result_var_b541=compile(&info_302,output_object_file_291,object_files_290), come_pop_stackframe(), __exception_result_var_b541),                                                _if_conditional467) {
                                                    (come_push_stackframe("02transpile.c", 884, 3785),__exception_result_var_b542=printf("%s %d: compile faield\n",info_302.sname,info_302.sline), come_pop_stackframe(), __exception_result_var_b542);
                                                    (come_push_stackframe("02transpile.c", 885,3786),exit(27),come_pop_stackframe());
                                                }
                                            }
                                        }
                                        if(output_cpp_file_292) {
                                        }
                                        else {
                                            if(_if_conditional469=info_302.err_num>0,                                            _if_conditional469) {
                                            }
                                            else {
                                                if(output_source_file_flag_293) {
                                                    (come_push_stackframe("02transpile.c", 897,3787),clear_tmp_file_without_object_file_and_ccfile(&info_302),come_pop_stackframe());
                                                }
                                                else {
                                                    (come_push_stackframe("02transpile.c", 900,3788),clear_tmp_file_without_object_file(&info_302),come_pop_stackframe());
                                                }
                                            }
                                        }
                                        come_call_finalizer3((&info_302),sInfo_finalize, 1, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(lv_table_303,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    come_call_finalizer3(o2_saved_300,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    if(_if_conditional471=!output_object_file_291&&!output_cpp_file_292&&((come_push_stackframe("02transpile.c", 904, 3791),__exception_result_var_b543=list$1charph_length(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(files_289, "02transpile.c", 904, 3789)), "02transpile.c", 904, 3790))), come_pop_stackframe(), __exception_result_var_b543)>0||(come_push_stackframe("02transpile.c", 904, 3794),__exception_result_var_b544=list$1charph_length(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(object_files_290, "02transpile.c", 904, 3792)), "02transpile.c", 904, 3793))), come_pop_stackframe(), __exception_result_var_b544)>0),                                    _if_conditional471) {
                                        (come_push_stackframe("02transpile.c", 907, 3795),__exception_result_var_b545=memset(&info_304,0,sizeof(struct sInfo)), come_pop_stackframe(), __exception_result_var_b545);
                                        __dec_obj111=info_304.sname;
                                        info_304.sname=(char*)come_increment_ref_count(((char*)(right_value483=(come_push_stackframe("02transpile.c", 909, 3806),__exception_result_var_b548=string_clone((come_push_stackframe("02transpile.c", 909, 3805),__exception_result_var_b547=list$1charphp_operator_load_element(files_289,0), come_pop_stackframe(), __exception_result_var_b547)), come_pop_stackframe(), __exception_result_var_b548))));
                                        __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value483 = come_decrement_ref_count2(right_value483, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        __dec_obj112=info_304.clang_option;
                                        info_304.clang_option=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 910, 3809),__exception_result_var_b549=((char*)(right_value484=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(clang_option_287, "02transpile.c", 910, 3807)), "02transpile.c", 910, 3808))))), come_pop_stackframe(), __exception_result_var_b549));
                                        __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value484 = come_decrement_ref_count2(right_value484, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        info_304.verbose=verbose_295;
                                        if(output_file_name_294) {
                                            __dec_obj113=info_304.output_file_name;
                                            info_304.output_file_name=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 914, 3810),__exception_result_var_b550=((char*)(right_value485=__builtin_string(output_file_name_294))), come_pop_stackframe(), __exception_result_var_b550));
                                            __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value485 = come_decrement_ref_count2(right_value485, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        else {
                                            __dec_obj114=info_304.output_file_name;
                                            info_304.output_file_name=((void*)0);
                                            __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        }
                                        __current_stack2__.info_304 = &info_304;
                                        __current_stack2__.clang_option_287 = &clang_option_287;
                                        __current_stack2__.cpp_option_288 = &cpp_option_288;
                                        __current_stack2__.files_289 = &files_289;
                                        __current_stack2__.object_files_290 = &object_files_290;
                                        __current_stack2__.output_object_file_291 = &output_object_file_291;
                                        __current_stack2__.output_cpp_file_292 = &output_cpp_file_292;
                                        __current_stack2__.output_source_file_flag_293 = &output_source_file_flag_293;
                                        __current_stack2__.output_file_name_294 = &output_file_name_294;
                                        __current_stack2__.verbose_295 = &verbose_295;
                                        __current_stack2__.come_debug_296 = &come_debug_296;
                                        __current_stack2__.come_malloc_297 = &come_malloc_297;
                                        __current_stack2__.come_str_298 = &come_str_298;
                                        __current_stack2__.argc = &argc;
                                        __current_stack2__.argv = &argv;
                                        (come_push_stackframe("02transpile.c", 925, 3814),__exception_result_var_b553=bool_expect((come_push_stackframe("02transpile.c", 920, 3811),__exception_result_var_b551=linker(&info_304,object_files_290), come_pop_stackframe(), __exception_result_var_b551),&__current_stack2__,(void*)method_block2_02transpilec), come_pop_stackframe(), __exception_result_var_b553);
                                        if(_if_conditional475=!output_cpp_file_292&&!output_source_file_flag_293,                                        _if_conditional475) {
                                            (come_push_stackframe("02transpile.c", 926,3815),clear_tmp_file(&info_304),come_pop_stackframe());
                                        }
                                        come_call_finalizer3((&info_304),sInfo_finalize, 1, 0, 0, 0, (void*)0);
                                    }
                                    come_call_finalizer3(clang_option_287,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(cpp_option_288,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(files_289,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(object_files_290,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    output_file_name_294 = come_decrement_ref_count2(output_file_name_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    __result170__ = 0;
    return __result170__;
}

static struct map$2charphsFunph* map$2charphsFunph_initialize(struct map$2charphsFunph* self){
void* __result_obj__;
void* right_value364;
void* right_value365;
void* right_value366;
int i_248;
void* right_value367;
void* right_value368;
struct list$1charp* __exception_result_var_b411;
struct list$1charp* __dec_obj70;
struct map$2charphsFunph* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
right_value364 = (void*)0;
right_value365 = (void*)0;
right_value366 = (void*)0;
memset(&i_248, 0, sizeof(int));
right_value367 = (void*)0;
right_value368 = (void*)0;
            ((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1068, 2814)), "./neo-c.h", 1068, 2815))->keys=(char**)come_increment_ref_count(((char**)(right_value364=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1068, "char*%"))));
            right_value364 = come_decrement_ref_count2(right_value364, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            ((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1069, 2816)), "./neo-c.h", 1069, 2817))->items=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value365=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(128)), "./neo-c.h", 1069, "sFun*%"))));
            come_call_finalizer3(right_value365,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            ((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1070, 2878)), "./neo-c.h", 1070, 2879))->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value366=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1070, "bool"))));
            right_value366 = come_decrement_ref_count2(right_value366, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            i_248=0;            i_248<128;            i_248++            ){
                ((_Bool*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1074, 2880)), "./neo-c.h", 1074, 2881))->item_existance, "./neo-c.h", 1074, 2882))[i_248]=(_Bool)0;
            }
            ((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1077, 2883)), "./neo-c.h", 1077, 2884))->size=128;
            ((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1078, 2885)), "./neo-c.h", 1078, 2886))->len=0;
            __dec_obj70=((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1080, 2887)), "./neo-c.h", 1080, 2888))->key_list;
            ((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1080, 2887)), "./neo-c.h", 1080, 2888))->key_list=(struct list$1charp*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 1080, 2900),__exception_result_var_b411=((struct list$1charp*)(right_value368=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)come_null_check(((struct list$1charp*)(right_value367=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1080, "list$1charp"))), "./neo-c.h", 1080, 2889)))))), come_pop_stackframe(), __exception_result_var_b411));
            come_call_finalizer3(__dec_obj70,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value367,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value368,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            ((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1082, 2901)), "./neo-c.h", 1082, 2902))->it=0;
            __result153__ = __result_obj__ = self;
            come_call_finalizer3(self,map$2charphsFunphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result153__;
            come_call_finalizer3(self,map$2charphsFunphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional306;
_Bool _if_conditional307;
_Bool _if_conditional308;
_Bool _if_conditional309;
_Bool _if_conditional310;
_Bool _if_conditional311;
_Bool _if_conditional312;
_Bool _if_conditional315;
_Bool _if_conditional316;
_Bool _if_conditional317;
_Bool _if_conditional318;
_Bool _if_conditional319;
_Bool _if_conditional320;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional306=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 0, 2818)), "sFun_finalize", 0, 2819))->mName!=((void*)0),                _if_conditional306) {
                    ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 0, 2820)), "sFun_finalize", 0, 2821))->mName = come_decrement_ref_count2(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 0, 2820)), "sFun_finalize", 0, 2821))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional307=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 1, 2822)), "sFun_finalize", 1, 2823))->mResultType!=((void*)0),                _if_conditional307) {
                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 1, 2824)), "sFun_finalize", 1, 2825))->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional308=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 2, 2826)), "sFun_finalize", 2, 2827))->mParamTypes!=((void*)0),                _if_conditional308) {
                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 2, 2828)), "sFun_finalize", 2, 2829))->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional309=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 3, 2830)), "sFun_finalize", 3, 2831))->mParamNames!=((void*)0),                _if_conditional309) {
                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 3, 2832)), "sFun_finalize", 3, 2833))->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional310=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 4, 2834)), "sFun_finalize", 4, 2835))->mParamDefaultParametors!=((void*)0),                _if_conditional310) {
                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 4, 2836)), "sFun_finalize", 4, 2837))->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional311=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 5, 2838)), "sFun_finalize", 5, 2839))->mLambdaType!=((void*)0),                _if_conditional311) {
                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 5, 2840)), "sFun_finalize", 5, 2841))->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional312=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 6, 2842)), "sFun_finalize", 6, 2843))->mBlock!=((void*)0),                _if_conditional312) {
                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 6, 2844)), "sFun_finalize", 6, 2845))->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional315=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 7, 2854)), "sFun_finalize", 7, 2855))->mSource!=((void*)0),                _if_conditional315) {
                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 7, 2856)), "sFun_finalize", 7, 2857))->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional316=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 8, 2858)), "sFun_finalize", 8, 2859))->mSourceHead!=((void*)0),                _if_conditional316) {
                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 8, 2860)), "sFun_finalize", 8, 2861))->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional317=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 9, 2862)), "sFun_finalize", 9, 2863))->mSourceHead2!=((void*)0),                _if_conditional317) {
                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 9, 2864)), "sFun_finalize", 9, 2865))->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional318=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 10, 2866)), "sFun_finalize", 10, 2867))->mSourceDefer!=((void*)0),                _if_conditional318) {
                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 10, 2868)), "sFun_finalize", 10, 2869))->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional319=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 11, 2870)), "sFun_finalize", 11, 2871))->mComeHeader!=((void*)0),                _if_conditional319) {
                    ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 11, 2872)), "sFun_finalize", 11, 2873))->mComeHeader = come_decrement_ref_count2(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 11, 2872)), "sFun_finalize", 11, 2873))->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional320=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 12, 2874)), "sFun_finalize", 12, 2875))->mDeclareSName!=((void*)0),                _if_conditional320) {
                    ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 12, 2876)), "sFun_finalize", 12, 2877))->mDeclareSName = come_decrement_ref_count2(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 12, 2876)), "sFun_finalize", 12, 2877))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional313;
_Bool _if_conditional314;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional313=self!=((void*)0)&&((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0, 2846)), "sBlock_finalize", 0, 2847))->mNodes!=((void*)0),                        _if_conditional313) {
                            come_call_finalizer3(((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0, 2848)), "sBlock_finalize", 0, 2849))->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional314=self!=((void*)0)&&((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1, 2850)), "sBlock_finalize", 1, 2851))->mVarTable!=((void*)0),                        _if_conditional314) {
                            come_call_finalizer3(((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1, 2852)), "sBlock_finalize", 1, 2853))->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 101, 2890)), "./neo-c.h", 101, 2891))->head=((void*)0);
                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 102, 2892)), "./neo-c.h", 102, 2893))->tail=((void*)0);
                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 103, 2894)), "./neo-c.h", 103, 2895))->len=0;
                __result152__ = __result_obj__ = self;
                come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
                return __result152__;
                come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_249;
_Bool _while_condtional33;
struct list_item$1charp* prev_it_250;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_249, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_250, 0, sizeof(struct list_item$1charp*));
                    it_249=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 120, 2896)), "./neo-c.h", 120, 2897))->head;
                    while(_while_condtional33=it_249!=((void*)0),                    _while_condtional33) {
                        prev_it_250=it_249;
                        it_249=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_249, "./neo-c.h", 123, 2898)), "./neo-c.h", 123, 2899))->next;
                        come_call_finalizer3(prev_it_250,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
int i_251;
_Bool _if_conditional321;
_Bool _if_conditional322;
int i_252;
_Bool _if_conditional323;
_Bool _if_conditional324;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_251, 0, sizeof(int));
memset(&i_252, 0, sizeof(int));
                for(                i_251=0;                i_251<((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1111, 2903)), "./neo-c.h", 1111, 2904))->size;                i_251++                ){
                    if(_if_conditional321=((_Bool*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1112, 2905)), "./neo-c.h", 1112, 2906))->item_existance, "./neo-c.h", 1112, 2907))[i_251],                    _if_conditional321) {
                        if(_if_conditional322=1,                        _if_conditional322) {
                            come_call_finalizer3(((struct sFun**)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1114, 2908)), "./neo-c.h", 1114, 2909))->items, "./neo-c.h", 1114, 2910))[i_251],sFun_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                (come_push_stackframe("./neo-c.h", 1118,2913),come_free((char*)((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1118, 2911)), "./neo-c.h", 1118, 2912))->items),come_pop_stackframe());
                for(                i_252=0;                i_252<((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1120, 2914)), "./neo-c.h", 1120, 2915))->size;                i_252++                ){
                    if(_if_conditional323=((_Bool*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1121, 2916)), "./neo-c.h", 1121, 2917))->item_existance, "./neo-c.h", 1121, 2918))[i_252],                    _if_conditional323) {
                        if(_if_conditional324=1,                        _if_conditional324) {
                            ((char**)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1123, 2919)), "./neo-c.h", 1123, 2920))->keys, "./neo-c.h", 1123, 2921))[i_252] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1123, 2919)), "./neo-c.h", 1123, 2920))->keys, "./neo-c.h", 1123, 2921))[i_252], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                (come_push_stackframe("./neo-c.h", 1127,2924),come_free((char*)((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1127, 2922)), "./neo-c.h", 1127, 2923))->keys),come_pop_stackframe());
                come_call_finalizer3(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1129, 2925)), "./neo-c.h", 1129, 2926))->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                ((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1131, 2927)), "./neo-c.h", 1131, 2928))->item_existance = come_decrement_ref_count2(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1131, 2927)), "./neo-c.h", 1131, 2928))->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsFunph_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
int i_253;
_Bool _if_conditional325;
_Bool _if_conditional326;
int i_254;
_Bool _if_conditional327;
_Bool _if_conditional328;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_253, 0, sizeof(int));
memset(&i_254, 0, sizeof(int));
            for(            i_253=0;            i_253<((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1111, 2930)), "./neo-c.h", 1111, 2931))->size;            i_253++            ){
                if(_if_conditional325=((_Bool*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1112, 2932)), "./neo-c.h", 1112, 2933))->item_existance, "./neo-c.h", 1112, 2934))[i_253],                _if_conditional325) {
                    if(_if_conditional326=1,                    _if_conditional326) {
                        come_call_finalizer3(((struct sFun**)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1114, 2935)), "./neo-c.h", 1114, 2936))->items, "./neo-c.h", 1114, 2937))[i_253],sFun_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            (come_push_stackframe("./neo-c.h", 1118,2940),come_free((char*)((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1118, 2938)), "./neo-c.h", 1118, 2939))->items),come_pop_stackframe());
            for(            i_254=0;            i_254<((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1120, 2941)), "./neo-c.h", 1120, 2942))->size;            i_254++            ){
                if(_if_conditional327=((_Bool*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1121, 2943)), "./neo-c.h", 1121, 2944))->item_existance, "./neo-c.h", 1121, 2945))[i_254],                _if_conditional327) {
                    if(_if_conditional328=1,                    _if_conditional328) {
                        ((char**)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1123, 2946)), "./neo-c.h", 1123, 2947))->keys, "./neo-c.h", 1123, 2948))[i_254] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1123, 2946)), "./neo-c.h", 1123, 2947))->keys, "./neo-c.h", 1123, 2948))[i_254], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            (come_push_stackframe("./neo-c.h", 1127,2951),come_free((char*)((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1127, 2949)), "./neo-c.h", 1127, 2950))->keys),come_pop_stackframe());
            come_call_finalizer3(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1129, 2952)), "./neo-c.h", 1129, 2953))->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            ((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1131, 2954)), "./neo-c.h", 1131, 2955))->item_existance = come_decrement_ref_count2(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1131, 2954)), "./neo-c.h", 1131, 2955))->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_initialize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
void* right_value371;
void* right_value372;
void* right_value373;
int i_255;
void* right_value374;
void* right_value375;
struct list$1charp* __exception_result_var_b413;
struct list$1charp* __dec_obj72;
struct map$2charphsGenericsFunph* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
right_value371 = (void*)0;
right_value372 = (void*)0;
right_value373 = (void*)0;
memset(&i_255, 0, sizeof(int));
right_value374 = (void*)0;
right_value375 = (void*)0;
            ((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1068, 2957)), "./neo-c.h", 1068, 2958))->keys=(char**)come_increment_ref_count(((char**)(right_value371=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1068, "char*%"))));
            right_value371 = come_decrement_ref_count2(right_value371, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            ((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1069, 2959)), "./neo-c.h", 1069, 2960))->items=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(right_value372=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(128)), "./neo-c.h", 1069, "sGenericsFun*%"))));
            come_call_finalizer3(right_value372,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
            ((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1070, 3001)), "./neo-c.h", 1070, 3002))->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value373=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1070, "bool"))));
            right_value373 = come_decrement_ref_count2(right_value373, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            i_255=0;            i_255<128;            i_255++            ){
                ((_Bool*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1074, 3003)), "./neo-c.h", 1074, 3004))->item_existance, "./neo-c.h", 1074, 3005))[i_255]=(_Bool)0;
            }
            ((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1077, 3006)), "./neo-c.h", 1077, 3007))->size=128;
            ((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1078, 3008)), "./neo-c.h", 1078, 3009))->len=0;
            __dec_obj72=((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1080, 3010)), "./neo-c.h", 1080, 3011))->key_list;
            ((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1080, 3010)), "./neo-c.h", 1080, 3011))->key_list=(struct list$1charp*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 1080, 3013),__exception_result_var_b413=((struct list$1charp*)(right_value375=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)come_null_check(((struct list$1charp*)(right_value374=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1080, "list$1charp"))), "./neo-c.h", 1080, 3012)))))), come_pop_stackframe(), __exception_result_var_b413));
            come_call_finalizer3(__dec_obj72,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value374,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value375,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            ((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1082, 3014)), "./neo-c.h", 1082, 3015))->it=0;
            __result154__ = __result_obj__ = self;
            come_call_finalizer3(self,map$2charphsGenericsFunphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result154__;
            come_call_finalizer3(self,map$2charphsGenericsFunphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool _if_conditional329;
_Bool _if_conditional330;
_Bool _if_conditional331;
_Bool _if_conditional332;
_Bool _if_conditional333;
_Bool _if_conditional334;
_Bool _if_conditional335;
_Bool _if_conditional336;
_Bool _if_conditional337;
_Bool _if_conditional338;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional329=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0, 2961)), "sGenericsFun_finalize", 0, 2962))->mImplType!=((void*)0),                _if_conditional329) {
                    come_call_finalizer3(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0, 2963)), "sGenericsFun_finalize", 0, 2964))->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional330=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1, 2965)), "sGenericsFun_finalize", 1, 2966))->mGenericsTypeNames!=((void*)0),                _if_conditional330) {
                    come_call_finalizer3(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1, 2967)), "sGenericsFun_finalize", 1, 2968))->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional331=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2, 2969)), "sGenericsFun_finalize", 2, 2970))->mMethodGenericsTypeNames!=((void*)0),                _if_conditional331) {
                    come_call_finalizer3(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2, 2971)), "sGenericsFun_finalize", 2, 2972))->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional332=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3, 2973)), "sGenericsFun_finalize", 3, 2974))->mName!=((void*)0),                _if_conditional332) {
                    ((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3, 2975)), "sGenericsFun_finalize", 3, 2976))->mName = come_decrement_ref_count2(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3, 2975)), "sGenericsFun_finalize", 3, 2976))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional333=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4, 2977)), "sGenericsFun_finalize", 4, 2978))->mResultType!=((void*)0),                _if_conditional333) {
                    come_call_finalizer3(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4, 2979)), "sGenericsFun_finalize", 4, 2980))->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional334=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5, 2981)), "sGenericsFun_finalize", 5, 2982))->mParamTypes!=((void*)0),                _if_conditional334) {
                    come_call_finalizer3(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5, 2983)), "sGenericsFun_finalize", 5, 2984))->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional335=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6, 2985)), "sGenericsFun_finalize", 6, 2986))->mParamNames!=((void*)0),                _if_conditional335) {
                    come_call_finalizer3(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6, 2987)), "sGenericsFun_finalize", 6, 2988))->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional336=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7, 2989)), "sGenericsFun_finalize", 7, 2990))->mParamDefaultParametors!=((void*)0),                _if_conditional336) {
                    come_call_finalizer3(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7, 2991)), "sGenericsFun_finalize", 7, 2992))->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional337=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8, 2993)), "sGenericsFun_finalize", 8, 2994))->mBlock!=((void*)0),                _if_conditional337) {
                    ((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8, 2995)), "sGenericsFun_finalize", 8, 2996))->mBlock = come_decrement_ref_count2(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8, 2995)), "sGenericsFun_finalize", 8, 2996))->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional338=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 9, 2997)), "sGenericsFun_finalize", 9, 2998))->mGenericsSName!=((void*)0),                _if_conditional338) {
                    ((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 9, 2999)), "sGenericsFun_finalize", 9, 3000))->mGenericsSName = come_decrement_ref_count2(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 9, 2999)), "sGenericsFun_finalize", 9, 3000))->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void map$2charphsGenericsFunphp_finalize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
int i_256;
_Bool _if_conditional339;
_Bool _if_conditional340;
int i_257;
_Bool _if_conditional341;
_Bool _if_conditional342;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_256, 0, sizeof(int));
memset(&i_257, 0, sizeof(int));
                for(                i_256=0;                i_256<((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1111, 3016)), "./neo-c.h", 1111, 3017))->size;                i_256++                ){
                    if(_if_conditional339=((_Bool*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1112, 3018)), "./neo-c.h", 1112, 3019))->item_existance, "./neo-c.h", 1112, 3020))[i_256],                    _if_conditional339) {
                        if(_if_conditional340=1,                        _if_conditional340) {
                            come_call_finalizer3(((struct sGenericsFun**)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1114, 3021)), "./neo-c.h", 1114, 3022))->items, "./neo-c.h", 1114, 3023))[i_256],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                (come_push_stackframe("./neo-c.h", 1118,3026),come_free((char*)((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1118, 3024)), "./neo-c.h", 1118, 3025))->items),come_pop_stackframe());
                for(                i_257=0;                i_257<((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1120, 3027)), "./neo-c.h", 1120, 3028))->size;                i_257++                ){
                    if(_if_conditional341=((_Bool*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1121, 3029)), "./neo-c.h", 1121, 3030))->item_existance, "./neo-c.h", 1121, 3031))[i_257],                    _if_conditional341) {
                        if(_if_conditional342=1,                        _if_conditional342) {
                            ((char**)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1123, 3032)), "./neo-c.h", 1123, 3033))->keys, "./neo-c.h", 1123, 3034))[i_257] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1123, 3032)), "./neo-c.h", 1123, 3033))->keys, "./neo-c.h", 1123, 3034))[i_257], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                (come_push_stackframe("./neo-c.h", 1127,3037),come_free((char*)((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1127, 3035)), "./neo-c.h", 1127, 3036))->keys),come_pop_stackframe());
                come_call_finalizer3(((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1129, 3038)), "./neo-c.h", 1129, 3039))->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                ((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1131, 3040)), "./neo-c.h", 1131, 3041))->item_existance = come_decrement_ref_count2(((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1131, 3040)), "./neo-c.h", 1131, 3041))->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsGenericsFunph_finalize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
int i_258;
_Bool _if_conditional343;
_Bool _if_conditional344;
int i_259;
_Bool _if_conditional345;
_Bool _if_conditional346;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_258, 0, sizeof(int));
memset(&i_259, 0, sizeof(int));
            for(            i_258=0;            i_258<((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1111, 3043)), "./neo-c.h", 1111, 3044))->size;            i_258++            ){
                if(_if_conditional343=((_Bool*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1112, 3045)), "./neo-c.h", 1112, 3046))->item_existance, "./neo-c.h", 1112, 3047))[i_258],                _if_conditional343) {
                    if(_if_conditional344=1,                    _if_conditional344) {
                        come_call_finalizer3(((struct sGenericsFun**)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1114, 3048)), "./neo-c.h", 1114, 3049))->items, "./neo-c.h", 1114, 3050))[i_258],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            (come_push_stackframe("./neo-c.h", 1118,3053),come_free((char*)((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1118, 3051)), "./neo-c.h", 1118, 3052))->items),come_pop_stackframe());
            for(            i_259=0;            i_259<((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1120, 3054)), "./neo-c.h", 1120, 3055))->size;            i_259++            ){
                if(_if_conditional345=((_Bool*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1121, 3056)), "./neo-c.h", 1121, 3057))->item_existance, "./neo-c.h", 1121, 3058))[i_259],                _if_conditional345) {
                    if(_if_conditional346=1,                    _if_conditional346) {
                        ((char**)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1123, 3059)), "./neo-c.h", 1123, 3060))->keys, "./neo-c.h", 1123, 3061))[i_259] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1123, 3059)), "./neo-c.h", 1123, 3060))->keys, "./neo-c.h", 1123, 3061))[i_259], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            (come_push_stackframe("./neo-c.h", 1127,3064),come_free((char*)((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1127, 3062)), "./neo-c.h", 1127, 3063))->keys),come_pop_stackframe());
            come_call_finalizer3(((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1129, 3065)), "./neo-c.h", 1129, 3066))->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            ((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1131, 3067)), "./neo-c.h", 1131, 3068))->item_existance = come_decrement_ref_count2(((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1131, 3067)), "./neo-c.h", 1131, 3068))->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassph_initialize(struct map$2charphsClassph* self){
void* __result_obj__;
void* right_value378;
void* right_value379;
void* right_value380;
int i_260;
void* right_value381;
void* right_value382;
struct list$1charp* __exception_result_var_b415;
struct list$1charp* __dec_obj74;
struct map$2charphsClassph* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
right_value378 = (void*)0;
right_value379 = (void*)0;
right_value380 = (void*)0;
memset(&i_260, 0, sizeof(int));
right_value381 = (void*)0;
right_value382 = (void*)0;
            ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1068, 3070)), "./neo-c.h", 1068, 3071))->keys=(char**)come_increment_ref_count(((char**)(right_value378=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1068, "char*%"))));
            right_value378 = come_decrement_ref_count2(right_value378, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1069, 3072)), "./neo-c.h", 1069, 3073))->items=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value379=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(128)), "./neo-c.h", 1069, "sClass*%"))));
            come_call_finalizer3(right_value379,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1070, 3074)), "./neo-c.h", 1070, 3075))->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value380=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1070, "bool"))));
            right_value380 = come_decrement_ref_count2(right_value380, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            i_260=0;            i_260<128;            i_260++            ){
                ((_Bool*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1074, 3076)), "./neo-c.h", 1074, 3077))->item_existance, "./neo-c.h", 1074, 3078))[i_260]=(_Bool)0;
            }
            ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1077, 3079)), "./neo-c.h", 1077, 3080))->size=128;
            ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1078, 3081)), "./neo-c.h", 1078, 3082))->len=0;
            __dec_obj74=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1080, 3083)), "./neo-c.h", 1080, 3084))->key_list;
            ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1080, 3083)), "./neo-c.h", 1080, 3084))->key_list=(struct list$1charp*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 1080, 3086),__exception_result_var_b415=((struct list$1charp*)(right_value382=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)come_null_check(((struct list$1charp*)(right_value381=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1080, "list$1charp"))), "./neo-c.h", 1080, 3085)))))), come_pop_stackframe(), __exception_result_var_b415));
            come_call_finalizer3(__dec_obj74,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value381,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value382,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1082, 3087)), "./neo-c.h", 1082, 3088))->it=0;
            __result155__ = __result_obj__ = self;
            come_call_finalizer3(self,map$2charphsClassphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result155__;
            come_call_finalizer3(self,map$2charphsClassphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassphp_finalize(struct map$2charphsClassph* self){
void* __result_obj__;
int i_261;
_Bool _if_conditional347;
_Bool _if_conditional348;
int i_262;
_Bool _if_conditional349;
_Bool _if_conditional350;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_261, 0, sizeof(int));
memset(&i_262, 0, sizeof(int));
                for(                i_261=0;                i_261<((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1111, 3089)), "./neo-c.h", 1111, 3090))->size;                i_261++                ){
                    if(_if_conditional347=((_Bool*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1112, 3091)), "./neo-c.h", 1112, 3092))->item_existance, "./neo-c.h", 1112, 3093))[i_261],                    _if_conditional347) {
                        if(_if_conditional348=1,                        _if_conditional348) {
                            come_call_finalizer3(((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1114, 3094)), "./neo-c.h", 1114, 3095))->items, "./neo-c.h", 1114, 3096))[i_261],sClass_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                (come_push_stackframe("./neo-c.h", 1118,3099),come_free((char*)((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1118, 3097)), "./neo-c.h", 1118, 3098))->items),come_pop_stackframe());
                for(                i_262=0;                i_262<((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1120, 3100)), "./neo-c.h", 1120, 3101))->size;                i_262++                ){
                    if(_if_conditional349=((_Bool*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1121, 3102)), "./neo-c.h", 1121, 3103))->item_existance, "./neo-c.h", 1121, 3104))[i_262],                    _if_conditional349) {
                        if(_if_conditional350=1,                        _if_conditional350) {
                            ((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1123, 3105)), "./neo-c.h", 1123, 3106))->keys, "./neo-c.h", 1123, 3107))[i_262] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1123, 3105)), "./neo-c.h", 1123, 3106))->keys, "./neo-c.h", 1123, 3107))[i_262], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                (come_push_stackframe("./neo-c.h", 1127,3110),come_free((char*)((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1127, 3108)), "./neo-c.h", 1127, 3109))->keys),come_pop_stackframe());
                come_call_finalizer3(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1129, 3111)), "./neo-c.h", 1129, 3112))->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1131, 3113)), "./neo-c.h", 1131, 3114))->item_existance = come_decrement_ref_count2(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1131, 3113)), "./neo-c.h", 1131, 3114))->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsClassph_finalize(struct map$2charphsClassph* self){
void* __result_obj__;
int i_263;
_Bool _if_conditional351;
_Bool _if_conditional352;
int i_264;
_Bool _if_conditional353;
_Bool _if_conditional354;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_263, 0, sizeof(int));
memset(&i_264, 0, sizeof(int));
            for(            i_263=0;            i_263<((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1111, 3116)), "./neo-c.h", 1111, 3117))->size;            i_263++            ){
                if(_if_conditional351=((_Bool*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1112, 3118)), "./neo-c.h", 1112, 3119))->item_existance, "./neo-c.h", 1112, 3120))[i_263],                _if_conditional351) {
                    if(_if_conditional352=1,                    _if_conditional352) {
                        come_call_finalizer3(((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1114, 3121)), "./neo-c.h", 1114, 3122))->items, "./neo-c.h", 1114, 3123))[i_263],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            (come_push_stackframe("./neo-c.h", 1118,3126),come_free((char*)((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1118, 3124)), "./neo-c.h", 1118, 3125))->items),come_pop_stackframe());
            for(            i_264=0;            i_264<((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1120, 3127)), "./neo-c.h", 1120, 3128))->size;            i_264++            ){
                if(_if_conditional353=((_Bool*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1121, 3129)), "./neo-c.h", 1121, 3130))->item_existance, "./neo-c.h", 1121, 3131))[i_264],                _if_conditional353) {
                    if(_if_conditional354=1,                    _if_conditional354) {
                        ((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1123, 3132)), "./neo-c.h", 1123, 3133))->keys, "./neo-c.h", 1123, 3134))[i_264] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1123, 3132)), "./neo-c.h", 1123, 3133))->keys, "./neo-c.h", 1123, 3134))[i_264], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            (come_push_stackframe("./neo-c.h", 1127,3137),come_free((char*)((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1127, 3135)), "./neo-c.h", 1127, 3136))->keys),come_pop_stackframe());
            come_call_finalizer3(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1129, 3138)), "./neo-c.h", 1129, 3139))->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1131, 3140)), "./neo-c.h", 1131, 3141))->item_existance = come_decrement_ref_count2(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1131, 3140)), "./neo-c.h", 1131, 3141))->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassModuleph* map$2charphsClassModuleph_initialize(struct map$2charphsClassModuleph* self){
void* __result_obj__;
void* right_value385;
void* right_value386;
void* right_value387;
int i_265;
void* right_value388;
void* right_value389;
struct list$1charp* __exception_result_var_b417;
struct list$1charp* __dec_obj76;
struct map$2charphsClassModuleph* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
right_value385 = (void*)0;
right_value386 = (void*)0;
right_value387 = (void*)0;
memset(&i_265, 0, sizeof(int));
right_value388 = (void*)0;
right_value389 = (void*)0;
            ((struct map$2charphsClassModuleph*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(self, "./neo-c.h", 1068, 3143)), "./neo-c.h", 1068, 3144))->keys=(char**)come_increment_ref_count(((char**)(right_value385=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1068, "char*%"))));
            right_value385 = come_decrement_ref_count2(right_value385, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            ((struct map$2charphsClassModuleph*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(self, "./neo-c.h", 1069, 3145)), "./neo-c.h", 1069, 3146))->items=(struct sClassModule**)come_increment_ref_count(((struct sClassModule**)(right_value386=(struct sClassModule**)come_calloc(1, sizeof(struct sClassModule*)*(1*(128)), "./neo-c.h", 1069, "sClassModule*%"))));
            come_call_finalizer3(right_value386,sClassModule_finalize, 0, 1, 0, 0, __result_obj__);
            ((struct map$2charphsClassModuleph*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(self, "./neo-c.h", 1070, 3163)), "./neo-c.h", 1070, 3164))->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value387=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1070, "bool"))));
            right_value387 = come_decrement_ref_count2(right_value387, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            i_265=0;            i_265<128;            i_265++            ){
                ((_Bool*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(self, "./neo-c.h", 1074, 3165)), "./neo-c.h", 1074, 3166))->item_existance, "./neo-c.h", 1074, 3167))[i_265]=(_Bool)0;
            }
            ((struct map$2charphsClassModuleph*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(self, "./neo-c.h", 1077, 3168)), "./neo-c.h", 1077, 3169))->size=128;
            ((struct map$2charphsClassModuleph*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(self, "./neo-c.h", 1078, 3170)), "./neo-c.h", 1078, 3171))->len=0;
            __dec_obj76=((struct map$2charphsClassModuleph*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(self, "./neo-c.h", 1080, 3172)), "./neo-c.h", 1080, 3173))->key_list;
            ((struct map$2charphsClassModuleph*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(self, "./neo-c.h", 1080, 3172)), "./neo-c.h", 1080, 3173))->key_list=(struct list$1charp*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 1080, 3175),__exception_result_var_b417=((struct list$1charp*)(right_value389=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)come_null_check(((struct list$1charp*)(right_value388=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1080, "list$1charp"))), "./neo-c.h", 1080, 3174)))))), come_pop_stackframe(), __exception_result_var_b417));
            come_call_finalizer3(__dec_obj76,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value388,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value389,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            ((struct map$2charphsClassModuleph*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(self, "./neo-c.h", 1082, 3176)), "./neo-c.h", 1082, 3177))->it=0;
            __result156__ = __result_obj__ = self;
            come_call_finalizer3(self,map$2charphsClassModulephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result156__;
            come_call_finalizer3(self,map$2charphsClassModulephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void sClassModule_finalize(struct sClassModule* self){
void* __result_obj__;
_Bool _if_conditional355;
_Bool _if_conditional356;
_Bool _if_conditional357;
_Bool _if_conditional358;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional355=self!=((void*)0)&&((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "sClassModule_finalize", 0, 3147)), "sClassModule_finalize", 0, 3148))->mName!=((void*)0),                _if_conditional355) {
                    ((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "sClassModule_finalize", 0, 3149)), "sClassModule_finalize", 0, 3150))->mName = come_decrement_ref_count2(((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "sClassModule_finalize", 0, 3149)), "sClassModule_finalize", 0, 3150))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional356=self!=((void*)0)&&((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "sClassModule_finalize", 1, 3151)), "sClassModule_finalize", 1, 3152))->mText!=((void*)0),                _if_conditional356) {
                    ((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "sClassModule_finalize", 1, 3153)), "sClassModule_finalize", 1, 3154))->mText = come_decrement_ref_count2(((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "sClassModule_finalize", 1, 3153)), "sClassModule_finalize", 1, 3154))->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional357=self!=((void*)0)&&((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "sClassModule_finalize", 2, 3155)), "sClassModule_finalize", 2, 3156))->mParams!=((void*)0),                _if_conditional357) {
                    come_call_finalizer3(((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "sClassModule_finalize", 2, 3157)), "sClassModule_finalize", 2, 3158))->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional358=self!=((void*)0)&&((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "sClassModule_finalize", 3, 3159)), "sClassModule_finalize", 3, 3160))->mSName!=((void*)0),                _if_conditional358) {
                    ((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "sClassModule_finalize", 3, 3161)), "sClassModule_finalize", 3, 3162))->mSName = come_decrement_ref_count2(((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "sClassModule_finalize", 3, 3161)), "sClassModule_finalize", 3, 3162))->mSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void map$2charphsClassModulephp_finalize(struct map$2charphsClassModuleph* self){
void* __result_obj__;
int i_266;
_Bool _if_conditional359;
_Bool _if_conditional360;
int i_267;
_Bool _if_conditional361;
_Bool _if_conditional362;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_266, 0, sizeof(int));
memset(&i_267, 0, sizeof(int));
                for(                i_266=0;                i_266<((struct map$2charphsClassModuleph*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(self, "./neo-c.h", 1111, 3178)), "./neo-c.h", 1111, 3179))->size;                i_266++                ){
                    if(_if_conditional359=((_Bool*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(self, "./neo-c.h", 1112, 3180)), "./neo-c.h", 1112, 3181))->item_existance, "./neo-c.h", 1112, 3182))[i_266],                    _if_conditional359) {
                        if(_if_conditional360=1,                        _if_conditional360) {
                            come_call_finalizer3(((struct sClassModule**)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(self, "./neo-c.h", 1114, 3183)), "./neo-c.h", 1114, 3184))->items, "./neo-c.h", 1114, 3185))[i_266],sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                (come_push_stackframe("./neo-c.h", 1118,3188),come_free((char*)((struct map$2charphsClassModuleph*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(self, "./neo-c.h", 1118, 3186)), "./neo-c.h", 1118, 3187))->items),come_pop_stackframe());
                for(                i_267=0;                i_267<((struct map$2charphsClassModuleph*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(self, "./neo-c.h", 1120, 3189)), "./neo-c.h", 1120, 3190))->size;                i_267++                ){
                    if(_if_conditional361=((_Bool*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(self, "./neo-c.h", 1121, 3191)), "./neo-c.h", 1121, 3192))->item_existance, "./neo-c.h", 1121, 3193))[i_267],                    _if_conditional361) {
                        if(_if_conditional362=1,                        _if_conditional362) {
                            ((char**)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(self, "./neo-c.h", 1123, 3194)), "./neo-c.h", 1123, 3195))->keys, "./neo-c.h", 1123, 3196))[i_267] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(self, "./neo-c.h", 1123, 3194)), "./neo-c.h", 1123, 3195))->keys, "./neo-c.h", 1123, 3196))[i_267], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                (come_push_stackframe("./neo-c.h", 1127,3199),come_free((char*)((struct map$2charphsClassModuleph*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(self, "./neo-c.h", 1127, 3197)), "./neo-c.h", 1127, 3198))->keys),come_pop_stackframe());
                come_call_finalizer3(((struct map$2charphsClassModuleph*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(self, "./neo-c.h", 1129, 3200)), "./neo-c.h", 1129, 3201))->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                ((struct map$2charphsClassModuleph*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(self, "./neo-c.h", 1131, 3202)), "./neo-c.h", 1131, 3203))->item_existance = come_decrement_ref_count2(((struct map$2charphsClassModuleph*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(self, "./neo-c.h", 1131, 3202)), "./neo-c.h", 1131, 3203))->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsClassModuleph_finalize(struct map$2charphsClassModuleph* self){
void* __result_obj__;
int i_268;
_Bool _if_conditional363;
_Bool _if_conditional364;
int i_269;
_Bool _if_conditional365;
_Bool _if_conditional366;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_268, 0, sizeof(int));
memset(&i_269, 0, sizeof(int));
            for(            i_268=0;            i_268<((struct map$2charphsClassModuleph*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(self, "./neo-c.h", 1111, 3205)), "./neo-c.h", 1111, 3206))->size;            i_268++            ){
                if(_if_conditional363=((_Bool*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(self, "./neo-c.h", 1112, 3207)), "./neo-c.h", 1112, 3208))->item_existance, "./neo-c.h", 1112, 3209))[i_268],                _if_conditional363) {
                    if(_if_conditional364=1,                    _if_conditional364) {
                        come_call_finalizer3(((struct sClassModule**)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(self, "./neo-c.h", 1114, 3210)), "./neo-c.h", 1114, 3211))->items, "./neo-c.h", 1114, 3212))[i_268],sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            (come_push_stackframe("./neo-c.h", 1118,3215),come_free((char*)((struct map$2charphsClassModuleph*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(self, "./neo-c.h", 1118, 3213)), "./neo-c.h", 1118, 3214))->items),come_pop_stackframe());
            for(            i_269=0;            i_269<((struct map$2charphsClassModuleph*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(self, "./neo-c.h", 1120, 3216)), "./neo-c.h", 1120, 3217))->size;            i_269++            ){
                if(_if_conditional365=((_Bool*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(self, "./neo-c.h", 1121, 3218)), "./neo-c.h", 1121, 3219))->item_existance, "./neo-c.h", 1121, 3220))[i_269],                _if_conditional365) {
                    if(_if_conditional366=1,                    _if_conditional366) {
                        ((char**)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(self, "./neo-c.h", 1123, 3221)), "./neo-c.h", 1123, 3222))->keys, "./neo-c.h", 1123, 3223))[i_269] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(self, "./neo-c.h", 1123, 3221)), "./neo-c.h", 1123, 3222))->keys, "./neo-c.h", 1123, 3223))[i_269], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            (come_push_stackframe("./neo-c.h", 1127,3226),come_free((char*)((struct map$2charphsClassModuleph*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(self, "./neo-c.h", 1127, 3224)), "./neo-c.h", 1127, 3225))->keys),come_pop_stackframe());
            come_call_finalizer3(((struct map$2charphsClassModuleph*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(self, "./neo-c.h", 1129, 3227)), "./neo-c.h", 1129, 3228))->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            ((struct map$2charphsClassModuleph*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(self, "./neo-c.h", 1131, 3229)), "./neo-c.h", 1131, 3230))->item_existance = come_decrement_ref_count2(((struct map$2charphsClassModuleph*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(self, "./neo-c.h", 1131, 3229)), "./neo-c.h", 1131, 3230))->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsTypeph* map$2charphsTypeph_initialize(struct map$2charphsTypeph* self){
void* __result_obj__;
void* right_value392;
void* right_value393;
void* right_value394;
int i_270;
void* right_value395;
void* right_value396;
struct list$1charp* __exception_result_var_b419;
struct list$1charp* __dec_obj78;
struct map$2charphsTypeph* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
right_value392 = (void*)0;
right_value393 = (void*)0;
right_value394 = (void*)0;
memset(&i_270, 0, sizeof(int));
right_value395 = (void*)0;
right_value396 = (void*)0;
            ((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1068, 3232)), "./neo-c.h", 1068, 3233))->keys=(char**)come_increment_ref_count(((char**)(right_value392=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1068, "char*%"))));
            right_value392 = come_decrement_ref_count2(right_value392, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            ((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1069, 3234)), "./neo-c.h", 1069, 3235))->items=(struct sType**)come_increment_ref_count(((struct sType**)(right_value393=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(128)), "./neo-c.h", 1069, "sType*%"))));
            come_call_finalizer3(right_value393,sType_finalize, 0, 1, 0, 0, __result_obj__);
            ((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1070, 3236)), "./neo-c.h", 1070, 3237))->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value394=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1070, "bool"))));
            right_value394 = come_decrement_ref_count2(right_value394, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            i_270=0;            i_270<128;            i_270++            ){
                ((_Bool*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1074, 3238)), "./neo-c.h", 1074, 3239))->item_existance, "./neo-c.h", 1074, 3240))[i_270]=(_Bool)0;
            }
            ((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1077, 3241)), "./neo-c.h", 1077, 3242))->size=128;
            ((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1078, 3243)), "./neo-c.h", 1078, 3244))->len=0;
            __dec_obj78=((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1080, 3245)), "./neo-c.h", 1080, 3246))->key_list;
            ((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1080, 3245)), "./neo-c.h", 1080, 3246))->key_list=(struct list$1charp*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 1080, 3248),__exception_result_var_b419=((struct list$1charp*)(right_value396=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)come_null_check(((struct list$1charp*)(right_value395=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1080, "list$1charp"))), "./neo-c.h", 1080, 3247)))))), come_pop_stackframe(), __exception_result_var_b419));
            come_call_finalizer3(__dec_obj78,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value395,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value396,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            ((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1082, 3249)), "./neo-c.h", 1082, 3250))->it=0;
            __result157__ = __result_obj__ = self;
            come_call_finalizer3(self,map$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result157__;
            come_call_finalizer3(self,map$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsTypephp_finalize(struct map$2charphsTypeph* self){
void* __result_obj__;
int i_271;
_Bool _if_conditional367;
_Bool _if_conditional368;
int i_272;
_Bool _if_conditional369;
_Bool _if_conditional370;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_271, 0, sizeof(int));
memset(&i_272, 0, sizeof(int));
                for(                i_271=0;                i_271<((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1111, 3251)), "./neo-c.h", 1111, 3252))->size;                i_271++                ){
                    if(_if_conditional367=((_Bool*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1112, 3253)), "./neo-c.h", 1112, 3254))->item_existance, "./neo-c.h", 1112, 3255))[i_271],                    _if_conditional367) {
                        if(_if_conditional368=1,                        _if_conditional368) {
                            come_call_finalizer3(((struct sType**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1114, 3256)), "./neo-c.h", 1114, 3257))->items, "./neo-c.h", 1114, 3258))[i_271],sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                (come_push_stackframe("./neo-c.h", 1118,3261),come_free((char*)((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1118, 3259)), "./neo-c.h", 1118, 3260))->items),come_pop_stackframe());
                for(                i_272=0;                i_272<((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1120, 3262)), "./neo-c.h", 1120, 3263))->size;                i_272++                ){
                    if(_if_conditional369=((_Bool*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1121, 3264)), "./neo-c.h", 1121, 3265))->item_existance, "./neo-c.h", 1121, 3266))[i_272],                    _if_conditional369) {
                        if(_if_conditional370=1,                        _if_conditional370) {
                            ((char**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1123, 3267)), "./neo-c.h", 1123, 3268))->keys, "./neo-c.h", 1123, 3269))[i_272] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1123, 3267)), "./neo-c.h", 1123, 3268))->keys, "./neo-c.h", 1123, 3269))[i_272], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                (come_push_stackframe("./neo-c.h", 1127,3272),come_free((char*)((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1127, 3270)), "./neo-c.h", 1127, 3271))->keys),come_pop_stackframe());
                come_call_finalizer3(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1129, 3273)), "./neo-c.h", 1129, 3274))->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                ((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1131, 3275)), "./neo-c.h", 1131, 3276))->item_existance = come_decrement_ref_count2(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1131, 3275)), "./neo-c.h", 1131, 3276))->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsTypeph_finalize(struct map$2charphsTypeph* self){
void* __result_obj__;
int i_273;
_Bool _if_conditional371;
_Bool _if_conditional372;
int i_274;
_Bool _if_conditional373;
_Bool _if_conditional374;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_273, 0, sizeof(int));
memset(&i_274, 0, sizeof(int));
            for(            i_273=0;            i_273<((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1111, 3278)), "./neo-c.h", 1111, 3279))->size;            i_273++            ){
                if(_if_conditional371=((_Bool*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1112, 3280)), "./neo-c.h", 1112, 3281))->item_existance, "./neo-c.h", 1112, 3282))[i_273],                _if_conditional371) {
                    if(_if_conditional372=1,                    _if_conditional372) {
                        come_call_finalizer3(((struct sType**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1114, 3283)), "./neo-c.h", 1114, 3284))->items, "./neo-c.h", 1114, 3285))[i_273],sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            (come_push_stackframe("./neo-c.h", 1118,3288),come_free((char*)((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1118, 3286)), "./neo-c.h", 1118, 3287))->items),come_pop_stackframe());
            for(            i_274=0;            i_274<((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1120, 3289)), "./neo-c.h", 1120, 3290))->size;            i_274++            ){
                if(_if_conditional373=((_Bool*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1121, 3291)), "./neo-c.h", 1121, 3292))->item_existance, "./neo-c.h", 1121, 3293))[i_274],                _if_conditional373) {
                    if(_if_conditional374=1,                    _if_conditional374) {
                        ((char**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1123, 3294)), "./neo-c.h", 1123, 3295))->keys, "./neo-c.h", 1123, 3296))[i_274] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1123, 3294)), "./neo-c.h", 1123, 3295))->keys, "./neo-c.h", 1123, 3296))[i_274], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            (come_push_stackframe("./neo-c.h", 1127,3299),come_free((char*)((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1127, 3297)), "./neo-c.h", 1127, 3298))->keys),come_pop_stackframe());
            come_call_finalizer3(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1129, 3300)), "./neo-c.h", 1129, 3301))->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            ((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1131, 3302)), "./neo-c.h", 1131, 3303))->item_existance = come_decrement_ref_count2(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1131, 3302)), "./neo-c.h", 1131, 3303))->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sModule_finalize(struct sModule* self){
void* __result_obj__;
_Bool _if_conditional375;
_Bool _if_conditional376;
_Bool _if_conditional377;
_Bool _if_conditional378;
_Bool _if_conditional379;
_Bool _if_conditional380;
_Bool _if_conditional381;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional375=self!=((void*)0)&&((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "sModule_finalize", 0, 3306)), "sModule_finalize", 0, 3307))->mSourceHead!=((void*)0),            _if_conditional375) {
                come_call_finalizer3(((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "sModule_finalize", 0, 3308)), "sModule_finalize", 0, 3309))->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional376=self!=((void*)0)&&((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "sModule_finalize", 1, 3310)), "sModule_finalize", 1, 3311))->mSourceHead2!=((void*)0),            _if_conditional376) {
                come_call_finalizer3(((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "sModule_finalize", 1, 3312)), "sModule_finalize", 1, 3313))->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional377=self!=((void*)0)&&((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "sModule_finalize", 2, 3314)), "sModule_finalize", 2, 3315))->mSource!=((void*)0),            _if_conditional377) {
                come_call_finalizer3(((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "sModule_finalize", 2, 3316)), "sModule_finalize", 2, 3317))->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional378=self!=((void*)0)&&((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "sModule_finalize", 3, 3318)), "sModule_finalize", 3, 3319))->mLastCode!=((void*)0),            _if_conditional378) {
                ((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "sModule_finalize", 3, 3320)), "sModule_finalize", 3, 3321))->mLastCode = come_decrement_ref_count2(((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "sModule_finalize", 3, 3320)), "sModule_finalize", 3, 3321))->mLastCode, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional379=self!=((void*)0)&&((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "sModule_finalize", 4, 3322)), "sModule_finalize", 4, 3323))->mLastCode2!=((void*)0),            _if_conditional379) {
                ((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "sModule_finalize", 4, 3324)), "sModule_finalize", 4, 3325))->mLastCode2 = come_decrement_ref_count2(((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "sModule_finalize", 4, 3324)), "sModule_finalize", 4, 3325))->mLastCode2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional380=self!=((void*)0)&&((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "sModule_finalize", 5, 3326)), "sModule_finalize", 5, 3327))->mLastCode3!=((void*)0),            _if_conditional380) {
                ((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "sModule_finalize", 5, 3328)), "sModule_finalize", 5, 3329))->mLastCode3 = come_decrement_ref_count2(((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "sModule_finalize", 5, 3328)), "sModule_finalize", 5, 3329))->mLastCode3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional381=self!=((void*)0)&&((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "sModule_finalize", 6, 3330)), "sModule_finalize", 6, 3331))->mHeader!=((void*)0),            _if_conditional381) {
                come_call_finalizer3(((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "sModule_finalize", 6, 3332)), "sModule_finalize", 6, 3333))->mHeader,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list$1sRightValueObjectph* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
            ((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 101, 3335)), "./neo-c.h", 101, 3336))->head=((void*)0);
            ((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 102, 3337)), "./neo-c.h", 102, 3338))->tail=((void*)0);
            ((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 103, 3339)), "./neo-c.h", 103, 3340))->len=0;
            __result158__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result158__;
            come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_275;
_Bool _while_condtional34;
struct list_item$1sRightValueObjectph* prev_it_276;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_275, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_276, 0, sizeof(struct list_item$1sRightValueObjectph*));
                it_275=((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 120, 3341)), "./neo-c.h", 120, 3342))->head;
                while(_while_condtional34=it_275!=((void*)0),                _while_condtional34) {
                    prev_it_276=it_275;
                    it_275=((struct list_item$1sRightValueObjectph*)come_null_check(((struct list_item$1sRightValueObjectph*)come_null_check(it_275, "./neo-c.h", 123, 3343)), "./neo-c.h", 123, 3344))->next;
                    come_call_finalizer3(prev_it_276,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional382;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional382=self!=((void*)0)&&((struct list_item$1sRightValueObjectph*)come_null_check(((struct list_item$1sRightValueObjectph*)come_null_check(self, "list_item$1sRightValueObjectphp_finalize", 0, 3345)), "list_item$1sRightValueObjectphp_finalize", 0, 3346))->item!=((void*)0),                        _if_conditional382) {
                            come_call_finalizer3(((struct list_item$1sRightValueObjectph*)come_null_check(((struct list_item$1sRightValueObjectph*)come_null_check(self, "list_item$1sRightValueObjectphp_finalize", 0, 3347)), "list_item$1sRightValueObjectphp_finalize", 0, 3348))->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
void* __result_obj__;
_Bool _if_conditional383;
_Bool _if_conditional384;
_Bool _if_conditional385;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional383=self!=((void*)0)&&((struct sRightValueObject*)come_null_check(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 0, 3349)), "sRightValueObject_finalize", 0, 3350))->mType!=((void*)0),                                _if_conditional383) {
                                    come_call_finalizer3(((struct sRightValueObject*)come_null_check(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 0, 3351)), "sRightValueObject_finalize", 0, 3352))->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional384=self!=((void*)0)&&((struct sRightValueObject*)come_null_check(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1, 3353)), "sRightValueObject_finalize", 1, 3354))->mVarName!=((void*)0),                                _if_conditional384) {
                                    ((struct sRightValueObject*)come_null_check(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1, 3355)), "sRightValueObject_finalize", 1, 3356))->mVarName = come_decrement_ref_count2(((struct sRightValueObject*)come_null_check(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1, 3355)), "sRightValueObject_finalize", 1, 3356))->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional385=self!=((void*)0)&&((struct sRightValueObject*)come_null_check(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2, 3357)), "sRightValueObject_finalize", 2, 3358))->mFunName!=((void*)0),                                _if_conditional385) {
                                    ((struct sRightValueObject*)come_null_check(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2, 3359)), "sRightValueObject_finalize", 2, 3360))->mFunName = come_decrement_ref_count2(((struct sRightValueObject*)come_null_check(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2, 3359)), "sRightValueObject_finalize", 2, 3360))->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_277;
_Bool _while_condtional35;
struct list_item$1sRightValueObjectph* prev_it_278;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_277, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_278, 0, sizeof(struct list_item$1sRightValueObjectph*));
            it_277=((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 120, 3362)), "./neo-c.h", 120, 3363))->head;
            while(_while_condtional35=it_277!=((void*)0),            _while_condtional35) {
                prev_it_278=it_277;
                it_277=((struct list_item$1sRightValueObjectph*)come_null_check(((struct list_item$1sRightValueObjectph*)come_null_check(it_277, "./neo-c.h", 123, 3364)), "./neo-c.h", 123, 3365))->next;
                come_call_finalizer3(prev_it_278,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
            ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 101, 3367)), "./neo-c.h", 101, 3368))->head=((void*)0);
            ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 102, 3369)), "./neo-c.h", 102, 3370))->tail=((void*)0);
            ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 103, 3371)), "./neo-c.h", 103, 3372))->len=0;
            __result159__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result159__;
            come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_279;
_Bool _while_condtional36;
struct list_item$1CVALUEph* prev_it_280;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_279, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_280, 0, sizeof(struct list_item$1CVALUEph*));
                it_279=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 120, 3373)), "./neo-c.h", 120, 3374))->head;
                while(_while_condtional36=it_279!=((void*)0),                _while_condtional36) {
                    prev_it_280=it_279;
                    it_279=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(it_279, "./neo-c.h", 123, 3375)), "./neo-c.h", 123, 3376))->next;
                    come_call_finalizer3(prev_it_280,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional386;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional386=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0, 3377)), "list_item$1CVALUEphp_finalize", 0, 3378))->item!=((void*)0),                        _if_conditional386) {
                            come_call_finalizer3(((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0, 3379)), "list_item$1CVALUEphp_finalize", 0, 3380))->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional387;
_Bool _if_conditional388;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional387=self!=((void*)0)&&((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0, 3381)), "CVALUE_finalize", 0, 3382))->c_value!=((void*)0),                                _if_conditional387) {
                                    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0, 3383)), "CVALUE_finalize", 0, 3384))->c_value = come_decrement_ref_count2(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0, 3383)), "CVALUE_finalize", 0, 3384))->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional388=self!=((void*)0)&&((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1, 3385)), "CVALUE_finalize", 1, 3386))->type!=((void*)0),                                _if_conditional388) {
                                    come_call_finalizer3(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1, 3387)), "CVALUE_finalize", 1, 3388))->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_281;
_Bool _while_condtional37;
struct list_item$1CVALUEph* prev_it_282;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_281, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_282, 0, sizeof(struct list_item$1CVALUEph*));
            it_281=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 120, 3390)), "./neo-c.h", 120, 3391))->head;
            while(_while_condtional37=it_281!=((void*)0),            _while_condtional37) {
                prev_it_282=it_281;
                it_281=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(it_281, "./neo-c.h", 123, 3392)), "./neo-c.h", 123, 3393))->next;
                come_call_finalizer3(prev_it_282,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static void sInfo_finalize(struct sInfo* self){
void* __result_obj__;
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
_Bool _if_conditional411;
_Bool _if_conditional412;
_Bool _if_conditional413;
_Bool _if_conditional414;
_Bool _if_conditional415;
_Bool _if_conditional416;
_Bool _if_conditional417;
_Bool _if_conditional418;
_Bool _if_conditional419;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional392=self!=((void*)0)&&((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 0, 3436)), "sInfo_finalize", 0, 3437))->original_source!=((void*)0),            _if_conditional392) {
                come_call_finalizer3(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 0, 3438)), "sInfo_finalize", 0, 3439))->original_source,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional393=self!=((void*)0)&&((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 1, 3440)), "sInfo_finalize", 1, 3441))->source!=((void*)0),            _if_conditional393) {
                come_call_finalizer3(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 1, 3442)), "sInfo_finalize", 1, 3443))->source,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional394=self!=((void*)0)&&((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 2, 3444)), "sInfo_finalize", 2, 3445))->sname!=((void*)0),            _if_conditional394) {
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 2, 3446)), "sInfo_finalize", 2, 3447))->sname = come_decrement_ref_count2(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 2, 3446)), "sInfo_finalize", 2, 3447))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional395=self!=((void*)0)&&((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 3, 3448)), "sInfo_finalize", 3, 3449))->base_sname!=((void*)0),            _if_conditional395) {
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 3, 3450)), "sInfo_finalize", 3, 3451))->base_sname = come_decrement_ref_count2(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 3, 3450)), "sInfo_finalize", 3, 3451))->base_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional396=self!=((void*)0)&&((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 4, 3452)), "sInfo_finalize", 4, 3453))->err_line!=((void*)0),            _if_conditional396) {
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 4, 3454)), "sInfo_finalize", 4, 3455))->err_line = come_decrement_ref_count2(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 4, 3454)), "sInfo_finalize", 4, 3455))->err_line, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional397=self!=((void*)0)&&((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 5, 3456)), "sInfo_finalize", 5, 3457))->clang_option!=((void*)0),            _if_conditional397) {
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 5, 3458)), "sInfo_finalize", 5, 3459))->clang_option = come_decrement_ref_count2(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 5, 3458)), "sInfo_finalize", 5, 3459))->clang_option, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional398=self!=((void*)0)&&((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 6, 3460)), "sInfo_finalize", 6, 3461))->cpp_option!=((void*)0),            _if_conditional398) {
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 6, 3462)), "sInfo_finalize", 6, 3463))->cpp_option = come_decrement_ref_count2(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 6, 3462)), "sInfo_finalize", 6, 3463))->cpp_option, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional399=self!=((void*)0)&&((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 7, 3464)), "sInfo_finalize", 7, 3465))->come_fun_name!=((void*)0),            _if_conditional399) {
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 7, 3466)), "sInfo_finalize", 7, 3467))->come_fun_name = come_decrement_ref_count2(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 7, 3466)), "sInfo_finalize", 7, 3467))->come_fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional400=self!=((void*)0)&&((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 8, 3468)), "sInfo_finalize", 8, 3469))->funcs!=((void*)0),            _if_conditional400) {
                come_call_finalizer3(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 8, 3470)), "sInfo_finalize", 8, 3471))->funcs,map$2charphsFunphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional401=self!=((void*)0)&&((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 9, 3472)), "sInfo_finalize", 9, 3473))->generics_funcs!=((void*)0),            _if_conditional401) {
                come_call_finalizer3(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 9, 3474)), "sInfo_finalize", 9, 3475))->generics_funcs,map$2charphsGenericsFunphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional402=self!=((void*)0)&&((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 10, 3476)), "sInfo_finalize", 10, 3477))->classes!=((void*)0),            _if_conditional402) {
                come_call_finalizer3(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 10, 3478)), "sInfo_finalize", 10, 3479))->classes,map$2charphsClassphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional403=self!=((void*)0)&&((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 11, 3480)), "sInfo_finalize", 11, 3481))->modules!=((void*)0),            _if_conditional403) {
                come_call_finalizer3(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 11, 3482)), "sInfo_finalize", 11, 3483))->modules,map$2charphsClassModulephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional404=self!=((void*)0)&&((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 12, 3484)), "sInfo_finalize", 12, 3485))->types!=((void*)0),            _if_conditional404) {
                come_call_finalizer3(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 12, 3486)), "sInfo_finalize", 12, 3487))->types,map$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional405=self!=((void*)0)&&((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 13, 3488)), "sInfo_finalize", 13, 3489))->generics_classes!=((void*)0),            _if_conditional405) {
                come_call_finalizer3(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 13, 3490)), "sInfo_finalize", 13, 3491))->generics_classes,map$2charphsClassphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional406=self!=((void*)0)&&((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 14, 3492)), "sInfo_finalize", 14, 3493))->module!=((void*)0),            _if_conditional406) {
                come_call_finalizer3(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 14, 3494)), "sInfo_finalize", 14, 3495))->module,sModule_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional407=self!=((void*)0)&&((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 15, 3496)), "sInfo_finalize", 15, 3497))->type!=((void*)0),            _if_conditional407) {
                come_call_finalizer3(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 15, 3498)), "sInfo_finalize", 15, 3499))->type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional408=self!=((void*)0)&&((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 16, 3500)), "sInfo_finalize", 16, 3501))->right_value_objects!=((void*)0),            _if_conditional408) {
                come_call_finalizer3(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 16, 3502)), "sInfo_finalize", 16, 3503))->right_value_objects,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional409=self!=((void*)0)&&((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 17, 3504)), "sInfo_finalize", 17, 3505))->generics_type!=((void*)0),            _if_conditional409) {
                come_call_finalizer3(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 17, 3506)), "sInfo_finalize", 17, 3507))->generics_type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional410=self!=((void*)0)&&((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 18, 3508)), "sInfo_finalize", 18, 3509))->method_generics_types!=((void*)0),            _if_conditional410) {
                come_call_finalizer3(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 18, 3510)), "sInfo_finalize", 18, 3511))->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional411=self!=((void*)0)&&((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 19, 3512)), "sInfo_finalize", 19, 3513))->stack!=((void*)0),            _if_conditional411) {
                come_call_finalizer3(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 19, 3514)), "sInfo_finalize", 19, 3515))->stack,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional412=self!=((void*)0)&&((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 20, 3516)), "sInfo_finalize", 20, 3517))->come_function_result_type!=((void*)0),            _if_conditional412) {
                come_call_finalizer3(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 20, 3518)), "sInfo_finalize", 20, 3519))->come_function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional413=self!=((void*)0)&&((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 21, 3520)), "sInfo_finalize", 21, 3521))->gv_table!=((void*)0),            _if_conditional413) {
                come_call_finalizer3(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 21, 3522)), "sInfo_finalize", 21, 3523))->gv_table,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional414=self!=((void*)0)&&((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 22, 3524)), "sInfo_finalize", 22, 3525))->generics_type_names!=((void*)0),            _if_conditional414) {
                come_call_finalizer3(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 22, 3526)), "sInfo_finalize", 22, 3527))->generics_type_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional415=self!=((void*)0)&&((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 23, 3528)), "sInfo_finalize", 23, 3529))->method_generics_type_names!=((void*)0),            _if_conditional415) {
                come_call_finalizer3(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 23, 3530)), "sInfo_finalize", 23, 3531))->method_generics_type_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional416=self!=((void*)0)&&((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 24, 3532)), "sInfo_finalize", 24, 3533))->impl_type!=((void*)0),            _if_conditional416) {
                come_call_finalizer3(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 24, 3534)), "sInfo_finalize", 24, 3535))->impl_type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional417=self!=((void*)0)&&((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 25, 3536)), "sInfo_finalize", 25, 3537))->output_file_name!=((void*)0),            _if_conditional417) {
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 25, 3538)), "sInfo_finalize", 25, 3539))->output_file_name = come_decrement_ref_count2(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 25, 3538)), "sInfo_finalize", 25, 3539))->output_file_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional418=self!=((void*)0)&&((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 26, 3540)), "sInfo_finalize", 26, 3541))->function_result_type!=((void*)0),            _if_conditional418) {
                come_call_finalizer3(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 26, 3542)), "sInfo_finalize", 26, 3543))->function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional419=self!=((void*)0)&&((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 27, 3544)), "sInfo_finalize", 27, 3545))->module_params!=((void*)0),            _if_conditional419) {
                come_call_finalizer3(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(self, "sInfo_finalize", 27, 3546)), "sInfo_finalize", 27, 3547))->module_params,map$2charphcharphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static void map$2charphcharphp_finalize(struct map$2charphcharph* self){
void* __result_obj__;
int i_285;
_Bool _if_conditional420;
_Bool _if_conditional421;
int i_286;
_Bool _if_conditional422;
_Bool _if_conditional423;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_285, 0, sizeof(int));
memset(&i_286, 0, sizeof(int));
                    for(                    i_285=0;                    i_285<((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1111, 3548)), "./neo-c.h", 1111, 3549))->size;                    i_285++                    ){
                        if(_if_conditional420=((_Bool*)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1112, 3550)), "./neo-c.h", 1112, 3551))->item_existance, "./neo-c.h", 1112, 3552))[i_285],                        _if_conditional420) {
                            if(_if_conditional421=1,                            _if_conditional421) {
                                ((char**)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1114, 3553)), "./neo-c.h", 1114, 3554))->items, "./neo-c.h", 1114, 3555))[i_285] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1114, 3553)), "./neo-c.h", 1114, 3554))->items, "./neo-c.h", 1114, 3555))[i_285], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                    (come_push_stackframe("./neo-c.h", 1118,3558),come_free((char*)((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1118, 3556)), "./neo-c.h", 1118, 3557))->items),come_pop_stackframe());
                    for(                    i_286=0;                    i_286<((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1120, 3559)), "./neo-c.h", 1120, 3560))->size;                    i_286++                    ){
                        if(_if_conditional422=((_Bool*)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1121, 3561)), "./neo-c.h", 1121, 3562))->item_existance, "./neo-c.h", 1121, 3563))[i_286],                        _if_conditional422) {
                            if(_if_conditional423=1,                            _if_conditional423) {
                                ((char**)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1123, 3564)), "./neo-c.h", 1123, 3565))->keys, "./neo-c.h", 1123, 3566))[i_286] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1123, 3564)), "./neo-c.h", 1123, 3565))->keys, "./neo-c.h", 1123, 3566))[i_286], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                    (come_push_stackframe("./neo-c.h", 1127,3569),come_free((char*)((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1127, 3567)), "./neo-c.h", 1127, 3568))->keys),come_pop_stackframe());
                    come_call_finalizer3(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1129, 3570)), "./neo-c.h", 1129, 3571))->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                    ((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1131, 3572)), "./neo-c.h", 1131, 3573))->item_existance = come_decrement_ref_count2(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1131, 3572)), "./neo-c.h", 1131, 3573))->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional472;
struct list_item$1charph* it_305;
int i_306;
_Bool _while_condtional38;
_Bool _if_conditional473;
char* __result168__;
char* default_value_307;
void* __exception_result_var_b546;
char* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_305, 0, sizeof(struct list_item$1charph*));
memset(&i_306, 0, sizeof(int));
memset(&default_value_307, 0, sizeof(char*));
                                            if(_if_conditional472=position<0,                                            _if_conditional472) {
                                                position+=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 676, 3796)), "./neo-c.h", 676, 3797))->len;
                                            }
                                            it_305=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 679, 3798)), "./neo-c.h", 679, 3799))->head;
                                            i_306=0;
                                            while(_while_condtional38=it_305!=((void*)0),                                            _while_condtional38) {
                                                if(_if_conditional473=position==i_306,                                                _if_conditional473) {
                                                    __result168__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_305, "./neo-c.h", 683, 3800)), "./neo-c.h", 683, 3801))->item;
                                                    return __result168__;
                                                }
                                                it_305=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_305, "./neo-c.h", 685, 3802)), "./neo-c.h", 685, 3803))->next;
                                                i_306++;
                                            }
                                            (come_push_stackframe("./neo-c.h", 690, 3804),__exception_result_var_b546=memset(&default_value_307,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b546);
                                            __result169__ = __result_obj__ = default_value_307;
                                            default_value_307 = come_decrement_ref_count2(default_value_307, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                            return __result169__;
                                            default_value_307 = come_decrement_ref_count2(default_value_307, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void method_block2_02transpilec(struct __current_stack2__* parent){
void* __result_obj__;
int __exception_result_var_b552;
memset(&__result_obj__, 0, sizeof(void*));
                                            (come_push_stackframe("02transpile.c", 922, 3812),__exception_result_var_b552=printf("%s %d: linker faield\n",(*(parent->info_304)).sname,(*(parent->info_304)).sline), come_pop_stackframe(), __exception_result_var_b552);
                                            (come_push_stackframe("02transpile.c", 923,3813),exit(13),come_pop_stackframe());
}

