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

// uniq global variable
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

struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);

_Bool node_compile(struct sNode* node, struct sInfo* info);

int come_main_v2(int argc, char** argv);

void err_msg(struct sInfo* info, char* msg, ...);

_Bool sNodeBase_terminated(struct sNodeBase* self);

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

char* dirname(char* anonymous_var_nameX493);

char* basename(char* anonymous_var_nameX494);

unsigned int GC_get_version();

unsigned long int GC_get_gc_no();

void GC_set_oom_fn(void* (*anonymous_var_nameX496)(unsigned long int));

void* (*GC_get_oom_fn())(unsigned long int);

void GC_set_on_heap_resize(void (*anonymous_var_nameX498)(unsigned long int));

void (*GC_get_on_heap_resize())(unsigned long int);

void GC_set_on_collection_event(void (*anonymous_var_nameX500)(enum anonymous_typeY5));

void (*GC_get_on_collection_event())(enum anonymous_typeY5);

void GC_set_find_leak(int anonymous_var_nameX501);

int GC_get_find_leak();

void GC_set_all_interior_pointers(int anonymous_var_nameX502);

int GC_get_all_interior_pointers();

void GC_set_finalize_on_demand(int anonymous_var_nameX503);

int GC_get_finalize_on_demand();

void GC_set_java_finalization(int anonymous_var_nameX504);

int GC_get_java_finalization();

void GC_set_finalizer_notifier(void (*anonymous_var_nameX505)());

void (*GC_get_finalizer_notifier())();

void GC_set_dont_expand(int anonymous_var_nameX506);

int GC_get_dont_expand();

void GC_set_full_freq(int anonymous_var_nameX507);

int GC_get_full_freq();

void GC_set_non_gc_bytes(unsigned long int anonymous_var_nameX508);

unsigned long int GC_get_non_gc_bytes();

void GC_set_no_dls(int anonymous_var_nameX509);

int GC_get_no_dls();

void GC_set_free_space_divisor(unsigned long int anonymous_var_nameX510);

unsigned long int GC_get_free_space_divisor();

void GC_set_max_retries(unsigned long int anonymous_var_nameX511);

unsigned long int GC_get_max_retries();

void GC_set_dont_precollect(int anonymous_var_nameX512);

int GC_get_dont_precollect();

void GC_set_time_limit(unsigned long int anonymous_var_nameX513);

unsigned long int GC_get_time_limit();

void GC_set_time_limit_tv(struct GC_timeval_s anonymous_var_nameX514);

struct GC_timeval_s GC_get_time_limit_tv();

void GC_set_allocd_bytes_per_finalizer(unsigned long int anonymous_var_nameX515);

unsigned long int GC_get_allocd_bytes_per_finalizer();

void GC_start_performance_measurement();

unsigned long int GC_get_full_gc_total_time();

void GC_set_pages_executable(int anonymous_var_nameX516);

int GC_get_pages_executable();

void GC_set_min_bytes_allocd(unsigned long int anonymous_var_nameX517);

unsigned long int GC_get_min_bytes_allocd();

void GC_set_rate(int anonymous_var_nameX518);

int GC_get_rate();

void GC_set_max_prior_attempts(int anonymous_var_nameX519);

int GC_get_max_prior_attempts();

void GC_set_disable_automatic_collection(int anonymous_var_nameX520);

int GC_get_disable_automatic_collection();

void GC_set_handle_fork(int anonymous_var_nameX521);

void GC_atfork_prepare();

void GC_atfork_parent();

void GC_atfork_child();

void GC_init();

int GC_is_init_called();

void GC_deinit();

void* GC_malloc(unsigned long int anonymous_var_nameX522);

void* GC_malloc_atomic(unsigned long int anonymous_var_nameX523);

char* GC_strdup(const char* anonymous_var_nameX524);

char* GC_strndup(const char* anonymous_var_nameX525, unsigned long int anonymous_var_nameX526);

void* GC_malloc_uncollectable(unsigned long int anonymous_var_nameX527);

void* GC_malloc_stubborn(unsigned long int anonymous_var_nameX528);

void* GC_memalign(unsigned long int anonymous_var_nameX529, unsigned long int anonymous_var_nameX530);

int GC_posix_memalign(void** anonymous_var_nameX531, unsigned long int anonymous_var_nameX532, unsigned long int anonymous_var_nameX533);

void GC_free(void* anonymous_var_nameX534);

void GC_change_stubborn(const void* anonymous_var_nameX535);

void GC_end_stubborn_change(const void* anonymous_var_nameX536);

void* GC_base(void* anonymous_var_nameX537);

int GC_is_heap_ptr(const void* anonymous_var_nameX538);

unsigned long int GC_size(const void* anonymous_var_nameX539);

void* GC_realloc(void* anonymous_var_nameX540, unsigned long int anonymous_var_nameX541);

int GC_expand_hp(unsigned long int anonymous_var_nameX542);

void GC_set_max_heap_size(unsigned long int anonymous_var_nameX543);

void GC_exclude_static_roots(void* anonymous_var_nameX544, void* anonymous_var_nameX545);

void GC_clear_exclusion_table();

void GC_clear_roots();

void GC_add_roots(void* anonymous_var_nameX546, void* anonymous_var_nameX547);

void GC_remove_roots(void* anonymous_var_nameX548, void* anonymous_var_nameX549);

void GC_register_displacement(unsigned long int anonymous_var_nameX550);

void GC_debug_register_displacement(unsigned long int anonymous_var_nameX551);

void GC_gcollect();

void GC_gcollect_and_unmap();

int GC_try_to_collect(int (*anonymous_var_nameX552)());

void GC_set_stop_func(int (*anonymous_var_nameX553)());

int (*GC_get_stop_func())();

unsigned long int GC_get_heap_size();

unsigned long int GC_get_free_bytes();

unsigned long int GC_get_unmapped_bytes();

unsigned long int GC_get_bytes_since_gc();

unsigned long int GC_get_expl_freed_bytes_since_gc();

unsigned long int GC_get_total_bytes();

unsigned long int GC_get_obtained_from_os_bytes();

void GC_get_heap_usage_safe(unsigned long int* anonymous_var_nameX554, unsigned long int* anonymous_var_nameX555, unsigned long int* anonymous_var_nameX556, unsigned long int* anonymous_var_nameX557, unsigned long int* anonymous_var_nameX558);

unsigned long int GC_get_prof_stats(struct GC_prof_stats_s* anonymous_var_nameX559, unsigned long int anonymous_var_nameX560);

unsigned long int GC_get_size_map_at(int i);

unsigned long int GC_get_memory_use();

void GC_disable();

int GC_is_disabled();

void GC_enable();

void GC_set_manual_vdb_allowed(int anonymous_var_nameX561);

int GC_get_manual_vdb_allowed();

void GC_enable_incremental();

int GC_is_incremental_mode();

int GC_incremental_protection_needs();

void GC_start_incremental_collection();

int GC_collect_a_little();

void* GC_malloc_ignore_off_page(unsigned long int anonymous_var_nameX562);

void* GC_malloc_atomic_ignore_off_page(unsigned long int anonymous_var_nameX563);

void* GC_malloc_atomic_uncollectable(unsigned long int anonymous_var_nameX564);

void* GC_debug_malloc_atomic_uncollectable(unsigned long int anonymous_var_nameX565, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc(unsigned long int anonymous_var_nameX566, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_atomic(unsigned long int anonymous_var_nameX567, unsigned long int ra, const char* s, int i);

char* GC_debug_strdup(const char* anonymous_var_nameX568, unsigned long int ra, const char* s, int i);

char* GC_debug_strndup(const char* anonymous_var_nameX569, unsigned long int anonymous_var_nameX570, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_uncollectable(unsigned long int anonymous_var_nameX571, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_stubborn(unsigned long int anonymous_var_nameX572, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_ignore_off_page(unsigned long int anonymous_var_nameX573, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_atomic_ignore_off_page(unsigned long int anonymous_var_nameX574, unsigned long int ra, const char* s, int i);

void GC_debug_free(void* anonymous_var_nameX575);

void* GC_debug_realloc(void* anonymous_var_nameX576, unsigned long int anonymous_var_nameX577, unsigned long int ra, const char* s, int i);

void GC_debug_change_stubborn(const void* anonymous_var_nameX578);

void GC_debug_end_stubborn_change(const void* anonymous_var_nameX579);

void* GC_debug_malloc_replacement(unsigned long int anonymous_var_nameX580);

void* GC_debug_realloc_replacement(void* anonymous_var_nameX581, unsigned long int anonymous_var_nameX582);

void GC_register_finalizer(void* anonymous_var_nameX585, void (*anonymous_var_nameX586)(void*,void*), void* anonymous_var_nameX587, void (*anonymous_var_nameX588)(void*,void*), void** anonymous_var_nameX589);

void GC_debug_register_finalizer(void* anonymous_var_nameX590, void (*anonymous_var_nameX591)(void*,void*), void* anonymous_var_nameX592, void (*anonymous_var_nameX593)(void*,void*), void** anonymous_var_nameX594);

void GC_register_finalizer_ignore_self(void* anonymous_var_nameX595, void (*anonymous_var_nameX596)(void*,void*), void* anonymous_var_nameX597, void (*anonymous_var_nameX598)(void*,void*), void** anonymous_var_nameX599);

void GC_debug_register_finalizer_ignore_self(void* anonymous_var_nameX600, void (*anonymous_var_nameX601)(void*,void*), void* anonymous_var_nameX602, void (*anonymous_var_nameX603)(void*,void*), void** anonymous_var_nameX604);

void GC_register_finalizer_no_order(void* anonymous_var_nameX605, void (*anonymous_var_nameX606)(void*,void*), void* anonymous_var_nameX607, void (*anonymous_var_nameX608)(void*,void*), void** anonymous_var_nameX609);

void GC_debug_register_finalizer_no_order(void* anonymous_var_nameX610, void (*anonymous_var_nameX611)(void*,void*), void* anonymous_var_nameX612, void (*anonymous_var_nameX613)(void*,void*), void** anonymous_var_nameX614);

void GC_register_finalizer_unreachable(void* anonymous_var_nameX615, void (*anonymous_var_nameX616)(void*,void*), void* anonymous_var_nameX617, void (*anonymous_var_nameX618)(void*,void*), void** anonymous_var_nameX619);

void GC_debug_register_finalizer_unreachable(void* anonymous_var_nameX620, void (*anonymous_var_nameX621)(void*,void*), void* anonymous_var_nameX622, void (*anonymous_var_nameX623)(void*,void*), void** anonymous_var_nameX624);

int GC_register_disappearing_link(void** anonymous_var_nameX625);

int GC_general_register_disappearing_link(void** anonymous_var_nameX626, const void* anonymous_var_nameX627);

int GC_move_disappearing_link(void** anonymous_var_nameX628, void** anonymous_var_nameX629);

int GC_unregister_disappearing_link(void** anonymous_var_nameX630);

int GC_register_long_link(void** anonymous_var_nameX631, const void* anonymous_var_nameX632);

int GC_move_long_link(void** anonymous_var_nameX633, void** anonymous_var_nameX634);

int GC_unregister_long_link(void** anonymous_var_nameX635);

void GC_set_toggleref_func(enum anonymous_typeY6 (*anonymous_var_nameX637)(void*));

enum anonymous_typeY6 (*GC_get_toggleref_func())(void*);

int GC_toggleref_add(void* anonymous_var_nameX638, int anonymous_var_nameX639);

void GC_set_await_finalize_proc(void (*anonymous_var_nameX641)(void*));

void (*GC_get_await_finalize_proc())(void*);

int GC_should_invoke_finalizers();

int GC_invoke_finalizers();

void GC_noop1(unsigned long int anonymous_var_nameX642);

void GC_set_warn_proc(void (*anonymous_var_nameX645)(char*,unsigned long int));

void (*GC_get_warn_proc())(char*,unsigned long int);

void GC_ignore_warn_proc(char* anonymous_var_nameX646, unsigned long int anonymous_var_nameX647);

void GC_set_log_fd(int anonymous_var_nameX648);

void GC_set_abort_func(void (*anonymous_var_nameX650)(const char*));

void (*GC_get_abort_func())(const char*);

void GC_abort_on_oom();

void* GC_call_with_alloc_lock(void* (*anonymous_var_nameX652)(void*), void* anonymous_var_nameX653);

void* GC_call_with_stack_base(void* (*anonymous_var_nameX656)(struct GC_stack_base*,void*), void* anonymous_var_nameX657);

void GC_start_mark_threads();

void* GC_do_blocking(void* (*anonymous_var_nameX658)(void*), void* anonymous_var_nameX659);

void* GC_call_with_gc_active(void* (*anonymous_var_nameX660)(void*), void* anonymous_var_nameX661);

int GC_get_stack_base(struct GC_stack_base* anonymous_var_nameX662);

void* GC_get_my_stackbottom(struct GC_stack_base* anonymous_var_nameX663);

void GC_set_stackbottom(void* anonymous_var_nameX664, const struct GC_stack_base* anonymous_var_nameX665);

void* GC_same_obj(void* anonymous_var_nameX666, void* anonymous_var_nameX667);

void* GC_pre_incr(void** anonymous_var_nameX668, long anonymous_var_nameX669);

void* GC_post_incr(void** anonymous_var_nameX670, long anonymous_var_nameX671);

void* GC_is_visible(void* anonymous_var_nameX672);

void* GC_is_valid_displacement(void* anonymous_var_nameX673);

void GC_dump();

void GC_dump_named(const char* anonymous_var_nameX674);

void GC_dump_regions();

void GC_dump_finalization();

void GC_ptr_store_and_dirty(void* anonymous_var_nameX675, const void* anonymous_var_nameX676);

void GC_debug_ptr_store_and_dirty(void* anonymous_var_nameX677, const void* anonymous_var_nameX678);

void* GC_malloc_many(unsigned long int anonymous_var_nameX699);

void GC_register_has_static_roots_callback(int (*anonymous_var_nameX703)(const char*,void*,unsigned long int));

void GC_set_force_unmap_on_gcollect(int anonymous_var_nameX704);

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
    (come_push_stackframe("./neo-c.h", 51,0),perror(msg),come_pop_stackframe());
    (come_push_stackframe("./neo-c.h", 52,1),stackframe(),come_pop_stackframe());
    (come_push_stackframe("./neo-c.h", 53,2),exit(4),come_pop_stackframe());
    __result1__ = (_Bool)0;
    return __result1__;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long int len){
void* __result_obj__;
struct buffer* __exception_result_var_b1;
struct buffer* result_0;
struct buffer* __exception_result_var_b2;
struct buffer* __result2__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_0, 0, sizeof(struct buffer*));
    result_0=(come_push_stackframe("./neo-c.h", 1903, 4),__exception_result_var_b1=buffer_initialize(((struct buffer*)come_null_check((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1903, "buffer"), "./neo-c.h", 1903, 3))), come_pop_stackframe(), __exception_result_var_b1);
    (come_push_stackframe("./neo-c.h", 1904, 7),__exception_result_var_b2=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_0, "./neo-c.h", 1904, 5)), "./neo-c.h", 1904, 6)),self,sizeof(char)*len), come_pop_stackframe(), __exception_result_var_b2);
    __result2__ = __result_obj__ = result_0;
    return __result2__;
}
static inline struct buffer* shortpa_to_buffer(short short* self, unsigned long int len){
void* __result_obj__;
struct buffer* __exception_result_var_b3;
struct buffer* result_1;
struct buffer* __exception_result_var_b4;
struct buffer* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_1, 0, sizeof(struct buffer*));
    result_1=(come_push_stackframe("./neo-c.h", 1910, 9),__exception_result_var_b3=buffer_initialize(((struct buffer*)come_null_check((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1910, "buffer"), "./neo-c.h", 1910, 8))), come_pop_stackframe(), __exception_result_var_b3);
    (come_push_stackframe("./neo-c.h", 1911, 12),__exception_result_var_b4=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_1, "./neo-c.h", 1911, 10)), "./neo-c.h", 1911, 11)),(char*)self,sizeof(short short)*len), come_pop_stackframe(), __exception_result_var_b4);
    __result3__ = __result_obj__ = result_1;
    return __result3__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long int len){
void* __result_obj__;
struct buffer* __exception_result_var_b5;
struct buffer* result_2;
struct buffer* __exception_result_var_b6;
struct buffer* __result4__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_2, 0, sizeof(struct buffer*));
    result_2=(come_push_stackframe("./neo-c.h", 1917, 14),__exception_result_var_b5=buffer_initialize(((struct buffer*)come_null_check((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1917, "buffer"), "./neo-c.h", 1917, 13))), come_pop_stackframe(), __exception_result_var_b5);
    (come_push_stackframe("./neo-c.h", 1918, 17),__exception_result_var_b6=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_2, "./neo-c.h", 1918, 15)), "./neo-c.h", 1918, 16)),(char*)self,sizeof(int)*len), come_pop_stackframe(), __exception_result_var_b6);
    __result4__ = __result_obj__ = result_2;
    return __result4__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long int len){
void* __result_obj__;
struct buffer* __exception_result_var_b7;
struct buffer* result_3;
struct buffer* __exception_result_var_b8;
struct buffer* __result5__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_3, 0, sizeof(struct buffer*));
    result_3=(come_push_stackframe("./neo-c.h", 1924, 19),__exception_result_var_b7=buffer_initialize(((struct buffer*)come_null_check((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1924, "buffer"), "./neo-c.h", 1924, 18))), come_pop_stackframe(), __exception_result_var_b7);
    (come_push_stackframe("./neo-c.h", 1925, 22),__exception_result_var_b8=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_3, "./neo-c.h", 1925, 20)), "./neo-c.h", 1925, 21)),(char*)self,sizeof(long)*len), come_pop_stackframe(), __exception_result_var_b8);
    __result5__ = __result_obj__ = result_3;
    return __result5__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long int len){
void* __result_obj__;
struct buffer* __exception_result_var_b9;
struct buffer* result_4;
struct buffer* __exception_result_var_b10;
struct buffer* __result6__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_4, 0, sizeof(struct buffer*));
    result_4=(come_push_stackframe("./neo-c.h", 1931, 24),__exception_result_var_b9=buffer_initialize(((struct buffer*)come_null_check((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1931, "buffer"), "./neo-c.h", 1931, 23))), come_pop_stackframe(), __exception_result_var_b9);
    (come_push_stackframe("./neo-c.h", 1932, 27),__exception_result_var_b10=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_4, "./neo-c.h", 1932, 25)), "./neo-c.h", 1932, 26)),(char*)self,sizeof(float)*len), come_pop_stackframe(), __exception_result_var_b10);
    __result6__ = __result_obj__ = result_4;
    return __result6__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long int len){
void* __result_obj__;
struct buffer* __exception_result_var_b11;
struct buffer* result_5;
struct buffer* __exception_result_var_b12;
struct buffer* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_5, 0, sizeof(struct buffer*));
    result_5=(come_push_stackframe("./neo-c.h", 1938, 29),__exception_result_var_b11=buffer_initialize(((struct buffer*)come_null_check((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1938, "buffer"), "./neo-c.h", 1938, 28))), come_pop_stackframe(), __exception_result_var_b11);
    (come_push_stackframe("./neo-c.h", 1939, 32),__exception_result_var_b12=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_5, "./neo-c.h", 1939, 30)), "./neo-c.h", 1939, 31)),(char*)self,sizeof(double)*len), come_pop_stackframe(), __exception_result_var_b12);
    __result7__ = __result_obj__ = result_5;
    return __result7__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1char* result_6;
struct buffer* __exception_result_var_b13;
struct smart_pointer$1char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_6, 0, sizeof(struct smart_pointer$1char*));
    result_6=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1954, "smart_pointer$1char");
    ((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_6, "./neo-c.h", 1956, 33)), "./neo-c.h", 1956, 34))->memory=(come_push_stackframe("./neo-c.h", 1956, 35),__exception_result_var_b13=buffer_clone(self), come_pop_stackframe(), __exception_result_var_b13);
    ((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_6, "./neo-c.h", 1957, 36)), "./neo-c.h", 1957, 37))->p=((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_6, "./neo-c.h", 1957, 38)), "./neo-c.h", 1957, 39))->memory, "./neo-c.h", 1957, 40)), "./neo-c.h", 1957, 41))->buf;
    __result8__ = __result_obj__ = result_6;
    return __result8__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1char* result_7;
struct buffer* __exception_result_var_b14;
struct smart_pointer$1char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_7, 0, sizeof(struct smart_pointer$1char*));
    result_7=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1964, "smart_pointer$1char");
    ((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_7, "./neo-c.h", 1966, 42)), "./neo-c.h", 1966, 43))->memory=(come_push_stackframe("./neo-c.h", 1966, 44),__exception_result_var_b14=buffer_clone(self), come_pop_stackframe(), __exception_result_var_b14);
    ((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_7, "./neo-c.h", 1967, 45)), "./neo-c.h", 1967, 46))->p=(char*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_7, "./neo-c.h", 1967, 47)), "./neo-c.h", 1967, 48))->memory, "./neo-c.h", 1967, 49)), "./neo-c.h", 1967, 50))->buf;
    __result9__ = __result_obj__ = result_7;
    return __result9__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1short* result_8;
struct buffer* __exception_result_var_b15;
struct smart_pointer$1short* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_8, 0, sizeof(struct smart_pointer$1short*));
    result_8=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 1974, "smart_pointer$1short");
    ((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(result_8, "./neo-c.h", 1976, 51)), "./neo-c.h", 1976, 52))->memory=(come_push_stackframe("./neo-c.h", 1976, 53),__exception_result_var_b15=buffer_clone(self), come_pop_stackframe(), __exception_result_var_b15);
    ((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(result_8, "./neo-c.h", 1977, 54)), "./neo-c.h", 1977, 55))->p=(short short*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(result_8, "./neo-c.h", 1977, 56)), "./neo-c.h", 1977, 57))->memory, "./neo-c.h", 1977, 58)), "./neo-c.h", 1977, 59))->buf;
    __result10__ = __result_obj__ = result_8;
    return __result10__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1int* result_9;
struct buffer* __exception_result_var_b16;
struct smart_pointer$1int* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_9, 0, sizeof(struct smart_pointer$1int*));
    result_9=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 1984, "smart_pointer$1int");
    ((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(result_9, "./neo-c.h", 1986, 60)), "./neo-c.h", 1986, 61))->memory=(come_push_stackframe("./neo-c.h", 1986, 62),__exception_result_var_b16=buffer_clone(self), come_pop_stackframe(), __exception_result_var_b16);
    ((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(result_9, "./neo-c.h", 1987, 63)), "./neo-c.h", 1987, 64))->p=(int*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(result_9, "./neo-c.h", 1987, 65)), "./neo-c.h", 1987, 66))->memory, "./neo-c.h", 1987, 67)), "./neo-c.h", 1987, 68))->buf;
    __result11__ = __result_obj__ = result_9;
    return __result11__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1long* result_10;
