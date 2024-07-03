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
_Bool gComeC=(_Bool)0;
char* gProgramName=((void*)0);
_Bool gCommonHeader=(_Bool)0;
_Bool gComeMalloc=(_Bool)0;
_Bool gComeDebug=(_Bool)0;
_Bool gComeOriginalSourcePosition=(_Bool)1;
int gComeDebugStackFrameID=0;
struct __current_stack1__
{
    int* n_52;
    char** msg2_50;
    struct sInfo** info;
    char** msg;
};
struct __current_stack2__
{
    struct sInfo* info_298;
    struct buffer** clang_option_281;
    struct buffer** cpp_option_282;
    struct list$1charph** files_283;
    struct list$1charph** object_files_284;
    _Bool* output_object_file_285;
    _Bool* output_cpp_file_286;
    _Bool* output_source_file_flag_287;
    char** output_file_name_288;
    _Bool* verbose_289;
    _Bool* come_debug_290;
    _Bool* come_malloc_291;
    _Bool* come_str_292;
    int* argc;
    char*** argv;
};

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
    # 45 "./neo-c.h"
    perror(msg);
    # 46 "./neo-c.h"
    stackframe();
    # 47 "./neo-c.h"
    exit(4);
    # 49 "./neo-c.h"
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
    # 1897 "./neo-c.h"
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1897, "buffer"))))))));
    come_call_finalizer3(right_value0,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value1,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1898 "./neo-c.h"
    buffer_append(result_0,self,sizeof(char)*len);
    # 1899 "./neo-c.h"
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
    # 1904 "./neo-c.h"
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1904, "buffer"))))))));
    come_call_finalizer3(right_value2,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value3,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1905 "./neo-c.h"
    buffer_append(result_1,(char*)self,sizeof(short short)*len);
    # 1906 "./neo-c.h"
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
    # 1911 "./neo-c.h"
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1911, "buffer"))))))));
    come_call_finalizer3(right_value4,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value5,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1912 "./neo-c.h"
    buffer_append(result_2,(char*)self,sizeof(int)*len);
    # 1913 "./neo-c.h"
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
    # 1918 "./neo-c.h"
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1918, "buffer"))))))));
    come_call_finalizer3(right_value6,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value7,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1919 "./neo-c.h"
    buffer_append(result_3,(char*)self,sizeof(long)*len);
    # 1920 "./neo-c.h"
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
    # 1925 "./neo-c.h"
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1925, "buffer"))))))));
    come_call_finalizer3(right_value8,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value9,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1926 "./neo-c.h"
    buffer_append(result_4,(char*)self,sizeof(float)*len);
    # 1927 "./neo-c.h"
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
    # 1932 "./neo-c.h"
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1932, "buffer"))))))));
    come_call_finalizer3(right_value10,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value11,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1933 "./neo-c.h"
    buffer_append(result_5,(char*)self,sizeof(double)*len);
    # 1934 "./neo-c.h"
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
    # 1948 "./neo-c.h"
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1948, "smart_pointer$1char"))));
    come_call_finalizer3(right_value12,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1950 "./neo-c.h"
    __dec_obj1=result_6->memory;
    result_6->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=buffer_clone(self))));
    come_call_finalizer3(__dec_obj1,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value13,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1951 "./neo-c.h"
    result_6->p=result_6->memory->buf;
    # 1953 "./neo-c.h"
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
    # 1958 "./neo-c.h"
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1958, "smart_pointer$1char"))));
    come_call_finalizer3(right_value14,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1960 "./neo-c.h"
    __dec_obj2=result_7->memory;
    result_7->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=buffer_clone(self))));
    come_call_finalizer3(__dec_obj2,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value15,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1961 "./neo-c.h"
    result_7->p=(char*)result_7->memory->buf;
    # 1963 "./neo-c.h"
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
    # 1968 "./neo-c.h"
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 1968, "smart_pointer$1short"))));
    come_call_finalizer3(right_value16,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1970 "./neo-c.h"
    __dec_obj3=result_8->memory;
    result_8->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value17=buffer_clone(self))));
    come_call_finalizer3(__dec_obj3,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value17,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1971 "./neo-c.h"
    result_8->p=(short short*)result_8->memory->buf;
    # 1973 "./neo-c.h"
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
    # 1978 "./neo-c.h"
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 1978, "smart_pointer$1int"))));
    come_call_finalizer3(right_value18,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1980 "./neo-c.h"
    __dec_obj4=result_9->memory;
    result_9->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=buffer_clone(self))));
    come_call_finalizer3(__dec_obj4,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value19,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1981 "./neo-c.h"
    result_9->p=(int*)result_9->memory->buf;
    # 1983 "./neo-c.h"
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
    # 1988 "./neo-c.h"
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 1988, "smart_pointer$1long"))));
    come_call_finalizer3(right_value20,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1990 "./neo-c.h"
    __dec_obj5=result_10->memory;
    result_10->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value21=buffer_clone(self))));
    come_call_finalizer3(__dec_obj5,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value21,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1991 "./neo-c.h"
    result_10->p=(long*)result_10->memory->buf;
    # 1993 "./neo-c.h"
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
    # 2159 "./neo-c.h"
    __result14__ = __result_obj__ = ((struct smart_pointer$1char*)(right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2159, "smart_pointer$1char")))),self,len)));
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
    # 2164 "./neo-c.h"
    __result16__ = __result_obj__ = ((struct smart_pointer$1short*)(right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2164, "smart_pointer$1short")))),self,len)));
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
    # 2169 "./neo-c.h"
    __result18__ = __result_obj__ = ((struct smart_pointer$1int*)(right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2169, "smart_pointer$1int")))),self,len)));
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
    # 2174 "./neo-c.h"
    __result20__ = __result_obj__ = ((struct smart_pointer$1long*)(right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2174, "smart_pointer$1long")))),self,len)));
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
    # 2179 "./neo-c.h"
    __result22__ = __result_obj__ = ((struct smart_pointer$1float*)(right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./neo-c.h", 2179, "smart_pointer$1float")))),self,len)));
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
    # 2184 "./neo-c.h"
    __result24__ = __result_obj__ = ((struct smart_pointer$1double*)(right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./neo-c.h", 2184, "smart_pointer$1double")))),self,len)));
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
    # 2189 "./neo-c.h"
    __result27__ = __result_obj__ = ((struct list$1char*)(right_value50=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count(((struct list$1char*)(right_value46=(struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./neo-c.h", 2189, "list$1char")))),len,self)));
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
    # 2194 "./neo-c.h"
    __result30__ = __result_obj__ = ((struct list$1short*)(right_value55=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count(((struct list$1short*)(right_value51=(struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./neo-c.h", 2194, "list$1short")))),len,self)));
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
    # 2199 "./neo-c.h"
    __result33__ = __result_obj__ = ((struct list$1int*)(right_value60=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value56=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./neo-c.h", 2199, "list$1int")))),len,self)));
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
    # 2204 "./neo-c.h"
    __result36__ = __result_obj__ = ((struct list$1long*)(right_value65=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count(((struct list$1long*)(right_value61=(struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./neo-c.h", 2204, "list$1long")))),len,self)));
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
    # 2209 "./neo-c.h"
    __result39__ = __result_obj__ = ((struct list$1float*)(right_value70=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count(((struct list$1float*)(right_value66=(struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./neo-c.h", 2209, "list$1float")))),len,self)));
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
    # 2214 "./neo-c.h"
    __result42__ = __result_obj__ = ((struct list$1double*)(right_value75=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count(((struct list$1double*)(right_value71=(struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./neo-c.h", 2214, "list$1double")))),len,self)));
    come_call_finalizer3(right_value71,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value75,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    return __result42__;
}
static inline unsigned long int charpa_length(char* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result43__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2244 "./neo-c.h"
    __result43__ = len;
    return __result43__;
}
static inline unsigned long int shortpa_length(short short* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result44__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2249 "./neo-c.h"
    __result44__ = len;
    return __result44__;
}
static inline unsigned long int intpa_length(int* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result45__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2254 "./neo-c.h"
    __result45__ = len;
    return __result45__;
}
static inline unsigned long int longpa_length(long* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result46__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2259 "./neo-c.h"
    __result46__ = len;
    return __result46__;
}
static inline unsigned long int floatpa_length(float* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result47__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2264 "./neo-c.h"
    __result47__ = len;
    return __result47__;
}
static inline unsigned long int doublepa_length(double* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result48__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2269 "./neo-c.h"
    __result48__ = len;
    return __result48__;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value76;
char* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
right_value76 = (void*)0;
    # 2330 "./neo-c.h"
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
    # 2335 "./neo-c.h"
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
    # 2340 "./neo-c.h"
    __result51__ = __result_obj__ = ((char*)(right_value78=xsprintf(msg,self)));
    right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result51__;
}
static inline unsigned short int __bswap16(unsigned short int __x){
void* __result_obj__;
unsigned short int __result52__;
memset(&__result_obj__, 0, sizeof(void*));
    # 21 "/usr/include/endian.h"
    __result52__ = __x<<8|__x>>8;
    return __result52__;
}
static inline unsigned int __bswap32(unsigned int __x){
void* __result_obj__;
unsigned int __result53__;
memset(&__result_obj__, 0, sizeof(void*));
    # 26 "/usr/include/endian.h"
    __result53__ = __x>>24|__x>>8&65280|__x<<8&16711680|__x<<24;
    return __result53__;
}
static inline unsigned long int __bswap64(unsigned long int __x){
void* __result_obj__;
unsigned long int __result54__;
memset(&__result_obj__, 0, sizeof(void*));
    # 31 "/usr/include/endian.h"
    __result54__ = __bswap32(__x)+0<<32|__bswap32(__x>>32);
    return __result54__;
}

// body function








static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
void* __result_obj__;
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "smart_pointer$1charp_finalize"
        # 0 "smart_pointer$1charp_finalize"
        if(_if_conditional1=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional1) {
            # 0 "smart_pointer$1charp_finalize"
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
void* __result_obj__;
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "smart_pointer$1shortp_finalize"
        # 0 "smart_pointer$1shortp_finalize"
        if(_if_conditional2=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional2) {
            # 0 "smart_pointer$1shortp_finalize"
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
void* __result_obj__;
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "smart_pointer$1intp_finalize"
        # 0 "smart_pointer$1intp_finalize"
        if(_if_conditional3=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional3) {
            # 0 "smart_pointer$1intp_finalize"
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
void* __result_obj__;
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "smart_pointer$1longp_finalize"
        # 0 "smart_pointer$1longp_finalize"
        if(_if_conditional4=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional4) {
            # 0 "smart_pointer$1longp_finalize"
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
        # 2000 "./neo-c.h"
        __dec_obj6=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"))))))));
        come_call_finalizer3(__dec_obj6,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value23,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value24,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2002 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(char)*size);
        # 2004 "./neo-c.h"
        self->p=(char*)self->memory->buf;
        # 2006 "./neo-c.h"
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
        # 2000 "./neo-c.h"
        __dec_obj7=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"))))))));
        come_call_finalizer3(__dec_obj7,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value27,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value28,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2002 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(short short)*size);
        # 2004 "./neo-c.h"
        self->p=(short short*)self->memory->buf;
        # 2006 "./neo-c.h"
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
        # 2000 "./neo-c.h"
        __dec_obj8=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"))))))));
        come_call_finalizer3(__dec_obj8,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value31,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value32,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2002 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(int)*size);
        # 2004 "./neo-c.h"
        self->p=(int*)self->memory->buf;
        # 2006 "./neo-c.h"
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
        # 2000 "./neo-c.h"
        __dec_obj9=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"))))))));
        come_call_finalizer3(__dec_obj9,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value35,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value36,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2002 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(long)*size);
        # 2004 "./neo-c.h"
        self->p=(long*)self->memory->buf;
        # 2006 "./neo-c.h"
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
        # 2000 "./neo-c.h"
        __dec_obj10=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"))))))));
        come_call_finalizer3(__dec_obj10,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value39,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value40,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2002 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(float)*size);
        # 2004 "./neo-c.h"
        self->p=(float*)self->memory->buf;
        # 2006 "./neo-c.h"
        __result21__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
        return __result21__;
        come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
void* __result_obj__;
_Bool _if_conditional5;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "smart_pointer$1floatp_finalize"
            # 0 "smart_pointer$1floatp_finalize"
            if(_if_conditional5=self!=((void*)0)&&self->memory!=((void*)0),            _if_conditional5) {
                # 0 "smart_pointer$1floatp_finalize"
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
        # 2000 "./neo-c.h"
        __dec_obj11=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"))))))));
        come_call_finalizer3(__dec_obj11,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value43,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value44,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2002 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(double)*size);
        # 2004 "./neo-c.h"
        self->p=(double*)self->memory->buf;
        # 2006 "./neo-c.h"
        __result23__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
        return __result23__;
        come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
void* __result_obj__;
_Bool _if_conditional6;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "smart_pointer$1doublep_finalize"
            # 0 "smart_pointer$1doublep_finalize"
            if(_if_conditional6=self!=((void*)0)&&self->memory!=((void*)0),            _if_conditional6) {
                # 0 "smart_pointer$1doublep_finalize"
                come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__;
int i_11;
struct list$1char* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_11, 0, sizeof(int));
        # 103 "./neo-c.h"
        self->head=((void*)0);
        # 104 "./neo-c.h"
        self->tail=((void*)0);
        # 105 "./neo-c.h"
        self->len=0;
        # 111 "./neo-c.h"
        for(        i_11=0;        i_11<num_value;        i_11++        ){
            # 108 "./neo-c.h"
            list$1char_push_back(self,values[i_11]);
        }
        # 111 "./neo-c.h"
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
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional7=self->len==0,                _if_conditional7) {
                    # 217 "./neo-c.h"
                    litem_12=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value47=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 217, "list_item$1char"))));
                    come_call_finalizer3(right_value47,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "./neo-c.h"
                    litem_12->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_12->next=((void*)0);
                    # 221 "./neo-c.h"
                    litem_12->item=item;
                    # 223 "./neo-c.h"
                    self->tail=litem_12;
                    # 224 "./neo-c.h"
                    self->head=litem_12;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional8=self->len==1,                    _if_conditional8) {
                        # 227 "./neo-c.h"
                        litem_13=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value48=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 227, "list_item$1char"))));
                        come_call_finalizer3(right_value48,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_13->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_13->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_13->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_13;
                        # 234 "./neo-c.h"
                        self->head->next=litem_13;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_14=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value49=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 237, "list_item$1char"))));
                        come_call_finalizer3(right_value49,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_14->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_14->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_14->item=item;
                        # 243 "./neo-c.h"
                        self->tail->next=litem_14;
                        # 244 "./neo-c.h"
                        self->tail=litem_14;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
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
            # 114 "./neo-c.h"
            it_15=self->head;
            # 120 "./neo-c.h"
            while(_while_condtional1=it_15!=((void*)0),            _while_condtional1) {
                # 116 "./neo-c.h"
                prev_it_16=it_15;
                # 117 "./neo-c.h"
                it_15=it_15->next;
                # 118 "./neo-c.h"
                come_call_finalizer3(prev_it_16,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values){
void* __result_obj__;
int i_17;
struct list$1short* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_17, 0, sizeof(int));
        # 103 "./neo-c.h"
        self->head=((void*)0);
        # 104 "./neo-c.h"
        self->tail=((void*)0);
        # 105 "./neo-c.h"
        self->len=0;
        # 111 "./neo-c.h"
        for(        i_17=0;        i_17<num_value;        i_17++        ){
            # 108 "./neo-c.h"
            list$1short_push_back(self,values[i_17]);
        }
        # 111 "./neo-c.h"
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
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional9=self->len==0,                _if_conditional9) {
                    # 217 "./neo-c.h"
                    litem_18=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value52=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 217, "list_item$1short"))));
                    come_call_finalizer3(right_value52,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "./neo-c.h"
                    litem_18->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_18->next=((void*)0);
                    # 221 "./neo-c.h"
                    litem_18->item=item;
                    # 223 "./neo-c.h"
                    self->tail=litem_18;
                    # 224 "./neo-c.h"
                    self->head=litem_18;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional10=self->len==1,                    _if_conditional10) {
                        # 227 "./neo-c.h"
                        litem_19=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value53=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 227, "list_item$1short"))));
                        come_call_finalizer3(right_value53,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_19->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_19->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_19->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_19;
                        # 234 "./neo-c.h"
                        self->head->next=litem_19;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_20=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value54=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 237, "list_item$1short"))));
                        come_call_finalizer3(right_value54,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_20->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_20->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_20->item=item;
                        # 243 "./neo-c.h"
                        self->tail->next=litem_20;
                        # 244 "./neo-c.h"
                        self->tail=litem_20;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
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
            # 114 "./neo-c.h"
            it_21=self->head;
            # 120 "./neo-c.h"
            while(_while_condtional2=it_21!=((void*)0),            _while_condtional2) {
                # 116 "./neo-c.h"
                prev_it_22=it_21;
                # 117 "./neo-c.h"
                it_21=it_21->next;
                # 118 "./neo-c.h"
                come_call_finalizer3(prev_it_22,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__;
int i_23;
struct list$1int* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_23, 0, sizeof(int));
        # 103 "./neo-c.h"
        self->head=((void*)0);
        # 104 "./neo-c.h"
        self->tail=((void*)0);
        # 105 "./neo-c.h"
        self->len=0;
        # 111 "./neo-c.h"
        for(        i_23=0;        i_23<num_value;        i_23++        ){
            # 108 "./neo-c.h"
            list$1int_push_back(self,values[i_23]);
        }
        # 111 "./neo-c.h"
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
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional11=self->len==0,                _if_conditional11) {
                    # 217 "./neo-c.h"
                    litem_24=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value57=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 217, "list_item$1int"))));
                    come_call_finalizer3(right_value57,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "./neo-c.h"
                    litem_24->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_24->next=((void*)0);
                    # 221 "./neo-c.h"
                    litem_24->item=item;
                    # 223 "./neo-c.h"
                    self->tail=litem_24;
                    # 224 "./neo-c.h"
                    self->head=litem_24;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional12=self->len==1,                    _if_conditional12) {
                        # 227 "./neo-c.h"
                        litem_25=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value58=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 227, "list_item$1int"))));
                        come_call_finalizer3(right_value58,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_25->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_25->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_25->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_25;
                        # 234 "./neo-c.h"
                        self->head->next=litem_25;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_26=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value59=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 237, "list_item$1int"))));
                        come_call_finalizer3(right_value59,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_26->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_26->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_26->item=item;
                        # 243 "./neo-c.h"
                        self->tail->next=litem_26;
                        # 244 "./neo-c.h"
                        self->tail=litem_26;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
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
            # 114 "./neo-c.h"
            it_27=self->head;
            # 120 "./neo-c.h"
            while(_while_condtional3=it_27!=((void*)0),            _while_condtional3) {
                # 116 "./neo-c.h"
                prev_it_28=it_27;
                # 117 "./neo-c.h"
                it_27=it_27->next;
                # 118 "./neo-c.h"
                come_call_finalizer3(prev_it_28,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__;
int i_29;
struct list$1long* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_29, 0, sizeof(int));
        # 103 "./neo-c.h"
        self->head=((void*)0);
        # 104 "./neo-c.h"
        self->tail=((void*)0);
        # 105 "./neo-c.h"
        self->len=0;
        # 111 "./neo-c.h"
        for(        i_29=0;        i_29<num_value;        i_29++        ){
            # 108 "./neo-c.h"
            list$1long_push_back(self,values[i_29]);
        }
        # 111 "./neo-c.h"
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
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional13=self->len==0,                _if_conditional13) {
                    # 217 "./neo-c.h"
                    litem_30=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value62=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 217, "list_item$1long"))));
                    come_call_finalizer3(right_value62,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "./neo-c.h"
                    litem_30->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_30->next=((void*)0);
                    # 221 "./neo-c.h"
                    litem_30->item=item;
                    # 223 "./neo-c.h"
                    self->tail=litem_30;
                    # 224 "./neo-c.h"
                    self->head=litem_30;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional14=self->len==1,                    _if_conditional14) {
                        # 227 "./neo-c.h"
                        litem_31=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value63=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 227, "list_item$1long"))));
                        come_call_finalizer3(right_value63,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_31->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_31->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_31->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_31;
                        # 234 "./neo-c.h"
                        self->head->next=litem_31;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_32=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value64=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 237, "list_item$1long"))));
                        come_call_finalizer3(right_value64,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_32->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_32->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_32->item=item;
                        # 243 "./neo-c.h"
                        self->tail->next=litem_32;
                        # 244 "./neo-c.h"
                        self->tail=litem_32;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
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
            # 114 "./neo-c.h"
            it_33=self->head;
            # 120 "./neo-c.h"
            while(_while_condtional4=it_33!=((void*)0),            _while_condtional4) {
                # 116 "./neo-c.h"
                prev_it_34=it_33;
                # 117 "./neo-c.h"
                it_33=it_33->next;
                # 118 "./neo-c.h"
                come_call_finalizer3(prev_it_34,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__;
int i_35;
struct list$1float* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_35, 0, sizeof(int));
        # 103 "./neo-c.h"
        self->head=((void*)0);
        # 104 "./neo-c.h"
        self->tail=((void*)0);
        # 105 "./neo-c.h"
        self->len=0;
        # 111 "./neo-c.h"
        for(        i_35=0;        i_35<num_value;        i_35++        ){
            # 108 "./neo-c.h"
            list$1float_push_back(self,values[i_35]);
        }
        # 111 "./neo-c.h"
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
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional15=self->len==0,                _if_conditional15) {
                    # 217 "./neo-c.h"
                    litem_36=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value67=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 217, "list_item$1float"))));
                    come_call_finalizer3(right_value67,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "./neo-c.h"
                    litem_36->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_36->next=((void*)0);
                    # 221 "./neo-c.h"
                    litem_36->item=item;
                    # 223 "./neo-c.h"
                    self->tail=litem_36;
                    # 224 "./neo-c.h"
                    self->head=litem_36;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional16=self->len==1,                    _if_conditional16) {
                        # 227 "./neo-c.h"
                        litem_37=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value68=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 227, "list_item$1float"))));
                        come_call_finalizer3(right_value68,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_37->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_37->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_37->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_37;
                        # 234 "./neo-c.h"
                        self->head->next=litem_37;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_38=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value69=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 237, "list_item$1float"))));
                        come_call_finalizer3(right_value69,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_38->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_38->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_38->item=item;
                        # 243 "./neo-c.h"
                        self->tail->next=litem_38;
                        # 244 "./neo-c.h"
                        self->tail=litem_38;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
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
            # 114 "./neo-c.h"
            it_39=self->head;
            # 120 "./neo-c.h"
            while(_while_condtional5=it_39!=((void*)0),            _while_condtional5) {
                # 116 "./neo-c.h"
                prev_it_40=it_39;
                # 117 "./neo-c.h"
                it_39=it_39->next;
                # 118 "./neo-c.h"
                come_call_finalizer3(prev_it_40,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__;
int i_41;
struct list$1double* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_41, 0, sizeof(int));
        # 103 "./neo-c.h"
        self->head=((void*)0);
        # 104 "./neo-c.h"
        self->tail=((void*)0);
        # 105 "./neo-c.h"
        self->len=0;
        # 111 "./neo-c.h"
        for(        i_41=0;        i_41<num_value;        i_41++        ){
            # 108 "./neo-c.h"
            list$1double_push_back(self,values[i_41]);
        }
        # 111 "./neo-c.h"
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
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional17=self->len==0,                _if_conditional17) {
                    # 217 "./neo-c.h"
                    litem_42=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value72=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 217, "list_item$1double"))));
                    come_call_finalizer3(right_value72,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "./neo-c.h"
                    litem_42->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_42->next=((void*)0);
                    # 221 "./neo-c.h"
                    litem_42->item=item;
                    # 223 "./neo-c.h"
                    self->tail=litem_42;
                    # 224 "./neo-c.h"
                    self->head=litem_42;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional18=self->len==1,                    _if_conditional18) {
                        # 227 "./neo-c.h"
                        litem_43=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value73=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 227, "list_item$1double"))));
                        come_call_finalizer3(right_value73,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_43->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_43->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_43->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_43;
                        # 234 "./neo-c.h"
                        self->head->next=litem_43;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_44=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value74=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 237, "list_item$1double"))));
                        come_call_finalizer3(right_value74,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_44->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_44->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_44->item=item;
                        # 243 "./neo-c.h"
                        self->tail->next=litem_44;
                        # 244 "./neo-c.h"
                        self->tail=litem_44;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
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
            # 114 "./neo-c.h"
            it_45=self->head;
            # 120 "./neo-c.h"
            while(_while_condtional6=it_45!=((void*)0),            _while_condtional6) {
                # 116 "./neo-c.h"
                prev_it_46=it_45;
                # 117 "./neo-c.h"
                it_45=it_45->next;
                # 118 "./neo-c.h"
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
    # 28 "02transpile.c"
    # 22 "02transpile.c"
    if(gComeOriginalSourcePosition) {
        # 27 "02transpile.c"
        # 23 "02transpile.c"
        if(info->writing_source_file_position) {
            # 24 "02transpile.c"
            add_come_code(info,((char*)(right_value81=xsprintf("# \%s \"\%s\"\n",((char*)(right_value79=int_to_string(info->sline))),((char*)(right_value80=string_to_string(info->sname)))))));
            right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 25 "02transpile.c"
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
    # 32 "02transpile.c"
    sname_47=(char*)come_increment_ref_count(((char*)(right_value82=__builtin_string(info->sname))));
    right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 33 "02transpile.c"
    sline_48=info->sline;
    # 35 "02transpile.c"
    __dec_obj12=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value84=__builtin_string(((char*)(right_value83=node->sname(node->_protocol_obj)))))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 36 "02transpile.c"
    info->sline=node->sline(node->_protocol_obj);
    # 38 "02transpile.c"
    write_source_file_position_to_source(info);
    # 40 "02transpile.c"
    result_49=node->compile(node->_protocol_obj,info);
    # 42 "02transpile.c"
    __dec_obj13=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value85=__builtin_string(sname_47))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 43 "02transpile.c"
    info->sline=sline_48;
    # 45 "02transpile.c"
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
_Bool _if_conditional22;
int n_52;
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
memset(&n_52, 0, sizeof(int));
right_value86 = (void*)0;
right_value87 = (void*)0;
right_value93 = (void*)0;
memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
right_value98 = (void*)0;
right_value102 = (void*)0;
right_value103 = (void*)0;
    # 69 "02transpile.c"
    # 50 "02transpile.c"
    if(_if_conditional21=!info->no_output_err,    _if_conditional21) {
        # 51 "02transpile.c"
        # 53 "02transpile.c"
        # 54 "02transpile.c"
        __builtin_va_start(args_51,msg);
        # 55 "02transpile.c"
        vasprintf(&msg2_50,msg,args_51);
        # 56 "02transpile.c"
        __builtin_va_end(args_51);
        # 58 "02transpile.c"
        printf("%s %d: %s\n",info->sname,info->sline,msg2_50);
        # 59 "02transpile.c"
        info->err_num++;
        # 60 "02transpile.c"
        stackframe();
        # 67 "02transpile.c"
        # 62 "02transpile.c"
        if(info->come_fun) {
            # 63 "02transpile.c"
            n_52=info->sline-5;
            # 64 "02transpile.c"
            __current_stack1__.n_52 = &n_52;
            __current_stack1__.msg2_50 = &msg2_50;
            __current_stack1__.info = &info;
            __current_stack1__.msg = &msg;
            ((char*)(right_value103=string_puts(((char*)(right_value102=list$1charph_join(((struct list$1charph*)(right_value98=list$1charph_map2(((struct list$1charph*)(right_value93=list$1charph_sublist(((struct list$1charph*)(right_value87=string_split_char(((char*)(right_value86=buffer_to_string(info->original_source))),10))),n_52,n_52+10))),&__current_stack1__,(void*)method_block1_02transpilec))),"\n"))))));
            right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value87,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value93,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value98,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 67 "02transpile.c"
        free(msg2_50);
        come_call_finalizer3((&args_51),va_list_finalize, 1, 0, 0, 0, (void*)0);
    }
}

static struct list$1charph* list$1charph_sublist(struct list$1charph* self, int begin, int tail){
void* __result_obj__;
void* right_value88;
void* right_value89;
struct list$1charph* result_55;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
struct list_item$1charph* it_56;
int i_57;
_Bool _while_condtional8;
_Bool _if_conditional28;
struct list$1charph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
right_value89 = (void*)0;
memset(&result_55, 0, sizeof(struct list$1charph*));
memset(&it_56, 0, sizeof(struct list_item$1charph*));
memset(&i_57, 0, sizeof(int));
                # 633 "./neo-c.h"
                result_55=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value89=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value88=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 633, "list$1charph"))))))));
                come_call_finalizer3(right_value88,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value89,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 639 "./neo-c.h"
                # 635 "./neo-c.h"
                if(_if_conditional24=begin<0,                _if_conditional24) {
                    # 636 "./neo-c.h"
                    begin+=self->len;
                }
                # 643 "./neo-c.h"
                # 639 "./neo-c.h"
                if(_if_conditional25=tail<0,                _if_conditional25) {
                    # 640 "./neo-c.h"
                    tail+=self->len+1;
                }
                # 647 "./neo-c.h"
                # 643 "./neo-c.h"
                if(_if_conditional26=begin<0,                _if_conditional26) {
                    # 644 "./neo-c.h"
                    begin=0;
                }
                # 651 "./neo-c.h"
                # 647 "./neo-c.h"
                if(_if_conditional27=tail>=self->len,                _if_conditional27) {
                    # 648 "./neo-c.h"
                    tail=self->len;
                }
                # 651 "./neo-c.h"
                it_56=self->head;
                # 652 "./neo-c.h"
                i_57=0;
                # 659 "./neo-c.h"
                while(_while_condtional8=it_56!=((void*)0),                _while_condtional8) {
                    # 657 "./neo-c.h"
                    # 654 "./neo-c.h"
                    if(_if_conditional28=i_57>=begin&&i_57<tail,                    _if_conditional28) {
                        # 655 "./neo-c.h"
                        list$1charph_push_back(result_55,(char*)come_increment_ref_count(it_56->item));
                    }
                    # 657 "./neo-c.h"
                    it_56=it_56->next;
                    # 658 "./neo-c.h"
                    i_57++;
                }
                # 661 "./neo-c.h"
                __result58__ = __result_obj__ = result_55;
                come_call_finalizer3(result_55,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result58__;
                come_call_finalizer3(result_55,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 95 "./neo-c.h"
                    self->head=((void*)0);
                    # 96 "./neo-c.h"
                    self->tail=((void*)0);
                    # 97 "./neo-c.h"
                    self->len=0;
                    # 99 "./neo-c.h"
                    __result56__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result56__;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_53;
_Bool _while_condtional7;
struct list_item$1charph* prev_it_54;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_53, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_54, 0, sizeof(struct list_item$1charph*));
                        # 114 "./neo-c.h"
                        it_53=self->head;
                        # 120 "./neo-c.h"
                        while(_while_condtional7=it_53!=((void*)0),                        _while_condtional7) {
                            # 116 "./neo-c.h"
                            prev_it_54=it_53;
                            # 117 "./neo-c.h"
                            it_53=it_53->next;
                            # 118 "./neo-c.h"
                            come_call_finalizer3(prev_it_54,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional23;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "list_item$1charphp_finalize"
                                # 0 "list_item$1charphp_finalize"
                                if(_if_conditional23=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional23) {
                                    # 0 "list_item$1charphp_finalize"
                                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional29;
void* right_value90;
struct list_item$1charph* litem_58;
char* __dec_obj14;
_Bool _if_conditional30;
void* right_value91;
struct list_item$1charph* litem_59;
char* __dec_obj15;
void* right_value92;
struct list_item$1charph* litem_60;
char* __dec_obj16;
struct list$1charph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
memset(&litem_58, 0, sizeof(struct list_item$1charph*));
right_value91 = (void*)0;
memset(&litem_59, 0, sizeof(struct list_item$1charph*));
right_value92 = (void*)0;
memset(&litem_60, 0, sizeof(struct list_item$1charph*));
                            # 247 "./neo-c.h"
                            # 216 "./neo-c.h"
                            if(_if_conditional29=self->len==0,                            _if_conditional29) {
                                # 217 "./neo-c.h"
                                litem_58=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value90=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 217, "list_item$1charph"))));
                                come_call_finalizer3(right_value90,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 219 "./neo-c.h"
                                litem_58->prev=((void*)0);
                                # 220 "./neo-c.h"
                                litem_58->next=((void*)0);
                                # 221 "./neo-c.h"
                                __dec_obj14=litem_58->item;
                                litem_58->item=(char*)come_increment_ref_count(item);
                                __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 223 "./neo-c.h"
                                self->tail=litem_58;
                                # 224 "./neo-c.h"
                                self->head=litem_58;
                            }
                            else {
                                # 247 "./neo-c.h"
                                # 226 "./neo-c.h"
                                if(_if_conditional30=self->len==1,                                _if_conditional30) {
                                    # 227 "./neo-c.h"
                                    litem_59=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value91=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 227, "list_item$1charph"))));
                                    come_call_finalizer3(right_value91,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 229 "./neo-c.h"
                                    litem_59->prev=self->head;
                                    # 230 "./neo-c.h"
                                    litem_59->next=((void*)0);
                                    # 231 "./neo-c.h"
                                    __dec_obj15=litem_59->item;
                                    litem_59->item=(char*)come_increment_ref_count(item);
                                    __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 233 "./neo-c.h"
                                    self->tail=litem_59;
                                    # 234 "./neo-c.h"
                                    self->head->next=litem_59;
                                }
                                else {
                                    # 237 "./neo-c.h"
                                    litem_60=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value92=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 237, "list_item$1charph"))));
                                    come_call_finalizer3(right_value92,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 239 "./neo-c.h"
                                    litem_60->prev=self->tail;
                                    # 240 "./neo-c.h"
                                    litem_60->next=((void*)0);
                                    # 241 "./neo-c.h"
                                    __dec_obj16=litem_60->item;
                                    litem_60->item=(char*)come_increment_ref_count(item);
                                    __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 243 "./neo-c.h"
                                    self->tail->next=litem_60;
                                    # 244 "./neo-c.h"
                                    self->tail=litem_60;
                                }
                            }
                            # 247 "./neo-c.h"
                            self->len++;
                            # 249 "./neo-c.h"
                            __result57__ = __result_obj__ = self;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result57__;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_map2(struct list$1charph* self, void* parent, char* (*block)(void*,char*)){
void* __result_obj__;
void* right_value94;
void* right_value95;
struct list$1charph* result_61;
struct list_item$1charph* it_62;
_Bool _while_condtional9;
void* right_value96;
struct list$1charph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
right_value95 = (void*)0;
memset(&result_61, 0, sizeof(struct list$1charph*));
memset(&it_62, 0, sizeof(struct list_item$1charph*));
right_value96 = (void*)0;
                # 927 "./neo-c.h"
                result_61=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value95=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value94=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 927, "list$1charph"))))))));
                come_call_finalizer3(right_value94,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value95,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 929 "./neo-c.h"
                it_62=self->head;
                # 936 "./neo-c.h"
                while(_while_condtional9=it_62!=((void*)0),                _while_condtional9) {
                    # 931 "./neo-c.h"
                    list$1charph_push_back(result_61,(char*)come_increment_ref_count(((char*)(right_value96=block(parent,it_62->item)))));
                    right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 933 "./neo-c.h"
                    it_62=it_62->next;
                }
                # 936 "./neo-c.h"
                __result59__ = __result_obj__ = result_61;
                come_call_finalizer3(result_61,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result59__;
                come_call_finalizer3(result_61,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

char* method_block1_02transpilec(struct __current_stack1__* parent, char* it){
void* __result_obj__;
void* right_value97;
char* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value97 = (void*)0;
                # 65 "02transpile.c"
                __result60__ = __result_obj__ = ((char*)(right_value97=xsprintf("%d %s",++(*(parent->n_52)),it)));
                right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result60__;
}

static char* list$1charph_join(struct list$1charph* self, char* sep){
void* __result_obj__;
void* right_value99;
void* right_value100;
struct buffer* buf_63;
int n_64;
char* it_67;
_Bool _if_conditional36;
void* right_value101;
char* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value99 = (void*)0;
right_value100 = (void*)0;
memset(&buf_63, 0, sizeof(struct buffer*));
memset(&n_64, 0, sizeof(int));
memset(&it_67, 0, sizeof(char*));
right_value101 = (void*)0;
                # 1022 "./neo-c.h"
                buf_63=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value100=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value99=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1022, "buffer"))))))));
                come_call_finalizer3(right_value99,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value100,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                # 1024 "./neo-c.h"
                n_64=0;
                # 1035 "./neo-c.h"
                for(                it_67=list$1charph_begin(self);                !list$1charph_end(self);                it_67=list$1charph_next(self)                ){
                    # 1026 "./neo-c.h"
                    buffer_append_str(buf_63,it_67);
                    # 1032 "./neo-c.h"
                    # 1028 "./neo-c.h"
                    if(_if_conditional36=n_64<list$1charph_length(self)-1,                    _if_conditional36) {
                        # 1029 "./neo-c.h"
                        buffer_append_str(buf_63,sep);
                    }
                    # 1032 "./neo-c.h"
                    n_64++;
                }
                # 1035 "./neo-c.h"
                __result70__ = __result_obj__ = ((char*)(right_value101=buffer_to_string(buf_63)));
                come_call_finalizer3(buf_63,buffer_finalize, 0, 0, 0, 0, (void*)0);
                right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result70__;
                come_call_finalizer3(buf_63,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional31;
char* result_65;
char* __result61__;
_Bool _if_conditional32;
char* __result62__;
char* result_66;
char* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_65, 0, sizeof(char*));
memset(&result_66, 0, sizeof(char*));
                    # 281 "./neo-c.h"
                    # 276 "./neo-c.h"
                    if(_if_conditional31=self==((void*)0),                    _if_conditional31) {
                        # 277 "./neo-c.h"
                        # 278 "./neo-c.h"
                        memset(&result_65,0,sizeof(char*));
                        # 279 "./neo-c.h"
                        __result61__ = __result_obj__ = result_65;
                        return __result61__;
                    }
                    # 281 "./neo-c.h"
                    self->it=self->head;
                    # 287 "./neo-c.h"
                    # 283 "./neo-c.h"
                    if(self->it) {
                        # 284 "./neo-c.h"
                        __result62__ = __result_obj__ = self->it->item;
                        return __result62__;
                    }
                    # 287 "./neo-c.h"
                    # 288 "./neo-c.h"
                    memset(&result_66,0,sizeof(char*));
                    # 289 "./neo-c.h"
                    __result63__ = __result_obj__ = result_66;
                    return __result63__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result64__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 311 "./neo-c.h"
                    __result64__ = self==((void*)0)||self->it==((void*)0);
                    return __result64__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional33;
char* result_68;
char* __result65__;
_Bool _if_conditional34;
char* __result66__;
char* result_69;
char* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_68, 0, sizeof(char*));
memset(&result_69, 0, sizeof(char*));
                    # 299 "./neo-c.h"
                    # 293 "./neo-c.h"
                    if(_if_conditional33=self==((void*)0)||self->it==((void*)0),                    _if_conditional33) {
                        # 294 "./neo-c.h"
                        # 295 "./neo-c.h"
                        memset(&result_68,0,sizeof(char*));
                        # 296 "./neo-c.h"
                        __result65__ = __result_obj__ = result_68;
                        return __result65__;
                    }
                    # 299 "./neo-c.h"
                    self->it=self->it->next;
                    # 305 "./neo-c.h"
                    # 301 "./neo-c.h"
                    if(self->it) {
                        # 302 "./neo-c.h"
                        __result66__ = __result_obj__ = self->it->item;
                        return __result66__;
                    }
                    # 305 "./neo-c.h"
                    # 306 "./neo-c.h"
                    memset(&result_69,0,sizeof(char*));
                    # 307 "./neo-c.h"
                    __result67__ = __result_obj__ = result_69;
                    return __result67__;
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional35;
int __result68__;
int __result69__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 354 "./neo-c.h"
                        # 351 "./neo-c.h"
                        if(_if_conditional35=self==((void*)0),                        _if_conditional35) {
                            # 352 "./neo-c.h"
                            __result68__ = 0;
                            return __result68__;
                        }
                        # 354 "./neo-c.h"
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
    # 73 "02transpile.c"
    __result71__ = 0;
    return __result71__;
}

