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
struct anonymous_typeX4
{
    long long __ll;
    long double __ld;
};
typedef struct anonymous_typeX4 max_align_t;
typedef long ptrdiff_t;
typedef void* GC_PTR;
typedef unsigned long int GC_word;
typedef long GC_signed_word;
extern unsigned long int GC_gc_no;
typedef void* (*GC_oom_func)(unsigned long int);
extern void* (*GC_oom_fn)(unsigned long int);
typedef void (*GC_on_heap_resize_proc)(unsigned long int);
extern void (*GC_on_heap_resize)(unsigned long int);
enum anonymous_typeY5 { GC_EVENT_START
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
typedef enum anonymous_typeY5 GC_EventType;
typedef void (*GC_on_collection_event_proc)(enum anonymous_typeY5);
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
enum anonymous_typeY6 { GC_TOGGLE_REF_DROP
,GC_TOGGLE_REF_STRONG
,GC_TOGGLE_REF_WEAK
};
typedef enum anonymous_typeY6 GC_ToggleRefStatus;
typedef enum anonymous_typeY6 (*GC_toggleref_func)(void*);
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
typedef int (*GC_has_static_roots_func)(const char*,void*,unsigned long int);
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
    unsigned long int size;
    int allocated;
    char* class_name;
    struct sMemHeaderTiny* next;
    struct sMemHeaderTiny* prev;
    struct sMemHeaderTiny* free_next;
};
struct sMemHeader
{
    unsigned long int size;
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

char* ctermid(char* anonymous_var_nameX125);

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

char* dirname(char* anonymous_var_nameX525);

char* basename(char* anonymous_var_nameX526);

unsigned int GC_get_version();

unsigned long int GC_get_gc_no();

void GC_set_oom_fn(void* (*anonymous_var_nameX528)(unsigned long int));

void* (*GC_get_oom_fn())(unsigned long int);

void GC_set_on_heap_resize(void (*anonymous_var_nameX530)(unsigned long int));

void (*GC_get_on_heap_resize())(unsigned long int);

void GC_set_on_collection_event(void (*anonymous_var_nameX532)(enum anonymous_typeY5));

void (*GC_get_on_collection_event())(enum anonymous_typeY5);

void GC_set_find_leak(int anonymous_var_nameX533);

int GC_get_find_leak();

void GC_set_all_interior_pointers(int anonymous_var_nameX534);

int GC_get_all_interior_pointers();

void GC_set_finalize_on_demand(int anonymous_var_nameX535);

int GC_get_finalize_on_demand();

void GC_set_java_finalization(int anonymous_var_nameX536);

int GC_get_java_finalization();

void GC_set_finalizer_notifier(void (*anonymous_var_nameX537)());

void (*GC_get_finalizer_notifier())();

void GC_set_dont_expand(int anonymous_var_nameX538);

int GC_get_dont_expand();

void GC_set_full_freq(int anonymous_var_nameX539);

int GC_get_full_freq();

void GC_set_non_gc_bytes(unsigned long int anonymous_var_nameX540);

unsigned long int GC_get_non_gc_bytes();

void GC_set_no_dls(int anonymous_var_nameX541);

int GC_get_no_dls();

void GC_set_free_space_divisor(unsigned long int anonymous_var_nameX542);

unsigned long int GC_get_free_space_divisor();

void GC_set_max_retries(unsigned long int anonymous_var_nameX543);

unsigned long int GC_get_max_retries();

void GC_set_dont_precollect(int anonymous_var_nameX544);

int GC_get_dont_precollect();

void GC_set_time_limit(unsigned long int anonymous_var_nameX545);

unsigned long int GC_get_time_limit();

void GC_set_time_limit_tv(struct GC_timeval_s anonymous_var_nameX546);

struct GC_timeval_s GC_get_time_limit_tv();

void GC_set_allocd_bytes_per_finalizer(unsigned long int anonymous_var_nameX547);

unsigned long int GC_get_allocd_bytes_per_finalizer();

void GC_start_performance_measurement();

unsigned long int GC_get_full_gc_total_time();

void GC_set_pages_executable(int anonymous_var_nameX548);

int GC_get_pages_executable();

void GC_set_min_bytes_allocd(unsigned long int anonymous_var_nameX549);

unsigned long int GC_get_min_bytes_allocd();

void GC_set_rate(int anonymous_var_nameX550);

int GC_get_rate();

void GC_set_max_prior_attempts(int anonymous_var_nameX551);

int GC_get_max_prior_attempts();

void GC_set_disable_automatic_collection(int anonymous_var_nameX552);

int GC_get_disable_automatic_collection();

void GC_set_handle_fork(int anonymous_var_nameX553);

void GC_atfork_prepare();

void GC_atfork_parent();

void GC_atfork_child();

void GC_init();

int GC_is_init_called();

void GC_deinit();

void* GC_malloc(unsigned long int anonymous_var_nameX554);

void* GC_malloc_atomic(unsigned long int anonymous_var_nameX555);

char* GC_strdup(const char* anonymous_var_nameX556);

char* GC_strndup(const char* anonymous_var_nameX557, unsigned long int anonymous_var_nameX558);

void* GC_malloc_uncollectable(unsigned long int anonymous_var_nameX559);

void* GC_malloc_stubborn(unsigned long int anonymous_var_nameX560);

void* GC_memalign(unsigned long int anonymous_var_nameX561, unsigned long int anonymous_var_nameX562);

int GC_posix_memalign(void** anonymous_var_nameX563, unsigned long int anonymous_var_nameX564, unsigned long int anonymous_var_nameX565);

void GC_free(void* anonymous_var_nameX566);

void GC_change_stubborn(const void* anonymous_var_nameX567);

void GC_end_stubborn_change(const void* anonymous_var_nameX568);

void* GC_base(void* anonymous_var_nameX569);

int GC_is_heap_ptr(const void* anonymous_var_nameX570);

unsigned long int GC_size(const void* anonymous_var_nameX571);

void* GC_realloc(void* anonymous_var_nameX572, unsigned long int anonymous_var_nameX573);

int GC_expand_hp(unsigned long int anonymous_var_nameX574);

void GC_set_max_heap_size(unsigned long int anonymous_var_nameX575);

void GC_exclude_static_roots(void* anonymous_var_nameX576, void* anonymous_var_nameX577);

void GC_clear_exclusion_table();

void GC_clear_roots();

void GC_add_roots(void* anonymous_var_nameX578, void* anonymous_var_nameX579);

void GC_remove_roots(void* anonymous_var_nameX580, void* anonymous_var_nameX581);

void GC_register_displacement(unsigned long int anonymous_var_nameX582);

void GC_debug_register_displacement(unsigned long int anonymous_var_nameX583);

void GC_gcollect();

void GC_gcollect_and_unmap();

int GC_try_to_collect(int (*anonymous_var_nameX584)());

void GC_set_stop_func(int (*anonymous_var_nameX585)());

int (*GC_get_stop_func())();

unsigned long int GC_get_heap_size();

unsigned long int GC_get_free_bytes();

unsigned long int GC_get_unmapped_bytes();

unsigned long int GC_get_bytes_since_gc();

unsigned long int GC_get_expl_freed_bytes_since_gc();

unsigned long int GC_get_total_bytes();

unsigned long int GC_get_obtained_from_os_bytes();

void GC_get_heap_usage_safe(unsigned long int* anonymous_var_nameX586, unsigned long int* anonymous_var_nameX587, unsigned long int* anonymous_var_nameX588, unsigned long int* anonymous_var_nameX589, unsigned long int* anonymous_var_nameX590);

unsigned long int GC_get_prof_stats(struct GC_prof_stats_s* anonymous_var_nameX591, unsigned long int anonymous_var_nameX592);

unsigned long int GC_get_size_map_at(int i);

unsigned long int GC_get_memory_use();

void GC_disable();

int GC_is_disabled();

void GC_enable();

void GC_set_manual_vdb_allowed(int anonymous_var_nameX593);

int GC_get_manual_vdb_allowed();

void GC_enable_incremental();

int GC_is_incremental_mode();

int GC_incremental_protection_needs();

void GC_start_incremental_collection();

int GC_collect_a_little();

void* GC_malloc_ignore_off_page(unsigned long int anonymous_var_nameX594);

void* GC_malloc_atomic_ignore_off_page(unsigned long int anonymous_var_nameX595);

void* GC_malloc_atomic_uncollectable(unsigned long int anonymous_var_nameX596);

void* GC_debug_malloc_atomic_uncollectable(unsigned long int anonymous_var_nameX597, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc(unsigned long int anonymous_var_nameX598, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_atomic(unsigned long int anonymous_var_nameX599, unsigned long int ra, const char* s, int i);

char* GC_debug_strdup(const char* anonymous_var_nameX600, unsigned long int ra, const char* s, int i);

char* GC_debug_strndup(const char* anonymous_var_nameX601, unsigned long int anonymous_var_nameX602, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_uncollectable(unsigned long int anonymous_var_nameX603, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_stubborn(unsigned long int anonymous_var_nameX604, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_ignore_off_page(unsigned long int anonymous_var_nameX605, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_atomic_ignore_off_page(unsigned long int anonymous_var_nameX606, unsigned long int ra, const char* s, int i);

void GC_debug_free(void* anonymous_var_nameX607);

void* GC_debug_realloc(void* anonymous_var_nameX608, unsigned long int anonymous_var_nameX609, unsigned long int ra, const char* s, int i);

void GC_debug_change_stubborn(const void* anonymous_var_nameX610);

void GC_debug_end_stubborn_change(const void* anonymous_var_nameX611);

void* GC_debug_malloc_replacement(unsigned long int anonymous_var_nameX612);

void* GC_debug_realloc_replacement(void* anonymous_var_nameX613, unsigned long int anonymous_var_nameX614);

void GC_register_finalizer(void* anonymous_var_nameX617, void (*anonymous_var_nameX618)(void*,void*), void* anonymous_var_nameX619, void (*anonymous_var_nameX620)(void*,void*), void** anonymous_var_nameX621);

void GC_debug_register_finalizer(void* anonymous_var_nameX622, void (*anonymous_var_nameX623)(void*,void*), void* anonymous_var_nameX624, void (*anonymous_var_nameX625)(void*,void*), void** anonymous_var_nameX626);

void GC_register_finalizer_ignore_self(void* anonymous_var_nameX627, void (*anonymous_var_nameX628)(void*,void*), void* anonymous_var_nameX629, void (*anonymous_var_nameX630)(void*,void*), void** anonymous_var_nameX631);

void GC_debug_register_finalizer_ignore_self(void* anonymous_var_nameX632, void (*anonymous_var_nameX633)(void*,void*), void* anonymous_var_nameX634, void (*anonymous_var_nameX635)(void*,void*), void** anonymous_var_nameX636);

void GC_register_finalizer_no_order(void* anonymous_var_nameX637, void (*anonymous_var_nameX638)(void*,void*), void* anonymous_var_nameX639, void (*anonymous_var_nameX640)(void*,void*), void** anonymous_var_nameX641);

void GC_debug_register_finalizer_no_order(void* anonymous_var_nameX642, void (*anonymous_var_nameX643)(void*,void*), void* anonymous_var_nameX644, void (*anonymous_var_nameX645)(void*,void*), void** anonymous_var_nameX646);

void GC_register_finalizer_unreachable(void* anonymous_var_nameX647, void (*anonymous_var_nameX648)(void*,void*), void* anonymous_var_nameX649, void (*anonymous_var_nameX650)(void*,void*), void** anonymous_var_nameX651);

void GC_debug_register_finalizer_unreachable(void* anonymous_var_nameX652, void (*anonymous_var_nameX653)(void*,void*), void* anonymous_var_nameX654, void (*anonymous_var_nameX655)(void*,void*), void** anonymous_var_nameX656);

int GC_register_disappearing_link(void** anonymous_var_nameX657);

int GC_general_register_disappearing_link(void** anonymous_var_nameX658, const void* anonymous_var_nameX659);

int GC_move_disappearing_link(void** anonymous_var_nameX660, void** anonymous_var_nameX661);

int GC_unregister_disappearing_link(void** anonymous_var_nameX662);

int GC_register_long_link(void** anonymous_var_nameX663, const void* anonymous_var_nameX664);

int GC_move_long_link(void** anonymous_var_nameX665, void** anonymous_var_nameX666);

int GC_unregister_long_link(void** anonymous_var_nameX667);

void GC_set_toggleref_func(enum anonymous_typeY6 (*anonymous_var_nameX669)(void*));

enum anonymous_typeY6 (*GC_get_toggleref_func())(void*);

int GC_toggleref_add(void* anonymous_var_nameX670, int anonymous_var_nameX671);

void GC_set_await_finalize_proc(void (*anonymous_var_nameX673)(void*));

void (*GC_get_await_finalize_proc())(void*);

int GC_should_invoke_finalizers();

int GC_invoke_finalizers();

void GC_noop1(unsigned long int anonymous_var_nameX674);

void GC_set_warn_proc(void (*anonymous_var_nameX677)(char*,unsigned long int));

void (*GC_get_warn_proc())(char*,unsigned long int);

void GC_ignore_warn_proc(char* anonymous_var_nameX678, unsigned long int anonymous_var_nameX679);

void GC_set_log_fd(int anonymous_var_nameX680);

void GC_set_abort_func(void (*anonymous_var_nameX682)(const char*));

void (*GC_get_abort_func())(const char*);

void GC_abort_on_oom();

void* GC_call_with_alloc_lock(void* (*anonymous_var_nameX684)(void*), void* anonymous_var_nameX685);

void* GC_call_with_stack_base(void* (*anonymous_var_nameX688)(struct GC_stack_base*,void*), void* anonymous_var_nameX689);

void GC_start_mark_threads();

void* GC_do_blocking(void* (*anonymous_var_nameX690)(void*), void* anonymous_var_nameX691);

void* GC_call_with_gc_active(void* (*anonymous_var_nameX692)(void*), void* anonymous_var_nameX693);

int GC_get_stack_base(struct GC_stack_base* anonymous_var_nameX694);

void* GC_get_my_stackbottom(struct GC_stack_base* anonymous_var_nameX695);

void GC_set_stackbottom(void* anonymous_var_nameX696, const struct GC_stack_base* anonymous_var_nameX697);

void* GC_same_obj(void* anonymous_var_nameX698, void* anonymous_var_nameX699);

void* GC_pre_incr(void** anonymous_var_nameX700, long anonymous_var_nameX701);

void* GC_post_incr(void** anonymous_var_nameX702, long anonymous_var_nameX703);

void* GC_is_visible(void* anonymous_var_nameX704);

void* GC_is_valid_displacement(void* anonymous_var_nameX705);

void GC_dump();

void GC_dump_named(const char* anonymous_var_nameX706);

void GC_dump_regions();

void GC_dump_finalization();

void GC_ptr_store_and_dirty(void* anonymous_var_nameX707, const void* anonymous_var_nameX708);

void GC_debug_ptr_store_and_dirty(void* anonymous_var_nameX709, const void* anonymous_var_nameX710);

void* GC_malloc_many(unsigned long int anonymous_var_nameX731);

void GC_register_has_static_roots_callback(int (*anonymous_var_nameX735)(const char*,void*,unsigned long int));

void GC_set_force_unmap_on_gcollect(int anonymous_var_nameX736);

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

static void* come_alloc_mem_from_heap_pool(unsigned long int size, char* sname, int sline, char* class_name);
static void come_free_mem_of_heap_pool(char* mem);
char* come_dynamic_typeof(void* mem);

void* come_calloc(unsigned long int count, unsigned long int size, char* sname, int sline, char* class_name);

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

struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long int size);

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

_Bool size_t_equals(unsigned long int self, unsigned long int right);

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

unsigned int size_t_get_hash_key(unsigned long int value);

unsigned int float_get_hash_key(float value);

unsigned int double_get_hash_key(double value);

unsigned int string_get_hash_key(char* value);

unsigned int charp_get_hash_key(char* value);

_Bool bool_clone(_Bool self);

char char_clone(char self);

short int short_clone(short short self);

int int_clone(int self);

long int long_clone(long self);

unsigned long int size_t_clone(unsigned long int self);

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

int size_t_compare(unsigned long int left, unsigned long int right);

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
struct buffer* result_0;
struct buffer* __result2__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_0, 0, sizeof(struct buffer*));
    # 1897 "./neo-c.h"
    result_0=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1897, "buffer"));
    # 1898 "./neo-c.h"
    buffer_append(result_0,self,sizeof(char)*len);
    # 1899 "./neo-c.h"
    __result2__ = __result_obj__ = result_0;
    return __result2__;
}
static inline struct buffer* shortpa_to_buffer(short short* self, unsigned long int len){
void* __result_obj__;
struct buffer* result_1;
struct buffer* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_1, 0, sizeof(struct buffer*));
    # 1904 "./neo-c.h"
    result_1=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1904, "buffer"));
    # 1905 "./neo-c.h"
    buffer_append(result_1,(char*)self,sizeof(short short)*len);
    # 1906 "./neo-c.h"
    __result3__ = __result_obj__ = result_1;
    return __result3__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long int len){
void* __result_obj__;
struct buffer* result_2;
struct buffer* __result4__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_2, 0, sizeof(struct buffer*));
    # 1911 "./neo-c.h"
    result_2=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1911, "buffer"));
    # 1912 "./neo-c.h"
    buffer_append(result_2,(char*)self,sizeof(int)*len);
    # 1913 "./neo-c.h"
    __result4__ = __result_obj__ = result_2;
    return __result4__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long int len){
void* __result_obj__;
struct buffer* result_3;
struct buffer* __result5__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_3, 0, sizeof(struct buffer*));
    # 1918 "./neo-c.h"
    result_3=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1918, "buffer"));
    # 1919 "./neo-c.h"
    buffer_append(result_3,(char*)self,sizeof(long)*len);
    # 1920 "./neo-c.h"
    __result5__ = __result_obj__ = result_3;
    return __result5__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long int len){
void* __result_obj__;
struct buffer* result_4;
struct buffer* __result6__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_4, 0, sizeof(struct buffer*));
    # 1925 "./neo-c.h"
    result_4=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1925, "buffer"));
    # 1926 "./neo-c.h"
    buffer_append(result_4,(char*)self,sizeof(float)*len);
    # 1927 "./neo-c.h"
    __result6__ = __result_obj__ = result_4;
    return __result6__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long int len){
void* __result_obj__;
struct buffer* result_5;
struct buffer* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_5, 0, sizeof(struct buffer*));
    # 1932 "./neo-c.h"
    result_5=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1932, "buffer"));
    # 1933 "./neo-c.h"
    buffer_append(result_5,(char*)self,sizeof(double)*len);
    # 1934 "./neo-c.h"
    __result7__ = __result_obj__ = result_5;
    return __result7__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1char* result_6;
struct smart_pointer$1char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_6, 0, sizeof(struct smart_pointer$1char*));
    # 1948 "./neo-c.h"
    result_6=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1948, "smart_pointer$1char");
    # 1950 "./neo-c.h"
    result_6->memory=buffer_clone(self);
    # 1951 "./neo-c.h"
    result_6->p=result_6->memory->buf;
    # 1953 "./neo-c.h"
    __result8__ = __result_obj__ = result_6;
    return __result8__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1char* result_7;
struct smart_pointer$1char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_7, 0, sizeof(struct smart_pointer$1char*));
    # 1958 "./neo-c.h"
    result_7=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1958, "smart_pointer$1char");
    # 1960 "./neo-c.h"
    result_7->memory=buffer_clone(self);
    # 1961 "./neo-c.h"
    result_7->p=(char*)result_7->memory->buf;
    # 1963 "./neo-c.h"
    __result9__ = __result_obj__ = result_7;
    return __result9__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1short* result_8;
struct smart_pointer$1short* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_8, 0, sizeof(struct smart_pointer$1short*));
    # 1968 "./neo-c.h"
    result_8=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 1968, "smart_pointer$1short");
    # 1970 "./neo-c.h"
    result_8->memory=buffer_clone(self);
    # 1971 "./neo-c.h"
    result_8->p=(short short*)result_8->memory->buf;
    # 1973 "./neo-c.h"
    __result10__ = __result_obj__ = result_8;
    return __result10__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1int* result_9;
struct smart_pointer$1int* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_9, 0, sizeof(struct smart_pointer$1int*));
    # 1978 "./neo-c.h"
    result_9=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 1978, "smart_pointer$1int");
    # 1980 "./neo-c.h"
    result_9->memory=buffer_clone(self);
    # 1981 "./neo-c.h"
    result_9->p=(int*)result_9->memory->buf;
    # 1983 "./neo-c.h"
    __result11__ = __result_obj__ = result_9;
    return __result11__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1long* result_10;