struct buffer* __exception_result_var_b17;
struct smart_pointer$1long* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_10, 0, sizeof(struct smart_pointer$1long*));
    result_10=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 1994, "smart_pointer$1long");
    ((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(result_10, "./neo-c.h", 1996, 69)), "./neo-c.h", 1996, 70))->memory=(come_push_stackframe("./neo-c.h", 1996, 71),__exception_result_var_b17=buffer_clone(self), come_pop_stackframe(), __exception_result_var_b17);
    ((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(result_10, "./neo-c.h", 1997, 72)), "./neo-c.h", 1997, 73))->p=(long*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(result_10, "./neo-c.h", 1997, 74)), "./neo-c.h", 1997, 75))->memory, "./neo-c.h", 1997, 76)), "./neo-c.h", 1997, 77))->buf;
    __result12__ = __result_obj__ = result_10;
    return __result12__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long int len){
void* __result_obj__;
struct smart_pointer$1char* __exception_result_var_b20;
struct smart_pointer$1char* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
    __result14__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2165, 94),__exception_result_var_b20=smart_pointer$1char_initialize(((struct smart_pointer$1char*)come_null_check((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2165, "smart_pointer$1char"), "./neo-c.h", 2165, 78)),self,len), come_pop_stackframe(), __exception_result_var_b20);
    return __result14__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, unsigned long int len){
void* __result_obj__;
struct smart_pointer$1short* __exception_result_var_b23;
struct smart_pointer$1short* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
    __result16__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2170, 111),__exception_result_var_b23=smart_pointer$1short_initialize(((struct smart_pointer$1short*)come_null_check((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2170, "smart_pointer$1short"), "./neo-c.h", 2170, 95)),self,len), come_pop_stackframe(), __exception_result_var_b23);
    return __result16__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long int len){
void* __result_obj__;
struct smart_pointer$1int* __exception_result_var_b26;
struct smart_pointer$1int* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
    __result18__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2175, 128),__exception_result_var_b26=smart_pointer$1int_initialize(((struct smart_pointer$1int*)come_null_check((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2175, "smart_pointer$1int"), "./neo-c.h", 2175, 112)),self,len), come_pop_stackframe(), __exception_result_var_b26);
    return __result18__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long int len){
void* __result_obj__;
struct smart_pointer$1long* __exception_result_var_b29;
struct smart_pointer$1long* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
    __result20__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2180, 145),__exception_result_var_b29=smart_pointer$1long_initialize(((struct smart_pointer$1long*)come_null_check((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2180, "smart_pointer$1long"), "./neo-c.h", 2180, 129)),self,len), come_pop_stackframe(), __exception_result_var_b29);
    return __result20__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long int len){
void* __result_obj__;
struct smart_pointer$1float* __exception_result_var_b32;
struct smart_pointer$1float* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
    __result22__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2185, 162),__exception_result_var_b32=smart_pointer$1float_initialize(((struct smart_pointer$1float*)come_null_check((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./neo-c.h", 2185, "smart_pointer$1float"), "./neo-c.h", 2185, 146)),self,len), come_pop_stackframe(), __exception_result_var_b32);
    return __result22__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long int len){
void* __result_obj__;
struct smart_pointer$1double* __exception_result_var_b35;
struct smart_pointer$1double* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
    __result24__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2190, 179),__exception_result_var_b35=smart_pointer$1double_initialize(((struct smart_pointer$1double*)come_null_check((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./neo-c.h", 2190, "smart_pointer$1double"), "./neo-c.h", 2190, 163)),self,len), come_pop_stackframe(), __exception_result_var_b35);
    return __result24__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long int len){
void* __result_obj__;
struct list$1char* __exception_result_var_b37;
struct list$1char* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
    __result27__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2195, 236),__exception_result_var_b37=list$1char_initialize_with_values(((struct list$1char*)come_null_check(((struct list$1char*)come_null_check((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./neo-c.h", 2195, "list$1char"), "./neo-c.h", 2195, 180)), "./neo-c.h", 2195, 181)),len,self), come_pop_stackframe(), __exception_result_var_b37);
    return __result27__;
}
static inline struct list$1short* shortpa_to_list(short short* self, unsigned long int len){
void* __result_obj__;
struct list$1short* __exception_result_var_b39;
struct list$1short* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
    __result30__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2200, 293),__exception_result_var_b39=list$1short_initialize_with_values(((struct list$1short*)come_null_check(((struct list$1short*)come_null_check((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./neo-c.h", 2200, "list$1short"), "./neo-c.h", 2200, 237)), "./neo-c.h", 2200, 238)),len,self), come_pop_stackframe(), __exception_result_var_b39);
    return __result30__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long int len){
void* __result_obj__;
struct list$1int* __exception_result_var_b41;
struct list$1int* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
    __result33__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2205, 350),__exception_result_var_b41=list$1int_initialize_with_values(((struct list$1int*)come_null_check(((struct list$1int*)come_null_check((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./neo-c.h", 2205, "list$1int"), "./neo-c.h", 2205, 294)), "./neo-c.h", 2205, 295)),len,self), come_pop_stackframe(), __exception_result_var_b41);
    return __result33__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long int len){
void* __result_obj__;
struct list$1long* __exception_result_var_b43;
struct list$1long* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
    __result36__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2210, 407),__exception_result_var_b43=list$1long_initialize_with_values(((struct list$1long*)come_null_check(((struct list$1long*)come_null_check((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./neo-c.h", 2210, "list$1long"), "./neo-c.h", 2210, 351)), "./neo-c.h", 2210, 352)),len,self), come_pop_stackframe(), __exception_result_var_b43);
    return __result36__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long int len){
void* __result_obj__;
struct list$1float* __exception_result_var_b45;
struct list$1float* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
    __result39__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2215, 464),__exception_result_var_b45=list$1float_initialize_with_values(((struct list$1float*)come_null_check(((struct list$1float*)come_null_check((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./neo-c.h", 2215, "list$1float"), "./neo-c.h", 2215, 408)), "./neo-c.h", 2215, 409)),len,self), come_pop_stackframe(), __exception_result_var_b45);
    return __result39__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long int len){
void* __result_obj__;
struct list$1double* __exception_result_var_b47;
struct list$1double* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
    __result42__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2220, 521),__exception_result_var_b47=list$1double_initialize_with_values(((struct list$1double*)come_null_check(((struct list$1double*)come_null_check((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./neo-c.h", 2220, "list$1double"), "./neo-c.h", 2220, 465)), "./neo-c.h", 2220, 466)),len,self), come_pop_stackframe(), __exception_result_var_b47);
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
char* __exception_result_var_b48;
char* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
    __result49__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2336, 522),__exception_result_var_b48=xsprintf(msg,self), come_pop_stackframe(), __exception_result_var_b48);
    return __result49__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
char* __exception_result_var_b49;
char* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
    __result50__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2341, 523),__exception_result_var_b49=xsprintf(msg,self), come_pop_stackframe(), __exception_result_var_b49);
    return __result50__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__;
char* __exception_result_var_b50;
char* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
    __result51__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2346, 524),__exception_result_var_b50=xsprintf(msg,self), come_pop_stackframe(), __exception_result_var_b50);
    return __result51__;
}

// body function













static struct smart_pointer$1char* smart_pointer$1char_initialize(struct smart_pointer$1char* self, void* memory, int size){
void* __result_obj__;
struct buffer* __exception_result_var_b18;
struct buffer* __exception_result_var_b19;
struct smart_pointer$1char* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
        ((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(self, "./neo-c.h", 2006, 79)), "./neo-c.h", 2006, 80))->memory=(come_push_stackframe("./neo-c.h", 2006, 82),__exception_result_var_b18=buffer_initialize(((struct buffer*)come_null_check((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"), "./neo-c.h", 2006, 81))), come_pop_stackframe(), __exception_result_var_b18);
        (come_push_stackframe("./neo-c.h", 2008, 87),__exception_result_var_b19=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(self, "./neo-c.h", 2008, 83)), "./neo-c.h", 2008, 84))->memory, "./neo-c.h", 2008, 85)), "./neo-c.h", 2008, 86)),memory,sizeof(char)*size), come_pop_stackframe(), __exception_result_var_b19);
        ((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(self, "./neo-c.h", 2010, 88)), "./neo-c.h", 2010, 89))->p=(char*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(self, "./neo-c.h", 2010, 90)), "./neo-c.h", 2010, 91))->memory, "./neo-c.h", 2010, 92)), "./neo-c.h", 2010, 93))->buf;
        __result13__ = __result_obj__ = self;
        return __result13__;
}


static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size){
void* __result_obj__;
struct buffer* __exception_result_var_b21;
struct buffer* __exception_result_var_b22;
struct smart_pointer$1short* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
        ((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(self, "./neo-c.h", 2006, 96)), "./neo-c.h", 2006, 97))->memory=(come_push_stackframe("./neo-c.h", 2006, 99),__exception_result_var_b21=buffer_initialize(((struct buffer*)come_null_check((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"), "./neo-c.h", 2006, 98))), come_pop_stackframe(), __exception_result_var_b21);
        (come_push_stackframe("./neo-c.h", 2008, 104),__exception_result_var_b22=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(self, "./neo-c.h", 2008, 100)), "./neo-c.h", 2008, 101))->memory, "./neo-c.h", 2008, 102)), "./neo-c.h", 2008, 103)),memory,sizeof(short short)*size), come_pop_stackframe(), __exception_result_var_b22);
        ((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(self, "./neo-c.h", 2010, 105)), "./neo-c.h", 2010, 106))->p=(short short*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(self, "./neo-c.h", 2010, 107)), "./neo-c.h", 2010, 108))->memory, "./neo-c.h", 2010, 109)), "./neo-c.h", 2010, 110))->buf;
        __result15__ = __result_obj__ = self;
        return __result15__;
}


static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size){
void* __result_obj__;
struct buffer* __exception_result_var_b24;
struct buffer* __exception_result_var_b25;
struct smart_pointer$1int* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
        ((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(self, "./neo-c.h", 2006, 113)), "./neo-c.h", 2006, 114))->memory=(come_push_stackframe("./neo-c.h", 2006, 116),__exception_result_var_b24=buffer_initialize(((struct buffer*)come_null_check((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"), "./neo-c.h", 2006, 115))), come_pop_stackframe(), __exception_result_var_b24);
        (come_push_stackframe("./neo-c.h", 2008, 121),__exception_result_var_b25=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(self, "./neo-c.h", 2008, 117)), "./neo-c.h", 2008, 118))->memory, "./neo-c.h", 2008, 119)), "./neo-c.h", 2008, 120)),memory,sizeof(int)*size), come_pop_stackframe(), __exception_result_var_b25);
        ((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(self, "./neo-c.h", 2010, 122)), "./neo-c.h", 2010, 123))->p=(int*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(self, "./neo-c.h", 2010, 124)), "./neo-c.h", 2010, 125))->memory, "./neo-c.h", 2010, 126)), "./neo-c.h", 2010, 127))->buf;
        __result17__ = __result_obj__ = self;
        return __result17__;
}


static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size){
void* __result_obj__;
struct buffer* __exception_result_var_b27;
struct buffer* __exception_result_var_b28;
struct smart_pointer$1long* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
        ((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(self, "./neo-c.h", 2006, 130)), "./neo-c.h", 2006, 131))->memory=(come_push_stackframe("./neo-c.h", 2006, 133),__exception_result_var_b27=buffer_initialize(((struct buffer*)come_null_check((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"), "./neo-c.h", 2006, 132))), come_pop_stackframe(), __exception_result_var_b27);
        (come_push_stackframe("./neo-c.h", 2008, 138),__exception_result_var_b28=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(self, "./neo-c.h", 2008, 134)), "./neo-c.h", 2008, 135))->memory, "./neo-c.h", 2008, 136)), "./neo-c.h", 2008, 137)),memory,sizeof(long)*size), come_pop_stackframe(), __exception_result_var_b28);
        ((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(self, "./neo-c.h", 2010, 139)), "./neo-c.h", 2010, 140))->p=(long*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(self, "./neo-c.h", 2010, 141)), "./neo-c.h", 2010, 142))->memory, "./neo-c.h", 2010, 143)), "./neo-c.h", 2010, 144))->buf;
        __result19__ = __result_obj__ = self;
        return __result19__;
}


static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size){
void* __result_obj__;
struct buffer* __exception_result_var_b30;
struct buffer* __exception_result_var_b31;
struct smart_pointer$1float* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
        ((struct smart_pointer$1float*)come_null_check(((struct smart_pointer$1float*)come_null_check(self, "./neo-c.h", 2006, 147)), "./neo-c.h", 2006, 148))->memory=(come_push_stackframe("./neo-c.h", 2006, 150),__exception_result_var_b30=buffer_initialize(((struct buffer*)come_null_check((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"), "./neo-c.h", 2006, 149))), come_pop_stackframe(), __exception_result_var_b30);
        (come_push_stackframe("./neo-c.h", 2008, 155),__exception_result_var_b31=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1float*)come_null_check(((struct smart_pointer$1float*)come_null_check(self, "./neo-c.h", 2008, 151)), "./neo-c.h", 2008, 152))->memory, "./neo-c.h", 2008, 153)), "./neo-c.h", 2008, 154)),memory,sizeof(float)*size), come_pop_stackframe(), __exception_result_var_b31);
        ((struct smart_pointer$1float*)come_null_check(((struct smart_pointer$1float*)come_null_check(self, "./neo-c.h", 2010, 156)), "./neo-c.h", 2010, 157))->p=(float*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1float*)come_null_check(((struct smart_pointer$1float*)come_null_check(self, "./neo-c.h", 2010, 158)), "./neo-c.h", 2010, 159))->memory, "./neo-c.h", 2010, 160)), "./neo-c.h", 2010, 161))->buf;
        __result21__ = __result_obj__ = self;
        return __result21__;
}


static struct smart_pointer$1double* smart_pointer$1double_initialize(struct smart_pointer$1double* self, void* memory, int size){
void* __result_obj__;
struct buffer* __exception_result_var_b33;
struct buffer* __exception_result_var_b34;
struct smart_pointer$1double* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
        ((struct smart_pointer$1double*)come_null_check(((struct smart_pointer$1double*)come_null_check(self, "./neo-c.h", 2006, 164)), "./neo-c.h", 2006, 165))->memory=(come_push_stackframe("./neo-c.h", 2006, 167),__exception_result_var_b33=buffer_initialize(((struct buffer*)come_null_check((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"), "./neo-c.h", 2006, 166))), come_pop_stackframe(), __exception_result_var_b33);
        (come_push_stackframe("./neo-c.h", 2008, 172),__exception_result_var_b34=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1double*)come_null_check(((struct smart_pointer$1double*)come_null_check(self, "./neo-c.h", 2008, 168)), "./neo-c.h", 2008, 169))->memory, "./neo-c.h", 2008, 170)), "./neo-c.h", 2008, 171)),memory,sizeof(double)*size), come_pop_stackframe(), __exception_result_var_b34);
        ((struct smart_pointer$1double*)come_null_check(((struct smart_pointer$1double*)come_null_check(self, "./neo-c.h", 2010, 173)), "./neo-c.h", 2010, 174))->p=(double*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1double*)come_null_check(((struct smart_pointer$1double*)come_null_check(self, "./neo-c.h", 2010, 175)), "./neo-c.h", 2010, 176))->memory, "./neo-c.h", 2010, 177)), "./neo-c.h", 2010, 178))->buf;
        __result23__ = __result_obj__ = self;
        return __result23__;
}


static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__;
int i_11;
struct list$1char* __exception_result_var_b36;
struct list$1char* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_11, 0, sizeof(int));
        ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 109, 182)), "./neo-c.h", 109, 183))->head=((void*)0);
        ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 110, 184)), "./neo-c.h", 110, 185))->tail=((void*)0);
        ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 111, 186)), "./neo-c.h", 111, 187))->len=0;
        for(        i_11=0;        i_11<num_value;        i_11++        ){
            (come_push_stackframe("./neo-c.h", 114, 235),__exception_result_var_b36=list$1char_push_back(((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 114, 188)), "./neo-c.h", 114, 189)),((char*)come_null_check(values, "./neo-c.h", 114, 234))[i_11]), come_pop_stackframe(), __exception_result_var_b36);
        }
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
                if(_if_conditional1=((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 222, 190)), "./neo-c.h", 222, 191))->len==0,                _if_conditional1) {
                    litem_12=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 223, "list_item$1char");
                    ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_12, "./neo-c.h", 225, 192)), "./neo-c.h", 225, 193))->prev=((void*)0);
                    ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_12, "./neo-c.h", 226, 194)), "./neo-c.h", 226, 195))->next=((void*)0);
                    ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_12, "./neo-c.h", 227, 196)), "./neo-c.h", 227, 197))->item=item;
                    ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 229, 198)), "./neo-c.h", 229, 199))->tail=litem_12;
                    ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 230, 200)), "./neo-c.h", 230, 201))->head=litem_12;
                }
                else {
                    if(_if_conditional2=((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 232, 202)), "./neo-c.h", 232, 203))->len==1,                    _if_conditional2) {
                        litem_13=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 233, "list_item$1char");
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_13, "./neo-c.h", 235, 204)), "./neo-c.h", 235, 205))->prev=((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 235, 206)), "./neo-c.h", 235, 207))->head;
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_13, "./neo-c.h", 236, 208)), "./neo-c.h", 236, 209))->next=((void*)0);
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_13, "./neo-c.h", 237, 210)), "./neo-c.h", 237, 211))->item=item;
                        ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 239, 212)), "./neo-c.h", 239, 213))->tail=litem_13;
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 240, 214)), "./neo-c.h", 240, 215))->head, "./neo-c.h", 240, 216)), "./neo-c.h", 240, 217))->next=litem_13;
                    }
                    else {
                        litem_14=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 243, "list_item$1char");
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_14, "./neo-c.h", 245, 218)), "./neo-c.h", 245, 219))->prev=((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 245, 220)), "./neo-c.h", 245, 221))->tail;
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_14, "./neo-c.h", 246, 222)), "./neo-c.h", 246, 223))->next=((void*)0);
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_14, "./neo-c.h", 247, 224)), "./neo-c.h", 247, 225))->item=item;
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 249, 226)), "./neo-c.h", 249, 227))->tail, "./neo-c.h", 249, 228)), "./neo-c.h", 249, 229))->next=litem_14;
                        ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 250, 230)), "./neo-c.h", 250, 231))->tail=litem_14;
                    }
                }
                ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 253, 232)), "./neo-c.h", 253, 233))->len++;
                __result25__ = __result_obj__ = self;
                return __result25__;
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values){
void* __result_obj__;
int i_15;
struct list$1short* __exception_result_var_b38;
struct list$1short* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_15, 0, sizeof(int));
        ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 109, 239)), "./neo-c.h", 109, 240))->head=((void*)0);
        ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 110, 241)), "./neo-c.h", 110, 242))->tail=((void*)0);
        ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 111, 243)), "./neo-c.h", 111, 244))->len=0;
        for(        i_15=0;        i_15<num_value;        i_15++        ){
            (come_push_stackframe("./neo-c.h", 114, 292),__exception_result_var_b38=list$1short_push_back(((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 114, 245)), "./neo-c.h", 114, 246)),((short short*)come_null_check(values, "./neo-c.h", 114, 291))[i_15]), come_pop_stackframe(), __exception_result_var_b38);
        }
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
                if(_if_conditional3=((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 222, 247)), "./neo-c.h", 222, 248))->len==0,                _if_conditional3) {
                    litem_16=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 223, "list_item$1short");
                    ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_16, "./neo-c.h", 225, 249)), "./neo-c.h", 225, 250))->prev=((void*)0);
                    ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_16, "./neo-c.h", 226, 251)), "./neo-c.h", 226, 252))->next=((void*)0);
                    ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_16, "./neo-c.h", 227, 253)), "./neo-c.h", 227, 254))->item=item;
                    ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 229, 255)), "./neo-c.h", 229, 256))->tail=litem_16;
                    ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 230, 257)), "./neo-c.h", 230, 258))->head=litem_16;
                }
                else {
                    if(_if_conditional4=((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 232, 259)), "./neo-c.h", 232, 260))->len==1,                    _if_conditional4) {
                        litem_17=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 233, "list_item$1short");
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_17, "./neo-c.h", 235, 261)), "./neo-c.h", 235, 262))->prev=((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 235, 263)), "./neo-c.h", 235, 264))->head;
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_17, "./neo-c.h", 236, 265)), "./neo-c.h", 236, 266))->next=((void*)0);
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_17, "./neo-c.h", 237, 267)), "./neo-c.h", 237, 268))->item=item;
                        ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 239, 269)), "./neo-c.h", 239, 270))->tail=litem_17;
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 240, 271)), "./neo-c.h", 240, 272))->head, "./neo-c.h", 240, 273)), "./neo-c.h", 240, 274))->next=litem_17;
                    }
                    else {
                        litem_18=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 243, "list_item$1short");
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_18, "./neo-c.h", 245, 275)), "./neo-c.h", 245, 276))->prev=((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 245, 277)), "./neo-c.h", 245, 278))->tail;
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_18, "./neo-c.h", 246, 279)), "./neo-c.h", 246, 280))->next=((void*)0);
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_18, "./neo-c.h", 247, 281)), "./neo-c.h", 247, 282))->item=item;
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 249, 283)), "./neo-c.h", 249, 284))->tail, "./neo-c.h", 249, 285)), "./neo-c.h", 249, 286))->next=litem_18;
                        ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 250, 287)), "./neo-c.h", 250, 288))->tail=litem_18;
                    }
                }
                ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 253, 289)), "./neo-c.h", 253, 290))->len++;
                __result28__ = __result_obj__ = self;
                return __result28__;
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__;
int i_19;
struct list$1int* __exception_result_var_b40;
struct list$1int* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_19, 0, sizeof(int));
        ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 109, 296)), "./neo-c.h", 109, 297))->head=((void*)0);
        ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 110, 298)), "./neo-c.h", 110, 299))->tail=((void*)0);
        ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 111, 300)), "./neo-c.h", 111, 301))->len=0;
        for(        i_19=0;        i_19<num_value;        i_19++        ){
            (come_push_stackframe("./neo-c.h", 114, 349),__exception_result_var_b40=list$1int_push_back(((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 114, 302)), "./neo-c.h", 114, 303)),((int*)come_null_check(values, "./neo-c.h", 114, 348))[i_19]), come_pop_stackframe(), __exception_result_var_b40);
        }
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
                if(_if_conditional5=((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 222, 304)), "./neo-c.h", 222, 305))->len==0,                _if_conditional5) {
                    litem_20=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 223, "list_item$1int");
                    ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_20, "./neo-c.h", 225, 306)), "./neo-c.h", 225, 307))->prev=((void*)0);
                    ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_20, "./neo-c.h", 226, 308)), "./neo-c.h", 226, 309))->next=((void*)0);
                    ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_20, "./neo-c.h", 227, 310)), "./neo-c.h", 227, 311))->item=item;
                    ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 229, 312)), "./neo-c.h", 229, 313))->tail=litem_20;
                    ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 230, 314)), "./neo-c.h", 230, 315))->head=litem_20;
                }
                else {
                    if(_if_conditional6=((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 232, 316)), "./neo-c.h", 232, 317))->len==1,                    _if_conditional6) {
                        litem_21=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 233, "list_item$1int");
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_21, "./neo-c.h", 235, 318)), "./neo-c.h", 235, 319))->prev=((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 235, 320)), "./neo-c.h", 235, 321))->head;
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_21, "./neo-c.h", 236, 322)), "./neo-c.h", 236, 323))->next=((void*)0);
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_21, "./neo-c.h", 237, 324)), "./neo-c.h", 237, 325))->item=item;
                        ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 239, 326)), "./neo-c.h", 239, 327))->tail=litem_21;
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 240, 328)), "./neo-c.h", 240, 329))->head, "./neo-c.h", 240, 330)), "./neo-c.h", 240, 331))->next=litem_21;
                    }
                    else {
                        litem_22=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 243, "list_item$1int");
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_22, "./neo-c.h", 245, 332)), "./neo-c.h", 245, 333))->prev=((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 245, 334)), "./neo-c.h", 245, 335))->tail;
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_22, "./neo-c.h", 246, 336)), "./neo-c.h", 246, 337))->next=((void*)0);
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_22, "./neo-c.h", 247, 338)), "./neo-c.h", 247, 339))->item=item;
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 249, 340)), "./neo-c.h", 249, 341))->tail, "./neo-c.h", 249, 342)), "./neo-c.h", 249, 343))->next=litem_22;
                        ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 250, 344)), "./neo-c.h", 250, 345))->tail=litem_22;
                    }
                }
                ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 253, 346)), "./neo-c.h", 253, 347))->len++;
                __result31__ = __result_obj__ = self;
                return __result31__;
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__;
int i_23;
struct list$1long* __exception_result_var_b42;
struct list$1long* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_23, 0, sizeof(int));
        ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 109, 353)), "./neo-c.h", 109, 354))->head=((void*)0);
        ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 110, 355)), "./neo-c.h", 110, 356))->tail=((void*)0);
        ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 111, 357)), "./neo-c.h", 111, 358))->len=0;
        for(        i_23=0;        i_23<num_value;        i_23++        ){
            (come_push_stackframe("./neo-c.h", 114, 406),__exception_result_var_b42=list$1long_push_back(((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 114, 359)), "./neo-c.h", 114, 360)),((long*)come_null_check(values, "./neo-c.h", 114, 405))[i_23]), come_pop_stackframe(), __exception_result_var_b42);
        }
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
                if(_if_conditional7=((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 222, 361)), "./neo-c.h", 222, 362))->len==0,                _if_conditional7) {
                    litem_24=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 223, "list_item$1long");
                    ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_24, "./neo-c.h", 225, 363)), "./neo-c.h", 225, 364))->prev=((void*)0);
                    ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_24, "./neo-c.h", 226, 365)), "./neo-c.h", 226, 366))->next=((void*)0);
                    ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_24, "./neo-c.h", 227, 367)), "./neo-c.h", 227, 368))->item=item;
                    ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 229, 369)), "./neo-c.h", 229, 370))->tail=litem_24;
                    ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 230, 371)), "./neo-c.h", 230, 372))->head=litem_24;
                }
                else {
                    if(_if_conditional8=((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 232, 373)), "./neo-c.h", 232, 374))->len==1,                    _if_conditional8) {
                        litem_25=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 233, "list_item$1long");
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_25, "./neo-c.h", 235, 375)), "./neo-c.h", 235, 376))->prev=((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 235, 377)), "./neo-c.h", 235, 378))->head;
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_25, "./neo-c.h", 236, 379)), "./neo-c.h", 236, 380))->next=((void*)0);
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_25, "./neo-c.h", 237, 381)), "./neo-c.h", 237, 382))->item=item;
                        ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 239, 383)), "./neo-c.h", 239, 384))->tail=litem_25;
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 240, 385)), "./neo-c.h", 240, 386))->head, "./neo-c.h", 240, 387)), "./neo-c.h", 240, 388))->next=litem_25;
                    }
                    else {
                        litem_26=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 243, "list_item$1long");
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_26, "./neo-c.h", 245, 389)), "./neo-c.h", 245, 390))->prev=((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 245, 391)), "./neo-c.h", 245, 392))->tail;
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_26, "./neo-c.h", 246, 393)), "./neo-c.h", 246, 394))->next=((void*)0);
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_26, "./neo-c.h", 247, 395)), "./neo-c.h", 247, 396))->item=item;
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 249, 397)), "./neo-c.h", 249, 398))->tail, "./neo-c.h", 249, 399)), "./neo-c.h", 249, 400))->next=litem_26;
                        ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 250, 401)), "./neo-c.h", 250, 402))->tail=litem_26;
                    }
                }
                ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 253, 403)), "./neo-c.h", 253, 404))->len++;
                __result34__ = __result_obj__ = self;
                return __result34__;
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__;
int i_27;
struct list$1float* __exception_result_var_b44;
struct list$1float* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_27, 0, sizeof(int));
        ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 109, 410)), "./neo-c.h", 109, 411))->head=((void*)0);
        ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 110, 412)), "./neo-c.h", 110, 413))->tail=((void*)0);
        ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 111, 414)), "./neo-c.h", 111, 415))->len=0;
        for(        i_27=0;        i_27<num_value;        i_27++        ){
            (come_push_stackframe("./neo-c.h", 114, 463),__exception_result_var_b44=list$1float_push_back(((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 114, 416)), "./neo-c.h", 114, 417)),((float*)come_null_check(values, "./neo-c.h", 114, 462))[i_27]), come_pop_stackframe(), __exception_result_var_b44);
        }
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
                if(_if_conditional9=((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 222, 418)), "./neo-c.h", 222, 419))->len==0,                _if_conditional9) {
                    litem_28=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 223, "list_item$1float");
                    ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_28, "./neo-c.h", 225, 420)), "./neo-c.h", 225, 421))->prev=((void*)0);
                    ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_28, "./neo-c.h", 226, 422)), "./neo-c.h", 226, 423))->next=((void*)0);
                    ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_28, "./neo-c.h", 227, 424)), "./neo-c.h", 227, 425))->item=item;
                    ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 229, 426)), "./neo-c.h", 229, 427))->tail=litem_28;
                    ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 230, 428)), "./neo-c.h", 230, 429))->head=litem_28;
                }
                else {
                    if(_if_conditional10=((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 232, 430)), "./neo-c.h", 232, 431))->len==1,                    _if_conditional10) {
                        litem_29=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 233, "list_item$1float");
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_29, "./neo-c.h", 235, 432)), "./neo-c.h", 235, 433))->prev=((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 235, 434)), "./neo-c.h", 235, 435))->head;
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_29, "./neo-c.h", 236, 436)), "./neo-c.h", 236, 437))->next=((void*)0);
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_29, "./neo-c.h", 237, 438)), "./neo-c.h", 237, 439))->item=item;
                        ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 239, 440)), "./neo-c.h", 239, 441))->tail=litem_29;
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 240, 442)), "./neo-c.h", 240, 443))->head, "./neo-c.h", 240, 444)), "./neo-c.h", 240, 445))->next=litem_29;
                    }
                    else {
                        litem_30=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 243, "list_item$1float");
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_30, "./neo-c.h", 245, 446)), "./neo-c.h", 245, 447))->prev=((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 245, 448)), "./neo-c.h", 245, 449))->tail;
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_30, "./neo-c.h", 246, 450)), "./neo-c.h", 246, 451))->next=((void*)0);
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_30, "./neo-c.h", 247, 452)), "./neo-c.h", 247, 453))->item=item;
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 249, 454)), "./neo-c.h", 249, 455))->tail, "./neo-c.h", 249, 456)), "./neo-c.h", 249, 457))->next=litem_30;
                        ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 250, 458)), "./neo-c.h", 250, 459))->tail=litem_30;
                    }
                }
                ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 253, 460)), "./neo-c.h", 253, 461))->len++;
                __result37__ = __result_obj__ = self;
                return __result37__;
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__;
int i_31;
struct list$1double* __exception_result_var_b46;
struct list$1double* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_31, 0, sizeof(int));
        ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 109, 467)), "./neo-c.h", 109, 468))->head=((void*)0);
        ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 110, 469)), "./neo-c.h", 110, 470))->tail=((void*)0);
        ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 111, 471)), "./neo-c.h", 111, 472))->len=0;
        for(        i_31=0;        i_31<num_value;        i_31++        ){
            (come_push_stackframe("./neo-c.h", 114, 520),__exception_result_var_b46=list$1double_push_back(((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 114, 473)), "./neo-c.h", 114, 474)),((double*)come_null_check(values, "./neo-c.h", 114, 519))[i_31]), come_pop_stackframe(), __exception_result_var_b46);
        }
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
                if(_if_conditional11=((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 222, 475)), "./neo-c.h", 222, 476))->len==0,                _if_conditional11) {
                    litem_32=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 223, "list_item$1double");
                    ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_32, "./neo-c.h", 225, 477)), "./neo-c.h", 225, 478))->prev=((void*)0);
                    ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_32, "./neo-c.h", 226, 479)), "./neo-c.h", 226, 480))->next=((void*)0);
                    ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_32, "./neo-c.h", 227, 481)), "./neo-c.h", 227, 482))->item=item;
                    ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 229, 483)), "./neo-c.h", 229, 484))->tail=litem_32;
                    ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 230, 485)), "./neo-c.h", 230, 486))->head=litem_32;
                }
                else {
                    if(_if_conditional12=((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 232, 487)), "./neo-c.h", 232, 488))->len==1,                    _if_conditional12) {
                        litem_33=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 233, "list_item$1double");
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_33, "./neo-c.h", 235, 489)), "./neo-c.h", 235, 490))->prev=((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 235, 491)), "./neo-c.h", 235, 492))->head;
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_33, "./neo-c.h", 236, 493)), "./neo-c.h", 236, 494))->next=((void*)0);
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_33, "./neo-c.h", 237, 495)), "./neo-c.h", 237, 496))->item=item;
                        ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 239, 497)), "./neo-c.h", 239, 498))->tail=litem_33;
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 240, 499)), "./neo-c.h", 240, 500))->head, "./neo-c.h", 240, 501)), "./neo-c.h", 240, 502))->next=litem_33;
                    }
                    else {
                        litem_34=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 243, "list_item$1double");
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_34, "./neo-c.h", 245, 503)), "./neo-c.h", 245, 504))->prev=((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 245, 505)), "./neo-c.h", 245, 506))->tail;
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_34, "./neo-c.h", 246, 507)), "./neo-c.h", 246, 508))->next=((void*)0);
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_34, "./neo-c.h", 247, 509)), "./neo-c.h", 247, 510))->item=item;
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 249, 511)), "./neo-c.h", 249, 512))->tail, "./neo-c.h", 249, 513)), "./neo-c.h", 249, 514))->next=litem_34;
                        ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 250, 515)), "./neo-c.h", 250, 516))->tail=litem_34;
                    }
                }
                ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 253, 517)), "./neo-c.h", 253, 518))->len++;
                __result40__ = __result_obj__ = self;
                return __result40__;
}