_Bool output_source_file_v2(struct sInfo* info){
void* __result_obj__;
void* right_value104;
char* output_file_name_70;
void* right_value105;
_Bool __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
memset(&output_file_name_70, 0, sizeof(char*));
right_value105 = (void*)0;
    # 78 "02transpile.c"
    output_file_name_70=(char*)come_increment_ref_count(((char*)(right_value104=xsprintf("%s.c",info->sname))));
    right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 82 "02transpile.c"
    string_write(((char*)(right_value105=__builtin_string("int main(int argc, char** argv) { return 0; }\n"))),output_file_name_70,(_Bool)0);
    right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 84 "02transpile.c"
    __result72__ = (_Bool)1;
    output_file_name_70 = come_decrement_ref_count2(output_file_name_70, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result72__;
    output_file_name_70 = come_decrement_ref_count2(output_file_name_70, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void clear_tmp_file(struct sInfo* info){
void* __result_obj__;
char* input_file_name_71;
void* right_value106;
void* right_value107;
memset(&__result_obj__, 0, sizeof(void*));
memset(&input_file_name_71, 0, sizeof(char*));
right_value106 = (void*)0;
right_value107 = (void*)0;
    # 89 "02transpile.c"
    input_file_name_71=(char*)come_increment_ref_count(info->sname);
    # 91 "02transpile.c"
    system(((char*)(right_value107=xsprintf("rm -f \%s.*",((char*)(right_value106=string_to_string(input_file_name_71)))))));
    right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    input_file_name_71 = come_decrement_ref_count2(input_file_name_71, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static _Bool cpp(struct sInfo* info){
void* __result_obj__;
char* input_file_name_72;
char* output_file_name_73;
_Bool _if_conditional37;
void* right_value108;
char* __dec_obj17;
void* right_value109;
char* __dec_obj18;
void* right_value110;
char* cmd_74;
_Bool exist_common_h_75;
struct _IO_FILE* f_76;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
int rc_77;
_Bool _if_conditional42;
void* right_value111;
void* right_value112;
char* cmd2_78;
_Bool _if_conditional43;
int rc_79;
_Bool _if_conditional44;
void* right_value113;
char* command2_80;
_Bool _if_conditional45;
void* right_value114;
void* right_value115;
char* cmd3_81;
_Bool _if_conditional46;
int rc_82;
void* right_value116;
char* command2_83;
_Bool _if_conditional47;
_Bool _if_conditional48;
void* right_value117;
void* right_value118;
char* cmd4_84;
void* right_value119;
char* command_85;
_Bool _if_conditional49;
void* right_value120;
char* command2_86;
_Bool _if_conditional50;
_Bool _if_conditional51;
_Bool __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&input_file_name_72, 0, sizeof(char*));
memset(&output_file_name_73, 0, sizeof(char*));
right_value108 = (void*)0;
right_value109 = (void*)0;
right_value110 = (void*)0;
memset(&cmd_74, 0, sizeof(char*));
memset(&exist_common_h_75, 0, sizeof(_Bool));
memset(&f_76, 0, sizeof(struct _IO_FILE*));
memset(&rc_77, 0, sizeof(int));
right_value111 = (void*)0;
right_value112 = (void*)0;
memset(&cmd2_78, 0, sizeof(char*));
memset(&rc_79, 0, sizeof(int));
right_value113 = (void*)0;
memset(&command2_80, 0, sizeof(char*));
right_value114 = (void*)0;
right_value115 = (void*)0;
memset(&cmd3_81, 0, sizeof(char*));
memset(&rc_82, 0, sizeof(int));
right_value116 = (void*)0;
memset(&command2_83, 0, sizeof(char*));
right_value117 = (void*)0;
right_value118 = (void*)0;
memset(&cmd4_84, 0, sizeof(char*));
right_value119 = (void*)0;
memset(&command_85, 0, sizeof(char*));
right_value120 = (void*)0;
memset(&command2_86, 0, sizeof(char*));
    # 96 "02transpile.c"
    input_file_name_72=(char*)come_increment_ref_count(info->sname);
    # 98 "02transpile.c"
    # 106 "02transpile.c"
    # 99 "02transpile.c"
    if(_if_conditional37=!info->output_header_file&&info->output_file_name,    _if_conditional37) {
        # 100 "02transpile.c"
        __dec_obj17=output_file_name_73;
        output_file_name_73=(char*)come_increment_ref_count(((char*)(right_value108=string_operator_add(info->output_file_name,".i"))));
        __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        # 103 "02transpile.c"
        __dec_obj18=output_file_name_73;
        output_file_name_73=(char*)come_increment_ref_count(((char*)(right_value109=string_operator_add(info->sname,".i"))));
        __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 106 "02transpile.c"
    cmd_74=(char*)come_increment_ref_count(((char*)(right_value110=xsprintf("uname -a | grep Darwin 1> /dev/null 2>/dev/null"))));
    right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 108 "02transpile.c"
    exist_common_h_75=(_Bool)0;
    # 122 "02transpile.c"
    {
        # 110 "02transpile.c"
        f_76=fopen("common.h","r");
        # 114 "02transpile.c"
        # 111 "02transpile.c"
        if(f_76) {
            # 112 "02transpile.c"
            exist_common_h_75=(_Bool)1;
        }
        # 117 "02transpile.c"
        # 114 "02transpile.c"
        if(_if_conditional39=string_operator_equals(info->output_file_name,"common.h"),        _if_conditional39) {
            # 115 "02transpile.c"
            exist_common_h_75=(_Bool)0;
        }
        # 120 "02transpile.c"
        # 117 "02transpile.c"
        if(f_76) {
            # 118 "02transpile.c"
            fclose(f_76);
        }
    }
    # 127 "02transpile.c"
    # 122 "02transpile.c"
    if(_if_conditional41=!gCommonHeader,    _if_conditional41) {
        # 123 "02transpile.c"
        exist_common_h_75=(_Bool)0;
    }
    # 127 "02transpile.c"
    rc_77=system(cmd_74);
    # 176 "02transpile.c"
    # 128 "02transpile.c"
    if(_if_conditional42=rc_77==0,    _if_conditional42) {
        # 129 "02transpile.c"
        cmd2_78=(char*)come_increment_ref_count(((char*)(right_value112=xsprintf("gcc -E -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DCOMELANG2 -D__DARWIN_ARM__ -I/opt/homebrew/opt/pcre/include -I/opt/homebrew/opt/boehmgc/include/ -U__GNUC__ %s %s > %s 2> %s.cpp.out",info->cpp_option,"/usr/local/","/usr/local/",exist_common_h_75?((char*)(right_value111=__builtin_string(" -include common.h "))):"",input_file_name_72,output_file_name_73,output_file_name_73))));
        right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 131 "02transpile.c"
        # 131 "02transpile.c"
        if(info->verbose) {
            # 131 "02transpile.c"
            puts(cmd2_78);
        }
        # 133 "02transpile.c"
        rc_79=system(cmd2_78);
        # 140 "02transpile.c"
        # 135 "02transpile.c"
        if(_if_conditional44=rc_79!=0,        _if_conditional44) {
            # 136 "02transpile.c"
            printf("failed to cpp(2) (%s)\n",cmd2_78);
            # 137 "02transpile.c"
            exit(5);
        }
        # 140 "02transpile.c"
        command2_80=(char*)come_increment_ref_count(((char*)(right_value113=xsprintf("grep error\\: %s.cpp.out",output_file_name_73))));
        right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 142 "02transpile.c"
        # 142 "02transpile.c"
        if(info->verbose) {
            # 142 "02transpile.c"
            puts(command2_80);
        }
        # 143 "02transpile.c"
        (void)system(command2_80);
        cmd2_78 = come_decrement_ref_count2(cmd2_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_80 = come_decrement_ref_count2(command2_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 147 "02transpile.c"
        cmd3_81=(char*)come_increment_ref_count(((char*)(right_value115=xsprintf("cpp -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DCOMELANG2 -U__GNUC__ %s %s > %s 2> %s.cpp.out",info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",exist_common_h_75?((char*)(right_value114=__builtin_string(" -include common.h "))):"",input_file_name_72,output_file_name_73,output_file_name_73))));
        right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 149 "02transpile.c"
        # 149 "02transpile.c"
        if(info->verbose) {
            # 149 "02transpile.c"
            puts(cmd3_81);
        }
        # 150 "02transpile.c"
        rc_82=system(cmd3_81);
        # 152 "02transpile.c"
        command2_83=(char*)come_increment_ref_count(((char*)(right_value116=xsprintf("grep error\\: %s.cpp.out",output_file_name_73))));
        right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 154 "02transpile.c"
        # 154 "02transpile.c"
        if(info->verbose) {
            # 154 "02transpile.c"
            puts(command2_83);
        }
        # 155 "02transpile.c"
        (void)system(command2_83);
        # 174 "02transpile.c"
        # 157 "02transpile.c"
        if(_if_conditional48=rc_82!=0,        _if_conditional48) {
            # 158 "02transpile.c"
            cmd4_84=(char*)come_increment_ref_count(((char*)(right_value118=xsprintf("cpp -I. %s -DPREFIX=%s -I%s/include -C %s %s > %s 2> %s.cpp.out",info->cpp_option,"/usr/local/","/usr/local/",exist_common_h_75?((char*)(right_value117=__builtin_string(" -include common.h "))):"",input_file_name_72,output_file_name_73,output_file_name_73))));
            right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 159 "02transpile.c"
            command_85=(char*)come_increment_ref_count(((char*)(right_value119=xsprintf("clang -o %s -c %s %s >> %s.out 2>&1",output_file_name_73,input_file_name_72,info->clang_option,input_file_name_72))));
            right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 161 "02transpile.c"
            # 161 "02transpile.c"
            if(info->verbose) {
                # 161 "02transpile.c"
                puts(cmd4_84);
            }
            # 162 "02transpile.c"
            rc_82=system(cmd4_84);
            # 164 "02transpile.c"
            command2_86=(char*)come_increment_ref_count(((char*)(right_value120=xsprintf("grep error\\: %s.cpp.out",output_file_name_73))));
            right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 166 "02transpile.c"
            # 166 "02transpile.c"
            if(info->verbose) {
                # 166 "02transpile.c"
                puts(command2_86);
            }
            # 167 "02transpile.c"
            (void)system(command2_86);
            # 173 "02transpile.c"
            # 169 "02transpile.c"
            if(_if_conditional51=rc_82!=0,            _if_conditional51) {
                # 170 "02transpile.c"
                printf("failed to cpp(2) (%s)\n",cmd4_84);
                # 171 "02transpile.c"
                exit(5);
            }
            cmd4_84 = come_decrement_ref_count2(cmd4_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            command_85 = come_decrement_ref_count2(command_85, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            command2_86 = come_decrement_ref_count2(command2_86, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        cmd3_81 = come_decrement_ref_count2(cmd3_81, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_83 = come_decrement_ref_count2(command2_83, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 176 "02transpile.c"
    __result73__ = (_Bool)1;
    input_file_name_72 = come_decrement_ref_count2(input_file_name_72, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_73 = come_decrement_ref_count2(output_file_name_73, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cmd_74 = come_decrement_ref_count2(cmd_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result73__;
    input_file_name_72 = come_decrement_ref_count2(input_file_name_72, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_73 = come_decrement_ref_count2(output_file_name_73, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cmd_74 = come_decrement_ref_count2(cmd_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1charph* object_files){
void* __result_obj__;
void* right_value121;
char* input_file_name_87;
char* output_file_name_88;
_Bool _if_conditional52;
void* right_value122;
char* __dec_obj19;
void* right_value123;
char* __dec_obj20;
void* right_value124;
char* command_89;
_Bool _if_conditional53;
int rc_90;
void* right_value125;
char* command2_91;
_Bool _if_conditional54;
_Bool _if_conditional55;
_Bool __result74__;
_Bool _if_conditional56;
void* right_value126;
_Bool __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value121 = (void*)0;
memset(&input_file_name_87, 0, sizeof(char*));
memset(&output_file_name_88, 0, sizeof(char*));
right_value122 = (void*)0;
right_value123 = (void*)0;
right_value124 = (void*)0;
memset(&command_89, 0, sizeof(char*));
memset(&rc_90, 0, sizeof(int));
right_value125 = (void*)0;
memset(&command2_91, 0, sizeof(char*));
right_value126 = (void*)0;
    # 181 "02transpile.c"
    input_file_name_87=(char*)come_increment_ref_count(((char*)(right_value121=string_operator_add(info->sname,".c"))));
    right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 183 "02transpile.c"
    output_file_name_88=((void*)0);
    # 191 "02transpile.c"
    # 184 "02transpile.c"
    if(_if_conditional52=info->output_file_name&&output_object_file,    _if_conditional52) {
        # 185 "02transpile.c"
        __dec_obj19=output_file_name_88;
        output_file_name_88=(char*)come_increment_ref_count(((char*)(right_value122=__builtin_string(info->output_file_name))));
        __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        # 188 "02transpile.c"
        __dec_obj20=output_file_name_88;
        output_file_name_88=(char*)come_increment_ref_count(((char*)(right_value123=string_operator_add(info->sname,".o"))));
        __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 191 "02transpile.c"
    command_89=(char*)come_increment_ref_count(((char*)(right_value124=xsprintf("clang -o %s -c %s %s >> %s.out 2>&1",output_file_name_88,input_file_name_87,info->clang_option,input_file_name_87))));
    right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 193 "02transpile.c"
    # 193 "02transpile.c"
    if(info->verbose) {
        # 193 "02transpile.c"
        puts(command_89);
    }
    # 194 "02transpile.c"
    rc_90=system(command_89);
    # 196 "02transpile.c"
    command2_91=(char*)come_increment_ref_count(((char*)(right_value125=xsprintf("grep error\\: %s.out",input_file_name_87))));
    right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 198 "02transpile.c"
    # 198 "02transpile.c"
    if(info->verbose) {
        # 198 "02transpile.c"
        puts(command2_91);
    }
    # 199 "02transpile.c"
    (void)system(command2_91);
    # 206 "02transpile.c"
    # 201 "02transpile.c"
    if(_if_conditional55=rc_90!=0,    _if_conditional55) {
        # 202 "02transpile.c"
        printf("%s %d: clang is faild\n",info->sname,info->sline);
        # 203 "02transpile.c"
        __result74__ = (_Bool)0;
        input_file_name_87 = come_decrement_ref_count2(input_file_name_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        output_file_name_88 = come_decrement_ref_count2(output_file_name_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command_89 = come_decrement_ref_count2(command_89, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_91 = come_decrement_ref_count2(command2_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result74__;
    }
    # 210 "02transpile.c"
    # 206 "02transpile.c"
    if(_if_conditional56=!output_object_file,    _if_conditional56) {
        # 207 "02transpile.c"
        list$1charph_push_back(object_files,(char*)come_increment_ref_count(((char*)(right_value126=__builtin_string(output_file_name_88)))));
        right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 210 "02transpile.c"
    __result75__ = (_Bool)1;
    input_file_name_87 = come_decrement_ref_count2(input_file_name_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_88 = come_decrement_ref_count2(output_file_name_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command_89 = come_decrement_ref_count2(command_89, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command2_91 = come_decrement_ref_count2(command2_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result75__;
    input_file_name_87 = come_decrement_ref_count2(input_file_name_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_88 = come_decrement_ref_count2(output_file_name_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command_89 = come_decrement_ref_count2(command_89, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command2_91 = come_decrement_ref_count2(command2_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static _Bool linker(struct sInfo* info, struct list$1charph* object_files){
void* __result_obj__;
char* output_file_name_92;
_Bool _if_conditional57;
void* right_value127;
char* __dec_obj21;
void* right_value128;
char* __dec_obj22;
void* right_value129;
void* right_value130;
struct buffer* command_93;
void* right_value131;
struct list$1charph* o2_saved_94;
char* it_95;
void* right_value132;
_Bool _if_conditional58;
void* right_value133;
char* cmd_96;
int rc_97;
_Bool _if_conditional59;
void* right_value134;
_Bool _if_conditional60;
void* right_value135;
_Bool _if_conditional61;
void* right_value136;
void* right_value137;
_Bool _if_conditional62;
_Bool __result76__;
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&output_file_name_92, 0, sizeof(char*));
right_value127 = (void*)0;
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
memset(&command_93, 0, sizeof(struct buffer*));
right_value131 = (void*)0;
memset(&o2_saved_94, 0, sizeof(struct list$1charph*));
memset(&it_95, 0, sizeof(char*));
right_value132 = (void*)0;
right_value133 = (void*)0;
memset(&cmd_96, 0, sizeof(char*));
memset(&rc_97, 0, sizeof(int));
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value136 = (void*)0;
right_value137 = (void*)0;
    # 215 "02transpile.c"
    output_file_name_92=((void*)0);
    # 223 "02transpile.c"
    # 216 "02transpile.c"
    if(info->output_file_name) {
        # 217 "02transpile.c"
        __dec_obj21=output_file_name_92;
        output_file_name_92=(char*)come_increment_ref_count(((char*)(right_value127=__builtin_string(info->output_file_name))));
        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        # 220 "02transpile.c"
        __dec_obj22=output_file_name_92;
        output_file_name_92=(char*)come_increment_ref_count(((char*)(right_value128=xnoextname(info->sname))));
        __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 223 "02transpile.c"
    command_93=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value130=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value129=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 223, "buffer"))))))));
    come_call_finalizer3(right_value129,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value130,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 225 "02transpile.c"
    buffer_append_str(command_93,((char*)(right_value131=xsprintf("clang -o %s -L%s/lib -L%s/lib ",output_file_name_92,getenv("HOME"),"/usr/local/"))));
    right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 231 "02transpile.c"
    for(    o2_saved_94=(object_files),it_95=list$1charph_begin((o2_saved_94));    !list$1charph_end((o2_saved_94));    it_95=list$1charph_next((o2_saved_94))    ){
        # 228 "02transpile.c"
        buffer_append_str(command_93,((char*)(right_value132=xsprintf("%s ",it_95))));
        right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 237 "02transpile.c"
    # 231 "02transpile.c"
    if(gComeGC) {
        # 232 "02transpile.c"
        buffer_append_str(command_93,"-L/usr/local/lib -lneo-c-gc ");
    }
    else {
        # 235 "02transpile.c"
        buffer_append_str(command_93,"-L/usr/local/lib -lneo-c ");
    }
    # 237 "02transpile.c"
    cmd_96=(char*)come_increment_ref_count(((char*)(right_value133=xsprintf("which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null"))));
    right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 239 "02transpile.c"
    rc_97=system(cmd_96);
    # 243 "02transpile.c"
    # 240 "02transpile.c"
    if(_if_conditional59=rc_97==0,    _if_conditional59) {
        # 241 "02transpile.c"
        buffer_append_str(command_93," -L/opt/homebrew/opt/pcre/lib ");
    }
    # 243 "02transpile.c"
    buffer_append_str(command_93,((char*)(right_value134=xsprintf(" %s ",info->clang_option))));
    right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 249 "02transpile.c"
    # 245 "02transpile.c"
    if(gComeGC) {
        # 246 "02transpile.c"
        buffer_append_str(command_93,((char*)(right_value135=xsprintf(" -L/opt/homebrew/opt/boehmgc/lib -lgc "))));
        right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 249 "02transpile.c"
    # 249 "02transpile.c"
    if(info->verbose) {
        # 249 "02transpile.c"
        puts(((char*)(right_value136=buffer_to_string(command_93))));
        right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 250 "02transpile.c"
    rc_97=system(((char*)(right_value137=buffer_to_string(command_93))));
    right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 257 "02transpile.c"
    # 252 "02transpile.c"
    if(_if_conditional62=rc_97!=0,    _if_conditional62) {
        # 253 "02transpile.c"
        printf("%s %d: clang is faild\n",info->sname,info->sline);
        # 254 "02transpile.c"
        __result76__ = (_Bool)0;
        output_file_name_92 = come_decrement_ref_count2(output_file_name_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(command_93,buffer_finalize, 0, 0, 0, 0, (void*)0);
        cmd_96 = come_decrement_ref_count2(cmd_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result76__;
    }
    # 257 "02transpile.c"
    __result77__ = (_Bool)1;
    output_file_name_92 = come_decrement_ref_count2(output_file_name_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(command_93,buffer_finalize, 0, 0, 0, 0, (void*)0);
    cmd_96 = come_decrement_ref_count2(cmd_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result77__;
    output_file_name_92 = come_decrement_ref_count2(output_file_name_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(command_93,buffer_finalize, 0, 0, 0, 0, (void*)0);
    cmd_96 = come_decrement_ref_count2(cmd_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool new_project(int argc, char** argv){
void* __result_obj__;
void* right_value138;
char* project_name_98;
void* right_value139;
void* right_value140;
void* right_value141;
char* project_name_debug_99;
void* right_value142;
char* cc_100;
void* right_value143;
char* install_101;
void* right_value144;
char* libs_102;
void* right_value145;
char* os_103;
void* right_value146;
char* prefix_104;
void* right_value147;
char* cflags_105;
void* right_value148;
char* cflags_debug_106;
_Bool _or_conditional1;
_Bool __exception_result_var_b1;
void* right_value149;
void* right_value150;
void* right_value151;
void* right_value152;
void* right_value153;
void* right_value154;
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
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value138 = (void*)0;
memset(&project_name_98, 0, sizeof(char*));
right_value139 = (void*)0;
right_value140 = (void*)0;
right_value141 = (void*)0;
memset(&project_name_debug_99, 0, sizeof(char*));
right_value142 = (void*)0;
memset(&cc_100, 0, sizeof(char*));
right_value143 = (void*)0;
memset(&install_101, 0, sizeof(char*));
right_value144 = (void*)0;
memset(&libs_102, 0, sizeof(char*));
right_value145 = (void*)0;
memset(&os_103, 0, sizeof(char*));
right_value146 = (void*)0;
memset(&prefix_104, 0, sizeof(char*));
right_value147 = (void*)0;
memset(&cflags_105, 0, sizeof(char*));
right_value148 = (void*)0;
memset(&cflags_debug_106, 0, sizeof(char*));
right_value149 = (void*)0;
right_value150 = (void*)0;
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
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
    # 262 "02transpile.c"
    project_name_98=(char*)come_increment_ref_count(((char*)(right_value138=__builtin_string(argv[2]))));
    right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 263 "02transpile.c"
    project_name_debug_99=(char*)come_increment_ref_count(((char*)(right_value141=string_operator_add(((char*)(right_value139=__builtin_string(argv[2]))),((char*)(right_value140=__builtin_string("-debug")))))));
    right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 264 "02transpile.c"
    cc_100=(char*)come_increment_ref_count(((char*)(right_value142=__builtin_string("neo-c"))));
    right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 265 "02transpile.c"
    install_101=(char*)come_increment_ref_count(((char*)(right_value143=__builtin_string("install"))));
    right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 266 "02transpile.c"
    libs_102=(char*)come_increment_ref_count(((char*)(right_value144=__builtin_string("-lpcre"))));
    right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 267 "02transpile.c"
    os_103=(char*)come_increment_ref_count(((char*)(right_value145=__builtin_string("linux"))));
    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 268 "02transpile.c"
    prefix_104=(char*)come_increment_ref_count(((char*)(right_value146=__builtin_string("/usr/local/"))));
    right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 269 "02transpile.c"
    cflags_105=(char*)come_increment_ref_count(((char*)(right_value147=__builtin_string(" -common-header -O2 "))));
    right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 270 "02transpile.c"
    cflags_debug_106=(char*)come_increment_ref_count(((char*)(right_value148=__builtin_string(" -common-header -gdwarf-4 -cg "))));
    right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 272 "02transpile.c"
    if(_or_conditional1=mkdir(project_name_98,448|56|4|1),    _or_conditional1 != 0) {
        # 272 "02transpile.c"
        (come_push_stackframe("02transpile.c", 272, 0),__exception_result_var_b1=die("mkdir error"), come_pop_stackframe(), __exception_result_var_b1);
    }
    # 366 "02transpile.c"
    charp_write(((char*)(right_value175=xsprintf("\#########################################\n\# istalled directories\n\#########################################\nprefix=\%s\nexec_prefix=${prefix}\nbindir=${exec_prefix}/bin\ndatadir=${datarootdir}\nmandir=${datarootdir}/man\nsharedstatedir=${prefix}/\%s\nsysconfdir=${prefix}/etc/\%s\nincludedir=${prefix}/include/\%s\ndatarootdir=${prefix}/share/\%s\ndocdir=${datarootdir}/doc\nlibdir=${exec_prefix}/lib\n\n\#########################################\n\# environmnet variables\n\#########################################\nCC=\%s\nINSTALL=\%s\nCFLAGS=\%s\nCFLAGS_DEBUG=\%s\nLIBS=\%s\nOS=\%s\nDESTDIR=\%s\nSRCS=$(wildcard *.c)\nSINGLE_SRCS=$(filter-out %%.c.c, $(SRCS))\nOBJS=$(SINGLE_SRCS:.c=.o)\nDEBUG_OBJS=$(SINGLE_SRCS:.c=.debug.o)\nTARGET=\%s\nTARGET_DEBUG=\%s\n\n\#########################################\n\# main\n\#########################################\nall: $(TARGET)\n\n$(TARGET): $(OBJS)\n\t$(CC) $(CFLAGS) $^ -o $@\n\n$(TARGET_DEBUG): $(DEBUG_OBJS)\n\t$(CC) $(CFLAGS_DEBUG) $^ -o $@\n\n%%.o: %%.c\n\t$(CC) $(CFLAGS) -c $< -o $@\n\n%%.debug.o: %%.c\n\t$(CC) $(CFLAGS_DEBUG) -c $< -o $@\n\n\#########################################\n\# header\n\#########################################\n\nheader: common.h\n\ncommon.h: $(SINGLE_SRCS)\n\tneo-c header -common-header $(SINGLE_SRCS)\n\n\#########################################\n\# install\n\#########################################\ninstall:\n\tmkdir -p \"$(DESTDIR)/bin\"\n\t$(INSTALL) -m 755 ./\%s \"$(DESTDIR)/bin\"\n\tmkdir -p \"$(DESTDIR)/include\"\n\tmkdir -p \"$(DESTDIR)/lib\"\n\tmkdir -p \"$(DESTDIR)/share/doc/\%s\"\n\t$(INSTALL) -m 644 README.md \"$(DESTDIR)/share/doc/\%s/README.md\"\n\n\#########################################\n\# clean\n\#########################################\nclean:\n\trm -fR *.o *.c.i *.c.out *.c.c \%s *.log *.out common.h \%s\n\n\#########################################\n\# uninstall\n\#########################################\nuninstall:\n\trm -f \"$(DESTDIR)\"/bin/\%s\n\trm -f \"$(DESTDIR)/share/doc/\%s/README.md\"\n\nrun: \%s\n\trm -f *.log\n\t./\%s\n\ncompile: \%s\n\ndebug: \%s\n\trm -f *.log\n\t./\%s\n",((char*)(right_value149=string_to_string(prefix_104))),((char*)(right_value150=string_to_string(project_name_98))),((char*)(right_value151=string_to_string(project_name_98))),((char*)(right_value152=string_to_string(project_name_98))),((char*)(right_value153=string_to_string(project_name_98))),((char*)(right_value154=string_to_string(cc_100))),((char*)(right_value155=string_to_string(install_101))),((char*)(right_value156=string_to_string(cflags_105))),((char*)(right_value157=string_to_string(cflags_debug_106))),((char*)(right_value158=string_to_string(libs_102))),((char*)(right_value159=string_to_string(os_103))),((char*)(right_value160=string_to_string(prefix_104))),((char*)(right_value161=string_to_string(project_name_98))),((char*)(right_value162=string_to_string(project_name_debug_99))),((char*)(right_value163=string_to_string(project_name_98))),((char*)(right_value164=string_to_string(project_name_98))),((char*)(right_value165=string_to_string(project_name_98))),((char*)(right_value166=string_to_string(project_name_98))),((char*)(right_value167=string_to_string(project_name_debug_99))),((char*)(right_value168=string_to_string(project_name_98))),((char*)(right_value169=string_to_string(project_name_98))),((char*)(right_value170=string_to_string(project_name_98))),((char*)(right_value171=string_to_string(project_name_98))),((char*)(right_value172=string_to_string(project_name_98))),((char*)(right_value173=string_to_string(project_name_debug_99))),((char*)(right_value174=string_to_string(project_name_debug_99)))))),((char*)(right_value177=xsprintf("\%s/Makefile",((char*)(right_value176=string_to_string(project_name_98)))))),(_Bool)0);
    right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
    # 368 "02transpile.c"
    __result78__ = (_Bool)1;
    project_name_98 = come_decrement_ref_count2(project_name_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    project_name_debug_99 = come_decrement_ref_count2(project_name_debug_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cc_100 = come_decrement_ref_count2(cc_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    install_101 = come_decrement_ref_count2(install_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    libs_102 = come_decrement_ref_count2(libs_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    os_103 = come_decrement_ref_count2(os_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    prefix_104 = come_decrement_ref_count2(prefix_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_105 = come_decrement_ref_count2(cflags_105, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_debug_106 = come_decrement_ref_count2(cflags_debug_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result78__;
    project_name_98 = come_decrement_ref_count2(project_name_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    project_name_debug_99 = come_decrement_ref_count2(project_name_debug_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cc_100 = come_decrement_ref_count2(cc_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    install_101 = come_decrement_ref_count2(install_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    libs_102 = come_decrement_ref_count2(libs_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    os_103 = come_decrement_ref_count2(os_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    prefix_104 = come_decrement_ref_count2(prefix_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_105 = come_decrement_ref_count2(cflags_105, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_debug_106 = come_decrement_ref_count2(cflags_debug_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool run_project(int argc, char** argv){
void* __result_obj__;
_Bool _or_conditional2;
_Bool __exception_result_var_b2;
_Bool __result79__;
memset(&__result_obj__, 0, sizeof(void*));
    # 373 "02transpile.c"
    if(_or_conditional2=system("make run"),    _or_conditional2 != 0) {
        # 373 "02transpile.c"
        (come_push_stackframe("02transpile.c", 373, 1),__exception_result_var_b2=die("system"), come_pop_stackframe(), __exception_result_var_b2);
    }
    # 375 "02transpile.c"
    __result79__ = (_Bool)1;
    return __result79__;
}

_Bool make_header_project(int argc, char** argv){
void* __result_obj__;
_Bool _or_conditional3;
_Bool __exception_result_var_b3;
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
    # 380 "02transpile.c"
    if(_or_conditional3=system("make header"),    _or_conditional3 != 0) {
        # 380 "02transpile.c"
        (come_push_stackframe("02transpile.c", 380, 2),__exception_result_var_b3=die("system"), come_pop_stackframe(), __exception_result_var_b3);
    }
    # 382 "02transpile.c"
    __result80__ = (_Bool)1;
    return __result80__;
}

_Bool compile_project(int argc, char** argv){
void* __result_obj__;
_Bool _or_conditional4;
_Bool __exception_result_var_b4;
_Bool __result81__;
memset(&__result_obj__, 0, sizeof(void*));
    # 387 "02transpile.c"
    if(_or_conditional4=system("make compile"),    _or_conditional4 != 0) {
        # 387 "02transpile.c"
        (come_push_stackframe("02transpile.c", 387, 3),__exception_result_var_b4=die("system"), come_pop_stackframe(), __exception_result_var_b4);
    }
    # 389 "02transpile.c"
    __result81__ = (_Bool)1;
    return __result81__;
}

_Bool debug_run_project(int argc, char** argv){
void* __result_obj__;
_Bool _or_conditional5;
_Bool __exception_result_var_b5;
_Bool __result82__;
memset(&__result_obj__, 0, sizeof(void*));
    # 394 "02transpile.c"
    if(_or_conditional5=system("make debug"),    _or_conditional5 != 0) {
        # 394 "02transpile.c"
        (come_push_stackframe("02transpile.c", 394, 4),__exception_result_var_b5=die("system"), come_pop_stackframe(), __exception_result_var_b5);
    }
    # 396 "02transpile.c"
    __result82__ = (_Bool)1;
    return __result82__;
}

_Bool clean_project(int argc, char** argv){
void* __result_obj__;
_Bool _or_conditional6;
_Bool __exception_result_var_b6;
_Bool __result83__;
memset(&__result_obj__, 0, sizeof(void*));
    # 401 "02transpile.c"
    if(_or_conditional6=system("make clean"),    _or_conditional6 != 0) {
        # 401 "02transpile.c"
        (come_push_stackframe("02transpile.c", 401, 5),__exception_result_var_b6=die("system"), come_pop_stackframe(), __exception_result_var_b6);
    }
    # 403 "02transpile.c"
    __result83__ = (_Bool)1;
    return __result83__;
}

_Bool install_project(int argc, char** argv, char* prefix){
void* __result_obj__;
void* right_value178;
void* right_value179;
_Bool _or_conditional7;
_Bool __exception_result_var_b7;
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value178 = (void*)0;
right_value179 = (void*)0;
    # 408 "02transpile.c"
    if(_or_conditional7=system(((char*)(right_value179=xsprintf("make install DESTDIR=\%s",((char*)(right_value178=charp_to_string(prefix))))))),    right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
    right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
    _or_conditional7 != 0) {
        # 408 "02transpile.c"
        (come_push_stackframe("02transpile.c", 408, 6),__exception_result_var_b7=die("system"), come_pop_stackframe(), __exception_result_var_b7);
    }
    # 410 "02transpile.c"
    __result84__ = (_Bool)1;
    return __result84__;
}

static void init_classes(struct sInfo* info){
void* __result_obj__;
void* right_value186;
void* right_value187;
void* right_value188;
void* right_value189;
void* right_value190;
void* right_value191;
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
int i_157;
void* right_value219;
char* generics_type_158;
void* right_value220;
void* right_value221;
int i_159;
void* right_value222;
char* generics_type_160;
void* right_value223;
void* right_value224;
int rc_162;
_Bool _if_conditional133;
void* right_value225;
void* right_value226;
void* right_value227;
void* right_value228;
char* type_name_163;
void* right_value229;
void* right_value230;
struct sType* type_164;
void* right_value231;
char* __dec_obj23;
void* right_value235;
void* right_value236;
void* right_value237;
struct sClass* klass_186;
void* right_value241;
void* right_value242;
void* right_value243;
void* right_value244;
void* right_value245;
void* right_value246;
void* right_value247;
void* right_value248;
void* right_value249;
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
void* right_value320;
memset(&__result_obj__, 0, sizeof(void*));
right_value186 = (void*)0;
right_value187 = (void*)0;
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
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
memset(&i_157, 0, sizeof(int));
right_value219 = (void*)0;
memset(&generics_type_158, 0, sizeof(char*));
right_value220 = (void*)0;
right_value221 = (void*)0;
memset(&i_159, 0, sizeof(int));
right_value222 = (void*)0;
memset(&generics_type_160, 0, sizeof(char*));
right_value223 = (void*)0;
right_value224 = (void*)0;
memset(&rc_162, 0, sizeof(int));
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
right_value228 = (void*)0;
memset(&type_name_163, 0, sizeof(char*));
right_value229 = (void*)0;
right_value230 = (void*)0;
memset(&type_164, 0, sizeof(struct sType*));
right_value231 = (void*)0;
right_value235 = (void*)0;
right_value236 = (void*)0;
right_value237 = (void*)0;
memset(&klass_186, 0, sizeof(struct sClass*));
right_value241 = (void*)0;
right_value242 = (void*)0;
right_value243 = (void*)0;
right_value244 = (void*)0;
right_value245 = (void*)0;
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value248 = (void*)0;
right_value249 = (void*)0;
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
right_value320 = (void*)0;
    # 415 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value186=__builtin_string("int")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value188=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value187=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 415, "sClass")))),"int",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value187,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value188,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 416 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value189=__builtin_string("short")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value191=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value190=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 416, "sClass")))),"short",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value190,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value191,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 417 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value192=__builtin_string("long")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value194=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value193=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 417, "sClass")))),"long",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value193,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value194,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 418 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value195=__builtin_string("char")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value197=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value196=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 418, "sClass")))),"char",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value196,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value197,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 419 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value198=__builtin_string("bool")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value200=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value199=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 419, "sClass")))),"bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value199,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value200,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 420 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value201=__builtin_string("_Bool")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value203=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value202=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 420, "sClass")))),"_Bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value202,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value203,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 421 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value204=__builtin_string("void")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value206=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value205=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 421, "sClass")))),"void",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value205,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value206,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 422 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value207=__builtin_string("float")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value209=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value208=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 422, "sClass")))),"float",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)))));
    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value208,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value209,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 423 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value210=__builtin_string("double")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value212=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value211=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 423, "sClass")))),"double",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)))));
    right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value211,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value212,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 424 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value213=__builtin_string("lambda")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value215=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value214=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 424, "sClass")))),"lambda",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value214,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value215,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 425 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value216=__builtin_string("__uint128_t")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value218=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value217=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 425, "sClass")))),"__uint128_t",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value217,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value218,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 430 "02transpile.c"
    for(    i_157=0;    i_157<12;    i_157++    ){
        # 427 "02transpile.c"
        generics_type_158=(char*)come_increment_ref_count(((char*)(right_value219=xsprintf("generics_type%d",i_157))));
        right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 428 "02transpile.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(generics_type_158),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value221=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value220=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 428, "sClass")))),generics_type_158,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,i_157,-1,(_Bool)0,info)))));
        come_call_finalizer3(right_value220,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value221,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        generics_type_158 = come_decrement_ref_count2(generics_type_158, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 435 "02transpile.c"
    for(    i_159=0;    i_159<7;    i_159++    ){
        # 431 "02transpile.c"
        generics_type_160=(char*)come_increment_ref_count(((char*)(right_value222=xsprintf("mgenerics_type%d",i_159))));
        right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 432 "02transpile.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(generics_type_160),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value224=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value223=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 432, "sClass")))),generics_type_160,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,-1,i_159,(_Bool)0,info)))));
        come_call_finalizer3(right_value223,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value224,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        generics_type_160 = come_decrement_ref_count2(generics_type_160, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 435 "02transpile.c"
    char cmd_161[1024];
    memset(&cmd_161, 0, sizeof(char)    *(1024)    );
    # 436 "02transpile.c"
    snprintf(cmd_161,1024,"which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null");
    # 438 "02transpile.c"
    rc_162=system(cmd_161);
    # 462 "02transpile.c"
    # 439 "02transpile.c"
    if(_if_conditional133=rc_162==0,    _if_conditional133) {
        # 440 "02transpile.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value225=__builtin_string("__builtin_va_list")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value227=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value226=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 440, "sClass")))),"__builtin_va_list",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
        right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value226,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value227,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        # 442 "02transpile.c"
        type_name_163=(char*)come_increment_ref_count(((char*)(right_value228=__builtin_string("__builtin_va_list"))));
        right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 444 "02transpile.c"
        type_164=(struct sType*)come_increment_ref_count(((struct sType*)(right_value230=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value229=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 444, "sType")))),"__builtin_va_list",(_Bool)0,info))));
        come_call_finalizer3(right_value229,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value230,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 445 "02transpile.c"
        __dec_obj23=type_164->mOriginalTypeName;
        type_164->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value231=__builtin_string("__builtin_va_list"))));
        __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 447 "02transpile.c"
        map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(((char*)(right_value235=__builtin_string(type_name_163)))),(struct sType*)come_increment_ref_count(type_164));
        right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        type_name_163 = come_decrement_ref_count2(type_name_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_164,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 452 "02transpile.c"
        klass_186=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value237=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value236=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 452, "sClass")))),"__builtin_va_list",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
        come_call_finalizer3(right_value236,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value237,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        # 454 "02transpile.c"
        list$1tuple2$2charphsTypephph_push_back(klass_186->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value245=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value241=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 454, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value242=__builtin_string("v1")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value244=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value243=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 454, "sType")))),"char*",(_Bool)0,info)))))))));
        come_call_finalizer3(right_value241,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value243,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value244,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value245,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 455 "02transpile.c"
        list$1tuple2$2charphsTypephph_push_back(klass_186->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value250=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value246=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 455, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value247=__builtin_string("v2")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value249=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value248=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 455, "sType")))),"char*",(_Bool)0,info)))))))));
        come_call_finalizer3(right_value246,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value248,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value249,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value250,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 456 "02transpile.c"
        list$1tuple2$2charphsTypephph_push_back(klass_186->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value255=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value251=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 456, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value252=__builtin_string("v3")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value254=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value253=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 456, "sType")))),"char*",(_Bool)0,info)))))))));
        come_call_finalizer3(right_value251,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value253,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value254,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value255,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 457 "02transpile.c"
        list$1tuple2$2charphsTypephph_push_back(klass_186->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value260=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value256=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 457, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value257=__builtin_string("v4")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value259=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value258=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 457, "sType")))),"int",(_Bool)0,info)))))))));
        come_call_finalizer3(right_value256,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value258,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value259,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value260,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 458 "02transpile.c"
        list$1tuple2$2charphsTypephph_push_back(klass_186->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value265=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value261=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 458, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value262=__builtin_string("v5")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value264=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value263=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 458, "sType")))),"int",(_Bool)0,info)))))))));
        come_call_finalizer3(right_value261,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value263,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value264,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value265,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 460 "02transpile.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value266=__builtin_string("__builtin_va_list")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value320=sClass_clone(klass_186)))));
        right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value320,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(klass_186,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional63;
unsigned int hash_130;
unsigned int it_131;
_Bool _while_condtional15;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool same_key_exist_148;
char* it2_151;
_Bool _if_conditional129;
_Bool _if_conditional130;
struct map$2charphsClassph* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_130, 0, sizeof(unsigned int));
memset(&it_131, 0, sizeof(unsigned int));
memset(&same_key_exist_148, 0, sizeof(_Bool));
memset(&it2_151, 0, sizeof(char*));
        # 1368 "./neo-c.h"
        # 1365 "./neo-c.h"
        if(_if_conditional63=self->len*10>=self->size,        _if_conditional63) {
            # 1366 "./neo-c.h"
            map$2charphsClassph_rehash(self);
        }
        # 1368 "./neo-c.h"
        hash_130=string_get_hash_key(key)%self->size;
        # 1369 "./neo-c.h"
        it_131=hash_130;
        # 1427 "./neo-c.h"
        while(_while_condtional15=(_Bool)1,        _while_condtional15) {
            # 1425 "./neo-c.h"
            # 1372 "./neo-c.h"
            if(_if_conditional98=self->item_existance[it_131],            _if_conditional98) {
                # 1395 "./neo-c.h"
                # 1374 "./neo-c.h"
                if(_if_conditional99=string_equals(self->keys[it_131],key),                _if_conditional99) {
                    # 1385 "./neo-c.h"
                    # 1376 "./neo-c.h"
                    if(_if_conditional100=1,                    _if_conditional100) {
                        # 1377 "./neo-c.h"
                        list$1charp_remove(self->key_list,self->keys[it_131]);
                        # 1378 "./neo-c.h"
                        self->keys[it_131] = come_decrement_ref_count2(self->keys[it_131], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        # 1379 "./neo-c.h"
                        self->keys[it_131]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1382 "./neo-c.h"
                        list$1charp_remove(self->key_list,self->keys[it_131]);
                        # 1383 "./neo-c.h"
                        self->keys[it_131]=key;
                    }
                    # 1392 "./neo-c.h"
                    # 1385 "./neo-c.h"
                    if(_if_conditional120=1,                    _if_conditional120) {
                        # 1386 "./neo-c.h"
                        come_call_finalizer3(self->items[it_131],sClass_finalize, 0, 0, 0, 0, (void*)0);
                        # 1387 "./neo-c.h"
                        self->items[it_131]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        # 1390 "./neo-c.h"
                        self->items[it_131]=item;
                    }
                    # 1392 "./neo-c.h"
                    break;
                }
                # 1395 "./neo-c.h"
                it_131++;
                # 1405 "./neo-c.h"
                # 1397 "./neo-c.h"
                if(_if_conditional121=it_131>=self->size,                _if_conditional121) {
                    # 1398 "./neo-c.h"
                    it_131=0;
                }
                else {
                    # 1405 "./neo-c.h"
                    # 1400 "./neo-c.h"
                    if(_if_conditional122=it_131==hash_130,                    _if_conditional122) {
                        # 1401 "./neo-c.h"
                        printf("unexpected error in map.insert\n");
                        # 1402 "./neo-c.h"
                        stackframe();
                        # 1403 "./neo-c.h"
                        exit(2);
                    }
                }
            }
            else {
                # 1407 "./neo-c.h"
                self->item_existance[it_131]=(_Bool)1;
                # 1414 "./neo-c.h"
                # 1408 "./neo-c.h"
                if(_if_conditional123=1,                _if_conditional123) {
                    # 1409 "./neo-c.h"
                    self->keys[it_131]=(char*)come_increment_ref_count(key);
                }
                else {
                    # 1412 "./neo-c.h"
                    self->keys[it_131]=key;
                }
                # 1421 "./neo-c.h"
                # 1414 "./neo-c.h"
                if(_if_conditional124=1,                _if_conditional124) {
                    # 1415 "./neo-c.h"
                    self->items[it_131]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    # 1418 "./neo-c.h"
                    self->items[it_131]=item;
                }
                # 1421 "./neo-c.h"
                self->len++;
                # 1423 "./neo-c.h"
                break;
            }
        }
        # 1427 "./neo-c.h"
        same_key_exist_148=(_Bool)0;
        # 1435 "./neo-c.h"
        for(        it2_151=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_151=list$1charp_next(self->key_list)        ){
            # 1433 "./neo-c.h"
            # 1430 "./neo-c.h"
            if(_if_conditional129=string_equals(it2_151,key),            _if_conditional129) {
                # 1431 "./neo-c.h"
                same_key_exist_148=(_Bool)1;
            }
        }
        # 1439 "./neo-c.h"
        # 1435 "./neo-c.h"
        if(_if_conditional130=!same_key_exist_148,        _if_conditional130) {
            # 1436 "./neo-c.h"
            list$1charp_push_back(self->key_list,key);
        }
        # 1439 "./neo-c.h"
        __result108__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
        return __result108__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_107;
void* right_value180;
char** keys_108;
void* right_value181;
struct sClass** items_109;
void* right_value182;
_Bool* item_existance_116;
int len_117;
char* it_120;
struct sClass* default_value_123;
struct sClass* it2_126;
unsigned int hash_127;
int n_128;
_Bool _while_condtional14;
_Bool _if_conditional95;
_Bool _if_conditional96;
_Bool _if_conditional97;
struct sClass* default_value_129;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_107, 0, sizeof(int));
right_value180 = (void*)0;
memset(&keys_108, 0, sizeof(char**));
right_value181 = (void*)0;
memset(&items_109, 0, sizeof(struct sClass**));
right_value182 = (void*)0;
memset(&item_existance_116, 0, sizeof(_Bool*));
memset(&len_117, 0, sizeof(int));
memset(&it_120, 0, sizeof(char*));
memset(&default_value_123, 0, sizeof(struct sClass*));
memset(&it2_126, 0, sizeof(struct sClass*));
memset(&hash_127, 0, sizeof(unsigned int));
memset(&n_128, 0, sizeof(int));
memset(&default_value_129, 0, sizeof(struct sClass*));
                # 1312 "./neo-c.h"
                size_107=self->size*10;
                # 1313 "./neo-c.h"
                keys_108=(char**)come_increment_ref_count(((char**)(right_value180=(char**)come_calloc(1, sizeof(char*)*(1*(size_107)), "./neo-c.h", 1313, "char*%"))));
                right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1314 "./neo-c.h"
                items_109=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value181=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_107)), "./neo-c.h", 1314, "sClass*%"))));
                come_call_finalizer3(right_value181,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                # 1315 "./neo-c.h"
                item_existance_116=(_Bool*)come_increment_ref_count(((_Bool*)(right_value182=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_107)), "./neo-c.h", 1315, "bool"))));
                right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1317 "./neo-c.h"
                len_117=0;
                # 1352 "./neo-c.h"
                for(                it_120=map$2charphsClassph_begin(self);                !map$2charphsClassph_end(self);                it_120=map$2charphsClassph_next(self)                ){
                    # 1320 "./neo-c.h"
                    # 1321 "./neo-c.h"
                    memset(&default_value_123,0,sizeof(struct sClass*));
                    # 1322 "./neo-c.h"
                    it2_126=map$2charphsClassph_at(self,it_120,default_value_123);
                    # 1323 "./neo-c.h"
                    hash_127=string_get_hash_key(it_120)%size_107;
                    # 1324 "./neo-c.h"
                    n_128=hash_127;
                    # 1350 "./neo-c.h"
                    while(_while_condtional14=(_Bool)1,                    _while_condtional14) {
                        # 1349 "./neo-c.h"
                        # 1327 "./neo-c.h"
                        if(_if_conditional95=item_existance_116[n_128],                        _if_conditional95) {
                            # 1329 "./neo-c.h"
                            n_128++;
                            # 1339 "./neo-c.h"
                            # 1331 "./neo-c.h"
                            if(_if_conditional96=n_128>=size_107,                            _if_conditional96) {
                                # 1332 "./neo-c.h"
                                n_128=0;
                            }
                            else {
                                # 1339 "./neo-c.h"
                                # 1334 "./neo-c.h"
                                if(_if_conditional97=n_128==hash_127,                                _if_conditional97) {
                                    # 1335 "./neo-c.h"
                                    printf("unexpected error in map.rehash(1)\n");
                                    # 1336 "./neo-c.h"
                                    stackframe();
                                    # 1337 "./neo-c.h"
                                    exit(2);
                                }
                            }
                        }
                        else {
                            # 1341 "./neo-c.h"
                            item_existance_116[n_128]=(_Bool)1;
                            # 1342 "./neo-c.h"
                            keys_108[n_128]=it_120;
                            # 1343 "./neo-c.h"
                            # 1344 "./neo-c.h"
                            items_109[n_128]=map$2charphsClassph_at(self,it_120,default_value_129);
                            # 1346 "./neo-c.h"
                            len_117++;
                            # 1347 "./neo-c.h"
                            break;
                        }
                    }
                }
                # 1352 "./neo-c.h"
                come_free((char*)self->items);
                # 1353 "./neo-c.h"
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                # 1354 "./neo-c.h"
                come_free((char*)self->keys);
                # 1356 "./neo-c.h"
                self->keys=keys_108;
                # 1357 "./neo-c.h"
                self->items=items_109;
                # 1358 "./neo-c.h"
                self->item_existance=item_existance_116;
                # 1360 "./neo-c.h"
                self->size=size_107;
                # 1361 "./neo-c.h"
                self->len=len_117;
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional64;
_Bool _if_conditional65;
_Bool _if_conditional85;
_Bool _if_conditional86;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "sClass_finalize"
                    # 0 "sClass_finalize"
                    if(_if_conditional64=self!=((void*)0)&&self->mName!=((void*)0),                    _if_conditional64) {
                        # 0 "sClass_finalize"
                        self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 2 "sClass_finalize"
                    # 1 "sClass_finalize"
                    if(_if_conditional65=self!=((void*)0)&&self->mFields!=((void*)0),                    _if_conditional65) {
                        # 1 "sClass_finalize"
                        come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    # 3 "sClass_finalize"
                    # 2 "sClass_finalize"
                    if(_if_conditional85=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                    _if_conditional85) {
                        # 2 "sClass_finalize"
                        self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 4 "sClass_finalize"
                    # 3 "sClass_finalize"
                    if(_if_conditional86=self!=((void*)0)&&self->mParentClassName!=((void*)0),                    _if_conditional86) {
                        # 3 "sClass_finalize"
                        self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_110;
_Bool _while_condtional10;
struct list_item$1tuple2$2charphsTypephph* prev_it_111;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_110, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_111, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                            # 114 "./neo-c.h"
                            it_110=self->head;
                            # 120 "./neo-c.h"
                            while(_while_condtional10=it_110!=((void*)0),                            _while_condtional10) {
                                # 116 "./neo-c.h"
                                prev_it_111=it_110;
                                # 117 "./neo-c.h"
                                it_110=it_110->next;
                                # 118 "./neo-c.h"
                                come_call_finalizer3(prev_it_111,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional66;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                                    # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                    if(_if_conditional66=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional66) {
                                        # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                        come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional69;
_Bool _if_conditional71;
_Bool _if_conditional73;
_Bool _if_conditional74;
_Bool _if_conditional75;
_Bool _if_conditional76;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
memset(&__result_obj__, 0, sizeof(void*));
                                                    # 1 "sType_finalize"
                                                    # 0 "sType_finalize"
                                                    if(_if_conditional69=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                                    _if_conditional69) {
                                                        # 0 "sType_finalize"
                                                        come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 2 "sType_finalize"
                                                    # 1 "sType_finalize"
                                                    if(_if_conditional71=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                                    _if_conditional71) {
                                                        # 1 "sType_finalize"
                                                        come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 3 "sType_finalize"
                                                    # 2 "sType_finalize"
                                                    if(_if_conditional73=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                                    _if_conditional73) {
                                                        # 2 "sType_finalize"
                                                        come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 4 "sType_finalize"
                                                    # 3 "sType_finalize"
                                                    if(_if_conditional74=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                                    _if_conditional74) {
                                                        # 3 "sType_finalize"
                                                        self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 5 "sType_finalize"
                                                    # 4 "sType_finalize"
                                                    if(_if_conditional75=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                                    _if_conditional75) {
                                                        # 4 "sType_finalize"
                                                        come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 6 "sType_finalize"
                                                    # 5 "sType_finalize"
                                                    if(_if_conditional76=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                                    _if_conditional76) {
                                                        # 5 "sType_finalize"
                                                        come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 7 "sType_finalize"
                                                    # 6 "sType_finalize"
                                                    if(_if_conditional78=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                                    _if_conditional78) {
                                                        # 6 "sType_finalize"
                                                        come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 8 "sType_finalize"
                                                    # 7 "sType_finalize"
                                                    if(_if_conditional79=self!=((void*)0)&&self->mParamNames!=((void*)0),                                                    _if_conditional79) {
                                                        # 7 "sType_finalize"
                                                        come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 9 "sType_finalize"
                                                    # 8 "sType_finalize"
                                                    if(_if_conditional80=self!=((void*)0)&&self->mResultType!=((void*)0),                                                    _if_conditional80) {
                                                        # 8 "sType_finalize"
                                                        come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 10 "sType_finalize"
                                                    # 9 "sType_finalize"
                                                    if(_if_conditional81=self!=((void*)0)&&self->mAlignas!=((void*)0),                                                    _if_conditional81) {
                                                        # 9 "sType_finalize"
                                                        if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    # 11 "sType_finalize"
                                                    # 10 "sType_finalize"
                                                    if(_if_conditional82=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                                    _if_conditional82) {
                                                        # 10 "sType_finalize"
                                                        if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    # 12 "sType_finalize"
                                                    # 11 "sType_finalize"
                                                    if(_if_conditional83=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                                    _if_conditional83) {
                                                        # 11 "sType_finalize"
                                                        self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 13 "sType_finalize"
                                                    # 12 "sType_finalize"
                                                    if(_if_conditional84=self!=((void*)0)&&self->mAsmName!=((void*)0),                                                    _if_conditional84) {
                                                        # 12 "sType_finalize"
                                                        self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_112;
_Bool _while_condtional11;
struct list_item$1sTypeph* prev_it_113;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_112, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_113, 0, sizeof(struct list_item$1sTypeph*));
                                                            # 114 "./neo-c.h"
                                                            it_112=self->head;
                                                            # 120 "./neo-c.h"
                                                            while(_while_condtional11=it_112!=((void*)0),                                                            _while_condtional11) {
                                                                # 116 "./neo-c.h"
                                                                prev_it_113=it_112;
                                                                # 117 "./neo-c.h"
                                                                it_112=it_112->next;
                                                                # 118 "./neo-c.h"
                                                                come_call_finalizer3(prev_it_113,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                            }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional70;
memset(&__result_obj__, 0, sizeof(void*));
                                                                    # 1 "list_item$1sTypephp_finalize"
                                                                    # 0 "list_item$1sTypephp_finalize"
                                                                    if(_if_conditional70=self!=((void*)0)&&self->item!=((void*)0),                                                                    _if_conditional70) {
                                                                        # 0 "list_item$1sTypephp_finalize"
                                                                        come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional72;
memset(&__result_obj__, 0, sizeof(void*));
                                                            # 1 "tuple1$1sTypephp_finalize"
                                                            # 0 "tuple1$1sTypephp_finalize"
                                                            if(_if_conditional72=self!=((void*)0)&&self->v1!=((void*)0),                                                            _if_conditional72) {
                                                                # 0 "tuple1$1sTypephp_finalize"
                                                                come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_114;
_Bool _while_condtional12;
struct list_item$1sNodeph* prev_it_115;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_114, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_115, 0, sizeof(struct list_item$1sNodeph*));
                                                            # 114 "./neo-c.h"
                                                            it_114=self->head;
                                                            # 120 "./neo-c.h"
                                                            while(_while_condtional12=it_114!=((void*)0),                                                            _while_condtional12) {
                                                                # 116 "./neo-c.h"
                                                                prev_it_115=it_114;
                                                                # 117 "./neo-c.h"
                                                                it_114=it_114->next;
                                                                # 118 "./neo-c.h"
                                                                come_call_finalizer3(prev_it_115,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                            }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional77;
memset(&__result_obj__, 0, sizeof(void*));
                                                                    # 1 "list_item$1sNodephp_finalize"
                                                                    # 0 "list_item$1sNodephp_finalize"
                                                                    if(_if_conditional77=self!=((void*)0)&&self->item!=((void*)0),                                                                    _if_conditional77) {
                                                                        # 0 "list_item$1sNodephp_finalize"
                                                                        if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                    }
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional87;
char* result_118;
char* __result85__;
_Bool _if_conditional88;
char* __result86__;
char* result_119;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_118, 0, sizeof(char*));
memset(&result_119, 0, sizeof(char*));
                    # 1279 "./neo-c.h"
                    # 1274 "./neo-c.h"
                    if(_if_conditional87=self==((void*)0),                    _if_conditional87) {
                        # 1275 "./neo-c.h"
                        # 1276 "./neo-c.h"
                        memset(&result_118,0,sizeof(char*));
                        # 1277 "./neo-c.h"
                        __result85__ = __result_obj__ = result_118;
                        return __result85__;
                    }
                    # 1279 "./neo-c.h"
                    self->key_list->it=self->key_list->head;
                    # 1285 "./neo-c.h"
                    # 1281 "./neo-c.h"
                    if(self->key_list->it) {
                        # 1282 "./neo-c.h"
                        __result86__ = __result_obj__ = self->key_list->it->item;
                        return __result86__;
                    }
                    # 1285 "./neo-c.h"
                    # 1286 "./neo-c.h"
                    memset(&result_119,0,sizeof(char*));
                    # 1287 "./neo-c.h"
                    __result87__ = __result_obj__ = result_119;
                    return __result87__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result88__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1308 "./neo-c.h"
                    __result88__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result88__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional89;
char* result_121;
char* __result89__;
_Bool _if_conditional90;
char* __result90__;
char* result_122;
char* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_121, 0, sizeof(char*));
memset(&result_122, 0, sizeof(char*));
                    # 1296 "./neo-c.h"
                    # 1291 "./neo-c.h"
                    if(_if_conditional89=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional89) {
                        # 1292 "./neo-c.h"
                        # 1293 "./neo-c.h"
                        memset(&result_121,0,sizeof(char*));
                        # 1294 "./neo-c.h"
                        __result89__ = __result_obj__ = result_121;
                        return __result89__;
                    }
                    # 1296 "./neo-c.h"
                    self->key_list->it=self->key_list->it->next;
                    # 1302 "./neo-c.h"
                    # 1298 "./neo-c.h"
                    if(self->key_list->it) {
                        # 1299 "./neo-c.h"
                        __result90__ = __result_obj__ = self->key_list->it->item;
                        return __result90__;
                    }
                    # 1302 "./neo-c.h"
                    # 1303 "./neo-c.h"
                    memset(&result_122,0,sizeof(char*));
                    # 1304 "./neo-c.h"
                    __result91__ = __result_obj__ = result_122;
                    return __result91__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_124;
unsigned int it_125;
_Bool _while_condtional13;
_Bool _if_conditional91;
_Bool _if_conditional92;
struct sClass* __result92__;
_Bool _if_conditional93;
_Bool _if_conditional94;
struct sClass* __result93__;
struct sClass* __result94__;
struct sClass* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_124, 0, sizeof(unsigned int));
memset(&it_125, 0, sizeof(unsigned int));
                        # 1201 "./neo-c.h"
                        hash_124=string_get_hash_key(((char*)key))%self->size;
                        # 1202 "./neo-c.h"
                        it_125=hash_124;
                        # 1226 "./neo-c.h"
                        while(_while_condtional13=(_Bool)1,                        _while_condtional13) {
                            # 1224 "./neo-c.h"
                            # 1205 "./neo-c.h"
                            if(_if_conditional91=self->item_existance[it_125],                            _if_conditional91) {
                                # 1212 "./neo-c.h"
                                # 1207 "./neo-c.h"
                                if(_if_conditional92=string_equals(self->keys[it_125],key),                                _if_conditional92) {
                                    # 1209 "./neo-c.h"
                                    __result92__ = __result_obj__ = self->items[it_125];
                                    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result92__;
                                }
                                # 1212 "./neo-c.h"
                                it_125++;
                                # 1220 "./neo-c.h"
                                # 1214 "./neo-c.h"
                                if(_if_conditional93=it_125>=self->size,                                _if_conditional93) {
                                    # 1215 "./neo-c.h"
                                    it_125=0;
                                }
                                else {
                                    # 1220 "./neo-c.h"
                                    # 1217 "./neo-c.h"
                                    if(_if_conditional94=it_125==hash_124,                                    _if_conditional94) {
                                        # 1218 "./neo-c.h"
                                        __result93__ = __result_obj__ = default_value;
                                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result93__;
                                    }
                                }
                            }
                            else {
                                # 1222 "./neo-c.h"
                                __result94__ = __result_obj__ = default_value;
                                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                return __result94__;
                            }
                        }
                        # 1226 "./neo-c.h"
                        __result95__ = __result_obj__ = default_value;
                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                        return __result95__;
                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_132;
struct list_item$1charp* it_133;
_Bool _while_condtional16;
_Bool _if_conditional101;
struct list$1charp* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_132, 0, sizeof(int));
memset(&it_133, 0, sizeof(struct list_item$1charp*));
                            # 435 "./neo-c.h"
                            it2_132=0;
                            # 436 "./neo-c.h"
                            it_133=self->head;
                            # 447 "./neo-c.h"
                            while(_while_condtional16=it_133!=((void*)0),                            _while_condtional16) {
                                # 442 "./neo-c.h"
                                # 438 "./neo-c.h"
                                if(_if_conditional101=string_equals(it_133->item,item),                                _if_conditional101) {
                                    # 439 "./neo-c.h"
                                    list$1charp_delete(self,it2_132,it2_132+1);
                                    # 440 "./neo-c.h"
                                    break;
                                }
                                # 442 "./neo-c.h"
                                it2_132++;
                                # 444 "./neo-c.h"
                                it_133=it_133->next;
                            }
                            # 447 "./neo-c.h"
                            __result99__ = __result_obj__ = self;
                            return __result99__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
int tmp_134;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional107;
struct list$1charp* __result96__;
_Bool _if_conditional108;
_Bool _if_conditional109;
struct list_item$1charp* it_137;
int i_138;
_Bool _while_condtional18;
_Bool _if_conditional110;
struct list_item$1charp* prev_it_139;
_Bool _if_conditional111;
_Bool _if_conditional112;
struct list_item$1charp* it_140;
int i_141;
_Bool _while_condtional19;
_Bool _if_conditional113;
_Bool _if_conditional114;
struct list_item$1charp* prev_it_142;
struct list_item$1charp* it_143;
struct list_item$1charp* head_prev_it_144;
struct list_item$1charp* tail_it_145;
int i_146;
_Bool _while_condtional20;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
struct list_item$1charp* prev_it_147;
_Bool _if_conditional118;
_Bool _if_conditional119;
struct list$1charp* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_134, 0, sizeof(int));
memset(&it_137, 0, sizeof(struct list_item$1charp*));
memset(&i_138, 0, sizeof(int));
memset(&prev_it_139, 0, sizeof(struct list_item$1charp*));
memset(&it_140, 0, sizeof(struct list_item$1charp*));
memset(&i_141, 0, sizeof(int));
memset(&prev_it_142, 0, sizeof(struct list_item$1charp*));
memset(&it_143, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_144, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_145, 0, sizeof(struct list_item$1charp*));
memset(&i_146, 0, sizeof(int));
memset(&prev_it_147, 0, sizeof(struct list_item$1charp*));
                                        # 454 "./neo-c.h"
                                        # 451 "./neo-c.h"
                                        if(_if_conditional102=head<0,                                        _if_conditional102) {
                                            # 452 "./neo-c.h"
                                            head+=self->len;
                                        }
                                        # 458 "./neo-c.h"
                                        # 454 "./neo-c.h"
                                        if(_if_conditional103=tail<0,                                        _if_conditional103) {
                                            # 455 "./neo-c.h"
                                            tail+=self->len+1;
                                        }
                                        # 464 "./neo-c.h"
                                        # 458 "./neo-c.h"
                                        if(_if_conditional104=head>tail,                                        _if_conditional104) {
                                            # 459 "./neo-c.h"
                                            tmp_134=tail;
                                            # 460 "./neo-c.h"
                                            tail=head;
                                            # 461 "./neo-c.h"
                                            head=tmp_134;
                                        }
                                        # 468 "./neo-c.h"
                                        # 464 "./neo-c.h"
                                        if(_if_conditional105=head<0,                                        _if_conditional105) {
                                            # 465 "./neo-c.h"
                                            head=0;
                                        }
                                        # 472 "./neo-c.h"
                                        # 468 "./neo-c.h"
                                        if(_if_conditional106=tail>self->len,                                        _if_conditional106) {
                                            # 469 "./neo-c.h"
                                            tail=self->len;
                                        }
                                        # 476 "./neo-c.h"
                                        # 472 "./neo-c.h"
                                        if(_if_conditional107=head==tail,                                        _if_conditional107) {
                                            # 473 "./neo-c.h"
                                            __result96__ = __result_obj__ = self;
                                            return __result96__;
                                        }
                                        # 571 "./neo-c.h"
                                        # 476 "./neo-c.h"
                                        if(_if_conditional108=head==0&&tail==self->len,                                        _if_conditional108) {
                                            # 478 "./neo-c.h"
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            # 571 "./neo-c.h"
                                            # 480 "./neo-c.h"
                                            if(_if_conditional109=head==0,                                            _if_conditional109) {
                                                # 481 "./neo-c.h"
                                                it_137=self->head;
                                                # 482 "./neo-c.h"
                                                i_138=0;
                                                # 504 "./neo-c.h"
                                                while(_while_condtional18=it_137!=((void*)0),                                                _while_condtional18) {
                                                    # 503 "./neo-c.h"
                                                    # 484 "./neo-c.h"
                                                    if(_if_conditional110=i_138<tail,                                                    _if_conditional110) {
                                                        # 485 "./neo-c.h"
                                                        prev_it_139=it_137;
                                                        # 487 "./neo-c.h"
                                                        it_137=it_137->next;
                                                        # 488 "./neo-c.h"
                                                        i_138++;
                                                        # 490 "./neo-c.h"
                                                        come_call_finalizer3(prev_it_139,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                        # 492 "./neo-c.h"
                                                        self->len--;
                                                    }
                                                    else {
                                                        # 503 "./neo-c.h"
                                                        # 494 "./neo-c.h"
                                                        if(_if_conditional111=i_138==tail,                                                        _if_conditional111) {
                                                            # 495 "./neo-c.h"
                                                            self->head=it_137;
                                                            # 496 "./neo-c.h"
                                                            self->head->prev=((void*)0);
                                                            # 497 "./neo-c.h"
                                                            break;
                                                        }
                                                        else {
                                                            # 500 "./neo-c.h"
                                                            it_137=it_137->next;
                                                            # 501 "./neo-c.h"
                                                            i_138++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                # 571 "./neo-c.h"
                                                # 505 "./neo-c.h"
                                                if(_if_conditional112=tail==self->len,                                                _if_conditional112) {
                                                    # 506 "./neo-c.h"
                                                    it_140=self->head;
                                                    # 507 "./neo-c.h"
                                                    i_141=0;
                                                    # 529 "./neo-c.h"
                                                    while(_while_condtional19=it_140!=((void*)0),                                                    _while_condtional19) {
                                                        # 514 "./neo-c.h"
                                                        # 509 "./neo-c.h"
                                                        if(_if_conditional113=i_141==head,                                                        _if_conditional113) {
                                                            # 510 "./neo-c.h"
                                                            self->tail=it_140->prev;
                                                            # 511 "./neo-c.h"
                                                            self->tail->next=((void*)0);
                                                        }
                                                        # 528 "./neo-c.h"
                                                        # 514 "./neo-c.h"
                                                        if(_if_conditional114=i_141>=head,                                                        _if_conditional114) {
                                                            # 515 "./neo-c.h"
                                                            prev_it_142=it_140;
                                                            # 517 "./neo-c.h"
                                                            it_140=it_140->next;
                                                            # 518 "./neo-c.h"
                                                            i_141++;
                                                            # 520 "./neo-c.h"
                                                            come_call_finalizer3(prev_it_142,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            # 522 "./neo-c.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 525 "./neo-c.h"
                                                            it_140=it_140->next;
                                                            # 526 "./neo-c.h"
                                                            i_141++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 531 "./neo-c.h"
                                                    it_143=self->head;
                                                    # 533 "./neo-c.h"
                                                    head_prev_it_144=((void*)0);
                                                    # 534 "./neo-c.h"
                                                    tail_it_145=((void*)0);
                                                    # 537 "./neo-c.h"
                                                    i_146=0;
                                                    # 563 "./neo-c.h"
                                                    while(_while_condtional20=it_143!=((void*)0),                                                    _while_condtional20) {
                                                        # 542 "./neo-c.h"
                                                        # 539 "./neo-c.h"
                                                        if(_if_conditional115=i_146==head,                                                        _if_conditional115) {
                                                            # 540 "./neo-c.h"
                                                            head_prev_it_144=it_143->prev;
                                                        }
                                                        # 546 "./neo-c.h"
                                                        # 542 "./neo-c.h"
                                                        if(_if_conditional116=i_146==tail,                                                        _if_conditional116) {
                                                            # 543 "./neo-c.h"
                                                            tail_it_145=it_143;
                                                        }
                                                        # 561 "./neo-c.h"
                                                        # 546 "./neo-c.h"
                                                        if(_if_conditional117=i_146>=head&&i_146<tail,                                                        _if_conditional117) {
                                                            # 548 "./neo-c.h"
                                                            prev_it_147=it_143;
                                                            # 550 "./neo-c.h"
                                                            it_143=it_143->next;
                                                            # 551 "./neo-c.h"
                                                            i_146++;
                                                            # 553 "./neo-c.h"
                                                            come_call_finalizer3(prev_it_147,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            # 555 "./neo-c.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 558 "./neo-c.h"
                                                            it_143=it_143->next;
                                                            # 559 "./neo-c.h"
                                                            i_146++;
                                                        }
                                                    }
                                                    # 566 "./neo-c.h"
                                                    # 563 "./neo-c.h"
                                                    if(_if_conditional118=head_prev_it_144!=((void*)0),                                                    _if_conditional118) {
                                                        # 564 "./neo-c.h"
                                                        head_prev_it_144->next=tail_it_145;
                                                    }
                                                    # 569 "./neo-c.h"
                                                    # 566 "./neo-c.h"
                                                    if(_if_conditional119=tail_it_145!=((void*)0),                                                    _if_conditional119) {
                                                        # 567 "./neo-c.h"
                                                        tail_it_145->prev=head_prev_it_144;
                                                    }
                                                }
                                            }
                                        }
                                        # 571 "./neo-c.h"
                                        __result98__ = __result_obj__ = self;
                                        return __result98__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_135;
_Bool _while_condtional17;
struct list_item$1charp* prev_it_136;
struct list$1charp* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_135, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_136, 0, sizeof(struct list_item$1charp*));
                                                # 420 "./neo-c.h"
                                                it_135=self->head;
                                                # 427 "./neo-c.h"
                                                while(_while_condtional17=it_135!=((void*)0),                                                _while_condtional17) {
                                                    # 422 "./neo-c.h"
                                                    prev_it_136=it_135;
                                                    # 423 "./neo-c.h"
                                                    it_135=it_135->next;
                                                    # 424 "./neo-c.h"
                                                    come_call_finalizer3(prev_it_136,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                # 427 "./neo-c.h"
                                                self->head=((void*)0);
                                                # 428 "./neo-c.h"
                                                self->tail=((void*)0);
                                                # 430 "./neo-c.h"
                                                self->len=0;
                                                # 432 "./neo-c.h"
                                                __result97__ = __result_obj__ = self;
                                                return __result97__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional125;
char* result_149;
char* __result100__;
_Bool _if_conditional126;
char* __result101__;
char* result_150;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_149, 0, sizeof(char*));
memset(&result_150, 0, sizeof(char*));
            # 281 "./neo-c.h"
            # 276 "./neo-c.h"
            if(_if_conditional125=self==((void*)0),            _if_conditional125) {
                # 277 "./neo-c.h"
                # 278 "./neo-c.h"
                memset(&result_149,0,sizeof(char*));
                # 279 "./neo-c.h"
                __result100__ = __result_obj__ = result_149;
                return __result100__;
            }
            # 281 "./neo-c.h"
            self->it=self->head;
            # 287 "./neo-c.h"
            # 283 "./neo-c.h"
            if(self->it) {
                # 284 "./neo-c.h"
                __result101__ = __result_obj__ = self->it->item;
                return __result101__;
            }
            # 287 "./neo-c.h"
            # 288 "./neo-c.h"
            memset(&result_150,0,sizeof(char*));
            # 289 "./neo-c.h"
            __result102__ = __result_obj__ = result_150;
            return __result102__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result103__;
memset(&__result_obj__, 0, sizeof(void*));
            # 311 "./neo-c.h"
            __result103__ = self==((void*)0)||self->it==((void*)0);
            return __result103__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional127;
char* result_152;
char* __result104__;
_Bool _if_conditional128;
char* __result105__;
char* result_153;
char* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_152, 0, sizeof(char*));
memset(&result_153, 0, sizeof(char*));
            # 299 "./neo-c.h"
            # 293 "./neo-c.h"
            if(_if_conditional127=self==((void*)0)||self->it==((void*)0),            _if_conditional127) {
                # 294 "./neo-c.h"
                # 295 "./neo-c.h"
                memset(&result_152,0,sizeof(char*));
                # 296 "./neo-c.h"
                __result104__ = __result_obj__ = result_152;
                return __result104__;
            }
            # 299 "./neo-c.h"
            self->it=self->it->next;
            # 305 "./neo-c.h"
            # 301 "./neo-c.h"
            if(self->it) {
                # 302 "./neo-c.h"
                __result105__ = __result_obj__ = self->it->item;
                return __result105__;
            }
            # 305 "./neo-c.h"
            # 306 "./neo-c.h"
            memset(&result_153,0,sizeof(char*));
            # 307 "./neo-c.h"
            __result106__ = __result_obj__ = result_153;
            return __result106__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional131;
void* right_value183;
struct list_item$1charp* litem_154;
_Bool _if_conditional132;
void* right_value184;
struct list_item$1charp* litem_155;
void* right_value185;
struct list_item$1charp* litem_156;
struct list$1charp* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
right_value183 = (void*)0;
memset(&litem_154, 0, sizeof(struct list_item$1charp*));
right_value184 = (void*)0;
memset(&litem_155, 0, sizeof(struct list_item$1charp*));
right_value185 = (void*)0;
memset(&litem_156, 0, sizeof(struct list_item$1charp*));
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional131=self->len==0,                _if_conditional131) {
                    # 217 "./neo-c.h"
                    litem_154=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value183=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 217, "list_item$1charp"))));
                    come_call_finalizer3(right_value183,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "./neo-c.h"
                    litem_154->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_154->next=((void*)0);
                    # 221 "./neo-c.h"
                    litem_154->item=item;
                    # 223 "./neo-c.h"
                    self->tail=litem_154;
                    # 224 "./neo-c.h"
                    self->head=litem_154;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional132=self->len==1,                    _if_conditional132) {
                        # 227 "./neo-c.h"
                        litem_155=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value184=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 227, "list_item$1charp"))));
                        come_call_finalizer3(right_value184,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_155->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_155->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_155->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_155;
                        # 234 "./neo-c.h"
                        self->head->next=litem_155;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_156=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value185=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 237, "list_item$1charp"))));
                        come_call_finalizer3(right_value185,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_156->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_156->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_156->item=item;
                        # 243 "./neo-c.h"
                        self->tail->next=litem_156;
                        # 244 "./neo-c.h"
                        self->tail=litem_156;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
                __result107__ = __result_obj__ = self;
                return __result107__;
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__;
_Bool _if_conditional134;
unsigned int hash_182;
unsigned int it_183;
_Bool _while_condtional23;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
_Bool same_key_exist_184;
char* it2_185;
_Bool _if_conditional154;
_Bool _if_conditional155;
struct map$2charphsTypeph* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_182, 0, sizeof(unsigned int));
memset(&it_183, 0, sizeof(unsigned int));
memset(&same_key_exist_184, 0, sizeof(_Bool));
memset(&it2_185, 0, sizeof(char*));
            # 1368 "./neo-c.h"
            # 1365 "./neo-c.h"
            if(_if_conditional134=self->len*10>=self->size,            _if_conditional134) {
                # 1366 "./neo-c.h"
                map$2charphsTypeph_rehash(self);
            }
            # 1368 "./neo-c.h"
            hash_182=string_get_hash_key(key)%self->size;
            # 1369 "./neo-c.h"
            it_183=hash_182;
            # 1427 "./neo-c.h"
            while(_while_condtional23=(_Bool)1,            _while_condtional23) {
                # 1425 "./neo-c.h"
                # 1372 "./neo-c.h"
                if(_if_conditional146=self->item_existance[it_183],                _if_conditional146) {
                    # 1395 "./neo-c.h"
                    # 1374 "./neo-c.h"
                    if(_if_conditional147=string_equals(self->keys[it_183],key),                    _if_conditional147) {
                        # 1385 "./neo-c.h"
                        # 1376 "./neo-c.h"
                        if(_if_conditional148=1,                        _if_conditional148) {
                            # 1377 "./neo-c.h"
                            list$1charp_remove(self->key_list,self->keys[it_183]);
                            # 1378 "./neo-c.h"
                            self->keys[it_183] = come_decrement_ref_count2(self->keys[it_183], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            # 1379 "./neo-c.h"
                            self->keys[it_183]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            # 1382 "./neo-c.h"
                            list$1charp_remove(self->key_list,self->keys[it_183]);
                            # 1383 "./neo-c.h"
                            self->keys[it_183]=key;
                        }
                        # 1392 "./neo-c.h"
                        # 1385 "./neo-c.h"
                        if(_if_conditional149=1,                        _if_conditional149) {
                            # 1386 "./neo-c.h"
                            come_call_finalizer3(self->items[it_183],sType_finalize, 0, 0, 0, 0, (void*)0);
                            # 1387 "./neo-c.h"
                            self->items[it_183]=(struct sType*)come_increment_ref_count(item);
                        }
                        else {
                            # 1390 "./neo-c.h"
                            self->items[it_183]=item;
                        }
                        # 1392 "./neo-c.h"
                        break;
                    }
                    # 1395 "./neo-c.h"
                    it_183++;
                    # 1405 "./neo-c.h"
                    # 1397 "./neo-c.h"
                    if(_if_conditional150=it_183>=self->size,                    _if_conditional150) {
                        # 1398 "./neo-c.h"
                        it_183=0;
                    }
                    else {
                        # 1405 "./neo-c.h"
                        # 1400 "./neo-c.h"
                        if(_if_conditional151=it_183==hash_182,                        _if_conditional151) {
                            # 1401 "./neo-c.h"
                            printf("unexpected error in map.insert\n");
                            # 1402 "./neo-c.h"
                            stackframe();
                            # 1403 "./neo-c.h"
                            exit(2);
                        }
                    }
                }
                else {
                    # 1407 "./neo-c.h"
                    self->item_existance[it_183]=(_Bool)1;
                    # 1414 "./neo-c.h"
                    # 1408 "./neo-c.h"
                    if(_if_conditional152=1,                    _if_conditional152) {
                        # 1409 "./neo-c.h"
                        self->keys[it_183]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1412 "./neo-c.h"
                        self->keys[it_183]=key;
                    }
                    # 1421 "./neo-c.h"
                    # 1414 "./neo-c.h"
                    if(_if_conditional153=1,                    _if_conditional153) {
                        # 1415 "./neo-c.h"
                        self->items[it_183]=(struct sType*)come_increment_ref_count(item);
                    }
                    else {
                        # 1418 "./neo-c.h"
                        self->items[it_183]=item;
                    }
                    # 1421 "./neo-c.h"
                    self->len++;
                    # 1423 "./neo-c.h"
                    break;
                }
            }
            # 1427 "./neo-c.h"
            same_key_exist_184=(_Bool)0;
            # 1435 "./neo-c.h"
            for(            it2_185=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_185=list$1charp_next(self->key_list)            ){
                # 1433 "./neo-c.h"
                # 1430 "./neo-c.h"
                if(_if_conditional154=string_equals(it2_185,key),                _if_conditional154) {
                    # 1431 "./neo-c.h"
                    same_key_exist_184=(_Bool)1;
                }
            }
            # 1439 "./neo-c.h"
            # 1435 "./neo-c.h"
            if(_if_conditional155=!same_key_exist_184,            _if_conditional155) {
                # 1436 "./neo-c.h"
                list$1charp_push_back(self->key_list,key);
            }
            # 1439 "./neo-c.h"
            __result120__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result120__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
void* __result_obj__;
int size_165;
void* right_value232;
char** keys_166;
void* right_value233;
struct sType** items_167;
void* right_value234;
_Bool* item_existance_168;
int len_169;
char* it_172;
struct sType* default_value_175;
struct sType* it2_178;
unsigned int hash_179;
int n_180;
_Bool _while_condtional22;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
struct sType* default_value_181;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_165, 0, sizeof(int));
right_value232 = (void*)0;
memset(&keys_166, 0, sizeof(char**));
right_value233 = (void*)0;
memset(&items_167, 0, sizeof(struct sType**));
right_value234 = (void*)0;
memset(&item_existance_168, 0, sizeof(_Bool*));
memset(&len_169, 0, sizeof(int));
memset(&it_172, 0, sizeof(char*));
memset(&default_value_175, 0, sizeof(struct sType*));
memset(&it2_178, 0, sizeof(struct sType*));
memset(&hash_179, 0, sizeof(unsigned int));
memset(&n_180, 0, sizeof(int));
memset(&default_value_181, 0, sizeof(struct sType*));
                    # 1312 "./neo-c.h"
                    size_165=self->size*10;
                    # 1313 "./neo-c.h"
                    keys_166=(char**)come_increment_ref_count(((char**)(right_value232=(char**)come_calloc(1, sizeof(char*)*(1*(size_165)), "./neo-c.h", 1313, "char*%"))));
                    right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1314 "./neo-c.h"
                    items_167=(struct sType**)come_increment_ref_count(((struct sType**)(right_value233=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_165)), "./neo-c.h", 1314, "sType*%"))));
                    come_call_finalizer3(right_value233,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 1315 "./neo-c.h"
                    item_existance_168=(_Bool*)come_increment_ref_count(((_Bool*)(right_value234=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_165)), "./neo-c.h", 1315, "bool"))));
                    right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1317 "./neo-c.h"
                    len_169=0;
                    # 1352 "./neo-c.h"
                    for(                    it_172=map$2charphsTypeph_begin(self);                    !map$2charphsTypeph_end(self);                    it_172=map$2charphsTypeph_next(self)                    ){
                        # 1320 "./neo-c.h"
                        # 1321 "./neo-c.h"
                        memset(&default_value_175,0,sizeof(struct sType*));
                        # 1322 "./neo-c.h"
                        it2_178=map$2charphsTypeph_at(self,it_172,default_value_175);
                        # 1323 "./neo-c.h"
                        hash_179=string_get_hash_key(it_172)%size_165;
                        # 1324 "./neo-c.h"
                        n_180=hash_179;
                        # 1350 "./neo-c.h"
                        while(_while_condtional22=(_Bool)1,                        _while_condtional22) {
                            # 1349 "./neo-c.h"
                            # 1327 "./neo-c.h"
                            if(_if_conditional143=item_existance_168[n_180],                            _if_conditional143) {
                                # 1329 "./neo-c.h"
                                n_180++;
                                # 1339 "./neo-c.h"
                                # 1331 "./neo-c.h"
                                if(_if_conditional144=n_180>=size_165,                                _if_conditional144) {
                                    # 1332 "./neo-c.h"
                                    n_180=0;
                                }
                                else {
                                    # 1339 "./neo-c.h"
                                    # 1334 "./neo-c.h"
                                    if(_if_conditional145=n_180==hash_179,                                    _if_conditional145) {
                                        # 1335 "./neo-c.h"
                                        printf("unexpected error in map.rehash(1)\n");
                                        # 1336 "./neo-c.h"
                                        stackframe();
                                        # 1337 "./neo-c.h"
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                # 1341 "./neo-c.h"
                                item_existance_168[n_180]=(_Bool)1;
                                # 1342 "./neo-c.h"
                                keys_166[n_180]=it_172;
                                # 1343 "./neo-c.h"
                                # 1344 "./neo-c.h"
                                items_167[n_180]=map$2charphsTypeph_at(self,it_172,default_value_181);
                                # 1346 "./neo-c.h"
                                len_169++;
                                # 1347 "./neo-c.h"
                                break;
                            }
                        }
                    }
                    # 1352 "./neo-c.h"
                    come_free((char*)self->items);
                    # 1353 "./neo-c.h"
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    # 1354 "./neo-c.h"
                    come_free((char*)self->keys);
                    # 1356 "./neo-c.h"
                    self->keys=keys_166;
                    # 1357 "./neo-c.h"
                    self->items=items_167;
                    # 1358 "./neo-c.h"
                    self->item_existance=item_existance_168;
                    # 1360 "./neo-c.h"
                    self->size=size_165;
                    # 1361 "./neo-c.h"
                    self->len=len_169;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional135;
char* result_170;
char* __result109__;
_Bool _if_conditional136;
char* __result110__;
char* result_171;
char* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_170, 0, sizeof(char*));
memset(&result_171, 0, sizeof(char*));
                        # 1279 "./neo-c.h"
                        # 1274 "./neo-c.h"
                        if(_if_conditional135=self==((void*)0),                        _if_conditional135) {
                            # 1275 "./neo-c.h"
                            # 1276 "./neo-c.h"
                            memset(&result_170,0,sizeof(char*));
                            # 1277 "./neo-c.h"
                            __result109__ = __result_obj__ = result_170;
                            return __result109__;
                        }
                        # 1279 "./neo-c.h"
                        self->key_list->it=self->key_list->head;
                        # 1285 "./neo-c.h"
                        # 1281 "./neo-c.h"
                        if(self->key_list->it) {
                            # 1282 "./neo-c.h"
                            __result110__ = __result_obj__ = self->key_list->it->item;
                            return __result110__;
                        }
                        # 1285 "./neo-c.h"
                        # 1286 "./neo-c.h"
                        memset(&result_171,0,sizeof(char*));
                        # 1287 "./neo-c.h"
                        __result111__ = __result_obj__ = result_171;
                        return __result111__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1308 "./neo-c.h"
                        __result112__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result112__;
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional137;
char* result_173;
char* __result113__;
_Bool _if_conditional138;
char* __result114__;
char* result_174;
char* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_173, 0, sizeof(char*));
memset(&result_174, 0, sizeof(char*));
                        # 1296 "./neo-c.h"
                        # 1291 "./neo-c.h"
                        if(_if_conditional137=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional137) {
                            # 1292 "./neo-c.h"
                            # 1293 "./neo-c.h"
                            memset(&result_173,0,sizeof(char*));
                            # 1294 "./neo-c.h"
                            __result113__ = __result_obj__ = result_173;
                            return __result113__;
                        }
                        # 1296 "./neo-c.h"
                        self->key_list->it=self->key_list->it->next;
                        # 1302 "./neo-c.h"
                        # 1298 "./neo-c.h"
                        if(self->key_list->it) {
                            # 1299 "./neo-c.h"
                            __result114__ = __result_obj__ = self->key_list->it->item;
                            return __result114__;
                        }
                        # 1302 "./neo-c.h"
                        # 1303 "./neo-c.h"
                        memset(&result_174,0,sizeof(char*));
                        # 1304 "./neo-c.h"
                        __result115__ = __result_obj__ = result_174;
                        return __result115__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__;
unsigned int hash_176;
unsigned int it_177;
_Bool _while_condtional21;
_Bool _if_conditional139;
_Bool _if_conditional140;
struct sType* __result116__;
_Bool _if_conditional141;
_Bool _if_conditional142;
struct sType* __result117__;
struct sType* __result118__;
struct sType* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_176, 0, sizeof(unsigned int));
memset(&it_177, 0, sizeof(unsigned int));
                            # 1201 "./neo-c.h"
                            hash_176=string_get_hash_key(((char*)key))%self->size;
                            # 1202 "./neo-c.h"
                            it_177=hash_176;
                            # 1226 "./neo-c.h"
                            while(_while_condtional21=(_Bool)1,                            _while_condtional21) {
                                # 1224 "./neo-c.h"
                                # 1205 "./neo-c.h"
                                if(_if_conditional139=self->item_existance[it_177],                                _if_conditional139) {
                                    # 1212 "./neo-c.h"
                                    # 1207 "./neo-c.h"
                                    if(_if_conditional140=string_equals(self->keys[it_177],key),                                    _if_conditional140) {
                                        # 1209 "./neo-c.h"
                                        __result116__ = __result_obj__ = self->items[it_177];
                                        come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result116__;
                                    }
                                    # 1212 "./neo-c.h"
                                    it_177++;
                                    # 1220 "./neo-c.h"
                                    # 1214 "./neo-c.h"
                                    if(_if_conditional141=it_177>=self->size,                                    _if_conditional141) {
                                        # 1215 "./neo-c.h"
                                        it_177=0;
                                    }
                                    else {
                                        # 1220 "./neo-c.h"
                                        # 1217 "./neo-c.h"
                                        if(_if_conditional142=it_177==hash_176,                                        _if_conditional142) {
                                            # 1218 "./neo-c.h"
                                            __result117__ = __result_obj__ = default_value;
                                            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result117__;
                                        }
                                    }
                                }
                                else {
                                    # 1222 "./neo-c.h"
                                    __result118__ = __result_obj__ = default_value;
                                    come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result118__;
                                }
                            }
                            # 1226 "./neo-c.h"
                            __result119__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                            return __result119__;
                            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional156;
void* right_value238;
struct list_item$1tuple2$2charphsTypephph* litem_187;
struct tuple2$2charphsTypeph* __dec_obj24;
_Bool _if_conditional159;
void* right_value239;
struct list_item$1tuple2$2charphsTypephph* litem_188;
struct tuple2$2charphsTypeph* __dec_obj25;
void* right_value240;
struct list_item$1tuple2$2charphsTypephph* litem_189;
struct tuple2$2charphsTypeph* __dec_obj26;
struct list$1tuple2$2charphsTypephph* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
right_value238 = (void*)0;
memset(&litem_187, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value239 = (void*)0;
memset(&litem_188, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value240 = (void*)0;
memset(&litem_189, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
            # 247 "./neo-c.h"
            # 216 "./neo-c.h"
            if(_if_conditional156=self->len==0,            _if_conditional156) {
                # 217 "./neo-c.h"
                litem_187=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value238=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 217, "list_item$1tuple2$2charphsTypephph"))));
                come_call_finalizer3(right_value238,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 219 "./neo-c.h"
                litem_187->prev=((void*)0);
                # 220 "./neo-c.h"
                litem_187->next=((void*)0);
                # 221 "./neo-c.h"
                __dec_obj24=litem_187->item;
                litem_187->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj24,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                # 223 "./neo-c.h"
                self->tail=litem_187;
                # 224 "./neo-c.h"
                self->head=litem_187;
            }
            else {
                # 247 "./neo-c.h"
                # 226 "./neo-c.h"
                if(_if_conditional159=self->len==1,                _if_conditional159) {
                    # 227 "./neo-c.h"
                    litem_188=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value239=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 227, "list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer3(right_value239,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 229 "./neo-c.h"
                    litem_188->prev=self->head;
                    # 230 "./neo-c.h"
                    litem_188->next=((void*)0);
                    # 231 "./neo-c.h"
                    __dec_obj25=litem_188->item;
                    litem_188->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj25,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    # 233 "./neo-c.h"
                    self->tail=litem_188;
                    # 234 "./neo-c.h"
                    self->head->next=litem_188;
                }
                else {
                    # 237 "./neo-c.h"
                    litem_189=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value240=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 237, "list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer3(right_value240,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 239 "./neo-c.h"
                    litem_189->prev=self->tail;
                    # 240 "./neo-c.h"
                    litem_189->next=((void*)0);
                    # 241 "./neo-c.h"
                    __dec_obj26=litem_189->item;
                    litem_189->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj26,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    # 243 "./neo-c.h"
                    self->tail->next=litem_189;
                    # 244 "./neo-c.h"
                    self->tail=litem_189;
                }
            }
            # 247 "./neo-c.h"
            self->len++;
            # 249 "./neo-c.h"
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
            # 1738 "./neo-c.h"
            __dec_obj27=self->v1;
            self->v1=(char*)come_increment_ref_count(v1);
            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
            # 1739 "./neo-c.h"
            __dec_obj28=self->v2;
            self->v2=(struct sType*)come_increment_ref_count(v2);
            come_call_finalizer3(__dec_obj28,sType_finalize, 0, 0, 0, 0, (void*)0);
            # 1741 "./neo-c.h"
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
_Bool _if_conditional164;
struct sClass* __result123__;
void* right_value267;
struct sClass* result_190;
_Bool _if_conditional165;
_Bool _if_conditional166;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool _if_conditional171;
_Bool _if_conditional172;
_Bool _if_conditional173;
void* right_value268;
char* __dec_obj29;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool _if_conditional176;
void* right_value317;
struct list$1tuple2$2charphsTypephph* __dec_obj60;
_Bool _if_conditional269;
_Bool _if_conditional270;
_Bool _if_conditional271;
void* right_value318;
char* __dec_obj61;
_Bool _if_conditional272;
_Bool _if_conditional273;
void* right_value319;
char* __dec_obj62;
struct sClass* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
right_value267 = (void*)0;
memset(&result_190, 0, sizeof(struct sClass*));
right_value268 = (void*)0;
right_value317 = (void*)0;
right_value318 = (void*)0;
right_value319 = (void*)0;
            # 3 "sClass_clone"
            # 2 "sClass_clone"
            if(_if_conditional164=self==(void*)0,            _if_conditional164) {
                # 2 "sClass_clone"
                __result123__ = __result_obj__ = (void*)0;
                return __result123__;
            }
            # 3 "sClass_clone"
            result_190=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value267=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "sClass"))));
            come_call_finalizer3(right_value267,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            # 5 "sClass_clone"
            # 4 "sClass_clone"
            if(_if_conditional165=self!=((void*)0),            _if_conditional165) {
                # 4 "sClass_clone"
                result_190->mStruct=self->mStruct;
            }
            # 6 "sClass_clone"
            # 5 "sClass_clone"
            if(_if_conditional166=self!=((void*)0),            _if_conditional166) {
                # 5 "sClass_clone"
                result_190->mFloat=self->mFloat;
            }
            # 7 "sClass_clone"
            # 6 "sClass_clone"
            if(_if_conditional167=self!=((void*)0),            _if_conditional167) {
                # 6 "sClass_clone"
                result_190->mUnion=self->mUnion;
            }
            # 8 "sClass_clone"
            # 7 "sClass_clone"
            if(_if_conditional168=self!=((void*)0),            _if_conditional168) {
                # 7 "sClass_clone"
                result_190->mGenerics=self->mGenerics;
            }
            # 9 "sClass_clone"
            # 8 "sClass_clone"
            if(_if_conditional169=self!=((void*)0),            _if_conditional169) {
                # 8 "sClass_clone"
                result_190->mMethodGenerics=self->mMethodGenerics;
            }
            # 10 "sClass_clone"
            # 9 "sClass_clone"
            if(_if_conditional170=self!=((void*)0),            _if_conditional170) {
                # 9 "sClass_clone"
                result_190->mEnum=self->mEnum;
            }
            # 11 "sClass_clone"
            # 10 "sClass_clone"
            if(_if_conditional171=self!=((void*)0),            _if_conditional171) {
                # 10 "sClass_clone"
                result_190->mProtocol=self->mProtocol;
            }
            # 12 "sClass_clone"
            # 11 "sClass_clone"
            if(_if_conditional172=self!=((void*)0),            _if_conditional172) {
                # 11 "sClass_clone"
                result_190->mNumber=self->mNumber;
            }
            # 13 "sClass_clone"
            # 12 "sClass_clone"
            if(_if_conditional173=self!=((void*)0)&&self->mName!=((void*)0),            _if_conditional173) {
                # 12 "sClass_clone"
                __dec_obj29=result_190->mName;
                result_190->mName=(char*)come_increment_ref_count(((char*)(right_value268=string_clone(self->mName))));
                __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 14 "sClass_clone"
            # 13 "sClass_clone"
            if(_if_conditional174=self!=((void*)0),            _if_conditional174) {
                # 13 "sClass_clone"
                result_190->mGenericsNum=self->mGenericsNum;
            }
            # 15 "sClass_clone"
            # 14 "sClass_clone"
            if(_if_conditional175=self!=((void*)0),            _if_conditional175) {
                # 14 "sClass_clone"
                result_190->mMethodGenericsNum=self->mMethodGenericsNum;
            }
            # 16 "sClass_clone"
            # 15 "sClass_clone"
            if(_if_conditional176=self!=((void*)0)&&self->mFields!=((void*)0),            _if_conditional176) {
                # 15 "sClass_clone"
                __dec_obj60=result_190->mFields;
                result_190->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value317=list$1tuple2$2charphsTypephphp_clone(self->mFields))));
                come_call_finalizer3(__dec_obj60,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value317,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 17 "sClass_clone"
            # 16 "sClass_clone"
            if(_if_conditional269=self!=((void*)0),            _if_conditional269) {
                # 16 "sClass_clone"
                result_190->mOutputed=self->mOutputed;
            }
            # 18 "sClass_clone"
            # 17 "sClass_clone"
            if(_if_conditional270=self!=((void*)0),            _if_conditional270) {
                # 17 "sClass_clone"
                result_190->mOutputed2=self->mOutputed2;
            }
            # 19 "sClass_clone"
            # 18 "sClass_clone"
            if(_if_conditional271=self!=((void*)0)&&self->mDeclareSName!=((void*)0),            _if_conditional271) {
                # 18 "sClass_clone"
                __dec_obj61=result_190->mDeclareSName;
                result_190->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value318=string_clone(self->mDeclareSName))));
                __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value318 = come_decrement_ref_count2(right_value318, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 20 "sClass_clone"
            # 19 "sClass_clone"
            if(_if_conditional272=self!=((void*)0),            _if_conditional272) {
                # 19 "sClass_clone"
                result_190->mNobodyStruct=self->mNobodyStruct;
            }
            # 21 "sClass_clone"
            # 20 "sClass_clone"
            if(_if_conditional273=self!=((void*)0)&&self->mParentClassName!=((void*)0),            _if_conditional273) {
                # 20 "sClass_clone"
                __dec_obj62=result_190->mParentClassName;
                result_190->mParentClassName=(char*)come_increment_ref_count(((char*)(right_value319=string_clone(self->mParentClassName))));
                __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value319 = come_decrement_ref_count2(right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 21 "sClass_clone"
            __result151__ = __result_obj__ = result_190;
            come_call_finalizer3(result_190,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result151__;
            come_call_finalizer3(result_190,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional177;
struct list$1tuple2$2charphsTypephph* __result124__;
void* right_value269;
void* right_value270;
struct list$1tuple2$2charphsTypephph* result_191;
struct list_item$1tuple2$2charphsTypephph* it_192;
_Bool _while_condtional24;
void* right_value316;
struct list$1tuple2$2charphsTypephph* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
right_value269 = (void*)0;
right_value270 = (void*)0;
memset(&result_191, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_192, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value316 = (void*)0;
                    # 133 "./neo-c.h"
                    # 130 "./neo-c.h"
                    if(_if_conditional177=self==((void*)0),                    _if_conditional177) {
                        # 131 "./neo-c.h"
                        __result124__ = __result_obj__ = ((void*)0);
                        return __result124__;
                    }
                    # 133 "./neo-c.h"
                    result_191=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value270=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value269=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 133, "list$1tuple2$2charphsTypephph"))))))));
                    come_call_finalizer3(right_value269,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value270,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 135 "./neo-c.h"
                    it_192=self->head;
                    # 142 "./neo-c.h"
                    while(_while_condtional24=it_192!=((void*)0),                    _while_condtional24) {
                        # 137 "./neo-c.h"
                        list$1tuple2$2charphsTypephph_add(result_191,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value316=tuple2$2charphsTypephp_clone(it_192->item)))));
                        come_call_finalizer3(right_value316,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 139 "./neo-c.h"
                        it_192=it_192->next;
                    }
                    # 142 "./neo-c.h"
                    __result150__ = __result_obj__ = result_191;
                    come_call_finalizer3(result_191,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result150__;
                    come_call_finalizer3(result_191,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsTypephph* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 95 "./neo-c.h"
                        self->head=((void*)0);
                        # 96 "./neo-c.h"
                        self->tail=((void*)0);
                        # 97 "./neo-c.h"
                        self->len=0;
                        # 99 "./neo-c.h"
                        __result125__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result125__;
                        come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional178;
void* right_value271;
struct list_item$1tuple2$2charphsTypephph* litem_193;
struct tuple2$2charphsTypeph* __dec_obj30;
_Bool _if_conditional181;
void* right_value272;
struct list_item$1tuple2$2charphsTypephph* litem_194;
struct tuple2$2charphsTypeph* __dec_obj31;
void* right_value273;
struct list_item$1tuple2$2charphsTypephph* litem_195;
struct tuple2$2charphsTypeph* __dec_obj32;
struct list$1tuple2$2charphsTypephph* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value271 = (void*)0;
memset(&litem_193, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value272 = (void*)0;
memset(&litem_194, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value273 = (void*)0;
memset(&litem_195, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                            # 177 "./neo-c.h"
                            # 146 "./neo-c.h"
                            if(_if_conditional178=self->len==0,                            _if_conditional178) {
                                # 147 "./neo-c.h"
                                litem_193=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value271=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 147, "list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer3(right_value271,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 149 "./neo-c.h"
                                litem_193->prev=((void*)0);
                                # 150 "./neo-c.h"
                                litem_193->next=((void*)0);
                                # 151 "./neo-c.h"
                                __dec_obj30=litem_193->item;
                                litem_193->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj30,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                # 153 "./neo-c.h"
                                self->tail=litem_193;
                                # 154 "./neo-c.h"
                                self->head=litem_193;
                            }
                            else {
                                # 177 "./neo-c.h"
                                # 156 "./neo-c.h"
                                if(_if_conditional181=self->len==1,                                _if_conditional181) {
                                    # 157 "./neo-c.h"
                                    litem_194=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value272=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 157, "list_item$1tuple2$2charphsTypephph"))));
                                    come_call_finalizer3(right_value272,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 159 "./neo-c.h"
                                    litem_194->prev=self->head;
                                    # 160 "./neo-c.h"
                                    litem_194->next=((void*)0);
                                    # 161 "./neo-c.h"
                                    __dec_obj31=litem_194->item;
                                    litem_194->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj31,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    # 163 "./neo-c.h"
                                    self->tail=litem_194;
                                    # 164 "./neo-c.h"
                                    self->head->next=litem_194;
                                }
                                else {
                                    # 167 "./neo-c.h"
                                    litem_195=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value273=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 167, "list_item$1tuple2$2charphsTypephph"))));
                                    come_call_finalizer3(right_value273,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 169 "./neo-c.h"
                                    litem_195->prev=self->tail;
                                    # 170 "./neo-c.h"
                                    litem_195->next=((void*)0);
                                    # 171 "./neo-c.h"
                                    __dec_obj32=litem_195->item;
                                    litem_195->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj32,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    # 173 "./neo-c.h"
                                    self->tail->next=litem_195;
                                    # 174 "./neo-c.h"
                                    self->tail=litem_195;
                                }
                            }
                            # 177 "./neo-c.h"
                            self->len++;
                            # 179 "./neo-c.h"
                            __result126__ = __result_obj__ = self;
                            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                            return __result126__;
                            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional184;
