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
_Bool gComeC=(_Bool)0;
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

int pipe(int anonymous_var_nameX597[2]);

int pipe2(int anonymous_var_nameX598[2], int anonymous_var_nameX599);

int close(int anonymous_var_nameX600);

int posix_close(int anonymous_var_nameX601, int anonymous_var_nameX602);

int dup(int anonymous_var_nameX603);

int dup2(int anonymous_var_nameX604, int anonymous_var_nameX605);

int dup3(int anonymous_var_nameX606, int anonymous_var_nameX607, int anonymous_var_nameX608);

long lseek(int anonymous_var_nameX609, long anonymous_var_nameX610, int anonymous_var_nameX611);

int fsync(int anonymous_var_nameX612);

int fdatasync(int anonymous_var_nameX613);

long read(int anonymous_var_nameX614, void* anonymous_var_nameX615, unsigned long int anonymous_var_nameX616);

long write(int anonymous_var_nameX617, const void* anonymous_var_nameX618, unsigned long int anonymous_var_nameX619);

long pread(int anonymous_var_nameX620, void* anonymous_var_nameX621, unsigned long int anonymous_var_nameX622, long anonymous_var_nameX623);

long pwrite(int anonymous_var_nameX624, const void* anonymous_var_nameX625, unsigned long int anonymous_var_nameX626, long anonymous_var_nameX627);

int chown(const char* anonymous_var_nameX628, unsigned int anonymous_var_nameX629, unsigned int anonymous_var_nameX630);

int fchown(int anonymous_var_nameX631, unsigned int anonymous_var_nameX632, unsigned int anonymous_var_nameX633);

int lchown(const char* anonymous_var_nameX634, unsigned int anonymous_var_nameX635, unsigned int anonymous_var_nameX636);

int fchownat(int anonymous_var_nameX637, const char* anonymous_var_nameX638, unsigned int anonymous_var_nameX639, unsigned int anonymous_var_nameX640, int anonymous_var_nameX641);

int link(const char* anonymous_var_nameX642, const char* anonymous_var_nameX643);

int linkat(int anonymous_var_nameX644, const char* anonymous_var_nameX645, int anonymous_var_nameX646, const char* anonymous_var_nameX647, int anonymous_var_nameX648);

int symlink(const char* anonymous_var_nameX649, const char* anonymous_var_nameX650);

int symlinkat(const char* anonymous_var_nameX651, int anonymous_var_nameX652, const char* anonymous_var_nameX653);

long readlink(const char* anonymous_var_nameX654, char* anonymous_var_nameX655, unsigned long int anonymous_var_nameX656);

long readlinkat(int anonymous_var_nameX657, const char* anonymous_var_nameX658, char* anonymous_var_nameX659, unsigned long int anonymous_var_nameX660);

int unlink(const char* anonymous_var_nameX661);

int unlinkat(int anonymous_var_nameX662, const char* anonymous_var_nameX663, int anonymous_var_nameX664);

int rmdir(const char* anonymous_var_nameX665);

int truncate(const char* anonymous_var_nameX666, long anonymous_var_nameX667);

int ftruncate(int anonymous_var_nameX668, long anonymous_var_nameX669);

int access(const char* anonymous_var_nameX670, int anonymous_var_nameX671);

int faccessat(int anonymous_var_nameX672, const char* anonymous_var_nameX673, int anonymous_var_nameX674, int anonymous_var_nameX675);

int chdir(const char* anonymous_var_nameX676);

int fchdir(int anonymous_var_nameX677);

char* getcwd(char* anonymous_var_nameX678, unsigned long int anonymous_var_nameX679);

unsigned int alarm(unsigned int anonymous_var_nameX680);

unsigned int sleep(unsigned int anonymous_var_nameX681);

int pause();

int fork();

int _Fork();

int execve(const char* anonymous_var_nameX682, char** anonymous_var_nameX683, char** anonymous_var_nameX684);

int execv(const char* anonymous_var_nameX685, char** anonymous_var_nameX686);

int execle(const char* anonymous_var_nameX687, const char* anonymous_var_nameX688, ...);

int execl(const char* anonymous_var_nameX689, const char* anonymous_var_nameX690, ...);

int execvp(const char* anonymous_var_nameX691, char** anonymous_var_nameX692);

int execlp(const char* anonymous_var_nameX693, const char* anonymous_var_nameX694, ...);

int fexecve(int anonymous_var_nameX695, char** anonymous_var_nameX696, char** anonymous_var_nameX697);

void _exit(int anonymous_var_nameX698);

int getpid();

int getppid();

int getpgrp();

int getpgid(int anonymous_var_nameX699);

int setpgid(int anonymous_var_nameX700, int anonymous_var_nameX701);

int setsid();

int getsid(int anonymous_var_nameX702);

char* ttyname(int anonymous_var_nameX703);

int ttyname_r(int anonymous_var_nameX704, char* anonymous_var_nameX705, unsigned long int anonymous_var_nameX706);

int isatty(int anonymous_var_nameX707);

int tcgetpgrp(int anonymous_var_nameX708);

int tcsetpgrp(int anonymous_var_nameX709, int anonymous_var_nameX710);

unsigned int getuid();

unsigned int geteuid();

unsigned int getgid();

unsigned int getegid();

int getgroups(int anonymous_var_nameX711, unsigned int* anonymous_var_nameX712);

int setuid(unsigned int anonymous_var_nameX713);

int seteuid(unsigned int anonymous_var_nameX714);

int setgid(unsigned int anonymous_var_nameX715);

int setegid(unsigned int anonymous_var_nameX716);

char* getlogin();

int getlogin_r(char* anonymous_var_nameX717, unsigned long int anonymous_var_nameX718);

int gethostname(char* anonymous_var_nameX719, unsigned long int anonymous_var_nameX720);

char* ctermid(char* anonymous_var_nameX721);

int getopt(int anonymous_var_nameX722, char** anonymous_var_nameX723, const char* anonymous_var_nameX724);

long pathconf(const char* anonymous_var_nameX725, int anonymous_var_nameX726);

long fpathconf(int anonymous_var_nameX727, int anonymous_var_nameX728);

long sysconf(int anonymous_var_nameX729);

unsigned long int confstr(int anonymous_var_nameX730, char* anonymous_var_nameX731, unsigned long int anonymous_var_nameX732);

int setreuid(unsigned int anonymous_var_nameX733, unsigned int anonymous_var_nameX734);

int setregid(unsigned int anonymous_var_nameX735, unsigned int anonymous_var_nameX736);

int lockf(int anonymous_var_nameX737, int anonymous_var_nameX738, long anonymous_var_nameX739);

long gethostid();

int nice(int anonymous_var_nameX740);

void sync();

int setpgrp();

char* crypt(const char* anonymous_var_nameX741, const char* anonymous_var_nameX742);

void encrypt(char* anonymous_var_nameX743, int anonymous_var_nameX744);

void swab(const void* anonymous_var_nameX745, void* anonymous_var_nameX746, long anonymous_var_nameX747);

int usleep(unsigned int anonymous_var_nameX748);

unsigned int ualarm(unsigned int anonymous_var_nameX749, unsigned int anonymous_var_nameX750);

int brk(void* anonymous_var_nameX751);

void* sbrk(long anonymous_var_nameX752);

int vfork();

int vhangup();

int chroot(const char* anonymous_var_nameX753);

int getpagesize();

int getdtablesize();

int sethostname(const char* anonymous_var_nameX754, unsigned long int anonymous_var_nameX755);

int getdomainname(char* anonymous_var_nameX756, unsigned long int anonymous_var_nameX757);

int setdomainname(const char* anonymous_var_nameX758, unsigned long int anonymous_var_nameX759);

int setgroups(unsigned long int anonymous_var_nameX760, const unsigned int* anonymous_var_nameX761);

char* getpass(const char* anonymous_var_nameX762);

int daemon(int anonymous_var_nameX763, int anonymous_var_nameX764);

void setusershell();

void endusershell();

char* getusershell();

int acct(const char* anonymous_var_nameX765);

long syscall(long anonymous_var_nameX766, ...);

int execvpe(const char* anonymous_var_nameX767, char** anonymous_var_nameX768, char** anonymous_var_nameX769);

int issetugid();

int getentropy(void* anonymous_var_nameX770, unsigned long int anonymous_var_nameX771);

int setresuid(unsigned int anonymous_var_nameX772, unsigned int anonymous_var_nameX773, unsigned int anonymous_var_nameX774);

int setresgid(unsigned int anonymous_var_nameX775, unsigned int anonymous_var_nameX776, unsigned int anonymous_var_nameX777);

int getresuid(unsigned int* anonymous_var_nameX778, unsigned int* anonymous_var_nameX779, unsigned int* anonymous_var_nameX780);

int getresgid(unsigned int* anonymous_var_nameX781, unsigned int* anonymous_var_nameX782, unsigned int* anonymous_var_nameX783);

char* get_current_dir_name();

int syncfs(int anonymous_var_nameX784);

int euidaccess(const char* anonymous_var_nameX785, int anonymous_var_nameX786);

int eaccess(const char* anonymous_var_nameX787, int anonymous_var_nameX788);

long copy_file_range(int anonymous_var_nameX789, long* anonymous_var_nameX790, int anonymous_var_nameX791, long* anonymous_var_nameX792, unsigned long int anonymous_var_nameX793, unsigned int anonymous_var_nameX794);

int gettid();

int select(int anonymous_var_nameX795, struct anonymous_typeX23* anonymous_var_nameX796, struct anonymous_typeX23* anonymous_var_nameX797, struct anonymous_typeX23* anonymous_var_nameX798, struct timeval* anonymous_var_nameX799);

int pselect(int anonymous_var_nameX800, struct anonymous_typeX23* anonymous_var_nameX801, struct anonymous_typeX23* anonymous_var_nameX802, struct anonymous_typeX23* anonymous_var_nameX803, const struct timespec* anonymous_var_nameX804, const struct __sigset_t* anonymous_var_nameX805);

int stat(const char* anonymous_var_nameX806, struct stat* anonymous_var_nameX807);

int fstat(int anonymous_var_nameX808, struct stat* anonymous_var_nameX809);

int lstat(const char* anonymous_var_nameX810, struct stat* anonymous_var_nameX811);

int fstatat(int anonymous_var_nameX812, const char* anonymous_var_nameX813, struct stat* anonymous_var_nameX814, int anonymous_var_nameX815);

int chmod(const char* anonymous_var_nameX816, unsigned int anonymous_var_nameX817);

int fchmod(int anonymous_var_nameX818, unsigned int anonymous_var_nameX819);

int fchmodat(int anonymous_var_nameX820, const char* anonymous_var_nameX821, unsigned int anonymous_var_nameX822, int anonymous_var_nameX823);

unsigned int umask(unsigned int anonymous_var_nameX824);

int mkdir(const char* anonymous_var_nameX825, unsigned int anonymous_var_nameX826);

int mkfifo(const char* anonymous_var_nameX827, unsigned int anonymous_var_nameX828);

int mkdirat(int anonymous_var_nameX829, const char* anonymous_var_nameX830, unsigned int anonymous_var_nameX831);

int mkfifoat(int anonymous_var_nameX832, const char* anonymous_var_nameX833, unsigned int anonymous_var_nameX834);

int mknod(const char* anonymous_var_nameX835, unsigned int anonymous_var_nameX836, unsigned long int anonymous_var_nameX837);

int mknodat(int anonymous_var_nameX838, const char* anonymous_var_nameX839, unsigned int anonymous_var_nameX840, unsigned long int anonymous_var_nameX841);

int futimens(int anonymous_var_nameX842, const struct timespec anonymous_var_nameX843[2]);

int utimensat(int anonymous_var_nameX844, const char* anonymous_var_nameX845, const struct timespec anonymous_var_nameX846[2], int anonymous_var_nameX847);