void come_push_stackframe(char* sname, int sline, int id){
void* __result_obj__;
_Bool _if_conditional13;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional13=gNumComeStackFrame<1024,    _if_conditional13) {
        (come_range_check(&((char**)come_null_check(gComeStackFrameSName, "libneo-c-gc.c", 27, 525))[gNumComeStackFrame],((char**)come_null_check(gComeStackFrameSName, "libneo-c-gc.c", 27, 525)),((char**)come_null_check(gComeStackFrameSName, "libneo-c-gc.c", 27, 525))+(16), "libneo-c-gc.c", 27), ((char**)come_null_check(gComeStackFrameSName, "libneo-c-gc.c", 27, 525))[gNumComeStackFrame]=sname);
        (come_range_check(&((int*)come_null_check(gComeStackFrameSLine, "libneo-c-gc.c", 28, 526))[gNumComeStackFrame],((int*)come_null_check(gComeStackFrameSLine, "libneo-c-gc.c", 28, 526)),((int*)come_null_check(gComeStackFrameSLine, "libneo-c-gc.c", 28, 526))+(16), "libneo-c-gc.c", 28), ((int*)come_null_check(gComeStackFrameSLine, "libneo-c-gc.c", 28, 526))[gNumComeStackFrame]=sline);
        (come_range_check(&((int*)come_null_check(gComeStackFrameID, "libneo-c-gc.c", 29, 527))[gNumComeStackFrame],((int*)come_null_check(gComeStackFrameID, "libneo-c-gc.c", 29, 527)),((int*)come_null_check(gComeStackFrameID, "libneo-c-gc.c", 29, 527))+(1024), "libneo-c-gc.c", 29), ((int*)come_null_check(gComeStackFrameID, "libneo-c-gc.c", 29, 527))[gNumComeStackFrame]=id);
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
struct buffer* __exception_result_var_b51;
struct buffer* buf_35;
char* __exception_result_var_b52;
struct buffer* __exception_result_var_b53;
int i_36;
char* __exception_result_var_b54;
struct buffer* __exception_result_var_b55;
_Bool _if_conditional15;
char* __exception_result_var_b56;
char* __exception_result_var_b57;
memset(&__result_obj__, 0, sizeof(void*));
memset(&buf_35, 0, sizeof(struct buffer*));
memset(&i_36, 0, sizeof(int));
    buf_35=(come_push_stackframe("libneo-c-gc.c", 44, 529),__exception_result_var_b51=buffer_initialize(((struct buffer*)come_null_check((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 44, "buffer"), "libneo-c-gc.c", 44, 528))), come_pop_stackframe(), __exception_result_var_b51);
    (come_push_stackframe("libneo-c-gc.c", 45, 533),__exception_result_var_b53=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_35, "libneo-c-gc.c", 45, 530)), "libneo-c-gc.c", 45, 531)),(come_push_stackframe("libneo-c-gc.c", 45, 532),__exception_result_var_b52=xsprintf("%s %d\n",sname,sline), come_pop_stackframe(), __exception_result_var_b52)), come_pop_stackframe(), __exception_result_var_b53);
    for(    i_36=gNumComeStackFrame-2;    i_36>=0;    i_36--    ){
        (come_push_stackframe("libneo-c-gc.c", 47, 540),__exception_result_var_b55=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_35, "libneo-c-gc.c", 47, 534)), "libneo-c-gc.c", 47, 535)),(come_push_stackframe("libneo-c-gc.c", 47, 539),__exception_result_var_b54=xsprintf("%s %d #%d\n",*(char**)come_range_check(&((char**)come_null_check(gComeStackFrameSName, "libneo-c-gc.c", 47, 536))[i_36],((char**)come_null_check(gComeStackFrameSName, "libneo-c-gc.c", 47, 536)),((char**)come_null_check(gComeStackFrameSName, "libneo-c-gc.c", 47, 536))+(16), "libneo-c-gc.c", 47),*(int*)come_range_check(&((int*)come_null_check(gComeStackFrameSLine, "libneo-c-gc.c", 47, 537))[i_36],((int*)come_null_check(gComeStackFrameSLine, "libneo-c-gc.c", 47, 537)),((int*)come_null_check(gComeStackFrameSLine, "libneo-c-gc.c", 47, 537))+(16), "libneo-c-gc.c", 47),*(int*)come_range_check(&((int*)come_null_check(gComeStackFrameID, "libneo-c-gc.c", 47, 538))[i_36],((int*)come_null_check(gComeStackFrameID, "libneo-c-gc.c", 47, 538)),((int*)come_null_check(gComeStackFrameID, "libneo-c-gc.c", 47, 538))+(1024), "libneo-c-gc.c", 47)), come_pop_stackframe(), __exception_result_var_b54)), come_pop_stackframe(), __exception_result_var_b55);
    }
    if(gComeStackFrameBuffer) {
        (come_push_stackframe("libneo-c-gc.c", 51,541),free(gComeStackFrameBuffer),come_pop_stackframe());
    }
    gComeStackFrameBuffer=(come_push_stackframe("libneo-c-gc.c", 53, 545),__exception_result_var_b57=strdup((come_push_stackframe("libneo-c-gc.c", 53, 544),__exception_result_var_b56=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_35, "libneo-c-gc.c", 53, 542)), "libneo-c-gc.c", 53, 543))), come_pop_stackframe(), __exception_result_var_b56)), come_pop_stackframe(), __exception_result_var_b57);
}

void exception_stackframe(){
void* __result_obj__;
int __exception_result_var_b58;
memset(&__result_obj__, 0, sizeof(void*));
    (come_push_stackframe("libneo-c-gc.c", 58, 546),__exception_result_var_b58=printf("%s",gComeStackFrameBuffer), come_pop_stackframe(), __exception_result_var_b58);
}

void stackframe(){
void* __result_obj__;
int i_37;
int __exception_result_var_b59;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_37, 0, sizeof(int));
    for(    i_37=gNumComeStackFrame-1;    i_37>=0;    i_37--    ){
        (come_push_stackframe("libneo-c-gc.c", 64, 550),__exception_result_var_b59=printf("%s %d #%d\n",*(char**)come_range_check(&((char**)come_null_check(gComeStackFrameSName, "libneo-c-gc.c", 64, 547))[i_37],((char**)come_null_check(gComeStackFrameSName, "libneo-c-gc.c", 64, 547)),((char**)come_null_check(gComeStackFrameSName, "libneo-c-gc.c", 64, 547))+(16), "libneo-c-gc.c", 64),*(int*)come_range_check(&((int*)come_null_check(gComeStackFrameSLine, "libneo-c-gc.c", 64, 548))[i_37],((int*)come_null_check(gComeStackFrameSLine, "libneo-c-gc.c", 64, 548)),((int*)come_null_check(gComeStackFrameSLine, "libneo-c-gc.c", 64, 548))+(16), "libneo-c-gc.c", 64),*(int*)come_range_check(&((int*)come_null_check(gComeStackFrameID, "libneo-c-gc.c", 64, 549))[i_37],((int*)come_null_check(gComeStackFrameID, "libneo-c-gc.c", 64, 549)),((int*)come_null_check(gComeStackFrameID, "libneo-c-gc.c", 64, 549))+(1024), "libneo-c-gc.c", 64)), come_pop_stackframe(), __exception_result_var_b59);
    }
}

char* come_get_stackframe(){
void* __result_obj__;
char* __exception_result_var_b60;
char* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
    __result52__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 70, 551),__exception_result_var_b60=__builtin_string(gComeStackFrameBuffer), come_pop_stackframe(), __exception_result_var_b60);
    return __result52__;
}

void* come_null_check(void* mem, char* sname, int sline, int id){
void* __result_obj__;
_Bool _if_conditional16;
int __exception_result_var_b61;
void* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional16=mem==((void*)0),    _if_conditional16) {
        (come_push_stackframe("libneo-c-gc.c", 76, 552),__exception_result_var_b61=printf("%s %d #%d: null check error\n",sname,sline,id), come_pop_stackframe(), __exception_result_var_b61);
        (come_push_stackframe("libneo-c-gc.c", 77,553),stackframe(),come_pop_stackframe());
        (come_push_stackframe("libneo-c-gc.c", 78,554),exit(2),come_pop_stackframe());
    }
    __result53__ = __result_obj__ = mem;
    return __result53__;
}

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline){
void* __result_obj__;
_Bool _if_conditional17;
int __exception_result_var_b62;
_Bool _if_conditional18;
int __exception_result_var_b63;
_Bool _if_conditional19;
int __exception_result_var_b64;
void* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional17=mem==((void*)0),    _if_conditional17) {
        (come_push_stackframe("libneo-c-gc.c", 87, 555),__exception_result_var_b62=printf("%s %d: null check error\n",sname,sline), come_pop_stackframe(), __exception_result_var_b62);
        (come_push_stackframe("libneo-c-gc.c", 88,556),stackframe(),come_pop_stackframe());
        (come_push_stackframe("libneo-c-gc.c", 89,557),exit(2),come_pop_stackframe());
    }
    if(_if_conditional18=mem<begin,    _if_conditional18) {
        (come_push_stackframe("libneo-c-gc.c", 93, 558),__exception_result_var_b63=printf("%s %d: range check error\n",sname,sline), come_pop_stackframe(), __exception_result_var_b63);
        (come_push_stackframe("libneo-c-gc.c", 94,559),stackframe(),come_pop_stackframe());
        (come_push_stackframe("libneo-c-gc.c", 95,560),exit(2),come_pop_stackframe());
    }
    if(_if_conditional19=mem>=end,    _if_conditional19) {
        (come_push_stackframe("libneo-c-gc.c", 99, 561),__exception_result_var_b64=printf("%s %d: range check error\n",sname,sline), come_pop_stackframe(), __exception_result_var_b64);
        (come_push_stackframe("libneo-c-gc.c", 100,562),stackframe(),come_pop_stackframe());
        (come_push_stackframe("libneo-c-gc.c", 101,563),exit(2),come_pop_stackframe());
    }
    __result54__ = __result_obj__ = mem;
    return __result54__;
}

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional20;
_Bool __result55__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional20=!self,    _if_conditional20) {
        block(parent);
        (come_push_stackframe("libneo-c-gc.c", 111,564),stackframe(),come_pop_stackframe());
        (come_push_stackframe("libneo-c-gc.c", 112,565),exit(1),come_pop_stackframe());
    }
    __result55__ = self;
    return __result55__;
}

_Bool bool_value(_Bool self){
void* __result_obj__;
_Bool __result56__;
memset(&__result_obj__, 0, sizeof(void*));
    __result56__ = self;
    return __result56__;
}

int int_catch(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional21;
int __result57__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional21=self<0,    _if_conditional21) {
        block(parent);
    }
    __result57__ = self;
    return __result57__;
}

int int_expect(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional22;
int __result58__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional22=self<0,    _if_conditional22) {
        block(parent);
        (come_push_stackframe("libneo-c-gc.c", 136,566),stackframe(),come_pop_stackframe());
        (come_push_stackframe("libneo-c-gc.c", 137,567),exit(1),come_pop_stackframe());
    }
    __result58__ = self;
    return __result58__;
}

int int_value(int self){
void* __result_obj__;
int __result59__;
memset(&__result_obj__, 0, sizeof(void*));
    __result59__ = self;
    return __result59__;
}

int int_except(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional23;
int __result60__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional23=self<0,    _if_conditional23) {
        block(parent);
    }
    __result60__ = self;
    return __result60__;
}

_Bool bool_except(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional24;
_Bool __result61__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional24=!self,    _if_conditional24) {
        block(parent);
    }
    __result61__ = self;
    return __result61__;
}

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional25;
_Bool __result62__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional25=!self,    _if_conditional25) {
        block(parent);
    }
    __result62__ = self;
    return __result62__;
}

void xassert(char* msg, _Bool test){
void* __result_obj__;
int __exception_result_var_b65;
_Bool _if_conditional26;
int __exception_result_var_b66;
int __exception_result_var_b67;
memset(&__result_obj__, 0, sizeof(void*));
    (come_push_stackframe("libneo-c-gc.c", 177, 568),__exception_result_var_b65=printf("%s...",msg), come_pop_stackframe(), __exception_result_var_b65);
    if(_if_conditional26=!test,    _if_conditional26) {
        (come_push_stackframe("libneo-c-gc.c", 179, 569),__exception_result_var_b66=puts("false"), come_pop_stackframe(), __exception_result_var_b66);
        (come_push_stackframe("libneo-c-gc.c", 180,570),exit(2),come_pop_stackframe());
    }
    (come_push_stackframe("libneo-c-gc.c", 182, 571),__exception_result_var_b67=puts("ok"), come_pop_stackframe(), __exception_result_var_b67);
}

void come_heap_init(int come_malloc, int come_debug, int come_gc){
void* __result_obj__;
_Bool _if_conditional27;
memset(&__result_obj__, 0, sizeof(void*));
    gComeMallocLib=(_Bool)0;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    if(gComeGCLib) {
        (come_push_stackframe("libneo-c-gc.c", 231,572),GC_init(),come_pop_stackframe());
        (come_push_stackframe("libneo-c-gc.c", 232,573),GC_set_warn_proc(GC_ignore_warn_proc),come_pop_stackframe());
        (come_push_stackframe("libneo-c-gc.c", 233,574),GC_enable_incremental(),come_pop_stackframe());
    }
    gComeStackFrameBuffer=((void*)0);
}

void come_heap_final(){
void* __result_obj__;
_Bool _if_conditional28;
memset(&__result_obj__, 0, sizeof(void*));
    if(gComeStackFrameBuffer) {
        (come_push_stackframe("libneo-c-gc.c", 242,575),free(gComeStackFrameBuffer),come_pop_stackframe());
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
    if(gComeDebugLib) {
        result_38=GC_malloc(size+sizeof(struct sMemHeader));
        memset(result_38,0,size+sizeof(struct sMemHeader));
        it_39=result_38;
        ((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(it_39, "libneo-c-gc.c", 254, 576)), "libneo-c-gc.c", 254, 577))->allocated=177783;
        ((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(it_39, "libneo-c-gc.c", 256, 578)), "libneo-c-gc.c", 256, 579))->size=size+sizeof(struct sMemHeader);
        come_push_stackframe(sname,sline,0);
        if(_if_conditional30=gNumComeStackFrame<16,        _if_conditional30) {
            memcpy(((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(it_39, "libneo-c-gc.c", 263, 580)), "libneo-c-gc.c", 263, 581))->sname,gComeStackFrameSName,sizeof(char*)*gNumComeStackFrame);
            memcpy(((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(it_39, "libneo-c-gc.c", 264, 582)), "libneo-c-gc.c", 264, 583))->sline,gComeStackFrameSLine,sizeof(int)*gNumComeStackFrame);
            memcpy(((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(it_39, "libneo-c-gc.c", 265, 584)), "libneo-c-gc.c", 265, 585))->id,gComeStackFrameID,sizeof(int)*gNumComeStackFrame);
        }
        else {
            memcpy(((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(it_39, "libneo-c-gc.c", 268, 586)), "libneo-c-gc.c", 268, 587))->sname,gComeStackFrameSName+gNumComeStackFrame-16-1,sizeof(char*)*16);
            memcpy(((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(it_39, "libneo-c-gc.c", 269, 588)), "libneo-c-gc.c", 269, 589))->sline,gComeStackFrameSLine+gNumComeStackFrame-16-1,sizeof(int)*16);
            memcpy(((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(it_39, "libneo-c-gc.c", 270, 590)), "libneo-c-gc.c", 270, 591))->id,gComeStackFrameID+gNumComeStackFrame-16-1,sizeof(int)*16);
        }
        come_pop_stackframe();
        ((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(it_39, "libneo-c-gc.c", 275, 592)), "libneo-c-gc.c", 275, 593))->next=gAllocMem;
        ((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(it_39, "libneo-c-gc.c", 276, 594)), "libneo-c-gc.c", 276, 595))->prev=((void*)0);
        if(class_name) {
            ((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(it_39, "libneo-c-gc.c", 279, 596)), "libneo-c-gc.c", 279, 597))->class_name=GC_strdup(class_name);
        }
        else {
            ((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(it_39, "libneo-c-gc.c", 282, 598)), "libneo-c-gc.c", 282, 599))->class_name=((void*)0);
        }
        if(gAllocMem) {
            ((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(gAllocMem, "libneo-c-gc.c", 286, 600)), "libneo-c-gc.c", 286, 601))->prev=it_39;
        }
        gAllocMem=it_39;
        __result63__ = __result_obj__ = (char*)result_38+sizeof(struct sMemHeader);
        return __result63__;
    }
    else {
        result_40=GC_malloc(size+sizeof(struct sMemHeaderTiny));
        memset(result_40,0,size+sizeof(struct sMemHeaderTiny));
        it_41=result_40;
        ((struct sMemHeaderTiny*)come_null_check(((struct sMemHeaderTiny*)come_null_check(it_41, "libneo-c-gc.c", 299, 602)), "libneo-c-gc.c", 299, 603))->allocated=177783;
        if(class_name) {
            ((struct sMemHeaderTiny*)come_null_check(((struct sMemHeaderTiny*)come_null_check(it_41, "libneo-c-gc.c", 302, 604)), "libneo-c-gc.c", 302, 605))->class_name=GC_strdup(class_name);
        }
        else {
            ((struct sMemHeaderTiny*)come_null_check(((struct sMemHeaderTiny*)come_null_check(it_41, "libneo-c-gc.c", 305, 606)), "libneo-c-gc.c", 305, 607))->class_name=((void*)0);
        }
        ((struct sMemHeaderTiny*)come_null_check(((struct sMemHeaderTiny*)come_null_check(it_41, "libneo-c-gc.c", 308, 608)), "libneo-c-gc.c", 308, 609))->size=size+sizeof(struct sMemHeaderTiny);
        ((struct sMemHeaderTiny*)come_null_check(((struct sMemHeaderTiny*)come_null_check(it_41, "libneo-c-gc.c", 311, 610)), "libneo-c-gc.c", 311, 611))->next=(struct sMemHeaderTiny*)gAllocMem;
        ((struct sMemHeaderTiny*)come_null_check(((struct sMemHeaderTiny*)come_null_check(it_41, "libneo-c-gc.c", 312, 612)), "libneo-c-gc.c", 312, 613))->prev=((void*)0);
        if(gAllocMem) {
            ((struct sMemHeaderTiny*)come_null_check(((struct sMemHeaderTiny*)come_null_check(((struct sMemHeaderTiny*)gAllocMem), "libneo-c-gc.c", 315, 614)), "libneo-c-gc.c", 315, 615))->prev=it_41;
        }
        gAllocMem=(struct sMemHeader*)it_41;
        __result64__ = __result_obj__ = (char*)result_40+sizeof(struct sMemHeaderTiny);
        return __result64__;
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
int __exception_result_var_b68;
char* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_42, 0, sizeof(struct sMemHeaderTiny*));
    it_42=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int)-sizeof(struct sMemHeaderTiny));
    if(_if_conditional37=((struct sMemHeaderTiny*)come_null_check(((struct sMemHeaderTiny*)come_null_check(it_42, "libneo-c-gc.c", 338, 616)), "libneo-c-gc.c", 338, 617))->allocated!=177783,    _if_conditional37) {
        (come_push_stackframe("libneo-c-gc.c", 339, 618),__exception_result_var_b68=fprintf((stderr),"invalid heap object(%p)\n",it_42), come_pop_stackframe(), __exception_result_var_b68);
        (come_push_stackframe("libneo-c-gc.c", 340,619),exit(2),come_pop_stackframe());
    }
    __result65__ = __result_obj__ = ((struct sMemHeaderTiny*)come_null_check(((struct sMemHeaderTiny*)come_null_check(it_42, "libneo-c-gc.c", 343, 620)), "libneo-c-gc.c", 343, 621))->class_name;
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
    mem_43=come_alloc_mem_from_heap_pool(sizeof(unsigned long int)+sizeof(unsigned long int)+count*size,sname,sline,class_name);
    ref_count_44=(unsigned long int*)mem_43;
    *((unsigned long int*)come_null_check(ref_count_44, "libneo-c-gc.c", 353, 622))=0;
    size2_45=(unsigned long int*)(mem_43+sizeof(unsigned long int));
    *((unsigned long int*)come_null_check(size2_45, "libneo-c-gc.c", 357, 623))=size*count+sizeof(unsigned long int)+sizeof(unsigned long int);
    __result66__ = __result_obj__ = mem_43+sizeof(unsigned long int)+sizeof(unsigned long int);
    return __result66__;
}

void come_free_object(void* mem){
void* __result_obj__;
_Bool _if_conditional38;
unsigned long int* ref_count_46;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_46, 0, sizeof(unsigned long int*));
    if(_if_conditional38=mem==((void*)0),    _if_conditional38) {
        return;
    }
    ref_count_46=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    (come_push_stackframe("libneo-c-gc.c", 370,624),come_free_mem_of_heap_pool((char*)ref_count_46),come_pop_stackframe());
}

void come_free(void* mem){
void* __result_obj__;
_Bool _if_conditional39;
unsigned long int* ref_count_47;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_47, 0, sizeof(unsigned long int*));
    if(_if_conditional39=mem==((void*)0),    _if_conditional39) {
        return;
    }
    ref_count_47=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    come_free_mem_of_heap_pool((char*)ref_count_47);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__;
_Bool _if_conditional40;
void* __result67__;
char* mem_48;
unsigned long int* size_p_49;
unsigned long int size_50;
void* __exception_result_var_b69;
void* result_51;
void* __exception_result_var_b70;
void* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_48, 0, sizeof(char*));
memset(&size_p_49, 0, sizeof(unsigned long int*));
memset(&size_50, 0, sizeof(unsigned long int));
memset(&result_51, 0, sizeof(void*));
    if(_if_conditional40=!block,    _if_conditional40) {
        __result67__ = __result_obj__ = ((void*)0);
        return __result67__;
    }
    mem_48=(char*)block-sizeof(unsigned long int)-sizeof(unsigned long int);
    size_p_49=(unsigned long int*)(mem_48+sizeof(unsigned long int));
    size_50=*((unsigned long int*)come_null_check(size_p_49, "libneo-c-gc.c", 394, 625))-sizeof(unsigned long int)-sizeof(unsigned long int);
    result_51=(come_push_stackframe("libneo-c-gc.c", 396, 626),__exception_result_var_b69=come_calloc(1,size_50,sname,sline,class_name), come_pop_stackframe(), __exception_result_var_b69);
    (come_push_stackframe("libneo-c-gc.c", 398, 627),__exception_result_var_b70=memcpy(result_51,block,size_50), come_pop_stackframe(), __exception_result_var_b70);
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
    if(_if_conditional41=mem==((void*)0),    _if_conditional41) {
        __result69__ = __result_obj__ = mem;
        return __result69__;
    }
    ref_count_52=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    (*((unsigned long int*)come_null_check(ref_count_52, "libneo-c-gc.c", 411, 628)))++;
    __result70__ = __result_obj__ = mem;
    return __result70__;
}

void* come_print_ref_count(void* mem){
void* __result_obj__;
_Bool _if_conditional42;
void* __result71__;
unsigned long int* ref_count_53;
int __exception_result_var_b71;
void* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_53, 0, sizeof(unsigned long int*));
    if(_if_conditional42=mem==((void*)0),    _if_conditional42) {
        __result71__ = __result_obj__ = mem;
        return __result71__;
    }
    ref_count_53=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    (come_push_stackframe("libneo-c-gc.c", 424, 630),__exception_result_var_b71=printf("ref_count %ld\n",*((unsigned long int*)come_null_check(ref_count_53, "libneo-c-gc.c", 424, 629))), come_pop_stackframe(), __exception_result_var_b71);
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
    if(_if_conditional43=mem==((void*)0),    _if_conditional43) {
        __result73__ = __result_obj__ = ((void*)0);
        return __result73__;
    }
    ref_count_54=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    if(_if_conditional44=!no_decrement,    _if_conditional44) {
        (*((unsigned long int*)come_null_check(ref_count_54, "libneo-c-gc.c", 438, 631)))--;
    }
    count_55=*((unsigned long int*)come_null_check(ref_count_54, "libneo-c-gc.c", 441, 632));
    if(_if_conditional45=!no_free&&(count_55<=0||force_delete_),    _if_conditional45) {
        if(_if_conditional46=protocol_obj&&protocol_fun,        _if_conditional46) {
            finalizer_56=protocol_fun;
            finalizer_56(protocol_obj);
            (come_push_stackframe("libneo-c-gc.c", 447,633),come_free_object(protocol_obj),come_pop_stackframe());
        }
        (come_push_stackframe("libneo-c-gc.c", 449,634),come_free_object(mem),come_pop_stackframe());
        __result74__ = __result_obj__ = ((void*)0);
        return __result74__;
    }
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
        ref_count_59=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
        if(_if_conditional51=!no_decrement,        _if_conditional51) {
            (*((unsigned long int*)come_null_check(ref_count_59, "libneo-c-gc.c", 476, 635)))--;
        }
        count_60=*((unsigned long int*)come_null_check(ref_count_59, "libneo-c-gc.c", 479, 636));
        if(_if_conditional52=!no_free&&(count_60<=0||force_delete_),        _if_conditional52) {
            if(mem) {
                if(_if_conditional54=protocol_obj&&protocol_fun,                _if_conditional54) {
                    finalizer_61=protocol_fun;
                    finalizer_61(protocol_obj);
                    (come_push_stackframe("libneo-c-gc.c", 485,637),come_free_object(protocol_obj),come_pop_stackframe());
                }
                if(fun) {
                    finalizer_62=fun;
                    finalizer_62(mem);
                }
                (come_push_stackframe("libneo-c-gc.c", 491,638),come_free_object(mem),come_pop_stackframe());
            }
        }
    }
}

char* __builtin_string(char* str){
void* __result_obj__;
_Bool _if_conditional56;
char* __result76__;
unsigned long int __exception_result_var_b72;
int len_63;
char* result_64;
char* __exception_result_var_b73;
char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_63, 0, sizeof(int));
memset(&result_64, 0, sizeof(char*));
    if(_if_conditional56=str==((void*)0),    _if_conditional56) {
        __result76__ = __result_obj__ = ((void*)0);
        return __result76__;
    }
    len_63=(come_push_stackframe("libneo-c-gc.c", 502, 639),__exception_result_var_b72=strlen(str), come_pop_stackframe(), __exception_result_var_b72)+1;
    result_64=(char*)come_calloc(1, sizeof(char)*(1*(len_63)), "libneo-c-gc.c", 504, "char");
    (come_push_stackframe("libneo-c-gc.c", 506, 640),__exception_result_var_b73=strncpy(result_64,str,len_63), come_pop_stackframe(), __exception_result_var_b73);
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
    found_65=(_Bool)0;
    for(    i_66=0;    i_66<len;    i_66++    ){
        if(_if_conditional57=((void**)come_null_check(array, "libneo-c-gc.c", 515, 641))[i_66]==element,        _if_conditional57) {
            found_65=(_Bool)1;
            break;
        }
    }
    __result78__ = found_65;
    return __result78__;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __result_obj__;