_Bool _if_conditional185;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "tuple2$2charphsTypephp_finalize"
                                        # 0 "tuple2$2charphsTypephp_finalize"
                                        if(_if_conditional184=self!=((void*)0)&&self->v1!=((void*)0),                                        _if_conditional184) {
                                            # 0 "tuple2$2charphsTypephp_finalize"
                                            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "tuple2$2charphsTypephp_finalize"
                                        # 1 "tuple2$2charphsTypephp_finalize"
                                        if(_if_conditional185=self!=((void*)0)&&self->v2!=((void*)0),                                        _if_conditional185) {
                                            # 1 "tuple2$2charphsTypephp_finalize"
                                            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional186;
struct tuple2$2charphsTypeph* __result127__;
void* right_value274;
struct tuple2$2charphsTypeph* result_196;
_Bool _if_conditional189;
void* right_value275;
char* __dec_obj33;
_Bool _if_conditional190;
void* right_value315;
struct sType* __dec_obj59;
struct tuple2$2charphsTypeph* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
right_value274 = (void*)0;
memset(&result_196, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value275 = (void*)0;
right_value315 = (void*)0;
                            # 3 "tuple2$2charphsTypephp_clone"
                            # 2 "tuple2$2charphsTypephp_clone"
                            if(_if_conditional186=self==(void*)0,                            _if_conditional186) {
                                # 2 "tuple2$2charphsTypephp_clone"
                                __result127__ = __result_obj__ = (void*)0;
                                return __result127__;
                            }
                            # 3 "tuple2$2charphsTypephp_clone"
                            result_196=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value274=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"))));
                            come_call_finalizer3(right_value274,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                            # 5 "tuple2$2charphsTypephp_clone"
                            # 4 "tuple2$2charphsTypephp_clone"
                            if(_if_conditional189=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional189) {
                                # 4 "tuple2$2charphsTypephp_clone"
                                __dec_obj33=result_196->v1;
                                result_196->v1=(char*)come_increment_ref_count(((char*)(right_value275=string_clone(self->v1))));
                                __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 6 "tuple2$2charphsTypephp_clone"
                            # 5 "tuple2$2charphsTypephp_clone"
                            if(_if_conditional190=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional190) {
                                # 5 "tuple2$2charphsTypephp_clone"
                                __dec_obj59=result_196->v2;
                                result_196->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value315=sType_clone(self->v2))));
                                come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value315,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            }
                            # 6 "tuple2$2charphsTypephp_clone"
                            __result149__ = __result_obj__ = result_196;
                            come_call_finalizer3(result_196,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
                            return __result149__;
                            come_call_finalizer3(result_196,tuple2$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional187;
_Bool _if_conditional188;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "tuple2$2charphsTypeph_finalize"
                                # 0 "tuple2$2charphsTypeph_finalize"
                                if(_if_conditional187=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional187) {
                                    # 0 "tuple2$2charphsTypeph_finalize"
                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "tuple2$2charphsTypeph_finalize"
                                # 1 "tuple2$2charphsTypeph_finalize"
                                if(_if_conditional188=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional188) {
                                    # 1 "tuple2$2charphsTypeph_finalize"
                                    come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional191;
struct sType* __result128__;
void* right_value276;
struct sType* result_197;
_Bool _if_conditional192;
_Bool _if_conditional193;
void* right_value283;
struct list$1sTypeph* __dec_obj37;
_Bool _if_conditional197;
void* right_value286;
struct tuple1$1sTypeph* __dec_obj39;
_Bool _if_conditional201;
void* right_value289;
struct tuple1$1sTypeph* __dec_obj41;
_Bool _if_conditional204;
void* right_value290;
char* __dec_obj42;
_Bool _if_conditional205;
void* right_value291;
struct list$1sTypeph* __dec_obj43;
_Bool _if_conditional206;
void* right_value299;
struct list$1sNodeph* __dec_obj47;
_Bool _if_conditional219;
_Bool _if_conditional220;
void* right_value300;
struct list$1sTypeph* __dec_obj48;
_Bool _if_conditional221;
void* right_value307;
struct list$1charph* __dec_obj52;
_Bool _if_conditional225;
void* right_value310;
struct tuple1$1sTypeph* __dec_obj54;
_Bool _if_conditional228;
_Bool _if_conditional229;
void* right_value311;
struct sNode* __dec_obj55;
_Bool _if_conditional230;
_Bool _if_conditional231;
_Bool _if_conditional232;
_Bool _if_conditional233;
_Bool _if_conditional234;
_Bool _if_conditional235;
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
void* right_value312;
struct sNode* __dec_obj56;
_Bool _if_conditional255;
_Bool _if_conditional256;
_Bool _if_conditional257;
void* right_value313;
char* __dec_obj57;
_Bool _if_conditional258;
_Bool _if_conditional259;
_Bool _if_conditional260;
_Bool _if_conditional261;
_Bool _if_conditional262;
_Bool _if_conditional263;
_Bool _if_conditional264;
_Bool _if_conditional265;
_Bool _if_conditional266;
_Bool _if_conditional267;
void* right_value314;
char* __dec_obj58;
_Bool _if_conditional268;
struct sType* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
right_value276 = (void*)0;
memset(&result_197, 0, sizeof(struct sType*));
right_value283 = (void*)0;
right_value286 = (void*)0;
right_value289 = (void*)0;
right_value290 = (void*)0;
right_value291 = (void*)0;
right_value299 = (void*)0;
right_value300 = (void*)0;
right_value307 = (void*)0;
right_value310 = (void*)0;
right_value311 = (void*)0;
right_value312 = (void*)0;
right_value313 = (void*)0;
right_value314 = (void*)0;
                                    # 3 "sType_clone"
                                    # 2 "sType_clone"
                                    if(_if_conditional191=self==(void*)0,                                    _if_conditional191) {
                                        # 2 "sType_clone"
                                        __result128__ = __result_obj__ = (void*)0;
                                        return __result128__;
                                    }
                                    # 3 "sType_clone"
                                    result_197=(struct sType*)come_increment_ref_count(((struct sType*)(right_value276=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
                                    come_call_finalizer3(right_value276,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 5 "sType_clone"
                                    # 4 "sType_clone"
                                    if(_if_conditional192=self!=((void*)0),                                    _if_conditional192) {
                                        # 4 "sType_clone"
                                        result_197->mClass=self->mClass;
                                    }
                                    # 6 "sType_clone"
                                    # 5 "sType_clone"
                                    if(_if_conditional193=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                    _if_conditional193) {
                                        # 5 "sType_clone"
                                        __dec_obj37=result_197->mMultipleTypes;
                                        result_197->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value283=list$1sTypeph_clone(self->mMultipleTypes))));
                                        come_call_finalizer3(__dec_obj37,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value283,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 7 "sType_clone"
                                    # 6 "sType_clone"
                                    if(_if_conditional197=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                    _if_conditional197) {
                                        # 6 "sType_clone"
                                        __dec_obj39=result_197->mNoSolvedGenericsType;
                                        result_197->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value286=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                                        come_call_finalizer3(__dec_obj39,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value286,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 8 "sType_clone"
                                    # 7 "sType_clone"
                                    if(_if_conditional201=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                    _if_conditional201) {
                                        # 7 "sType_clone"
                                        __dec_obj41=result_197->mOriginalLoadVarType;
                                        result_197->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value289=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                                        come_call_finalizer3(__dec_obj41,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value289,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 9 "sType_clone"
                                    # 8 "sType_clone"
                                    if(_if_conditional204=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                    _if_conditional204) {
                                        # 8 "sType_clone"
                                        __dec_obj42=result_197->mGenericsName;
                                        result_197->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value290=string_clone(self->mGenericsName))));
                                        __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value290 = come_decrement_ref_count2(right_value290, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 10 "sType_clone"
                                    # 9 "sType_clone"
                                    if(_if_conditional205=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                    _if_conditional205) {
                                        # 9 "sType_clone"
                                        __dec_obj43=result_197->mGenericsTypes;
                                        result_197->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value291=list$1sTypeph_clone(self->mGenericsTypes))));
                                        come_call_finalizer3(__dec_obj43,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value291,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 11 "sType_clone"
                                    # 10 "sType_clone"
                                    if(_if_conditional206=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                    _if_conditional206) {
                                        # 10 "sType_clone"
                                        __dec_obj47=result_197->mArrayNum;
                                        result_197->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value299=list$1sNodeph_clone(self->mArrayNum))));
                                        come_call_finalizer3(__dec_obj47,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value299,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 12 "sType_clone"
                                    # 11 "sType_clone"
                                    if(_if_conditional219=self!=((void*)0),                                    _if_conditional219) {
                                        # 11 "sType_clone"
                                        result_197->mOmitArrayNum=self->mOmitArrayNum;
                                    }
                                    # 13 "sType_clone"
                                    # 12 "sType_clone"
                                    if(_if_conditional220=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                    _if_conditional220) {
                                        # 12 "sType_clone"
                                        __dec_obj48=result_197->mParamTypes;
                                        result_197->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value300=list$1sTypeph_clone(self->mParamTypes))));
                                        come_call_finalizer3(__dec_obj48,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value300,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 14 "sType_clone"
                                    # 13 "sType_clone"
                                    if(_if_conditional221=self!=((void*)0)&&self->mParamNames!=((void*)0),                                    _if_conditional221) {
                                        # 13 "sType_clone"
                                        __dec_obj52=result_197->mParamNames;
                                        result_197->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value307=list$1charph_clone(self->mParamNames))));
                                        come_call_finalizer3(__dec_obj52,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value307,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 15 "sType_clone"
                                    # 14 "sType_clone"
                                    if(_if_conditional225=self!=((void*)0)&&self->mResultType!=((void*)0),                                    _if_conditional225) {
                                        # 14 "sType_clone"
                                        __dec_obj54=result_197->mResultType;
                                        result_197->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value310=tuple1$1sTypephp_clone(self->mResultType))));
                                        come_call_finalizer3(__dec_obj54,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value310,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 16 "sType_clone"
                                    # 15 "sType_clone"
                                    if(_if_conditional228=self!=((void*)0),                                    _if_conditional228) {
                                        # 15 "sType_clone"
                                        result_197->mVarArgs=self->mVarArgs;
                                    }
                                    # 17 "sType_clone"
                                    # 16 "sType_clone"
                                    if(_if_conditional229=self!=((void*)0)&&self->mAlignas!=((void*)0),                                    _if_conditional229) {
                                        # 16 "sType_clone"
                                        __dec_obj55=result_197->mAlignas;
                                        result_197->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value311=sNode_clone(self->mAlignas))));
                                        if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count2(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value311) { right_value311 = come_decrement_ref_count2(right_value311, ((struct sNode*)right_value311)->finalize, ((struct sNode*)right_value311)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    # 18 "sType_clone"
                                    # 17 "sType_clone"
                                    if(_if_conditional230=self!=((void*)0),                                    _if_conditional230) {
                                        # 17 "sType_clone"
                                        result_197->mUnsigned=self->mUnsigned;
                                    }
                                    # 19 "sType_clone"
                                    # 18 "sType_clone"
                                    if(_if_conditional231=self!=((void*)0),                                    _if_conditional231) {
                                        # 18 "sType_clone"
                                        result_197->mShort=self->mShort;
                                    }
                                    # 20 "sType_clone"
                                    # 19 "sType_clone"
                                    if(_if_conditional232=self!=((void*)0),                                    _if_conditional232) {
                                        # 19 "sType_clone"
                                        result_197->mLong=self->mLong;
                                    }
                                    # 21 "sType_clone"
                                    # 20 "sType_clone"
                                    if(_if_conditional233=self!=((void*)0),                                    _if_conditional233) {
                                        # 20 "sType_clone"
                                        result_197->mLongLong=self->mLongLong;
                                    }
                                    # 22 "sType_clone"
                                    # 21 "sType_clone"
                                    if(_if_conditional234=self!=((void*)0),                                    _if_conditional234) {
                                        # 21 "sType_clone"
                                        result_197->mConstant=self->mConstant;
                                    }
                                    # 23 "sType_clone"
                                    # 22 "sType_clone"
                                    if(_if_conditional235=self!=((void*)0),                                    _if_conditional235) {
                                        # 22 "sType_clone"
                                        result_197->mRegister=self->mRegister;
                                    }
                                    # 24 "sType_clone"
                                    # 23 "sType_clone"
                                    if(_if_conditional236=self!=((void*)0),                                    _if_conditional236) {
                                        # 23 "sType_clone"
                                        result_197->mVolatile=self->mVolatile;
                                    }
                                    # 25 "sType_clone"
                                    # 24 "sType_clone"
                                    if(_if_conditional237=self!=((void*)0),                                    _if_conditional237) {
                                        # 24 "sType_clone"
                                        result_197->mStatic=self->mStatic;
                                    }
                                    # 26 "sType_clone"
                                    # 25 "sType_clone"
                                    if(_if_conditional238=self!=((void*)0),                                    _if_conditional238) {
                                        # 25 "sType_clone"
                                        result_197->mRecord=self->mRecord;
                                    }
                                    # 27 "sType_clone"
                                    # 26 "sType_clone"
                                    if(_if_conditional239=self!=((void*)0),                                    _if_conditional239) {
                                        # 26 "sType_clone"
                                        result_197->mExtern=self->mExtern;
                                    }
                                    # 28 "sType_clone"
                                    # 27 "sType_clone"
                                    if(_if_conditional240=self!=((void*)0),                                    _if_conditional240) {
                                        # 27 "sType_clone"
                                        result_197->mRestrict=self->mRestrict;
                                    }
                                    # 29 "sType_clone"
                                    # 28 "sType_clone"
                                    if(_if_conditional241=self!=((void*)0),                                    _if_conditional241) {
                                        # 28 "sType_clone"
                                        result_197->mImmutable=self->mImmutable;
                                    }
                                    # 30 "sType_clone"
                                    # 29 "sType_clone"
                                    if(_if_conditional242=self!=((void*)0),                                    _if_conditional242) {
                                        # 29 "sType_clone"
                                        result_197->mHeap=self->mHeap;
                                    }
                                    # 31 "sType_clone"
                                    # 30 "sType_clone"
                                    if(_if_conditional243=self!=((void*)0),                                    _if_conditional243) {
                                        # 30 "sType_clone"
                                        result_197->mDummyHeap=self->mDummyHeap;
                                    }
                                    # 32 "sType_clone"
                                    # 31 "sType_clone"
                                    if(_if_conditional244=self!=((void*)0),                                    _if_conditional244) {
                                        # 31 "sType_clone"
                                        result_197->mDelegate=self->mDelegate;
                                    }
                                    # 33 "sType_clone"
                                    # 32 "sType_clone"
                                    if(_if_conditional245=self!=((void*)0),                                    _if_conditional245) {
                                        # 32 "sType_clone"
                                        result_197->mShare=self->mShare;
                                    }
                                    # 34 "sType_clone"
                                    # 33 "sType_clone"
                                    if(_if_conditional246=self!=((void*)0),                                    _if_conditional246) {
                                        # 33 "sType_clone"
                                        result_197->mClone=self->mClone;
                                    }
                                    # 35 "sType_clone"
                                    # 34 "sType_clone"
                                    if(_if_conditional247=self!=((void*)0),                                    _if_conditional247) {
                                        # 34 "sType_clone"
                                        result_197->mNoHeap=self->mNoHeap;
                                    }
                                    # 36 "sType_clone"
                                    # 35 "sType_clone"
                                    if(_if_conditional248=self!=((void*)0),                                    _if_conditional248) {
                                        # 35 "sType_clone"
                                        result_197->mNoCallingDestructor=self->mNoCallingDestructor;
                                    }
                                    # 37 "sType_clone"
                                    # 36 "sType_clone"
                                    if(_if_conditional249=self!=((void*)0),                                    _if_conditional249) {
                                        # 36 "sType_clone"
                                        result_197->mRefference=self->mRefference;
                                    }
                                    # 38 "sType_clone"
                                    # 37 "sType_clone"
                                    if(_if_conditional250=self!=((void*)0),                                    _if_conditional250) {
                                        # 37 "sType_clone"
                                        result_197->mException=self->mException;
                                    }
                                    # 39 "sType_clone"
                                    # 38 "sType_clone"
                                    if(_if_conditional251=self!=((void*)0),                                    _if_conditional251) {
                                        # 38 "sType_clone"
                                        result_197->mPointerNum=self->mPointerNum;
                                    }
                                    # 40 "sType_clone"
                                    # 39 "sType_clone"
                                    if(_if_conditional252=self!=((void*)0),                                    _if_conditional252) {
                                        # 39 "sType_clone"
                                        result_197->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                                    }
                                    # 41 "sType_clone"
                                    # 40 "sType_clone"
                                    if(_if_conditional253=self!=((void*)0),                                    _if_conditional253) {
                                        # 40 "sType_clone"
                                        result_197->mNoArrayPointerNum=self->mNoArrayPointerNum;
                                    }
                                    # 42 "sType_clone"
                                    # 41 "sType_clone"
                                    if(_if_conditional254=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                    _if_conditional254) {
                                        # 41 "sType_clone"
                                        __dec_obj56=result_197->mSizeNum;
                                        result_197->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value312=sNode_clone(self->mSizeNum))));
                                        if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count2(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value312) { right_value312 = come_decrement_ref_count2(right_value312, ((struct sNode*)right_value312)->finalize, ((struct sNode*)right_value312)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    # 43 "sType_clone"
                                    # 42 "sType_clone"
                                    if(_if_conditional255=self!=((void*)0),                                    _if_conditional255) {
                                        # 42 "sType_clone"
                                        result_197->mDynamicArrayNum=self->mDynamicArrayNum;
                                    }
                                    # 44 "sType_clone"
                                    # 43 "sType_clone"
                                    if(_if_conditional256=self!=((void*)0),                                    _if_conditional256) {
                                        # 43 "sType_clone"
                                        result_197->mTypeOfExpression=self->mTypeOfExpression;
                                    }
                                    # 45 "sType_clone"
                                    # 44 "sType_clone"
                                    if(_if_conditional257=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                    _if_conditional257) {
                                        # 44 "sType_clone"
                                        __dec_obj57=result_197->mOriginalTypeName;
                                        result_197->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value313=string_clone(self->mOriginalTypeName))));
                                        __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value313 = come_decrement_ref_count2(right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 46 "sType_clone"
                                    # 45 "sType_clone"
                                    if(_if_conditional258=self!=((void*)0),                                    _if_conditional258) {
                                        # 45 "sType_clone"
                                        result_197->mOriginalPointerNum=self->mOriginalPointerNum;
                                    }
                                    # 47 "sType_clone"
                                    # 46 "sType_clone"
                                    if(_if_conditional259=self!=((void*)0),                                    _if_conditional259) {
                                        # 46 "sType_clone"
                                        result_197->mFunctionParam=self->mFunctionParam;
                                    }
                                    # 48 "sType_clone"
                                    # 47 "sType_clone"
                                    if(_if_conditional260=self!=((void*)0),                                    _if_conditional260) {
                                        # 47 "sType_clone"
                                        result_197->mAllocaValue=self->mAllocaValue;
                                    }
                                    # 49 "sType_clone"
                                    # 48 "sType_clone"
                                    if(_if_conditional261=self!=((void*)0),                                    _if_conditional261) {
                                        # 48 "sType_clone"
                                        result_197->mGenericsStruct=self->mGenericsStruct;
                                    }
                                    # 50 "sType_clone"
                                    # 49 "sType_clone"
                                    if(_if_conditional262=self!=((void*)0),                                    _if_conditional262) {
                                        # 49 "sType_clone"
                                        result_197->mSolvedGenericsName=self->mSolvedGenericsName;
                                    }
                                    # 51 "sType_clone"
                                    # 50 "sType_clone"
                                    if(_if_conditional263=self!=((void*)0),                                    _if_conditional263) {
                                        # 50 "sType_clone"
                                        result_197->mComeMemCore=self->mComeMemCore;
                                    }
                                    # 52 "sType_clone"
                                    # 51 "sType_clone"
                                    if(_if_conditional264=self!=((void*)0),                                    _if_conditional264) {
                                        # 51 "sType_clone"
                                        result_197->mInline=self->mInline;
                                    }
                                    # 53 "sType_clone"
                                    # 52 "sType_clone"
                                    if(_if_conditional265=self!=((void*)0),                                    _if_conditional265) {
                                        # 52 "sType_clone"
                                        result_197->mNullValue=self->mNullValue;
                                    }
                                    # 54 "sType_clone"
                                    # 53 "sType_clone"
                                    if(_if_conditional266=self!=((void*)0),                                    _if_conditional266) {
                                        # 53 "sType_clone"
                                        result_197->mGuardValue=self->mGuardValue;
                                    }
                                    # 55 "sType_clone"
                                    # 54 "sType_clone"
                                    if(_if_conditional267=self!=((void*)0)&&self->mAsmName!=((void*)0),                                    _if_conditional267) {
                                        # 54 "sType_clone"
                                        __dec_obj58=result_197->mAsmName;
                                        result_197->mAsmName=(char*)come_increment_ref_count(((char*)(right_value314=string_clone(self->mAsmName))));
                                        __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value314 = come_decrement_ref_count2(right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 56 "sType_clone"
                                    # 55 "sType_clone"
                                    if(_if_conditional268=self!=((void*)0),                                    _if_conditional268) {
                                        # 55 "sType_clone"
                                        result_197->mArrayPointerType=self->mArrayPointerType;
                                    }
                                    # 56 "sType_clone"
                                    __result148__ = __result_obj__ = result_197;
                                    come_call_finalizer3(result_197,sType_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result148__;
                                    come_call_finalizer3(result_197,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional194;
struct list$1sTypeph* __result129__;
void* right_value277;
void* right_value278;
struct list$1sTypeph* result_198;
struct list_item$1sTypeph* it_199;
_Bool _while_condtional25;
void* right_value282;
struct list$1sTypeph* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
right_value277 = (void*)0;
right_value278 = (void*)0;
memset(&result_198, 0, sizeof(struct list$1sTypeph*));
memset(&it_199, 0, sizeof(struct list_item$1sTypeph*));
right_value282 = (void*)0;
                                            # 133 "./neo-c.h"
                                            # 130 "./neo-c.h"
                                            if(_if_conditional194=self==((void*)0),                                            _if_conditional194) {
                                                # 131 "./neo-c.h"
                                                __result129__ = __result_obj__ = ((void*)0);
                                                return __result129__;
                                            }
                                            # 133 "./neo-c.h"
                                            result_198=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value278=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value277=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 133, "list$1sTypeph"))))))));
                                            come_call_finalizer3(right_value277,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value278,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            # 135 "./neo-c.h"
                                            it_199=self->head;
                                            # 142 "./neo-c.h"
                                            while(_while_condtional25=it_199!=((void*)0),                                            _while_condtional25) {
                                                # 137 "./neo-c.h"
                                                list$1sTypeph_add(result_198,(struct sType*)come_increment_ref_count(((struct sType*)(right_value282=sType_clone(it_199->item)))));
                                                come_call_finalizer3(right_value282,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                # 139 "./neo-c.h"
                                                it_199=it_199->next;
                                            }
                                            # 142 "./neo-c.h"
                                            __result132__ = __result_obj__ = result_198;
                                            come_call_finalizer3(result_198,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result132__;
                                            come_call_finalizer3(result_198,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 95 "./neo-c.h"
                                                self->head=((void*)0);
                                                # 96 "./neo-c.h"
                                                self->tail=((void*)0);
                                                # 97 "./neo-c.h"
                                                self->len=0;
                                                # 99 "./neo-c.h"
                                                __result130__ = __result_obj__ = self;
                                                come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result130__;
                                                come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional195;
void* right_value279;
struct list_item$1sTypeph* litem_200;
struct sType* __dec_obj34;
_Bool _if_conditional196;
void* right_value280;
struct list_item$1sTypeph* litem_201;
struct sType* __dec_obj35;
void* right_value281;
struct list_item$1sTypeph* litem_202;
struct sType* __dec_obj36;
struct list$1sTypeph* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
right_value279 = (void*)0;
memset(&litem_200, 0, sizeof(struct list_item$1sTypeph*));
right_value280 = (void*)0;
memset(&litem_201, 0, sizeof(struct list_item$1sTypeph*));
right_value281 = (void*)0;
memset(&litem_202, 0, sizeof(struct list_item$1sTypeph*));
                                                    # 177 "./neo-c.h"
                                                    # 146 "./neo-c.h"
                                                    if(_if_conditional195=self->len==0,                                                    _if_conditional195) {
                                                        # 147 "./neo-c.h"
                                                        litem_200=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value279=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 147, "list_item$1sTypeph"))));
                                                        come_call_finalizer3(right_value279,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        # 149 "./neo-c.h"
                                                        litem_200->prev=((void*)0);
                                                        # 150 "./neo-c.h"
                                                        litem_200->next=((void*)0);
                                                        # 151 "./neo-c.h"
                                                        __dec_obj34=litem_200->item;
                                                        litem_200->item=(struct sType*)come_increment_ref_count(item);
                                                        come_call_finalizer3(__dec_obj34,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        # 153 "./neo-c.h"
                                                        self->tail=litem_200;
                                                        # 154 "./neo-c.h"
                                                        self->head=litem_200;
                                                    }
                                                    else {
                                                        # 177 "./neo-c.h"
                                                        # 156 "./neo-c.h"
                                                        if(_if_conditional196=self->len==1,                                                        _if_conditional196) {
                                                            # 157 "./neo-c.h"
                                                            litem_201=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value280=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 157, "list_item$1sTypeph"))));
                                                            come_call_finalizer3(right_value280,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            # 159 "./neo-c.h"
                                                            litem_201->prev=self->head;
                                                            # 160 "./neo-c.h"
                                                            litem_201->next=((void*)0);
                                                            # 161 "./neo-c.h"
                                                            __dec_obj35=litem_201->item;
                                                            litem_201->item=(struct sType*)come_increment_ref_count(item);
                                                            come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            # 163 "./neo-c.h"
                                                            self->tail=litem_201;
                                                            # 164 "./neo-c.h"
                                                            self->head->next=litem_201;
                                                        }
                                                        else {
                                                            # 167 "./neo-c.h"
                                                            litem_202=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value281=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 167, "list_item$1sTypeph"))));
                                                            come_call_finalizer3(right_value281,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            # 169 "./neo-c.h"
                                                            litem_202->prev=self->tail;
                                                            # 170 "./neo-c.h"
                                                            litem_202->next=((void*)0);
                                                            # 171 "./neo-c.h"
                                                            __dec_obj36=litem_202->item;
                                                            litem_202->item=(struct sType*)come_increment_ref_count(item);
                                                            come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            # 173 "./neo-c.h"
                                                            self->tail->next=litem_202;
                                                            # 174 "./neo-c.h"
                                                            self->tail=litem_202;
                                                        }
                                                    }
                                                    # 177 "./neo-c.h"
                                                    self->len++;
                                                    # 179 "./neo-c.h"
                                                    __result131__ = __result_obj__ = self;
                                                    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                                                    return __result131__;
                                                    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_203;