struct smart_pointer$1long* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_10, 0, sizeof(struct smart_pointer$1long*));
    # 1988 "./neo-c.h"
    result_10=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 1988, "smart_pointer$1long");
    # 1990 "./neo-c.h"
    result_10->memory=buffer_clone(self);
    # 1991 "./neo-c.h"
    result_10->p=(long*)result_10->memory->buf;
    # 1993 "./neo-c.h"
    __result12__ = __result_obj__ = result_10;
    return __result12__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long int len){
void* __result_obj__;
struct smart_pointer$1char* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2159 "./neo-c.h"
    __result14__ = __result_obj__ = smart_pointer$1char_initialize((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2159, "smart_pointer$1char"),self,len);
    return __result14__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, unsigned long int len){
void* __result_obj__;
struct smart_pointer$1short* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2164 "./neo-c.h"
    __result16__ = __result_obj__ = smart_pointer$1short_initialize((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2164, "smart_pointer$1short"),self,len);
    return __result16__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long int len){
void* __result_obj__;
struct smart_pointer$1int* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2169 "./neo-c.h"
    __result18__ = __result_obj__ = smart_pointer$1int_initialize((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2169, "smart_pointer$1int"),self,len);
    return __result18__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long int len){
void* __result_obj__;
struct smart_pointer$1long* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2174 "./neo-c.h"
    __result20__ = __result_obj__ = smart_pointer$1long_initialize((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2174, "smart_pointer$1long"),self,len);
    return __result20__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long int len){
void* __result_obj__;
struct smart_pointer$1float* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2179 "./neo-c.h"
    __result22__ = __result_obj__ = smart_pointer$1float_initialize((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./neo-c.h", 2179, "smart_pointer$1float"),self,len);
    return __result22__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long int len){
void* __result_obj__;
struct smart_pointer$1double* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2184 "./neo-c.h"
    __result24__ = __result_obj__ = smart_pointer$1double_initialize((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./neo-c.h", 2184, "smart_pointer$1double"),self,len);
    return __result24__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long int len){
void* __result_obj__;
struct list$1char* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2189 "./neo-c.h"
    __result27__ = __result_obj__ = list$1char_initialize_with_values((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./neo-c.h", 2189, "list$1char"),len,self);
    return __result27__;
}
static inline struct list$1short* shortpa_to_list(short short* self, unsigned long int len){
void* __result_obj__;
struct list$1short* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2194 "./neo-c.h"
    __result30__ = __result_obj__ = list$1short_initialize_with_values((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./neo-c.h", 2194, "list$1short"),len,self);
    return __result30__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long int len){
void* __result_obj__;
struct list$1int* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2199 "./neo-c.h"
    __result33__ = __result_obj__ = list$1int_initialize_with_values((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./neo-c.h", 2199, "list$1int"),len,self);
    return __result33__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long int len){
void* __result_obj__;
struct list$1long* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2204 "./neo-c.h"
    __result36__ = __result_obj__ = list$1long_initialize_with_values((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./neo-c.h", 2204, "list$1long"),len,self);
    return __result36__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long int len){
void* __result_obj__;
struct list$1float* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2209 "./neo-c.h"
    __result39__ = __result_obj__ = list$1float_initialize_with_values((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./neo-c.h", 2209, "list$1float"),len,self);
    return __result39__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long int len){
void* __result_obj__;
struct list$1double* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2214 "./neo-c.h"
    __result42__ = __result_obj__ = list$1double_initialize_with_values((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./neo-c.h", 2214, "list$1double"),len,self);
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
char* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2330 "./neo-c.h"
    __result49__ = __result_obj__ = xsprintf(msg,self);
    return __result49__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
char* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2335 "./neo-c.h"
    __result50__ = __result_obj__ = xsprintf(msg,self);
    return __result50__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__;
char* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2340 "./neo-c.h"
    __result51__ = __result_obj__ = xsprintf(msg,self);
    return __result51__;
}

// body function













static struct smart_pointer$1char* smart_pointer$1char_initialize(struct smart_pointer$1char* self, void* memory, int size){
void* __result_obj__;
struct smart_pointer$1char* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
        # 2000 "./neo-c.h"
        self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"));
        # 2002 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(char)*size);
        # 2004 "./neo-c.h"
        self->p=(char*)self->memory->buf;
        # 2006 "./neo-c.h"
        __result13__ = __result_obj__ = self;
        return __result13__;
}


static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size){
void* __result_obj__;
struct smart_pointer$1short* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
        # 2000 "./neo-c.h"
        self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"));
        # 2002 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(short short)*size);
        # 2004 "./neo-c.h"
        self->p=(short short*)self->memory->buf;
        # 2006 "./neo-c.h"
        __result15__ = __result_obj__ = self;
        return __result15__;
}


static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size){
void* __result_obj__;
struct smart_pointer$1int* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
        # 2000 "./neo-c.h"
        self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"));
        # 2002 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(int)*size);
        # 2004 "./neo-c.h"
        self->p=(int*)self->memory->buf;
        # 2006 "./neo-c.h"
        __result17__ = __result_obj__ = self;
        return __result17__;
}


static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size){
void* __result_obj__;
struct smart_pointer$1long* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
        # 2000 "./neo-c.h"
        self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"));
        # 2002 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(long)*size);
        # 2004 "./neo-c.h"
        self->p=(long*)self->memory->buf;
        # 2006 "./neo-c.h"
        __result19__ = __result_obj__ = self;
        return __result19__;
}


static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size){
void* __result_obj__;
struct smart_pointer$1float* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
        # 2000 "./neo-c.h"
        self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"));
        # 2002 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(float)*size);
        # 2004 "./neo-c.h"
        self->p=(float*)self->memory->buf;
        # 2006 "./neo-c.h"
        __result21__ = __result_obj__ = self;
        return __result21__;
}


static struct smart_pointer$1double* smart_pointer$1double_initialize(struct smart_pointer$1double* self, void* memory, int size){
void* __result_obj__;
struct smart_pointer$1double* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
        # 2000 "./neo-c.h"
        self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"));
        # 2002 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(double)*size);
        # 2004 "./neo-c.h"
        self->p=(double*)self->memory->buf;
        # 2006 "./neo-c.h"
        __result23__ = __result_obj__ = self;
        return __result23__;
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
        return __result26__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__;
_Bool _if_conditional1;
struct list_item$1char* litem_12;
_Bool _if_conditional2;
struct list_item$1char* litem_13;
struct list_item$1char* litem_14;
struct list$1char* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_12, 0, sizeof(struct list_item$1char*));
memset(&litem_13, 0, sizeof(struct list_item$1char*));
memset(&litem_14, 0, sizeof(struct list_item$1char*));
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional1=self->len==0,                _if_conditional1) {
                    # 217 "./neo-c.h"
                    litem_12=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 217, "list_item$1char");
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
                    if(_if_conditional2=self->len==1,                    _if_conditional2) {
                        # 227 "./neo-c.h"
                        litem_13=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 227, "list_item$1char");
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
                        litem_14=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 237, "list_item$1char");
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


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values){
void* __result_obj__;
int i_15;
struct list$1short* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_15, 0, sizeof(int));
        # 103 "./neo-c.h"
        self->head=((void*)0);
        # 104 "./neo-c.h"
        self->tail=((void*)0);
        # 105 "./neo-c.h"
        self->len=0;
        # 111 "./neo-c.h"
        for(        i_15=0;        i_15<num_value;        i_15++        ){
            # 108 "./neo-c.h"
            list$1short_push_back(self,values[i_15]);
        }
        # 111 "./neo-c.h"
        __result29__ = __result_obj__ = self;
        return __result29__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short short item){
void* __result_obj__;
_Bool _if_conditional3;
struct list_item$1short* litem_16;
_Bool _if_conditional4;
struct list_item$1short* litem_17;
struct list_item$1short* litem_18;
struct list$1short* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_16, 0, sizeof(struct list_item$1short*));
memset(&litem_17, 0, sizeof(struct list_item$1short*));
memset(&litem_18, 0, sizeof(struct list_item$1short*));
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional3=self->len==0,                _if_conditional3) {
                    # 217 "./neo-c.h"
                    litem_16=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 217, "list_item$1short");
                    # 219 "./neo-c.h"
                    litem_16->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_16->next=((void*)0);
                    # 221 "./neo-c.h"
                    litem_16->item=item;
                    # 223 "./neo-c.h"
                    self->tail=litem_16;
                    # 224 "./neo-c.h"
                    self->head=litem_16;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional4=self->len==1,                    _if_conditional4) {
                        # 227 "./neo-c.h"
                        litem_17=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 227, "list_item$1short");
                        # 229 "./neo-c.h"
                        litem_17->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_17->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_17->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_17;
                        # 234 "./neo-c.h"
                        self->head->next=litem_17;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_18=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 237, "list_item$1short");
                        # 239 "./neo-c.h"
                        litem_18->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_18->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_18->item=item;
                        # 243 "./neo-c.h"
                        self->tail->next=litem_18;
                        # 244 "./neo-c.h"
                        self->tail=litem_18;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
                __result28__ = __result_obj__ = self;
                return __result28__;
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__;
int i_19;
struct list$1int* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_19, 0, sizeof(int));
        # 103 "./neo-c.h"
        self->head=((void*)0);
        # 104 "./neo-c.h"
        self->tail=((void*)0);
        # 105 "./neo-c.h"
        self->len=0;
        # 111 "./neo-c.h"
        for(        i_19=0;        i_19<num_value;        i_19++        ){
            # 108 "./neo-c.h"
            list$1int_push_back(self,values[i_19]);
        }
        # 111 "./neo-c.h"
        __result32__ = __result_obj__ = self;
        return __result32__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__;
_Bool _if_conditional5;
struct list_item$1int* litem_20;
_Bool _if_conditional6;
struct list_item$1int* litem_21;
struct list_item$1int* litem_22;
struct list$1int* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_20, 0, sizeof(struct list_item$1int*));
memset(&litem_21, 0, sizeof(struct list_item$1int*));
memset(&litem_22, 0, sizeof(struct list_item$1int*));
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional5=self->len==0,                _if_conditional5) {
                    # 217 "./neo-c.h"
                    litem_20=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 217, "list_item$1int");
                    # 219 "./neo-c.h"
                    litem_20->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_20->next=((void*)0);
                    # 221 "./neo-c.h"
                    litem_20->item=item;
                    # 223 "./neo-c.h"
                    self->tail=litem_20;
                    # 224 "./neo-c.h"
                    self->head=litem_20;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional6=self->len==1,                    _if_conditional6) {
                        # 227 "./neo-c.h"
                        litem_21=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 227, "list_item$1int");
                        # 229 "./neo-c.h"
                        litem_21->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_21->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_21->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_21;
                        # 234 "./neo-c.h"
                        self->head->next=litem_21;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_22=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 237, "list_item$1int");
                        # 239 "./neo-c.h"
                        litem_22->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_22->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_22->item=item;
                        # 243 "./neo-c.h"
                        self->tail->next=litem_22;
                        # 244 "./neo-c.h"
                        self->tail=litem_22;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
                __result31__ = __result_obj__ = self;
                return __result31__;
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__;
int i_23;
struct list$1long* __result35__;
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
            list$1long_push_back(self,values[i_23]);
        }
        # 111 "./neo-c.h"
        __result35__ = __result_obj__ = self;
        return __result35__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__;
_Bool _if_conditional7;
struct list_item$1long* litem_24;
_Bool _if_conditional8;
struct list_item$1long* litem_25;
struct list_item$1long* litem_26;
struct list$1long* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_24, 0, sizeof(struct list_item$1long*));
memset(&litem_25, 0, sizeof(struct list_item$1long*));
memset(&litem_26, 0, sizeof(struct list_item$1long*));
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional7=self->len==0,                _if_conditional7) {
                    # 217 "./neo-c.h"
                    litem_24=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 217, "list_item$1long");
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
                    if(_if_conditional8=self->len==1,                    _if_conditional8) {
                        # 227 "./neo-c.h"
                        litem_25=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 227, "list_item$1long");
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
                        litem_26=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 237, "list_item$1long");
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
                __result34__ = __result_obj__ = self;
                return __result34__;
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__;
int i_27;
struct list$1float* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_27, 0, sizeof(int));
        # 103 "./neo-c.h"
        self->head=((void*)0);
        # 104 "./neo-c.h"
        self->tail=((void*)0);
        # 105 "./neo-c.h"
        self->len=0;
        # 111 "./neo-c.h"
        for(        i_27=0;        i_27<num_value;        i_27++        ){
            # 108 "./neo-c.h"
            list$1float_push_back(self,values[i_27]);
        }
        # 111 "./neo-c.h"
        __result38__ = __result_obj__ = self;
        return __result38__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__;
_Bool _if_conditional9;
struct list_item$1float* litem_28;
_Bool _if_conditional10;
struct list_item$1float* litem_29;
struct list_item$1float* litem_30;
struct list$1float* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_28, 0, sizeof(struct list_item$1float*));
memset(&litem_29, 0, sizeof(struct list_item$1float*));
memset(&litem_30, 0, sizeof(struct list_item$1float*));
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional9=self->len==0,                _if_conditional9) {
                    # 217 "./neo-c.h"
                    litem_28=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 217, "list_item$1float");
                    # 219 "./neo-c.h"
                    litem_28->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_28->next=((void*)0);
                    # 221 "./neo-c.h"
                    litem_28->item=item;
                    # 223 "./neo-c.h"
                    self->tail=litem_28;
                    # 224 "./neo-c.h"
                    self->head=litem_28;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional10=self->len==1,                    _if_conditional10) {
                        # 227 "./neo-c.h"
                        litem_29=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 227, "list_item$1float");
                        # 229 "./neo-c.h"
                        litem_29->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_29->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_29->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_29;
                        # 234 "./neo-c.h"
                        self->head->next=litem_29;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_30=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 237, "list_item$1float");
                        # 239 "./neo-c.h"
                        litem_30->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_30->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_30->item=item;
                        # 243 "./neo-c.h"
                        self->tail->next=litem_30;
                        # 244 "./neo-c.h"
                        self->tail=litem_30;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
                __result37__ = __result_obj__ = self;
                return __result37__;
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__;
int i_31;
struct list$1double* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_31, 0, sizeof(int));
        # 103 "./neo-c.h"
        self->head=((void*)0);
        # 104 "./neo-c.h"
        self->tail=((void*)0);
        # 105 "./neo-c.h"
        self->len=0;
        # 111 "./neo-c.h"
        for(        i_31=0;        i_31<num_value;        i_31++        ){
            # 108 "./neo-c.h"
            list$1double_push_back(self,values[i_31]);
        }
        # 111 "./neo-c.h"
        __result41__ = __result_obj__ = self;
        return __result41__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__;
_Bool _if_conditional11;
struct list_item$1double* litem_32;
_Bool _if_conditional12;
struct list_item$1double* litem_33;
struct list_item$1double* litem_34;
struct list$1double* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_32, 0, sizeof(struct list_item$1double*));
memset(&litem_33, 0, sizeof(struct list_item$1double*));
memset(&litem_34, 0, sizeof(struct list_item$1double*));
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional11=self->len==0,                _if_conditional11) {
                    # 217 "./neo-c.h"
                    litem_32=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 217, "list_item$1double");
                    # 219 "./neo-c.h"
                    litem_32->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_32->next=((void*)0);
                    # 221 "./neo-c.h"
                    litem_32->item=item;
                    # 223 "./neo-c.h"
                    self->tail=litem_32;
                    # 224 "./neo-c.h"
                    self->head=litem_32;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional12=self->len==1,                    _if_conditional12) {
                        # 227 "./neo-c.h"
                        litem_33=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 227, "list_item$1double");
                        # 229 "./neo-c.h"
                        litem_33->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_33->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_33->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_33;
                        # 234 "./neo-c.h"
                        self->head->next=litem_33;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_34=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 237, "list_item$1double");
                        # 239 "./neo-c.h"
                        litem_34->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_34->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_34->item=item;
                        # 243 "./neo-c.h"
                        self->tail->next=litem_34;
                        # 244 "./neo-c.h"
                        self->tail=litem_34;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
                __result40__ = __result_obj__ = self;
                return __result40__;
}










void come_push_stackframe(char* sname, int sline, int id){
void* __result_obj__;
_Bool _if_conditional13;
memset(&__result_obj__, 0, sizeof(void*));
    # 33 "libneo-c-gc.c"
    # 26 "libneo-c-gc.c"
    if(_if_conditional13=gNumComeStackFrame<1024,    _if_conditional13) {
        # 27 "libneo-c-gc.c"
        gComeStackFrameSName[gNumComeStackFrame]=sname;
        # 28 "libneo-c-gc.c"
        gComeStackFrameSLine[gNumComeStackFrame]=sline;
        # 29 "libneo-c-gc.c"
        gComeStackFrameID[gNumComeStackFrame]=id;
        # 31 "libneo-c-gc.c"
        gNumComeStackFrame++;
    }
}

void come_pop_stackframe(){
void* __result_obj__;
_Bool _if_conditional14;
memset(&__result_obj__, 0, sizeof(void*));
    # 40 "libneo-c-gc.c"
    # 37 "libneo-c-gc.c"
    if(_if_conditional14=gNumComeStackFrame>0,    _if_conditional14) {
        # 38 "libneo-c-gc.c"
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
    # 44 "libneo-c-gc.c"
    buf_35=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 44, "buffer"));
    # 45 "libneo-c-gc.c"
    buffer_append_str(buf_35,xsprintf("%s %d\n",sname,sline));
    # 50 "libneo-c-gc.c"
    for(    i_36=gNumComeStackFrame-2;    i_36>=0;    i_36--    ){
        # 47 "libneo-c-gc.c"
        buffer_append_str(buf_35,xsprintf("%s %d #%d\n",gComeStackFrameSName[i_36],gComeStackFrameSLine[i_36],gComeStackFrameID[i_36]));
    }
    # 53 "libneo-c-gc.c"
    # 50 "libneo-c-gc.c"
    if(gComeStackFrameBuffer) {
        # 51 "libneo-c-gc.c"
        free(gComeStackFrameBuffer);
    }
    # 53 "libneo-c-gc.c"
    gComeStackFrameBuffer=strdup(buffer_to_string(buf_35));
}

void exception_stackframe(){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 58 "libneo-c-gc.c"
    printf("%s",gComeStackFrameBuffer);
}

void stackframe(){
void* __result_obj__;
int i_37;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_37, 0, sizeof(int));
    # 66 "libneo-c-gc.c"
    for(    i_37=gNumComeStackFrame-1;    i_37>=0;    i_37--    ){
        # 64 "libneo-c-gc.c"
        printf("%s %d #%d\n",gComeStackFrameSName[i_37],gComeStackFrameSLine[i_37],gComeStackFrameID[i_37]);
    }
}

char* come_get_stackframe(){
void* __result_obj__;
char* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
    # 70 "libneo-c-gc.c"
    __result52__ = __result_obj__ = __builtin_string(gComeStackFrameBuffer);
    return __result52__;
}

void* come_null_check(void* mem, char* sname, int sline, int id){
void* __result_obj__;
_Bool _if_conditional16;
void* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
    # 81 "libneo-c-gc.c"
    # 75 "libneo-c-gc.c"
    if(_if_conditional16=mem==((void*)0),    _if_conditional16) {
        # 76 "libneo-c-gc.c"
        printf("%s %d #%d: null check error\n",sname,sline,id);
        # 77 "libneo-c-gc.c"
        stackframe();
        # 78 "libneo-c-gc.c"
        exit(2);
    }
    # 81 "libneo-c-gc.c"
    __result53__ = __result_obj__ = mem;
    return __result53__;
}

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline){
void* __result_obj__;
_Bool _if_conditional17;
_Bool _if_conditional18;
_Bool _if_conditional19;
void* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
    # 92 "libneo-c-gc.c"
    # 86 "libneo-c-gc.c"
    if(_if_conditional17=mem==((void*)0),    _if_conditional17) {
        # 87 "libneo-c-gc.c"
        printf("%s %d: null check error\n",sname,sline);
        # 88 "libneo-c-gc.c"
        stackframe();
        # 89 "libneo-c-gc.c"
        exit(2);
    }
    # 98 "libneo-c-gc.c"
    # 92 "libneo-c-gc.c"
    if(_if_conditional18=mem<begin,    _if_conditional18) {
        # 93 "libneo-c-gc.c"
        printf("%s %d: range check error\n",sname,sline);
        # 94 "libneo-c-gc.c"
        stackframe();
        # 95 "libneo-c-gc.c"
        exit(2);
    }
    # 104 "libneo-c-gc.c"
    # 98 "libneo-c-gc.c"
    if(_if_conditional19=mem>=end,    _if_conditional19) {
        # 99 "libneo-c-gc.c"
        printf("%s %d: range check error\n",sname,sline);
        # 100 "libneo-c-gc.c"
        stackframe();
        # 101 "libneo-c-gc.c"
        exit(2);
    }
    # 104 "libneo-c-gc.c"
    __result54__ = __result_obj__ = mem;
    return __result54__;
}

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional20;
_Bool __result55__;
memset(&__result_obj__, 0, sizeof(void*));
    # 115 "libneo-c-gc.c"
    # 109 "libneo-c-gc.c"
    if(_if_conditional20=!self,    _if_conditional20) {
        # 110 "libneo-c-gc.c"
        block(parent);
        # 111 "libneo-c-gc.c"
        stackframe();
        # 112 "libneo-c-gc.c"
        exit(1);
    }
    # 115 "libneo-c-gc.c"
    __result55__ = self;
    return __result55__;
}

_Bool bool_value(_Bool self){
void* __result_obj__;
_Bool __result56__;
memset(&__result_obj__, 0, sizeof(void*));
    # 120 "libneo-c-gc.c"
    __result56__ = self;
    return __result56__;
}

int int_catch(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional21;
int __result57__;
memset(&__result_obj__, 0, sizeof(void*));
    # 129 "libneo-c-gc.c"
    # 125 "libneo-c-gc.c"
    if(_if_conditional21=self<0,    _if_conditional21) {
        # 126 "libneo-c-gc.c"
        block(parent);
    }
    # 129 "libneo-c-gc.c"
    __result57__ = self;
    return __result57__;
}

int int_expect(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional22;
int __result58__;
memset(&__result_obj__, 0, sizeof(void*));
    # 140 "libneo-c-gc.c"
    # 134 "libneo-c-gc.c"
    if(_if_conditional22=self<0,    _if_conditional22) {
        # 135 "libneo-c-gc.c"
        block(parent);
        # 136 "libneo-c-gc.c"
        stackframe();
        # 137 "libneo-c-gc.c"
        exit(1);
    }
    # 140 "libneo-c-gc.c"
    __result58__ = self;
    return __result58__;
}

int int_value(int self){
void* __result_obj__;
int __result59__;
memset(&__result_obj__, 0, sizeof(void*));
    # 145 "libneo-c-gc.c"
    __result59__ = self;
    return __result59__;
}

int int_except(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional23;
int __result60__;
memset(&__result_obj__, 0, sizeof(void*));
    # 154 "libneo-c-gc.c"
    # 150 "libneo-c-gc.c"
    if(_if_conditional23=self<0,    _if_conditional23) {
        # 151 "libneo-c-gc.c"
        block(parent);
    }
    # 154 "libneo-c-gc.c"
    __result60__ = self;
    return __result60__;
}

_Bool bool_except(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional24;
_Bool __result61__;
memset(&__result_obj__, 0, sizeof(void*));
    # 163 "libneo-c-gc.c"
    # 159 "libneo-c-gc.c"
    if(_if_conditional24=!self,    _if_conditional24) {
        # 160 "libneo-c-gc.c"
        block(parent);
    }
    # 163 "libneo-c-gc.c"
    __result61__ = self;
    return __result61__;
}

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional25;
_Bool __result62__;
memset(&__result_obj__, 0, sizeof(void*));
    # 172 "libneo-c-gc.c"
    # 168 "libneo-c-gc.c"
    if(_if_conditional25=!self,    _if_conditional25) {
        # 169 "libneo-c-gc.c"
        block(parent);
    }
    # 172 "libneo-c-gc.c"
    __result62__ = self;
    return __result62__;
}

void xassert(char* msg, _Bool test){
void* __result_obj__;
_Bool _if_conditional26;
memset(&__result_obj__, 0, sizeof(void*));
    # 177 "libneo-c-gc.c"
    printf("%s...",msg);
    # 182 "libneo-c-gc.c"
    # 178 "libneo-c-gc.c"
    if(_if_conditional26=!test,    _if_conditional26) {
        # 179 "libneo-c-gc.c"
        puts("false");
        # 180 "libneo-c-gc.c"
        exit(2);
    }
    # 182 "libneo-c-gc.c"
    puts("ok");
}

void come_heap_init(int come_malloc, int come_debug, int come_gc){
void* __result_obj__;
_Bool _if_conditional27;
memset(&__result_obj__, 0, sizeof(void*));
    # 226 "libneo-c-gc.c"
    gComeMallocLib=(_Bool)0;
    # 228 "libneo-c-gc.c"
    gComeDebugLib=come_debug;
    # 228 "libneo-c-gc.c"
    gComeGCLib=come_gc;
    # 236 "libneo-c-gc.c"
    # 230 "libneo-c-gc.c"
    if(gComeGCLib) {
        # 231 "libneo-c-gc.c"
        GC_init();
        # 232 "libneo-c-gc.c"
        GC_set_warn_proc(GC_ignore_warn_proc);
        # 233 "libneo-c-gc.c"
        GC_enable_incremental();
    }
    # 236 "libneo-c-gc.c"
    gComeStackFrameBuffer=((void*)0);
}