struct buffer* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 528, 642)), "libneo-c-gc.c", 528, 643))->size=128;
    ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 529, 644)), "libneo-c-gc.c", 529, 645))->buf=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 529, 646)), "libneo-c-gc.c", 529, 647))->size)), "libneo-c-gc.c", 529, "char");
    ((char*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 530, 648)), "libneo-c-gc.c", 530, 649))->buf, "libneo-c-gc.c", 530, 650))[0]=0;
    ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 531, 651)), "libneo-c-gc.c", 531, 652))->len=0;
    __result79__ = __result_obj__ = self;
    return __result79__;
}

void buffer_finalize(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional58;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional58=self&&((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 538, 653)), "libneo-c-gc.c", 538, 654))->buf,    _if_conditional58) {
    }
}

void buffer_force_finalize(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional59;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional59=self&&((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 542, 657)), "libneo-c-gc.c", 542, 658))->buf,    _if_conditional59) {
    }
}

struct buffer* buffer_clone(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional60;
struct buffer* __result80__;
struct buffer* result_67;
void* __exception_result_var_b74;
struct buffer* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_67, 0, sizeof(struct buffer*));
    if(_if_conditional60=self==((void*)0),    _if_conditional60) {
        __result80__ = __result_obj__ = ((void*)0);
        return __result80__;
    }
    result_67=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 551, "buffer");
    ((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_67, "libneo-c-gc.c", 553, 661)), "libneo-c-gc.c", 553, 662))->size=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 553, 663)), "libneo-c-gc.c", 553, 664))->size;
    ((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_67, "libneo-c-gc.c", 554, 665)), "libneo-c-gc.c", 554, 666))->buf=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 554, 667)), "libneo-c-gc.c", 554, 668))->size)), "libneo-c-gc.c", 554, "char");
    ((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_67, "libneo-c-gc.c", 555, 669)), "libneo-c-gc.c", 555, 670))->len=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 555, 671)), "libneo-c-gc.c", 555, 672))->len;
    (come_push_stackframe("libneo-c-gc.c", 556, 679),__exception_result_var_b74=memcpy(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_67, "libneo-c-gc.c", 556, 673)), "libneo-c-gc.c", 556, 674))->buf,((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 556, 675)), "libneo-c-gc.c", 556, 676))->buf,((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 556, 677)), "libneo-c-gc.c", 556, 678))->len), come_pop_stackframe(), __exception_result_var_b74);
    __result81__ = __result_obj__ = result_67;
    return __result81__;
}

int buffer_length(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional61;
int __result82__;
int __result83__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional61=self==((void*)0),    _if_conditional61) {
        __result82__ = 0;
        return __result82__;
    }
    __result83__ = ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 566, 680)), "libneo-c-gc.c", 566, 681))->len;
    return __result83__;
}

void buffer_reset(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional62;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional62=self==((void*)0),    _if_conditional62) {
        return;
    }
    ((char*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 574, 682)), "libneo-c-gc.c", 574, 683))->buf, "libneo-c-gc.c", 574, 684))[0]=0;
    ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 575, 685)), "libneo-c-gc.c", 575, 686))->len=0;
}

void buffer_trim(struct buffer* self, int len){
void* __result_obj__;
_Bool _if_conditional63;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional63=self==((void*)0),    _if_conditional63) {
        return;
    }
    ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 583, 687)), "libneo-c-gc.c", 583, 688))->len-=len;
    ((char*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 584, 689)), "libneo-c-gc.c", 584, 690))->buf, "libneo-c-gc.c", 584, 691))[((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 584, 692)), "libneo-c-gc.c", 584, 693))->len]=0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long int size){
void* __result_obj__;
_Bool _if_conditional64;
struct buffer* __result84__;
_Bool _if_conditional65;
char* old_buf_68;
void* __exception_result_var_b75;
int old_len_69;
int new_size_70;
void* __exception_result_var_b76;
void* __exception_result_var_b77;
struct buffer* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&old_buf_68, 0, sizeof(char*));
memset(&old_len_69, 0, sizeof(int));
memset(&new_size_70, 0, sizeof(int));
    if(_if_conditional64=self==((void*)0)||mem==((void*)0),    _if_conditional64) {
        __result84__ = __result_obj__ = self;
        return __result84__;
    }
    if(_if_conditional65=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 592, 694)), "libneo-c-gc.c", 592, 695))->len+size+1+1>=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 592, 696)), "libneo-c-gc.c", 592, 697))->size,    _if_conditional65) {
        old_buf_68=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 593, 698)), "libneo-c-gc.c", 593, 699))->size)), "libneo-c-gc.c", 593, "char");
        (come_push_stackframe("libneo-c-gc.c", 594, 704),__exception_result_var_b75=memcpy(old_buf_68,((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 594, 700)), "libneo-c-gc.c", 594, 701))->buf,((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 594, 702)), "libneo-c-gc.c", 594, 703))->size), come_pop_stackframe(), __exception_result_var_b75);
        old_len_69=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 595, 705)), "libneo-c-gc.c", 595, 706))->len;
        new_size_70=(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 596, 707)), "libneo-c-gc.c", 596, 708))->size+size+1)*2;
        ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 597, 709)), "libneo-c-gc.c", 597, 710))->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_70)), "libneo-c-gc.c", 597, "char");
        (come_push_stackframe("libneo-c-gc.c", 598, 713),__exception_result_var_b76=memcpy(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 598, 711)), "libneo-c-gc.c", 598, 712))->buf,old_buf_68,old_len_69), come_pop_stackframe(), __exception_result_var_b76);
        ((char*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 599, 714)), "libneo-c-gc.c", 599, 715))->buf, "libneo-c-gc.c", 599, 716))[old_len_69]=0;
        ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 600, 717)), "libneo-c-gc.c", 600, 718))->size=new_size_70;
    }
    (come_push_stackframe("libneo-c-gc.c", 603, 723),__exception_result_var_b77=memcpy(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 603, 719)), "libneo-c-gc.c", 603, 720))->buf+((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 603, 721)), "libneo-c-gc.c", 603, 722))->len,mem,size), come_pop_stackframe(), __exception_result_var_b77);
    ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 604, 724)), "libneo-c-gc.c", 604, 725))->len+=size;
    ((char*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 605, 726)), "libneo-c-gc.c", 605, 727))->buf, "libneo-c-gc.c", 605, 728))[((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 605, 729)), "libneo-c-gc.c", 605, 730))->len]=0;
    __result85__ = __result_obj__ = self;
    return __result85__;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
void* __result_obj__;
_Bool _if_conditional66;
struct buffer* __result86__;
_Bool _if_conditional67;
char* __exception_result_var_b78;
char* old_buf_71;
int old_len_72;
int new_size_73;
void* __exception_result_var_b79;
struct buffer* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&old_buf_71, 0, sizeof(char*));
memset(&old_len_72, 0, sizeof(int));
memset(&new_size_73, 0, sizeof(int));
    if(_if_conditional66=self==((void*)0),    _if_conditional66) {
        __result86__ = __result_obj__ = ((void*)0);
        return __result86__;
    }
    if(_if_conditional67=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 615, 731)), "libneo-c-gc.c", 615, 732))->len+1+1+1>=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 615, 733)), "libneo-c-gc.c", 615, 734))->size,    _if_conditional67) {
        old_buf_71=(come_push_stackframe("libneo-c-gc.c", 616, 737),__exception_result_var_b78=charp_clone(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 616, 735)), "libneo-c-gc.c", 616, 736))->buf), come_pop_stackframe(), __exception_result_var_b78);
        old_len_72=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 617, 738)), "libneo-c-gc.c", 617, 739))->len;
        new_size_73=(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 619, 740)), "libneo-c-gc.c", 619, 741))->size+10+1)*2;
        ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 620, 742)), "libneo-c-gc.c", 620, 743))->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_73)), "libneo-c-gc.c", 620, "char");
        (come_push_stackframe("libneo-c-gc.c", 621, 746),__exception_result_var_b79=memcpy(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 621, 744)), "libneo-c-gc.c", 621, 745))->buf,old_buf_71,old_len_72), come_pop_stackframe(), __exception_result_var_b79);
        ((char*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 622, 747)), "libneo-c-gc.c", 622, 748))->buf, "libneo-c-gc.c", 622, 749))[old_len_72]=0;
        ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 623, 750)), "libneo-c-gc.c", 623, 751))->size=new_size_73;
    }
    ((char*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 626, 752)), "libneo-c-gc.c", 626, 753))->buf, "libneo-c-gc.c", 626, 754))[((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 626, 755)), "libneo-c-gc.c", 626, 756))->len]=c;
    ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 627, 757)), "libneo-c-gc.c", 627, 758))->len++;
    ((char*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 629, 759)), "libneo-c-gc.c", 629, 760))->buf, "libneo-c-gc.c", 629, 761))[((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 629, 762)), "libneo-c-gc.c", 629, 763))->len]=0;
    __result87__ = __result_obj__ = self;
    return __result87__;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool _if_conditional68;
struct buffer* __result88__;
unsigned long int __exception_result_var_b80;
int size_74;
_Bool _if_conditional69;
char* old_buf_75;
void* __exception_result_var_b81;
int old_len_76;
int new_size_77;
void* __exception_result_var_b82;
void* __exception_result_var_b83;
struct buffer* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_74, 0, sizeof(int));
memset(&old_buf_75, 0, sizeof(char*));
memset(&old_len_76, 0, sizeof(int));
memset(&new_size_77, 0, sizeof(int));
    if(_if_conditional68=self==((void*)0)||mem==((void*)0),    _if_conditional68) {
        __result88__ = __result_obj__ = self;
        return __result88__;
    }
    size_74=(come_push_stackframe("libneo-c-gc.c", 640, 764),__exception_result_var_b80=strlen(mem), come_pop_stackframe(), __exception_result_var_b80);
    if(_if_conditional69=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 641, 765)), "libneo-c-gc.c", 641, 766))->len+size_74+1+1>=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 641, 767)), "libneo-c-gc.c", 641, 768))->size,    _if_conditional69) {
        old_buf_75=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 642, 769)), "libneo-c-gc.c", 642, 770))->size)), "libneo-c-gc.c", 642, "char");
        (come_push_stackframe("libneo-c-gc.c", 643, 775),__exception_result_var_b81=memcpy(old_buf_75,((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 643, 771)), "libneo-c-gc.c", 643, 772))->buf,((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 643, 773)), "libneo-c-gc.c", 643, 774))->size), come_pop_stackframe(), __exception_result_var_b81);
        old_len_76=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 644, 776)), "libneo-c-gc.c", 644, 777))->len;
        new_size_77=(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 645, 778)), "libneo-c-gc.c", 645, 779))->size+size_74+1)*2;
        ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 646, 780)), "libneo-c-gc.c", 646, 781))->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_77)), "libneo-c-gc.c", 646, "char");
        (come_push_stackframe("libneo-c-gc.c", 647, 784),__exception_result_var_b82=memcpy(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 647, 782)), "libneo-c-gc.c", 647, 783))->buf,old_buf_75,old_len_76), come_pop_stackframe(), __exception_result_var_b82);
        ((char*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 648, 785)), "libneo-c-gc.c", 648, 786))->buf, "libneo-c-gc.c", 648, 787))[old_len_76]=0;
        ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 649, 788)), "libneo-c-gc.c", 649, 789))->size=new_size_77;
    }
    (come_push_stackframe("libneo-c-gc.c", 652, 794),__exception_result_var_b83=memcpy(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 652, 790)), "libneo-c-gc.c", 652, 791))->buf+((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 652, 792)), "libneo-c-gc.c", 652, 793))->len,mem,size_74), come_pop_stackframe(), __exception_result_var_b83);
    ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 653, 795)), "libneo-c-gc.c", 653, 796))->len+=size_74;
    ((char*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 654, 797)), "libneo-c-gc.c", 654, 798))->buf, "libneo-c-gc.c", 654, 799))[((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 654, 800)), "libneo-c-gc.c", 654, 801))->len]=0;
    __result89__ = __result_obj__ = self;
    return __result89__;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool _if_conditional70;
struct buffer* __result90__;
unsigned long int __exception_result_var_b84;
int size_78;
_Bool _if_conditional71;
char* old_buf_79;
void* __exception_result_var_b85;
int old_len_80;
int new_size_81;
void* __exception_result_var_b86;
void* __exception_result_var_b87;
struct buffer* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_78, 0, sizeof(int));
memset(&old_buf_79, 0, sizeof(char*));
memset(&old_len_80, 0, sizeof(int));
memset(&new_size_81, 0, sizeof(int));
    if(_if_conditional70=self==((void*)0)||mem==((void*)0),    _if_conditional70) {
        __result90__ = __result_obj__ = self;
        return __result90__;
    }
    size_78=(come_push_stackframe("libneo-c-gc.c", 664, 802),__exception_result_var_b84=strlen(mem), come_pop_stackframe(), __exception_result_var_b84)+1;
    if(_if_conditional71=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 665, 803)), "libneo-c-gc.c", 665, 804))->len+size_78+1+1+1>=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 665, 805)), "libneo-c-gc.c", 665, 806))->size,    _if_conditional71) {
        old_buf_79=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 666, 807)), "libneo-c-gc.c", 666, 808))->size)), "libneo-c-gc.c", 666, "char");
        (come_push_stackframe("libneo-c-gc.c", 667, 813),__exception_result_var_b85=memcpy(old_buf_79,((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 667, 809)), "libneo-c-gc.c", 667, 810))->buf,((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 667, 811)), "libneo-c-gc.c", 667, 812))->size), come_pop_stackframe(), __exception_result_var_b85);
        old_len_80=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 668, 814)), "libneo-c-gc.c", 668, 815))->len;
        new_size_81=(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 669, 816)), "libneo-c-gc.c", 669, 817))->size+size_78+1)*2;
        ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 670, 818)), "libneo-c-gc.c", 670, 819))->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_81)), "libneo-c-gc.c", 670, "char");
        (come_push_stackframe("libneo-c-gc.c", 671, 822),__exception_result_var_b86=memcpy(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 671, 820)), "libneo-c-gc.c", 671, 821))->buf,old_buf_79,old_len_80), come_pop_stackframe(), __exception_result_var_b86);
        ((char*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 672, 823)), "libneo-c-gc.c", 672, 824))->buf, "libneo-c-gc.c", 672, 825))[old_len_80]=0;
        ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 673, 826)), "libneo-c-gc.c", 673, 827))->size=new_size_81;
    }
    (come_push_stackframe("libneo-c-gc.c", 676, 832),__exception_result_var_b87=memcpy(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 676, 828)), "libneo-c-gc.c", 676, 829))->buf+((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 676, 830)), "libneo-c-gc.c", 676, 831))->len,mem,size_78), come_pop_stackframe(), __exception_result_var_b87);
    ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 677, 833)), "libneo-c-gc.c", 677, 834))->len+=size_78;
    ((char*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 678, 835)), "libneo-c-gc.c", 678, 836))->buf, "libneo-c-gc.c", 678, 837))[((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 678, 838)), "libneo-c-gc.c", 678, 839))->len]=0;
    ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 679, 840)), "libneo-c-gc.c", 679, 841))->len++;
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
void* __exception_result_var_b88;
int old_len_85;
int new_size_86;
void* __exception_result_var_b89;
void* __exception_result_var_b90;
struct buffer* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_82, 0, sizeof(int*));
memset(&size_83, 0, sizeof(int));
memset(&old_buf_84, 0, sizeof(char*));
memset(&old_len_85, 0, sizeof(int));
memset(&new_size_86, 0, sizeof(int));
    if(_if_conditional72=self==((void*)0),    _if_conditional72) {
        __result92__ = __result_obj__ = ((void*)0);
        return __result92__;
    }
    mem_82=&value;
    size_83=sizeof(int);
    if(_if_conditional73=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 692, 842)), "libneo-c-gc.c", 692, 843))->len+size_83+1+1>=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 692, 844)), "libneo-c-gc.c", 692, 845))->size,    _if_conditional73) {
        old_buf_84=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 693, 846)), "libneo-c-gc.c", 693, 847))->size)), "libneo-c-gc.c", 693, "char");
        (come_push_stackframe("libneo-c-gc.c", 694, 852),__exception_result_var_b88=memcpy(old_buf_84,((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 694, 848)), "libneo-c-gc.c", 694, 849))->buf,((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 694, 850)), "libneo-c-gc.c", 694, 851))->size), come_pop_stackframe(), __exception_result_var_b88);
        old_len_85=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 695, 853)), "libneo-c-gc.c", 695, 854))->len;
        new_size_86=(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 696, 855)), "libneo-c-gc.c", 696, 856))->size+size_83+1)*2;
        ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 697, 857)), "libneo-c-gc.c", 697, 858))->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_86)), "libneo-c-gc.c", 697, "char");
        (come_push_stackframe("libneo-c-gc.c", 698, 861),__exception_result_var_b89=memcpy(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 698, 859)), "libneo-c-gc.c", 698, 860))->buf,old_buf_84,old_len_85), come_pop_stackframe(), __exception_result_var_b89);
        ((char*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 699, 862)), "libneo-c-gc.c", 699, 863))->buf, "libneo-c-gc.c", 699, 864))[old_len_85]=0;
        ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 700, 865)), "libneo-c-gc.c", 700, 866))->size=new_size_86;
    }
    (come_push_stackframe("libneo-c-gc.c", 703, 871),__exception_result_var_b90=memcpy(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 703, 867)), "libneo-c-gc.c", 703, 868))->buf+((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 703, 869)), "libneo-c-gc.c", 703, 870))->len,mem_82,size_83), come_pop_stackframe(), __exception_result_var_b90);
    ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 704, 872)), "libneo-c-gc.c", 704, 873))->len+=size_83;
    ((char*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 705, 874)), "libneo-c-gc.c", 705, 875))->buf, "libneo-c-gc.c", 705, 876))[((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 705, 877)), "libneo-c-gc.c", 705, 878))->len]=0;
    __result93__ = __result_obj__ = self;
    return __result93__;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
void* __result_obj__;
long* mem_87;
int size_88;
_Bool _if_conditional74;
char* old_buf_89;
void* __exception_result_var_b91;
int old_len_90;
int new_size_91;
void* __exception_result_var_b92;
void* __exception_result_var_b93;
struct buffer* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_87, 0, sizeof(long*));
memset(&size_88, 0, sizeof(int));
memset(&old_buf_89, 0, sizeof(char*));
memset(&old_len_90, 0, sizeof(int));
memset(&new_size_91, 0, sizeof(int));
    mem_87=&value;
    size_88=sizeof(long);
    if(_if_conditional74=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 715, 879)), "libneo-c-gc.c", 715, 880))->len+size_88+1+1>=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 715, 881)), "libneo-c-gc.c", 715, 882))->size,    _if_conditional74) {
        old_buf_89=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 716, 883)), "libneo-c-gc.c", 716, 884))->size)), "libneo-c-gc.c", 716, "char");
        (come_push_stackframe("libneo-c-gc.c", 717, 889),__exception_result_var_b91=memcpy(old_buf_89,((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 717, 885)), "libneo-c-gc.c", 717, 886))->buf,((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 717, 887)), "libneo-c-gc.c", 717, 888))->size), come_pop_stackframe(), __exception_result_var_b91);
        old_len_90=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 718, 890)), "libneo-c-gc.c", 718, 891))->len;
        new_size_91=(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 719, 892)), "libneo-c-gc.c", 719, 893))->size+size_88+1)*2;
        ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 720, 894)), "libneo-c-gc.c", 720, 895))->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_91)), "libneo-c-gc.c", 720, "char");
        (come_push_stackframe("libneo-c-gc.c", 721, 898),__exception_result_var_b92=memcpy(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 721, 896)), "libneo-c-gc.c", 721, 897))->buf,old_buf_89,old_len_90), come_pop_stackframe(), __exception_result_var_b92);
        ((char*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 722, 899)), "libneo-c-gc.c", 722, 900))->buf, "libneo-c-gc.c", 722, 901))[old_len_90]=0;
        ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 723, 902)), "libneo-c-gc.c", 723, 903))->size=new_size_91;
    }
    (come_push_stackframe("libneo-c-gc.c", 726, 908),__exception_result_var_b93=memcpy(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 726, 904)), "libneo-c-gc.c", 726, 905))->buf+((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 726, 906)), "libneo-c-gc.c", 726, 907))->len,mem_87,size_88), come_pop_stackframe(), __exception_result_var_b93);
    ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 727, 909)), "libneo-c-gc.c", 727, 910))->len+=size_88;
    ((char*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 728, 911)), "libneo-c-gc.c", 728, 912))->buf, "libneo-c-gc.c", 728, 913))[((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 728, 914)), "libneo-c-gc.c", 728, 915))->len]=0;
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
void* __exception_result_var_b94;
int old_len_95;
int new_size_96;
void* __exception_result_var_b95;
void* __exception_result_var_b96;
struct buffer* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_92, 0, sizeof(short short*));
memset(&size_93, 0, sizeof(int));
memset(&old_buf_94, 0, sizeof(char*));
memset(&old_len_95, 0, sizeof(int));
memset(&new_size_96, 0, sizeof(int));
    if(_if_conditional75=self==((void*)0),    _if_conditional75) {
        __result95__ = __result_obj__ = ((void*)0);
        return __result95__;
    }
    mem_92=&value;
    size_93=sizeof(short short);
    if(_if_conditional76=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 742, 916)), "libneo-c-gc.c", 742, 917))->len+size_93+1+1>=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 742, 918)), "libneo-c-gc.c", 742, 919))->size,    _if_conditional76) {
        old_buf_94=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 743, 920)), "libneo-c-gc.c", 743, 921))->size)), "libneo-c-gc.c", 743, "char");
        (come_push_stackframe("libneo-c-gc.c", 744, 926),__exception_result_var_b94=memcpy(old_buf_94,((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 744, 922)), "libneo-c-gc.c", 744, 923))->buf,((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 744, 924)), "libneo-c-gc.c", 744, 925))->size), come_pop_stackframe(), __exception_result_var_b94);
        old_len_95=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 745, 927)), "libneo-c-gc.c", 745, 928))->len;
        new_size_96=(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 746, 929)), "libneo-c-gc.c", 746, 930))->size+size_93+1)*2;
        ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 747, 931)), "libneo-c-gc.c", 747, 932))->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_96)), "libneo-c-gc.c", 747, "char");
        (come_push_stackframe("libneo-c-gc.c", 748, 935),__exception_result_var_b95=memcpy(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 748, 933)), "libneo-c-gc.c", 748, 934))->buf,old_buf_94,old_len_95), come_pop_stackframe(), __exception_result_var_b95);
        ((char*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 749, 936)), "libneo-c-gc.c", 749, 937))->buf, "libneo-c-gc.c", 749, 938))[old_len_95]=0;
        ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 750, 939)), "libneo-c-gc.c", 750, 940))->size=new_size_96;
    }
    (come_push_stackframe("libneo-c-gc.c", 753, 945),__exception_result_var_b96=memcpy(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 753, 941)), "libneo-c-gc.c", 753, 942))->buf+((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 753, 943)), "libneo-c-gc.c", 753, 944))->len,mem_92,size_93), come_pop_stackframe(), __exception_result_var_b96);
    ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 754, 946)), "libneo-c-gc.c", 754, 947))->len+=size_93;
    ((char*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 755, 948)), "libneo-c-gc.c", 755, 949))->buf, "libneo-c-gc.c", 755, 950))[((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 755, 951)), "libneo-c-gc.c", 755, 952))->len]=0;
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
    if(_if_conditional77=self==((void*)0),    _if_conditional77) {
        __result97__ = __result_obj__ = ((void*)0);
        return __result97__;
    }
    len_97=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 766, 953)), "libneo-c-gc.c", 766, 954))->len;
    len_97=(len_97+3)&~3;
    if(_if_conditional78=len_97>=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 769, 955)), "libneo-c-gc.c", 769, 956))->size,    _if_conditional78) {
        new_size_98=(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 770, 957)), "libneo-c-gc.c", 770, 958))->size+1+1)*2;
        ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 771, 959)), "libneo-c-gc.c", 771, 960))->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_98)), "libneo-c-gc.c", 771, "char");
        ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 772, 961)), "libneo-c-gc.c", 772, 962))->size=new_size_98;
    }
    for(    i_99=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 775, 963)), "libneo-c-gc.c", 775, 964))->len;    i_99<len_97;    i_99++    ){
        ((char*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 776, 965)), "libneo-c-gc.c", 776, 966))->buf, "libneo-c-gc.c", 776, 967))[i_99]=0;
    }
    ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 779, 968)), "libneo-c-gc.c", 779, 969))->len=len_97;
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
int __exception_result_var_b97;
int __result102__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional79=left==((void*)0)&&right==((void*)0),    _if_conditional79) {
        __result99__ = 0;
        return __result99__;
    }
    else {
        if(_if_conditional80=left==((void*)0),        _if_conditional80) {
            __result100__ = -1;
            return __result100__;
        }
        else {
            if(_if_conditional81=right==((void*)0),            _if_conditional81) {
                __result101__ = 1;
                return __result101__;
            }
        }
    }
    __result102__ = (come_push_stackframe("libneo-c-gc.c", 796, 974),__exception_result_var_b97=strcmp(((struct buffer*)come_null_check(((struct buffer*)come_null_check(left, "libneo-c-gc.c", 796, 970)), "libneo-c-gc.c", 796, 971))->buf,((struct buffer*)come_null_check(((struct buffer*)come_null_check(right, "libneo-c-gc.c", 796, 972)), "libneo-c-gc.c", 796, 973))->buf), come_pop_stackframe(), __exception_result_var_b97);
    return __result102__;
}

struct buffer* string_to_buffer(char* self){
void* __result_obj__;
struct buffer* __exception_result_var_b98;
struct buffer* result_100;
_Bool _if_conditional82;
struct buffer* __result103__;
struct buffer* __exception_result_var_b99;
struct buffer* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_100, 0, sizeof(struct buffer*));
    result_100=(come_push_stackframe("libneo-c-gc.c", 801, 977),__exception_result_var_b98=buffer_initialize(((struct buffer*)come_null_check(((struct buffer*)come_null_check((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 801, "buffer"), "libneo-c-gc.c", 801, 975)), "libneo-c-gc.c", 801, 976))), come_pop_stackframe(), __exception_result_var_b98);
    if(_if_conditional82=self==((void*)0),    _if_conditional82) {
        __result103__ = __result_obj__ = result_100;
        return __result103__;
    }
    (come_push_stackframe("libneo-c-gc.c", 807, 980),__exception_result_var_b99=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_100, "libneo-c-gc.c", 807, 978)), "libneo-c-gc.c", 807, 979)),self), come_pop_stackframe(), __exception_result_var_b99);
    __result104__ = __result_obj__ = result_100;
    return __result104__;
}

struct buffer* charp_to_buffer(char* self){
void* __result_obj__;
struct buffer* __exception_result_var_b100;
struct buffer* result_101;
_Bool _if_conditional83;
struct buffer* __result105__;
struct buffer* __exception_result_var_b101;
struct buffer* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_101, 0, sizeof(struct buffer*));
    result_101=(come_push_stackframe("libneo-c-gc.c", 814, 983),__exception_result_var_b100=buffer_initialize(((struct buffer*)come_null_check(((struct buffer*)come_null_check((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 814, "buffer"), "libneo-c-gc.c", 814, 981)), "libneo-c-gc.c", 814, 982))), come_pop_stackframe(), __exception_result_var_b100);
    if(_if_conditional83=self==((void*)0),    _if_conditional83) {
        __result105__ = __result_obj__ = result_101;
        return __result105__;
    }
    (come_push_stackframe("libneo-c-gc.c", 820, 986),__exception_result_var_b101=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_101, "libneo-c-gc.c", 820, 984)), "libneo-c-gc.c", 820, 985)),self), come_pop_stackframe(), __exception_result_var_b101);
    __result106__ = __result_obj__ = result_101;
    return __result106__;
}