_Bool _while_condtional26;
struct list_item$1sTypeph* prev_it_204;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_203, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_204, 0, sizeof(struct list_item$1sTypeph*));
                                            # 114 "./neo-c.h"
                                            it_203=self->head;
                                            # 120 "./neo-c.h"
                                            while(_while_condtional26=it_203!=((void*)0),                                            _while_condtional26) {
                                                # 116 "./neo-c.h"
                                                prev_it_204=it_203;
                                                # 117 "./neo-c.h"
                                                it_203=it_203->next;
                                                # 118 "./neo-c.h"
                                                come_call_finalizer3(prev_it_204,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional199;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "tuple1$1sTypeph_finalize"
                                                # 0 "tuple1$1sTypeph_finalize"
                                                if(_if_conditional199=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional199) {
                                                    # 0 "tuple1$1sTypeph_finalize"
                                                    come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional207;
struct list$1sNodeph* __result137__;
void* right_value292;
void* right_value293;
struct list$1sNodeph* result_207;
struct list_item$1sNodeph* it_208;
_Bool _while_condtional27;
void* right_value298;
struct list$1sNodeph* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
right_value292 = (void*)0;
right_value293 = (void*)0;
memset(&result_207, 0, sizeof(struct list$1sNodeph*));
memset(&it_208, 0, sizeof(struct list_item$1sNodeph*));
right_value298 = (void*)0;
                                            # 133 "./neo-c.h"
                                            # 130 "./neo-c.h"
                                            if(_if_conditional207=self==((void*)0),                                            _if_conditional207) {
                                                # 131 "./neo-c.h"
                                                __result137__ = __result_obj__ = ((void*)0);
                                                return __result137__;
                                            }
                                            # 133 "./neo-c.h"
                                            result_207=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value293=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value292=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 133, "list$1sNodeph"))))))));
                                            come_call_finalizer3(right_value292,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value293,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            # 135 "./neo-c.h"
                                            it_208=self->head;
                                            # 142 "./neo-c.h"
                                            while(_while_condtional27=it_208!=((void*)0),                                            _while_condtional27) {
                                                # 137 "./neo-c.h"
                                                list$1sNodeph_add(result_207,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value298=sNode_clone(it_208->item)))));
                                                if(right_value298) { right_value298 = come_decrement_ref_count2(right_value298, ((struct sNode*)right_value298)->finalize, ((struct sNode*)right_value298)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                # 139 "./neo-c.h"
                                                it_208=it_208->next;
                                            }
                                            # 142 "./neo-c.h"
                                            __result142__ = __result_obj__ = result_207;
                                            come_call_finalizer3(result_207,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result142__;
                                            come_call_finalizer3(result_207,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 95 "./neo-c.h"
                                                self->head=((void*)0);
                                                # 96 "./neo-c.h"
                                                self->tail=((void*)0);
                                                # 97 "./neo-c.h"
                                                self->len=0;
                                                # 99 "./neo-c.h"
                                                __result138__ = __result_obj__ = self;
                                                come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result138__;
                                                come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional208;
void* right_value294;
struct list_item$1sNodeph* litem_209;
struct sNode* __dec_obj44;
_Bool _if_conditional209;
void* right_value295;
struct list_item$1sNodeph* litem_210;
struct sNode* __dec_obj45;
void* right_value296;
struct list_item$1sNodeph* litem_211;
struct sNode* __dec_obj46;
struct list$1sNodeph* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
right_value294 = (void*)0;
memset(&litem_209, 0, sizeof(struct list_item$1sNodeph*));
right_value295 = (void*)0;
memset(&litem_210, 0, sizeof(struct list_item$1sNodeph*));
right_value296 = (void*)0;
memset(&litem_211, 0, sizeof(struct list_item$1sNodeph*));
                                                    # 177 "./neo-c.h"
                                                    # 146 "./neo-c.h"
                                                    if(_if_conditional208=self->len==0,                                                    _if_conditional208) {
                                                        # 147 "./neo-c.h"
                                                        litem_209=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value294=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 147, "list_item$1sNodeph"))));
                                                        come_call_finalizer3(right_value294,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        # 149 "./neo-c.h"
                                                        litem_209->prev=((void*)0);
                                                        # 150 "./neo-c.h"
                                                        litem_209->next=((void*)0);
                                                        # 151 "./neo-c.h"
                                                        __dec_obj44=litem_209->item;
                                                        litem_209->item=(struct sNode*)come_increment_ref_count(item);
                                                        if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count2(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0,0, (void*)0); }
                                                        # 153 "./neo-c.h"
                                                        self->tail=litem_209;
                                                        # 154 "./neo-c.h"
                                                        self->head=litem_209;
                                                    }
                                                    else {
                                                        # 177 "./neo-c.h"
                                                        # 156 "./neo-c.h"
                                                        if(_if_conditional209=self->len==1,                                                        _if_conditional209) {
                                                            # 157 "./neo-c.h"
                                                            litem_210=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value295=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 157, "list_item$1sNodeph"))));
                                                            come_call_finalizer3(right_value295,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            # 159 "./neo-c.h"
                                                            litem_210->prev=self->head;
                                                            # 160 "./neo-c.h"
                                                            litem_210->next=((void*)0);
                                                            # 161 "./neo-c.h"
                                                            __dec_obj45=litem_210->item;
                                                            litem_210->item=(struct sNode*)come_increment_ref_count(item);
                                                            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0, (void*)0); }
                                                            # 163 "./neo-c.h"
                                                            self->tail=litem_210;
                                                            # 164 "./neo-c.h"
                                                            self->head->next=litem_210;
                                                        }
                                                        else {
                                                            # 167 "./neo-c.h"
                                                            litem_211=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value296=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 167, "list_item$1sNodeph"))));
                                                            come_call_finalizer3(right_value296,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            # 169 "./neo-c.h"
                                                            litem_211->prev=self->tail;
                                                            # 170 "./neo-c.h"
                                                            litem_211->next=((void*)0);
                                                            # 171 "./neo-c.h"
                                                            __dec_obj46=litem_211->item;
                                                            litem_211->item=(struct sNode*)come_increment_ref_count(item);
                                                            if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); }
                                                            # 173 "./neo-c.h"
                                                            self->tail->next=litem_211;
                                                            # 174 "./neo-c.h"
                                                            self->tail=litem_211;
                                                        }
                                                    }
                                                    # 177 "./neo-c.h"
                                                    self->len++;
                                                    # 179 "./neo-c.h"
                                                    __result139__ = __result_obj__ = self;
                                                    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                    return __result139__;
                                                    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional210;