void come_heap_final(){
void* __result_obj__;
_Bool _if_conditional28;
memset(&__result_obj__, 0, sizeof(void*));
    # 244 "libneo-c-gc.c"
    # 241 "libneo-c-gc.c"
    if(gComeStackFrameBuffer) {
        # 242 "libneo-c-gc.c"
        free(gComeStackFrameBuffer);
    }
}

static void* come_alloc_mem_from_heap_pool(unsigned long int size, char* sname, int sline, char* class_name){
void* __result_obj__;
_Bool _if_conditional29;
void* result_38;
struct sMemHeader* it_39;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional32;
void* __result63__;
void* result_40;
struct sMemHeaderTiny* it_41;
_Bool _if_conditional33;
_Bool _if_conditional34;
void* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_38, 0, sizeof(void*));
memset(&it_39, 0, sizeof(struct sMemHeader*));
memset(&result_40, 0, sizeof(void*));
memset(&it_41, 0, sizeof(struct sMemHeaderTiny*));
    # 322 "libneo-c-gc.c"
    # 248 "libneo-c-gc.c"
    if(gComeDebugLib) {
        # 249 "libneo-c-gc.c"
        result_38=GC_malloc(size+sizeof(struct sMemHeader));
        # 250 "libneo-c-gc.c"
        memset(result_38,0,size+sizeof(struct sMemHeader));
        # 252 "libneo-c-gc.c"
        it_39=result_38;
        # 254 "libneo-c-gc.c"
        it_39->allocated=177783;
        # 256 "libneo-c-gc.c"
        it_39->size=size+sizeof(struct sMemHeader);
        # 259 "libneo-c-gc.c"
        come_push_stackframe(sname,sline,0);
        # 273 "libneo-c-gc.c"
        # 262 "libneo-c-gc.c"
        if(_if_conditional30=gNumComeStackFrame<16,        _if_conditional30) {
            # 263 "libneo-c-gc.c"
            memcpy(it_39->sname,gComeStackFrameSName,sizeof(char*)*gNumComeStackFrame);
            # 264 "libneo-c-gc.c"
            memcpy(it_39->sline,gComeStackFrameSLine,sizeof(int)*gNumComeStackFrame);
            # 265 "libneo-c-gc.c"
            memcpy(it_39->id,gComeStackFrameID,sizeof(int)*gNumComeStackFrame);
        }
        else {
            # 268 "libneo-c-gc.c"
            memcpy(it_39->sname,gComeStackFrameSName+gNumComeStackFrame-16-1,sizeof(char*)*16);
            # 269 "libneo-c-gc.c"
            memcpy(it_39->sline,gComeStackFrameSLine+gNumComeStackFrame-16-1,sizeof(int)*16);
            # 270 "libneo-c-gc.c"
            memcpy(it_39->id,gComeStackFrameID+gNumComeStackFrame-16-1,sizeof(int)*16);
        }
        # 273 "libneo-c-gc.c"
        come_pop_stackframe();
        # 275 "libneo-c-gc.c"
        it_39->next=gAllocMem;
        # 276 "libneo-c-gc.c"
        it_39->prev=((void*)0);
        # 285 "libneo-c-gc.c"
        # 278 "libneo-c-gc.c"
        if(class_name) {
            # 279 "libneo-c-gc.c"
            it_39->class_name=GC_strdup(class_name);
        }
        else {
            # 282 "libneo-c-gc.c"
            it_39->class_name=((void*)0);
        }
        # 289 "libneo-c-gc.c"
        # 285 "libneo-c-gc.c"
        if(gAllocMem) {
            # 286 "libneo-c-gc.c"
            gAllocMem->prev=it_39;
        }
        # 289 "libneo-c-gc.c"
        gAllocMem=it_39;
        # 291 "libneo-c-gc.c"
        __result63__ = __result_obj__ = (char*)result_38+sizeof(struct sMemHeader);
        return __result63__;
    }
    else {
        # 294 "libneo-c-gc.c"
        result_40=GC_malloc(size+sizeof(struct sMemHeaderTiny));
        # 295 "libneo-c-gc.c"
        memset(result_40,0,size+sizeof(struct sMemHeaderTiny));
        # 297 "libneo-c-gc.c"
        it_41=result_40;
        # 299 "libneo-c-gc.c"
        it_41->allocated=177783;
        # 308 "libneo-c-gc.c"
        # 301 "libneo-c-gc.c"
        if(class_name) {
            # 302 "libneo-c-gc.c"
            it_41->class_name=GC_strdup(class_name);
        }
        else {
            # 305 "libneo-c-gc.c"
            it_41->class_name=((void*)0);
        }
        # 308 "libneo-c-gc.c"
        it_41->size=size+sizeof(struct sMemHeaderTiny);
        # 311 "libneo-c-gc.c"
        it_41->next=(struct sMemHeaderTiny*)gAllocMem;
        # 312 "libneo-c-gc.c"
        it_41->prev=((void*)0);
        # 318 "libneo-c-gc.c"
        # 314 "libneo-c-gc.c"
        if(gAllocMem) {
            # 315 "libneo-c-gc.c"
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_41;
        }
        # 318 "libneo-c-gc.c"
        gAllocMem=(struct sMemHeader*)it_41;
        # 320 "libneo-c-gc.c"
        __result64__ = __result_obj__ = (char*)result_40+sizeof(struct sMemHeaderTiny);
        return __result64__;
    }
}

static void come_free_mem_of_heap_pool(char* mem){
void* __result_obj__;
_Bool _if_conditional35;
_Bool _if_conditional36;
memset(&__result_obj__, 0, sizeof(void*));
    # 332 "libneo-c-gc.c"
    # 326 "libneo-c-gc.c"
    if(mem) {
        # 331 "libneo-c-gc.c"
        # 327 "libneo-c-gc.c"
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
char* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_42, 0, sizeof(struct sMemHeaderTiny*));
    # 336 "libneo-c-gc.c"
    it_42=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int)-sizeof(struct sMemHeaderTiny));
    # 343 "libneo-c-gc.c"
    # 338 "libneo-c-gc.c"
    if(_if_conditional37=it_42->allocated!=177783,    _if_conditional37) {
        # 339 "libneo-c-gc.c"
        fprintf((stderr),"invalid heap object(%p)\n",it_42);
        # 340 "libneo-c-gc.c"
        exit(2);
    }
    # 343 "libneo-c-gc.c"
    __result65__ = __result_obj__ = it_42->class_name;
    return __result65__;
}

void* come_calloc(unsigned long int count, unsigned long int size, char* sname, int sline, char* class_name){
void* __result_obj__;
char* mem_43;
unsigned long int* ref_count_44;
unsigned long int* size2_45;
void* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_43, 0, sizeof(char*));
memset(&ref_count_44, 0, sizeof(unsigned long int*));
memset(&size2_45, 0, sizeof(unsigned long int*));
    # 349 "libneo-c-gc.c"
    mem_43=come_alloc_mem_from_heap_pool(sizeof(unsigned long int)+sizeof(unsigned long int)+count*size,sname,sline,class_name);
    # 351 "libneo-c-gc.c"
    ref_count_44=(unsigned long int*)mem_43;
    # 353 "libneo-c-gc.c"
    *ref_count_44=0;
    # 355 "libneo-c-gc.c"
    size2_45=(unsigned long int*)(mem_43+sizeof(unsigned long int));
    # 357 "libneo-c-gc.c"
    *size2_45=size*count+sizeof(unsigned long int)+sizeof(unsigned long int);
    # 359 "libneo-c-gc.c"
    __result66__ = __result_obj__ = mem_43+sizeof(unsigned long int)+sizeof(unsigned long int);
    return __result66__;
}

void come_free_object(void* mem){
void* __result_obj__;
_Bool _if_conditional38;
unsigned long int* ref_count_46;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_46, 0, sizeof(unsigned long int*));
    # 368 "libneo-c-gc.c"
    # 364 "libneo-c-gc.c"
    if(_if_conditional38=mem==((void*)0),    _if_conditional38) {
        # 365 "libneo-c-gc.c"
        return;
    }
    # 368 "libneo-c-gc.c"
    ref_count_46=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    # 370 "libneo-c-gc.c"
    come_free_mem_of_heap_pool((char*)ref_count_46);
}

void come_free(void* mem){
void* __result_obj__;
_Bool _if_conditional39;
unsigned long int* ref_count_47;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_47, 0, sizeof(unsigned long int*));
    # 379 "libneo-c-gc.c"
    # 375 "libneo-c-gc.c"
    if(_if_conditional39=mem==((void*)0),    _if_conditional39) {
        # 376 "libneo-c-gc.c"
        return;
    }
    # 379 "libneo-c-gc.c"
    ref_count_47=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    # 381 "libneo-c-gc.c"
    come_free_mem_of_heap_pool((char*)ref_count_47);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__;
_Bool _if_conditional40;
void* __result67__;
char* mem_48;
unsigned long int* size_p_49;
unsigned long int size_50;
void* result_51;
void* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_48, 0, sizeof(char*));
memset(&size_p_49, 0, sizeof(unsigned long int*));
memset(&size_50, 0, sizeof(unsigned long int));
memset(&result_51, 0, sizeof(void*));
    # 390 "libneo-c-gc.c"
    # 386 "libneo-c-gc.c"
    if(_if_conditional40=!block,    _if_conditional40) {
        # 387 "libneo-c-gc.c"
        __result67__ = __result_obj__ = ((void*)0);
        return __result67__;
    }
    # 390 "libneo-c-gc.c"
    mem_48=(char*)block-sizeof(unsigned long int)-sizeof(unsigned long int);
    # 392 "libneo-c-gc.c"
    size_p_49=(unsigned long int*)(mem_48+sizeof(unsigned long int));
    # 394 "libneo-c-gc.c"
    size_50=*size_p_49-sizeof(unsigned long int)-sizeof(unsigned long int);
    # 396 "libneo-c-gc.c"
    result_51=come_calloc(1,size_50,sname,sline,class_name);
    # 398 "libneo-c-gc.c"
    memcpy(result_51,block,size_50);
    # 400 "libneo-c-gc.c"
    __result68__ = __result_obj__ = result_51;
    return __result68__;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__;
_Bool _if_conditional41;
void* __result69__;
unsigned long int* ref_count_52;
void* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_52, 0, sizeof(unsigned long int*));
    # 409 "libneo-c-gc.c"
    # 405 "libneo-c-gc.c"
    if(_if_conditional41=mem==((void*)0),    _if_conditional41) {
        # 406 "libneo-c-gc.c"
        __result69__ = __result_obj__ = mem;
        return __result69__;
    }
    # 409 "libneo-c-gc.c"
    ref_count_52=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    # 411 "libneo-c-gc.c"
    (*ref_count_52)++;
    # 413 "libneo-c-gc.c"
    __result70__ = __result_obj__ = mem;
    return __result70__;
}

void* come_print_ref_count(void* mem){
void* __result_obj__;
_Bool _if_conditional42;
void* __result71__;
unsigned long int* ref_count_53;
void* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_53, 0, sizeof(unsigned long int*));
    # 422 "libneo-c-gc.c"
    # 418 "libneo-c-gc.c"
    if(_if_conditional42=mem==((void*)0),    _if_conditional42) {
        # 419 "libneo-c-gc.c"
        __result71__ = __result_obj__ = mem;
        return __result71__;
    }
    # 422 "libneo-c-gc.c"
    ref_count_53=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    # 424 "libneo-c-gc.c"
    printf("ref_count %ld\n",*ref_count_53);
    # 426 "libneo-c-gc.c"
    __result72__ = __result_obj__ = mem;
    return __result72__;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_){
void* __result_obj__;
_Bool _if_conditional43;
void* __result73__;
unsigned long int* ref_count_54;
_Bool _if_conditional44;
unsigned long int count_55;
_Bool _if_conditional45;
_Bool _if_conditional46;
void (*finalizer_56)(void*);
void* __result74__;
void* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_54, 0, sizeof(unsigned long int*));
memset(&count_55, 0, sizeof(unsigned long int));
memset(&finalizer_56, 0, sizeof(void (*)(void*)));
    # 435 "libneo-c-gc.c"
    # 431 "libneo-c-gc.c"
    if(_if_conditional43=mem==((void*)0),    _if_conditional43) {
        # 432 "libneo-c-gc.c"
        __result73__ = __result_obj__ = ((void*)0);
        return __result73__;
    }
    # 435 "libneo-c-gc.c"
    ref_count_54=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    # 441 "libneo-c-gc.c"
    # 437 "libneo-c-gc.c"
    if(_if_conditional44=!no_decrement,    _if_conditional44) {
        # 438 "libneo-c-gc.c"
        (*ref_count_54)--;
    }
    # 441 "libneo-c-gc.c"
    count_55=*ref_count_54;
    # 453 "libneo-c-gc.c"
    # 442 "libneo-c-gc.c"
    if(_if_conditional45=!no_free&&(count_55<=0||force_delete_),    _if_conditional45) {
        # 449 "libneo-c-gc.c"
        # 443 "libneo-c-gc.c"
        if(_if_conditional46=protocol_obj&&protocol_fun,        _if_conditional46) {
            # 444 "libneo-c-gc.c"
            finalizer_56=protocol_fun;
            # 445 "libneo-c-gc.c"
            finalizer_56(protocol_obj);
            # 447 "libneo-c-gc.c"
            come_free_object(protocol_obj);
        }
        # 449 "libneo-c-gc.c"
        come_free_object(mem);
        # 450 "libneo-c-gc.c"
        __result74__ = __result_obj__ = ((void*)0);
        return __result74__;
    }
    # 453 "libneo-c-gc.c"
    __result75__ = __result_obj__ = mem;
    return __result75__;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_){
void* __result_obj__;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional49;
_Bool _if_conditional50;
void (*finalizer_57)(void*);
void (*finalizer_58)(void*);
unsigned long int* ref_count_59;
_Bool _if_conditional51;
unsigned long int count_60;
_Bool _if_conditional52;
_Bool _if_conditional53;
_Bool _if_conditional54;
void (*finalizer_61)(void*);
_Bool _if_conditional55;
void (*finalizer_62)(void*);
memset(&__result_obj__, 0, sizeof(void*));
memset(&finalizer_57, 0, sizeof(void (*)(void*)));
memset(&finalizer_58, 0, sizeof(void (*)(void*)));
memset(&ref_count_59, 0, sizeof(unsigned long int*));
memset(&count_60, 0, sizeof(unsigned long int));
memset(&finalizer_61, 0, sizeof(void (*)(void*)));
memset(&finalizer_62, 0, sizeof(void (*)(void*)));
    # 462 "libneo-c-gc.c"
    # 458 "libneo-c-gc.c"
    if(_if_conditional47=mem==((void*)0),    _if_conditional47) {
        # 459 "libneo-c-gc.c"
        return;
    }
    # 495 "libneo-c-gc.c"
    # 462 "libneo-c-gc.c"
    if(call_finalizer_only) {
        # 471 "libneo-c-gc.c"
        # 463 "libneo-c-gc.c"
        if(fun) {
            # 468 "libneo-c-gc.c"
            # 464 "libneo-c-gc.c"
            if(_if_conditional50=protocol_obj&&protocol_fun,            _if_conditional50) {
                # 465 "libneo-c-gc.c"
                finalizer_57=protocol_fun;
                # 466 "libneo-c-gc.c"
                finalizer_57(protocol_obj);
            }
            # 468 "libneo-c-gc.c"
            finalizer_58=fun;
            # 469 "libneo-c-gc.c"
            finalizer_58(mem);
        }
    }
    else {
        # 473 "libneo-c-gc.c"
        ref_count_59=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
        # 479 "libneo-c-gc.c"
        # 475 "libneo-c-gc.c"
        if(_if_conditional51=!no_decrement,        _if_conditional51) {
            # 476 "libneo-c-gc.c"
            (*ref_count_59)--;
        }
        # 479 "libneo-c-gc.c"
        count_60=*ref_count_59;
        # 494 "libneo-c-gc.c"
        # 480 "libneo-c-gc.c"
        if(_if_conditional52=!no_free&&(count_60<=0||force_delete_),        _if_conditional52) {
            # 493 "libneo-c-gc.c"
            # 481 "libneo-c-gc.c"
            if(mem) {
                # 487 "libneo-c-gc.c"
                # 482 "libneo-c-gc.c"
                if(_if_conditional54=protocol_obj&&protocol_fun,                _if_conditional54) {
                    # 483 "libneo-c-gc.c"
                    finalizer_61=protocol_fun;
                    # 484 "libneo-c-gc.c"
                    finalizer_61(protocol_obj);
                    # 485 "libneo-c-gc.c"
                    come_free_object(protocol_obj);
                }
                # 491 "libneo-c-gc.c"
                # 487 "libneo-c-gc.c"
                if(fun) {
                    # 488 "libneo-c-gc.c"
                    finalizer_62=fun;
                    # 489 "libneo-c-gc.c"
                    finalizer_62(mem);
                }
                # 491 "libneo-c-gc.c"
                come_free_object(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
void* __result_obj__;
_Bool _if_conditional56;
char* __result76__;
int len_63;
char* result_64;
char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_63, 0, sizeof(int));
memset(&result_64, 0, sizeof(char*));
    # 502 "libneo-c-gc.c"
    # 499 "libneo-c-gc.c"
    if(_if_conditional56=str==((void*)0),    _if_conditional56) {
        # 500 "libneo-c-gc.c"
        __result76__ = __result_obj__ = ((void*)0);
        return __result76__;
    }
    # 502 "libneo-c-gc.c"
    len_63=strlen(str)+1;
    # 504 "libneo-c-gc.c"
    result_64=(char*)come_calloc(1, sizeof(char)*(1*(len_63)), "libneo-c-gc.c", 504, "char");
    # 506 "libneo-c-gc.c"
    strncpy(result_64,str,len_63);
    # 508 "libneo-c-gc.c"
    __result77__ = __result_obj__ = result_64;
    return __result77__;
}

_Bool come_is_contained_element(void** array, int len, void* element){
void* __result_obj__;
_Bool found_65;
int i_66;
_Bool _if_conditional57;
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&found_65, 0, sizeof(_Bool));
memset(&i_66, 0, sizeof(int));
    # 513 "libneo-c-gc.c"
    found_65=(_Bool)0;
    # 520 "libneo-c-gc.c"
    for(    i_66=0;    i_66<len;    i_66++    ){
        # 519 "libneo-c-gc.c"
        # 515 "libneo-c-gc.c"
        if(_if_conditional57=array[i_66]==element,        _if_conditional57) {
            # 516 "libneo-c-gc.c"
            found_65=(_Bool)1;
            # 517 "libneo-c-gc.c"
            break;
        }
    }
    # 520 "libneo-c-gc.c"
    __result78__ = found_65;
    return __result78__;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __result_obj__;
struct buffer* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
    # 528 "libneo-c-gc.c"
    self->size=128;
    # 529 "libneo-c-gc.c"
    self->buf=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c-gc.c", 529, "char");
    # 530 "libneo-c-gc.c"
    self->buf[0]=0;
    # 531 "libneo-c-gc.c"
    self->len=0;
    # 533 "libneo-c-gc.c"
    __result79__ = __result_obj__ = self;
    return __result79__;
}

void buffer_finalize(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional58;
memset(&__result_obj__, 0, sizeof(void*));
    # 538 "libneo-c-gc.c"
    # 538 "libneo-c-gc.c"
    if(_if_conditional58=self&&self->buf,    _if_conditional58) {
        # 538 "libneo-c-gc.c"
    }
}

void buffer_force_finalize(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional59;
memset(&__result_obj__, 0, sizeof(void*));
    # 542 "libneo-c-gc.c"
    # 542 "libneo-c-gc.c"
    if(_if_conditional59=self&&self->buf,    _if_conditional59) {
        # 542 "libneo-c-gc.c"
    }
}

struct buffer* buffer_clone(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional60;
struct buffer* __result80__;
struct buffer* result_67;
struct buffer* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_67, 0, sizeof(struct buffer*));
    # 551 "libneo-c-gc.c"
    # 547 "libneo-c-gc.c"
    if(_if_conditional60=self==((void*)0),    _if_conditional60) {
        # 548 "libneo-c-gc.c"
        __result80__ = __result_obj__ = ((void*)0);
        return __result80__;
    }
    # 551 "libneo-c-gc.c"
    result_67=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 551, "buffer");
    # 553 "libneo-c-gc.c"
    result_67->size=self->size;
    # 554 "libneo-c-gc.c"
    result_67->buf=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c-gc.c", 554, "char");
    # 555 "libneo-c-gc.c"
    result_67->len=self->len;
    # 556 "libneo-c-gc.c"
    memcpy(result_67->buf,self->buf,self->len);
    # 558 "libneo-c-gc.c"
    __result81__ = __result_obj__ = result_67;
    return __result81__;
}

int buffer_length(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional61;
int __result82__;
int __result83__;
memset(&__result_obj__, 0, sizeof(void*));
    # 566 "libneo-c-gc.c"
    # 563 "libneo-c-gc.c"
    if(_if_conditional61=self==((void*)0),    _if_conditional61) {
        # 564 "libneo-c-gc.c"
        __result82__ = 0;
        return __result82__;
    }
    # 566 "libneo-c-gc.c"
    __result83__ = self->len;
    return __result83__;
}

void buffer_reset(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional62;
memset(&__result_obj__, 0, sizeof(void*));
    # 574 "libneo-c-gc.c"
    # 571 "libneo-c-gc.c"
    if(_if_conditional62=self==((void*)0),    _if_conditional62) {
        # 572 "libneo-c-gc.c"
        return;
    }
    # 574 "libneo-c-gc.c"
    self->buf[0]=0;
    # 575 "libneo-c-gc.c"
    self->len=0;
}

