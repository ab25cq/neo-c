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
struct lconv
{
    char* decimal_point;
    char* thousands_sep;
    char* grouping;
    char* int_curr_symbol;
    char* currency_symbol;
    char* mon_decimal_point;
    char* mon_thousands_sep;
    char* mon_grouping;
    char* positive_sign;
    char* negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    char int_p_cs_precedes;
    char int_p_sep_by_space;
    char int_n_cs_precedes;
    char int_n_sep_by_space;
    char int_p_sign_posn;
    char int_n_sign_posn;
};
extern char* program_invocation_short_name;
extern char* program_invocation_name;
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
struct sRightValueObject;
struct CVALUE
{
    char* c_value;
    struct sType* type;
    struct sVar* var;
    struct sRightValueObject* right_value_objects;
    char* c_value_without_right_value_objects;
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
    _Bool mNoResultType;
    _Bool mDeclaredResultObject;
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
    struct buffer* mSourceHead3;
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
    _Bool mStored;
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
    _Bool in_fun_param;
    _Bool inhibits_output_code;
    _Bool inhibits_output_code2;
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
char* basename();
char* setlocale(int anonymous_var_nameX462, const char* anonymous_var_nameX463);
struct lconv* localeconv();
struct __locale_struct* duplocale(struct __locale_struct* anonymous_var_nameX464);
void freelocale(struct __locale_struct* anonymous_var_nameX465);
struct __locale_struct* newlocale(int anonymous_var_nameX466, const char* anonymous_var_nameX467, struct __locale_struct* anonymous_var_nameX468);
struct __locale_struct* uselocale(struct __locale_struct* anonymous_var_nameX469);
int* __errno_location();
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
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
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
char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info, _Bool no_static);
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
void add_come_code_at_source_head3(struct sInfo* info, const char* msg, ...);
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
_Bool existance_free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info, _Bool no_delete_from_right_value_objects);
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
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info);
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
unsigned int GC_get_version();
unsigned long int GC_get_gc_no();
void GC_set_oom_fn(void* (*anonymous_var_nameX506)(unsigned long int));
void* (*GC_get_oom_fn())(unsigned long int);
void GC_set_on_heap_resize(void (*anonymous_var_nameX508)(unsigned long int));
void (*GC_get_on_heap_resize())(unsigned long int);
void GC_set_on_collection_event(void (*anonymous_var_nameX510)(enum anonymous_typeY5));
void (*GC_get_on_collection_event())(enum anonymous_typeY5);
void GC_set_find_leak(int anonymous_var_nameX511);
int GC_get_find_leak();
void GC_set_all_interior_pointers(int anonymous_var_nameX512);
int GC_get_all_interior_pointers();
void GC_set_finalize_on_demand(int anonymous_var_nameX513);
int GC_get_finalize_on_demand();
void GC_set_java_finalization(int anonymous_var_nameX514);
int GC_get_java_finalization();
void GC_set_finalizer_notifier(void (*anonymous_var_nameX515)());
void (*GC_get_finalizer_notifier())();
void GC_set_dont_expand(int anonymous_var_nameX516);
int GC_get_dont_expand();
void GC_set_full_freq(int anonymous_var_nameX517);
int GC_get_full_freq();
void GC_set_non_gc_bytes(unsigned long int anonymous_var_nameX518);
unsigned long int GC_get_non_gc_bytes();
void GC_set_no_dls(int anonymous_var_nameX519);
int GC_get_no_dls();
void GC_set_free_space_divisor(unsigned long int anonymous_var_nameX520);
unsigned long int GC_get_free_space_divisor();
void GC_set_max_retries(unsigned long int anonymous_var_nameX521);
unsigned long int GC_get_max_retries();
void GC_set_dont_precollect(int anonymous_var_nameX522);
int GC_get_dont_precollect();
void GC_set_time_limit(unsigned long int anonymous_var_nameX523);
unsigned long int GC_get_time_limit();
void GC_set_time_limit_tv(struct GC_timeval_s anonymous_var_nameX524);
struct GC_timeval_s GC_get_time_limit_tv();
void GC_set_allocd_bytes_per_finalizer(unsigned long int anonymous_var_nameX525);
unsigned long int GC_get_allocd_bytes_per_finalizer();
void GC_start_performance_measurement();
unsigned long int GC_get_full_gc_total_time();
void GC_set_pages_executable(int anonymous_var_nameX526);
int GC_get_pages_executable();
void GC_set_min_bytes_allocd(unsigned long int anonymous_var_nameX527);
unsigned long int GC_get_min_bytes_allocd();
void GC_set_rate(int anonymous_var_nameX528);
int GC_get_rate();
void GC_set_max_prior_attempts(int anonymous_var_nameX529);
int GC_get_max_prior_attempts();
void GC_set_disable_automatic_collection(int anonymous_var_nameX530);
int GC_get_disable_automatic_collection();
void GC_set_handle_fork(int anonymous_var_nameX531);
void GC_atfork_prepare();
void GC_atfork_parent();
void GC_atfork_child();
void GC_init();
int GC_is_init_called();
void GC_deinit();
void* GC_malloc(unsigned long int anonymous_var_nameX532);
void* GC_malloc_atomic(unsigned long int anonymous_var_nameX533);
char* GC_strdup(const char* anonymous_var_nameX534);
char* GC_strndup(const char* anonymous_var_nameX535, unsigned long int anonymous_var_nameX536);
void* GC_malloc_uncollectable(unsigned long int anonymous_var_nameX537);
void* GC_malloc_stubborn(unsigned long int anonymous_var_nameX538);
void* GC_memalign(unsigned long int anonymous_var_nameX539, unsigned long int anonymous_var_nameX540);
int GC_posix_memalign(void** anonymous_var_nameX541, unsigned long int anonymous_var_nameX542, unsigned long int anonymous_var_nameX543);
void GC_free(void* anonymous_var_nameX544);
void GC_change_stubborn(const void* anonymous_var_nameX545);
void GC_end_stubborn_change(const void* anonymous_var_nameX546);
void* GC_base(void* anonymous_var_nameX547);
int GC_is_heap_ptr(const void* anonymous_var_nameX548);
unsigned long int GC_size(const void* anonymous_var_nameX549);
void* GC_realloc(void* anonymous_var_nameX550, unsigned long int anonymous_var_nameX551);
int GC_expand_hp(unsigned long int anonymous_var_nameX552);
void GC_set_max_heap_size(unsigned long int anonymous_var_nameX553);
void GC_exclude_static_roots(void* anonymous_var_nameX554, void* anonymous_var_nameX555);
void GC_clear_exclusion_table();
void GC_clear_roots();
void GC_add_roots(void* anonymous_var_nameX556, void* anonymous_var_nameX557);
void GC_remove_roots(void* anonymous_var_nameX558, void* anonymous_var_nameX559);
void GC_register_displacement(unsigned long int anonymous_var_nameX560);
void GC_debug_register_displacement(unsigned long int anonymous_var_nameX561);
void GC_gcollect();
void GC_gcollect_and_unmap();
int GC_try_to_collect(int (*anonymous_var_nameX562)());
void GC_set_stop_func(int (*anonymous_var_nameX563)());
int (*GC_get_stop_func())();
unsigned long int GC_get_heap_size();
unsigned long int GC_get_free_bytes();
unsigned long int GC_get_unmapped_bytes();
unsigned long int GC_get_bytes_since_gc();
unsigned long int GC_get_expl_freed_bytes_since_gc();
unsigned long int GC_get_total_bytes();
unsigned long int GC_get_obtained_from_os_bytes();
void GC_get_heap_usage_safe(unsigned long int* anonymous_var_nameX564, unsigned long int* anonymous_var_nameX565, unsigned long int* anonymous_var_nameX566, unsigned long int* anonymous_var_nameX567, unsigned long int* anonymous_var_nameX568);
unsigned long int GC_get_prof_stats(struct GC_prof_stats_s* anonymous_var_nameX569, unsigned long int anonymous_var_nameX570);
unsigned long int GC_get_size_map_at(int i);
unsigned long int GC_get_memory_use();
void GC_disable();
int GC_is_disabled();
void GC_enable();
void GC_set_manual_vdb_allowed(int anonymous_var_nameX571);
int GC_get_manual_vdb_allowed();
void GC_enable_incremental();
int GC_is_incremental_mode();
int GC_incremental_protection_needs();
void GC_start_incremental_collection();
int GC_collect_a_little();
void* GC_malloc_ignore_off_page(unsigned long int anonymous_var_nameX572);
void* GC_malloc_atomic_ignore_off_page(unsigned long int anonymous_var_nameX573);
void* GC_malloc_atomic_uncollectable(unsigned long int anonymous_var_nameX574);
void* GC_debug_malloc_atomic_uncollectable(unsigned long int anonymous_var_nameX575, unsigned long int ra, const char* s, int i);
void* GC_debug_malloc(unsigned long int anonymous_var_nameX576, unsigned long int ra, const char* s, int i);
void* GC_debug_malloc_atomic(unsigned long int anonymous_var_nameX577, unsigned long int ra, const char* s, int i);
char* GC_debug_strdup(const char* anonymous_var_nameX578, unsigned long int ra, const char* s, int i);
char* GC_debug_strndup(const char* anonymous_var_nameX579, unsigned long int anonymous_var_nameX580, unsigned long int ra, const char* s, int i);
void* GC_debug_malloc_uncollectable(unsigned long int anonymous_var_nameX581, unsigned long int ra, const char* s, int i);
void* GC_debug_malloc_stubborn(unsigned long int anonymous_var_nameX582, unsigned long int ra, const char* s, int i);
void* GC_debug_malloc_ignore_off_page(unsigned long int anonymous_var_nameX583, unsigned long int ra, const char* s, int i);
void* GC_debug_malloc_atomic_ignore_off_page(unsigned long int anonymous_var_nameX584, unsigned long int ra, const char* s, int i);
void GC_debug_free(void* anonymous_var_nameX585);
void* GC_debug_realloc(void* anonymous_var_nameX586, unsigned long int anonymous_var_nameX587, unsigned long int ra, const char* s, int i);
void GC_debug_change_stubborn(const void* anonymous_var_nameX588);
void GC_debug_end_stubborn_change(const void* anonymous_var_nameX589);
void* GC_debug_malloc_replacement(unsigned long int anonymous_var_nameX590);
void* GC_debug_realloc_replacement(void* anonymous_var_nameX591, unsigned long int anonymous_var_nameX592);
void GC_register_finalizer(void* anonymous_var_nameX595, void (*anonymous_var_nameX596)(void*,void*), void* anonymous_var_nameX597, void (*anonymous_var_nameX598)(void*,void*), void** anonymous_var_nameX599);
void GC_debug_register_finalizer(void* anonymous_var_nameX600, void (*anonymous_var_nameX601)(void*,void*), void* anonymous_var_nameX602, void (*anonymous_var_nameX603)(void*,void*), void** anonymous_var_nameX604);
void GC_register_finalizer_ignore_self(void* anonymous_var_nameX605, void (*anonymous_var_nameX606)(void*,void*), void* anonymous_var_nameX607, void (*anonymous_var_nameX608)(void*,void*), void** anonymous_var_nameX609);
void GC_debug_register_finalizer_ignore_self(void* anonymous_var_nameX610, void (*anonymous_var_nameX611)(void*,void*), void* anonymous_var_nameX612, void (*anonymous_var_nameX613)(void*,void*), void** anonymous_var_nameX614);
void GC_register_finalizer_no_order(void* anonymous_var_nameX615, void (*anonymous_var_nameX616)(void*,void*), void* anonymous_var_nameX617, void (*anonymous_var_nameX618)(void*,void*), void** anonymous_var_nameX619);
void GC_debug_register_finalizer_no_order(void* anonymous_var_nameX620, void (*anonymous_var_nameX621)(void*,void*), void* anonymous_var_nameX622, void (*anonymous_var_nameX623)(void*,void*), void** anonymous_var_nameX624);
void GC_register_finalizer_unreachable(void* anonymous_var_nameX625, void (*anonymous_var_nameX626)(void*,void*), void* anonymous_var_nameX627, void (*anonymous_var_nameX628)(void*,void*), void** anonymous_var_nameX629);
void GC_debug_register_finalizer_unreachable(void* anonymous_var_nameX630, void (*anonymous_var_nameX631)(void*,void*), void* anonymous_var_nameX632, void (*anonymous_var_nameX633)(void*,void*), void** anonymous_var_nameX634);
int GC_register_disappearing_link(void** anonymous_var_nameX635);
int GC_general_register_disappearing_link(void** anonymous_var_nameX636, const void* anonymous_var_nameX637);
int GC_move_disappearing_link(void** anonymous_var_nameX638, void** anonymous_var_nameX639);
int GC_unregister_disappearing_link(void** anonymous_var_nameX640);
int GC_register_long_link(void** anonymous_var_nameX641, const void* anonymous_var_nameX642);
int GC_move_long_link(void** anonymous_var_nameX643, void** anonymous_var_nameX644);
int GC_unregister_long_link(void** anonymous_var_nameX645);
void GC_set_toggleref_func(enum anonymous_typeY6 (*anonymous_var_nameX647)(void*));
enum anonymous_typeY6 (*GC_get_toggleref_func())(void*);
int GC_toggleref_add(void* anonymous_var_nameX648, int anonymous_var_nameX649);
void GC_set_await_finalize_proc(void (*anonymous_var_nameX651)(void*));
void (*GC_get_await_finalize_proc())(void*);
int GC_should_invoke_finalizers();
int GC_invoke_finalizers();
void GC_noop1(unsigned long int anonymous_var_nameX652);
void GC_set_warn_proc(void (*anonymous_var_nameX655)(char*,unsigned long int));
void (*GC_get_warn_proc())(char*,unsigned long int);
void GC_ignore_warn_proc(char* anonymous_var_nameX656, unsigned long int anonymous_var_nameX657);
void GC_set_log_fd(int anonymous_var_nameX658);
void GC_set_abort_func(void (*anonymous_var_nameX660)(const char*));
void (*GC_get_abort_func())(const char*);
void GC_abort_on_oom();
void* GC_call_with_alloc_lock(void* (*anonymous_var_nameX662)(void*), void* anonymous_var_nameX663);
void* GC_call_with_stack_base(void* (*anonymous_var_nameX666)(struct GC_stack_base*,void*), void* anonymous_var_nameX667);
void GC_start_mark_threads();
void* GC_do_blocking(void* (*anonymous_var_nameX668)(void*), void* anonymous_var_nameX669);
void* GC_call_with_gc_active(void* (*anonymous_var_nameX670)(void*), void* anonymous_var_nameX671);
int GC_get_stack_base(struct GC_stack_base* anonymous_var_nameX672);
void* GC_get_my_stackbottom(struct GC_stack_base* anonymous_var_nameX673);
void GC_set_stackbottom(void* anonymous_var_nameX674, const struct GC_stack_base* anonymous_var_nameX675);
void* GC_same_obj(void* anonymous_var_nameX676, void* anonymous_var_nameX677);
void* GC_pre_incr(void** anonymous_var_nameX678, long anonymous_var_nameX679);
void* GC_post_incr(void** anonymous_var_nameX680, long anonymous_var_nameX681);
void* GC_is_visible(void* anonymous_var_nameX682);
void* GC_is_valid_displacement(void* anonymous_var_nameX683);
void GC_dump();
void GC_dump_named(const char* anonymous_var_nameX684);
void GC_dump_regions();
void GC_dump_finalization();
void GC_ptr_store_and_dirty(void* anonymous_var_nameX685, const void* anonymous_var_nameX686);
void GC_debug_ptr_store_and_dirty(void* anonymous_var_nameX687, const void* anonymous_var_nameX688);
void* GC_malloc_many(unsigned long int anonymous_var_nameX709);
void GC_register_has_static_roots_callback(int (*anonymous_var_nameX713)(const char*,void*,unsigned long int));
void GC_set_force_unmap_on_gcollect(int anonymous_var_nameX714);
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
char* xnoextname(char* path);
char* xextname(char* path);
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
// uniq global variable
// source head3
char* gComeStackFrameSName[16];
int gComeStackFrameSLine[16];
int gComeStackFrameID[1024];
int gNumComeStackFrame=0;
char* gComeStackFrameBuffer=((void*)0);
void* gComeResultObject=((void*)0);
static _Bool gComeMallocLib=(_Bool)0;
static _Bool gComeDebugLib=(_Bool)0;
_Bool gComeGCLib=(_Bool)0;
struct sMemHeader* gAllocMem;