struct sNode* __result140__;
void* right_value297;
struct sNode* result_212;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
struct sNode* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value297 = (void*)0;
memset(&result_212, 0, sizeof(struct sNode*));
                                                    # 3 "sNode_clone"
                                                    # 2 "sNode_clone"
                                                    if(_if_conditional210=self==(void*)0,                                                    _if_conditional210) {
                                                        # 2 "sNode_clone"
                                                        __result140__ = __result_obj__ = (void*)0;
                                                        return __result140__;
                                                    }
                                                    # 3 "sNode_clone"
                                                    result_212=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value297=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                                                    if(right_value297) { right_value297 = come_decrement_ref_count2(right_value297, ((struct sNode*)right_value297)->finalize, ((struct sNode*)right_value297)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    # 5 "sNode_clone"
                                                    # 4 "sNode_clone"
                                                    if(_if_conditional211=self!=((void*)0)&&self->clone!=((void*)0),                                                    _if_conditional211) {
                                                        # 4 "sNode_clone"
                                                        result_212->_protocol_obj=self->clone(self->_protocol_obj);
                                                    }
                                                    # 6 "sNode_clone"
                                                    # 5 "sNode_clone"
                                                    if(_if_conditional212=self!=((void*)0),                                                    _if_conditional212) {
                                                        # 5 "sNode_clone"
                                                        result_212->finalize=self->finalize;
                                                    }
                                                    # 7 "sNode_clone"
                                                    # 6 "sNode_clone"
                                                    if(_if_conditional213=self!=((void*)0),                                                    _if_conditional213) {
                                                        # 6 "sNode_clone"
                                                        result_212->clone=self->clone;
                                                    }
                                                    # 8 "sNode_clone"
                                                    # 7 "sNode_clone"
                                                    if(_if_conditional214=self!=((void*)0),                                                    _if_conditional214) {
                                                        # 7 "sNode_clone"
                                                        result_212->compile=self->compile;
                                                    }
                                                    # 9 "sNode_clone"
                                                    # 8 "sNode_clone"
                                                    if(_if_conditional215=self!=((void*)0),                                                    _if_conditional215) {
                                                        # 8 "sNode_clone"
                                                        result_212->sline=self->sline;
                                                    }
                                                    # 10 "sNode_clone"
                                                    # 9 "sNode_clone"
                                                    if(_if_conditional216=self!=((void*)0),                                                    _if_conditional216) {
                                                        # 9 "sNode_clone"
                                                        result_212->sname=self->sname;
                                                    }
                                                    # 11 "sNode_clone"
                                                    # 10 "sNode_clone"
                                                    if(_if_conditional217=self!=((void*)0),                                                    _if_conditional217) {
                                                        # 10 "sNode_clone"
                                                        result_212->terminated=self->terminated;
                                                    }
                                                    # 12 "sNode_clone"
                                                    # 11 "sNode_clone"
                                                    if(_if_conditional218=self!=((void*)0),                                                    _if_conditional218) {
                                                        # 11 "sNode_clone"
                                                        result_212->kind=self->kind;
                                                    }
                                                    # 12 "sNode_clone"
                                                    __result141__ = __result_obj__ = result_212;
                                                    if(result_212) { result_212 = come_decrement_ref_count2(result_212, ((struct sNode*)result_212)->finalize, ((struct sNode*)result_212)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                    return __result141__;
                                                    if(result_212) { result_212 = come_decrement_ref_count2(result_212, ((struct sNode*)result_212)->finalize, ((struct sNode*)result_212)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_213;
_Bool _while_condtional28;
struct list_item$1sNodeph* prev_it_214;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_213, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_214, 0, sizeof(struct list_item$1sNodeph*));
                                            # 114 "./neo-c.h"
                                            it_213=self->head;
                                            # 120 "./neo-c.h"
                                            while(_while_condtional28=it_213!=((void*)0),                                            _while_condtional28) {
                                                # 116 "./neo-c.h"
                                                prev_it_214=it_213;
                                                # 117 "./neo-c.h"
                                                it_213=it_213->next;
                                                # 118 "./neo-c.h"
                                                come_call_finalizer3(prev_it_214,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional222;
struct list$1charph* __result143__;
void* right_value301;
void* right_value302;
struct list$1charph* result_215;
struct list_item$1charph* it_216;
_Bool _while_condtional29;
void* right_value306;
struct list$1charph* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
right_value301 = (void*)0;
right_value302 = (void*)0;
memset(&result_215, 0, sizeof(struct list$1charph*));
memset(&it_216, 0, sizeof(struct list_item$1charph*));
right_value306 = (void*)0;
                                            # 133 "./neo-c.h"
                                            # 130 "./neo-c.h"
                                            if(_if_conditional222=self==((void*)0),                                            _if_conditional222) {
                                                # 131 "./neo-c.h"
                                                __result143__ = __result_obj__ = ((void*)0);
                                                return __result143__;
                                            }
                                            # 133 "./neo-c.h"
                                            result_215=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value302=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value301=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 133, "list$1charph"))))))));
                                            come_call_finalizer3(right_value301,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value302,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                            # 135 "./neo-c.h"
                                            it_216=self->head;
                                            # 142 "./neo-c.h"
                                            while(_while_condtional29=it_216!=((void*)0),                                            _while_condtional29) {
                                                # 137 "./neo-c.h"
                                                list$1charph_add(result_215,(char*)come_increment_ref_count(((char*)(right_value306=string_clone(it_216->item)))));
                                                right_value306 = come_decrement_ref_count2(right_value306, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                # 139 "./neo-c.h"
                                                it_216=it_216->next;
                                            }
                                            # 142 "./neo-c.h"
                                            __result145__ = __result_obj__ = result_215;
                                            come_call_finalizer3(result_215,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result145__;
                                            come_call_finalizer3(result_215,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional223;
void* right_value303;
struct list_item$1charph* litem_217;
char* __dec_obj49;
_Bool _if_conditional224;
void* right_value304;
struct list_item$1charph* litem_218;
char* __dec_obj50;
void* right_value305;
struct list_item$1charph* litem_219;
char* __dec_obj51;
struct list$1charph* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
right_value303 = (void*)0;
memset(&litem_217, 0, sizeof(struct list_item$1charph*));
right_value304 = (void*)0;
memset(&litem_218, 0, sizeof(struct list_item$1charph*));
right_value305 = (void*)0;
memset(&litem_219, 0, sizeof(struct list_item$1charph*));
                                                    # 177 "./neo-c.h"
                                                    # 146 "./neo-c.h"
                                                    if(_if_conditional223=self->len==0,                                                    _if_conditional223) {
                                                        # 147 "./neo-c.h"
                                                        litem_217=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value303=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 147, "list_item$1charph"))));
                                                        come_call_finalizer3(right_value303,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        # 149 "./neo-c.h"
                                                        litem_217->prev=((void*)0);
                                                        # 150 "./neo-c.h"
                                                        litem_217->next=((void*)0);
                                                        # 151 "./neo-c.h"
                                                        __dec_obj49=litem_217->item;
                                                        litem_217->item=(char*)come_increment_ref_count(item);
                                                        __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        # 153 "./neo-c.h"
                                                        self->tail=litem_217;
                                                        # 154 "./neo-c.h"
                                                        self->head=litem_217;
                                                    }
                                                    else {
                                                        # 177 "./neo-c.h"
                                                        # 156 "./neo-c.h"
                                                        if(_if_conditional224=self->len==1,                                                        _if_conditional224) {
                                                            # 157 "./neo-c.h"
                                                            litem_218=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value304=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 157, "list_item$1charph"))));
                                                            come_call_finalizer3(right_value304,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            # 159 "./neo-c.h"
                                                            litem_218->prev=self->head;
                                                            # 160 "./neo-c.h"
                                                            litem_218->next=((void*)0);
                                                            # 161 "./neo-c.h"
                                                            __dec_obj50=litem_218->item;
                                                            litem_218->item=(char*)come_increment_ref_count(item);
                                                            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            # 163 "./neo-c.h"
                                                            self->tail=litem_218;
                                                            # 164 "./neo-c.h"
                                                            self->head->next=litem_218;
                                                        }
                                                        else {
                                                            # 167 "./neo-c.h"
                                                            litem_219=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value305=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 167, "list_item$1charph"))));
                                                            come_call_finalizer3(right_value305,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            # 169 "./neo-c.h"
                                                            litem_219->prev=self->tail;
                                                            # 170 "./neo-c.h"
                                                            litem_219->next=((void*)0);
                                                            # 171 "./neo-c.h"
                                                            __dec_obj51=litem_219->item;
                                                            litem_219->item=(char*)come_increment_ref_count(item);
                                                            __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            # 173 "./neo-c.h"
                                                            self->tail->next=litem_219;
                                                            # 174 "./neo-c.h"
                                                            self->tail=litem_219;
                                                        }
                                                    }
                                                    # 177 "./neo-c.h"
                                                    self->len++;
                                                    # 179 "./neo-c.h"
                                                    __result144__ = __result_obj__ = self;
                                                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                    return __result144__;
                                                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_220;