void buffer_trim(struct buffer* self, int len){
void* __result_obj__;
_Bool _if_conditional63;
memset(&__result_obj__, 0, sizeof(void*));
    # 583 "libneo-c-gc.c"
    # 580 "libneo-c-gc.c"
    if(_if_conditional63=self==((void*)0),    _if_conditional63) {
        # 581 "libneo-c-gc.c"
        return;
    }
    # 583 "libneo-c-gc.c"
    self->len-=len;
    # 584 "libneo-c-gc.c"
    self->buf[self->len]=0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long int size){
void* __result_obj__;
_Bool _if_conditional64;
struct buffer* __result84__;
_Bool _if_conditional65;
char* old_buf_68;
int old_len_69;
int new_size_70;
struct buffer* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&old_buf_68, 0, sizeof(char*));
memset(&old_len_69, 0, sizeof(int));
memset(&new_size_70, 0, sizeof(int));
    # 592 "libneo-c-gc.c"
    # 589 "libneo-c-gc.c"
    if(_if_conditional64=self==((void*)0)||mem==((void*)0),    _if_conditional64) {
        # 590 "libneo-c-gc.c"
        __result84__ = __result_obj__ = self;
        return __result84__;
    }
    # 603 "libneo-c-gc.c"
    # 592 "libneo-c-gc.c"
    if(_if_conditional65=self->len+size+1+1>=self->size,    _if_conditional65) {
        # 593 "libneo-c-gc.c"
        old_buf_68=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c-gc.c", 593, "char");
        # 594 "libneo-c-gc.c"
        memcpy(old_buf_68,self->buf,self->size);
        # 595 "libneo-c-gc.c"
        old_len_69=self->len;
        # 596 "libneo-c-gc.c"
        new_size_70=(self->size+size+1)*2;
        # 597 "libneo-c-gc.c"
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_70)), "libneo-c-gc.c", 597, "char");
        # 598 "libneo-c-gc.c"
        memcpy(self->buf,old_buf_68,old_len_69);
        # 599 "libneo-c-gc.c"
        self->buf[old_len_69]=0;
        # 600 "libneo-c-gc.c"
        self->size=new_size_70;
    }
    # 603 "libneo-c-gc.c"
    memcpy(self->buf+self->len,mem,size);
    # 604 "libneo-c-gc.c"
    self->len+=size;
    # 605 "libneo-c-gc.c"
    self->buf[self->len]=0;
    # 607 "libneo-c-gc.c"
    __result85__ = __result_obj__ = self;
    return __result85__;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
void* __result_obj__;
_Bool _if_conditional66;
struct buffer* __result86__;
_Bool _if_conditional67;
char* old_buf_71;
int old_len_72;
int new_size_73;
struct buffer* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&old_buf_71, 0, sizeof(char*));
memset(&old_len_72, 0, sizeof(int));
memset(&new_size_73, 0, sizeof(int));
    # 615 "libneo-c-gc.c"
    # 612 "libneo-c-gc.c"
    if(_if_conditional66=self==((void*)0),    _if_conditional66) {
        # 613 "libneo-c-gc.c"
        __result86__ = __result_obj__ = ((void*)0);
        return __result86__;
    }
    # 626 "libneo-c-gc.c"
    # 615 "libneo-c-gc.c"
    if(_if_conditional67=self->len+1+1+1>=self->size,    _if_conditional67) {
        # 616 "libneo-c-gc.c"
        old_buf_71=charp_clone(self->buf);
        # 617 "libneo-c-gc.c"
        old_len_72=self->len;
        # 619 "libneo-c-gc.c"
        new_size_73=(self->size+10+1)*2;
        # 620 "libneo-c-gc.c"
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_73)), "libneo-c-gc.c", 620, "char");
        # 621 "libneo-c-gc.c"
        memcpy(self->buf,old_buf_71,old_len_72);
        # 622 "libneo-c-gc.c"
        self->buf[old_len_72]=0;
        # 623 "libneo-c-gc.c"
        self->size=new_size_73;
    }
    # 626 "libneo-c-gc.c"
    self->buf[self->len]=c;
    # 627 "libneo-c-gc.c"
    self->len++;
    # 629 "libneo-c-gc.c"
    self->buf[self->len]=0;
    # 631 "libneo-c-gc.c"
    __result87__ = __result_obj__ = self;
    return __result87__;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool _if_conditional68;
struct buffer* __result88__;
int size_74;
_Bool _if_conditional69;
char* old_buf_75;
int old_len_76;
int new_size_77;
struct buffer* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_74, 0, sizeof(int));
memset(&old_buf_75, 0, sizeof(char*));
memset(&old_len_76, 0, sizeof(int));
memset(&new_size_77, 0, sizeof(int));
    # 640 "libneo-c-gc.c"
    # 636 "libneo-c-gc.c"
    if(_if_conditional68=self==((void*)0)||mem==((void*)0),    _if_conditional68) {
        # 637 "libneo-c-gc.c"
        __result88__ = __result_obj__ = self;
        return __result88__;
    }
    # 640 "libneo-c-gc.c"
    size_74=strlen(mem);
    # 652 "libneo-c-gc.c"
    # 641 "libneo-c-gc.c"
    if(_if_conditional69=self->len+size_74+1+1>=self->size,    _if_conditional69) {
        # 642 "libneo-c-gc.c"
        old_buf_75=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c-gc.c", 642, "char");
        # 643 "libneo-c-gc.c"
        memcpy(old_buf_75,self->buf,self->size);
        # 644 "libneo-c-gc.c"
        old_len_76=self->len;
        # 645 "libneo-c-gc.c"
        new_size_77=(self->size+size_74+1)*2;
        # 646 "libneo-c-gc.c"
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_77)), "libneo-c-gc.c", 646, "char");
        # 647 "libneo-c-gc.c"
        memcpy(self->buf,old_buf_75,old_len_76);
        # 648 "libneo-c-gc.c"
        self->buf[old_len_76]=0;
        # 649 "libneo-c-gc.c"
        self->size=new_size_77;
    }
    # 652 "libneo-c-gc.c"
    memcpy(self->buf+self->len,mem,size_74);
    # 653 "libneo-c-gc.c"
    self->len+=size_74;
    # 654 "libneo-c-gc.c"
    self->buf[self->len]=0;
    # 656 "libneo-c-gc.c"
    __result89__ = __result_obj__ = self;
    return __result89__;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool _if_conditional70;
struct buffer* __result90__;
int size_78;
_Bool _if_conditional71;
char* old_buf_79;
int old_len_80;
int new_size_81;
struct buffer* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_78, 0, sizeof(int));
memset(&old_buf_79, 0, sizeof(char*));
memset(&old_len_80, 0, sizeof(int));
memset(&new_size_81, 0, sizeof(int));
    # 664 "libneo-c-gc.c"
    # 661 "libneo-c-gc.c"
    if(_if_conditional70=self==((void*)0)||mem==((void*)0),    _if_conditional70) {
        # 662 "libneo-c-gc.c"
        __result90__ = __result_obj__ = self;
        return __result90__;
    }
    # 664 "libneo-c-gc.c"
    size_78=strlen(mem)+1;
    # 676 "libneo-c-gc.c"
    # 665 "libneo-c-gc.c"
    if(_if_conditional71=self->len+size_78+1+1+1>=self->size,    _if_conditional71) {
        # 666 "libneo-c-gc.c"
        old_buf_79=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c-gc.c", 666, "char");
        # 667 "libneo-c-gc.c"
        memcpy(old_buf_79,self->buf,self->size);
        # 668 "libneo-c-gc.c"
        old_len_80=self->len;
        # 669 "libneo-c-gc.c"
        new_size_81=(self->size+size_78+1)*2;
        # 670 "libneo-c-gc.c"
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_81)), "libneo-c-gc.c", 670, "char");
        # 671 "libneo-c-gc.c"
        memcpy(self->buf,old_buf_79,old_len_80);
        # 672 "libneo-c-gc.c"
        self->buf[old_len_80]=0;
        # 673 "libneo-c-gc.c"
        self->size=new_size_81;
    }
    # 676 "libneo-c-gc.c"
    memcpy(self->buf+self->len,mem,size_78);
    # 677 "libneo-c-gc.c"
    self->len+=size_78;
    # 678 "libneo-c-gc.c"
    self->buf[self->len]=0;
    # 679 "libneo-c-gc.c"
    self->len++;
    # 681 "libneo-c-gc.c"
    __result91__ = __result_obj__ = self;
    return __result91__;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
void* __result_obj__;
_Bool _if_conditional72;
struct buffer* __result92__;
int* mem_82;
int size_83;
_Bool _if_conditional73;
char* old_buf_84;
int old_len_85;
int new_size_86;
struct buffer* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_82, 0, sizeof(int*));
memset(&size_83, 0, sizeof(int));
memset(&old_buf_84, 0, sizeof(char*));
memset(&old_len_85, 0, sizeof(int));
memset(&new_size_86, 0, sizeof(int));
    # 689 "libneo-c-gc.c"
    # 686 "libneo-c-gc.c"
    if(_if_conditional72=self==((void*)0),    _if_conditional72) {
        # 687 "libneo-c-gc.c"
        __result92__ = __result_obj__ = ((void*)0);
        return __result92__;
    }
    # 689 "libneo-c-gc.c"
    mem_82=&value;
    # 690 "libneo-c-gc.c"
    size_83=sizeof(int);
    # 703 "libneo-c-gc.c"
    # 692 "libneo-c-gc.c"
    if(_if_conditional73=self->len+size_83+1+1>=self->size,    _if_conditional73) {
        # 693 "libneo-c-gc.c"
        old_buf_84=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c-gc.c", 693, "char");
        # 694 "libneo-c-gc.c"
        memcpy(old_buf_84,self->buf,self->size);
        # 695 "libneo-c-gc.c"
        old_len_85=self->len;
        # 696 "libneo-c-gc.c"
        new_size_86=(self->size+size_83+1)*2;
        # 697 "libneo-c-gc.c"
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_86)), "libneo-c-gc.c", 697, "char");
        # 698 "libneo-c-gc.c"
        memcpy(self->buf,old_buf_84,old_len_85);
        # 699 "libneo-c-gc.c"
        self->buf[old_len_85]=0;
        # 700 "libneo-c-gc.c"
        self->size=new_size_86;
    }
    # 703 "libneo-c-gc.c"
    memcpy(self->buf+self->len,mem_82,size_83);
    # 704 "libneo-c-gc.c"
    self->len+=size_83;
    # 705 "libneo-c-gc.c"
    self->buf[self->len]=0;
    # 707 "libneo-c-gc.c"
    __result93__ = __result_obj__ = self;
    return __result93__;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
void* __result_obj__;
long* mem_87;
int size_88;
_Bool _if_conditional74;
char* old_buf_89;
int old_len_90;
int new_size_91;
struct buffer* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_87, 0, sizeof(long*));
memset(&size_88, 0, sizeof(int));
memset(&old_buf_89, 0, sizeof(char*));
memset(&old_len_90, 0, sizeof(int));
memset(&new_size_91, 0, sizeof(int));
    # 712 "libneo-c-gc.c"
    mem_87=&value;
    # 713 "libneo-c-gc.c"
    size_88=sizeof(long);
    # 726 "libneo-c-gc.c"
    # 715 "libneo-c-gc.c"
    if(_if_conditional74=self->len+size_88+1+1>=self->size,    _if_conditional74) {
        # 716 "libneo-c-gc.c"
        old_buf_89=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c-gc.c", 716, "char");
        # 717 "libneo-c-gc.c"
        memcpy(old_buf_89,self->buf,self->size);
        # 718 "libneo-c-gc.c"
        old_len_90=self->len;
        # 719 "libneo-c-gc.c"
        new_size_91=(self->size+size_88+1)*2;
        # 720 "libneo-c-gc.c"
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_91)), "libneo-c-gc.c", 720, "char");
        # 721 "libneo-c-gc.c"
        memcpy(self->buf,old_buf_89,old_len_90);
        # 722 "libneo-c-gc.c"
        self->buf[old_len_90]=0;
        # 723 "libneo-c-gc.c"
        self->size=new_size_91;
    }
    # 726 "libneo-c-gc.c"
    memcpy(self->buf+self->len,mem_87,size_88);
    # 727 "libneo-c-gc.c"
    self->len+=size_88;
    # 728 "libneo-c-gc.c"
    self->buf[self->len]=0;
    # 730 "libneo-c-gc.c"
    __result94__ = __result_obj__ = self;
    return __result94__;
}

struct buffer* buffer_append_short(struct buffer* self, short short value){
void* __result_obj__;
_Bool _if_conditional75;
struct buffer* __result95__;
short short* mem_92;
int size_93;
_Bool _if_conditional76;
char* old_buf_94;
int old_len_95;
int new_size_96;
struct buffer* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_92, 0, sizeof(short short*));
memset(&size_93, 0, sizeof(int));
memset(&old_buf_94, 0, sizeof(char*));
memset(&old_len_95, 0, sizeof(int));
memset(&new_size_96, 0, sizeof(int));
    # 739 "libneo-c-gc.c"
    # 735 "libneo-c-gc.c"
    if(_if_conditional75=self==((void*)0),    _if_conditional75) {
        # 736 "libneo-c-gc.c"
        __result95__ = __result_obj__ = ((void*)0);
        return __result95__;
    }
    # 739 "libneo-c-gc.c"
    mem_92=&value;
    # 740 "libneo-c-gc.c"
    size_93=sizeof(short short);
    # 753 "libneo-c-gc.c"
    # 742 "libneo-c-gc.c"
    if(_if_conditional76=self->len+size_93+1+1>=self->size,    _if_conditional76) {
        # 743 "libneo-c-gc.c"
        old_buf_94=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c-gc.c", 743, "char");
        # 744 "libneo-c-gc.c"
        memcpy(old_buf_94,self->buf,self->size);
        # 745 "libneo-c-gc.c"
        old_len_95=self->len;
        # 746 "libneo-c-gc.c"
        new_size_96=(self->size+size_93+1)*2;
        # 747 "libneo-c-gc.c"
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_96)), "libneo-c-gc.c", 747, "char");
        # 748 "libneo-c-gc.c"
        memcpy(self->buf,old_buf_94,old_len_95);
        # 749 "libneo-c-gc.c"
        self->buf[old_len_95]=0;
        # 750 "libneo-c-gc.c"
        self->size=new_size_96;
    }
    # 753 "libneo-c-gc.c"
    memcpy(self->buf+self->len,mem_92,size_93);
    # 754 "libneo-c-gc.c"
    self->len+=size_93;
    # 755 "libneo-c-gc.c"
    self->buf[self->len]=0;
    # 757 "libneo-c-gc.c"
    __result96__ = __result_obj__ = self;
    return __result96__;
}

struct buffer* buffer_alignment(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional77;
struct buffer* __result97__;
int len_97;
_Bool _if_conditional78;
int new_size_98;
int i_99;
struct buffer* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_97, 0, sizeof(int));
memset(&new_size_98, 0, sizeof(int));
memset(&i_99, 0, sizeof(int));
    # 766 "libneo-c-gc.c"
    # 762 "libneo-c-gc.c"
    if(_if_conditional77=self==((void*)0),    _if_conditional77) {
        # 763 "libneo-c-gc.c"
        __result97__ = __result_obj__ = ((void*)0);
        return __result97__;
    }
    # 766 "libneo-c-gc.c"
    len_97=self->len;
    # 767 "libneo-c-gc.c"
    len_97=(len_97+3)&~3;
    # 775 "libneo-c-gc.c"
    # 769 "libneo-c-gc.c"
    if(_if_conditional78=len_97>=self->size,    _if_conditional78) {
        # 770 "libneo-c-gc.c"
        new_size_98=(self->size+1+1)*2;
        # 771 "libneo-c-gc.c"
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_98)), "libneo-c-gc.c", 771, "char");
        # 772 "libneo-c-gc.c"
        self->size=new_size_98;
    }
    # 779 "libneo-c-gc.c"
    for(    i_99=self->len;    i_99<len_97;    i_99++    ){
        # 776 "libneo-c-gc.c"
        self->buf[i_99]=0;
    }
    # 779 "libneo-c-gc.c"
    self->len=len_97;
    # 781 "libneo-c-gc.c"
    __result98__ = __result_obj__ = self;
    return __result98__;
}

int buffer_compare(struct buffer* left, struct buffer* right){
void* __result_obj__;
_Bool _if_conditional79;
int __result99__;
_Bool _if_conditional80;
int __result100__;
_Bool _if_conditional81;
int __result101__;
int __result102__;
memset(&__result_obj__, 0, sizeof(void*));
    # 796 "libneo-c-gc.c"
    # 786 "libneo-c-gc.c"
    if(_if_conditional79=left==((void*)0)&&right==((void*)0),    _if_conditional79) {
        # 787 "libneo-c-gc.c"
        __result99__ = 0;
        return __result99__;
    }
    else {
        # 796 "libneo-c-gc.c"
        # 789 "libneo-c-gc.c"
        if(_if_conditional80=left==((void*)0),        _if_conditional80) {
            # 790 "libneo-c-gc.c"
            __result100__ = -1;
            return __result100__;
        }
        else {
            # 796 "libneo-c-gc.c"
            # 792 "libneo-c-gc.c"
            if(_if_conditional81=right==((void*)0),            _if_conditional81) {
                # 793 "libneo-c-gc.c"
                __result101__ = 1;
                return __result101__;
            }
        }
    }
    # 796 "libneo-c-gc.c"
    __result102__ = strcmp(left->buf,right->buf);
    return __result102__;
}

struct buffer* string_to_buffer(char* self){
void* __result_obj__;
struct buffer* result_100;
_Bool _if_conditional82;
struct buffer* __result103__;
struct buffer* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_100, 0, sizeof(struct buffer*));
    # 801 "libneo-c-gc.c"
    result_100=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 801, "buffer"));
    # 807 "libneo-c-gc.c"
    # 803 "libneo-c-gc.c"
    if(_if_conditional82=self==((void*)0),    _if_conditional82) {
        # 804 "libneo-c-gc.c"
        __result103__ = __result_obj__ = result_100;
        return __result103__;
    }
    # 807 "libneo-c-gc.c"
    buffer_append_str(result_100,self);
    # 809 "libneo-c-gc.c"
    __result104__ = __result_obj__ = result_100;
    return __result104__;
}

struct buffer* charp_to_buffer(char* self){
void* __result_obj__;
struct buffer* result_101;
_Bool _if_conditional83;
struct buffer* __result105__;
struct buffer* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_101, 0, sizeof(struct buffer*));
    # 814 "libneo-c-gc.c"
    result_101=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 814, "buffer"));
    # 820 "libneo-c-gc.c"
    # 816 "libneo-c-gc.c"
    if(_if_conditional83=self==((void*)0),    _if_conditional83) {
        # 817 "libneo-c-gc.c"
        __result105__ = __result_obj__ = result_101;
        return __result105__;
    }
    # 820 "libneo-c-gc.c"
    buffer_append_str(result_101,self);
    # 822 "libneo-c-gc.c"
    __result106__ = __result_obj__ = result_101;
    return __result106__;
}

char* buffer_to_string(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional84;
char* __result107__;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
    # 831 "libneo-c-gc.c"
    # 827 "libneo-c-gc.c"
    if(_if_conditional84=self==((void*)0),    _if_conditional84) {
        # 828 "libneo-c-gc.c"
        __result107__ = __result_obj__ = __builtin_string("");
        return __result107__;
    }
    # 831 "libneo-c-gc.c"
    __result108__ = __result_obj__ = __builtin_string(self->buf);
    return __result108__;
}

_Bool bool_equals(_Bool self, _Bool right){
void* __result_obj__;
_Bool __result109__;
memset(&__result_obj__, 0, sizeof(void*));
    # 839 "libneo-c-gc.c"
    __result109__ = self==right;
    return __result109__;
}

_Bool int_equals(int self, int right){
void* __result_obj__;
_Bool __result110__;
memset(&__result_obj__, 0, sizeof(void*));
    # 844 "libneo-c-gc.c"
    __result110__ = self==right;
    return __result110__;
}

_Bool char_equals(char self, char right){
void* __result_obj__;
_Bool __result111__;
memset(&__result_obj__, 0, sizeof(void*));
    # 849 "libneo-c-gc.c"
    __result111__ = self==right;
    return __result111__;
}

_Bool short_equals(short short self, short short right){
void* __result_obj__;
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
    # 854 "libneo-c-gc.c"
    __result112__ = self==right;
    return __result112__;
}

_Bool long_equals(long self, long right){
void* __result_obj__;
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
    # 859 "libneo-c-gc.c"
    __result113__ = self==right;
    return __result113__;
}

_Bool size_t_equals(unsigned long int self, unsigned long int right){
void* __result_obj__;
_Bool __result114__;
memset(&__result_obj__, 0, sizeof(void*));
    # 864 "libneo-c-gc.c"
    __result114__ = self==right;
    return __result114__;
}

_Bool float_equals(float self, float right){
void* __result_obj__;
_Bool __result115__;
memset(&__result_obj__, 0, sizeof(void*));
    # 869 "libneo-c-gc.c"
    __result115__ = self==right;
    return __result115__;
}

_Bool double_equals(double self, double right){
void* __result_obj__;
_Bool __result116__;
memset(&__result_obj__, 0, sizeof(void*));
    # 874 "libneo-c-gc.c"
    __result116__ = self==right;
    return __result116__;
}

_Bool string_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional85;
_Bool __result117__;
_Bool _if_conditional86;
_Bool __result118__;
_Bool _if_conditional87;
_Bool __result119__;
_Bool __result120__;
memset(&__result_obj__, 0, sizeof(void*));
    # 889 "libneo-c-gc.c"
    # 879 "libneo-c-gc.c"
    if(_if_conditional85=self==((void*)0)&&right==((void*)0),    _if_conditional85) {
        # 880 "libneo-c-gc.c"
        __result117__ = (_Bool)1;
        return __result117__;
    }
    else {
        # 889 "libneo-c-gc.c"
        # 882 "libneo-c-gc.c"
        if(_if_conditional86=self==((void*)0),        _if_conditional86) {
            # 883 "libneo-c-gc.c"
            __result118__ = (_Bool)0;
            return __result118__;
        }
        else {
            # 889 "libneo-c-gc.c"
            # 885 "libneo-c-gc.c"
            if(_if_conditional87=right==((void*)0),            _if_conditional87) {
                # 886 "libneo-c-gc.c"
                __result119__ = (_Bool)0;
                return __result119__;
            }
        }
    }
    # 889 "libneo-c-gc.c"
    __result120__ = strcmp(self,right)==0;
    return __result120__;
}

_Bool charp_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional88;
_Bool __result121__;
_Bool _if_conditional89;
_Bool __result122__;
_Bool _if_conditional90;
_Bool __result123__;
_Bool __result124__;
memset(&__result_obj__, 0, sizeof(void*));
    # 904 "libneo-c-gc.c"
    # 894 "libneo-c-gc.c"
    if(_if_conditional88=self==((void*)0)&&right==((void*)0),    _if_conditional88) {
        # 895 "libneo-c-gc.c"
        __result121__ = (_Bool)1;
        return __result121__;
    }
    else {
        # 904 "libneo-c-gc.c"
        # 897 "libneo-c-gc.c"
        if(_if_conditional89=self==((void*)0),        _if_conditional89) {
            # 898 "libneo-c-gc.c"
            __result122__ = (_Bool)0;
            return __result122__;
        }
        else {
            # 904 "libneo-c-gc.c"
            # 900 "libneo-c-gc.c"
            if(_if_conditional90=right==((void*)0),            _if_conditional90) {
                # 901 "libneo-c-gc.c"
                __result123__ = (_Bool)0;
                return __result123__;
            }
        }
    }
    # 904 "libneo-c-gc.c"
    __result124__ = strcmp(self,right)==0;
    return __result124__;
}