// inline function
static inline _Bool die(char* msg){
    perror(msg);
    stackframe();
    exit(4);
    return (_Bool)0;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long int len){
void* __result_obj__=(void*)0;
struct buffer* result_0;
struct buffer* __result1__;
    result_0=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2111, "buffer"));
    buffer_append(result_0,self,sizeof(char)*len);
    __result1__ = __result_obj__ = result_0;
    return __result1__;
}
static inline struct buffer* shortpa_to_buffer(short short* self, unsigned long int len){
void* __result_obj__=(void*)0;
struct buffer* result_1;
struct buffer* __result2__;
    result_1=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2118, "buffer"));
    buffer_append(result_1,(char*)self,sizeof(short short)*len);
    __result2__ = __result_obj__ = result_1;
    return __result2__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long int len){
void* __result_obj__=(void*)0;
struct buffer* result_2;
struct buffer* __result3__;
    result_2=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2125, "buffer"));
    buffer_append(result_2,(char*)self,sizeof(int)*len);
    __result3__ = __result_obj__ = result_2;
    return __result3__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long int len){
void* __result_obj__=(void*)0;
struct buffer* result_3;
struct buffer* __result4__;
    result_3=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2132, "buffer"));
    buffer_append(result_3,(char*)self,sizeof(long)*len);
    __result4__ = __result_obj__ = result_3;
    return __result4__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long int len){
void* __result_obj__=(void*)0;
struct buffer* result_4;
struct buffer* __result5__;
    result_4=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2139, "buffer"));
    buffer_append(result_4,(char*)self,sizeof(float)*len);
    __result5__ = __result_obj__ = result_4;
    return __result5__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long int len){
void* __result_obj__=(void*)0;
struct buffer* result_5;
struct buffer* __result6__;
    result_5=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2146, "buffer"));
    buffer_append(result_5,(char*)self,sizeof(double)*len);
    __result6__ = __result_obj__ = result_5;
    return __result6__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1char* result_6;
struct smart_pointer$1char* __result7__;
    result_6=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2162, "smart_pointer$1char");
    result_6->memory=buffer_clone(self);
    result_6->p=result_6->memory->buf;
    __result7__ = __result_obj__ = result_6;
    return __result7__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1char* result_7;
struct smart_pointer$1char* __result8__;
    result_7=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2172, "smart_pointer$1char");
    result_7->memory=buffer_clone(self);
    result_7->p=(char*)result_7->memory->buf;
    __result8__ = __result_obj__ = result_7;
    return __result8__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1short* result_8;
struct smart_pointer$1short* __result9__;
    result_8=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2182, "smart_pointer$1short");
    result_8->memory=buffer_clone(self);
    result_8->p=(short short*)result_8->memory->buf;
    __result9__ = __result_obj__ = result_8;
    return __result9__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1int* result_9;
struct smart_pointer$1int* __result10__;
    result_9=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2192, "smart_pointer$1int");
    result_9->memory=buffer_clone(self);
    result_9->p=(int*)result_9->memory->buf;
    __result10__ = __result_obj__ = result_9;
    return __result10__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1long* result_10;
struct smart_pointer$1long* __result11__;
    result_10=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2202, "smart_pointer$1long");
    result_10->memory=buffer_clone(self);
    result_10->p=(long*)result_10->memory->buf;
    __result11__ = __result_obj__ = result_10;
    return __result11__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long int len){
void* __result_obj__=(void*)0;
struct smart_pointer$1char* __result13__;
    __result13__ = __result_obj__ = smart_pointer$1char_initialize((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2373, "smart_pointer$1char"),self,len);
    return __result13__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, unsigned long int len){
void* __result_obj__=(void*)0;
struct smart_pointer$1short* __result15__;
    __result15__ = __result_obj__ = smart_pointer$1short_initialize((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2378, "smart_pointer$1short"),self,len);
    return __result15__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long int len){
void* __result_obj__=(void*)0;
struct smart_pointer$1int* __result17__;
    __result17__ = __result_obj__ = smart_pointer$1int_initialize((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2383, "smart_pointer$1int"),self,len);
    return __result17__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long int len){
void* __result_obj__=(void*)0;
struct smart_pointer$1long* __result19__;
    __result19__ = __result_obj__ = smart_pointer$1long_initialize((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2388, "smart_pointer$1long"),self,len);
    return __result19__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long int len){
void* __result_obj__=(void*)0;
struct smart_pointer$1float* __result21__;
    __result21__ = __result_obj__ = smart_pointer$1float_initialize((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./neo-c.h", 2393, "smart_pointer$1float"),self,len);
    return __result21__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long int len){
void* __result_obj__=(void*)0;
struct smart_pointer$1double* __result23__;
    __result23__ = __result_obj__ = smart_pointer$1double_initialize((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./neo-c.h", 2398, "smart_pointer$1double"),self,len);
    return __result23__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long int len){
void* __result_obj__=(void*)0;
struct list$1char* __result26__;
    __result26__ = __result_obj__ = list$1char_initialize_with_values((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./neo-c.h", 2403, "list$1char"),len,self);
    return __result26__;
}
static inline struct list$1short* shortpa_to_list(short short* self, unsigned long int len){
void* __result_obj__=(void*)0;
struct list$1short* __result29__;
    __result29__ = __result_obj__ = list$1short_initialize_with_values((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./neo-c.h", 2408, "list$1short"),len,self);
    return __result29__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long int len){
void* __result_obj__=(void*)0;
struct list$1int* __result32__;
    __result32__ = __result_obj__ = list$1int_initialize_with_values((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./neo-c.h", 2413, "list$1int"),len,self);
    return __result32__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long int len){
void* __result_obj__=(void*)0;
struct list$1long* __result35__;
    __result35__ = __result_obj__ = list$1long_initialize_with_values((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./neo-c.h", 2418, "list$1long"),len,self);
    return __result35__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long int len){
void* __result_obj__=(void*)0;
struct list$1float* __result38__;
    __result38__ = __result_obj__ = list$1float_initialize_with_values((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./neo-c.h", 2423, "list$1float"),len,self);
    return __result38__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long int len){
void* __result_obj__=(void*)0;
struct list$1double* __result41__;
    __result41__ = __result_obj__ = list$1double_initialize_with_values((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./neo-c.h", 2428, "list$1double"),len,self);
    return __result41__;
}
static inline unsigned long int charpa_length(char* self, unsigned long int len){
    return len;
}
static inline unsigned long int shortpa_length(short short* self, unsigned long int len){
    return len;
}
static inline unsigned long int intpa_length(int* self, unsigned long int len){
    return len;
}
static inline unsigned long int longpa_length(long* self, unsigned long int len){
    return len;
}
static inline unsigned long int floatpa_length(float* self, unsigned long int len){
    return len;
}
static inline unsigned long int doublepa_length(double* self, unsigned long int len){
    return len;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
char* __result42__;
    __result42__ = __result_obj__ = xsprintf(msg,self);
    return __result42__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
char* __result43__;
    __result43__ = __result_obj__ = xsprintf(msg,self);
    return __result43__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
char* __result44__;
    __result44__ = __result_obj__ = xsprintf(msg,self);
    return __result44__;
}

// body function













static struct smart_pointer$1char* smart_pointer$1char_initialize(struct smart_pointer$1char* self, void* memory, int size){
void* __result_obj__=(void*)0;
struct smart_pointer$1char* __result12__;
    self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2214, "buffer"));
    buffer_append(self->memory,memory,sizeof(char)*size);
    self->p=(char*)self->memory->buf;
    __result12__ = __result_obj__ = self;
    return __result12__;
}


static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size){
void* __result_obj__=(void*)0;
struct smart_pointer$1short* __result14__;
    self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2214, "buffer"));
    buffer_append(self->memory,memory,sizeof(short short)*size);
    self->p=(short short*)self->memory->buf;
    __result14__ = __result_obj__ = self;
    return __result14__;
}


static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size){
void* __result_obj__=(void*)0;
struct smart_pointer$1int* __result16__;
    self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2214, "buffer"));
    buffer_append(self->memory,memory,sizeof(int)*size);
    self->p=(int*)self->memory->buf;
    __result16__ = __result_obj__ = self;
    return __result16__;
}


static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size){
void* __result_obj__=(void*)0;
struct smart_pointer$1long* __result18__;
    self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2214, "buffer"));
    buffer_append(self->memory,memory,sizeof(long)*size);
    self->p=(long*)self->memory->buf;
    __result18__ = __result_obj__ = self;
    return __result18__;
}


static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size){
void* __result_obj__=(void*)0;
struct smart_pointer$1float* __result20__;
    self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2214, "buffer"));
    buffer_append(self->memory,memory,sizeof(float)*size);
    self->p=(float*)self->memory->buf;
    __result20__ = __result_obj__ = self;
    return __result20__;
}


static struct smart_pointer$1double* smart_pointer$1double_initialize(struct smart_pointer$1double* self, void* memory, int size){
void* __result_obj__=(void*)0;
struct smart_pointer$1double* __result22__;
    self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2214, "buffer"));
    buffer_append(self->memory,memory,sizeof(double)*size);
    self->p=(double*)self->memory->buf;
    __result22__ = __result_obj__ = self;
    return __result22__;
}