_Bool _while_condtional30;
struct list_item$1charph* prev_it_221;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_220, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_221, 0, sizeof(struct list_item$1charph*));
                                            # 114 "./neo-c.h"
                                            it_220=self->head;
                                            # 120 "./neo-c.h"
                                            while(_while_condtional30=it_220!=((void*)0),                                            _while_condtional30) {
                                                # 116 "./neo-c.h"
                                                prev_it_221=it_220;
                                                # 117 "./neo-c.h"
                                                it_220=it_220->next;
                                                # 118 "./neo-c.h"
                                                come_call_finalizer3(prev_it_221,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional226;
struct tuple1$1sTypeph* __result146__;
void* right_value308;
struct tuple1$1sTypeph* result_222;
_Bool _if_conditional227;
void* right_value309;
struct sType* __dec_obj53;
struct tuple1$1sTypeph* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
right_value308 = (void*)0;
memset(&result_222, 0, sizeof(struct tuple1$1sTypeph*));
right_value309 = (void*)0;
                                            # 3 "tuple1$1sTypephp_clone"
                                            # 2 "tuple1$1sTypephp_clone"
                                            if(_if_conditional226=self==(void*)0,                                            _if_conditional226) {
                                                # 2 "tuple1$1sTypephp_clone"
                                                __result146__ = __result_obj__ = (void*)0;
                                                return __result146__;
                                            }
                                            # 3 "tuple1$1sTypephp_clone"
                                            result_222=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value308=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                                            come_call_finalizer3(right_value308,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                                            # 5 "tuple1$1sTypephp_clone"
                                            # 4 "tuple1$1sTypephp_clone"
                                            if(_if_conditional227=self!=((void*)0)&&self->v1!=((void*)0),                                            _if_conditional227) {
                                                # 4 "tuple1$1sTypephp_clone"
                                                __dec_obj53=result_222->v1;
                                                result_222->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value309=sType_clone(self->v1))));
                                                come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                come_call_finalizer3(right_value309,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                            }
                                            # 5 "tuple1$1sTypephp_clone"
                                            __result147__ = __result_obj__ = result_222;
                                            come_call_finalizer3(result_222,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result147__;
                                            come_call_finalizer3(result_222,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_223;
_Bool _while_condtional31;
struct list_item$1tuple2$2charphsTypephph* prev_it_224;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_223, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_224, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                    # 114 "./neo-c.h"
                    it_223=self->head;
                    # 120 "./neo-c.h"
                    while(_while_condtional31=it_223!=((void*)0),                    _while_condtional31) {
                        # 116 "./neo-c.h"
                        prev_it_224=it_223;
                        # 117 "./neo-c.h"
                        it_223=it_223->next;
                        # 118 "./neo-c.h"
                        come_call_finalizer3(prev_it_224,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

int come_main_v2(int argc, char** argv){
void* __result_obj__;
_Bool _if_conditional274;
void* right_value321;
void* right_value322;
struct buffer* clang_option_225;
void* right_value323;
void* right_value324;
struct buffer* cpp_option_226;
void* right_value325;
void* right_value326;
struct list$1charph* files_227;
void* right_value327;
void* right_value328;
struct list$1charph* object_files_228;
_Bool output_object_file_229;
_Bool output_cpp_file_230;
_Bool output_source_file_flag_231;
void* right_value329;
char* output_file_name_232;
_Bool verbose_233;
_Bool prohibit_common_header_234;
_Bool come_debug_235;
_Bool come_malloc_236;
_Bool come_str_237;
int i_238;
_Bool _if_conditional275;
void* right_value330;
char* __dec_obj63;
_Bool _if_conditional276;
_Bool _if_conditional277;
_Bool _if_conditional278;
_Bool _if_conditional279;
_Bool _if_conditional280;
_Bool _if_conditional281;
_Bool _if_conditional282;
void* right_value331;
_Bool _if_conditional283;
void* right_value332;
void* right_value333;
void* right_value334;
_Bool _if_conditional284;
void* right_value335;
void* right_value336;
void* right_value337;
void* right_value338;
_Bool _if_conditional285;
_Bool _if_conditional286;
void* right_value339;
void* right_value340;
_Bool _if_conditional287;
_Bool _if_conditional288;
_Bool _if_conditional289;
_Bool _if_conditional290;
_Bool _if_conditional291;
void* right_value341;
_Bool _if_conditional292;
void* right_value342;
void* right_value343;
_Bool _if_conditional293;
_Bool _if_conditional294;
struct _IO_FILE* f_239;
_Bool _and_conditional1;
_Bool __exception_result_var_b8;
_Bool _or_conditional8;
_Bool __exception_result_var_b9;
void* right_value344;
char* tmp_file_240;
void* right_value345;
void* right_value346;
void* right_value347;
void* right_value348;
struct sInfo info_241;
void* right_value349;
char* __dec_obj64;
void* right_value350;
char* __dec_obj65;
void* right_value351;
char* __dec_obj66;
void* right_value352;
char* __dec_obj67;
void* right_value353;
void* right_value359;
struct map$2charphsFunph* __dec_obj69;
void* right_value360;
void* right_value366;
struct map$2charphsGenericsFunph* __dec_obj71;
void* right_value367;
void* right_value373;
struct map$2charphsClassph* __dec_obj73;
void* right_value374;
void* right_value380;
struct map$2charphsClassModuleph* __dec_obj75;
void* right_value381;
void* right_value387;
struct map$2charphsTypeph* __dec_obj77;
void* right_value388;
void* right_value389;
struct sModule* __dec_obj78;
void* right_value390;
void* right_value391;
struct list$1sRightValueObjectph* __dec_obj79;
void* right_value392;
void* right_value393;
struct list$1CVALUEph* __dec_obj80;
void* right_value394;
void* right_value395;
struct sVarTable* __dec_obj81;
void* right_value396;
void* right_value397;
struct sVarTable* lv_table_277;
void* right_value398;
void* right_value399;
struct list$1charph* __dec_obj82;
void* right_value400;
void* right_value401;
struct list$1charph* __dec_obj83;
void* right_value402;
void* right_value403;
struct map$2charphsClassph* __dec_obj84;
static int n_278=0;
void* right_value404;
char* __dec_obj85;
_Bool _if_conditional377;
void* right_value405;
void* right_value406;
void* right_value407;
struct buffer* __dec_obj86;
void* right_value408;
void* right_value409;
void* right_value410;
struct buffer* __dec_obj87;
_Bool _if_conditional378;
_Bool _if_conditional379;
void* right_value411;
void* right_value412;
_Bool _if_conditional412;
_Bool _if_conditional413;
int __result160__;
_Bool _if_conditional414;
_Bool _if_conditional415;
int __result161__;
_Bool _if_conditional416;
_Bool _if_conditional417;
int __result162__;
_Bool _if_conditional418;
_Bool _if_conditional419;
int __result163__;
_Bool _if_conditional420;
_Bool _if_conditional421;
int __result164__;
_Bool _if_conditional422;
_Bool _if_conditional423;
int __result165__;
_Bool _if_conditional424;
_Bool _if_conditional425;
_Bool _if_conditional426;
int __result166__;
_Bool _if_conditional427;
_Bool _if_conditional428;
int __result167__;
void* right_value413;
void* right_value414;
struct buffer* clang_option_281;
void* right_value415;
void* right_value416;
struct buffer* cpp_option_282;
void* right_value417;
void* right_value418;
struct list$1charph* files_283;
void* right_value419;
void* right_value420;
struct list$1charph* object_files_284;
_Bool output_object_file_285;
_Bool output_cpp_file_286;
_Bool output_source_file_flag_287;
char* output_file_name_288;
_Bool verbose_289;
_Bool come_debug_290;
_Bool come_malloc_291;
_Bool come_str_292;
int i_293;
_Bool _if_conditional429;
void* right_value421;
char* __dec_obj88;
_Bool _if_conditional430;
_Bool _if_conditional431;
_Bool _if_conditional432;
_Bool _if_conditional433;
_Bool _if_conditional434;
_Bool _if_conditional435;
void* right_value422;
_Bool _if_conditional436;
void* right_value423;
void* right_value424;
void* right_value425;
_Bool _if_conditional437;
void* right_value426;
void* right_value427;
void* right_value428;
void* right_value429;
_Bool _if_conditional438;
_Bool _if_conditional439;
_Bool _if_conditional440;
void* right_value430;
void* right_value431;
_Bool _if_conditional441;
_Bool _if_conditional442;
_Bool _if_conditional443;
_Bool _if_conditional444;
_Bool _if_conditional445;
void* right_value432;
_Bool _if_conditional446;
void* right_value433;
void* right_value434;
void* right_value435;
_Bool _if_conditional447;
_Bool _if_conditional448;
struct list$1charph* o2_saved_294;
char* it_295;
struct sInfo info_296;
void* right_value436;
char* __dec_obj89;
void* right_value437;
char* __dec_obj90;
void* right_value438;
char* __dec_obj91;
void* right_value439;
void* right_value440;
struct map$2charphsFunph* __dec_obj92;
void* right_value441;
void* right_value442;
struct map$2charphsGenericsFunph* __dec_obj93;
void* right_value443;
void* right_value444;
struct map$2charphsClassph* __dec_obj94;
void* right_value445;
void* right_value446;
struct map$2charphsClassModuleph* __dec_obj95;
void* right_value447;
void* right_value448;
struct map$2charphsTypeph* __dec_obj96;
void* right_value449;
void* right_value450;
struct sModule* __dec_obj97;
void* right_value451;
void* right_value452;
struct list$1sRightValueObjectph* __dec_obj98;
void* right_value453;
void* right_value454;
struct list$1CVALUEph* __dec_obj99;
void* right_value455;
void* right_value456;
struct sVarTable* __dec_obj100;
void* right_value457;
void* right_value458;
struct sVarTable* lv_table_297;
void* right_value459;
void* right_value460;
struct list$1charph* __dec_obj101;
void* right_value461;
void* right_value462;
struct list$1charph* __dec_obj102;
void* right_value463;
void* right_value464;
struct map$2charphsClassph* __dec_obj103;
_Bool _if_conditional449;
void* right_value465;
void* right_value466;
void* right_value467;
struct buffer* __dec_obj104;
void* right_value468;
void* right_value469;
void* right_value470;
struct buffer* __dec_obj105;
_Bool _if_conditional450;
void* right_value471;
char* __dec_obj106;
char* __dec_obj107;
_Bool _if_conditional451;
_Bool _if_conditional452;
_Bool _if_conditional453;
_Bool _if_conditional454;
_Bool _if_conditional455;
struct sInfo info_298;
void* right_value472;
char* __dec_obj108;
void* right_value473;
char* __dec_obj109;
_Bool _if_conditional458;
void* right_value474;
char* __dec_obj110;
char* __dec_obj111;
struct __current_stack2__ __current_stack2__;
int __result170__;
memset(&__result_obj__, 0, sizeof(void*));
right_value321 = (void*)0;
right_value322 = (void*)0;
memset(&clang_option_225, 0, sizeof(struct buffer*));
right_value323 = (void*)0;
right_value324 = (void*)0;
memset(&cpp_option_226, 0, sizeof(struct buffer*));
right_value325 = (void*)0;
right_value326 = (void*)0;
memset(&files_227, 0, sizeof(struct list$1charph*));
right_value327 = (void*)0;
right_value328 = (void*)0;
memset(&object_files_228, 0, sizeof(struct list$1charph*));
memset(&output_object_file_229, 0, sizeof(_Bool));
memset(&output_cpp_file_230, 0, sizeof(_Bool));
memset(&output_source_file_flag_231, 0, sizeof(_Bool));
right_value329 = (void*)0;
memset(&output_file_name_232, 0, sizeof(char*));
memset(&verbose_233, 0, sizeof(_Bool));
memset(&prohibit_common_header_234, 0, sizeof(_Bool));
memset(&come_debug_235, 0, sizeof(_Bool));
memset(&come_malloc_236, 0, sizeof(_Bool));
memset(&come_str_237, 0, sizeof(_Bool));
memset(&i_238, 0, sizeof(int));
right_value330 = (void*)0;
right_value331 = (void*)0;
right_value332 = (void*)0;
right_value333 = (void*)0;
right_value334 = (void*)0;
right_value335 = (void*)0;
right_value336 = (void*)0;
right_value337 = (void*)0;
right_value338 = (void*)0;
right_value339 = (void*)0;
right_value340 = (void*)0;
right_value341 = (void*)0;
right_value342 = (void*)0;
right_value343 = (void*)0;
memset(&f_239, 0, sizeof(struct _IO_FILE*));
right_value344 = (void*)0;
memset(&tmp_file_240, 0, sizeof(char*));
right_value345 = (void*)0;
right_value346 = (void*)0;
right_value347 = (void*)0;
right_value348 = (void*)0;
memset(&info_241, 0, sizeof(struct sInfo));
right_value349 = (void*)0;
right_value350 = (void*)0;
right_value351 = (void*)0;
right_value352 = (void*)0;
right_value353 = (void*)0;
right_value359 = (void*)0;
right_value360 = (void*)0;
right_value366 = (void*)0;
right_value367 = (void*)0;
right_value373 = (void*)0;
right_value374 = (void*)0;
right_value380 = (void*)0;
right_value381 = (void*)0;
right_value387 = (void*)0;
right_value388 = (void*)0;
right_value389 = (void*)0;
right_value390 = (void*)0;
right_value391 = (void*)0;
right_value392 = (void*)0;
right_value393 = (void*)0;
right_value394 = (void*)0;
right_value395 = (void*)0;
right_value396 = (void*)0;
right_value397 = (void*)0;
memset(&lv_table_277, 0, sizeof(struct sVarTable*));
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
right_value408 = (void*)0;
right_value409 = (void*)0;
right_value410 = (void*)0;
right_value411 = (void*)0;
right_value412 = (void*)0;
right_value413 = (void*)0;
right_value414 = (void*)0;
memset(&clang_option_281, 0, sizeof(struct buffer*));
right_value415 = (void*)0;
right_value416 = (void*)0;
memset(&cpp_option_282, 0, sizeof(struct buffer*));
right_value417 = (void*)0;
right_value418 = (void*)0;
memset(&files_283, 0, sizeof(struct list$1charph*));
right_value419 = (void*)0;
right_value420 = (void*)0;
memset(&object_files_284, 0, sizeof(struct list$1charph*));
memset(&output_object_file_285, 0, sizeof(_Bool));
memset(&output_cpp_file_286, 0, sizeof(_Bool));
memset(&output_source_file_flag_287, 0, sizeof(_Bool));
memset(&output_file_name_288, 0, sizeof(char*));
memset(&verbose_289, 0, sizeof(_Bool));
memset(&come_debug_290, 0, sizeof(_Bool));
memset(&come_malloc_291, 0, sizeof(_Bool));
memset(&come_str_292, 0, sizeof(_Bool));
memset(&i_293, 0, sizeof(int));
right_value421 = (void*)0;
right_value422 = (void*)0;
right_value423 = (void*)0;
right_value424 = (void*)0;
right_value425 = (void*)0;
right_value426 = (void*)0;
right_value427 = (void*)0;
right_value428 = (void*)0;
right_value429 = (void*)0;
right_value430 = (void*)0;
right_value431 = (void*)0;
right_value432 = (void*)0;
right_value433 = (void*)0;
right_value434 = (void*)0;
right_value435 = (void*)0;
memset(&o2_saved_294, 0, sizeof(struct list$1charph*));
memset(&it_295, 0, sizeof(char*));
memset(&info_296, 0, sizeof(struct sInfo));
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
memset(&lv_table_297, 0, sizeof(struct sVarTable*));
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
right_value470 = (void*)0;
right_value471 = (void*)0;
memset(&info_298, 0, sizeof(struct sInfo));
right_value472 = (void*)0;
right_value473 = (void*)0;
right_value474 = (void*)0;
memset(&__current_stack2__, 0, sizeof(struct __current_stack2__));
    # 857 "02transpile.c"
    # 466 "02transpile.c"
    if(_if_conditional274=charp_operator_equals(argv[1],"header")&&argc>=3,    _if_conditional274) {
        # 467 "02transpile.c"
        gProgramName=argv[0];
        # 469 "02transpile.c"
        clang_option_225=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value322=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value321=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 469, "buffer"))))))));
        come_call_finalizer3(right_value321,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value322,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 470 "02transpile.c"
        cpp_option_226=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value324=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value323=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 470, "buffer"))))))));
        come_call_finalizer3(right_value323,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value324,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 471 "02transpile.c"
        files_227=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value326=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value325=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 471, "list$1charph"))))))));
        come_call_finalizer3(right_value325,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value326,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 472 "02transpile.c"
        object_files_228=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value328=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value327=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 472, "list$1charph"))))))));
        come_call_finalizer3(right_value327,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value328,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 473 "02transpile.c"
        output_object_file_229=(_Bool)0;
        # 474 "02transpile.c"
        output_cpp_file_230=(_Bool)0;
        # 475 "02transpile.c"
        output_source_file_flag_231=(_Bool)0;
        # 476 "02transpile.c"
        output_file_name_232=(char*)come_increment_ref_count(((char*)(right_value329=__builtin_string("common.h"))));
        right_value329 = come_decrement_ref_count2(right_value329, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 477 "02transpile.c"
        verbose_233=(_Bool)0;
        # 478 "02transpile.c"
        prohibit_common_header_234=(_Bool)0;
        # 479 "02transpile.c"
        come_debug_235=(_Bool)0;
        # 480 "02transpile.c"
        come_malloc_236=(_Bool)0;
        # 481 "02transpile.c"
        come_str_237=(_Bool)0;
        # 547 "02transpile.c"
        for(        i_238=2;        i_238<argc;        i_238++        ){
            # 545 "02transpile.c"
            # 483 "02transpile.c"
            if(_if_conditional275=charp_operator_equals(argv[i_238],"-o")&&i_238+1<argc,            _if_conditional275) {
                # 484 "02transpile.c"
                __dec_obj63=output_file_name_232;
                output_file_name_232=(char*)come_increment_ref_count(((char*)(right_value330=__builtin_string(argv[i_238+1]))));
                __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value330 = come_decrement_ref_count2(right_value330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 485 "02transpile.c"
                i_238++;
            }
            else {
                # 545 "02transpile.c"
                # 487 "02transpile.c"
                if(_if_conditional276=charp_operator_equals(argv[i_238],"-str"),                _if_conditional276) {
                    # 488 "02transpile.c"
                    come_str_237=(_Bool)1;
                }
                else {
                    # 545 "02transpile.c"
                    # 490 "02transpile.c"
                    if(_if_conditional277=charp_operator_equals(argv[i_238],"-leak"),                    _if_conditional277) {
                        # 491 "02transpile.c"
                        come_malloc_236=(_Bool)1;
                    }
                    else {
                        # 545 "02transpile.c"
                        # 493 "02transpile.c"
                        if(_if_conditional278=charp_operator_equals(argv[i_238],"-gc"),                        _if_conditional278) {
                            # 494 "02transpile.c"
                            gComeGC=(_Bool)1;
                        }
                        else {
                            # 545 "02transpile.c"
                            # 496 "02transpile.c"
                            if(_if_conditional279=charp_operator_equals(argv[i_238],"-g"),                            _if_conditional279) {
                                # 497 "02transpile.c"
                                buffer_append_str(clang_option_225,"-g ");
                            }
                            else {
                                # 545 "02transpile.c"
                                # 499 "02transpile.c"
                                if(_if_conditional280=charp_operator_equals(argv[i_238],"-cg"),                                _if_conditional280) {
                                    # 500 "02transpile.c"
                                    buffer_append_str(clang_option_225,"-g ");
                                    # 501 "02transpile.c"
                                    come_debug_235=(_Bool)1;
                                }
                                else {
                                    # 545 "02transpile.c"
                                    # 503 "02transpile.c"
                                    if(_if_conditional281=charp_operator_equals(argv[i_238],"-common-header"),                                    _if_conditional281) {
                                        # 504 "02transpile.c"
                                        gCommonHeader=(_Bool)1;
                                    }
                                    else {
                                        # 545 "02transpile.c"
                                        # 506 "02transpile.c"
                                        if(_if_conditional282=charp_operator_equals(argv[i_238],"-original-position"),                                        _if_conditional282) {
                                            # 507 "02transpile.c"
                                            gComeOriginalSourcePosition=(_Bool)0;
                                        }
                                        else {
                                            # 545 "02transpile.c"
                                            # 509 "02transpile.c"
                                            if(_if_conditional283=string_operator_equals(((char*)(right_value331=charp_operator_load_range_element(argv[i_238],0,2))),"-O"),                                            right_value331 = come_decrement_ref_count2(right_value331, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                                            _if_conditional283) {
                                                # 510 "02transpile.c"
                                                buffer_append_str(clang_option_225,((char*)(right_value333=xsprintf(" \%s ",((char*)(right_value332=charp_to_string(argv[i_238])))))));
                                                right_value332 = come_decrement_ref_count2(right_value332, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                right_value333 = come_decrement_ref_count2(right_value333, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                # 511 "02transpile.c"
                                                come_debug_235=(_Bool)0;
                                            }
                                            else {
                                                # 545 "02transpile.c"
                                                # 513 "02transpile.c"
                                                if(_if_conditional284=string_operator_equals(((char*)(right_value334=charp_operator_load_range_element(argv[i_238],0,2))),"-D"),                                                right_value334 = come_decrement_ref_count2(right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                                                _if_conditional284) {
                                                    # 514 "02transpile.c"
                                                    buffer_append_str(cpp_option_226,((char*)(right_value336=xsprintf(" \%s ",((char*)(right_value335=charp_to_string(argv[i_238])))))));
                                                    right_value335 = come_decrement_ref_count2(right_value335, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    right_value336 = come_decrement_ref_count2(right_value336, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    # 515 "02transpile.c"
                                                    buffer_append_str(clang_option_225,((char*)(right_value338=xsprintf(" \%s ",((char*)(right_value337=charp_to_string(argv[i_238])))))));
                                                    right_value337 = come_decrement_ref_count2(right_value337, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    right_value338 = come_decrement_ref_count2(right_value338, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                else {
                                                    # 545 "02transpile.c"
                                                    # 517 "02transpile.c"
                                                    if(_if_conditional285=charp_operator_equals(argv[i_238],"-v"),                                                    _if_conditional285) {
                                                        # 518 "02transpile.c"
                                                        buffer_append_str(clang_option_225,"-v ");
                                                        # 519 "02transpile.c"
                                                        verbose_233=(_Bool)1;
                                                    }
                                                    else {
                                                        # 545 "02transpile.c"
                                                        # 521 "02transpile.c"
                                                        if(_if_conditional286=strlen(argv[i_238])>=2&&memcmp(argv[i_238],"-I",strlen("-I"))==0,                                                        _if_conditional286) {
                                                            # 522 "02transpile.c"
                                                            buffer_append_str(cpp_option_226,((char*)(right_value340=charp_operator_add(" ",((char*)(right_value339=charp_operator_add(argv[i_238]," ")))))));
                                                            right_value339 = come_decrement_ref_count2(right_value339, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            right_value340 = come_decrement_ref_count2(right_value340, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        }
                                                        else {
                                                            # 545 "02transpile.c"
                                                            # 524 "02transpile.c"
                                                            if(_if_conditional287=charp_operator_equals(argv[i_238],"-gdwarf-4"),                                                            _if_conditional287) {
                                                                # 525 "02transpile.c"
                                                                buffer_append_str(clang_option_225,"-gdwarf-4 ");
                                                            }
                                                            else {
                                                                # 545 "02transpile.c"
                                                                # 527 "02transpile.c"
                                                                if(_if_conditional288=charp_operator_equals(argv[i_238],"-s")||charp_operator_equals(argv[i_238],"-S"),                                                                _if_conditional288) {
                                                                    # 528 "02transpile.c"
                                                                    output_source_file_flag_231=(_Bool)1;
                                                                }
                                                                else {
                                                                    # 545 "02transpile.c"
                                                                    # 530 "02transpile.c"
                                                                    if(_if_conditional289=charp_operator_equals(argv[i_238],"-c"),                                                                    _if_conditional289) {
                                                                        # 531 "02transpile.c"
                                                                        output_object_file_229=(_Bool)1;
                                                                    }
                                                                    else {
                                                                        # 545 "02transpile.c"
                                                                        # 533 "02transpile.c"
                                                                        if(_if_conditional290=charp_operator_equals(argv[i_238],"-E"),                                                                        _if_conditional290) {
                                                                            # 534 "02transpile.c"
                                                                            output_cpp_file_230=(_Bool)1;
                                                                        }
                                                                        else {
                                                                            # 545 "02transpile.c"
                                                                            # 536 "02transpile.c"
                                                                            if(_if_conditional291=argv[i_238][0]==45,                                                                            _if_conditional291) {
                                                                                # 537 "02transpile.c"
                                                                                buffer_append_str(clang_option_225,((char*)(right_value341=charp_operator_add(argv[i_238]," "))));
                                                                                right_value341 = come_decrement_ref_count2(right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            }
                                                                            else {
                                                                                # 545 "02transpile.c"
                                                                                # 539 "02transpile.c"
                                                                                if(_if_conditional292=strlen(argv[i_238])>2&&memcmp(argv[i_238]+strlen(argv[i_238])-2,".o",2)==0,                                                                                _if_conditional292) {
                                                                                    # 540 "02transpile.c"
                                                                                    list$1charph_push_back(object_files_228,(char*)come_increment_ref_count(((char*)(right_value342=__builtin_string(argv[i_238])))));
                                                                                    right_value342 = come_decrement_ref_count2(right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                else {
                                                                                    # 543 "02transpile.c"
                                                                                    list$1charph_push_back(files_227,(char*)come_increment_ref_count(((char*)(right_value343=__builtin_string(argv[i_238])))));
                                                                                    right_value343 = come_decrement_ref_count2(right_value343, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
        # 547 "02transpile.c"
        gComeDebug=come_debug_235;
        # 548 "02transpile.c"
        gComeMalloc=come_malloc_236;
        # 559 "02transpile.c"
        # 550 "02transpile.c"
        if(come_str_237) {
            # 557 "02transpile.c"
            # 551 "02transpile.c"
            if(gComeGC) {
                # 552 "02transpile.c"
                buffer_append_str(clang_option_225," -lneo-c-str-gc -lpcre ");
            }
            else {
                # 555 "02transpile.c"
                buffer_append_str(clang_option_225," -lneo-c-str -lpcre ");
            }
        }
        # 559 "02transpile.c"
        if(_and_conditional1=f_239=fopen(output_file_name_232,"w"),        _and_conditional1 == 0) {
            # 559 "02transpile.c"
            (come_push_stackframe("02transpile.c", 559, 7),__exception_result_var_b8=die("fopen"), come_pop_stackframe(), __exception_result_var_b8);
        }
        # 560 "02transpile.c"
        fclose(f_239);
        # 562 "02transpile.c"
        if(_or_conditional8=truncate(output_file_name_232,0),        _or_conditional8 != 0) {
            # 562 "02transpile.c"
            (come_push_stackframe("02transpile.c", 562, 8),__exception_result_var_b9=die("truncate"), come_pop_stackframe(), __exception_result_var_b9);
        }
        # 564 "02transpile.c"
        tmp_file_240=(char*)come_increment_ref_count(((char*)(right_value344=__builtin_string("tmp-common-header"))));
        right_value344 = come_decrement_ref_count2(right_value344, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 566 "02transpile.c"
        system(((char*)(right_value348=xsprintf("cat \%s > \%s",((char*)(right_value346=string_to_string(((char*)(right_value345=list$1charph_join(files_227," ")))))),((char*)(right_value347=string_to_string(tmp_file_240)))))));
        right_value345 = come_decrement_ref_count2(right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value346 = come_decrement_ref_count2(right_value346, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value347 = come_decrement_ref_count2(right_value347, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value348 = come_decrement_ref_count2(right_value348, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 568 "02transpile.c"
        # 570 "02transpile.c"
        memset(&info_241,0,sizeof(struct sInfo));
        # 572 "02transpile.c"
        __dec_obj64=info_241.base_sname;
        info_241.base_sname=(char*)come_increment_ref_count(((char*)(right_value349=__builtin_string(tmp_file_240))));
        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value349 = come_decrement_ref_count2(right_value349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 573 "02transpile.c"
        __dec_obj65=info_241.sname;
        info_241.sname=(char*)come_increment_ref_count(((char*)(right_value350=__builtin_string(tmp_file_240))));
        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value350 = come_decrement_ref_count2(right_value350, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 574 "02transpile.c"
        info_241.sline=1;
        # 575 "02transpile.c"
        info_241.err_num=0;
        # 576 "02transpile.c"
        __dec_obj66=info_241.clang_option;
        info_241.clang_option=(char*)come_increment_ref_count(((char*)(right_value351=buffer_to_string(clang_option_225))));
        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value351 = come_decrement_ref_count2(right_value351, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 577 "02transpile.c"
        __dec_obj67=info_241.cpp_option;
        info_241.cpp_option=(char*)come_increment_ref_count(((char*)(right_value352=buffer_to_string(cpp_option_226))));
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value352 = come_decrement_ref_count2(right_value352, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 578 "02transpile.c"
        info_241.no_output_err=(_Bool)0;
        # 579 "02transpile.c"
        __dec_obj69=info_241.funcs;
        info_241.funcs=(struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value359=map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value353=(struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 579, "map$2charphsFunph"))))))));
        come_call_finalizer3(__dec_obj69,map$2charphsFunph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value353,map$2charphsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value359,map$2charphsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 580 "02transpile.c"
        __dec_obj71=info_241.generics_funcs;
        info_241.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value366=map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value360=(struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 580, "map$2charphsGenericsFunph"))))))));
        come_call_finalizer3(__dec_obj71,map$2charphsGenericsFunph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value360,map$2charphsGenericsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value366,map$2charphsGenericsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 581 "02transpile.c"
        __dec_obj73=info_241.classes;
        info_241.classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value373=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value367=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 581, "map$2charphsClassph"))))))));
        come_call_finalizer3(__dec_obj73,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value367,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value373,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 582 "02transpile.c"
        __dec_obj75=info_241.modules;
        info_241.modules=(struct map$2charphsClassModuleph*)come_increment_ref_count(((struct map$2charphsClassModuleph*)(right_value380=map$2charphsClassModuleph_initialize((struct map$2charphsClassModuleph*)come_increment_ref_count(((struct map$2charphsClassModuleph*)(right_value374=(struct map$2charphsClassModuleph*)come_calloc(1, sizeof(struct map$2charphsClassModuleph)*(1), "02transpile.c", 582, "map$2charphsClassModuleph"))))))));
        come_call_finalizer3(__dec_obj75,map$2charphsClassModuleph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value374,map$2charphsClassModulephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value380,map$2charphsClassModulephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 583 "02transpile.c"
        __dec_obj77=info_241.types;
        info_241.types=(struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value387=map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value381=(struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 583, "map$2charphsTypeph"))))))));
        come_call_finalizer3(__dec_obj77,map$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value381,map$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value387,map$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 584 "02transpile.c"
        __dec_obj78=info_241.module;
        info_241.module=(struct sModule*)come_increment_ref_count(((struct sModule*)(right_value389=sModule_initialize((struct sModule*)come_increment_ref_count(((struct sModule*)(right_value388=(struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 584, "sModule"))))))));
        come_call_finalizer3(__dec_obj78,sModule_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value388,sModule_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value389,sModule_finalize, 0, 1, 0, 0, __result_obj__);
        # 585 "02transpile.c"
        __dec_obj79=info_241.right_value_objects;
        info_241.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value391=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value390=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 585, "list$1sRightValueObjectph"))))))));
        come_call_finalizer3(__dec_obj79,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value390,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value391,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 586 "02transpile.c"
        __dec_obj80=info_241.stack;
        info_241.stack=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value393=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value392=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 586, "list$1CVALUEph"))))))));
        come_call_finalizer3(__dec_obj80,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value392,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value393,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 587 "02transpile.c"
        __dec_obj81=info_241.gv_table;
        info_241.gv_table=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value395=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value394=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 587, "sVarTable")))),(_Bool)1,((void*)0)))));
        come_call_finalizer3(__dec_obj81,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value394,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value395,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        # 588 "02transpile.c"
        lv_table_277=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value397=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value396=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 588, "sVarTable")))),(_Bool)0,((void*)0)))));
        come_call_finalizer3(right_value396,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value397,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        # 589 "02transpile.c"
        info_241.lv_table=lv_table_277;
        # 590 "02transpile.c"
        __dec_obj82=info_241.generics_type_names;
        info_241.generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value399=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value398=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 590, "list$1charph"))))))));
        come_call_finalizer3(__dec_obj82,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value398,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value399,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 591 "02transpile.c"
        __dec_obj83=info_241.method_generics_type_names;
        info_241.method_generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value401=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value400=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 591, "list$1charph"))))))));
        come_call_finalizer3(__dec_obj83,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value400,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value401,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 592 "02transpile.c"
        __dec_obj84=info_241.generics_classes;
        info_241.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value403=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value402=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 592, "map$2charphsClassph"))))))));
        come_call_finalizer3(__dec_obj84,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value402,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value403,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 593 "02transpile.c"
        info_241.verbose=verbose_233;
        # 594 "02transpile.c"
        info_241.output_header_file=(_Bool)1;
        # 596 "02transpile.c"
        # 597 "02transpile.c"
        info_241.num_source_files=n_278++;
        # 598 "02transpile.c"
        info_241.max_source_files=list$1charph_length(files_227);
        # 600 "02transpile.c"
        __dec_obj85=info_241.output_file_name;
        info_241.output_file_name=(char*)come_increment_ref_count(((char*)(right_value404=__builtin_string(output_file_name_232))));
        __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value404 = come_decrement_ref_count2(right_value404, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 602 "02transpile.c"
        init_classes(&info_241);
        # 604 "02transpile.c"
        clear_tmp_file(&info_241);
        # 611 "02transpile.c"
        # 606 "02transpile.c"
        if(_if_conditional377=!cpp(&info_241),        _if_conditional377) {
            # 607 "02transpile.c"
            printf("%s %d: transpile failed\n",info_241.sname,info_241.sline);
            # 608 "02transpile.c"
            exit(2);
        }
        # 611 "02transpile.c"
        __dec_obj86=info_241.original_source;
        info_241.original_source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value407=string_to_buffer(((char*)(right_value406=string_read(((char*)(right_value405=xsprintf("%s",tmp_file_240))))))))));
        come_call_finalizer3(__dec_obj86,buffer_finalize, 0, 0, 0, 0, (void*)0);
        right_value405 = come_decrement_ref_count2(right_value405, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value406 = come_decrement_ref_count2(right_value406, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value407,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 612 "02transpile.c"
        __dec_obj87=info_241.source;
        info_241.source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value410=string_to_buffer(((char*)(right_value409=string_read(((char*)(right_value408=xsprintf("%s.i",tmp_file_240))))))))));
        come_call_finalizer3(__dec_obj87,buffer_finalize, 0, 0, 0, 0, (void*)0);
        right_value408 = come_decrement_ref_count2(right_value408, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value409 = come_decrement_ref_count2(right_value409, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value410,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 613 "02transpile.c"
        info_241.p=info_241.source->buf;
        # 614 "02transpile.c"
        info_241.head=info_241.source->buf;
        # 625 "02transpile.c"
        # 616 "02transpile.c"
        if(_if_conditional378=!output_cpp_file_230,        _if_conditional378) {
            # 617 "02transpile.c"
            transpile_v5(&info_241);
            # 623 "02transpile.c"
            # 619 "02transpile.c"
            if(_if_conditional379=!output_header_file(&info_241),            _if_conditional379) {
                # 620 "02transpile.c"
                printf("%s %d: output source file faield\n",info_241.sname,info_241.sline);
                # 621 "02transpile.c"
                exit(2);
            }
        }
        # 625 "02transpile.c"
        system(((char*)(right_value412=xsprintf("rm -rf \%s*",((char*)(right_value411=string_to_string(tmp_file_240)))))));
        right_value411 = come_decrement_ref_count2(right_value411, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value412 = come_decrement_ref_count2(right_value412, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(clang_option_225,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(cpp_option_226,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(files_227,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(object_files_228,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        output_file_name_232 = come_decrement_ref_count2(output_file_name_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        tmp_file_240 = come_decrement_ref_count2(tmp_file_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3((&info_241),sInfo_finalize, 1, 0, 0, 0, (void*)0);
        come_call_finalizer3(lv_table_277,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 857 "02transpile.c"
        # 627 "02transpile.c"
        if(_if_conditional412=charp_operator_equals(argv[1],"new")&&argc==3,        _if_conditional412) {
            # 631 "02transpile.c"
            # 628 "02transpile.c"
            if(_if_conditional413=!new_project(argc,argv),            _if_conditional413) {
                # 629 "02transpile.c"
                __result160__ = (_Bool)0;
                return __result160__;
            }
        }
        else {
            # 857 "02transpile.c"
            # 632 "02transpile.c"
            if(_if_conditional414=charp_operator_equals(argv[1],"run")&&argc==2,            _if_conditional414) {
                # 636 "02transpile.c"
                # 633 "02transpile.c"
                if(_if_conditional415=!run_project(argc,argv),                _if_conditional415) {
                    # 634 "02transpile.c"
                    __result161__ = (_Bool)0;
                    return __result161__;
                }
            }
            else {
                # 857 "02transpile.c"
                # 637 "02transpile.c"
                if(_if_conditional416=charp_operator_equals(argv[1],"header")&&argc==2,                _if_conditional416) {
                    # 641 "02transpile.c"
                    # 638 "02transpile.c"
                    if(_if_conditional417=!make_header_project(argc,argv),                    _if_conditional417) {
                        # 639 "02transpile.c"
                        __result162__ = (_Bool)0;
                        return __result162__;
                    }
                }
                else {
                    # 857 "02transpile.c"
                    # 642 "02transpile.c"
                    if(_if_conditional418=charp_operator_equals(argv[1],"compile")&&argc==2,                    _if_conditional418) {
                        # 646 "02transpile.c"
                        # 643 "02transpile.c"
                        if(_if_conditional419=!compile_project(argc,argv),                        _if_conditional419) {
                            # 644 "02transpile.c"
                            __result163__ = (_Bool)0;
                            return __result163__;
                        }
                    }
                    else {
                        # 857 "02transpile.c"
                        # 647 "02transpile.c"
                        if(_if_conditional420=charp_operator_equals(argv[1],"debug")&&argc==2,                        _if_conditional420) {
                            # 651 "02transpile.c"
                            # 648 "02transpile.c"
                            if(_if_conditional421=!debug_run_project(argc,argv),                            _if_conditional421) {
                                # 649 "02transpile.c"
                                __result164__ = (_Bool)0;
                                return __result164__;
                            }
                        }
                        else {
                            # 857 "02transpile.c"
                            # 652 "02transpile.c"
                            if(_if_conditional422=charp_operator_equals(argv[1],"clean")&&argc==2,                            _if_conditional422) {
                                # 656 "02transpile.c"
                                # 653 "02transpile.c"
                                if(_if_conditional423=!clean_project(argc,argv),                                _if_conditional423) {
                                    # 654 "02transpile.c"
                                    __result165__ = (_Bool)0;
                                    return __result165__;
                                }
                            }
                            else {
                                # 857 "02transpile.c"
                                # 657 "02transpile.c"
                                if(_if_conditional424=charp_operator_equals(argv[1],"install")&&argc>=2,                                _if_conditional424) {
                                    # 668 "02transpile.c"
                                    # 658 "02transpile.c"
                                    if(_if_conditional425=argc==2,                                    _if_conditional425) {
                                        # 662 "02transpile.c"
                                        # 659 "02transpile.c"
                                        if(_if_conditional426=!install_project(argc,argv,"/usr/local"),                                        _if_conditional426) {
                                            # 660 "02transpile.c"
                                            __result166__ = (_Bool)0;
                                            return __result166__;
                                        }
                                    }
                                    else {
                                        # 668 "02transpile.c"
                                        # 663 "02transpile.c"
                                        if(_if_conditional427=argc>=3,                                        _if_conditional427) {
                                            # 667 "02transpile.c"
                                            # 664 "02transpile.c"
                                            if(_if_conditional428=!install_project(argc,argv,argv[2]),                                            _if_conditional428) {
                                                # 665 "02transpile.c"
                                                __result167__ = (_Bool)0;
                                                return __result167__;
                                            }
                                        }
                                    }
                                }
                                else {
                                    # 670 "02transpile.c"
                                    gProgramName=argv[0];
                                    # 672 "02transpile.c"
                                    clang_option_281=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value414=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value413=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 672, "buffer"))))))));
                                    come_call_finalizer3(right_value413,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value414,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 673 "02transpile.c"
                                    cpp_option_282=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value416=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value415=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 673, "buffer"))))))));
                                    come_call_finalizer3(right_value415,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value416,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 674 "02transpile.c"
                                    files_283=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value418=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value417=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 674, "list$1charph"))))))));
                                    come_call_finalizer3(right_value417,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value418,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 675 "02transpile.c"
                                    object_files_284=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value420=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value419=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 675, "list$1charph"))))))));
                                    come_call_finalizer3(right_value419,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value420,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 676 "02transpile.c"
                                    output_object_file_285=(_Bool)0;
                                    # 677 "02transpile.c"
                                    output_cpp_file_286=(_Bool)0;
                                    # 678 "02transpile.c"
                                    output_source_file_flag_287=(_Bool)0;
                                    # 679 "02transpile.c"
                                    output_file_name_288=((void*)0);
                                    # 680 "02transpile.c"
                                    verbose_289=(_Bool)0;
                                    # 681 "02transpile.c"
                                    come_debug_290=(_Bool)0;
                                    # 682 "02transpile.c"
                                    come_malloc_291=(_Bool)0;
                                    # 683 "02transpile.c"
                                    come_str_292=(_Bool)0;
                                    # 749 "02transpile.c"
                                    for(                                    i_293=1;                                    i_293<argc;                                    i_293++                                    ){
                                        # 747 "02transpile.c"
                                        # 685 "02transpile.c"
                                        if(_if_conditional429=charp_operator_equals(argv[i_293],"-o")&&i_293+1<argc,                                        _if_conditional429) {
                                            # 686 "02transpile.c"
                                            __dec_obj88=output_file_name_288;
                                            output_file_name_288=(char*)come_increment_ref_count(((char*)(right_value421=__builtin_string(argv[i_293+1]))));
                                            __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value421 = come_decrement_ref_count2(right_value421, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            # 687 "02transpile.c"
                                            i_293++;
                                        }
                                        else {
                                            # 747 "02transpile.c"
                                            # 689 "02transpile.c"
                                            if(_if_conditional430=charp_operator_equals(argv[i_293],"-str"),                                            _if_conditional430) {
                                                # 690 "02transpile.c"
                                                come_str_292=(_Bool)1;
                                            }
                                            else {
                                                # 747 "02transpile.c"
                                                # 692 "02transpile.c"
                                                if(_if_conditional431=charp_operator_equals(argv[i_293],"-leak"),                                                _if_conditional431) {
                                                    # 693 "02transpile.c"
                                                    come_malloc_291=(_Bool)1;
                                                }
                                                else {
                                                    # 747 "02transpile.c"
                                                    # 695 "02transpile.c"
                                                    if(_if_conditional432=charp_operator_equals(argv[i_293],"-gc"),                                                    _if_conditional432) {
                                                        # 696 "02transpile.c"
                                                        gComeGC=(_Bool)1;
                                                    }
                                                    else {
                                                        # 747 "02transpile.c"
                                                        # 698 "02transpile.c"
                                                        if(_if_conditional433=charp_operator_equals(argv[i_293],"-cg"),                                                        _if_conditional433) {
                                                            # 699 "02transpile.c"
                                                            come_debug_290=(_Bool)1;
                                                            # 700 "02transpile.c"
                                                            buffer_append_str(clang_option_281,"-g ");
                                                        }
                                                        else {
                                                            # 747 "02transpile.c"
                                                            # 702 "02transpile.c"
                                                            if(_if_conditional434=charp_operator_equals(argv[i_293],"-common-header"),                                                            _if_conditional434) {
                                                                # 703 "02transpile.c"
                                                                gCommonHeader=(_Bool)1;
                                                            }
                                                            else {
                                                                # 747 "02transpile.c"
                                                                # 705 "02transpile.c"
                                                                if(_if_conditional435=charp_operator_equals(argv[i_293],"-original-position"),                                                                _if_conditional435) {
                                                                    # 706 "02transpile.c"
                                                                    gComeOriginalSourcePosition=(_Bool)0;
                                                                }
                                                                else {
                                                                    # 747 "02transpile.c"
                                                                    # 708 "02transpile.c"
                                                                    if(_if_conditional436=string_operator_equals(((char*)(right_value422=charp_operator_load_range_element(argv[i_293],0,2))),"-O"),                                                                    right_value422 = come_decrement_ref_count2(right_value422, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                                                                    _if_conditional436) {
                                                                        # 709 "02transpile.c"
                                                                        buffer_append_str(clang_option_281,((char*)(right_value424=xsprintf(" \%s ",((char*)(right_value423=charp_to_string(argv[i_293])))))));
                                                                        right_value423 = come_decrement_ref_count2(right_value423, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        right_value424 = come_decrement_ref_count2(right_value424, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        # 710 "02transpile.c"
                                                                        come_debug_290=(_Bool)0;
                                                                    }
                                                                    else {
                                                                        # 747 "02transpile.c"
                                                                        # 712 "02transpile.c"
                                                                        if(_if_conditional437=string_operator_equals(((char*)(right_value425=charp_operator_load_range_element(argv[i_293],0,2))),"-D"),                                                                        right_value425 = come_decrement_ref_count2(right_value425, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                                                                        _if_conditional437) {
                                                                            # 713 "02transpile.c"
                                                                            buffer_append_str(cpp_option_282,((char*)(right_value427=xsprintf(" \%s ",((char*)(right_value426=charp_to_string(argv[i_293])))))));
                                                                            right_value426 = come_decrement_ref_count2(right_value426, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            right_value427 = come_decrement_ref_count2(right_value427, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            # 714 "02transpile.c"
                                                                            buffer_append_str(clang_option_281,((char*)(right_value429=xsprintf(" \%s ",((char*)(right_value428=charp_to_string(argv[i_293])))))));
                                                                            right_value428 = come_decrement_ref_count2(right_value428, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            right_value429 = come_decrement_ref_count2(right_value429, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        }
                                                                        else {
                                                                            # 747 "02transpile.c"
                                                                            # 716 "02transpile.c"
                                                                            if(_if_conditional438=charp_operator_equals(argv[i_293],"-g"),                                                                            _if_conditional438) {
                                                                                # 717 "02transpile.c"
                                                                                buffer_append_str(clang_option_281,"-g ");
                                                                            }
                                                                            else {
                                                                                # 747 "02transpile.c"
                                                                                # 719 "02transpile.c"
                                                                                if(_if_conditional439=charp_operator_equals(argv[i_293],"-v"),                                                                                _if_conditional439) {
                                                                                    # 720 "02transpile.c"
                                                                                    buffer_append_str(clang_option_281,"-v ");
                                                                                    # 721 "02transpile.c"
                                                                                    verbose_289=(_Bool)1;
                                                                                }
                                                                                else {
                                                                                    # 747 "02transpile.c"
                                                                                    # 723 "02transpile.c"
                                                                                    if(_if_conditional440=strlen(argv[i_293])>=2&&memcmp(argv[i_293],"-I",strlen("-I"))==0,                                                                                    _if_conditional440) {
                                                                                        # 724 "02transpile.c"
                                                                                        buffer_append_str(cpp_option_282,((char*)(right_value431=charp_operator_add(" ",((char*)(right_value430=charp_operator_add(argv[i_293]," ")))))));
                                                                                        right_value430 = come_decrement_ref_count2(right_value430, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                        right_value431 = come_decrement_ref_count2(right_value431, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    }
                                                                                    else {
                                                                                        # 747 "02transpile.c"
                                                                                        # 726 "02transpile.c"
                                                                                        if(_if_conditional441=charp_operator_equals(argv[i_293],"-gdwarf-4"),                                                                                        _if_conditional441) {
                                                                                            # 727 "02transpile.c"
                                                                                            buffer_append_str(clang_option_281,"-gdwarf-4 ");
                                                                                        }
                                                                                        else {
                                                                                            # 747 "02transpile.c"
                                                                                            # 729 "02transpile.c"
                                                                                            if(_if_conditional442=charp_operator_equals(argv[i_293],"-s")||charp_operator_equals(argv[i_293],"-S"),                                                                                            _if_conditional442) {
                                                                                                # 730 "02transpile.c"
                                                                                                output_source_file_flag_287=(_Bool)1;
                                                                                            }
                                                                                            else {
                                                                                                # 747 "02transpile.c"
                                                                                                # 732 "02transpile.c"
                                                                                                if(_if_conditional443=charp_operator_equals(argv[i_293],"-c"),                                                                                                _if_conditional443) {
                                                                                                    # 733 "02transpile.c"
                                                                                                    output_object_file_285=(_Bool)1;
                                                                                                }
                                                                                                else {
                                                                                                    # 747 "02transpile.c"
                                                                                                    # 735 "02transpile.c"
                                                                                                    if(_if_conditional444=charp_operator_equals(argv[i_293],"-E"),                                                                                                    _if_conditional444) {
                                                                                                        # 736 "02transpile.c"
                                                                                                        output_cpp_file_286=(_Bool)1;
                                                                                                    }
                                                                                                    else {
                                                                                                        # 747 "02transpile.c"
                                                                                                        # 738 "02transpile.c"
                                                                                                        if(_if_conditional445=argv[i_293][0]==45,                                                                                                        _if_conditional445) {
                                                                                                            # 739 "02transpile.c"
                                                                                                            buffer_append_str(clang_option_281,((char*)(right_value432=charp_operator_add(argv[i_293]," "))));
                                                                                                            right_value432 = come_decrement_ref_count2(right_value432, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                        }
                                                                                                        else {
                                                                                                            # 747 "02transpile.c"
                                                                                                            # 741 "02transpile.c"
                                                                                                            if(_if_conditional446=strlen(argv[i_293])>2&&memcmp(argv[i_293]+strlen(argv[i_293])-2,".o",2)==0,                                                                                                            _if_conditional446) {
                                                                                                                # 742 "02transpile.c"
                                                                                                                list$1charph_push_back(object_files_284,(char*)come_increment_ref_count(((char*)(right_value433=__builtin_string(argv[i_293])))));
                                                                                                                right_value433 = come_decrement_ref_count2(right_value433, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                            }
                                                                                                            else {
                                                                                                                # 745 "02transpile.c"
                                                                                                                list$1charph_push_back(files_283,(char*)come_increment_ref_count(((char*)(right_value435=string_clone(((char*)(right_value434=__builtin_string(argv[i_293]))))))));
                                                                                                                right_value434 = come_decrement_ref_count2(right_value434, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                right_value435 = come_decrement_ref_count2(right_value435, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
                                    # 749 "02transpile.c"
                                    gComeDebug=come_debug_290;
                                    # 750 "02transpile.c"
                                    gComeMalloc=come_malloc_291;
                                    # 761 "02transpile.c"
                                    # 752 "02transpile.c"
                                    if(come_str_292) {
                                        # 759 "02transpile.c"
                                        # 753 "02transpile.c"
                                        if(gComeGC) {
                                            # 754 "02transpile.c"
                                            buffer_append_str(clang_option_281," -lneo-c-str-gc -lpcre ");
                                        }
                                        else {
                                            # 757 "02transpile.c"
                                            buffer_append_str(clang_option_281," -lneo-c-str -lpcre ");
                                        }
                                    }
                                    # 833 "02transpile.c"
                                    for(                                    o2_saved_294=(struct list$1charph*)come_increment_ref_count((files_283)),it_295=list$1charph_begin((o2_saved_294));                                    !list$1charph_end((o2_saved_294));                                    it_295=list$1charph_next((o2_saved_294))                                    ){
                                        # 762 "02transpile.c"
                                        # 764 "02transpile.c"
                                        memset(&info_296,0,sizeof(struct sInfo));
                                        # 766 "02transpile.c"
                                        __dec_obj89=info_296.sname;
                                        info_296.sname=(char*)come_increment_ref_count(((char*)(right_value436=__builtin_string(it_295))));
                                        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value436 = come_decrement_ref_count2(right_value436, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 767 "02transpile.c"
                                        info_296.sline=1;
                                        # 768 "02transpile.c"
                                        info_296.err_num=0;
                                        # 769 "02transpile.c"
                                        __dec_obj90=info_296.clang_option;
                                        info_296.clang_option=(char*)come_increment_ref_count(((char*)(right_value437=buffer_to_string(clang_option_281))));
                                        __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value437 = come_decrement_ref_count2(right_value437, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 770 "02transpile.c"
                                        __dec_obj91=info_296.cpp_option;
                                        info_296.cpp_option=(char*)come_increment_ref_count(((char*)(right_value438=buffer_to_string(cpp_option_282))));
                                        __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value438 = come_decrement_ref_count2(right_value438, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 771 "02transpile.c"
                                        info_296.no_output_err=(_Bool)0;
                                        # 772 "02transpile.c"
                                        __dec_obj92=info_296.funcs;
                                        info_296.funcs=(struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value440=map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value439=(struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 772, "map$2charphsFunph"))))))));
                                        come_call_finalizer3(__dec_obj92,map$2charphsFunph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value439,map$2charphsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value440,map$2charphsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 773 "02transpile.c"
                                        __dec_obj93=info_296.generics_funcs;
                                        info_296.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value442=map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value441=(struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 773, "map$2charphsGenericsFunph"))))))));
                                        come_call_finalizer3(__dec_obj93,map$2charphsGenericsFunph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value441,map$2charphsGenericsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value442,map$2charphsGenericsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 774 "02transpile.c"
                                        __dec_obj94=info_296.classes;
                                        info_296.classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value444=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value443=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 774, "map$2charphsClassph"))))))));
                                        come_call_finalizer3(__dec_obj94,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value443,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value444,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 775 "02transpile.c"
                                        __dec_obj95=info_296.modules;
                                        info_296.modules=(struct map$2charphsClassModuleph*)come_increment_ref_count(((struct map$2charphsClassModuleph*)(right_value446=map$2charphsClassModuleph_initialize((struct map$2charphsClassModuleph*)come_increment_ref_count(((struct map$2charphsClassModuleph*)(right_value445=(struct map$2charphsClassModuleph*)come_calloc(1, sizeof(struct map$2charphsClassModuleph)*(1), "02transpile.c", 775, "map$2charphsClassModuleph"))))))));
                                        come_call_finalizer3(__dec_obj95,map$2charphsClassModuleph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value445,map$2charphsClassModulephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value446,map$2charphsClassModulephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 776 "02transpile.c"
                                        __dec_obj96=info_296.types;
                                        info_296.types=(struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value448=map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value447=(struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 776, "map$2charphsTypeph"))))))));
                                        come_call_finalizer3(__dec_obj96,map$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value447,map$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value448,map$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 777 "02transpile.c"
                                        __dec_obj97=info_296.module;
                                        info_296.module=(struct sModule*)come_increment_ref_count(((struct sModule*)(right_value450=sModule_initialize((struct sModule*)come_increment_ref_count(((struct sModule*)(right_value449=(struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 777, "sModule"))))))));
                                        come_call_finalizer3(__dec_obj97,sModule_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value449,sModule_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value450,sModule_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 778 "02transpile.c"
                                        __dec_obj98=info_296.right_value_objects;
                                        info_296.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value452=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value451=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 778, "list$1sRightValueObjectph"))))))));
                                        come_call_finalizer3(__dec_obj98,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value451,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value452,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 779 "02transpile.c"
                                        __dec_obj99=info_296.stack;
                                        info_296.stack=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value454=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value453=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 779, "list$1CVALUEph"))))))));
                                        come_call_finalizer3(__dec_obj99,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value453,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value454,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 780 "02transpile.c"
                                        __dec_obj100=info_296.gv_table;
                                        info_296.gv_table=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value456=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value455=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 780, "sVarTable")))),(_Bool)1,((void*)0)))));
                                        come_call_finalizer3(__dec_obj100,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value455,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value456,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 781 "02transpile.c"
                                        lv_table_297=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value458=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value457=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 781, "sVarTable")))),(_Bool)0,((void*)0)))));
                                        come_call_finalizer3(right_value457,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value458,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 782 "02transpile.c"
                                        info_296.lv_table=lv_table_297;
                                        # 783 "02transpile.c"
                                        __dec_obj101=info_296.generics_type_names;
                                        info_296.generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value460=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value459=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 783, "list$1charph"))))))));
                                        come_call_finalizer3(__dec_obj101,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value459,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value460,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 784 "02transpile.c"
                                        __dec_obj102=info_296.method_generics_type_names;
                                        info_296.method_generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value462=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value461=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 784, "list$1charph"))))))));
                                        come_call_finalizer3(__dec_obj102,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value461,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value462,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 785 "02transpile.c"
                                        __dec_obj103=info_296.generics_classes;
                                        info_296.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value464=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value463=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 785, "map$2charphsClassph"))))))));
                                        come_call_finalizer3(__dec_obj103,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value463,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value464,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 786 "02transpile.c"
                                        info_296.verbose=verbose_289;
                                        # 788 "02transpile.c"
                                        init_classes(&info_296);
                                        # 790 "02transpile.c"
                                        clear_tmp_file(&info_296);
                                        # 797 "02transpile.c"
                                        # 792 "02transpile.c"
                                        if(_if_conditional449=!cpp(&info_296),                                        _if_conditional449) {
                                            # 793 "02transpile.c"
                                            printf("%s %d: transpile failed\n",info_296.sname,info_296.sline);
                                            # 794 "02transpile.c"
                                            exit(2);
                                        }
                                        # 797 "02transpile.c"
                                        __dec_obj104=info_296.original_source;
                                        info_296.original_source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value467=string_to_buffer(((char*)(right_value466=string_read(((char*)(right_value465=xsprintf("%s",it_295))))))))));
                                        come_call_finalizer3(__dec_obj104,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                        right_value465 = come_decrement_ref_count2(right_value465, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value466 = come_decrement_ref_count2(right_value466, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value467,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 798 "02transpile.c"
                                        __dec_obj105=info_296.source;
                                        info_296.source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value470=string_to_buffer(((char*)(right_value469=string_read(((char*)(right_value468=xsprintf("%s.i",it_295))))))))));
                                        come_call_finalizer3(__dec_obj105,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                        right_value468 = come_decrement_ref_count2(right_value468, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value469 = come_decrement_ref_count2(right_value469, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value470,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 799 "02transpile.c"
                                        info_296.p=info_296.source->buf;
                                        # 800 "02transpile.c"
                                        info_296.head=info_296.source->buf;
                                        # 809 "02transpile.c"
                                        # 802 "02transpile.c"
                                        if(output_file_name_288) {
                                            # 803 "02transpile.c"
                                            __dec_obj106=info_296.output_file_name;
                                            info_296.output_file_name=(char*)come_increment_ref_count(((char*)(right_value471=__builtin_string(output_file_name_288))));
                                            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value471 = come_decrement_ref_count2(right_value471, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        else {
                                            # 806 "02transpile.c"
                                            __dec_obj107=info_296.output_file_name;
                                            info_296.output_file_name=((void*)0);
                                            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        }
                                        # 831 "02transpile.c"
                                        # 809 "02transpile.c"
                                        if(_if_conditional451=!output_cpp_file_286,                                        _if_conditional451) {
                                            # 810 "02transpile.c"
                                            transpile_v5(&info_296);
                                            # 817 "02transpile.c"
                                            # 812 "02transpile.c"
                                            if(_if_conditional452=!output_source_file_v3(&info_296),                                            _if_conditional452) {
                                                # 813 "02transpile.c"
                                                printf("%s %d: output source file faield\n",info_296.sname,info_296.sline);
                                                # 814 "02transpile.c"
                                                exit(2);
                                            }
                                            # 830 "02transpile.c"
                                            # 817 "02transpile.c"
                                            if(_if_conditional453=info_296.err_num>0,                                            _if_conditional453) {
                                                # 818 "02transpile.c"
                                                printf("transpile error. err num %d\n",info_296.err_num);
                                                # 820 "02transpile.c"
                                                exit(2);
                                            }
                                            else {
                                                # 828 "02transpile.c"
                                                # 823 "02transpile.c"
                                                if(_if_conditional454=!compile(&info_296,output_object_file_285,object_files_284),                                                _if_conditional454) {
                                                    # 824 "02transpile.c"
                                                    printf("%s %d: compile faield\n",info_296.sname,info_296.sline);
                                                    # 825 "02transpile.c"
                                                    exit(27);
                                                }
                                            }
                                        }
                                        come_call_finalizer3((&info_296),sInfo_finalize, 1, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(lv_table_297,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    come_call_finalizer3(o2_saved_294,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    # 854 "02transpile.c"
                                    # 833 "02transpile.c"
                                    if(_if_conditional455=!output_object_file_285&&!output_cpp_file_286&&(list$1charph_length(files_283)>0||list$1charph_length(object_files_284)>0),                                    _if_conditional455) {
                                        # 834 "02transpile.c"
                                        # 836 "02transpile.c"
                                        memset(&info_298,0,sizeof(struct sInfo));
                                        # 838 "02transpile.c"
                                        __dec_obj108=info_298.sname;
                                        info_298.sname=(char*)come_increment_ref_count(((char*)(right_value472=string_clone(list$1charphp_operator_load_element(files_283,0)))));
                                        __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value472 = come_decrement_ref_count2(right_value472, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 839 "02transpile.c"
                                        __dec_obj109=info_298.clang_option;
                                        info_298.clang_option=(char*)come_increment_ref_count(((char*)(right_value473=buffer_to_string(clang_option_281))));
                                        __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value473 = come_decrement_ref_count2(right_value473, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 840 "02transpile.c"
                                        info_298.verbose=verbose_289;
                                        # 849 "02transpile.c"
                                        # 842 "02transpile.c"
                                        if(output_file_name_288) {
                                            # 843 "02transpile.c"
                                            __dec_obj110=info_298.output_file_name;
                                            info_298.output_file_name=(char*)come_increment_ref_count(((char*)(right_value474=__builtin_string(output_file_name_288))));
                                            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value474 = come_decrement_ref_count2(right_value474, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        else {
                                            # 846 "02transpile.c"
                                            __dec_obj111=info_298.output_file_name;
                                            info_298.output_file_name=((void*)0);
                                            __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        }
                                        # 853 "02transpile.c"
                                        __current_stack2__.info_298 = &info_298;
                                        __current_stack2__.clang_option_281 = &clang_option_281;
                                        __current_stack2__.cpp_option_282 = &cpp_option_282;
                                        __current_stack2__.files_283 = &files_283;
                                        __current_stack2__.object_files_284 = &object_files_284;
                                        __current_stack2__.output_object_file_285 = &output_object_file_285;
                                        __current_stack2__.output_cpp_file_286 = &output_cpp_file_286;
                                        __current_stack2__.output_source_file_flag_287 = &output_source_file_flag_287;
                                        __current_stack2__.output_file_name_288 = &output_file_name_288;
                                        __current_stack2__.verbose_289 = &verbose_289;
                                        __current_stack2__.come_debug_290 = &come_debug_290;
                                        __current_stack2__.come_malloc_291 = &come_malloc_291;
                                        __current_stack2__.come_str_292 = &come_str_292;
                                        __current_stack2__.argc = &argc;
                                        __current_stack2__.argv = &argv;
                                        bool_expect(linker(&info_298,object_files_284),&__current_stack2__,(void*)method_block2_02transpilec);
                                        come_call_finalizer3((&info_298),sInfo_finalize, 1, 0, 0, 0, (void*)0);
                                    }
                                    come_call_finalizer3(clang_option_281,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(cpp_option_282,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(files_283,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(object_files_284,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    output_file_name_288 = come_decrement_ref_count2(output_file_name_288, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    # 857 "02transpile.c"
    __result170__ = 0;
    return __result170__;
}

static struct map$2charphsFunph* map$2charphsFunph_initialize(struct map$2charphsFunph* self){
void* __result_obj__;
void* right_value354;
void* right_value355;
void* right_value356;
int i_242;
void* right_value357;
void* right_value358;
struct list$1charp* __dec_obj68;
struct map$2charphsFunph* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
right_value354 = (void*)0;
right_value355 = (void*)0;
right_value356 = (void*)0;
memset(&i_242, 0, sizeof(int));
right_value357 = (void*)0;
right_value358 = (void*)0;
            # 1062 "./neo-c.h"
            self->keys=(char**)come_increment_ref_count(((char**)(right_value354=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1062, "char*%"))));
            right_value354 = come_decrement_ref_count2(right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1063 "./neo-c.h"
            self->items=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value355=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(128)), "./neo-c.h", 1063, "sFun*%"))));
            come_call_finalizer3(right_value355,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            # 1064 "./neo-c.h"
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value356=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1064, "bool"))));
            right_value356 = come_decrement_ref_count2(right_value356, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1071 "./neo-c.h"
            for(            i_242=0;            i_242<128;            i_242++            ){
                # 1068 "./neo-c.h"
                self->item_existance[i_242]=(_Bool)0;
            }
            # 1071 "./neo-c.h"
            self->size=128;
            # 1072 "./neo-c.h"
            self->len=0;
            # 1074 "./neo-c.h"
            __dec_obj68=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value358=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value357=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1074, "list$1charp"))))))));
            come_call_finalizer3(__dec_obj68,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value357,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value358,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            # 1076 "./neo-c.h"
            self->it=0;
            # 1078 "./neo-c.h"
            __result153__ = __result_obj__ = self;
            come_call_finalizer3(self,map$2charphsFunphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result153__;
            come_call_finalizer3(self,map$2charphsFunphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional295;
_Bool _if_conditional296;
_Bool _if_conditional297;
_Bool _if_conditional298;
_Bool _if_conditional299;
_Bool _if_conditional300;
_Bool _if_conditional301;
_Bool _if_conditional304;
_Bool _if_conditional305;
_Bool _if_conditional306;
_Bool _if_conditional307;
_Bool _if_conditional308;
_Bool _if_conditional309;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sFun_finalize"
                # 0 "sFun_finalize"
                if(_if_conditional295=self!=((void*)0)&&self->mName!=((void*)0),                _if_conditional295) {
                    # 0 "sFun_finalize"
                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 2 "sFun_finalize"
                # 1 "sFun_finalize"
                if(_if_conditional296=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional296) {
                    # 1 "sFun_finalize"
                    come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 3 "sFun_finalize"
                # 2 "sFun_finalize"
                if(_if_conditional297=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional297) {
                    # 2 "sFun_finalize"
                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 4 "sFun_finalize"
                # 3 "sFun_finalize"
                if(_if_conditional298=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional298) {
                    # 3 "sFun_finalize"
                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 5 "sFun_finalize"
                # 4 "sFun_finalize"
                if(_if_conditional299=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                _if_conditional299) {
                    # 4 "sFun_finalize"
                    come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 6 "sFun_finalize"
                # 5 "sFun_finalize"
                if(_if_conditional300=self!=((void*)0)&&self->mLambdaType!=((void*)0),                _if_conditional300) {
                    # 5 "sFun_finalize"
                    come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 7 "sFun_finalize"
                # 6 "sFun_finalize"
                if(_if_conditional301=self!=((void*)0)&&self->mBlock!=((void*)0),                _if_conditional301) {
                    # 6 "sFun_finalize"
                    come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 8 "sFun_finalize"
                # 7 "sFun_finalize"
                if(_if_conditional304=self!=((void*)0)&&self->mSource!=((void*)0),                _if_conditional304) {
                    # 7 "sFun_finalize"
                    come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 9 "sFun_finalize"
                # 8 "sFun_finalize"
                if(_if_conditional305=self!=((void*)0)&&self->mSourceHead!=((void*)0),                _if_conditional305) {
                    # 8 "sFun_finalize"
                    come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 10 "sFun_finalize"
                # 9 "sFun_finalize"
                if(_if_conditional306=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                _if_conditional306) {
                    # 9 "sFun_finalize"
                    come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 11 "sFun_finalize"
                # 10 "sFun_finalize"
                if(_if_conditional307=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                _if_conditional307) {
                    # 10 "sFun_finalize"
                    come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 12 "sFun_finalize"
                # 11 "sFun_finalize"
                if(_if_conditional308=self!=((void*)0)&&self->mComeHeader!=((void*)0),                _if_conditional308) {
                    # 11 "sFun_finalize"
                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 13 "sFun_finalize"
                # 12 "sFun_finalize"
                if(_if_conditional309=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                _if_conditional309) {
                    # 12 "sFun_finalize"
                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional302;
_Bool _if_conditional303;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sBlock_finalize"
                        # 0 "sBlock_finalize"
                        if(_if_conditional302=self!=((void*)0)&&self->mNodes!=((void*)0),                        _if_conditional302) {
                            # 0 "sBlock_finalize"
                            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        # 2 "sBlock_finalize"
                        # 1 "sBlock_finalize"
                        if(_if_conditional303=self!=((void*)0)&&self->mVarTable!=((void*)0),                        _if_conditional303) {
                            # 1 "sBlock_finalize"
                            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
                # 95 "./neo-c.h"
                self->head=((void*)0);
                # 96 "./neo-c.h"
                self->tail=((void*)0);
                # 97 "./neo-c.h"
                self->len=0;
                # 99 "./neo-c.h"
                __result152__ = __result_obj__ = self;
                come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
                return __result152__;
                come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_243;
_Bool _while_condtional32;
struct list_item$1charp* prev_it_244;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_243, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_244, 0, sizeof(struct list_item$1charp*));
                    # 114 "./neo-c.h"
                    it_243=self->head;
                    # 120 "./neo-c.h"
                    while(_while_condtional32=it_243!=((void*)0),                    _while_condtional32) {
                        # 116 "./neo-c.h"
                        prev_it_244=it_243;
                        # 117 "./neo-c.h"
                        it_243=it_243->next;
                        # 118 "./neo-c.h"
                        come_call_finalizer3(prev_it_244,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
int i_245;
_Bool _if_conditional310;
_Bool _if_conditional311;
int i_246;
_Bool _if_conditional312;
_Bool _if_conditional313;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_245, 0, sizeof(int));
memset(&i_246, 0, sizeof(int));
                # 1112 "./neo-c.h"
                for(                i_245=0;                i_245<self->size;                i_245++                ){
                    # 1111 "./neo-c.h"
                    # 1106 "./neo-c.h"
                    if(_if_conditional310=self->item_existance[i_245],                    _if_conditional310) {
                        # 1110 "./neo-c.h"
                        # 1107 "./neo-c.h"
                        if(_if_conditional311=1,                        _if_conditional311) {
                            # 1108 "./neo-c.h"
                            come_call_finalizer3(self->items[i_245],sFun_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1112 "./neo-c.h"
                come_free((char*)self->items);
                # 1121 "./neo-c.h"
                for(                i_246=0;                i_246<self->size;                i_246++                ){
                    # 1120 "./neo-c.h"
                    # 1115 "./neo-c.h"
                    if(_if_conditional312=self->item_existance[i_246],                    _if_conditional312) {
                        # 1119 "./neo-c.h"
                        # 1116 "./neo-c.h"
                        if(_if_conditional313=1,                        _if_conditional313) {
                            # 1117 "./neo-c.h"
                            self->keys[i_246] = come_decrement_ref_count2(self->keys[i_246], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1121 "./neo-c.h"
                come_free((char*)self->keys);
                # 1123 "./neo-c.h"
                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                # 1125 "./neo-c.h"
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsFunph_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
int i_247;
_Bool _if_conditional314;
_Bool _if_conditional315;
int i_248;
_Bool _if_conditional316;
_Bool _if_conditional317;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_247, 0, sizeof(int));
memset(&i_248, 0, sizeof(int));
            # 1112 "./neo-c.h"
            for(            i_247=0;            i_247<self->size;            i_247++            ){
                # 1111 "./neo-c.h"
                # 1106 "./neo-c.h"
                if(_if_conditional314=self->item_existance[i_247],                _if_conditional314) {
                    # 1110 "./neo-c.h"
                    # 1107 "./neo-c.h"
                    if(_if_conditional315=1,                    _if_conditional315) {
                        # 1108 "./neo-c.h"
                        come_call_finalizer3(self->items[i_247],sFun_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1112 "./neo-c.h"
            come_free((char*)self->items);
            # 1121 "./neo-c.h"
            for(            i_248=0;            i_248<self->size;            i_248++            ){
                # 1120 "./neo-c.h"
                # 1115 "./neo-c.h"
                if(_if_conditional316=self->item_existance[i_248],                _if_conditional316) {
                    # 1119 "./neo-c.h"
                    # 1116 "./neo-c.h"
                    if(_if_conditional317=1,                    _if_conditional317) {
                        # 1117 "./neo-c.h"
                        self->keys[i_248] = come_decrement_ref_count2(self->keys[i_248], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1121 "./neo-c.h"
            come_free((char*)self->keys);
            # 1123 "./neo-c.h"
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            # 1125 "./neo-c.h"
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_initialize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
void* right_value361;
void* right_value362;
void* right_value363;
int i_249;
void* right_value364;
void* right_value365;
struct list$1charp* __dec_obj70;
struct map$2charphsGenericsFunph* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
right_value361 = (void*)0;
right_value362 = (void*)0;
right_value363 = (void*)0;
memset(&i_249, 0, sizeof(int));
right_value364 = (void*)0;
right_value365 = (void*)0;
            # 1062 "./neo-c.h"
            self->keys=(char**)come_increment_ref_count(((char**)(right_value361=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1062, "char*%"))));
            right_value361 = come_decrement_ref_count2(right_value361, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1063 "./neo-c.h"
            self->items=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(right_value362=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(128)), "./neo-c.h", 1063, "sGenericsFun*%"))));
            come_call_finalizer3(right_value362,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
            # 1064 "./neo-c.h"
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value363=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1064, "bool"))));
            right_value363 = come_decrement_ref_count2(right_value363, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1071 "./neo-c.h"
            for(            i_249=0;            i_249<128;            i_249++            ){
                # 1068 "./neo-c.h"
                self->item_existance[i_249]=(_Bool)0;
            }
            # 1071 "./neo-c.h"
            self->size=128;
            # 1072 "./neo-c.h"
            self->len=0;
            # 1074 "./neo-c.h"
            __dec_obj70=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value365=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value364=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1074, "list$1charp"))))))));
            come_call_finalizer3(__dec_obj70,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value364,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value365,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            # 1076 "./neo-c.h"
            self->it=0;
            # 1078 "./neo-c.h"
            __result154__ = __result_obj__ = self;
            come_call_finalizer3(self,map$2charphsGenericsFunphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result154__;
            come_call_finalizer3(self,map$2charphsGenericsFunphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool _if_conditional318;
_Bool _if_conditional319;
_Bool _if_conditional320;
_Bool _if_conditional321;
_Bool _if_conditional322;
_Bool _if_conditional323;
_Bool _if_conditional324;
_Bool _if_conditional325;
_Bool _if_conditional326;
_Bool _if_conditional327;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sGenericsFun_finalize"
                # 0 "sGenericsFun_finalize"
                if(_if_conditional318=self!=((void*)0)&&self->mImplType!=((void*)0),                _if_conditional318) {
                    # 0 "sGenericsFun_finalize"
                    come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 2 "sGenericsFun_finalize"
                # 1 "sGenericsFun_finalize"
                if(_if_conditional319=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                _if_conditional319) {
                    # 1 "sGenericsFun_finalize"
                    come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 3 "sGenericsFun_finalize"
                # 2 "sGenericsFun_finalize"
                if(_if_conditional320=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),                _if_conditional320) {
                    # 2 "sGenericsFun_finalize"
                    come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 4 "sGenericsFun_finalize"
                # 3 "sGenericsFun_finalize"
                if(_if_conditional321=self!=((void*)0)&&self->mName!=((void*)0),                _if_conditional321) {
                    # 3 "sGenericsFun_finalize"
                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 5 "sGenericsFun_finalize"
                # 4 "sGenericsFun_finalize"
                if(_if_conditional322=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional322) {
                    # 4 "sGenericsFun_finalize"
                    come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 6 "sGenericsFun_finalize"
                # 5 "sGenericsFun_finalize"
                if(_if_conditional323=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional323) {
                    # 5 "sGenericsFun_finalize"
                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 7 "sGenericsFun_finalize"
                # 6 "sGenericsFun_finalize"
                if(_if_conditional324=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional324) {
                    # 6 "sGenericsFun_finalize"
                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 8 "sGenericsFun_finalize"
                # 7 "sGenericsFun_finalize"
                if(_if_conditional325=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                _if_conditional325) {
                    # 7 "sGenericsFun_finalize"
                    come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 9 "sGenericsFun_finalize"
                # 8 "sGenericsFun_finalize"
                if(_if_conditional326=self!=((void*)0)&&self->mBlock!=((void*)0),                _if_conditional326) {
                    # 8 "sGenericsFun_finalize"
                    self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 10 "sGenericsFun_finalize"
                # 9 "sGenericsFun_finalize"
                if(_if_conditional327=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                _if_conditional327) {
                    # 9 "sGenericsFun_finalize"
                    self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void map$2charphsGenericsFunphp_finalize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
int i_250;
_Bool _if_conditional328;
_Bool _if_conditional329;
int i_251;
_Bool _if_conditional330;
_Bool _if_conditional331;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_250, 0, sizeof(int));
memset(&i_251, 0, sizeof(int));
                # 1112 "./neo-c.h"
                for(                i_250=0;                i_250<self->size;                i_250++                ){
                    # 1111 "./neo-c.h"
                    # 1106 "./neo-c.h"
                    if(_if_conditional328=self->item_existance[i_250],                    _if_conditional328) {
                        # 1110 "./neo-c.h"
                        # 1107 "./neo-c.h"
                        if(_if_conditional329=1,                        _if_conditional329) {
                            # 1108 "./neo-c.h"
                            come_call_finalizer3(self->items[i_250],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1112 "./neo-c.h"
                come_free((char*)self->items);
                # 1121 "./neo-c.h"
                for(                i_251=0;                i_251<self->size;                i_251++                ){
                    # 1120 "./neo-c.h"
                    # 1115 "./neo-c.h"
                    if(_if_conditional330=self->item_existance[i_251],                    _if_conditional330) {
                        # 1119 "./neo-c.h"
                        # 1116 "./neo-c.h"
                        if(_if_conditional331=1,                        _if_conditional331) {
                            # 1117 "./neo-c.h"
                            self->keys[i_251] = come_decrement_ref_count2(self->keys[i_251], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1121 "./neo-c.h"
                come_free((char*)self->keys);
                # 1123 "./neo-c.h"
                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                # 1125 "./neo-c.h"
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsGenericsFunph_finalize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
int i_252;
_Bool _if_conditional332;
_Bool _if_conditional333;
int i_253;
_Bool _if_conditional334;
_Bool _if_conditional335;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_252, 0, sizeof(int));
memset(&i_253, 0, sizeof(int));
            # 1112 "./neo-c.h"
            for(            i_252=0;            i_252<self->size;            i_252++            ){
                # 1111 "./neo-c.h"
                # 1106 "./neo-c.h"
                if(_if_conditional332=self->item_existance[i_252],                _if_conditional332) {
                    # 1110 "./neo-c.h"
                    # 1107 "./neo-c.h"
                    if(_if_conditional333=1,                    _if_conditional333) {
                        # 1108 "./neo-c.h"
                        come_call_finalizer3(self->items[i_252],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1112 "./neo-c.h"
            come_free((char*)self->items);
            # 1121 "./neo-c.h"
            for(            i_253=0;            i_253<self->size;            i_253++            ){
                # 1120 "./neo-c.h"
                # 1115 "./neo-c.h"
                if(_if_conditional334=self->item_existance[i_253],                _if_conditional334) {
                    # 1119 "./neo-c.h"
                    # 1116 "./neo-c.h"
                    if(_if_conditional335=1,                    _if_conditional335) {
                        # 1117 "./neo-c.h"
                        self->keys[i_253] = come_decrement_ref_count2(self->keys[i_253], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1121 "./neo-c.h"
            come_free((char*)self->keys);
            # 1123 "./neo-c.h"
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            # 1125 "./neo-c.h"
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassph_initialize(struct map$2charphsClassph* self){
void* __result_obj__;
void* right_value368;
void* right_value369;
void* right_value370;
int i_254;
void* right_value371;
void* right_value372;
struct list$1charp* __dec_obj72;
struct map$2charphsClassph* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
right_value368 = (void*)0;
right_value369 = (void*)0;
right_value370 = (void*)0;
memset(&i_254, 0, sizeof(int));
right_value371 = (void*)0;
right_value372 = (void*)0;
            # 1062 "./neo-c.h"
            self->keys=(char**)come_increment_ref_count(((char**)(right_value368=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1062, "char*%"))));
            right_value368 = come_decrement_ref_count2(right_value368, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1063 "./neo-c.h"
            self->items=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value369=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(128)), "./neo-c.h", 1063, "sClass*%"))));
            come_call_finalizer3(right_value369,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            # 1064 "./neo-c.h"
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value370=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1064, "bool"))));
            right_value370 = come_decrement_ref_count2(right_value370, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1071 "./neo-c.h"
            for(            i_254=0;            i_254<128;            i_254++            ){
                # 1068 "./neo-c.h"
                self->item_existance[i_254]=(_Bool)0;
            }
            # 1071 "./neo-c.h"
            self->size=128;
            # 1072 "./neo-c.h"
            self->len=0;
            # 1074 "./neo-c.h"
            __dec_obj72=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value372=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value371=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1074, "list$1charp"))))))));
            come_call_finalizer3(__dec_obj72,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value371,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value372,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            # 1076 "./neo-c.h"
            self->it=0;
            # 1078 "./neo-c.h"
            __result155__ = __result_obj__ = self;
            come_call_finalizer3(self,map$2charphsClassphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result155__;
            come_call_finalizer3(self,map$2charphsClassphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassphp_finalize(struct map$2charphsClassph* self){
void* __result_obj__;
int i_255;
_Bool _if_conditional336;
_Bool _if_conditional337;
int i_256;
_Bool _if_conditional338;
_Bool _if_conditional339;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_255, 0, sizeof(int));
memset(&i_256, 0, sizeof(int));
                # 1112 "./neo-c.h"
                for(                i_255=0;                i_255<self->size;                i_255++                ){
                    # 1111 "./neo-c.h"
                    # 1106 "./neo-c.h"
                    if(_if_conditional336=self->item_existance[i_255],                    _if_conditional336) {
                        # 1110 "./neo-c.h"
                        # 1107 "./neo-c.h"
                        if(_if_conditional337=1,                        _if_conditional337) {
                            # 1108 "./neo-c.h"
                            come_call_finalizer3(self->items[i_255],sClass_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1112 "./neo-c.h"
                come_free((char*)self->items);
                # 1121 "./neo-c.h"
                for(                i_256=0;                i_256<self->size;                i_256++                ){
                    # 1120 "./neo-c.h"
                    # 1115 "./neo-c.h"
                    if(_if_conditional338=self->item_existance[i_256],                    _if_conditional338) {
                        # 1119 "./neo-c.h"
                        # 1116 "./neo-c.h"
                        if(_if_conditional339=1,                        _if_conditional339) {
                            # 1117 "./neo-c.h"
                            self->keys[i_256] = come_decrement_ref_count2(self->keys[i_256], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1121 "./neo-c.h"
                come_free((char*)self->keys);
                # 1123 "./neo-c.h"
                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                # 1125 "./neo-c.h"
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsClassph_finalize(struct map$2charphsClassph* self){
void* __result_obj__;
int i_257;
_Bool _if_conditional340;
_Bool _if_conditional341;
int i_258;
_Bool _if_conditional342;
_Bool _if_conditional343;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_257, 0, sizeof(int));
memset(&i_258, 0, sizeof(int));
            # 1112 "./neo-c.h"
            for(            i_257=0;            i_257<self->size;            i_257++            ){
                # 1111 "./neo-c.h"
                # 1106 "./neo-c.h"
                if(_if_conditional340=self->item_existance[i_257],                _if_conditional340) {
                    # 1110 "./neo-c.h"
                    # 1107 "./neo-c.h"
                    if(_if_conditional341=1,                    _if_conditional341) {
                        # 1108 "./neo-c.h"
                        come_call_finalizer3(self->items[i_257],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1112 "./neo-c.h"
            come_free((char*)self->items);
            # 1121 "./neo-c.h"
            for(            i_258=0;            i_258<self->size;            i_258++            ){
                # 1120 "./neo-c.h"
                # 1115 "./neo-c.h"
                if(_if_conditional342=self->item_existance[i_258],                _if_conditional342) {
                    # 1119 "./neo-c.h"
                    # 1116 "./neo-c.h"
                    if(_if_conditional343=1,                    _if_conditional343) {
                        # 1117 "./neo-c.h"
                        self->keys[i_258] = come_decrement_ref_count2(self->keys[i_258], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1121 "./neo-c.h"
            come_free((char*)self->keys);
            # 1123 "./neo-c.h"
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            # 1125 "./neo-c.h"
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassModuleph* map$2charphsClassModuleph_initialize(struct map$2charphsClassModuleph* self){
void* __result_obj__;
void* right_value375;
void* right_value376;
void* right_value377;
int i_259;
void* right_value378;
void* right_value379;
struct list$1charp* __dec_obj74;
struct map$2charphsClassModuleph* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
right_value375 = (void*)0;
right_value376 = (void*)0;
right_value377 = (void*)0;
memset(&i_259, 0, sizeof(int));
right_value378 = (void*)0;
right_value379 = (void*)0;
            # 1062 "./neo-c.h"
            self->keys=(char**)come_increment_ref_count(((char**)(right_value375=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1062, "char*%"))));
            right_value375 = come_decrement_ref_count2(right_value375, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1063 "./neo-c.h"
            self->items=(struct sClassModule**)come_increment_ref_count(((struct sClassModule**)(right_value376=(struct sClassModule**)come_calloc(1, sizeof(struct sClassModule*)*(1*(128)), "./neo-c.h", 1063, "sClassModule*%"))));
            come_call_finalizer3(right_value376,sClassModule_finalize, 0, 1, 0, 0, __result_obj__);
            # 1064 "./neo-c.h"
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value377=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1064, "bool"))));
            right_value377 = come_decrement_ref_count2(right_value377, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1071 "./neo-c.h"
            for(            i_259=0;            i_259<128;            i_259++            ){
                # 1068 "./neo-c.h"
                self->item_existance[i_259]=(_Bool)0;
            }
            # 1071 "./neo-c.h"
            self->size=128;
            # 1072 "./neo-c.h"
            self->len=0;
            # 1074 "./neo-c.h"
            __dec_obj74=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value379=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value378=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1074, "list$1charp"))))))));
            come_call_finalizer3(__dec_obj74,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value378,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value379,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            # 1076 "./neo-c.h"
            self->it=0;
            # 1078 "./neo-c.h"
            __result156__ = __result_obj__ = self;
            come_call_finalizer3(self,map$2charphsClassModulephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result156__;
            come_call_finalizer3(self,map$2charphsClassModulephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void sClassModule_finalize(struct sClassModule* self){
void* __result_obj__;
_Bool _if_conditional344;
_Bool _if_conditional345;
_Bool _if_conditional346;
_Bool _if_conditional347;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sClassModule_finalize"
                # 0 "sClassModule_finalize"
                if(_if_conditional344=self!=((void*)0)&&self->mName!=((void*)0),                _if_conditional344) {
                    # 0 "sClassModule_finalize"
                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 2 "sClassModule_finalize"
                # 1 "sClassModule_finalize"
                if(_if_conditional345=self!=((void*)0)&&self->mText!=((void*)0),                _if_conditional345) {
                    # 1 "sClassModule_finalize"
                    self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 3 "sClassModule_finalize"
                # 2 "sClassModule_finalize"
                if(_if_conditional346=self!=((void*)0)&&self->mParams!=((void*)0),                _if_conditional346) {
                    # 2 "sClassModule_finalize"
                    come_call_finalizer3(self->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 4 "sClassModule_finalize"
                # 3 "sClassModule_finalize"
                if(_if_conditional347=self!=((void*)0)&&self->mSName!=((void*)0),                _if_conditional347) {
                    # 3 "sClassModule_finalize"
                    self->mSName = come_decrement_ref_count2(self->mSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void map$2charphsClassModulephp_finalize(struct map$2charphsClassModuleph* self){
void* __result_obj__;
int i_260;
_Bool _if_conditional348;
_Bool _if_conditional349;
int i_261;
_Bool _if_conditional350;
_Bool _if_conditional351;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_260, 0, sizeof(int));
memset(&i_261, 0, sizeof(int));
                # 1112 "./neo-c.h"
                for(                i_260=0;                i_260<self->size;                i_260++                ){
                    # 1111 "./neo-c.h"
                    # 1106 "./neo-c.h"
                    if(_if_conditional348=self->item_existance[i_260],                    _if_conditional348) {
                        # 1110 "./neo-c.h"
                        # 1107 "./neo-c.h"
                        if(_if_conditional349=1,                        _if_conditional349) {
                            # 1108 "./neo-c.h"
                            come_call_finalizer3(self->items[i_260],sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1112 "./neo-c.h"
                come_free((char*)self->items);
                # 1121 "./neo-c.h"
                for(                i_261=0;                i_261<self->size;                i_261++                ){
                    # 1120 "./neo-c.h"
                    # 1115 "./neo-c.h"
                    if(_if_conditional350=self->item_existance[i_261],                    _if_conditional350) {
                        # 1119 "./neo-c.h"
                        # 1116 "./neo-c.h"
                        if(_if_conditional351=1,                        _if_conditional351) {
                            # 1117 "./neo-c.h"
                            self->keys[i_261] = come_decrement_ref_count2(self->keys[i_261], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1121 "./neo-c.h"
                come_free((char*)self->keys);
                # 1123 "./neo-c.h"
                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                # 1125 "./neo-c.h"
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsClassModuleph_finalize(struct map$2charphsClassModuleph* self){
void* __result_obj__;
int i_262;
_Bool _if_conditional352;
_Bool _if_conditional353;
int i_263;
_Bool _if_conditional354;
_Bool _if_conditional355;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_262, 0, sizeof(int));
memset(&i_263, 0, sizeof(int));
            # 1112 "./neo-c.h"
            for(            i_262=0;            i_262<self->size;            i_262++            ){
                # 1111 "./neo-c.h"
                # 1106 "./neo-c.h"
                if(_if_conditional352=self->item_existance[i_262],                _if_conditional352) {
                    # 1110 "./neo-c.h"
                    # 1107 "./neo-c.h"
                    if(_if_conditional353=1,                    _if_conditional353) {
                        # 1108 "./neo-c.h"
                        come_call_finalizer3(self->items[i_262],sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1112 "./neo-c.h"
            come_free((char*)self->items);
            # 1121 "./neo-c.h"
            for(            i_263=0;            i_263<self->size;            i_263++            ){
                # 1120 "./neo-c.h"
                # 1115 "./neo-c.h"
                if(_if_conditional354=self->item_existance[i_263],                _if_conditional354) {
                    # 1119 "./neo-c.h"
                    # 1116 "./neo-c.h"
                    if(_if_conditional355=1,                    _if_conditional355) {
                        # 1117 "./neo-c.h"
                        self->keys[i_263] = come_decrement_ref_count2(self->keys[i_263], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1121 "./neo-c.h"
            come_free((char*)self->keys);
            # 1123 "./neo-c.h"
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            # 1125 "./neo-c.h"
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsTypeph* map$2charphsTypeph_initialize(struct map$2charphsTypeph* self){
void* __result_obj__;
void* right_value382;
void* right_value383;
void* right_value384;
int i_264;
void* right_value385;
void* right_value386;
struct list$1charp* __dec_obj76;
struct map$2charphsTypeph* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
right_value382 = (void*)0;
right_value383 = (void*)0;
right_value384 = (void*)0;
memset(&i_264, 0, sizeof(int));
right_value385 = (void*)0;
right_value386 = (void*)0;
            # 1062 "./neo-c.h"
            self->keys=(char**)come_increment_ref_count(((char**)(right_value382=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1062, "char*%"))));
            right_value382 = come_decrement_ref_count2(right_value382, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1063 "./neo-c.h"
            self->items=(struct sType**)come_increment_ref_count(((struct sType**)(right_value383=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(128)), "./neo-c.h", 1063, "sType*%"))));
            come_call_finalizer3(right_value383,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 1064 "./neo-c.h"
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value384=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1064, "bool"))));
            right_value384 = come_decrement_ref_count2(right_value384, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1071 "./neo-c.h"
            for(            i_264=0;            i_264<128;            i_264++            ){
                # 1068 "./neo-c.h"
                self->item_existance[i_264]=(_Bool)0;
            }
            # 1071 "./neo-c.h"
            self->size=128;
            # 1072 "./neo-c.h"
            self->len=0;
            # 1074 "./neo-c.h"
            __dec_obj76=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value386=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value385=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1074, "list$1charp"))))))));
            come_call_finalizer3(__dec_obj76,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value385,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value386,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            # 1076 "./neo-c.h"
            self->it=0;
            # 1078 "./neo-c.h"
            __result157__ = __result_obj__ = self;
            come_call_finalizer3(self,map$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result157__;
            come_call_finalizer3(self,map$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsTypephp_finalize(struct map$2charphsTypeph* self){
void* __result_obj__;
int i_265;
_Bool _if_conditional356;
_Bool _if_conditional357;
int i_266;
_Bool _if_conditional358;
_Bool _if_conditional359;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_265, 0, sizeof(int));
memset(&i_266, 0, sizeof(int));
                # 1112 "./neo-c.h"
                for(                i_265=0;                i_265<self->size;                i_265++                ){
                    # 1111 "./neo-c.h"
                    # 1106 "./neo-c.h"
                    if(_if_conditional356=self->item_existance[i_265],                    _if_conditional356) {
                        # 1110 "./neo-c.h"
                        # 1107 "./neo-c.h"
                        if(_if_conditional357=1,                        _if_conditional357) {
                            # 1108 "./neo-c.h"
                            come_call_finalizer3(self->items[i_265],sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1112 "./neo-c.h"
                come_free((char*)self->items);
                # 1121 "./neo-c.h"
                for(                i_266=0;                i_266<self->size;                i_266++                ){
                    # 1120 "./neo-c.h"
                    # 1115 "./neo-c.h"
                    if(_if_conditional358=self->item_existance[i_266],                    _if_conditional358) {
                        # 1119 "./neo-c.h"
                        # 1116 "./neo-c.h"
                        if(_if_conditional359=1,                        _if_conditional359) {
                            # 1117 "./neo-c.h"
                            self->keys[i_266] = come_decrement_ref_count2(self->keys[i_266], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1121 "./neo-c.h"
                come_free((char*)self->keys);
                # 1123 "./neo-c.h"
                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                # 1125 "./neo-c.h"
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsTypeph_finalize(struct map$2charphsTypeph* self){
void* __result_obj__;
int i_267;
_Bool _if_conditional360;
_Bool _if_conditional361;
int i_268;
_Bool _if_conditional362;
_Bool _if_conditional363;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_267, 0, sizeof(int));
memset(&i_268, 0, sizeof(int));
            # 1112 "./neo-c.h"
            for(            i_267=0;            i_267<self->size;            i_267++            ){
                # 1111 "./neo-c.h"
                # 1106 "./neo-c.h"
                if(_if_conditional360=self->item_existance[i_267],                _if_conditional360) {
                    # 1110 "./neo-c.h"
                    # 1107 "./neo-c.h"
                    if(_if_conditional361=1,                    _if_conditional361) {
                        # 1108 "./neo-c.h"
                        come_call_finalizer3(self->items[i_267],sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1112 "./neo-c.h"
            come_free((char*)self->items);
            # 1121 "./neo-c.h"
            for(            i_268=0;            i_268<self->size;            i_268++            ){
                # 1120 "./neo-c.h"
                # 1115 "./neo-c.h"
                if(_if_conditional362=self->item_existance[i_268],                _if_conditional362) {
                    # 1119 "./neo-c.h"
                    # 1116 "./neo-c.h"
                    if(_if_conditional363=1,                    _if_conditional363) {
                        # 1117 "./neo-c.h"
                        self->keys[i_268] = come_decrement_ref_count2(self->keys[i_268], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1121 "./neo-c.h"
            come_free((char*)self->keys);
            # 1123 "./neo-c.h"
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            # 1125 "./neo-c.h"
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sModule_finalize(struct sModule* self){
void* __result_obj__;
_Bool _if_conditional364;
_Bool _if_conditional365;
_Bool _if_conditional366;
_Bool _if_conditional367;
_Bool _if_conditional368;
_Bool _if_conditional369;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sModule_finalize"
            # 0 "sModule_finalize"
            if(_if_conditional364=self!=((void*)0)&&self->mSourceHead!=((void*)0),            _if_conditional364) {
                # 0 "sModule_finalize"
                come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 2 "sModule_finalize"
            # 1 "sModule_finalize"
            if(_if_conditional365=self!=((void*)0)&&self->mSource!=((void*)0),            _if_conditional365) {
                # 1 "sModule_finalize"
                come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 3 "sModule_finalize"
            # 2 "sModule_finalize"
            if(_if_conditional366=self!=((void*)0)&&self->mLastCode!=((void*)0),            _if_conditional366) {
                # 2 "sModule_finalize"
                self->mLastCode = come_decrement_ref_count2(self->mLastCode, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 4 "sModule_finalize"
            # 3 "sModule_finalize"
            if(_if_conditional367=self!=((void*)0)&&self->mLastCode2!=((void*)0),            _if_conditional367) {
                # 3 "sModule_finalize"
                self->mLastCode2 = come_decrement_ref_count2(self->mLastCode2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 5 "sModule_finalize"
            # 4 "sModule_finalize"
            if(_if_conditional368=self!=((void*)0)&&self->mLastCode3!=((void*)0),            _if_conditional368) {
                # 4 "sModule_finalize"
                self->mLastCode3 = come_decrement_ref_count2(self->mLastCode3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 6 "sModule_finalize"
            # 5 "sModule_finalize"
            if(_if_conditional369=self!=((void*)0)&&self->mHeader!=((void*)0),            _if_conditional369) {
                # 5 "sModule_finalize"
                come_call_finalizer3(self->mHeader,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list$1sRightValueObjectph* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
            # 95 "./neo-c.h"
            self->head=((void*)0);
            # 96 "./neo-c.h"
            self->tail=((void*)0);
            # 97 "./neo-c.h"
            self->len=0;
            # 99 "./neo-c.h"
            __result158__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result158__;
            come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_269;
_Bool _while_condtional33;
struct list_item$1sRightValueObjectph* prev_it_270;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_269, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_270, 0, sizeof(struct list_item$1sRightValueObjectph*));
                # 114 "./neo-c.h"
                it_269=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional33=it_269!=((void*)0),                _while_condtional33) {
                    # 116 "./neo-c.h"
                    prev_it_270=it_269;
                    # 117 "./neo-c.h"
                    it_269=it_269->next;
                    # 118 "./neo-c.h"
                    come_call_finalizer3(prev_it_270,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional370;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1sRightValueObjectphp_finalize"
                        # 0 "list_item$1sRightValueObjectphp_finalize"
                        if(_if_conditional370=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional370) {
                            # 0 "list_item$1sRightValueObjectphp_finalize"
                            come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
void* __result_obj__;
_Bool _if_conditional371;
_Bool _if_conditional372;
_Bool _if_conditional373;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sRightValueObject_finalize"
                                # 0 "sRightValueObject_finalize"
                                if(_if_conditional371=self!=((void*)0)&&self->mType!=((void*)0),                                _if_conditional371) {
                                    # 0 "sRightValueObject_finalize"
                                    come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sRightValueObject_finalize"
                                # 1 "sRightValueObject_finalize"
                                if(_if_conditional372=self!=((void*)0)&&self->mVarName!=((void*)0),                                _if_conditional372) {
                                    # 1 "sRightValueObject_finalize"
                                    self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 3 "sRightValueObject_finalize"
                                # 2 "sRightValueObject_finalize"
                                if(_if_conditional373=self!=((void*)0)&&self->mFunName!=((void*)0),                                _if_conditional373) {
                                    # 2 "sRightValueObject_finalize"
                                    self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_271;
_Bool _while_condtional34;
struct list_item$1sRightValueObjectph* prev_it_272;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_271, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_272, 0, sizeof(struct list_item$1sRightValueObjectph*));
            # 114 "./neo-c.h"
            it_271=self->head;
            # 120 "./neo-c.h"
            while(_while_condtional34=it_271!=((void*)0),            _while_condtional34) {
                # 116 "./neo-c.h"
                prev_it_272=it_271;
                # 117 "./neo-c.h"
                it_271=it_271->next;
                # 118 "./neo-c.h"
                come_call_finalizer3(prev_it_272,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
            # 95 "./neo-c.h"
            self->head=((void*)0);
            # 96 "./neo-c.h"
            self->tail=((void*)0);
            # 97 "./neo-c.h"
            self->len=0;
            # 99 "./neo-c.h"
            __result159__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result159__;
            come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_273;
_Bool _while_condtional35;
struct list_item$1CVALUEph* prev_it_274;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_273, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_274, 0, sizeof(struct list_item$1CVALUEph*));
                # 114 "./neo-c.h"
                it_273=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional35=it_273!=((void*)0),                _while_condtional35) {
                    # 116 "./neo-c.h"
                    prev_it_274=it_273;
                    # 117 "./neo-c.h"
                    it_273=it_273->next;
                    # 118 "./neo-c.h"
                    come_call_finalizer3(prev_it_274,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional374;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1CVALUEphp_finalize"
                        # 0 "list_item$1CVALUEphp_finalize"
                        if(_if_conditional374=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional374) {
                            # 0 "list_item$1CVALUEphp_finalize"
                            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional375;
_Bool _if_conditional376;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "CVALUE_finalize"
                                # 0 "CVALUE_finalize"
                                if(_if_conditional375=self!=((void*)0)&&self->c_value!=((void*)0),                                _if_conditional375) {
                                    # 0 "CVALUE_finalize"
                                    self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "CVALUE_finalize"
                                # 1 "CVALUE_finalize"
                                if(_if_conditional376=self!=((void*)0)&&self->type!=((void*)0),                                _if_conditional376) {
                                    # 1 "CVALUE_finalize"
                                    come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_275;
_Bool _while_condtional36;
struct list_item$1CVALUEph* prev_it_276;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_275, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_276, 0, sizeof(struct list_item$1CVALUEph*));
            # 114 "./neo-c.h"
            it_275=self->head;
            # 120 "./neo-c.h"
            while(_while_condtional36=it_275!=((void*)0),            _while_condtional36) {
                # 116 "./neo-c.h"
                prev_it_276=it_275;
                # 117 "./neo-c.h"
                it_275=it_275->next;
                # 118 "./neo-c.h"
                come_call_finalizer3(prev_it_276,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static void sInfo_finalize(struct sInfo* self){
void* __result_obj__;
_Bool _if_conditional380;
_Bool _if_conditional381;
_Bool _if_conditional382;
_Bool _if_conditional383;
_Bool _if_conditional384;
_Bool _if_conditional385;
_Bool _if_conditional386;
_Bool _if_conditional387;
_Bool _if_conditional388;
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
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sInfo_finalize"
            # 0 "sInfo_finalize"
            if(_if_conditional380=self!=((void*)0)&&self->original_source!=((void*)0),            _if_conditional380) {
                # 0 "sInfo_finalize"
                come_call_finalizer3(self->original_source,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 2 "sInfo_finalize"
            # 1 "sInfo_finalize"
            if(_if_conditional381=self!=((void*)0)&&self->source!=((void*)0),            _if_conditional381) {
                # 1 "sInfo_finalize"
                come_call_finalizer3(self->source,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 3 "sInfo_finalize"
            # 2 "sInfo_finalize"
            if(_if_conditional382=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional382) {
                # 2 "sInfo_finalize"
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 4 "sInfo_finalize"
            # 3 "sInfo_finalize"
            if(_if_conditional383=self!=((void*)0)&&self->base_sname!=((void*)0),            _if_conditional383) {
                # 3 "sInfo_finalize"
                self->base_sname = come_decrement_ref_count2(self->base_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 5 "sInfo_finalize"
            # 4 "sInfo_finalize"
            if(_if_conditional384=self!=((void*)0)&&self->err_line!=((void*)0),            _if_conditional384) {
                # 4 "sInfo_finalize"
                self->err_line = come_decrement_ref_count2(self->err_line, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 6 "sInfo_finalize"
            # 5 "sInfo_finalize"
            if(_if_conditional385=self!=((void*)0)&&self->clang_option!=((void*)0),            _if_conditional385) {
                # 5 "sInfo_finalize"
                self->clang_option = come_decrement_ref_count2(self->clang_option, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 7 "sInfo_finalize"
            # 6 "sInfo_finalize"
            if(_if_conditional386=self!=((void*)0)&&self->cpp_option!=((void*)0),            _if_conditional386) {
                # 6 "sInfo_finalize"
                self->cpp_option = come_decrement_ref_count2(self->cpp_option, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 8 "sInfo_finalize"
            # 7 "sInfo_finalize"
            if(_if_conditional387=self!=((void*)0)&&self->come_fun_name!=((void*)0),            _if_conditional387) {
                # 7 "sInfo_finalize"
                self->come_fun_name = come_decrement_ref_count2(self->come_fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 9 "sInfo_finalize"
            # 8 "sInfo_finalize"
            if(_if_conditional388=self!=((void*)0)&&self->funcs!=((void*)0),            _if_conditional388) {
                # 8 "sInfo_finalize"
                come_call_finalizer3(self->funcs,map$2charphsFunphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 10 "sInfo_finalize"
            # 9 "sInfo_finalize"
            if(_if_conditional389=self!=((void*)0)&&self->generics_funcs!=((void*)0),            _if_conditional389) {
                # 9 "sInfo_finalize"
                come_call_finalizer3(self->generics_funcs,map$2charphsGenericsFunphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 11 "sInfo_finalize"
            # 10 "sInfo_finalize"
            if(_if_conditional390=self!=((void*)0)&&self->classes!=((void*)0),            _if_conditional390) {
                # 10 "sInfo_finalize"
                come_call_finalizer3(self->classes,map$2charphsClassphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 12 "sInfo_finalize"
            # 11 "sInfo_finalize"
            if(_if_conditional391=self!=((void*)0)&&self->modules!=((void*)0),            _if_conditional391) {
                # 11 "sInfo_finalize"
                come_call_finalizer3(self->modules,map$2charphsClassModulephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 13 "sInfo_finalize"
            # 12 "sInfo_finalize"
            if(_if_conditional392=self!=((void*)0)&&self->types!=((void*)0),            _if_conditional392) {
                # 12 "sInfo_finalize"
                come_call_finalizer3(self->types,map$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 14 "sInfo_finalize"
            # 13 "sInfo_finalize"
            if(_if_conditional393=self!=((void*)0)&&self->generics_classes!=((void*)0),            _if_conditional393) {
                # 13 "sInfo_finalize"
                come_call_finalizer3(self->generics_classes,map$2charphsClassphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 15 "sInfo_finalize"
            # 14 "sInfo_finalize"
            if(_if_conditional394=self!=((void*)0)&&self->module!=((void*)0),            _if_conditional394) {
                # 14 "sInfo_finalize"
                come_call_finalizer3(self->module,sModule_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 16 "sInfo_finalize"
            # 15 "sInfo_finalize"
            if(_if_conditional395=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional395) {
                # 15 "sInfo_finalize"
                come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 17 "sInfo_finalize"
            # 16 "sInfo_finalize"
            if(_if_conditional396=self!=((void*)0)&&self->right_value_objects!=((void*)0),            _if_conditional396) {
                # 16 "sInfo_finalize"
                come_call_finalizer3(self->right_value_objects,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 18 "sInfo_finalize"
            # 17 "sInfo_finalize"
            if(_if_conditional397=self!=((void*)0)&&self->generics_type!=((void*)0),            _if_conditional397) {
                # 17 "sInfo_finalize"
                come_call_finalizer3(self->generics_type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 19 "sInfo_finalize"
            # 18 "sInfo_finalize"
            if(_if_conditional398=self!=((void*)0)&&self->method_generics_types!=((void*)0),            _if_conditional398) {
                # 18 "sInfo_finalize"
                come_call_finalizer3(self->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 20 "sInfo_finalize"
            # 19 "sInfo_finalize"
            if(_if_conditional399=self!=((void*)0)&&self->stack!=((void*)0),            _if_conditional399) {
                # 19 "sInfo_finalize"
                come_call_finalizer3(self->stack,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 21 "sInfo_finalize"
            # 20 "sInfo_finalize"
            if(_if_conditional400=self!=((void*)0)&&self->come_function_result_type!=((void*)0),            _if_conditional400) {
                # 20 "sInfo_finalize"
                come_call_finalizer3(self->come_function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 22 "sInfo_finalize"
            # 21 "sInfo_finalize"
            if(_if_conditional401=self!=((void*)0)&&self->gv_table!=((void*)0),            _if_conditional401) {
                # 21 "sInfo_finalize"
                come_call_finalizer3(self->gv_table,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 23 "sInfo_finalize"
            # 22 "sInfo_finalize"
            if(_if_conditional402=self!=((void*)0)&&self->generics_type_names!=((void*)0),            _if_conditional402) {
                # 22 "sInfo_finalize"
                come_call_finalizer3(self->generics_type_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 24 "sInfo_finalize"
            # 23 "sInfo_finalize"
            if(_if_conditional403=self!=((void*)0)&&self->method_generics_type_names!=((void*)0),            _if_conditional403) {
                # 23 "sInfo_finalize"
                come_call_finalizer3(self->method_generics_type_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 25 "sInfo_finalize"
            # 24 "sInfo_finalize"
            if(_if_conditional404=self!=((void*)0)&&self->impl_type!=((void*)0),            _if_conditional404) {
                # 24 "sInfo_finalize"
                come_call_finalizer3(self->impl_type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 26 "sInfo_finalize"
            # 25 "sInfo_finalize"
            if(_if_conditional405=self!=((void*)0)&&self->output_file_name!=((void*)0),            _if_conditional405) {
                # 25 "sInfo_finalize"
                self->output_file_name = come_decrement_ref_count2(self->output_file_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 27 "sInfo_finalize"
            # 26 "sInfo_finalize"
            if(_if_conditional406=self!=((void*)0)&&self->function_result_type!=((void*)0),            _if_conditional406) {
                # 26 "sInfo_finalize"
                come_call_finalizer3(self->function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 28 "sInfo_finalize"
            # 27 "sInfo_finalize"
            if(_if_conditional407=self!=((void*)0)&&self->module_params!=((void*)0),            _if_conditional407) {
                # 27 "sInfo_finalize"
                come_call_finalizer3(self->module_params,map$2charphcharphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static void map$2charphcharphp_finalize(struct map$2charphcharph* self){
void* __result_obj__;
int i_279;
_Bool _if_conditional408;
_Bool _if_conditional409;
int i_280;
_Bool _if_conditional410;
_Bool _if_conditional411;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_279, 0, sizeof(int));
memset(&i_280, 0, sizeof(int));
                    # 1112 "./neo-c.h"
                    for(                    i_279=0;                    i_279<self->size;                    i_279++                    ){
                        # 1111 "./neo-c.h"
                        # 1106 "./neo-c.h"
                        if(_if_conditional408=self->item_existance[i_279],                        _if_conditional408) {
                            # 1110 "./neo-c.h"
                            # 1107 "./neo-c.h"
                            if(_if_conditional409=1,                            _if_conditional409) {
                                # 1108 "./neo-c.h"
                                self->items[i_279] = come_decrement_ref_count2(self->items[i_279], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                    # 1112 "./neo-c.h"
                    come_free((char*)self->items);
                    # 1121 "./neo-c.h"
                    for(                    i_280=0;                    i_280<self->size;                    i_280++                    ){
                        # 1120 "./neo-c.h"
                        # 1115 "./neo-c.h"
                        if(_if_conditional410=self->item_existance[i_280],                        _if_conditional410) {
                            # 1119 "./neo-c.h"
                            # 1116 "./neo-c.h"
                            if(_if_conditional411=1,                            _if_conditional411) {
                                # 1117 "./neo-c.h"
                                self->keys[i_280] = come_decrement_ref_count2(self->keys[i_280], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                    # 1121 "./neo-c.h"
                    come_free((char*)self->keys);
                    # 1123 "./neo-c.h"
                    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                    # 1125 "./neo-c.h"
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional456;
struct list_item$1charph* it_299;
int i_300;
_Bool _while_condtional37;
_Bool _if_conditional457;
char* __result168__;
char* default_value_301;
char* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_299, 0, sizeof(struct list_item$1charph*));
memset(&i_300, 0, sizeof(int));
memset(&default_value_301, 0, sizeof(char*));
                                            # 673 "./neo-c.h"
                                            # 669 "./neo-c.h"
                                            if(_if_conditional456=position<0,                                            _if_conditional456) {
                                                # 670 "./neo-c.h"
                                                position+=self->len;
                                            }
                                            # 673 "./neo-c.h"
                                            it_299=self->head;
                                            # 674 "./neo-c.h"
                                            i_300=0;
                                            # 681 "./neo-c.h"
                                            while(_while_condtional37=it_299!=((void*)0),                                            _while_condtional37) {
                                                # 679 "./neo-c.h"
                                                # 676 "./neo-c.h"
                                                if(_if_conditional457=position==i_300,                                                _if_conditional457) {
                                                    # 677 "./neo-c.h"
                                                    __result168__ = __result_obj__ = it_299->item;
                                                    return __result168__;
                                                }
                                                # 679 "./neo-c.h"
                                                it_299=it_299->next;
                                                # 680 "./neo-c.h"
                                                i_300++;
                                            }
                                            # 683 "./neo-c.h"
                                            # 684 "./neo-c.h"
                                            memset(&default_value_301,0,sizeof(char*));
                                            # 685 "./neo-c.h"
                                            __result169__ = __result_obj__ = default_value_301;
                                            default_value_301 = come_decrement_ref_count2(default_value_301, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                            return __result169__;
                                            default_value_301 = come_decrement_ref_count2(default_value_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void method_block2_02transpilec(struct __current_stack2__* parent){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
                                            # 851 "02transpile.c"
                                            printf("%s %d: linker faield\n",(*(parent->info_298)).sname,(*(parent->info_298)).sline);
                                            # 852 "02transpile.c"
                                            exit(13);
}