char* buffer_to_string(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional84;
char* __exception_result_var_b102;
char* __result107__;
char* __exception_result_var_b103;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional84=self==((void*)0),    _if_conditional84) {
        __result107__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 828, 987),__exception_result_var_b102=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b102);
        return __result107__;
    }
    __result108__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 831, 990),__exception_result_var_b103=__builtin_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c-gc.c", 831, 988)), "libneo-c-gc.c", 831, 989))->buf), come_pop_stackframe(), __exception_result_var_b103);
    return __result108__;
}

_Bool bool_equals(_Bool self, _Bool right){
void* __result_obj__;
_Bool __result109__;
memset(&__result_obj__, 0, sizeof(void*));
    __result109__ = self==right;
    return __result109__;
}

_Bool int_equals(int self, int right){
void* __result_obj__;
_Bool __result110__;
memset(&__result_obj__, 0, sizeof(void*));
    __result110__ = self==right;
    return __result110__;
}

_Bool char_equals(char self, char right){
void* __result_obj__;
_Bool __result111__;
memset(&__result_obj__, 0, sizeof(void*));
    __result111__ = self==right;
    return __result111__;
}

_Bool short_equals(short short self, short short right){
void* __result_obj__;
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
    __result112__ = self==right;
    return __result112__;
}

_Bool long_equals(long self, long right){
void* __result_obj__;
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
    __result113__ = self==right;
    return __result113__;
}

_Bool size_t_equals(unsigned long int self, unsigned long int right){
void* __result_obj__;
_Bool __result114__;
memset(&__result_obj__, 0, sizeof(void*));
    __result114__ = self==right;
    return __result114__;
}

_Bool float_equals(float self, float right){
void* __result_obj__;
_Bool __result115__;
memset(&__result_obj__, 0, sizeof(void*));
    __result115__ = self==right;
    return __result115__;
}

_Bool double_equals(double self, double right){
void* __result_obj__;
_Bool __result116__;
memset(&__result_obj__, 0, sizeof(void*));
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
int __exception_result_var_b104;
_Bool __result120__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional85=self==((void*)0)&&right==((void*)0),    _if_conditional85) {
        __result117__ = (_Bool)1;
        return __result117__;
    }
    else {
        if(_if_conditional86=self==((void*)0),        _if_conditional86) {
            __result118__ = (_Bool)0;
            return __result118__;
        }
        else {
            if(_if_conditional87=right==((void*)0),            _if_conditional87) {
                __result119__ = (_Bool)0;
                return __result119__;
            }
        }
    }
    __result120__ = (come_push_stackframe("libneo-c-gc.c", 889, 991),__exception_result_var_b104=strcmp(self,right), come_pop_stackframe(), __exception_result_var_b104)==0;
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
int __exception_result_var_b105;
_Bool __result124__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional88=self==((void*)0)&&right==((void*)0),    _if_conditional88) {
        __result121__ = (_Bool)1;
        return __result121__;
    }
    else {
        if(_if_conditional89=self==((void*)0),        _if_conditional89) {
            __result122__ = (_Bool)0;
            return __result122__;
        }
        else {
            if(_if_conditional90=right==((void*)0),            _if_conditional90) {
                __result123__ = (_Bool)0;
                return __result123__;
            }
        }
    }
    __result124__ = (come_push_stackframe("libneo-c-gc.c", 904, 992),__exception_result_var_b105=strcmp(self,right), come_pop_stackframe(), __exception_result_var_b105)==0;
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
int __exception_result_var_b106;
_Bool __result128__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional91=self==((void*)0)&&right==((void*)0),    _if_conditional91) {
        __result125__ = (_Bool)1;
        return __result125__;
    }
    else {
        if(_if_conditional92=self==((void*)0),        _if_conditional92) {
            __result126__ = (_Bool)0;
            return __result126__;
        }
        else {
            if(_if_conditional93=right==((void*)0),            _if_conditional93) {
                __result127__ = (_Bool)0;
                return __result127__;
            }
        }
    }
    __result128__ = (come_push_stackframe("libneo-c-gc.c", 919, 993),__exception_result_var_b106=strcmp(self,right), come_pop_stackframe(), __exception_result_var_b106)==0;
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
int __exception_result_var_b107;
_Bool __result132__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional94=self==((void*)0)&&right==((void*)0),    _if_conditional94) {
        __result129__ = (_Bool)1;
        return __result129__;
    }
    else {
        if(_if_conditional95=self==((void*)0),        _if_conditional95) {
            __result130__ = (_Bool)0;
            return __result130__;
        }
        else {
            if(_if_conditional96=right==((void*)0),            _if_conditional96) {
                __result131__ = (_Bool)0;
                return __result131__;
            }
        }
    }
    __result132__ = (come_push_stackframe("libneo-c-gc.c", 934, 994),__exception_result_var_b107=strcmp(self,right), come_pop_stackframe(), __exception_result_var_b107)==0;
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
int __exception_result_var_b108;
_Bool __result136__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional97=self==((void*)0)&&right==((void*)0),    _if_conditional97) {
        __result133__ = (_Bool)0;
        return __result133__;
    }
    else {
        if(_if_conditional98=self==((void*)0),        _if_conditional98) {
            __result134__ = (_Bool)1;
            return __result134__;
        }
        else {
            if(_if_conditional99=right==((void*)0),            _if_conditional99) {
                __result135__ = (_Bool)1;
                return __result135__;
            }
        }
    }
    __result136__ = (come_push_stackframe("libneo-c-gc.c", 949, 995),__exception_result_var_b108=strcmp(self,right), come_pop_stackframe(), __exception_result_var_b108)!=0;
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
int __exception_result_var_b109;
_Bool __result140__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional100=self==((void*)0)&&right==((void*)0),    _if_conditional100) {
        __result137__ = (_Bool)0;
        return __result137__;
    }
    else {
        if(_if_conditional101=self==((void*)0),        _if_conditional101) {
            __result138__ = (_Bool)1;
            return __result138__;
        }
        else {
            if(_if_conditional102=right==((void*)0),            _if_conditional102) {
                __result139__ = (_Bool)1;
                return __result139__;
            }
        }
    }
    __result140__ = (come_push_stackframe("libneo-c-gc.c", 964, 996),__exception_result_var_b109=strcmp(self,right), come_pop_stackframe(), __exception_result_var_b109)!=0;
    return __result140__;
}

char* charp_operator_add(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional103;
char* __exception_result_var_b110;
char* __result141__;
unsigned long int __exception_result_var_b111;
unsigned long int __exception_result_var_b112;
int len_102;
char* result_103;
char* __exception_result_var_b113;
char* __exception_result_var_b114;
char* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_102, 0, sizeof(int));
memset(&result_103, 0, sizeof(char*));
    if(_if_conditional103=self==((void*)0)||right==((void*)0),    _if_conditional103) {
        __result141__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 971, 997),__exception_result_var_b110=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b110);
        return __result141__;
    }
    len_102=(come_push_stackframe("libneo-c-gc.c", 973, 998),__exception_result_var_b111=strlen(self), come_pop_stackframe(), __exception_result_var_b111)+(come_push_stackframe("libneo-c-gc.c", 973, 999),__exception_result_var_b112=strlen(right), come_pop_stackframe(), __exception_result_var_b112);
    result_103=(char*)come_calloc(1, sizeof(char)*(1*(len_102+1)), "libneo-c-gc.c", 975, "char");
    (come_push_stackframe("libneo-c-gc.c", 977, 1000),__exception_result_var_b113=strncpy(result_103,self,len_102+1), come_pop_stackframe(), __exception_result_var_b113);
    (come_push_stackframe("libneo-c-gc.c", 978, 1001),__exception_result_var_b114=strncat(result_103,right,len_102+1), come_pop_stackframe(), __exception_result_var_b114);
    __result142__ = __result_obj__ = result_103;
    return __result142__;
}

char* string_operator_add(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional104;
char* __exception_result_var_b115;
char* __result143__;
unsigned long int __exception_result_var_b116;
unsigned long int __exception_result_var_b117;
int len_104;
char* result_105;
char* __exception_result_var_b118;
char* __exception_result_var_b119;
char* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_104, 0, sizeof(int));
memset(&result_105, 0, sizeof(char*));
    if(_if_conditional104=self==((void*)0)||right==((void*)0),    _if_conditional104) {
        __result143__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 986, 1002),__exception_result_var_b115=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b115);
        return __result143__;
    }
    len_104=(come_push_stackframe("libneo-c-gc.c", 988, 1003),__exception_result_var_b116=strlen(self), come_pop_stackframe(), __exception_result_var_b116)+(come_push_stackframe("libneo-c-gc.c", 988, 1004),__exception_result_var_b117=strlen(right), come_pop_stackframe(), __exception_result_var_b117);
    result_105=(char*)come_calloc(1, sizeof(char)*(1*(len_104+1)), "libneo-c-gc.c", 990, "char");
    (come_push_stackframe("libneo-c-gc.c", 992, 1005),__exception_result_var_b118=strncpy(result_105,self,len_104+1), come_pop_stackframe(), __exception_result_var_b118);
    (come_push_stackframe("libneo-c-gc.c", 993, 1006),__exception_result_var_b119=strncat(result_105,right,len_104+1), come_pop_stackframe(), __exception_result_var_b119);
    __result144__ = __result_obj__ = result_105;
    return __result144__;
}

char* charp_operator_mult(char* self, int right){
void* __result_obj__;
_Bool _if_conditional105;
char* __exception_result_var_b120;
char* __result145__;
struct buffer* __exception_result_var_b121;
struct buffer* buf_106;
int i_107;
struct buffer* __exception_result_var_b122;
char* __exception_result_var_b123;
char* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&buf_106, 0, sizeof(struct buffer*));
memset(&i_107, 0, sizeof(int));
    if(_if_conditional105=self==((void*)0),    _if_conditional105) {
        __result145__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1001, 1007),__exception_result_var_b120=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b120);
        return __result145__;
    }
    buf_106=(come_push_stackframe("libneo-c-gc.c", 1003, 1009),__exception_result_var_b121=buffer_initialize(((struct buffer*)come_null_check((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 1003, "buffer"), "libneo-c-gc.c", 1003, 1008))), come_pop_stackframe(), __exception_result_var_b121);
    for(    i_107=0;    i_107<right;    i_107++    ){
        (come_push_stackframe("libneo-c-gc.c", 1006, 1012),__exception_result_var_b122=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_106, "libneo-c-gc.c", 1006, 1010)), "libneo-c-gc.c", 1006, 1011)),self), come_pop_stackframe(), __exception_result_var_b122);
    }
    __result146__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1009, 1015),__exception_result_var_b123=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_106, "libneo-c-gc.c", 1009, 1013)), "libneo-c-gc.c", 1009, 1014))), come_pop_stackframe(), __exception_result_var_b123);
    return __result146__;
}

char* string_operator_mult(char* self, int right){
void* __result_obj__;
_Bool _if_conditional106;
char* __exception_result_var_b124;
char* __result147__;
struct buffer* __exception_result_var_b125;
struct buffer* buf_108;
int i_109;
struct buffer* __exception_result_var_b126;
char* __exception_result_var_b127;
char* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&buf_108, 0, sizeof(struct buffer*));
memset(&i_109, 0, sizeof(int));
    if(_if_conditional106=self==((void*)0),    _if_conditional106) {
        __result147__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1015, 1016),__exception_result_var_b124=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b124);
        return __result147__;
    }
    buf_108=(come_push_stackframe("libneo-c-gc.c", 1017, 1018),__exception_result_var_b125=buffer_initialize(((struct buffer*)come_null_check((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 1017, "buffer"), "libneo-c-gc.c", 1017, 1017))), come_pop_stackframe(), __exception_result_var_b125);
    for(    i_109=0;    i_109<right;    i_109++    ){
        (come_push_stackframe("libneo-c-gc.c", 1020, 1021),__exception_result_var_b126=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_108, "libneo-c-gc.c", 1020, 1019)), "libneo-c-gc.c", 1020, 1020)),self), come_pop_stackframe(), __exception_result_var_b126);
    }
    __result148__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1023, 1024),__exception_result_var_b127=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_108, "libneo-c-gc.c", 1023, 1022)), "libneo-c-gc.c", 1023, 1023))), come_pop_stackframe(), __exception_result_var_b127);
    return __result148__;
}

unsigned int bool_get_hash_key(_Bool value){
void* __result_obj__;
unsigned int __exception_result_var_b128;
unsigned int __result149__;
memset(&__result_obj__, 0, sizeof(void*));
    __result149__ = ((come_push_stackframe("libneo-c-gc.c", 1031, 1025),__exception_result_var_b128=int_get_hash_key(((int)value)), come_pop_stackframe(), __exception_result_var_b128));
    return __result149__;
}

unsigned int char_get_hash_key(char value){
void* __result_obj__;
unsigned int __result150__;
memset(&__result_obj__, 0, sizeof(void*));
    __result150__ = value;
    return __result150__;
}

unsigned int short_get_hash_key(short int value){
void* __result_obj__;
unsigned int __result151__;
memset(&__result_obj__, 0, sizeof(void*));
    __result151__ = value;
    return __result151__;
}

unsigned int int_get_hash_key(int value){
void* __result_obj__;
unsigned int __result152__;
memset(&__result_obj__, 0, sizeof(void*));
    __result152__ = value;
    return __result152__;
}

unsigned int long_get_hash_key(long value){
void* __result_obj__;
unsigned int __result153__;
memset(&__result_obj__, 0, sizeof(void*));
    __result153__ = value;
    return __result153__;
}

unsigned int size_t_get_hash_key(unsigned long int value){
void* __result_obj__;
unsigned int __result154__;
memset(&__result_obj__, 0, sizeof(void*));
    __result154__ = value;
    return __result154__;
}

unsigned int float_get_hash_key(float value){
void* __result_obj__;
unsigned int __result155__;
memset(&__result_obj__, 0, sizeof(void*));
    __result155__ = (unsigned int)value;
    return __result155__;
}

unsigned int double_get_hash_key(double value){
void* __result_obj__;
unsigned int __result156__;
memset(&__result_obj__, 0, sizeof(void*));
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
    if(_if_conditional107=value==((void*)0),    _if_conditional107) {
        __result157__ = 0;
        return __result157__;
    }
    result_110=0;
    p_111=value;
    while(_while_condtional1=*((char*)come_null_check(p_111, "libneo-c-gc.c", 1076, 1026)),    _while_condtional1) {
        result_110+=(*((char*)come_null_check(p_111, "libneo-c-gc.c", 1077, 1027)));
        p_111++;
    }
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
    if(_if_conditional108=value==((void*)0),    _if_conditional108) {
        __result159__ = 0;
        return __result159__;
    }
    result_112=0;
    p_113=value;
    while(_while_condtional2=*((char*)come_null_check(p_113, "libneo-c-gc.c", 1090, 1028)),    _while_condtional2) {
        result_112+=(*((char*)come_null_check(p_113, "libneo-c-gc.c", 1091, 1029)));
        p_113++;
    }
    __result160__ = result_112;
    return __result160__;
}

_Bool bool_clone(_Bool self){
void* __result_obj__;
_Bool __result161__;
memset(&__result_obj__, 0, sizeof(void*));
    __result161__ = self;
    return __result161__;
}

char char_clone(char self){
void* __result_obj__;
char __result162__;
memset(&__result_obj__, 0, sizeof(void*));
    __result162__ = self;
    return __result162__;
}

short int short_clone(short short self){
void* __result_obj__;
short int __result163__;
memset(&__result_obj__, 0, sizeof(void*));
    __result163__ = self;
    return __result163__;
}

int int_clone(int self){
void* __result_obj__;
int __result164__;
memset(&__result_obj__, 0, sizeof(void*));
    __result164__ = self;
    return __result164__;
}

long int long_clone(long self){
void* __result_obj__;
long int __result165__;
memset(&__result_obj__, 0, sizeof(void*));
    __result165__ = self;
    return __result165__;
}

unsigned long int size_t_clone(unsigned long int self){
void* __result_obj__;
unsigned long int __result166__;
memset(&__result_obj__, 0, sizeof(void*));
    __result166__ = self;
    return __result166__;
}

double double_clone(double self){
void* __result_obj__;
double __result167__;
memset(&__result_obj__, 0, sizeof(void*));
    __result167__ = self;
    return __result167__;
}

float float_clone(float self){
void* __result_obj__;
float __result168__;
memset(&__result_obj__, 0, sizeof(void*));
    __result168__ = self;
    return __result168__;
}

char* charp_clone(char* self){
void* __result_obj__;
_Bool _if_conditional109;
char* __result169__;
char* __exception_result_var_b129;
char* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional109=self==((void*)0),    _if_conditional109) {
        __result169__ = __result_obj__ = ((void*)0);
        return __result169__;
    }
    __result170__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1143, 1030),__exception_result_var_b129=__builtin_string(self), come_pop_stackframe(), __exception_result_var_b129);
    return __result170__;
}

char* string_clone(char* self){
void* __result_obj__;
_Bool _if_conditional110;
char* __result171__;
char* __exception_result_var_b130;
char* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional110=self==((void*)0),    _if_conditional110) {
        __result171__ = __result_obj__ = ((void*)0);
        return __result171__;
    }
    __result172__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1150, 1031),__exception_result_var_b130=__builtin_string(self), come_pop_stackframe(), __exception_result_var_b130);
    return __result172__;
}

_Bool xiswalpha(unsigned int c){
void* __result_obj__;
_Bool result_114;
_Bool __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_114, 0, sizeof(_Bool));
    result_114=(c>=97&&c<=122)||(c>=65&&c<=90);
    __result173__ = result_114;
    return __result173__;
}

_Bool xiswblank(unsigned int c){
void* __result_obj__;
_Bool __result174__;
memset(&__result_obj__, 0, sizeof(void*));
    __result174__ = c==32||c==9;
    return __result174__;
}

_Bool xiswdigit(unsigned int c){
void* __result_obj__;
_Bool __result175__;
memset(&__result_obj__, 0, sizeof(void*));
    __result175__ = (c>=48&&c<=57);
    return __result175__;
}

_Bool xiswalnum(unsigned int c){
void* __result_obj__;
_Bool __exception_result_var_b131;
_Bool __exception_result_var_b132;
_Bool __result176__;
memset(&__result_obj__, 0, sizeof(void*));
    __result176__ = (come_push_stackframe("libneo-c-gc.c", 1174, 1032),__exception_result_var_b131=xiswalpha(c), come_pop_stackframe(), __exception_result_var_b131)||(come_push_stackframe("libneo-c-gc.c", 1174, 1033),__exception_result_var_b132=xiswdigit(c), come_pop_stackframe(), __exception_result_var_b132);
    return __result176__;
}

_Bool xisalpha(char c){
void* __result_obj__;
_Bool result_115;
_Bool __result177__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_115, 0, sizeof(_Bool));
    result_115=(c>=97&&c<=122)||(c>=65&&c<=90);
    __result177__ = result_115;
    return __result177__;
}

_Bool xisblank(char c){
void* __result_obj__;
_Bool __result178__;
memset(&__result_obj__, 0, sizeof(void*));
    __result178__ = c==32||c==9;
    return __result178__;
}

_Bool xisdigit(char c){
void* __result_obj__;
_Bool __result179__;
memset(&__result_obj__, 0, sizeof(void*));
    __result179__ = (c>=48&&c<=57);
    return __result179__;
}

_Bool xisalnum(char c){
void* __result_obj__;
_Bool __exception_result_var_b133;
_Bool __exception_result_var_b134;
_Bool __result180__;
memset(&__result_obj__, 0, sizeof(void*));
    __result180__ = (come_push_stackframe("libneo-c-gc.c", 1195, 1034),__exception_result_var_b133=xisalpha(c), come_pop_stackframe(), __exception_result_var_b133)||(come_push_stackframe("libneo-c-gc.c", 1195, 1035),__exception_result_var_b134=xisdigit(c), come_pop_stackframe(), __exception_result_var_b134);
    return __result180__;
}

_Bool xisascii(char c){
void* __result_obj__;
_Bool result_116;
_Bool __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_116, 0, sizeof(_Bool));
    result_116=(c>=32&&c<=126);
    __result181__ = result_116;
    return __result181__;
}

_Bool xiswascii(unsigned int c){
void* __result_obj__;
_Bool result_117;
_Bool __result182__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_117, 0, sizeof(_Bool));
    result_117=(c>=32&&c<=126);
    __result182__ = result_117;
    return __result182__;
}

int string_length(char* str){
void* __result_obj__;
_Bool _if_conditional111;
int __result183__;
unsigned long int __exception_result_var_b135;
int __result184__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional111=str==((void*)0),    _if_conditional111) {
        __result183__ = 0;
        return __result183__;
    }
    __result184__ = (come_push_stackframe("libneo-c-gc.c", 1218, 1036),__exception_result_var_b135=strlen(str), come_pop_stackframe(), __exception_result_var_b135);
    return __result184__;
}

int charp_length(char* str){
void* __result_obj__;
_Bool _if_conditional112;
int __result185__;
unsigned long int __exception_result_var_b136;
int __result186__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional112=str==((void*)0),    _if_conditional112) {
        __result185__ = 0;
        return __result185__;
    }
    __result186__ = (come_push_stackframe("libneo-c-gc.c", 1225, 1037),__exception_result_var_b136=strlen(str), come_pop_stackframe(), __exception_result_var_b136);
    return __result186__;
}

char* string_reverse(char* str){
void* __result_obj__;
_Bool _if_conditional113;
char* __exception_result_var_b137;
char* __result187__;
unsigned long int __exception_result_var_b138;
int len_118;
char* result_119;
int i_120;
char* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_118, 0, sizeof(int));
memset(&result_119, 0, sizeof(char*));
memset(&i_120, 0, sizeof(int));
    if(_if_conditional113=str==((void*)0),    _if_conditional113) {
        __result187__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1231, 1038),__exception_result_var_b137=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b137);
        return __result187__;
    }
    len_118=(come_push_stackframe("libneo-c-gc.c", 1233, 1039),__exception_result_var_b138=strlen(str), come_pop_stackframe(), __exception_result_var_b138);
    result_119=(char*)come_calloc(1, sizeof(char)*(1*(len_118+1)), "libneo-c-gc.c", 1234, "char");
    for(    i_120=0;    i_120<len_118;    i_120++    ){
        ((char*)come_null_check(result_119, "libneo-c-gc.c", 1237, 1040))[i_120]=((char*)come_null_check(str, "libneo-c-gc.c", 1237, 1041))[len_118-i_120-1];
    }
    ((char*)come_null_check(result_119, "libneo-c-gc.c", 1240, 1042))[len_118]=0;
    __result188__ = __result_obj__ = result_119;
    return __result188__;
}

char* charp_reverse(char* str){
void* __result_obj__;
_Bool _if_conditional114;
char* __exception_result_var_b139;
char* __result189__;
unsigned long int __exception_result_var_b140;
int len_121;
char* result_122;
int i_123;
char* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_121, 0, sizeof(int));
memset(&result_122, 0, sizeof(char*));
memset(&i_123, 0, sizeof(int));
    if(_if_conditional114=str==((void*)0),    _if_conditional114) {
        __result189__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1248, 1043),__exception_result_var_b139=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b139);
        return __result189__;
    }
    len_121=(come_push_stackframe("libneo-c-gc.c", 1250, 1044),__exception_result_var_b140=strlen(str), come_pop_stackframe(), __exception_result_var_b140);
    result_122=(char*)come_calloc(1, sizeof(char)*(1*(len_121+1)), "libneo-c-gc.c", 1251, "char");
    for(    i_123=0;    i_123<len_121;    i_123++    ){
        ((char*)come_null_check(result_122, "libneo-c-gc.c", 1254, 1045))[i_123]=((char*)come_null_check(str, "libneo-c-gc.c", 1254, 1046))[len_121-i_123-1];
    }
    ((char*)come_null_check(result_122, "libneo-c-gc.c", 1257, 1047))[len_121]=0;
    __result190__ = __result_obj__ = result_122;
    return __result190__;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional115;
char* __exception_result_var_b141;
char* __result191__;
unsigned long int __exception_result_var_b142;
int len_124;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
char* __exception_result_var_b143;
char* __exception_result_var_b144;
char* __result192__;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
char* __exception_result_var_b145;
char* __result193__;
_Bool _if_conditional122;
char* __exception_result_var_b146;
char* __result194__;
char* result_125;
void* __exception_result_var_b147;
char* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_124, 0, sizeof(int));
memset(&result_125, 0, sizeof(char*));
    if(_if_conditional115=str==((void*)0),    _if_conditional115) {
        __result191__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1264, 1048),__exception_result_var_b141=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b141);
        return __result191__;
    }
    len_124=(come_push_stackframe("libneo-c-gc.c", 1267, 1049),__exception_result_var_b142=strlen(str), come_pop_stackframe(), __exception_result_var_b142);
    if(_if_conditional116=head<0,    _if_conditional116) {
        head+=len_124;
    }
    if(_if_conditional117=tail<0,    _if_conditional117) {
        tail+=len_124+1;
    }
    if(_if_conditional118=head>tail,    _if_conditional118) {
        __result192__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1277, 1055),__exception_result_var_b144=string_reverse(((char*)come_null_check(((char*)come_null_check((come_push_stackframe("libneo-c-gc.c", 1277, 1052),__exception_result_var_b143=charp_substring(((char*)come_null_check(((char*)come_null_check(str, "libneo-c-gc.c", 1277, 1050)), "libneo-c-gc.c", 1277, 1051)),tail,head), come_pop_stackframe(), __exception_result_var_b143), "libneo-c-gc.c", 1277, 1053)), "libneo-c-gc.c", 1277, 1054))), come_pop_stackframe(), __exception_result_var_b144);
        return __result192__;
    }
    if(_if_conditional119=head<0,    _if_conditional119) {
        head=0;
    }
    if(_if_conditional120=tail>=len_124,    _if_conditional120) {
        tail=len_124;
    }
    if(_if_conditional121=head==tail,    _if_conditional121) {
        __result193__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1289, 1056),__exception_result_var_b145=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b145);
        return __result193__;
    }
    if(_if_conditional122=tail-head+1<1,    _if_conditional122) {
        __result194__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1293, 1057),__exception_result_var_b146=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b146);
        return __result194__;
    }
    result_125=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libneo-c-gc.c", 1296, "char");
    (come_push_stackframe("libneo-c-gc.c", 1298, 1058),__exception_result_var_b147=memcpy(result_125,str+head,tail-head), come_pop_stackframe(), __exception_result_var_b147);
    ((char*)come_null_check(result_125, "libneo-c-gc.c", 1299, 1059))[tail-head]=0;
    __result195__ = __result_obj__ = result_125;
    return __result195__;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional123;