static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
int i_11;
struct list$1char* __result25__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_11=0;    i_11<num_value;    i_11++    ){
        list$1char_push_back(self,values[i_11]);
    }
    __result25__ = __result_obj__ = self;
    return __result25__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
struct list_item$1char* litem_12;
struct list_item$1char* litem_13;
struct list_item$1char* litem_14;
struct list$1char* __result24__;
    if(self->len==0) {
        litem_12=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 219, "list_item$1char");
        litem_12->prev=((void*)0);
        litem_12->next=((void*)0);
        litem_12->item=item;
        self->tail=litem_12;
        self->head=litem_12;
    }
    else {
        if(self->len==1) {
            litem_13=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 229, "list_item$1char");
            litem_13->prev=self->head;
            litem_13->next=((void*)0);
            litem_13->item=item;
            self->tail=litem_13;
            self->head->next=litem_13;
        }
        else {
            litem_14=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 239, "list_item$1char");
            litem_14->prev=self->tail;
            litem_14->next=((void*)0);
            litem_14->item=item;
            self->tail->next=litem_14;
            self->tail=litem_14;
        }
    }
    self->len++;
    __result24__ = __result_obj__ = self;
    return __result24__;
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values){
void* __result_obj__=(void*)0;
int i_15;
struct list$1short* __result28__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_15=0;    i_15<num_value;    i_15++    ){
        list$1short_push_back(self,values[i_15]);
    }
    __result28__ = __result_obj__ = self;
    return __result28__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short short item){
void* __result_obj__=(void*)0;
struct list_item$1short* litem_16;
struct list_item$1short* litem_17;
struct list_item$1short* litem_18;
struct list$1short* __result27__;
    if(self->len==0) {
        litem_16=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 219, "list_item$1short");
        litem_16->prev=((void*)0);
        litem_16->next=((void*)0);
        litem_16->item=item;
        self->tail=litem_16;
        self->head=litem_16;
    }
    else {
        if(self->len==1) {
            litem_17=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 229, "list_item$1short");
            litem_17->prev=self->head;
            litem_17->next=((void*)0);
            litem_17->item=item;
            self->tail=litem_17;
            self->head->next=litem_17;
        }
        else {
            litem_18=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 239, "list_item$1short");
            litem_18->prev=self->tail;
            litem_18->next=((void*)0);
            litem_18->item=item;
            self->tail->next=litem_18;
            self->tail=litem_18;
        }
    }
    self->len++;
    __result27__ = __result_obj__ = self;
    return __result27__;
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_19;
struct list$1int* __result31__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_19=0;    i_19<num_value;    i_19++    ){
        list$1int_push_back(self,values[i_19]);
    }
    __result31__ = __result_obj__ = self;
    return __result31__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
struct list_item$1int* litem_20;
struct list_item$1int* litem_21;
struct list_item$1int* litem_22;
struct list$1int* __result30__;
    if(self->len==0) {
        litem_20=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 219, "list_item$1int");
        litem_20->prev=((void*)0);
        litem_20->next=((void*)0);
        litem_20->item=item;
        self->tail=litem_20;
        self->head=litem_20;
    }
    else {
        if(self->len==1) {
            litem_21=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 229, "list_item$1int");
            litem_21->prev=self->head;
            litem_21->next=((void*)0);
            litem_21->item=item;
            self->tail=litem_21;
            self->head->next=litem_21;
        }
        else {
            litem_22=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 239, "list_item$1int");
            litem_22->prev=self->tail;
            litem_22->next=((void*)0);
            litem_22->item=item;
            self->tail->next=litem_22;
            self->tail=litem_22;
        }
    }
    self->len++;
    __result30__ = __result_obj__ = self;
    return __result30__;
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_23;
struct list$1long* __result34__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_23=0;    i_23<num_value;    i_23++    ){
        list$1long_push_back(self,values[i_23]);
    }
    __result34__ = __result_obj__ = self;
    return __result34__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
struct list_item$1long* litem_24;
struct list_item$1long* litem_25;
struct list_item$1long* litem_26;
struct list$1long* __result33__;
    if(self->len==0) {
        litem_24=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 219, "list_item$1long");
        litem_24->prev=((void*)0);
        litem_24->next=((void*)0);
        litem_24->item=item;
        self->tail=litem_24;
        self->head=litem_24;
    }
    else {
        if(self->len==1) {
            litem_25=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 229, "list_item$1long");
            litem_25->prev=self->head;
            litem_25->next=((void*)0);
            litem_25->item=item;
            self->tail=litem_25;
            self->head->next=litem_25;
        }
        else {
            litem_26=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 239, "list_item$1long");
            litem_26->prev=self->tail;
            litem_26->next=((void*)0);
            litem_26->item=item;
            self->tail->next=litem_26;
            self->tail=litem_26;
        }
    }
    self->len++;
    __result33__ = __result_obj__ = self;
    return __result33__;
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_27;
struct list$1float* __result37__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_27=0;    i_27<num_value;    i_27++    ){
        list$1float_push_back(self,values[i_27]);
    }
    __result37__ = __result_obj__ = self;
    return __result37__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
struct list_item$1float* litem_28;
struct list_item$1float* litem_29;
struct list_item$1float* litem_30;
struct list$1float* __result36__;
    if(self->len==0) {
        litem_28=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 219, "list_item$1float");
        litem_28->prev=((void*)0);
        litem_28->next=((void*)0);
        litem_28->item=item;
        self->tail=litem_28;
        self->head=litem_28;
    }
    else {
        if(self->len==1) {
            litem_29=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 229, "list_item$1float");
            litem_29->prev=self->head;
            litem_29->next=((void*)0);
            litem_29->item=item;
            self->tail=litem_29;
            self->head->next=litem_29;
        }
        else {
            litem_30=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 239, "list_item$1float");
            litem_30->prev=self->tail;
            litem_30->next=((void*)0);
            litem_30->item=item;
            self->tail->next=litem_30;
            self->tail=litem_30;
        }
    }
    self->len++;
    __result36__ = __result_obj__ = self;
    return __result36__;
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_31;
struct list$1double* __result40__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_31=0;    i_31<num_value;    i_31++    ){
        list$1double_push_back(self,values[i_31]);
    }
    __result40__ = __result_obj__ = self;
    return __result40__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
struct list_item$1double* litem_32;
struct list_item$1double* litem_33;
struct list_item$1double* litem_34;
struct list$1double* __result39__;
    if(self->len==0) {
        litem_32=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 219, "list_item$1double");
        litem_32->prev=((void*)0);
        litem_32->next=((void*)0);
        litem_32->item=item;
        self->tail=litem_32;
        self->head=litem_32;
    }
    else {
        if(self->len==1) {
            litem_33=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 229, "list_item$1double");
            litem_33->prev=self->head;
            litem_33->next=((void*)0);
            litem_33->item=item;
            self->tail=litem_33;
            self->head->next=litem_33;
        }
        else {
            litem_34=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 239, "list_item$1double");
            litem_34->prev=self->tail;
            litem_34->next=((void*)0);
            litem_34->item=item;
            self->tail->next=litem_34;
            self->tail=litem_34;
        }
    }
    self->len++;
    __result39__ = __result_obj__ = self;
    return __result39__;
}










void come_push_stackframe(char* sname, int sline, int id){
    if(gNumComeStackFrame<1024) {
        gComeStackFrameSName[gNumComeStackFrame]=sname;
        gComeStackFrameSLine[gNumComeStackFrame]=sline;
        gComeStackFrameID[gNumComeStackFrame]=id;
        gNumComeStackFrame++;
    }
}

void come_pop_stackframe(){
    if(gNumComeStackFrame>0) {
        gNumComeStackFrame--;
    }
}

void come_save_stackframe(char* sname, int sline){
struct buffer* buf_35;
int i_36;
    buf_35=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 43, "buffer"));
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
    printf("%s",gComeStackFrameBuffer);
}

void stackframe(){
int i_37;
    for(    i_37=gNumComeStackFrame-1;    i_37>=0;    i_37--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_37],gComeStackFrameSLine[i_37],gComeStackFrameID[i_37]);
    }
}

char* come_get_stackframe(){
void* __result_obj__=(void*)0;
char* __result45__;
    __result45__ = __result_obj__ = __builtin_string(gComeStackFrameBuffer);
    return __result45__;
}

