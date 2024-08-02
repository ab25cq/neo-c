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
struct list_item$1sRightValueObjectp
{
    struct sRightValueObject* item;
    struct list_item$1sRightValueObjectp* prev;
    struct list_item$1sRightValueObjectp* next;
};
struct list$1sRightValueObjectp
{
    struct list_item$1sRightValueObjectp* head;
    struct list_item$1sRightValueObjectp* tail;
    int len;
    struct list_item$1sRightValueObjectp* it;
};
struct CVALUE
{
    char* c_value;
    struct sType* type;
    struct sVar* var;
    struct list$1sRightValueObjectp* right_values;
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
struct tuple3$3sTypephcharphsNodeph
{
    struct sType* v1;
    char* v2;
    struct sNode* v3;
};
struct list_item$1tuple3$3sTypephcharphsNodephph
{
    struct tuple3$3sTypephcharphsNodeph* item;
    struct list_item$1tuple3$3sTypephcharphsNodephph* prev;
    struct list_item$1tuple3$3sTypephcharphsNodephph* next;
};
struct list$1tuple3$3sTypephcharphsNodephph
{
    struct list_item$1tuple3$3sTypephcharphsNodephph* head;
    struct list_item$1tuple3$3sTypephcharphsNodephph* tail;
    int len;
    struct list_item$1tuple3$3sTypephcharphsNodephph* it;
};
struct sStoreNode
{
    int sline;
    char* sname;
    char* name;
    _Bool alloc;
    struct sType* type;
    struct sNode* right_value;
    struct list$1charph* multiple_assign;
    struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare;
};
struct sLoadNode
{
    int sline;
    char* sname;
    char* name;
};
struct sFunLoadNode
{
    int sline;
    char* sname;
    char* name;
};
struct tuple2$2sNodephsNodeph
{
    struct sNode* v1;
    struct sNode* v2;
};
struct list_item$1tuple2$2sNodephsNodephph
{
    struct tuple2$2sNodephsNodeph* item;
    struct list_item$1tuple2$2sNodephsNodephph* prev;
    struct list_item$1tuple2$2sNodephsNodephph* next;
};
struct list$1tuple2$2sNodephsNodephph
{
    struct list_item$1tuple2$2sNodephsNodephph* head;
    struct list_item$1tuple2$2sNodephsNodephph* tail;
    int len;
    struct list_item$1tuple2$2sNodephsNodephph* it;
};
struct sArrayInitializer
{
    int sline;
    char* sname;
    struct list$1tuple2$2sNodephsNodephph* initializer;
};
struct tuple2$2voidpsNodeph
{
    void* v1;
    struct sNode* v2;
};
struct tuple3$3sTypephcharphvoidp
{
    struct sType* v1;
    char* v2;
    void* v3;
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

char* xbasename(char* path);

char* xextname(char* path);

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

struct sNode* parse_global_variable(struct sInfo* info);

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info);

struct sNode* load_var(char* name, struct sInfo* info);

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

struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info);

char* sStoreNode_kind(struct sStoreNode* self);

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info);

static void sNodeBase_finalize(struct sNodeBase* self);
static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void list$1tuple3$3sTypephcharphsNodephphp_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void list_item$1tuple3$3sTypephcharphsNodephphp_finalize(struct list_item$1tuple3$3sTypephcharphsNodephph* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item);
static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self);
static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodephp_clone(struct tuple3$3sTypephcharphsNodeph* self);
static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self);
static void list$1tuple3$3sTypephcharphsNodephph_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static void sVar_finalize(struct sVar* self);
static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_begin(struct list$1tuple3$3sTypephcharphsNodephph* self);
static _Bool list$1tuple3$3sTypephcharphsNodephph_end(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_next(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void list$1sRightValueObjectpp_finalize(struct list$1sRightValueObjectp* self);
static void list_item$1sRightValueObjectpp_finalize(struct list_item$1sRightValueObjectp* self);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info);

char* sLoadNode_kind(struct sLoadNode* self);

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info);

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info);

char* sFunLoadNode_kind(struct sFunLoadNode* self);

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info);

static void sFunLoadNode_finalize(struct sFunLoadNode* self);
struct sArrayInitializer* sArrayInitializer_initialize(struct sArrayInitializer* self, struct list$1tuple2$2sNodephsNodephph* initializer, struct sInfo* info);

char* sArrayInitializer_kind(struct sArrayInitializer* self);

_Bool sArrayInitializer_compile(struct sArrayInitializer* self, struct sInfo* info);

static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephphp_clone(struct list$1tuple2$2sNodephsNodephph* self);
static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephph_initialize(struct list$1tuple2$2sNodephsNodephph* self);
static void list$1tuple2$2sNodephsNodephphp_finalize(struct list$1tuple2$2sNodephsNodephph* self);
static void list_item$1tuple2$2sNodephsNodephphp_finalize(struct list_item$1tuple2$2sNodephsNodephph* self);
static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephph_add(struct list$1tuple2$2sNodephsNodephph* self, struct tuple2$2sNodephsNodeph* item);
static void tuple2$2sNodephsNodephp_finalize(struct tuple2$2sNodephsNodeph* self);
static struct tuple2$2sNodephsNodeph* tuple2$2sNodephsNodephp_clone(struct tuple2$2sNodephsNodeph* self);
static void tuple2$2sNodephsNodeph_finalize(struct tuple2$2sNodephsNodeph* self);
static void list$1tuple2$2sNodephsNodephph_finalize(struct list$1tuple2$2sNodephsNodephph* self);
static struct tuple2$2sNodephsNodeph* list$1tuple2$2sNodephsNodephph_begin(struct list$1tuple2$2sNodephsNodephph* self);
static _Bool list$1tuple2$2sNodephsNodephph_end(struct list$1tuple2$2sNodephsNodephph* self);
static struct tuple2$2sNodephsNodeph* list$1tuple2$2sNodephsNodephph_next(struct list$1tuple2$2sNodephsNodephph* self);
static int list$1tuple2$2sNodephsNodephph_length(struct list$1tuple2$2sNodephsNodephph* self);
struct sNode* parse_array_initializer(struct sInfo* info);

static struct tuple2$2sNodephsNodeph* tuple2$2sNodephsNodeph_initialize(struct tuple2$2sNodephsNodeph* self, struct sNode* v1, struct sNode* v2);
static struct tuple2$2voidpsNodeph* tuple2$2voidpsNodeph_initialize(struct tuple2$2voidpsNodeph* self, void* v1, struct sNode* v2);
static void tuple2$2voidpsNodephp_finalize(struct tuple2$2voidpsNodeph* self);
static void sArrayInitializer_finalize(struct sArrayInitializer* self);
static struct sArrayInitializer* sArrayInitializer_clone(struct sArrayInitializer* self);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);

static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item);
static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3);
static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3);
static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static void sLoadNode_finalize(struct sLoadNode* self);
static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self);
static void sStoreNode_finalize(struct sStoreNode* self);
static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self);
// uniq global variable
// source head3

// inline function
static inline _Bool die(char* msg){
    perror(msg);
    stackframe();
    exit(4);
    return (_Bool)0;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long int len){
void* __result_obj__;
void* right_value0;
void* right_value1;
struct buffer* result_0;
struct buffer* __result1__;
memset(&__result_obj__, 0, sizeof(void*));
right_value0 = (void*)0;
right_value1 = (void*)0;
memset(&result_0, 0, sizeof(struct buffer*));
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1899, "buffer"))))))));
    come_call_finalizer3(right_value0,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value1,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_0,self,sizeof(char)*len);
    __result1__ = __result_obj__ = result_0;
    come_call_finalizer3(result_0,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result1__;
    come_call_finalizer3(result_0,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* shortpa_to_buffer(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value2;
void* right_value3;
struct buffer* result_1;
struct buffer* __result2__;
memset(&__result_obj__, 0, sizeof(void*));
right_value2 = (void*)0;
right_value3 = (void*)0;
memset(&result_1, 0, sizeof(struct buffer*));
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1906, "buffer"))))))));
    come_call_finalizer3(right_value2,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value3,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_1,(char*)self,sizeof(short short)*len);
    __result2__ = __result_obj__ = result_1;
    come_call_finalizer3(result_1,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result2__;
    come_call_finalizer3(result_1,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long int len){
void* __result_obj__;
void* right_value4;
void* right_value5;
struct buffer* result_2;
struct buffer* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
right_value4 = (void*)0;
right_value5 = (void*)0;
memset(&result_2, 0, sizeof(struct buffer*));
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1913, "buffer"))))))));
    come_call_finalizer3(right_value4,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value5,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_2,(char*)self,sizeof(int)*len);
    __result3__ = __result_obj__ = result_2;
    come_call_finalizer3(result_2,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result3__;
    come_call_finalizer3(result_2,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long int len){
void* __result_obj__;
void* right_value6;
void* right_value7;
struct buffer* result_3;
struct buffer* __result4__;
memset(&__result_obj__, 0, sizeof(void*));
right_value6 = (void*)0;
right_value7 = (void*)0;
memset(&result_3, 0, sizeof(struct buffer*));
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1920, "buffer"))))))));
    come_call_finalizer3(right_value6,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value7,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_3,(char*)self,sizeof(long)*len);
    __result4__ = __result_obj__ = result_3;
    come_call_finalizer3(result_3,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result4__;
    come_call_finalizer3(result_3,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long int len){
void* __result_obj__;
void* right_value8;
void* right_value9;
struct buffer* result_4;
struct buffer* __result5__;
memset(&__result_obj__, 0, sizeof(void*));
right_value8 = (void*)0;
right_value9 = (void*)0;
memset(&result_4, 0, sizeof(struct buffer*));
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1927, "buffer"))))))));
    come_call_finalizer3(right_value8,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value9,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_4,(char*)self,sizeof(float)*len);
    __result5__ = __result_obj__ = result_4;
    come_call_finalizer3(result_4,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result5__;
    come_call_finalizer3(result_4,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long int len){
void* __result_obj__;
void* right_value10;
void* right_value11;
struct buffer* result_5;
struct buffer* __result6__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
right_value11 = (void*)0;
memset(&result_5, 0, sizeof(struct buffer*));
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1934, "buffer"))))))));
    come_call_finalizer3(right_value10,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value11,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_5,(char*)self,sizeof(double)*len);
    __result6__ = __result_obj__ = result_5;
    come_call_finalizer3(result_5,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result6__;
    come_call_finalizer3(result_5,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__;
void* right_value12;
struct smart_pointer$1char* result_6;
void* right_value13;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
right_value12 = (void*)0;
memset(&result_6, 0, sizeof(struct smart_pointer$1char*));
right_value13 = (void*)0;
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1950, "smart_pointer$1char"))));
    come_call_finalizer3(right_value12,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj1=result_6->memory;
    result_6->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=buffer_clone(self))));
    come_call_finalizer3(__dec_obj1,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value13,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    result_6->p=result_6->memory->buf;
    __result7__ = __result_obj__ = result_6;
    come_call_finalizer3(result_6,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result7__;
    come_call_finalizer3(result_6,smart_pointer$1charp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__;
void* right_value14;
struct smart_pointer$1char* result_7;
void* right_value15;
struct buffer* __dec_obj2;
struct smart_pointer$1char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
right_value14 = (void*)0;
memset(&result_7, 0, sizeof(struct smart_pointer$1char*));
right_value15 = (void*)0;
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1960, "smart_pointer$1char"))));
    come_call_finalizer3(right_value14,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj2=result_7->memory;
    result_7->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=buffer_clone(self))));
    come_call_finalizer3(__dec_obj2,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value15,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    result_7->p=(char*)result_7->memory->buf;
    __result8__ = __result_obj__ = result_7;
    come_call_finalizer3(result_7,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result8__;
    come_call_finalizer3(result_7,smart_pointer$1charp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__;
void* right_value16;
struct smart_pointer$1short* result_8;
void* right_value17;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
right_value16 = (void*)0;
memset(&result_8, 0, sizeof(struct smart_pointer$1short*));
right_value17 = (void*)0;
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 1970, "smart_pointer$1short"))));
    come_call_finalizer3(right_value16,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj3=result_8->memory;
    result_8->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value17=buffer_clone(self))));
    come_call_finalizer3(__dec_obj3,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value17,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    result_8->p=(short short*)result_8->memory->buf;
    __result9__ = __result_obj__ = result_8;
    come_call_finalizer3(result_8,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    return __result9__;
    come_call_finalizer3(result_8,smart_pointer$1shortp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__;
void* right_value18;
struct smart_pointer$1int* result_9;
void* right_value19;
struct buffer* __dec_obj4;
struct smart_pointer$1int* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
right_value18 = (void*)0;
memset(&result_9, 0, sizeof(struct smart_pointer$1int*));
right_value19 = (void*)0;
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 1980, "smart_pointer$1int"))));
    come_call_finalizer3(right_value18,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj4=result_9->memory;
    result_9->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=buffer_clone(self))));
    come_call_finalizer3(__dec_obj4,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value19,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    result_9->p=(int*)result_9->memory->buf;
    __result10__ = __result_obj__ = result_9;
    come_call_finalizer3(result_9,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    return __result10__;
    come_call_finalizer3(result_9,smart_pointer$1intp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__;
void* right_value20;
struct smart_pointer$1long* result_10;
void* right_value21;
struct buffer* __dec_obj5;
struct smart_pointer$1long* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
right_value20 = (void*)0;
memset(&result_10, 0, sizeof(struct smart_pointer$1long*));
right_value21 = (void*)0;
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 1990, "smart_pointer$1long"))));
    come_call_finalizer3(right_value20,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj5=result_10->memory;
    result_10->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value21=buffer_clone(self))));
    come_call_finalizer3(__dec_obj5,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value21,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    result_10->p=(long*)result_10->memory->buf;
    __result11__ = __result_obj__ = result_10;
    come_call_finalizer3(result_10,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    return __result11__;
    come_call_finalizer3(result_10,smart_pointer$1longp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long int len){
void* __result_obj__;
void* right_value22;
void* right_value25;
struct smart_pointer$1char* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
right_value22 = (void*)0;
right_value25 = (void*)0;
    __result13__ = __result_obj__ = ((struct smart_pointer$1char*)(right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2161, "smart_pointer$1char")))),self,len)));
    come_call_finalizer3(right_value22,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value25,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result13__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value26;
void* right_value29;
struct smart_pointer$1short* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
right_value26 = (void*)0;
right_value29 = (void*)0;
    __result15__ = __result_obj__ = ((struct smart_pointer$1short*)(right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2166, "smart_pointer$1short")))),self,len)));
    come_call_finalizer3(right_value26,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value29,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result15__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long int len){
void* __result_obj__;
void* right_value30;
void* right_value33;
struct smart_pointer$1int* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
right_value30 = (void*)0;
right_value33 = (void*)0;
    __result17__ = __result_obj__ = ((struct smart_pointer$1int*)(right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2171, "smart_pointer$1int")))),self,len)));
    come_call_finalizer3(right_value30,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value33,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result17__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long int len){
void* __result_obj__;
void* right_value34;
void* right_value37;
struct smart_pointer$1long* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
right_value34 = (void*)0;
right_value37 = (void*)0;
    __result19__ = __result_obj__ = ((struct smart_pointer$1long*)(right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2176, "smart_pointer$1long")))),self,len)));
    come_call_finalizer3(right_value34,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value37,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result19__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long int len){
void* __result_obj__;
void* right_value38;
void* right_value41;
struct smart_pointer$1float* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
right_value38 = (void*)0;
right_value41 = (void*)0;
    __result21__ = __result_obj__ = ((struct smart_pointer$1float*)(right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./neo-c.h", 2181, "smart_pointer$1float")))),self,len)));
    come_call_finalizer3(right_value38,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value41,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result21__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long int len){
void* __result_obj__;
void* right_value42;
void* right_value45;
struct smart_pointer$1double* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
right_value42 = (void*)0;
right_value45 = (void*)0;
    __result23__ = __result_obj__ = ((struct smart_pointer$1double*)(right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./neo-c.h", 2186, "smart_pointer$1double")))),self,len)));
    come_call_finalizer3(right_value42,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value45,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    return __result23__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long int len){
void* __result_obj__;
void* right_value46;
void* right_value50;
struct list$1char* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
right_value46 = (void*)0;
right_value50 = (void*)0;
    __result26__ = __result_obj__ = ((struct list$1char*)(right_value50=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count(((struct list$1char*)(right_value46=(struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./neo-c.h", 2191, "list$1char")))),len,self)));
    come_call_finalizer3(right_value46,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value50,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result26__;
}
static inline struct list$1short* shortpa_to_list(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value51;
void* right_value55;
struct list$1short* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
right_value51 = (void*)0;
right_value55 = (void*)0;
    __result29__ = __result_obj__ = ((struct list$1short*)(right_value55=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count(((struct list$1short*)(right_value51=(struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./neo-c.h", 2196, "list$1short")))),len,self)));
    come_call_finalizer3(right_value51,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value55,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result29__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long int len){
void* __result_obj__;
void* right_value56;
void* right_value60;
struct list$1int* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
right_value56 = (void*)0;
right_value60 = (void*)0;
    __result32__ = __result_obj__ = ((struct list$1int*)(right_value60=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value56=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./neo-c.h", 2201, "list$1int")))),len,self)));
    come_call_finalizer3(right_value56,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value60,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result32__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long int len){
void* __result_obj__;
void* right_value61;
void* right_value65;
struct list$1long* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
right_value61 = (void*)0;
right_value65 = (void*)0;
    __result35__ = __result_obj__ = ((struct list$1long*)(right_value65=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count(((struct list$1long*)(right_value61=(struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./neo-c.h", 2206, "list$1long")))),len,self)));
    come_call_finalizer3(right_value61,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value65,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result35__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long int len){
void* __result_obj__;
void* right_value66;
void* right_value70;
struct list$1float* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
right_value66 = (void*)0;
right_value70 = (void*)0;
    __result38__ = __result_obj__ = ((struct list$1float*)(right_value70=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count(((struct list$1float*)(right_value66=(struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./neo-c.h", 2211, "list$1float")))),len,self)));
    come_call_finalizer3(right_value66,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value70,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result38__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long int len){
void* __result_obj__;
void* right_value71;
void* right_value75;
struct list$1double* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
right_value71 = (void*)0;
right_value75 = (void*)0;
    __result41__ = __result_obj__ = ((struct list$1double*)(right_value75=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count(((struct list$1double*)(right_value71=(struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./neo-c.h", 2216, "list$1double")))),len,self)));
    come_call_finalizer3(right_value71,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value75,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
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
void* __result_obj__;
void* right_value76;
char* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
right_value76 = (void*)0;
    __result42__ = __result_obj__ = ((char*)(right_value76=xsprintf(msg,self)));
    right_value76 = come_decrement_ref_count2(right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result42__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value77;
char* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
right_value77 = (void*)0;
    __result43__ = __result_obj__ = ((char*)(right_value77=xsprintf(msg,self)));
    right_value77 = come_decrement_ref_count2(right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result43__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__;
void* right_value78;
char* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
right_value78 = (void*)0;
    __result44__ = __result_obj__ = ((char*)(right_value78=xsprintf(msg,self)));
    right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result44__;
}

// body function








static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
        if(self!=((void*)0)&&self->memory!=((void*)0)) {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
        if(self!=((void*)0)&&self->memory!=((void*)0)) {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
        if(self!=((void*)0)&&self->memory!=((void*)0)) {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
        if(self!=((void*)0)&&self->memory!=((void*)0)) {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}


static struct smart_pointer$1char* smart_pointer$1char_initialize(struct smart_pointer$1char* self, void* memory, int size){
void* __result_obj__;
void* right_value23;
void* right_value24;
struct buffer* __dec_obj6;
struct smart_pointer$1char* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
right_value23 = (void*)0;
right_value24 = (void*)0;
        __dec_obj6=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2002, "buffer"))))))));
        come_call_finalizer3(__dec_obj6,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value23,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value24,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(char)*size);
        self->p=(char*)self->memory->buf;
        __result12__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
        return __result12__;
        come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size){
void* __result_obj__;
void* right_value27;
void* right_value28;
struct buffer* __dec_obj7;
struct smart_pointer$1short* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
right_value27 = (void*)0;
right_value28 = (void*)0;
        __dec_obj7=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2002, "buffer"))))))));
        come_call_finalizer3(__dec_obj7,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value27,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value28,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(short short)*size);
        self->p=(short short*)self->memory->buf;
        __result14__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
        return __result14__;
        come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size){
void* __result_obj__;
void* right_value31;
void* right_value32;
struct buffer* __dec_obj8;
struct smart_pointer$1int* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
right_value31 = (void*)0;
right_value32 = (void*)0;
        __dec_obj8=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2002, "buffer"))))))));
        come_call_finalizer3(__dec_obj8,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value31,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value32,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(int)*size);
        self->p=(int*)self->memory->buf;
        __result16__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
        return __result16__;
        come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size){
void* __result_obj__;
void* right_value35;
void* right_value36;
struct buffer* __dec_obj9;
struct smart_pointer$1long* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
right_value35 = (void*)0;
right_value36 = (void*)0;
        __dec_obj9=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2002, "buffer"))))))));
        come_call_finalizer3(__dec_obj9,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value35,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value36,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(long)*size);
        self->p=(long*)self->memory->buf;
        __result18__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
        return __result18__;
        come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size){
void* __result_obj__;
void* right_value39;
void* right_value40;
struct buffer* __dec_obj10;
struct smart_pointer$1float* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
right_value39 = (void*)0;
right_value40 = (void*)0;
        __dec_obj10=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2002, "buffer"))))))));
        come_call_finalizer3(__dec_obj10,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value39,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value40,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(float)*size);
        self->p=(float*)self->memory->buf;
        __result20__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
        return __result20__;
        come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
            if(self!=((void*)0)&&self->memory!=((void*)0)) {
                come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct smart_pointer$1double* smart_pointer$1double_initialize(struct smart_pointer$1double* self, void* memory, int size){
void* __result_obj__;
void* right_value43;
void* right_value44;
struct buffer* __dec_obj11;
struct smart_pointer$1double* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
right_value43 = (void*)0;
right_value44 = (void*)0;
        __dec_obj11=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2002, "buffer"))))))));
        come_call_finalizer3(__dec_obj11,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value43,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value44,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(double)*size);
        self->p=(double*)self->memory->buf;
        __result22__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
        return __result22__;
        come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
            if(self!=((void*)0)&&self->memory!=((void*)0)) {
                come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__;
int i_11;
struct list$1char* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_11, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_11=0;        i_11<num_value;        i_11++        ){
            list$1char_push_back(self,values[i_11]);
        }
        __result25__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
        return __result25__;
        come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__;
void* right_value47;
struct list_item$1char* litem_12;
void* right_value48;
struct list_item$1char* litem_13;
void* right_value49;
struct list_item$1char* litem_14;
struct list$1char* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
right_value47 = (void*)0;
memset(&litem_12, 0, sizeof(struct list_item$1char*));
right_value48 = (void*)0;
memset(&litem_13, 0, sizeof(struct list_item$1char*));
right_value49 = (void*)0;
memset(&litem_14, 0, sizeof(struct list_item$1char*));
                if(self->len==0) {
                    litem_12=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value47=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 219, "list_item$1char"))));
                    come_call_finalizer3(right_value47,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_12->prev=((void*)0);
                    litem_12->next=((void*)0);
                    litem_12->item=item;
                    self->tail=litem_12;
                    self->head=litem_12;
                }
                else {
                    if(self->len==1) {
                        litem_13=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value48=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 229, "list_item$1char"))));
                        come_call_finalizer3(right_value48,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_13->prev=self->head;
                        litem_13->next=((void*)0);
                        litem_13->item=item;
                        self->tail=litem_13;
                        self->head->next=litem_13;
                    }
                    else {
                        litem_14=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value49=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 239, "list_item$1char"))));
                        come_call_finalizer3(right_value49,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
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

static void list_item$1charp_finalize(struct list_item$1char* self){
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_15;
struct list_item$1char* prev_it_16;
memset(&it_15, 0, sizeof(struct list_item$1char*));
memset(&prev_it_16, 0, sizeof(struct list_item$1char*));
            it_15=self->head;
            while(it_15!=((void*)0)) {
                prev_it_16=it_15;
                it_15=it_15->next;
                come_call_finalizer3(prev_it_16,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values){
void* __result_obj__;
int i_17;
struct list$1short* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_17, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_17=0;        i_17<num_value;        i_17++        ){
            list$1short_push_back(self,values[i_17]);
        }
        __result28__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
        return __result28__;
        come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short short item){
void* __result_obj__;
void* right_value52;
struct list_item$1short* litem_18;
void* right_value53;
struct list_item$1short* litem_19;
void* right_value54;
struct list_item$1short* litem_20;
struct list$1short* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
right_value52 = (void*)0;
memset(&litem_18, 0, sizeof(struct list_item$1short*));
right_value53 = (void*)0;
memset(&litem_19, 0, sizeof(struct list_item$1short*));
right_value54 = (void*)0;
memset(&litem_20, 0, sizeof(struct list_item$1short*));
                if(self->len==0) {
                    litem_18=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value52=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 219, "list_item$1short"))));
                    come_call_finalizer3(right_value52,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_18->prev=((void*)0);
                    litem_18->next=((void*)0);
                    litem_18->item=item;
                    self->tail=litem_18;
                    self->head=litem_18;
                }
                else {
                    if(self->len==1) {
                        litem_19=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value53=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 229, "list_item$1short"))));
                        come_call_finalizer3(right_value53,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_19->prev=self->head;
                        litem_19->next=((void*)0);
                        litem_19->item=item;
                        self->tail=litem_19;
                        self->head->next=litem_19;
                    }
                    else {
                        litem_20=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value54=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 239, "list_item$1short"))));
                        come_call_finalizer3(right_value54,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_20->prev=self->tail;
                        litem_20->next=((void*)0);
                        litem_20->item=item;
                        self->tail->next=litem_20;
                        self->tail=litem_20;
                    }
                }
                self->len++;
                __result27__ = __result_obj__ = self;
                return __result27__;
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_21;
struct list_item$1short* prev_it_22;
memset(&it_21, 0, sizeof(struct list_item$1short*));
memset(&prev_it_22, 0, sizeof(struct list_item$1short*));
            it_21=self->head;
            while(it_21!=((void*)0)) {
                prev_it_22=it_21;
                it_21=it_21->next;
                come_call_finalizer3(prev_it_22,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__;
int i_23;
struct list$1int* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_23, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_23=0;        i_23<num_value;        i_23++        ){
            list$1int_push_back(self,values[i_23]);
        }
        __result31__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
        return __result31__;
        come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__;
void* right_value57;
struct list_item$1int* litem_24;
void* right_value58;
struct list_item$1int* litem_25;
void* right_value59;
struct list_item$1int* litem_26;
struct list$1int* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
right_value57 = (void*)0;
memset(&litem_24, 0, sizeof(struct list_item$1int*));
right_value58 = (void*)0;
memset(&litem_25, 0, sizeof(struct list_item$1int*));
right_value59 = (void*)0;
memset(&litem_26, 0, sizeof(struct list_item$1int*));
                if(self->len==0) {
                    litem_24=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value57=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 219, "list_item$1int"))));
                    come_call_finalizer3(right_value57,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_24->prev=((void*)0);
                    litem_24->next=((void*)0);
                    litem_24->item=item;
                    self->tail=litem_24;
                    self->head=litem_24;
                }
                else {
                    if(self->len==1) {
                        litem_25=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value58=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 229, "list_item$1int"))));
                        come_call_finalizer3(right_value58,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_25->prev=self->head;
                        litem_25->next=((void*)0);
                        litem_25->item=item;
                        self->tail=litem_25;
                        self->head->next=litem_25;
                    }
                    else {
                        litem_26=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value59=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 239, "list_item$1int"))));
                        come_call_finalizer3(right_value59,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_26->prev=self->tail;
                        litem_26->next=((void*)0);
                        litem_26->item=item;
                        self->tail->next=litem_26;
                        self->tail=litem_26;
                    }
                }
                self->len++;
                __result30__ = __result_obj__ = self;
                return __result30__;
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_27;
struct list_item$1int* prev_it_28;
memset(&it_27, 0, sizeof(struct list_item$1int*));
memset(&prev_it_28, 0, sizeof(struct list_item$1int*));
            it_27=self->head;
            while(it_27!=((void*)0)) {
                prev_it_28=it_27;
                it_27=it_27->next;
                come_call_finalizer3(prev_it_28,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__;
int i_29;
struct list$1long* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_29, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_29=0;        i_29<num_value;        i_29++        ){
            list$1long_push_back(self,values[i_29]);
        }
        __result34__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
        return __result34__;
        come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__;
void* right_value62;
struct list_item$1long* litem_30;
void* right_value63;
struct list_item$1long* litem_31;
void* right_value64;
struct list_item$1long* litem_32;
struct list$1long* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
right_value62 = (void*)0;
memset(&litem_30, 0, sizeof(struct list_item$1long*));
right_value63 = (void*)0;
memset(&litem_31, 0, sizeof(struct list_item$1long*));
right_value64 = (void*)0;
memset(&litem_32, 0, sizeof(struct list_item$1long*));
                if(self->len==0) {
                    litem_30=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value62=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 219, "list_item$1long"))));
                    come_call_finalizer3(right_value62,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_30->prev=((void*)0);
                    litem_30->next=((void*)0);
                    litem_30->item=item;
                    self->tail=litem_30;
                    self->head=litem_30;
                }
                else {
                    if(self->len==1) {
                        litem_31=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value63=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 229, "list_item$1long"))));
                        come_call_finalizer3(right_value63,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_31->prev=self->head;
                        litem_31->next=((void*)0);
                        litem_31->item=item;
                        self->tail=litem_31;
                        self->head->next=litem_31;
                    }
                    else {
                        litem_32=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value64=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 239, "list_item$1long"))));
                        come_call_finalizer3(right_value64,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_32->prev=self->tail;
                        litem_32->next=((void*)0);
                        litem_32->item=item;
                        self->tail->next=litem_32;
                        self->tail=litem_32;
                    }
                }
                self->len++;
                __result33__ = __result_obj__ = self;
                return __result33__;
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_33;
struct list_item$1long* prev_it_34;
memset(&it_33, 0, sizeof(struct list_item$1long*));
memset(&prev_it_34, 0, sizeof(struct list_item$1long*));
            it_33=self->head;
            while(it_33!=((void*)0)) {
                prev_it_34=it_33;
                it_33=it_33->next;
                come_call_finalizer3(prev_it_34,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__;
int i_35;
struct list$1float* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_35, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_35=0;        i_35<num_value;        i_35++        ){
            list$1float_push_back(self,values[i_35]);
        }
        __result37__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
        return __result37__;
        come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__;
void* right_value67;
struct list_item$1float* litem_36;
void* right_value68;
struct list_item$1float* litem_37;
void* right_value69;
struct list_item$1float* litem_38;
struct list$1float* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value67 = (void*)0;
memset(&litem_36, 0, sizeof(struct list_item$1float*));
right_value68 = (void*)0;
memset(&litem_37, 0, sizeof(struct list_item$1float*));
right_value69 = (void*)0;
memset(&litem_38, 0, sizeof(struct list_item$1float*));
                if(self->len==0) {
                    litem_36=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value67=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 219, "list_item$1float"))));
                    come_call_finalizer3(right_value67,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_36->prev=((void*)0);
                    litem_36->next=((void*)0);
                    litem_36->item=item;
                    self->tail=litem_36;
                    self->head=litem_36;
                }
                else {
                    if(self->len==1) {
                        litem_37=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value68=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 229, "list_item$1float"))));
                        come_call_finalizer3(right_value68,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_37->prev=self->head;
                        litem_37->next=((void*)0);
                        litem_37->item=item;
                        self->tail=litem_37;
                        self->head->next=litem_37;
                    }
                    else {
                        litem_38=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value69=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 239, "list_item$1float"))));
                        come_call_finalizer3(right_value69,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_38->prev=self->tail;
                        litem_38->next=((void*)0);
                        litem_38->item=item;
                        self->tail->next=litem_38;
                        self->tail=litem_38;
                    }
                }
                self->len++;
                __result36__ = __result_obj__ = self;
                return __result36__;
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_39;
struct list_item$1float* prev_it_40;
memset(&it_39, 0, sizeof(struct list_item$1float*));
memset(&prev_it_40, 0, sizeof(struct list_item$1float*));
            it_39=self->head;
            while(it_39!=((void*)0)) {
                prev_it_40=it_39;
                it_39=it_39->next;
                come_call_finalizer3(prev_it_40,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__;
int i_41;
struct list$1double* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_41, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_41=0;        i_41<num_value;        i_41++        ){
            list$1double_push_back(self,values[i_41]);
        }
        __result40__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
        return __result40__;
        come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__;
void* right_value72;
struct list_item$1double* litem_42;
void* right_value73;
struct list_item$1double* litem_43;
void* right_value74;
struct list_item$1double* litem_44;
struct list$1double* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
right_value72 = (void*)0;
memset(&litem_42, 0, sizeof(struct list_item$1double*));
right_value73 = (void*)0;
memset(&litem_43, 0, sizeof(struct list_item$1double*));
right_value74 = (void*)0;
memset(&litem_44, 0, sizeof(struct list_item$1double*));
                if(self->len==0) {
                    litem_42=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value72=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 219, "list_item$1double"))));
                    come_call_finalizer3(right_value72,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_42->prev=((void*)0);
                    litem_42->next=((void*)0);
                    litem_42->item=item;
                    self->tail=litem_42;
                    self->head=litem_42;
                }
                else {
                    if(self->len==1) {
                        litem_43=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value73=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 229, "list_item$1double"))));
                        come_call_finalizer3(right_value73,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_43->prev=self->head;
                        litem_43->next=((void*)0);
                        litem_43->item=item;
                        self->tail=litem_43;
                        self->head->next=litem_43;
                    }
                    else {
                        litem_44=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value74=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 239, "list_item$1double"))));
                        come_call_finalizer3(right_value74,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_44->prev=self->tail;
                        litem_44->next=((void*)0);
                        litem_44->item=item;
                        self->tail->next=litem_44;
                        self->tail=litem_44;
                    }
                }
                self->len++;
                __result39__ = __result_obj__ = self;
                return __result39__;
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_45;
struct list_item$1double* prev_it_46;
memset(&it_45, 0, sizeof(struct list_item$1double*));
memset(&prev_it_46, 0, sizeof(struct list_item$1double*));
            it_45=self->head;
            while(it_45!=((void*)0)) {
                prev_it_46=it_45;
                it_45=it_45->next;
                come_call_finalizer3(prev_it_46,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
            }
}










struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info){
void* __result_obj__;
void* right_value79;
void* right_value80;
char* __dec_obj12;
void* right_value116;
struct sType* __dec_obj36;
struct sNode* __dec_obj37;
void* right_value117;
struct list$1charph* __dec_obj38;
void* right_value128;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj45;
struct sStoreNode* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value80 = (void*)0;
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value128 = (void*)0;
    ((struct sNodeBase*)(right_value79=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value79,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj12=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value80=__builtin_string(name))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->alloc=alloc;
    ((void*)0);
    __dec_obj36=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value116=sType_clone(type))));
    come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value116,sType_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj37=self->right_value;
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); }
    ((void*)0);
    __dec_obj38=self->multiple_assign;
    self->multiple_assign=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value117=list$1charphp_clone(multiple_assign))));
    come_call_finalizer3(__dec_obj38,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value117,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    ((void*)0);
    __dec_obj45=self->multiple_declare;
    self->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value128=list$1tuple3$3sTypephcharphsNodephphp_clone(multiple_declare))));
    come_call_finalizer3(__dec_obj45,list$1tuple3$3sTypephcharphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value128,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    __result69__ = __result_obj__ = self;
    come_call_finalizer3(self,sStoreNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(multiple_assign,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(multiple_declare,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    if(right_value) { right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result69__;
    come_call_finalizer3(self,sStoreNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(multiple_assign,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(multiple_declare,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    if(right_value) { right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sStoreNode_kind(struct sStoreNode* self){
void* __result_obj__;
void* right_value129;
char* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value129 = (void*)0;
    __result70__ = __result_obj__ = ((char*)(right_value129=__builtin_string("sStoreNode")));
    right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result70__;
}

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info){
struct sVar* var__87;
void* right_value130;
struct sType* type_91;
struct list$1tuple3$3sTypephcharphsNodephph* o2_saved_92;
struct tuple3$3sTypephcharphsNodeph* it_95;
struct tuple3$3sTypephcharphsNodeph* multiple_assign_var1;
struct sType* type_98;
char* var_name_99;
struct sNode* right_value_100;
void* right_value131;
_Bool __result81__;
void* right_value132;
struct sType* left_type_101;
_Bool __result82__;
void* right_value133;
struct CVALUE* come_value_102;
void* right_value134;
void* right_value135;
void* right_value136;
void* right_value137;
struct CVALUE* right_value_105;
struct sType* right_type_106;
int i_107;
struct list$1charph* o2_saved_108;
char* it_111;
struct sType* right_type2_114;
void* right_value138;
void* right_value139;
char* multiple_var_name_119;
void* right_value140;
void* right_value141;
char* __dec_obj46;
struct list$1charph* o2_saved_120;
char* it_121;
void* right_value142;
struct sType* right_type2_122;
struct sVar* var__123;
void* right_value143;
struct sType* var_type_124;
void* right_value144;
struct sType* left_type_125;
void* right_value145;
void* right_value146;
struct CVALUE* right_value2_126;
void* right_value147;
char* __dec_obj47;
void* right_value148;
struct sType* __dec_obj48;
void* right_value149;
void* right_value150;
struct CVALUE* come_value_127;
void* right_value151;
void* right_value152;
void* right_value153;
char* __dec_obj49;
int right_value_id_128;
void* right_value154;
char* __dec_obj50;
void* right_value155;
struct sType* __dec_obj51;
void* right_value156;
struct sVar* var__129;
void* right_value157;
struct sType* type_130;
void* right_value158;
_Bool __result91__;
void* right_value159;
struct sType* left_type_131;
void* right_value160;
void* right_value161;
struct list$1sNodeph* o2_saved_132;
struct sNode* it_135;
void* right_value162;
struct CVALUE* come_value_138;
void* right_value163;
void* right_value164;
struct sType* left_type2_139;
void* right_value165;
void* right_value166;
void* right_value167;
struct CVALUE* come_value_140;
void* right_value168;
char* __dec_obj52;
void* right_value169;
struct sType* __dec_obj53;
struct sVar* var__144;
void* right_value173;
struct sType* type_145;
void* right_value174;
void* right_value175;
_Bool array_initializer_146;
void* right_value176;
struct CVALUE* right_value_147;
struct sType* right_type_148;
void* right_value177;
void* right_value178;
struct sType* var_type_149;
void* right_value179;
void* right_value180;
struct sType* left_type_150;
struct sVar* var__151;
void* right_value181;
void* right_value182;
void* right_value183;
struct CVALUE* come_value_152;
void* right_value184;
char* __dec_obj57;
void* right_value185;
void* right_value186;
void* right_value187;
void* right_value188;
void* right_value189;
struct CVALUE* come_value_153;
void* right_value190;
char* __dec_obj58;
void* right_value191;
void* right_value192;
int right_value_id_154;
void* right_value193;
void* right_value194;
void* right_value195;
struct CVALUE* come_value_155;
void* right_value196;
char* __dec_obj59;
void* right_value197;
struct sType* __dec_obj60;
void* right_value198;
void* right_value199;
void* right_value200;
void* right_value201;
void* right_value202;
struct CVALUE* come_value_156;
void* right_value203;
char* __dec_obj61;
void* right_value204;
struct sType* __dec_obj62;
void* right_value205;
void* right_value206;
_Bool __result99__;
void* right_value207;
void* right_value208;
void* right_value209;
struct CVALUE* come_value_157;
void* right_value210;
char* __dec_obj63;
void* right_value211;
struct sType* __dec_obj64;
void* right_value212;
struct CVALUE* right_value_158;
struct sType* right_type_159;
struct sClass* current_stack_frame_struct_160;
struct sVar* parent_var_161;
struct sType* left_type_162;
void* right_value213;
void* right_value214;
void* right_value215;
char* c_value_163;
int right_value_id_164;
void* right_value216;
void* right_value217;
struct CVALUE* come_value_165;
void* right_value218;
char* __dec_obj65;
void* right_value219;
struct sType* __dec_obj66;
_Bool __result100__;
void* right_value220;
void* right_value221;
void* right_value222;
char* c_value_166;
void* right_value223;
void* right_value224;
struct CVALUE* come_value_167;
void* right_value225;
char* __dec_obj67;
void* right_value226;
struct sType* __dec_obj68;
_Bool __result101__;
void* right_value227;
void* right_value228;
_Bool __result102__;
void* right_value229;
void* right_value230;
struct CVALUE* come_value_168;
void* right_value231;
char* __dec_obj69;
void* right_value232;
struct sType* __dec_obj70;
_Bool __result103__;
struct sVar* var__169;
_Bool __result104__;
void* right_value233;
struct sType* __dec_obj71;
void* right_value234;
struct sType* left_type_170;
void* right_value235;
void* right_value236;
void* right_value237;
void* right_value238;
struct CVALUE* come_value_171;
void* right_value239;
char* __dec_obj72;
void* right_value240;
struct sType* __dec_obj73;
void* right_value241;
void* right_value242;
int right_value_id_172;
void* right_value243;
void* right_value244;
struct CVALUE* come_value_173;
void* right_value245;
char* __dec_obj74;
void* right_value246;
struct sType* __dec_obj75;
void* right_value247;
void* right_value248;
void* right_value249;
void* right_value250;
struct CVALUE* come_value_174;
void* right_value251;
char* __dec_obj76;
void* right_value252;
struct sType* __dec_obj77;
void* right_value253;
void* right_value254;
_Bool __result105__;
void* right_value255;
void* right_value256;
struct CVALUE* come_value_175;
void* right_value257;
char* __dec_obj78;
void* right_value258;
struct sType* __dec_obj79;
memset(&var__87, 0, sizeof(struct sVar*));
right_value130 = (void*)0;
memset(&type_91, 0, sizeof(struct sType*));
memset(&o2_saved_92, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&it_95, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
right_value131 = (void*)0;
right_value132 = (void*)0;
memset(&left_type_101, 0, sizeof(struct sType*));
right_value133 = (void*)0;
memset(&come_value_102, 0, sizeof(struct CVALUE*));
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value136 = (void*)0;
right_value137 = (void*)0;
memset(&right_value_105, 0, sizeof(struct CVALUE*));
memset(&right_type_106, 0, sizeof(struct sType*));
memset(&i_107, 0, sizeof(int));
memset(&o2_saved_108, 0, sizeof(struct list$1charph*));
memset(&it_111, 0, sizeof(char*));
memset(&right_type2_114, 0, sizeof(struct sType*));
right_value138 = (void*)0;
right_value139 = (void*)0;
memset(&multiple_var_name_119, 0, sizeof(char*));
right_value140 = (void*)0;
right_value141 = (void*)0;
memset(&o2_saved_120, 0, sizeof(struct list$1charph*));
memset(&it_121, 0, sizeof(char*));
right_value142 = (void*)0;
memset(&right_type2_122, 0, sizeof(struct sType*));
memset(&var__123, 0, sizeof(struct sVar*));
right_value143 = (void*)0;
memset(&var_type_124, 0, sizeof(struct sType*));
right_value144 = (void*)0;
memset(&left_type_125, 0, sizeof(struct sType*));
right_value145 = (void*)0;
right_value146 = (void*)0;
memset(&right_value2_126, 0, sizeof(struct CVALUE*));
right_value147 = (void*)0;
right_value148 = (void*)0;
right_value149 = (void*)0;
right_value150 = (void*)0;
memset(&come_value_127, 0, sizeof(struct CVALUE*));
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
memset(&right_value_id_128, 0, sizeof(int));
right_value154 = (void*)0;
right_value155 = (void*)0;
right_value156 = (void*)0;
memset(&var__129, 0, sizeof(struct sVar*));
right_value157 = (void*)0;
memset(&type_130, 0, sizeof(struct sType*));
right_value158 = (void*)0;
right_value159 = (void*)0;
memset(&left_type_131, 0, sizeof(struct sType*));
right_value160 = (void*)0;
right_value161 = (void*)0;
memset(&o2_saved_132, 0, sizeof(struct list$1sNodeph*));
memset(&it_135, 0, sizeof(struct sNode*));
right_value162 = (void*)0;
memset(&come_value_138, 0, sizeof(struct CVALUE*));
right_value163 = (void*)0;
right_value164 = (void*)0;
memset(&left_type2_139, 0, sizeof(struct sType*));
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
memset(&come_value_140, 0, sizeof(struct CVALUE*));
right_value168 = (void*)0;
right_value169 = (void*)0;
memset(&var__144, 0, sizeof(struct sVar*));
right_value173 = (void*)0;
memset(&type_145, 0, sizeof(struct sType*));
right_value174 = (void*)0;
right_value175 = (void*)0;
memset(&array_initializer_146, 0, sizeof(_Bool));
right_value176 = (void*)0;
memset(&right_value_147, 0, sizeof(struct CVALUE*));
memset(&right_type_148, 0, sizeof(struct sType*));
right_value177 = (void*)0;
right_value178 = (void*)0;
memset(&var_type_149, 0, sizeof(struct sType*));
right_value179 = (void*)0;
right_value180 = (void*)0;
memset(&left_type_150, 0, sizeof(struct sType*));
memset(&var__151, 0, sizeof(struct sVar*));
right_value181 = (void*)0;
right_value182 = (void*)0;
right_value183 = (void*)0;
memset(&come_value_152, 0, sizeof(struct CVALUE*));
right_value184 = (void*)0;
right_value185 = (void*)0;
right_value186 = (void*)0;
right_value187 = (void*)0;
right_value188 = (void*)0;
right_value189 = (void*)0;
memset(&come_value_153, 0, sizeof(struct CVALUE*));
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
memset(&right_value_id_154, 0, sizeof(int));
right_value193 = (void*)0;
right_value194 = (void*)0;
right_value195 = (void*)0;
memset(&come_value_155, 0, sizeof(struct CVALUE*));
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value200 = (void*)0;
right_value201 = (void*)0;
right_value202 = (void*)0;
memset(&come_value_156, 0, sizeof(struct CVALUE*));
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
memset(&come_value_157, 0, sizeof(struct CVALUE*));
right_value210 = (void*)0;
right_value211 = (void*)0;
right_value212 = (void*)0;
memset(&right_value_158, 0, sizeof(struct CVALUE*));
memset(&right_type_159, 0, sizeof(struct sType*));
memset(&current_stack_frame_struct_160, 0, sizeof(struct sClass*));
memset(&parent_var_161, 0, sizeof(struct sVar*));
memset(&left_type_162, 0, sizeof(struct sType*));
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value215 = (void*)0;
memset(&c_value_163, 0, sizeof(char*));
memset(&right_value_id_164, 0, sizeof(int));
right_value216 = (void*)0;
right_value217 = (void*)0;
memset(&come_value_165, 0, sizeof(struct CVALUE*));
right_value218 = (void*)0;
right_value219 = (void*)0;
right_value220 = (void*)0;
right_value221 = (void*)0;
right_value222 = (void*)0;
memset(&c_value_166, 0, sizeof(char*));
right_value223 = (void*)0;
right_value224 = (void*)0;
memset(&come_value_167, 0, sizeof(struct CVALUE*));
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
right_value228 = (void*)0;
right_value229 = (void*)0;
right_value230 = (void*)0;
memset(&come_value_168, 0, sizeof(struct CVALUE*));
right_value231 = (void*)0;
right_value232 = (void*)0;
memset(&var__169, 0, sizeof(struct sVar*));
right_value233 = (void*)0;
right_value234 = (void*)0;
memset(&left_type_170, 0, sizeof(struct sType*));
right_value235 = (void*)0;
right_value236 = (void*)0;
right_value237 = (void*)0;
right_value238 = (void*)0;
memset(&come_value_171, 0, sizeof(struct CVALUE*));
right_value239 = (void*)0;
right_value240 = (void*)0;
right_value241 = (void*)0;
right_value242 = (void*)0;
memset(&right_value_id_172, 0, sizeof(int));
right_value243 = (void*)0;
right_value244 = (void*)0;
memset(&come_value_173, 0, sizeof(struct CVALUE*));
right_value245 = (void*)0;
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value248 = (void*)0;
right_value249 = (void*)0;
right_value250 = (void*)0;
memset(&come_value_174, 0, sizeof(struct CVALUE*));
right_value251 = (void*)0;
right_value252 = (void*)0;
right_value253 = (void*)0;
right_value254 = (void*)0;
right_value255 = (void*)0;
right_value256 = (void*)0;
memset(&come_value_175, 0, sizeof(struct CVALUE*));
right_value257 = (void*)0;
right_value258 = (void*)0;
    if(self->multiple_declare) {
        var__87=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
        if(var__87) {
            err_msg(info,"Already appended this var name(%s)(1)",self->name);
            return (_Bool)0;
        }
        if(self->type==((void*)0)) {
            err_msg(info,"Require concrete variable type(%s)",self->name);
            return (_Bool)0;
        }
        type_91=(struct sType*)come_increment_ref_count(((struct sType*)(right_value130=solve_generics(self->type,info->generics_type,info))));
        come_call_finalizer3(right_value130,sType_finalize, 0, 1, 0, 0, (void*)0);
        type_91->mFunctionParam=(_Bool)0;
        for(        o2_saved_92=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((self->multiple_declare)),it_95=list$1tuple3$3sTypephcharphsNodephph_begin((o2_saved_92));        !list$1tuple3$3sTypephcharphsNodephph_end((o2_saved_92));        it_95=list$1tuple3$3sTypephcharphsNodephph_next((o2_saved_92))        ){
            multiple_assign_var1=it_95;
            type_98=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            var_name_99=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            right_value_100=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v3);
            add_variable_to_table(var_name_99,(struct sType*)come_increment_ref_count(((struct sType*)(right_value131=sType_clone(type_98)))),info);
            come_call_finalizer3(right_value131,sType_finalize, 0, 1, 0, 0, (void*)0);
            var__87=get_variable_from_table(info->lv_table,var_name_99);
            if(var__87==((void*)0)) {
                err_msg(info,"var not found(%s)(ZY) at definition of variable\n",it_95);
                __result81__ = (_Bool)1;
                come_call_finalizer3(type_98,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_99 = come_decrement_ref_count2(var_name_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(right_value_100) { right_value_100 = come_decrement_ref_count2(right_value_100, ((struct sNode*)right_value_100)->finalize, ((struct sNode*)right_value_100)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(o2_saved_92,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_91,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result81__;
            }
            left_type_101=(struct sType*)come_increment_ref_count(((struct sType*)(right_value132=sType_clone(var__87->mType))));
            come_call_finalizer3(right_value132,sType_finalize, 0, 1, 0, 0, (void*)0);
            if(right_value_100) {
                if(!node_compile(right_value_100,info)) {
                    __result82__ = (_Bool)0;
                    come_call_finalizer3(type_98,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_99 = come_decrement_ref_count2(var_name_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(right_value_100) { right_value_100 = come_decrement_ref_count2(right_value_100, ((struct sNode*)right_value_100)->finalize, ((struct sNode*)right_value_100)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(left_type_101,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(o2_saved_92,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_91,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result82__;
                }
                come_value_102=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value133=get_value_from_stack(-1,info))));
                come_call_finalizer3(right_value133,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                dec_stack_ptr(1,info);
                add_come_code(info,"%s=%s;\n",((char*)(right_value134=make_define_var(left_type_101,var__87->mCValueName,(_Bool)0,info))),come_value_102->c_value);
                right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(come_value_102,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__87->mCValueName,((char*)(right_value135=make_type_name_string(left_type_101,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                add_come_code_at_function_head(info,"%s;\n",((char*)(right_value136=make_define_var(left_type_101,var__87->mCValueName,(_Bool)0,info))));
                right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            come_call_finalizer3(type_98,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_99 = come_decrement_ref_count2(var_name_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_value_100) { right_value_100 = come_decrement_ref_count2(right_value_100, ((struct sNode*)right_value_100)->finalize, ((struct sNode*)right_value_100)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(left_type_101,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_92,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_91,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(self->multiple_assign) {
            if(!node_compile(self->right_value,info)) {
                return (_Bool)0;
            }
            right_value_105=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value137=get_value_from_stack(-1,info))));
            come_call_finalizer3(right_value137,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            right_type_106=right_value_105->type;
            dec_stack_ptr(1,info);
            if(right_type_106->mNoSolvedGenericsType->v1) {
                right_type_106=right_type_106->mNoSolvedGenericsType->v1;
            }
            i_107=0;
            for(            o2_saved_108=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_111=list$1charph_begin((o2_saved_108));            !list$1charph_end((o2_saved_108));            it_111=list$1charph_next((o2_saved_108))            ){
                if(i_107<list$1sTypeph_length(right_type_106->mGenericsTypes)) {
                    right_type2_114=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(right_type_106->mGenericsTypes,i_107), "07var.c", 86, 0));
                    right_type2_114->mFunctionParam=(_Bool)0;
                    add_variable_to_table(it_111,(struct sType*)come_increment_ref_count(((struct sType*)(right_value138=sType_clone(right_type2_114)))),info);
                    come_call_finalizer3(right_value138,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                i_107++;
            }
            come_call_finalizer3(o2_saved_108,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            static int num_multiple_var_118=0;
            multiple_var_name_119=(char*)come_increment_ref_count(((char*)(right_value139=xsprintf("multiple_assign_var%d",++num_multiple_var_118))));
            right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            add_come_code_at_function_head(info,"%s;\n",((char*)(right_value140=make_define_var(right_value_105->type,multiple_var_name_119,(_Bool)0,info))));
            right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            add_come_code(info,"%s=%s;\n",multiple_var_name_119,right_value_105->c_value);
            __dec_obj46=right_value_105->c_value;
            right_value_105->c_value=(char*)come_increment_ref_count(((char*)(right_value141=string_clone(multiple_var_name_119))));
            __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            i_107=0;
            for(            o2_saved_120=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_121=list$1charph_begin((o2_saved_120));            !list$1charph_end((o2_saved_120));            it_121=list$1charph_next((o2_saved_120))            ){
                if(i_107<list$1sTypeph_length(right_type_106->mGenericsTypes)) {
                    right_type2_122=(struct sType*)come_increment_ref_count(((struct sType*)(right_value142=sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(right_type_106->mGenericsTypes,i_107), "07var.c", 105, 1))))));
                    come_call_finalizer3(right_value142,sType_finalize, 0, 1, 0, 0, (void*)0);
                    var__123=get_variable_from_table(info->lv_table,it_121);
                    var_type_124=(struct sType*)come_increment_ref_count(((struct sType*)(right_value143=sType_clone(var__123->mType))));
                    come_call_finalizer3(right_value143,sType_finalize, 0, 1, 0, 0, (void*)0);
                    var_type_124->mStatic=(_Bool)0;
                    left_type_125=(struct sType*)come_increment_ref_count(((struct sType*)(right_value144=sType_clone(var__123->mType))));
                    come_call_finalizer3(right_value144,sType_finalize, 0, 1, 0, 0, (void*)0);
                    right_value2_126=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value146=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value145=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 114, "CVALUE"))))))));
                    come_call_finalizer3(right_value145,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(right_value146,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                    __dec_obj47=right_value2_126->c_value;
                    right_value2_126->c_value=(char*)come_increment_ref_count(((char*)(right_value147=xsprintf("%s->v%d",right_value_105->c_value,i_107+1))));
                    __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __dec_obj48=right_value2_126->type;
                    right_value2_126->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value148=sType_clone(right_type2_122))));
                    come_call_finalizer3(__dec_obj48,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value148,sType_finalize, 0, 1, 0, 0, (void*)0);
                    right_value2_126->var=((void*)0);
                    come_value_127=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value150=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value149=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 120, "CVALUE"))))))));
                    come_call_finalizer3(right_value149,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(right_value150,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                    check_assign_type(((char*)(right_value152=xsprintf("\%s is assining to}",((char*)(right_value151=string_to_string(self->name)))))),left_type_125,right_type2_122,come_value_127,(_Bool)0,(_Bool)1,info);
                    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    if(right_type2_122->mHeap&&left_type_125->mHeap&&left_type_125->mPointerNum>0&&right_type2_122->mPointerNum>0) {
                        std_move(left_type_125,right_type2_122,right_value2_126,info);
                        __dec_obj49=come_value_127->c_value;
                        come_value_127->c_value=(char*)come_increment_ref_count(((char*)(right_value153=xsprintf("%s=%s",var__123->mCValueName,right_value2_126->c_value))));
                        __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        right_value_id_128=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value2_126->c_value));
                        if(right_value_id_128!=-1) {
                            remove_object_from_right_values(right_value_id_128,info);
                        }
                    }
                    else {
                        __dec_obj50=come_value_127->c_value;
                        come_value_127->c_value=(char*)come_increment_ref_count(((char*)(right_value154=xsprintf("%s=%s",var__123->mCValueName,right_value2_126->c_value))));
                        __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    }
                    __dec_obj51=come_value_127->type;
                    come_value_127->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value155=sType_clone(left_type_125))));
                    come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value155,sType_finalize, 0, 1, 0, 0, (void*)0);
                    come_value_127->var=var__123;
                    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value156=make_define_var(left_type_125,var__123->mCValueName,(_Bool)0,info))));
                    right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    add_come_code(info,"%s;\n",come_value_127->c_value);
                    come_call_finalizer3(right_type2_122,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(var_type_124,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_type_125,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value2_126,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_127,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                i_107++;
            }
            come_call_finalizer3(o2_saved_120,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value_105,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            multiple_var_name_119 = come_decrement_ref_count2(multiple_var_name_119, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(self->right_value==((void*)0)) {
                var__129=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
                if(var__129) {
                    err_msg(info,"Already appended this var name(%s)(1)",self->name);
                    return (_Bool)0;
                }
                if(self->type==((void*)0)) {
                    err_msg(info,"Require concrete variable type(%s)",self->name);
                    return (_Bool)0;
                }
                type_130=(struct sType*)come_increment_ref_count(((struct sType*)(right_value157=solve_generics(self->type,info->generics_type,info))));
                come_call_finalizer3(right_value157,sType_finalize, 0, 1, 0, 0, (void*)0);
                type_130->mFunctionParam=(_Bool)0;
                add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value158=sType_clone(type_130)))),info);
                come_call_finalizer3(right_value158,sType_finalize, 0, 1, 0, 0, (void*)0);
                var__129=get_variable_from_table(info->lv_table,self->name);
                if(var__129==((void*)0)) {
                    var__129=get_variable_from_table(info->gv_table,self->name);
                    if(var__129==((void*)0)) {
                        err_msg(info,"var not found(%s)(Y) at definition of variable\n",self->name);
                        __result91__ = (_Bool)1;
                        come_call_finalizer3(type_130,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result91__;
                    }
                }
                left_type_131=(struct sType*)come_increment_ref_count(((struct sType*)(right_value159=sType_clone(var__129->mType))));
                come_call_finalizer3(right_value159,sType_finalize, 0, 1, 0, 0, (void*)0);
                if(list$1sNodeph_length(left_type_131->mArrayNum)>0) {
                    add_come_code(info,"%s;\n",((char*)(right_value160=make_define_var(left_type_131,var__129->mCValueName,(_Bool)0,info))));
                    right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__129->mCValueName,((char*)(right_value161=make_type_name_string(left_type_131,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                    right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    for(                    o2_saved_132=(struct list$1sNodeph*)come_increment_ref_count((left_type_131->mArrayNum)),it_135=list$1sNodeph_begin((o2_saved_132));                    !list$1sNodeph_end((o2_saved_132));                    it_135=list$1sNodeph_next((o2_saved_132))                    ){
                        if(!node_compile(it_135,info)) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        come_value_138=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value162=get_value_from_stack(-1,info))));
                        come_call_finalizer3(right_value162,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                        dec_stack_ptr(1,info);
                        add_come_code(info,"*(%s)",come_value_138->c_value);
                        come_call_finalizer3(come_value_138,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_132,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    add_come_code(info,");\n");
                }
                else {
                    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value163=make_define_var(left_type_131,var__129->mCValueName,(_Bool)0,info))));
                    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    left_type2_139=(struct sType*)come_increment_ref_count(((struct sType*)(right_value164=sType_clone(left_type_131))));
                    come_call_finalizer3(right_value164,sType_finalize, 0, 1, 0, 0, (void*)0);
                    left_type2_139->mStatic=(_Bool)0;
                    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__129->mCValueName,((char*)(right_value165=make_type_name_string(left_type2_139,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                    right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(left_type2_139,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_value_140=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value167=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value166=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 207, "CVALUE"))))))));
                come_call_finalizer3(right_value166,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(right_value167,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj52=come_value_140->c_value;
                come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value168=xsprintf("%s",var__129->mCValueName))));
                __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __dec_obj53=come_value_140->type;
                come_value_140->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value169=sType_clone(left_type_131))));
                come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value169,sType_finalize, 0, 1, 0, 0, (void*)0);
                come_value_140->var=var__129;
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_140));
                if(!left_type_131->mClass->mNumber&&left_type_131->mPointerNum==0) {
                    var__129->mType->mAllocaValue=(_Bool)1;
                }
                come_call_finalizer3(type_130,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_131,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_140,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(self->alloc) {
                    var__144=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
                    if(var__144) {
                        err_msg(info,"Already appended this var name(%s)(2)",self->name);
                        return (_Bool)0;
                    }
                    if(self->type==((void*)0)) {
                    }
                    else {
                        type_145=(struct sType*)come_increment_ref_count(((struct sType*)(right_value173=solve_generics(self->type,info->generics_type,info))));
                        come_call_finalizer3(right_value173,sType_finalize, 0, 1, 0, 0, (void*)0);
                        type_145->mFunctionParam=(_Bool)0;
                        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value174=sType_clone(type_145)))),info);
                        come_call_finalizer3(right_value174,sType_finalize, 0, 1, 0, 0, (void*)0);
                        come_call_finalizer3(type_145,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(!node_compile(self->right_value,info)) {
                        return (_Bool)0;
                    }
                    array_initializer_146=string_operator_equals(((char*)(right_value175=self->right_value->kind(self->right_value->_protocol_obj))),"sArrayInitializer");
                    right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    right_value_147=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value176=get_value_from_stack(-1,info))));
                    come_call_finalizer3(right_value176,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                    right_type_148=right_value_147->type;
                    dec_stack_ptr(1,info);
                    if(self->type==((void*)0)) {
                        right_type_148->mFunctionParam=(_Bool)0;
                        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value177=sType_clone(right_type_148)))),info);
                        come_call_finalizer3(right_value177,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    else {
                    }
                    var__144=get_variable_from_table(info->lv_table,self->name);
                    var_type_149=(struct sType*)come_increment_ref_count(((struct sType*)(right_value178=sType_clone(var__144->mType))));
                    come_call_finalizer3(right_value178,sType_finalize, 0, 1, 0, 0, (void*)0);
                    var_type_149->mStatic=(_Bool)0;
                    if(!array_initializer_146&&!var__144->mType->mStatic&&!var_type_149->mConstant&&list$1sNodeph_length(var_type_149->mArrayNum)==0) {
                        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__144->mCValueName,((char*)(right_value179=make_type_name_string(var_type_149,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                        right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    }
                    left_type_150=(struct sType*)come_increment_ref_count(((struct sType*)(right_value180=sType_clone(var__144->mType))));
                    come_call_finalizer3(right_value180,sType_finalize, 0, 1, 0, 0, (void*)0);
                    if(array_initializer_146) {
                        var__151=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
                        add_come_code(info,"%s=%s;\n",((char*)(right_value181=make_define_var(var__151->mType,var__151->mCValueName,(_Bool)0,info))),right_value_147->c_value);
                        right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        come_value_152=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value183=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value182=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 267, "CVALUE"))))))));
                        come_call_finalizer3(right_value182,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                        come_call_finalizer3(right_value183,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                        __dec_obj57=come_value_152->c_value;
                        come_value_152->c_value=(char*)come_increment_ref_count(((char*)(right_value184=__builtin_string(""))));
                        __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_152));
                        transpiler_clear_last_code(info);
                        come_call_finalizer3(come_value_152,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        if(var__144->mType->mStatic||var__144->mType->mConstant) {
                            check_assign_type(((char*)(right_value186=xsprintf("\%s is assining to",((char*)(right_value185=string_to_string(self->name)))))),left_type_150,right_type_148,right_value_147,(_Bool)0,(_Bool)1,info);
                            right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            add_come_code(info,"%s=%s;\n",((char*)(right_value187=make_define_var(left_type_150,var__144->mCValueName,(_Bool)0,info))),right_value_147->c_value);
                            right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            come_value_153=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value189=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value188=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 278, "CVALUE"))))))));
                            come_call_finalizer3(right_value188,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                            come_call_finalizer3(right_value189,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                            __dec_obj58=come_value_153->c_value;
                            come_value_153->c_value=(char*)come_increment_ref_count(((char*)(right_value190=__builtin_string(""))));
                            __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_153));
                            transpiler_clear_last_code(info);
                            come_call_finalizer3(come_value_153,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            if(right_type_148->mHeap&&left_type_150->mHeap&&left_type_150->mPointerNum>0&&right_type_148->mPointerNum>0) {
                                check_assign_type(((char*)(right_value192=xsprintf("\%s is assining to",((char*)(right_value191=string_to_string(self->name)))))),left_type_150,right_type_148,right_value_147,(_Bool)0,(_Bool)1,info);
                                right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                std_move(left_type_150,right_type_148,right_value_147,info);
                                right_value_id_154=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_147->c_value));
                                if(right_value_id_154!=-1) {
                                    remove_object_from_right_values(right_value_id_154,info);
                                }
                                add_come_code_at_function_head(info,"%s;\n",((char*)(right_value193=make_define_var(left_type_150,var__144->mCValueName,(_Bool)0,info))));
                                right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                come_value_155=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value195=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value194=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 298, "CVALUE"))))))));
                                come_call_finalizer3(right_value194,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                                come_call_finalizer3(right_value195,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                                __dec_obj59=come_value_155->c_value;
                                come_value_155->c_value=(char*)come_increment_ref_count(((char*)(right_value196=xsprintf("%s=%s",var__144->mCValueName,right_value_147->c_value))));
                                __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __dec_obj60=come_value_155->type;
                                come_value_155->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value197=sType_clone(left_type_150))));
                                come_call_finalizer3(__dec_obj60,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value197,sType_finalize, 0, 1, 0, 0, (void*)0);
                                come_value_155->var=var__144;
                                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_155));
                                add_come_last_code(info,"%s;\n",come_value_155->c_value);
                                come_call_finalizer3(come_value_155,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            else {
                                if(left_type_150->mPointerNum>0&&left_type_150->mHeap&&string_operator_equals(right_type_148->mClass->mName,"void")&&right_type_148->mPointerNum>0) {
                                    check_assign_type(((char*)(right_value199=xsprintf("\%s is assining to",((char*)(right_value198=string_to_string(self->name)))))),left_type_150,right_type_148,right_value_147,(_Bool)0,(_Bool)1,info);
                                    right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    decrement_ref_count_object(left_type_150,var__144->mCValueName,info,(_Bool)0);
                                    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value200=make_define_var(left_type_150,var__144->mCValueName,(_Bool)0,info))));
                                    right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    come_value_156=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value202=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value201=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 315, "CVALUE"))))))));
                                    come_call_finalizer3(right_value201,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value202,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                                    __dec_obj61=come_value_156->c_value;
                                    come_value_156->c_value=(char*)come_increment_ref_count(((char*)(right_value203=xsprintf("%s=%s",var__144->mCValueName,right_value_147->c_value))));
                                    __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __dec_obj62=come_value_156->type;
                                    come_value_156->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value204=sType_clone(left_type_150))));
                                    come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value204,sType_finalize, 0, 1, 0, 0, (void*)0);
                                    come_value_156->var=var__144;
                                    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_156));
                                    add_come_last_code(info,"%s;\n",come_value_156->c_value);
                                    come_call_finalizer3(come_value_156,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                else {
                                    check_assign_type(((char*)(right_value206=xsprintf("\%s is assining to",((char*)(right_value205=string_to_string(self->name)))))),left_type_150,right_type_148,right_value_147,(_Bool)0,(_Bool)1,info);
                                    right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    if(left_type_150->mHeap&&!right_value_147->type->mHeap) {
                                        err_msg(info,"require right value as heap object(%s)",self->name);
                                        __result99__ = (_Bool)0;
                                        come_call_finalizer3(right_value_147,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(var_type_149,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(left_type_150,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        return __result99__;
                                    }
                                    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value207=make_define_var(left_type_150,var__144->mCValueName,(_Bool)0,info))));
                                    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    come_value_157=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value209=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value208=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 335, "CVALUE"))))))));
                                    come_call_finalizer3(right_value208,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value209,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                                    __dec_obj63=come_value_157->c_value;
                                    come_value_157->c_value=(char*)come_increment_ref_count(((char*)(right_value210=xsprintf("%s=%s",var__144->mCValueName,right_value_147->c_value))));
                                    __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __dec_obj64=come_value_157->type;
                                    come_value_157->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value211=sType_clone(left_type_150))));
                                    come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value211,sType_finalize, 0, 1, 0, 0, (void*)0);
                                    come_value_157->var=var__144;
                                    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_157));
                                    add_come_last_code(info,"%s;\n",come_value_157->c_value);
                                    come_call_finalizer3(come_value_157,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                }
                            }
                        }
                    }
                    come_call_finalizer3(right_value_147,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(var_type_149,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_type_150,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(!node_compile(self->right_value,info)) {
                        return (_Bool)0;
                    }
                    right_value_158=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value212=get_value_from_stack(-1,info))));
                    come_call_finalizer3(right_value212,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                    right_type_159=right_value_158->type;
                    dec_stack_ptr(1,info);
                    current_stack_frame_struct_160=info->current_stack_frame_struct;
                    if(current_stack_frame_struct_160&&map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)==((void*)0)) {
                        parent_var_161=get_variable_from_table(info->lv_table->mParent,self->name);
                        if(parent_var_161!=((void*)0)) {
                            if(string_operator_not_equals(parent_var_161->mFunName,info->come_fun->mName)) {
                                left_type_162=parent_var_161->mType;
                                if(left_type_162->mPointerNum>0&&right_type_159->mPointerNum>0&&right_type_159->mHeap&&left_type_162->mHeap) {
                                    check_assign_type(((char*)(right_value214=xsprintf("\%s is assigning to",((char*)(right_value213=string_to_string(self->name)))))),left_type_162,right_type_159,right_value_158,(_Bool)0,(_Bool)1,info);
                                    right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    c_value_163=(char*)come_increment_ref_count(((char*)(right_value215=xsprintf("*(parent->%s)",parent_var_161->mCValueName))));
                                    right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    decrement_ref_count_object(parent_var_161->mType,c_value_163,info,(_Bool)0);
                                    std_move(left_type_162,right_type_159,right_value_158,info);
                                    right_value_id_164=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_158->c_value));
                                    if(right_value_id_164!=-1) {
                                        remove_object_from_right_values(right_value_id_164,info);
                                    }
                                    come_value_165=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value217=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value216=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 378, "CVALUE"))))))));
                                    come_call_finalizer3(right_value216,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value217,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                                    __dec_obj65=come_value_165->c_value;
                                    come_value_165->c_value=(char*)come_increment_ref_count(((char*)(right_value218=xsprintf("(*(parent->%s))=%s",parent_var_161->mCValueName,right_value_158->c_value))));
                                    __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __dec_obj66=come_value_165->type;
                                    come_value_165->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value219=sType_clone(left_type_162))));
                                    come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value219,sType_finalize, 0, 1, 0, 0, (void*)0);
                                    come_value_165->var=((void*)0);
                                    add_come_last_code(info,"%s;\n",come_value_165->c_value);
                                    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_165));
                                    __result100__ = (_Bool)1;
                                    c_value_163 = come_decrement_ref_count2(c_value_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(come_value_165,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value_158,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    return __result100__;
                                    c_value_163 = come_decrement_ref_count2(c_value_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(come_value_165,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                else {
                                    if(left_type_162->mPointerNum>0&&right_type_159->mPointerNum>0&&string_operator_equals(right_type_159->mClass->mName,"void")&&left_type_162->mHeap) {
                                        check_assign_type(((char*)(right_value221=xsprintf("\%s is assigning to",((char*)(right_value220=string_to_string(self->name)))))),left_type_162,right_type_159,right_value_158,(_Bool)0,(_Bool)1,info);
                                        right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        c_value_166=(char*)come_increment_ref_count(((char*)(right_value222=xsprintf("*(parent->%s)",parent_var_161->mCValueName))));
                                        right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        decrement_ref_count_object(parent_var_161->mType,c_value_166,info,(_Bool)0);
                                        come_value_167=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value224=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value223=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 397, "CVALUE"))))))));
                                        come_call_finalizer3(right_value223,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value224,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                                        __dec_obj67=come_value_167->c_value;
                                        come_value_167->c_value=(char*)come_increment_ref_count(((char*)(right_value225=xsprintf("(*(parent->%s))=%s",parent_var_161->mCValueName,right_value_158->c_value))));
                                        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        __dec_obj68=come_value_167->type;
                                        come_value_167->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value226=sType_clone(left_type_162))));
                                        come_call_finalizer3(__dec_obj68,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value226,sType_finalize, 0, 1, 0, 0, (void*)0);
                                        come_value_167->var=((void*)0);
                                        add_come_last_code(info,"%s;\n",come_value_167->c_value);
                                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_167));
                                        __result101__ = (_Bool)1;
                                        c_value_166 = come_decrement_ref_count2(c_value_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(come_value_167,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value_158,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                        return __result101__;
                                        c_value_166 = come_decrement_ref_count2(c_value_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(come_value_167,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    else {
                                        check_assign_type(((char*)(right_value228=xsprintf("\%s is assigning to",((char*)(right_value227=string_to_string(self->name)))))),left_type_162,right_type_159,right_value_158,(_Bool)0,(_Bool)1,info);
                                        right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        if(left_type_162->mHeap&&!right_value_158->type->mHeap) {
                                            err_msg(info,"require right value as heap object(%s)",self->name);
                                            __result102__ = (_Bool)0;
                                            come_call_finalizer3(right_value_158,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                            return __result102__;
                                        }
                                        come_value_168=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value230=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value229=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 417, "CVALUE"))))))));
                                        come_call_finalizer3(right_value229,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value230,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                                        __dec_obj69=come_value_168->c_value;
                                        come_value_168->c_value=(char*)come_increment_ref_count(((char*)(right_value231=xsprintf("(*(parent->%s))=%s",parent_var_161->mCValueName,right_value_158->c_value))));
                                        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        __dec_obj70=come_value_168->type;
                                        come_value_168->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value232=sType_clone(left_type_162))));
                                        come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value232,sType_finalize, 0, 1, 0, 0, (void*)0);
                                        come_value_168->var=((void*)0);
                                        add_come_last_code(info,"%s;\n",come_value_168->c_value);
                                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_168));
                                        __result103__ = (_Bool)1;
                                        come_call_finalizer3(come_value_168,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value_158,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                        return __result103__;
                                        come_call_finalizer3(come_value_168,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                }
                            }
                        }
                    }
                    var__169=get_variable_from_table(info->lv_table,self->name);
                    if(var__169==((void*)0)) {
                        var__169=get_variable_from_table(info->gv_table,self->name);
                        if(var__169==((void*)0)) {
                            err_msg(info,"var not found(%s)(X) at storing variable\n",self->name);
                            __result104__ = (_Bool)1;
                            come_call_finalizer3(right_value_158,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            return __result104__;
                        }
                    }
                    if(var__169->mType==((void*)0)) {
                        __dec_obj71=var__169->mType;
                        var__169->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value233=sType_clone(right_type_159))));
                        come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value233,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    left_type_170=(struct sType*)come_increment_ref_count(((struct sType*)(right_value234=sType_clone(var__169->mType))));
                    come_call_finalizer3(right_value234,sType_finalize, 0, 1, 0, 0, (void*)0);
                    if((var__169->mType->mStatic||var__169->mType->mConstant)&&!var__169->mGlobal) {
                        check_assign_type(((char*)(right_value236=xsprintf("\%s is assining to",((char*)(right_value235=string_to_string(self->name)))))),left_type_170,right_type_159,right_value_158,(_Bool)0,(_Bool)1,info);
                        right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        come_value_171=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value238=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value237=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 453, "CVALUE"))))))));
                        come_call_finalizer3(right_value237,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                        come_call_finalizer3(right_value238,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                        __dec_obj72=come_value_171->c_value;
                        come_value_171->c_value=(char*)come_increment_ref_count(((char*)(right_value239=xsprintf("%s=%s",var__169->mCValueName,right_value_158->c_value))));
                        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __dec_obj73=come_value_171->type;
                        come_value_171->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value240=sType_clone(left_type_170))));
                        come_call_finalizer3(__dec_obj73,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value240,sType_finalize, 0, 1, 0, 0, (void*)0);
                        come_value_171->var=var__169;
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_171));
                        add_come_last_code(info,"%s;\n",come_value_171->c_value);
                        come_call_finalizer3(come_value_171,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        if(right_type_159->mHeap&&left_type_170->mHeap&&left_type_170->mPointerNum>0&&right_type_159->mPointerNum>0) {
                            check_assign_type(((char*)(right_value242=xsprintf("\%s is assining to",((char*)(right_value241=string_to_string(self->name)))))),left_type_170,right_type_159,right_value_158,(_Bool)0,(_Bool)1,info);
                            right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            decrement_ref_count_object(left_type_170,var__169->mCValueName,info,(_Bool)0);
                            std_move(left_type_170,right_type_159,right_value_158,info);
                            right_value_id_172=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_158->c_value));
                            if(right_value_id_172!=-1) {
                                remove_object_from_right_values(right_value_id_172,info);
                            }
                            come_value_173=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value244=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value243=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 476, "CVALUE"))))))));
                            come_call_finalizer3(right_value243,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                            come_call_finalizer3(right_value244,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                            __dec_obj74=come_value_173->c_value;
                            come_value_173->c_value=(char*)come_increment_ref_count(((char*)(right_value245=xsprintf("%s=%s",var__169->mCValueName,right_value_158->c_value))));
                            __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __dec_obj75=come_value_173->type;
                            come_value_173->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value246=sType_clone(left_type_170))));
                            come_call_finalizer3(__dec_obj75,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value246,sType_finalize, 0, 1, 0, 0, (void*)0);
                            come_value_173->var=var__169;
                            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_173));
                            add_come_last_code(info,"%s;\n",come_value_173->c_value);
                            come_call_finalizer3(come_value_173,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            if(left_type_170->mPointerNum>0&&left_type_170->mHeap&&string_operator_equals(right_type_159->mClass->mName,"void")&&right_type_159->mPointerNum>0) {
                                check_assign_type(((char*)(right_value248=xsprintf("\%s is assining to",((char*)(right_value247=string_to_string(self->name)))))),left_type_170,right_type_159,right_value_158,(_Bool)0,(_Bool)1,info);
                                right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                decrement_ref_count_object(left_type_170,var__169->mCValueName,info,(_Bool)0);
                                come_value_174=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value250=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value249=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 492, "CVALUE"))))))));
                                come_call_finalizer3(right_value249,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                                come_call_finalizer3(right_value250,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                                __dec_obj76=come_value_174->c_value;
                                come_value_174->c_value=(char*)come_increment_ref_count(((char*)(right_value251=xsprintf("%s=%s",var__169->mCValueName,right_value_158->c_value))));
                                __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __dec_obj77=come_value_174->type;
                                come_value_174->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value252=sType_clone(left_type_170))));
                                come_call_finalizer3(__dec_obj77,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value252,sType_finalize, 0, 1, 0, 0, (void*)0);
                                come_value_174->var=var__169;
                                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_174));
                                add_come_last_code(info,"%s;\n",come_value_174->c_value);
                                come_call_finalizer3(come_value_174,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            else {
                                check_assign_type(((char*)(right_value254=xsprintf("\%s is assining to",((char*)(right_value253=string_to_string(self->name)))))),left_type_170,right_type_159,right_value_158,(_Bool)0,(_Bool)1,info);
                                right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                if(left_type_170->mHeap&&!right_value_158->type->mHeap) {
                                    err_msg(info,"require right value as heap object(%s)",self->name);
                                    __result105__ = (_Bool)0;
                                    come_call_finalizer3(right_value_158,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(left_type_170,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    return __result105__;
                                }
                                come_value_175=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value256=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value255=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 510, "CVALUE"))))))));
                                come_call_finalizer3(right_value255,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                                come_call_finalizer3(right_value256,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                                __dec_obj78=come_value_175->c_value;
                                come_value_175->c_value=(char*)come_increment_ref_count(((char*)(right_value257=xsprintf("%s=%s",var__169->mCValueName,right_value_158->c_value))));
                                __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __dec_obj79=come_value_175->type;
                                come_value_175->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value258=sType_clone(left_type_170))));
                                come_call_finalizer3(__dec_obj79,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value258,sType_finalize, 0, 1, 0, 0, (void*)0);
                                come_value_175->var=var__169;
                                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_175));
                                add_come_last_code(info,"%s;\n",come_value_175->c_value);
                                come_call_finalizer3(come_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                    come_call_finalizer3(right_value_158,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_type_170,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
        }
    }
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
        if(self!=((void*)0)&&self->sname!=((void*)0)) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