char* __exception_result_var_b148;
char* __result196__;
unsigned long int __exception_result_var_b149;
int len_126;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
char* __exception_result_var_b150;
char* __exception_result_var_b151;
char* __result197__;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
char* __exception_result_var_b152;
char* __result198__;
_Bool _if_conditional130;
char* __exception_result_var_b153;
char* __result199__;
char* result_127;
void* __exception_result_var_b154;
char* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_126, 0, sizeof(int));
memset(&result_127, 0, sizeof(char*));
    if(_if_conditional123=str==((void*)0),    _if_conditional123) {
        __result196__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1307, 1060),__exception_result_var_b148=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b148);
        return __result196__;
    }
    len_126=(come_push_stackframe("libneo-c-gc.c", 1310, 1061),__exception_result_var_b149=strlen(str), come_pop_stackframe(), __exception_result_var_b149);
    if(_if_conditional124=head<0,    _if_conditional124) {
        head+=len_126;
    }
    if(_if_conditional125=tail<0,    _if_conditional125) {
        tail+=len_126+1;
    }
    if(_if_conditional126=head>tail,    _if_conditional126) {
        __result197__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1320, 1067),__exception_result_var_b151=string_reverse(((char*)come_null_check(((char*)come_null_check((come_push_stackframe("libneo-c-gc.c", 1320, 1064),__exception_result_var_b150=charp_substring(((char*)come_null_check(((char*)come_null_check(str, "libneo-c-gc.c", 1320, 1062)), "libneo-c-gc.c", 1320, 1063)),tail,head), come_pop_stackframe(), __exception_result_var_b150), "libneo-c-gc.c", 1320, 1065)), "libneo-c-gc.c", 1320, 1066))), come_pop_stackframe(), __exception_result_var_b151);
        return __result197__;
    }
    if(_if_conditional127=head<0,    _if_conditional127) {
        head=0;
    }
    if(_if_conditional128=tail>=len_126,    _if_conditional128) {
        tail=len_126;
    }
    if(_if_conditional129=head==tail,    _if_conditional129) {
        __result198__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1332, 1068),__exception_result_var_b152=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b152);
        return __result198__;
    }
    if(_if_conditional130=tail-head+1<1,    _if_conditional130) {
        __result199__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1336, 1069),__exception_result_var_b153=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b153);
        return __result199__;
    }
    result_127=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libneo-c-gc.c", 1339, "char");
    (come_push_stackframe("libneo-c-gc.c", 1341, 1070),__exception_result_var_b154=memcpy(result_127,str+head,tail-head), come_pop_stackframe(), __exception_result_var_b154);
    ((char*)come_null_check(result_127, "libneo-c-gc.c", 1342, 1071))[tail-head]=0;
    __result200__ = __result_obj__ = result_127;
    return __result200__;
}

char* charp_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional131;
char* __exception_result_var_b155;
char* __result201__;
unsigned long int __exception_result_var_b156;
int len_128;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
char* __exception_result_var_b157;
char* __exception_result_var_b158;
char* __result202__;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional137;
char* __exception_result_var_b159;
char* __result203__;
_Bool _if_conditional138;
char* __exception_result_var_b160;
char* __result204__;
char* result_129;
void* __exception_result_var_b161;
char* __result205__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_128, 0, sizeof(int));
memset(&result_129, 0, sizeof(char*));
    if(_if_conditional131=str==((void*)0),    _if_conditional131) {
        __result201__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1350, 1072),__exception_result_var_b155=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b155);
        return __result201__;
    }
    len_128=(come_push_stackframe("libneo-c-gc.c", 1353, 1073),__exception_result_var_b156=strlen(str), come_pop_stackframe(), __exception_result_var_b156);
    if(_if_conditional132=head<0,    _if_conditional132) {
        head+=len_128;
    }
    if(_if_conditional133=tail<0,    _if_conditional133) {
        tail+=len_128+1;
    }
    if(_if_conditional134=head>tail,    _if_conditional134) {
        __result202__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1363, 1079),__exception_result_var_b158=string_reverse(((char*)come_null_check(((char*)come_null_check((come_push_stackframe("libneo-c-gc.c", 1363, 1076),__exception_result_var_b157=charp_substring(((char*)come_null_check(((char*)come_null_check(str, "libneo-c-gc.c", 1363, 1074)), "libneo-c-gc.c", 1363, 1075)),tail,head), come_pop_stackframe(), __exception_result_var_b157), "libneo-c-gc.c", 1363, 1077)), "libneo-c-gc.c", 1363, 1078))), come_pop_stackframe(), __exception_result_var_b158);
        return __result202__;
    }
    if(_if_conditional135=head<0,    _if_conditional135) {
        head=0;
    }
    if(_if_conditional136=tail>=len_128,    _if_conditional136) {
        tail=len_128;
    }
    if(_if_conditional137=head==tail,    _if_conditional137) {
        __result203__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1375, 1080),__exception_result_var_b159=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b159);
        return __result203__;
    }
    if(_if_conditional138=tail-head+1<1,    _if_conditional138) {
        __result204__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1379, 1081),__exception_result_var_b160=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b160);
        return __result204__;
    }
    result_129=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libneo-c-gc.c", 1382, "char");
    (come_push_stackframe("libneo-c-gc.c", 1384, 1082),__exception_result_var_b161=memcpy(result_129,str+head,tail-head), come_pop_stackframe(), __exception_result_var_b161);
    ((char*)come_null_check(result_129, "libneo-c-gc.c", 1385, 1083))[tail-head]=0;
    __result205__ = __result_obj__ = result_129;
    return __result205__;
}

char* string_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional139;
char* __exception_result_var_b162;
char* __result206__;
unsigned long int __exception_result_var_b163;
int len_130;
_Bool _if_conditional140;
_Bool _if_conditional141;
_Bool _if_conditional142;
char* __exception_result_var_b164;
char* __exception_result_var_b165;
char* __result207__;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
char* __exception_result_var_b166;
char* __result208__;
_Bool _if_conditional146;
char* __exception_result_var_b167;
char* __result209__;
char* result_131;
void* __exception_result_var_b168;
char* __result210__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_130, 0, sizeof(int));
memset(&result_131, 0, sizeof(char*));
    if(_if_conditional139=str==((void*)0),    _if_conditional139) {
        __result206__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1393, 1084),__exception_result_var_b162=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b162);
        return __result206__;
    }
    len_130=(come_push_stackframe("libneo-c-gc.c", 1396, 1085),__exception_result_var_b163=strlen(str), come_pop_stackframe(), __exception_result_var_b163);
    if(_if_conditional140=head<0,    _if_conditional140) {
        head+=len_130;
    }
    if(_if_conditional141=tail<0,    _if_conditional141) {
        tail+=len_130+1;
    }
    if(_if_conditional142=head>tail,    _if_conditional142) {
        __result207__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1406, 1091),__exception_result_var_b165=string_reverse(((char*)come_null_check(((char*)come_null_check((come_push_stackframe("libneo-c-gc.c", 1406, 1088),__exception_result_var_b164=charp_substring(((char*)come_null_check(((char*)come_null_check(str, "libneo-c-gc.c", 1406, 1086)), "libneo-c-gc.c", 1406, 1087)),tail,head), come_pop_stackframe(), __exception_result_var_b164), "libneo-c-gc.c", 1406, 1089)), "libneo-c-gc.c", 1406, 1090))), come_pop_stackframe(), __exception_result_var_b165);
        return __result207__;
    }
    if(_if_conditional143=head<0,    _if_conditional143) {
        head=0;
    }
    if(_if_conditional144=tail>=len_130,    _if_conditional144) {
        tail=len_130;
    }
    if(_if_conditional145=head==tail,    _if_conditional145) {
        __result208__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1418, 1092),__exception_result_var_b166=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b166);
        return __result208__;
    }
    if(_if_conditional146=tail-head+1<1,    _if_conditional146) {
        __result209__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1422, 1093),__exception_result_var_b167=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b167);
        return __result209__;
    }
    result_131=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libneo-c-gc.c", 1425, "char");
    (come_push_stackframe("libneo-c-gc.c", 1427, 1094),__exception_result_var_b168=memcpy(result_131,str+head,tail-head), come_pop_stackframe(), __exception_result_var_b168);
    ((char*)come_null_check(result_131, "libneo-c-gc.c", 1428, 1095))[tail-head]=0;
    __result210__ = __result_obj__ = result_131;
    return __result210__;
}

char* xsprintf(char* msg, ...){
void* __result_obj__;
_Bool _if_conditional147;
char* __exception_result_var_b169;
char* __result211__;
va_list args_132;
char* result_133;
int __exception_result_var_b170;
int len_134;
_Bool _if_conditional148;
char* __exception_result_var_b171;
char* __result212__;
char* __exception_result_var_b172;
char* result2_135;
char* __result213__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&args_132, 0, sizeof(va_list));
memset(&result_133, 0, sizeof(char*));
memset(&len_134, 0, sizeof(int));
memset(&result2_135, 0, sizeof(char*));
    if(_if_conditional147=msg==((void*)0),    _if_conditional147) {
        __result211__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1436, 1096),__exception_result_var_b169=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b169);
        return __result211__;
    }
    (come_push_stackframe("libneo-c-gc.c", 1439,1097),__builtin_va_start(args_132,msg),come_pop_stackframe());
    len_134=(come_push_stackframe("libneo-c-gc.c", 1441, 1098),__exception_result_var_b170=vasprintf(&result_133,msg,args_132), come_pop_stackframe(), __exception_result_var_b170);
    (come_push_stackframe("libneo-c-gc.c", 1442,1099),__builtin_va_end(args_132),come_pop_stackframe());
    if(_if_conditional148=len_134<0,    _if_conditional148) {
        __result212__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1445, 1100),__exception_result_var_b171=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b171);
        return __result212__;
    }
    result2_135=(come_push_stackframe("libneo-c-gc.c", 1448, 1101),__exception_result_var_b172=__builtin_string(result_133), come_pop_stackframe(), __exception_result_var_b172);
    (come_push_stackframe("libneo-c-gc.c", 1450,1102),free(result_133),come_pop_stackframe());
    __result213__ = __result_obj__ = result2_135;
    return __result213__;
}

char* charp_delete(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional149;
char* __exception_result_var_b173;
char* __result214__;
unsigned long int __exception_result_var_b174;
int len_136;
int __exception_result_var_b175;
_Bool _if_conditional150;
char* __exception_result_var_b176;
char* __result215__;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
_Bool _if_conditional154;
char* __exception_result_var_b177;
char* __result216__;
_Bool _if_conditional155;
char* __exception_result_var_b178;
char* sub_str_137;
int __exception_result_var_b179;
void* __exception_result_var_b180;
char* __exception_result_var_b181;
char* __result217__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_136, 0, sizeof(int));
memset(&sub_str_137, 0, sizeof(char*));
    if(_if_conditional149=str==((void*)0),    _if_conditional149) {
        __result214__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1458, 1103),__exception_result_var_b173=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b173);
        return __result214__;
    }
    len_136=(come_push_stackframe("libneo-c-gc.c", 1461, 1104),__exception_result_var_b174=strlen(str), come_pop_stackframe(), __exception_result_var_b174);
    if(_if_conditional150=(come_push_stackframe("libneo-c-gc.c", 1463, 1105),__exception_result_var_b175=strcmp(str,""), come_pop_stackframe(), __exception_result_var_b175)==0,    _if_conditional150) {
        __result215__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1464, 1106),__exception_result_var_b176=__builtin_string(str), come_pop_stackframe(), __exception_result_var_b176);
        return __result215__;
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
        __result216__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1480, 1107),__exception_result_var_b177=__builtin_string(str), come_pop_stackframe(), __exception_result_var_b177);
        return __result216__;
    }
    if(_if_conditional155=tail>=len_136,    _if_conditional155) {
        tail=len_136;
    }
    sub_str_137=(come_push_stackframe("libneo-c-gc.c", 1487, 1110),__exception_result_var_b178=charp_substring(((char*)come_null_check(((char*)come_null_check(str, "libneo-c-gc.c", 1487, 1108)), "libneo-c-gc.c", 1487, 1109)),tail,-1), come_pop_stackframe(), __exception_result_var_b178);
    (come_push_stackframe("libneo-c-gc.c", 1489, 1114),__exception_result_var_b180=memcpy(str+head,sub_str_137,(come_push_stackframe("libneo-c-gc.c", 1489, 1113),__exception_result_var_b179=string_length(((char*)come_null_check(((char*)come_null_check(sub_str_137, "libneo-c-gc.c", 1489, 1111)), "libneo-c-gc.c", 1489, 1112))), come_pop_stackframe(), __exception_result_var_b179)+1), come_pop_stackframe(), __exception_result_var_b180);
    __result217__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1491, 1115),__exception_result_var_b181=__builtin_string(str), come_pop_stackframe(), __exception_result_var_b181);
    return __result217__;
}

char* string_delete(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional156;
char* __exception_result_var_b182;
char* __result218__;
unsigned long int __exception_result_var_b183;
int len_138;
int __exception_result_var_b184;
_Bool _if_conditional157;
char* __exception_result_var_b185;
char* __result219__;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool _if_conditional161;
char* __exception_result_var_b186;
char* __result220__;
_Bool _if_conditional162;
char* __exception_result_var_b187;
char* sub_str_139;
int __exception_result_var_b188;
void* __exception_result_var_b189;
char* __exception_result_var_b190;
char* __result221__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_138, 0, sizeof(int));
memset(&sub_str_139, 0, sizeof(char*));
    if(_if_conditional156=str==((void*)0),    _if_conditional156) {
        __result218__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1497, 1116),__exception_result_var_b182=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b182);
        return __result218__;
    }
    len_138=(come_push_stackframe("libneo-c-gc.c", 1500, 1117),__exception_result_var_b183=strlen(str), come_pop_stackframe(), __exception_result_var_b183);
    if(_if_conditional157=(come_push_stackframe("libneo-c-gc.c", 1502, 1118),__exception_result_var_b184=strcmp(str,""), come_pop_stackframe(), __exception_result_var_b184)==0,    _if_conditional157) {
        __result219__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1503, 1119),__exception_result_var_b185=__builtin_string(str), come_pop_stackframe(), __exception_result_var_b185);
        return __result219__;
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
        __result220__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1519, 1120),__exception_result_var_b186=__builtin_string(str), come_pop_stackframe(), __exception_result_var_b186);
        return __result220__;
    }
    if(_if_conditional162=tail>=len_138,    _if_conditional162) {
        tail=len_138;
    }
    sub_str_139=(come_push_stackframe("libneo-c-gc.c", 1526, 1123),__exception_result_var_b187=charp_substring(((char*)come_null_check(((char*)come_null_check(str, "libneo-c-gc.c", 1526, 1121)), "libneo-c-gc.c", 1526, 1122)),tail,-1), come_pop_stackframe(), __exception_result_var_b187);
    (come_push_stackframe("libneo-c-gc.c", 1528, 1127),__exception_result_var_b189=memcpy(str+head,sub_str_139,(come_push_stackframe("libneo-c-gc.c", 1528, 1126),__exception_result_var_b188=string_length(((char*)come_null_check(((char*)come_null_check(sub_str_139, "libneo-c-gc.c", 1528, 1124)), "libneo-c-gc.c", 1528, 1125))), come_pop_stackframe(), __exception_result_var_b188)+1), come_pop_stackframe(), __exception_result_var_b189);
    __result221__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1530, 1128),__exception_result_var_b190=__builtin_string(str), come_pop_stackframe(), __exception_result_var_b190);
    return __result221__;
}

struct list$1charph* charp_split_char(char* self, char c){
void* __result_obj__;
_Bool _if_conditional163;
struct list$1charph* __exception_result_var_b191;
struct list$1charph* __result223__;
struct list$1charph* __exception_result_var_b192;
struct list$1charph* result_140;
struct buffer* __exception_result_var_b193;
struct buffer* str_141;
int i_142;
int __exception_result_var_b194;
_Bool _if_conditional164;
char* __exception_result_var_b195;
struct list$1charph* __exception_result_var_b196;
struct buffer* __exception_result_var_b197;
int __exception_result_var_b198;
_Bool _if_conditional167;
char* __exception_result_var_b199;
struct list$1charph* __exception_result_var_b200;
struct list$1charph* __result225__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_140, 0, sizeof(struct list$1charph*));
memset(&str_141, 0, sizeof(struct buffer*));
memset(&i_142, 0, sizeof(int));
    if(_if_conditional163=self==((void*)0),    _if_conditional163) {
        __result223__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1536, 1136),__exception_result_var_b191=list$1charph_initialize(((struct list$1charph*)come_null_check((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-gc.c", 1536, "list$1charph"), "libneo-c-gc.c", 1536, 1129))), come_pop_stackframe(), __exception_result_var_b191);
        return __result223__;
    }
    result_140=(come_push_stackframe("libneo-c-gc.c", 1539, 1139),__exception_result_var_b192=list$1charph_initialize(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-gc.c", 1539, "list$1charph"), "libneo-c-gc.c", 1539, 1137)), "libneo-c-gc.c", 1539, 1138))), come_pop_stackframe(), __exception_result_var_b192);
    str_141=(come_push_stackframe("libneo-c-gc.c", 1541, 1142),__exception_result_var_b193=buffer_initialize(((struct buffer*)come_null_check(((struct buffer*)come_null_check((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 1541, "buffer"), "libneo-c-gc.c", 1541, 1140)), "libneo-c-gc.c", 1541, 1141))), come_pop_stackframe(), __exception_result_var_b193);
    for(    i_142=0;    i_142<(come_push_stackframe("libneo-c-gc.c", 1543, 1145),__exception_result_var_b194=charp_length(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-gc.c", 1543, 1143)), "libneo-c-gc.c", 1543, 1144))), come_pop_stackframe(), __exception_result_var_b194);    i_142++    ){
        if(_if_conditional164=((char*)come_null_check(self, "libneo-c-gc.c", 1544, 1146))[i_142]==c,        _if_conditional164) {
            (come_push_stackframe("libneo-c-gc.c", 1545, 1196),__exception_result_var_b196=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_140, "libneo-c-gc.c", 1545, 1147)), "libneo-c-gc.c", 1545, 1148)),(come_push_stackframe("libneo-c-gc.c", 1545, 1195),__exception_result_var_b195=__builtin_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(str_141, "libneo-c-gc.c", 1545, 1193)), "libneo-c-gc.c", 1545, 1194))->buf), come_pop_stackframe(), __exception_result_var_b195)), come_pop_stackframe(), __exception_result_var_b196);
            (come_push_stackframe("libneo-c-gc.c", 1546,1199),buffer_reset(((struct buffer*)come_null_check(((struct buffer*)come_null_check(str_141, "libneo-c-gc.c", 1546, 1197)), "libneo-c-gc.c", 1546, 1198))),come_pop_stackframe());
        }
        else {
            (come_push_stackframe("libneo-c-gc.c", 1549, 1203),__exception_result_var_b197=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(str_141, "libneo-c-gc.c", 1549, 1200)), "libneo-c-gc.c", 1549, 1201)),((char*)come_null_check(self, "libneo-c-gc.c", 1549, 1202))[i_142]), come_pop_stackframe(), __exception_result_var_b197);
        }
    }
    if(_if_conditional167=(come_push_stackframe("libneo-c-gc.c", 1552, 1206),__exception_result_var_b198=buffer_length(((struct buffer*)come_null_check(((struct buffer*)come_null_check(str_141, "libneo-c-gc.c", 1552, 1204)), "libneo-c-gc.c", 1552, 1205))), come_pop_stackframe(), __exception_result_var_b198)!=0,    _if_conditional167) {
        (come_push_stackframe("libneo-c-gc.c", 1553, 1212),__exception_result_var_b200=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_140, "libneo-c-gc.c", 1553, 1207)), "libneo-c-gc.c", 1553, 1208)),(come_push_stackframe("libneo-c-gc.c", 1553, 1211),__exception_result_var_b199=__builtin_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(str_141, "libneo-c-gc.c", 1553, 1209)), "libneo-c-gc.c", 1553, 1210))->buf), come_pop_stackframe(), __exception_result_var_b199)), come_pop_stackframe(), __exception_result_var_b200);
    }
    __result225__ = __result_obj__ = result_140;
    return __result225__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result222__;
memset(&__result_obj__, 0, sizeof(void*));
            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 101, 1130)), "./neo-c.h", 101, 1131))->head=((void*)0);
            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 102, 1132)), "./neo-c.h", 102, 1133))->tail=((void*)0);
            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 103, 1134)), "./neo-c.h", 103, 1135))->len=0;
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
                if(_if_conditional165=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 222, 1149)), "./neo-c.h", 222, 1150))->len==0,                _if_conditional165) {
                    litem_143=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 223, "list_item$1charph");
                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_143, "./neo-c.h", 225, 1151)), "./neo-c.h", 225, 1152))->prev=((void*)0);
                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_143, "./neo-c.h", 226, 1153)), "./neo-c.h", 226, 1154))->next=((void*)0);
                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_143, "./neo-c.h", 227, 1155)), "./neo-c.h", 227, 1156))->item=item;
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 229, 1157)), "./neo-c.h", 229, 1158))->tail=litem_143;
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 230, 1159)), "./neo-c.h", 230, 1160))->head=litem_143;
                }
                else {
                    if(_if_conditional166=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 232, 1161)), "./neo-c.h", 232, 1162))->len==1,                    _if_conditional166) {
                        litem_144=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 233, "list_item$1charph");
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_144, "./neo-c.h", 235, 1163)), "./neo-c.h", 235, 1164))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 235, 1165)), "./neo-c.h", 235, 1166))->head;
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_144, "./neo-c.h", 236, 1167)), "./neo-c.h", 236, 1168))->next=((void*)0);
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_144, "./neo-c.h", 237, 1169)), "./neo-c.h", 237, 1170))->item=item;
                        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 239, 1171)), "./neo-c.h", 239, 1172))->tail=litem_144;
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 240, 1173)), "./neo-c.h", 240, 1174))->head, "./neo-c.h", 240, 1175)), "./neo-c.h", 240, 1176))->next=litem_144;
                    }
                    else {
                        litem_145=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 243, "list_item$1charph");
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_145, "./neo-c.h", 245, 1177)), "./neo-c.h", 245, 1178))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 245, 1179)), "./neo-c.h", 245, 1180))->tail;
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_145, "./neo-c.h", 246, 1181)), "./neo-c.h", 246, 1182))->next=((void*)0);
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_145, "./neo-c.h", 247, 1183)), "./neo-c.h", 247, 1184))->item=item;
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 249, 1185)), "./neo-c.h", 249, 1186))->tail, "./neo-c.h", 249, 1187)), "./neo-c.h", 249, 1188))->next=litem_145;
                        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 250, 1189)), "./neo-c.h", 250, 1190))->tail=litem_145;
                    }
                }
                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 253, 1191)), "./neo-c.h", 253, 1192))->len++;
                __result224__ = __result_obj__ = self;
                return __result224__;
}

struct list$1charph* string_split_char(char* self, char c){
void* __result_obj__;
_Bool _if_conditional168;
struct list$1charph* __exception_result_var_b201;
struct list$1charph* __result226__;
struct list$1charph* __exception_result_var_b202;
struct list$1charph* result_146;
struct buffer* __exception_result_var_b203;
struct buffer* str_147;
int i_148;
int __exception_result_var_b204;
_Bool _if_conditional169;
char* __exception_result_var_b205;
struct list$1charph* __exception_result_var_b206;
struct buffer* __exception_result_var_b207;
int __exception_result_var_b208;
_Bool _if_conditional170;
char* __exception_result_var_b209;
struct list$1charph* __exception_result_var_b210;
struct list$1charph* __result227__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_146, 0, sizeof(struct list$1charph*));
memset(&str_147, 0, sizeof(struct buffer*));
memset(&i_148, 0, sizeof(int));
    if(_if_conditional168=self==((void*)0),    _if_conditional168) {
        __result226__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1562, 1214),__exception_result_var_b201=list$1charph_initialize(((struct list$1charph*)come_null_check((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-gc.c", 1562, "list$1charph"), "libneo-c-gc.c", 1562, 1213))), come_pop_stackframe(), __exception_result_var_b201);
        return __result226__;
    }
    result_146=(come_push_stackframe("libneo-c-gc.c", 1565, 1217),__exception_result_var_b202=list$1charph_initialize(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-gc.c", 1565, "list$1charph"), "libneo-c-gc.c", 1565, 1215)), "libneo-c-gc.c", 1565, 1216))), come_pop_stackframe(), __exception_result_var_b202);
    str_147=(come_push_stackframe("libneo-c-gc.c", 1567, 1220),__exception_result_var_b203=buffer_initialize(((struct buffer*)come_null_check(((struct buffer*)come_null_check((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 1567, "buffer"), "libneo-c-gc.c", 1567, 1218)), "libneo-c-gc.c", 1567, 1219))), come_pop_stackframe(), __exception_result_var_b203);
    for(    i_148=0;    i_148<(come_push_stackframe("libneo-c-gc.c", 1569, 1223),__exception_result_var_b204=charp_length(((char*)come_null_check(((char*)come_null_check(self, "libneo-c-gc.c", 1569, 1221)), "libneo-c-gc.c", 1569, 1222))), come_pop_stackframe(), __exception_result_var_b204);    i_148++    ){
        if(_if_conditional169=((char*)come_null_check(self, "libneo-c-gc.c", 1570, 1224))[i_148]==c,        _if_conditional169) {
            (come_push_stackframe("libneo-c-gc.c", 1571, 1230),__exception_result_var_b206=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_146, "libneo-c-gc.c", 1571, 1225)), "libneo-c-gc.c", 1571, 1226)),(come_push_stackframe("libneo-c-gc.c", 1571, 1229),__exception_result_var_b205=__builtin_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(str_147, "libneo-c-gc.c", 1571, 1227)), "libneo-c-gc.c", 1571, 1228))->buf), come_pop_stackframe(), __exception_result_var_b205)), come_pop_stackframe(), __exception_result_var_b206);
            (come_push_stackframe("libneo-c-gc.c", 1572,1233),buffer_reset(((struct buffer*)come_null_check(((struct buffer*)come_null_check(str_147, "libneo-c-gc.c", 1572, 1231)), "libneo-c-gc.c", 1572, 1232))),come_pop_stackframe());
        }
        else {
            (come_push_stackframe("libneo-c-gc.c", 1575, 1237),__exception_result_var_b207=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(str_147, "libneo-c-gc.c", 1575, 1234)), "libneo-c-gc.c", 1575, 1235)),((char*)come_null_check(self, "libneo-c-gc.c", 1575, 1236))[i_148]), come_pop_stackframe(), __exception_result_var_b207);
        }
    }
    if(_if_conditional170=(come_push_stackframe("libneo-c-gc.c", 1578, 1240),__exception_result_var_b208=buffer_length(((struct buffer*)come_null_check(((struct buffer*)come_null_check(str_147, "libneo-c-gc.c", 1578, 1238)), "libneo-c-gc.c", 1578, 1239))), come_pop_stackframe(), __exception_result_var_b208)!=0,    _if_conditional170) {
        (come_push_stackframe("libneo-c-gc.c", 1579, 1246),__exception_result_var_b210=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_146, "libneo-c-gc.c", 1579, 1241)), "libneo-c-gc.c", 1579, 1242)),(come_push_stackframe("libneo-c-gc.c", 1579, 1245),__exception_result_var_b209=__builtin_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(str_147, "libneo-c-gc.c", 1579, 1243)), "libneo-c-gc.c", 1579, 1244))->buf), come_pop_stackframe(), __exception_result_var_b209)), come_pop_stackframe(), __exception_result_var_b210);
    }
    __result227__ = __result_obj__ = result_146;
    return __result227__;
}