_Bool string_operator_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional91;
_Bool __result125__;
_Bool _if_conditional92;
_Bool __result126__;
_Bool _if_conditional93;
_Bool __result127__;
_Bool __result128__;
memset(&__result_obj__, 0, sizeof(void*));
    # 919 "libneo-c-gc.c"
    # 909 "libneo-c-gc.c"
    if(_if_conditional91=self==((void*)0)&&right==((void*)0),    _if_conditional91) {
        # 910 "libneo-c-gc.c"
        __result125__ = (_Bool)1;
        return __result125__;
    }
    else {
        # 919 "libneo-c-gc.c"
        # 912 "libneo-c-gc.c"
        if(_if_conditional92=self==((void*)0),        _if_conditional92) {
            # 913 "libneo-c-gc.c"
            __result126__ = (_Bool)0;
            return __result126__;
        }
        else {
            # 919 "libneo-c-gc.c"
            # 915 "libneo-c-gc.c"
            if(_if_conditional93=right==((void*)0),            _if_conditional93) {
                # 916 "libneo-c-gc.c"
                __result127__ = (_Bool)0;
                return __result127__;
            }
        }
    }
    # 919 "libneo-c-gc.c"
    __result128__ = strcmp(self,right)==0;
    return __result128__;
}

_Bool charp_operator_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional94;
_Bool __result129__;
_Bool _if_conditional95;
_Bool __result130__;
_Bool _if_conditional96;
_Bool __result131__;
_Bool __result132__;
memset(&__result_obj__, 0, sizeof(void*));
    # 934 "libneo-c-gc.c"
    # 924 "libneo-c-gc.c"
    if(_if_conditional94=self==((void*)0)&&right==((void*)0),    _if_conditional94) {
        # 925 "libneo-c-gc.c"
        __result129__ = (_Bool)1;
        return __result129__;
    }
    else {
        # 934 "libneo-c-gc.c"
        # 927 "libneo-c-gc.c"
        if(_if_conditional95=self==((void*)0),        _if_conditional95) {
            # 928 "libneo-c-gc.c"
            __result130__ = (_Bool)0;
            return __result130__;
        }
        else {
            # 934 "libneo-c-gc.c"
            # 930 "libneo-c-gc.c"
            if(_if_conditional96=right==((void*)0),            _if_conditional96) {
                # 931 "libneo-c-gc.c"
                __result131__ = (_Bool)0;
                return __result131__;
            }
        }
    }
    # 934 "libneo-c-gc.c"
    __result132__ = strcmp(self,right)==0;
    return __result132__;
}

_Bool string_operator_not_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional97;
_Bool __result133__;
_Bool _if_conditional98;
_Bool __result134__;
_Bool _if_conditional99;
_Bool __result135__;
_Bool __result136__;
memset(&__result_obj__, 0, sizeof(void*));
    # 949 "libneo-c-gc.c"
    # 939 "libneo-c-gc.c"
    if(_if_conditional97=self==((void*)0)&&right==((void*)0),    _if_conditional97) {
        # 940 "libneo-c-gc.c"
        __result133__ = (_Bool)0;
        return __result133__;
    }
    else {
        # 949 "libneo-c-gc.c"
        # 942 "libneo-c-gc.c"
        if(_if_conditional98=self==((void*)0),        _if_conditional98) {
            # 943 "libneo-c-gc.c"
            __result134__ = (_Bool)1;
            return __result134__;
        }
        else {
            # 949 "libneo-c-gc.c"
            # 945 "libneo-c-gc.c"
            if(_if_conditional99=right==((void*)0),            _if_conditional99) {
                # 946 "libneo-c-gc.c"
                __result135__ = (_Bool)1;
                return __result135__;
            }
        }
    }
    # 949 "libneo-c-gc.c"
    __result136__ = strcmp(self,right)!=0;
    return __result136__;
}

_Bool charp_operator_not_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional100;
_Bool __result137__;
_Bool _if_conditional101;
_Bool __result138__;
_Bool _if_conditional102;
_Bool __result139__;
_Bool __result140__;
memset(&__result_obj__, 0, sizeof(void*));
    # 964 "libneo-c-gc.c"
    # 954 "libneo-c-gc.c"
    if(_if_conditional100=self==((void*)0)&&right==((void*)0),    _if_conditional100) {
        # 955 "libneo-c-gc.c"
        __result137__ = (_Bool)0;
        return __result137__;
    }
    else {
        # 964 "libneo-c-gc.c"
        # 957 "libneo-c-gc.c"
        if(_if_conditional101=self==((void*)0),        _if_conditional101) {
            # 958 "libneo-c-gc.c"
            __result138__ = (_Bool)1;
            return __result138__;
        }
        else {
            # 964 "libneo-c-gc.c"
            # 960 "libneo-c-gc.c"
            if(_if_conditional102=right==((void*)0),            _if_conditional102) {
                # 961 "libneo-c-gc.c"
                __result139__ = (_Bool)1;
                return __result139__;
            }
        }
    }
    # 964 "libneo-c-gc.c"
    __result140__ = strcmp(self,right)!=0;
    return __result140__;
}

char* charp_operator_add(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional103;
char* __result141__;
int len_102;
char* result_103;
char* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_102, 0, sizeof(int));
memset(&result_103, 0, sizeof(char*));
    # 973 "libneo-c-gc.c"
    # 970 "libneo-c-gc.c"
    if(_if_conditional103=self==((void*)0)||right==((void*)0),    _if_conditional103) {
        # 971 "libneo-c-gc.c"
        __result141__ = __result_obj__ = __builtin_string("");
        return __result141__;
    }
    # 973 "libneo-c-gc.c"
    len_102=strlen(self)+strlen(right);
    # 975 "libneo-c-gc.c"
    result_103=(char*)come_calloc(1, sizeof(char)*(1*(len_102+1)), "libneo-c-gc.c", 975, "char");
    # 977 "libneo-c-gc.c"
    strncpy(result_103,self,len_102+1);
    # 978 "libneo-c-gc.c"
    strncat(result_103,right,len_102+1);
    # 980 "libneo-c-gc.c"
    __result142__ = __result_obj__ = result_103;
    return __result142__;
}

char* string_operator_add(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional104;
char* __result143__;
int len_104;
char* result_105;
char* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_104, 0, sizeof(int));
memset(&result_105, 0, sizeof(char*));
    # 988 "libneo-c-gc.c"
    # 985 "libneo-c-gc.c"
    if(_if_conditional104=self==((void*)0)||right==((void*)0),    _if_conditional104) {
        # 986 "libneo-c-gc.c"
        __result143__ = __result_obj__ = __builtin_string("");
        return __result143__;
    }
    # 988 "libneo-c-gc.c"
    len_104=strlen(self)+strlen(right);
    # 990 "libneo-c-gc.c"
    result_105=(char*)come_calloc(1, sizeof(char)*(1*(len_104+1)), "libneo-c-gc.c", 990, "char");
    # 992 "libneo-c-gc.c"
    strncpy(result_105,self,len_104+1);
    # 993 "libneo-c-gc.c"
    strncat(result_105,right,len_104+1);
    # 995 "libneo-c-gc.c"
    __result144__ = __result_obj__ = result_105;
    return __result144__;
}

char* charp_operator_mult(char* self, int right){
void* __result_obj__;
_Bool _if_conditional105;
char* __result145__;
struct buffer* buf_106;
int i_107;
char* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&buf_106, 0, sizeof(struct buffer*));
memset(&i_107, 0, sizeof(int));
    # 1003 "libneo-c-gc.c"
    # 1000 "libneo-c-gc.c"
    if(_if_conditional105=self==((void*)0),    _if_conditional105) {
        # 1001 "libneo-c-gc.c"
        __result145__ = __result_obj__ = __builtin_string("");
        return __result145__;
    }
    # 1003 "libneo-c-gc.c"
    buf_106=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 1003, "buffer"));
    # 1009 "libneo-c-gc.c"
    for(    i_107=0;    i_107<right;    i_107++    ){
        # 1006 "libneo-c-gc.c"
        buffer_append_str(buf_106,self);
    }
    # 1009 "libneo-c-gc.c"
    __result146__ = __result_obj__ = buffer_to_string(buf_106);
    return __result146__;
}

char* string_operator_mult(char* self, int right){
void* __result_obj__;
_Bool _if_conditional106;
char* __result147__;
struct buffer* buf_108;
int i_109;
char* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&buf_108, 0, sizeof(struct buffer*));
memset(&i_109, 0, sizeof(int));
    # 1017 "libneo-c-gc.c"
    # 1014 "libneo-c-gc.c"
    if(_if_conditional106=self==((void*)0),    _if_conditional106) {
        # 1015 "libneo-c-gc.c"
        __result147__ = __result_obj__ = __builtin_string("");
        return __result147__;
    }
    # 1017 "libneo-c-gc.c"
    buf_108=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 1017, "buffer"));
    # 1023 "libneo-c-gc.c"
    for(    i_109=0;    i_109<right;    i_109++    ){
        # 1020 "libneo-c-gc.c"
        buffer_append_str(buf_108,self);
    }
    # 1023 "libneo-c-gc.c"
    __result148__ = __result_obj__ = buffer_to_string(buf_108);
    return __result148__;
}

unsigned int bool_get_hash_key(_Bool value){
void* __result_obj__;
unsigned int __result149__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1031 "libneo-c-gc.c"
    __result149__ = (int_get_hash_key(((int)value)));
    return __result149__;
}

unsigned int char_get_hash_key(char value){
void* __result_obj__;
unsigned int __result150__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1036 "libneo-c-gc.c"
    __result150__ = value;
    return __result150__;
}

unsigned int short_get_hash_key(short int value){
void* __result_obj__;
unsigned int __result151__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1041 "libneo-c-gc.c"
    __result151__ = value;
    return __result151__;
}

unsigned int int_get_hash_key(int value){
void* __result_obj__;
unsigned int __result152__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1046 "libneo-c-gc.c"
    __result152__ = value;
    return __result152__;
}

unsigned int long_get_hash_key(long value){
void* __result_obj__;
unsigned int __result153__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1051 "libneo-c-gc.c"
    __result153__ = value;
    return __result153__;
}

unsigned int size_t_get_hash_key(unsigned long int value){
void* __result_obj__;
unsigned int __result154__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1056 "libneo-c-gc.c"
    __result154__ = value;
    return __result154__;
}

unsigned int float_get_hash_key(float value){
void* __result_obj__;
unsigned int __result155__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1061 "libneo-c-gc.c"
    __result155__ = (unsigned int)value;
    return __result155__;
}

unsigned int double_get_hash_key(double value){
void* __result_obj__;
unsigned int __result156__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1066 "libneo-c-gc.c"
    __result156__ = (unsigned int)value;
    return __result156__;
}

unsigned int string_get_hash_key(char* value){
void* __result_obj__;
_Bool _if_conditional107;
unsigned int __result157__;
int result_110;
char* p_111;
_Bool _while_condtional1;
unsigned int __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_110, 0, sizeof(int));
memset(&p_111, 0, sizeof(char*));
    # 1074 "libneo-c-gc.c"
    # 1071 "libneo-c-gc.c"
    if(_if_conditional107=value==((void*)0),    _if_conditional107) {
        # 1072 "libneo-c-gc.c"
        __result157__ = 0;
        return __result157__;
    }
    # 1074 "libneo-c-gc.c"
    result_110=0;
    # 1075 "libneo-c-gc.c"
    p_111=value;
    # 1080 "libneo-c-gc.c"
    while(_while_condtional1=*p_111,    _while_condtional1) {
        # 1077 "libneo-c-gc.c"
        result_110+=(*p_111);
        # 1078 "libneo-c-gc.c"
        p_111++;
    }
    # 1080 "libneo-c-gc.c"
    __result158__ = result_110;
    return __result158__;
}

unsigned int charp_get_hash_key(char* value){
void* __result_obj__;
_Bool _if_conditional108;
unsigned int __result159__;
int result_112;
char* p_113;
_Bool _while_condtional2;
unsigned int __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_112, 0, sizeof(int));
memset(&p_113, 0, sizeof(char*));
    # 1088 "libneo-c-gc.c"
    # 1085 "libneo-c-gc.c"
    if(_if_conditional108=value==((void*)0),    _if_conditional108) {
        # 1086 "libneo-c-gc.c"
        __result159__ = 0;
        return __result159__;
    }
    # 1088 "libneo-c-gc.c"
    result_112=0;
    # 1089 "libneo-c-gc.c"
    p_113=value;
    # 1094 "libneo-c-gc.c"
    while(_while_condtional2=*p_113,    _while_condtional2) {
        # 1091 "libneo-c-gc.c"
        result_112+=(*p_113);
        # 1092 "libneo-c-gc.c"
        p_113++;
    }
    # 1094 "libneo-c-gc.c"
    __result160__ = result_112;
    return __result160__;
}

_Bool bool_clone(_Bool self){
void* __result_obj__;
_Bool __result161__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1102 "libneo-c-gc.c"
    __result161__ = self;
    return __result161__;
}

char char_clone(char self){
void* __result_obj__;
char __result162__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1107 "libneo-c-gc.c"
    __result162__ = self;
    return __result162__;
}

short int short_clone(short short self){
void* __result_obj__;
short int __result163__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1112 "libneo-c-gc.c"
    __result163__ = self;
    return __result163__;
}

int int_clone(int self){
void* __result_obj__;
int __result164__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1117 "libneo-c-gc.c"
    __result164__ = self;
    return __result164__;
}

long int long_clone(long self){
void* __result_obj__;
long int __result165__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1122 "libneo-c-gc.c"
    __result165__ = self;
    return __result165__;
}

unsigned long int size_t_clone(unsigned long int self){
void* __result_obj__;
unsigned long int __result166__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1127 "libneo-c-gc.c"
    __result166__ = self;
    return __result166__;
}

double double_clone(double self){
void* __result_obj__;
double __result167__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1132 "libneo-c-gc.c"
    __result167__ = self;
    return __result167__;
}

float float_clone(float self){
void* __result_obj__;
float __result168__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1137 "libneo-c-gc.c"
    __result168__ = self;
    return __result168__;
}

char* charp_clone(char* self){
void* __result_obj__;
_Bool _if_conditional109;
char* __result169__;
char* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1143 "libneo-c-gc.c"
    # 1142 "libneo-c-gc.c"
    if(_if_conditional109=self==((void*)0),    _if_conditional109) {
        # 1142 "libneo-c-gc.c"
        __result169__ = __result_obj__ = ((void*)0);
        return __result169__;
    }
    # 1143 "libneo-c-gc.c"
    __result170__ = __result_obj__ = __builtin_string(self);
    return __result170__;
}

char* string_clone(char* self){
void* __result_obj__;
_Bool _if_conditional110;
char* __result171__;
char* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1150 "libneo-c-gc.c"
    # 1148 "libneo-c-gc.c"
    if(_if_conditional110=self==((void*)0),    _if_conditional110) {
        # 1148 "libneo-c-gc.c"
        __result171__ = __result_obj__ = ((void*)0);
        return __result171__;
    }
    # 1150 "libneo-c-gc.c"
    __result172__ = __result_obj__ = __builtin_string(self);
    return __result172__;
}

_Bool xiswalpha(unsigned int c){
void* __result_obj__;
_Bool result_114;
_Bool __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_114, 0, sizeof(_Bool));
    # 1158 "libneo-c-gc.c"
    result_114=(c>=97&&c<=122)||(c>=65&&c<=90);
    # 1159 "libneo-c-gc.c"
    __result173__ = result_114;
    return __result173__;
}

_Bool xiswblank(unsigned int c){
void* __result_obj__;
_Bool __result174__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1164 "libneo-c-gc.c"
    __result174__ = c==32||c==9;
    return __result174__;
}

_Bool xiswdigit(unsigned int c){
void* __result_obj__;
_Bool __result175__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1169 "libneo-c-gc.c"
    __result175__ = (c>=48&&c<=57);
    return __result175__;
}

_Bool xiswalnum(unsigned int c){
void* __result_obj__;
_Bool __result176__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1174 "libneo-c-gc.c"
    __result176__ = xiswalpha(c)||xiswdigit(c);
    return __result176__;
}

_Bool xisalpha(char c){
void* __result_obj__;
_Bool result_115;
_Bool __result177__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_115, 0, sizeof(_Bool));
    # 1179 "libneo-c-gc.c"
    result_115=(c>=97&&c<=122)||(c>=65&&c<=90);
    # 1180 "libneo-c-gc.c"
    __result177__ = result_115;
    return __result177__;
}

_Bool xisblank(char c){
void* __result_obj__;
_Bool __result178__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1185 "libneo-c-gc.c"
    __result178__ = c==32||c==9;
    return __result178__;
}

_Bool xisdigit(char c){
void* __result_obj__;
_Bool __result179__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1190 "libneo-c-gc.c"
    __result179__ = (c>=48&&c<=57);
    return __result179__;
}

_Bool xisalnum(char c){
void* __result_obj__;
_Bool __result180__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1195 "libneo-c-gc.c"
    __result180__ = xisalpha(c)||xisdigit(c);
    return __result180__;
}

_Bool xisascii(char c){
void* __result_obj__;
_Bool result_116;
_Bool __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_116, 0, sizeof(_Bool));
    # 1200 "libneo-c-gc.c"
    result_116=(c>=32&&c<=126);
    # 1201 "libneo-c-gc.c"
    __result181__ = result_116;
    return __result181__;
}

_Bool xiswascii(unsigned int c){
void* __result_obj__;
_Bool result_117;
_Bool __result182__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_117, 0, sizeof(_Bool));
    # 1206 "libneo-c-gc.c"
    result_117=(c>=32&&c<=126);
    # 1207 "libneo-c-gc.c"
    __result182__ = result_117;
    return __result182__;
}

int string_length(char* str){
void* __result_obj__;
_Bool _if_conditional111;
int __result183__;
int __result184__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1218 "libneo-c-gc.c"
    # 1215 "libneo-c-gc.c"
    if(_if_conditional111=str==((void*)0),    _if_conditional111) {
        # 1216 "libneo-c-gc.c"
        __result183__ = 0;
        return __result183__;
    }
    # 1218 "libneo-c-gc.c"
    __result184__ = strlen(str);
    return __result184__;
}

int charp_length(char* str){
void* __result_obj__;
_Bool _if_conditional112;
int __result185__;
int __result186__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1225 "libneo-c-gc.c"
    # 1222 "libneo-c-gc.c"
    if(_if_conditional112=str==((void*)0),    _if_conditional112) {
        # 1223 "libneo-c-gc.c"
        __result185__ = 0;
        return __result185__;
    }
    # 1225 "libneo-c-gc.c"
    __result186__ = strlen(str);
    return __result186__;
}

char* string_reverse(char* str){
void* __result_obj__;
_Bool _if_conditional113;
char* __result187__;
int len_118;
char* result_119;
int i_120;
char* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_118, 0, sizeof(int));
memset(&result_119, 0, sizeof(char*));
memset(&i_120, 0, sizeof(int));
    # 1233 "libneo-c-gc.c"
    # 1230 "libneo-c-gc.c"
    if(_if_conditional113=str==((void*)0),    _if_conditional113) {
        # 1231 "libneo-c-gc.c"
        __result187__ = __result_obj__ = __builtin_string("");
        return __result187__;
    }
    # 1233 "libneo-c-gc.c"
    len_118=strlen(str);
    # 1234 "libneo-c-gc.c"
    result_119=(char*)come_calloc(1, sizeof(char)*(1*(len_118+1)), "libneo-c-gc.c", 1234, "char");
    # 1240 "libneo-c-gc.c"
    for(    i_120=0;    i_120<len_118;    i_120++    ){
        # 1237 "libneo-c-gc.c"
        result_119[i_120]=str[len_118-i_120-1];
    }
    # 1240 "libneo-c-gc.c"
    result_119[len_118]=0;
    # 1242 "libneo-c-gc.c"
    __result188__ = __result_obj__ = result_119;
    return __result188__;
}

char* charp_reverse(char* str){
void* __result_obj__;
_Bool _if_conditional114;
char* __result189__;
int len_121;
char* result_122;
int i_123;
char* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_121, 0, sizeof(int));
memset(&result_122, 0, sizeof(char*));
memset(&i_123, 0, sizeof(int));
    # 1250 "libneo-c-gc.c"
    # 1247 "libneo-c-gc.c"
    if(_if_conditional114=str==((void*)0),    _if_conditional114) {
        # 1248 "libneo-c-gc.c"
        __result189__ = __result_obj__ = __builtin_string("");
        return __result189__;
    }
    # 1250 "libneo-c-gc.c"
    len_121=strlen(str);
    # 1251 "libneo-c-gc.c"
    result_122=(char*)come_calloc(1, sizeof(char)*(1*(len_121+1)), "libneo-c-gc.c", 1251, "char");
    # 1257 "libneo-c-gc.c"
    for(    i_123=0;    i_123<len_121;    i_123++    ){
        # 1254 "libneo-c-gc.c"
        result_122[i_123]=str[len_121-i_123-1];
    }
    # 1257 "libneo-c-gc.c"
    result_122[len_121]=0;
    # 1259 "libneo-c-gc.c"
    __result190__ = __result_obj__ = result_122;
    return __result190__;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional115;
char* __result191__;
int len_124;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
char* __result192__;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
char* __result193__;
_Bool _if_conditional122;
char* __result194__;
char* result_125;
char* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_124, 0, sizeof(int));
memset(&result_125, 0, sizeof(char*));
    # 1267 "libneo-c-gc.c"
    # 1263 "libneo-c-gc.c"
    if(_if_conditional115=str==((void*)0),    _if_conditional115) {
        # 1264 "libneo-c-gc.c"
        __result191__ = __result_obj__ = __builtin_string("");
        return __result191__;
    }
    # 1267 "libneo-c-gc.c"
    len_124=strlen(str);
    # 1272 "libneo-c-gc.c"
    # 1269 "libneo-c-gc.c"
    if(_if_conditional116=head<0,    _if_conditional116) {
        # 1270 "libneo-c-gc.c"
        head+=len_124;
    }
    # 1276 "libneo-c-gc.c"
    # 1272 "libneo-c-gc.c"
    if(_if_conditional117=tail<0,    _if_conditional117) {
        # 1273 "libneo-c-gc.c"
        tail+=len_124+1;
    }
    # 1280 "libneo-c-gc.c"
    # 1276 "libneo-c-gc.c"
    if(_if_conditional118=head>tail,    _if_conditional118) {
        # 1277 "libneo-c-gc.c"
        __result192__ = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        return __result192__;
    }
    # 1284 "libneo-c-gc.c"
    # 1280 "libneo-c-gc.c"
    if(_if_conditional119=head<0,    _if_conditional119) {
        # 1281 "libneo-c-gc.c"
        head=0;
    }
    # 1288 "libneo-c-gc.c"
    # 1284 "libneo-c-gc.c"
    if(_if_conditional120=tail>=len_124,    _if_conditional120) {
        # 1285 "libneo-c-gc.c"
        tail=len_124;
    }
    # 1292 "libneo-c-gc.c"
    # 1288 "libneo-c-gc.c"
    if(_if_conditional121=head==tail,    _if_conditional121) {
        # 1289 "libneo-c-gc.c"
        __result193__ = __result_obj__ = __builtin_string("");
        return __result193__;
    }
    # 1296 "libneo-c-gc.c"
    # 1292 "libneo-c-gc.c"
    if(_if_conditional122=tail-head+1<1,    _if_conditional122) {
        # 1293 "libneo-c-gc.c"
        __result194__ = __result_obj__ = __builtin_string("");
        return __result194__;
    }
    # 1296 "libneo-c-gc.c"
    result_125=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libneo-c-gc.c", 1296, "char");
    # 1298 "libneo-c-gc.c"
    memcpy(result_125,str+head,tail-head);
    # 1299 "libneo-c-gc.c"
    result_125[tail-head]=0;
    # 1301 "libneo-c-gc.c"
    __result195__ = __result_obj__ = result_125;
    return __result195__;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional123;