void* come_null_check(void* mem, char* sname, int sline, int id){
void* __result_obj__=(void*)0;
void* __result46__;
    if(mem==((void*)0)) {
        printf("%s %d #%d: null check error\n",sname,sline,id);
        stackframe();
        exit(2);
    }
    __result46__ = __result_obj__ = mem;
    return __result46__;
}

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline){
void* __result_obj__=(void*)0;
void* __result47__;
    if(mem==((void*)0)) {
        printf("%s %d: null check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    if(mem<begin) {
        printf("%s %d: range check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    if(mem>=end) {
        printf("%s %d: range check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    __result47__ = __result_obj__ = mem;
    return __result47__;
}

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*)){
    if(!self) {
        block(parent);
        stackframe();
        exit(1);
    }
    return self;
}

_Bool bool_value(_Bool self){
    return self;
}

int int_catch(int self, void* parent, void (*block)(void*)){
    if(self<0) {
        block(parent);
    }
    return self;
}

int int_expect(int self, void* parent, void (*block)(void*)){
    if(self<0) {
        block(parent);
        stackframe();
        exit(1);
    }
    return self;
}

int int_value(int self){
    return self;
}

int int_except(int self, void* parent, void (*block)(void*)){
    if(self<0) {
        block(parent);
    }
    return self;
}

_Bool bool_except(_Bool self, void* parent, void (*block)(void*)){
    if(!self) {
        block(parent);
    }
    return self;
}

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*)){
    if(!self) {
        block(parent);
    }
    return self;
}

void xassert(char* msg, _Bool test){
    printf("%s...",msg);
    if(!test) {
        puts("false");
        exit(2);
    }
    puts("ok");
}

void come_heap_init(int come_malloc, int come_debug, int come_gc){
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
    if(gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
}

static void* come_alloc_mem_from_heap_pool(unsigned long int size, char* sname, int sline, char* class_name){
void* __result_obj__=(void*)0;
void* result_38;
struct sMemHeader* it_39;
void* __result48__;
void* result_40;
struct sMemHeaderTiny* it_41;
void* __result49__;
    if(gComeDebugLib) {
        result_38=GC_malloc(size+sizeof(struct sMemHeader));
        memset(result_38,0,size+sizeof(struct sMemHeader));
        it_39=result_38;
        it_39->allocated=177783;
        it_39->size=size+sizeof(struct sMemHeader);
        come_push_stackframe(sname,sline,0);
        if(gNumComeStackFrame<16) {
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
        __result48__ = __result_obj__ = (char*)result_38+sizeof(struct sMemHeader);
        return __result48__;
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
        __result49__ = __result_obj__ = (char*)result_40+sizeof(struct sMemHeaderTiny);
        return __result49__;
    }
}

static void come_free_mem_of_heap_pool(char* mem){
    if(mem) {
        if(gComeDebugLib) {
        }
        else {
        }
    }
}

char* come_dynamic_typeof(void* mem){
void* __result_obj__=(void*)0;
struct sMemHeaderTiny* it_42;
char* __result50__;
    it_42=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int)-sizeof(struct sMemHeaderTiny));
    if(it_42->allocated!=177783) {
        fprintf((stderr),"invalid heap object(%p)\n",it_42);
        exit(2);
    }
    __result50__ = __result_obj__ = it_42->class_name;
    return __result50__;
}

void* come_calloc(unsigned long int count, unsigned long int size, char* sname, int sline, char* class_name){
void* __result_obj__=(void*)0;
char* mem_43;
unsigned long int* ref_count_44;
unsigned long int* size2_45;
void* __result51__;
    mem_43=come_alloc_mem_from_heap_pool(sizeof(unsigned long int)+sizeof(unsigned long int)+count*size,sname,sline,class_name);
    ref_count_44=(unsigned long int*)mem_43;
    *ref_count_44=0;
    size2_45=(unsigned long int*)(mem_43+sizeof(unsigned long int));
    *size2_45=size*count+sizeof(unsigned long int)+sizeof(unsigned long int);
    __result51__ = __result_obj__ = mem_43+sizeof(unsigned long int)+sizeof(unsigned long int);
    return __result51__;
}

void come_free_object(void* mem){
unsigned long int* ref_count_46;
    if(mem==((void*)0)) {
        return;
    }
    ref_count_46=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    come_free_mem_of_heap_pool((char*)ref_count_46);
}

void come_free(void* mem){
unsigned long int* ref_count_47;
    if(mem==((void*)0)) {
        return;
    }
    ref_count_47=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    come_free_mem_of_heap_pool((char*)ref_count_47);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__=(void*)0;
void* __result52__;
char* mem_48;
unsigned long int* size_p_49;
unsigned long int size_50;
void* result_51;
void* __result53__;
    if(!block) {
        __result52__ = __result_obj__ = ((void*)0);
        return __result52__;
    }
    mem_48=(char*)block-sizeof(unsigned long int)-sizeof(unsigned long int);
    size_p_49=(unsigned long int*)(mem_48+sizeof(unsigned long int));
    size_50=*size_p_49-sizeof(unsigned long int)-sizeof(unsigned long int);
    result_51=come_calloc(1,size_50,sname,sline,class_name);
    memcpy(result_51,block,size_50);
    __result53__ = __result_obj__ = result_51;
    return __result53__;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__=(void*)0;
void* __result54__;
unsigned long int* ref_count_52;
void* __result55__;
    if(mem==((void*)0)) {
        __result54__ = __result_obj__ = mem;
        return __result54__;
    }
    ref_count_52=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    (*ref_count_52)++;
    __result55__ = __result_obj__ = mem;
    return __result55__;
}

void* come_print_ref_count(void* mem){
void* __result_obj__=(void*)0;
void* __result56__;
unsigned long int* ref_count_53;
void* __result57__;
    if(mem==((void*)0)) {
        __result56__ = __result_obj__ = mem;
        return __result56__;
    }
    ref_count_53=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    printf("ref_count %ld\n",*ref_count_53);
    __result57__ = __result_obj__ = mem;
    return __result57__;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_){
void* __result_obj__=(void*)0;
void* __result58__;
unsigned long int* ref_count_54;
unsigned long int count_55;
void (*finalizer_56)(void*);
void* __result59__;
void* __result60__;
memset(&finalizer_56, 0, sizeof(void (*)(void*)));
    if(mem==((void*)0)) {
        __result58__ = __result_obj__ = ((void*)0);
        return __result58__;
    }
    ref_count_54=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    if(!no_decrement) {
        (*ref_count_54)--;
    }
    count_55=*ref_count_54;
    if(!no_free&&(count_55<=0||force_delete_)) {
        if(protocol_obj&&protocol_fun) {
            finalizer_56=protocol_fun;
            finalizer_56(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result59__ = __result_obj__ = ((void*)0);
        return __result59__;
    }
    __result60__ = __result_obj__ = mem;
    return __result60__;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_){
void (*finalizer_57)(void*);
void (*finalizer_58)(void*);
unsigned long int* ref_count_59;
unsigned long int count_60;
void (*finalizer_61)(void*);
void (*finalizer_62)(void*);
memset(&finalizer_57, 0, sizeof(void (*)(void*)));
memset(&finalizer_58, 0, sizeof(void (*)(void*)));
memset(&finalizer_61, 0, sizeof(void (*)(void*)));
memset(&finalizer_62, 0, sizeof(void (*)(void*)));
    if(mem==((void*)0)) {
        return;
    }
    if(call_finalizer_only) {
        if(fun) {
            if(protocol_obj&&protocol_fun) {
                finalizer_57=protocol_fun;
                finalizer_57(protocol_obj);
            }
            finalizer_58=fun;
            finalizer_58(mem);
        }
    }
    else {
        ref_count_59=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
        if(!no_decrement) {
            (*ref_count_59)--;
        }
        count_60=*ref_count_59;
        if(!no_free&&(count_60<=0||force_delete_)) {
            if(mem) {
                if(protocol_obj&&protocol_fun) {
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
void* __result_obj__=(void*)0;
char* __result61__;
int len_63;
char* result_64;
char* __result62__;
    if(str==((void*)0)) {
        __result61__ = __result_obj__ = ((void*)0);
        return __result61__;
    }
    len_63=strlen(str)+1;
    result_64=(char*)come_calloc(1, sizeof(char)*(1*(len_63)), "libneo-c-gc.c", 503, "char");
    strncpy(result_64,str,len_63);
    __result62__ = __result_obj__ = result_64;
    return __result62__;
}

_Bool come_is_contained_element(void** array, int len, void* element){
_Bool found_65;
int i_66;
    found_65=(_Bool)0;
    for(    i_66=0;    i_66<len;    i_66++    ){
        if(array[i_66]==element) {
            found_65=(_Bool)1;
            break;
        }
    }
    return found_65;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __result_obj__=(void*)0;
struct buffer* __result63__;
    self->size=128;
    self->buf=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c-gc.c", 528, "char");
    self->buf[0]=0;
    self->len=0;
    __result63__ = __result_obj__ = self;
    return __result63__;
}

void buffer_finalize(struct buffer* self){
    if(self&&self->buf) {
    }
}

void buffer_force_finalize(struct buffer* self){
    if(self&&self->buf) {
    }
}

struct buffer* buffer_clone(struct buffer* self){
void* __result_obj__=(void*)0;
struct buffer* __result64__;
struct buffer* result_67;
struct buffer* __result65__;
    if(self==((void*)0)) {
        __result64__ = __result_obj__ = ((void*)0);
        return __result64__;
    }
    result_67=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 550, "buffer");
    result_67->size=self->size;
    result_67->buf=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c-gc.c", 553, "char");
    result_67->len=self->len;
    memcpy(result_67->buf,self->buf,self->len);
    __result65__ = __result_obj__ = result_67;
    return __result65__;
}

int buffer_length(struct buffer* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

void buffer_reset(struct buffer* self){
    if(self==((void*)0)) {
        return;
    }
    self->buf[0]=0;
    self->len=0;
}

void buffer_trim(struct buffer* self, int len){
    if(self==((void*)0)) {
        return;
    }
    self->len-=len;
    self->buf[self->len]=0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long int size){
void* __result_obj__=(void*)0;
struct buffer* __result66__;
char* old_buf_68;
int old_len_69;
int new_size_70;
struct buffer* __result67__;
    if(self==((void*)0)||mem==((void*)0)) {
        __result66__ = __result_obj__ = self;
        return __result66__;
    }
    if(self->len+size+1+1>=self->size) {
        old_buf_68=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c-gc.c", 592, "char");
        memcpy(old_buf_68,self->buf,self->size);
        old_len_69=self->len;
        new_size_70=(self->size+size+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_70)), "libneo-c-gc.c", 596, "char");
        memcpy(self->buf,old_buf_68,old_len_69);
        self->buf[old_len_69]=0;
        self->size=new_size_70;
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result67__ = __result_obj__ = self;
    return __result67__;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
void* __result_obj__=(void*)0;
struct buffer* __result68__;
char* old_buf_71;
int old_len_72;
int new_size_73;
struct buffer* __result69__;
    if(self==((void*)0)) {
        __result68__ = __result_obj__ = ((void*)0);
        return __result68__;
    }
    if(self->len+1+1+1>=self->size) {
        old_buf_71=charp_clone(self->buf);
        old_len_72=self->len;
        new_size_73=(self->size+10+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_73)), "libneo-c-gc.c", 619, "char");
        memcpy(self->buf,old_buf_71,old_len_72);
        self->buf[old_len_72]=0;
        self->size=new_size_73;
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result69__ = __result_obj__ = self;
    return __result69__;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
void* __result_obj__=(void*)0;
struct buffer* __result70__;
int size_74;
char* old_buf_75;
int old_len_76;
int new_size_77;
struct buffer* __result71__;
    if(self==((void*)0)||mem==((void*)0)) {
        __result70__ = __result_obj__ = self;
        return __result70__;
    }
    size_74=strlen(mem);
    if(self->len+size_74+1+1>=self->size) {
        old_buf_75=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c-gc.c", 641, "char");
        memcpy(old_buf_75,self->buf,self->size);
        old_len_76=self->len;
        new_size_77=(self->size+size_74+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_77)), "libneo-c-gc.c", 645, "char");
        memcpy(self->buf,old_buf_75,old_len_76);
        self->buf[old_len_76]=0;
        self->size=new_size_77;
    }
    memcpy(self->buf+self->len,mem,size_74);
    self->len+=size_74;
    self->buf[self->len]=0;
    __result71__ = __result_obj__ = self;
    return __result71__;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
void* __result_obj__=(void*)0;
struct buffer* __result72__;
int size_78;
char* old_buf_79;
int old_len_80;
int new_size_81;
struct buffer* __result73__;
    if(self==((void*)0)||mem==((void*)0)) {
        __result72__ = __result_obj__ = self;
        return __result72__;
    }
    size_78=strlen(mem)+1;
    if(self->len+size_78+1+1+1>=self->size) {
        old_buf_79=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c-gc.c", 665, "char");
        memcpy(old_buf_79,self->buf,self->size);
        old_len_80=self->len;
        new_size_81=(self->size+size_78+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_81)), "libneo-c-gc.c", 669, "char");
        memcpy(self->buf,old_buf_79,old_len_80);
        self->buf[old_len_80]=0;
        self->size=new_size_81;
    }
    memcpy(self->buf+self->len,mem,size_78);
    self->len+=size_78;
    self->buf[self->len]=0;
    self->len++;
    __result73__ = __result_obj__ = self;
    return __result73__;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
void* __result_obj__=(void*)0;
struct buffer* __result74__;
int* mem_82;
int size_83;
char* old_buf_84;
int old_len_85;
int new_size_86;
struct buffer* __result75__;
    if(self==((void*)0)) {
        __result74__ = __result_obj__ = ((void*)0);
        return __result74__;
    }
    mem_82=&value;
    size_83=sizeof(int);
    if(self->len+size_83+1+1>=self->size) {
        old_buf_84=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c-gc.c", 692, "char");
        memcpy(old_buf_84,self->buf,self->size);
        old_len_85=self->len;
        new_size_86=(self->size+size_83+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_86)), "libneo-c-gc.c", 696, "char");
        memcpy(self->buf,old_buf_84,old_len_85);
        self->buf[old_len_85]=0;
        self->size=new_size_86;
    }
    memcpy(self->buf+self->len,mem_82,size_83);
    self->len+=size_83;
    self->buf[self->len]=0;
    __result75__ = __result_obj__ = self;
    return __result75__;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