char* xbasename(char* path){
void* __result_obj__;
_Bool _if_conditional171;
char* __exception_result_var_b211;
char* __result228__;
unsigned long int __exception_result_var_b212;
char* p_149;
_Bool _while_condtional3;
_Bool _if_conditional172;
_Bool _if_conditional173;
char* __exception_result_var_b213;
char* __result229__;
char* __exception_result_var_b214;
char* __result230__;
char* __exception_result_var_b215;
char* __result231__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_149, 0, sizeof(char*));
    if(_if_conditional171=path==((void*)0),    _if_conditional171) {
        __result228__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1591, 1247),__exception_result_var_b211=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b211);
        return __result228__;
    }
    p_149=path+(come_push_stackframe("libneo-c-gc.c", 1593, 1248),__exception_result_var_b212=strlen(path), come_pop_stackframe(), __exception_result_var_b212);
    while(_while_condtional3=p_149>=path,    _while_condtional3) {
        if(_if_conditional172=*((char*)come_null_check(p_149, "libneo-c-gc.c", 1596, 1249))==47,        _if_conditional172) {
            break;
        }
        else {
            p_149--;
        }
    }
    if(_if_conditional173=p_149<path,    _if_conditional173) {
        __result229__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1605, 1250),__exception_result_var_b213=__builtin_string(path), come_pop_stackframe(), __exception_result_var_b213);
        return __result229__;
    }
    else {
        __result230__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1608, 1251),__exception_result_var_b214=__builtin_string(p_149+1), come_pop_stackframe(), __exception_result_var_b214);
        return __result230__;
    }
    __result231__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1611, 1252),__exception_result_var_b215=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b215);
    return __result231__;
}

char* xdirname(char* path){
void* __result_obj__;
_Bool _if_conditional174;
char* __exception_result_var_b216;
char* __result232__;
char* __exception_result_var_b217;
char* __exception_result_var_b218;
char* __exception_result_var_b219;
char* __result233__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional174=path==((void*)0),    _if_conditional174) {
        __result232__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1617, 1253),__exception_result_var_b216=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b216);
        return __result232__;
    }
    __result233__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1619, 1256),__exception_result_var_b219=__builtin_string((come_push_stackframe("libneo-c-gc.c", 1619, 1255),__exception_result_var_b218=dirname((come_push_stackframe("libneo-c-gc.c", 1619, 1254),__exception_result_var_b217=__builtin_string(path), come_pop_stackframe(), __exception_result_var_b217)), come_pop_stackframe(), __exception_result_var_b218)), come_pop_stackframe(), __exception_result_var_b219);
    return __result233__;
}

char* xnoextname(char* path){
void* __result_obj__;
_Bool _if_conditional175;
char* __exception_result_var_b220;
char* __result234__;
char* __exception_result_var_b221;
char* path2_150;
unsigned long int __exception_result_var_b222;
char* p_151;
_Bool _while_condtional4;
_Bool _if_conditional176;
_Bool _if_conditional177;
char* __exception_result_var_b223;
char* __result235__;
char* __exception_result_var_b224;
char* __result236__;
char* __exception_result_var_b225;
char* __result237__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&path2_150, 0, sizeof(char*));
memset(&p_151, 0, sizeof(char*));
    if(_if_conditional175=path==((void*)0),    _if_conditional175) {
        __result234__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1625, 1257),__exception_result_var_b220=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b220);
        return __result234__;
    }
    path2_150=(come_push_stackframe("libneo-c-gc.c", 1627, 1258),__exception_result_var_b221=xbasename(path), come_pop_stackframe(), __exception_result_var_b221);
    p_151=path2_150+(come_push_stackframe("libneo-c-gc.c", 1629, 1259),__exception_result_var_b222=strlen(path2_150), come_pop_stackframe(), __exception_result_var_b222);
    while(_while_condtional4=p_151>=path2_150,    _while_condtional4) {
        if(_if_conditional176=*((char*)come_null_check(p_151, "libneo-c-gc.c", 1632, 1260))==46,        _if_conditional176) {
            break;
        }
        else {
            p_151--;
        }
    }
    if(_if_conditional177=p_151<path2_150,    _if_conditional177) {
        __result235__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1641, 1261),__exception_result_var_b223=__builtin_string(path2_150), come_pop_stackframe(), __exception_result_var_b223);
        return __result235__;
    }
    else {
        __result236__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1644, 1264),__exception_result_var_b224=string_substring(((char*)come_null_check(((char*)come_null_check(path2_150, "libneo-c-gc.c", 1644, 1262)), "libneo-c-gc.c", 1644, 1263)),0,p_151-path2_150), come_pop_stackframe(), __exception_result_var_b224);
        return __result236__;
    }
    __result237__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1647, 1265),__exception_result_var_b225=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b225);
    return __result237__;
}

char* xextname(char* path){
void* __result_obj__;
_Bool _if_conditional178;
char* __exception_result_var_b226;
char* __result238__;
unsigned long int __exception_result_var_b227;
char* p_152;
_Bool _while_condtional5;
_Bool _if_conditional179;
_Bool _if_conditional180;
char* __exception_result_var_b228;
char* __result239__;
char* __exception_result_var_b229;
char* __result240__;
char* __exception_result_var_b230;
char* __result241__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_152, 0, sizeof(char*));
    if(_if_conditional178=path==((void*)0),    _if_conditional178) {
        __result238__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1653, 1266),__exception_result_var_b226=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b226);
        return __result238__;
    }
    p_152=path+(come_push_stackframe("libneo-c-gc.c", 1655, 1267),__exception_result_var_b227=strlen(path), come_pop_stackframe(), __exception_result_var_b227);
    while(_while_condtional5=p_152>=path,    _while_condtional5) {
        if(_if_conditional179=*((char*)come_null_check(p_152, "libneo-c-gc.c", 1658, 1268))==46,        _if_conditional179) {
            break;
        }
        else {
            p_152--;
        }
    }
    if(_if_conditional180=p_152<path,    _if_conditional180) {
        __result239__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1667, 1269),__exception_result_var_b228=__builtin_string(path), come_pop_stackframe(), __exception_result_var_b228);
        return __result239__;
    }
    else {
        __result240__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1670, 1270),__exception_result_var_b229=__builtin_string(p_152+1), come_pop_stackframe(), __exception_result_var_b229);
        return __result240__;
    }
    __result241__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1673, 1271),__exception_result_var_b230=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b230);
    return __result241__;
}

char* xrealpath(char* path){
void* __result_obj__;
_Bool _if_conditional181;
char* __exception_result_var_b231;
char* __result242__;
char* __exception_result_var_b232;
char* result_153;
char* __exception_result_var_b233;
char* result2_154;
char* __result243__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_153, 0, sizeof(char*));
memset(&result2_154, 0, sizeof(char*));
    if(_if_conditional181=path==((void*)0),    _if_conditional181) {
        __result242__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1679, 1272),__exception_result_var_b231=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b231);
        return __result242__;
    }
    result_153=(come_push_stackframe("libneo-c-gc.c", 1681, 1273),__exception_result_var_b232=realpath(path,((void*)0)), come_pop_stackframe(), __exception_result_var_b232);
    result2_154=(come_push_stackframe("libneo-c-gc.c", 1683, 1274),__exception_result_var_b233=__builtin_string(result_153), come_pop_stackframe(), __exception_result_var_b233);
    (come_push_stackframe("libneo-c-gc.c", 1685,1275),free(result_153),come_pop_stackframe());
    __result243__ = __result_obj__ = result2_154;
    return __result243__;
}

char* bool_to_string(_Bool self){
void* __result_obj__;
_Bool _if_conditional182;
char* __exception_result_var_b234;
char* __result244__;
char* __exception_result_var_b235;
char* __result245__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self) {
        __result244__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1696, 1276),__exception_result_var_b234=__builtin_string("true"), come_pop_stackframe(), __exception_result_var_b234);
        return __result244__;
    }
    else {
        __result245__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1699, 1277),__exception_result_var_b235=__builtin_string("false"), come_pop_stackframe(), __exception_result_var_b235);
        return __result245__;
    }
}

char* char_to_string(char self){
void* __result_obj__;
char* __exception_result_var_b236;
char* __result246__;
memset(&__result_obj__, 0, sizeof(void*));
    __result246__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1705, 1278),__exception_result_var_b236=xsprintf("%c",self), come_pop_stackframe(), __exception_result_var_b236);
    return __result246__;
}

char* short_to_string(short short self){
void* __result_obj__;
char* __exception_result_var_b237;
char* __result247__;
memset(&__result_obj__, 0, sizeof(void*));
    __result247__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1710, 1279),__exception_result_var_b237=xsprintf("%d",self), come_pop_stackframe(), __exception_result_var_b237);
    return __result247__;
}

char* int_to_string(int self){
void* __result_obj__;
char* __exception_result_var_b238;
char* __result248__;
memset(&__result_obj__, 0, sizeof(void*));
    __result248__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1715, 1280),__exception_result_var_b238=xsprintf("%d",self), come_pop_stackframe(), __exception_result_var_b238);
    return __result248__;
}

char* long_to_string(long self){
void* __result_obj__;
char* __exception_result_var_b239;
char* __result249__;
memset(&__result_obj__, 0, sizeof(void*));
    __result249__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1720, 1281),__exception_result_var_b239=xsprintf("%ld",self), come_pop_stackframe(), __exception_result_var_b239);
    return __result249__;
}

char* size_t_to_string(unsigned long int self){
void* __result_obj__;
char* __exception_result_var_b240;
char* __result250__;
memset(&__result_obj__, 0, sizeof(void*));
    __result250__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1725, 1282),__exception_result_var_b240=xsprintf("%ld",self), come_pop_stackframe(), __exception_result_var_b240);
    return __result250__;
}

char* float_to_string(float self){
void* __result_obj__;
char* __exception_result_var_b241;
char* __result251__;
memset(&__result_obj__, 0, sizeof(void*));
    __result251__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1730, 1283),__exception_result_var_b241=xsprintf("%f",self), come_pop_stackframe(), __exception_result_var_b241);
    return __result251__;
}

char* double_to_string(double self){
void* __result_obj__;
char* __exception_result_var_b242;
char* __result252__;
memset(&__result_obj__, 0, sizeof(void*));
    __result252__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1735, 1284),__exception_result_var_b242=xsprintf("%lf",self), come_pop_stackframe(), __exception_result_var_b242);
    return __result252__;
}

char* string_to_string(char* self){
void* __result_obj__;
_Bool _if_conditional183;
char* __exception_result_var_b243;
char* __result253__;
char* __exception_result_var_b244;
char* __result254__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional183=self==((void*)0),    _if_conditional183) {
        __result253__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1741, 1285),__exception_result_var_b243=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b243);
        return __result253__;
    }
    __result254__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1743, 1286),__exception_result_var_b244=__builtin_string(self), come_pop_stackframe(), __exception_result_var_b244);
    return __result254__;
}

char* charp_to_string(char* self){
void* __result_obj__;
_Bool _if_conditional184;
char* __exception_result_var_b245;
char* __result255__;
char* __exception_result_var_b246;
char* __result256__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional184=self==((void*)0),    _if_conditional184) {
        __result255__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1749, 1287),__exception_result_var_b245=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b245);
        return __result255__;
    }
    __result256__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1751, 1288),__exception_result_var_b246=__builtin_string(self), come_pop_stackframe(), __exception_result_var_b246);
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
    if(_if_conditional185=!left&&right,    _if_conditional185) {
        __result257__ = -1;
        return __result257__;
    }
    else {
        if(_if_conditional186=left&&right,        _if_conditional186) {
            __result258__ = 0;
            return __result258__;
        }
        else {
            if(_if_conditional187=!left&&!right,            _if_conditional187) {
                __result259__ = 0;
                return __result259__;
            }
            else {
                __result260__ = 1;
                return __result260__;
            }
        }
    }
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
    if(_if_conditional188=left<right,    _if_conditional188) {
        __result262__ = -1;
        return __result262__;
    }
    else {
        if(_if_conditional189=left>right,        _if_conditional189) {
            __result263__ = 1;
            return __result263__;
        }
        else {
            __result264__ = 0;
            return __result264__;
        }
    }
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
    if(_if_conditional190=left<right,    _if_conditional190) {
        __result266__ = -1;
        return __result266__;
    }
    else {
        if(_if_conditional191=left>right,        _if_conditional191) {
            __result267__ = 1;
            return __result267__;
        }
        else {
            __result268__ = 0;
            return __result268__;
        }
    }
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
    if(_if_conditional192=left<right,    _if_conditional192) {
        __result270__ = -1;
        return __result270__;
    }
    else {
        if(_if_conditional193=left>right,        _if_conditional193) {
            __result271__ = 1;
            return __result271__;
        }
        else {
            __result272__ = 0;
            return __result272__;
        }
    }
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
    if(_if_conditional194=left<right,    _if_conditional194) {
        __result274__ = -1;
        return __result274__;
    }
    else {
        if(_if_conditional195=left>right,        _if_conditional195) {
            __result275__ = 1;
            return __result275__;
        }
        else {
            __result276__ = 0;
            return __result276__;
        }
    }
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
    if(_if_conditional196=left<right,    _if_conditional196) {
        __result278__ = -1;
        return __result278__;
    }
    else {
        if(_if_conditional197=left>right,        _if_conditional197) {
            __result279__ = 1;
            return __result279__;
        }
        else {
            __result280__ = 0;
            return __result280__;
        }
    }
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
    if(_if_conditional198=left<right,    _if_conditional198) {
        __result282__ = -1;
        return __result282__;
    }
    else {
        if(_if_conditional199=left>right,        _if_conditional199) {
            __result283__ = 1;
            return __result283__;
        }
        else {
            __result284__ = 0;
            return __result284__;
        }
    }
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
    if(_if_conditional200=left<right,    _if_conditional200) {
        __result286__ = -1;
        return __result286__;
    }
    else {
        if(_if_conditional201=left>right,        _if_conditional201) {
            __result287__ = 1;
            return __result287__;
        }
        else {
            __result288__ = 0;
            return __result288__;
        }
    }
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
int __exception_result_var_b247;
int __result293__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional202=left==((void*)0)&&right==((void*)0),    _if_conditional202) {
        __result290__ = 0;
        return __result290__;
    }
    else {
        if(_if_conditional203=left==((void*)0),        _if_conditional203) {
            __result291__ = -1;
            return __result291__;
        }
        else {
            if(_if_conditional204=right==((void*)0),            _if_conditional204) {
                __result292__ = 1;
                return __result292__;
            }
        }
    }
    __result293__ = (come_push_stackframe("libneo-c-gc.c", 1892, 1289),__exception_result_var_b247=strcmp(left,right), come_pop_stackframe(), __exception_result_var_b247);
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
int __exception_result_var_b248;
int __result297__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional205=left==((void*)0)&&right==((void*)0),    _if_conditional205) {
        __result294__ = 0;
        return __result294__;
    }
    else {
        if(_if_conditional206=left==((void*)0),        _if_conditional206) {
            __result295__ = -1;
            return __result295__;
        }
        else {
            if(_if_conditional207=right==((void*)0),            _if_conditional207) {
                __result296__ = 1;
                return __result296__;
            }
        }
    }
    __result297__ = (come_push_stackframe("libneo-c-gc.c", 1907, 1290),__exception_result_var_b248=strcmp(left,right), come_pop_stackframe(), __exception_result_var_b248);
    return __result297__;
}

char* FILE_read(struct _IO_FILE* f){
void* __result_obj__;
_Bool _if_conditional208;
char* __exception_result_var_b249;
char* __result298__;
struct buffer* __exception_result_var_b250;
struct buffer* buf_155;
_Bool _while_condtional6;
unsigned long int __exception_result_var_b251;
int size_157;
struct buffer* __exception_result_var_b252;
_Bool _if_conditional209;
char* __exception_result_var_b253;
char* __result299__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&buf_155, 0, sizeof(struct buffer*));
memset(&size_157, 0, sizeof(int));
    if(_if_conditional208=f==((void*)0),    _if_conditional208) {
        __result298__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1916, 1291),__exception_result_var_b249=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b249);
        return __result298__;
    }
    buf_155=(come_push_stackframe("libneo-c-gc.c", 1918, 1294),__exception_result_var_b250=buffer_initialize(((struct buffer*)come_null_check(((struct buffer*)come_null_check((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 1918, "buffer"), "libneo-c-gc.c", 1918, 1292)), "libneo-c-gc.c", 1918, 1293))), come_pop_stackframe(), __exception_result_var_b250);
    while(_while_condtional6=1,    _while_condtional6) {
        char buf2_156[1024];
        memset(&buf2_156, 0, sizeof(char)        *(1024)        );
        size_157=(come_push_stackframe("libneo-c-gc.c", 1923, 1295),__exception_result_var_b251=fread(buf2_156,1,1024,f), come_pop_stackframe(), __exception_result_var_b251);
        (come_push_stackframe("libneo-c-gc.c", 1925, 1298),__exception_result_var_b252=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_155, "libneo-c-gc.c", 1925, 1296)), "libneo-c-gc.c", 1925, 1297)),buf2_156,size_157), come_pop_stackframe(), __exception_result_var_b252);
        if(_if_conditional209=size_157<1024,        _if_conditional209) {
            break;
        }
    }
    __result299__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 1932, 1301),__exception_result_var_b253=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_155, "libneo-c-gc.c", 1932, 1299)), "libneo-c-gc.c", 1932, 1300))), come_pop_stackframe(), __exception_result_var_b253);
    return __result299__;
}

int FILE_write(struct _IO_FILE* f, char* str){
void* __result_obj__;
_Bool _if_conditional210;
int __result300__;
unsigned long int __exception_result_var_b254;
unsigned long int __exception_result_var_b255;
int __result301__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional210=f==((void*)0)||str==((void*)0),    _if_conditional210) {
        __result300__ = -1;
        return __result300__;
    }
    __result301__ = (come_push_stackframe("libneo-c-gc.c", 1941, 1303),__exception_result_var_b255=fwrite(str,(come_push_stackframe("libneo-c-gc.c", 1941, 1302),__exception_result_var_b254=strlen(str), come_pop_stackframe(), __exception_result_var_b254),1,f), come_pop_stackframe(), __exception_result_var_b255);
    return __result301__;
}

int FILE_fclose(struct _IO_FILE* f){
void* __result_obj__;
_Bool _if_conditional211;
int __result302__;
int __exception_result_var_b256;
int result_158;
_Bool _if_conditional212;
int __result303__;
int __result304__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_158, 0, sizeof(int));
    if(_if_conditional211=f==((void*)0),    _if_conditional211) {
        __result302__ = -1;
        return __result302__;
    }
    result_158=(come_push_stackframe("libneo-c-gc.c", 1950, 1304),__exception_result_var_b256=fclose(f), come_pop_stackframe(), __exception_result_var_b256);
    if(_if_conditional212=result_158<0,    _if_conditional212) {
        __result303__ = result_158;
        return __result303__;
    }
    __result304__ = result_158;
    return __result304__;
}

struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional213;
struct _IO_FILE* __result305__;
va_list args_160;
int __exception_result_var_b257;
int __exception_result_var_b258;
int result_161;
_Bool _if_conditional214;
struct _IO_FILE* __result306__;
struct _IO_FILE* __result307__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&args_160, 0, sizeof(va_list));
memset(&result_161, 0, sizeof(int));
    if(_if_conditional213=f==((void*)0)||msg==((void*)0),    _if_conditional213) {
        __result305__ = __result_obj__ = f;
        return __result305__;
    }
    char msg2_159[1024*2*2*2];
    memset(&msg2_159, 0, sizeof(char)    *(1024*2*2*2)    );
    (come_push_stackframe("libneo-c-gc.c", 1967,1305),__builtin_va_start(args_160,msg),come_pop_stackframe());
    (come_push_stackframe("libneo-c-gc.c", 1968, 1306),__exception_result_var_b257=vsnprintf(msg2_159,1024*2*2*2,msg,args_160), come_pop_stackframe(), __exception_result_var_b257);
    (come_push_stackframe("libneo-c-gc.c", 1969,1307),__builtin_va_end(args_160),come_pop_stackframe());
    result_161=(come_push_stackframe("libneo-c-gc.c", 1971, 1308),__exception_result_var_b258=fprintf(f,"%s",msg2_159), come_pop_stackframe(), __exception_result_var_b258);
    if(_if_conditional214=result_161<0,    _if_conditional214) {
        __result306__ = __result_obj__ = f;
        return __result306__;
    }
    __result307__ = __result_obj__ = f;
    return __result307__;
}

int string_write(char* self, char* file_name, _Bool append){
void* __result_obj__;
_Bool _if_conditional215;
int __result308__;
struct _IO_FILE* f_162;
_Bool _if_conditional216;
struct _IO_FILE* __exception_result_var_b259;
struct _IO_FILE* __exception_result_var_b260;
_Bool _if_conditional217;
int __result309__;
unsigned long int __exception_result_var_b261;
unsigned long int __exception_result_var_b262;
int result_163;
_Bool _if_conditional218;
int __result310__;
int __exception_result_var_b263;
int result2_164;
_Bool _if_conditional219;
int __result311__;
int __result312__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_162, 0, sizeof(struct _IO_FILE*));
memset(&result_163, 0, sizeof(int));
memset(&result2_164, 0, sizeof(int));
    if(_if_conditional215=self==((void*)0)||file_name==((void*)0),    _if_conditional215) {
        __result308__ = -1;
        return __result308__;
    }
    if(append) {
        f_162=(come_push_stackframe("libneo-c-gc.c", 1988, 1309),__exception_result_var_b259=fopen(file_name,"a"), come_pop_stackframe(), __exception_result_var_b259);
    }
    else {
        f_162=(come_push_stackframe("libneo-c-gc.c", 1991, 1310),__exception_result_var_b260=fopen(file_name,"w"), come_pop_stackframe(), __exception_result_var_b260);
    }
    if(_if_conditional217=f_162==((void*)0),    _if_conditional217) {
        __result309__ = -1;
        return __result309__;
    }
    result_163=(come_push_stackframe("libneo-c-gc.c", 1998, 1312),__exception_result_var_b262=fwrite(self,(come_push_stackframe("libneo-c-gc.c", 1998, 1311),__exception_result_var_b261=strlen(self), come_pop_stackframe(), __exception_result_var_b261),1,f_162), come_pop_stackframe(), __exception_result_var_b262);
    if(_if_conditional218=result_163<0,    _if_conditional218) {
        __result310__ = result_163;
        return __result310__;
    }
    result2_164=(come_push_stackframe("libneo-c-gc.c", 2006, 1313),__exception_result_var_b263=fclose(f_162), come_pop_stackframe(), __exception_result_var_b263);
    if(_if_conditional219=result2_164<0,    _if_conditional219) {
        __result311__ = result2_164;
        return __result311__;
    }
    __result312__ = result_163;
    return __result312__;
}

int charp_write(char* self, char* file_name, _Bool append){
void* __result_obj__;
_Bool _if_conditional220;
int __result313__;
struct _IO_FILE* f_165;
_Bool _if_conditional221;
struct _IO_FILE* __exception_result_var_b264;
struct _IO_FILE* __exception_result_var_b265;
_Bool _if_conditional222;
int __result314__;
unsigned long int __exception_result_var_b266;
unsigned long int __exception_result_var_b267;
int result_166;
_Bool _if_conditional223;
int __result315__;
int __exception_result_var_b268;
int result2_167;
_Bool _if_conditional224;
int __result316__;
int __result317__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_165, 0, sizeof(struct _IO_FILE*));
memset(&result_166, 0, sizeof(int));
memset(&result2_167, 0, sizeof(int));
    if(_if_conditional220=self==((void*)0)||file_name==((void*)0),    _if_conditional220) {
        __result313__ = -1;
        return __result313__;
    }
    if(append) {
        f_165=(come_push_stackframe("libneo-c-gc.c", 2021, 1314),__exception_result_var_b264=fopen(file_name,"a"), come_pop_stackframe(), __exception_result_var_b264);
    }
    else {
        f_165=(come_push_stackframe("libneo-c-gc.c", 2024, 1315),__exception_result_var_b265=fopen(file_name,"w"), come_pop_stackframe(), __exception_result_var_b265);
    }
    if(_if_conditional222=f_165==((void*)0),    _if_conditional222) {
        __result314__ = -1;
        return __result314__;
    }
    result_166=(come_push_stackframe("libneo-c-gc.c", 2031, 1317),__exception_result_var_b267=fwrite(self,(come_push_stackframe("libneo-c-gc.c", 2031, 1316),__exception_result_var_b266=strlen(self), come_pop_stackframe(), __exception_result_var_b266),1,f_165), come_pop_stackframe(), __exception_result_var_b267);
    if(_if_conditional223=result_166<0,    _if_conditional223) {
        __result315__ = result_166;
        return __result315__;
    }
    result2_167=(come_push_stackframe("libneo-c-gc.c", 2039, 1318),__exception_result_var_b268=fclose(f_165), come_pop_stackframe(), __exception_result_var_b268);
    if(_if_conditional224=result2_167<0,    _if_conditional224) {
        __result316__ = result2_167;
        return __result316__;
    }
    __result317__ = result_166;
    return __result317__;
}

char* string_read(char* file_name){
void* __result_obj__;
_Bool _if_conditional225;
char* __exception_result_var_b269;
char* __result318__;
struct _IO_FILE* __exception_result_var_b270;
struct _IO_FILE* f_168;
_Bool _if_conditional226;
char* __exception_result_var_b271;
char* __result319__;
struct buffer* __exception_result_var_b272;
struct buffer* buf_169;
_Bool _while_condtional7;
unsigned long int __exception_result_var_b273;
int size_171;
struct buffer* __exception_result_var_b274;
_Bool _if_conditional227;
char* __exception_result_var_b275;
char* result_172;
int __exception_result_var_b276;
int result2_173;
_Bool _if_conditional228;
char* __exception_result_var_b277;
char* __result320__;
char* __result321__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_168, 0, sizeof(struct _IO_FILE*));
memset(&buf_169, 0, sizeof(struct buffer*));
memset(&size_171, 0, sizeof(int));
memset(&result_172, 0, sizeof(char*));
memset(&result2_173, 0, sizeof(int));
    if(_if_conditional225=file_name==((void*)0),    _if_conditional225) {
        __result318__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 2049, 1319),__exception_result_var_b269=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b269);
        return __result318__;
    }
    f_168=(come_push_stackframe("libneo-c-gc.c", 2052, 1320),__exception_result_var_b270=fopen(file_name,"r"), come_pop_stackframe(), __exception_result_var_b270);
    if(_if_conditional226=f_168==((void*)0),    _if_conditional226) {
        __result319__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 2055, 1321),__exception_result_var_b271=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b271);
        return __result319__;
    }
    buf_169=(come_push_stackframe("libneo-c-gc.c", 2058, 1324),__exception_result_var_b272=buffer_initialize(((struct buffer*)come_null_check(((struct buffer*)come_null_check((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 2058, "buffer"), "libneo-c-gc.c", 2058, 1322)), "libneo-c-gc.c", 2058, 1323))), come_pop_stackframe(), __exception_result_var_b272);
    while(_while_condtional7=1,    _while_condtional7) {
        char buf2_170[1024];
        memset(&buf2_170, 0, sizeof(char)        *(1024)        );
        size_171=(come_push_stackframe("libneo-c-gc.c", 2063, 1325),__exception_result_var_b273=fread(buf2_170,1,1024,f_168), come_pop_stackframe(), __exception_result_var_b273);
        (come_push_stackframe("libneo-c-gc.c", 2065, 1328),__exception_result_var_b274=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_169, "libneo-c-gc.c", 2065, 1326)), "libneo-c-gc.c", 2065, 1327)),buf2_170,size_171), come_pop_stackframe(), __exception_result_var_b274);
        if(_if_conditional227=size_171<1024,        _if_conditional227) {
            break;
        }
    }
    result_172=(come_push_stackframe("libneo-c-gc.c", 2072, 1331),__exception_result_var_b275=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_169, "libneo-c-gc.c", 2072, 1329)), "libneo-c-gc.c", 2072, 1330))), come_pop_stackframe(), __exception_result_var_b275);
    result2_173=(come_push_stackframe("libneo-c-gc.c", 2076, 1332),__exception_result_var_b276=fclose(f_168), come_pop_stackframe(), __exception_result_var_b276);
    if(_if_conditional228=result2_173<0,    _if_conditional228) {
        __result320__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 2077, 1333),__exception_result_var_b277=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b277);
        return __result320__;
    }
    __result321__ = __result_obj__ = result_172;
    return __result321__;
}