struct sType* __result45__;
void* right_value81;
struct sType* result_47;
void* right_value88;
struct list$1sTypeph* __dec_obj16;
void* right_value91;
struct tuple1$1sTypeph* __dec_obj18;
void* right_value92;
struct tuple1$1sTypeph* __dec_obj19;
void* right_value93;
char* __dec_obj20;
void* right_value94;
struct list$1sTypeph* __dec_obj21;
void* right_value102;
struct list$1sNodeph* __dec_obj25;
void* right_value103;
struct list$1sTypeph* __dec_obj26;
void* right_value110;
struct list$1charph* __dec_obj30;
void* right_value111;
struct tuple1$1sTypeph* __dec_obj31;
void* right_value112;
struct sNode* __dec_obj32;
void* right_value113;
struct sNode* __dec_obj33;
void* right_value114;
char* __dec_obj34;
void* right_value115;
char* __dec_obj35;
struct sType* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
memset(&result_47, 0, sizeof(struct sType*));
right_value88 = (void*)0;
right_value91 = (void*)0;
right_value92 = (void*)0;
right_value93 = (void*)0;
right_value94 = (void*)0;
right_value102 = (void*)0;
right_value103 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
        if(self==(void*)0) {
            __result45__ = __result_obj__ = (void*)0;
            return __result45__;
        }
        result_47=(struct sType*)come_increment_ref_count(((struct sType*)(right_value81=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer3(right_value81,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(self!=((void*)0)) {
            result_47->mClass=self->mClass;
        }
        if(self!=((void*)0)&&self->mMultipleTypes!=((void*)0)) {
            __dec_obj16=result_47->mMultipleTypes;
            result_47->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value88=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer3(__dec_obj16,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value88,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
            __dec_obj18=result_47->mNoSolvedGenericsType;
            result_47->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value91=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer3(__dec_obj18,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value91,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
            __dec_obj19=result_47->mOriginalLoadVarType;
            result_47->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value92=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer3(__dec_obj19,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value92,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
            __dec_obj20=result_47->mGenericsName;
            result_47->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value93=string_clone(self->mGenericsName))));
            __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
            __dec_obj21=result_47->mGenericsTypes;
            result_47->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value94=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer3(__dec_obj21,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value94,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
            __dec_obj25=result_47->mArrayNum;
            result_47->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value102=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer3(__dec_obj25,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value102,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)) {
            result_47->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
            __dec_obj26=result_47->mParamTypes;
            result_47->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value103=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer3(__dec_obj26,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value103,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
            __dec_obj30=result_47->mParamNames;
            result_47->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value110=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer3(__dec_obj30,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value110,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
            __dec_obj31=result_47->mResultType;
            result_47->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value111=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer3(__dec_obj31,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value111,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)) {
            result_47->mVarArgs=self->mVarArgs;
        }
        if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
            __dec_obj32=result_47->mAlignas;
            result_47->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value112=sNode_clone(self->mAlignas))));
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value112) { right_value112 = come_decrement_ref_count2(right_value112, ((struct sNode*)right_value112)->finalize, ((struct sNode*)right_value112)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(self!=((void*)0)) {
            result_47->mUnsigned=self->mUnsigned;
        }
        if(self!=((void*)0)) {
            result_47->mShort=self->mShort;
        }
        if(self!=((void*)0)) {
            result_47->mLong=self->mLong;
        }
        if(self!=((void*)0)) {
            result_47->mLongLong=self->mLongLong;
        }
        if(self!=((void*)0)) {
            result_47->mConstant=self->mConstant;
        }
        if(self!=((void*)0)) {
            result_47->mRegister=self->mRegister;
        }
        if(self!=((void*)0)) {
            result_47->mVolatile=self->mVolatile;
        }
        if(self!=((void*)0)) {
            result_47->mStatic=self->mStatic;
        }
        if(self!=((void*)0)) {
            result_47->mUniq=self->mUniq;
        }
        if(self!=((void*)0)) {
            result_47->mRecord=self->mRecord;
        }
        if(self!=((void*)0)) {
            result_47->mExtern=self->mExtern;
        }
        if(self!=((void*)0)) {
            result_47->mRestrict=self->mRestrict;
        }
        if(self!=((void*)0)) {
            result_47->mImmutable=self->mImmutable;
        }
        if(self!=((void*)0)) {
            result_47->mHeap=self->mHeap;
        }
        if(self!=((void*)0)) {
            result_47->mDummyHeap=self->mDummyHeap;
        }
        if(self!=((void*)0)) {
            result_47->mDelegate=self->mDelegate;
        }
        if(self!=((void*)0)) {
            result_47->mShare=self->mShare;
        }
        if(self!=((void*)0)) {
            result_47->mClone=self->mClone;
        }
        if(self!=((void*)0)) {
            result_47->mNoHeap=self->mNoHeap;
        }
        if(self!=((void*)0)) {
            result_47->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(self!=((void*)0)) {
            result_47->mRefference=self->mRefference;
        }
        if(self!=((void*)0)) {
            result_47->mException=self->mException;
        }
        if(self!=((void*)0)) {
            result_47->mPointerNum=self->mPointerNum;
        }
        if(self!=((void*)0)) {
            result_47->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(self!=((void*)0)) {
            result_47->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(self!=((void*)0)) {
            result_47->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
        }
        if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
            __dec_obj33=result_47->mSizeNum;
            result_47->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value113=sNode_clone(self->mSizeNum))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value113) { right_value113 = come_decrement_ref_count2(right_value113, ((struct sNode*)right_value113)->finalize, ((struct sNode*)right_value113)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(self!=((void*)0)) {
            result_47->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(self!=((void*)0)) {
            result_47->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
            __dec_obj34=result_47->mOriginalTypeName;
            result_47->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value114=string_clone(self->mOriginalTypeName))));
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)) {
            result_47->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(self!=((void*)0)) {
            result_47->mFunctionParam=self->mFunctionParam;
        }
        if(self!=((void*)0)) {
            result_47->mAllocaValue=self->mAllocaValue;
        }
        if(self!=((void*)0)) {
            result_47->mGenericsStruct=self->mGenericsStruct;
        }
        if(self!=((void*)0)) {
            result_47->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(self!=((void*)0)) {
            result_47->mComeMemCore=self->mComeMemCore;
        }
        if(self!=((void*)0)) {
            result_47->mInline=self->mInline;
        }
        if(self!=((void*)0)) {
            result_47->mNullValue=self->mNullValue;
        }
        if(self!=((void*)0)) {
            result_47->mGuardValue=self->mGuardValue;
        }
        if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
            __dec_obj35=result_47->mAsmName;
            result_47->mAsmName=(char*)come_increment_ref_count(((char*)(right_value115=string_clone(self->mAsmName))));
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)) {
            result_47->mArrayPointerType=self->mArrayPointerType;
        }
        if(self!=((void*)0)) {
            result_47->mLambdaArray=self->mLambdaArray;
        }
        if(self!=((void*)0)) {
            result_47->mNoNumberArray=self->mNoNumberArray;
        }
        __result62__ = __result_obj__ = result_47;
        come_call_finalizer3(result_47,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result62__;
        come_call_finalizer3(result_47,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static void sType_finalize(struct sType* self){
            if(self!=((void*)0)&&self->mMultipleTypes!=((void*)0)) {
                come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
                come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
                come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
                self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
                come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
                if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
                if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
                self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
                self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_48;
struct list_item$1sTypeph* prev_it_49;
memset(&it_48, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_49, 0, sizeof(struct list_item$1sTypeph*));
                    it_48=self->head;
                    while(it_48!=((void*)0)) {
                        prev_it_49=it_48;
                        it_48=it_48->next;
                        come_call_finalizer3(prev_it_49,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
                            if(self!=((void*)0)&&self->item!=((void*)0)) {
                                come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
                    if(self!=((void*)0)&&self->v1!=((void*)0)) {
                        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_50;
struct list_item$1sNodeph* prev_it_51;
memset(&it_50, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_51, 0, sizeof(struct list_item$1sNodeph*));
                    it_50=self->head;
                    while(it_50!=((void*)0)) {
                        prev_it_51=it_50;
                        it_50=it_50->next;
                        come_call_finalizer3(prev_it_51,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
                            if(self!=((void*)0)&&self->item!=((void*)0)) {
                                if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_52;
struct list_item$1charph* prev_it_53;
memset(&it_52, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_53, 0, sizeof(struct list_item$1charph*));
                    it_52=self->head;
                    while(it_52!=((void*)0)) {
                        prev_it_53=it_52;
                        it_52=it_52->next;
                        come_call_finalizer3(prev_it_53,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
                            if(self!=((void*)0)&&self->item!=((void*)0)) {
                                self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result46__;
void* right_value82;
void* right_value83;
struct list$1sTypeph* result_54;
struct list_item$1sTypeph* it_55;
void* right_value87;
struct list$1sTypeph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
right_value83 = (void*)0;
memset(&result_54, 0, sizeof(struct list$1sTypeph*));
memset(&it_55, 0, sizeof(struct list_item$1sTypeph*));
right_value87 = (void*)0;
                if(self==((void*)0)) {
                    __result46__ = __result_obj__ = ((void*)0);
                    return __result46__;
                }
                result_54=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value83=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value82=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 135, "list$1sTypeph"))))))));
                come_call_finalizer3(right_value82,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value83,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_55=self->head;
                while(it_55!=((void*)0)) {
                    list$1sTypeph_add(result_54,(struct sType*)come_increment_ref_count(((struct sType*)(right_value87=sType_clone(it_55->item)))));
                    come_call_finalizer3(right_value87,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    it_55=it_55->next;
                }
                __result49__ = __result_obj__ = result_54;
                come_call_finalizer3(result_54,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result49__;
                come_call_finalizer3(result_54,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result47__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result47__;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
void* right_value84;
struct list_item$1sTypeph* litem_56;
struct sType* __dec_obj13;
void* right_value85;
struct list_item$1sTypeph* litem_57;
struct sType* __dec_obj14;
void* right_value86;
struct list_item$1sTypeph* litem_58;
struct sType* __dec_obj15;
struct list$1sTypeph* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
right_value84 = (void*)0;
memset(&litem_56, 0, sizeof(struct list_item$1sTypeph*));
right_value85 = (void*)0;
memset(&litem_57, 0, sizeof(struct list_item$1sTypeph*));
right_value86 = (void*)0;
memset(&litem_58, 0, sizeof(struct list_item$1sTypeph*));
                        if(self->len==0) {
                            litem_56=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value84=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 149, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value84,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_56->prev=((void*)0);
                            litem_56->next=((void*)0);
                            __dec_obj13=litem_56->item;
                            litem_56->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj13,sType_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_56;
                            self->head=litem_56;
                        }
                        else {
                            if(self->len==1) {
                                litem_57=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value85=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 159, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value85,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_57->prev=self->head;
                                litem_57->next=((void*)0);
                                __dec_obj14=litem_57->item;
                                litem_57->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_57;
                                self->head->next=litem_57;
                            }
                            else {
                                litem_58=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value86=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 169, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value86,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_58->prev=self->tail;
                                litem_58->next=((void*)0);
                                __dec_obj15=litem_58->item;
                                litem_58->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj15,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail->next=litem_58;
                                self->tail=litem_58;
                            }
                        }
                        self->len++;
                        __result48__ = __result_obj__ = self;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result48__;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_59;
struct list_item$1sTypeph* prev_it_60;
memset(&it_59, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_60, 0, sizeof(struct list_item$1sTypeph*));
                it_59=self->head;
                while(it_59!=((void*)0)) {
                    prev_it_60=it_59;
                    it_59=it_59->next;
                    come_call_finalizer3(prev_it_60,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
struct tuple1$1sTypeph* __result50__;
void* right_value89;
struct tuple1$1sTypeph* result_61;
void* right_value90;
struct sType* __dec_obj17;
struct tuple1$1sTypeph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
memset(&result_61, 0, sizeof(struct tuple1$1sTypeph*));
right_value90 = (void*)0;
                if(self==(void*)0) {
                    __result50__ = __result_obj__ = (void*)0;
                    return __result50__;
                }
                result_61=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value89=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer3(right_value89,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                    __dec_obj17=result_61->v1;
                    result_61->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value90=sType_clone(self->v1))));
                    come_call_finalizer3(__dec_obj17,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value90,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                __result51__ = __result_obj__ = result_61;
                come_call_finalizer3(result_61,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result51__;
                come_call_finalizer3(result_61,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
                    if(self!=((void*)0)&&self->v1!=((void*)0)) {
                        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result52__;
void* right_value95;
void* right_value96;
struct list$1sNodeph* result_62;
struct list_item$1sNodeph* it_63;
void* right_value101;
struct list$1sNodeph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
right_value95 = (void*)0;
right_value96 = (void*)0;
memset(&result_62, 0, sizeof(struct list$1sNodeph*));
memset(&it_63, 0, sizeof(struct list_item$1sNodeph*));
right_value101 = (void*)0;
                if(self==((void*)0)) {
                    __result52__ = __result_obj__ = ((void*)0);
                    return __result52__;
                }
                result_62=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value96=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value95=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 135, "list$1sNodeph"))))))));
                come_call_finalizer3(right_value95,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value96,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_63=self->head;
                while(it_63!=((void*)0)) {
                    list$1sNodeph_add(result_62,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value101=sNode_clone(it_63->item)))));
                    if(right_value101) { right_value101 = come_decrement_ref_count2(right_value101, ((struct sNode*)right_value101)->finalize, ((struct sNode*)right_value101)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    it_63=it_63->next;
                }
                __result57__ = __result_obj__ = result_62;
                come_call_finalizer3(result_62,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result57__;
                come_call_finalizer3(result_62,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result53__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result53__;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
void* right_value97;
struct list_item$1sNodeph* litem_64;
struct sNode* __dec_obj22;
void* right_value98;
struct list_item$1sNodeph* litem_65;
struct sNode* __dec_obj23;
void* right_value99;
struct list_item$1sNodeph* litem_66;
struct sNode* __dec_obj24;
struct list$1sNodeph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value97 = (void*)0;
memset(&litem_64, 0, sizeof(struct list_item$1sNodeph*));
right_value98 = (void*)0;
memset(&litem_65, 0, sizeof(struct list_item$1sNodeph*));
right_value99 = (void*)0;
memset(&litem_66, 0, sizeof(struct list_item$1sNodeph*));
                        if(self->len==0) {
                            litem_64=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value97=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 149, "list_item$1sNodeph"))));
                            come_call_finalizer3(right_value97,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_64->prev=((void*)0);
                            litem_64->next=((void*)0);
                            __dec_obj22=litem_64->item;
                            litem_64->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail=litem_64;
                            self->head=litem_64;
                        }
                        else {
                            if(self->len==1) {
                                litem_65=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value98=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 159, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value98,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_65->prev=self->head;
                                litem_65->next=((void*)0);
                                __dec_obj23=litem_65->item;
                                litem_65->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_65;
                                self->head->next=litem_65;
                            }
                            else {
                                litem_66=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value99=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 169, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value99,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_66->prev=self->tail;
                                litem_66->next=((void*)0);
                                __dec_obj24=litem_66->item;
                                litem_66->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail->next=litem_66;
                                self->tail=litem_66;
                            }
                        }
                        self->len++;
                        __result54__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result54__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
struct sNode* __result55__;
void* right_value100;
struct sNode* result_67;
struct sNode* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value100 = (void*)0;
memset(&result_67, 0, sizeof(struct sNode*));
                        if(self==(void*)0) {
                            __result55__ = __result_obj__ = (void*)0;
                            return __result55__;
                        }
                        result_67=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value100=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value100) { right_value100 = come_decrement_ref_count2(right_value100, ((struct sNode*)right_value100)->finalize, ((struct sNode*)right_value100)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        if(self!=((void*)0)&&self->clone!=((void*)0)) {
                            result_67->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(self!=((void*)0)) {
                            result_67->finalize=self->finalize;
                        }
                        if(self!=((void*)0)) {
                            result_67->clone=self->clone;
                        }
                        if(self!=((void*)0)) {
                            result_67->compile=self->compile;
                        }
                        if(self!=((void*)0)) {
                            result_67->sline=self->sline;
                        }
                        if(self!=((void*)0)) {
                            result_67->sname=self->sname;
                        }
                        if(self!=((void*)0)) {
                            result_67->terminated=self->terminated;
                        }
                        if(self!=((void*)0)) {
                            result_67->kind=self->kind;
                        }
                        __result56__ = __result_obj__ = result_67;
                        if(result_67) { result_67 = come_decrement_ref_count2(result_67, ((struct sNode*)result_67)->finalize, ((struct sNode*)result_67)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result56__;
                        if(result_67) { result_67 = come_decrement_ref_count2(result_67, ((struct sNode*)result_67)->finalize, ((struct sNode*)result_67)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_68;
struct list_item$1sNodeph* prev_it_69;
memset(&it_68, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_69, 0, sizeof(struct list_item$1sNodeph*));
                it_68=self->head;
                while(it_68!=((void*)0)) {
                    prev_it_69=it_68;
                    it_68=it_68->next;
                    come_call_finalizer3(prev_it_69,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result58__;
void* right_value104;
void* right_value105;
struct list$1charph* result_70;
struct list_item$1charph* it_71;
void* right_value109;
struct list$1charph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
right_value105 = (void*)0;
memset(&result_70, 0, sizeof(struct list$1charph*));
memset(&it_71, 0, sizeof(struct list_item$1charph*));
right_value109 = (void*)0;
                if(self==((void*)0)) {
                    __result58__ = __result_obj__ = ((void*)0);
                    return __result58__;
                }
                result_70=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value105=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value104=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 135, "list$1charph"))))))));
                come_call_finalizer3(right_value104,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value105,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                it_71=self->head;
                while(it_71!=((void*)0)) {
                    list$1charph_add(result_70,(char*)come_increment_ref_count(((char*)(right_value109=string_clone(it_71->item)))));
                    right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    it_71=it_71->next;
                }
                __result61__ = __result_obj__ = result_70;
                come_call_finalizer3(result_70,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result61__;
                come_call_finalizer3(result_70,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result59__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result59__;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
void* right_value106;
struct list_item$1charph* litem_72;
char* __dec_obj27;
void* right_value107;
struct list_item$1charph* litem_73;
char* __dec_obj28;
void* right_value108;
struct list_item$1charph* litem_74;
char* __dec_obj29;
struct list$1charph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
memset(&litem_72, 0, sizeof(struct list_item$1charph*));
right_value107 = (void*)0;
memset(&litem_73, 0, sizeof(struct list_item$1charph*));
right_value108 = (void*)0;
memset(&litem_74, 0, sizeof(struct list_item$1charph*));
                        if(self->len==0) {
                            litem_72=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value106=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 149, "list_item$1charph"))));
                            come_call_finalizer3(right_value106,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_72->prev=((void*)0);
                            litem_72->next=((void*)0);
                            __dec_obj27=litem_72->item;
                            litem_72->item=(char*)come_increment_ref_count(item);
                            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_72;
                            self->head=litem_72;
                        }
                        else {
                            if(self->len==1) {
                                litem_73=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value107=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 159, "list_item$1charph"))));
                                come_call_finalizer3(right_value107,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_73->prev=self->head;
                                litem_73->next=((void*)0);
                                __dec_obj28=litem_73->item;
                                litem_73->item=(char*)come_increment_ref_count(item);
                                __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_73;
                                self->head->next=litem_73;
                            }
                            else {
                                litem_74=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value108=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 169, "list_item$1charph"))));
                                come_call_finalizer3(right_value108,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_74->prev=self->tail;
                                litem_74->next=((void*)0);
                                __dec_obj29=litem_74->item;
                                litem_74->item=(char*)come_increment_ref_count(item);
                                __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail->next=litem_74;
                                self->tail=litem_74;
                            }
                        }
                        self->len++;
                        __result60__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result60__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_75;
struct list_item$1charph* prev_it_76;
memset(&it_75, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_76, 0, sizeof(struct list_item$1charph*));
                it_75=self->head;
                while(it_75!=((void*)0)) {
                    prev_it_76=it_75;
                    it_75=it_75->next;
                    come_call_finalizer3(prev_it_76,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
struct list$1tuple3$3sTypephcharphsNodephph* __result63__;
void* right_value118;
void* right_value119;
struct list$1tuple3$3sTypephcharphsNodephph* result_79;
struct list_item$1tuple3$3sTypephcharphsNodephph* it_80;
void* right_value127;
struct list$1tuple3$3sTypephcharphsNodephph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value118 = (void*)0;
right_value119 = (void*)0;
memset(&result_79, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&it_80, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value127 = (void*)0;
        if(self==((void*)0)) {
            __result63__ = __result_obj__ = ((void*)0);
            return __result63__;
        }
        result_79=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value119=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value118=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 135, "list$1tuple3$3sTypephcharphsNodephph"))))))));
        come_call_finalizer3(right_value118,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value119,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        it_80=self->head;
        while(it_80!=((void*)0)) {
            list$1tuple3$3sTypephcharphsNodephph_add(result_79,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value127=tuple3$3sTypephcharphsNodephp_clone(it_80->item)))));
            come_call_finalizer3(right_value127,tuple3$3sTypephcharphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            it_80=it_80->next;
        }
        __result68__ = __result_obj__ = result_79;
        come_call_finalizer3(result_79,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result68__;
        come_call_finalizer3(result_79,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
struct list$1tuple3$3sTypephcharphsNodephph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result64__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result64__;
            come_call_finalizer3(self,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple3$3sTypephcharphsNodephphp_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
struct list_item$1tuple3$3sTypephcharphsNodephph* it_77;
struct list_item$1tuple3$3sTypephcharphsNodephph* prev_it_78;
memset(&it_77, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&prev_it_78, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                it_77=self->head;
                while(it_77!=((void*)0)) {
                    prev_it_78=it_77;
                    it_77=it_77->next;
                    come_call_finalizer3(prev_it_78,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple3$3sTypephcharphsNodephphp_finalize(struct list_item$1tuple3$3sTypephcharphsNodephph* self){
                        if(self!=((void*)0)&&self->item!=((void*)0)) {
                            come_call_finalizer3(self->item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__;
void* right_value120;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_81;
struct tuple3$3sTypephcharphsNodeph* __dec_obj39;
void* right_value121;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_82;
struct tuple3$3sTypephcharphsNodeph* __dec_obj40;
void* right_value122;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_83;
struct tuple3$3sTypephcharphsNodeph* __dec_obj41;
struct list$1tuple3$3sTypephcharphsNodephph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
right_value120 = (void*)0;
memset(&litem_81, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value121 = (void*)0;
memset(&litem_82, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value122 = (void*)0;
memset(&litem_83, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                if(self->len==0) {
                    litem_81=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value120=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 149, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                    come_call_finalizer3(right_value120,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_81->prev=((void*)0);
                    litem_81->next=((void*)0);
                    __dec_obj39=litem_81->item;
                    litem_81->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj39,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_81;
                    self->head=litem_81;
                }
                else {
                    if(self->len==1) {
                        litem_82=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value121=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 159, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                        come_call_finalizer3(right_value121,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_82->prev=self->head;
                        litem_82->next=((void*)0);
                        __dec_obj40=litem_82->item;
                        litem_82->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj40,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_82;
                        self->head->next=litem_82;
                    }
                    else {
                        litem_83=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value122=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 169, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                        come_call_finalizer3(right_value122,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_83->prev=self->tail;
                        litem_83->next=((void*)0);
                        __dec_obj41=litem_83->item;
                        litem_83->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj41,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_83;
                        self->tail=litem_83;
                    }
                }
                self->len++;
                __result65__ = __result_obj__ = self;
                come_call_finalizer3(item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result65__;
                come_call_finalizer3(item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self){
                            if(self!=((void*)0)&&self->v1!=((void*)0)) {
                                come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->v2!=((void*)0)) {
                                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->v3!=((void*)0)) {
                                if(self->v3) { self->v3 = come_decrement_ref_count2(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodephp_clone(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__;
struct tuple3$3sTypephcharphsNodeph* __result66__;
void* right_value123;
struct tuple3$3sTypephcharphsNodeph* result_84;
void* right_value124;
struct sType* __dec_obj42;
void* right_value125;
char* __dec_obj43;
void* right_value126;
struct sNode* __dec_obj44;
struct tuple3$3sTypephcharphsNodeph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
memset(&result_84, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
right_value124 = (void*)0;
right_value125 = (void*)0;
right_value126 = (void*)0;
                if(self==(void*)0) {
                    __result66__ = __result_obj__ = (void*)0;
                    return __result66__;
                }
                result_84=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value123=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "tuple3$3sTypephcharphsNodephp_clone", 3, "tuple3$3sTypephcharphsNodeph"))));
                come_call_finalizer3(right_value123,tuple3$3sTypephcharphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                    __dec_obj42=result_84->v1;
                    result_84->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value124=sType_clone(self->v1))));
                    come_call_finalizer3(__dec_obj42,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value124,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(self!=((void*)0)&&self->v2!=((void*)0)) {
                    __dec_obj43=result_84->v2;
                    result_84->v2=(char*)come_increment_ref_count(((char*)(right_value125=string_clone(self->v2))));
                    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(self!=((void*)0)&&self->v3!=((void*)0)) {
                    __dec_obj44=result_84->v3;
                    result_84->v3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value126=sNode_clone(self->v3))));
                    if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count2(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value126) { right_value126 = come_decrement_ref_count2(right_value126, ((struct sNode*)right_value126)->finalize, ((struct sNode*)right_value126)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                __result67__ = __result_obj__ = result_84;
                come_call_finalizer3(result_84,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result67__;
                come_call_finalizer3(result_84,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self){
                    if(self!=((void*)0)&&self->v1!=((void*)0)) {
                        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(self!=((void*)0)&&self->v2!=((void*)0)) {
                        self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(self!=((void*)0)&&self->v3!=((void*)0)) {
                        if(self->v3) { self->v3 = come_decrement_ref_count2(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
}

static void list$1tuple3$3sTypephcharphsNodephph_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
struct list_item$1tuple3$3sTypephcharphsNodephph* it_85;
struct list_item$1tuple3$3sTypephcharphsNodephph* prev_it_86;
memset(&it_85, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&prev_it_86, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
        it_85=self->head;
        while(it_85!=((void*)0)) {
            prev_it_86=it_85;
            it_85=it_85->next;
            come_call_finalizer3(prev_it_86,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
struct sVar* default_value_88;
unsigned int hash_89;
unsigned int it_90;
struct sVar* __result71__;
struct sVar* __result72__;
struct sVar* __result73__;
struct sVar* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_88, 0, sizeof(struct sVar*));
memset(&hash_89, 0, sizeof(unsigned int));
memset(&it_90, 0, sizeof(unsigned int));
            memset(&default_value_88,0,sizeof(struct sVar*));
            hash_89=string_get_hash_key(((char*)key))%self->size;
            it_90=hash_89;
            while((_Bool)1) {
                if(self->item_existance[it_90]) {
                    if(string_equals(self->keys[it_90],key)) {
                        __result71__ = __result_obj__ = self->items[it_90];
                        come_call_finalizer3(default_value_88,sVar_finalize, 0, 0, 0, 0, (void*)0);
                        return __result71__;
                    }
                    it_90++;
                    if(it_90>=self->size) {
                        it_90=0;
                    }
                    else {
                        if(it_90==hash_89) {
                            __result72__ = __result_obj__ = default_value_88;
                            come_call_finalizer3(default_value_88,sVar_finalize, 0, 0, 1, 0, (void*)0);
                            return __result72__;
                        }
                    }
                }
                else {
                    __result73__ = __result_obj__ = default_value_88;
                    come_call_finalizer3(default_value_88,sVar_finalize, 0, 0, 1, 0, (void*)0);
                    return __result73__;
                }
            }
            __result74__ = __result_obj__ = default_value_88;
            come_call_finalizer3(default_value_88,sVar_finalize, 0, 0, 1, 0, (void*)0);
            return __result74__;
            come_call_finalizer3(default_value_88,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
                            if(self!=((void*)0)&&self->mName!=((void*)0)) {
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
                                self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->mType!=((void*)0)) {
                                come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
                                self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_begin(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
struct tuple3$3sTypephcharphsNodeph* result_93;
struct tuple3$3sTypephcharphsNodeph* __result75__;
struct tuple3$3sTypephcharphsNodeph* __result76__;
struct tuple3$3sTypephcharphsNodeph* result_94;
struct tuple3$3sTypephcharphsNodeph* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_93, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&result_94, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
            if(self==((void*)0)) {
                memset(&result_93,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                __result75__ = __result_obj__ = result_93;
                return __result75__;
            }
            self->it=self->head;
            if(self->it) {
                __result76__ = __result_obj__ = self->it->item;
                return __result76__;
            }
            memset(&result_94,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
            __result77__ = __result_obj__ = result_94;
            return __result77__;
}

static _Bool list$1tuple3$3sTypephcharphsNodephph_end(struct list$1tuple3$3sTypephcharphsNodephph* self){
            return self==((void*)0)||self->it==((void*)0);
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_next(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
struct tuple3$3sTypephcharphsNodeph* result_96;
struct tuple3$3sTypephcharphsNodeph* __result78__;
struct tuple3$3sTypephcharphsNodeph* __result79__;
struct tuple3$3sTypephcharphsNodeph* result_97;
struct tuple3$3sTypephcharphsNodeph* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_96, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&result_97, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
            if(self==((void*)0)||self->it==((void*)0)) {
                memset(&result_96,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                __result78__ = __result_obj__ = result_96;
                return __result78__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result79__ = __result_obj__ = self->it->item;
                return __result79__;
            }
            memset(&result_97,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
            __result80__ = __result_obj__ = result_97;
            return __result80__;
}

static void CVALUE_finalize(struct CVALUE* self){
                    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
                        self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(self!=((void*)0)&&self->type!=((void*)0)) {
                        come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(self!=((void*)0)&&self->right_values!=((void*)0)) {
                        come_call_finalizer3(self->right_values,list$1sRightValueObjectpp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list$1sRightValueObjectpp_finalize(struct list$1sRightValueObjectp* self){
struct list_item$1sRightValueObjectp* it_103;
struct list_item$1sRightValueObjectp* prev_it_104;
memset(&it_103, 0, sizeof(struct list_item$1sRightValueObjectp*));
memset(&prev_it_104, 0, sizeof(struct list_item$1sRightValueObjectp*));
                            it_103=self->head;
                            while(it_103!=((void*)0)) {
                                prev_it_104=it_103;
                                it_103=it_103->next;
                                come_call_finalizer3(prev_it_104,list_item$1sRightValueObjectpp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1sRightValueObjectpp_finalize(struct list_item$1sRightValueObjectp* self){
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
char* result_109;
char* __result83__;
char* __result84__;
char* result_110;
char* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_109, 0, sizeof(char*));
memset(&result_110, 0, sizeof(char*));
                if(self==((void*)0)) {
                    memset(&result_109,0,sizeof(char*));
                    __result83__ = __result_obj__ = result_109;
                    return __result83__;
                }
                self->it=self->head;
                if(self->it) {
                    __result84__ = __result_obj__ = self->it->item;
                    return __result84__;
                }
                memset(&result_110,0,sizeof(char*));
                __result85__ = __result_obj__ = result_110;
                return __result85__;
}

static _Bool list$1charph_end(struct list$1charph* self){
                return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
char* result_112;
char* __result86__;
char* __result87__;
char* result_113;
char* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_112, 0, sizeof(char*));
memset(&result_113, 0, sizeof(char*));
                if(self==((void*)0)||self->it==((void*)0)) {
                    memset(&result_112,0,sizeof(char*));
                    __result86__ = __result_obj__ = result_112;
                    return __result86__;
                }
                self->it=self->it->next;
                if(self->it) {
                    __result87__ = __result_obj__ = self->it->item;
                    return __result87__;
                }
                memset(&result_113,0,sizeof(char*));
                __result88__ = __result_obj__ = result_113;
                return __result88__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
                    if(self==((void*)0)) {
                        return 0;
                    }
                    return self->len;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
struct list_item$1sTypeph* it_115;
int i_116;
struct sType* __result89__;
struct sType* default_value_117;
struct sType* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_115, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_116, 0, sizeof(int));
memset(&default_value_117, 0, sizeof(struct sType*));
                        if(position<0) {
                            position+=self->len;
                        }
                        it_115=self->head;
                        i_116=0;
                        while(it_115!=((void*)0)) {
                            if(position==i_116) {
                                __result89__ = __result_obj__ = it_115->item;
                                return __result89__;
                            }
                            it_115=it_115->next;
                            i_116++;
                        }
                        memset(&default_value_117,0,sizeof(struct sType*));
                        __result90__ = __result_obj__ = default_value_117;
                        come_call_finalizer3(default_value_117,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result90__;
                        come_call_finalizer3(default_value_117,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
                    if(self==((void*)0)) {
                        return 0;
                    }
                    return self->len;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
struct sNode* result_133;
struct sNode* __result92__;
struct sNode* __result93__;
struct sNode* result_134;
struct sNode* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_133, 0, sizeof(struct sNode*));
memset(&result_134, 0, sizeof(struct sNode*));
                        if(self==((void*)0)) {
                            memset(&result_133,0,sizeof(struct sNode*));
                            __result92__ = __result_obj__ = result_133;
                            return __result92__;
                        }
                        self->it=self->head;
                        if(self->it) {
                            __result93__ = __result_obj__ = self->it->item;
                            return __result93__;
                        }
                        memset(&result_134,0,sizeof(struct sNode*));
                        __result94__ = __result_obj__ = result_134;
                        return __result94__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
                        return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
struct sNode* result_136;
struct sNode* __result95__;
struct sNode* __result96__;
struct sNode* result_137;
struct sNode* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_136, 0, sizeof(struct sNode*));
memset(&result_137, 0, sizeof(struct sNode*));
                        if(self==((void*)0)||self->it==((void*)0)) {
                            memset(&result_136,0,sizeof(struct sNode*));
                            __result95__ = __result_obj__ = result_136;
                            return __result95__;
                        }
                        self->it=self->it->next;
                        if(self->it) {
                            __result96__ = __result_obj__ = self->it->item;
                            return __result96__;
                        }
                        memset(&result_137,0,sizeof(struct sNode*));
                        __result97__ = __result_obj__ = result_137;
                        return __result97__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
void* right_value170;
struct list_item$1CVALUEph* litem_141;
struct CVALUE* __dec_obj54;
void* right_value171;
struct list_item$1CVALUEph* litem_142;
struct CVALUE* __dec_obj55;
void* right_value172;
struct list_item$1CVALUEph* litem_143;
struct CVALUE* __dec_obj56;
struct list$1CVALUEph* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
right_value170 = (void*)0;
memset(&litem_141, 0, sizeof(struct list_item$1CVALUEph*));
right_value171 = (void*)0;
memset(&litem_142, 0, sizeof(struct list_item$1CVALUEph*));
right_value172 = (void*)0;
memset(&litem_143, 0, sizeof(struct list_item$1CVALUEph*));
                    if(self->len==0) {
                        litem_141=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value170=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 219, "list_item$1CVALUEph"))));
                        come_call_finalizer3(right_value170,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_141->prev=((void*)0);
                        litem_141->next=((void*)0);
                        __dec_obj54=litem_141->item;
                        litem_141->item=(struct CVALUE*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj54,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_141;
                        self->head=litem_141;
                    }
                    else {
                        if(self->len==1) {
                            litem_142=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value171=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 229, "list_item$1CVALUEph"))));
                            come_call_finalizer3(right_value171,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_142->prev=self->head;
                            litem_142->next=((void*)0);
                            __dec_obj55=litem_142->item;
                            litem_142->item=(struct CVALUE*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj55,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_142;
                            self->head->next=litem_142;
                        }
                        else {
                            litem_143=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value172=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 239, "list_item$1CVALUEph"))));
                            come_call_finalizer3(right_value172,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_143->prev=self->tail;
                            litem_143->next=((void*)0);
                            __dec_obj56=litem_143->item;
                            litem_143->item=(struct CVALUE*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj56,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_143;
                            self->tail=litem_143;
                        }
                    }
                    self->len++;
                    __result98__ = __result_obj__ = self;
                    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                    return __result98__;
                    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
                            if(self!=((void*)0)&&self->item!=((void*)0)) {
                                come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value259;
void* right_value260;
char* __dec_obj80;
struct sLoadNode* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
right_value259 = (void*)0;
right_value260 = (void*)0;
    ((struct sNodeBase*)(right_value259=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value259,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj80=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value260=__builtin_string(name))));
    __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result106__ = __result_obj__ = self;
    come_call_finalizer3(self,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result106__;
    come_call_finalizer3(self,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

char* sLoadNode_kind(struct sLoadNode* self){
void* __result_obj__;
void* right_value261;
char* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
right_value261 = (void*)0;
    __result107__ = __result_obj__ = ((char*)(right_value261=__builtin_string("sLoadNode")));
    right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result107__;
}

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info){
struct sClass* current_stack_frame_struct_176;
struct sVar* parent_var_177;
void* right_value262;
void* right_value263;
struct CVALUE* come_value_178;
struct sType* type_179;
void* right_value264;
char* __dec_obj81;
void* right_value265;
struct sType* __dec_obj82;
_Bool __result108__;
struct sVar* var__180;
struct sFun* fun_181;
void* right_value266;
void* right_value267;
struct CVALUE* come_value_185;
void* right_value268;
char* __dec_obj83;
struct sType* __dec_obj84;
_Bool __result113__;
void* right_value269;
void* right_value270;
struct CVALUE* come_value_186;
void* right_value271;
char* __dec_obj85;
void* right_value272;
struct sType* __dec_obj86;
void* right_value273;
struct sType* __dec_obj87;
_Bool __result115__;
memset(&current_stack_frame_struct_176, 0, sizeof(struct sClass*));
memset(&parent_var_177, 0, sizeof(struct sVar*));
right_value262 = (void*)0;
right_value263 = (void*)0;
memset(&come_value_178, 0, sizeof(struct CVALUE*));
memset(&type_179, 0, sizeof(struct sType*));
right_value264 = (void*)0;
right_value265 = (void*)0;
memset(&var__180, 0, sizeof(struct sVar*));
memset(&fun_181, 0, sizeof(struct sFun*));
right_value266 = (void*)0;
right_value267 = (void*)0;
memset(&come_value_185, 0, sizeof(struct CVALUE*));
right_value268 = (void*)0;
right_value269 = (void*)0;
right_value270 = (void*)0;
memset(&come_value_186, 0, sizeof(struct CVALUE*));
right_value271 = (void*)0;
right_value272 = (void*)0;
right_value273 = (void*)0;
    current_stack_frame_struct_176=info->current_stack_frame_struct;
    if(current_stack_frame_struct_176&&map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)==((void*)0)) {
        parent_var_177=get_variable_from_table(info->lv_table->mParent,self->name);
        if(parent_var_177!=((void*)0)) {
            if(string_operator_not_equals(parent_var_177->mFunName,info->come_fun->mName)) {
                come_value_178=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value263=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value262=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 549, "CVALUE"))))))));
                come_call_finalizer3(right_value262,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(right_value263,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                type_179=parent_var_177->mType;
                __dec_obj81=come_value_178->c_value;
                come_value_178->c_value=(char*)come_increment_ref_count(((char*)(right_value264=xsprintf("(*(parent->%s))",parent_var_177->mCValueName))));
                __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __dec_obj82=come_value_178->type;
                come_value_178->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value265=sType_clone(type_179))));
                come_call_finalizer3(__dec_obj82,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value265,sType_finalize, 0, 1, 0, 0, (void*)0);
                come_value_178->var=((void*)0);
                add_come_last_code(info,"%s;\n",come_value_178->c_value);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_178));
                __result108__ = (_Bool)1;
                come_call_finalizer3(come_value_178,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result108__;
                come_call_finalizer3(come_value_178,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    var__180=get_variable_from_table(info->lv_table,self->name);
    if(var__180==((void*)0)) {
        var__180=get_variable_from_table(info->gv_table,self->name);
        if(var__180==((void*)0)) {
            fun_181=map$2charphsFunphp_operator_load_element(info->funcs,self->name);
            if(fun_181) {
                come_value_185=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value267=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value266=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 576, "CVALUE"))))))));
                come_call_finalizer3(right_value266,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(right_value267,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj83=come_value_185->c_value;
                come_value_185->c_value=(char*)come_increment_ref_count(((char*)(right_value268=xsprintf("%s",fun_181->mName))));
                __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __dec_obj84=come_value_185->type;
                come_value_185->type=(struct sType*)come_increment_ref_count(fun_181->mLambdaType);
                come_call_finalizer3(__dec_obj84,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_185->var=((void*)0);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_185));
                __result113__ = (_Bool)1;
                come_call_finalizer3(come_value_185,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result113__;
                come_call_finalizer3(come_value_185,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"var not found(%s)(Z) at loading variable\n",self->name);
                return (_Bool)1;
            }
        }
    }
    come_value_186=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value270=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value269=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 593, "CVALUE"))))))));
    come_call_finalizer3(right_value269,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value270,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj85=come_value_186->c_value;
    come_value_186->c_value=(char*)come_increment_ref_count(((char*)(right_value271=xsprintf("%s",var__180->mCValueName))));
    __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj86=come_value_186->type;
    come_value_186->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value272=sType_clone(var__180->mType))));
    come_call_finalizer3(__dec_obj86,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value272,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_186->var=var__180;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_186));
    if(list$1sNodeph_length(come_value_186->type->mArrayNum)==1) {
        __dec_obj87=come_value_186->type->mOriginalLoadVarType->v1;
        come_value_186->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value273=sType_clone(come_value_186->type))));
        come_call_finalizer3(__dec_obj87,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value273,sType_finalize, 0, 1, 0, 0, (void*)0);
        list$1sNodeph_reset(come_value_186->type->mArrayNum);
        come_value_186->type->mPointerNum++;
        come_value_186->type->mOriginalTypeNamePointerNum=come_value_186->type->mPointerNum;
    }
    __result115__ = (_Bool)1;
    come_call_finalizer3(come_value_186,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result115__;
    come_call_finalizer3(come_value_186,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_182;
unsigned int hash_183;
unsigned int it_184;
struct sFun* __result109__;
struct sFun* __result110__;
struct sFun* __result111__;
struct sFun* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_182, 0, sizeof(struct sFun*));
memset(&hash_183, 0, sizeof(unsigned int));
memset(&it_184, 0, sizeof(unsigned int));
                memset(&default_value_182,0,sizeof(struct sFun*));
                hash_183=string_get_hash_key(((char*)key))%self->size;
                it_184=hash_183;
                while((_Bool)1) {
                    if(self->item_existance[it_184]) {
                        if(string_equals(self->keys[it_184],key)) {
                            __result109__ = __result_obj__ = self->items[it_184];
                            come_call_finalizer3(default_value_182,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            return __result109__;
                        }
                        it_184++;
                        if(it_184>=self->size) {
                            it_184=0;
                        }
                        else {
                            if(it_184==hash_183) {
                                __result110__ = __result_obj__ = default_value_182;
                                come_call_finalizer3(default_value_182,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result110__;
                            }
                        }
                    }
                    else {
                        __result111__ = __result_obj__ = default_value_182;
                        come_call_finalizer3(default_value_182,sFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result111__;
                    }
                }
                __result112__ = __result_obj__ = default_value_182;
                come_call_finalizer3(default_value_182,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result112__;
                come_call_finalizer3(default_value_182,sFun_finalize, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
                                if(self!=((void*)0)&&self->mName!=((void*)0)) {
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                                    come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
                                    come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
                                    come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
                                    come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(self!=((void*)0)&&self->mSource!=((void*)0)) {
                                    come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
                                    come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
                                    come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
                                    come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sBlock_finalize(struct sBlock* self){
                                        if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
                                            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
                                            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_187;
struct list_item$1sNodeph* prev_it_188;
struct list$1sNodeph* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_187, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_188, 0, sizeof(struct list_item$1sNodeph*));
            it_187=self->head;
            while(it_187!=((void*)0)) {
                prev_it_188=it_187;
                it_187=it_187->next;
                come_call_finalizer3(prev_it_188,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result114__ = __result_obj__ = self;
            return __result114__;
}

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value274;
void* right_value275;
char* __dec_obj88;
struct sFunLoadNode* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
right_value274 = (void*)0;
right_value275 = (void*)0;
    ((struct sNodeBase*)(right_value274=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value274,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj88=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value275=__builtin_string(name))));
    __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result116__ = __result_obj__ = self;
    come_call_finalizer3(self,sFunLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result116__;
    come_call_finalizer3(self,sFunLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

char* sFunLoadNode_kind(struct sFunLoadNode* self){
void* __result_obj__;
void* right_value276;
char* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value276 = (void*)0;
    __result117__ = __result_obj__ = ((char*)(right_value276=__builtin_string("sFunLoadNode")));
    right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result117__;
}

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info){
struct sFun* fun_189;
void* right_value277;
void* right_value278;
struct CVALUE* come_value_190;
void* right_value279;
char* __dec_obj89;
struct sType* __dec_obj90;
memset(&fun_189, 0, sizeof(struct sFun*));
right_value277 = (void*)0;
right_value278 = (void*)0;
memset(&come_value_190, 0, sizeof(struct CVALUE*));
right_value279 = (void*)0;
    fun_189=map$2charphsFunphp_operator_load_element(info->funcs,self->name);
    if(fun_189==((void*)0)) {
        err_msg(info,"fun not found(%s) at loading variable\n",self->name);
        return (_Bool)0;
    }
    else {
        come_value_190=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value278=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value277=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 635, "CVALUE"))))))));
        come_call_finalizer3(right_value277,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value278,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj89=come_value_190->c_value;
        come_value_190->c_value=(char*)come_increment_ref_count(((char*)(right_value279=xsprintf("%s",fun_189->mName))));
        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __dec_obj90=come_value_190->type;
        come_value_190->type=(struct sType*)come_increment_ref_count(fun_189->mLambdaType);
        come_call_finalizer3(__dec_obj90,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_190->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_190));
        come_call_finalizer3(come_value_190,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sFunLoadNode_finalize(struct sFunLoadNode* self){
        if(self!=((void*)0)&&self->sname!=((void*)0)) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->name!=((void*)0)) {
            self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

struct sArrayInitializer* sArrayInitializer_initialize(struct sArrayInitializer* self, struct list$1tuple2$2sNodephsNodephph* initializer, struct sInfo* info){
void* __result_obj__;
void* right_value280;
void* right_value290;
struct list$1tuple2$2sNodephsNodephph* __dec_obj96;
struct sArrayInitializer* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
right_value280 = (void*)0;
right_value290 = (void*)0;
    ((struct sNodeBase*)(right_value280=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value280,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj96=self->initializer;
    self->initializer=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list$1tuple2$2sNodephsNodephph*)(right_value290=list$1tuple2$2sNodephsNodephphp_clone(initializer))));
    come_call_finalizer3(__dec_obj96,list$1tuple2$2sNodephsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value290,list$1tuple2$2sNodephsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    __result124__ = __result_obj__ = self;
    come_call_finalizer3(self,sArrayInitializer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(initializer,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result124__;
    come_call_finalizer3(self,sArrayInitializer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(initializer,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
}

char* sArrayInitializer_kind(struct sArrayInitializer* self){
void* __result_obj__;
void* right_value291;
char* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
right_value291 = (void*)0;
    __result125__ = __result_obj__ = ((char*)(right_value291=__builtin_string("sArrayInitializer")));
    right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result125__;
}

_Bool sArrayInitializer_compile(struct sArrayInitializer* self, struct sInfo* info){
struct list$1tuple2$2sNodephsNodephph* initializer_201;
void* right_value292;
void* right_value293;
struct buffer* buf_202;
int i_203;
struct sType* __dec_obj97;
struct sType* element_type_204;
struct list$1tuple2$2sNodephsNodephph* o2_saved_205;
struct tuple2$2sNodephsNodeph* it_208;
struct tuple2$2sNodephsNodeph* multiple_assign_var2;
struct sNode* index_211;
struct sNode* value_212;
struct CVALUE* __dec_obj98;
struct CVALUE* come_value_213;
_Bool __result132__;
void* right_value294;
struct CVALUE* __dec_obj99;
_Bool __result133__;
void* right_value295;
struct CVALUE* come_value2_214;
void* right_value296;
struct sType* __dec_obj100;
void* right_value297;
void* right_value298;
void* right_value299;
struct CVALUE* come_value_215;
void* right_value300;
char* __dec_obj101;
void* right_value301;
struct sType* __dec_obj102;
_Bool __result134__;
memset(&initializer_201, 0, sizeof(struct list$1tuple2$2sNodephsNodephph*));
right_value292 = (void*)0;
right_value293 = (void*)0;
memset(&buf_202, 0, sizeof(struct buffer*));
memset(&i_203, 0, sizeof(int));
memset(&element_type_204, 0, sizeof(struct sType*));
memset(&o2_saved_205, 0, sizeof(struct list$1tuple2$2sNodephsNodephph*));
memset(&it_208, 0, sizeof(struct tuple2$2sNodephsNodeph*));
memset(&come_value_213, 0, sizeof(struct CVALUE*));
right_value294 = (void*)0;
right_value295 = (void*)0;
memset(&come_value2_214, 0, sizeof(struct CVALUE*));
right_value296 = (void*)0;
right_value297 = (void*)0;
right_value298 = (void*)0;
right_value299 = (void*)0;
memset(&come_value_215, 0, sizeof(struct CVALUE*));
right_value300 = (void*)0;
right_value301 = (void*)0;
    initializer_201=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(self->initializer);
    buf_202=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value293=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value292=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 666, "buffer"))))))));
    come_call_finalizer3(right_value292,buffer_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value293,buffer_finalize, 0, 1, 0, 0, (void*)0);
    buffer_append_str(buf_202,"{");
    i_203=0;
    __dec_obj97=element_type_204;
    element_type_204=((void*)0);
    come_call_finalizer3(__dec_obj97,sType_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_205=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count((initializer_201)),it_208=list$1tuple2$2sNodephsNodephph_begin((o2_saved_205));    !list$1tuple2$2sNodephsNodephph_end((o2_saved_205));    it_208=list$1tuple2$2sNodephsNodephph_next((o2_saved_205))    ){
        multiple_assign_var2=it_208;
        index_211=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v1);
        value_212=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
        __dec_obj98=come_value_213;
        come_value_213=((void*)0);
        come_call_finalizer3(__dec_obj98,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(index_211) {
            if(!node_compile(index_211,info)) {
                __result132__ = (_Bool)0;
                if(index_211) { index_211 = come_decrement_ref_count2(index_211, ((struct sNode*)index_211)->finalize, ((struct sNode*)index_211)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(value_212) { value_212 = come_decrement_ref_count2(value_212, ((struct sNode*)value_212)->finalize, ((struct sNode*)value_212)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_213,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(o2_saved_205,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(initializer_201,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_202,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_type_204,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result132__;
            }
            __dec_obj99=come_value_213;
            come_value_213=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value294=get_value_from_stack(-1,info))));
            come_call_finalizer3(__dec_obj99,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value294,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            dec_stack_ptr(1,info);
        }
        if(!node_compile(value_212,info)) {
            __result133__ = (_Bool)0;
            if(index_211) { index_211 = come_decrement_ref_count2(index_211, ((struct sNode*)index_211)->finalize, ((struct sNode*)index_211)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(value_212) { value_212 = come_decrement_ref_count2(value_212, ((struct sNode*)value_212)->finalize, ((struct sNode*)value_212)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_213,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(o2_saved_205,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(initializer_201,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_202,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_type_204,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result133__;
        }
        come_value2_214=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value295=get_value_from_stack(-1,info))));
        come_call_finalizer3(right_value295,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        dec_stack_ptr(1,info);
        __dec_obj100=element_type_204;
        element_type_204=(struct sType*)come_increment_ref_count(((struct sType*)(right_value296=sType_clone(come_value2_214->type))));
        come_call_finalizer3(__dec_obj100,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value296,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(come_value_213) {
            buffer_append_str(buf_202,((char*)(right_value297=xsprintf("[%s] = %s",come_value_213->c_value,come_value2_214->c_value))));
            right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        else {
            buffer_append_str(buf_202,come_value2_214->c_value);
        }
        i_203++;
        if(i_203!=list$1tuple2$2sNodephsNodephph_length(initializer_201)) {
            buffer_append_str(buf_202,",");
        }
        if(index_211) { index_211 = come_decrement_ref_count2(index_211, ((struct sNode*)index_211)->finalize, ((struct sNode*)index_211)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(value_212) { value_212 = come_decrement_ref_count2(value_212, ((struct sNode*)value_212)->finalize, ((struct sNode*)value_212)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_213,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_214,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_205,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_202,"}");
    come_value_215=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value299=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value298=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 705, "CVALUE"))))))));
    come_call_finalizer3(right_value298,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value299,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj101=come_value_215->c_value;
    come_value_215->c_value=(char*)come_increment_ref_count(((char*)(right_value300=buffer_to_string(buf_202))));
    __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value300 = come_decrement_ref_count2(right_value300, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj102=come_value_215->type;
    come_value_215->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value301=sType_clone(element_type_204))));
    come_call_finalizer3(__dec_obj102,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value301,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_215->type->mPointerNum++;
    come_value_215->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_215));
    __result134__ = (_Bool)1;
    come_call_finalizer3(initializer_201,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_202,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_type_204,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_215,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result134__;
    come_call_finalizer3(initializer_201,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_202,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_type_204,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_215,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephphp_clone(struct list$1tuple2$2sNodephsNodephph* self){
void* __result_obj__;
struct list$1tuple2$2sNodephsNodephph* __result118__;
void* right_value281;
void* right_value282;
struct list$1tuple2$2sNodephsNodephph* result_193;
struct list_item$1tuple2$2sNodephsNodephph* it_194;
void* right_value289;
struct list$1tuple2$2sNodephsNodephph* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value281 = (void*)0;
right_value282 = (void*)0;
memset(&result_193, 0, sizeof(struct list$1tuple2$2sNodephsNodephph*));
memset(&it_194, 0, sizeof(struct list_item$1tuple2$2sNodephsNodephph*));
right_value289 = (void*)0;
        if(self==((void*)0)) {
            __result118__ = __result_obj__ = ((void*)0);
            return __result118__;
        }
        result_193=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list$1tuple2$2sNodephsNodephph*)(right_value282=list$1tuple2$2sNodephsNodephph_initialize((struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list$1tuple2$2sNodephsNodephph*)(right_value281=(struct list$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2sNodephsNodephph)*(1), "./neo-c.h", 135, "list$1tuple2$2sNodephsNodephph"))))))));
        come_call_finalizer3(right_value281,list$1tuple2$2sNodephsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value282,list$1tuple2$2sNodephsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        it_194=self->head;
        while(it_194!=((void*)0)) {
            list$1tuple2$2sNodephsNodephph_add(result_193,(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(((struct tuple2$2sNodephsNodeph*)(right_value289=tuple2$2sNodephsNodephp_clone(it_194->item)))));
            come_call_finalizer3(right_value289,tuple2$2sNodephsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            it_194=it_194->next;
        }
        __result123__ = __result_obj__ = result_193;
        come_call_finalizer3(result_193,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result123__;
        come_call_finalizer3(result_193,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephph_initialize(struct list$1tuple2$2sNodephsNodephph* self){
void* __result_obj__;
struct list$1tuple2$2sNodephsNodephph* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result119__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result119__;
            come_call_finalizer3(self,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple2$2sNodephsNodephphp_finalize(struct list$1tuple2$2sNodephsNodephph* self){
struct list_item$1tuple2$2sNodephsNodephph* it_191;
struct list_item$1tuple2$2sNodephsNodephph* prev_it_192;
memset(&it_191, 0, sizeof(struct list_item$1tuple2$2sNodephsNodephph*));
memset(&prev_it_192, 0, sizeof(struct list_item$1tuple2$2sNodephsNodephph*));
                it_191=self->head;
                while(it_191!=((void*)0)) {
                    prev_it_192=it_191;
                    it_191=it_191->next;
                    come_call_finalizer3(prev_it_192,list_item$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2sNodephsNodephphp_finalize(struct list_item$1tuple2$2sNodephsNodephph* self){
                        if(self!=((void*)0)&&self->item!=((void*)0)) {
                            come_call_finalizer3(self->item,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephph_add(struct list$1tuple2$2sNodephsNodephph* self, struct tuple2$2sNodephsNodeph* item){
void* __result_obj__;
void* right_value283;
struct list_item$1tuple2$2sNodephsNodephph* litem_195;
struct tuple2$2sNodephsNodeph* __dec_obj91;
void* right_value284;
struct list_item$1tuple2$2sNodephsNodephph* litem_196;
struct tuple2$2sNodephsNodeph* __dec_obj92;
void* right_value285;
struct list_item$1tuple2$2sNodephsNodephph* litem_197;
struct tuple2$2sNodephsNodeph* __dec_obj93;
struct list$1tuple2$2sNodephsNodephph* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
right_value283 = (void*)0;
memset(&litem_195, 0, sizeof(struct list_item$1tuple2$2sNodephsNodephph*));
right_value284 = (void*)0;
memset(&litem_196, 0, sizeof(struct list_item$1tuple2$2sNodephsNodephph*));
right_value285 = (void*)0;
memset(&litem_197, 0, sizeof(struct list_item$1tuple2$2sNodephsNodephph*));
                if(self->len==0) {
                    litem_195=(struct list_item$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2sNodephsNodephph*)(right_value283=(struct list_item$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNodephsNodephph)*(1), "./neo-c.h", 149, "list_item$1tuple2$2sNodephsNodephph"))));
                    come_call_finalizer3(right_value283,list_item$1tuple2$2sNodephsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_195->prev=((void*)0);
                    litem_195->next=((void*)0);
                    __dec_obj91=litem_195->item;
                    litem_195->item=(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj91,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_195;
                    self->head=litem_195;
                }
                else {
                    if(self->len==1) {
                        litem_196=(struct list_item$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2sNodephsNodephph*)(right_value284=(struct list_item$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNodephsNodephph)*(1), "./neo-c.h", 159, "list_item$1tuple2$2sNodephsNodephph"))));
                        come_call_finalizer3(right_value284,list_item$1tuple2$2sNodephsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_196->prev=self->head;
                        litem_196->next=((void*)0);
                        __dec_obj92=litem_196->item;
                        litem_196->item=(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj92,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_196;
                        self->head->next=litem_196;
                    }
                    else {
                        litem_197=(struct list_item$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2sNodephsNodephph*)(right_value285=(struct list_item$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNodephsNodephph)*(1), "./neo-c.h", 169, "list_item$1tuple2$2sNodephsNodephph"))));
                        come_call_finalizer3(right_value285,list_item$1tuple2$2sNodephsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_197->prev=self->tail;
                        litem_197->next=((void*)0);
                        __dec_obj93=litem_197->item;
                        litem_197->item=(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj93,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_197;
                        self->tail=litem_197;
                    }
                }
                self->len++;
                __result120__ = __result_obj__ = self;
                come_call_finalizer3(item,tuple2$2sNodephsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result120__;
                come_call_finalizer3(item,tuple2$2sNodephsNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2sNodephsNodephp_finalize(struct tuple2$2sNodephsNodeph* self){
                            if(self!=((void*)0)&&self->v1!=((void*)0)) {
                                if(self->v1) { self->v1 = come_decrement_ref_count2(self->v1, ((struct sNode*)self->v1)->finalize, ((struct sNode*)self->v1)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(self!=((void*)0)&&self->v2!=((void*)0)) {
                                if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct tuple2$2sNodephsNodeph* tuple2$2sNodephsNodephp_clone(struct tuple2$2sNodephsNodeph* self){
void* __result_obj__;
struct tuple2$2sNodephsNodeph* __result121__;
void* right_value286;
struct tuple2$2sNodephsNodeph* result_198;
void* right_value287;
struct sNode* __dec_obj94;
void* right_value288;
struct sNode* __dec_obj95;
struct tuple2$2sNodephsNodeph* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
right_value286 = (void*)0;
memset(&result_198, 0, sizeof(struct tuple2$2sNodephsNodeph*));
right_value287 = (void*)0;
right_value288 = (void*)0;
                if(self==(void*)0) {
                    __result121__ = __result_obj__ = (void*)0;
                    return __result121__;
                }
                result_198=(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(((struct tuple2$2sNodephsNodeph*)(right_value286=(struct tuple2$2sNodephsNodeph*)come_calloc(1, sizeof(struct tuple2$2sNodephsNodeph)*(1), "tuple2$2sNodephsNodephp_clone", 3, "tuple2$2sNodephsNodeph"))));
                come_call_finalizer3(right_value286,tuple2$2sNodephsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                    __dec_obj94=result_198->v1;
                    result_198->v1=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value287=sNode_clone(self->v1))));
                    if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count2(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value287) { right_value287 = come_decrement_ref_count2(right_value287, ((struct sNode*)right_value287)->finalize, ((struct sNode*)right_value287)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(self!=((void*)0)&&self->v2!=((void*)0)) {
                    __dec_obj95=result_198->v2;
                    result_198->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value288=sNode_clone(self->v2))));
                    if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count2(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value288) { right_value288 = come_decrement_ref_count2(right_value288, ((struct sNode*)right_value288)->finalize, ((struct sNode*)right_value288)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                __result122__ = __result_obj__ = result_198;
                come_call_finalizer3(result_198,tuple2$2sNodephsNodeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result122__;
                come_call_finalizer3(result_198,tuple2$2sNodephsNodeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2sNodephsNodeph_finalize(struct tuple2$2sNodephsNodeph* self){
                    if(self!=((void*)0)&&self->v1!=((void*)0)) {
                        if(self->v1) { self->v1 = come_decrement_ref_count2(self->v1, ((struct sNode*)self->v1)->finalize, ((struct sNode*)self->v1)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(self!=((void*)0)&&self->v2!=((void*)0)) {
                        if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
}

static void list$1tuple2$2sNodephsNodephph_finalize(struct list$1tuple2$2sNodephsNodephph* self){
struct list_item$1tuple2$2sNodephsNodephph* it_199;
struct list_item$1tuple2$2sNodephsNodephph* prev_it_200;
memset(&it_199, 0, sizeof(struct list_item$1tuple2$2sNodephsNodephph*));
memset(&prev_it_200, 0, sizeof(struct list_item$1tuple2$2sNodephsNodephph*));
        it_199=self->head;
        while(it_199!=((void*)0)) {
            prev_it_200=it_199;
            it_199=it_199->next;
            come_call_finalizer3(prev_it_200,list_item$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct tuple2$2sNodephsNodeph* list$1tuple2$2sNodephsNodephph_begin(struct list$1tuple2$2sNodephsNodephph* self){
void* __result_obj__;
struct tuple2$2sNodephsNodeph* result_206;
struct tuple2$2sNodephsNodeph* __result126__;
struct tuple2$2sNodephsNodeph* __result127__;
struct tuple2$2sNodephsNodeph* result_207;
struct tuple2$2sNodephsNodeph* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_206, 0, sizeof(struct tuple2$2sNodephsNodeph*));
memset(&result_207, 0, sizeof(struct tuple2$2sNodephsNodeph*));
        if(self==((void*)0)) {
            memset(&result_206,0,sizeof(struct tuple2$2sNodephsNodeph*));
            __result126__ = __result_obj__ = result_206;
            return __result126__;
        }
        self->it=self->head;
        if(self->it) {
            __result127__ = __result_obj__ = self->it->item;
            return __result127__;
        }
        memset(&result_207,0,sizeof(struct tuple2$2sNodephsNodeph*));
        __result128__ = __result_obj__ = result_207;
        return __result128__;
}

static _Bool list$1tuple2$2sNodephsNodephph_end(struct list$1tuple2$2sNodephsNodephph* self){
        return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2sNodephsNodeph* list$1tuple2$2sNodephsNodephph_next(struct list$1tuple2$2sNodephsNodephph* self){
void* __result_obj__;
struct tuple2$2sNodephsNodeph* result_209;
struct tuple2$2sNodephsNodeph* __result129__;
struct tuple2$2sNodephsNodeph* __result130__;
struct tuple2$2sNodephsNodeph* result_210;
struct tuple2$2sNodephsNodeph* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_209, 0, sizeof(struct tuple2$2sNodephsNodeph*));
memset(&result_210, 0, sizeof(struct tuple2$2sNodephsNodeph*));
        if(self==((void*)0)||self->it==((void*)0)) {
            memset(&result_209,0,sizeof(struct tuple2$2sNodephsNodeph*));
            __result129__ = __result_obj__ = result_209;
            return __result129__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result130__ = __result_obj__ = self->it->item;
            return __result130__;
        }
        memset(&result_210,0,sizeof(struct tuple2$2sNodephsNodeph*));
        __result131__ = __result_obj__ = result_210;
        return __result131__;
}

static int list$1tuple2$2sNodephsNodephph_length(struct list$1tuple2$2sNodephsNodephph* self){
            if(self==((void*)0)) {
                return 0;
            }
            return self->len;
}

struct sNode* parse_array_initializer(struct sInfo* info){
void* __result_obj__;
void* right_value302;
void* right_value303;
struct list$1tuple2$2sNodephsNodephph* initializer_216;
void* right_value304;
struct sNode* index_217;
_Bool no_comma_218;
void* right_value305;
struct sNode* exp_219;
void* right_value306;
void* right_value307;
_Bool no_comma_220;
void* right_value308;
struct sNode* exp_221;
void* right_value309;
void* right_value310;
void* right_value311;
struct sNode* index_222;
_Bool no_comma_223;
void* right_value312;
struct sNode* exp_224;
void* right_value313;
void* right_value314;
_Bool no_comma_225;
void* right_value315;
struct sNode* exp_226;
void* right_value316;
void* right_value317;
void* right_value318;
void* right_value319;
struct sNode* _inf_value1;
struct sArrayInitializer* _inf_obj_value1;
void* right_value323;
struct sNode* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
right_value302 = (void*)0;
right_value303 = (void*)0;
memset(&initializer_216, 0, sizeof(struct list$1tuple2$2sNodephsNodephph*));
right_value304 = (void*)0;
memset(&index_217, 0, sizeof(struct sNode*));
memset(&no_comma_218, 0, sizeof(_Bool));
right_value305 = (void*)0;
memset(&exp_219, 0, sizeof(struct sNode*));
right_value306 = (void*)0;
right_value307 = (void*)0;
memset(&no_comma_220, 0, sizeof(_Bool));
right_value308 = (void*)0;
memset(&exp_221, 0, sizeof(struct sNode*));
right_value309 = (void*)0;
right_value310 = (void*)0;
right_value311 = (void*)0;
memset(&index_222, 0, sizeof(struct sNode*));
memset(&no_comma_223, 0, sizeof(_Bool));
right_value312 = (void*)0;
memset(&exp_224, 0, sizeof(struct sNode*));
right_value313 = (void*)0;
right_value314 = (void*)0;
memset(&no_comma_225, 0, sizeof(_Bool));
right_value315 = (void*)0;
memset(&exp_226, 0, sizeof(struct sNode*));
right_value316 = (void*)0;
right_value317 = (void*)0;
right_value318 = (void*)0;
right_value319 = (void*)0;
right_value323 = (void*)0;
    expected_next_character(123,info);
    initializer_216=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list$1tuple2$2sNodephsNodephph*)(right_value303=list$1tuple2$2sNodephsNodephph_initialize((struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list$1tuple2$2sNodephsNodephph*)(right_value302=(struct list$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2sNodephsNodephph)*(1), "07var.c", 723, "list$1tuple2$2sNodephsNodephph"))))))));
    come_call_finalizer3(right_value302,list$1tuple2$2sNodephsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value303,list$1tuple2$2sNodephsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    if(*info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        index_217=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value304=expression_v13(info))));
        if(right_value304) { right_value304 = come_decrement_ref_count2(right_value304, ((struct sNode*)right_value304)->finalize, ((struct sNode*)right_value304)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        expected_next_character(93,info);
        expected_next_character(61,info);
        no_comma_218=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_219=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value305=expression_v13(info))));
        if(right_value305) { right_value305 = come_decrement_ref_count2(right_value305, ((struct sNode*)right_value305)->finalize, ((struct sNode*)right_value305)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        info->no_comma=no_comma_218;
        list$1tuple2$2sNodephsNodephph_add(initializer_216,(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(((struct tuple2$2sNodephsNodeph*)(right_value307=tuple2$2sNodephsNodeph_initialize((struct tuple2$2sNodephsNodeph*)come_increment_ref_count(((struct tuple2$2sNodephsNodeph*)(right_value306=(struct tuple2$2sNodephsNodeph*)come_calloc(1, sizeof(struct tuple2$2sNodephsNodeph)*(1), "07var.c", 739, "struct tuple2$2sNodephsNodeph")))),(struct sNode*)come_increment_ref_count(index_217),(struct sNode*)come_increment_ref_count(exp_219))))));
        come_call_finalizer3(right_value306,tuple2$2sNodephsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value307,tuple2$2sNodephsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        if(index_217) { index_217 = come_decrement_ref_count2(index_217, ((struct sNode*)index_217)->finalize, ((struct sNode*)index_217)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(exp_219) { exp_219 = come_decrement_ref_count2(exp_219, ((struct sNode*)exp_219)->finalize, ((struct sNode*)exp_219)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else {
        no_comma_220=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_221=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value308=expression_v13(info))));
        if(right_value308) { right_value308 = come_decrement_ref_count2(right_value308, ((struct sNode*)right_value308)->finalize, ((struct sNode*)right_value308)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        info->no_comma=no_comma_220;
        list$1tuple2$2sNodephsNodephph_add(initializer_216,(struct tuple2$2voidpsNodeph*)come_increment_ref_count(((struct tuple2$2voidpsNodeph*)(right_value310=tuple2$2voidpsNodeph_initialize((struct tuple2$2voidpsNodeph*)come_increment_ref_count(((struct tuple2$2voidpsNodeph*)(right_value309=(struct tuple2$2voidpsNodeph*)come_calloc(1, sizeof(struct tuple2$2voidpsNodeph)*(1), "07var.c", 747, "struct tuple2$2voidpsNodeph")))),((void*)0),(struct sNode*)come_increment_ref_count(exp_221))))));
        right_value309 = come_decrement_ref_count2(right_value309, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value310,tuple2$2voidpsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        if(exp_221) { exp_221 = come_decrement_ref_count2(exp_221, ((struct sNode*)exp_221)->finalize, ((struct sNode*)exp_221)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    while(*info->p==44) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        if(*info->p==125) {
            break;
        }
        if(*info->p==91) {
            info->p++;
            skip_spaces_and_lf(info);
            index_222=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value311=expression_v13(info))));
            if(right_value311) { right_value311 = come_decrement_ref_count2(right_value311, ((struct sNode*)right_value311)->finalize, ((struct sNode*)right_value311)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            expected_next_character(93,info);
            expected_next_character(61,info);
            no_comma_223=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_224=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value312=expression_v13(info))));
            if(right_value312) { right_value312 = come_decrement_ref_count2(right_value312, ((struct sNode*)right_value312)->finalize, ((struct sNode*)right_value312)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            info->no_comma=no_comma_223;
            list$1tuple2$2sNodephsNodephph_add(initializer_216,(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(((struct tuple2$2sNodephsNodeph*)(right_value314=tuple2$2sNodephsNodeph_initialize((struct tuple2$2sNodephsNodeph*)come_increment_ref_count(((struct tuple2$2sNodephsNodeph*)(right_value313=(struct tuple2$2sNodephsNodeph*)come_calloc(1, sizeof(struct tuple2$2sNodephsNodeph)*(1), "07var.c", 774, "struct tuple2$2sNodephsNodeph")))),(struct sNode*)come_increment_ref_count(index_222),(struct sNode*)come_increment_ref_count(exp_224))))));
            come_call_finalizer3(right_value313,tuple2$2sNodephsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value314,tuple2$2sNodephsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            if(index_222) { index_222 = come_decrement_ref_count2(index_222, ((struct sNode*)index_222)->finalize, ((struct sNode*)index_222)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp_224) { exp_224 = come_decrement_ref_count2(exp_224, ((struct sNode*)exp_224)->finalize, ((struct sNode*)exp_224)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            no_comma_225=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_226=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value315=expression_v13(info))));
            if(right_value315) { right_value315 = come_decrement_ref_count2(right_value315, ((struct sNode*)right_value315)->finalize, ((struct sNode*)right_value315)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            info->no_comma=no_comma_225;
            list$1tuple2$2sNodephsNodephph_add(initializer_216,(struct tuple2$2voidpsNodeph*)come_increment_ref_count(((struct tuple2$2voidpsNodeph*)(right_value317=tuple2$2voidpsNodeph_initialize((struct tuple2$2voidpsNodeph*)come_increment_ref_count(((struct tuple2$2voidpsNodeph*)(right_value316=(struct tuple2$2voidpsNodeph*)come_calloc(1, sizeof(struct tuple2$2voidpsNodeph)*(1), "07var.c", 782, "struct tuple2$2voidpsNodeph")))),((void*)0),(struct sNode*)come_increment_ref_count(exp_226))))));
            right_value316 = come_decrement_ref_count2(right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value317,tuple2$2voidpsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            if(exp_226) { exp_226 = come_decrement_ref_count2(exp_226, ((struct sNode*)exp_226)->finalize, ((struct sNode*)exp_226)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    expected_next_character(125,info);
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 788, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sArrayInitializer*)(right_value319=sArrayInitializer_initialize((struct sArrayInitializer*)come_increment_ref_count(((struct sArrayInitializer*)(right_value318=(struct sArrayInitializer*)come_calloc(1, sizeof(struct sArrayInitializer)*(1), "07var.c", 788, "sArrayInitializer")))),(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(initializer_216),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sArrayInitializer_finalize;
    _inf_value1->clone=(void*)sArrayInitializer_clone;
    _inf_value1->compile=(void*)sArrayInitializer_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sArrayInitializer_kind;
    __result139__ = __result_obj__ = ((struct sNode*)(right_value323=_inf_value1));
    come_call_finalizer3(initializer_216,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value318,sArrayInitializer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value319,sArrayInitializer_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value323) { right_value323 = come_decrement_ref_count2(right_value323, ((struct sNode*)right_value323)->finalize, ((struct sNode*)right_value323)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result139__;
    come_call_finalizer3(initializer_216,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2sNodephsNodeph* tuple2$2sNodephsNodeph_initialize(struct tuple2$2sNodephsNodeph* self, struct sNode* v1, struct sNode* v2){
void* __result_obj__;
struct sNode* __dec_obj103;
struct sNode* __dec_obj104;
struct tuple2$2sNodephsNodeph* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
            __dec_obj103=self->v1;
            self->v1=(struct sNode*)come_increment_ref_count(v1);
            if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count2(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0,0, (void*)0); }
            __dec_obj104=self->v2;
            self->v2=(struct sNode*)come_increment_ref_count(v2);
            if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count2(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0,0,0, (void*)0); }
            __result135__ = __result_obj__ = self;
            come_call_finalizer3(self,tuple2$2sNodephsNodephp_finalize, 0, 0, 1, 0, (void*)0);
            if(v1) { v1 = come_decrement_ref_count2(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0, (void*)0); } 
            if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result135__;
            come_call_finalizer3(self,tuple2$2sNodephsNodephp_finalize, 0, 0, 1, 0, (void*)0);
            if(v1) { v1 = come_decrement_ref_count2(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0, (void*)0); } 
            if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct tuple2$2voidpsNodeph* tuple2$2voidpsNodeph_initialize(struct tuple2$2voidpsNodeph* self, void* v1, struct sNode* v2){
void* __result_obj__;
struct sNode* __dec_obj105;
struct tuple2$2voidpsNodeph* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
            self->v1=v1;
            __dec_obj105=self->v2;
            self->v2=(struct sNode*)come_increment_ref_count(v2);
            if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count2(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0, (void*)0); }
            __result136__ = __result_obj__ = self;
            come_call_finalizer3(self,tuple2$2voidpsNodephp_finalize, 0, 0, 1, 0, (void*)0);
            if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result136__;
            come_call_finalizer3(self,tuple2$2voidpsNodephp_finalize, 0, 0, 1, 0, (void*)0);
            if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void tuple2$2voidpsNodephp_finalize(struct tuple2$2voidpsNodeph* self){
                if(self!=((void*)0)&&self->v2!=((void*)0)) {
                    if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
}

static void sArrayInitializer_finalize(struct sArrayInitializer* self){
        if(self!=((void*)0)&&self->sname!=((void*)0)) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->initializer!=((void*)0)) {
            come_call_finalizer3(self->initializer,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct sArrayInitializer* sArrayInitializer_clone(struct sArrayInitializer* self){
void* __result_obj__;
struct sArrayInitializer* __result137__;
void* right_value320;
struct sArrayInitializer* result_227;
void* right_value321;
char* __dec_obj106;
void* right_value322;
struct list$1tuple2$2sNodephsNodephph* __dec_obj107;
struct sArrayInitializer* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
right_value320 = (void*)0;
memset(&result_227, 0, sizeof(struct sArrayInitializer*));
right_value321 = (void*)0;
right_value322 = (void*)0;
        if(self==(void*)0) {
            __result137__ = __result_obj__ = (void*)0;
            return __result137__;
        }
        result_227=(struct sArrayInitializer*)come_increment_ref_count(((struct sArrayInitializer*)(right_value320=(struct sArrayInitializer*)come_calloc(1, sizeof(struct sArrayInitializer)*(1), "sArrayInitializer_clone", 3, "sArrayInitializer"))));
        come_call_finalizer3(right_value320,sArrayInitializer_finalize, 0, 1, 0, 0, __result_obj__);
        if(self!=((void*)0)) {
            result_227->sline=self->sline;
        }
        if(self!=((void*)0)&&self->sname!=((void*)0)) {
            __dec_obj106=result_227->sname;
            result_227->sname=(char*)come_increment_ref_count(((char*)(right_value321=string_clone(self->sname))));
            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value321 = come_decrement_ref_count2(right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->initializer!=((void*)0)) {
            __dec_obj107=result_227->initializer;
            result_227->initializer=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list$1tuple2$2sNodephsNodephph*)(right_value322=list$1tuple2$2sNodephsNodephphp_clone(self->initializer))));
            come_call_finalizer3(__dec_obj107,list$1tuple2$2sNodephsNodephph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value322,list$1tuple2$2sNodephsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        __result138__ = __result_obj__ = result_227;
        come_call_finalizer3(result_227,sArrayInitializer_finalize, 0, 0, 1, 0, (void*)0);
        return __result138__;
        come_call_finalizer3(result_227,sArrayInitializer_finalize, 0, 0, 0, 0, (void*)0);
}

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info){
void* right_value324;
struct sVar* self_228;
void* right_value325;
char* __dec_obj108;
void* right_value326;
struct sType* __dec_obj109;
void* right_value327;
char* __dec_obj110;
void* right_value328;
char* __dec_obj111;
void* right_value329;
char* __dec_obj112;
char* __dec_obj113;
void* right_value336;
right_value324 = (void*)0;
memset(&self_228, 0, sizeof(struct sVar*));
right_value325 = (void*)0;
right_value326 = (void*)0;
right_value327 = (void*)0;
right_value328 = (void*)0;
right_value329 = (void*)0;
right_value336 = (void*)0;
    self_228=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value324=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 793, "sVar"))));
    come_call_finalizer3(right_value324,sVar_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj108=self_228->mName;
    self_228->mName=(char*)come_increment_ref_count(((char*)(right_value325=__builtin_string(name))));
    __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value325 = come_decrement_ref_count2(right_value325, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj109=self_228->mType;
    self_228->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value326=sType_clone(type))));
    come_call_finalizer3(__dec_obj109,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value326,sType_finalize, 0, 1, 0, 0, (void*)0);
    if(type->mFunctionParam) {
        __dec_obj110=self_228->mCValueName;
        self_228->mCValueName=(char*)come_increment_ref_count(((char*)(right_value327=__builtin_string(name))));
        __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value327 = come_decrement_ref_count2(right_value327, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    else {
        static int n_229=0;
        __dec_obj111=self_228->mCValueName;
        self_228->mCValueName=(char*)come_increment_ref_count(((char*)(right_value328=xsprintf("%s_%d",name,n_229++))));
        __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value328 = come_decrement_ref_count2(right_value328, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    self_228->mBlockLevel=info->block_level;
    self_228->mAllocaValue=(_Bool)0;
    self_228->mFunctionParam=(_Bool)0;
    self_228->mNoFree=(_Bool)0;
    if(info->come_fun) {
        __dec_obj112=self_228->mFunName;
        self_228->mFunName=(char*)come_increment_ref_count(((char*)(right_value329=string_clone(info->come_fun->mName))));
        __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value329 = come_decrement_ref_count2(right_value329, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    else {
        __dec_obj113=self_228->mFunName;
        self_228->mFunName=((void*)0);
        __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    map$2charphsVarph_insert(info->lv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value336=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_228));
    right_value336 = come_decrement_ref_count2(right_value336, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(self_228,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
unsigned int hash_247;
unsigned int it_248;
_Bool same_key_exist_265;
char* it2_268;
struct map$2charphsVarph* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_247, 0, sizeof(unsigned int));
memset(&it_248, 0, sizeof(unsigned int));
memset(&same_key_exist_265, 0, sizeof(_Bool));
memset(&it2_268, 0, sizeof(char*));
        if(self->len*10>=self->size) {
            map$2charphsVarph_rehash(self);
        }
        hash_247=string_get_hash_key(key)%self->size;
        it_248=hash_247;
        while((_Bool)1) {
            if(self->item_existance[it_248]) {
                if(string_equals(self->keys[it_248],key)) {
                    if(1) {
                        list$1charp_remove(self->key_list,self->keys[it_248]);
                        self->keys[it_248] = come_decrement_ref_count2(self->keys[it_248], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        self->keys[it_248]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charp_remove(self->key_list,self->keys[it_248]);
                        self->keys[it_248]=key;
                    }
                    if(1) {
                        come_call_finalizer3(self->items[it_248],sVar_finalize, 0, 0, 0, 0, (void*)0);
                        self->items[it_248]=(struct sVar*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_248]=item;
                    }
                    break;
                }
                it_248++;
                if(it_248>=self->size) {
                    it_248=0;
                }
                else {
                    if(it_248==hash_247) {
                        printf("unexpected error in map.insert\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                self->item_existance[it_248]=(_Bool)1;
                if(1) {
                    self->keys[it_248]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_248]=key;
                }
                if(1) {
                    self->items[it_248]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_248]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_265=(_Bool)0;
        for(        it2_268=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_268=list$1charp_next(self->key_list)        ){
            if(string_equals(it2_268,key)) {
                same_key_exist_265=(_Bool)1;
            }
        }
        if(!same_key_exist_265) {
            list$1charp_push_back(self->key_list,key);
        }
        __result161__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
        return __result161__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_230;
void* right_value330;
char** keys_231;
void* right_value331;
struct sVar** items_232;
void* right_value332;
_Bool* item_existance_233;
int len_234;
char* it_237;
struct sVar* default_value_240;
struct sVar* it2_241;
unsigned int hash_244;
int n_245;
struct sVar* default_value_246;
memset(&size_230, 0, sizeof(int));
right_value330 = (void*)0;
memset(&keys_231, 0, sizeof(char**));
right_value331 = (void*)0;
memset(&items_232, 0, sizeof(struct sVar**));
right_value332 = (void*)0;
memset(&item_existance_233, 0, sizeof(_Bool*));
memset(&len_234, 0, sizeof(int));
memset(&it_237, 0, sizeof(char*));
memset(&default_value_240, 0, sizeof(struct sVar*));
memset(&it2_241, 0, sizeof(struct sVar*));
memset(&hash_244, 0, sizeof(unsigned int));
memset(&n_245, 0, sizeof(int));
memset(&default_value_246, 0, sizeof(struct sVar*));
                size_230=self->size*10;
                keys_231=(char**)come_increment_ref_count(((char**)(right_value330=(char**)come_calloc(1, sizeof(char*)*(1*(size_230)), "./neo-c.h", 1315, "char*%"))));
                right_value330 = come_decrement_ref_count2(right_value330, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                items_232=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value331=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_230)), "./neo-c.h", 1316, "sVar*%"))));
                come_call_finalizer3(right_value331,sVar_finalize, 0, 1, 0, 0, (void*)0);
                item_existance_233=(_Bool*)come_increment_ref_count(((_Bool*)(right_value332=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_230)), "./neo-c.h", 1317, "bool"))));
                right_value332 = come_decrement_ref_count2(right_value332, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                len_234=0;
                for(                it_237=map$2charphsVarph_begin(self);                !map$2charphsVarph_end(self);                it_237=map$2charphsVarph_next(self)                ){
                    memset(&default_value_240,0,sizeof(struct sVar*));
                    it2_241=map$2charphsVarph_at(self,it_237,default_value_240);
                    hash_244=string_get_hash_key(it_237)%size_230;
                    n_245=hash_244;
                    while((_Bool)1) {
                        if(item_existance_233[n_245]) {
                            n_245++;
                            if(n_245>=size_230) {
                                n_245=0;
                            }
                            else {
                                if(n_245==hash_244) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    stackframe();
                                    exit(2);
                                }
                            }
                        }
                        else {
                            item_existance_233[n_245]=(_Bool)1;
                            keys_231[n_245]=it_237;
                            items_232[n_245]=map$2charphsVarph_at(self,it_237,default_value_246);
                            len_234++;
                            break;
                        }
                    }
                }
                come_free((char*)self->items);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_free((char*)self->keys);
                self->keys=keys_231;
                self->items=items_232;
                self->item_existance=item_existance_233;
                self->size=size_230;
                self->len=len_234;
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
char* result_235;
char* __result140__;
char* __result141__;
char* result_236;
char* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_235, 0, sizeof(char*));
memset(&result_236, 0, sizeof(char*));
                    if(self==((void*)0)) {
                        memset(&result_235,0,sizeof(char*));
                        __result140__ = __result_obj__ = result_235;
                        return __result140__;
                    }
                    self->key_list->it=self->key_list->head;
                    if(self->key_list->it) {
                        __result141__ = __result_obj__ = self->key_list->it->item;
                        return __result141__;
                    }
                    memset(&result_236,0,sizeof(char*));
                    __result142__ = __result_obj__ = result_236;
                    return __result142__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
                    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
char* result_238;
char* __result143__;
char* __result144__;
char* result_239;
char* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_238, 0, sizeof(char*));
memset(&result_239, 0, sizeof(char*));
                    if(self==((void*)0)||self->key_list->it==((void*)0)) {
                        memset(&result_238,0,sizeof(char*));
                        __result143__ = __result_obj__ = result_238;
                        return __result143__;
                    }
                    self->key_list->it=self->key_list->it->next;
                    if(self->key_list->it) {
                        __result144__ = __result_obj__ = self->key_list->it->item;
                        return __result144__;
                    }
                    memset(&result_239,0,sizeof(char*));
                    __result145__ = __result_obj__ = result_239;
                    return __result145__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_242;
unsigned int it_243;
struct sVar* __result146__;
struct sVar* __result147__;
struct sVar* __result148__;
struct sVar* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_242, 0, sizeof(unsigned int));
memset(&it_243, 0, sizeof(unsigned int));
                        hash_242=string_get_hash_key(((char*)key))%self->size;
                        it_243=hash_242;
                        while((_Bool)1) {
                            if(self->item_existance[it_243]) {
                                if(string_equals(self->keys[it_243],key)) {
                                    __result146__ = __result_obj__ = self->items[it_243];
                                    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result146__;
                                }
                                it_243++;
                                if(it_243>=self->size) {
                                    it_243=0;
                                }
                                else {
                                    if(it_243==hash_242) {
                                        __result147__ = __result_obj__ = default_value;
                                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result147__;
                                    }
                                }
                            }
                            else {
                                __result148__ = __result_obj__ = default_value;
                                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                return __result148__;
                            }
                        }
                        __result149__ = __result_obj__ = default_value;
                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                        return __result149__;
                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_249;
struct list_item$1charp* it_250;
struct list$1charp* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_249, 0, sizeof(int));
memset(&it_250, 0, sizeof(struct list_item$1charp*));
                            it2_249=0;
                            it_250=self->head;
                            while(it_250!=((void*)0)) {
                                if(string_equals(it_250->item,item)) {
                                    list$1charp_delete(self,it2_249,it2_249+1);
                                    break;
                                }
                                it2_249++;
                                it_250=it_250->next;
                            }
                            __result153__ = __result_obj__ = self;
                            return __result153__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
int tmp_251;
struct list$1charp* __result150__;
struct list_item$1charp* it_254;
int i_255;
struct list_item$1charp* prev_it_256;
struct list_item$1charp* it_257;
int i_258;
struct list_item$1charp* prev_it_259;
struct list_item$1charp* it_260;
struct list_item$1charp* head_prev_it_261;
struct list_item$1charp* tail_it_262;
int i_263;
struct list_item$1charp* prev_it_264;
struct list$1charp* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_251, 0, sizeof(int));
memset(&it_254, 0, sizeof(struct list_item$1charp*));
memset(&i_255, 0, sizeof(int));
memset(&prev_it_256, 0, sizeof(struct list_item$1charp*));
memset(&it_257, 0, sizeof(struct list_item$1charp*));
memset(&i_258, 0, sizeof(int));
memset(&prev_it_259, 0, sizeof(struct list_item$1charp*));
memset(&it_260, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_261, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_262, 0, sizeof(struct list_item$1charp*));
memset(&i_263, 0, sizeof(int));
memset(&prev_it_264, 0, sizeof(struct list_item$1charp*));
                                        if(head<0) {
                                            head+=self->len;
                                        }
                                        if(tail<0) {
                                            tail+=self->len+1;
                                        }
                                        if(head>tail) {
                                            tmp_251=tail;
                                            tail=head;
                                            head=tmp_251;
                                        }
                                        if(head<0) {
                                            head=0;
                                        }
                                        if(tail>self->len) {
                                            tail=self->len;
                                        }
                                        if(head==tail) {
                                            __result150__ = __result_obj__ = self;
                                            return __result150__;
                                        }
                                        if(head==0&&tail==self->len) {
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            if(head==0) {
                                                it_254=self->head;
                                                i_255=0;
                                                while(it_254!=((void*)0)) {
                                                    if(i_255<tail) {
                                                        prev_it_256=it_254;
                                                        it_254=it_254->next;
                                                        i_255++;
                                                        come_call_finalizer3(prev_it_256,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                        self->len--;
                                                    }
                                                    else {
                                                        if(i_255==tail) {
                                                            self->head=it_254;
                                                            self->head->prev=((void*)0);
                                                            break;
                                                        }
                                                        else {
                                                            it_254=it_254->next;
                                                            i_255++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                if(tail==self->len) {
                                                    it_257=self->head;
                                                    i_258=0;
                                                    while(it_257!=((void*)0)) {
                                                        if(i_258==head) {
                                                            self->tail=it_257->prev;
                                                            self->tail->next=((void*)0);
                                                        }
                                                        if(i_258>=head) {
                                                            prev_it_259=it_257;
                                                            it_257=it_257->next;
                                                            i_258++;
                                                            come_call_finalizer3(prev_it_259,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_257=it_257->next;
                                                            i_258++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    it_260=self->head;
                                                    head_prev_it_261=((void*)0);
                                                    tail_it_262=((void*)0);
                                                    i_263=0;
                                                    while(it_260!=((void*)0)) {
                                                        if(i_263==head) {
                                                            head_prev_it_261=it_260->prev;
                                                        }
                                                        if(i_263==tail) {
                                                            tail_it_262=it_260;
                                                        }
                                                        if(i_263>=head&&i_263<tail) {
                                                            prev_it_264=it_260;
                                                            it_260=it_260->next;
                                                            i_263++;
                                                            come_call_finalizer3(prev_it_264,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_260=it_260->next;
                                                            i_263++;
                                                        }
                                                    }
                                                    if(head_prev_it_261!=((void*)0)) {
                                                        head_prev_it_261->next=tail_it_262;
                                                    }
                                                    if(tail_it_262!=((void*)0)) {
                                                        tail_it_262->prev=head_prev_it_261;
                                                    }
                                                }
                                            }
                                        }
                                        __result152__ = __result_obj__ = self;
                                        return __result152__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_252;
struct list_item$1charp* prev_it_253;
struct list$1charp* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_252, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_253, 0, sizeof(struct list_item$1charp*));
                                                it_252=self->head;
                                                while(it_252!=((void*)0)) {
                                                    prev_it_253=it_252;
                                                    it_252=it_252->next;
                                                    come_call_finalizer3(prev_it_253,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result151__ = __result_obj__ = self;
                                                return __result151__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
char* result_266;
char* __result154__;
char* __result155__;
char* result_267;
char* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_266, 0, sizeof(char*));
memset(&result_267, 0, sizeof(char*));
            if(self==((void*)0)) {
                memset(&result_266,0,sizeof(char*));
                __result154__ = __result_obj__ = result_266;
                return __result154__;
            }
            self->it=self->head;
            if(self->it) {
                __result155__ = __result_obj__ = self->it->item;
                return __result155__;
            }
            memset(&result_267,0,sizeof(char*));
            __result156__ = __result_obj__ = result_267;
            return __result156__;
}

static _Bool list$1charp_end(struct list$1charp* self){
            return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
char* result_269;
char* __result157__;
char* __result158__;
char* result_270;
char* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_269, 0, sizeof(char*));
memset(&result_270, 0, sizeof(char*));
            if(self==((void*)0)||self->it==((void*)0)) {
                memset(&result_269,0,sizeof(char*));
                __result157__ = __result_obj__ = result_269;
                return __result157__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result158__ = __result_obj__ = self->it->item;
                return __result158__;
            }
            memset(&result_270,0,sizeof(char*));
            __result159__ = __result_obj__ = result_270;
            return __result159__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
void* right_value333;
struct list_item$1charp* litem_271;
void* right_value334;
struct list_item$1charp* litem_272;
void* right_value335;
struct list_item$1charp* litem_273;
struct list$1charp* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
right_value333 = (void*)0;
memset(&litem_271, 0, sizeof(struct list_item$1charp*));
right_value334 = (void*)0;
memset(&litem_272, 0, sizeof(struct list_item$1charp*));
right_value335 = (void*)0;
memset(&litem_273, 0, sizeof(struct list_item$1charp*));
                if(self->len==0) {
                    litem_271=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value333=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 219, "list_item$1charp"))));
                    come_call_finalizer3(right_value333,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_271->prev=((void*)0);
                    litem_271->next=((void*)0);
                    litem_271->item=item;
                    self->tail=litem_271;
                    self->head=litem_271;
                }
                else {
                    if(self->len==1) {
                        litem_272=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value334=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 229, "list_item$1charp"))));
                        come_call_finalizer3(right_value334,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_272->prev=self->head;
                        litem_272->next=((void*)0);
                        litem_272->item=item;
                        self->tail=litem_272;
                        self->head->next=litem_272;
                    }
                    else {
                        litem_273=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value335=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 239, "list_item$1charp"))));
                        come_call_finalizer3(right_value335,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_273->prev=self->tail;
                        litem_273->next=((void*)0);
                        litem_273->item=item;
                        self->tail->next=litem_273;
                        self->tail=litem_273;
                    }
                }
                self->len++;
                __result160__ = __result_obj__ = self;
                return __result160__;
}

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info){
void* right_value337;
struct sVar* self_274;
void* right_value338;
char* __dec_obj114;
void* right_value339;
struct sType* __dec_obj115;
void* right_value340;
char* __dec_obj116;
void* right_value341;
right_value337 = (void*)0;
memset(&self_274, 0, sizeof(struct sVar*));
right_value338 = (void*)0;
right_value339 = (void*)0;
right_value340 = (void*)0;
right_value341 = (void*)0;
    self_274=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value337=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 822, "sVar"))));
    come_call_finalizer3(right_value337,sVar_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj114=self_274->mName;
    self_274->mName=(char*)come_increment_ref_count(((char*)(right_value338=__builtin_string(name))));
    __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value338 = come_decrement_ref_count2(right_value338, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj115=self_274->mType;
    self_274->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value339=sType_clone(type))));
    come_call_finalizer3(__dec_obj115,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value339,sType_finalize, 0, 1, 0, 0, (void*)0);
    self_274->mGlobal=(_Bool)1;
    __dec_obj116=self_274->mCValueName;
    self_274->mCValueName=(char*)come_increment_ref_count(((char*)(right_value340=__builtin_string(name))));
    __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value340 = come_decrement_ref_count2(right_value340, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    self_274->mBlockLevel=info->block_level;
    self_274->mAllocaValue=(_Bool)0;
    self_274->mFunctionParam=(_Bool)0;
    self_274->mNoFree=(_Bool)0;
    map$2charphsVarph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value341=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_274));
    right_value341 = come_decrement_ref_count2(right_value341, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(self_274,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info){
void* right_value342;
struct sVar* self_275;
void* right_value343;
char* __dec_obj117;
void* right_value344;
struct sType* __dec_obj118;
void* right_value345;
char* __dec_obj119;
void* right_value346;
right_value342 = (void*)0;
memset(&self_275, 0, sizeof(struct sVar*));
right_value343 = (void*)0;
right_value344 = (void*)0;
right_value345 = (void*)0;
right_value346 = (void*)0;
    self_275=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value342=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 841, "sVar"))));
    come_call_finalizer3(right_value342,sVar_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj117=self_275->mName;
    self_275->mName=(char*)come_increment_ref_count(((char*)(right_value343=__builtin_string(name))));
    __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value343 = come_decrement_ref_count2(right_value343, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj118=self_275->mType;
    self_275->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value344=sType_clone(type))));
    come_call_finalizer3(__dec_obj118,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value344,sType_finalize, 0, 1, 0, 0, (void*)0);
    self_275->mGlobal=(_Bool)1;
    __dec_obj119=self_275->mCValueName;
    self_275->mCValueName=(char*)come_increment_ref_count(((char*)(right_value345=__builtin_string(c_value))));
    __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value345 = come_decrement_ref_count2(right_value345, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    self_275->mBlockLevel=info->block_level;
    self_275->mAllocaValue=(_Bool)0;
    self_275->mFunctionParam=(_Bool)0;
    self_275->mNoFree=(_Bool)0;
    map$2charphsVarph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value346=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_275));
    right_value346 = come_decrement_ref_count2(right_value346, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(self_275,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool is_type_name_flag_276;
_Bool multiple_declare_277;
char* p_278;
int sline_279;
void* right_value347;
struct tuple3$3sTypephcharphbool* multiple_assign_var3;
struct sType* type_280;
char* name_281;
_Bool err_282;
void* right_value348;
struct tuple2$2sTypephcharph* multiple_assign_var4;
struct sType* type_283;
char* name_284;
void* right_value349;
_Bool no_output_err_285;
_Bool no_comma_286;
_Bool no_output_come_code_287;
void* right_value350;
struct sNode* exp_288;
_Bool attr_define_289;
char* p_290;
int sline_291;
void* right_value351;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* type_292;
char* name_293;
_Bool err_294;
struct sFun* fun_295;
void* right_value352;
char* buf2_296;
struct list$1charph* __dec_obj120;
struct list$1charph* multiple_assign_297;
void* right_value353;
void* right_value354;
struct list$1charph* __dec_obj121;
void* right_value358;
void* right_value359;
char* buf3_301;
void* right_value360;
_Bool no_comma_302;
void* right_value361;
struct sNode* right_value_303;
void* right_value362;
struct sNode* __dec_obj125;
void* right_value363;
void* right_value364;
void* right_value365;
struct sNode* _inf_value2;
struct sStoreNode* _inf_obj_value2;
void* right_value373;
struct sNode* __result165__;
void* right_value374;
void* right_value375;
struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare_305;
void* right_value376;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* base_type_306;
char* name_307;
_Bool err_308;
void* right_value377;
struct tuple2$2sTypephcharph* multiple_assign_var7;
struct sType* type2_309;
char* var_name_310;
_Bool no_comma_311;
void* right_value378;
struct sNode* exp_312;
void* right_value382;
void* right_value383;
void* right_value384;
void* right_value385;
void* right_value386;
struct tuple2$2sTypephcharph* multiple_assign_var8;
struct sType* type2_316;
char* var_name_317;
_Bool no_comma_318;
void* right_value387;
struct sNode* exp_319;
void* right_value388;
void* right_value389;
void* right_value390;
void* right_value391;
struct sNode* __dec_obj140;
struct sNode* right_node_320;
void* right_value392;
char* var_name2_321;
void* right_value393;
void* right_value394;
void* right_value395;
struct sNode* _inf_value3;
struct sStoreNode* _inf_obj_value3;
void* right_value403;
struct sNode* __result171__;
void* right_value404;
struct tuple3$3sTypephcharphbool* multiple_assign_var9;
struct sType* type_323;
char* name_324;
_Bool err_325;
void* right_value405;
char* __dec_obj147;
void* right_value409;
void* right_value410;
void* right_value411;
void* right_value412;
void* right_value413;
struct sNode* _inf_value4;
struct sLoadNode* _inf_obj_value4;
void* right_value417;
struct sNode* self_node_329;
void* right_value418;
struct sNode* right_node_331;
void* right_value419;
struct sNode* __result176__;
void* right_value420;
struct sNode* __result177__;
void* right_value421;
struct sNode* right_value_332;
void* right_value422;
struct sNode* __dec_obj155;
void* right_value423;
void* right_value424;
void* right_value425;
struct sNode* _inf_value5;
struct sStoreNode* _inf_obj_value5;
void* right_value433;
struct sNode* __result180__;
void* right_value434;
void* right_value435;
void* right_value436;
struct sNode* _inf_value6;
struct sLoadNode* _inf_obj_value6;
void* right_value440;
struct sNode* node_334;
void* right_value441;
struct sNode* __dec_obj164;
struct sNode* __result183__;
char* word_336;
void* right_value442;
char* __dec_obj165;
void* right_value443;
char* __dec_obj166;
_Bool is_type_name_flag_337;
void* right_value444;
struct tuple3$3sTypephcharphbool* multiple_assign_var10;
struct sType* type_338;
char* name_339;
_Bool err_340;
void* right_value445;
struct sNode* right_value_341;
void* right_value446;
struct sNode* __dec_obj167;
void* right_value447;
void* right_value448;
struct sNode* _inf_value7;
struct sStoreNode* _inf_obj_value7;
void* right_value456;
struct sNode* __result186__;
void* right_value457;
void* right_value458;
struct sNode* _inf_value8;
struct sStoreNode* _inf_obj_value8;
void* right_value466;
struct sNode* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&is_type_name_flag_276, 0, sizeof(_Bool));
memset(&multiple_declare_277, 0, sizeof(_Bool));
memset(&p_278, 0, sizeof(char*));
memset(&sline_279, 0, sizeof(int));
right_value347 = (void*)0;
right_value348 = (void*)0;
right_value349 = (void*)0;
memset(&no_output_err_285, 0, sizeof(_Bool));
memset(&no_comma_286, 0, sizeof(_Bool));
memset(&no_output_come_code_287, 0, sizeof(_Bool));
right_value350 = (void*)0;
memset(&exp_288, 0, sizeof(struct sNode*));
memset(&attr_define_289, 0, sizeof(_Bool));
memset(&p_290, 0, sizeof(char*));
memset(&sline_291, 0, sizeof(int));
right_value351 = (void*)0;
memset(&fun_295, 0, sizeof(struct sFun*));
right_value352 = (void*)0;
memset(&buf2_296, 0, sizeof(char*));
memset(&multiple_assign_297, 0, sizeof(struct list$1charph*));
right_value353 = (void*)0;
right_value354 = (void*)0;
right_value358 = (void*)0;
right_value359 = (void*)0;
memset(&buf3_301, 0, sizeof(char*));
right_value360 = (void*)0;
memset(&no_comma_302, 0, sizeof(_Bool));
right_value361 = (void*)0;
memset(&right_value_303, 0, sizeof(struct sNode*));
right_value362 = (void*)0;
right_value363 = (void*)0;
right_value364 = (void*)0;
right_value365 = (void*)0;
right_value373 = (void*)0;
right_value374 = (void*)0;
right_value375 = (void*)0;
memset(&multiple_declare_305, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
right_value376 = (void*)0;
right_value377 = (void*)0;
memset(&no_comma_311, 0, sizeof(_Bool));
right_value378 = (void*)0;
memset(&exp_312, 0, sizeof(struct sNode*));
right_value382 = (void*)0;
right_value383 = (void*)0;
right_value384 = (void*)0;
right_value385 = (void*)0;
right_value386 = (void*)0;
memset(&no_comma_318, 0, sizeof(_Bool));
right_value387 = (void*)0;
memset(&exp_319, 0, sizeof(struct sNode*));
right_value388 = (void*)0;
right_value389 = (void*)0;
right_value390 = (void*)0;
right_value391 = (void*)0;
memset(&right_node_320, 0, sizeof(struct sNode*));
right_value392 = (void*)0;
memset(&var_name2_321, 0, sizeof(char*));
right_value393 = (void*)0;
right_value394 = (void*)0;
right_value395 = (void*)0;
right_value403 = (void*)0;
right_value404 = (void*)0;
right_value405 = (void*)0;
right_value409 = (void*)0;
right_value410 = (void*)0;
right_value411 = (void*)0;
right_value412 = (void*)0;
right_value413 = (void*)0;
right_value417 = (void*)0;
memset(&self_node_329, 0, sizeof(struct sNode*));
right_value418 = (void*)0;
memset(&right_node_331, 0, sizeof(struct sNode*));
right_value419 = (void*)0;
right_value420 = (void*)0;
right_value421 = (void*)0;
memset(&right_value_332, 0, sizeof(struct sNode*));
right_value422 = (void*)0;
right_value423 = (void*)0;
right_value424 = (void*)0;
right_value425 = (void*)0;
right_value433 = (void*)0;
right_value434 = (void*)0;
right_value435 = (void*)0;
right_value436 = (void*)0;
right_value440 = (void*)0;
memset(&node_334, 0, sizeof(struct sNode*));
right_value441 = (void*)0;
memset(&word_336, 0, sizeof(char*));
right_value442 = (void*)0;
right_value443 = (void*)0;
memset(&is_type_name_flag_337, 0, sizeof(_Bool));
right_value444 = (void*)0;
right_value445 = (void*)0;
memset(&right_value_341, 0, sizeof(struct sNode*));
right_value446 = (void*)0;
right_value447 = (void*)0;
right_value448 = (void*)0;
right_value456 = (void*)0;
right_value457 = (void*)0;
right_value458 = (void*)0;
right_value466 = (void*)0;
    is_type_name_flag_276=is_type_name(buf,info);
    multiple_declare_277=(_Bool)0;
    if(is_type_name_flag_276) {
        p_278=info->p;
        sline_279=info->sline;
        info->p=head;
        info->sline=head_sline;
        if(xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(right_value347=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_280=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            name_281=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_282=multiple_assign_var3->v3;
            come_call_finalizer3(right_value347,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(err_282) {
                multiple_assign_var4=((struct tuple2$2sTypephcharph*)(right_value348=parse_variable_name((struct sType*)come_increment_ref_count(type_280),(_Bool)1,info)));
                type_283=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                name_284=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                come_call_finalizer3(right_value348,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                if(*info->p==61) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(*info->p==123) {
                        ((char*)(right_value349=skip_block(info)));
                        right_value349 = come_decrement_ref_count2(right_value349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        no_output_err_285=info->no_output_err;
                        no_comma_286=info->no_comma;
                        no_output_come_code_287=info->no_output_come_code;
                        info->no_output_err=(_Bool)1;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        exp_288=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value350=expression_v13(info))));
                        if(right_value350) { right_value350 = come_decrement_ref_count2(right_value350, ((struct sNode*)right_value350)->finalize, ((struct sNode*)right_value350)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        info->no_comma=no_comma_286;
                        info->no_output_err=no_output_err_285;
                        info->no_output_come_code=no_output_come_code_287;
                        if(exp_288) { exp_288 = come_decrement_ref_count2(exp_288, ((struct sNode*)exp_288)->finalize, ((struct sNode*)exp_288)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                }
                if(!is_type_name(name_284,info)&&*info->p==44) {
                    multiple_declare_277=(_Bool)1;
                }
                come_call_finalizer3(type_283,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_284 = come_decrement_ref_count2(name_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(type_280,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_281 = come_decrement_ref_count2(name_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_278;
        info->sline=sline_279;
    }
    attr_define_289=(_Bool)0;
    if(is_type_name_flag_276&&info->defining_class) {
        p_290=info->p;
        sline_291=info->sline;
        info->p=head;
        info->sline=head_sline;
        multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value351=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_292=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
        name_293=(char*)come_increment_ref_count(multiple_assign_var5->v2);
        err_294=multiple_assign_var5->v3;
        come_call_finalizer3(right_value351,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(err_294&&strmemcmp(info->p,"self")) {
            attr_define_289=(_Bool)1;
        }
        info->p=p_290;
        info->sline=sline_291;
        come_call_finalizer3(type_292,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_293 = come_decrement_ref_count2(name_293, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    fun_295=map$2charphsFunphp_operator_load_element(info->funcs,buf);
    if((!gComeC&&charp_operator_equals(buf,"var"))||charp_operator_equals(buf,"auto")) {
        parse_sharp_v5(info);
        buf2_296=(char*)come_increment_ref_count(((char*)(right_value352=parse_word(info))));
        right_value352 = come_decrement_ref_count2(right_value352, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        __dec_obj120=multiple_assign_297;
        multiple_assign_297=((void*)0);
        come_call_finalizer3(__dec_obj120,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        if(*info->p==44) {
            __dec_obj121=multiple_assign_297;
            multiple_assign_297=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value354=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value353=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "07var.c", 945, "list$1charph"))))))));
            come_call_finalizer3(__dec_obj121,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value353,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value354,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(multiple_assign_297,(char*)come_increment_ref_count(((char*)(right_value358=string_clone(buf2_296)))));
            right_value358 = come_decrement_ref_count2(right_value358, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                buf3_301=(char*)come_increment_ref_count(((char*)(right_value359=parse_word(info))));
                right_value359 = come_decrement_ref_count2(right_value359, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                parse_sharp_v5(info);
                list$1charph_push_back(multiple_assign_297,(char*)come_increment_ref_count(((char*)(right_value360=string_clone(buf3_301)))));
                right_value360 = come_decrement_ref_count2(right_value360, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buf3_301 = come_decrement_ref_count2(buf3_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        parse_sharp_v5(info);
        if(*info->p==61&&*(info->p+1)!=61) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            no_comma_302=info->no_comma;
            info->no_comma=(_Bool)1;
            right_value_303=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value361=expression_v13(info))));
            if(right_value361) { right_value361 = come_decrement_ref_count2(right_value361, ((struct sNode*)right_value361)->finalize, ((struct sNode*)right_value361)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            info->no_comma=no_comma_302;
            parse_sharp_v5(info);
            __dec_obj125=right_value_303;
            right_value_303=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value362=post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_303),info))));
            if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count2(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value362) { right_value362 = come_decrement_ref_count2(right_value362, ((struct sNode*)right_value362)->finalize, ((struct sNode*)right_value362)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            parse_sharp_v5(info);
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 975, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sStoreNode*)(right_value365=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value363=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 975, "sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value364=__builtin_string(buf2_296)))),(struct list$1charph*)come_increment_ref_count(multiple_assign_297),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_303),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sStoreNode_finalize;
            _inf_value2->clone=(void*)sStoreNode_clone;
            _inf_value2->compile=(void*)sStoreNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sNodeBase_terminated;
            _inf_value2->kind=(void*)sStoreNode_kind;
            __result165__ = __result_obj__ = ((struct sNode*)(right_value373=_inf_value2));
            if(right_value_303) { right_value_303 = come_decrement_ref_count2(right_value_303, ((struct sNode*)right_value_303)->finalize, ((struct sNode*)right_value_303)->_protocol_obj, 0, 0, 0, (void*)0); } 
            buf2_296 = come_decrement_ref_count2(buf2_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(multiple_assign_297,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value363,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            right_value364 = come_decrement_ref_count2(right_value364, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value365,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value373) { right_value373 = come_decrement_ref_count2(right_value373, ((struct sNode*)right_value373)->finalize, ((struct sNode*)right_value373)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result165__;
            if(right_value_303) { right_value_303 = come_decrement_ref_count2(right_value_303, ((struct sNode*)right_value_303)->finalize, ((struct sNode*)right_value_303)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            err_msg(info,"var requires a right value(%c)",*info->p);
            exit(1);
        }
        buf2_296 = come_decrement_ref_count2(buf2_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(multiple_assign_297,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(multiple_declare_277) {
            info->p=head;
            info->sline=head_sline;
            multiple_declare_305=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value375=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value374=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "07var.c", 986, "list$1tuple3$3sTypephcharphsNodephph"))))))));
            come_call_finalizer3(right_value374,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value375,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
            multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(right_value376=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            base_type_306=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
            name_307=(char*)come_increment_ref_count(multiple_assign_var6->v2);
            err_308=multiple_assign_var6->v3;
            come_call_finalizer3(right_value376,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(!err_308) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            parse_sharp_v5(info);
            multiple_assign_var7=((struct tuple2$2sTypephcharph*)(right_value377=parse_variable_name((struct sType*)come_increment_ref_count(base_type_306),(_Bool)1,info)));
            type2_309=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
            var_name_310=(char*)come_increment_ref_count(multiple_assign_var7->v2);
            come_call_finalizer3(right_value377,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            if(*info->p==61) {
                info->p++;
                skip_spaces_and_lf(info);
                info->array_initializer=(_Bool)1;
                no_comma_311=info->no_comma;
                info->no_comma=(_Bool)1;
                exp_312=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value378=expression_v13(info))));
                if(right_value378) { right_value378 = come_decrement_ref_count2(right_value378, ((struct sNode*)right_value378)->finalize, ((struct sNode*)right_value378)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                info->no_comma=no_comma_311;
                info->array_initializer=(_Bool)0;
                list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_305,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value383=tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value382=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1011, "struct tuple3$3sTypephcharphsNodeph")))),(struct sType*)come_increment_ref_count(type2_309),(char*)come_increment_ref_count(var_name_310),(struct sNode*)come_increment_ref_count(exp_312))))));
                come_call_finalizer3(right_value382,tuple3$3sTypephcharphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value383,tuple3$3sTypephcharphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                if(exp_312) { exp_312 = come_decrement_ref_count2(exp_312, ((struct sNode*)exp_312)->finalize, ((struct sNode*)exp_312)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_305,(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value385=tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value384=(struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 1014, "struct tuple3$3sTypephcharphvoidp")))),(struct sType*)come_increment_ref_count(type2_309),(char*)come_increment_ref_count(var_name_310),((void*)0))))));
                right_value384 = come_decrement_ref_count2(right_value384, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value385,tuple3$3sTypephcharphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                multiple_assign_var8=((struct tuple2$2sTypephcharph*)(right_value386=parse_variable_name((struct sType*)come_increment_ref_count(base_type_306),(_Bool)0,info)));
                type2_316=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                var_name_317=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                come_call_finalizer3(right_value386,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                parse_sharp_v5(info);
                if(*info->p==61) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    no_comma_318=info->no_comma;
                    info->no_comma=(_Bool)1;
                    info->array_initializer=(_Bool)1;
                    exp_319=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value387=expression_v13(info))));
                    if(right_value387) { right_value387 = come_decrement_ref_count2(right_value387, ((struct sNode*)right_value387)->finalize, ((struct sNode*)right_value387)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    info->no_comma=no_comma_318;
                    info->array_initializer=(_Bool)0;
                    list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_305,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value389=tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value388=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1038, "struct tuple3$3sTypephcharphsNodeph")))),(struct sType*)come_increment_ref_count(type2_316),(char*)come_increment_ref_count(var_name_317),(struct sNode*)come_increment_ref_count(exp_319))))));
                    come_call_finalizer3(right_value388,tuple3$3sTypephcharphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value389,tuple3$3sTypephcharphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(exp_319) { exp_319 = come_decrement_ref_count2(exp_319, ((struct sNode*)exp_319)->finalize, ((struct sNode*)exp_319)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_305,(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value391=tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value390=(struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 1041, "struct tuple3$3sTypephcharphvoidp")))),(struct sType*)come_increment_ref_count(type2_316),(char*)come_increment_ref_count(var_name_317),((void*)0))))));
                    right_value390 = come_decrement_ref_count2(right_value390, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value391,tuple3$3sTypephcharphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                come_call_finalizer3(type2_316,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_317 = come_decrement_ref_count2(var_name_317, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            __dec_obj140=right_node_320;
            right_node_320=((void*)0);
            if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count2(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0,0, (void*)0); }
            var_name2_321=(char*)come_increment_ref_count(((char*)(right_value392=__builtin_string(""))));
            right_value392 = come_decrement_ref_count2(right_value392, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1048, "struct sNode");
            _inf_obj_value3=come_increment_ref_count(((struct sStoreNode*)(right_value395=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value393=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1048, "sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value394=__builtin_string(buf)))),((void*)0),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare_305),(struct sType*)come_increment_ref_count(base_type_306),(_Bool)1,((void*)0),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sStoreNode_finalize;
            _inf_value3->clone=(void*)sStoreNode_clone;
            _inf_value3->compile=(void*)sStoreNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sStoreNode_kind;
            __result171__ = __result_obj__ = ((struct sNode*)(right_value403=_inf_value3));
            come_call_finalizer3(multiple_declare_305,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(base_type_306,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_307 = come_decrement_ref_count2(name_307, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_309,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_310 = come_decrement_ref_count2(var_name_310, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_node_320) { right_node_320 = come_decrement_ref_count2(right_node_320, ((struct sNode*)right_node_320)->finalize, ((struct sNode*)right_node_320)->_protocol_obj, 0, 0, 0, (void*)0); } 
            var_name2_321 = come_decrement_ref_count2(var_name2_321, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value393,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            right_value394 = come_decrement_ref_count2(right_value394, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value395,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value403) { right_value403 = come_decrement_ref_count2(right_value403, ((struct sNode*)right_value403)->finalize, ((struct sNode*)right_value403)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result171__;
            come_call_finalizer3(multiple_declare_305,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(base_type_306,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_307 = come_decrement_ref_count2(name_307, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_309,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_310 = come_decrement_ref_count2(var_name_310, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_node_320) { right_node_320 = come_decrement_ref_count2(right_node_320, ((struct sNode*)right_node_320)->finalize, ((struct sNode*)right_node_320)->_protocol_obj, 0, 0, 0, (void*)0); } 
            var_name2_321 = come_decrement_ref_count2(var_name2_321, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(attr_define_289) {
                info->p=head;
                info->sline=head_sline;
                parse_sharp_v5(info);
                multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(right_value404=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_323=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                name_324=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                err_325=multiple_assign_var9->v3;
                come_call_finalizer3(right_value404,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(!err_325) {
                    printf("%s %d: parse_type failed\n",info->sname,info->sline);
                    exit(2);
                }
                info->p+=strlen("self.");
                __dec_obj147=name_324;
                name_324=(char*)come_increment_ref_count(((char*)(right_value405=parse_word(info))));
                __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value405 = come_decrement_ref_count2(right_value405, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                parse_sharp_v5(info);
                list$1tuple2$2charphsTypephph_add(info->defining_class->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value410=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value409=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "07var.c", 1068, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_324),(struct sType*)come_increment_ref_count(type_323))))));
                right_value409 = come_decrement_ref_count2(right_value409, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value410,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                if(*info->p==61&&*(info->p+1)!=61) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1076, "struct sNode");
                    _inf_obj_value4=come_increment_ref_count(((struct sLoadNode*)(right_value413=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value411=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1076, "sLoadNode")))),(char*)come_increment_ref_count(((char*)(right_value412=__builtin_string("self")))),info))));
                    _inf_value4->_protocol_obj=_inf_obj_value4;
                    _inf_value4->finalize=(void*)sLoadNode_finalize;
                    _inf_value4->clone=(void*)sLoadNode_clone;
                    _inf_value4->compile=(void*)sLoadNode_compile;
                    _inf_value4->sline=(void*)sNodeBase_sline;
                    _inf_value4->sname=(void*)sNodeBase_sname;
                    _inf_value4->terminated=(void*)sNodeBase_terminated;
                    _inf_value4->kind=(void*)sLoadNode_kind;
                    self_node_329=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value417=_inf_value4)));
                    come_call_finalizer3(right_value411,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                    right_value412 = come_decrement_ref_count2(right_value412, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value413,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value417) { right_value417 = come_decrement_ref_count2(right_value417, ((struct sNode*)right_value417)->finalize, ((struct sNode*)right_value417)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    right_node_331=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value418=expression_v13(info))));
                    if(right_value418) { right_value418 = come_decrement_ref_count2(right_value418, ((struct sNode*)right_value418)->finalize, ((struct sNode*)right_value418)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    __result176__ = __result_obj__ = ((struct sNode*)(right_value419=store_field(self_node_329,(struct sNode*)come_increment_ref_count(right_node_331),(char*)come_increment_ref_count(name_324),info)));
                    if(self_node_329) { self_node_329 = come_decrement_ref_count2(self_node_329, ((struct sNode*)self_node_329)->finalize, ((struct sNode*)self_node_329)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(right_node_331) { right_node_331 = come_decrement_ref_count2(right_node_331, ((struct sNode*)right_node_331)->finalize, ((struct sNode*)right_node_331)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(type_323,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_324 = come_decrement_ref_count2(name_324, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(right_value419) { right_value419 = come_decrement_ref_count2(right_value419, ((struct sNode*)right_value419)->finalize, ((struct sNode*)right_value419)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result176__;
                    if(self_node_329) { self_node_329 = come_decrement_ref_count2(self_node_329, ((struct sNode*)self_node_329)->finalize, ((struct sNode*)self_node_329)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(right_node_331) { right_node_331 = come_decrement_ref_count2(right_node_331, ((struct sNode*)right_node_331)->finalize, ((struct sNode*)right_node_331)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    __result177__ = __result_obj__ = ((struct sNode*)(right_value420=create_null_node(info)));
                    come_call_finalizer3(type_323,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_324 = come_decrement_ref_count2(name_324, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(right_value420) { right_value420 = come_decrement_ref_count2(right_value420, ((struct sNode*)right_value420)->finalize, ((struct sNode*)right_value420)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result177__;
                }
                come_call_finalizer3(type_323,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_324 = come_decrement_ref_count2(name_324, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(!is_type_name_flag_276&&*info->p==61&&*(info->p+1)!=61&&!info->no_assign) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    right_value_332=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value421=expression_v13(info))));
                    if(right_value421) { right_value421 = come_decrement_ref_count2(right_value421, ((struct sNode*)right_value421)->finalize, ((struct sNode*)right_value421)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    parse_sharp_v5(info);
                    __dec_obj155=right_value_332;
                    right_value_332=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value422=post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_332),info))));
                    if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count2(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value422) { right_value422 = come_decrement_ref_count2(right_value422, ((struct sNode*)right_value422)->finalize, ((struct sNode*)right_value422)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    parse_sharp_v5(info);
                    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1098, "struct sNode");
                    _inf_obj_value5=come_increment_ref_count(((struct sStoreNode*)(right_value425=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value423=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1098, "sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value424=__builtin_string(buf)))),((void*)0),((void*)0),((void*)0),(_Bool)0,(struct sNode*)come_increment_ref_count(right_value_332),info))));
                    _inf_value5->_protocol_obj=_inf_obj_value5;
                    _inf_value5->finalize=(void*)sStoreNode_finalize;
                    _inf_value5->clone=(void*)sStoreNode_clone;
                    _inf_value5->compile=(void*)sStoreNode_compile;
                    _inf_value5->sline=(void*)sNodeBase_sline;
                    _inf_value5->sname=(void*)sNodeBase_sname;
                    _inf_value5->terminated=(void*)sNodeBase_terminated;
                    _inf_value5->kind=(void*)sStoreNode_kind;
                    __result180__ = __result_obj__ = ((struct sNode*)(right_value433=_inf_value5));
                    if(right_value_332) { right_value_332 = come_decrement_ref_count2(right_value_332, ((struct sNode*)right_value_332)->finalize, ((struct sNode*)right_value_332)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(right_value423,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                    right_value424 = come_decrement_ref_count2(right_value424, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value425,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value433) { right_value433 = come_decrement_ref_count2(right_value433, ((struct sNode*)right_value433)->finalize, ((struct sNode*)right_value433)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result180__;
                    if(right_value_332) { right_value_332 = come_decrement_ref_count2(right_value_332, ((struct sNode*)right_value_332)->finalize, ((struct sNode*)right_value_332)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(!is_type_name_flag_276||map$2charphsFunphp_operator_load_element(info->funcs,buf)) {
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1101, "struct sNode");
                        _inf_obj_value6=come_increment_ref_count(((struct sLoadNode*)(right_value436=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value434=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1101, "sLoadNode")))),(char*)come_increment_ref_count(((char*)(right_value435=__builtin_string(buf)))),info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sLoadNode_finalize;
                        _inf_value6->clone=(void*)sLoadNode_clone;
                        _inf_value6->compile=(void*)sLoadNode_compile;
                        _inf_value6->sline=(void*)sNodeBase_sline;
                        _inf_value6->sname=(void*)sNodeBase_sname;
                        _inf_value6->terminated=(void*)sNodeBase_terminated;
                        _inf_value6->kind=(void*)sLoadNode_kind;
                        node_334=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value440=_inf_value6)));
                        come_call_finalizer3(right_value434,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                        right_value435 = come_decrement_ref_count2(right_value435, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value436,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value440) { right_value440 = come_decrement_ref_count2(right_value440, ((struct sNode*)right_value440)->finalize, ((struct sNode*)right_value440)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        __dec_obj164=node_334;
                        node_334=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value441=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_334),info))));
                        if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count2(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value441) { right_value441 = come_decrement_ref_count2(right_value441, ((struct sNode*)right_value441)->finalize, ((struct sNode*)right_value441)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        __result183__ = __result_obj__ = node_334;
                        if(node_334) { node_334 = come_decrement_ref_count2(node_334, ((struct sNode*)node_334)->finalize, ((struct sNode*)node_334)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result183__;
                        if(node_334) { node_334 = come_decrement_ref_count2(node_334, ((struct sNode*)node_334)->finalize, ((struct sNode*)node_334)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        info->p=head;
                        info->sline=head_sline;
                        if(xisalpha(*info->p)||*info->p==95) {
                            __dec_obj165=word_336;
                            word_336=(char*)come_increment_ref_count(((char*)(right_value442=parse_word(info))));
                            __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value442 = come_decrement_ref_count2(right_value442, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            __dec_obj166=word_336;
                            word_336=(char*)come_increment_ref_count(((char*)(right_value443=__builtin_string(""))));
                            __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value443 = come_decrement_ref_count2(right_value443, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        is_type_name_flag_337=is_type_name(word_336,info);
                        info->p=head;
                        info->sline=head_sline;
                        if(is_type_name_flag_337) {
                            parse_sharp_v5(info);
                            multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(right_value444=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                            type_338=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
                            name_339=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                            err_340=multiple_assign_var10->v3;
                            come_call_finalizer3(right_value444,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            if(!err_340) {
                                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                                exit(2);
                            }
                            parse_sharp_v5(info);
                            if(*info->p==61) {
                                info->p++;
                                skip_spaces_and_lf(info);
                                parse_sharp_v5(info);
                                info->array_initializer=(_Bool)1;
                                parse_sharp_v5(info);
                                right_value_341=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value445=expression_v13(info))));
                                if(right_value445) { right_value445 = come_decrement_ref_count2(right_value445, ((struct sNode*)right_value445)->finalize, ((struct sNode*)right_value445)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                parse_sharp_v5(info);
                                info->array_initializer=(_Bool)0;
                                __dec_obj167=right_value_341;
                                right_value_341=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value446=post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_341),info))));
                                if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count2(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value446) { right_value446 = come_decrement_ref_count2(right_value446, ((struct sNode*)right_value446)->finalize, ((struct sNode*)right_value446)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1149, "struct sNode");
                                _inf_obj_value7=come_increment_ref_count(((struct sStoreNode*)(right_value448=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value447=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1149, "sStoreNode")))),(char*)come_increment_ref_count(name_339),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_338),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_341),info))));
                                _inf_value7->_protocol_obj=_inf_obj_value7;
                                _inf_value7->finalize=(void*)sStoreNode_finalize;
                                _inf_value7->clone=(void*)sStoreNode_clone;
                                _inf_value7->compile=(void*)sStoreNode_compile;
                                _inf_value7->sline=(void*)sNodeBase_sline;
                                _inf_value7->sname=(void*)sNodeBase_sname;
                                _inf_value7->terminated=(void*)sNodeBase_terminated;
                                _inf_value7->kind=(void*)sStoreNode_kind;
                                __result186__ = __result_obj__ = ((struct sNode*)(right_value456=_inf_value7));
                                if(right_value_341) { right_value_341 = come_decrement_ref_count2(right_value_341, ((struct sNode*)right_value_341)->finalize, ((struct sNode*)right_value_341)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(type_338,sType_finalize, 0, 0, 0, 0, (void*)0);
                                name_339 = come_decrement_ref_count2(name_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                word_336 = come_decrement_ref_count2(word_336, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value447,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value448,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value456) { right_value456 = come_decrement_ref_count2(right_value456, ((struct sNode*)right_value456)->finalize, ((struct sNode*)right_value456)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result186__;
                                if(right_value_341) { right_value_341 = come_decrement_ref_count2(right_value_341, ((struct sNode*)right_value_341)->finalize, ((struct sNode*)right_value_341)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1152, "struct sNode");
                                _inf_obj_value8=come_increment_ref_count(((struct sStoreNode*)(right_value458=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value457=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1152, "sStoreNode")))),(char*)come_increment_ref_count(name_339),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_338),(_Bool)1,((void*)0),info))));
                                _inf_value8->_protocol_obj=_inf_obj_value8;
                                _inf_value8->finalize=(void*)sStoreNode_finalize;
                                _inf_value8->clone=(void*)sStoreNode_clone;
                                _inf_value8->compile=(void*)sStoreNode_compile;
                                _inf_value8->sline=(void*)sNodeBase_sline;
                                _inf_value8->sname=(void*)sNodeBase_sname;
                                _inf_value8->terminated=(void*)sNodeBase_terminated;
                                _inf_value8->kind=(void*)sStoreNode_kind;
                                __result189__ = __result_obj__ = ((struct sNode*)(right_value466=_inf_value8));
                                come_call_finalizer3(type_338,sType_finalize, 0, 0, 0, 0, (void*)0);
                                name_339 = come_decrement_ref_count2(name_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                word_336 = come_decrement_ref_count2(word_336, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value457,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value458,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value466) { right_value466 = come_decrement_ref_count2(right_value466, ((struct sNode*)right_value466)->finalize, ((struct sNode*)right_value466)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result189__;
                            }
                            come_call_finalizer3(type_338,sType_finalize, 0, 0, 0, 0, (void*)0);
                            name_339 = come_decrement_ref_count2(name_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        word_336 = come_decrement_ref_count2(word_336, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
    }
    err_msg(info,"unexpected word(%s)(1)\n",buf);
    exit(2);
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                    come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(self!=((void*)0)&&self->v2!=((void*)0)) {
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
                    if(self!=((void*)0)&&self->v1!=((void*)0)) {
                        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(self!=((void*)0)&&self->v2!=((void*)0)) {
                        self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
void* right_value355;
struct list_item$1charph* litem_298;
char* __dec_obj122;
void* right_value356;
struct list_item$1charph* litem_299;
char* __dec_obj123;
void* right_value357;
struct list_item$1charph* litem_300;
char* __dec_obj124;
struct list$1charph* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
right_value355 = (void*)0;
memset(&litem_298, 0, sizeof(struct list_item$1charph*));
right_value356 = (void*)0;
memset(&litem_299, 0, sizeof(struct list_item$1charph*));
right_value357 = (void*)0;
memset(&litem_300, 0, sizeof(struct list_item$1charph*));
                if(self->len==0) {
                    litem_298=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value355=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 219, "list_item$1charph"))));
                    come_call_finalizer3(right_value355,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_298->prev=((void*)0);
                    litem_298->next=((void*)0);
                    __dec_obj122=litem_298->item;
                    litem_298->item=(char*)come_increment_ref_count(item);
                    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
                    self->tail=litem_298;
                    self->head=litem_298;
                }
                else {
                    if(self->len==1) {
                        litem_299=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value356=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 229, "list_item$1charph"))));
                        come_call_finalizer3(right_value356,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_299->prev=self->head;
                        litem_299->next=((void*)0);
                        __dec_obj123=litem_299->item;
                        litem_299->item=(char*)come_increment_ref_count(item);
                        __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail=litem_299;
                        self->head->next=litem_299;
                    }
                    else {
                        litem_300=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value357=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 239, "list_item$1charph"))));
                        come_call_finalizer3(right_value357,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_300->prev=self->tail;
                        litem_300->next=((void*)0);
                        __dec_obj124=litem_300->item;
                        litem_300->item=(char*)come_increment_ref_count(item);
                        __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail->next=litem_300;
                        self->tail=litem_300;
                    }
                }
                self->len++;
                __result162__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result162__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__;
void* right_value379;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_313;
struct tuple3$3sTypephcharphsNodeph* __dec_obj132;
void* right_value380;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_314;
struct tuple3$3sTypephcharphsNodeph* __dec_obj133;
void* right_value381;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_315;
struct tuple3$3sTypephcharphsNodeph* __dec_obj134;
struct list$1tuple3$3sTypephcharphsNodephph* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
right_value379 = (void*)0;
memset(&litem_313, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value380 = (void*)0;
memset(&litem_314, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value381 = (void*)0;
memset(&litem_315, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                    if(self->len==0) {
                        litem_313=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value379=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 219, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                        come_call_finalizer3(right_value379,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_313->prev=((void*)0);
                        litem_313->next=((void*)0);
                        __dec_obj132=litem_313->item;
                        litem_313->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj132,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_313;
                        self->head=litem_313;
                    }
                    else {
                        if(self->len==1) {
                            litem_314=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value380=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 229, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                            come_call_finalizer3(right_value380,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_314->prev=self->head;
                            litem_314->next=((void*)0);
                            __dec_obj133=litem_314->item;
                            litem_314->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj133,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_314;
                            self->head->next=litem_314;
                        }
                        else {
                            litem_315=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value381=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 239, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                            come_call_finalizer3(right_value381,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_315->prev=self->tail;
                            litem_315->next=((void*)0);
                            __dec_obj134=litem_315->item;
                            litem_315->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj134,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_315;
                            self->tail=litem_315;
                        }
                    }
                    self->len++;
                    __result166__ = __result_obj__ = self;
                    come_call_finalizer3(item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result166__;
                    come_call_finalizer3(item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3){
void* __result_obj__;
struct sType* __dec_obj135;
char* __dec_obj136;
struct sNode* __dec_obj137;
struct tuple3$3sTypephcharphsNodeph* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
                    __dec_obj135=self->v1;
                    self->v1=(struct sType*)come_increment_ref_count(v1);
                    come_call_finalizer3(__dec_obj135,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __dec_obj136=self->v2;
                    self->v2=(char*)come_increment_ref_count(v2);
                    __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj137=self->v3;
                    self->v3=(struct sNode*)come_increment_ref_count(v3);
                    if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count2(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0,0, (void*)0); }
                    __result167__ = __result_obj__ = self;
                    come_call_finalizer3(self,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    if(v3) { v3 = come_decrement_ref_count2(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 1, 0, (void*)0); } 
                    return __result167__;
                    come_call_finalizer3(self,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    if(v3) { v3 = come_decrement_ref_count2(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3){
void* __result_obj__;
struct sType* __dec_obj138;
char* __dec_obj139;
struct tuple3$3sTypephcharphvoidp* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
                    __dec_obj138=self->v1;
                    self->v1=(struct sType*)come_increment_ref_count(v1);
                    come_call_finalizer3(__dec_obj138,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __dec_obj139=self->v2;
                    self->v2=(char*)come_increment_ref_count(v2);
                    __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
                    self->v3=v3;
                    __result168__ = __result_obj__ = self;
                    come_call_finalizer3(self,tuple3$3sTypephcharphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
                    come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result168__;
                    come_call_finalizer3(self,tuple3$3sTypephcharphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
                    come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self){
                        if(self!=((void*)0)&&self->v1!=((void*)0)) {
                            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(self!=((void*)0)&&self->v2!=((void*)0)) {
                            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
void* right_value406;
struct list_item$1tuple2$2charphsTypephph* litem_326;
struct tuple2$2charphsTypeph* __dec_obj148;
void* right_value407;
struct list_item$1tuple2$2charphsTypephph* litem_327;
struct tuple2$2charphsTypeph* __dec_obj149;
void* right_value408;
struct list_item$1tuple2$2charphsTypephph* litem_328;
struct tuple2$2charphsTypeph* __dec_obj150;
struct list$1tuple2$2charphsTypephph* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
right_value406 = (void*)0;
memset(&litem_326, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value407 = (void*)0;
memset(&litem_327, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value408 = (void*)0;
memset(&litem_328, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                    if(self->len==0) {
                        litem_326=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value406=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 149, "list_item$1tuple2$2charphsTypephph"))));
                        come_call_finalizer3(right_value406,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_326->prev=((void*)0);
                        litem_326->next=((void*)0);
                        __dec_obj148=litem_326->item;
                        litem_326->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj148,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_326;
                        self->head=litem_326;
                    }
                    else {
                        if(self->len==1) {
                            litem_327=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value407=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 159, "list_item$1tuple2$2charphsTypephph"))));
                            come_call_finalizer3(right_value407,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_327->prev=self->head;
                            litem_327->next=((void*)0);
                            __dec_obj149=litem_327->item;
                            litem_327->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj149,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_327;
                            self->head->next=litem_327;
                        }
                        else {
                            litem_328=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value408=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 169, "list_item$1tuple2$2charphsTypephph"))));
                            come_call_finalizer3(right_value408,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_328->prev=self->tail;
                            litem_328->next=((void*)0);
                            __dec_obj150=litem_328->item;
                            litem_328->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj150,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_328;
                            self->tail=litem_328;
                        }
                    }
                    self->len++;
                    __result172__ = __result_obj__ = self;
                    come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result172__;
                    come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
                            if(self!=((void*)0)&&self->item!=((void*)0)) {
                                come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
                                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(self!=((void*)0)&&self->v2!=((void*)0)) {
                                    come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
char* __dec_obj151;
struct sType* __dec_obj152;
struct tuple2$2charphsTypeph* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
                    __dec_obj151=self->v1;
                    self->v1=(char*)come_increment_ref_count(v1);
                    __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj152=self->v2;
                    self->v2=(struct sType*)come_increment_ref_count(v2);
                    come_call_finalizer3(__dec_obj152,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __result173__ = __result_obj__ = self;
                    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    come_call_finalizer3(v2,sType_finalize, 0, 0, 1, 0, (void*)0);
                    return __result173__;
                    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    come_call_finalizer3(v2,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void sLoadNode_finalize(struct sLoadNode* self){
                            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->name!=((void*)0)) {
                                self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self){
void* __result_obj__;
struct sLoadNode* __result181__;
void* right_value437;
struct sLoadNode* result_335;
void* right_value438;
char* __dec_obj162;
void* right_value439;
char* __dec_obj163;
struct sLoadNode* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
right_value437 = (void*)0;
memset(&result_335, 0, sizeof(struct sLoadNode*));
right_value438 = (void*)0;
right_value439 = (void*)0;
                            if(self==(void*)0) {
                                __result181__ = __result_obj__ = (void*)0;
                                return __result181__;
                            }
                            result_335=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value437=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "sLoadNode_clone", 3, "sLoadNode"))));
                            come_call_finalizer3(right_value437,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(self!=((void*)0)) {
                                result_335->sline=self->sline;
                            }
                            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                __dec_obj162=result_335->sname;
                                result_335->sname=(char*)come_increment_ref_count(((char*)(right_value438=string_clone(self->sname))));
                                __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value438 = come_decrement_ref_count2(right_value438, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(self!=((void*)0)&&self->name!=((void*)0)) {
                                __dec_obj163=result_335->name;
                                result_335->name=(char*)come_increment_ref_count(((char*)(right_value439=string_clone(self->name))));
                                __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value439 = come_decrement_ref_count2(right_value439, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            __result182__ = __result_obj__ = result_335;
                            come_call_finalizer3(result_335,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
                            return __result182__;
                            come_call_finalizer3(result_335,sLoadNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sStoreNode_finalize(struct sStoreNode* self){
                                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(self!=((void*)0)&&self->name!=((void*)0)) {
                                        self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(self!=((void*)0)&&self->type!=((void*)0)) {
                                        come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(self!=((void*)0)&&self->right_value!=((void*)0)) {
                                        if(self->right_value) { self->right_value = come_decrement_ref_count2(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(self!=((void*)0)&&self->multiple_assign!=((void*)0)) {
                                        come_call_finalizer3(self->multiple_assign,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
                                        come_call_finalizer3(self->multiple_declare,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
}

static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self){
void* __result_obj__;
struct sStoreNode* __result187__;
void* right_value459;
struct sStoreNode* result_343;
void* right_value460;
char* __dec_obj174;
void* right_value461;
char* __dec_obj175;
void* right_value462;
struct sType* __dec_obj176;
void* right_value463;
struct sNode* __dec_obj177;
void* right_value464;
struct list$1charph* __dec_obj178;
void* right_value465;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj179;
struct sStoreNode* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
right_value459 = (void*)0;
memset(&result_343, 0, sizeof(struct sStoreNode*));
right_value460 = (void*)0;
right_value461 = (void*)0;
right_value462 = (void*)0;
right_value463 = (void*)0;
right_value464 = (void*)0;
right_value465 = (void*)0;
                                    if(self==(void*)0) {
                                        __result187__ = __result_obj__ = (void*)0;
                                        return __result187__;
                                    }
                                    result_343=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value459=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "sStoreNode_clone", 3, "sStoreNode"))));
                                    come_call_finalizer3(right_value459,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(self!=((void*)0)) {
                                        result_343->sline=self->sline;
                                    }
                                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                        __dec_obj174=result_343->sname;
                                        result_343->sname=(char*)come_increment_ref_count(((char*)(right_value460=string_clone(self->sname))));
                                        __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value460 = come_decrement_ref_count2(right_value460, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(self!=((void*)0)&&self->name!=((void*)0)) {
                                        __dec_obj175=result_343->name;
                                        result_343->name=(char*)come_increment_ref_count(((char*)(right_value461=string_clone(self->name))));
                                        __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value461 = come_decrement_ref_count2(right_value461, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(self!=((void*)0)) {
                                        result_343->alloc=self->alloc;
                                    }
                                    if(self!=((void*)0)&&self->type!=((void*)0)) {
                                        __dec_obj176=result_343->type;
                                        result_343->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value462=sType_clone(self->type))));
                                        come_call_finalizer3(__dec_obj176,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value462,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(self!=((void*)0)&&self->right_value!=((void*)0)) {
                                        __dec_obj177=result_343->right_value;
                                        result_343->right_value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value463=sNode_clone(self->right_value))));
                                        if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count2(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value463) { right_value463 = come_decrement_ref_count2(right_value463, ((struct sNode*)right_value463)->finalize, ((struct sNode*)right_value463)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(self!=((void*)0)&&self->multiple_assign!=((void*)0)) {
                                        __dec_obj178=result_343->multiple_assign;
                                        result_343->multiple_assign=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value464=list$1charphp_clone(self->multiple_assign))));
                                        come_call_finalizer3(__dec_obj178,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value464,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
                                        __dec_obj179=result_343->multiple_declare;
                                        result_343->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value465=list$1tuple3$3sTypephcharphsNodephphp_clone(self->multiple_declare))));
                                        come_call_finalizer3(__dec_obj179,list$1tuple3$3sTypephcharphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value465,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    __result188__ = __result_obj__ = result_343;
                                    come_call_finalizer3(result_343,sStoreNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result188__;
                                    come_call_finalizer3(result_343,sStoreNode_finalize, 0, 0, 0, 0, (void*)0);
}