void* __result_obj__=(void*)0;
long* mem_87;
int size_88;
char* old_buf_89;
int old_len_90;
int new_size_91;
struct buffer* __result76__;
    mem_87=&value;
    size_88=sizeof(long);
    if(self->len+size_88+1+1>=self->size) {
        old_buf_89=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c-gc.c", 715, "char");
        memcpy(old_buf_89,self->buf,self->size);
        old_len_90=self->len;
        new_size_91=(self->size+size_88+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_91)), "libneo-c-gc.c", 719, "char");
        memcpy(self->buf,old_buf_89,old_len_90);
        self->buf[old_len_90]=0;
        self->size=new_size_91;
    }
    memcpy(self->buf+self->len,mem_87,size_88);
    self->len+=size_88;
    self->buf[self->len]=0;
    __result76__ = __result_obj__ = self;
    return __result76__;
}

struct buffer* buffer_append_short(struct buffer* self, short short value){
void* __result_obj__=(void*)0;
struct buffer* __result77__;
short short* mem_92;
int size_93;
char* old_buf_94;
int old_len_95;
int new_size_96;
struct buffer* __result78__;
    if(self==((void*)0)) {
        __result77__ = __result_obj__ = ((void*)0);
        return __result77__;
    }
    mem_92=&value;
    size_93=sizeof(short short);
    if(self->len+size_93+1+1>=self->size) {
        old_buf_94=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c-gc.c", 742, "char");
        memcpy(old_buf_94,self->buf,self->size);
        old_len_95=self->len;
        new_size_96=(self->size+size_93+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_96)), "libneo-c-gc.c", 746, "char");
        memcpy(self->buf,old_buf_94,old_len_95);
        self->buf[old_len_95]=0;
        self->size=new_size_96;
    }
    memcpy(self->buf+self->len,mem_92,size_93);
    self->len+=size_93;
    self->buf[self->len]=0;
    __result78__ = __result_obj__ = self;
    return __result78__;
}

struct buffer* buffer_alignment(struct buffer* self){
void* __result_obj__=(void*)0;
struct buffer* __result79__;
int len_97;
int new_size_98;
int i_99;
struct buffer* __result80__;
    if(self==((void*)0)) {
        __result79__ = __result_obj__ = ((void*)0);
        return __result79__;
    }
    len_97=self->len;
    len_97=(len_97+3)&~3;
    if(len_97>=self->size) {
        new_size_98=(self->size+1+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_98)), "libneo-c-gc.c", 770, "char");
        self->size=new_size_98;
    }
    for(    i_99=self->len;    i_99<len_97;    i_99++    ){
        self->buf[i_99]=0;
    }
    self->len=len_97;
    __result80__ = __result_obj__ = self;
    return __result80__;
}

int buffer_compare(struct buffer* left, struct buffer* right){
    if(left==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else {
        if(left==((void*)0)) {
            return -1;
        }
        else {
            if(right==((void*)0)) {
                return 1;
            }
        }
    }
    return strcmp(left->buf,right->buf);
}

struct buffer* string_to_buffer(char* self){
void* __result_obj__=(void*)0;
struct buffer* result_100;
struct buffer* __result81__;
struct buffer* __result82__;
    result_100=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 800, "buffer"));
    if(self==((void*)0)) {
        __result81__ = __result_obj__ = result_100;
        return __result81__;
    }
    buffer_append_str(result_100,self);
    __result82__ = __result_obj__ = result_100;
    return __result82__;
}

struct buffer* charp_to_buffer(char* self){
void* __result_obj__=(void*)0;
struct buffer* result_101;
struct buffer* __result83__;
struct buffer* __result84__;
    result_101=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 813, "buffer"));
    if(self==((void*)0)) {
        __result83__ = __result_obj__ = result_101;
        return __result83__;
    }
    buffer_append_str(result_101,self);
    __result84__ = __result_obj__ = result_101;
    return __result84__;
}

char* buffer_to_string(struct buffer* self){
void* __result_obj__=(void*)0;
char* __result85__;
char* __result86__;
    if(self==((void*)0)) {
        __result85__ = __result_obj__ = __builtin_string("");
        return __result85__;
    }
    __result86__ = __result_obj__ = __builtin_string(self->buf);
    return __result86__;
}

_Bool bool_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool int_equals(int self, int right){
    return self==right;
}

_Bool char_equals(char self, char right){
    return self==right;
}

_Bool short_equals(short short self, short short right){
    return self==right;
}

_Bool long_equals(long self, long right){
    return self==right;
}

_Bool size_t_equals(unsigned long int self, unsigned long int right){
    return self==right;
}

_Bool float_equals(float self, float right){
    return self==right;
}

_Bool double_equals(double self, double right){
    return self==right;
}

_Bool string_equals(char* self, char* right){
    if(self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else {
        if(self==((void*)0)) {
            return (_Bool)0;
        }
        else {
            if(right==((void*)0)) {
                return (_Bool)0;
            }
        }
    }
    return strcmp(self,right)==0;
}

_Bool charp_equals(char* self, char* right){
    if(self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else {
        if(self==((void*)0)) {
            return (_Bool)0;
        }
        else {
            if(right==((void*)0)) {
                return (_Bool)0;
            }
        }
    }
    return strcmp(self,right)==0;
}

_Bool string_operator_equals(char* self, char* right){
    if(self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else {
        if(self==((void*)0)) {
            return (_Bool)0;
        }
        else {
            if(right==((void*)0)) {
                return (_Bool)0;
            }
        }
    }
    return strcmp(self,right)==0;
}

_Bool charp_operator_equals(char* self, char* right){
    if(self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else {
        if(self==((void*)0)) {
            return (_Bool)0;
        }
        else {
            if(right==((void*)0)) {
                return (_Bool)0;
            }
        }
    }
    return strcmp(self,right)==0;
}

_Bool string_operator_not_equals(char* self, char* right){
    if(self==((void*)0)&&right==((void*)0)) {
        return (_Bool)0;
    }
    else {
        if(self==((void*)0)) {
            return (_Bool)1;
        }
        else {
            if(right==((void*)0)) {
                return (_Bool)1;
            }
        }
    }
    return strcmp(self,right)!=0;
}

_Bool charp_operator_not_equals(char* self, char* right){
    if(self==((void*)0)&&right==((void*)0)) {
        return (_Bool)0;
    }
    else {
        if(self==((void*)0)) {
            return (_Bool)1;
        }
        else {
            if(right==((void*)0)) {
                return (_Bool)1;
            }
        }
    }
    return strcmp(self,right)!=0;
}

char* charp_operator_add(char* self, char* right){
void* __result_obj__=(void*)0;
char* __result87__;
int len_102;
char* result_103;
char* __result88__;
    if(self==((void*)0)||right==((void*)0)) {
        __result87__ = __result_obj__ = __builtin_string("");
        return __result87__;
    }
    len_102=strlen(self)+strlen(right);
    result_103=(char*)come_calloc(1, sizeof(char)*(1*(len_102+1)), "libneo-c-gc.c", 974, "char");
    strncpy(result_103,self,len_102+1);
    strncat(result_103,right,len_102+1);
    __result88__ = __result_obj__ = result_103;
    return __result88__;
}

char* string_operator_add(char* self, char* right){
void* __result_obj__=(void*)0;
char* __result89__;
int len_104;
char* result_105;
char* __result90__;
    if(self==((void*)0)||right==((void*)0)) {
        __result89__ = __result_obj__ = __builtin_string("");
        return __result89__;
    }
    len_104=strlen(self)+strlen(right);
    result_105=(char*)come_calloc(1, sizeof(char)*(1*(len_104+1)), "libneo-c-gc.c", 989, "char");
    strncpy(result_105,self,len_104+1);
    strncat(result_105,right,len_104+1);
    __result90__ = __result_obj__ = result_105;
    return __result90__;
}

char* charp_operator_mult(char* self, int right){
void* __result_obj__=(void*)0;
char* __result91__;
struct buffer* buf_106;
int i_107;
char* __result92__;
    if(self==((void*)0)) {
        __result91__ = __result_obj__ = __builtin_string("");
        return __result91__;
    }
    buf_106=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 1002, "buffer"));
    for(    i_107=0;    i_107<right;    i_107++    ){
        buffer_append_str(buf_106,self);
    }
    __result92__ = __result_obj__ = buffer_to_string(buf_106);
    return __result92__;
}

char* string_operator_mult(char* self, int right){
void* __result_obj__=(void*)0;
char* __result93__;
struct buffer* buf_108;
int i_109;
char* __result94__;
    if(self==((void*)0)) {
        __result93__ = __result_obj__ = __builtin_string("");
        return __result93__;
    }
    buf_108=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 1016, "buffer"));
    for(    i_109=0;    i_109<right;    i_109++    ){
        buffer_append_str(buf_108,self);
    }
    __result94__ = __result_obj__ = buffer_to_string(buf_108);
    return __result94__;
}