char* __result196__;
int len_126;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
char* __result197__;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
char* __result198__;
_Bool _if_conditional130;
char* __result199__;
char* result_127;
char* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_126, 0, sizeof(int));
memset(&result_127, 0, sizeof(char*));
    # 1310 "libneo-c-gc.c"
    # 1306 "libneo-c-gc.c"
    if(_if_conditional123=str==((void*)0),    _if_conditional123) {
        # 1307 "libneo-c-gc.c"
        __result196__ = __result_obj__ = __builtin_string("");
        return __result196__;
    }
    # 1310 "libneo-c-gc.c"
    len_126=strlen(str);
    # 1315 "libneo-c-gc.c"
    # 1312 "libneo-c-gc.c"
    if(_if_conditional124=head<0,    _if_conditional124) {
        # 1313 "libneo-c-gc.c"
        head+=len_126;
    }
    # 1319 "libneo-c-gc.c"
    # 1315 "libneo-c-gc.c"
    if(_if_conditional125=tail<0,    _if_conditional125) {
        # 1316 "libneo-c-gc.c"
        tail+=len_126+1;
    }
    # 1323 "libneo-c-gc.c"
    # 1319 "libneo-c-gc.c"
    if(_if_conditional126=head>tail,    _if_conditional126) {
        # 1320 "libneo-c-gc.c"
        __result197__ = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        return __result197__;
    }
    # 1327 "libneo-c-gc.c"
    # 1323 "libneo-c-gc.c"
    if(_if_conditional127=head<0,    _if_conditional127) {
        # 1324 "libneo-c-gc.c"
        head=0;
    }
    # 1331 "libneo-c-gc.c"
    # 1327 "libneo-c-gc.c"
    if(_if_conditional128=tail>=len_126,    _if_conditional128) {
        # 1328 "libneo-c-gc.c"
        tail=len_126;
    }
    # 1335 "libneo-c-gc.c"
    # 1331 "libneo-c-gc.c"
    if(_if_conditional129=head==tail,    _if_conditional129) {
        # 1332 "libneo-c-gc.c"
        __result198__ = __result_obj__ = __builtin_string("");
        return __result198__;
    }
    # 1339 "libneo-c-gc.c"
    # 1335 "libneo-c-gc.c"
    if(_if_conditional130=tail-head+1<1,    _if_conditional130) {
        # 1336 "libneo-c-gc.c"
        __result199__ = __result_obj__ = __builtin_string("");
        return __result199__;
    }
    # 1339 "libneo-c-gc.c"
    result_127=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libneo-c-gc.c", 1339, "char");
    # 1341 "libneo-c-gc.c"
    memcpy(result_127,str+head,tail-head);
    # 1342 "libneo-c-gc.c"
    result_127[tail-head]=0;
    # 1344 "libneo-c-gc.c"
    __result200__ = __result_obj__ = result_127;
    return __result200__;
}

char* charp_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional131;
char* __result201__;
int len_128;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
char* __result202__;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional137;
char* __result203__;
_Bool _if_conditional138;
char* __result204__;
char* result_129;
char* __result205__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_128, 0, sizeof(int));
memset(&result_129, 0, sizeof(char*));
    # 1353 "libneo-c-gc.c"
    # 1349 "libneo-c-gc.c"
    if(_if_conditional131=str==((void*)0),    _if_conditional131) {
        # 1350 "libneo-c-gc.c"
        __result201__ = __result_obj__ = __builtin_string("");
        return __result201__;
    }
    # 1353 "libneo-c-gc.c"
    len_128=strlen(str);
    # 1358 "libneo-c-gc.c"
    # 1355 "libneo-c-gc.c"
    if(_if_conditional132=head<0,    _if_conditional132) {
        # 1356 "libneo-c-gc.c"
        head+=len_128;
    }
    # 1362 "libneo-c-gc.c"
    # 1358 "libneo-c-gc.c"
    if(_if_conditional133=tail<0,    _if_conditional133) {
        # 1359 "libneo-c-gc.c"
        tail+=len_128+1;
    }
    # 1366 "libneo-c-gc.c"
    # 1362 "libneo-c-gc.c"
    if(_if_conditional134=head>tail,    _if_conditional134) {
        # 1363 "libneo-c-gc.c"
        __result202__ = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        return __result202__;
    }
    # 1370 "libneo-c-gc.c"
    # 1366 "libneo-c-gc.c"
    if(_if_conditional135=head<0,    _if_conditional135) {
        # 1367 "libneo-c-gc.c"
        head=0;
    }
    # 1374 "libneo-c-gc.c"
    # 1370 "libneo-c-gc.c"
    if(_if_conditional136=tail>=len_128,    _if_conditional136) {
        # 1371 "libneo-c-gc.c"
        tail=len_128;
    }
    # 1378 "libneo-c-gc.c"
    # 1374 "libneo-c-gc.c"
    if(_if_conditional137=head==tail,    _if_conditional137) {
        # 1375 "libneo-c-gc.c"
        __result203__ = __result_obj__ = __builtin_string("");
        return __result203__;
    }
    # 1382 "libneo-c-gc.c"
    # 1378 "libneo-c-gc.c"
    if(_if_conditional138=tail-head+1<1,    _if_conditional138) {
        # 1379 "libneo-c-gc.c"
        __result204__ = __result_obj__ = __builtin_string("");
        return __result204__;
    }
    # 1382 "libneo-c-gc.c"
    result_129=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libneo-c-gc.c", 1382, "char");
    # 1384 "libneo-c-gc.c"
    memcpy(result_129,str+head,tail-head);
    # 1385 "libneo-c-gc.c"
    result_129[tail-head]=0;
    # 1387 "libneo-c-gc.c"
    __result205__ = __result_obj__ = result_129;
    return __result205__;
}

char* string_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional139;
char* __result206__;
int len_130;
_Bool _if_conditional140;
_Bool _if_conditional141;
_Bool _if_conditional142;
char* __result207__;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
char* __result208__;
_Bool _if_conditional146;
char* __result209__;
char* result_131;
char* __result210__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_130, 0, sizeof(int));
memset(&result_131, 0, sizeof(char*));
    # 1396 "libneo-c-gc.c"
    # 1392 "libneo-c-gc.c"
    if(_if_conditional139=str==((void*)0),    _if_conditional139) {
        # 1393 "libneo-c-gc.c"
        __result206__ = __result_obj__ = __builtin_string("");
        return __result206__;
    }
    # 1396 "libneo-c-gc.c"
    len_130=strlen(str);
    # 1401 "libneo-c-gc.c"
    # 1398 "libneo-c-gc.c"
    if(_if_conditional140=head<0,    _if_conditional140) {
        # 1399 "libneo-c-gc.c"
        head+=len_130;
    }
    # 1405 "libneo-c-gc.c"
    # 1401 "libneo-c-gc.c"
    if(_if_conditional141=tail<0,    _if_conditional141) {
        # 1402 "libneo-c-gc.c"
        tail+=len_130+1;
    }
    # 1409 "libneo-c-gc.c"
    # 1405 "libneo-c-gc.c"
    if(_if_conditional142=head>tail,    _if_conditional142) {
        # 1406 "libneo-c-gc.c"
        __result207__ = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        return __result207__;
    }
    # 1413 "libneo-c-gc.c"
    # 1409 "libneo-c-gc.c"
    if(_if_conditional143=head<0,    _if_conditional143) {
        # 1410 "libneo-c-gc.c"
        head=0;
    }
    # 1417 "libneo-c-gc.c"
    # 1413 "libneo-c-gc.c"
    if(_if_conditional144=tail>=len_130,    _if_conditional144) {
        # 1414 "libneo-c-gc.c"
        tail=len_130;
    }
    # 1421 "libneo-c-gc.c"
    # 1417 "libneo-c-gc.c"
    if(_if_conditional145=head==tail,    _if_conditional145) {
        # 1418 "libneo-c-gc.c"
        __result208__ = __result_obj__ = __builtin_string("");
        return __result208__;
    }
    # 1425 "libneo-c-gc.c"
    # 1421 "libneo-c-gc.c"
    if(_if_conditional146=tail-head+1<1,    _if_conditional146) {
        # 1422 "libneo-c-gc.c"
        __result209__ = __result_obj__ = __builtin_string("");
        return __result209__;
    }
    # 1425 "libneo-c-gc.c"
    result_131=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libneo-c-gc.c", 1425, "char");
    # 1427 "libneo-c-gc.c"
    memcpy(result_131,str+head,tail-head);
    # 1428 "libneo-c-gc.c"
    result_131[tail-head]=0;
    # 1430 "libneo-c-gc.c"
    __result210__ = __result_obj__ = result_131;
    return __result210__;
}

char* xsprintf(char* msg, ...){
void* __result_obj__;
_Bool _if_conditional147;
char* __result211__;
va_list args_132;
char* result_133;
int len_134;
_Bool _if_conditional148;
char* __result212__;
char* result2_135;
char* __result213__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&args_132, 0, sizeof(va_list));
memset(&result_133, 0, sizeof(char*));
memset(&len_134, 0, sizeof(int));
memset(&result2_135, 0, sizeof(char*));
    # 1438 "libneo-c-gc.c"
    # 1435 "libneo-c-gc.c"
    if(_if_conditional147=msg==((void*)0),    _if_conditional147) {
        # 1436 "libneo-c-gc.c"
        __result211__ = __result_obj__ = __builtin_string("");
        return __result211__;
    }
    # 1438 "libneo-c-gc.c"
    # 1439 "libneo-c-gc.c"
    __builtin_va_start(args_132,msg);
    # 1440 "libneo-c-gc.c"
    # 1441 "libneo-c-gc.c"
    len_134=vasprintf(&result_133,msg,args_132);
    # 1442 "libneo-c-gc.c"
    __builtin_va_end(args_132);
    # 1448 "libneo-c-gc.c"
    # 1444 "libneo-c-gc.c"
    if(_if_conditional148=len_134<0,    _if_conditional148) {
        # 1445 "libneo-c-gc.c"
        __result212__ = __result_obj__ = __builtin_string("");
        return __result212__;
    }
    # 1448 "libneo-c-gc.c"
    result2_135=__builtin_string(result_133);
    # 1450 "libneo-c-gc.c"
    free(result_133);
    # 1452 "libneo-c-gc.c"
    __result213__ = __result_obj__ = result2_135;
    return __result213__;
}

char* charp_delete(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional149;
char* __result214__;
int len_136;
_Bool _if_conditional150;
char* __result215__;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
_Bool _if_conditional154;
char* __result216__;
_Bool _if_conditional155;
char* sub_str_137;
char* __result217__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_136, 0, sizeof(int));
memset(&sub_str_137, 0, sizeof(char*));
    # 1461 "libneo-c-gc.c"
    # 1457 "libneo-c-gc.c"
    if(_if_conditional149=str==((void*)0),    _if_conditional149) {
        # 1458 "libneo-c-gc.c"
        __result214__ = __result_obj__ = __builtin_string("");
        return __result214__;
    }
    # 1461 "libneo-c-gc.c"
    len_136=strlen(str);
    # 1467 "libneo-c-gc.c"
    # 1463 "libneo-c-gc.c"
    if(_if_conditional150=strcmp(str,"")==0,    _if_conditional150) {
        # 1464 "libneo-c-gc.c"
        __result215__ = __result_obj__ = __builtin_string(str);
        return __result215__;
    }
    # 1471 "libneo-c-gc.c"
    # 1467 "libneo-c-gc.c"
    if(_if_conditional151=head<0,    _if_conditional151) {
        # 1468 "libneo-c-gc.c"
        head+=len_136;
    }
    # 1475 "libneo-c-gc.c"
    # 1471 "libneo-c-gc.c"
    if(_if_conditional152=tail<0,    _if_conditional152) {
        # 1472 "libneo-c-gc.c"
        tail+=len_136+1;
    }
    # 1479 "libneo-c-gc.c"
    # 1475 "libneo-c-gc.c"
    if(_if_conditional153=head<0,    _if_conditional153) {
        # 1476 "libneo-c-gc.c"
        head=0;
    }
    # 1483 "libneo-c-gc.c"
    # 1479 "libneo-c-gc.c"
    if(_if_conditional154=tail<0,    _if_conditional154) {
        # 1480 "libneo-c-gc.c"
        __result216__ = __result_obj__ = __builtin_string(str);
        return __result216__;
    }
    # 1487 "libneo-c-gc.c"
    # 1483 "libneo-c-gc.c"
    if(_if_conditional155=tail>=len_136,    _if_conditional155) {
        # 1484 "libneo-c-gc.c"
        tail=len_136;
    }
    # 1487 "libneo-c-gc.c"
    sub_str_137=charp_substring(str,tail,-1);
    # 1489 "libneo-c-gc.c"
    memcpy(str+head,sub_str_137,string_length(sub_str_137)+1);
    # 1491 "libneo-c-gc.c"
    __result217__ = __result_obj__ = __builtin_string(str);
    return __result217__;
}

char* string_delete(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional156;
char* __result218__;
int len_138;
_Bool _if_conditional157;
char* __result219__;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool _if_conditional161;
char* __result220__;
_Bool _if_conditional162;
char* sub_str_139;
char* __result221__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_138, 0, sizeof(int));
memset(&sub_str_139, 0, sizeof(char*));
    # 1500 "libneo-c-gc.c"
    # 1496 "libneo-c-gc.c"
    if(_if_conditional156=str==((void*)0),    _if_conditional156) {
        # 1497 "libneo-c-gc.c"
        __result218__ = __result_obj__ = __builtin_string("");
        return __result218__;
    }
    # 1500 "libneo-c-gc.c"
    len_138=strlen(str);
    # 1506 "libneo-c-gc.c"
    # 1502 "libneo-c-gc.c"
    if(_if_conditional157=strcmp(str,"")==0,    _if_conditional157) {
        # 1503 "libneo-c-gc.c"
        __result219__ = __result_obj__ = __builtin_string(str);
        return __result219__;
    }
    # 1510 "libneo-c-gc.c"
    # 1506 "libneo-c-gc.c"
    if(_if_conditional158=head<0,    _if_conditional158) {
        # 1507 "libneo-c-gc.c"
        head+=len_138;
    }
    # 1514 "libneo-c-gc.c"
    # 1510 "libneo-c-gc.c"
    if(_if_conditional159=tail<0,    _if_conditional159) {
        # 1511 "libneo-c-gc.c"
        tail+=len_138+1;
    }
    # 1518 "libneo-c-gc.c"
    # 1514 "libneo-c-gc.c"
    if(_if_conditional160=head<0,    _if_conditional160) {
        # 1515 "libneo-c-gc.c"
        head=0;
    }
    # 1522 "libneo-c-gc.c"
    # 1518 "libneo-c-gc.c"
    if(_if_conditional161=tail<0,    _if_conditional161) {
        # 1519 "libneo-c-gc.c"
        __result220__ = __result_obj__ = __builtin_string(str);
        return __result220__;
    }
    # 1526 "libneo-c-gc.c"
    # 1522 "libneo-c-gc.c"
    if(_if_conditional162=tail>=len_138,    _if_conditional162) {
        # 1523 "libneo-c-gc.c"
        tail=len_138;
    }
    # 1526 "libneo-c-gc.c"
    sub_str_139=charp_substring(str,tail,-1);
    # 1528 "libneo-c-gc.c"
    memcpy(str+head,sub_str_139,string_length(sub_str_139)+1);
    # 1530 "libneo-c-gc.c"
    __result221__ = __result_obj__ = __builtin_string(str);
    return __result221__;
}

struct list$1charph* charp_split_char(char* self, char c){
void* __result_obj__;
_Bool _if_conditional163;
struct list$1charph* __result223__;
struct list$1charph* result_140;
struct buffer* str_141;
int i_142;
_Bool _if_conditional164;
_Bool _if_conditional167;
struct list$1charph* __result225__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_140, 0, sizeof(struct list$1charph*));
memset(&str_141, 0, sizeof(struct buffer*));
memset(&i_142, 0, sizeof(int));
    # 1539 "libneo-c-gc.c"
    # 1535 "libneo-c-gc.c"
    if(_if_conditional163=self==((void*)0),    _if_conditional163) {
        # 1536 "libneo-c-gc.c"
        __result223__ = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-gc.c", 1536, "list$1charph"));
        return __result223__;
    }
    # 1539 "libneo-c-gc.c"
    result_140=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-gc.c", 1539, "list$1charph"));
    # 1541 "libneo-c-gc.c"
    str_141=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 1541, "buffer"));
    # 1552 "libneo-c-gc.c"
    for(    i_142=0;    i_142<charp_length(self);    i_142++    ){
        # 1551 "libneo-c-gc.c"
        # 1544 "libneo-c-gc.c"
        if(_if_conditional164=self[i_142]==c,        _if_conditional164) {
            # 1545 "libneo-c-gc.c"
            list$1charph_push_back(result_140,__builtin_string(str_141->buf));
            # 1546 "libneo-c-gc.c"
            buffer_reset(str_141);
        }
        else {
            # 1549 "libneo-c-gc.c"
            buffer_append_char(str_141,self[i_142]);
        }
    }
    # 1556 "libneo-c-gc.c"
    # 1552 "libneo-c-gc.c"
    if(_if_conditional167=buffer_length(str_141)!=0,    _if_conditional167) {
        # 1553 "libneo-c-gc.c"
        list$1charph_push_back(result_140,__builtin_string(str_141->buf));
    }
    # 1556 "libneo-c-gc.c"
    __result225__ = __result_obj__ = result_140;
    return __result225__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result222__;
memset(&__result_obj__, 0, sizeof(void*));
            # 95 "./neo-c.h"
            self->head=((void*)0);
            # 96 "./neo-c.h"
            self->tail=((void*)0);
            # 97 "./neo-c.h"
            self->len=0;
            # 99 "./neo-c.h"
            __result222__ = __result_obj__ = self;
            return __result222__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional165;
struct list_item$1charph* litem_143;
_Bool _if_conditional166;
struct list_item$1charph* litem_144;
struct list_item$1charph* litem_145;
struct list$1charph* __result224__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_143, 0, sizeof(struct list_item$1charph*));
memset(&litem_144, 0, sizeof(struct list_item$1charph*));
memset(&litem_145, 0, sizeof(struct list_item$1charph*));
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional165=self->len==0,                _if_conditional165) {
                    # 217 "./neo-c.h"
                    litem_143=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 217, "list_item$1charph");
                    # 219 "./neo-c.h"
                    litem_143->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_143->next=((void*)0);
                    # 221 "./neo-c.h"
                    litem_143->item=item;
                    # 223 "./neo-c.h"
                    self->tail=litem_143;
                    # 224 "./neo-c.h"
                    self->head=litem_143;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional166=self->len==1,                    _if_conditional166) {
                        # 227 "./neo-c.h"
                        litem_144=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 227, "list_item$1charph");
                        # 229 "./neo-c.h"
                        litem_144->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_144->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_144->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_144;
                        # 234 "./neo-c.h"
                        self->head->next=litem_144;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_145=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 237, "list_item$1charph");
                        # 239 "./neo-c.h"
                        litem_145->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_145->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_145->item=item;
                        # 243 "./neo-c.h"
                        self->tail->next=litem_145;
                        # 244 "./neo-c.h"
                        self->tail=litem_145;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
                __result224__ = __result_obj__ = self;
                return __result224__;
}

struct list$1charph* string_split_char(char* self, char c){
void* __result_obj__;
_Bool _if_conditional168;
struct list$1charph* __result226__;
struct list$1charph* result_146;
struct buffer* str_147;
int i_148;
_Bool _if_conditional169;
_Bool _if_conditional170;
struct list$1charph* __result227__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_146, 0, sizeof(struct list$1charph*));
memset(&str_147, 0, sizeof(struct buffer*));
memset(&i_148, 0, sizeof(int));
    # 1565 "libneo-c-gc.c"
    # 1561 "libneo-c-gc.c"
    if(_if_conditional168=self==((void*)0),    _if_conditional168) {
        # 1562 "libneo-c-gc.c"
        __result226__ = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-gc.c", 1562, "list$1charph"));
        return __result226__;
    }
    # 1565 "libneo-c-gc.c"
    result_146=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-gc.c", 1565, "list$1charph"));
    # 1567 "libneo-c-gc.c"
    str_147=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 1567, "buffer"));
    # 1578 "libneo-c-gc.c"
    for(    i_148=0;    i_148<charp_length(self);    i_148++    ){
        # 1577 "libneo-c-gc.c"
        # 1570 "libneo-c-gc.c"
        if(_if_conditional169=self[i_148]==c,        _if_conditional169) {
            # 1571 "libneo-c-gc.c"
            list$1charph_push_back(result_146,__builtin_string(str_147->buf));
            # 1572 "libneo-c-gc.c"
            buffer_reset(str_147);
        }
        else {
            # 1575 "libneo-c-gc.c"
            buffer_append_char(str_147,self[i_148]);
        }
    }
    # 1582 "libneo-c-gc.c"
    # 1578 "libneo-c-gc.c"
    if(_if_conditional170=buffer_length(str_147)!=0,    _if_conditional170) {
        # 1579 "libneo-c-gc.c"
        list$1charph_push_back(result_146,__builtin_string(str_147->buf));
    }
    # 1582 "libneo-c-gc.c"
    __result227__ = __result_obj__ = result_146;
    return __result227__;
}

char* xbasename(char* path){
void* __result_obj__;
_Bool _if_conditional171;
char* __result228__;
char* p_149;
_Bool _while_condtional3;
_Bool _if_conditional172;
_Bool _if_conditional173;
char* __result229__;
char* __result230__;
char* __result231__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_149, 0, sizeof(char*));
    # 1593 "libneo-c-gc.c"
    # 1590 "libneo-c-gc.c"
    if(_if_conditional171=path==((void*)0),    _if_conditional171) {
        # 1591 "libneo-c-gc.c"
        __result228__ = __result_obj__ = __builtin_string("");
        return __result228__;
    }
    # 1593 "libneo-c-gc.c"
    p_149=path+strlen(path);
    # 1604 "libneo-c-gc.c"
    while(_while_condtional3=p_149>=path,    _while_condtional3) {
        # 1602 "libneo-c-gc.c"
        # 1596 "libneo-c-gc.c"
        if(_if_conditional172=*p_149==47,        _if_conditional172) {
            # 1597 "libneo-c-gc.c"
            break;
        }
        else {
            # 1600 "libneo-c-gc.c"
            p_149--;
        }
    }
    # 1611 "libneo-c-gc.c"
    # 1604 "libneo-c-gc.c"
    if(_if_conditional173=p_149<path,    _if_conditional173) {
        # 1605 "libneo-c-gc.c"
        __result229__ = __result_obj__ = __builtin_string(path);
        return __result229__;
    }
    else {
        # 1608 "libneo-c-gc.c"
        __result230__ = __result_obj__ = __builtin_string(p_149+1);
        return __result230__;
    }
    # 1611 "libneo-c-gc.c"
    __result231__ = __result_obj__ = __builtin_string("");
    return __result231__;
}