char* charp_read(char* file_name){
void* __result_obj__;
_Bool _if_conditional229;
char* __exception_result_var_b278;
char* __result322__;
struct _IO_FILE* __exception_result_var_b279;
struct _IO_FILE* f_174;
_Bool _if_conditional230;
char* __exception_result_var_b280;
char* __result323__;
struct buffer* __exception_result_var_b281;
struct buffer* buf_175;
_Bool _while_condtional8;
unsigned long int __exception_result_var_b282;
int size_177;
struct buffer* __exception_result_var_b283;
_Bool _if_conditional231;
char* __exception_result_var_b284;
char* result_178;
int __exception_result_var_b285;
int result2_179;
_Bool _if_conditional232;
char* __exception_result_var_b286;
char* __result324__;
char* __result325__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_174, 0, sizeof(struct _IO_FILE*));
memset(&buf_175, 0, sizeof(struct buffer*));
memset(&size_177, 0, sizeof(int));
memset(&result_178, 0, sizeof(char*));
memset(&result2_179, 0, sizeof(int));
    if(_if_conditional229=file_name==((void*)0),    _if_conditional229) {
        __result322__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 2086, 1334),__exception_result_var_b278=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b278);
        return __result322__;
    }
    f_174=(come_push_stackframe("libneo-c-gc.c", 2089, 1335),__exception_result_var_b279=fopen(file_name,"r"), come_pop_stackframe(), __exception_result_var_b279);
    if(_if_conditional230=f_174==((void*)0),    _if_conditional230) {
        __result323__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 2092, 1336),__exception_result_var_b280=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b280);
        return __result323__;
    }
    buf_175=(come_push_stackframe("libneo-c-gc.c", 2095, 1339),__exception_result_var_b281=buffer_initialize(((struct buffer*)come_null_check(((struct buffer*)come_null_check((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 2095, "buffer"), "libneo-c-gc.c", 2095, 1337)), "libneo-c-gc.c", 2095, 1338))), come_pop_stackframe(), __exception_result_var_b281);
    while(_while_condtional8=1,    _while_condtional8) {
        char buf2_176[1024];
        memset(&buf2_176, 0, sizeof(char)        *(1024)        );
        size_177=(come_push_stackframe("libneo-c-gc.c", 2100, 1340),__exception_result_var_b282=fread(buf2_176,1,1024,f_174), come_pop_stackframe(), __exception_result_var_b282);
        (come_push_stackframe("libneo-c-gc.c", 2102, 1343),__exception_result_var_b283=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_175, "libneo-c-gc.c", 2102, 1341)), "libneo-c-gc.c", 2102, 1342)),buf2_176,size_177), come_pop_stackframe(), __exception_result_var_b283);
        if(_if_conditional231=size_177<1024,        _if_conditional231) {
            break;
        }
    }
    result_178=(come_push_stackframe("libneo-c-gc.c", 2109, 1346),__exception_result_var_b284=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_175, "libneo-c-gc.c", 2109, 1344)), "libneo-c-gc.c", 2109, 1345))), come_pop_stackframe(), __exception_result_var_b284);
    result2_179=(come_push_stackframe("libneo-c-gc.c", 2113, 1347),__exception_result_var_b285=fclose(f_174), come_pop_stackframe(), __exception_result_var_b285);
    if(_if_conditional232=result2_179<0,    _if_conditional232) {
        __result324__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 2114, 1348),__exception_result_var_b286=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b286);
        return __result324__;
    }
    __result325__ = __result_obj__ = result_178;
    return __result325__;
}

struct list$1charph* FILE_readlines(struct _IO_FILE* f){
void* __result_obj__;
struct list$1charph* __exception_result_var_b287;
struct list$1charph* result_180;
_Bool _if_conditional233;
struct list$1charph* __result326__;
_Bool _while_condtional9;
char* __exception_result_var_b288;
_Bool _if_conditional234;
char* __exception_result_var_b289;
struct list$1charph* __exception_result_var_b290;
struct list$1charph* __result327__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_180, 0, sizeof(struct list$1charph*));
    result_180=(come_push_stackframe("libneo-c-gc.c", 2122, 1351),__exception_result_var_b287=list$1charph_initialize(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-gc.c", 2122, "list$1charph"), "libneo-c-gc.c", 2122, 1349)), "libneo-c-gc.c", 2122, 1350))), come_pop_stackframe(), __exception_result_var_b287);
    if(_if_conditional233=f==((void*)0),    _if_conditional233) {
        __result326__ = __result_obj__ = result_180;
        return __result326__;
    }
    while(_while_condtional9=1,    _while_condtional9) {
        char buf_181[1024];
        memset(&buf_181, 0, sizeof(char)        *(1024)        );
        if(_if_conditional234=(come_push_stackframe("libneo-c-gc.c", 2131, 1352),__exception_result_var_b288=fgets(buf_181,1024,f), come_pop_stackframe(), __exception_result_var_b288)==((void*)0),        _if_conditional234) {
            break;
        }
        (come_push_stackframe("libneo-c-gc.c", 2135, 1356),__exception_result_var_b290=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_180, "libneo-c-gc.c", 2135, 1353)), "libneo-c-gc.c", 2135, 1354)),(come_push_stackframe("libneo-c-gc.c", 2135, 1355),__exception_result_var_b289=__builtin_string(buf_181), come_pop_stackframe(), __exception_result_var_b289)), come_pop_stackframe(), __exception_result_var_b290);
    }
    __result327__ = __result_obj__ = result_180;
    return __result327__;
}

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*)){
void* __result_obj__;
_Bool _if_conditional235;
int __result328__;
struct _IO_FILE* __exception_result_var_b291;
struct _IO_FILE* f_182;
_Bool _if_conditional236;
int __exception_result_var_b292;
int __result329__;
int __result330__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_182, 0, sizeof(struct _IO_FILE*));
    if(_if_conditional235=path==((void*)0)||mode==((void*)0),    _if_conditional235) {
        __result328__ = -1;
        return __result328__;
    }
    f_182=(come_push_stackframe("libneo-c-gc.c", 2146, 1357),__exception_result_var_b291=fopen(path,mode), come_pop_stackframe(), __exception_result_var_b291);
    if(f_182) {
        block(parent,f_182);
        (come_push_stackframe("libneo-c-gc.c", 2151, 1358),__exception_result_var_b292=fclose(f_182), come_pop_stackframe(), __exception_result_var_b292);
        __result329__ = 0;
        return __result329__;
    }
    __result330__ = -1;
    return __result330__;
}

char* charp_puts(char* self){
void* __result_obj__;
_Bool _if_conditional237;
char* __exception_result_var_b293;
char* __result331__;
int __exception_result_var_b294;
char* __exception_result_var_b295;
char* __result332__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional237=self==((void*)0),    _if_conditional237) {
        __result331__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 2165, 1359),__exception_result_var_b293=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b293);
        return __result331__;
    }
    (come_push_stackframe("libneo-c-gc.c", 2167, 1360),__exception_result_var_b294=puts(self), come_pop_stackframe(), __exception_result_var_b294);
    __result332__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 2169, 1361),__exception_result_var_b295=__builtin_string(self), come_pop_stackframe(), __exception_result_var_b295);
    return __result332__;
}

char* charp_print(char* self){
void* __result_obj__;
_Bool _if_conditional238;
char* __exception_result_var_b296;
char* __result333__;
int __exception_result_var_b297;
char* __exception_result_var_b298;
char* __result334__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional238=self==((void*)0),    _if_conditional238) {
        __result333__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 2175, 1362),__exception_result_var_b296=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b296);
        return __result333__;
    }
    (come_push_stackframe("libneo-c-gc.c", 2177, 1363),__exception_result_var_b297=printf("%s",self), come_pop_stackframe(), __exception_result_var_b297);
    __result334__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 2179, 1364),__exception_result_var_b298=__builtin_string(self), come_pop_stackframe(), __exception_result_var_b298);
    return __result334__;
}

char* string_printf(char* self, ...){
void* __result_obj__;
_Bool _if_conditional239;
char* __exception_result_var_b299;
char* __result335__;
char* msg2_183;
va_list args_184;
int __exception_result_var_b300;
int __exception_result_var_b301;
char* __exception_result_var_b302;
char* __result336__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_183, 0, sizeof(char*));
memset(&args_184, 0, sizeof(va_list));
    if(_if_conditional239=self==((void*)0),    _if_conditional239) {
        __result335__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 2186, 1365),__exception_result_var_b299=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b299);
        return __result335__;
    }
    (come_push_stackframe("libneo-c-gc.c", 2191,1366),__builtin_va_start(args_184,self),come_pop_stackframe());
    (come_push_stackframe("libneo-c-gc.c", 2192, 1367),__exception_result_var_b300=vasprintf(&msg2_183,self,args_184), come_pop_stackframe(), __exception_result_var_b300);
    (come_push_stackframe("libneo-c-gc.c", 2193,1368),__builtin_va_end(args_184),come_pop_stackframe());
    (come_push_stackframe("libneo-c-gc.c", 2195, 1369),__exception_result_var_b301=printf("%s",msg2_183), come_pop_stackframe(), __exception_result_var_b301);
    (come_push_stackframe("libneo-c-gc.c", 2197,1370),free(msg2_183),come_pop_stackframe());
    __result336__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 2199, 1371),__exception_result_var_b302=__builtin_string(self), come_pop_stackframe(), __exception_result_var_b302);
    return __result336__;
}

char* charp_printf(char* self, ...){
void* __result_obj__;
_Bool _if_conditional240;
char* __exception_result_var_b303;
char* __result337__;
char* msg2_185;
va_list args_186;
int __exception_result_var_b304;
int __exception_result_var_b305;
char* __exception_result_var_b306;
char* __result338__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_185, 0, sizeof(char*));
memset(&args_186, 0, sizeof(va_list));
    if(_if_conditional240=self==((void*)0),    _if_conditional240) {
        __result337__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 2205, 1372),__exception_result_var_b303=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b303);
        return __result337__;
    }
    (come_push_stackframe("libneo-c-gc.c", 2210,1373),__builtin_va_start(args_186,self),come_pop_stackframe());
    (come_push_stackframe("libneo-c-gc.c", 2211, 1374),__exception_result_var_b304=vasprintf(&msg2_185,self,args_186), come_pop_stackframe(), __exception_result_var_b304);
    (come_push_stackframe("libneo-c-gc.c", 2212,1375),__builtin_va_end(args_186),come_pop_stackframe());
    (come_push_stackframe("libneo-c-gc.c", 2214, 1376),__exception_result_var_b305=printf("%s",msg2_185), come_pop_stackframe(), __exception_result_var_b305);
    (come_push_stackframe("libneo-c-gc.c", 2216,1377),free(msg2_185),come_pop_stackframe());
    __result338__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 2218, 1378),__exception_result_var_b306=__builtin_string(self), come_pop_stackframe(), __exception_result_var_b306);
    return __result338__;
}

int int_printf(int self, char* msg){
void* __result_obj__;
int __exception_result_var_b307;
int __result339__;
memset(&__result_obj__, 0, sizeof(void*));
    (come_push_stackframe("libneo-c-gc.c", 2223, 1379),__exception_result_var_b307=printf(msg,self), come_pop_stackframe(), __exception_result_var_b307);
    __result339__ = self;
    return __result339__;
}

char* string_puts(char* self){
void* __result_obj__;
_Bool _if_conditional241;
char* __exception_result_var_b308;
char* __result340__;
int __exception_result_var_b309;
char* __exception_result_var_b310;
char* __result341__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional241=self==((void*)0),    _if_conditional241) {
        __result340__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 2231, 1380),__exception_result_var_b308=__builtin_string(""), come_pop_stackframe(), __exception_result_var_b308);
        return __result340__;
    }
    (come_push_stackframe("libneo-c-gc.c", 2233, 1381),__exception_result_var_b309=puts(self), come_pop_stackframe(), __exception_result_var_b309);
    __result341__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 2235, 1382),__exception_result_var_b310=__builtin_string(self), come_pop_stackframe(), __exception_result_var_b310);
    return __result341__;
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
struct integer* __result342__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct integer*)come_null_check(((struct integer*)come_null_check(self, "libneo-c-gc.c", 2253, 1383)), "libneo-c-gc.c", 2253, 1384))->value=value;
    __result342__ = __result_obj__ = self;
    return __result342__;
}

int integer_to_int(struct integer* self){
void* __result_obj__;
int __result343__;
memset(&__result_obj__, 0, sizeof(void*));
    __result343__ = ((struct integer*)come_null_check(((struct integer*)come_null_check(self, "libneo-c-gc.c", 2260, 1385)), "libneo-c-gc.c", 2260, 1386))->value;
    return __result343__;
}

struct integer* char_to_integer(char self){
void* __result_obj__;
struct integer* __exception_result_var_b311;
struct integer* __result344__;
memset(&__result_obj__, 0, sizeof(void*));
    __result344__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 2265, 1388),__exception_result_var_b311=integer_initialize(((struct integer*)come_null_check((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2265, "integer"), "libneo-c-gc.c", 2265, 1387)),self), come_pop_stackframe(), __exception_result_var_b311);
    return __result344__;
}

struct integer* short_to_integer(short short self){
void* __result_obj__;
struct integer* __exception_result_var_b312;
struct integer* __result345__;
memset(&__result_obj__, 0, sizeof(void*));
    __result345__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 2270, 1390),__exception_result_var_b312=integer_initialize(((struct integer*)come_null_check((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2270, "integer"), "libneo-c-gc.c", 2270, 1389)),self), come_pop_stackframe(), __exception_result_var_b312);
    return __result345__;
}

struct integer* int_to_integer(int self){
void* __result_obj__;
struct integer* __exception_result_var_b313;
struct integer* __result346__;
memset(&__result_obj__, 0, sizeof(void*));
    __result346__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 2275, 1392),__exception_result_var_b313=integer_initialize(((struct integer*)come_null_check((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2275, "integer"), "libneo-c-gc.c", 2275, 1391)),self), come_pop_stackframe(), __exception_result_var_b313);
    return __result346__;
}

struct integer* long_to_integer(long self){
void* __result_obj__;
struct integer* __exception_result_var_b314;
struct integer* __result347__;
memset(&__result_obj__, 0, sizeof(void*));
    __result347__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 2280, 1394),__exception_result_var_b314=integer_initialize(((struct integer*)come_null_check((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2280, "integer"), "libneo-c-gc.c", 2280, 1393)),self), come_pop_stackframe(), __exception_result_var_b314);
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
    if(_if_conditional242=((struct integer*)come_null_check(((struct integer*)come_null_check(left, "libneo-c-gc.c", 2285, 1395)), "libneo-c-gc.c", 2285, 1396))->value<((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c-gc.c", 2285, 1397)), "libneo-c-gc.c", 2285, 1398))->value,    _if_conditional242) {
        __result348__ = -1;
        return __result348__;
    }
    else {
        if(_if_conditional243=((struct integer*)come_null_check(((struct integer*)come_null_check(left, "libneo-c-gc.c", 2288, 1399)), "libneo-c-gc.c", 2288, 1400))->value>((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c-gc.c", 2288, 1401)), "libneo-c-gc.c", 2288, 1402))->value,        _if_conditional243) {
            __result349__ = 1;
            return __result349__;
        }
        else {
            __result350__ = 0;
            return __result350__;
        }
    }
    __result351__ = 0;
    return __result351__;
}

_Bool integer_equals(struct integer* self, struct integer* right){
void* __result_obj__;
_Bool __result352__;
memset(&__result_obj__, 0, sizeof(void*));
    __result352__ = ((struct integer*)come_null_check(((struct integer*)come_null_check(self, "libneo-c-gc.c", 2300, 1403)), "libneo-c-gc.c", 2300, 1404))->value==((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c-gc.c", 2300, 1405)), "libneo-c-gc.c", 2300, 1406))->value;
    return __result352__;
}

_Bool integer_operator_equals(struct integer* self, struct integer* right){
void* __result_obj__;
_Bool __result353__;
memset(&__result_obj__, 0, sizeof(void*));
    __result353__ = ((struct integer*)come_null_check(((struct integer*)come_null_check(self, "libneo-c-gc.c", 2305, 1407)), "libneo-c-gc.c", 2305, 1408))->value==((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c-gc.c", 2305, 1409)), "libneo-c-gc.c", 2305, 1410))->value;
    return __result353__;
}

_Bool integer_operator_not_equals(struct integer* self, struct integer* right){
void* __result_obj__;
_Bool __result354__;
memset(&__result_obj__, 0, sizeof(void*));
    __result354__ = ((struct integer*)come_null_check(((struct integer*)come_null_check(self, "libneo-c-gc.c", 2310, 1411)), "libneo-c-gc.c", 2310, 1412))->value!=((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c-gc.c", 2310, 1413)), "libneo-c-gc.c", 2310, 1414))->value;
    return __result354__;
}

struct integer* integer_operator_add(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __exception_result_var_b315;
struct integer* __result355__;
memset(&__result_obj__, 0, sizeof(void*));
    __result355__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 2315, 1420),__exception_result_var_b315=integer_initialize(((struct integer*)come_null_check((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2315, "integer"), "libneo-c-gc.c", 2315, 1415)),((struct integer*)come_null_check(((struct integer*)come_null_check(left, "libneo-c-gc.c", 2315, 1416)), "libneo-c-gc.c", 2315, 1417))->value+((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c-gc.c", 2315, 1418)), "libneo-c-gc.c", 2315, 1419))->value), come_pop_stackframe(), __exception_result_var_b315);
    return __result355__;
}

struct integer* integer_operator_sub(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __exception_result_var_b316;
struct integer* __result356__;
memset(&__result_obj__, 0, sizeof(void*));
    __result356__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 2320, 1426),__exception_result_var_b316=integer_initialize(((struct integer*)come_null_check((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2320, "integer"), "libneo-c-gc.c", 2320, 1421)),((struct integer*)come_null_check(((struct integer*)come_null_check(left, "libneo-c-gc.c", 2320, 1422)), "libneo-c-gc.c", 2320, 1423))->value-((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c-gc.c", 2320, 1424)), "libneo-c-gc.c", 2320, 1425))->value), come_pop_stackframe(), __exception_result_var_b316);
    return __result356__;
}

struct integer* integer_operator_mult(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __exception_result_var_b317;
struct integer* __result357__;
memset(&__result_obj__, 0, sizeof(void*));
    __result357__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 2325, 1432),__exception_result_var_b317=integer_initialize(((struct integer*)come_null_check((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2325, "integer"), "libneo-c-gc.c", 2325, 1427)),((struct integer*)come_null_check(((struct integer*)come_null_check(left, "libneo-c-gc.c", 2325, 1428)), "libneo-c-gc.c", 2325, 1429))->value*((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c-gc.c", 2325, 1430)), "libneo-c-gc.c", 2325, 1431))->value), come_pop_stackframe(), __exception_result_var_b317);
    return __result357__;
}

struct integer* integer_operator_div(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __exception_result_var_b318;
struct integer* __result358__;
memset(&__result_obj__, 0, sizeof(void*));
    __result358__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 2330, 1438),__exception_result_var_b318=integer_initialize(((struct integer*)come_null_check((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2330, "integer"), "libneo-c-gc.c", 2330, 1433)),((struct integer*)come_null_check(((struct integer*)come_null_check(left, "libneo-c-gc.c", 2330, 1434)), "libneo-c-gc.c", 2330, 1435))->value/((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c-gc.c", 2330, 1436)), "libneo-c-gc.c", 2330, 1437))->value), come_pop_stackframe(), __exception_result_var_b318);
    return __result358__;
}

struct integer* integer_operator_mod(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __exception_result_var_b319;
struct integer* __result359__;
memset(&__result_obj__, 0, sizeof(void*));
    __result359__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 2335, 1444),__exception_result_var_b319=integer_initialize(((struct integer*)come_null_check((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2335, "integer"), "libneo-c-gc.c", 2335, 1439)),((struct integer*)come_null_check(((struct integer*)come_null_check(left, "libneo-c-gc.c", 2335, 1440)), "libneo-c-gc.c", 2335, 1441))->value%((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c-gc.c", 2335, 1442)), "libneo-c-gc.c", 2335, 1443))->value), come_pop_stackframe(), __exception_result_var_b319);
    return __result359__;
}

struct integer* integer_operator_lshift(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __exception_result_var_b320;
struct integer* __result360__;
memset(&__result_obj__, 0, sizeof(void*));
    __result360__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 2340, 1450),__exception_result_var_b320=integer_initialize(((struct integer*)come_null_check((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2340, "integer"), "libneo-c-gc.c", 2340, 1445)),((struct integer*)come_null_check(((struct integer*)come_null_check(left, "libneo-c-gc.c", 2340, 1446)), "libneo-c-gc.c", 2340, 1447))->value<<((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c-gc.c", 2340, 1448)), "libneo-c-gc.c", 2340, 1449))->value), come_pop_stackframe(), __exception_result_var_b320);
    return __result360__;
}

struct integer* integer_operator_rshift(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __exception_result_var_b321;
struct integer* __result361__;
memset(&__result_obj__, 0, sizeof(void*));
    __result361__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 2345, 1456),__exception_result_var_b321=integer_initialize(((struct integer*)come_null_check((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2345, "integer"), "libneo-c-gc.c", 2345, 1451)),((struct integer*)come_null_check(((struct integer*)come_null_check(left, "libneo-c-gc.c", 2345, 1452)), "libneo-c-gc.c", 2345, 1453))->value>>((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c-gc.c", 2345, 1454)), "libneo-c-gc.c", 2345, 1455))->value), come_pop_stackframe(), __exception_result_var_b321);
    return __result361__;
}

struct integer* integer_operator_gteq(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __exception_result_var_b322;
struct integer* __result362__;
memset(&__result_obj__, 0, sizeof(void*));
    __result362__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 2350, 1462),__exception_result_var_b322=integer_initialize(((struct integer*)come_null_check((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2350, "integer"), "libneo-c-gc.c", 2350, 1457)),((struct integer*)come_null_check(((struct integer*)come_null_check(left, "libneo-c-gc.c", 2350, 1458)), "libneo-c-gc.c", 2350, 1459))->value>=((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c-gc.c", 2350, 1460)), "libneo-c-gc.c", 2350, 1461))->value), come_pop_stackframe(), __exception_result_var_b322);
    return __result362__;
}

struct integer* integer_operator_lteq(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __exception_result_var_b323;
struct integer* __result363__;
memset(&__result_obj__, 0, sizeof(void*));
    __result363__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 2355, 1468),__exception_result_var_b323=integer_initialize(((struct integer*)come_null_check((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2355, "integer"), "libneo-c-gc.c", 2355, 1463)),((struct integer*)come_null_check(((struct integer*)come_null_check(left, "libneo-c-gc.c", 2355, 1464)), "libneo-c-gc.c", 2355, 1465))->value<=((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c-gc.c", 2355, 1466)), "libneo-c-gc.c", 2355, 1467))->value), come_pop_stackframe(), __exception_result_var_b323);
    return __result363__;
}

struct integer* integer_operator_lt(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __exception_result_var_b324;
struct integer* __result364__;
memset(&__result_obj__, 0, sizeof(void*));
    __result364__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 2360, 1474),__exception_result_var_b324=integer_initialize(((struct integer*)come_null_check((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2360, "integer"), "libneo-c-gc.c", 2360, 1469)),((struct integer*)come_null_check(((struct integer*)come_null_check(left, "libneo-c-gc.c", 2360, 1470)), "libneo-c-gc.c", 2360, 1471))->value<((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c-gc.c", 2360, 1472)), "libneo-c-gc.c", 2360, 1473))->value), come_pop_stackframe(), __exception_result_var_b324);
    return __result364__;
}

struct integer* integer_operator_gt(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __exception_result_var_b325;
struct integer* __result365__;
memset(&__result_obj__, 0, sizeof(void*));
    __result365__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 2365, 1480),__exception_result_var_b325=integer_initialize(((struct integer*)come_null_check((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2365, "integer"), "libneo-c-gc.c", 2365, 1475)),((struct integer*)come_null_check(((struct integer*)come_null_check(left, "libneo-c-gc.c", 2365, 1476)), "libneo-c-gc.c", 2365, 1477))->value>((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c-gc.c", 2365, 1478)), "libneo-c-gc.c", 2365, 1479))->value), come_pop_stackframe(), __exception_result_var_b325);
    return __result365__;
}

struct integer* integer_operator_and(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __exception_result_var_b326;
struct integer* __result366__;
memset(&__result_obj__, 0, sizeof(void*));
    __result366__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 2370, 1486),__exception_result_var_b326=integer_initialize(((struct integer*)come_null_check((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2370, "integer"), "libneo-c-gc.c", 2370, 1481)),((struct integer*)come_null_check(((struct integer*)come_null_check(left, "libneo-c-gc.c", 2370, 1482)), "libneo-c-gc.c", 2370, 1483))->value&((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c-gc.c", 2370, 1484)), "libneo-c-gc.c", 2370, 1485))->value), come_pop_stackframe(), __exception_result_var_b326);
    return __result366__;
}

struct integer* integer_operator_xor(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __exception_result_var_b327;
struct integer* __result367__;
memset(&__result_obj__, 0, sizeof(void*));
    __result367__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 2375, 1492),__exception_result_var_b327=integer_initialize(((struct integer*)come_null_check((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2375, "integer"), "libneo-c-gc.c", 2375, 1487)),((struct integer*)come_null_check(((struct integer*)come_null_check(left, "libneo-c-gc.c", 2375, 1488)), "libneo-c-gc.c", 2375, 1489))->value^((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c-gc.c", 2375, 1490)), "libneo-c-gc.c", 2375, 1491))->value), come_pop_stackframe(), __exception_result_var_b327);
    return __result367__;
}

struct integer* integer_operator_or(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __exception_result_var_b328;
struct integer* __result368__;
memset(&__result_obj__, 0, sizeof(void*));
    __result368__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 2380, 1498),__exception_result_var_b328=integer_initialize(((struct integer*)come_null_check((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2380, "integer"), "libneo-c-gc.c", 2380, 1493)),((struct integer*)come_null_check(((struct integer*)come_null_check(left, "libneo-c-gc.c", 2380, 1494)), "libneo-c-gc.c", 2380, 1495))->value|((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c-gc.c", 2380, 1496)), "libneo-c-gc.c", 2380, 1497))->value), come_pop_stackframe(), __exception_result_var_b328);
    return __result368__;
}

struct integer* integer_operator_andand(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __exception_result_var_b329;
struct integer* __result369__;
memset(&__result_obj__, 0, sizeof(void*));
    __result369__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 2385, 1504),__exception_result_var_b329=integer_initialize(((struct integer*)come_null_check((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2385, "integer"), "libneo-c-gc.c", 2385, 1499)),((struct integer*)come_null_check(((struct integer*)come_null_check(left, "libneo-c-gc.c", 2385, 1500)), "libneo-c-gc.c", 2385, 1501))->value&&((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c-gc.c", 2385, 1502)), "libneo-c-gc.c", 2385, 1503))->value), come_pop_stackframe(), __exception_result_var_b329);
    return __result369__;
}

struct integer* integer_operator_oror(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __exception_result_var_b330;
struct integer* __result370__;
memset(&__result_obj__, 0, sizeof(void*));
    __result370__ = __result_obj__ = (come_push_stackframe("libneo-c-gc.c", 2390, 1510),__exception_result_var_b330=integer_initialize(((struct integer*)come_null_check((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2390, "integer"), "libneo-c-gc.c", 2390, 1505)),((struct integer*)come_null_check(((struct integer*)come_null_check(left, "libneo-c-gc.c", 2390, 1506)), "libneo-c-gc.c", 2390, 1507))->value||((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c-gc.c", 2390, 1508)), "libneo-c-gc.c", 2390, 1509))->value), come_pop_stackframe(), __exception_result_var_b330);
    return __result370__;
}