int lchmod(const char* anonymous_var_nameX848, unsigned int anonymous_var_nameX849);

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
    perror(msg);
    stackframe();
    exit(4);
    __result1__ = (_Bool)0;
    return __result1__;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long int len){
void* __result_obj__;
void* right_value0;
void* right_value1;
struct buffer* result_0;
struct buffer* __result2__;
memset(&__result_obj__, 0, sizeof(void*));
right_value0 = (void*)0;
right_value1 = (void*)0;
memset(&result_0, 0, sizeof(struct buffer*));
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1901, "buffer"))))))));
    come_call_finalizer3(right_value0,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value1,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_0,self,sizeof(char)*len);
    __result2__ = __result_obj__ = result_0;
    come_call_finalizer3(result_0,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result2__;
    come_call_finalizer3(result_0,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* shortpa_to_buffer(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value2;
void* right_value3;
struct buffer* result_1;
struct buffer* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
right_value2 = (void*)0;
right_value3 = (void*)0;
memset(&result_1, 0, sizeof(struct buffer*));
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1908, "buffer"))))))));
    come_call_finalizer3(right_value2,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value3,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_1,(char*)self,sizeof(short short)*len);
    __result3__ = __result_obj__ = result_1;
    come_call_finalizer3(result_1,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result3__;
    come_call_finalizer3(result_1,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long int len){
void* __result_obj__;
void* right_value4;
void* right_value5;
struct buffer* result_2;
struct buffer* __result4__;
memset(&__result_obj__, 0, sizeof(void*));
right_value4 = (void*)0;
right_value5 = (void*)0;
memset(&result_2, 0, sizeof(struct buffer*));
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1915, "buffer"))))))));
    come_call_finalizer3(right_value4,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value5,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_2,(char*)self,sizeof(int)*len);
    __result4__ = __result_obj__ = result_2;
    come_call_finalizer3(result_2,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result4__;
    come_call_finalizer3(result_2,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long int len){
void* __result_obj__;
void* right_value6;
void* right_value7;
struct buffer* result_3;
struct buffer* __result5__;
memset(&__result_obj__, 0, sizeof(void*));
right_value6 = (void*)0;
right_value7 = (void*)0;
memset(&result_3, 0, sizeof(struct buffer*));
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1922, "buffer"))))))));
    come_call_finalizer3(right_value6,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value7,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_3,(char*)self,sizeof(long)*len);
    __result5__ = __result_obj__ = result_3;
    come_call_finalizer3(result_3,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result5__;
    come_call_finalizer3(result_3,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long int len){
void* __result_obj__;
void* right_value8;
void* right_value9;
struct buffer* result_4;
struct buffer* __result6__;
memset(&__result_obj__, 0, sizeof(void*));
right_value8 = (void*)0;
right_value9 = (void*)0;
memset(&result_4, 0, sizeof(struct buffer*));
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1929, "buffer"))))))));
    come_call_finalizer3(right_value8,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value9,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_4,(char*)self,sizeof(float)*len);
    __result6__ = __result_obj__ = result_4;
    come_call_finalizer3(result_4,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result6__;
    come_call_finalizer3(result_4,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long int len){
void* __result_obj__;
void* right_value10;
void* right_value11;
struct buffer* result_5;
struct buffer* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
right_value11 = (void*)0;
memset(&result_5, 0, sizeof(struct buffer*));
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1936, "buffer"))))))));
    come_call_finalizer3(right_value10,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value11,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_5,(char*)self,sizeof(double)*len);
    __result7__ = __result_obj__ = result_5;
    come_call_finalizer3(result_5,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result7__;
    come_call_finalizer3(result_5,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__;
void* right_value12;
struct smart_pointer$1char* result_6;
void* right_value13;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
right_value12 = (void*)0;
memset(&result_6, 0, sizeof(struct smart_pointer$1char*));
right_value13 = (void*)0;
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1952, "smart_pointer$1char"))));
    come_call_finalizer3(right_value12,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj1=result_6->memory;
    result_6->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=buffer_clone(self))));
    come_call_finalizer3(__dec_obj1,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value13,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    result_6->p=result_6->memory->buf;
    __result8__ = __result_obj__ = result_6;
    come_call_finalizer3(result_6,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result8__;
    come_call_finalizer3(result_6,smart_pointer$1charp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__;
void* right_value14;
struct smart_pointer$1char* result_7;
void* right_value15;
struct buffer* __dec_obj2;
struct smart_pointer$1char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
right_value14 = (void*)0;
memset(&result_7, 0, sizeof(struct smart_pointer$1char*));
right_value15 = (void*)0;
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1962, "smart_pointer$1char"))));
    come_call_finalizer3(right_value14,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj2=result_7->memory;
    result_7->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=buffer_clone(self))));
    come_call_finalizer3(__dec_obj2,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value15,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    result_7->p=(char*)result_7->memory->buf;
    __result9__ = __result_obj__ = result_7;
    come_call_finalizer3(result_7,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result9__;
    come_call_finalizer3(result_7,smart_pointer$1charp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__;
void* right_value16;
struct smart_pointer$1short* result_8;
void* right_value17;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
right_value16 = (void*)0;
memset(&result_8, 0, sizeof(struct smart_pointer$1short*));
right_value17 = (void*)0;
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 1972, "smart_pointer$1short"))));
    come_call_finalizer3(right_value16,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj3=result_8->memory;
    result_8->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value17=buffer_clone(self))));
    come_call_finalizer3(__dec_obj3,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value17,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    result_8->p=(short short*)result_8->memory->buf;
    __result10__ = __result_obj__ = result_8;
    come_call_finalizer3(result_8,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    return __result10__;
    come_call_finalizer3(result_8,smart_pointer$1shortp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__;
void* right_value18;
struct smart_pointer$1int* result_9;
void* right_value19;
struct buffer* __dec_obj4;
struct smart_pointer$1int* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
right_value18 = (void*)0;
memset(&result_9, 0, sizeof(struct smart_pointer$1int*));
right_value19 = (void*)0;
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 1982, "smart_pointer$1int"))));
    come_call_finalizer3(right_value18,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj4=result_9->memory;
    result_9->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=buffer_clone(self))));
    come_call_finalizer3(__dec_obj4,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value19,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    result_9->p=(int*)result_9->memory->buf;
    __result11__ = __result_obj__ = result_9;
    come_call_finalizer3(result_9,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    return __result11__;
    come_call_finalizer3(result_9,smart_pointer$1intp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__;
void* right_value20;
struct smart_pointer$1long* result_10;
void* right_value21;
struct buffer* __dec_obj5;
struct smart_pointer$1long* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
right_value20 = (void*)0;
memset(&result_10, 0, sizeof(struct smart_pointer$1long*));
right_value21 = (void*)0;
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 1992, "smart_pointer$1long"))));
    come_call_finalizer3(right_value20,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj5=result_10->memory;
    result_10->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value21=buffer_clone(self))));
    come_call_finalizer3(__dec_obj5,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value21,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    result_10->p=(long*)result_10->memory->buf;
    __result12__ = __result_obj__ = result_10;
    come_call_finalizer3(result_10,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    return __result12__;
    come_call_finalizer3(result_10,smart_pointer$1longp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long int len){
void* __result_obj__;
void* right_value22;
void* right_value25;
struct smart_pointer$1char* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
right_value22 = (void*)0;
right_value25 = (void*)0;
    __result14__ = __result_obj__ = ((struct smart_pointer$1char*)(right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2163, "smart_pointer$1char")))),self,len)));
    come_call_finalizer3(right_value22,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value25,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result14__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value26;
void* right_value29;
struct smart_pointer$1short* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
right_value26 = (void*)0;
right_value29 = (void*)0;
    __result16__ = __result_obj__ = ((struct smart_pointer$1short*)(right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2168, "smart_pointer$1short")))),self,len)));
    come_call_finalizer3(right_value26,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value29,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result16__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long int len){
void* __result_obj__;
void* right_value30;
void* right_value33;
struct smart_pointer$1int* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
right_value30 = (void*)0;
right_value33 = (void*)0;
    __result18__ = __result_obj__ = ((struct smart_pointer$1int*)(right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2173, "smart_pointer$1int")))),self,len)));
    come_call_finalizer3(right_value30,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value33,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result18__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long int len){
void* __result_obj__;
void* right_value34;
void* right_value37;
struct smart_pointer$1long* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
right_value34 = (void*)0;
right_value37 = (void*)0;
    __result20__ = __result_obj__ = ((struct smart_pointer$1long*)(right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2178, "smart_pointer$1long")))),self,len)));
    come_call_finalizer3(right_value34,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value37,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result20__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long int len){
void* __result_obj__;
void* right_value38;
void* right_value41;
struct smart_pointer$1float* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
right_value38 = (void*)0;
right_value41 = (void*)0;
    __result22__ = __result_obj__ = ((struct smart_pointer$1float*)(right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./neo-c.h", 2183, "smart_pointer$1float")))),self,len)));
    come_call_finalizer3(right_value38,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value41,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result22__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long int len){
void* __result_obj__;
void* right_value42;
void* right_value45;
struct smart_pointer$1double* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
right_value42 = (void*)0;
right_value45 = (void*)0;
    __result24__ = __result_obj__ = ((struct smart_pointer$1double*)(right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./neo-c.h", 2188, "smart_pointer$1double")))),self,len)));
    come_call_finalizer3(right_value42,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value45,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    return __result24__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long int len){
void* __result_obj__;
void* right_value46;
void* right_value50;
struct list$1char* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
right_value46 = (void*)0;
right_value50 = (void*)0;
    __result27__ = __result_obj__ = ((struct list$1char*)(right_value50=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count(((struct list$1char*)(right_value46=(struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./neo-c.h", 2193, "list$1char")))),len,self)));
    come_call_finalizer3(right_value46,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value50,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result27__;
}
static inline struct list$1short* shortpa_to_list(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value51;
void* right_value55;
struct list$1short* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
right_value51 = (void*)0;
right_value55 = (void*)0;
    __result30__ = __result_obj__ = ((struct list$1short*)(right_value55=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count(((struct list$1short*)(right_value51=(struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./neo-c.h", 2198, "list$1short")))),len,self)));
    come_call_finalizer3(right_value51,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value55,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result30__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long int len){
void* __result_obj__;
void* right_value56;
void* right_value60;
struct list$1int* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
right_value56 = (void*)0;
right_value60 = (void*)0;
    __result33__ = __result_obj__ = ((struct list$1int*)(right_value60=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value56=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./neo-c.h", 2203, "list$1int")))),len,self)));
    come_call_finalizer3(right_value56,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value60,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result33__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long int len){
void* __result_obj__;
void* right_value61;
void* right_value65;
struct list$1long* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value61 = (void*)0;
right_value65 = (void*)0;
    __result36__ = __result_obj__ = ((struct list$1long*)(right_value65=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count(((struct list$1long*)(right_value61=(struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./neo-c.h", 2208, "list$1long")))),len,self)));
    come_call_finalizer3(right_value61,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value65,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result36__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long int len){
void* __result_obj__;
void* right_value66;
void* right_value70;
struct list$1float* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
right_value66 = (void*)0;
right_value70 = (void*)0;
    __result39__ = __result_obj__ = ((struct list$1float*)(right_value70=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count(((struct list$1float*)(right_value66=(struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./neo-c.h", 2213, "list$1float")))),len,self)));
    come_call_finalizer3(right_value66,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value70,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result39__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long int len){
void* __result_obj__;
void* right_value71;
void* right_value75;
struct list$1double* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
right_value71 = (void*)0;
right_value75 = (void*)0;
    __result42__ = __result_obj__ = ((struct list$1double*)(right_value75=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count(((struct list$1double*)(right_value71=(struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./neo-c.h", 2218, "list$1double")))),len,self)));
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
char* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
right_value76 = (void*)0;
    __result49__ = __result_obj__ = ((char*)(right_value76=xsprintf(msg,self)));
    right_value76 = come_decrement_ref_count2(right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result49__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value77;
char* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
right_value77 = (void*)0;
    __result50__ = __result_obj__ = ((char*)(right_value77=xsprintf(msg,self)));
    right_value77 = come_decrement_ref_count2(right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result50__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__;
void* right_value78;
char* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value78 = (void*)0;
    __result51__ = __result_obj__ = ((char*)(right_value78=xsprintf(msg,self)));
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
unsigned long int __result54__;
memset(&__result_obj__, 0, sizeof(void*));
    __result54__ = __bswap32(__x)+0<<32|__bswap32(__x>>32);
    return __result54__;
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
struct smart_pointer$1char* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
right_value23 = (void*)0;
right_value24 = (void*)0;
        __dec_obj6=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2004, "buffer"))))))));
        come_call_finalizer3(__dec_obj6,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value23,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value24,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(char)*size);
        self->p=(char*)self->memory->buf;
        __result13__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
        return __result13__;
        come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size){
void* __result_obj__;
void* right_value27;
void* right_value28;
struct buffer* __dec_obj7;
struct smart_pointer$1short* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
right_value27 = (void*)0;
right_value28 = (void*)0;
        __dec_obj7=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2004, "buffer"))))))));
        come_call_finalizer3(__dec_obj7,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value27,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value28,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(short short)*size);
        self->p=(short short*)self->memory->buf;
        __result15__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
        return __result15__;
        come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size){
void* __result_obj__;
void* right_value31;
void* right_value32;
struct buffer* __dec_obj8;
struct smart_pointer$1int* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
right_value31 = (void*)0;
right_value32 = (void*)0;
        __dec_obj8=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2004, "buffer"))))))));
        come_call_finalizer3(__dec_obj8,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value31,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value32,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(int)*size);
        self->p=(int*)self->memory->buf;
        __result17__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
        return __result17__;
        come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size){
void* __result_obj__;
void* right_value35;
void* right_value36;
struct buffer* __dec_obj9;
struct smart_pointer$1long* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
right_value35 = (void*)0;
right_value36 = (void*)0;
        __dec_obj9=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2004, "buffer"))))))));
        come_call_finalizer3(__dec_obj9,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value35,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value36,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(long)*size);
        self->p=(long*)self->memory->buf;
        __result19__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
        return __result19__;
        come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size){
void* __result_obj__;
void* right_value39;
void* right_value40;
struct buffer* __dec_obj10;
struct smart_pointer$1float* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
right_value39 = (void*)0;
right_value40 = (void*)0;
        __dec_obj10=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2004, "buffer"))))))));
        come_call_finalizer3(__dec_obj10,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value39,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value40,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(float)*size);
        self->p=(float*)self->memory->buf;
        __result21__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
        return __result21__;
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
struct smart_pointer$1double* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
right_value43 = (void*)0;
right_value44 = (void*)0;
        __dec_obj11=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2004, "buffer"))))))));
        come_call_finalizer3(__dec_obj11,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value43,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value44,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(double)*size);
        self->p=(double*)self->memory->buf;
        __result23__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
        return __result23__;
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
struct list$1char* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_11, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_11=0;        i_11<num_value;        i_11++        ){
            list$1char_push_back(self,values[i_11]);
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
                if(_if_conditional7=self->len==0,                _if_conditional7) {
                    litem_12=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value47=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 221, "list_item$1char"))));
                    come_call_finalizer3(right_value47,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_12->prev=((void*)0);
                    litem_12->next=((void*)0);
                    litem_12->item=item;
                    self->tail=litem_12;
                    self->head=litem_12;
                }
                else {
                    if(_if_conditional8=self->len==1,                    _if_conditional8) {
                        litem_13=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value48=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 231, "list_item$1char"))));
                        come_call_finalizer3(right_value48,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_13->prev=self->head;
                        litem_13->next=((void*)0);
                        litem_13->item=item;
                        self->tail=litem_13;
                        self->head->next=litem_13;
                    }
                    else {
                        litem_14=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value49=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 241, "list_item$1char"))));
                        come_call_finalizer3(right_value49,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_14->prev=self->tail;
                        litem_14->next=((void*)0);
                        litem_14->item=item;
                        self->tail->next=litem_14;
                        self->tail=litem_14;
                    }
                }
                self->len++;
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
struct list$1short* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_17, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_17=0;        i_17<num_value;        i_17++        ){
            list$1short_push_back(self,values[i_17]);
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
                if(_if_conditional9=self->len==0,                _if_conditional9) {
                    litem_18=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value52=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 221, "list_item$1short"))));
                    come_call_finalizer3(right_value52,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_18->prev=((void*)0);
                    litem_18->next=((void*)0);
                    litem_18->item=item;
                    self->tail=litem_18;
                    self->head=litem_18;
                }
                else {
                    if(_if_conditional10=self->len==1,                    _if_conditional10) {
                        litem_19=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value53=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 231, "list_item$1short"))));
                        come_call_finalizer3(right_value53,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_19->prev=self->head;
                        litem_19->next=((void*)0);
                        litem_19->item=item;
                        self->tail=litem_19;
                        self->head->next=litem_19;
                    }
                    else {
                        litem_20=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value54=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 241, "list_item$1short"))));
                        come_call_finalizer3(right_value54,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_20->prev=self->tail;
                        litem_20->next=((void*)0);
                        litem_20->item=item;
                        self->tail->next=litem_20;
                        self->tail=litem_20;
                    }
                }
                self->len++;
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
struct list$1int* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_23, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_23=0;        i_23<num_value;        i_23++        ){
            list$1int_push_back(self,values[i_23]);
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
                if(_if_conditional11=self->len==0,                _if_conditional11) {
                    litem_24=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value57=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 221, "list_item$1int"))));
                    come_call_finalizer3(right_value57,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_24->prev=((void*)0);
                    litem_24->next=((void*)0);
                    litem_24->item=item;
                    self->tail=litem_24;
                    self->head=litem_24;
                }
                else {
                    if(_if_conditional12=self->len==1,                    _if_conditional12) {
                        litem_25=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value58=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 231, "list_item$1int"))));
                        come_call_finalizer3(right_value58,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_25->prev=self->head;
                        litem_25->next=((void*)0);
                        litem_25->item=item;
                        self->tail=litem_25;
                        self->head->next=litem_25;
                    }
                    else {
                        litem_26=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value59=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 241, "list_item$1int"))));
                        come_call_finalizer3(right_value59,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_26->prev=self->tail;
                        litem_26->next=((void*)0);
                        litem_26->item=item;
                        self->tail->next=litem_26;
                        self->tail=litem_26;
                    }
                }
                self->len++;
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
struct list$1long* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_29, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_29=0;        i_29<num_value;        i_29++        ){
            list$1long_push_back(self,values[i_29]);
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
                if(_if_conditional13=self->len==0,                _if_conditional13) {
                    litem_30=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value62=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 221, "list_item$1long"))));
                    come_call_finalizer3(right_value62,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_30->prev=((void*)0);
                    litem_30->next=((void*)0);
                    litem_30->item=item;
                    self->tail=litem_30;
                    self->head=litem_30;
                }
                else {
                    if(_if_conditional14=self->len==1,                    _if_conditional14) {
                        litem_31=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value63=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 231, "list_item$1long"))));
                        come_call_finalizer3(right_value63,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_31->prev=self->head;
                        litem_31->next=((void*)0);
                        litem_31->item=item;
                        self->tail=litem_31;
                        self->head->next=litem_31;
                    }
                    else {
                        litem_32=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value64=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 241, "list_item$1long"))));
                        come_call_finalizer3(right_value64,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_32->prev=self->tail;
                        litem_32->next=((void*)0);
                        litem_32->item=item;
                        self->tail->next=litem_32;
                        self->tail=litem_32;
                    }
                }
                self->len++;
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
struct list$1float* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_35, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_35=0;        i_35<num_value;        i_35++        ){
            list$1float_push_back(self,values[i_35]);
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
                if(_if_conditional15=self->len==0,                _if_conditional15) {
                    litem_36=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value67=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 221, "list_item$1float"))));
                    come_call_finalizer3(right_value67,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_36->prev=((void*)0);
                    litem_36->next=((void*)0);
                    litem_36->item=item;
                    self->tail=litem_36;
                    self->head=litem_36;
                }
                else {
                    if(_if_conditional16=self->len==1,                    _if_conditional16) {
                        litem_37=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value68=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 231, "list_item$1float"))));
                        come_call_finalizer3(right_value68,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_37->prev=self->head;
                        litem_37->next=((void*)0);
                        litem_37->item=item;
                        self->tail=litem_37;
                        self->head->next=litem_37;
                    }
                    else {
                        litem_38=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value69=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 241, "list_item$1float"))));
                        come_call_finalizer3(right_value69,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_38->prev=self->tail;
                        litem_38->next=((void*)0);
                        litem_38->item=item;
                        self->tail->next=litem_38;
                        self->tail=litem_38;
                    }
                }
                self->len++;
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
struct list$1double* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_41, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_41=0;        i_41<num_value;        i_41++        ){
            list$1double_push_back(self,values[i_41]);
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
                if(_if_conditional17=self->len==0,                _if_conditional17) {
                    litem_42=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value72=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 221, "list_item$1double"))));
                    come_call_finalizer3(right_value72,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_42->prev=((void*)0);
                    litem_42->next=((void*)0);
                    litem_42->item=item;
                    self->tail=litem_42;
                    self->head=litem_42;
                }
                else {
                    if(_if_conditional18=self->len==1,                    _if_conditional18) {
                        litem_43=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value73=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 231, "list_item$1double"))));
                        come_call_finalizer3(right_value73,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_43->prev=self->head;
                        litem_43->next=((void*)0);
                        litem_43->item=item;
                        self->tail=litem_43;
                        self->head->next=litem_43;
                    }
                    else {
                        litem_44=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value74=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 241, "list_item$1double"))));
                        come_call_finalizer3(right_value74,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_44->prev=self->tail;
                        litem_44->next=((void*)0);
                        litem_44->item=item;
                        self->tail->next=litem_44;
                        self->tail=litem_44;
                    }
                }
                self->len++;
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
_Bool __result55__;
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
char* p_52;
char* last_lf_53;
_Bool _while_condtional7;
_Bool _if_conditional22;
_Bool _if_conditional23;
int col_54;
int col_55;
_Bool _if_conditional24;
int n_56;
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
    if(_if_conditional21=!info->no_output_err,    _if_conditional21) {
        __builtin_va_start(args_51,msg);
        vasprintf(&msg2_50,msg,args_51);
        __builtin_va_end(args_51);
        p_52=info->p;
        last_lf_53=((void*)0);
        while(_while_condtional7=p_52>=info->head,        _while_condtional7) {
            if(_if_conditional22=*p_52==10,            _if_conditional22) {
                last_lf_53=p_52;
                break;
            }
            p_52--;
        }
        if(last_lf_53) {
            col_54=info->p-last_lf_53;
            printf("%s %d %d: %s\n",info->sname,info->sline,col_54,msg2_50);
        }
        else {
            col_55=info->p-info->head;
            printf("%s %d %d: %s\n",info->sname,info->sline,col_55,msg2_50);
        }
        info->err_num++;
        stackframe();
        if(info->come_fun) {
            n_56=info->sline-5;
            __current_stack1__.n_56 = &n_56;
            __current_stack1__.msg2_50 = &msg2_50;
            __current_stack1__.p_52 = &p_52;
            __current_stack1__.last_lf_53 = &last_lf_53;
            __current_stack1__.info = &info;
            __current_stack1__.msg = &msg;
            ((char*)(right_value103=string_puts(((char*)(right_value102=list$1charph_join(((struct list$1charph*)(right_value98=list$1charph_map2(((struct list$1charph*)(right_value93=list$1charph_sublist(((struct list$1charph*)(right_value87=string_split_char(((char*)(right_value86=buffer_to_string(info->original_source))),10))),n_56,n_56+10))),&__current_stack1__,(void*)method_block1_02transpilec))),"\n"))))));
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
struct list$1charph* result_59;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional29;
struct list_item$1charph* it_60;
int i_61;
_Bool _while_condtional9;
_Bool _if_conditional30;
struct list$1charph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
right_value89 = (void*)0;
memset(&result_59, 0, sizeof(struct list$1charph*));
memset(&it_60, 0, sizeof(struct list_item$1charph*));
memset(&i_61, 0, sizeof(int));
                result_59=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value89=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value88=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 637, "list$1charph"))))))));
                come_call_finalizer3(right_value88,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value89,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional26=begin<0,                _if_conditional26) {
                    begin+=self->len;
                }
                if(_if_conditional27=tail<0,                _if_conditional27) {
                    tail+=self->len+1;
                }
                if(_if_conditional28=begin<0,                _if_conditional28) {
                    begin=0;
                }
                if(_if_conditional29=tail>=self->len,                _if_conditional29) {
                    tail=self->len;
                }
                it_60=self->head;
                i_61=0;
                while(_while_condtional9=it_60!=((void*)0),                _while_condtional9) {
                    if(_if_conditional30=i_61>=begin&&i_61<tail,                    _if_conditional30) {
                        list$1charph_push_back(result_59,(char*)come_increment_ref_count(it_60->item));
                    }
                    it_60=it_60->next;
                    i_61++;
                }
                __result58__ = __result_obj__ = result_59;
                come_call_finalizer3(result_59,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result58__;
                come_call_finalizer3(result_59,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result56__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result56__;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_57;
_Bool _while_condtional8;
struct list_item$1charph* prev_it_58;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_57, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_58, 0, sizeof(struct list_item$1charph*));
                        it_57=self->head;
                        while(_while_condtional8=it_57!=((void*)0),                        _while_condtional8) {
                            prev_it_58=it_57;
                            it_57=it_57->next;
                            come_call_finalizer3(prev_it_58,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional25=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional25) {
                                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
                            if(_if_conditional31=self->len==0,                            _if_conditional31) {
                                litem_62=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value90=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 221, "list_item$1charph"))));
                                come_call_finalizer3(right_value90,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_62->prev=((void*)0);
                                litem_62->next=((void*)0);
                                __dec_obj14=litem_62->item;
                                litem_62->item=(char*)come_increment_ref_count(item);
                                __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_62;
                                self->head=litem_62;
                            }
                            else {
                                if(_if_conditional32=self->len==1,                                _if_conditional32) {
                                    litem_63=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value91=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 231, "list_item$1charph"))));
                                    come_call_finalizer3(right_value91,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_63->prev=self->head;
                                    litem_63->next=((void*)0);
                                    __dec_obj15=litem_63->item;
                                    litem_63->item=(char*)come_increment_ref_count(item);
                                    __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail=litem_63;
                                    self->head->next=litem_63;
                                }
                                else {
                                    litem_64=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value92=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 241, "list_item$1charph"))));
                                    come_call_finalizer3(right_value92,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_64->prev=self->tail;
                                    litem_64->next=((void*)0);
                                    __dec_obj16=litem_64->item;
                                    litem_64->item=(char*)come_increment_ref_count(item);
                                    __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail->next=litem_64;
                                    self->tail=litem_64;
                                }
                            }
                            self->len++;
                            __result57__ = __result_obj__ = self;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result57__;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_map2(struct list$1charph* self, void* parent, char* (*block)(void*,char*)){
void* __result_obj__;
void* right_value94;
void* right_value95;
struct list$1charph* result_65;
struct list_item$1charph* it_66;
_Bool _while_condtional10;
void* right_value96;
struct list$1charph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
right_value95 = (void*)0;
memset(&result_65, 0, sizeof(struct list$1charph*));
memset(&it_66, 0, sizeof(struct list_item$1charph*));
right_value96 = (void*)0;
                result_65=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value95=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value94=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 931, "list$1charph"))))))));
                come_call_finalizer3(right_value94,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value95,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                it_66=self->head;
                while(_while_condtional10=it_66!=((void*)0),                _while_condtional10) {
                    list$1charph_push_back(result_65,(char*)come_increment_ref_count(((char*)(right_value96=block(parent,it_66->item)))));
                    right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    it_66=it_66->next;
                }
                __result59__ = __result_obj__ = result_65;
                come_call_finalizer3(result_65,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result59__;
                come_call_finalizer3(result_65,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

char* method_block1_02transpilec(struct __current_stack1__* parent, char* it){
void* __result_obj__;
void* right_value97;
char* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value97 = (void*)0;
                __result60__ = __result_obj__ = ((char*)(right_value97=xsprintf("%d %s",++(*(parent->n_56)),it)));
                right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result60__;
}

static char* list$1charph_join(struct list$1charph* self, char* sep){
void* __result_obj__;
void* right_value99;
void* right_value100;
struct buffer* buf_67;
int n_68;
char* it_71;
_Bool _if_conditional38;
void* right_value101;
char* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value99 = (void*)0;
right_value100 = (void*)0;
memset(&buf_67, 0, sizeof(struct buffer*));
memset(&n_68, 0, sizeof(int));
memset(&it_71, 0, sizeof(char*));
right_value101 = (void*)0;
                buf_67=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value100=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value99=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1026, "buffer"))))))));
                come_call_finalizer3(right_value99,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value100,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                n_68=0;
                for(                it_71=list$1charph_begin(self);                !list$1charph_end(self);                it_71=list$1charph_next(self)                ){
                    buffer_append_str(buf_67,it_71);
                    if(_if_conditional38=n_68<list$1charph_length(self)-1,                    _if_conditional38) {
                        buffer_append_str(buf_67,sep);
                    }
                    n_68++;
                }
                __result70__ = __result_obj__ = ((char*)(right_value101=buffer_to_string(buf_67)));
                come_call_finalizer3(buf_67,buffer_finalize, 0, 0, 0, 0, (void*)0);
                right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result70__;
                come_call_finalizer3(buf_67,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional33;
char* result_69;
char* __result61__;
_Bool _if_conditional34;
char* __result62__;
char* result_70;
char* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_69, 0, sizeof(char*));
memset(&result_70, 0, sizeof(char*));
                    if(_if_conditional33=self==((void*)0),                    _if_conditional33) {
                        memset(&result_69,0,sizeof(char*));
                        __result61__ = __result_obj__ = result_69;
                        return __result61__;
                    }
                    self->it=self->head;
                    if(self->it) {
                        __result62__ = __result_obj__ = self->it->item;
                        return __result62__;
                    }
                    memset(&result_70,0,sizeof(char*));
                    __result63__ = __result_obj__ = result_70;
                    return __result63__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result64__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result64__ = self==((void*)0)||self->it==((void*)0);
                    return __result64__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional35;
char* result_72;
char* __result65__;
_Bool _if_conditional36;
char* __result66__;
char* result_73;
char* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_72, 0, sizeof(char*));
memset(&result_73, 0, sizeof(char*));
                    if(_if_conditional35=self==((void*)0)||self->it==((void*)0),                    _if_conditional35) {
                        memset(&result_72,0,sizeof(char*));
                        __result65__ = __result_obj__ = result_72;
                        return __result65__;
                    }
                    self->it=self->it->next;
                    if(self->it) {
                        __result66__ = __result_obj__ = self->it->item;
                        return __result66__;
                    }
                    memset(&result_73,0,sizeof(char*));
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
                        __result69__ = self->len;
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
char* output_file_name_74;
void* right_value105;
_Bool __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
memset(&output_file_name_74, 0, sizeof(char*));
right_value105 = (void*)0;
    output_file_name_74=(char*)come_increment_ref_count(((char*)(right_value104=xsprintf("%s.c",info->sname))));
    right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    string_write(((char*)(right_value105=__builtin_string("int main(int argc, char** argv) { return 0; }\n"))),output_file_name_74,(_Bool)0);
    right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result72__ = (_Bool)1;
    output_file_name_74 = come_decrement_ref_count2(output_file_name_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result72__;
    output_file_name_74 = come_decrement_ref_count2(output_file_name_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void clear_tmp_file(struct sInfo* info){
void* __result_obj__;
char* input_file_name_75;
_Bool _if_conditional39;
void* right_value106;
void* right_value107;
memset(&__result_obj__, 0, sizeof(void*));
memset(&input_file_name_75, 0, sizeof(char*));
right_value106 = (void*)0;
right_value107 = (void*)0;
    input_file_name_75=(char*)come_increment_ref_count(info->sname);
    if(_if_conditional39=input_file_name_75!=((void*)0)&&string_operator_not_equals(input_file_name_75,""),    _if_conditional39) {
        system(((char*)(right_value107=xsprintf("rm -f \%s.*",((char*)(right_value106=string_to_string(input_file_name_75)))))));
        right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    input_file_name_75 = come_decrement_ref_count2(input_file_name_75, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void clear_tmp_file_without_object_file(struct sInfo* info){
void* __result_obj__;
char* input_file_name_76;
_Bool _if_conditional40;
void* right_value108;
void* right_value109;
void* right_value110;
memset(&__result_obj__, 0, sizeof(void*));
memset(&input_file_name_76, 0, sizeof(char*));
right_value108 = (void*)0;
right_value109 = (void*)0;
right_value110 = (void*)0;
    input_file_name_76=(char*)come_increment_ref_count(info->sname);
    if(_if_conditional40=input_file_name_76!=((void*)0)&&string_operator_not_equals(input_file_name_76,""),    _if_conditional40) {
        system(((char*)(right_value110=xsprintf("rm -f \%s.i* \%s.c*",((char*)(right_value108=string_to_string(input_file_name_76))),((char*)(right_value109=string_to_string(input_file_name_76)))))));
        right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    input_file_name_76 = come_decrement_ref_count2(input_file_name_76, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void clear_tmp_file_without_object_file_and_ccfile(struct sInfo* info){
void* __result_obj__;
char* input_file_name_77;
_Bool _if_conditional41;
void* right_value111;
void* right_value112;
void* right_value113;
memset(&__result_obj__, 0, sizeof(void*));
memset(&input_file_name_77, 0, sizeof(char*));
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
    input_file_name_77=(char*)come_increment_ref_count(info->sname);
    if(_if_conditional41=input_file_name_77!=((void*)0)&&string_operator_not_equals(input_file_name_77,""),    _if_conditional41) {
        system(((char*)(right_value113=xsprintf("rm -f \%s.i* \%s.c.out",((char*)(right_value111=string_to_string(input_file_name_77))),((char*)(right_value112=string_to_string(input_file_name_77)))))));
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
char* __dec_obj17;
void* right_value115;
char* __dec_obj18;
void* right_value116;
char* cmd_80;
_Bool exist_common_h_81;
struct _IO_FILE* f_82;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
int rc_83;
_Bool _if_conditional47;
void* right_value117;
void* right_value118;
char* cmd2_84;
_Bool _if_conditional48;
int rc_85;
_Bool _if_conditional49;
void* right_value119;
char* command2_86;
_Bool _if_conditional50;
void* right_value120;
void* right_value121;
char* cmd3_87;
_Bool _if_conditional51;
int rc_88;
void* right_value122;
char* command2_89;
_Bool _if_conditional52;
_Bool _if_conditional53;
void* right_value123;
void* right_value124;
char* cmd4_90;
void* right_value125;
char* command_91;
_Bool _if_conditional54;
void* right_value126;
char* command2_92;
_Bool _if_conditional55;
_Bool _if_conditional56;
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
    input_file_name_78=(char*)come_increment_ref_count(info->sname);
    if(_if_conditional42=!info->output_header_file&&info->output_file_name,    _if_conditional42) {
        __dec_obj17=output_file_name_79;
        output_file_name_79=(char*)come_increment_ref_count(((char*)(right_value114=string_operator_add(info->output_file_name,".i"))));
        __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj18=output_file_name_79;
        output_file_name_79=(char*)come_increment_ref_count(((char*)(right_value115=string_operator_add(info->sname,".i"))));
        __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    cmd_80=(char*)come_increment_ref_count(((char*)(right_value116=xsprintf("uname -a | grep Darwin 1> /dev/null 2>/dev/null"))));
    right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    exist_common_h_81=(_Bool)0;
    {
        f_82=fopen("common.h","r");
        if(f_82) {
            exist_common_h_81=(_Bool)1;
        }
        if(_if_conditional44=string_operator_equals(info->output_file_name,"common.h"),        _if_conditional44) {
            exist_common_h_81=(_Bool)0;
        }
        if(f_82) {
            fclose(f_82);
        }
    }
    if(_if_conditional46=!gCommonHeader,    _if_conditional46) {
        exist_common_h_81=(_Bool)0;
    }
    rc_83=system(cmd_80);
    if(_if_conditional47=rc_83==0,    _if_conditional47) {
        cmd2_84=(char*)come_increment_ref_count(((char*)(right_value118=xsprintf("gcc -E -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DCOMELANG2 -D__DARWIN_ARM__ -I/opt/homebrew/opt/pcre/include -I/opt/homebrew/opt/boehmgc/include/ -U__GNUC__ %s %s > %s 2> %s.cpp.out",info->cpp_option,"/usr/local/","/usr/local/",exist_common_h_81?((char*)(right_value117=__builtin_string(" -include common.h "))):"",input_file_name_78,output_file_name_79,output_file_name_79))));
        right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(info->verbose) {
            puts(cmd2_84);
        }
        rc_85=system(cmd2_84);
        if(_if_conditional49=rc_85!=0,        _if_conditional49) {
            printf("failed to cpp(2) (%s)\n",cmd2_84);
            exit(5);
        }
        command2_86=(char*)come_increment_ref_count(((char*)(right_value119=xsprintf("grep error\\: %s.cpp.out",output_file_name_79))));
        right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(info->verbose) {
            puts(command2_86);
        }
        (void)system(command2_86);
        cmd2_84 = come_decrement_ref_count2(cmd2_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_86 = come_decrement_ref_count2(command2_86, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        cmd3_87=(char*)come_increment_ref_count(((char*)(right_value121=xsprintf("cpp -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DCOMELANG2 -U__GNUC__ %s %s > %s 2> %s.cpp.out",info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",exist_common_h_81?((char*)(right_value120=__builtin_string(" -include common.h "))):"",input_file_name_78,output_file_name_79,output_file_name_79))));
        right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(info->verbose) {
            puts(cmd3_87);
        }
        rc_88=system(cmd3_87);
        command2_89=(char*)come_increment_ref_count(((char*)(right_value122=xsprintf("grep error\\: %s.cpp.out",output_file_name_79))));
        right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(info->verbose) {
            puts(command2_89);
        }
        (void)system(command2_89);
        if(_if_conditional53=rc_88!=0,        _if_conditional53) {
            cmd4_90=(char*)come_increment_ref_count(((char*)(right_value124=xsprintf("cpp -I. %s -DPREFIX=%s -I%s/include -C %s %s > %s 2> %s.cpp.out",info->cpp_option,"/usr/local/","/usr/local/",exist_common_h_81?((char*)(right_value123=__builtin_string(" -include common.h "))):"",input_file_name_78,output_file_name_79,output_file_name_79))));
            right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            command_91=(char*)come_increment_ref_count(((char*)(right_value125=xsprintf("clang -o %s -c %s %s >> %s.out 2>&1",output_file_name_79,input_file_name_78,info->clang_option,input_file_name_78))));
            right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(info->verbose) {
                puts(cmd4_90);
            }
            rc_88=system(cmd4_90);
            command2_92=(char*)come_increment_ref_count(((char*)(right_value126=xsprintf("grep error\\: %s.cpp.out",output_file_name_79))));
            right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(info->verbose) {
                puts(command2_92);
            }
            (void)system(command2_92);
            if(_if_conditional56=rc_88!=0,            _if_conditional56) {
                printf("failed to cpp(2) (%s)\n",cmd4_90);
                exit(5);
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
char* input_file_name_93;
char* output_file_name_94;
_Bool _if_conditional57;
void* right_value128;
char* __dec_obj19;
void* right_value129;
char* __dec_obj20;
void* right_value130;
char* command_95;
_Bool _if_conditional58;
int rc_96;
void* right_value131;
char* command2_97;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool __result74__;
_Bool _if_conditional61;
void* right_value132;
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
    input_file_name_93=(char*)come_increment_ref_count(((char*)(right_value127=string_operator_add(info->sname,".c"))));
    right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    output_file_name_94=((void*)0);
    if(_if_conditional57=info->output_file_name&&output_object_file,    _if_conditional57) {
        __dec_obj19=output_file_name_94;
        output_file_name_94=(char*)come_increment_ref_count(((char*)(right_value128=__builtin_string(info->output_file_name))));
        __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj20=output_file_name_94;
        output_file_name_94=(char*)come_increment_ref_count(((char*)(right_value129=string_operator_add(info->sname,".o"))));
        __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    command_95=(char*)come_increment_ref_count(((char*)(right_value130=xsprintf("clang -o %s -c %s %s >> %s.out 2>&1",output_file_name_94,input_file_name_93,info->clang_option,input_file_name_93))));
    right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(info->verbose) {
        puts(command_95);
    }
    rc_96=system(command_95);
    command2_97=(char*)come_increment_ref_count(((char*)(right_value131=xsprintf("grep error\\: %s.out",input_file_name_93))));
    right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(info->verbose) {
        puts(command2_97);
    }
    (void)system(command2_97);
    if(_if_conditional60=rc_96!=0,    _if_conditional60) {
        printf("%s %d: clang is faild\n",info->sname,info->sline);
        __result74__ = (_Bool)0;
        input_file_name_93 = come_decrement_ref_count2(input_file_name_93, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        output_file_name_94 = come_decrement_ref_count2(output_file_name_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command_95 = come_decrement_ref_count2(command_95, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_97 = come_decrement_ref_count2(command2_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result74__;
    }
    if(_if_conditional61=!output_object_file,    _if_conditional61) {
        list$1charph_push_back(object_files,(char*)come_increment_ref_count(((char*)(right_value132=__builtin_string(output_file_name_94)))));
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
char* output_file_name_98;
_Bool _if_conditional62;
void* right_value133;
char* __dec_obj21;
void* right_value134;
char* __dec_obj22;
void* right_value135;
void* right_value136;
struct buffer* command_99;
void* right_value137;
struct list$1charph* o2_saved_100;
char* it_101;
void* right_value138;
_Bool _if_conditional63;
_Bool _if_conditional64;
void* right_value139;
char* cmd_102;
int rc_103;
_Bool _if_conditional65;
void* right_value140;
_Bool _if_conditional66;
void* right_value141;
_Bool _if_conditional67;
void* right_value142;
void* right_value143;
_Bool _if_conditional68;
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
    output_file_name_98=((void*)0);
    if(info->output_file_name) {
        __dec_obj21=output_file_name_98;
        output_file_name_98=(char*)come_increment_ref_count(((char*)(right_value133=__builtin_string(info->output_file_name))));
        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj22=output_file_name_98;
        output_file_name_98=(char*)come_increment_ref_count(((char*)(right_value134=xnoextname(info->sname))));
        __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    command_99=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value136=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value135=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 265, "buffer"))))))));
    come_call_finalizer3(right_value135,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value136,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(command_99,((char*)(right_value137=xsprintf("clang -o %s -L%s/lib -L%s/lib ",output_file_name_98,getenv("HOME"),"/usr/local/"))));
    right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    o2_saved_100=(object_files),it_101=list$1charph_begin((o2_saved_100));    !list$1charph_end((o2_saved_100));    it_101=list$1charph_next((o2_saved_100))    ){
        buffer_append_str(command_99,((char*)(right_value138=xsprintf("%s ",it_101))));
        right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    if(gComeGC) {
        buffer_append_str(command_99,"-L/usr/local/lib -lneo-c-gc ");
    }
    else {
        if(gComeLink) {
            buffer_append_str(command_99,"-L/usr/local/lib -lneo-c ");
        }
        else {
            buffer_append_str(command_99,"-L/usr/local/lib ");
        }
    }
    cmd_102=(char*)come_increment_ref_count(((char*)(right_value139=xsprintf("which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null"))));
    right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    rc_103=system(cmd_102);
    if(_if_conditional65=rc_103==0,    _if_conditional65) {
        buffer_append_str(command_99," -L/opt/homebrew/opt/pcre/lib ");
    }
    buffer_append_str(command_99,((char*)(right_value140=xsprintf(" %s ",info->clang_option))));
    right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(gComeGC) {
        buffer_append_str(command_99,((char*)(right_value141=xsprintf(" -L/opt/homebrew/opt/boehmgc/lib -lgc "))));
        right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    if(info->verbose) {
        puts(((char*)(right_value142=buffer_to_string(command_99))));
        right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    rc_103=system(((char*)(right_value143=buffer_to_string(command_99))));
    right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional68=rc_103!=0,    _if_conditional68) {
        printf("%s %d: clang is faild\n",info->sname,info->sline);
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
char* project_name_104;
void* right_value145;
void* right_value146;
void* right_value147;
char* project_name_debug_105;
void* right_value148;
char* cc_106;
void* right_value149;
char* install_107;
void* right_value150;
char* libs_108;
void* right_value151;
char* os_109;
void* right_value152;
char* prefix_110;
void* right_value153;
char* cflags_111;
void* right_value154;
char* cflags_debug_112;
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
    project_name_104=(char*)come_increment_ref_count(((char*)(right_value144=__builtin_string(argv[2]))));
    right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    project_name_debug_105=(char*)come_increment_ref_count(((char*)(right_value147=string_operator_add(((char*)(right_value145=__builtin_string(argv[2]))),((char*)(right_value146=__builtin_string("-debug")))))));
    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    cc_106=(char*)come_increment_ref_count(((char*)(right_value148=__builtin_string("neo-c"))));
    right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    install_107=(char*)come_increment_ref_count(((char*)(right_value149=__builtin_string("install"))));
    right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    libs_108=(char*)come_increment_ref_count(((char*)(right_value150=__builtin_string("-lpcre"))));
    right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    os_109=(char*)come_increment_ref_count(((char*)(right_value151=__builtin_string("linux"))));
    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    prefix_110=(char*)come_increment_ref_count(((char*)(right_value152=__builtin_string("/usr/local/"))));
    right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    cflags_111=(char*)come_increment_ref_count(((char*)(right_value153=__builtin_string(" -common-header -O2 "))));
    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    cflags_debug_112=(char*)come_increment_ref_count(((char*)(right_value154=__builtin_string(" -common-header -gdwarf-4 -cg "))));
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_or_conditional1=mkdir(project_name_104,448|56|4|1),    _or_conditional1 != 0) {
        (come_push_stackframe("02transpile.c", 317, 0),__exception_result_var_b1=die("mkdir error"), come_pop_stackframe(), __exception_result_var_b1);
    }
    charp_write(((char*)(right_value181=xsprintf("\#########################################\n\# istalled directories\n\#########################################\nprefix=\%s\nexec_prefix=${prefix}\nbindir=${exec_prefix}/bin\ndatadir=${datarootdir}\nmandir=${datarootdir}/man\nsharedstatedir=${prefix}/\%s\nsysconfdir=${prefix}/etc/\%s\nincludedir=${prefix}/include/\%s\ndatarootdir=${prefix}/share/\%s\ndocdir=${datarootdir}/doc\nlibdir=${exec_prefix}/lib\n\n\#########################################\n\# environmnet variables\n\#########################################\nCC=\%s\nINSTALL=\%s\nCFLAGS=\%s\nCFLAGS_DEBUG=\%s\nLIBS=\%s\nOS=\%s\nDESTDIR=\%s\nSRCS=$(wildcard *.c)\nSINGLE_SRCS=$(filter-out %%.c.c, $(SRCS))\nOBJS=$(SINGLE_SRCS:.c=.o)\nDEBUG_OBJS=$(SINGLE_SRCS:.c=.debug.o)\nTARGET=\%s\nTARGET_DEBUG=\%s\n\n\#########################################\n\# main\n\#########################################\nall: $(TARGET)\n\n$(TARGET): $(OBJS)\n\t$(CC) $(CFLAGS) $^ -o $@\n\n$(TARGET_DEBUG): $(DEBUG_OBJS)\n\t$(CC) $(CFLAGS_DEBUG) $^ -o $@\n\n%%.o: %%.c\n\t$(CC) $(CFLAGS) -c $< -o $@\n\n%%.debug.o: %%.c\n\t$(CC) $(CFLAGS_DEBUG) -c $< -o $@\n\n\#########################################\n\# header\n\#########################################\n\nheader: common.h\n\ncommon.h: $(SINGLE_SRCS)\n\tneo-c header -common-header $(SINGLE_SRCS)\n\n\#########################################\n\# install\n\#########################################\ninstall:\n\tmkdir -p \"$(DESTDIR)/bin\"\n\t$(INSTALL) -m 755 ./\%s \"$(DESTDIR)/bin\"\n\tmkdir -p \"$(DESTDIR)/include\"\n\tmkdir -p \"$(DESTDIR)/lib\"\n\tmkdir -p \"$(DESTDIR)/share/doc/\%s\"\n\t$(INSTALL) -m 644 README.md \"$(DESTDIR)/share/doc/\%s/README.md\"\n\n\#########################################\n\# clean\n\#########################################\nclean:\n\trm -fR *.o *.c.i *.c.out *.c.c \%s *.log *.out common.h \%s\n\n\#########################################\n\# uninstall\n\#########################################\nuninstall:\n\trm -f \"$(DESTDIR)\"/bin/\%s\n\trm -f \"$(DESTDIR)/share/doc/\%s/README.md\"\n\nrun: \%s\n\trm -f *.log\n\t./\%s\n\ncompile: \%s\n\ndebug: \%s\n\trm -f *.log\n\t./\%s\n",((char*)(right_value155=string_to_string(prefix_110))),((char*)(right_value156=string_to_string(project_name_104))),((char*)(right_value157=string_to_string(project_name_104))),((char*)(right_value158=string_to_string(project_name_104))),((char*)(right_value159=string_to_string(project_name_104))),((char*)(right_value160=string_to_string(cc_106))),((char*)(right_value161=string_to_string(install_107))),((char*)(right_value162=string_to_string(cflags_111))),((char*)(right_value163=string_to_string(cflags_debug_112))),((char*)(right_value164=string_to_string(libs_108))),((char*)(right_value165=string_to_string(os_109))),((char*)(right_value166=string_to_string(prefix_110))),((char*)(right_value167=string_to_string(project_name_104))),((char*)(right_value168=string_to_string(project_name_debug_105))),((char*)(right_value169=string_to_string(project_name_104))),((char*)(right_value170=string_to_string(project_name_104))),((char*)(right_value171=string_to_string(project_name_104))),((char*)(right_value172=string_to_string(project_name_104))),((char*)(right_value173=string_to_string(project_name_debug_105))),((char*)(right_value174=string_to_string(project_name_104))),((char*)(right_value175=string_to_string(project_name_104))),((char*)(right_value176=string_to_string(project_name_104))),((char*)(right_value177=string_to_string(project_name_104))),((char*)(right_value178=string_to_string(project_name_104))),((char*)(right_value179=string_to_string(project_name_debug_105))),((char*)(right_value180=string_to_string(project_name_debug_105)))))),((char*)(right_value183=xsprintf("\%s/Makefile",((char*)(right_value182=string_to_string(project_name_104)))))),(_Bool)0);
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
_Bool _or_conditional2;
_Bool __exception_result_var_b2;
_Bool __result79__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_or_conditional2=system("make run"),    _or_conditional2 != 0) {
        (come_push_stackframe("02transpile.c", 418, 1),__exception_result_var_b2=die("system"), come_pop_stackframe(), __exception_result_var_b2);
    }
    __result79__ = (_Bool)1;
    return __result79__;
}

_Bool make_header_project(int argc, char** argv){
void* __result_obj__;
_Bool _or_conditional3;
_Bool __exception_result_var_b3;
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_or_conditional3=system("make header"),    _or_conditional3 != 0) {
        (come_push_stackframe("02transpile.c", 425, 2),__exception_result_var_b3=die("system"), come_pop_stackframe(), __exception_result_var_b3);
    }
    __result80__ = (_Bool)1;
    return __result80__;
}

_Bool compile_project(int argc, char** argv){
void* __result_obj__;
_Bool _or_conditional4;
_Bool __exception_result_var_b4;
_Bool __result81__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_or_conditional4=system("make compile"),    _or_conditional4 != 0) {
        (come_push_stackframe("02transpile.c", 432, 3),__exception_result_var_b4=die("system"), come_pop_stackframe(), __exception_result_var_b4);
    }
    __result81__ = (_Bool)1;
    return __result81__;
}

_Bool debug_run_project(int argc, char** argv){
void* __result_obj__;
_Bool _or_conditional5;
_Bool __exception_result_var_b5;
_Bool __result82__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_or_conditional5=system("make debug"),    _or_conditional5 != 0) {
        (come_push_stackframe("02transpile.c", 439, 4),__exception_result_var_b5=die("system"), come_pop_stackframe(), __exception_result_var_b5);
    }
    __result82__ = (_Bool)1;
    return __result82__;
}

_Bool clean_project(int argc, char** argv){
void* __result_obj__;
_Bool _or_conditional6;
_Bool __exception_result_var_b6;
_Bool __result83__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_or_conditional6=system("make clean"),    _or_conditional6 != 0) {
        (come_push_stackframe("02transpile.c", 446, 5),__exception_result_var_b6=die("system"), come_pop_stackframe(), __exception_result_var_b6);
    }
    __result83__ = (_Bool)1;
    return __result83__;
}

_Bool install_project(int argc, char** argv, char* prefix){
void* __result_obj__;
void* right_value184;
void* right_value185;
_Bool _or_conditional7;
_Bool __exception_result_var_b7;
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value184 = (void*)0;
right_value185 = (void*)0;
    if(_or_conditional7=system(((char*)(right_value185=xsprintf("make install DESTDIR=\%s",((char*)(right_value184=charp_to_string(prefix))))))),    right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
    right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
    _or_conditional7 != 0) {
        (come_push_stackframe("02transpile.c", 453, 6),__exception_result_var_b7=die("system"), come_pop_stackframe(), __exception_result_var_b7);
    }
    __result84__ = (_Bool)1;
    return __result84__;
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
int i_163;
void* right_value228;
char* generics_type_164;
void* right_value229;
void* right_value230;
int i_165;
void* right_value231;
char* generics_type_166;
void* right_value232;
void* right_value233;
int rc_168;
_Bool _if_conditional139;
void* right_value234;
void* right_value235;
void* right_value236;
void* right_value237;
char* type_name_169;
void* right_value238;
void* right_value239;
struct sType* type_170;
void* right_value240;
char* __dec_obj23;
void* right_value244;
void* right_value245;
void* right_value246;
struct sClass* klass_192;
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
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value192=__builtin_string("int")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value194=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value193=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 460, "sClass")))),"int",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value193,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value194,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value195=__builtin_string("short")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value197=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value196=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 461, "sClass")))),"short",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value196,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value197,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value198=__builtin_string("long")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value200=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value199=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 462, "sClass")))),"long",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value199,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value200,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value201=__builtin_string("char")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value203=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value202=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 463, "sClass")))),"char",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value202,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value203,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value204=__builtin_string("bool")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value206=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value205=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 464, "sClass")))),"bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value205,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value206,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value207=__builtin_string("_Bool")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value209=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value208=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 465, "sClass")))),"_Bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value208,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value209,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value210=__builtin_string("void")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value212=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value211=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 466, "sClass")))),"void",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value211,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value212,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value213=__builtin_string("float")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value215=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value214=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 467, "sClass")))),"float",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)))));
    right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value214,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value215,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value216=__builtin_string("double")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value218=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value217=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 468, "sClass")))),"double",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)))));
    right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value217,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value218,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value219=__builtin_string("lambda")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value221=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value220=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 469, "sClass")))),"lambda",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value220,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value221,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value222=__builtin_string("__uint128_t")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value224=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value223=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 470, "sClass")))),"__uint128_t",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value223,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value224,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value225=__builtin_string("__int128")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value227=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value226=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 471, "sClass")))),"__int128",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value226,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value227,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    for(    i_163=0;    i_163<12;    i_163++    ){
        generics_type_164=(char*)come_increment_ref_count(((char*)(right_value228=xsprintf("generics_type%d",i_163))));
        right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(generics_type_164),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value230=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value229=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 474, "sClass")))),generics_type_164,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,i_163,-1,(_Bool)0,info)))));
        come_call_finalizer3(right_value229,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value230,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        generics_type_164 = come_decrement_ref_count2(generics_type_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    for(    i_165=0;    i_165<7;    i_165++    ){
        generics_type_166=(char*)come_increment_ref_count(((char*)(right_value231=xsprintf("mgenerics_type%d",i_165))));
        right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(generics_type_166),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value233=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value232=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 478, "sClass")))),generics_type_166,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,-1,i_165,(_Bool)0,info)))));
        come_call_finalizer3(right_value232,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value233,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        generics_type_166 = come_decrement_ref_count2(generics_type_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    char cmd_167[1024];
    memset(&cmd_167, 0, sizeof(char)    *(1024)    );
    snprintf(cmd_167,1024,"which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null");
    rc_168=system(cmd_167);
    if(_if_conditional139=rc_168==0,    _if_conditional139) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value234=__builtin_string("__builtin_va_list")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value236=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value235=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 486, "sClass")))),"__builtin_va_list",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
        right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value235,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value236,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        type_name_169=(char*)come_increment_ref_count(((char*)(right_value237=__builtin_string("__builtin_va_list"))));
        right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        type_170=(struct sType*)come_increment_ref_count(((struct sType*)(right_value239=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value238=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 490, "sType")))),"__builtin_va_list",(_Bool)0,info))));
        come_call_finalizer3(right_value238,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value239,sType_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj23=type_170->mOriginalTypeName;
        type_170->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value240=__builtin_string("__builtin_va_list"))));
        __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(((char*)(right_value244=__builtin_string(type_name_169)))),(struct sType*)come_increment_ref_count(type_170));
        right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        type_name_169 = come_decrement_ref_count2(type_name_169, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_170,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        klass_192=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value246=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value245=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 498, "sClass")))),"__builtin_va_list",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
        come_call_finalizer3(right_value245,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value246,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        list$1tuple2$2charphsTypephph_push_back(klass_192->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value254=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value253=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 500, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value250=__builtin_string("v1")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value252=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value251=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 500, "sType")))),"char*",(_Bool)0,info)))))))));
        right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value251,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value252,sType_finalize, 0, 1, 0, 0, __result_obj__);
        right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value254,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1tuple2$2charphsTypephph_push_back(klass_192->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value259=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value258=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 501, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value255=__builtin_string("v2")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value257=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value256=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 501, "sType")))),"char*",(_Bool)0,info)))))))));
        right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value256,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value257,sType_finalize, 0, 1, 0, 0, __result_obj__);
        right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value259,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1tuple2$2charphsTypephph_push_back(klass_192->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value264=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value263=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 502, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value260=__builtin_string("v3")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value262=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value261=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 502, "sType")))),"char*",(_Bool)0,info)))))))));
        right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value261,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value262,sType_finalize, 0, 1, 0, 0, __result_obj__);
        right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value264,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1tuple2$2charphsTypephph_push_back(klass_192->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value269=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value268=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 503, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value265=__builtin_string("v4")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value267=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value266=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 503, "sType")))),"int",(_Bool)0,info)))))))));
        right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value266,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value267,sType_finalize, 0, 1, 0, 0, __result_obj__);
        right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value269,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1tuple2$2charphsTypephph_push_back(klass_192->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value274=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value273=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 504, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value270=__builtin_string("v5")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value272=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value271=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 504, "sType")))),"int",(_Bool)0,info)))))))));
        right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value271,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value272,sType_finalize, 0, 1, 0, 0, __result_obj__);
        right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value274,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value275=__builtin_string("__builtin_va_list")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value329=sClass_clone(klass_192)))));
        right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value329,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(klass_192,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional69;
unsigned int hash_136;
unsigned int it_137;
_Bool _while_condtional16;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool same_key_exist_154;
char* it2_157;
_Bool _if_conditional135;
_Bool _if_conditional136;
struct map$2charphsClassph* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_136, 0, sizeof(unsigned int));
memset(&it_137, 0, sizeof(unsigned int));
memset(&same_key_exist_154, 0, sizeof(_Bool));
memset(&it2_157, 0, sizeof(char*));
        if(_if_conditional69=self->len*10>=self->size,        _if_conditional69) {
            map$2charphsClassph_rehash(self);
        }
        hash_136=string_get_hash_key(key)%self->size;
        it_137=hash_136;
        while(_while_condtional16=(_Bool)1,        _while_condtional16) {
            if(_if_conditional104=self->item_existance[it_137],            _if_conditional104) {
                if(_if_conditional105=string_equals(self->keys[it_137],key),                _if_conditional105) {
                    if(_if_conditional106=1,                    _if_conditional106) {
                        list$1charp_remove(self->key_list,self->keys[it_137]);
                        self->keys[it_137] = come_decrement_ref_count2(self->keys[it_137], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        self->keys[it_137]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charp_remove(self->key_list,self->keys[it_137]);
                        self->keys[it_137]=key;
                    }
                    if(_if_conditional126=1,                    _if_conditional126) {
                        come_call_finalizer3(self->items[it_137],sClass_finalize, 0, 0, 0, 0, (void*)0);
                        self->items[it_137]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_137]=item;
                    }
                    break;
                }
                it_137++;
                if(_if_conditional127=it_137>=self->size,                _if_conditional127) {
                    it_137=0;
                }
                else {
                    if(_if_conditional128=it_137==hash_136,                    _if_conditional128) {
                        printf("unexpected error in map.insert\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                self->item_existance[it_137]=(_Bool)1;
                if(_if_conditional129=1,                _if_conditional129) {
                    self->keys[it_137]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_137]=key;
                }
                if(_if_conditional130=1,                _if_conditional130) {
                    self->items[it_137]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_137]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_154=(_Bool)0;
        for(        it2_157=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_157=list$1charp_next(self->key_list)        ){
            if(_if_conditional135=string_equals(it2_157,key),            _if_conditional135) {
                same_key_exist_154=(_Bool)1;
            }
        }
        if(_if_conditional136=!same_key_exist_154,        _if_conditional136) {
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
int size_113;
void* right_value186;
char** keys_114;
void* right_value187;
struct sClass** items_115;
void* right_value188;
_Bool* item_existance_122;
int len_123;
char* it_126;
struct sClass* default_value_129;
struct sClass* it2_132;
unsigned int hash_133;
int n_134;
_Bool _while_condtional15;
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
struct sClass* default_value_135;
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
memset(&it2_132, 0, sizeof(struct sClass*));
memset(&hash_133, 0, sizeof(unsigned int));
memset(&n_134, 0, sizeof(int));
memset(&default_value_135, 0, sizeof(struct sClass*));
                size_113=self->size*10;
                keys_114=(char**)come_increment_ref_count(((char**)(right_value186=(char**)come_calloc(1, sizeof(char*)*(1*(size_113)), "./neo-c.h", 1317, "char*%"))));
                right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                items_115=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value187=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_113)), "./neo-c.h", 1318, "sClass*%"))));
                come_call_finalizer3(right_value187,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                item_existance_122=(_Bool*)come_increment_ref_count(((_Bool*)(right_value188=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_113)), "./neo-c.h", 1319, "bool"))));
                right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                len_123=0;
                for(                it_126=map$2charphsClassph_begin(self);                !map$2charphsClassph_end(self);                it_126=map$2charphsClassph_next(self)                ){
                    memset(&default_value_129,0,sizeof(struct sClass*));
                    it2_132=map$2charphsClassph_at(self,it_126,default_value_129);
                    hash_133=string_get_hash_key(it_126)%size_113;
                    n_134=hash_133;
                    while(_while_condtional15=(_Bool)1,                    _while_condtional15) {
                        if(_if_conditional101=item_existance_122[n_134],                        _if_conditional101) {
                            n_134++;
                            if(_if_conditional102=n_134>=size_113,                            _if_conditional102) {
                                n_134=0;
                            }
                            else {
                                if(_if_conditional103=n_134==hash_133,                                _if_conditional103) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    stackframe();
                                    exit(2);
                                }
                            }
                        }
                        else {
                            item_existance_122[n_134]=(_Bool)1;
                            keys_114[n_134]=it_126;
                            items_115[n_134]=map$2charphsClassph_at(self,it_126,default_value_135);
                            len_123++;
                            break;
                        }
                    }
                }
                come_free((char*)self->items);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_free((char*)self->keys);
                self->keys=keys_114;
                self->items=items_115;
                self->item_existance=item_existance_122;
                self->size=size_113;
                self->len=len_123;
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional70;
_Bool _if_conditional71;
_Bool _if_conditional91;
_Bool _if_conditional92;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional70=self!=((void*)0)&&self->mName!=((void*)0),                    _if_conditional70) {
                        self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional71=self!=((void*)0)&&self->mFields!=((void*)0),                    _if_conditional71) {
                        come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional91=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                    _if_conditional91) {
                        self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional92=self!=((void*)0)&&self->mParentClassName!=((void*)0),                    _if_conditional92) {
                        self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
                            it_116=self->head;
                            while(_while_condtional11=it_116!=((void*)0),                            _while_condtional11) {
                                prev_it_117=it_116;
                                it_116=it_116->next;
                                come_call_finalizer3(prev_it_117,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional72;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional72=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional72) {
                                        come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
                                                    if(_if_conditional75=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                                    _if_conditional75) {
                                                        come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(_if_conditional77=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                                    _if_conditional77) {
                                                        come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(_if_conditional79=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                                    _if_conditional79) {
                                                        come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(_if_conditional80=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                                    _if_conditional80) {
                                                        self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(_if_conditional81=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                                    _if_conditional81) {
                                                        come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(_if_conditional82=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                                    _if_conditional82) {
                                                        come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(_if_conditional84=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                                    _if_conditional84) {
                                                        come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(_if_conditional85=self!=((void*)0)&&self->mParamNames!=((void*)0),                                                    _if_conditional85) {
                                                        come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(_if_conditional86=self!=((void*)0)&&self->mResultType!=((void*)0),                                                    _if_conditional86) {
                                                        come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(_if_conditional87=self!=((void*)0)&&self->mAlignas!=((void*)0),                                                    _if_conditional87) {
                                                        if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    if(_if_conditional88=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                                    _if_conditional88) {
                                                        if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    if(_if_conditional89=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                                    _if_conditional89) {
                                                        self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(_if_conditional90=self!=((void*)0)&&self->mAsmName!=((void*)0),                                                    _if_conditional90) {
                                                        self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
                                                            it_118=self->head;
                                                            while(_while_condtional12=it_118!=((void*)0),                                                            _while_condtional12) {
                                                                prev_it_119=it_118;
                                                                it_118=it_118->next;
                                                                come_call_finalizer3(prev_it_119,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                            }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional76;
memset(&__result_obj__, 0, sizeof(void*));
                                                                    if(_if_conditional76=self!=((void*)0)&&self->item!=((void*)0),                                                                    _if_conditional76) {
                                                                        come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional78;
memset(&__result_obj__, 0, sizeof(void*));
                                                            if(_if_conditional78=self!=((void*)0)&&self->v1!=((void*)0),                                                            _if_conditional78) {
                                                                come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
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
                                                            it_120=self->head;
                                                            while(_while_condtional13=it_120!=((void*)0),                                                            _while_condtional13) {
                                                                prev_it_121=it_120;
                                                                it_120=it_120->next;
                                                                come_call_finalizer3(prev_it_121,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                            }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional83;
memset(&__result_obj__, 0, sizeof(void*));
                                                                    if(_if_conditional83=self!=((void*)0)&&self->item!=((void*)0),                                                                    _if_conditional83) {
                                                                        if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                    }
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional93;
char* result_124;
char* __result85__;
_Bool _if_conditional94;
char* __result86__;
char* result_125;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_124, 0, sizeof(char*));
memset(&result_125, 0, sizeof(char*));
                    if(_if_conditional93=self==((void*)0),                    _if_conditional93) {
                        memset(&result_124,0,sizeof(char*));
                        __result85__ = __result_obj__ = result_124;
                        return __result85__;
                    }
                    self->key_list->it=self->key_list->head;
                    if(self->key_list->it) {
                        __result86__ = __result_obj__ = self->key_list->it->item;
                        return __result86__;
                    }
                    memset(&result_125,0,sizeof(char*));
                    __result87__ = __result_obj__ = result_125;
                    return __result87__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result88__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result88__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result88__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional95;
char* result_127;
char* __result89__;
_Bool _if_conditional96;
char* __result90__;
char* result_128;
char* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_127, 0, sizeof(char*));
memset(&result_128, 0, sizeof(char*));
                    if(_if_conditional95=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional95) {
                        memset(&result_127,0,sizeof(char*));
                        __result89__ = __result_obj__ = result_127;
                        return __result89__;
                    }
                    self->key_list->it=self->key_list->it->next;
                    if(self->key_list->it) {
                        __result90__ = __result_obj__ = self->key_list->it->item;
                        return __result90__;
                    }
                    memset(&result_128,0,sizeof(char*));
                    __result91__ = __result_obj__ = result_128;
                    return __result91__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_130;
unsigned int it_131;
_Bool _while_condtional14;
_Bool _if_conditional97;
_Bool _if_conditional98;
struct sClass* __result92__;
_Bool _if_conditional99;
_Bool _if_conditional100;
struct sClass* __result93__;
struct sClass* __result94__;
struct sClass* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_130, 0, sizeof(unsigned int));
memset(&it_131, 0, sizeof(unsigned int));
                        hash_130=string_get_hash_key(((char*)key))%self->size;
                        it_131=hash_130;
                        while(_while_condtional14=(_Bool)1,                        _while_condtional14) {
                            if(_if_conditional97=self->item_existance[it_131],                            _if_conditional97) {
                                if(_if_conditional98=string_equals(self->keys[it_131],key),                                _if_conditional98) {
                                    __result92__ = __result_obj__ = self->items[it_131];
                                    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result92__;
                                }
                                it_131++;
                                if(_if_conditional99=it_131>=self->size,                                _if_conditional99) {
                                    it_131=0;
                                }
                                else {
                                    if(_if_conditional100=it_131==hash_130,                                    _if_conditional100) {
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
_Bool _if_conditional107;
struct list$1charp* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_138, 0, sizeof(int));
memset(&it_139, 0, sizeof(struct list_item$1charp*));
                            it2_138=0;
                            it_139=self->head;
                            while(_while_condtional17=it_139!=((void*)0),                            _while_condtional17) {
                                if(_if_conditional107=string_equals(it_139->item,item),                                _if_conditional107) {
                                    list$1charp_delete(self,it2_138,it2_138+1);
                                    break;
                                }
                                it2_138++;
                                it_139=it_139->next;
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
                                            head+=self->len;
                                        }
                                        if(_if_conditional109=tail<0,                                        _if_conditional109) {
                                            tail+=self->len+1;
                                        }
                                        if(_if_conditional110=head>tail,                                        _if_conditional110) {
                                            tmp_140=tail;
                                            tail=head;
                                            head=tmp_140;
                                        }
                                        if(_if_conditional111=head<0,                                        _if_conditional111) {
                                            head=0;
                                        }
                                        if(_if_conditional112=tail>self->len,                                        _if_conditional112) {
                                            tail=self->len;
                                        }
                                        if(_if_conditional113=head==tail,                                        _if_conditional113) {
                                            __result96__ = __result_obj__ = self;
                                            return __result96__;
                                        }
                                        if(_if_conditional114=head==0&&tail==self->len,                                        _if_conditional114) {
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            if(_if_conditional115=head==0,                                            _if_conditional115) {
                                                it_143=self->head;
                                                i_144=0;
                                                while(_while_condtional19=it_143!=((void*)0),                                                _while_condtional19) {
                                                    if(_if_conditional116=i_144<tail,                                                    _if_conditional116) {
                                                        prev_it_145=it_143;
                                                        it_143=it_143->next;
                                                        i_144++;
                                                        come_call_finalizer3(prev_it_145,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                        self->len--;
                                                    }
                                                    else {
                                                        if(_if_conditional117=i_144==tail,                                                        _if_conditional117) {
                                                            self->head=it_143;
                                                            self->head->prev=((void*)0);
                                                            break;
                                                        }
                                                        else {
                                                            it_143=it_143->next;
                                                            i_144++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                if(_if_conditional118=tail==self->len,                                                _if_conditional118) {
                                                    it_146=self->head;
                                                    i_147=0;
                                                    while(_while_condtional20=it_146!=((void*)0),                                                    _while_condtional20) {
                                                        if(_if_conditional119=i_147==head,                                                        _if_conditional119) {
                                                            self->tail=it_146->prev;
                                                            self->tail->next=((void*)0);
                                                        }
                                                        if(_if_conditional120=i_147>=head,                                                        _if_conditional120) {
                                                            prev_it_148=it_146;
                                                            it_146=it_146->next;
                                                            i_147++;
                                                            come_call_finalizer3(prev_it_148,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_146=it_146->next;
                                                            i_147++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    it_149=self->head;
                                                    head_prev_it_150=((void*)0);
                                                    tail_it_151=((void*)0);
                                                    i_152=0;
                                                    while(_while_condtional21=it_149!=((void*)0),                                                    _while_condtional21) {
                                                        if(_if_conditional121=i_152==head,                                                        _if_conditional121) {
                                                            head_prev_it_150=it_149->prev;
                                                        }
                                                        if(_if_conditional122=i_152==tail,                                                        _if_conditional122) {
                                                            tail_it_151=it_149;
                                                        }
                                                        if(_if_conditional123=i_152>=head&&i_152<tail,                                                        _if_conditional123) {
                                                            prev_it_153=it_149;
                                                            it_149=it_149->next;
                                                            i_152++;
                                                            come_call_finalizer3(prev_it_153,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_149=it_149->next;
                                                            i_152++;
                                                        }
                                                    }
                                                    if(_if_conditional124=head_prev_it_150!=((void*)0),                                                    _if_conditional124) {
                                                        head_prev_it_150->next=tail_it_151;
                                                    }
                                                    if(_if_conditional125=tail_it_151!=((void*)0),                                                    _if_conditional125) {
                                                        tail_it_151->prev=head_prev_it_150;
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
                                                it_141=self->head;
                                                while(_while_condtional18=it_141!=((void*)0),                                                _while_condtional18) {
                                                    prev_it_142=it_141;
                                                    it_141=it_141->next;
                                                    come_call_finalizer3(prev_it_142,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional131;
char* result_155;
char* __result100__;
_Bool _if_conditional132;
char* __result101__;
char* result_156;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_155, 0, sizeof(char*));
memset(&result_156, 0, sizeof(char*));
            if(_if_conditional131=self==((void*)0),            _if_conditional131) {
                memset(&result_155,0,sizeof(char*));
                __result100__ = __result_obj__ = result_155;
                return __result100__;
            }
            self->it=self->head;
            if(self->it) {
                __result101__ = __result_obj__ = self->it->item;
                return __result101__;
            }
            memset(&result_156,0,sizeof(char*));
            __result102__ = __result_obj__ = result_156;
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
_Bool _if_conditional133;
char* result_158;
char* __result104__;
_Bool _if_conditional134;
char* __result105__;
char* result_159;
char* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_158, 0, sizeof(char*));
memset(&result_159, 0, sizeof(char*));
            if(_if_conditional133=self==((void*)0)||self->it==((void*)0),            _if_conditional133) {
                memset(&result_158,0,sizeof(char*));
                __result104__ = __result_obj__ = result_158;
                return __result104__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result105__ = __result_obj__ = self->it->item;
                return __result105__;
            }
            memset(&result_159,0,sizeof(char*));
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
                if(_if_conditional137=self->len==0,                _if_conditional137) {
                    litem_160=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value189=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 221, "list_item$1charp"))));
                    come_call_finalizer3(right_value189,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_160->prev=((void*)0);
                    litem_160->next=((void*)0);
                    litem_160->item=item;
                    self->tail=litem_160;
                    self->head=litem_160;
                }
                else {
                    if(_if_conditional138=self->len==1,                    _if_conditional138) {
                        litem_161=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value190=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 231, "list_item$1charp"))));
                        come_call_finalizer3(right_value190,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_161->prev=self->head;
                        litem_161->next=((void*)0);
                        litem_161->item=item;
                        self->tail=litem_161;
                        self->head->next=litem_161;
                    }
                    else {
                        litem_162=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value191=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 241, "list_item$1charp"))));
                        come_call_finalizer3(right_value191,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_162->prev=self->tail;
                        litem_162->next=((void*)0);
                        litem_162->item=item;
                        self->tail->next=litem_162;
                        self->tail=litem_162;
                    }
                }
                self->len++;
                __result107__ = __result_obj__ = self;
                return __result107__;
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__;
_Bool _if_conditional140;
unsigned int hash_188;
unsigned int it_189;
_Bool _while_condtional24;
_Bool _if_conditional152;
_Bool _if_conditional153;
_Bool _if_conditional154;
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool same_key_exist_190;
char* it2_191;
_Bool _if_conditional160;
_Bool _if_conditional161;
struct map$2charphsTypeph* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_188, 0, sizeof(unsigned int));
memset(&it_189, 0, sizeof(unsigned int));
memset(&same_key_exist_190, 0, sizeof(_Bool));
memset(&it2_191, 0, sizeof(char*));
            if(_if_conditional140=self->len*10>=self->size,            _if_conditional140) {
                map$2charphsTypeph_rehash(self);
            }
            hash_188=string_get_hash_key(key)%self->size;
            it_189=hash_188;
            while(_while_condtional24=(_Bool)1,            _while_condtional24) {
                if(_if_conditional152=self->item_existance[it_189],                _if_conditional152) {
                    if(_if_conditional153=string_equals(self->keys[it_189],key),                    _if_conditional153) {
                        if(_if_conditional154=1,                        _if_conditional154) {
                            list$1charp_remove(self->key_list,self->keys[it_189]);
                            self->keys[it_189] = come_decrement_ref_count2(self->keys[it_189], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            self->keys[it_189]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charp_remove(self->key_list,self->keys[it_189]);
                            self->keys[it_189]=key;
                        }
                        if(_if_conditional155=1,                        _if_conditional155) {
                            come_call_finalizer3(self->items[it_189],sType_finalize, 0, 0, 0, 0, (void*)0);
                            self->items[it_189]=(struct sType*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_189]=item;
                        }
                        break;
                    }
                    it_189++;
                    if(_if_conditional156=it_189>=self->size,                    _if_conditional156) {
                        it_189=0;
                    }
                    else {
                        if(_if_conditional157=it_189==hash_188,                        _if_conditional157) {
                            printf("unexpected error in map.insert\n");
                            stackframe();
                            exit(2);
                        }
                    }
                }
                else {
                    self->item_existance[it_189]=(_Bool)1;
                    if(_if_conditional158=1,                    _if_conditional158) {
                        self->keys[it_189]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_189]=key;
                    }
                    if(_if_conditional159=1,                    _if_conditional159) {
                        self->items[it_189]=(struct sType*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_189]=item;
                    }
                    self->len++;
                    break;
                }
            }
            same_key_exist_190=(_Bool)0;
            for(            it2_191=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_191=list$1charp_next(self->key_list)            ){
                if(_if_conditional160=string_equals(it2_191,key),                _if_conditional160) {
                    same_key_exist_190=(_Bool)1;
                }
            }
            if(_if_conditional161=!same_key_exist_190,            _if_conditional161) {
                list$1charp_push_back(self->key_list,key);
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
char* it_178;
struct sType* default_value_181;
struct sType* it2_184;
unsigned int hash_185;
int n_186;
_Bool _while_condtional23;
_Bool _if_conditional149;
_Bool _if_conditional150;
_Bool _if_conditional151;
struct sType* default_value_187;
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
memset(&it2_184, 0, sizeof(struct sType*));
memset(&hash_185, 0, sizeof(unsigned int));
memset(&n_186, 0, sizeof(int));
memset(&default_value_187, 0, sizeof(struct sType*));
                    size_171=self->size*10;
                    keys_172=(char**)come_increment_ref_count(((char**)(right_value241=(char**)come_calloc(1, sizeof(char*)*(1*(size_171)), "./neo-c.h", 1317, "char*%"))));
                    right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    items_173=(struct sType**)come_increment_ref_count(((struct sType**)(right_value242=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_171)), "./neo-c.h", 1318, "sType*%"))));
                    come_call_finalizer3(right_value242,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    item_existance_174=(_Bool*)come_increment_ref_count(((_Bool*)(right_value243=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_171)), "./neo-c.h", 1319, "bool"))));
                    right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    len_175=0;
                    for(                    it_178=map$2charphsTypeph_begin(self);                    !map$2charphsTypeph_end(self);                    it_178=map$2charphsTypeph_next(self)                    ){
                        memset(&default_value_181,0,sizeof(struct sType*));
                        it2_184=map$2charphsTypeph_at(self,it_178,default_value_181);
                        hash_185=string_get_hash_key(it_178)%size_171;
                        n_186=hash_185;
                        while(_while_condtional23=(_Bool)1,                        _while_condtional23) {
                            if(_if_conditional149=item_existance_174[n_186],                            _if_conditional149) {
                                n_186++;
                                if(_if_conditional150=n_186>=size_171,                                _if_conditional150) {
                                    n_186=0;
                                }
                                else {
                                    if(_if_conditional151=n_186==hash_185,                                    _if_conditional151) {
                                        printf("unexpected error in map.rehash(1)\n");
                                        stackframe();
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                item_existance_174[n_186]=(_Bool)1;
                                keys_172[n_186]=it_178;
                                items_173[n_186]=map$2charphsTypeph_at(self,it_178,default_value_187);
                                len_175++;
                                break;
                            }
                        }
                    }
                    come_free((char*)self->items);
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_free((char*)self->keys);
                    self->keys=keys_172;
                    self->items=items_173;
                    self->item_existance=item_existance_174;
                    self->size=size_171;
                    self->len=len_175;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional141;
char* result_176;
char* __result109__;
_Bool _if_conditional142;
char* __result110__;
char* result_177;
char* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_176, 0, sizeof(char*));
memset(&result_177, 0, sizeof(char*));
                        if(_if_conditional141=self==((void*)0),                        _if_conditional141) {
                            memset(&result_176,0,sizeof(char*));
                            __result109__ = __result_obj__ = result_176;
                            return __result109__;
                        }
                        self->key_list->it=self->key_list->head;
                        if(self->key_list->it) {
                            __result110__ = __result_obj__ = self->key_list->it->item;
                            return __result110__;
                        }
                        memset(&result_177,0,sizeof(char*));
                        __result111__ = __result_obj__ = result_177;
                        return __result111__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result112__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result112__;
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional143;
char* result_179;
char* __result113__;
_Bool _if_conditional144;
char* __result114__;
char* result_180;
char* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_179, 0, sizeof(char*));
memset(&result_180, 0, sizeof(char*));
                        if(_if_conditional143=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional143) {
                            memset(&result_179,0,sizeof(char*));
                            __result113__ = __result_obj__ = result_179;
                            return __result113__;
                        }
                        self->key_list->it=self->key_list->it->next;
                        if(self->key_list->it) {
                            __result114__ = __result_obj__ = self->key_list->it->item;
                            return __result114__;
                        }
                        memset(&result_180,0,sizeof(char*));
                        __result115__ = __result_obj__ = result_180;
                        return __result115__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__;
unsigned int hash_182;
unsigned int it_183;
_Bool _while_condtional22;
_Bool _if_conditional145;
_Bool _if_conditional146;
struct sType* __result116__;
_Bool _if_conditional147;
_Bool _if_conditional148;
struct sType* __result117__;
struct sType* __result118__;
struct sType* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_182, 0, sizeof(unsigned int));
memset(&it_183, 0, sizeof(unsigned int));
                            hash_182=string_get_hash_key(((char*)key))%self->size;
                            it_183=hash_182;
                            while(_while_condtional22=(_Bool)1,                            _while_condtional22) {
                                if(_if_conditional145=self->item_existance[it_183],                                _if_conditional145) {
                                    if(_if_conditional146=string_equals(self->keys[it_183],key),                                    _if_conditional146) {
                                        __result116__ = __result_obj__ = self->items[it_183];
                                        come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result116__;
                                    }
                                    it_183++;
                                    if(_if_conditional147=it_183>=self->size,                                    _if_conditional147) {
                                        it_183=0;
                                    }
                                    else {
                                        if(_if_conditional148=it_183==hash_182,                                        _if_conditional148) {
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
struct tuple2$2charphsTypeph* __dec_obj24;
_Bool _if_conditional165;
void* right_value248;
struct list_item$1tuple2$2charphsTypephph* litem_194;
struct tuple2$2charphsTypeph* __dec_obj25;
void* right_value249;
struct list_item$1tuple2$2charphsTypephph* litem_195;
struct tuple2$2charphsTypeph* __dec_obj26;
struct list$1tuple2$2charphsTypephph* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
right_value247 = (void*)0;
memset(&litem_193, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value248 = (void*)0;
memset(&litem_194, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value249 = (void*)0;
memset(&litem_195, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
            if(_if_conditional162=self->len==0,            _if_conditional162) {
                litem_193=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value247=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 221, "list_item$1tuple2$2charphsTypephph"))));
                come_call_finalizer3(right_value247,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_193->prev=((void*)0);
                litem_193->next=((void*)0);
                __dec_obj24=litem_193->item;
                litem_193->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj24,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                self->tail=litem_193;
                self->head=litem_193;
            }
            else {
                if(_if_conditional165=self->len==1,                _if_conditional165) {
                    litem_194=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value248=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 231, "list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer3(right_value248,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_194->prev=self->head;
                    litem_194->next=((void*)0);
                    __dec_obj25=litem_194->item;
                    litem_194->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj25,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_194;
                    self->head->next=litem_194;
                }
                else {
                    litem_195=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value249=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 241, "list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer3(right_value249,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_195->prev=self->tail;
                    litem_195->next=((void*)0);
                    __dec_obj26=litem_195->item;
                    litem_195->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj26,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_195;
                    self->tail=litem_195;
                }
            }
            self->len++;
            __result121__ = __result_obj__ = self;
            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result121__;
            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
char* __dec_obj27;
struct sType* __dec_obj28;
struct tuple2$2charphsTypeph* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
            __dec_obj27=self->v1;
            self->v1=(char*)come_increment_ref_count(v1);
            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj28=self->v2;
            self->v2=(struct sType*)come_increment_ref_count(v2);
            come_call_finalizer3(__dec_obj28,sType_finalize, 0, 0, 0, 0, (void*)0);
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
void* right_value277;
char* __dec_obj29;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
void* right_value326;
struct list$1tuple2$2charphsTypephph* __dec_obj60;
_Bool _if_conditional276;
_Bool _if_conditional277;
_Bool _if_conditional278;
void* right_value327;
char* __dec_obj61;
_Bool _if_conditional279;
_Bool _if_conditional280;
void* right_value328;
char* __dec_obj62;
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
                result_196->mStruct=self->mStruct;
            }
            if(_if_conditional172=self!=((void*)0),            _if_conditional172) {
                result_196->mFloat=self->mFloat;
            }
            if(_if_conditional173=self!=((void*)0),            _if_conditional173) {
                result_196->mUnion=self->mUnion;
            }
            if(_if_conditional174=self!=((void*)0),            _if_conditional174) {
                result_196->mGenerics=self->mGenerics;
            }
            if(_if_conditional175=self!=((void*)0),            _if_conditional175) {
                result_196->mMethodGenerics=self->mMethodGenerics;
            }
            if(_if_conditional176=self!=((void*)0),            _if_conditional176) {
                result_196->mEnum=self->mEnum;
            }
            if(_if_conditional177=self!=((void*)0),            _if_conditional177) {
                result_196->mProtocol=self->mProtocol;
            }
            if(_if_conditional178=self!=((void*)0),            _if_conditional178) {
                result_196->mNumber=self->mNumber;
            }
            if(_if_conditional179=self!=((void*)0)&&self->mName!=((void*)0),            _if_conditional179) {
                __dec_obj29=result_196->mName;
                result_196->mName=(char*)come_increment_ref_count(((char*)(right_value277=string_clone(self->mName))));
                __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional180=self!=((void*)0),            _if_conditional180) {
                result_196->mGenericsNum=self->mGenericsNum;
            }
            if(_if_conditional181=self!=((void*)0),            _if_conditional181) {
                result_196->mMethodGenericsNum=self->mMethodGenericsNum;
            }
            if(_if_conditional182=self!=((void*)0)&&self->mFields!=((void*)0),            _if_conditional182) {
                __dec_obj60=result_196->mFields;
                result_196->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value326=list$1tuple2$2charphsTypephphp_clone(self->mFields))));
                come_call_finalizer3(__dec_obj60,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value326,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional276=self!=((void*)0),            _if_conditional276) {
                result_196->mOutputed=self->mOutputed;
            }
            if(_if_conditional277=self!=((void*)0),            _if_conditional277) {
                result_196->mOutputed2=self->mOutputed2;
            }
            if(_if_conditional278=self!=((void*)0)&&self->mDeclareSName!=((void*)0),            _if_conditional278) {
                __dec_obj61=result_196->mDeclareSName;
                result_196->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value327=string_clone(self->mDeclareSName))));
                __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value327 = come_decrement_ref_count2(right_value327, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional279=self!=((void*)0),            _if_conditional279) {
                result_196->mNobodyStruct=self->mNobodyStruct;
            }
            if(_if_conditional280=self!=((void*)0)&&self->mParentClassName!=((void*)0),            _if_conditional280) {
                __dec_obj62=result_196->mParentClassName;
                result_196->mParentClassName=(char*)come_increment_ref_count(((char*)(right_value328=string_clone(self->mParentClassName))));
                __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
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
struct list$1tuple2$2charphsTypephph* result_197;
struct list_item$1tuple2$2charphsTypephph* it_198;
_Bool _while_condtional25;
void* right_value325;
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
                    result_197=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value279=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value278=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 137, "list$1tuple2$2charphsTypephph"))))))));
                    come_call_finalizer3(right_value278,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value279,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_198=self->head;
                    while(_while_condtional25=it_198!=((void*)0),                    _while_condtional25) {
                        list$1tuple2$2charphsTypephph_add(result_197,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value325=tuple2$2charphsTypephp_clone(it_198->item)))));
                        come_call_finalizer3(right_value325,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        it_198=it_198->next;
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
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
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
struct tuple2$2charphsTypeph* __dec_obj30;
_Bool _if_conditional187;
void* right_value281;
struct list_item$1tuple2$2charphsTypephph* litem_200;
struct tuple2$2charphsTypeph* __dec_obj31;
void* right_value282;
struct list_item$1tuple2$2charphsTypephph* litem_201;
struct tuple2$2charphsTypeph* __dec_obj32;
struct list$1tuple2$2charphsTypephph* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value280 = (void*)0;
memset(&litem_199, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value281 = (void*)0;
memset(&litem_200, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value282 = (void*)0;
memset(&litem_201, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                            if(_if_conditional184=self->len==0,                            _if_conditional184) {
                                litem_199=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value280=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 151, "list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer3(right_value280,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_199->prev=((void*)0);
                                litem_199->next=((void*)0);
                                __dec_obj30=litem_199->item;
                                litem_199->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj30,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_199;
                                self->head=litem_199;
                            }
                            else {
                                if(_if_conditional187=self->len==1,                                _if_conditional187) {
                                    litem_200=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value281=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 161, "list_item$1tuple2$2charphsTypephph"))));
                                    come_call_finalizer3(right_value281,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_200->prev=self->head;
                                    litem_200->next=((void*)0);
                                    __dec_obj31=litem_200->item;
                                    litem_200->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj31,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_200;
                                    self->head->next=litem_200;
                                }
                                else {
                                    litem_201=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value282=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 171, "list_item$1tuple2$2charphsTypephph"))));
                                    come_call_finalizer3(right_value282,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_201->prev=self->tail;
                                    litem_201->next=((void*)0);
                                    __dec_obj32=litem_201->item;
                                    litem_201->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj32,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    self->tail->next=litem_201;
                                    self->tail=litem_201;
                                }
                            }
                            self->len++;
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
                                        if(_if_conditional190=self!=((void*)0)&&self->v1!=((void*)0),                                        _if_conditional190) {
                                            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional191=self!=((void*)0)&&self->v2!=((void*)0),                                        _if_conditional191) {
                                            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional192;
struct tuple2$2charphsTypeph* __result127__;
void* right_value283;
struct tuple2$2charphsTypeph* result_202;
_Bool _if_conditional195;
void* right_value284;
char* __dec_obj33;
_Bool _if_conditional196;
void* right_value324;
struct sType* __dec_obj59;
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
                            if(_if_conditional195=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional195) {
                                __dec_obj33=result_202->v1;
                                result_202->v1=(char*)come_increment_ref_count(((char*)(right_value284=string_clone(self->v1))));
                                __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(_if_conditional196=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional196) {
                                __dec_obj59=result_202->v2;
                                result_202->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value324=sType_clone(self->v2))));
                                come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 0, 0, (void*)0);
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
                                if(_if_conditional193=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional193) {
                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional194=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional194) {
                                    come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
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
void* right_value292;
struct list$1sTypeph* __dec_obj37;
_Bool _if_conditional203;
void* right_value295;
struct tuple1$1sTypeph* __dec_obj39;
_Bool _if_conditional207;
void* right_value298;
struct tuple1$1sTypeph* __dec_obj41;
_Bool _if_conditional210;
void* right_value299;
char* __dec_obj42;
_Bool _if_conditional211;
void* right_value300;
struct list$1sTypeph* __dec_obj43;
_Bool _if_conditional212;
void* right_value308;
struct list$1sNodeph* __dec_obj47;
_Bool _if_conditional225;
_Bool _if_conditional226;
void* right_value309;
struct list$1sTypeph* __dec_obj48;
_Bool _if_conditional227;
void* right_value316;
struct list$1charph* __dec_obj52;
_Bool _if_conditional231;
void* right_value319;
struct tuple1$1sTypeph* __dec_obj54;
_Bool _if_conditional234;
_Bool _if_conditional235;
void* right_value320;
struct sNode* __dec_obj55;
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
void* right_value321;
struct sNode* __dec_obj56;
_Bool _if_conditional262;
_Bool _if_conditional263;
_Bool _if_conditional264;
void* right_value322;
char* __dec_obj57;
_Bool _if_conditional265;
_Bool _if_conditional266;
_Bool _if_conditional267;
_Bool _if_conditional268;
_Bool _if_conditional269;
_Bool _if_conditional270;
_Bool _if_conditional271;
_Bool _if_conditional272;
_Bool _if_conditional273;
_Bool _if_conditional274;
void* right_value323;
char* __dec_obj58;
_Bool _if_conditional275;
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
                                        result_203->mClass=self->mClass;
                                    }
                                    if(_if_conditional199=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                    _if_conditional199) {
                                        __dec_obj37=result_203->mMultipleTypes;
                                        result_203->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value292=list$1sTypeph_clone(self->mMultipleTypes))));
                                        come_call_finalizer3(__dec_obj37,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value292,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional203=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                    _if_conditional203) {
                                        __dec_obj39=result_203->mNoSolvedGenericsType;
                                        result_203->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value295=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                                        come_call_finalizer3(__dec_obj39,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value295,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional207=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                    _if_conditional207) {
                                        __dec_obj41=result_203->mOriginalLoadVarType;
                                        result_203->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value298=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                                        come_call_finalizer3(__dec_obj41,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value298,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional210=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                    _if_conditional210) {
                                        __dec_obj42=result_203->mGenericsName;
                                        result_203->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value299=string_clone(self->mGenericsName))));
                                        __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value299 = come_decrement_ref_count2(right_value299, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional211=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                    _if_conditional211) {
                                        __dec_obj43=result_203->mGenericsTypes;
                                        result_203->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value300=list$1sTypeph_clone(self->mGenericsTypes))));
                                        come_call_finalizer3(__dec_obj43,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value300,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional212=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                    _if_conditional212) {
                                        __dec_obj47=result_203->mArrayNum;
                                        result_203->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value308=list$1sNodeph_clone(self->mArrayNum))));
                                        come_call_finalizer3(__dec_obj47,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value308,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional225=self!=((void*)0),                                    _if_conditional225) {
                                        result_203->mOmitArrayNum=self->mOmitArrayNum;
                                    }
                                    if(_if_conditional226=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                    _if_conditional226) {
                                        __dec_obj48=result_203->mParamTypes;
                                        result_203->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value309=list$1sTypeph_clone(self->mParamTypes))));
                                        come_call_finalizer3(__dec_obj48,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value309,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional227=self!=((void*)0)&&self->mParamNames!=((void*)0),                                    _if_conditional227) {
                                        __dec_obj52=result_203->mParamNames;
                                        result_203->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value316=list$1charph_clone(self->mParamNames))));
                                        come_call_finalizer3(__dec_obj52,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value316,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional231=self!=((void*)0)&&self->mResultType!=((void*)0),                                    _if_conditional231) {
                                        __dec_obj54=result_203->mResultType;
                                        result_203->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value319=tuple1$1sTypephp_clone(self->mResultType))));
                                        come_call_finalizer3(__dec_obj54,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value319,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional234=self!=((void*)0),                                    _if_conditional234) {
                                        result_203->mVarArgs=self->mVarArgs;
                                    }
                                    if(_if_conditional235=self!=((void*)0)&&self->mAlignas!=((void*)0),                                    _if_conditional235) {
                                        __dec_obj55=result_203->mAlignas;
                                        result_203->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value320=sNode_clone(self->mAlignas))));
                                        if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count2(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value320) { right_value320 = come_decrement_ref_count2(right_value320, ((struct sNode*)right_value320)->finalize, ((struct sNode*)right_value320)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional236=self!=((void*)0),                                    _if_conditional236) {
                                        result_203->mUnsigned=self->mUnsigned;
                                    }
                                    if(_if_conditional237=self!=((void*)0),                                    _if_conditional237) {
                                        result_203->mShort=self->mShort;
                                    }
                                    if(_if_conditional238=self!=((void*)0),                                    _if_conditional238) {
                                        result_203->mLong=self->mLong;
                                    }
                                    if(_if_conditional239=self!=((void*)0),                                    _if_conditional239) {
                                        result_203->mLongLong=self->mLongLong;
                                    }
                                    if(_if_conditional240=self!=((void*)0),                                    _if_conditional240) {
                                        result_203->mConstant=self->mConstant;
                                    }
                                    if(_if_conditional241=self!=((void*)0),                                    _if_conditional241) {
                                        result_203->mRegister=self->mRegister;
                                    }
                                    if(_if_conditional242=self!=((void*)0),                                    _if_conditional242) {
                                        result_203->mVolatile=self->mVolatile;
                                    }
                                    if(_if_conditional243=self!=((void*)0),                                    _if_conditional243) {
                                        result_203->mStatic=self->mStatic;
                                    }
                                    if(_if_conditional244=self!=((void*)0),                                    _if_conditional244) {
                                        result_203->mUniq=self->mUniq;
                                    }
                                    if(_if_conditional245=self!=((void*)0),                                    _if_conditional245) {
                                        result_203->mRecord=self->mRecord;
                                    }
                                    if(_if_conditional246=self!=((void*)0),                                    _if_conditional246) {
                                        result_203->mExtern=self->mExtern;
                                    }
                                    if(_if_conditional247=self!=((void*)0),                                    _if_conditional247) {
                                        result_203->mRestrict=self->mRestrict;
                                    }
                                    if(_if_conditional248=self!=((void*)0),                                    _if_conditional248) {
                                        result_203->mImmutable=self->mImmutable;
                                    }
                                    if(_if_conditional249=self!=((void*)0),                                    _if_conditional249) {
                                        result_203->mHeap=self->mHeap;
                                    }
                                    if(_if_conditional250=self!=((void*)0),                                    _if_conditional250) {
                                        result_203->mDummyHeap=self->mDummyHeap;
                                    }
                                    if(_if_conditional251=self!=((void*)0),                                    _if_conditional251) {
                                        result_203->mDelegate=self->mDelegate;
                                    }
                                    if(_if_conditional252=self!=((void*)0),                                    _if_conditional252) {
                                        result_203->mShare=self->mShare;
                                    }
                                    if(_if_conditional253=self!=((void*)0),                                    _if_conditional253) {
                                        result_203->mClone=self->mClone;
                                    }
                                    if(_if_conditional254=self!=((void*)0),                                    _if_conditional254) {
                                        result_203->mNoHeap=self->mNoHeap;
                                    }
                                    if(_if_conditional255=self!=((void*)0),                                    _if_conditional255) {
                                        result_203->mNoCallingDestructor=self->mNoCallingDestructor;
                                    }
                                    if(_if_conditional256=self!=((void*)0),                                    _if_conditional256) {
                                        result_203->mRefference=self->mRefference;
                                    }
                                    if(_if_conditional257=self!=((void*)0),                                    _if_conditional257) {
                                        result_203->mException=self->mException;
                                    }
                                    if(_if_conditional258=self!=((void*)0),                                    _if_conditional258) {
                                        result_203->mPointerNum=self->mPointerNum;
                                    }
                                    if(_if_conditional259=self!=((void*)0),                                    _if_conditional259) {
                                        result_203->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                                    }
                                    if(_if_conditional260=self!=((void*)0),                                    _if_conditional260) {
                                        result_203->mNoArrayPointerNum=self->mNoArrayPointerNum;
                                    }
                                    if(_if_conditional261=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                    _if_conditional261) {
                                        __dec_obj56=result_203->mSizeNum;
                                        result_203->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value321=sNode_clone(self->mSizeNum))));
                                        if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count2(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value321) { right_value321 = come_decrement_ref_count2(right_value321, ((struct sNode*)right_value321)->finalize, ((struct sNode*)right_value321)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional262=self!=((void*)0),                                    _if_conditional262) {
                                        result_203->mDynamicArrayNum=self->mDynamicArrayNum;
                                    }
                                    if(_if_conditional263=self!=((void*)0),                                    _if_conditional263) {
                                        result_203->mTypeOfExpression=self->mTypeOfExpression;
                                    }
                                    if(_if_conditional264=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                    _if_conditional264) {
                                        __dec_obj57=result_203->mOriginalTypeName;
                                        result_203->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value322=string_clone(self->mOriginalTypeName))));
                                        __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value322 = come_decrement_ref_count2(right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional265=self!=((void*)0),                                    _if_conditional265) {
                                        result_203->mOriginalPointerNum=self->mOriginalPointerNum;
                                    }
                                    if(_if_conditional266=self!=((void*)0),                                    _if_conditional266) {
                                        result_203->mFunctionParam=self->mFunctionParam;
                                    }
                                    if(_if_conditional267=self!=((void*)0),                                    _if_conditional267) {
                                        result_203->mAllocaValue=self->mAllocaValue;
                                    }
                                    if(_if_conditional268=self!=((void*)0),                                    _if_conditional268) {
                                        result_203->mGenericsStruct=self->mGenericsStruct;
                                    }
                                    if(_if_conditional269=self!=((void*)0),                                    _if_conditional269) {
                                        result_203->mSolvedGenericsName=self->mSolvedGenericsName;
                                    }
                                    if(_if_conditional270=self!=((void*)0),                                    _if_conditional270) {
                                        result_203->mComeMemCore=self->mComeMemCore;
                                    }
                                    if(_if_conditional271=self!=((void*)0),                                    _if_conditional271) {
                                        result_203->mInline=self->mInline;
                                    }
                                    if(_if_conditional272=self!=((void*)0),                                    _if_conditional272) {
                                        result_203->mNullValue=self->mNullValue;
                                    }
                                    if(_if_conditional273=self!=((void*)0),                                    _if_conditional273) {
                                        result_203->mGuardValue=self->mGuardValue;
                                    }
                                    if(_if_conditional274=self!=((void*)0)&&self->mAsmName!=((void*)0),                                    _if_conditional274) {
                                        __dec_obj58=result_203->mAsmName;
                                        result_203->mAsmName=(char*)come_increment_ref_count(((char*)(right_value323=string_clone(self->mAsmName))));
                                        __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value323 = come_decrement_ref_count2(right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional275=self!=((void*)0),                                    _if_conditional275) {
                                        result_203->mArrayPointerType=self->mArrayPointerType;
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
struct list$1sTypeph* result_204;
struct list_item$1sTypeph* it_205;
_Bool _while_condtional26;
void* right_value291;
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
                                            result_204=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value287=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value286=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 137, "list$1sTypeph"))))))));
                                            come_call_finalizer3(right_value286,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value287,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            it_205=self->head;
                                            while(_while_condtional26=it_205!=((void*)0),                                            _while_condtional26) {
                                                list$1sTypeph_add(result_204,(struct sType*)come_increment_ref_count(((struct sType*)(right_value291=sType_clone(it_205->item)))));
                                                come_call_finalizer3(right_value291,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                it_205=it_205->next;
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
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
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
struct sType* __dec_obj34;
_Bool _if_conditional202;
void* right_value289;
struct list_item$1sTypeph* litem_207;
struct sType* __dec_obj35;
void* right_value290;
struct list_item$1sTypeph* litem_208;
struct sType* __dec_obj36;
struct list$1sTypeph* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
right_value288 = (void*)0;
memset(&litem_206, 0, sizeof(struct list_item$1sTypeph*));
right_value289 = (void*)0;
memset(&litem_207, 0, sizeof(struct list_item$1sTypeph*));
right_value290 = (void*)0;
memset(&litem_208, 0, sizeof(struct list_item$1sTypeph*));
                                                    if(_if_conditional201=self->len==0,                                                    _if_conditional201) {
                                                        litem_206=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value288=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 151, "list_item$1sTypeph"))));
                                                        come_call_finalizer3(right_value288,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        litem_206->prev=((void*)0);
                                                        litem_206->next=((void*)0);
                                                        __dec_obj34=litem_206->item;
                                                        litem_206->item=(struct sType*)come_increment_ref_count(item);
                                                        come_call_finalizer3(__dec_obj34,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        self->tail=litem_206;
                                                        self->head=litem_206;
                                                    }
                                                    else {
                                                        if(_if_conditional202=self->len==1,                                                        _if_conditional202) {
                                                            litem_207=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value289=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 161, "list_item$1sTypeph"))));
                                                            come_call_finalizer3(right_value289,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            litem_207->prev=self->head;
                                                            litem_207->next=((void*)0);
                                                            __dec_obj35=litem_207->item;
                                                            litem_207->item=(struct sType*)come_increment_ref_count(item);
                                                            come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            self->tail=litem_207;
                                                            self->head->next=litem_207;
                                                        }
                                                        else {
                                                            litem_208=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value290=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 171, "list_item$1sTypeph"))));
                                                            come_call_finalizer3(right_value290,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            litem_208->prev=self->tail;
                                                            litem_208->next=((void*)0);
                                                            __dec_obj36=litem_208->item;
                                                            litem_208->item=(struct sType*)come_increment_ref_count(item);
                                                            come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            self->tail->next=litem_208;
                                                            self->tail=litem_208;
                                                        }
                                                    }
                                                    self->len++;
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
                                            it_209=self->head;
                                            while(_while_condtional27=it_209!=((void*)0),                                            _while_condtional27) {
                                                prev_it_210=it_209;
                                                it_209=it_209->next;
                                                come_call_finalizer3(prev_it_210,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional205;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional205=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional205) {
                                                    come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional213;
struct list$1sNodeph* __result137__;
void* right_value301;
void* right_value302;
struct list$1sNodeph* result_213;
struct list_item$1sNodeph* it_214;
_Bool _while_condtional28;
void* right_value307;
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
                                            result_213=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value302=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value301=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 137, "list$1sNodeph"))))))));
                                            come_call_finalizer3(right_value301,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value302,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            it_214=self->head;
                                            while(_while_condtional28=it_214!=((void*)0),                                            _while_condtional28) {
                                                list$1sNodeph_add(result_213,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value307=sNode_clone(it_214->item)))));
                                                if(right_value307) { right_value307 = come_decrement_ref_count2(right_value307, ((struct sNode*)right_value307)->finalize, ((struct sNode*)right_value307)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                it_214=it_214->next;
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
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
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
struct sNode* __dec_obj44;
_Bool _if_conditional215;
void* right_value304;
struct list_item$1sNodeph* litem_216;
struct sNode* __dec_obj45;
void* right_value305;
struct list_item$1sNodeph* litem_217;
struct sNode* __dec_obj46;
struct list$1sNodeph* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
right_value303 = (void*)0;
memset(&litem_215, 0, sizeof(struct list_item$1sNodeph*));
right_value304 = (void*)0;
memset(&litem_216, 0, sizeof(struct list_item$1sNodeph*));
right_value305 = (void*)0;
memset(&litem_217, 0, sizeof(struct list_item$1sNodeph*));
                                                    if(_if_conditional214=self->len==0,                                                    _if_conditional214) {
                                                        litem_215=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value303=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 151, "list_item$1sNodeph"))));
                                                        come_call_finalizer3(right_value303,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        litem_215->prev=((void*)0);
                                                        litem_215->next=((void*)0);
                                                        __dec_obj44=litem_215->item;
                                                        litem_215->item=(struct sNode*)come_increment_ref_count(item);
                                                        if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count2(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0,0, (void*)0); }
                                                        self->tail=litem_215;
                                                        self->head=litem_215;
                                                    }
                                                    else {
                                                        if(_if_conditional215=self->len==1,                                                        _if_conditional215) {
                                                            litem_216=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value304=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 161, "list_item$1sNodeph"))));
                                                            come_call_finalizer3(right_value304,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            litem_216->prev=self->head;
                                                            litem_216->next=((void*)0);
                                                            __dec_obj45=litem_216->item;
                                                            litem_216->item=(struct sNode*)come_increment_ref_count(item);
                                                            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0, (void*)0); }
                                                            self->tail=litem_216;
                                                            self->head->next=litem_216;
                                                        }
                                                        else {
                                                            litem_217=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value305=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 171, "list_item$1sNodeph"))));
                                                            come_call_finalizer3(right_value305,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            litem_217->prev=self->tail;
                                                            litem_217->next=((void*)0);
                                                            __dec_obj46=litem_217->item;
                                                            litem_217->item=(struct sNode*)come_increment_ref_count(item);
                                                            if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); }
                                                            self->tail->next=litem_217;
                                                            self->tail=litem_217;
                                                        }
                                                    }
                                                    self->len++;
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
                                                    if(_if_conditional217=self!=((void*)0)&&self->clone!=((void*)0),                                                    _if_conditional217) {
                                                        result_218->_protocol_obj=self->clone(self->_protocol_obj);
                                                    }
                                                    if(_if_conditional218=self!=((void*)0),                                                    _if_conditional218) {
                                                        result_218->finalize=self->finalize;
                                                    }
                                                    if(_if_conditional219=self!=((void*)0),                                                    _if_conditional219) {
                                                        result_218->clone=self->clone;
                                                    }
                                                    if(_if_conditional220=self!=((void*)0),                                                    _if_conditional220) {
                                                        result_218->compile=self->compile;
                                                    }
                                                    if(_if_conditional221=self!=((void*)0),                                                    _if_conditional221) {
                                                        result_218->sline=self->sline;
                                                    }
                                                    if(_if_conditional222=self!=((void*)0),                                                    _if_conditional222) {
                                                        result_218->sname=self->sname;
                                                    }
                                                    if(_if_conditional223=self!=((void*)0),                                                    _if_conditional223) {
                                                        result_218->terminated=self->terminated;
                                                    }
                                                    if(_if_conditional224=self!=((void*)0),                                                    _if_conditional224) {
                                                        result_218->kind=self->kind;
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
                                            it_219=self->head;
                                            while(_while_condtional29=it_219!=((void*)0),                                            _while_condtional29) {
                                                prev_it_220=it_219;
                                                it_219=it_219->next;
                                                come_call_finalizer3(prev_it_220,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional228;
struct list$1charph* __result143__;
void* right_value310;
void* right_value311;
struct list$1charph* result_221;
struct list_item$1charph* it_222;
_Bool _while_condtional30;
void* right_value315;
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
                                            result_221=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value311=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value310=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 137, "list$1charph"))))))));
                                            come_call_finalizer3(right_value310,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value311,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                            it_222=self->head;
                                            while(_while_condtional30=it_222!=((void*)0),                                            _while_condtional30) {
                                                list$1charph_add(result_221,(char*)come_increment_ref_count(((char*)(right_value315=string_clone(it_222->item)))));
                                                right_value315 = come_decrement_ref_count2(right_value315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                it_222=it_222->next;
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
char* __dec_obj49;
_Bool _if_conditional230;
void* right_value313;
struct list_item$1charph* litem_224;
char* __dec_obj50;
void* right_value314;
struct list_item$1charph* litem_225;
char* __dec_obj51;
struct list$1charph* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
right_value312 = (void*)0;
memset(&litem_223, 0, sizeof(struct list_item$1charph*));
right_value313 = (void*)0;
memset(&litem_224, 0, sizeof(struct list_item$1charph*));
right_value314 = (void*)0;
memset(&litem_225, 0, sizeof(struct list_item$1charph*));
                                                    if(_if_conditional229=self->len==0,                                                    _if_conditional229) {
                                                        litem_223=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value312=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 151, "list_item$1charph"))));
                                                        come_call_finalizer3(right_value312,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        litem_223->prev=((void*)0);
                                                        litem_223->next=((void*)0);
                                                        __dec_obj49=litem_223->item;
                                                        litem_223->item=(char*)come_increment_ref_count(item);
                                                        __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        self->tail=litem_223;
                                                        self->head=litem_223;
                                                    }
                                                    else {
                                                        if(_if_conditional230=self->len==1,                                                        _if_conditional230) {
                                                            litem_224=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value313=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 161, "list_item$1charph"))));
                                                            come_call_finalizer3(right_value313,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            litem_224->prev=self->head;
                                                            litem_224->next=((void*)0);
                                                            __dec_obj50=litem_224->item;
                                                            litem_224->item=(char*)come_increment_ref_count(item);
                                                            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            self->tail=litem_224;
                                                            self->head->next=litem_224;
                                                        }
                                                        else {
                                                            litem_225=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value314=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 171, "list_item$1charph"))));
                                                            come_call_finalizer3(right_value314,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            litem_225->prev=self->tail;
                                                            litem_225->next=((void*)0);
                                                            __dec_obj51=litem_225->item;
                                                            litem_225->item=(char*)come_increment_ref_count(item);
                                                            __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            self->tail->next=litem_225;
                                                            self->tail=litem_225;
                                                        }
                                                    }
                                                    self->len++;
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
                                            it_226=self->head;
                                            while(_while_condtional31=it_226!=((void*)0),                                            _while_condtional31) {
                                                prev_it_227=it_226;
                                                it_226=it_226->next;
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
void* right_value318;
struct sType* __dec_obj53;
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
                                            if(_if_conditional233=self!=((void*)0)&&self->v1!=((void*)0),                                            _if_conditional233) {
                                                __dec_obj53=result_228->v1;
                                                result_228->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value318=sType_clone(self->v1))));
                                                come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 0, 0, (void*)0);
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
                    it_229=self->head;
                    while(_while_condtional32=it_229!=((void*)0),                    _while_condtional32) {
                        prev_it_230=it_229;
                        it_229=it_229->next;
                        come_call_finalizer3(prev_it_230,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

int come_main_v2(int argc, char** argv){
void* __result_obj__;
_Bool _if_conditional281;
void* right_value330;
void* right_value331;
struct buffer* clang_option_231;
void* right_value332;
void* right_value333;
struct buffer* cpp_option_232;
void* right_value334;
void* right_value335;
struct list$1charph* files_233;
void* right_value336;
void* right_value337;
struct list$1charph* object_files_234;
_Bool output_object_file_235;
_Bool output_cpp_file_236;
_Bool output_source_file_flag_237;
void* right_value338;
char* output_file_name_238;
_Bool verbose_239;
_Bool prohibit_common_header_240;
_Bool come_debug_241;
_Bool come_malloc_242;
_Bool come_str_243;
int i_244;
_Bool _if_conditional282;
void* right_value339;
char* __dec_obj63;
_Bool _if_conditional283;
_Bool _if_conditional284;
_Bool _if_conditional285;
_Bool _if_conditional286;
void* right_value340;
_Bool _if_conditional287;
_Bool _if_conditional288;
_Bool _if_conditional289;
_Bool _if_conditional290;
void* right_value341;
_Bool _if_conditional291;
void* right_value342;
void* right_value343;
void* right_value344;
_Bool _if_conditional292;
void* right_value345;
void* right_value346;
void* right_value347;
void* right_value348;
_Bool _if_conditional293;
_Bool _if_conditional294;
void* right_value349;
void* right_value350;
_Bool _if_conditional295;
_Bool _if_conditional296;
_Bool _if_conditional297;
_Bool _if_conditional298;
_Bool _if_conditional299;
void* right_value351;
_Bool _if_conditional300;
void* right_value352;
void* right_value353;
_Bool _if_conditional301;
_Bool _if_conditional302;
struct _IO_FILE* f_245;
_Bool _and_conditional1;
_Bool __exception_result_var_b8;
_Bool _or_conditional8;
_Bool __exception_result_var_b9;
void* right_value354;
char* tmp_file_246;
void* right_value355;
void* right_value356;
void* right_value357;
void* right_value358;
struct sInfo info_247;
void* right_value359;
char* __dec_obj64;
void* right_value360;
char* __dec_obj65;
void* right_value361;
char* __dec_obj66;
void* right_value362;
char* __dec_obj67;
void* right_value363;
void* right_value369;
struct map$2charphsFunph* __dec_obj69;
void* right_value370;
void* right_value376;
struct map$2charphsGenericsFunph* __dec_obj71;
void* right_value377;
void* right_value383;
struct map$2charphsClassph* __dec_obj73;
void* right_value384;
void* right_value390;
struct map$2charphsClassModuleph* __dec_obj75;
void* right_value391;
void* right_value397;
struct map$2charphsTypeph* __dec_obj77;
void* right_value398;
void* right_value399;
struct sModule* __dec_obj78;
void* right_value400;
void* right_value401;
struct list$1sRightValueObjectph* __dec_obj79;
void* right_value402;
void* right_value403;
struct list$1CVALUEph* __dec_obj80;
void* right_value404;
void* right_value405;
struct sVarTable* __dec_obj81;
void* right_value406;
void* right_value407;
struct sVarTable* lv_table_283;
void* right_value408;
void* right_value409;
struct list$1charph* __dec_obj82;
void* right_value410;
void* right_value411;
struct list$1charph* __dec_obj83;
void* right_value412;
void* right_value413;
struct map$2charphsClassph* __dec_obj84;
static int n_284=0;
void* right_value414;
char* __dec_obj85;
_Bool _if_conditional386;
void* right_value415;
void* right_value416;
void* right_value417;
struct buffer* __dec_obj86;
void* right_value418;
void* right_value419;
void* right_value420;
struct buffer* __dec_obj87;
_Bool _if_conditional387;
_Bool _if_conditional388;
void* right_value421;
void* right_value422;
_Bool _if_conditional421;
_Bool _if_conditional422;
int __result160__;
_Bool _if_conditional423;
_Bool _if_conditional424;
int __result161__;
_Bool _if_conditional425;
_Bool _if_conditional426;
int __result162__;
_Bool _if_conditional427;
_Bool _if_conditional428;
int __result163__;
_Bool _if_conditional429;
_Bool _if_conditional430;
int __result164__;
_Bool _if_conditional431;
_Bool _if_conditional432;
int __result165__;
_Bool _if_conditional433;
_Bool _if_conditional434;
_Bool _if_conditional435;
int __result166__;
_Bool _if_conditional436;
_Bool _if_conditional437;
int __result167__;
void* right_value423;
void* right_value424;
struct buffer* clang_option_287;
void* right_value425;
void* right_value426;
struct buffer* cpp_option_288;
void* right_value427;
void* right_value428;
struct list$1charph* files_289;
void* right_value429;
void* right_value430;
struct list$1charph* object_files_290;
_Bool output_object_file_291;
_Bool output_cpp_file_292;
_Bool output_source_file_flag_293;
char* output_file_name_294;
_Bool verbose_295;
_Bool come_debug_296;
_Bool come_malloc_297;
_Bool come_str_298;
int i_299;
_Bool _if_conditional438;
void* right_value431;
char* __dec_obj88;
_Bool _if_conditional439;
_Bool _if_conditional440;
_Bool _if_conditional441;
_Bool _if_conditional442;
void* right_value432;
_Bool _if_conditional443;
_Bool _if_conditional444;
_Bool _if_conditional445;
void* right_value433;
_Bool _if_conditional446;
void* right_value434;
void* right_value435;
void* right_value436;
_Bool _if_conditional447;
void* right_value437;
void* right_value438;
void* right_value439;
void* right_value440;
_Bool _if_conditional448;
_Bool _if_conditional449;
_Bool _if_conditional450;
void* right_value441;
void* right_value442;
_Bool _if_conditional451;
_Bool _if_conditional452;
_Bool _if_conditional453;
_Bool _if_conditional454;
_Bool _if_conditional455;
void* right_value443;
_Bool _if_conditional456;
void* right_value444;
void* right_value445;
void* right_value446;
_Bool _if_conditional457;
_Bool _if_conditional458;
struct list$1charph* o2_saved_300;
char* it_301;
struct sInfo info_302;
void* right_value447;
char* __dec_obj89;
void* right_value448;
char* __dec_obj90;
void* right_value449;
char* __dec_obj91;
void* right_value450;
void* right_value451;
struct map$2charphsFunph* __dec_obj92;
void* right_value452;
void* right_value453;
struct map$2charphsGenericsFunph* __dec_obj93;
void* right_value454;
void* right_value455;
struct map$2charphsClassph* __dec_obj94;
void* right_value456;
void* right_value457;
struct map$2charphsClassModuleph* __dec_obj95;
void* right_value458;
void* right_value459;
struct map$2charphsTypeph* __dec_obj96;
void* right_value460;
void* right_value461;
struct sModule* __dec_obj97;
void* right_value462;
void* right_value463;
struct list$1sRightValueObjectph* __dec_obj98;
void* right_value464;
void* right_value465;
struct list$1CVALUEph* __dec_obj99;
void* right_value466;
void* right_value467;
struct sVarTable* __dec_obj100;
void* right_value468;
void* right_value469;
struct sVarTable* lv_table_303;
void* right_value470;
void* right_value471;
struct list$1charph* __dec_obj101;
void* right_value472;
void* right_value473;
struct list$1charph* __dec_obj102;
void* right_value474;
void* right_value475;
struct map$2charphsClassph* __dec_obj103;
_Bool _if_conditional459;
void* right_value476;
void* right_value477;
void* right_value478;
struct buffer* __dec_obj104;
void* right_value479;
void* right_value480;
void* right_value481;
struct buffer* __dec_obj105;
_Bool _if_conditional460;
void* right_value482;
char* __dec_obj106;
char* __dec_obj107;
_Bool _if_conditional461;
_Bool _if_conditional462;
_Bool _if_conditional463;
_Bool _if_conditional464;
_Bool _if_conditional465;
_Bool _if_conditional466;
_Bool _if_conditional467;
_Bool _if_conditional468;
struct sInfo info_304;
void* right_value483;
char* __dec_obj108;
void* right_value484;
char* __dec_obj109;
_Bool _if_conditional471;
void* right_value485;
char* __dec_obj110;
char* __dec_obj111;
struct __current_stack2__ __current_stack2__;
_Bool _if_conditional472;
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
    if(_if_conditional281=charp_operator_equals(argv[1],"header")&&argc>=3,    _if_conditional281) {
        gProgramName=argv[0];
        clang_option_231=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value331=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value330=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 515, "buffer"))))))));
        come_call_finalizer3(right_value330,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value331,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        cpp_option_232=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value333=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value332=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 516, "buffer"))))))));
        come_call_finalizer3(right_value332,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value333,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        files_233=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value335=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value334=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 517, "list$1charph"))))))));
        come_call_finalizer3(right_value334,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value335,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        object_files_234=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value337=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value336=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 518, "list$1charph"))))))));
        come_call_finalizer3(right_value336,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value337,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        output_object_file_235=(_Bool)0;
        output_cpp_file_236=(_Bool)0;
        output_source_file_flag_237=(_Bool)0;
        output_file_name_238=(char*)come_increment_ref_count(((char*)(right_value338=__builtin_string("common.h"))));
        right_value338 = come_decrement_ref_count2(right_value338, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        verbose_239=(_Bool)0;
        prohibit_common_header_240=(_Bool)0;
        come_debug_241=(_Bool)0;
        come_malloc_242=(_Bool)0;
        come_str_243=(_Bool)0;
        for(        i_244=2;        i_244<argc;        i_244++        ){
            if(_if_conditional282=charp_operator_equals(argv[i_244],"-o")&&i_244+1<argc,            _if_conditional282) {
                __dec_obj63=output_file_name_238;
                output_file_name_238=(char*)come_increment_ref_count(((char*)(right_value339=__builtin_string(argv[i_244+1]))));
                __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value339 = come_decrement_ref_count2(right_value339, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                i_244++;
            }
            else {
                if(_if_conditional283=charp_operator_equals(argv[i_244],"-str"),                _if_conditional283) {
                    come_str_243=(_Bool)1;
                }
                else {
                    if(_if_conditional284=charp_operator_equals(argv[i_244],"-leak"),                    _if_conditional284) {
                        come_malloc_242=(_Bool)1;
                    }
                    else {
                        if(_if_conditional285=charp_operator_equals(argv[i_244],"-gc"),                        _if_conditional285) {
                            gComeGC=(_Bool)1;
                        }
                        else {
                            if(_if_conditional286=charp_operator_equals(argv[i_244],"-stdc"),                            _if_conditional286) {
                                gComeLink=(_Bool)0;
                                buffer_append_str(cpp_option_232,((char*)(right_value340=xsprintf(" -DNEO_C_STDC=1 "))));
                                right_value340 = come_decrement_ref_count2(right_value340, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                output_source_file_flag_237=(_Bool)1;
                                gComeOriginalSourcePosition=(_Bool)0;
                            }
                            else {
                                if(_if_conditional287=charp_operator_equals(argv[i_244],"-g"),                                _if_conditional287) {
                                    buffer_append_str(clang_option_231,"-g ");
                                }
                                else {
                                    if(_if_conditional288=charp_operator_equals(argv[i_244],"-cg"),                                    _if_conditional288) {
                                        buffer_append_str(clang_option_231,"-g ");
                                        come_debug_241=(_Bool)1;
                                    }
                                    else {
                                        if(_if_conditional289=charp_operator_equals(argv[i_244],"-common-header"),                                        _if_conditional289) {
                                            gCommonHeader=(_Bool)1;
                                        }
                                        else {
                                            if(_if_conditional290=charp_operator_equals(argv[i_244],"-original-position"),                                            _if_conditional290) {
                                                gComeOriginalSourcePosition=(_Bool)0;
                                            }
                                            else {
                                                if(_if_conditional291=string_operator_equals(((char*)(right_value341=charp_operator_load_range_element(argv[i_244],0,2))),"-O"),                                                right_value341 = come_decrement_ref_count2(right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                                                _if_conditional291) {
                                                    buffer_append_str(clang_option_231,((char*)(right_value343=xsprintf(" \%s ",((char*)(right_value342=charp_to_string(argv[i_244])))))));
                                                    right_value342 = come_decrement_ref_count2(right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    right_value343 = come_decrement_ref_count2(right_value343, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    come_debug_241=(_Bool)0;
                                                }
                                                else {
                                                    if(_if_conditional292=string_operator_equals(((char*)(right_value344=charp_operator_load_range_element(argv[i_244],0,2))),"-D"),                                                    right_value344 = come_decrement_ref_count2(right_value344, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                                                    _if_conditional292) {
                                                        buffer_append_str(cpp_option_232,((char*)(right_value346=xsprintf(" \%s ",((char*)(right_value345=charp_to_string(argv[i_244])))))));
                                                        right_value345 = come_decrement_ref_count2(right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        right_value346 = come_decrement_ref_count2(right_value346, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        buffer_append_str(clang_option_231,((char*)(right_value348=xsprintf(" \%s ",((char*)(right_value347=charp_to_string(argv[i_244])))))));
                                                        right_value347 = come_decrement_ref_count2(right_value347, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        right_value348 = come_decrement_ref_count2(right_value348, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    }
                                                    else {
                                                        if(_if_conditional293=charp_operator_equals(argv[i_244],"-v"),                                                        _if_conditional293) {
                                                            buffer_append_str(clang_option_231,"-v ");
                                                            verbose_239=(_Bool)1;
                                                        }
                                                        else {
                                                            if(_if_conditional294=strlen(argv[i_244])>=2&&memcmp(argv[i_244],"-I",strlen("-I"))==0,                                                            _if_conditional294) {
                                                                buffer_append_str(cpp_option_232,((char*)(right_value350=charp_operator_add(" ",((char*)(right_value349=charp_operator_add(argv[i_244]," ")))))));
                                                                right_value349 = come_decrement_ref_count2(right_value349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                right_value350 = come_decrement_ref_count2(right_value350, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            else {
                                                                if(_if_conditional295=charp_operator_equals(argv[i_244],"-gdwarf-4"),                                                                _if_conditional295) {
                                                                    buffer_append_str(clang_option_231,"-gdwarf-4 ");
                                                                }
                                                                else {
                                                                    if(_if_conditional296=charp_operator_equals(argv[i_244],"-s")||charp_operator_equals(argv[i_244],"-S"),                                                                    _if_conditional296) {
                                                                        output_source_file_flag_237=(_Bool)1;
                                                                        gComeOriginalSourcePosition=(_Bool)0;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional297=charp_operator_equals(argv[i_244],"-c"),                                                                        _if_conditional297) {
                                                                            output_object_file_235=(_Bool)1;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional298=charp_operator_equals(argv[i_244],"-E"),                                                                            _if_conditional298) {
                                                                                output_cpp_file_236=(_Bool)1;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional299=argv[i_244][0]==45,                                                                                _if_conditional299) {
                                                                                    buffer_append_str(clang_option_231,((char*)(right_value351=charp_operator_add(argv[i_244]," "))));
                                                                                    right_value351 = come_decrement_ref_count2(right_value351, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional300=strlen(argv[i_244])>2&&memcmp(argv[i_244]+strlen(argv[i_244])-2,".o",2)==0,                                                                                    _if_conditional300) {
                                                                                        list$1charph_push_back(object_files_234,(char*)come_increment_ref_count(((char*)(right_value352=__builtin_string(argv[i_244])))));
                                                                                        right_value352 = come_decrement_ref_count2(right_value352, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    }
                                                                                    else {
                                                                                        list$1charph_push_back(files_233,(char*)come_increment_ref_count(((char*)(right_value353=__builtin_string(argv[i_244])))));
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
                buffer_append_str(clang_option_231," -lneo-c-str-gc -lpcre ");
            }
            else {
                buffer_append_str(clang_option_231," -lneo-c-str -lpcre ");
            }
        }
        if(_and_conditional1=f_245=fopen(output_file_name_238,"w"),        _and_conditional1 == 0) {
            (come_push_stackframe("02transpile.c", 612, 7),__exception_result_var_b8=die("fopen"), come_pop_stackframe(), __exception_result_var_b8);
        }
        fclose(f_245);
        if(_or_conditional8=truncate(output_file_name_238,0),        _or_conditional8 != 0) {
            (come_push_stackframe("02transpile.c", 615, 8),__exception_result_var_b9=die("truncate"), come_pop_stackframe(), __exception_result_var_b9);
        }
        tmp_file_246=(char*)come_increment_ref_count(((char*)(right_value354=__builtin_string("tmp-common-header"))));
        right_value354 = come_decrement_ref_count2(right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        system(((char*)(right_value358=xsprintf("cat \%s > \%s",((char*)(right_value356=string_to_string(((char*)(right_value355=list$1charph_join(files_233," ")))))),((char*)(right_value357=string_to_string(tmp_file_246)))))));
        right_value355 = come_decrement_ref_count2(right_value355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value356 = come_decrement_ref_count2(right_value356, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value357 = come_decrement_ref_count2(right_value357, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value358 = come_decrement_ref_count2(right_value358, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memset(&info_247,0,sizeof(struct sInfo));
        __dec_obj64=info_247.base_sname;
        info_247.base_sname=(char*)come_increment_ref_count(((char*)(right_value359=__builtin_string(tmp_file_246))));
        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value359 = come_decrement_ref_count2(right_value359, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj65=info_247.sname;
        info_247.sname=(char*)come_increment_ref_count(((char*)(right_value360=__builtin_string(tmp_file_246))));
        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value360 = come_decrement_ref_count2(right_value360, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info_247.sline=1;
        info_247.err_num=0;
        __dec_obj66=info_247.clang_option;
        info_247.clang_option=(char*)come_increment_ref_count(((char*)(right_value361=buffer_to_string(clang_option_231))));
        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value361 = come_decrement_ref_count2(right_value361, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj67=info_247.cpp_option;
        info_247.cpp_option=(char*)come_increment_ref_count(((char*)(right_value362=buffer_to_string(cpp_option_232))));
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value362 = come_decrement_ref_count2(right_value362, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info_247.no_output_err=(_Bool)0;
        __dec_obj69=info_247.funcs;
        info_247.funcs=(struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value369=map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value363=(struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 632, "map$2charphsFunph"))))))));
        come_call_finalizer3(__dec_obj69,map$2charphsFunph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value363,map$2charphsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value369,map$2charphsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj71=info_247.generics_funcs;
        info_247.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value376=map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value370=(struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 633, "map$2charphsGenericsFunph"))))))));
        come_call_finalizer3(__dec_obj71,map$2charphsGenericsFunph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value370,map$2charphsGenericsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value376,map$2charphsGenericsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj73=info_247.classes;
        info_247.classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value383=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value377=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 634, "map$2charphsClassph"))))))));
        come_call_finalizer3(__dec_obj73,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value377,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value383,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj75=info_247.modules;
        info_247.modules=(struct map$2charphsClassModuleph*)come_increment_ref_count(((struct map$2charphsClassModuleph*)(right_value390=map$2charphsClassModuleph_initialize((struct map$2charphsClassModuleph*)come_increment_ref_count(((struct map$2charphsClassModuleph*)(right_value384=(struct map$2charphsClassModuleph*)come_calloc(1, sizeof(struct map$2charphsClassModuleph)*(1), "02transpile.c", 635, "map$2charphsClassModuleph"))))))));
        come_call_finalizer3(__dec_obj75,map$2charphsClassModuleph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value384,map$2charphsClassModulephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value390,map$2charphsClassModulephp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj77=info_247.types;
        info_247.types=(struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value397=map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value391=(struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 636, "map$2charphsTypeph"))))))));
        come_call_finalizer3(__dec_obj77,map$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value391,map$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value397,map$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj78=info_247.module;
        info_247.module=(struct sModule*)come_increment_ref_count(((struct sModule*)(right_value399=sModule_initialize((struct sModule*)come_increment_ref_count(((struct sModule*)(right_value398=(struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 637, "sModule"))))))));
        come_call_finalizer3(__dec_obj78,sModule_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value398,sModule_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value399,sModule_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj79=info_247.right_value_objects;
        info_247.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value401=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value400=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 638, "list$1sRightValueObjectph"))))))));
        come_call_finalizer3(__dec_obj79,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value400,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value401,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj80=info_247.stack;
        info_247.stack=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value403=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value402=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 639, "list$1CVALUEph"))))))));
        come_call_finalizer3(__dec_obj80,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value402,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value403,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj81=info_247.gv_table;
        info_247.gv_table=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value405=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value404=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 640, "sVarTable")))),(_Bool)1,((void*)0)))));
        come_call_finalizer3(__dec_obj81,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value404,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value405,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        lv_table_283=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value407=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value406=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 641, "sVarTable")))),(_Bool)0,((void*)0)))));
        come_call_finalizer3(right_value406,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value407,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        info_247.lv_table=lv_table_283;
        __dec_obj82=info_247.generics_type_names;
        info_247.generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value409=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value408=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 643, "list$1charph"))))))));
        come_call_finalizer3(__dec_obj82,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value408,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value409,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj83=info_247.method_generics_type_names;
        info_247.method_generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value411=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value410=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 644, "list$1charph"))))))));
        come_call_finalizer3(__dec_obj83,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value410,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value411,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj84=info_247.generics_classes;
        info_247.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value413=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value412=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 645, "map$2charphsClassph"))))))));
        come_call_finalizer3(__dec_obj84,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value412,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value413,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
        info_247.verbose=verbose_239;
        info_247.output_header_file=(_Bool)1;
        info_247.num_source_files=n_284++;
        info_247.max_source_files=list$1charph_length(files_233);
        __dec_obj85=info_247.output_file_name;
        info_247.output_file_name=(char*)come_increment_ref_count(((char*)(right_value414=__builtin_string(output_file_name_238))));
        __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value414 = come_decrement_ref_count2(right_value414, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        init_classes(&info_247);
        clear_tmp_file(&info_247);
        if(_if_conditional386=!cpp(&info_247),        _if_conditional386) {
            printf("%s %d: transpile failed\n",info_247.sname,info_247.sline);
            exit(2);
        }
        __dec_obj86=info_247.original_source;
        info_247.original_source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value417=string_to_buffer(((char*)(right_value416=string_read(((char*)(right_value415=xsprintf("%s",tmp_file_246))))))))));
        come_call_finalizer3(__dec_obj86,buffer_finalize, 0, 0, 0, 0, (void*)0);
        right_value415 = come_decrement_ref_count2(right_value415, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value416 = come_decrement_ref_count2(right_value416, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value417,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj87=info_247.source;
        info_247.source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value420=string_to_buffer(((char*)(right_value419=string_read(((char*)(right_value418=xsprintf("%s.i",tmp_file_246))))))))));
        come_call_finalizer3(__dec_obj87,buffer_finalize, 0, 0, 0, 0, (void*)0);
        right_value418 = come_decrement_ref_count2(right_value418, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value419 = come_decrement_ref_count2(right_value419, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value420,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        info_247.p=info_247.source->buf;
        info_247.head=info_247.source->buf;
        if(_if_conditional387=!output_cpp_file_236,        _if_conditional387) {
            transpile_v5(&info_247);
            if(_if_conditional388=!output_header_file(&info_247),            _if_conditional388) {
                printf("%s %d: output source file faield\n",info_247.sname,info_247.sline);
                exit(2);
            }
        }
        system(((char*)(right_value422=xsprintf("rm -rf \%s*",((char*)(right_value421=string_to_string(tmp_file_246)))))));
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
        if(_if_conditional421=charp_operator_equals(argv[1],"new")&&argc==3,        _if_conditional421) {
            if(_if_conditional422=!new_project(argc,argv),            _if_conditional422) {
                __result160__ = (_Bool)0;
                return __result160__;
            }
        }
        else {
            if(_if_conditional423=charp_operator_equals(argv[1],"run")&&argc==2,            _if_conditional423) {
                if(_if_conditional424=!run_project(argc,argv),                _if_conditional424) {
                    __result161__ = (_Bool)0;
                    return __result161__;
                }
            }
            else {
                if(_if_conditional425=charp_operator_equals(argv[1],"header")&&argc==2,                _if_conditional425) {
                    if(_if_conditional426=!make_header_project(argc,argv),                    _if_conditional426) {
                        __result162__ = (_Bool)0;
                        return __result162__;
                    }
                }
                else {
                    if(_if_conditional427=charp_operator_equals(argv[1],"compile")&&argc==2,                    _if_conditional427) {
                        if(_if_conditional428=!compile_project(argc,argv),                        _if_conditional428) {
                            __result163__ = (_Bool)0;
                            return __result163__;
                        }
                    }
                    else {
                        if(_if_conditional429=charp_operator_equals(argv[1],"debug")&&argc==2,                        _if_conditional429) {
                            if(_if_conditional430=!debug_run_project(argc,argv),                            _if_conditional430) {
                                __result164__ = (_Bool)0;
                                return __result164__;
                            }
                        }
                        else {
                            if(_if_conditional431=charp_operator_equals(argv[1],"clean")&&argc==2,                            _if_conditional431) {
                                if(_if_conditional432=!clean_project(argc,argv),                                _if_conditional432) {
                                    __result165__ = (_Bool)0;
                                    return __result165__;
                                }
                            }
                            else {
                                if(_if_conditional433=charp_operator_equals(argv[1],"install")&&argc>=2,                                _if_conditional433) {
                                    if(_if_conditional434=argc==2,                                    _if_conditional434) {
                                        if(_if_conditional435=!install_project(argc,argv,"/usr/local"),                                        _if_conditional435) {
                                            __result166__ = (_Bool)0;
                                            return __result166__;
                                        }
                                    }
                                    else {
                                        if(_if_conditional436=argc>=3,                                        _if_conditional436) {
                                            if(_if_conditional437=!install_project(argc,argv,argv[2]),                                            _if_conditional437) {
                                                __result167__ = (_Bool)0;
                                                return __result167__;
                                            }
                                        }
                                    }
                                }
                                else {
                                    gProgramName=argv[0];
                                    clang_option_287=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value424=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value423=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 725, "buffer"))))))));
                                    come_call_finalizer3(right_value423,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value424,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    cpp_option_288=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value426=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value425=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 726, "buffer"))))))));
                                    come_call_finalizer3(right_value425,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value426,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    files_289=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value428=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value427=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 727, "list$1charph"))))))));
                                    come_call_finalizer3(right_value427,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value428,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    object_files_290=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value430=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value429=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 728, "list$1charph"))))))));
                                    come_call_finalizer3(right_value429,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value430,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    output_object_file_291=(_Bool)0;
                                    output_cpp_file_292=(_Bool)0;
                                    output_source_file_flag_293=(_Bool)0;
                                    output_file_name_294=((void*)0);
                                    verbose_295=(_Bool)0;
                                    come_debug_296=(_Bool)0;
                                    come_malloc_297=(_Bool)0;
                                    come_str_298=(_Bool)0;
                                    for(                                    i_299=1;                                    i_299<argc;                                    i_299++                                    ){
                                        if(_if_conditional438=charp_operator_equals(argv[i_299],"-o")&&i_299+1<argc,                                        _if_conditional438) {
                                            __dec_obj88=output_file_name_294;
                                            output_file_name_294=(char*)come_increment_ref_count(((char*)(right_value431=__builtin_string(argv[i_299+1]))));
                                            __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value431 = come_decrement_ref_count2(right_value431, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            i_299++;
                                        }
                                        else {
                                            if(_if_conditional439=charp_operator_equals(argv[i_299],"-str"),                                            _if_conditional439) {
                                                come_str_298=(_Bool)1;
                                            }
                                            else {
                                                if(_if_conditional440=charp_operator_equals(argv[i_299],"-leak"),                                                _if_conditional440) {
                                                    come_malloc_297=(_Bool)1;
                                                }
                                                else {
                                                    if(_if_conditional441=charp_operator_equals(argv[i_299],"-gc"),                                                    _if_conditional441) {
                                                        gComeGC=(_Bool)1;
                                                    }
                                                    else {
                                                        if(_if_conditional442=charp_operator_equals(argv[i_299],"-stdc"),                                                        _if_conditional442) {
                                                            gComeLink=(_Bool)0;
                                                            buffer_append_str(cpp_option_288,((char*)(right_value432=xsprintf(" -DNEO_C_STDC=1 "))));
                                                            right_value432 = come_decrement_ref_count2(right_value432, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            output_source_file_flag_293=(_Bool)1;
                                                            gComeOriginalSourcePosition=(_Bool)0;
                                                        }
                                                        else {
                                                            if(_if_conditional443=charp_operator_equals(argv[i_299],"-cg"),                                                            _if_conditional443) {
                                                                come_debug_296=(_Bool)1;
                                                                buffer_append_str(clang_option_287,"-g ");
                                                            }
                                                            else {
                                                                if(_if_conditional444=charp_operator_equals(argv[i_299],"-common-header"),                                                                _if_conditional444) {
                                                                    gCommonHeader=(_Bool)1;
                                                                }
                                                                else {
                                                                    if(_if_conditional445=charp_operator_equals(argv[i_299],"-original-position"),                                                                    _if_conditional445) {
                                                                        gComeOriginalSourcePosition=(_Bool)0;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional446=string_operator_equals(((char*)(right_value433=charp_operator_load_range_element(argv[i_299],0,2))),"-O"),                                                                        right_value433 = come_decrement_ref_count2(right_value433, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                                                                        _if_conditional446) {
                                                                            buffer_append_str(clang_option_287,((char*)(right_value435=xsprintf(" \%s ",((char*)(right_value434=charp_to_string(argv[i_299])))))));
                                                                            right_value434 = come_decrement_ref_count2(right_value434, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            right_value435 = come_decrement_ref_count2(right_value435, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            come_debug_296=(_Bool)0;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional447=string_operator_equals(((char*)(right_value436=charp_operator_load_range_element(argv[i_299],0,2))),"-D"),                                                                            right_value436 = come_decrement_ref_count2(right_value436, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                                                                            _if_conditional447) {
                                                                                buffer_append_str(cpp_option_288,((char*)(right_value438=xsprintf(" \%s ",((char*)(right_value437=charp_to_string(argv[i_299])))))));
                                                                                right_value437 = come_decrement_ref_count2(right_value437, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                right_value438 = come_decrement_ref_count2(right_value438, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                buffer_append_str(clang_option_287,((char*)(right_value440=xsprintf(" \%s ",((char*)(right_value439=charp_to_string(argv[i_299])))))));
                                                                                right_value439 = come_decrement_ref_count2(right_value439, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                right_value440 = come_decrement_ref_count2(right_value440, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            }
                                                                            else {
                                                                                if(_if_conditional448=charp_operator_equals(argv[i_299],"-g"),                                                                                _if_conditional448) {
                                                                                    buffer_append_str(clang_option_287,"-g ");
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional449=charp_operator_equals(argv[i_299],"-v"),                                                                                    _if_conditional449) {
                                                                                        buffer_append_str(clang_option_287,"-v ");
                                                                                        verbose_295=(_Bool)1;
                                                                                    }
                                                                                    else {
                                                                                        if(_if_conditional450=strlen(argv[i_299])>=2&&memcmp(argv[i_299],"-I",strlen("-I"))==0,                                                                                        _if_conditional450) {
                                                                                            buffer_append_str(cpp_option_288,((char*)(right_value442=charp_operator_add(" ",((char*)(right_value441=charp_operator_add(argv[i_299]," ")))))));
                                                                                            right_value441 = come_decrement_ref_count2(right_value441, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            right_value442 = come_decrement_ref_count2(right_value442, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                        }
                                                                                        else {
                                                                                            if(_if_conditional451=charp_operator_equals(argv[i_299],"-gdwarf-4"),                                                                                            _if_conditional451) {
                                                                                                buffer_append_str(clang_option_287,"-gdwarf-4 ");
                                                                                            }
                                                                                            else {
                                                                                                if(_if_conditional452=charp_operator_equals(argv[i_299],"-s")||charp_operator_equals(argv[i_299],"-S"),                                                                                                _if_conditional452) {
                                                                                                    output_source_file_flag_293=(_Bool)1;
                                                                                                    gComeOriginalSourcePosition=(_Bool)0;
                                                                                                }
                                                                                                else {
                                                                                                    if(_if_conditional453=charp_operator_equals(argv[i_299],"-c"),                                                                                                    _if_conditional453) {
                                                                                                        output_object_file_291=(_Bool)1;
                                                                                                    }
                                                                                                    else {
                                                                                                        if(_if_conditional454=charp_operator_equals(argv[i_299],"-E"),                                                                                                        _if_conditional454) {
                                                                                                            output_cpp_file_292=(_Bool)1;
                                                                                                        }
                                                                                                        else {
                                                                                                            if(_if_conditional455=argv[i_299][0]==45,                                                                                                            _if_conditional455) {
                                                                                                                buffer_append_str(clang_option_287,((char*)(right_value443=charp_operator_add(argv[i_299]," "))));
                                                                                                                right_value443 = come_decrement_ref_count2(right_value443, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                            }
                                                                                                            else {
                                                                                                                if(_if_conditional456=strlen(argv[i_299])>2&&memcmp(argv[i_299]+strlen(argv[i_299])-2,".o",2)==0,                                                                                                                _if_conditional456) {
                                                                                                                    list$1charph_push_back(object_files_290,(char*)come_increment_ref_count(((char*)(right_value444=__builtin_string(argv[i_299])))));
                                                                                                                    right_value444 = come_decrement_ref_count2(right_value444, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                }
                                                                                                                else {
                                                                                                                    list$1charph_push_back(files_289,(char*)come_increment_ref_count(((char*)(right_value446=string_clone(((char*)(right_value445=__builtin_string(argv[i_299]))))))));
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
                                            buffer_append_str(clang_option_287," -lneo-c-str-gc -lpcre ");
                                        }
                                        else {
                                            buffer_append_str(clang_option_287," -lneo-c-str -lpcre ");
                                        }
                                    }
                                    for(                                    o2_saved_300=(struct list$1charph*)come_increment_ref_count((files_289)),it_301=list$1charph_begin((o2_saved_300));                                    !list$1charph_end((o2_saved_300));                                    it_301=list$1charph_next((o2_saved_300))                                    ){
                                        memset(&info_302,0,sizeof(struct sInfo));
                                        __dec_obj89=info_302.sname;
                                        info_302.sname=(char*)come_increment_ref_count(((char*)(right_value447=__builtin_string(it_301))));
                                        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value447 = come_decrement_ref_count2(right_value447, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        info_302.sline=1;
                                        info_302.err_num=0;
                                        __dec_obj90=info_302.clang_option;
                                        info_302.clang_option=(char*)come_increment_ref_count(((char*)(right_value448=buffer_to_string(clang_option_287))));
                                        __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value448 = come_decrement_ref_count2(right_value448, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        __dec_obj91=info_302.cpp_option;
                                        info_302.cpp_option=(char*)come_increment_ref_count(((char*)(right_value449=buffer_to_string(cpp_option_288))));
                                        __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value449 = come_decrement_ref_count2(right_value449, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        info_302.no_output_err=(_Bool)0;
                                        __dec_obj92=info_302.funcs;
                                        info_302.funcs=(struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value451=map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value450=(struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 832, "map$2charphsFunph"))))))));
                                        come_call_finalizer3(__dec_obj92,map$2charphsFunph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value450,map$2charphsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value451,map$2charphsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        __dec_obj93=info_302.generics_funcs;
                                        info_302.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value453=map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value452=(struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 833, "map$2charphsGenericsFunph"))))))));
                                        come_call_finalizer3(__dec_obj93,map$2charphsGenericsFunph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value452,map$2charphsGenericsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value453,map$2charphsGenericsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        __dec_obj94=info_302.classes;
                                        info_302.classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value455=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value454=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 834, "map$2charphsClassph"))))))));
                                        come_call_finalizer3(__dec_obj94,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value454,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value455,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        __dec_obj95=info_302.modules;
                                        info_302.modules=(struct map$2charphsClassModuleph*)come_increment_ref_count(((struct map$2charphsClassModuleph*)(right_value457=map$2charphsClassModuleph_initialize((struct map$2charphsClassModuleph*)come_increment_ref_count(((struct map$2charphsClassModuleph*)(right_value456=(struct map$2charphsClassModuleph*)come_calloc(1, sizeof(struct map$2charphsClassModuleph)*(1), "02transpile.c", 835, "map$2charphsClassModuleph"))))))));
                                        come_call_finalizer3(__dec_obj95,map$2charphsClassModuleph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value456,map$2charphsClassModulephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value457,map$2charphsClassModulephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        __dec_obj96=info_302.types;
                                        info_302.types=(struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value459=map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value458=(struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 836, "map$2charphsTypeph"))))))));
                                        come_call_finalizer3(__dec_obj96,map$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value458,map$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value459,map$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        __dec_obj97=info_302.module;
                                        info_302.module=(struct sModule*)come_increment_ref_count(((struct sModule*)(right_value461=sModule_initialize((struct sModule*)come_increment_ref_count(((struct sModule*)(right_value460=(struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 837, "sModule"))))))));
                                        come_call_finalizer3(__dec_obj97,sModule_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value460,sModule_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value461,sModule_finalize, 0, 1, 0, 0, __result_obj__);
                                        __dec_obj98=info_302.right_value_objects;
                                        info_302.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value463=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value462=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 838, "list$1sRightValueObjectph"))))))));
                                        come_call_finalizer3(__dec_obj98,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value462,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value463,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        __dec_obj99=info_302.stack;
                                        info_302.stack=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value465=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value464=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 839, "list$1CVALUEph"))))))));
                                        come_call_finalizer3(__dec_obj99,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value464,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value465,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        __dec_obj100=info_302.gv_table;
                                        info_302.gv_table=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value467=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value466=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 840, "sVarTable")))),(_Bool)1,((void*)0)))));
                                        come_call_finalizer3(__dec_obj100,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value466,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value467,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                                        lv_table_303=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value469=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value468=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 841, "sVarTable")))),(_Bool)0,((void*)0)))));
                                        come_call_finalizer3(right_value468,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value469,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                                        info_302.lv_table=lv_table_303;
                                        __dec_obj101=info_302.generics_type_names;
                                        info_302.generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value471=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value470=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 843, "list$1charph"))))))));
                                        come_call_finalizer3(__dec_obj101,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value470,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value471,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        __dec_obj102=info_302.method_generics_type_names;
                                        info_302.method_generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value473=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value472=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 844, "list$1charph"))))))));
                                        come_call_finalizer3(__dec_obj102,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value472,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value473,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        __dec_obj103=info_302.generics_classes;
                                        info_302.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value475=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value474=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 845, "map$2charphsClassph"))))))));
                                        come_call_finalizer3(__dec_obj103,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value474,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value475,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        info_302.verbose=verbose_295;
                                        init_classes(&info_302);
                                        clear_tmp_file(&info_302);
                                        if(_if_conditional459=!cpp(&info_302),                                        _if_conditional459) {
                                            printf("%s %d: transpile failed\n",info_302.sname,info_302.sline);
                                            exit(2);
                                        }
                                        __dec_obj104=info_302.original_source;
                                        info_302.original_source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value478=string_to_buffer(((char*)(right_value477=string_read(((char*)(right_value476=xsprintf("%s",it_301))))))))));
                                        come_call_finalizer3(__dec_obj104,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                        right_value476 = come_decrement_ref_count2(right_value476, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value477 = come_decrement_ref_count2(right_value477, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value478,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        __dec_obj105=info_302.source;
                                        info_302.source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value481=string_to_buffer(((char*)(right_value480=string_read(((char*)(right_value479=xsprintf("%s.i",it_301))))))))));
                                        come_call_finalizer3(__dec_obj105,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                        right_value479 = come_decrement_ref_count2(right_value479, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value480 = come_decrement_ref_count2(right_value480, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value481,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        info_302.p=info_302.source->buf;
                                        info_302.head=info_302.source->buf;
                                        if(output_file_name_294) {
                                            __dec_obj106=info_302.output_file_name;
                                            info_302.output_file_name=(char*)come_increment_ref_count(((char*)(right_value482=__builtin_string(output_file_name_294))));
                                            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value482 = come_decrement_ref_count2(right_value482, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        else {
                                            __dec_obj107=info_302.output_file_name;
                                            info_302.output_file_name=((void*)0);
                                            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        }
                                        if(_if_conditional461=!output_cpp_file_292,                                        _if_conditional461) {
                                            transpile_v5(&info_302);
                                            if(_if_conditional462=!output_source_file_v3(&info_302),                                            _if_conditional462) {
                                                printf("%s %d: output source file faield\n",info_302.sname,info_302.sline);
                                                exit(2);
                                            }
                                            if(_if_conditional463=info_302.err_num>0,                                            _if_conditional463) {
                                                printf("transpile error. err num %d\n",info_302.err_num);
                                                exit(2);
                                            }
                                            else {
                                                if(_if_conditional464=!compile(&info_302,output_object_file_291,object_files_290),                                                _if_conditional464) {
                                                    printf("%s %d: compile faield\n",info_302.sname,info_302.sline);
                                                    exit(27);
                                                }
                                            }
                                        }
                                        if(output_cpp_file_292) {
                                        }
                                        else {
                                            if(_if_conditional466=info_302.err_num>0,                                            _if_conditional466) {
                                            }
                                            else {
                                                if(output_source_file_flag_293) {
                                                    clear_tmp_file_without_object_file_and_ccfile(&info_302);
                                                }
                                                else {
                                                    clear_tmp_file_without_object_file(&info_302);
                                                }
                                            }
                                        }
                                        come_call_finalizer3((&info_302),sInfo_finalize, 1, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(lv_table_303,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    come_call_finalizer3(o2_saved_300,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    if(_if_conditional468=!output_object_file_291&&!output_cpp_file_292&&(list$1charph_length(files_289)>0||list$1charph_length(object_files_290)>0),                                    _if_conditional468) {
                                        memset(&info_304,0,sizeof(struct sInfo));
                                        __dec_obj108=info_304.sname;
                                        info_304.sname=(char*)come_increment_ref_count(((char*)(right_value483=string_clone(list$1charphp_operator_load_element(files_289,0)))));
                                        __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value483 = come_decrement_ref_count2(right_value483, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        __dec_obj109=info_304.clang_option;
                                        info_304.clang_option=(char*)come_increment_ref_count(((char*)(right_value484=buffer_to_string(clang_option_287))));
                                        __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value484 = come_decrement_ref_count2(right_value484, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        info_304.verbose=verbose_295;
                                        if(output_file_name_294) {
                                            __dec_obj110=info_304.output_file_name;
                                            info_304.output_file_name=(char*)come_increment_ref_count(((char*)(right_value485=__builtin_string(output_file_name_294))));
                                            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value485 = come_decrement_ref_count2(right_value485, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        else {
                                            __dec_obj111=info_304.output_file_name;
                                            info_304.output_file_name=((void*)0);
                                            __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
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
                                        bool_expect(linker(&info_304,object_files_290),&__current_stack2__,(void*)method_block2_02transpilec);
                                        if(_if_conditional472=!output_cpp_file_292&&!output_source_file_flag_293,                                        _if_conditional472) {
                                            clear_tmp_file(&info_304);
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
struct list$1charp* __dec_obj68;
struct map$2charphsFunph* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
right_value364 = (void*)0;
right_value365 = (void*)0;
right_value366 = (void*)0;
memset(&i_248, 0, sizeof(int));
right_value367 = (void*)0;
right_value368 = (void*)0;
            self->keys=(char**)come_increment_ref_count(((char**)(right_value364=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1066, "char*%"))));
            right_value364 = come_decrement_ref_count2(right_value364, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            self->items=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value365=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(128)), "./neo-c.h", 1067, "sFun*%"))));
            come_call_finalizer3(right_value365,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value366=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1068, "bool"))));
            right_value366 = come_decrement_ref_count2(right_value366, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            i_248=0;            i_248<128;            i_248++            ){
                self->item_existance[i_248]=(_Bool)0;
            }
            self->size=128;
            self->len=0;
            __dec_obj68=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value368=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value367=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1078, "list$1charp"))))))));
            come_call_finalizer3(__dec_obj68,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value367,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value368,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            self->it=0;
            __result153__ = __result_obj__ = self;
            come_call_finalizer3(self,map$2charphsFunphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result153__;
            come_call_finalizer3(self,map$2charphsFunphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional303;
_Bool _if_conditional304;
_Bool _if_conditional305;
_Bool _if_conditional306;
_Bool _if_conditional307;
_Bool _if_conditional308;
_Bool _if_conditional309;
_Bool _if_conditional312;
_Bool _if_conditional313;
_Bool _if_conditional314;
_Bool _if_conditional315;
_Bool _if_conditional316;
_Bool _if_conditional317;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional303=self!=((void*)0)&&self->mName!=((void*)0),                _if_conditional303) {
                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional304=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional304) {
                    come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional305=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional305) {
                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional306=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional306) {
                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional307=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                _if_conditional307) {
                    come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional308=self!=((void*)0)&&self->mLambdaType!=((void*)0),                _if_conditional308) {
                    come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional309=self!=((void*)0)&&self->mBlock!=((void*)0),                _if_conditional309) {
                    come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional312=self!=((void*)0)&&self->mSource!=((void*)0),                _if_conditional312) {
                    come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional313=self!=((void*)0)&&self->mSourceHead!=((void*)0),                _if_conditional313) {
                    come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional314=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                _if_conditional314) {
                    come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional315=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                _if_conditional315) {
                    come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional316=self!=((void*)0)&&self->mComeHeader!=((void*)0),                _if_conditional316) {
                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional317=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                _if_conditional317) {
                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional310;
_Bool _if_conditional311;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional310=self!=((void*)0)&&self->mNodes!=((void*)0),                        _if_conditional310) {
                            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional311=self!=((void*)0)&&self->mVarTable!=((void*)0),                        _if_conditional311) {
                            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
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
                    it_249=self->head;
                    while(_while_condtional33=it_249!=((void*)0),                    _while_condtional33) {
                        prev_it_250=it_249;
                        it_249=it_249->next;
                        come_call_finalizer3(prev_it_250,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
int i_251;
_Bool _if_conditional318;
_Bool _if_conditional319;
int i_252;
_Bool _if_conditional320;
_Bool _if_conditional321;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_251, 0, sizeof(int));
memset(&i_252, 0, sizeof(int));
                for(                i_251=0;                i_251<self->size;                i_251++                ){
                    if(_if_conditional318=self->item_existance[i_251],                    _if_conditional318) {
                        if(_if_conditional319=1,                        _if_conditional319) {
                            come_call_finalizer3(self->items[i_251],sFun_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->items);
                for(                i_252=0;                i_252<self->size;                i_252++                ){
                    if(_if_conditional320=self->item_existance[i_252],                    _if_conditional320) {
                        if(_if_conditional321=1,                        _if_conditional321) {
                            self->keys[i_252] = come_decrement_ref_count2(self->keys[i_252], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->keys);
                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsFunph_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
int i_253;
_Bool _if_conditional322;
_Bool _if_conditional323;
int i_254;
_Bool _if_conditional324;
_Bool _if_conditional325;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_253, 0, sizeof(int));
memset(&i_254, 0, sizeof(int));
            for(            i_253=0;            i_253<self->size;            i_253++            ){
                if(_if_conditional322=self->item_existance[i_253],                _if_conditional322) {
                    if(_if_conditional323=1,                    _if_conditional323) {
                        come_call_finalizer3(self->items[i_253],sFun_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->items);
            for(            i_254=0;            i_254<self->size;            i_254++            ){
                if(_if_conditional324=self->item_existance[i_254],                _if_conditional324) {
                    if(_if_conditional325=1,                    _if_conditional325) {
                        self->keys[i_254] = come_decrement_ref_count2(self->keys[i_254], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->keys);
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_initialize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
void* right_value371;
void* right_value372;
void* right_value373;
int i_255;
void* right_value374;
void* right_value375;
struct list$1charp* __dec_obj70;
struct map$2charphsGenericsFunph* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
right_value371 = (void*)0;
right_value372 = (void*)0;
right_value373 = (void*)0;
memset(&i_255, 0, sizeof(int));
right_value374 = (void*)0;
right_value375 = (void*)0;
            self->keys=(char**)come_increment_ref_count(((char**)(right_value371=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1066, "char*%"))));
            right_value371 = come_decrement_ref_count2(right_value371, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            self->items=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(right_value372=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(128)), "./neo-c.h", 1067, "sGenericsFun*%"))));
            come_call_finalizer3(right_value372,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value373=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1068, "bool"))));
            right_value373 = come_decrement_ref_count2(right_value373, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            i_255=0;            i_255<128;            i_255++            ){
                self->item_existance[i_255]=(_Bool)0;
            }
            self->size=128;
            self->len=0;
            __dec_obj70=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value375=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value374=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1078, "list$1charp"))))))));
            come_call_finalizer3(__dec_obj70,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value374,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value375,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            self->it=0;
            __result154__ = __result_obj__ = self;
            come_call_finalizer3(self,map$2charphsGenericsFunphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result154__;
            come_call_finalizer3(self,map$2charphsGenericsFunphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool _if_conditional326;
_Bool _if_conditional327;
_Bool _if_conditional328;
_Bool _if_conditional329;
_Bool _if_conditional330;
_Bool _if_conditional331;
_Bool _if_conditional332;
_Bool _if_conditional333;
_Bool _if_conditional334;
_Bool _if_conditional335;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional326=self!=((void*)0)&&self->mImplType!=((void*)0),                _if_conditional326) {
                    come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional327=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                _if_conditional327) {
                    come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional328=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),                _if_conditional328) {
                    come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional329=self!=((void*)0)&&self->mName!=((void*)0),                _if_conditional329) {
                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional330=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional330) {
                    come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional331=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional331) {
                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional332=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional332) {
                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional333=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                _if_conditional333) {
                    come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional334=self!=((void*)0)&&self->mBlock!=((void*)0),                _if_conditional334) {
                    self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional335=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                _if_conditional335) {
                    self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void map$2charphsGenericsFunphp_finalize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
int i_256;
_Bool _if_conditional336;
_Bool _if_conditional337;
int i_257;
_Bool _if_conditional338;
_Bool _if_conditional339;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_256, 0, sizeof(int));
memset(&i_257, 0, sizeof(int));
                for(                i_256=0;                i_256<self->size;                i_256++                ){
                    if(_if_conditional336=self->item_existance[i_256],                    _if_conditional336) {
                        if(_if_conditional337=1,                        _if_conditional337) {
                            come_call_finalizer3(self->items[i_256],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->items);
                for(                i_257=0;                i_257<self->size;                i_257++                ){
                    if(_if_conditional338=self->item_existance[i_257],                    _if_conditional338) {
                        if(_if_conditional339=1,                        _if_conditional339) {
                            self->keys[i_257] = come_decrement_ref_count2(self->keys[i_257], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->keys);
                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsGenericsFunph_finalize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
int i_258;
_Bool _if_conditional340;
_Bool _if_conditional341;
int i_259;
_Bool _if_conditional342;
_Bool _if_conditional343;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_258, 0, sizeof(int));
memset(&i_259, 0, sizeof(int));
            for(            i_258=0;            i_258<self->size;            i_258++            ){
                if(_if_conditional340=self->item_existance[i_258],                _if_conditional340) {
                    if(_if_conditional341=1,                    _if_conditional341) {
                        come_call_finalizer3(self->items[i_258],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->items);
            for(            i_259=0;            i_259<self->size;            i_259++            ){
                if(_if_conditional342=self->item_existance[i_259],                _if_conditional342) {
                    if(_if_conditional343=1,                    _if_conditional343) {
                        self->keys[i_259] = come_decrement_ref_count2(self->keys[i_259], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->keys);
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassph_initialize(struct map$2charphsClassph* self){
void* __result_obj__;
void* right_value378;
void* right_value379;
void* right_value380;
int i_260;
void* right_value381;
void* right_value382;
struct list$1charp* __dec_obj72;
struct map$2charphsClassph* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
right_value378 = (void*)0;
right_value379 = (void*)0;
right_value380 = (void*)0;
memset(&i_260, 0, sizeof(int));
right_value381 = (void*)0;
right_value382 = (void*)0;
            self->keys=(char**)come_increment_ref_count(((char**)(right_value378=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1066, "char*%"))));
            right_value378 = come_decrement_ref_count2(right_value378, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            self->items=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value379=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(128)), "./neo-c.h", 1067, "sClass*%"))));
            come_call_finalizer3(right_value379,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value380=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1068, "bool"))));
            right_value380 = come_decrement_ref_count2(right_value380, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            i_260=0;            i_260<128;            i_260++            ){
                self->item_existance[i_260]=(_Bool)0;
            }
            self->size=128;
            self->len=0;
            __dec_obj72=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value382=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value381=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1078, "list$1charp"))))))));
            come_call_finalizer3(__dec_obj72,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value381,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value382,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            self->it=0;
            __result155__ = __result_obj__ = self;
            come_call_finalizer3(self,map$2charphsClassphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result155__;
            come_call_finalizer3(self,map$2charphsClassphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassphp_finalize(struct map$2charphsClassph* self){
void* __result_obj__;
int i_261;
_Bool _if_conditional344;
_Bool _if_conditional345;
int i_262;
_Bool _if_conditional346;
_Bool _if_conditional347;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_261, 0, sizeof(int));
memset(&i_262, 0, sizeof(int));
                for(                i_261=0;                i_261<self->size;                i_261++                ){
                    if(_if_conditional344=self->item_existance[i_261],                    _if_conditional344) {
                        if(_if_conditional345=1,                        _if_conditional345) {
                            come_call_finalizer3(self->items[i_261],sClass_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->items);
                for(                i_262=0;                i_262<self->size;                i_262++                ){
                    if(_if_conditional346=self->item_existance[i_262],                    _if_conditional346) {
                        if(_if_conditional347=1,                        _if_conditional347) {
                            self->keys[i_262] = come_decrement_ref_count2(self->keys[i_262], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->keys);
                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsClassph_finalize(struct map$2charphsClassph* self){
void* __result_obj__;
int i_263;
_Bool _if_conditional348;
_Bool _if_conditional349;
int i_264;
_Bool _if_conditional350;
_Bool _if_conditional351;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_263, 0, sizeof(int));
memset(&i_264, 0, sizeof(int));
            for(            i_263=0;            i_263<self->size;            i_263++            ){
                if(_if_conditional348=self->item_existance[i_263],                _if_conditional348) {
                    if(_if_conditional349=1,                    _if_conditional349) {
                        come_call_finalizer3(self->items[i_263],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->items);
            for(            i_264=0;            i_264<self->size;            i_264++            ){
                if(_if_conditional350=self->item_existance[i_264],                _if_conditional350) {
                    if(_if_conditional351=1,                    _if_conditional351) {
                        self->keys[i_264] = come_decrement_ref_count2(self->keys[i_264], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->keys);
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassModuleph* map$2charphsClassModuleph_initialize(struct map$2charphsClassModuleph* self){
void* __result_obj__;
void* right_value385;
void* right_value386;
void* right_value387;
int i_265;
void* right_value388;
void* right_value389;
struct list$1charp* __dec_obj74;
struct map$2charphsClassModuleph* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
right_value385 = (void*)0;
right_value386 = (void*)0;
right_value387 = (void*)0;
memset(&i_265, 0, sizeof(int));
right_value388 = (void*)0;
right_value389 = (void*)0;
            self->keys=(char**)come_increment_ref_count(((char**)(right_value385=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1066, "char*%"))));
            right_value385 = come_decrement_ref_count2(right_value385, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            self->items=(struct sClassModule**)come_increment_ref_count(((struct sClassModule**)(right_value386=(struct sClassModule**)come_calloc(1, sizeof(struct sClassModule*)*(1*(128)), "./neo-c.h", 1067, "sClassModule*%"))));
            come_call_finalizer3(right_value386,sClassModule_finalize, 0, 1, 0, 0, __result_obj__);
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value387=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1068, "bool"))));
            right_value387 = come_decrement_ref_count2(right_value387, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            i_265=0;            i_265<128;            i_265++            ){
                self->item_existance[i_265]=(_Bool)0;
            }
            self->size=128;
            self->len=0;
            __dec_obj74=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value389=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value388=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1078, "list$1charp"))))))));
            come_call_finalizer3(__dec_obj74,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value388,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value389,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            self->it=0;
            __result156__ = __result_obj__ = self;
            come_call_finalizer3(self,map$2charphsClassModulephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result156__;
            come_call_finalizer3(self,map$2charphsClassModulephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void sClassModule_finalize(struct sClassModule* self){
void* __result_obj__;
_Bool _if_conditional352;
_Bool _if_conditional353;
_Bool _if_conditional354;
_Bool _if_conditional355;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional352=self!=((void*)0)&&self->mName!=((void*)0),                _if_conditional352) {
                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional353=self!=((void*)0)&&self->mText!=((void*)0),                _if_conditional353) {
                    self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional354=self!=((void*)0)&&self->mParams!=((void*)0),                _if_conditional354) {
                    come_call_finalizer3(self->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional355=self!=((void*)0)&&self->mSName!=((void*)0),                _if_conditional355) {
                    self->mSName = come_decrement_ref_count2(self->mSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void map$2charphsClassModulephp_finalize(struct map$2charphsClassModuleph* self){
void* __result_obj__;
int i_266;
_Bool _if_conditional356;
_Bool _if_conditional357;
int i_267;
_Bool _if_conditional358;
_Bool _if_conditional359;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_266, 0, sizeof(int));
memset(&i_267, 0, sizeof(int));
                for(                i_266=0;                i_266<self->size;                i_266++                ){
                    if(_if_conditional356=self->item_existance[i_266],                    _if_conditional356) {
                        if(_if_conditional357=1,                        _if_conditional357) {
                            come_call_finalizer3(self->items[i_266],sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->items);
                for(                i_267=0;                i_267<self->size;                i_267++                ){
                    if(_if_conditional358=self->item_existance[i_267],                    _if_conditional358) {
                        if(_if_conditional359=1,                        _if_conditional359) {
                            self->keys[i_267] = come_decrement_ref_count2(self->keys[i_267], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->keys);
                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsClassModuleph_finalize(struct map$2charphsClassModuleph* self){
void* __result_obj__;
int i_268;
_Bool _if_conditional360;
_Bool _if_conditional361;
int i_269;
_Bool _if_conditional362;
_Bool _if_conditional363;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_268, 0, sizeof(int));
memset(&i_269, 0, sizeof(int));
            for(            i_268=0;            i_268<self->size;            i_268++            ){
                if(_if_conditional360=self->item_existance[i_268],                _if_conditional360) {
                    if(_if_conditional361=1,                    _if_conditional361) {
                        come_call_finalizer3(self->items[i_268],sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->items);
            for(            i_269=0;            i_269<self->size;            i_269++            ){
                if(_if_conditional362=self->item_existance[i_269],                _if_conditional362) {
                    if(_if_conditional363=1,                    _if_conditional363) {
                        self->keys[i_269] = come_decrement_ref_count2(self->keys[i_269], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->keys);
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsTypeph* map$2charphsTypeph_initialize(struct map$2charphsTypeph* self){
void* __result_obj__;
void* right_value392;
void* right_value393;
void* right_value394;
int i_270;
void* right_value395;
void* right_value396;
struct list$1charp* __dec_obj76;
struct map$2charphsTypeph* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
right_value392 = (void*)0;
right_value393 = (void*)0;
right_value394 = (void*)0;
memset(&i_270, 0, sizeof(int));
right_value395 = (void*)0;
right_value396 = (void*)0;
            self->keys=(char**)come_increment_ref_count(((char**)(right_value392=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1066, "char*%"))));
            right_value392 = come_decrement_ref_count2(right_value392, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            self->items=(struct sType**)come_increment_ref_count(((struct sType**)(right_value393=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(128)), "./neo-c.h", 1067, "sType*%"))));
            come_call_finalizer3(right_value393,sType_finalize, 0, 1, 0, 0, __result_obj__);
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value394=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1068, "bool"))));
            right_value394 = come_decrement_ref_count2(right_value394, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            i_270=0;            i_270<128;            i_270++            ){
                self->item_existance[i_270]=(_Bool)0;
            }
            self->size=128;
            self->len=0;
            __dec_obj76=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value396=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value395=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1078, "list$1charp"))))))));
            come_call_finalizer3(__dec_obj76,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value395,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value396,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            self->it=0;
            __result157__ = __result_obj__ = self;
            come_call_finalizer3(self,map$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result157__;
            come_call_finalizer3(self,map$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsTypephp_finalize(struct map$2charphsTypeph* self){
void* __result_obj__;
int i_271;
_Bool _if_conditional364;
_Bool _if_conditional365;
int i_272;
_Bool _if_conditional366;
_Bool _if_conditional367;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_271, 0, sizeof(int));
memset(&i_272, 0, sizeof(int));
                for(                i_271=0;                i_271<self->size;                i_271++                ){
                    if(_if_conditional364=self->item_existance[i_271],                    _if_conditional364) {
                        if(_if_conditional365=1,                        _if_conditional365) {
                            come_call_finalizer3(self->items[i_271],sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->items);
                for(                i_272=0;                i_272<self->size;                i_272++                ){
                    if(_if_conditional366=self->item_existance[i_272],                    _if_conditional366) {
                        if(_if_conditional367=1,                        _if_conditional367) {
                            self->keys[i_272] = come_decrement_ref_count2(self->keys[i_272], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->keys);
                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsTypeph_finalize(struct map$2charphsTypeph* self){
void* __result_obj__;
int i_273;
_Bool _if_conditional368;
_Bool _if_conditional369;
int i_274;
_Bool _if_conditional370;
_Bool _if_conditional371;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_273, 0, sizeof(int));
memset(&i_274, 0, sizeof(int));
            for(            i_273=0;            i_273<self->size;            i_273++            ){
                if(_if_conditional368=self->item_existance[i_273],                _if_conditional368) {
                    if(_if_conditional369=1,                    _if_conditional369) {
                        come_call_finalizer3(self->items[i_273],sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->items);
            for(            i_274=0;            i_274<self->size;            i_274++            ){
                if(_if_conditional370=self->item_existance[i_274],                _if_conditional370) {
                    if(_if_conditional371=1,                    _if_conditional371) {
                        self->keys[i_274] = come_decrement_ref_count2(self->keys[i_274], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->keys);
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sModule_finalize(struct sModule* self){
void* __result_obj__;
_Bool _if_conditional372;
_Bool _if_conditional373;
_Bool _if_conditional374;
_Bool _if_conditional375;
_Bool _if_conditional376;
_Bool _if_conditional377;
_Bool _if_conditional378;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional372=self!=((void*)0)&&self->mSourceHead!=((void*)0),            _if_conditional372) {
                come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional373=self!=((void*)0)&&self->mSourceHead2!=((void*)0),            _if_conditional373) {
                come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional374=self!=((void*)0)&&self->mSource!=((void*)0),            _if_conditional374) {
                come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional375=self!=((void*)0)&&self->mLastCode!=((void*)0),            _if_conditional375) {
                self->mLastCode = come_decrement_ref_count2(self->mLastCode, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional376=self!=((void*)0)&&self->mLastCode2!=((void*)0),            _if_conditional376) {
                self->mLastCode2 = come_decrement_ref_count2(self->mLastCode2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional377=self!=((void*)0)&&self->mLastCode3!=((void*)0),            _if_conditional377) {
                self->mLastCode3 = come_decrement_ref_count2(self->mLastCode3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional378=self!=((void*)0)&&self->mHeader!=((void*)0),            _if_conditional378) {
                come_call_finalizer3(self->mHeader,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list$1sRightValueObjectph* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
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
                it_275=self->head;
                while(_while_condtional34=it_275!=((void*)0),                _while_condtional34) {
                    prev_it_276=it_275;
                    it_275=it_275->next;
                    come_call_finalizer3(prev_it_276,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional379;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional379=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional379) {
                            come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
void* __result_obj__;
_Bool _if_conditional380;
_Bool _if_conditional381;
_Bool _if_conditional382;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional380=self!=((void*)0)&&self->mType!=((void*)0),                                _if_conditional380) {
                                    come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional381=self!=((void*)0)&&self->mVarName!=((void*)0),                                _if_conditional381) {
                                    self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional382=self!=((void*)0)&&self->mFunName!=((void*)0),                                _if_conditional382) {
                                    self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
            it_277=self->head;
            while(_while_condtional35=it_277!=((void*)0),            _while_condtional35) {
                prev_it_278=it_277;
                it_277=it_277->next;
                come_call_finalizer3(prev_it_278,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
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
                it_279=self->head;
                while(_while_condtional36=it_279!=((void*)0),                _while_condtional36) {
                    prev_it_280=it_279;
                    it_279=it_279->next;
                    come_call_finalizer3(prev_it_280,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional383;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional383=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional383) {
                            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional384;
_Bool _if_conditional385;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional384=self!=((void*)0)&&self->c_value!=((void*)0),                                _if_conditional384) {
                                    self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional385=self!=((void*)0)&&self->type!=((void*)0),                                _if_conditional385) {
                                    come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
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
            it_281=self->head;
            while(_while_condtional37=it_281!=((void*)0),            _while_condtional37) {
                prev_it_282=it_281;
                it_281=it_281->next;
                come_call_finalizer3(prev_it_282,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static void sInfo_finalize(struct sInfo* self){
void* __result_obj__;
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
_Bool _if_conditional411;
_Bool _if_conditional412;
_Bool _if_conditional413;
_Bool _if_conditional414;
_Bool _if_conditional415;
_Bool _if_conditional416;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional389=self!=((void*)0)&&self->original_source!=((void*)0),            _if_conditional389) {
                come_call_finalizer3(self->original_source,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional390=self!=((void*)0)&&self->source!=((void*)0),            _if_conditional390) {
                come_call_finalizer3(self->source,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional391=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional391) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional392=self!=((void*)0)&&self->base_sname!=((void*)0),            _if_conditional392) {
                self->base_sname = come_decrement_ref_count2(self->base_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional393=self!=((void*)0)&&self->err_line!=((void*)0),            _if_conditional393) {
                self->err_line = come_decrement_ref_count2(self->err_line, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional394=self!=((void*)0)&&self->clang_option!=((void*)0),            _if_conditional394) {
                self->clang_option = come_decrement_ref_count2(self->clang_option, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional395=self!=((void*)0)&&self->cpp_option!=((void*)0),            _if_conditional395) {
                self->cpp_option = come_decrement_ref_count2(self->cpp_option, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional396=self!=((void*)0)&&self->come_fun_name!=((void*)0),            _if_conditional396) {
                self->come_fun_name = come_decrement_ref_count2(self->come_fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional397=self!=((void*)0)&&self->funcs!=((void*)0),            _if_conditional397) {
                come_call_finalizer3(self->funcs,map$2charphsFunphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional398=self!=((void*)0)&&self->generics_funcs!=((void*)0),            _if_conditional398) {
                come_call_finalizer3(self->generics_funcs,map$2charphsGenericsFunphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional399=self!=((void*)0)&&self->classes!=((void*)0),            _if_conditional399) {
                come_call_finalizer3(self->classes,map$2charphsClassphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional400=self!=((void*)0)&&self->modules!=((void*)0),            _if_conditional400) {
                come_call_finalizer3(self->modules,map$2charphsClassModulephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional401=self!=((void*)0)&&self->types!=((void*)0),            _if_conditional401) {
                come_call_finalizer3(self->types,map$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional402=self!=((void*)0)&&self->generics_classes!=((void*)0),            _if_conditional402) {
                come_call_finalizer3(self->generics_classes,map$2charphsClassphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional403=self!=((void*)0)&&self->module!=((void*)0),            _if_conditional403) {
                come_call_finalizer3(self->module,sModule_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional404=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional404) {
                come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional405=self!=((void*)0)&&self->right_value_objects!=((void*)0),            _if_conditional405) {
                come_call_finalizer3(self->right_value_objects,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional406=self!=((void*)0)&&self->generics_type!=((void*)0),            _if_conditional406) {
                come_call_finalizer3(self->generics_type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional407=self!=((void*)0)&&self->method_generics_types!=((void*)0),            _if_conditional407) {
                come_call_finalizer3(self->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional408=self!=((void*)0)&&self->stack!=((void*)0),            _if_conditional408) {
                come_call_finalizer3(self->stack,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional409=self!=((void*)0)&&self->come_function_result_type!=((void*)0),            _if_conditional409) {
                come_call_finalizer3(self->come_function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional410=self!=((void*)0)&&self->gv_table!=((void*)0),            _if_conditional410) {
                come_call_finalizer3(self->gv_table,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional411=self!=((void*)0)&&self->generics_type_names!=((void*)0),            _if_conditional411) {
                come_call_finalizer3(self->generics_type_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional412=self!=((void*)0)&&self->method_generics_type_names!=((void*)0),            _if_conditional412) {
                come_call_finalizer3(self->method_generics_type_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional413=self!=((void*)0)&&self->impl_type!=((void*)0),            _if_conditional413) {
                come_call_finalizer3(self->impl_type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional414=self!=((void*)0)&&self->output_file_name!=((void*)0),            _if_conditional414) {
                self->output_file_name = come_decrement_ref_count2(self->output_file_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional415=self!=((void*)0)&&self->function_result_type!=((void*)0),            _if_conditional415) {
                come_call_finalizer3(self->function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional416=self!=((void*)0)&&self->module_params!=((void*)0),            _if_conditional416) {
                come_call_finalizer3(self->module_params,map$2charphcharphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static void map$2charphcharphp_finalize(struct map$2charphcharph* self){
void* __result_obj__;
int i_285;
_Bool _if_conditional417;
_Bool _if_conditional418;
int i_286;
_Bool _if_conditional419;
_Bool _if_conditional420;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_285, 0, sizeof(int));
memset(&i_286, 0, sizeof(int));
                    for(                    i_285=0;                    i_285<self->size;                    i_285++                    ){
                        if(_if_conditional417=self->item_existance[i_285],                        _if_conditional417) {
                            if(_if_conditional418=1,                            _if_conditional418) {
                                self->items[i_285] = come_decrement_ref_count2(self->items[i_285], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                    come_free((char*)self->items);
                    for(                    i_286=0;                    i_286<self->size;                    i_286++                    ){
                        if(_if_conditional419=self->item_existance[i_286],                        _if_conditional419) {
                            if(_if_conditional420=1,                            _if_conditional420) {
                                self->keys[i_286] = come_decrement_ref_count2(self->keys[i_286], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                    come_free((char*)self->keys);
                    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional469;
struct list_item$1charph* it_305;
int i_306;
_Bool _while_condtional38;
_Bool _if_conditional470;
char* __result168__;
char* default_value_307;
char* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_305, 0, sizeof(struct list_item$1charph*));
memset(&i_306, 0, sizeof(int));
memset(&default_value_307, 0, sizeof(char*));
                                            if(_if_conditional469=position<0,                                            _if_conditional469) {
                                                position+=self->len;
                                            }
                                            it_305=self->head;
                                            i_306=0;
                                            while(_while_condtional38=it_305!=((void*)0),                                            _while_condtional38) {
                                                if(_if_conditional470=position==i_306,                                                _if_conditional470) {
                                                    __result168__ = __result_obj__ = it_305->item;
                                                    return __result168__;
                                                }
                                                it_305=it_305->next;
                                                i_306++;
                                            }
                                            memset(&default_value_307,0,sizeof(char*));
                                            __result169__ = __result_obj__ = default_value_307;
                                            default_value_307 = come_decrement_ref_count2(default_value_307, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                            return __result169__;
                                            default_value_307 = come_decrement_ref_count2(default_value_307, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void method_block2_02transpilec(struct __current_stack2__* parent){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
                                            printf("%s %d: linker faield\n",(*(parent->info_304)).sname,(*(parent->info_304)).sline);
                                            exit(13);
}