char* xdirname(char* path){
void* __result_obj__;
_Bool _if_conditional174;
char* __result232__;
char* __result233__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1619 "libneo-c-gc.c"
    # 1616 "libneo-c-gc.c"
    if(_if_conditional174=path==((void*)0),    _if_conditional174) {
        # 1617 "libneo-c-gc.c"
        __result232__ = __result_obj__ = __builtin_string("");
        return __result232__;
    }
    # 1619 "libneo-c-gc.c"
    __result233__ = __result_obj__ = __builtin_string(dirname(__builtin_string(path)));
    return __result233__;
}

char* xnoextname(char* path){
void* __result_obj__;
_Bool _if_conditional175;
char* __result234__;
char* path2_150;
char* p_151;
_Bool _while_condtional4;
_Bool _if_conditional176;
_Bool _if_conditional177;
char* __result235__;
char* __result236__;
char* __result237__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&path2_150, 0, sizeof(char*));
memset(&p_151, 0, sizeof(char*));
    # 1627 "libneo-c-gc.c"
    # 1624 "libneo-c-gc.c"
    if(_if_conditional175=path==((void*)0),    _if_conditional175) {
        # 1625 "libneo-c-gc.c"
        __result234__ = __result_obj__ = __builtin_string("");
        return __result234__;
    }
    # 1627 "libneo-c-gc.c"
    path2_150=xbasename(path);
    # 1629 "libneo-c-gc.c"
    p_151=path2_150+strlen(path2_150);
    # 1640 "libneo-c-gc.c"
    while(_while_condtional4=p_151>=path2_150,    _while_condtional4) {
        # 1638 "libneo-c-gc.c"
        # 1632 "libneo-c-gc.c"
        if(_if_conditional176=*p_151==46,        _if_conditional176) {
            # 1633 "libneo-c-gc.c"
            break;
        }
        else {
            # 1636 "libneo-c-gc.c"
            p_151--;
        }
    }
    # 1647 "libneo-c-gc.c"
    # 1640 "libneo-c-gc.c"
    if(_if_conditional177=p_151<path2_150,    _if_conditional177) {
        # 1641 "libneo-c-gc.c"
        __result235__ = __result_obj__ = __builtin_string(path2_150);
        return __result235__;
    }
    else {
        # 1644 "libneo-c-gc.c"
        __result236__ = __result_obj__ = string_substring(path2_150,0,p_151-path2_150);
        return __result236__;
    }
    # 1647 "libneo-c-gc.c"
    __result237__ = __result_obj__ = __builtin_string("");
    return __result237__;
}

char* xextname(char* path){
void* __result_obj__;
_Bool _if_conditional178;
char* __result238__;
char* p_152;
_Bool _while_condtional5;
_Bool _if_conditional179;
_Bool _if_conditional180;
char* __result239__;
char* __result240__;
char* __result241__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_152, 0, sizeof(char*));
    # 1655 "libneo-c-gc.c"
    # 1652 "libneo-c-gc.c"
    if(_if_conditional178=path==((void*)0),    _if_conditional178) {
        # 1653 "libneo-c-gc.c"
        __result238__ = __result_obj__ = __builtin_string("");
        return __result238__;
    }
    # 1655 "libneo-c-gc.c"
    p_152=path+strlen(path);
    # 1666 "libneo-c-gc.c"
    while(_while_condtional5=p_152>=path,    _while_condtional5) {
        # 1664 "libneo-c-gc.c"
        # 1658 "libneo-c-gc.c"
        if(_if_conditional179=*p_152==46,        _if_conditional179) {
            # 1659 "libneo-c-gc.c"
            break;
        }
        else {
            # 1662 "libneo-c-gc.c"
            p_152--;
        }
    }
    # 1673 "libneo-c-gc.c"
    # 1666 "libneo-c-gc.c"
    if(_if_conditional180=p_152<path,    _if_conditional180) {
        # 1667 "libneo-c-gc.c"
        __result239__ = __result_obj__ = __builtin_string(path);
        return __result239__;
    }
    else {
        # 1670 "libneo-c-gc.c"
        __result240__ = __result_obj__ = __builtin_string(p_152+1);
        return __result240__;
    }
    # 1673 "libneo-c-gc.c"
    __result241__ = __result_obj__ = __builtin_string("");
    return __result241__;
}

char* xrealpath(char* path){
void* __result_obj__;
_Bool _if_conditional181;
char* __result242__;
char* result_153;
char* result2_154;
char* __result243__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_153, 0, sizeof(char*));
memset(&result2_154, 0, sizeof(char*));
    # 1681 "libneo-c-gc.c"
    # 1678 "libneo-c-gc.c"
    if(_if_conditional181=path==((void*)0),    _if_conditional181) {
        # 1679 "libneo-c-gc.c"
        __result242__ = __result_obj__ = __builtin_string("");
        return __result242__;
    }
    # 1681 "libneo-c-gc.c"
    result_153=realpath(path,((void*)0));
    # 1683 "libneo-c-gc.c"
    result2_154=__builtin_string(result_153);
    # 1685 "libneo-c-gc.c"
    free(result_153);
    # 1687 "libneo-c-gc.c"
    __result243__ = __result_obj__ = result2_154;
    return __result243__;
}

char* bool_to_string(_Bool self){
void* __result_obj__;
_Bool _if_conditional182;
char* __result244__;
char* __result245__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1701 "libneo-c-gc.c"
    # 1695 "libneo-c-gc.c"
    if(self) {
        # 1696 "libneo-c-gc.c"
        __result244__ = __result_obj__ = __builtin_string("true");
        return __result244__;
    }
    else {
        # 1699 "libneo-c-gc.c"
        __result245__ = __result_obj__ = __builtin_string("false");
        return __result245__;
    }
}

char* char_to_string(char self){
void* __result_obj__;
char* __result246__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1705 "libneo-c-gc.c"
    __result246__ = __result_obj__ = xsprintf("%c",self);
    return __result246__;
}

char* short_to_string(short short self){
void* __result_obj__;
char* __result247__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1710 "libneo-c-gc.c"
    __result247__ = __result_obj__ = xsprintf("%d",self);
    return __result247__;
}

char* int_to_string(int self){
void* __result_obj__;
char* __result248__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1715 "libneo-c-gc.c"
    __result248__ = __result_obj__ = xsprintf("%d",self);
    return __result248__;
}

char* long_to_string(long self){
void* __result_obj__;
char* __result249__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1720 "libneo-c-gc.c"
    __result249__ = __result_obj__ = xsprintf("%ld",self);
    return __result249__;
}

char* size_t_to_string(unsigned long int self){
void* __result_obj__;
char* __result250__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1725 "libneo-c-gc.c"
    __result250__ = __result_obj__ = xsprintf("%ld",self);
    return __result250__;
}

char* float_to_string(float self){
void* __result_obj__;
char* __result251__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1730 "libneo-c-gc.c"
    __result251__ = __result_obj__ = xsprintf("%f",self);
    return __result251__;
}

char* double_to_string(double self){
void* __result_obj__;
char* __result252__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1735 "libneo-c-gc.c"
    __result252__ = __result_obj__ = xsprintf("%lf",self);
    return __result252__;
}

char* string_to_string(char* self){
void* __result_obj__;
_Bool _if_conditional183;
char* __result253__;
char* __result254__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1743 "libneo-c-gc.c"
    # 1740 "libneo-c-gc.c"
    if(_if_conditional183=self==((void*)0),    _if_conditional183) {
        # 1741 "libneo-c-gc.c"
        __result253__ = __result_obj__ = __builtin_string("");
        return __result253__;
    }
    # 1743 "libneo-c-gc.c"
    __result254__ = __result_obj__ = __builtin_string(self);
    return __result254__;
}

char* charp_to_string(char* self){
void* __result_obj__;
_Bool _if_conditional184;
char* __result255__;
char* __result256__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1751 "libneo-c-gc.c"
    # 1748 "libneo-c-gc.c"
    if(_if_conditional184=self==((void*)0),    _if_conditional184) {
        # 1749 "libneo-c-gc.c"
        __result255__ = __result_obj__ = __builtin_string("");
        return __result255__;
    }
    # 1751 "libneo-c-gc.c"
    __result256__ = __result_obj__ = __builtin_string(self);
    return __result256__;
}

int bool_compare(_Bool left, _Bool right){
void* __result_obj__;
_Bool _if_conditional185;
int __result257__;
_Bool _if_conditional186;
int __result258__;
_Bool _if_conditional187;
int __result259__;
int __result260__;
int __result261__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1772 "libneo-c-gc.c"
    # 1759 "libneo-c-gc.c"
    if(_if_conditional185=!left&&right,    _if_conditional185) {
        # 1760 "libneo-c-gc.c"
        __result257__ = -1;
        return __result257__;
    }
    else {
        # 1772 "libneo-c-gc.c"
        # 1762 "libneo-c-gc.c"
        if(_if_conditional186=left&&right,        _if_conditional186) {
            # 1763 "libneo-c-gc.c"
            __result258__ = 0;
            return __result258__;
        }
        else {
            # 1772 "libneo-c-gc.c"
            # 1765 "libneo-c-gc.c"
            if(_if_conditional187=!left&&!right,            _if_conditional187) {
                # 1766 "libneo-c-gc.c"
                __result259__ = 0;
                return __result259__;
            }
            else {
                # 1769 "libneo-c-gc.c"
                __result260__ = 1;
                return __result260__;
            }
        }
    }
    # 1772 "libneo-c-gc.c"
    __result261__ = 0;
    return __result261__;
}

int char_compare(char left, char right){
void* __result_obj__;
_Bool _if_conditional188;
int __result262__;
_Bool _if_conditional189;
int __result263__;
int __result264__;
int __result265__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1787 "libneo-c-gc.c"
    # 1777 "libneo-c-gc.c"
    if(_if_conditional188=left<right,    _if_conditional188) {
        # 1778 "libneo-c-gc.c"
        __result262__ = -1;
        return __result262__;
    }
    else {
        # 1787 "libneo-c-gc.c"
        # 1780 "libneo-c-gc.c"
        if(_if_conditional189=left>right,        _if_conditional189) {
            # 1781 "libneo-c-gc.c"
            __result263__ = 1;
            return __result263__;
        }
        else {
            # 1784 "libneo-c-gc.c"
            __result264__ = 0;
            return __result264__;
        }
    }
    # 1787 "libneo-c-gc.c"
    __result265__ = 0;
    return __result265__;
}

int short_compare(short short left, short short right){
void* __result_obj__;
_Bool _if_conditional190;
int __result266__;
_Bool _if_conditional191;
int __result267__;
int __result268__;
int __result269__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1802 "libneo-c-gc.c"
    # 1792 "libneo-c-gc.c"
    if(_if_conditional190=left<right,    _if_conditional190) {
        # 1793 "libneo-c-gc.c"
        __result266__ = -1;
        return __result266__;
    }
    else {
        # 1802 "libneo-c-gc.c"
        # 1795 "libneo-c-gc.c"
        if(_if_conditional191=left>right,        _if_conditional191) {
            # 1796 "libneo-c-gc.c"
            __result267__ = 1;
            return __result267__;
        }
        else {
            # 1799 "libneo-c-gc.c"
            __result268__ = 0;
            return __result268__;
        }
    }
    # 1802 "libneo-c-gc.c"
    __result269__ = 0;
    return __result269__;
}

int int_compare(int left, int right){
void* __result_obj__;
_Bool _if_conditional192;
int __result270__;
_Bool _if_conditional193;
int __result271__;
int __result272__;
int __result273__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1817 "libneo-c-gc.c"
    # 1807 "libneo-c-gc.c"
    if(_if_conditional192=left<right,    _if_conditional192) {
        # 1808 "libneo-c-gc.c"
        __result270__ = -1;
        return __result270__;
    }
    else {
        # 1817 "libneo-c-gc.c"
        # 1810 "libneo-c-gc.c"
        if(_if_conditional193=left>right,        _if_conditional193) {
            # 1811 "libneo-c-gc.c"
            __result271__ = 1;
            return __result271__;
        }
        else {
            # 1814 "libneo-c-gc.c"
            __result272__ = 0;
            return __result272__;
        }
    }
    # 1817 "libneo-c-gc.c"
    __result273__ = 0;
    return __result273__;
}

int long_compare(long left, long right){
void* __result_obj__;
_Bool _if_conditional194;
int __result274__;
_Bool _if_conditional195;
int __result275__;
int __result276__;
int __result277__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1832 "libneo-c-gc.c"
    # 1822 "libneo-c-gc.c"
    if(_if_conditional194=left<right,    _if_conditional194) {
        # 1823 "libneo-c-gc.c"
        __result274__ = -1;
        return __result274__;
    }
    else {
        # 1832 "libneo-c-gc.c"
        # 1825 "libneo-c-gc.c"
        if(_if_conditional195=left>right,        _if_conditional195) {
            # 1826 "libneo-c-gc.c"
            __result275__ = 1;
            return __result275__;
        }
        else {
            # 1829 "libneo-c-gc.c"
            __result276__ = 0;
            return __result276__;
        }
    }
    # 1832 "libneo-c-gc.c"
    __result277__ = 0;
    return __result277__;
}

int size_t_compare(unsigned long int left, unsigned long int right){
void* __result_obj__;
_Bool _if_conditional196;
int __result278__;
_Bool _if_conditional197;
int __result279__;
int __result280__;
int __result281__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1847 "libneo-c-gc.c"
    # 1837 "libneo-c-gc.c"
    if(_if_conditional196=left<right,    _if_conditional196) {
        # 1838 "libneo-c-gc.c"
        __result278__ = -1;
        return __result278__;
    }
    else {
        # 1847 "libneo-c-gc.c"
        # 1840 "libneo-c-gc.c"
        if(_if_conditional197=left>right,        _if_conditional197) {
            # 1841 "libneo-c-gc.c"
            __result279__ = 1;
            return __result279__;
        }
        else {
            # 1844 "libneo-c-gc.c"
            __result280__ = 0;
            return __result280__;
        }
    }
    # 1847 "libneo-c-gc.c"
    __result281__ = 0;
    return __result281__;
}

int float_compare(float left, float right){
void* __result_obj__;
_Bool _if_conditional198;
int __result282__;
_Bool _if_conditional199;
int __result283__;
int __result284__;
int __result285__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1862 "libneo-c-gc.c"
    # 1852 "libneo-c-gc.c"
    if(_if_conditional198=left<right,    _if_conditional198) {
        # 1853 "libneo-c-gc.c"
        __result282__ = -1;
        return __result282__;
    }
    else {
        # 1862 "libneo-c-gc.c"
        # 1855 "libneo-c-gc.c"
        if(_if_conditional199=left>right,        _if_conditional199) {
            # 1856 "libneo-c-gc.c"
            __result283__ = 1;
            return __result283__;
        }
        else {
            # 1859 "libneo-c-gc.c"
            __result284__ = 0;
            return __result284__;
        }
    }
    # 1862 "libneo-c-gc.c"
    __result285__ = 0;
    return __result285__;
}

int double_compare(double left, double right){
void* __result_obj__;
_Bool _if_conditional200;
int __result286__;
_Bool _if_conditional201;
int __result287__;
int __result288__;
int __result289__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1877 "libneo-c-gc.c"
    # 1867 "libneo-c-gc.c"
    if(_if_conditional200=left<right,    _if_conditional200) {
        # 1868 "libneo-c-gc.c"
        __result286__ = -1;
        return __result286__;
    }
    else {
        # 1877 "libneo-c-gc.c"
        # 1870 "libneo-c-gc.c"
        if(_if_conditional201=left>right,        _if_conditional201) {
            # 1871 "libneo-c-gc.c"
            __result287__ = 1;
            return __result287__;
        }
        else {
            # 1874 "libneo-c-gc.c"
            __result288__ = 0;
            return __result288__;
        }
    }
    # 1877 "libneo-c-gc.c"
    __result289__ = 0;
    return __result289__;
}

int string_compare(char* left, char* right){
void* __result_obj__;
_Bool _if_conditional202;
int __result290__;
_Bool _if_conditional203;
int __result291__;
_Bool _if_conditional204;
int __result292__;
int __result293__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1892 "libneo-c-gc.c"
    # 1882 "libneo-c-gc.c"
    if(_if_conditional202=left==((void*)0)&&right==((void*)0),    _if_conditional202) {
        # 1883 "libneo-c-gc.c"
        __result290__ = 0;
        return __result290__;
    }
    else {
        # 1892 "libneo-c-gc.c"
        # 1885 "libneo-c-gc.c"
        if(_if_conditional203=left==((void*)0),        _if_conditional203) {
            # 1886 "libneo-c-gc.c"
            __result291__ = -1;
            return __result291__;
        }
        else {
            # 1892 "libneo-c-gc.c"
            # 1888 "libneo-c-gc.c"
            if(_if_conditional204=right==((void*)0),            _if_conditional204) {
                # 1889 "libneo-c-gc.c"
                __result292__ = 1;
                return __result292__;
            }
        }
    }
    # 1892 "libneo-c-gc.c"
    __result293__ = strcmp(left,right);
    return __result293__;
}

int charp_compare(char* left, char* right){
void* __result_obj__;
_Bool _if_conditional205;
int __result294__;
_Bool _if_conditional206;
int __result295__;
_Bool _if_conditional207;
int __result296__;
int __result297__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1907 "libneo-c-gc.c"
    # 1897 "libneo-c-gc.c"
    if(_if_conditional205=left==((void*)0)&&right==((void*)0),    _if_conditional205) {
        # 1898 "libneo-c-gc.c"
        __result294__ = 0;
        return __result294__;
    }
    else {
        # 1907 "libneo-c-gc.c"
        # 1900 "libneo-c-gc.c"
        if(_if_conditional206=left==((void*)0),        _if_conditional206) {
            # 1901 "libneo-c-gc.c"
            __result295__ = -1;
            return __result295__;
        }
        else {
            # 1907 "libneo-c-gc.c"
            # 1903 "libneo-c-gc.c"
            if(_if_conditional207=right==((void*)0),            _if_conditional207) {
                # 1904 "libneo-c-gc.c"
                __result296__ = 1;
                return __result296__;
            }
        }
    }
    # 1907 "libneo-c-gc.c"
    __result297__ = strcmp(left,right);
    return __result297__;
}

char* FILE_read(struct _IO_FILE* f){
void* __result_obj__;
_Bool _if_conditional208;
char* __result298__;
struct buffer* buf_155;
_Bool _while_condtional6;
int size_157;
_Bool _if_conditional209;
char* __result299__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&buf_155, 0, sizeof(struct buffer*));
memset(&size_157, 0, sizeof(int));
    # 1918 "libneo-c-gc.c"
    # 1915 "libneo-c-gc.c"
    if(_if_conditional208=f==((void*)0),    _if_conditional208) {
        # 1916 "libneo-c-gc.c"
        __result298__ = __result_obj__ = __builtin_string("");
        return __result298__;
    }
    # 1918 "libneo-c-gc.c"
    buf_155=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 1918, "buffer"));
    # 1932 "libneo-c-gc.c"
    while(_while_condtional6=1,    _while_condtional6) {
        # 1921 "libneo-c-gc.c"
        char buf2_156[1024];
        memset(&buf2_156, 0, sizeof(char)        *(1024)        );
        # 1923 "libneo-c-gc.c"
        size_157=fread(buf2_156,1,1024,f);
        # 1925 "libneo-c-gc.c"
        buffer_append(buf_155,buf2_156,size_157);
        # 1930 "libneo-c-gc.c"
        # 1927 "libneo-c-gc.c"
        if(_if_conditional209=size_157<1024,        _if_conditional209) {
            # 1928 "libneo-c-gc.c"
            break;
        }
    }
    # 1932 "libneo-c-gc.c"
    __result299__ = __result_obj__ = buffer_to_string(buf_155);
    return __result299__;
}

int FILE_write(struct _IO_FILE* f, char* str){
void* __result_obj__;
_Bool _if_conditional210;
int __result300__;
int __result301__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1941 "libneo-c-gc.c"
    # 1937 "libneo-c-gc.c"
    if(_if_conditional210=f==((void*)0)||str==((void*)0),    _if_conditional210) {
        # 1938 "libneo-c-gc.c"
        __result300__ = -1;
        return __result300__;
    }
    # 1941 "libneo-c-gc.c"
    __result301__ = fwrite(str,strlen(str),1,f);
    return __result301__;
}

int FILE_fclose(struct _IO_FILE* f){
void* __result_obj__;
_Bool _if_conditional211;
int __result302__;
int result_158;
_Bool _if_conditional212;
int __result303__;
int __result304__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_158, 0, sizeof(int));
    # 1950 "libneo-c-gc.c"
    # 1946 "libneo-c-gc.c"
    if(_if_conditional211=f==((void*)0),    _if_conditional211) {
        # 1947 "libneo-c-gc.c"
        __result302__ = -1;
        return __result302__;
    }
    # 1950 "libneo-c-gc.c"
    result_158=fclose(f);
    # 1956 "libneo-c-gc.c"
    # 1952 "libneo-c-gc.c"
    if(_if_conditional212=result_158<0,    _if_conditional212) {
        # 1953 "libneo-c-gc.c"
        __result303__ = result_158;
        return __result303__;
    }
    # 1956 "libneo-c-gc.c"
    __result304__ = result_158;
    return __result304__;
}

struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional213;
struct _IO_FILE* __result305__;
va_list args_160;
int result_161;
_Bool _if_conditional214;
struct _IO_FILE* __result306__;
struct _IO_FILE* __result307__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&args_160, 0, sizeof(va_list));
memset(&result_161, 0, sizeof(int));
    # 1964 "libneo-c-gc.c"
    # 1961 "libneo-c-gc.c"
    if(_if_conditional213=f==((void*)0)||msg==((void*)0),    _if_conditional213) {
        # 1962 "libneo-c-gc.c"
        __result305__ = __result_obj__ = f;
        return __result305__;
    }
    # 1964 "libneo-c-gc.c"
    char msg2_159[1024*2*2*2];
    memset(&msg2_159, 0, sizeof(char)    *(1024*2*2*2)    );
    # 1966 "libneo-c-gc.c"
    # 1967 "libneo-c-gc.c"
    __builtin_va_start(args_160,msg);
    # 1968 "libneo-c-gc.c"
    vsnprintf(msg2_159,1024*2*2*2,msg,args_160);
    # 1969 "libneo-c-gc.c"
    __builtin_va_end(args_160);
    # 1971 "libneo-c-gc.c"
    result_161=fprintf(f,"%s",msg2_159);
    # 1977 "libneo-c-gc.c"
    # 1973 "libneo-c-gc.c"
    if(_if_conditional214=result_161<0,    _if_conditional214) {
        # 1974 "libneo-c-gc.c"
        __result306__ = __result_obj__ = f;
        return __result306__;
    }
    # 1977 "libneo-c-gc.c"
    __result307__ = __result_obj__ = f;
    return __result307__;
}