unsigned int bool_get_hash_key(_Bool value){
    return (int_get_hash_key(((int)value)));
}

unsigned int char_get_hash_key(char value){
    return value;
}

unsigned int short_get_hash_key(short int value){
    return value;
}

unsigned int int_get_hash_key(int value){
    return value;
}

unsigned int long_get_hash_key(long value){
    return value;
}

unsigned int size_t_get_hash_key(unsigned long int value){
    return value;
}

unsigned int float_get_hash_key(float value){
    return (unsigned int)value;
}

unsigned int double_get_hash_key(double value){
    return (unsigned int)value;
}

unsigned int string_get_hash_key(char* value){
int result_110;
char* p_111;
    if(value==((void*)0)) {
        return 0;
    }
    result_110=0;
    p_111=value;
    while(*p_111) {
        result_110+=(*p_111);
        p_111++;
    }
    return result_110;
}

unsigned int charp_get_hash_key(char* value){
int result_112;
char* p_113;
    if(value==((void*)0)) {
        return 0;
    }
    result_112=0;
    p_113=value;
    while(*p_113) {
        result_112+=(*p_113);
        p_113++;
    }
    return result_112;
}

_Bool bool_clone(_Bool self){
    return self;
}

char char_clone(char self){
    return self;
}

short int short_clone(short short self){
    return self;
}

int int_clone(int self){
    return self;
}

long int long_clone(long self){
    return self;
}

unsigned long int size_t_clone(unsigned long int self){
    return self;
}

double double_clone(double self){
    return self;
}

float float_clone(float self){
    return self;
}

char* charp_clone(char* self){
void* __result_obj__=(void*)0;
char* __result95__;
char* __result96__;
    if(self==((void*)0)) {
        __result95__ = __result_obj__ = ((void*)0);
        return __result95__;
    }
    __result96__ = __result_obj__ = __builtin_string(self);
    return __result96__;
}

char* string_clone(char* self){
void* __result_obj__=(void*)0;
char* __result97__;
char* __result98__;
    if(self==((void*)0)) {
        __result97__ = __result_obj__ = ((void*)0);
        return __result97__;
    }
    __result98__ = __result_obj__ = __builtin_string(self);
    return __result98__;
}

_Bool xiswalpha(unsigned int c){
_Bool result_114;
    result_114=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_114;
}

_Bool xiswblank(unsigned int c){
    return c==32||c==9;
}

_Bool xiswdigit(unsigned int c){
    return (c>=48&&c<=57);
}

_Bool xiswalnum(unsigned int c){
    return xiswalpha(c)||xiswdigit(c);
}

_Bool xisalpha(char c){
_Bool result_115;
    result_115=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_115;
}

_Bool xisblank(char c){
    return c==32||c==9;
}

_Bool xisdigit(char c){
    return (c>=48&&c<=57);
}

_Bool xisalnum(char c){
    return xisalpha(c)||xisdigit(c);
}

_Bool xisascii(char c){
_Bool result_116;
    result_116=(c>=32&&c<=126);
    return result_116;
}

_Bool xiswascii(unsigned int c){
_Bool result_117;
    result_117=(c>=32&&c<=126);
    return result_117;
}

int string_length(char* str){
    if(str==((void*)0)) {
        return 0;
    }
    return strlen(str);
}

int charp_length(char* str){
    if(str==((void*)0)) {
        return 0;
    }
    return strlen(str);
}

char* string_reverse(char* str){
void* __result_obj__=(void*)0;
char* __result99__;
int len_118;
char* result_119;
int i_120;
char* __result100__;
    if(str==((void*)0)) {
        __result99__ = __result_obj__ = __builtin_string("");
        return __result99__;
    }
    len_118=strlen(str);
    result_119=(char*)come_calloc(1, sizeof(char)*(1*(len_118+1)), "libneo-c-gc.c", 1233, "char");
    for(    i_120=0;    i_120<len_118;    i_120++    ){
        result_119[i_120]=str[len_118-i_120-1];
    }
    result_119[len_118]=0;
    __result100__ = __result_obj__ = result_119;
    return __result100__;
}

char* charp_reverse(char* str){
void* __result_obj__=(void*)0;
char* __result101__;
int len_121;
char* result_122;
int i_123;
char* __result102__;
    if(str==((void*)0)) {
        __result101__ = __result_obj__ = __builtin_string("");
        return __result101__;
    }
    len_121=strlen(str);
    result_122=(char*)come_calloc(1, sizeof(char)*(1*(len_121+1)), "libneo-c-gc.c", 1250, "char");
    for(    i_123=0;    i_123<len_121;    i_123++    ){
        result_122[i_123]=str[len_121-i_123-1];
    }
    result_122[len_121]=0;
    __result102__ = __result_obj__ = result_122;
    return __result102__;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__=(void*)0;
char* __result103__;
int len_124;
char* __result104__;
char* __result105__;
char* __result106__;
char* result_125;
char* __result107__;
    if(str==((void*)0)) {
        __result103__ = __result_obj__ = __builtin_string("");
        return __result103__;
    }
    len_124=strlen(str);
    if(head<0) {
        head+=len_124;
    }
    if(tail<0) {
        tail+=len_124+1;
    }
    if(head>tail) {
        __result104__ = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        return __result104__;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len_124) {
        tail=len_124;
    }
    if(head==tail) {
        __result105__ = __result_obj__ = __builtin_string("");
        return __result105__;
    }
    if(tail-head+1<1) {
        __result106__ = __result_obj__ = __builtin_string("");
        return __result106__;
    }
    result_125=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libneo-c-gc.c", 1295, "char");
    memcpy(result_125,str+head,tail-head);
    result_125[tail-head]=0;
    __result107__ = __result_obj__ = result_125;
    return __result107__;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__=(void*)0;
char* __result108__;
int len_126;
char* __result109__;
char* __result110__;
char* __result111__;
char* result_127;
char* __result112__;
    if(str==((void*)0)) {
        __result108__ = __result_obj__ = __builtin_string("");
        return __result108__;
    }
    len_126=strlen(str);
    if(head<0) {
        head+=len_126;
    }
    if(tail<0) {
        tail+=len_126+1;
    }
    if(head>tail) {
        __result109__ = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        return __result109__;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len_126) {
        tail=len_126;
    }
    if(head==tail) {
        __result110__ = __result_obj__ = __builtin_string("");
        return __result110__;
    }
    if(tail-head+1<1) {
        __result111__ = __result_obj__ = __builtin_string("");
        return __result111__;
    }
    result_127=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libneo-c-gc.c", 1338, "char");
    memcpy(result_127,str+head,tail-head);
    result_127[tail-head]=0;
    __result112__ = __result_obj__ = result_127;
    return __result112__;
}

char* charp_substring(char* str, int head, int tail){
void* __result_obj__=(void*)0;
char* __result113__;
int len_128;
char* __result114__;
char* __result115__;
char* __result116__;
char* result_129;
char* __result117__;
    if(str==((void*)0)) {
        __result113__ = __result_obj__ = __builtin_string("");
        return __result113__;
    }
    len_128=strlen(str);
    if(head<0) {
        head+=len_128;
    }
    if(tail<0) {
        tail+=len_128+1;
    }
    if(head>tail) {
        __result114__ = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        return __result114__;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len_128) {
        tail=len_128;
    }
    if(head==tail) {
        __result115__ = __result_obj__ = __builtin_string("");
        return __result115__;
    }
    if(tail-head+1<1) {
        __result116__ = __result_obj__ = __builtin_string("");
        return __result116__;
    }
    result_129=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libneo-c-gc.c", 1381, "char");
    memcpy(result_129,str+head,tail-head);
    result_129[tail-head]=0;
    __result117__ = __result_obj__ = result_129;
    return __result117__;
}

char* string_substring(char* str, int head, int tail){
void* __result_obj__=(void*)0;
char* __result118__;
int len_130;
char* __result119__;
char* __result120__;
char* __result121__;
char* result_131;
char* __result122__;
    if(str==((void*)0)) {
        __result118__ = __result_obj__ = __builtin_string("");
        return __result118__;
    }
    len_130=strlen(str);
    if(head<0) {
        head+=len_130;
    }
    if(tail<0) {
        tail+=len_130+1;
    }
    if(head>tail) {
        __result119__ = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        return __result119__;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len_130) {
        tail=len_130;
    }
    if(head==tail) {
        __result120__ = __result_obj__ = __builtin_string("");
        return __result120__;
    }
    if(tail-head+1<1) {
        __result121__ = __result_obj__ = __builtin_string("");
        return __result121__;
    }
    result_131=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libneo-c-gc.c", 1424, "char");
    memcpy(result_131,str+head,tail-head);
    result_131[tail-head]=0;
    __result122__ = __result_obj__ = result_131;
    return __result122__;
}

char* xsprintf(char* msg, ...){
void* __result_obj__=(void*)0;
char* __result123__;
va_list args_132;
char* result_133;
int len_134;
char* __result124__;
char* result2_135;
char* __result125__;
memset(&args_132, 0, sizeof(va_list));
result_133 = (void*)0;
    if(msg==((void*)0)) {
        __result123__ = __result_obj__ = __builtin_string("");
        return __result123__;
    }
    __builtin_va_start(args_132,msg);
    len_134=vasprintf(&result_133,msg,args_132);
    __builtin_va_end(args_132);
    if(len_134<0) {
        __result124__ = __result_obj__ = __builtin_string("");
        return __result124__;
    }
    result2_135=__builtin_string(result_133);
    free(result_133);
    __result125__ = __result_obj__ = result2_135;
    return __result125__;
}

char* charp_delete(char* str, int head, int tail){
void* __result_obj__=(void*)0;
char* __result126__;
int len_136;
char* __result127__;
char* __result128__;
char* sub_str_137;
char* __result129__;
    if(str==((void*)0)) {
        __result126__ = __result_obj__ = __builtin_string("");
        return __result126__;
    }
    len_136=strlen(str);
    if(strcmp(str,"")==0) {
        __result127__ = __result_obj__ = __builtin_string(str);
        return __result127__;
    }
    if(head<0) {
        head+=len_136;
    }
    if(tail<0) {
        tail+=len_136+1;
    }
    if(head<0) {
        head=0;
    }
    if(tail<0) {
        __result128__ = __result_obj__ = __builtin_string(str);
        return __result128__;
    }
    if(tail>=len_136) {
        tail=len_136;
    }
    sub_str_137=charp_substring(str,tail,-1);
    memcpy(str+head,sub_str_137,string_length(sub_str_137)+1);
    __result129__ = __result_obj__ = __builtin_string(str);
    return __result129__;
}

char* string_delete(char* str, int head, int tail){
void* __result_obj__=(void*)0;
char* __result130__;
int len_138;
char* __result131__;
char* __result132__;
char* sub_str_139;
char* __result133__;
    if(str==((void*)0)) {
        __result130__ = __result_obj__ = __builtin_string("");
        return __result130__;
    }
    len_138=strlen(str);
    if(strcmp(str,"")==0) {
        __result131__ = __result_obj__ = __builtin_string(str);
        return __result131__;
    }
    if(head<0) {
        head+=len_138;
    }
    if(tail<0) {
        tail+=len_138+1;
    }
    if(head<0) {
        head=0;
    }
    if(tail<0) {
        __result132__ = __result_obj__ = __builtin_string(str);
        return __result132__;
    }
    if(tail>=len_138) {
        tail=len_138;
    }
    sub_str_139=charp_substring(str,tail,-1);
    memcpy(str+head,sub_str_139,string_length(sub_str_139)+1);
    __result133__ = __result_obj__ = __builtin_string(str);
    return __result133__;
}