int string_write(char* self, char* file_name, _Bool append){
void* __result_obj__;
_Bool _if_conditional215;
int __result308__;
struct _IO_FILE* f_162;
_Bool _if_conditional216;
_Bool _if_conditional217;
int __result309__;
int result_163;
_Bool _if_conditional218;
int __result310__;
int result2_164;
_Bool _if_conditional219;
int __result311__;
int __result312__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_162, 0, sizeof(struct _IO_FILE*));
memset(&result_163, 0, sizeof(int));
memset(&result2_164, 0, sizeof(int));
    # 1986 "libneo-c-gc.c"
    # 1982 "libneo-c-gc.c"
    if(_if_conditional215=self==((void*)0)||file_name==((void*)0),    _if_conditional215) {
        # 1983 "libneo-c-gc.c"
        __result308__ = -1;
        return __result308__;
    }
    # 1986 "libneo-c-gc.c"
    # 1994 "libneo-c-gc.c"
    # 1987 "libneo-c-gc.c"
    if(append) {
        # 1988 "libneo-c-gc.c"
        f_162=fopen(file_name,"a");
    }
    else {
        # 1991 "libneo-c-gc.c"
        f_162=fopen(file_name,"w");
    }
    # 1998 "libneo-c-gc.c"
    # 1994 "libneo-c-gc.c"
    if(_if_conditional217=f_162==((void*)0),    _if_conditional217) {
        # 1995 "libneo-c-gc.c"
        __result309__ = -1;
        return __result309__;
    }
    # 1998 "libneo-c-gc.c"
    result_163=fwrite(self,strlen(self),1,f_162);
    # 2004 "libneo-c-gc.c"
    # 2000 "libneo-c-gc.c"
    if(_if_conditional218=result_163<0,    _if_conditional218) {
        # 2001 "libneo-c-gc.c"
        __result310__ = result_163;
        return __result310__;
    }
    # 2006 "libneo-c-gc.c"
    result2_164=fclose(f_162);
    # 2010 "libneo-c-gc.c"
    # 2006 "libneo-c-gc.c"
    if(_if_conditional219=result2_164<0,    _if_conditional219) {
        # 2007 "libneo-c-gc.c"
        __result311__ = result2_164;
        return __result311__;
    }
    # 2010 "libneo-c-gc.c"
    __result312__ = result_163;
    return __result312__;
}

int charp_write(char* self, char* file_name, _Bool append){
void* __result_obj__;
_Bool _if_conditional220;
int __result313__;
struct _IO_FILE* f_165;
_Bool _if_conditional221;
_Bool _if_conditional222;
int __result314__;
int result_166;
_Bool _if_conditional223;
int __result315__;
int result2_167;
_Bool _if_conditional224;
int __result316__;
int __result317__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_165, 0, sizeof(struct _IO_FILE*));
memset(&result_166, 0, sizeof(int));
memset(&result2_167, 0, sizeof(int));
    # 2019 "libneo-c-gc.c"
    # 2015 "libneo-c-gc.c"
    if(_if_conditional220=self==((void*)0)||file_name==((void*)0),    _if_conditional220) {
        # 2016 "libneo-c-gc.c"
        __result313__ = -1;
        return __result313__;
    }
    # 2019 "libneo-c-gc.c"
    # 2027 "libneo-c-gc.c"
    # 2020 "libneo-c-gc.c"
    if(append) {
        # 2021 "libneo-c-gc.c"
        f_165=fopen(file_name,"a");
    }
    else {
        # 2024 "libneo-c-gc.c"
        f_165=fopen(file_name,"w");
    }
    # 2031 "libneo-c-gc.c"
    # 2027 "libneo-c-gc.c"
    if(_if_conditional222=f_165==((void*)0),    _if_conditional222) {
        # 2028 "libneo-c-gc.c"
        __result314__ = -1;
        return __result314__;
    }
    # 2031 "libneo-c-gc.c"
    result_166=fwrite(self,strlen(self),1,f_165);
    # 2037 "libneo-c-gc.c"
    # 2033 "libneo-c-gc.c"
    if(_if_conditional223=result_166<0,    _if_conditional223) {
        # 2034 "libneo-c-gc.c"
        __result315__ = result_166;
        return __result315__;
    }
    # 2039 "libneo-c-gc.c"
    result2_167=fclose(f_165);
    # 2043 "libneo-c-gc.c"
    # 2039 "libneo-c-gc.c"
    if(_if_conditional224=result2_167<0,    _if_conditional224) {
        # 2040 "libneo-c-gc.c"
        __result316__ = result2_167;
        return __result316__;
    }
    # 2043 "libneo-c-gc.c"
    __result317__ = result_166;
    return __result317__;
}

char* string_read(char* file_name){
void* __result_obj__;
_Bool _if_conditional225;
char* __result318__;
struct _IO_FILE* f_168;
_Bool _if_conditional226;
char* __result319__;
struct buffer* buf_169;
_Bool _while_condtional7;
int size_171;
_Bool _if_conditional227;
char* result_172;
int result2_173;
_Bool _if_conditional228;
char* __result320__;
char* __result321__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_168, 0, sizeof(struct _IO_FILE*));
memset(&buf_169, 0, sizeof(struct buffer*));
memset(&size_171, 0, sizeof(int));
memset(&result_172, 0, sizeof(char*));
memset(&result2_173, 0, sizeof(int));
    # 2052 "libneo-c-gc.c"
    # 2048 "libneo-c-gc.c"
    if(_if_conditional225=file_name==((void*)0),    _if_conditional225) {
        # 2049 "libneo-c-gc.c"
        __result318__ = __result_obj__ = __builtin_string("");
        return __result318__;
    }
    # 2052 "libneo-c-gc.c"
    f_168=fopen(file_name,"r");
    # 2058 "libneo-c-gc.c"
    # 2054 "libneo-c-gc.c"
    if(_if_conditional226=f_168==((void*)0),    _if_conditional226) {
        # 2055 "libneo-c-gc.c"
        __result319__ = __result_obj__ = __builtin_string("");
        return __result319__;
    }
    # 2058 "libneo-c-gc.c"
    buf_169=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 2058, "buffer"));
    # 2072 "libneo-c-gc.c"
    while(_while_condtional7=1,    _while_condtional7) {
        # 2061 "libneo-c-gc.c"
        char buf2_170[1024];
        memset(&buf2_170, 0, sizeof(char)        *(1024)        );
        # 2063 "libneo-c-gc.c"
        size_171=fread(buf2_170,1,1024,f_168);
        # 2065 "libneo-c-gc.c"
        buffer_append(buf_169,buf2_170,size_171);
        # 2070 "libneo-c-gc.c"
        # 2067 "libneo-c-gc.c"
        if(_if_conditional227=size_171<1024,        _if_conditional227) {
            # 2068 "libneo-c-gc.c"
            break;
        }
    }
    # 2072 "libneo-c-gc.c"
    result_172=buffer_to_string(buf_169);
    # 2076 "libneo-c-gc.c"
    result2_173=fclose(f_168);
    # 2080 "libneo-c-gc.c"
    # 2076 "libneo-c-gc.c"
    if(_if_conditional228=result2_173<0,    _if_conditional228) {
        # 2077 "libneo-c-gc.c"
        __result320__ = __result_obj__ = __builtin_string("");
        return __result320__;
    }
    # 2080 "libneo-c-gc.c"
    __result321__ = __result_obj__ = result_172;
    return __result321__;
}

char* charp_read(char* file_name){
void* __result_obj__;
_Bool _if_conditional229;
char* __result322__;
struct _IO_FILE* f_174;
_Bool _if_conditional230;
char* __result323__;
struct buffer* buf_175;
_Bool _while_condtional8;
int size_177;
_Bool _if_conditional231;
char* result_178;
int result2_179;
_Bool _if_conditional232;
char* __result324__;
char* __result325__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_174, 0, sizeof(struct _IO_FILE*));
memset(&buf_175, 0, sizeof(struct buffer*));
memset(&size_177, 0, sizeof(int));
memset(&result_178, 0, sizeof(char*));
memset(&result2_179, 0, sizeof(int));
    # 2089 "libneo-c-gc.c"
    # 2085 "libneo-c-gc.c"
    if(_if_conditional229=file_name==((void*)0),    _if_conditional229) {
        # 2086 "libneo-c-gc.c"
        __result322__ = __result_obj__ = __builtin_string("");
        return __result322__;
    }
    # 2089 "libneo-c-gc.c"
    f_174=fopen(file_name,"r");
    # 2095 "libneo-c-gc.c"
    # 2091 "libneo-c-gc.c"
    if(_if_conditional230=f_174==((void*)0),    _if_conditional230) {
        # 2092 "libneo-c-gc.c"
        __result323__ = __result_obj__ = __builtin_string("");
        return __result323__;
    }
    # 2095 "libneo-c-gc.c"
    buf_175=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 2095, "buffer"));
    # 2109 "libneo-c-gc.c"
    while(_while_condtional8=1,    _while_condtional8) {
        # 2098 "libneo-c-gc.c"
        char buf2_176[1024];
        memset(&buf2_176, 0, sizeof(char)        *(1024)        );
        # 2100 "libneo-c-gc.c"
        size_177=fread(buf2_176,1,1024,f_174);
        # 2102 "libneo-c-gc.c"
        buffer_append(buf_175,buf2_176,size_177);
        # 2107 "libneo-c-gc.c"
        # 2104 "libneo-c-gc.c"
        if(_if_conditional231=size_177<1024,        _if_conditional231) {
            # 2105 "libneo-c-gc.c"
            break;
        }
    }
    # 2109 "libneo-c-gc.c"
    result_178=buffer_to_string(buf_175);
    # 2113 "libneo-c-gc.c"
    result2_179=fclose(f_174);
    # 2117 "libneo-c-gc.c"
    # 2113 "libneo-c-gc.c"
    if(_if_conditional232=result2_179<0,    _if_conditional232) {
        # 2114 "libneo-c-gc.c"
        __result324__ = __result_obj__ = __builtin_string("");
        return __result324__;
    }
    # 2117 "libneo-c-gc.c"
    __result325__ = __result_obj__ = result_178;
    return __result325__;
}

struct list$1charph* FILE_readlines(struct _IO_FILE* f){
void* __result_obj__;
struct list$1charph* result_180;
_Bool _if_conditional233;
struct list$1charph* __result326__;
_Bool _while_condtional9;
_Bool _if_conditional234;
struct list$1charph* __result327__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_180, 0, sizeof(struct list$1charph*));
    # 2122 "libneo-c-gc.c"
    result_180=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-gc.c", 2122, "list$1charph"));
    # 2128 "libneo-c-gc.c"
    # 2124 "libneo-c-gc.c"
    if(_if_conditional233=f==((void*)0),    _if_conditional233) {
        # 2125 "libneo-c-gc.c"
        __result326__ = __result_obj__ = result_180;
        return __result326__;
    }
    # 2138 "libneo-c-gc.c"
    while(_while_condtional9=1,    _while_condtional9) {
        # 2129 "libneo-c-gc.c"
        char buf_181[1024];
        memset(&buf_181, 0, sizeof(char)        *(1024)        );
        # 2135 "libneo-c-gc.c"
        # 2131 "libneo-c-gc.c"
        if(_if_conditional234=fgets(buf_181,1024,f)==((void*)0),        _if_conditional234) {
            # 2132 "libneo-c-gc.c"
            break;
        }
        # 2135 "libneo-c-gc.c"
        list$1charph_push_back(result_180,__builtin_string(buf_181));
    }
    # 2138 "libneo-c-gc.c"
    __result327__ = __result_obj__ = result_180;
    return __result327__;
}

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*)){
void* __result_obj__;
_Bool _if_conditional235;
int __result328__;
struct _IO_FILE* f_182;
_Bool _if_conditional236;
int __result329__;
int __result330__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_182, 0, sizeof(struct _IO_FILE*));
    # 2146 "libneo-c-gc.c"
    # 2143 "libneo-c-gc.c"
    if(_if_conditional235=path==((void*)0)||mode==((void*)0),    _if_conditional235) {
        # 2144 "libneo-c-gc.c"
        __result328__ = -1;
        return __result328__;
    }
    # 2146 "libneo-c-gc.c"
    f_182=fopen(path,mode);
    # 2156 "libneo-c-gc.c"
    # 2148 "libneo-c-gc.c"
    if(f_182) {
        # 2149 "libneo-c-gc.c"
        block(parent,f_182);
        # 2151 "libneo-c-gc.c"
        fclose(f_182);
        # 2153 "libneo-c-gc.c"
        __result329__ = 0;
        return __result329__;
    }
    # 2156 "libneo-c-gc.c"
    __result330__ = -1;
    return __result330__;
}

char* charp_puts(char* self){
void* __result_obj__;
_Bool _if_conditional237;
char* __result331__;
char* __result332__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2167 "libneo-c-gc.c"
    # 2164 "libneo-c-gc.c"
    if(_if_conditional237=self==((void*)0),    _if_conditional237) {
        # 2165 "libneo-c-gc.c"
        __result331__ = __result_obj__ = __builtin_string("");
        return __result331__;
    }
    # 2167 "libneo-c-gc.c"
    puts(self);
    # 2169 "libneo-c-gc.c"
    __result332__ = __result_obj__ = __builtin_string(self);
    return __result332__;
}

char* charp_print(char* self){
void* __result_obj__;
_Bool _if_conditional238;
char* __result333__;
char* __result334__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2177 "libneo-c-gc.c"
    # 2174 "libneo-c-gc.c"
    if(_if_conditional238=self==((void*)0),    _if_conditional238) {
        # 2175 "libneo-c-gc.c"
        __result333__ = __result_obj__ = __builtin_string("");
        return __result333__;
    }
    # 2177 "libneo-c-gc.c"
    printf("%s",self);
    # 2179 "libneo-c-gc.c"
    __result334__ = __result_obj__ = __builtin_string(self);
    return __result334__;
}

char* string_printf(char* self, ...){
void* __result_obj__;
_Bool _if_conditional239;
char* __result335__;
char* msg2_183;
va_list args_184;
char* __result336__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_183, 0, sizeof(char*));
memset(&args_184, 0, sizeof(va_list));
    # 2188 "libneo-c-gc.c"
    # 2185 "libneo-c-gc.c"
    if(_if_conditional239=self==((void*)0),    _if_conditional239) {
        # 2186 "libneo-c-gc.c"
        __result335__ = __result_obj__ = __builtin_string("");
        return __result335__;
    }
    # 2188 "libneo-c-gc.c"
    # 2190 "libneo-c-gc.c"
    # 2191 "libneo-c-gc.c"
    __builtin_va_start(args_184,self);
    # 2192 "libneo-c-gc.c"
    vasprintf(&msg2_183,self,args_184);
    # 2193 "libneo-c-gc.c"
    __builtin_va_end(args_184);
    # 2195 "libneo-c-gc.c"
    printf("%s",msg2_183);
    # 2197 "libneo-c-gc.c"
    free(msg2_183);
    # 2199 "libneo-c-gc.c"
    __result336__ = __result_obj__ = __builtin_string(self);
    return __result336__;
}

char* charp_printf(char* self, ...){
void* __result_obj__;
_Bool _if_conditional240;
char* __result337__;
char* msg2_185;
va_list args_186;
char* __result338__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_185, 0, sizeof(char*));
memset(&args_186, 0, sizeof(va_list));
    # 2207 "libneo-c-gc.c"
    # 2204 "libneo-c-gc.c"
    if(_if_conditional240=self==((void*)0),    _if_conditional240) {
        # 2205 "libneo-c-gc.c"
        __result337__ = __result_obj__ = __builtin_string("");
        return __result337__;
    }
    # 2207 "libneo-c-gc.c"
    # 2209 "libneo-c-gc.c"
    # 2210 "libneo-c-gc.c"
    __builtin_va_start(args_186,self);
    # 2211 "libneo-c-gc.c"
    vasprintf(&msg2_185,self,args_186);
    # 2212 "libneo-c-gc.c"
    __builtin_va_end(args_186);
    # 2214 "libneo-c-gc.c"
    printf("%s",msg2_185);
    # 2216 "libneo-c-gc.c"
    free(msg2_185);
    # 2218 "libneo-c-gc.c"
    __result338__ = __result_obj__ = __builtin_string(self);
    return __result338__;
}

int int_printf(int self, char* msg){
void* __result_obj__;
int __result339__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2223 "libneo-c-gc.c"
    printf(msg,self);
    # 2225 "libneo-c-gc.c"
    __result339__ = self;
    return __result339__;
}

char* string_puts(char* self){
void* __result_obj__;
_Bool _if_conditional241;
char* __result340__;
char* __result341__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2233 "libneo-c-gc.c"
    # 2230 "libneo-c-gc.c"
    if(_if_conditional241=self==((void*)0),    _if_conditional241) {
        # 2231 "libneo-c-gc.c"
        __result340__ = __result_obj__ = __builtin_string("");
        return __result340__;
    }
    # 2233 "libneo-c-gc.c"
    puts(self);
    # 2235 "libneo-c-gc.c"
    __result341__ = __result_obj__ = __builtin_string(self);
    return __result341__;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
void* __result_obj__;
int i_187;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_187, 0, sizeof(int));
    # 2246 "libneo-c-gc.c"
    for(    i_187=0;    i_187<self;    i_187++    ){
        # 2244 "libneo-c-gc.c"
        block(parent,i_187);
    }
}

struct integer* integer_initialize(struct integer* self, long value){
void* __result_obj__;
struct integer* __result342__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2253 "libneo-c-gc.c"
    self->value=value;
    # 2255 "libneo-c-gc.c"
    __result342__ = __result_obj__ = self;
    return __result342__;
}

int integer_to_int(struct integer* self){
void* __result_obj__;
int __result343__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2260 "libneo-c-gc.c"
    __result343__ = self->value;
    return __result343__;
}

struct integer* char_to_integer(char self){
void* __result_obj__;
struct integer* __result344__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2265 "libneo-c-gc.c"
    __result344__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2265, "integer"),self);
    return __result344__;
}

struct integer* short_to_integer(short short self){
void* __result_obj__;
struct integer* __result345__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2270 "libneo-c-gc.c"
    __result345__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2270, "integer"),self);
    return __result345__;
}

struct integer* int_to_integer(int self){
void* __result_obj__;
struct integer* __result346__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2275 "libneo-c-gc.c"
    __result346__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2275, "integer"),self);
    return __result346__;
}

struct integer* long_to_integer(long self){
void* __result_obj__;
struct integer* __result347__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2280 "libneo-c-gc.c"
    __result347__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2280, "integer"),self);
    return __result347__;
}

int integer_compare(struct integer* left, struct integer* right){
void* __result_obj__;
_Bool _if_conditional242;
int __result348__;
_Bool _if_conditional243;
int __result349__;
int __result350__;
int __result351__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2295 "libneo-c-gc.c"
    # 2285 "libneo-c-gc.c"
    if(_if_conditional242=left->value<right->value,    _if_conditional242) {
        # 2286 "libneo-c-gc.c"
        __result348__ = -1;
        return __result348__;
    }
    else {
        # 2295 "libneo-c-gc.c"
        # 2288 "libneo-c-gc.c"
        if(_if_conditional243=left->value>right->value,        _if_conditional243) {
            # 2289 "libneo-c-gc.c"
            __result349__ = 1;
            return __result349__;
        }
        else {
            # 2292 "libneo-c-gc.c"
            __result350__ = 0;
            return __result350__;
        }
    }
    # 2295 "libneo-c-gc.c"
    __result351__ = 0;
    return __result351__;
}

_Bool integer_equals(struct integer* self, struct integer* right){
void* __result_obj__;
_Bool __result352__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2300 "libneo-c-gc.c"
    __result352__ = self->value==right->value;
    return __result352__;
}

_Bool integer_operator_equals(struct integer* self, struct integer* right){
void* __result_obj__;
_Bool __result353__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2305 "libneo-c-gc.c"
    __result353__ = self->value==right->value;
    return __result353__;
}

_Bool integer_operator_not_equals(struct integer* self, struct integer* right){
void* __result_obj__;
_Bool __result354__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2310 "libneo-c-gc.c"
    __result354__ = self->value!=right->value;
    return __result354__;
}

struct integer* integer_operator_add(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result355__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2315 "libneo-c-gc.c"
    __result355__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2315, "integer"),left->value+right->value);
    return __result355__;
}

struct integer* integer_operator_sub(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result356__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2320 "libneo-c-gc.c"
    __result356__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2320, "integer"),left->value-right->value);
    return __result356__;
}

struct integer* integer_operator_mult(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result357__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2325 "libneo-c-gc.c"
    __result357__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2325, "integer"),left->value*right->value);
    return __result357__;
}

struct integer* integer_operator_div(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result358__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2330 "libneo-c-gc.c"
    __result358__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2330, "integer"),left->value/right->value);
    return __result358__;
}

struct integer* integer_operator_mod(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result359__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2335 "libneo-c-gc.c"
    __result359__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2335, "integer"),left->value%right->value);
    return __result359__;
}

struct integer* integer_operator_lshift(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result360__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2340 "libneo-c-gc.c"
    __result360__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2340, "integer"),left->value<<right->value);
    return __result360__;
}

struct integer* integer_operator_rshift(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result361__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2345 "libneo-c-gc.c"
    __result361__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2345, "integer"),left->value>>right->value);
    return __result361__;
}

struct integer* integer_operator_gteq(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result362__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2350 "libneo-c-gc.c"
    __result362__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2350, "integer"),left->value>=right->value);
    return __result362__;
}

struct integer* integer_operator_lteq(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result363__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2355 "libneo-c-gc.c"
    __result363__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2355, "integer"),left->value<=right->value);
    return __result363__;
}

struct integer* integer_operator_lt(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result364__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2360 "libneo-c-gc.c"
    __result364__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2360, "integer"),left->value<right->value);
    return __result364__;
}

struct integer* integer_operator_gt(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result365__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2365 "libneo-c-gc.c"
    __result365__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2365, "integer"),left->value>right->value);
    return __result365__;
}

struct integer* integer_operator_and(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result366__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2370 "libneo-c-gc.c"
    __result366__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2370, "integer"),left->value&right->value);
    return __result366__;
}

struct integer* integer_operator_xor(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result367__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2375 "libneo-c-gc.c"
    __result367__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2375, "integer"),left->value^right->value);
    return __result367__;
}

struct integer* integer_operator_or(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result368__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2380 "libneo-c-gc.c"
    __result368__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2380, "integer"),left->value|right->value);
    return __result368__;
}

struct integer* integer_operator_andand(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result369__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2385 "libneo-c-gc.c"
    __result369__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2385, "integer"),left->value&&right->value);
    return __result369__;
}

struct integer* integer_operator_oror(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result370__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2390 "libneo-c-gc.c"
    __result370__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2390, "integer"),left->value||right->value);
    return __result370__;
}