struct list$1charph* charp_split_char(char* self, char c){
void* __result_obj__=(void*)0;
struct list$1charph* __result135__;
struct list$1charph* result_140;
struct buffer* str_141;
int i_142;
struct list$1charph* __result137__;
    if(self==((void*)0)) {
        __result135__ = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-gc.c", 1535, "list$1charph"));
        return __result135__;
    }
    result_140=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-gc.c", 1538, "list$1charph"));
    str_141=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 1540, "buffer"));
    for(    i_142=0;    i_142<charp_length(self);    i_142++    ){
        if(self[i_142]==c) {
            list$1charph_push_back(result_140,__builtin_string(str_141->buf));
            buffer_reset(str_141);
        }
        else {
            buffer_append_char(str_141,self[i_142]);
        }
    }
    if(buffer_length(str_141)!=0) {
        list$1charph_push_back(result_140,__builtin_string(str_141->buf));
    }
    __result137__ = __result_obj__ = result_140;
    return __result137__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result134__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result134__ = __result_obj__ = self;
    return __result134__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
struct list_item$1charph* litem_143;
struct list_item$1charph* litem_144;
struct list_item$1charph* litem_145;
struct list$1charph* __result136__;
    if(self->len==0) {
        litem_143=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 219, "list_item$1charph");
        litem_143->prev=((void*)0);
        litem_143->next=((void*)0);
        litem_143->item=item;
        self->tail=litem_143;
        self->head=litem_143;
    }
    else {
        if(self->len==1) {
            litem_144=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 229, "list_item$1charph");
            litem_144->prev=self->head;
            litem_144->next=((void*)0);
            litem_144->item=item;
            self->tail=litem_144;
            self->head->next=litem_144;
        }
        else {
            litem_145=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 239, "list_item$1charph");
            litem_145->prev=self->tail;
            litem_145->next=((void*)0);
            litem_145->item=item;
            self->tail->next=litem_145;
            self->tail=litem_145;
        }
    }
    self->len++;
    __result136__ = __result_obj__ = self;
    return __result136__;
}

struct list$1charph* string_split_char(char* self, char c){
void* __result_obj__=(void*)0;
struct list$1charph* __result138__;
struct list$1charph* result_146;
struct buffer* str_147;
int i_148;
struct list$1charph* __result139__;
    if(self==((void*)0)) {
        __result138__ = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-gc.c", 1561, "list$1charph"));
        return __result138__;
    }
    result_146=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-gc.c", 1564, "list$1charph"));
    str_147=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 1566, "buffer"));
    for(    i_148=0;    i_148<charp_length(self);    i_148++    ){
        if(self[i_148]==c) {
            list$1charph_push_back(result_146,__builtin_string(str_147->buf));
            buffer_reset(str_147);
        }
        else {
            buffer_append_char(str_147,self[i_148]);
        }
    }
    if(buffer_length(str_147)!=0) {
        list$1charph_push_back(result_146,__builtin_string(str_147->buf));
    }
    __result139__ = __result_obj__ = result_146;
    return __result139__;
}

char* xbasename(char* path){
void* __result_obj__=(void*)0;
char* __result140__;
char* p_149;
char* __result141__;
char* __result142__;
char* __result143__;
    if(path==((void*)0)) {
        __result140__ = __result_obj__ = __builtin_string("");
        return __result140__;
    }
    p_149=path+strlen(path);
    while(p_149>=path) {
        if(*p_149==47) {
            break;
        }
        else {
            p_149--;
        }
    }
    if(p_149<path) {
        __result141__ = __result_obj__ = __builtin_string(path);
        return __result141__;
    }
    else {
        __result142__ = __result_obj__ = __builtin_string(p_149+1);
        return __result142__;
    }
    __result143__ = __result_obj__ = __builtin_string("");
    return __result143__;
}

char* xnoextname(char* path){
void* __result_obj__=(void*)0;
char* __result144__;
char* path2_150;
char* p_151;
char* __result145__;
char* __result146__;
char* __result147__;
    if(path==((void*)0)) {
        __result144__ = __result_obj__ = __builtin_string("");
        return __result144__;
    }
    path2_150=xbasename(path);
    p_151=path2_150+strlen(path2_150);
    while(p_151>=path2_150) {
        if(*p_151==46) {
            break;
        }
        else {
            p_151--;
        }
    }
    if(p_151<path2_150) {
        __result145__ = __result_obj__ = __builtin_string(path2_150);
        return __result145__;
    }
    else {
        __result146__ = __result_obj__ = string_substring(path2_150,0,p_151-path2_150);
        return __result146__;
    }
    __result147__ = __result_obj__ = __builtin_string("");
    return __result147__;
}

char* xextname(char* path){
void* __result_obj__=(void*)0;
char* __result148__;
char* p_152;
char* __result149__;
char* __result150__;
char* __result151__;
    if(path==((void*)0)) {
        __result148__ = __result_obj__ = __builtin_string("");
        return __result148__;
    }
    p_152=path+strlen(path);
    while(p_152>=path) {
        if(*p_152==46) {
            break;
        }
        else {
            p_152--;
        }
    }
    if(p_152<path) {
        __result149__ = __result_obj__ = __builtin_string(path);
        return __result149__;
    }
    else {
        __result150__ = __result_obj__ = __builtin_string(p_152+1);
        return __result150__;
    }
    __result151__ = __result_obj__ = __builtin_string("");
    return __result151__;
}

char* bool_to_string(_Bool self){
void* __result_obj__=(void*)0;
char* __result152__;
char* __result153__;
    if(self) {
        __result152__ = __result_obj__ = __builtin_string("true");
        return __result152__;
    }
    else {
        __result153__ = __result_obj__ = __builtin_string("false");
        return __result153__;
    }
}

char* char_to_string(char self){
void* __result_obj__=(void*)0;
char* __result154__;
    __result154__ = __result_obj__ = xsprintf("%c",self);
    return __result154__;
}

char* short_to_string(short short self){
void* __result_obj__=(void*)0;
char* __result155__;
    __result155__ = __result_obj__ = xsprintf("%d",self);
    return __result155__;
}

char* int_to_string(int self){
void* __result_obj__=(void*)0;
char* __result156__;
    __result156__ = __result_obj__ = xsprintf("%d",self);
    return __result156__;
}

char* long_to_string(long self){
void* __result_obj__=(void*)0;
char* __result157__;
    __result157__ = __result_obj__ = xsprintf("%ld",self);
    return __result157__;
}

char* size_t_to_string(unsigned long int self){
void* __result_obj__=(void*)0;
char* __result158__;
    __result158__ = __result_obj__ = xsprintf("%ld",self);
    return __result158__;
}

char* float_to_string(float self){
void* __result_obj__=(void*)0;
char* __result159__;
    __result159__ = __result_obj__ = xsprintf("%f",self);
    return __result159__;
}

char* double_to_string(double self){
void* __result_obj__=(void*)0;
char* __result160__;
    __result160__ = __result_obj__ = xsprintf("%lf",self);
    return __result160__;
}

char* string_to_string(char* self){
void* __result_obj__=(void*)0;
char* __result161__;
char* __result162__;
    if(self==((void*)0)) {
        __result161__ = __result_obj__ = __builtin_string("");
        return __result161__;
    }
    __result162__ = __result_obj__ = __builtin_string(self);
    return __result162__;
}

char* charp_to_string(char* self){
void* __result_obj__=(void*)0;
char* __result163__;
char* __result164__;
    if(self==((void*)0)) {
        __result163__ = __result_obj__ = __builtin_string("");
        return __result163__;
    }
    __result164__ = __result_obj__ = __builtin_string(self);
    return __result164__;
}

int bool_compare(_Bool left, _Bool right){
    if(!left&&right) {
        return -1;
    }
    else {
        if(left&&right) {
            return 0;
        }
        else {
            if(!left&&!right) {
                return 0;
            }
            else {
                return 1;
            }
        }
    }
    return 0;
}

int char_compare(char left, char right){
    if(left<right) {
        return -1;
    }
    else {
        if(left>right) {
            return 1;
        }
        else {
            return 0;
        }
    }
    return 0;
}

int short_compare(short short left, short short right){
    if(left<right) {
        return -1;
    }
    else {
        if(left>right) {
            return 1;
        }
        else {
            return 0;
        }
    }
    return 0;
}

int int_compare(int left, int right){
    if(left<right) {
        return -1;
    }
    else {
        if(left>right) {
            return 1;
        }
        else {
            return 0;
        }
    }
    return 0;
}

int long_compare(long left, long right){
    if(left<right) {
        return -1;
    }
    else {
        if(left>right) {
            return 1;
        }
        else {
            return 0;
        }
    }
    return 0;
}

int size_t_compare(unsigned long int left, unsigned long int right){
    if(left<right) {
        return -1;
    }
    else {
        if(left>right) {
            return 1;
        }
        else {
            return 0;
        }
    }
    return 0;
}

int float_compare(float left, float right){
    if(left<right) {
        return -1;
    }
    else {
        if(left>right) {
            return 1;
        }
        else {
            return 0;
        }
    }
    return 0;
}

int double_compare(double left, double right){
    if(left<right) {
        return -1;
    }
    else {
        if(left>right) {
            return 1;
        }
        else {
            return 0;
        }
    }
    return 0;
}

int string_compare(char* left, char* right){
    if(left==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else {
        if(left==((void*)0)) {
            return -1;
        }
        else {
            if(right==((void*)0)) {
                return 1;
            }
        }
    }
    return strcmp(left,right);
}

int charp_compare(char* left, char* right){
    if(left==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else {
        if(left==((void*)0)) {
            return -1;
        }
        else {
            if(right==((void*)0)) {
                return 1;
            }
        }
    }
    return strcmp(left,right);
}

char* FILE_read(struct _IO_FILE* f){
void* __result_obj__=(void*)0;
char* __result165__;
struct buffer* buf_153;
int size_155;
char* __result166__;
    if(f==((void*)0)) {
        __result165__ = __result_obj__ = __builtin_string("");
        return __result165__;
    }
    buf_153=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 1896, "buffer"));
    while(1) {
        char buf2_154[1024];
        memset(&buf2_154, 0, sizeof(char)        *(1024)        );
        size_155=fread(buf2_154,1,1024,f);
        buffer_append(buf_153,buf2_154,size_155);
        if(size_155<1024) {
            break;
        }
    }
    __result166__ = __result_obj__ = buffer_to_string(buf_153);
    return __result166__;
}

int FILE_write(struct _IO_FILE* f, char* str){
    if(f==((void*)0)||str==((void*)0)) {
        return -1;
    }
    return fwrite(str,strlen(str),1,f);
}

int FILE_fclose(struct _IO_FILE* f){
int result_156;
    if(f==((void*)0)) {
        return -1;
    }
    result_156=fclose(f);
    if(result_156<0) {
        return result_156;
    }
    return result_156;
}

struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...){
void* __result_obj__=(void*)0;
struct _IO_FILE* __result167__;
va_list args_158;
int result_159;
struct _IO_FILE* __result168__;
struct _IO_FILE* __result169__;
memset(&args_158, 0, sizeof(va_list));
    if(f==((void*)0)||msg==((void*)0)) {
        __result167__ = __result_obj__ = f;
        return __result167__;
    }
    char msg2_157[1024*2*2*2];
    memset(&msg2_157, 0, sizeof(char)    *(1024*2*2*2)    );
    __builtin_va_start(args_158,msg);
    vsnprintf(msg2_157,1024*2*2*2,msg,args_158);
    __builtin_va_end(args_158);
    result_159=fprintf(f,"%s",msg2_157);
    if(result_159<0) {
        __result168__ = __result_obj__ = f;
        return __result168__;
    }
    __result169__ = __result_obj__ = f;
    return __result169__;
}

int string_write(char* self, char* file_name, _Bool append){
struct _IO_FILE* f_160;
int result_161;
int result2_162;
f_160 = (void*)0;
    if(self==((void*)0)||file_name==((void*)0)) {
        return -1;
    }
    if(append) {
        f_160=fopen(file_name,"a");
    }
    else {
        f_160=fopen(file_name,"w");
    }
    if(f_160==((void*)0)) {
        return -1;
    }
    result_161=fwrite(self,strlen(self),1,f_160);
    if(result_161<0) {
        return result_161;
    }
    result2_162=fclose(f_160);
    if(result2_162<0) {
        return result2_162;
    }
    return result_161;
}

int charp_write(char* self, char* file_name, _Bool append){
struct _IO_FILE* f_163;
int result_164;
int result2_165;
f_163 = (void*)0;
    if(self==((void*)0)||file_name==((void*)0)) {
        return -1;
    }
    if(append) {
        f_163=fopen(file_name,"a");
    }
    else {
        f_163=fopen(file_name,"w");
    }
    if(f_163==((void*)0)) {
        return -1;
    }
    result_164=fwrite(self,strlen(self),1,f_163);
    if(result_164<0) {
        return result_164;
    }
    result2_165=fclose(f_163);
    if(result2_165<0) {
        return result2_165;
    }
    return result_164;
}

char* string_read(char* file_name){
void* __result_obj__=(void*)0;
char* __result170__;
struct _IO_FILE* f_166;
char* __result171__;
struct buffer* buf_167;
int size_169;
char* result_170;
int result2_171;
char* __result172__;
char* __result173__;
    if(file_name==((void*)0)) {
        __result170__ = __result_obj__ = __builtin_string("");
        return __result170__;
    }
    f_166=fopen(file_name,"r");
    if(f_166==((void*)0)) {
        __result171__ = __result_obj__ = __builtin_string("");
        return __result171__;
    }
    buf_167=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 2036, "buffer"));
    while(1) {
        char buf2_168[1024];
        memset(&buf2_168, 0, sizeof(char)        *(1024)        );
        size_169=fread(buf2_168,1,1024,f_166);
        buffer_append(buf_167,buf2_168,size_169);
        if(size_169<1024) {
            break;
        }
    }
    result_170=buffer_to_string(buf_167);
    result2_171=fclose(f_166);
    if(result2_171<0) {
        __result172__ = __result_obj__ = __builtin_string("");
        return __result172__;
    }
    __result173__ = __result_obj__ = result_170;
    return __result173__;
}

char* charp_read(char* file_name){
void* __result_obj__=(void*)0;
char* __result174__;
struct _IO_FILE* f_172;
char* __result175__;
struct buffer* buf_173;
int size_175;
char* result_176;
int result2_177;
char* __result176__;
char* __result177__;
    if(file_name==((void*)0)) {
        __result174__ = __result_obj__ = __builtin_string("");
        return __result174__;
    }
    f_172=fopen(file_name,"r");
    if(f_172==((void*)0)) {
        __result175__ = __result_obj__ = __builtin_string("");
        return __result175__;
    }
    buf_173=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 2073, "buffer"));
    while(1) {
        char buf2_174[1024];
        memset(&buf2_174, 0, sizeof(char)        *(1024)        );
        size_175=fread(buf2_174,1,1024,f_172);
        buffer_append(buf_173,buf2_174,size_175);
        if(size_175<1024) {
            break;
        }
    }
    result_176=buffer_to_string(buf_173);
    result2_177=fclose(f_172);
    if(result2_177<0) {
        __result176__ = __result_obj__ = __builtin_string("");
        return __result176__;
    }
    __result177__ = __result_obj__ = result_176;
    return __result177__;
}

struct list$1charph* FILE_readlines(struct _IO_FILE* f){
void* __result_obj__=(void*)0;
struct list$1charph* result_178;
struct list$1charph* __result178__;
struct list$1charph* __result179__;
    result_178=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-gc.c", 2100, "list$1charph"));
    if(f==((void*)0)) {
        __result178__ = __result_obj__ = result_178;
        return __result178__;
    }
    while(1) {
        char buf_179[1024];
        memset(&buf_179, 0, sizeof(char)        *(1024)        );
        if(fgets(buf_179,1024,f)==((void*)0)) {
            break;
        }
        list$1charph_push_back(result_178,__builtin_string(buf_179));
    }
    __result179__ = __result_obj__ = result_178;
    return __result179__;
}

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*)){
struct _IO_FILE* f_180;
    if(path==((void*)0)||mode==((void*)0)) {
        return -1;
    }
    f_180=fopen(path,mode);
    if(f_180) {
        block(parent,f_180);
        fclose(f_180);
        return 0;
    }
    return -1;
}

char* charp_puts(char* self){
void* __result_obj__=(void*)0;
char* __result180__;
char* __result181__;
    if(self==((void*)0)) {
        __result180__ = __result_obj__ = __builtin_string("");
        return __result180__;
    }
    puts(self);
    __result181__ = __result_obj__ = __builtin_string(self);
    return __result181__;
}

char* charp_print(char* self){
void* __result_obj__=(void*)0;
char* __result182__;
char* __result183__;
    if(self==((void*)0)) {
        __result182__ = __result_obj__ = __builtin_string("");
        return __result182__;
    }
    printf("%s",self);
    __result183__ = __result_obj__ = __builtin_string(self);
    return __result183__;
}

char* string_printf(char* self, ...){
void* __result_obj__=(void*)0;
char* __result184__;
char* msg2_181;
va_list args_182;
char* __result185__;
msg2_181 = (void*)0;
memset(&args_182, 0, sizeof(va_list));
    if(self==((void*)0)) {
        __result184__ = __result_obj__ = __builtin_string("");
        return __result184__;
    }
    __builtin_va_start(args_182,self);
    vasprintf(&msg2_181,self,args_182);
    __builtin_va_end(args_182);
    printf("%s",msg2_181);
    free(msg2_181);
    __result185__ = __result_obj__ = __builtin_string(self);
    return __result185__;
}

char* charp_printf(char* self, ...){
void* __result_obj__=(void*)0;
char* __result186__;
char* msg2_183;
va_list args_184;
char* __result187__;
msg2_183 = (void*)0;
memset(&args_184, 0, sizeof(va_list));
    if(self==((void*)0)) {
        __result186__ = __result_obj__ = __builtin_string("");
        return __result186__;
    }
    __builtin_va_start(args_184,self);
    vasprintf(&msg2_183,self,args_184);
    __builtin_va_end(args_184);
    printf("%s",msg2_183);
    free(msg2_183);
    __result187__ = __result_obj__ = __builtin_string(self);
    return __result187__;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

char* string_puts(char* self){
void* __result_obj__=(void*)0;
char* __result188__;
char* __result189__;
    if(self==((void*)0)) {
        __result188__ = __result_obj__ = __builtin_string("");
        return __result188__;
    }
    puts(self);
    __result189__ = __result_obj__ = __builtin_string(self);
    return __result189__;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_185;
    for(    i_185=0;    i_185<self;    i_185++    ){
        block(parent,i_185);
    }
}

struct integer* integer_initialize(struct integer* self, long value){
void* __result_obj__=(void*)0;
struct integer* __result190__;
    self->value=value;
    __result190__ = __result_obj__ = self;
    return __result190__;
}

int integer_to_int(struct integer* self){
    return self->value;
}

struct integer* char_to_integer(char self){
void* __result_obj__=(void*)0;
struct integer* __result191__;
    __result191__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2243, "integer"),self);
    return __result191__;
}

struct integer* short_to_integer(short short self){
void* __result_obj__=(void*)0;
struct integer* __result192__;
    __result192__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2248, "integer"),self);
    return __result192__;
}

struct integer* int_to_integer(int self){
void* __result_obj__=(void*)0;
struct integer* __result193__;
    __result193__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2253, "integer"),self);
    return __result193__;
}

struct integer* long_to_integer(long self){
void* __result_obj__=(void*)0;
struct integer* __result194__;
    __result194__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2258, "integer"),self);
    return __result194__;
}

int integer_compare(struct integer* left, struct integer* right){
    if(left->value<right->value) {
        return -1;
    }
    else {
        if(left->value>right->value) {
            return 1;
        }
        else {
            return 0;
        }
    }
    return 0;
}

_Bool integer_equals(struct integer* self, struct integer* right){
    return self->value==right->value;
}

_Bool integer_operator_equals(struct integer* self, struct integer* right){
    return self->value==right->value;
}

_Bool integer_operator_not_equals(struct integer* self, struct integer* right){
    return self->value!=right->value;
}

struct integer* integer_operator_add(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
struct integer* __result195__;
    __result195__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2293, "integer"),left->value+right->value);
    return __result195__;
}

struct integer* integer_operator_sub(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
struct integer* __result196__;
    __result196__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2298, "integer"),left->value-right->value);
    return __result196__;
}

struct integer* integer_operator_mult(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
struct integer* __result197__;
    __result197__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2303, "integer"),left->value*right->value);
    return __result197__;
}

struct integer* integer_operator_div(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
struct integer* __result198__;
    __result198__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2308, "integer"),left->value/right->value);
    return __result198__;
}

struct integer* integer_operator_mod(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
struct integer* __result199__;
    __result199__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2313, "integer"),left->value%right->value);
    return __result199__;
}

struct integer* integer_operator_lshift(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
struct integer* __result200__;
    __result200__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2318, "integer"),left->value<<right->value);
    return __result200__;
}

struct integer* integer_operator_rshift(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
struct integer* __result201__;
    __result201__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2323, "integer"),left->value>>right->value);
    return __result201__;
}

struct integer* integer_operator_gteq(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
struct integer* __result202__;
    __result202__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2328, "integer"),left->value>=right->value);
    return __result202__;
}

struct integer* integer_operator_lteq(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
struct integer* __result203__;
    __result203__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2333, "integer"),left->value<=right->value);
    return __result203__;
}

struct integer* integer_operator_lt(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
struct integer* __result204__;
    __result204__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2338, "integer"),left->value<right->value);
    return __result204__;
}

struct integer* integer_operator_gt(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
struct integer* __result205__;
    __result205__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2343, "integer"),left->value>right->value);
    return __result205__;
}

struct integer* integer_operator_and(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
struct integer* __result206__;
    __result206__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2348, "integer"),left->value&right->value);
    return __result206__;
}

struct integer* integer_operator_xor(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
struct integer* __result207__;
    __result207__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2353, "integer"),left->value^right->value);
    return __result207__;
}

struct integer* integer_operator_or(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
struct integer* __result208__;
    __result208__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2358, "integer"),left->value|right->value);
    return __result208__;
}

struct integer* integer_operator_andand(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
struct integer* __result209__;
    __result209__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2363, "integer"),left->value&&right->value);
    return __result209__;
}

struct integer* integer_operator_oror(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
struct integer* __result210__;
    __result210__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2368, "integer"),left->value||right->value);
    return __result210__;
}

