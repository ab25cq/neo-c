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
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
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
void* __right_value0;
void* __right_value1;
struct buffer* result_0;
struct buffer* __result1__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value0 = (void*)0;
__right_value1 = (void*)0;
memset(&result_0, 0, sizeof(struct buffer*));
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1899, "buffer"))))))));
    come_call_finalizer3(__right_value0,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_0,self,sizeof(char)*len);
    __result1__ = __result_obj__ = result_0;
    come_call_finalizer3(result_0,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result1__;
    come_call_finalizer3(result_0,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* shortpa_to_buffer(short short* self, unsigned long int len){
void* __result_obj__;
void* __right_value2;
void* __right_value3;
struct buffer* result_1;
struct buffer* __result2__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value2 = (void*)0;
__right_value3 = (void*)0;
memset(&result_1, 0, sizeof(struct buffer*));
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1906, "buffer"))))))));
    come_call_finalizer3(__right_value2,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_1,(char*)self,sizeof(short short)*len);
    __result2__ = __result_obj__ = result_1;
    come_call_finalizer3(result_1,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result2__;
    come_call_finalizer3(result_1,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long int len){
void* __result_obj__;
void* __right_value4;
void* __right_value5;
struct buffer* result_2;
struct buffer* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value4 = (void*)0;
__right_value5 = (void*)0;
memset(&result_2, 0, sizeof(struct buffer*));
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1913, "buffer"))))))));
    come_call_finalizer3(__right_value4,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_2,(char*)self,sizeof(int)*len);
    __result3__ = __result_obj__ = result_2;
    come_call_finalizer3(result_2,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result3__;
    come_call_finalizer3(result_2,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long int len){
void* __result_obj__;
void* __right_value6;
void* __right_value7;
struct buffer* result_3;
struct buffer* __result4__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value6 = (void*)0;
__right_value7 = (void*)0;
memset(&result_3, 0, sizeof(struct buffer*));
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1920, "buffer"))))))));
    come_call_finalizer3(__right_value6,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_3,(char*)self,sizeof(long)*len);
    __result4__ = __result_obj__ = result_3;
    come_call_finalizer3(result_3,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result4__;
    come_call_finalizer3(result_3,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long int len){
void* __result_obj__;
void* __right_value8;
void* __right_value9;
struct buffer* result_4;
struct buffer* __result5__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value8 = (void*)0;
__right_value9 = (void*)0;
memset(&result_4, 0, sizeof(struct buffer*));
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1927, "buffer"))))))));
    come_call_finalizer3(__right_value8,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_4,(char*)self,sizeof(float)*len);
    __result5__ = __result_obj__ = result_4;
    come_call_finalizer3(result_4,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result5__;
    come_call_finalizer3(result_4,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long int len){
void* __result_obj__;
void* __right_value10;
void* __right_value11;
struct buffer* result_5;
struct buffer* __result6__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value10 = (void*)0;
__right_value11 = (void*)0;
memset(&result_5, 0, sizeof(struct buffer*));
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1934, "buffer"))))))));
    come_call_finalizer3(__right_value10,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_5,(char*)self,sizeof(double)*len);
    __result6__ = __result_obj__ = result_5;
    come_call_finalizer3(result_5,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result6__;
    come_call_finalizer3(result_5,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__;
void* __right_value12;
struct smart_pointer$1char* result_6;
void* __right_value13;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value12 = (void*)0;
memset(&result_6, 0, sizeof(struct smart_pointer$1char*));
__right_value13 = (void*)0;
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(__right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1950, "smart_pointer$1char"))));
    __dec_obj1=result_6->memory;
    result_6->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value13=buffer_clone(self))));
    come_call_finalizer3(__dec_obj1,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_6->p=result_6->memory->buf;
    __result7__ = __result_obj__ = result_6;
    come_call_finalizer3(result_6,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result7__;
    come_call_finalizer3(result_6,smart_pointer$1charp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__;
void* __right_value14;
struct smart_pointer$1char* result_7;
void* __right_value15;
struct buffer* __dec_obj2;
struct smart_pointer$1char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value14 = (void*)0;
memset(&result_7, 0, sizeof(struct smart_pointer$1char*));
__right_value15 = (void*)0;
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(__right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1960, "smart_pointer$1char"))));
    __dec_obj2=result_7->memory;
    result_7->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value15=buffer_clone(self))));
    come_call_finalizer3(__dec_obj2,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_7->p=(char*)result_7->memory->buf;
    __result8__ = __result_obj__ = result_7;
    come_call_finalizer3(result_7,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result8__;
    come_call_finalizer3(result_7,smart_pointer$1charp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__;
void* __right_value16;
struct smart_pointer$1short* result_8;
void* __right_value17;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value16 = (void*)0;
memset(&result_8, 0, sizeof(struct smart_pointer$1short*));
__right_value17 = (void*)0;
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(__right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 1970, "smart_pointer$1short"))));
    __dec_obj3=result_8->memory;
    result_8->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value17=buffer_clone(self))));
    come_call_finalizer3(__dec_obj3,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_8->p=(short short*)result_8->memory->buf;
    __result9__ = __result_obj__ = result_8;
    come_call_finalizer3(result_8,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    return __result9__;
    come_call_finalizer3(result_8,smart_pointer$1shortp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__;
void* __right_value18;
struct smart_pointer$1int* result_9;
void* __right_value19;
struct buffer* __dec_obj4;
struct smart_pointer$1int* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value18 = (void*)0;
memset(&result_9, 0, sizeof(struct smart_pointer$1int*));
__right_value19 = (void*)0;
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(__right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 1980, "smart_pointer$1int"))));
    __dec_obj4=result_9->memory;
    result_9->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value19=buffer_clone(self))));
    come_call_finalizer3(__dec_obj4,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_9->p=(int*)result_9->memory->buf;
    __result10__ = __result_obj__ = result_9;
    come_call_finalizer3(result_9,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    return __result10__;
    come_call_finalizer3(result_9,smart_pointer$1intp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__;
void* __right_value20;
struct smart_pointer$1long* result_10;
void* __right_value21;
struct buffer* __dec_obj5;
struct smart_pointer$1long* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value20 = (void*)0;
memset(&result_10, 0, sizeof(struct smart_pointer$1long*));
__right_value21 = (void*)0;
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(__right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 1990, "smart_pointer$1long"))));
    __dec_obj5=result_10->memory;
    result_10->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value21=buffer_clone(self))));
    come_call_finalizer3(__dec_obj5,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_10->p=(long*)result_10->memory->buf;
    __result11__ = __result_obj__ = result_10;
    come_call_finalizer3(result_10,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    return __result11__;
    come_call_finalizer3(result_10,smart_pointer$1longp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long int len){
void* __result_obj__;
void* __right_value22;
void* __right_value25;
struct smart_pointer$1char* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value22 = (void*)0;
__right_value25 = (void*)0;
    __result13__ = __result_obj__ = ((struct smart_pointer$1char*)(__right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(__right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2161, "smart_pointer$1char")))),self,len)));
    come_call_finalizer3(__right_value22,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value25,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result13__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, unsigned long int len){
void* __result_obj__;
void* __right_value26;
void* __right_value29;
struct smart_pointer$1short* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value26 = (void*)0;
__right_value29 = (void*)0;
    __result15__ = __result_obj__ = ((struct smart_pointer$1short*)(__right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(__right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2166, "smart_pointer$1short")))),self,len)));
    come_call_finalizer3(__right_value26,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value29,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result15__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long int len){
void* __result_obj__;
void* __right_value30;
void* __right_value33;
struct smart_pointer$1int* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value30 = (void*)0;
__right_value33 = (void*)0;
    __result17__ = __result_obj__ = ((struct smart_pointer$1int*)(__right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(__right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2171, "smart_pointer$1int")))),self,len)));
    come_call_finalizer3(__right_value30,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value33,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result17__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long int len){
void* __result_obj__;
void* __right_value34;
void* __right_value37;
struct smart_pointer$1long* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value34 = (void*)0;
__right_value37 = (void*)0;
    __result19__ = __result_obj__ = ((struct smart_pointer$1long*)(__right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(__right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2176, "smart_pointer$1long")))),self,len)));
    come_call_finalizer3(__right_value34,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value37,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result19__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long int len){
void* __result_obj__;
void* __right_value38;
void* __right_value41;
struct smart_pointer$1float* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value38 = (void*)0;
__right_value41 = (void*)0;
    __result21__ = __result_obj__ = ((struct smart_pointer$1float*)(__right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(__right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./neo-c.h", 2181, "smart_pointer$1float")))),self,len)));
    come_call_finalizer3(__right_value38,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value41,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result21__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long int len){
void* __result_obj__;
void* __right_value42;
void* __right_value45;
struct smart_pointer$1double* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value42 = (void*)0;
__right_value45 = (void*)0;
    __result23__ = __result_obj__ = ((struct smart_pointer$1double*)(__right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(__right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./neo-c.h", 2186, "smart_pointer$1double")))),self,len)));
    come_call_finalizer3(__right_value42,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value45,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    return __result23__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long int len){
void* __result_obj__;
void* __right_value46;
void* __right_value50;
struct list$1char* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value46 = (void*)0;
__right_value50 = (void*)0;
    __result26__ = __result_obj__ = ((struct list$1char*)(__right_value50=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count(((struct list$1char*)(__right_value46=(struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./neo-c.h", 2191, "list$1char")))),len,self)));
    come_call_finalizer3(__right_value46,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value50,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result26__;
}
static inline struct list$1short* shortpa_to_list(short short* self, unsigned long int len){
void* __result_obj__;
void* __right_value51;
void* __right_value55;
struct list$1short* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value51 = (void*)0;
__right_value55 = (void*)0;
    __result29__ = __result_obj__ = ((struct list$1short*)(__right_value55=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count(((struct list$1short*)(__right_value51=(struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./neo-c.h", 2196, "list$1short")))),len,self)));
    come_call_finalizer3(__right_value51,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value55,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result29__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long int len){
void* __result_obj__;
void* __right_value56;
void* __right_value60;
struct list$1int* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value56 = (void*)0;
__right_value60 = (void*)0;
    __result32__ = __result_obj__ = ((struct list$1int*)(__right_value60=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(__right_value56=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./neo-c.h", 2201, "list$1int")))),len,self)));
    come_call_finalizer3(__right_value56,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value60,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result32__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long int len){
void* __result_obj__;
void* __right_value61;
void* __right_value65;
struct list$1long* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value61 = (void*)0;
__right_value65 = (void*)0;
    __result35__ = __result_obj__ = ((struct list$1long*)(__right_value65=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count(((struct list$1long*)(__right_value61=(struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./neo-c.h", 2206, "list$1long")))),len,self)));
    come_call_finalizer3(__right_value61,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value65,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result35__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long int len){
void* __result_obj__;
void* __right_value66;
void* __right_value70;
struct list$1float* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value66 = (void*)0;
__right_value70 = (void*)0;
    __result38__ = __result_obj__ = ((struct list$1float*)(__right_value70=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count(((struct list$1float*)(__right_value66=(struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./neo-c.h", 2211, "list$1float")))),len,self)));
    come_call_finalizer3(__right_value66,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value70,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result38__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long int len){
void* __result_obj__;
void* __right_value71;
void* __right_value75;
struct list$1double* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value71 = (void*)0;
__right_value75 = (void*)0;
    __result41__ = __result_obj__ = ((struct list$1double*)(__right_value75=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count(((struct list$1double*)(__right_value71=(struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./neo-c.h", 2216, "list$1double")))),len,self)));
    come_call_finalizer3(__right_value71,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value75,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
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
void* __right_value76;
char* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value76 = (void*)0;
    __result42__ = __result_obj__ = ((char*)(__right_value76=xsprintf(msg,self)));
    __right_value76 = come_decrement_ref_count2(__right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result42__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* __right_value77;
char* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value77 = (void*)0;
    __result43__ = __result_obj__ = ((char*)(__right_value77=xsprintf(msg,self)));
    __right_value77 = come_decrement_ref_count2(__right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result43__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__;
void* __right_value78;
char* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value78 = (void*)0;
    __result44__ = __result_obj__ = ((char*)(__right_value78=xsprintf(msg,self)));
    __right_value78 = come_decrement_ref_count2(__right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* __right_value23;
void* __right_value24;
struct buffer* __dec_obj6;
struct smart_pointer$1char* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value23 = (void*)0;
__right_value24 = (void*)0;
        __dec_obj6=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2002, "buffer"))))))));
        come_call_finalizer3(__dec_obj6,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value23,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(char)*size);
        self->p=(char*)self->memory->buf;
        __result12__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
        return __result12__;
        come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size){
void* __result_obj__;
void* __right_value27;
void* __right_value28;
struct buffer* __dec_obj7;
struct smart_pointer$1short* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value27 = (void*)0;
__right_value28 = (void*)0;
        __dec_obj7=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2002, "buffer"))))))));
        come_call_finalizer3(__dec_obj7,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value27,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(short short)*size);
        self->p=(short short*)self->memory->buf;
        __result14__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
        return __result14__;
        come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size){
void* __result_obj__;
void* __right_value31;
void* __right_value32;
struct buffer* __dec_obj8;
struct smart_pointer$1int* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value31 = (void*)0;
__right_value32 = (void*)0;
        __dec_obj8=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2002, "buffer"))))))));
        come_call_finalizer3(__dec_obj8,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value31,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(int)*size);
        self->p=(int*)self->memory->buf;
        __result16__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
        return __result16__;
        come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size){
void* __result_obj__;
void* __right_value35;
void* __right_value36;
struct buffer* __dec_obj9;
struct smart_pointer$1long* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value35 = (void*)0;
__right_value36 = (void*)0;
        __dec_obj9=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2002, "buffer"))))))));
        come_call_finalizer3(__dec_obj9,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value35,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(long)*size);
        self->p=(long*)self->memory->buf;
        __result18__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
        return __result18__;
        come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size){
void* __result_obj__;
void* __right_value39;
void* __right_value40;
struct buffer* __dec_obj10;
struct smart_pointer$1float* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value39 = (void*)0;
__right_value40 = (void*)0;
        __dec_obj10=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2002, "buffer"))))))));
        come_call_finalizer3(__dec_obj10,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value39,buffer_finalize, 0, 1, 0, 0, __result_obj__);
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
void* __right_value43;
void* __right_value44;
struct buffer* __dec_obj11;
struct smart_pointer$1double* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value43 = (void*)0;
__right_value44 = (void*)0;
        __dec_obj11=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2002, "buffer"))))))));
        come_call_finalizer3(__dec_obj11,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value43,buffer_finalize, 0, 1, 0, 0, __result_obj__);
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
void* __right_value47;
struct list_item$1char* litem_12;
void* __right_value48;
struct list_item$1char* litem_13;
void* __right_value49;
struct list_item$1char* litem_14;
struct list$1char* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value47 = (void*)0;
memset(&litem_12, 0, sizeof(struct list_item$1char*));
__right_value48 = (void*)0;
memset(&litem_13, 0, sizeof(struct list_item$1char*));
__right_value49 = (void*)0;
memset(&litem_14, 0, sizeof(struct list_item$1char*));
                if(self->len==0) {
                    litem_12=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value47=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 219, "list_item$1char"))));
                    come_call_finalizer3(__right_value47,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_12->prev=((void*)0);
                    litem_12->next=((void*)0);
                    litem_12->item=item;
                    self->tail=litem_12;
                    self->head=litem_12;
                }
                else {
                    if(self->len==1) {
                        litem_13=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value48=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 229, "list_item$1char"))));
                        come_call_finalizer3(__right_value48,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_13->prev=self->head;
                        litem_13->next=((void*)0);
                        litem_13->item=item;
                        self->tail=litem_13;
                        self->head->next=litem_13;
                    }
                    else {
                        litem_14=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value49=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 239, "list_item$1char"))));
                        come_call_finalizer3(__right_value49,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
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
void* __right_value52;
struct list_item$1short* litem_18;
void* __right_value53;
struct list_item$1short* litem_19;
void* __right_value54;
struct list_item$1short* litem_20;
struct list$1short* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value52 = (void*)0;
memset(&litem_18, 0, sizeof(struct list_item$1short*));
__right_value53 = (void*)0;
memset(&litem_19, 0, sizeof(struct list_item$1short*));
__right_value54 = (void*)0;
memset(&litem_20, 0, sizeof(struct list_item$1short*));
                if(self->len==0) {
                    litem_18=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value52=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 219, "list_item$1short"))));
                    come_call_finalizer3(__right_value52,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_18->prev=((void*)0);
                    litem_18->next=((void*)0);
                    litem_18->item=item;
                    self->tail=litem_18;
                    self->head=litem_18;
                }
                else {
                    if(self->len==1) {
                        litem_19=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value53=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 229, "list_item$1short"))));
                        come_call_finalizer3(__right_value53,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_19->prev=self->head;
                        litem_19->next=((void*)0);
                        litem_19->item=item;
                        self->tail=litem_19;
                        self->head->next=litem_19;
                    }
                    else {
                        litem_20=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value54=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 239, "list_item$1short"))));
                        come_call_finalizer3(__right_value54,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
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
void* __right_value57;
struct list_item$1int* litem_24;
void* __right_value58;
struct list_item$1int* litem_25;
void* __right_value59;
struct list_item$1int* litem_26;
struct list$1int* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value57 = (void*)0;
memset(&litem_24, 0, sizeof(struct list_item$1int*));
__right_value58 = (void*)0;
memset(&litem_25, 0, sizeof(struct list_item$1int*));
__right_value59 = (void*)0;
memset(&litem_26, 0, sizeof(struct list_item$1int*));
                if(self->len==0) {
                    litem_24=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value57=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 219, "list_item$1int"))));
                    come_call_finalizer3(__right_value57,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_24->prev=((void*)0);
                    litem_24->next=((void*)0);
                    litem_24->item=item;
                    self->tail=litem_24;
                    self->head=litem_24;
                }
                else {
                    if(self->len==1) {
                        litem_25=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value58=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 229, "list_item$1int"))));
                        come_call_finalizer3(__right_value58,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_25->prev=self->head;
                        litem_25->next=((void*)0);
                        litem_25->item=item;
                        self->tail=litem_25;
                        self->head->next=litem_25;
                    }
                    else {
                        litem_26=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value59=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 239, "list_item$1int"))));
                        come_call_finalizer3(__right_value59,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
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
void* __right_value62;
struct list_item$1long* litem_30;
void* __right_value63;
struct list_item$1long* litem_31;
void* __right_value64;
struct list_item$1long* litem_32;
struct list$1long* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value62 = (void*)0;
memset(&litem_30, 0, sizeof(struct list_item$1long*));
__right_value63 = (void*)0;
memset(&litem_31, 0, sizeof(struct list_item$1long*));
__right_value64 = (void*)0;
memset(&litem_32, 0, sizeof(struct list_item$1long*));
                if(self->len==0) {
                    litem_30=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value62=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 219, "list_item$1long"))));
                    come_call_finalizer3(__right_value62,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_30->prev=((void*)0);
                    litem_30->next=((void*)0);
                    litem_30->item=item;
                    self->tail=litem_30;
                    self->head=litem_30;
                }
                else {
                    if(self->len==1) {
                        litem_31=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value63=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 229, "list_item$1long"))));
                        come_call_finalizer3(__right_value63,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_31->prev=self->head;
                        litem_31->next=((void*)0);
                        litem_31->item=item;
                        self->tail=litem_31;
                        self->head->next=litem_31;
                    }
                    else {
                        litem_32=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value64=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 239, "list_item$1long"))));
                        come_call_finalizer3(__right_value64,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
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
void* __right_value67;
struct list_item$1float* litem_36;
void* __right_value68;
struct list_item$1float* litem_37;
void* __right_value69;
struct list_item$1float* litem_38;
struct list$1float* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value67 = (void*)0;
memset(&litem_36, 0, sizeof(struct list_item$1float*));
__right_value68 = (void*)0;
memset(&litem_37, 0, sizeof(struct list_item$1float*));
__right_value69 = (void*)0;
memset(&litem_38, 0, sizeof(struct list_item$1float*));
                if(self->len==0) {
                    litem_36=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value67=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 219, "list_item$1float"))));
                    come_call_finalizer3(__right_value67,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_36->prev=((void*)0);
                    litem_36->next=((void*)0);
                    litem_36->item=item;
                    self->tail=litem_36;
                    self->head=litem_36;
                }
                else {
                    if(self->len==1) {
                        litem_37=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value68=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 229, "list_item$1float"))));
                        come_call_finalizer3(__right_value68,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_37->prev=self->head;
                        litem_37->next=((void*)0);
                        litem_37->item=item;
                        self->tail=litem_37;
                        self->head->next=litem_37;
                    }
                    else {
                        litem_38=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value69=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 239, "list_item$1float"))));
                        come_call_finalizer3(__right_value69,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
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
void* __right_value72;
struct list_item$1double* litem_42;
void* __right_value73;
struct list_item$1double* litem_43;
void* __right_value74;
struct list_item$1double* litem_44;
struct list$1double* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value72 = (void*)0;
memset(&litem_42, 0, sizeof(struct list_item$1double*));
__right_value73 = (void*)0;
memset(&litem_43, 0, sizeof(struct list_item$1double*));
__right_value74 = (void*)0;
memset(&litem_44, 0, sizeof(struct list_item$1double*));
                if(self->len==0) {
                    litem_42=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value72=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 219, "list_item$1double"))));
                    come_call_finalizer3(__right_value72,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_42->prev=((void*)0);
                    litem_42->next=((void*)0);
                    litem_42->item=item;
                    self->tail=litem_42;
                    self->head=litem_42;
                }
                else {
                    if(self->len==1) {
                        litem_43=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value73=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 229, "list_item$1double"))));
                        come_call_finalizer3(__right_value73,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_43->prev=self->head;
                        litem_43->next=((void*)0);
                        litem_43->item=item;
                        self->tail=litem_43;
                        self->head->next=litem_43;
                    }
                    else {
                        litem_44=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value74=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 239, "list_item$1double"))));
                        come_call_finalizer3(__right_value74,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
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
void* __right_value79;
void* __right_value80;
char* __dec_obj12;
void* __right_value116;
struct sType* __dec_obj36;
struct sNode* __dec_obj37;
void* __right_value117;
struct list$1charph* __dec_obj38;
void* __right_value128;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj45;
struct sStoreNode* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value79 = (void*)0;
__right_value80 = (void*)0;
__right_value116 = (void*)0;
__right_value117 = (void*)0;
__right_value128 = (void*)0;
    ((struct sNodeBase*)(__right_value79=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value79,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj12=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(__right_value80=__builtin_string(name))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->alloc=alloc;
    ((void*)0);
    __dec_obj36=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value116=sType_clone(type))));
    come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj37=self->right_value;
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); }
    ((void*)0);
    __dec_obj38=self->multiple_assign;
    self->multiple_assign=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value117=list$1charphp_clone(multiple_assign))));
    come_call_finalizer3(__dec_obj38,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    ((void*)0);
    __dec_obj45=self->multiple_declare;
    self->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(__right_value128=list$1tuple3$3sTypephcharphsNodephphp_clone(multiple_declare))));
    come_call_finalizer3(__dec_obj45,list$1tuple3$3sTypephcharphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value129;
char* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value129 = (void*)0;
    __result70__ = __result_obj__ = ((char*)(__right_value129=__builtin_string("sStoreNode")));
    __right_value129 = come_decrement_ref_count2(__right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result70__;
}

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info){
struct sVar* var__87;
void* __right_value130;
struct sType* type_91;
struct list$1tuple3$3sTypephcharphsNodephph* o2_saved_92;
struct tuple3$3sTypephcharphsNodeph* it_95;
struct tuple3$3sTypephcharphsNodeph* multiple_assign_var1;
struct sType* type_98;
char* var_name_99;
struct sNode* right_value_100;
void* __right_value131;
_Bool __result81__;
void* __right_value132;
struct sType* left_type_101;
_Bool __result82__;
void* __right_value133;
struct CVALUE* come_value_102;
void* __right_value134;
void* __right_value135;
void* __right_value136;
void* __right_value137;
struct CVALUE* right_value_103;
struct sType* right_type_104;
int i_105;
struct list$1charph* o2_saved_106;
char* it_109;
struct sType* right_type2_112;
void* __right_value138;
void* __right_value139;
char* multiple_var_name_117;
void* __right_value140;
void* __right_value141;
char* __dec_obj46;
struct list$1charph* o2_saved_118;
char* it_119;
void* __right_value142;
struct sType* right_type2_120;
struct sVar* var__121;
void* __right_value143;
struct sType* var_type_122;
void* __right_value144;
struct sType* left_type_123;
void* __right_value145;
void* __right_value146;
struct CVALUE* right_value2_124;
void* __right_value147;
char* __dec_obj47;
void* __right_value148;
struct sType* __dec_obj48;
void* __right_value149;
void* __right_value150;
struct CVALUE* come_value_125;
void* __right_value151;
void* __right_value152;
void* __right_value153;
char* __dec_obj49;
int right_value_id_126;
void* __right_value154;
char* __dec_obj50;
void* __right_value155;
struct sType* __dec_obj51;
void* __right_value156;
struct sVar* var__127;
void* __right_value157;
struct sType* type_128;
void* __right_value158;
_Bool __result91__;
void* __right_value159;
struct sType* left_type_129;
void* __right_value160;
void* __right_value161;
struct list$1sNodeph* o2_saved_130;
struct sNode* it_133;
void* __right_value162;
struct CVALUE* come_value_136;
void* __right_value163;
void* __right_value164;
struct sType* left_type2_137;
void* __right_value165;
void* __right_value166;
void* __right_value167;
struct CVALUE* come_value_138;
void* __right_value168;
char* __dec_obj52;
void* __right_value169;
struct sType* __dec_obj53;
struct sVar* var__142;
void* __right_value173;
struct sType* type_143;
void* __right_value174;
void* __right_value175;
_Bool array_initializer_144;
void* __right_value176;
struct CVALUE* right_value_145;
struct sType* right_type_146;
void* __right_value177;
void* __right_value178;
struct sType* var_type_147;
void* __right_value179;
void* __right_value180;
struct sType* left_type_148;
struct sVar* var__149;
void* __right_value181;
void* __right_value182;
void* __right_value183;
struct CVALUE* come_value_150;
void* __right_value184;
char* __dec_obj57;
void* __right_value185;
void* __right_value186;
void* __right_value187;
void* __right_value188;
void* __right_value189;
struct CVALUE* come_value_151;
void* __right_value190;
char* __dec_obj58;
void* __right_value191;
void* __right_value192;
int right_value_id_152;
void* __right_value193;
void* __right_value194;
void* __right_value195;
struct CVALUE* come_value_153;
void* __right_value196;
char* __dec_obj59;
void* __right_value197;
struct sType* __dec_obj60;
void* __right_value198;
void* __right_value199;
void* __right_value200;
void* __right_value201;
void* __right_value202;
struct CVALUE* come_value_154;
void* __right_value203;
char* __dec_obj61;
void* __right_value204;
struct sType* __dec_obj62;
void* __right_value205;
void* __right_value206;
_Bool __result99__;
void* __right_value207;
void* __right_value208;
void* __right_value209;
struct CVALUE* come_value_155;
void* __right_value210;
char* __dec_obj63;
void* __right_value211;
struct sType* __dec_obj64;
void* __right_value212;
struct CVALUE* right_value_156;
struct sType* right_type_157;
struct sClass* current_stack_frame_struct_158;
struct sVar* parent_var_159;
struct sType* left_type_160;
void* __right_value213;
void* __right_value214;
void* __right_value215;
char* c_value_161;
int right_value_id_162;
void* __right_value216;
void* __right_value217;
struct CVALUE* come_value_163;
void* __right_value218;
char* __dec_obj65;
void* __right_value219;
struct sType* __dec_obj66;
_Bool __result100__;
void* __right_value220;
void* __right_value221;
void* __right_value222;
char* c_value_164;
void* __right_value223;
void* __right_value224;
struct CVALUE* come_value_165;
void* __right_value225;
char* __dec_obj67;
void* __right_value226;
struct sType* __dec_obj68;
_Bool __result101__;
void* __right_value227;
void* __right_value228;
_Bool __result102__;
void* __right_value229;
void* __right_value230;
struct CVALUE* come_value_166;
void* __right_value231;
char* __dec_obj69;
void* __right_value232;
struct sType* __dec_obj70;
_Bool __result103__;
struct sVar* var__167;
_Bool __result104__;
void* __right_value233;
struct sType* __dec_obj71;
void* __right_value234;
struct sType* left_type_168;
void* __right_value235;
void* __right_value236;
void* __right_value237;
void* __right_value238;
struct CVALUE* come_value_169;
void* __right_value239;
char* __dec_obj72;
void* __right_value240;
struct sType* __dec_obj73;
void* __right_value241;
void* __right_value242;
int right_value_id_170;
void* __right_value243;
void* __right_value244;
struct CVALUE* come_value_171;
void* __right_value245;
char* __dec_obj74;
void* __right_value246;
struct sType* __dec_obj75;
void* __right_value247;
void* __right_value248;
void* __right_value249;
void* __right_value250;
struct CVALUE* come_value_172;
void* __right_value251;
char* __dec_obj76;
void* __right_value252;
struct sType* __dec_obj77;
void* __right_value253;
void* __right_value254;
_Bool __result105__;
void* __right_value255;
void* __right_value256;
struct CVALUE* come_value_173;
void* __right_value257;
char* __dec_obj78;
void* __right_value258;
struct sType* __dec_obj79;
memset(&var__87, 0, sizeof(struct sVar*));
__right_value130 = (void*)0;
memset(&type_91, 0, sizeof(struct sType*));
memset(&o2_saved_92, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&it_95, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
__right_value131 = (void*)0;
__right_value132 = (void*)0;
memset(&left_type_101, 0, sizeof(struct sType*));
__right_value133 = (void*)0;
memset(&come_value_102, 0, sizeof(struct CVALUE*));
__right_value134 = (void*)0;
__right_value135 = (void*)0;
__right_value136 = (void*)0;
__right_value137 = (void*)0;
memset(&right_value_103, 0, sizeof(struct CVALUE*));
memset(&right_type_104, 0, sizeof(struct sType*));
memset(&o2_saved_106, 0, sizeof(struct list$1charph*));
memset(&right_type2_112, 0, sizeof(struct sType*));
__right_value138 = (void*)0;
__right_value139 = (void*)0;
memset(&multiple_var_name_117, 0, sizeof(char*));
__right_value140 = (void*)0;
__right_value141 = (void*)0;
memset(&o2_saved_118, 0, sizeof(struct list$1charph*));
__right_value142 = (void*)0;
memset(&right_type2_120, 0, sizeof(struct sType*));
memset(&var__121, 0, sizeof(struct sVar*));
__right_value143 = (void*)0;
memset(&var_type_122, 0, sizeof(struct sType*));
__right_value144 = (void*)0;
memset(&left_type_123, 0, sizeof(struct sType*));
__right_value145 = (void*)0;
__right_value146 = (void*)0;
memset(&right_value2_124, 0, sizeof(struct CVALUE*));
__right_value147 = (void*)0;
__right_value148 = (void*)0;
__right_value149 = (void*)0;
__right_value150 = (void*)0;
memset(&come_value_125, 0, sizeof(struct CVALUE*));
__right_value151 = (void*)0;
__right_value152 = (void*)0;
__right_value153 = (void*)0;
__right_value154 = (void*)0;
__right_value155 = (void*)0;
__right_value156 = (void*)0;
memset(&var__127, 0, sizeof(struct sVar*));
__right_value157 = (void*)0;
memset(&type_128, 0, sizeof(struct sType*));
__right_value158 = (void*)0;
__right_value159 = (void*)0;
memset(&left_type_129, 0, sizeof(struct sType*));
__right_value160 = (void*)0;
__right_value161 = (void*)0;
memset(&o2_saved_130, 0, sizeof(struct list$1sNodeph*));
memset(&it_133, 0, sizeof(struct sNode*));
__right_value162 = (void*)0;
memset(&come_value_136, 0, sizeof(struct CVALUE*));
__right_value163 = (void*)0;
__right_value164 = (void*)0;
memset(&left_type2_137, 0, sizeof(struct sType*));
__right_value165 = (void*)0;
__right_value166 = (void*)0;
__right_value167 = (void*)0;
memset(&come_value_138, 0, sizeof(struct CVALUE*));
__right_value168 = (void*)0;
__right_value169 = (void*)0;
memset(&var__142, 0, sizeof(struct sVar*));
__right_value173 = (void*)0;
memset(&type_143, 0, sizeof(struct sType*));
__right_value174 = (void*)0;
__right_value175 = (void*)0;
__right_value176 = (void*)0;
memset(&right_value_145, 0, sizeof(struct CVALUE*));
memset(&right_type_146, 0, sizeof(struct sType*));
__right_value177 = (void*)0;
__right_value178 = (void*)0;
memset(&var_type_147, 0, sizeof(struct sType*));
__right_value179 = (void*)0;
__right_value180 = (void*)0;
memset(&left_type_148, 0, sizeof(struct sType*));
memset(&var__149, 0, sizeof(struct sVar*));
__right_value181 = (void*)0;
__right_value182 = (void*)0;
__right_value183 = (void*)0;
memset(&come_value_150, 0, sizeof(struct CVALUE*));
__right_value184 = (void*)0;
__right_value185 = (void*)0;
__right_value186 = (void*)0;
__right_value187 = (void*)0;
__right_value188 = (void*)0;
__right_value189 = (void*)0;
memset(&come_value_151, 0, sizeof(struct CVALUE*));
__right_value190 = (void*)0;
__right_value191 = (void*)0;
__right_value192 = (void*)0;
__right_value193 = (void*)0;
__right_value194 = (void*)0;
__right_value195 = (void*)0;
memset(&come_value_153, 0, sizeof(struct CVALUE*));
__right_value196 = (void*)0;
__right_value197 = (void*)0;
__right_value198 = (void*)0;
__right_value199 = (void*)0;
__right_value200 = (void*)0;
__right_value201 = (void*)0;
__right_value202 = (void*)0;
memset(&come_value_154, 0, sizeof(struct CVALUE*));
__right_value203 = (void*)0;
__right_value204 = (void*)0;
__right_value205 = (void*)0;
__right_value206 = (void*)0;
__right_value207 = (void*)0;
__right_value208 = (void*)0;
__right_value209 = (void*)0;
memset(&come_value_155, 0, sizeof(struct CVALUE*));
__right_value210 = (void*)0;
__right_value211 = (void*)0;
__right_value212 = (void*)0;
memset(&right_value_156, 0, sizeof(struct CVALUE*));
memset(&right_type_157, 0, sizeof(struct sType*));
memset(&current_stack_frame_struct_158, 0, sizeof(struct sClass*));
memset(&parent_var_159, 0, sizeof(struct sVar*));
memset(&left_type_160, 0, sizeof(struct sType*));
__right_value213 = (void*)0;
__right_value214 = (void*)0;
__right_value215 = (void*)0;
memset(&c_value_161, 0, sizeof(char*));
__right_value216 = (void*)0;
__right_value217 = (void*)0;
memset(&come_value_163, 0, sizeof(struct CVALUE*));
__right_value218 = (void*)0;
__right_value219 = (void*)0;
__right_value220 = (void*)0;
__right_value221 = (void*)0;
__right_value222 = (void*)0;
memset(&c_value_164, 0, sizeof(char*));
__right_value223 = (void*)0;
__right_value224 = (void*)0;
memset(&come_value_165, 0, sizeof(struct CVALUE*));
__right_value225 = (void*)0;
__right_value226 = (void*)0;
__right_value227 = (void*)0;
__right_value228 = (void*)0;
__right_value229 = (void*)0;
__right_value230 = (void*)0;
memset(&come_value_166, 0, sizeof(struct CVALUE*));
__right_value231 = (void*)0;
__right_value232 = (void*)0;
memset(&var__167, 0, sizeof(struct sVar*));
__right_value233 = (void*)0;
__right_value234 = (void*)0;
memset(&left_type_168, 0, sizeof(struct sType*));
__right_value235 = (void*)0;
__right_value236 = (void*)0;
__right_value237 = (void*)0;
__right_value238 = (void*)0;
memset(&come_value_169, 0, sizeof(struct CVALUE*));
__right_value239 = (void*)0;
__right_value240 = (void*)0;
__right_value241 = (void*)0;
__right_value242 = (void*)0;
__right_value243 = (void*)0;
__right_value244 = (void*)0;
memset(&come_value_171, 0, sizeof(struct CVALUE*));
__right_value245 = (void*)0;
__right_value246 = (void*)0;
__right_value247 = (void*)0;
__right_value248 = (void*)0;
__right_value249 = (void*)0;
__right_value250 = (void*)0;
memset(&come_value_172, 0, sizeof(struct CVALUE*));
__right_value251 = (void*)0;
__right_value252 = (void*)0;
__right_value253 = (void*)0;
__right_value254 = (void*)0;
__right_value255 = (void*)0;
__right_value256 = (void*)0;
memset(&come_value_173, 0, sizeof(struct CVALUE*));
__right_value257 = (void*)0;
__right_value258 = (void*)0;
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
        type_91=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value130=solve_generics(self->type,info->generics_type,info))));
        type_91->mFunctionParam=(_Bool)0;
        for(        o2_saved_92=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((self->multiple_declare)),it_95=list$1tuple3$3sTypephcharphsNodephph_begin((o2_saved_92));        !list$1tuple3$3sTypephcharphsNodephph_end((o2_saved_92));        it_95=list$1tuple3$3sTypephcharphsNodephph_next((o2_saved_92))        ){
            multiple_assign_var1=it_95;
            type_98=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            var_name_99=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            right_value_100=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v3);
            add_variable_to_table(var_name_99,(struct sType*)come_increment_ref_count(((struct sType*)(__right_value131=sType_clone(type_98)))),info);
            come_call_finalizer3(__right_value131,sType_finalize, 0, 1, 0, 0, (void*)0);
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
            left_type_101=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value132=sType_clone(var__87->mType))));
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
                come_value_102=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value133=get_value_from_stack(-1,info))));
                dec_stack_ptr(1,info);
                add_come_code(info,"%s=%s;\n",((char*)(__right_value134=make_define_var(left_type_101,var__87->mCValueName,(_Bool)0,info))),come_value_102->c_value);
                __right_value134 = come_decrement_ref_count2(__right_value134, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(come_value_102,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__87->mCValueName,((char*)(__right_value135=make_type_name_string(left_type_101,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                __right_value135 = come_decrement_ref_count2(__right_value135, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value136=make_define_var(left_type_101,var__87->mCValueName,(_Bool)0,info))));
                __right_value136 = come_decrement_ref_count2(__right_value136, (void*)0, (void*)0, 1, 0, 0, (void*)0);
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
            right_value_103=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value137=get_value_from_stack(-1,info))));
            right_type_104=right_value_103->type;
            dec_stack_ptr(1,info);
            if(right_type_104->mNoSolvedGenericsType->v1) {
                right_type_104=right_type_104->mNoSolvedGenericsType->v1;
            }
            i_105=0;
            for(            o2_saved_106=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_109=list$1charph_begin((o2_saved_106));            !list$1charph_end((o2_saved_106));            it_109=list$1charph_next((o2_saved_106))            ){
                if(i_105<list$1sTypeph_length(right_type_104->mGenericsTypes)) {
                    right_type2_112=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(right_type_104->mGenericsTypes,i_105), "07var.c", 86, 0));
                    right_type2_112->mFunctionParam=(_Bool)0;
                    add_variable_to_table(it_109,(struct sType*)come_increment_ref_count(((struct sType*)(__right_value138=sType_clone(right_type2_112)))),info);
                    come_call_finalizer3(__right_value138,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                i_105++;
            }
            come_call_finalizer3(o2_saved_106,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            static int num_multiple_var_116=0;
            multiple_var_name_117=(char*)come_increment_ref_count(((char*)(__right_value139=xsprintf("multiple_assign_var%d",++num_multiple_var_116))));
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value140=make_define_var(right_value_103->type,multiple_var_name_117,(_Bool)0,info))));
            __right_value140 = come_decrement_ref_count2(__right_value140, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            add_come_code(info,"%s=%s;\n",multiple_var_name_117,right_value_103->c_value);
            __dec_obj46=right_value_103->c_value;
            right_value_103->c_value=(char*)come_increment_ref_count(((char*)(__right_value141=string_clone(multiple_var_name_117))));
            __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
            i_105=0;
            for(            o2_saved_118=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_119=list$1charph_begin((o2_saved_118));            !list$1charph_end((o2_saved_118));            it_119=list$1charph_next((o2_saved_118))            ){
                if(i_105<list$1sTypeph_length(right_type_104->mGenericsTypes)) {
                    right_type2_120=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value142=sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(right_type_104->mGenericsTypes,i_105), "07var.c", 105, 1))))));
                    var__121=get_variable_from_table(info->lv_table,it_119);
                    var_type_122=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value143=sType_clone(var__121->mType))));
                    var_type_122->mStatic=(_Bool)0;
                    left_type_123=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value144=sType_clone(var__121->mType))));
                    right_value2_124=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value146=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value145=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 114, "CVALUE"))))))));
                    come_call_finalizer3(__right_value145,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                    __dec_obj47=right_value2_124->c_value;
                    right_value2_124->c_value=(char*)come_increment_ref_count(((char*)(__right_value147=xsprintf("%s->v%d",right_value_103->c_value,i_105+1))));
                    __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj48=right_value2_124->type;
                    right_value2_124->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value148=sType_clone(right_type2_120))));
                    come_call_finalizer3(__dec_obj48,sType_finalize, 0, 0, 0, 0, (void*)0);
                    right_value2_124->var=((void*)0);
                    come_value_125=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value150=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value149=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 120, "CVALUE"))))))));
                    come_call_finalizer3(__right_value149,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                    check_assign_type(((char*)(__right_value152=xsprintf("\%s is assining to}",((char*)(__right_value151=string_to_string(self->name)))))),left_type_123,right_type2_120,come_value_125,(_Bool)0,(_Bool)1,info);
                    __right_value151 = come_decrement_ref_count2(__right_value151, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value152 = come_decrement_ref_count2(__right_value152, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    if(right_type2_120->mHeap&&left_type_123->mHeap&&left_type_123->mPointerNum>0&&right_type2_120->mPointerNum>0) {
                        std_move(left_type_123,right_type2_120,right_value2_124,info,(_Bool)0);
                        __dec_obj49=come_value_125->c_value;
                        come_value_125->c_value=(char*)come_increment_ref_count(((char*)(__right_value153=xsprintf("%s=%s",var__121->mCValueName,right_value2_124->c_value))));
                        __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value_id_126=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value2_124->c_value));
                        if(right_value_id_126!=-1) {
                            remove_object_from_right_values(right_value_id_126,info);
                        }
                    }
                    else {
                        __dec_obj50=come_value_125->c_value;
                        come_value_125->c_value=(char*)come_increment_ref_count(((char*)(__right_value154=xsprintf("%s=%s",var__121->mCValueName,right_value2_124->c_value))));
                        __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    __dec_obj51=come_value_125->type;
                    come_value_125->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value155=sType_clone(left_type_123))));
                    come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_125->var=var__121;
                    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value156=make_define_var(left_type_123,var__121->mCValueName,(_Bool)0,info))));
                    __right_value156 = come_decrement_ref_count2(__right_value156, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    add_come_code(info,"%s;\n",come_value_125->c_value);
                    come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(var_type_122,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_type_123,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value2_124,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_125,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                i_105++;
            }
            come_call_finalizer3(o2_saved_118,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value_103,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            multiple_var_name_117 = come_decrement_ref_count2(multiple_var_name_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(self->right_value==((void*)0)) {
                var__127=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
                if(var__127) {
                    err_msg(info,"Already appended this var name(%s)(1)",self->name);
                    return (_Bool)0;
                }
                if(self->type==((void*)0)) {
                    err_msg(info,"Require concrete variable type(%s)",self->name);
                    return (_Bool)0;
                }
                type_128=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value157=solve_generics(self->type,info->generics_type,info))));
                type_128->mFunctionParam=(_Bool)0;
                add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(__right_value158=sType_clone(type_128)))),info);
                come_call_finalizer3(__right_value158,sType_finalize, 0, 1, 0, 0, (void*)0);
                var__127=get_variable_from_table(info->lv_table,self->name);
                if(var__127==((void*)0)) {
                    var__127=get_variable_from_table(info->gv_table,self->name);
                    if(var__127==((void*)0)) {
                        err_msg(info,"var not found(%s)(Y) at definition of variable\n",self->name);
                        __result91__ = (_Bool)1;
                        come_call_finalizer3(type_128,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result91__;
                    }
                }
                left_type_129=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value159=sType_clone(var__127->mType))));
                if(list$1sNodeph_length(left_type_129->mArrayNum)>0) {
                    add_come_code(info,"%s;\n",((char*)(__right_value160=make_define_var(left_type_129,var__127->mCValueName,(_Bool)0,info))));
                    __right_value160 = come_decrement_ref_count2(__right_value160, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__127->mCValueName,((char*)(__right_value161=make_type_name_string(left_type_129,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                    __right_value161 = come_decrement_ref_count2(__right_value161, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    for(                    o2_saved_130=(struct list$1sNodeph*)come_increment_ref_count((left_type_129->mArrayNum)),it_133=list$1sNodeph_begin((o2_saved_130));                    !list$1sNodeph_end((o2_saved_130));                    it_133=list$1sNodeph_next((o2_saved_130))                    ){
                        if(!node_compile(it_133,info)) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        come_value_136=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value162=get_value_from_stack(-1,info))));
                        dec_stack_ptr(1,info);
                        add_come_code(info,"*(%s)",come_value_136->c_value);
                        come_call_finalizer3(come_value_136,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_130,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    add_come_code(info,");\n");
                }
                else {
                    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value163=make_define_var(left_type_129,var__127->mCValueName,(_Bool)0,info))));
                    __right_value163 = come_decrement_ref_count2(__right_value163, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    left_type2_137=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value164=sType_clone(left_type_129))));
                    left_type2_137->mStatic=(_Bool)0;
                    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__127->mCValueName,((char*)(__right_value165=make_type_name_string(left_type2_137,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                    __right_value165 = come_decrement_ref_count2(__right_value165, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(left_type2_137,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_value_138=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value167=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value166=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 207, "CVALUE"))))))));
                come_call_finalizer3(__right_value166,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj52=come_value_138->c_value;
                come_value_138->c_value=(char*)come_increment_ref_count(((char*)(__right_value168=xsprintf("%s",var__127->mCValueName))));
                __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj53=come_value_138->type;
                come_value_138->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value169=sType_clone(left_type_129))));
                come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_138->var=var__127;
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_138));
                if(!left_type_129->mClass->mNumber&&left_type_129->mPointerNum==0) {
                    var__127->mType->mAllocaValue=(_Bool)1;
                }
                come_call_finalizer3(type_128,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_129,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_138,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(self->alloc) {
                    var__142=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
                    if(var__142) {
                        err_msg(info,"Already appended this var name(%s)(2)",self->name);
                        return (_Bool)0;
                    }
                    if(self->type==((void*)0)) {
                    }
                    else {
                        type_143=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value173=solve_generics(self->type,info->generics_type,info))));
                        type_143->mFunctionParam=(_Bool)0;
                        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(__right_value174=sType_clone(type_143)))),info);
                        come_call_finalizer3(__right_value174,sType_finalize, 0, 1, 0, 0, (void*)0);
                        come_call_finalizer3(type_143,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(!node_compile(self->right_value,info)) {
                        return (_Bool)0;
                    }
                    array_initializer_144=string_operator_equals(((char*)(__right_value175=self->right_value->kind(self->right_value->_protocol_obj))),"sArrayInitializer");
                    __right_value175 = come_decrement_ref_count2(__right_value175, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    right_value_145=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value176=get_value_from_stack(-1,info))));
                    right_type_146=right_value_145->type;
                    dec_stack_ptr(1,info);
                    if(self->type==((void*)0)) {
                        right_type_146->mFunctionParam=(_Bool)0;
                        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(__right_value177=sType_clone(right_type_146)))),info);
                        come_call_finalizer3(__right_value177,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    else {
                    }
                    var__142=get_variable_from_table(info->lv_table,self->name);
                    var_type_147=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value178=sType_clone(var__142->mType))));
                    var_type_147->mStatic=(_Bool)0;
                    if(!array_initializer_144&&!var__142->mType->mStatic&&!var_type_147->mConstant&&list$1sNodeph_length(var_type_147->mArrayNum)==0) {
                        if(var_type_147->mClass->mNumber&&!var_type_147->mHeap) {
                        }
                        else {
                            add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__142->mCValueName,((char*)(__right_value179=make_type_name_string(var_type_147,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                            __right_value179 = come_decrement_ref_count2(__right_value179, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        }
                    }
                    left_type_148=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value180=sType_clone(var__142->mType))));
                    if(array_initializer_144) {
                        var__149=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
                        add_come_code(info,"%s=%s;\n",((char*)(__right_value181=make_define_var(var__149->mType,var__149->mCValueName,(_Bool)0,info))),right_value_145->c_value);
                        __right_value181 = come_decrement_ref_count2(__right_value181, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        come_value_150=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value183=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value182=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 271, "CVALUE"))))))));
                        come_call_finalizer3(__right_value182,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                        __dec_obj57=come_value_150->c_value;
                        come_value_150->c_value=(char*)come_increment_ref_count(((char*)(__right_value184=__builtin_string(""))));
                        __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_150));
                        transpiler_clear_last_code(info);
                        come_call_finalizer3(come_value_150,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        if(var__142->mType->mStatic||var__142->mType->mConstant) {
                            check_assign_type(((char*)(__right_value186=xsprintf("\%s is assining to",((char*)(__right_value185=string_to_string(self->name)))))),left_type_148,right_type_146,right_value_145,(_Bool)0,(_Bool)1,info);
                            __right_value185 = come_decrement_ref_count2(__right_value185, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value186 = come_decrement_ref_count2(__right_value186, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            add_come_code(info,"%s=%s;\n",((char*)(__right_value187=make_define_var(left_type_148,var__142->mCValueName,(_Bool)0,info))),right_value_145->c_value);
                            __right_value187 = come_decrement_ref_count2(__right_value187, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            come_value_151=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value189=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value188=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 282, "CVALUE"))))))));
                            come_call_finalizer3(__right_value188,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                            __dec_obj58=come_value_151->c_value;
                            come_value_151->c_value=(char*)come_increment_ref_count(((char*)(__right_value190=__builtin_string(""))));
                            __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
                            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_151));
                            transpiler_clear_last_code(info);
                            come_call_finalizer3(come_value_151,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            if(right_type_146->mHeap&&left_type_148->mHeap&&left_type_148->mPointerNum>0&&right_type_146->mPointerNum>0) {
                                check_assign_type(((char*)(__right_value192=xsprintf("\%s is assining to",((char*)(__right_value191=string_to_string(self->name)))))),left_type_148,right_type_146,right_value_145,(_Bool)0,(_Bool)1,info);
                                __right_value191 = come_decrement_ref_count2(__right_value191, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value192 = come_decrement_ref_count2(__right_value192, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                std_move(left_type_148,right_type_146,right_value_145,info,(_Bool)0);
                                right_value_id_152=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_145->c_value));
                                if(right_value_id_152!=-1) {
                                    remove_object_from_right_values(right_value_id_152,info);
                                }
                                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value193=make_define_var(left_type_148,var__142->mCValueName,(_Bool)0,info))));
                                __right_value193 = come_decrement_ref_count2(__right_value193, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                come_value_153=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value195=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value194=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 302, "CVALUE"))))))));
                                come_call_finalizer3(__right_value194,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                                __dec_obj59=come_value_153->c_value;
                                come_value_153->c_value=(char*)come_increment_ref_count(((char*)(__right_value196=xsprintf("%s=%s",var__142->mCValueName,right_value_145->c_value))));
                                __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
                                __dec_obj60=come_value_153->type;
                                come_value_153->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value197=sType_clone(left_type_148))));
                                come_call_finalizer3(__dec_obj60,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_value_153->var=var__142;
                                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_153));
                                add_come_last_code(info,"%s;\n",come_value_153->c_value);
                                come_call_finalizer3(come_value_153,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            else {
                                if(left_type_148->mPointerNum>0&&left_type_148->mHeap&&string_operator_equals(right_type_146->mClass->mName,"void")&&right_type_146->mPointerNum>0) {
                                    check_assign_type(((char*)(__right_value199=xsprintf("\%s is assining to",((char*)(__right_value198=string_to_string(self->name)))))),left_type_148,right_type_146,right_value_145,(_Bool)0,(_Bool)1,info);
                                    __right_value198 = come_decrement_ref_count2(__right_value198, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value199 = come_decrement_ref_count2(__right_value199, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value200=make_define_var(left_type_148,var__142->mCValueName,(_Bool)0,info))));
                                    __right_value200 = come_decrement_ref_count2(__right_value200, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    come_value_154=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value202=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value201=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 319, "CVALUE"))))))));
                                    come_call_finalizer3(__right_value201,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                                    __dec_obj61=come_value_154->c_value;
                                    come_value_154->c_value=(char*)come_increment_ref_count(((char*)(__right_value203=xsprintf("%s=%s",var__142->mCValueName,right_value_145->c_value))));
                                    __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    __dec_obj62=come_value_154->type;
                                    come_value_154->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value204=sType_clone(left_type_148))));
                                    come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    come_value_154->var=var__142;
                                    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_154));
                                    add_come_last_code(info,"%s;\n",come_value_154->c_value);
                                    come_call_finalizer3(come_value_154,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                else {
                                    check_assign_type(((char*)(__right_value206=xsprintf("\%s is assining to",((char*)(__right_value205=string_to_string(self->name)))))),left_type_148,right_type_146,right_value_145,(_Bool)0,(_Bool)1,info);
                                    __right_value205 = come_decrement_ref_count2(__right_value205, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value206 = come_decrement_ref_count2(__right_value206, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    if(left_type_148->mHeap&&!right_value_145->type->mHeap) {
                                        err_msg(info,"require right value as heap object(%s)",self->name);
                                        __result99__ = (_Bool)0;
                                        come_call_finalizer3(right_value_145,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(var_type_147,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(left_type_148,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        return __result99__;
                                    }
                                    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value207=make_define_var(left_type_148,var__142->mCValueName,(_Bool)0,info))));
                                    __right_value207 = come_decrement_ref_count2(__right_value207, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    come_value_155=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value209=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value208=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 339, "CVALUE"))))))));
                                    come_call_finalizer3(__right_value208,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                                    __dec_obj63=come_value_155->c_value;
                                    come_value_155->c_value=(char*)come_increment_ref_count(((char*)(__right_value210=xsprintf("%s=%s",var__142->mCValueName,right_value_145->c_value))));
                                    __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    __dec_obj64=come_value_155->type;
                                    come_value_155->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value211=sType_clone(left_type_148))));
                                    come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    come_value_155->var=var__142;
                                    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_155));
                                    add_come_last_code(info,"%s;\n",come_value_155->c_value);
                                    come_call_finalizer3(come_value_155,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                }
                            }
                        }
                    }
                    come_call_finalizer3(right_value_145,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(var_type_147,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_type_148,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(!node_compile(self->right_value,info)) {
                        return (_Bool)0;
                    }
                    right_value_156=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value212=get_value_from_stack(-1,info))));
                    right_type_157=right_value_156->type;
                    dec_stack_ptr(1,info);
                    current_stack_frame_struct_158=info->current_stack_frame_struct;
                    if(current_stack_frame_struct_158&&map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)==((void*)0)) {
                        parent_var_159=get_variable_from_table(info->lv_table->mParent,self->name);
                        if(parent_var_159!=((void*)0)) {
                            if(string_operator_not_equals(parent_var_159->mFunName,info->come_fun->mName)) {
                                left_type_160=parent_var_159->mType;
                                if(left_type_160->mPointerNum>0&&right_type_157->mPointerNum>0&&right_type_157->mHeap&&left_type_160->mHeap) {
                                    check_assign_type(((char*)(__right_value214=xsprintf("\%s is assigning to",((char*)(__right_value213=string_to_string(self->name)))))),left_type_160,right_type_157,right_value_156,(_Bool)0,(_Bool)1,info);
                                    __right_value213 = come_decrement_ref_count2(__right_value213, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value214 = come_decrement_ref_count2(__right_value214, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    c_value_161=(char*)come_increment_ref_count(((char*)(__right_value215=xsprintf("*(parent->%s)",parent_var_159->mCValueName))));
                                    decrement_ref_count_object(parent_var_159->mType,c_value_161,info,(_Bool)0);
                                    std_move(left_type_160,right_type_157,right_value_156,info,(_Bool)0);
                                    right_value_id_162=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_156->c_value));
                                    if(right_value_id_162!=-1) {
                                        remove_object_from_right_values(right_value_id_162,info);
                                    }
                                    come_value_163=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value217=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value216=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 382, "CVALUE"))))))));
                                    come_call_finalizer3(__right_value216,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                                    __dec_obj65=come_value_163->c_value;
                                    come_value_163->c_value=(char*)come_increment_ref_count(((char*)(__right_value218=xsprintf("(*(parent->%s))=%s",parent_var_159->mCValueName,right_value_156->c_value))));
                                    __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    __dec_obj66=come_value_163->type;
                                    come_value_163->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value219=sType_clone(left_type_160))));
                                    come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    come_value_163->var=((void*)0);
                                    add_come_last_code(info,"%s;\n",come_value_163->c_value);
                                    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_163));
                                    __result100__ = (_Bool)1;
                                    c_value_161 = come_decrement_ref_count2(c_value_161, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(come_value_163,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value_156,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    return __result100__;
                                    c_value_161 = come_decrement_ref_count2(c_value_161, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(come_value_163,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                else {
                                    if(left_type_160->mPointerNum>0&&right_type_157->mPointerNum>0&&string_operator_equals(right_type_157->mClass->mName,"void")&&left_type_160->mHeap) {
                                        check_assign_type(((char*)(__right_value221=xsprintf("\%s is assigning to",((char*)(__right_value220=string_to_string(self->name)))))),left_type_160,right_type_157,right_value_156,(_Bool)0,(_Bool)1,info);
                                        __right_value220 = come_decrement_ref_count2(__right_value220, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        __right_value221 = come_decrement_ref_count2(__right_value221, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        c_value_164=(char*)come_increment_ref_count(((char*)(__right_value222=xsprintf("*(parent->%s)",parent_var_159->mCValueName))));
                                        decrement_ref_count_object(parent_var_159->mType,c_value_164,info,(_Bool)0);
                                        come_value_165=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value224=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value223=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 401, "CVALUE"))))))));
                                        come_call_finalizer3(__right_value223,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                                        __dec_obj67=come_value_165->c_value;
                                        come_value_165->c_value=(char*)come_increment_ref_count(((char*)(__right_value225=xsprintf("(*(parent->%s))=%s",parent_var_159->mCValueName,right_value_156->c_value))));
                                        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        __dec_obj68=come_value_165->type;
                                        come_value_165->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value226=sType_clone(left_type_160))));
                                        come_call_finalizer3(__dec_obj68,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        come_value_165->var=((void*)0);
                                        add_come_last_code(info,"%s;\n",come_value_165->c_value);
                                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_165));
                                        __result101__ = (_Bool)1;
                                        c_value_164 = come_decrement_ref_count2(c_value_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(come_value_165,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value_156,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                        return __result101__;
                                        c_value_164 = come_decrement_ref_count2(c_value_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(come_value_165,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    else {
                                        check_assign_type(((char*)(__right_value228=xsprintf("\%s is assigning to",((char*)(__right_value227=string_to_string(self->name)))))),left_type_160,right_type_157,right_value_156,(_Bool)0,(_Bool)1,info);
                                        __right_value227 = come_decrement_ref_count2(__right_value227, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        __right_value228 = come_decrement_ref_count2(__right_value228, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        if(left_type_160->mHeap&&!right_value_156->type->mHeap) {
                                            err_msg(info,"require right value as heap object(%s)",self->name);
                                            __result102__ = (_Bool)0;
                                            come_call_finalizer3(right_value_156,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                            return __result102__;
                                        }
                                        come_value_166=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value230=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value229=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 421, "CVALUE"))))))));
                                        come_call_finalizer3(__right_value229,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                                        __dec_obj69=come_value_166->c_value;
                                        come_value_166->c_value=(char*)come_increment_ref_count(((char*)(__right_value231=xsprintf("(*(parent->%s))=%s",parent_var_159->mCValueName,right_value_156->c_value))));
                                        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        __dec_obj70=come_value_166->type;
                                        come_value_166->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value232=sType_clone(left_type_160))));
                                        come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        come_value_166->var=((void*)0);
                                        add_come_last_code(info,"%s;\n",come_value_166->c_value);
                                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_166));
                                        __result103__ = (_Bool)1;
                                        come_call_finalizer3(come_value_166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value_156,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                        return __result103__;
                                        come_call_finalizer3(come_value_166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                }
                            }
                        }
                    }
                    var__167=get_variable_from_table(info->lv_table,self->name);
                    if(var__167==((void*)0)) {
                        var__167=get_variable_from_table(info->gv_table,self->name);
                        if(var__167==((void*)0)) {
                            err_msg(info,"var not found(%s)(X) at storing variable\n",self->name);
                            __result104__ = (_Bool)1;
                            come_call_finalizer3(right_value_156,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            return __result104__;
                        }
                    }
                    if(var__167->mType==((void*)0)) {
                        __dec_obj71=var__167->mType;
                        var__167->mType=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value233=sType_clone(right_type_157))));
                        come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    left_type_168=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value234=sType_clone(var__167->mType))));
                    if((var__167->mType->mStatic||var__167->mType->mConstant)&&!var__167->mGlobal) {
                        check_assign_type(((char*)(__right_value236=xsprintf("\%s is assining to",((char*)(__right_value235=string_to_string(self->name)))))),left_type_168,right_type_157,right_value_156,(_Bool)0,(_Bool)1,info);
                        __right_value235 = come_decrement_ref_count2(__right_value235, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value236 = come_decrement_ref_count2(__right_value236, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        come_value_169=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value238=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value237=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 457, "CVALUE"))))))));
                        come_call_finalizer3(__right_value237,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                        __dec_obj72=come_value_169->c_value;
                        come_value_169->c_value=(char*)come_increment_ref_count(((char*)(__right_value239=xsprintf("%s=%s",var__167->mCValueName,right_value_156->c_value))));
                        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                        __dec_obj73=come_value_169->type;
                        come_value_169->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value240=sType_clone(left_type_168))));
                        come_call_finalizer3(__dec_obj73,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_value_169->var=var__167;
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_169));
                        add_come_last_code(info,"%s;\n",come_value_169->c_value);
                        come_call_finalizer3(come_value_169,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        if(right_type_157->mHeap&&left_type_168->mHeap&&left_type_168->mPointerNum>0&&right_type_157->mPointerNum>0) {
                            check_assign_type(((char*)(__right_value242=xsprintf("\%s is assining to",((char*)(__right_value241=string_to_string(self->name)))))),left_type_168,right_type_157,right_value_156,(_Bool)0,(_Bool)1,info);
                            __right_value241 = come_decrement_ref_count2(__right_value241, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value242 = come_decrement_ref_count2(__right_value242, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            decrement_ref_count_object(left_type_168,var__167->mCValueName,info,(_Bool)0);
                            std_move(left_type_168,right_type_157,right_value_156,info,(_Bool)0);
                            right_value_id_170=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_156->c_value));
                            if(right_value_id_170!=-1) {
                                remove_object_from_right_values(right_value_id_170,info);
                            }
                            come_value_171=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value244=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value243=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 480, "CVALUE"))))))));
                            come_call_finalizer3(__right_value243,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                            __dec_obj74=come_value_171->c_value;
                            come_value_171->c_value=(char*)come_increment_ref_count(((char*)(__right_value245=xsprintf("%s=%s",var__167->mCValueName,right_value_156->c_value))));
                            __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                            __dec_obj75=come_value_171->type;
                            come_value_171->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value246=sType_clone(left_type_168))));
                            come_call_finalizer3(__dec_obj75,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_value_171->var=var__167;
                            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_171));
                            add_come_last_code(info,"%s;\n",come_value_171->c_value);
                            come_call_finalizer3(come_value_171,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            if(left_type_168->mPointerNum>0&&left_type_168->mHeap&&string_operator_equals(right_type_157->mClass->mName,"void")&&right_type_157->mPointerNum>0) {
                                check_assign_type(((char*)(__right_value248=xsprintf("\%s is assining to",((char*)(__right_value247=string_to_string(self->name)))))),left_type_168,right_type_157,right_value_156,(_Bool)0,(_Bool)1,info);
                                __right_value247 = come_decrement_ref_count2(__right_value247, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value248 = come_decrement_ref_count2(__right_value248, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                decrement_ref_count_object(left_type_168,var__167->mCValueName,info,(_Bool)0);
                                come_value_172=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value250=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value249=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 496, "CVALUE"))))))));
                                come_call_finalizer3(__right_value249,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                                __dec_obj76=come_value_172->c_value;
                                come_value_172->c_value=(char*)come_increment_ref_count(((char*)(__right_value251=xsprintf("%s=%s",var__167->mCValueName,right_value_156->c_value))));
                                __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
                                __dec_obj77=come_value_172->type;
                                come_value_172->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value252=sType_clone(left_type_168))));
                                come_call_finalizer3(__dec_obj77,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_value_172->var=var__167;
                                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_172));
                                add_come_last_code(info,"%s;\n",come_value_172->c_value);
                                come_call_finalizer3(come_value_172,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            else {
                                check_assign_type(((char*)(__right_value254=xsprintf("\%s is assining to",((char*)(__right_value253=string_to_string(self->name)))))),left_type_168,right_type_157,right_value_156,(_Bool)0,(_Bool)1,info);
                                __right_value253 = come_decrement_ref_count2(__right_value253, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value254 = come_decrement_ref_count2(__right_value254, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                if(left_type_168->mHeap&&!right_value_156->type->mHeap) {
                                    err_msg(info,"require right value as heap object(%s)",self->name);
                                    __result105__ = (_Bool)0;
                                    come_call_finalizer3(right_value_156,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(left_type_168,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    return __result105__;
                                }
                                come_value_173=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value256=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value255=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 514, "CVALUE"))))))));
                                come_call_finalizer3(__right_value255,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                                __dec_obj78=come_value_173->c_value;
                                come_value_173->c_value=(char*)come_increment_ref_count(((char*)(__right_value257=xsprintf("%s=%s",var__167->mCValueName,right_value_156->c_value))));
                                __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
                                __dec_obj79=come_value_173->type;
                                come_value_173->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value258=sType_clone(left_type_168))));
                                come_call_finalizer3(__dec_obj79,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_value_173->var=var__167;
                                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_173));
                                add_come_last_code(info,"%s;\n",come_value_173->c_value);
                                come_call_finalizer3(come_value_173,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                    come_call_finalizer3(right_value_156,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_type_168,sType_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value81;
struct sType* result_47;
void* __right_value88;
struct list$1sTypeph* __dec_obj16;
void* __right_value91;
struct tuple1$1sTypeph* __dec_obj18;
void* __right_value92;
struct tuple1$1sTypeph* __dec_obj19;
void* __right_value93;
char* __dec_obj20;
void* __right_value94;
struct list$1sTypeph* __dec_obj21;
void* __right_value102;
struct list$1sNodeph* __dec_obj25;
void* __right_value103;
struct list$1sTypeph* __dec_obj26;
void* __right_value110;
struct list$1charph* __dec_obj30;
void* __right_value111;
struct tuple1$1sTypeph* __dec_obj31;
void* __right_value112;
struct sNode* __dec_obj32;
void* __right_value113;
struct sNode* __dec_obj33;
void* __right_value114;
char* __dec_obj34;
void* __right_value115;
char* __dec_obj35;
struct sType* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value81 = (void*)0;
memset(&result_47, 0, sizeof(struct sType*));
__right_value88 = (void*)0;
__right_value91 = (void*)0;
__right_value92 = (void*)0;
__right_value93 = (void*)0;
__right_value94 = (void*)0;
__right_value102 = (void*)0;
__right_value103 = (void*)0;
__right_value110 = (void*)0;
__right_value111 = (void*)0;
__right_value112 = (void*)0;
__right_value113 = (void*)0;
__right_value114 = (void*)0;
__right_value115 = (void*)0;
        if(self==(void*)0) {
            __result45__ = __result_obj__ = (void*)0;
            return __result45__;
        }
        result_47=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value81=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        if(self!=((void*)0)) {
            result_47->mClass=self->mClass;
        }
        if(self!=((void*)0)&&self->mMultipleTypes!=((void*)0)) {
            __dec_obj16=result_47->mMultipleTypes;
            result_47->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value88=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer3(__dec_obj16,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
            __dec_obj18=result_47->mNoSolvedGenericsType;
            result_47->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(__right_value91=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer3(__dec_obj18,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
            __dec_obj19=result_47->mOriginalLoadVarType;
            result_47->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(__right_value92=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer3(__dec_obj19,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
            __dec_obj20=result_47->mGenericsName;
            result_47->mGenericsName=(char*)come_increment_ref_count(((char*)(__right_value93=string_clone(self->mGenericsName))));
            __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
            __dec_obj21=result_47->mGenericsTypes;
            result_47->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value94=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer3(__dec_obj21,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
            __dec_obj25=result_47->mArrayNum;
            result_47->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(__right_value102=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer3(__dec_obj25,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)) {
            result_47->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
            __dec_obj26=result_47->mParamTypes;
            result_47->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value103=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer3(__dec_obj26,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
            __dec_obj30=result_47->mParamNames;
            result_47->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value110=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer3(__dec_obj30,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
            __dec_obj31=result_47->mResultType;
            result_47->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(__right_value111=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer3(__dec_obj31,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)) {
            result_47->mVarArgs=self->mVarArgs;
        }
        if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
            __dec_obj32=result_47->mAlignas;
            result_47->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value112=sNode_clone(self->mAlignas))));
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
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
            result_47->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value113=sNode_clone(self->mSizeNum))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
        }
        if(self!=((void*)0)) {
            result_47->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(self!=((void*)0)) {
            result_47->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
            __dec_obj34=result_47->mOriginalTypeName;
            result_47->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(__right_value114=string_clone(self->mOriginalTypeName))));
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
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
            result_47->mAsmName=(char*)come_increment_ref_count(((char*)(__right_value115=string_clone(self->mAsmName))));
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
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

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result46__;
void* __right_value82;
void* __right_value83;
struct list$1sTypeph* result_54;
struct list_item$1sTypeph* it_55;
void* __right_value87;
struct list$1sTypeph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value82 = (void*)0;
__right_value83 = (void*)0;
memset(&result_54, 0, sizeof(struct list$1sTypeph*));
memset(&it_55, 0, sizeof(struct list_item$1sTypeph*));
__right_value87 = (void*)0;
                if(self==((void*)0)) {
                    __result46__ = __result_obj__ = ((void*)0);
                    return __result46__;
                }
                result_54=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value83=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value82=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 135, "list$1sTypeph"))))))));
                come_call_finalizer3(__right_value82,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_55=self->head;
                while(it_55!=((void*)0)) {
                    list$1sTypeph_add(result_54,(struct sType*)come_increment_ref_count(((struct sType*)(__right_value87=sType_clone(it_55->item)))));
                    come_call_finalizer3(__right_value87,sType_finalize, 0, 1, 0, 0, __result_obj__);
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

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
void* __right_value84;
struct list_item$1sTypeph* litem_56;
struct sType* __dec_obj13;
void* __right_value85;
struct list_item$1sTypeph* litem_57;
struct sType* __dec_obj14;
void* __right_value86;
struct list_item$1sTypeph* litem_58;
struct sType* __dec_obj15;
struct list$1sTypeph* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value84 = (void*)0;
memset(&litem_56, 0, sizeof(struct list_item$1sTypeph*));
__right_value85 = (void*)0;
memset(&litem_57, 0, sizeof(struct list_item$1sTypeph*));
__right_value86 = (void*)0;
memset(&litem_58, 0, sizeof(struct list_item$1sTypeph*));
                        if(self->len==0) {
                            litem_56=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value84=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 149, "list_item$1sTypeph"))));
                            come_call_finalizer3(__right_value84,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
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
                                litem_57=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value85=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 159, "list_item$1sTypeph"))));
                                come_call_finalizer3(__right_value85,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_57->prev=self->head;
                                litem_57->next=((void*)0);
                                __dec_obj14=litem_57->item;
                                litem_57->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_57;
                                self->head->next=litem_57;
                            }
                            else {
                                litem_58=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value86=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 169, "list_item$1sTypeph"))));
                                come_call_finalizer3(__right_value86,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
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
void* __right_value89;
struct tuple1$1sTypeph* result_61;
void* __right_value90;
struct sType* __dec_obj17;
struct tuple1$1sTypeph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value89 = (void*)0;
memset(&result_61, 0, sizeof(struct tuple1$1sTypeph*));
__right_value90 = (void*)0;
                if(self==(void*)0) {
                    __result50__ = __result_obj__ = (void*)0;
                    return __result50__;
                }
                result_61=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(__right_value89=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                    __dec_obj17=result_61->v1;
                    result_61->v1=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value90=sType_clone(self->v1))));
                    come_call_finalizer3(__dec_obj17,sType_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value95;
void* __right_value96;
struct list$1sNodeph* result_62;
struct list_item$1sNodeph* it_63;
void* __right_value101;
struct list$1sNodeph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value95 = (void*)0;
__right_value96 = (void*)0;
memset(&result_62, 0, sizeof(struct list$1sNodeph*));
memset(&it_63, 0, sizeof(struct list_item$1sNodeph*));
__right_value101 = (void*)0;
                if(self==((void*)0)) {
                    __result52__ = __result_obj__ = ((void*)0);
                    return __result52__;
                }
                result_62=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(__right_value96=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(__right_value95=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 135, "list$1sNodeph"))))))));
                come_call_finalizer3(__right_value95,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_63=self->head;
                while(it_63!=((void*)0)) {
                    list$1sNodeph_add(result_62,(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value101=sNode_clone(it_63->item)))));
                    if(__right_value101) { __right_value101 = come_decrement_ref_count2(__right_value101, ((struct sNode*)__right_value101)->finalize, ((struct sNode*)__right_value101)->_protocol_obj, 1, 0, 0, __result_obj__); } 
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
void* __right_value97;
struct list_item$1sNodeph* litem_64;
struct sNode* __dec_obj22;
void* __right_value98;
struct list_item$1sNodeph* litem_65;
struct sNode* __dec_obj23;
void* __right_value99;
struct list_item$1sNodeph* litem_66;
struct sNode* __dec_obj24;
struct list$1sNodeph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value97 = (void*)0;
memset(&litem_64, 0, sizeof(struct list_item$1sNodeph*));
__right_value98 = (void*)0;
memset(&litem_65, 0, sizeof(struct list_item$1sNodeph*));
__right_value99 = (void*)0;
memset(&litem_66, 0, sizeof(struct list_item$1sNodeph*));
                        if(self->len==0) {
                            litem_64=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value97=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 149, "list_item$1sNodeph"))));
                            come_call_finalizer3(__right_value97,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
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
                                litem_65=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value98=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 159, "list_item$1sNodeph"))));
                                come_call_finalizer3(__right_value98,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_65->prev=self->head;
                                litem_65->next=((void*)0);
                                __dec_obj23=litem_65->item;
                                litem_65->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_65;
                                self->head->next=litem_65;
                            }
                            else {
                                litem_66=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value99=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 169, "list_item$1sNodeph"))));
                                come_call_finalizer3(__right_value99,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
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
void* __right_value100;
struct sNode* result_67;
struct sNode* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value100 = (void*)0;
memset(&result_67, 0, sizeof(struct sNode*));
                        if(self==(void*)0) {
                            __result55__ = __result_obj__ = (void*)0;
                            return __result55__;
                        }
                        result_67=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value100=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
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
void* __right_value104;
void* __right_value105;
struct list$1charph* result_70;
struct list_item$1charph* it_71;
void* __right_value109;
struct list$1charph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value104 = (void*)0;
__right_value105 = (void*)0;
memset(&result_70, 0, sizeof(struct list$1charph*));
memset(&it_71, 0, sizeof(struct list_item$1charph*));
__right_value109 = (void*)0;
                if(self==((void*)0)) {
                    __result58__ = __result_obj__ = ((void*)0);
                    return __result58__;
                }
                result_70=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value105=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value104=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 135, "list$1charph"))))))));
                come_call_finalizer3(__right_value104,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                it_71=self->head;
                while(it_71!=((void*)0)) {
                    list$1charph_add(result_70,(char*)come_increment_ref_count(((char*)(__right_value109=string_clone(it_71->item)))));
                    __right_value109 = come_decrement_ref_count2(__right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* __right_value106;
struct list_item$1charph* litem_72;
char* __dec_obj27;
void* __right_value107;
struct list_item$1charph* litem_73;
char* __dec_obj28;
void* __right_value108;
struct list_item$1charph* litem_74;
char* __dec_obj29;
struct list$1charph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value106 = (void*)0;
memset(&litem_72, 0, sizeof(struct list_item$1charph*));
__right_value107 = (void*)0;
memset(&litem_73, 0, sizeof(struct list_item$1charph*));
__right_value108 = (void*)0;
memset(&litem_74, 0, sizeof(struct list_item$1charph*));
                        if(self->len==0) {
                            litem_72=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value106=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 149, "list_item$1charph"))));
                            come_call_finalizer3(__right_value106,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
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
                                litem_73=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value107=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 159, "list_item$1charph"))));
                                come_call_finalizer3(__right_value107,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_73->prev=self->head;
                                litem_73->next=((void*)0);
                                __dec_obj28=litem_73->item;
                                litem_73->item=(char*)come_increment_ref_count(item);
                                __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_73;
                                self->head->next=litem_73;
                            }
                            else {
                                litem_74=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value108=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 169, "list_item$1charph"))));
                                come_call_finalizer3(__right_value108,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
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
void* __right_value118;
void* __right_value119;
struct list$1tuple3$3sTypephcharphsNodephph* result_79;
struct list_item$1tuple3$3sTypephcharphsNodephph* it_80;
void* __right_value127;
struct list$1tuple3$3sTypephcharphsNodephph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value118 = (void*)0;
__right_value119 = (void*)0;
memset(&result_79, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&it_80, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
__right_value127 = (void*)0;
        if(self==((void*)0)) {
            __result63__ = __result_obj__ = ((void*)0);
            return __result63__;
        }
        result_79=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(__right_value119=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(__right_value118=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 135, "list$1tuple3$3sTypephcharphsNodephph"))))))));
        come_call_finalizer3(__right_value118,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        it_80=self->head;
        while(it_80!=((void*)0)) {
            list$1tuple3$3sTypephcharphsNodephph_add(result_79,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(__right_value127=tuple3$3sTypephcharphsNodephp_clone(it_80->item)))));
            come_call_finalizer3(__right_value127,tuple3$3sTypephcharphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
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
void* __right_value120;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_81;
struct tuple3$3sTypephcharphsNodeph* __dec_obj39;
void* __right_value121;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_82;
struct tuple3$3sTypephcharphsNodeph* __dec_obj40;
void* __right_value122;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_83;
struct tuple3$3sTypephcharphsNodeph* __dec_obj41;
struct list$1tuple3$3sTypephcharphsNodephph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value120 = (void*)0;
memset(&litem_81, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
__right_value121 = (void*)0;
memset(&litem_82, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
__right_value122 = (void*)0;
memset(&litem_83, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                if(self->len==0) {
                    litem_81=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value120=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 149, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                    come_call_finalizer3(__right_value120,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
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
                        litem_82=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value121=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 159, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                        come_call_finalizer3(__right_value121,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_82->prev=self->head;
                        litem_82->next=((void*)0);
                        __dec_obj40=litem_82->item;
                        litem_82->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj40,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_82;
                        self->head->next=litem_82;
                    }
                    else {
                        litem_83=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value122=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 169, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                        come_call_finalizer3(__right_value122,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
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
void* __right_value123;
struct tuple3$3sTypephcharphsNodeph* result_84;
void* __right_value124;
struct sType* __dec_obj42;
void* __right_value125;
char* __dec_obj43;
void* __right_value126;
struct sNode* __dec_obj44;
struct tuple3$3sTypephcharphsNodeph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value123 = (void*)0;
memset(&result_84, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
__right_value124 = (void*)0;
__right_value125 = (void*)0;
__right_value126 = (void*)0;
                if(self==(void*)0) {
                    __result66__ = __result_obj__ = (void*)0;
                    return __result66__;
                }
                result_84=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(__right_value123=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "tuple3$3sTypephcharphsNodephp_clone", 3, "tuple3$3sTypephcharphsNodeph"))));
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                    __dec_obj42=result_84->v1;
                    result_84->v1=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value124=sType_clone(self->v1))));
                    come_call_finalizer3(__dec_obj42,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(self!=((void*)0)&&self->v2!=((void*)0)) {
                    __dec_obj43=result_84->v2;
                    result_84->v2=(char*)come_increment_ref_count(((char*)(__right_value125=string_clone(self->v2))));
                    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                if(self!=((void*)0)&&self->v3!=((void*)0)) {
                    __dec_obj44=result_84->v3;
                    result_84->v3=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value126=sNode_clone(self->v3))));
                    if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count2(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0,0, (void*)0); }
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
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
char* result_107;
char* __result83__;
char* __result84__;
char* result_108;
char* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_107, 0, sizeof(char*));
memset(&result_108, 0, sizeof(char*));
                if(self==((void*)0)) {
                    memset(&result_107,0,sizeof(char*));
                    __result83__ = __result_obj__ = result_107;
                    return __result83__;
                }
                self->it=self->head;
                if(self->it) {
                    __result84__ = __result_obj__ = self->it->item;
                    return __result84__;
                }
                memset(&result_108,0,sizeof(char*));
                __result85__ = __result_obj__ = result_108;
                return __result85__;
}

static _Bool list$1charph_end(struct list$1charph* self){
                return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
char* result_110;
char* __result86__;
char* __result87__;
char* result_111;
char* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_110, 0, sizeof(char*));
memset(&result_111, 0, sizeof(char*));
                if(self==((void*)0)||self->it==((void*)0)) {
                    memset(&result_110,0,sizeof(char*));
                    __result86__ = __result_obj__ = result_110;
                    return __result86__;
                }
                self->it=self->it->next;
                if(self->it) {
                    __result87__ = __result_obj__ = self->it->item;
                    return __result87__;
                }
                memset(&result_111,0,sizeof(char*));
                __result88__ = __result_obj__ = result_111;
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
struct list_item$1sTypeph* it_113;
int i_114;
struct sType* __result89__;
struct sType* default_value_115;
struct sType* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_113, 0, sizeof(struct list_item$1sTypeph*));
memset(&default_value_115, 0, sizeof(struct sType*));
                        if(position<0) {
                            position+=self->len;
                        }
                        it_113=self->head;
                        i_114=0;
                        while(it_113!=((void*)0)) {
                            if(position==i_114) {
                                __result89__ = __result_obj__ = it_113->item;
                                return __result89__;
                            }
                            it_113=it_113->next;
                            i_114++;
                        }
                        memset(&default_value_115,0,sizeof(struct sType*));
                        __result90__ = __result_obj__ = default_value_115;
                        come_call_finalizer3(default_value_115,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result90__;
                        come_call_finalizer3(default_value_115,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
                    if(self==((void*)0)) {
                        return 0;
                    }
                    return self->len;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
struct sNode* result_131;
struct sNode* __result92__;
struct sNode* __result93__;
struct sNode* result_132;
struct sNode* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_131, 0, sizeof(struct sNode*));
memset(&result_132, 0, sizeof(struct sNode*));
                        if(self==((void*)0)) {
                            memset(&result_131,0,sizeof(struct sNode*));
                            __result92__ = __result_obj__ = result_131;
                            return __result92__;
                        }
                        self->it=self->head;
                        if(self->it) {
                            __result93__ = __result_obj__ = self->it->item;
                            return __result93__;
                        }
                        memset(&result_132,0,sizeof(struct sNode*));
                        __result94__ = __result_obj__ = result_132;
                        return __result94__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
                        return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
struct sNode* result_134;
struct sNode* __result95__;
struct sNode* __result96__;
struct sNode* result_135;
struct sNode* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_134, 0, sizeof(struct sNode*));
memset(&result_135, 0, sizeof(struct sNode*));
                        if(self==((void*)0)||self->it==((void*)0)) {
                            memset(&result_134,0,sizeof(struct sNode*));
                            __result95__ = __result_obj__ = result_134;
                            return __result95__;
                        }
                        self->it=self->it->next;
                        if(self->it) {
                            __result96__ = __result_obj__ = self->it->item;
                            return __result96__;
                        }
                        memset(&result_135,0,sizeof(struct sNode*));
                        __result97__ = __result_obj__ = result_135;
                        return __result97__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
void* __right_value170;
struct list_item$1CVALUEph* litem_139;
struct CVALUE* __dec_obj54;
void* __right_value171;
struct list_item$1CVALUEph* litem_140;
struct CVALUE* __dec_obj55;
void* __right_value172;
struct list_item$1CVALUEph* litem_141;
struct CVALUE* __dec_obj56;
struct list$1CVALUEph* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value170 = (void*)0;
memset(&litem_139, 0, sizeof(struct list_item$1CVALUEph*));
__right_value171 = (void*)0;
memset(&litem_140, 0, sizeof(struct list_item$1CVALUEph*));
__right_value172 = (void*)0;
memset(&litem_141, 0, sizeof(struct list_item$1CVALUEph*));
                    if(self->len==0) {
                        litem_139=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value170=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 219, "list_item$1CVALUEph"))));
                        come_call_finalizer3(__right_value170,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_139->prev=((void*)0);
                        litem_139->next=((void*)0);
                        __dec_obj54=litem_139->item;
                        litem_139->item=(struct CVALUE*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj54,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_139;
                        self->head=litem_139;
                    }
                    else {
                        if(self->len==1) {
                            litem_140=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value171=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 229, "list_item$1CVALUEph"))));
                            come_call_finalizer3(__right_value171,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_140->prev=self->head;
                            litem_140->next=((void*)0);
                            __dec_obj55=litem_140->item;
                            litem_140->item=(struct CVALUE*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj55,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_140;
                            self->head->next=litem_140;
                        }
                        else {
                            litem_141=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value172=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 239, "list_item$1CVALUEph"))));
                            come_call_finalizer3(__right_value172,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_141->prev=self->tail;
                            litem_141->next=((void*)0);
                            __dec_obj56=litem_141->item;
                            litem_141->item=(struct CVALUE*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj56,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_141;
                            self->tail=litem_141;
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
void* __right_value259;
void* __right_value260;
char* __dec_obj80;
struct sLoadNode* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value259 = (void*)0;
__right_value260 = (void*)0;
    ((struct sNodeBase*)(__right_value259=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value259,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj80=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(__right_value260=__builtin_string(name))));
    __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result106__ = __result_obj__ = self;
    come_call_finalizer3(self,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result106__;
    come_call_finalizer3(self,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

char* sLoadNode_kind(struct sLoadNode* self){
void* __result_obj__;
void* __right_value261;
char* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value261 = (void*)0;
    __result107__ = __result_obj__ = ((char*)(__right_value261=__builtin_string("sLoadNode")));
    __right_value261 = come_decrement_ref_count2(__right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result107__;
}

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info){
struct sClass* current_stack_frame_struct_174;
struct sVar* parent_var_175;
void* __right_value262;
void* __right_value263;
struct CVALUE* come_value_176;
struct sType* type_177;
void* __right_value264;
char* __dec_obj81;
void* __right_value265;
struct sType* __dec_obj82;
_Bool __result108__;
struct sVar* var__178;
struct sFun* fun_179;
void* __right_value266;
void* __right_value267;
struct CVALUE* come_value_183;
void* __right_value268;
char* __dec_obj83;
struct sType* __dec_obj84;
_Bool __result113__;
void* __right_value269;
void* __right_value270;
struct CVALUE* come_value_184;
void* __right_value271;
char* __dec_obj85;
void* __right_value272;
struct sType* __dec_obj86;
void* __right_value273;
struct sType* __dec_obj87;
_Bool __result115__;
memset(&current_stack_frame_struct_174, 0, sizeof(struct sClass*));
memset(&parent_var_175, 0, sizeof(struct sVar*));
__right_value262 = (void*)0;
__right_value263 = (void*)0;
memset(&come_value_176, 0, sizeof(struct CVALUE*));
memset(&type_177, 0, sizeof(struct sType*));
__right_value264 = (void*)0;
__right_value265 = (void*)0;
memset(&var__178, 0, sizeof(struct sVar*));
memset(&fun_179, 0, sizeof(struct sFun*));
__right_value266 = (void*)0;
__right_value267 = (void*)0;
memset(&come_value_183, 0, sizeof(struct CVALUE*));
__right_value268 = (void*)0;
__right_value269 = (void*)0;
__right_value270 = (void*)0;
memset(&come_value_184, 0, sizeof(struct CVALUE*));
__right_value271 = (void*)0;
__right_value272 = (void*)0;
__right_value273 = (void*)0;
    current_stack_frame_struct_174=info->current_stack_frame_struct;
    if(current_stack_frame_struct_174&&map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)==((void*)0)) {
        parent_var_175=get_variable_from_table(info->lv_table->mParent,self->name);
        if(parent_var_175!=((void*)0)) {
            if(string_operator_not_equals(parent_var_175->mFunName,info->come_fun->mName)) {
                come_value_176=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value263=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value262=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 553, "CVALUE"))))))));
                come_call_finalizer3(__right_value262,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                type_177=parent_var_175->mType;
                __dec_obj81=come_value_176->c_value;
                come_value_176->c_value=(char*)come_increment_ref_count(((char*)(__right_value264=xsprintf("(*(parent->%s))",parent_var_175->mCValueName))));
                __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj82=come_value_176->type;
                come_value_176->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value265=sType_clone(type_177))));
                come_call_finalizer3(__dec_obj82,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_176->var=((void*)0);
                add_come_last_code(info,"%s;\n",come_value_176->c_value);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_176));
                __result108__ = (_Bool)1;
                come_call_finalizer3(come_value_176,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result108__;
                come_call_finalizer3(come_value_176,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    var__178=get_variable_from_table(info->lv_table,self->name);
    if(var__178==((void*)0)) {
        var__178=get_variable_from_table(info->gv_table,self->name);
        if(var__178==((void*)0)) {
            fun_179=map$2charphsFunphp_operator_load_element(info->funcs,self->name);
            if(fun_179) {
                come_value_183=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value267=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value266=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 580, "CVALUE"))))))));
                come_call_finalizer3(__right_value266,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj83=come_value_183->c_value;
                come_value_183->c_value=(char*)come_increment_ref_count(((char*)(__right_value268=xsprintf("%s",fun_179->mName))));
                __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj84=come_value_183->type;
                come_value_183->type=(struct sType*)come_increment_ref_count(fun_179->mLambdaType);
                come_call_finalizer3(__dec_obj84,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_183->var=((void*)0);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_183));
                __result113__ = (_Bool)1;
                come_call_finalizer3(come_value_183,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result113__;
                come_call_finalizer3(come_value_183,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"var not found(%s)(Z) at loading variable\n",self->name);
                return (_Bool)1;
            }
        }
    }
    come_value_184=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value270=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value269=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 597, "CVALUE"))))))));
    come_call_finalizer3(__right_value269,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj85=come_value_184->c_value;
    come_value_184->c_value=(char*)come_increment_ref_count(((char*)(__right_value271=xsprintf("%s",var__178->mCValueName))));
    __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj86=come_value_184->type;
    come_value_184->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value272=sType_clone(var__178->mType))));
    come_call_finalizer3(__dec_obj86,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_184->var=var__178;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_184));
    if(list$1sNodeph_length(come_value_184->type->mArrayNum)==1) {
        __dec_obj87=come_value_184->type->mOriginalLoadVarType->v1;
        come_value_184->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value273=sType_clone(come_value_184->type))));
        come_call_finalizer3(__dec_obj87,sType_finalize, 0, 0, 0, 0, (void*)0);
        list$1sNodeph_reset(come_value_184->type->mArrayNum);
        come_value_184->type->mPointerNum++;
        come_value_184->type->mOriginalTypeNamePointerNum=come_value_184->type->mPointerNum;
    }
    __result115__ = (_Bool)1;
    come_call_finalizer3(come_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result115__;
    come_call_finalizer3(come_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_180;
unsigned int hash_181;
unsigned int it_182;
struct sFun* __result109__;
struct sFun* __result110__;
struct sFun* __result111__;
struct sFun* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_180, 0, sizeof(struct sFun*));
                memset(&default_value_180,0,sizeof(struct sFun*));
                hash_181=string_get_hash_key(((char*)key))%self->size;
                it_182=hash_181;
                while((_Bool)1) {
                    if(self->item_existance[it_182]) {
                        if(string_equals(self->keys[it_182],key)) {
                            __result109__ = __result_obj__ = self->items[it_182];
                            come_call_finalizer3(default_value_180,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            return __result109__;
                        }
                        it_182++;
                        if(it_182>=self->size) {
                            it_182=0;
                        }
                        else {
                            if(it_182==hash_181) {
                                __result110__ = __result_obj__ = default_value_180;
                                come_call_finalizer3(default_value_180,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result110__;
                            }
                        }
                    }
                    else {
                        __result111__ = __result_obj__ = default_value_180;
                        come_call_finalizer3(default_value_180,sFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result111__;
                    }
                }
                __result112__ = __result_obj__ = default_value_180;
                come_call_finalizer3(default_value_180,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result112__;
                come_call_finalizer3(default_value_180,sFun_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_185;
struct list_item$1sNodeph* prev_it_186;
struct list$1sNodeph* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_185, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_186, 0, sizeof(struct list_item$1sNodeph*));
            it_185=self->head;
            while(it_185!=((void*)0)) {
                prev_it_186=it_185;
                it_185=it_185->next;
                come_call_finalizer3(prev_it_186,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result114__ = __result_obj__ = self;
            return __result114__;
}

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__;
void* __right_value274;
void* __right_value275;
char* __dec_obj88;
struct sFunLoadNode* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value274 = (void*)0;
__right_value275 = (void*)0;
    ((struct sNodeBase*)(__right_value274=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value274,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj88=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(__right_value275=__builtin_string(name))));
    __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result116__ = __result_obj__ = self;
    come_call_finalizer3(self,sFunLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result116__;
    come_call_finalizer3(self,sFunLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

char* sFunLoadNode_kind(struct sFunLoadNode* self){
void* __result_obj__;
void* __right_value276;
char* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value276 = (void*)0;
    __result117__ = __result_obj__ = ((char*)(__right_value276=__builtin_string("sFunLoadNode")));
    __right_value276 = come_decrement_ref_count2(__right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result117__;
}

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info){
struct sFun* fun_187;
void* __right_value277;
void* __right_value278;
struct CVALUE* come_value_188;
void* __right_value279;
char* __dec_obj89;
struct sType* __dec_obj90;
memset(&fun_187, 0, sizeof(struct sFun*));
__right_value277 = (void*)0;
__right_value278 = (void*)0;
memset(&come_value_188, 0, sizeof(struct CVALUE*));
__right_value279 = (void*)0;
    fun_187=map$2charphsFunphp_operator_load_element(info->funcs,self->name);
    if(fun_187==((void*)0)) {
        err_msg(info,"fun not found(%s) at loading variable\n",self->name);
        return (_Bool)0;
    }
    else {
        come_value_188=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value278=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value277=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 639, "CVALUE"))))))));
        come_call_finalizer3(__right_value277,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj89=come_value_188->c_value;
        come_value_188->c_value=(char*)come_increment_ref_count(((char*)(__right_value279=xsprintf("%s",fun_187->mName))));
        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj90=come_value_188->type;
        come_value_188->type=(struct sType*)come_increment_ref_count(fun_187->mLambdaType);
        come_call_finalizer3(__dec_obj90,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_188->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_188));
        come_call_finalizer3(come_value_188,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value280;
void* __right_value290;
struct list$1tuple2$2sNodephsNodephph* __dec_obj96;
struct sArrayInitializer* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value280 = (void*)0;
__right_value290 = (void*)0;
    ((struct sNodeBase*)(__right_value280=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value280,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj96=self->initializer;
    self->initializer=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list$1tuple2$2sNodephsNodephph*)(__right_value290=list$1tuple2$2sNodephsNodephphp_clone(initializer))));
    come_call_finalizer3(__dec_obj96,list$1tuple2$2sNodephsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result124__ = __result_obj__ = self;
    come_call_finalizer3(self,sArrayInitializer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(initializer,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result124__;
    come_call_finalizer3(self,sArrayInitializer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(initializer,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
}

char* sArrayInitializer_kind(struct sArrayInitializer* self){
void* __result_obj__;
void* __right_value291;
char* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value291 = (void*)0;
    __result125__ = __result_obj__ = ((char*)(__right_value291=__builtin_string("sArrayInitializer")));
    __right_value291 = come_decrement_ref_count2(__right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result125__;
}

_Bool sArrayInitializer_compile(struct sArrayInitializer* self, struct sInfo* info){
struct list$1tuple2$2sNodephsNodephph* initializer_199;
void* __right_value292;
void* __right_value293;
struct buffer* buf_200;
int i_201;
struct sType* element_type_202;
struct list$1tuple2$2sNodephsNodephph* o2_saved_203;
struct tuple2$2sNodephsNodeph* it_206;
struct tuple2$2sNodephsNodeph* multiple_assign_var2;
struct sNode* index_209;
struct sNode* value_210;
struct CVALUE* come_value_211;
_Bool __result132__;
void* __right_value294;
struct CVALUE* __dec_obj97;
_Bool __result133__;
void* __right_value295;
struct CVALUE* come_value2_212;
void* __right_value296;
struct sType* __dec_obj98;
void* __right_value297;
void* __right_value298;
void* __right_value299;
struct CVALUE* come_value_213;
void* __right_value300;
char* __dec_obj99;
void* __right_value301;
struct sType* __dec_obj100;
_Bool __result134__;
memset(&initializer_199, 0, sizeof(struct list$1tuple2$2sNodephsNodephph*));
__right_value292 = (void*)0;
__right_value293 = (void*)0;
memset(&buf_200, 0, sizeof(struct buffer*));
memset(&element_type_202, 0, sizeof(struct sType*));
memset(&o2_saved_203, 0, sizeof(struct list$1tuple2$2sNodephsNodephph*));
memset(&it_206, 0, sizeof(struct tuple2$2sNodephsNodeph*));
memset(&come_value_211, 0, sizeof(struct CVALUE*));
__right_value294 = (void*)0;
__right_value295 = (void*)0;
memset(&come_value2_212, 0, sizeof(struct CVALUE*));
__right_value296 = (void*)0;
__right_value297 = (void*)0;
__right_value298 = (void*)0;
__right_value299 = (void*)0;
memset(&come_value_213, 0, sizeof(struct CVALUE*));
__right_value300 = (void*)0;
__right_value301 = (void*)0;
    initializer_199=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(self->initializer);
    buf_200=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value293=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value292=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 670, "buffer"))))))));
    come_call_finalizer3(__right_value292,buffer_finalize, 0, 1, 0, 0, (void*)0);
    buffer_append_str(buf_200,"{");
    i_201=0;
    element_type_202=((void*)0);
    for(    o2_saved_203=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count((initializer_199)),it_206=list$1tuple2$2sNodephsNodephph_begin((o2_saved_203));    !list$1tuple2$2sNodephsNodephph_end((o2_saved_203));    it_206=list$1tuple2$2sNodephsNodephph_next((o2_saved_203))    ){
        multiple_assign_var2=it_206;
        index_209=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v1);
        value_210=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
        come_value_211=((void*)0);
        if(index_209) {
            if(!node_compile(index_209,info)) {
                __result132__ = (_Bool)0;
                if(index_209) { index_209 = come_decrement_ref_count2(index_209, ((struct sNode*)index_209)->finalize, ((struct sNode*)index_209)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(value_210) { value_210 = come_decrement_ref_count2(value_210, ((struct sNode*)value_210)->finalize, ((struct sNode*)value_210)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_211,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(o2_saved_203,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(initializer_199,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_200,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_type_202,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result132__;
            }
            __dec_obj97=come_value_211;
            come_value_211=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value294=get_value_from_stack(-1,info))));
            come_call_finalizer3(__dec_obj97,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            dec_stack_ptr(1,info);
        }
        if(!node_compile(value_210,info)) {
            __result133__ = (_Bool)0;
            if(index_209) { index_209 = come_decrement_ref_count2(index_209, ((struct sNode*)index_209)->finalize, ((struct sNode*)index_209)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(value_210) { value_210 = come_decrement_ref_count2(value_210, ((struct sNode*)value_210)->finalize, ((struct sNode*)value_210)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_211,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(o2_saved_203,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(initializer_199,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_200,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_type_202,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result133__;
        }
        come_value2_212=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value295=get_value_from_stack(-1,info))));
        dec_stack_ptr(1,info);
        __dec_obj98=element_type_202;
        element_type_202=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value296=sType_clone(come_value2_212->type))));
        come_call_finalizer3(__dec_obj98,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(come_value_211) {
            buffer_append_str(buf_200,((char*)(__right_value297=xsprintf("[%s] = %s",come_value_211->c_value,come_value2_212->c_value))));
            __right_value297 = come_decrement_ref_count2(__right_value297, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        else {
            buffer_append_str(buf_200,come_value2_212->c_value);
        }
        i_201++;
        if(i_201!=list$1tuple2$2sNodephsNodephph_length(initializer_199)) {
            buffer_append_str(buf_200,",");
        }
        if(index_209) { index_209 = come_decrement_ref_count2(index_209, ((struct sNode*)index_209)->finalize, ((struct sNode*)index_209)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(value_210) { value_210 = come_decrement_ref_count2(value_210, ((struct sNode*)value_210)->finalize, ((struct sNode*)value_210)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_211,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_212,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_203,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_200,"}");
    come_value_213=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value299=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value298=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 709, "CVALUE"))))))));
    come_call_finalizer3(__right_value298,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj99=come_value_213->c_value;
    come_value_213->c_value=(char*)come_increment_ref_count(((char*)(__right_value300=buffer_to_string(buf_200))));
    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj100=come_value_213->type;
    come_value_213->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value301=sType_clone(element_type_202))));
    come_call_finalizer3(__dec_obj100,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_213->type->mPointerNum++;
    come_value_213->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_213));
    __result134__ = (_Bool)1;
    come_call_finalizer3(initializer_199,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_200,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_type_202,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_213,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result134__;
    come_call_finalizer3(initializer_199,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_200,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_type_202,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_213,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephphp_clone(struct list$1tuple2$2sNodephsNodephph* self){
void* __result_obj__;
struct list$1tuple2$2sNodephsNodephph* __result118__;
void* __right_value281;
void* __right_value282;
struct list$1tuple2$2sNodephsNodephph* result_191;
struct list_item$1tuple2$2sNodephsNodephph* it_192;
void* __right_value289;
struct list$1tuple2$2sNodephsNodephph* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value281 = (void*)0;
__right_value282 = (void*)0;
memset(&result_191, 0, sizeof(struct list$1tuple2$2sNodephsNodephph*));
memset(&it_192, 0, sizeof(struct list_item$1tuple2$2sNodephsNodephph*));
__right_value289 = (void*)0;
        if(self==((void*)0)) {
            __result118__ = __result_obj__ = ((void*)0);
            return __result118__;
        }
        result_191=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list$1tuple2$2sNodephsNodephph*)(__right_value282=list$1tuple2$2sNodephsNodephph_initialize((struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list$1tuple2$2sNodephsNodephph*)(__right_value281=(struct list$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2sNodephsNodephph)*(1), "./neo-c.h", 135, "list$1tuple2$2sNodephsNodephph"))))))));
        come_call_finalizer3(__right_value281,list$1tuple2$2sNodephsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        it_192=self->head;
        while(it_192!=((void*)0)) {
            list$1tuple2$2sNodephsNodephph_add(result_191,(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(((struct tuple2$2sNodephsNodeph*)(__right_value289=tuple2$2sNodephsNodephp_clone(it_192->item)))));
            come_call_finalizer3(__right_value289,tuple2$2sNodephsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            it_192=it_192->next;
        }
        __result123__ = __result_obj__ = result_191;
        come_call_finalizer3(result_191,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result123__;
        come_call_finalizer3(result_191,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1tuple2$2sNodephsNodephph* it_189;
struct list_item$1tuple2$2sNodephsNodephph* prev_it_190;
memset(&it_189, 0, sizeof(struct list_item$1tuple2$2sNodephsNodephph*));
memset(&prev_it_190, 0, sizeof(struct list_item$1tuple2$2sNodephsNodephph*));
                it_189=self->head;
                while(it_189!=((void*)0)) {
                    prev_it_190=it_189;
                    it_189=it_189->next;
                    come_call_finalizer3(prev_it_190,list_item$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2sNodephsNodephphp_finalize(struct list_item$1tuple2$2sNodephsNodephph* self){
                        if(self!=((void*)0)&&self->item!=((void*)0)) {
                            come_call_finalizer3(self->item,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephph_add(struct list$1tuple2$2sNodephsNodephph* self, struct tuple2$2sNodephsNodeph* item){
void* __result_obj__;
void* __right_value283;
struct list_item$1tuple2$2sNodephsNodephph* litem_193;
struct tuple2$2sNodephsNodeph* __dec_obj91;
void* __right_value284;
struct list_item$1tuple2$2sNodephsNodephph* litem_194;
struct tuple2$2sNodephsNodeph* __dec_obj92;
void* __right_value285;
struct list_item$1tuple2$2sNodephsNodephph* litem_195;
struct tuple2$2sNodephsNodeph* __dec_obj93;
struct list$1tuple2$2sNodephsNodephph* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value283 = (void*)0;
memset(&litem_193, 0, sizeof(struct list_item$1tuple2$2sNodephsNodephph*));
__right_value284 = (void*)0;
memset(&litem_194, 0, sizeof(struct list_item$1tuple2$2sNodephsNodephph*));
__right_value285 = (void*)0;
memset(&litem_195, 0, sizeof(struct list_item$1tuple2$2sNodephsNodephph*));
                if(self->len==0) {
                    litem_193=(struct list_item$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2sNodephsNodephph*)(__right_value283=(struct list_item$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNodephsNodephph)*(1), "./neo-c.h", 149, "list_item$1tuple2$2sNodephsNodephph"))));
                    come_call_finalizer3(__right_value283,list_item$1tuple2$2sNodephsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_193->prev=((void*)0);
                    litem_193->next=((void*)0);
                    __dec_obj91=litem_193->item;
                    litem_193->item=(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj91,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_193;
                    self->head=litem_193;
                }
                else {
                    if(self->len==1) {
                        litem_194=(struct list_item$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2sNodephsNodephph*)(__right_value284=(struct list_item$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNodephsNodephph)*(1), "./neo-c.h", 159, "list_item$1tuple2$2sNodephsNodephph"))));
                        come_call_finalizer3(__right_value284,list_item$1tuple2$2sNodephsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_194->prev=self->head;
                        litem_194->next=((void*)0);
                        __dec_obj92=litem_194->item;
                        litem_194->item=(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj92,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_194;
                        self->head->next=litem_194;
                    }
                    else {
                        litem_195=(struct list_item$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2sNodephsNodephph*)(__right_value285=(struct list_item$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNodephsNodephph)*(1), "./neo-c.h", 169, "list_item$1tuple2$2sNodephsNodephph"))));
                        come_call_finalizer3(__right_value285,list_item$1tuple2$2sNodephsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_195->prev=self->tail;
                        litem_195->next=((void*)0);
                        __dec_obj93=litem_195->item;
                        litem_195->item=(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj93,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_195;
                        self->tail=litem_195;
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
void* __right_value286;
struct tuple2$2sNodephsNodeph* result_196;
void* __right_value287;
struct sNode* __dec_obj94;
void* __right_value288;
struct sNode* __dec_obj95;
struct tuple2$2sNodephsNodeph* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value286 = (void*)0;
memset(&result_196, 0, sizeof(struct tuple2$2sNodephsNodeph*));
__right_value287 = (void*)0;
__right_value288 = (void*)0;
                if(self==(void*)0) {
                    __result121__ = __result_obj__ = (void*)0;
                    return __result121__;
                }
                result_196=(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(((struct tuple2$2sNodephsNodeph*)(__right_value286=(struct tuple2$2sNodephsNodeph*)come_calloc(1, sizeof(struct tuple2$2sNodephsNodeph)*(1), "tuple2$2sNodephsNodephp_clone", 3, "tuple2$2sNodephsNodeph"))));
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                    __dec_obj94=result_196->v1;
                    result_196->v1=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value287=sNode_clone(self->v1))));
                    if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count2(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0,0,0, (void*)0); }
                }
                if(self!=((void*)0)&&self->v2!=((void*)0)) {
                    __dec_obj95=result_196->v2;
                    result_196->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value288=sNode_clone(self->v2))));
                    if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count2(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0,0,0, (void*)0); }
                }
                __result122__ = __result_obj__ = result_196;
                come_call_finalizer3(result_196,tuple2$2sNodephsNodeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result122__;
                come_call_finalizer3(result_196,tuple2$2sNodephsNodeph_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1tuple2$2sNodephsNodephph* it_197;
struct list_item$1tuple2$2sNodephsNodephph* prev_it_198;
memset(&it_197, 0, sizeof(struct list_item$1tuple2$2sNodephsNodephph*));
memset(&prev_it_198, 0, sizeof(struct list_item$1tuple2$2sNodephsNodephph*));
        it_197=self->head;
        while(it_197!=((void*)0)) {
            prev_it_198=it_197;
            it_197=it_197->next;
            come_call_finalizer3(prev_it_198,list_item$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct tuple2$2sNodephsNodeph* list$1tuple2$2sNodephsNodephph_begin(struct list$1tuple2$2sNodephsNodephph* self){
void* __result_obj__;
struct tuple2$2sNodephsNodeph* result_204;
struct tuple2$2sNodephsNodeph* __result126__;
struct tuple2$2sNodephsNodeph* __result127__;
struct tuple2$2sNodephsNodeph* result_205;
struct tuple2$2sNodephsNodeph* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_204, 0, sizeof(struct tuple2$2sNodephsNodeph*));
memset(&result_205, 0, sizeof(struct tuple2$2sNodephsNodeph*));
        if(self==((void*)0)) {
            memset(&result_204,0,sizeof(struct tuple2$2sNodephsNodeph*));
            __result126__ = __result_obj__ = result_204;
            return __result126__;
        }
        self->it=self->head;
        if(self->it) {
            __result127__ = __result_obj__ = self->it->item;
            return __result127__;
        }
        memset(&result_205,0,sizeof(struct tuple2$2sNodephsNodeph*));
        __result128__ = __result_obj__ = result_205;
        return __result128__;
}

static _Bool list$1tuple2$2sNodephsNodephph_end(struct list$1tuple2$2sNodephsNodephph* self){
        return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2sNodephsNodeph* list$1tuple2$2sNodephsNodephph_next(struct list$1tuple2$2sNodephsNodephph* self){
void* __result_obj__;
struct tuple2$2sNodephsNodeph* result_207;
struct tuple2$2sNodephsNodeph* __result129__;
struct tuple2$2sNodephsNodeph* __result130__;
struct tuple2$2sNodephsNodeph* result_208;
struct tuple2$2sNodephsNodeph* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_207, 0, sizeof(struct tuple2$2sNodephsNodeph*));
memset(&result_208, 0, sizeof(struct tuple2$2sNodephsNodeph*));
        if(self==((void*)0)||self->it==((void*)0)) {
            memset(&result_207,0,sizeof(struct tuple2$2sNodephsNodeph*));
            __result129__ = __result_obj__ = result_207;
            return __result129__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result130__ = __result_obj__ = self->it->item;
            return __result130__;
        }
        memset(&result_208,0,sizeof(struct tuple2$2sNodephsNodeph*));
        __result131__ = __result_obj__ = result_208;
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
void* __right_value302;
void* __right_value303;
struct list$1tuple2$2sNodephsNodephph* initializer_214;
void* __right_value304;
struct sNode* index_215;
_Bool no_comma_216;
void* __right_value305;
struct sNode* exp_217;
void* __right_value306;
void* __right_value307;
_Bool no_comma_218;
void* __right_value308;
struct sNode* exp_219;
void* __right_value309;
void* __right_value310;
void* __right_value311;
struct sNode* index_220;
_Bool no_comma_221;
void* __right_value312;
struct sNode* exp_222;
void* __right_value313;
void* __right_value314;
_Bool no_comma_223;
void* __right_value315;
struct sNode* exp_224;
void* __right_value316;
void* __right_value317;
void* __right_value318;
void* __right_value319;
struct sNode* _inf_value1;
struct sArrayInitializer* _inf_obj_value1;
void* __right_value323;
struct sNode* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value302 = (void*)0;
__right_value303 = (void*)0;
memset(&initializer_214, 0, sizeof(struct list$1tuple2$2sNodephsNodephph*));
__right_value304 = (void*)0;
memset(&index_215, 0, sizeof(struct sNode*));
__right_value305 = (void*)0;
memset(&exp_217, 0, sizeof(struct sNode*));
__right_value306 = (void*)0;
__right_value307 = (void*)0;
__right_value308 = (void*)0;
memset(&exp_219, 0, sizeof(struct sNode*));
__right_value309 = (void*)0;
__right_value310 = (void*)0;
__right_value311 = (void*)0;
memset(&index_220, 0, sizeof(struct sNode*));
__right_value312 = (void*)0;
memset(&exp_222, 0, sizeof(struct sNode*));
__right_value313 = (void*)0;
__right_value314 = (void*)0;
__right_value315 = (void*)0;
memset(&exp_224, 0, sizeof(struct sNode*));
__right_value316 = (void*)0;
__right_value317 = (void*)0;
__right_value318 = (void*)0;
__right_value319 = (void*)0;
__right_value323 = (void*)0;
    expected_next_character(123,info);
    initializer_214=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list$1tuple2$2sNodephsNodephph*)(__right_value303=list$1tuple2$2sNodephsNodephph_initialize((struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list$1tuple2$2sNodephsNodephph*)(__right_value302=(struct list$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2sNodephsNodephph)*(1), "07var.c", 727, "list$1tuple2$2sNodephsNodephph"))))))));
    come_call_finalizer3(__right_value302,list$1tuple2$2sNodephsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    if(*info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        index_215=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value304=expression_v13(info))));
        expected_next_character(93,info);
        expected_next_character(61,info);
        no_comma_216=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_217=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value305=expression_v13(info))));
        info->no_comma=no_comma_216;
        list$1tuple2$2sNodephsNodephph_add(initializer_214,(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(((struct tuple2$2sNodephsNodeph*)(__right_value307=tuple2$2sNodephsNodeph_initialize((struct tuple2$2sNodephsNodeph*)come_increment_ref_count(((struct tuple2$2sNodephsNodeph*)(__right_value306=(struct tuple2$2sNodephsNodeph*)come_calloc(1, sizeof(struct tuple2$2sNodephsNodeph)*(1), "07var.c", 743, "struct tuple2$2sNodephsNodeph")))),(struct sNode*)come_increment_ref_count(index_215),(struct sNode*)come_increment_ref_count(exp_217))))));
        come_call_finalizer3(__right_value306,tuple2$2sNodephsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value307,tuple2$2sNodephsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        if(index_215) { index_215 = come_decrement_ref_count2(index_215, ((struct sNode*)index_215)->finalize, ((struct sNode*)index_215)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(exp_217) { exp_217 = come_decrement_ref_count2(exp_217, ((struct sNode*)exp_217)->finalize, ((struct sNode*)exp_217)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else {
        no_comma_218=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_219=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value308=expression_v13(info))));
        info->no_comma=no_comma_218;
        list$1tuple2$2sNodephsNodephph_add(initializer_214,(struct tuple2$2voidpsNodeph*)come_increment_ref_count(((struct tuple2$2voidpsNodeph*)(__right_value310=tuple2$2voidpsNodeph_initialize((struct tuple2$2voidpsNodeph*)come_increment_ref_count(((struct tuple2$2voidpsNodeph*)(__right_value309=(struct tuple2$2voidpsNodeph*)come_calloc(1, sizeof(struct tuple2$2voidpsNodeph)*(1), "07var.c", 751, "struct tuple2$2voidpsNodeph")))),((void*)0),(struct sNode*)come_increment_ref_count(exp_219))))));
        __right_value309 = come_decrement_ref_count2(__right_value309, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value310,tuple2$2voidpsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        if(exp_219) { exp_219 = come_decrement_ref_count2(exp_219, ((struct sNode*)exp_219)->finalize, ((struct sNode*)exp_219)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
            index_220=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value311=expression_v13(info))));
            expected_next_character(93,info);
            expected_next_character(61,info);
            no_comma_221=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_222=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value312=expression_v13(info))));
            info->no_comma=no_comma_221;
            list$1tuple2$2sNodephsNodephph_add(initializer_214,(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(((struct tuple2$2sNodephsNodeph*)(__right_value314=tuple2$2sNodephsNodeph_initialize((struct tuple2$2sNodephsNodeph*)come_increment_ref_count(((struct tuple2$2sNodephsNodeph*)(__right_value313=(struct tuple2$2sNodephsNodeph*)come_calloc(1, sizeof(struct tuple2$2sNodephsNodeph)*(1), "07var.c", 778, "struct tuple2$2sNodephsNodeph")))),(struct sNode*)come_increment_ref_count(index_220),(struct sNode*)come_increment_ref_count(exp_222))))));
            come_call_finalizer3(__right_value313,tuple2$2sNodephsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(__right_value314,tuple2$2sNodephsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            if(index_220) { index_220 = come_decrement_ref_count2(index_220, ((struct sNode*)index_220)->finalize, ((struct sNode*)index_220)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp_222) { exp_222 = come_decrement_ref_count2(exp_222, ((struct sNode*)exp_222)->finalize, ((struct sNode*)exp_222)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            no_comma_223=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_224=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value315=expression_v13(info))));
            info->no_comma=no_comma_223;
            list$1tuple2$2sNodephsNodephph_add(initializer_214,(struct tuple2$2voidpsNodeph*)come_increment_ref_count(((struct tuple2$2voidpsNodeph*)(__right_value317=tuple2$2voidpsNodeph_initialize((struct tuple2$2voidpsNodeph*)come_increment_ref_count(((struct tuple2$2voidpsNodeph*)(__right_value316=(struct tuple2$2voidpsNodeph*)come_calloc(1, sizeof(struct tuple2$2voidpsNodeph)*(1), "07var.c", 786, "struct tuple2$2voidpsNodeph")))),((void*)0),(struct sNode*)come_increment_ref_count(exp_224))))));
            __right_value316 = come_decrement_ref_count2(__right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(__right_value317,tuple2$2voidpsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            if(exp_224) { exp_224 = come_decrement_ref_count2(exp_224, ((struct sNode*)exp_224)->finalize, ((struct sNode*)exp_224)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    expected_next_character(125,info);
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 792, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sArrayInitializer*)(__right_value319=sArrayInitializer_initialize((struct sArrayInitializer*)come_increment_ref_count(((struct sArrayInitializer*)(__right_value318=(struct sArrayInitializer*)come_calloc(1, sizeof(struct sArrayInitializer)*(1), "07var.c", 792, "sArrayInitializer")))),(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(initializer_214),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sArrayInitializer_finalize;
    _inf_value1->clone=(void*)sArrayInitializer_clone;
    _inf_value1->compile=(void*)sArrayInitializer_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sArrayInitializer_kind;
    __result139__ = __result_obj__ = ((struct sNode*)(__right_value323=_inf_value1));
    come_call_finalizer3(initializer_214,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value318,sArrayInitializer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value319,sArrayInitializer_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value323) { __right_value323 = come_decrement_ref_count2(__right_value323, ((struct sNode*)__right_value323)->finalize, ((struct sNode*)__right_value323)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result139__;
    come_call_finalizer3(initializer_214,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2sNodephsNodeph* tuple2$2sNodephsNodeph_initialize(struct tuple2$2sNodephsNodeph* self, struct sNode* v1, struct sNode* v2){
void* __result_obj__;
struct sNode* __dec_obj101;
struct sNode* __dec_obj102;
struct tuple2$2sNodephsNodeph* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
            __dec_obj101=self->v1;
            self->v1=(struct sNode*)come_increment_ref_count(v1);
            if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count2(__dec_obj101, ((struct sNode*)__dec_obj101)->finalize, ((struct sNode*)__dec_obj101)->_protocol_obj, 0,0,0, (void*)0); }
            __dec_obj102=self->v2;
            self->v2=(struct sNode*)come_increment_ref_count(v2);
            if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count2(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0,0, (void*)0); }
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
struct sNode* __dec_obj103;
struct tuple2$2voidpsNodeph* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
            self->v1=v1;
            __dec_obj103=self->v2;
            self->v2=(struct sNode*)come_increment_ref_count(v2);
            if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count2(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0,0, (void*)0); }
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
void* __right_value320;
struct sArrayInitializer* result_225;
void* __right_value321;
char* __dec_obj104;
void* __right_value322;
struct list$1tuple2$2sNodephsNodephph* __dec_obj105;
struct sArrayInitializer* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value320 = (void*)0;
memset(&result_225, 0, sizeof(struct sArrayInitializer*));
__right_value321 = (void*)0;
__right_value322 = (void*)0;
        if(self==(void*)0) {
            __result137__ = __result_obj__ = (void*)0;
            return __result137__;
        }
        result_225=(struct sArrayInitializer*)come_increment_ref_count(((struct sArrayInitializer*)(__right_value320=(struct sArrayInitializer*)come_calloc(1, sizeof(struct sArrayInitializer)*(1), "sArrayInitializer_clone", 3, "sArrayInitializer"))));
        if(self!=((void*)0)) {
            result_225->sline=self->sline;
        }
        if(self!=((void*)0)&&self->sname!=((void*)0)) {
            __dec_obj104=result_225->sname;
            result_225->sname=(char*)come_increment_ref_count(((char*)(__right_value321=string_clone(self->sname))));
            __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        if(self!=((void*)0)&&self->initializer!=((void*)0)) {
            __dec_obj105=result_225->initializer;
            result_225->initializer=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list$1tuple2$2sNodephsNodephph*)(__right_value322=list$1tuple2$2sNodephsNodephphp_clone(self->initializer))));
            come_call_finalizer3(__dec_obj105,list$1tuple2$2sNodephsNodephph_finalize, 0, 0, 0, 0, (void*)0);
        }
        __result138__ = __result_obj__ = result_225;
        come_call_finalizer3(result_225,sArrayInitializer_finalize, 0, 0, 1, 0, (void*)0);
        return __result138__;
        come_call_finalizer3(result_225,sArrayInitializer_finalize, 0, 0, 0, 0, (void*)0);
}

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info){
void* __right_value324;
struct sVar* self_226;
void* __right_value325;
char* __dec_obj106;
void* __right_value326;
struct sType* __dec_obj107;
void* __right_value327;
char* __dec_obj108;
void* __right_value328;
char* __dec_obj109;
void* __right_value329;
char* __dec_obj110;
char* __dec_obj111;
void* __right_value336;
__right_value324 = (void*)0;
memset(&self_226, 0, sizeof(struct sVar*));
__right_value325 = (void*)0;
__right_value326 = (void*)0;
__right_value327 = (void*)0;
__right_value328 = (void*)0;
__right_value329 = (void*)0;
__right_value336 = (void*)0;
    self_226=(struct sVar*)come_increment_ref_count(((struct sVar*)(__right_value324=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 797, "sVar"))));
    __dec_obj106=self_226->mName;
    self_226->mName=(char*)come_increment_ref_count(((char*)(__right_value325=__builtin_string(name))));
    __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj107=self_226->mType;
    self_226->mType=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value326=sType_clone(type))));
    come_call_finalizer3(__dec_obj107,sType_finalize, 0, 0, 0, 0, (void*)0);
    if(type->mFunctionParam) {
        __dec_obj108=self_226->mCValueName;
        self_226->mCValueName=(char*)come_increment_ref_count(((char*)(__right_value327=__builtin_string(name))));
        __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        static int n_227=0;
        __dec_obj109=self_226->mCValueName;
        self_226->mCValueName=(char*)come_increment_ref_count(((char*)(__right_value328=xsprintf("%s_%d",name,n_227++))));
        __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    self_226->mBlockLevel=info->block_level;
    self_226->mAllocaValue=(_Bool)0;
    self_226->mFunctionParam=(_Bool)0;
    self_226->mNoFree=(_Bool)0;
    if(info->come_fun) {
        __dec_obj110=self_226->mFunName;
        self_226->mFunName=(char*)come_increment_ref_count(((char*)(__right_value329=string_clone(info->come_fun->mName))));
        __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj111=self_226->mFunName;
        self_226->mFunName=((void*)0);
        __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    map$2charphsVarph_insert(info->lv_table->mVars,(char*)come_increment_ref_count(((char*)(__right_value336=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_226));
    __right_value336 = come_decrement_ref_count2(__right_value336, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(self_226,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
unsigned int hash_245;
unsigned int it_246;
_Bool same_key_exist_263;
char* it2_266;
struct map$2charphsVarph* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
        if(self->len*10>=self->size) {
            map$2charphsVarph_rehash(self);
        }
        hash_245=string_get_hash_key(key)%self->size;
        it_246=hash_245;
        while((_Bool)1) {
            if(self->item_existance[it_246]) {
                if(string_equals(self->keys[it_246],key)) {
                    if(1) {
                        list$1charp_remove(self->key_list,self->keys[it_246]);
                        self->keys[it_246] = come_decrement_ref_count2(self->keys[it_246], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        self->keys[it_246]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charp_remove(self->key_list,self->keys[it_246]);
                        self->keys[it_246]=key;
                    }
                    if(1) {
                        come_call_finalizer3(self->items[it_246],sVar_finalize, 0, 0, 0, 0, (void*)0);
                        self->items[it_246]=(struct sVar*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_246]=item;
                    }
                    break;
                }
                it_246++;
                if(it_246>=self->size) {
                    it_246=0;
                }
                else {
                    if(it_246==hash_245) {
                        printf("unexpected error in map.insert\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                self->item_existance[it_246]=(_Bool)1;
                if(1) {
                    self->keys[it_246]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_246]=key;
                }
                if(1) {
                    self->items[it_246]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_246]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_263=(_Bool)0;
        for(        it2_266=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_266=list$1charp_next(self->key_list)        ){
            if(string_equals(it2_266,key)) {
                same_key_exist_263=(_Bool)1;
            }
        }
        if(!same_key_exist_263) {
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
int size_228;
void* __right_value330;
char** keys_229;
void* __right_value331;
struct sVar** items_230;
void* __right_value332;
_Bool* item_existance_231;
int len_232;
char* it_235;
struct sVar* default_value_238;
struct sVar* it2_239;
unsigned int hash_242;
int n_243;
struct sVar* default_value_244;
__right_value330 = (void*)0;
__right_value331 = (void*)0;
memset(&items_230, 0, sizeof(struct sVar**));
__right_value332 = (void*)0;
memset(&default_value_238, 0, sizeof(struct sVar*));
memset(&it2_239, 0, sizeof(struct sVar*));
memset(&default_value_244, 0, sizeof(struct sVar*));
                size_228=self->size*10;
                keys_229=(char**)come_increment_ref_count(((char**)(__right_value330=(char**)come_calloc(1, sizeof(char*)*(1*(size_228)), "./neo-c.h", 1315, "char*%"))));
                __right_value330 = come_decrement_ref_count2(__right_value330, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                items_230=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value331=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_228)), "./neo-c.h", 1316, "sVar*%"))));
                come_call_finalizer3(__right_value331,sVar_finalize, 0, 1, 0, 0, (void*)0);
                item_existance_231=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value332=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_228)), "./neo-c.h", 1317, "bool"))));
                __right_value332 = come_decrement_ref_count2(__right_value332, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                len_232=0;
                for(                it_235=map$2charphsVarph_begin(self);                !map$2charphsVarph_end(self);                it_235=map$2charphsVarph_next(self)                ){
                    memset(&default_value_238,0,sizeof(struct sVar*));
                    it2_239=map$2charphsVarph_at(self,it_235,default_value_238);
                    hash_242=string_get_hash_key(it_235)%size_228;
                    n_243=hash_242;
                    while((_Bool)1) {
                        if(item_existance_231[n_243]) {
                            n_243++;
                            if(n_243>=size_228) {
                                n_243=0;
                            }
                            else {
                                if(n_243==hash_242) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    stackframe();
                                    exit(2);
                                }
                            }
                        }
                        else {
                            item_existance_231[n_243]=(_Bool)1;
                            keys_229[n_243]=it_235;
                            items_230[n_243]=map$2charphsVarph_at(self,it_235,default_value_244);
                            len_232++;
                            break;
                        }
                    }
                }
                come_free((char*)self->items);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_free((char*)self->keys);
                self->keys=keys_229;
                self->items=items_230;
                self->item_existance=item_existance_231;
                self->size=size_228;
                self->len=len_232;
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
char* result_233;
char* __result140__;
char* __result141__;
char* result_234;
char* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_233, 0, sizeof(char*));
memset(&result_234, 0, sizeof(char*));
                    if(self==((void*)0)) {
                        memset(&result_233,0,sizeof(char*));
                        __result140__ = __result_obj__ = result_233;
                        return __result140__;
                    }
                    self->key_list->it=self->key_list->head;
                    if(self->key_list->it) {
                        __result141__ = __result_obj__ = self->key_list->it->item;
                        return __result141__;
                    }
                    memset(&result_234,0,sizeof(char*));
                    __result142__ = __result_obj__ = result_234;
                    return __result142__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
                    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
char* result_236;
char* __result143__;
char* __result144__;
char* result_237;
char* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_236, 0, sizeof(char*));
memset(&result_237, 0, sizeof(char*));
                    if(self==((void*)0)||self->key_list->it==((void*)0)) {
                        memset(&result_236,0,sizeof(char*));
                        __result143__ = __result_obj__ = result_236;
                        return __result143__;
                    }
                    self->key_list->it=self->key_list->it->next;
                    if(self->key_list->it) {
                        __result144__ = __result_obj__ = self->key_list->it->item;
                        return __result144__;
                    }
                    memset(&result_237,0,sizeof(char*));
                    __result145__ = __result_obj__ = result_237;
                    return __result145__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_240;
unsigned int it_241;
struct sVar* __result146__;
struct sVar* __result147__;
struct sVar* __result148__;
struct sVar* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
                        hash_240=string_get_hash_key(((char*)key))%self->size;
                        it_241=hash_240;
                        while((_Bool)1) {
                            if(self->item_existance[it_241]) {
                                if(string_equals(self->keys[it_241],key)) {
                                    __result146__ = __result_obj__ = self->items[it_241];
                                    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result146__;
                                }
                                it_241++;
                                if(it_241>=self->size) {
                                    it_241=0;
                                }
                                else {
                                    if(it_241==hash_240) {
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
int it2_247;
struct list_item$1charp* it_248;
struct list$1charp* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_248, 0, sizeof(struct list_item$1charp*));
                            it2_247=0;
                            it_248=self->head;
                            while(it_248!=((void*)0)) {
                                if(string_equals(it_248->item,item)) {
                                    list$1charp_delete(self,it2_247,it2_247+1);
                                    break;
                                }
                                it2_247++;
                                it_248=it_248->next;
                            }
                            __result153__ = __result_obj__ = self;
                            return __result153__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
int tmp_249;
struct list$1charp* __result150__;
struct list_item$1charp* it_252;
int i_253;
struct list_item$1charp* prev_it_254;
struct list_item$1charp* it_255;
int i_256;
struct list_item$1charp* prev_it_257;
struct list_item$1charp* it_258;
struct list_item$1charp* head_prev_it_259;
struct list_item$1charp* tail_it_260;
int i_261;
struct list_item$1charp* prev_it_262;
struct list$1charp* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_252, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_254, 0, sizeof(struct list_item$1charp*));
memset(&it_255, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_257, 0, sizeof(struct list_item$1charp*));
memset(&it_258, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_259, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_260, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_262, 0, sizeof(struct list_item$1charp*));
                                        if(head<0) {
                                            head+=self->len;
                                        }
                                        if(tail<0) {
                                            tail+=self->len+1;
                                        }
                                        if(head>tail) {
                                            tmp_249=tail;
                                            tail=head;
                                            head=tmp_249;
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
                                                it_252=self->head;
                                                i_253=0;
                                                while(it_252!=((void*)0)) {
                                                    if(i_253<tail) {
                                                        prev_it_254=it_252;
                                                        it_252=it_252->next;
                                                        i_253++;
                                                        come_call_finalizer3(prev_it_254,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                        self->len--;
                                                    }
                                                    else {
                                                        if(i_253==tail) {
                                                            self->head=it_252;
                                                            self->head->prev=((void*)0);
                                                            break;
                                                        }
                                                        else {
                                                            it_252=it_252->next;
                                                            i_253++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                if(tail==self->len) {
                                                    it_255=self->head;
                                                    i_256=0;
                                                    while(it_255!=((void*)0)) {
                                                        if(i_256==head) {
                                                            self->tail=it_255->prev;
                                                            self->tail->next=((void*)0);
                                                        }
                                                        if(i_256>=head) {
                                                            prev_it_257=it_255;
                                                            it_255=it_255->next;
                                                            i_256++;
                                                            come_call_finalizer3(prev_it_257,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_255=it_255->next;
                                                            i_256++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    it_258=self->head;
                                                    head_prev_it_259=((void*)0);
                                                    tail_it_260=((void*)0);
                                                    i_261=0;
                                                    while(it_258!=((void*)0)) {
                                                        if(i_261==head) {
                                                            head_prev_it_259=it_258->prev;
                                                        }
                                                        if(i_261==tail) {
                                                            tail_it_260=it_258;
                                                        }
                                                        if(i_261>=head&&i_261<tail) {
                                                            prev_it_262=it_258;
                                                            it_258=it_258->next;
                                                            i_261++;
                                                            come_call_finalizer3(prev_it_262,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_258=it_258->next;
                                                            i_261++;
                                                        }
                                                    }
                                                    if(head_prev_it_259!=((void*)0)) {
                                                        head_prev_it_259->next=tail_it_260;
                                                    }
                                                    if(tail_it_260!=((void*)0)) {
                                                        tail_it_260->prev=head_prev_it_259;
                                                    }
                                                }
                                            }
                                        }
                                        __result152__ = __result_obj__ = self;
                                        return __result152__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_250;
struct list_item$1charp* prev_it_251;
struct list$1charp* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_250, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_251, 0, sizeof(struct list_item$1charp*));
                                                it_250=self->head;
                                                while(it_250!=((void*)0)) {
                                                    prev_it_251=it_250;
                                                    it_250=it_250->next;
                                                    come_call_finalizer3(prev_it_251,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
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
char* result_264;
char* __result154__;
char* __result155__;
char* result_265;
char* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_264, 0, sizeof(char*));
memset(&result_265, 0, sizeof(char*));
            if(self==((void*)0)) {
                memset(&result_264,0,sizeof(char*));
                __result154__ = __result_obj__ = result_264;
                return __result154__;
            }
            self->it=self->head;
            if(self->it) {
                __result155__ = __result_obj__ = self->it->item;
                return __result155__;
            }
            memset(&result_265,0,sizeof(char*));
            __result156__ = __result_obj__ = result_265;
            return __result156__;
}

static _Bool list$1charp_end(struct list$1charp* self){
            return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
char* result_267;
char* __result157__;
char* __result158__;
char* result_268;
char* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_267, 0, sizeof(char*));
memset(&result_268, 0, sizeof(char*));
            if(self==((void*)0)||self->it==((void*)0)) {
                memset(&result_267,0,sizeof(char*));
                __result157__ = __result_obj__ = result_267;
                return __result157__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result158__ = __result_obj__ = self->it->item;
                return __result158__;
            }
            memset(&result_268,0,sizeof(char*));
            __result159__ = __result_obj__ = result_268;
            return __result159__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
void* __right_value333;
struct list_item$1charp* litem_269;
void* __right_value334;
struct list_item$1charp* litem_270;
void* __right_value335;
struct list_item$1charp* litem_271;
struct list$1charp* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value333 = (void*)0;
memset(&litem_269, 0, sizeof(struct list_item$1charp*));
__right_value334 = (void*)0;
memset(&litem_270, 0, sizeof(struct list_item$1charp*));
__right_value335 = (void*)0;
memset(&litem_271, 0, sizeof(struct list_item$1charp*));
                if(self->len==0) {
                    litem_269=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value333=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 219, "list_item$1charp"))));
                    come_call_finalizer3(__right_value333,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_269->prev=((void*)0);
                    litem_269->next=((void*)0);
                    litem_269->item=item;
                    self->tail=litem_269;
                    self->head=litem_269;
                }
                else {
                    if(self->len==1) {
                        litem_270=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value334=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 229, "list_item$1charp"))));
                        come_call_finalizer3(__right_value334,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_270->prev=self->head;
                        litem_270->next=((void*)0);
                        litem_270->item=item;
                        self->tail=litem_270;
                        self->head->next=litem_270;
                    }
                    else {
                        litem_271=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value335=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 239, "list_item$1charp"))));
                        come_call_finalizer3(__right_value335,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_271->prev=self->tail;
                        litem_271->next=((void*)0);
                        litem_271->item=item;
                        self->tail->next=litem_271;
                        self->tail=litem_271;
                    }
                }
                self->len++;
                __result160__ = __result_obj__ = self;
                return __result160__;
}

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info){
void* __right_value337;
struct sVar* self_272;
void* __right_value338;
char* __dec_obj112;
void* __right_value339;
struct sType* __dec_obj113;
void* __right_value340;
char* __dec_obj114;
void* __right_value341;
__right_value337 = (void*)0;
memset(&self_272, 0, sizeof(struct sVar*));
__right_value338 = (void*)0;
__right_value339 = (void*)0;
__right_value340 = (void*)0;
__right_value341 = (void*)0;
    self_272=(struct sVar*)come_increment_ref_count(((struct sVar*)(__right_value337=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 826, "sVar"))));
    __dec_obj112=self_272->mName;
    self_272->mName=(char*)come_increment_ref_count(((char*)(__right_value338=__builtin_string(name))));
    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj113=self_272->mType;
    self_272->mType=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value339=sType_clone(type))));
    come_call_finalizer3(__dec_obj113,sType_finalize, 0, 0, 0, 0, (void*)0);
    self_272->mGlobal=(_Bool)1;
    __dec_obj114=self_272->mCValueName;
    self_272->mCValueName=(char*)come_increment_ref_count(((char*)(__right_value340=__builtin_string(name))));
    __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
    self_272->mBlockLevel=info->block_level;
    self_272->mAllocaValue=(_Bool)0;
    self_272->mFunctionParam=(_Bool)0;
    self_272->mNoFree=(_Bool)0;
    map$2charphsVarph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(((char*)(__right_value341=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_272));
    __right_value341 = come_decrement_ref_count2(__right_value341, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(self_272,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info){
void* __right_value342;
struct sVar* self_273;
void* __right_value343;
char* __dec_obj115;
void* __right_value344;
struct sType* __dec_obj116;
void* __right_value345;
char* __dec_obj117;
void* __right_value346;
__right_value342 = (void*)0;
memset(&self_273, 0, sizeof(struct sVar*));
__right_value343 = (void*)0;
__right_value344 = (void*)0;
__right_value345 = (void*)0;
__right_value346 = (void*)0;
    self_273=(struct sVar*)come_increment_ref_count(((struct sVar*)(__right_value342=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 845, "sVar"))));
    __dec_obj115=self_273->mName;
    self_273->mName=(char*)come_increment_ref_count(((char*)(__right_value343=__builtin_string(name))));
    __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj116=self_273->mType;
    self_273->mType=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value344=sType_clone(type))));
    come_call_finalizer3(__dec_obj116,sType_finalize, 0, 0, 0, 0, (void*)0);
    self_273->mGlobal=(_Bool)1;
    __dec_obj117=self_273->mCValueName;
    self_273->mCValueName=(char*)come_increment_ref_count(((char*)(__right_value345=__builtin_string(c_value))));
    __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
    self_273->mBlockLevel=info->block_level;
    self_273->mAllocaValue=(_Bool)0;
    self_273->mFunctionParam=(_Bool)0;
    self_273->mNoFree=(_Bool)0;
    map$2charphsVarph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(((char*)(__right_value346=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_273));
    __right_value346 = come_decrement_ref_count2(__right_value346, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(self_273,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool is_type_name_flag_274;
_Bool multiple_declare_275;
char* p_276;
int sline_277;
void* __right_value347;
struct tuple3$3sTypephcharphbool* multiple_assign_var3;
struct sType* type_278;
char* name_279;
_Bool err_280;
void* __right_value348;
struct tuple2$2sTypephcharph* multiple_assign_var4;
struct sType* type_281;
char* name_282;
void* __right_value349;
_Bool no_output_err_283;
_Bool no_comma_284;
_Bool no_output_come_code_285;
void* __right_value350;
struct sNode* exp_286;
_Bool attr_define_287;
char* p_288;
int sline_289;
void* __right_value351;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* type_290;
char* name_291;
_Bool err_292;
struct sFun* fun_293;
void* __right_value352;
char* buf2_294;
struct list$1charph* multiple_assign_295;
void* __right_value353;
void* __right_value354;
struct list$1charph* __dec_obj118;
void* __right_value358;
void* __right_value359;
char* buf3_299;
void* __right_value360;
_Bool no_comma_300;
void* __right_value361;
struct sNode* right_value_301;
void* __right_value362;
struct sNode* __dec_obj122;
void* __right_value363;
void* __right_value364;
void* __right_value365;
struct sNode* _inf_value2;
struct sStoreNode* _inf_obj_value2;
void* __right_value373;
struct sNode* __result165__;
void* __right_value374;
void* __right_value375;
struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare_303;
void* __right_value376;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* base_type_304;
char* name_305;
_Bool err_306;
void* __right_value377;
struct tuple2$2sTypephcharph* multiple_assign_var7;
struct sType* type2_307;
char* var_name_308;
_Bool no_comma_309;
void* __right_value378;
struct sNode* exp_310;
void* __right_value382;
void* __right_value383;
void* __right_value384;
void* __right_value385;
void* __right_value386;
struct tuple2$2sTypephcharph* multiple_assign_var8;
struct sType* type2_314;
char* var_name_315;
_Bool no_comma_316;
void* __right_value387;
struct sNode* exp_317;
void* __right_value388;
void* __right_value389;
void* __right_value390;
void* __right_value391;
struct sNode* right_node_318;
void* __right_value392;
char* var_name2_319;
void* __right_value393;
void* __right_value394;
void* __right_value395;
struct sNode* _inf_value3;
struct sStoreNode* _inf_obj_value3;
void* __right_value403;
struct sNode* __result171__;
void* __right_value404;
struct tuple3$3sTypephcharphbool* multiple_assign_var9;
struct sType* type_321;
char* name_322;
_Bool err_323;
void* __right_value405;
char* __dec_obj143;
void* __right_value409;
void* __right_value410;
void* __right_value411;
void* __right_value412;
void* __right_value413;
struct sNode* _inf_value4;
struct sLoadNode* _inf_obj_value4;
void* __right_value417;
struct sNode* self_node_327;
void* __right_value418;
struct sNode* right_node_329;
void* __right_value419;
struct sNode* __result176__;
void* __right_value420;
struct sNode* __result177__;
void* __right_value421;
struct sNode* right_value_330;
void* __right_value422;
struct sNode* __dec_obj151;
void* __right_value423;
void* __right_value424;
void* __right_value425;
struct sNode* _inf_value5;
struct sStoreNode* _inf_obj_value5;
void* __right_value433;
struct sNode* __result180__;
void* __right_value434;
void* __right_value435;
void* __right_value436;
struct sNode* _inf_value6;
struct sLoadNode* _inf_obj_value6;
void* __right_value440;
struct sNode* node_332;
void* __right_value441;
struct sNode* __dec_obj160;
struct sNode* __result183__;
char* word_334;
void* __right_value442;
char* __dec_obj161;
void* __right_value443;
char* __dec_obj162;
_Bool is_type_name_flag_335;
void* __right_value444;
struct tuple3$3sTypephcharphbool* multiple_assign_var10;
struct sType* type_336;
char* name_337;
_Bool err_338;
void* __right_value445;
struct sNode* right_value_339;
void* __right_value446;
struct sNode* __dec_obj163;
void* __right_value447;
void* __right_value448;
struct sNode* _inf_value7;
struct sStoreNode* _inf_obj_value7;
void* __right_value456;
struct sNode* __result186__;
void* __right_value457;
void* __right_value458;
struct sNode* _inf_value8;
struct sStoreNode* _inf_obj_value8;
void* __right_value466;
struct sNode* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value347 = (void*)0;
__right_value348 = (void*)0;
__right_value349 = (void*)0;
__right_value350 = (void*)0;
memset(&exp_286, 0, sizeof(struct sNode*));
__right_value351 = (void*)0;
memset(&fun_293, 0, sizeof(struct sFun*));
__right_value352 = (void*)0;
memset(&buf2_294, 0, sizeof(char*));
memset(&multiple_assign_295, 0, sizeof(struct list$1charph*));
__right_value353 = (void*)0;
__right_value354 = (void*)0;
__right_value358 = (void*)0;
__right_value359 = (void*)0;
memset(&buf3_299, 0, sizeof(char*));
__right_value360 = (void*)0;
__right_value361 = (void*)0;
memset(&right_value_301, 0, sizeof(struct sNode*));
__right_value362 = (void*)0;
__right_value363 = (void*)0;
__right_value364 = (void*)0;
__right_value365 = (void*)0;
__right_value373 = (void*)0;
__right_value374 = (void*)0;
__right_value375 = (void*)0;
memset(&multiple_declare_303, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
__right_value376 = (void*)0;
__right_value377 = (void*)0;
__right_value378 = (void*)0;
memset(&exp_310, 0, sizeof(struct sNode*));
__right_value382 = (void*)0;
__right_value383 = (void*)0;
__right_value384 = (void*)0;
__right_value385 = (void*)0;
__right_value386 = (void*)0;
__right_value387 = (void*)0;
memset(&exp_317, 0, sizeof(struct sNode*));
__right_value388 = (void*)0;
__right_value389 = (void*)0;
__right_value390 = (void*)0;
__right_value391 = (void*)0;
memset(&right_node_318, 0, sizeof(struct sNode*));
__right_value392 = (void*)0;
memset(&var_name2_319, 0, sizeof(char*));
__right_value393 = (void*)0;
__right_value394 = (void*)0;
__right_value395 = (void*)0;
__right_value403 = (void*)0;
__right_value404 = (void*)0;
__right_value405 = (void*)0;
__right_value409 = (void*)0;
__right_value410 = (void*)0;
__right_value411 = (void*)0;
__right_value412 = (void*)0;
__right_value413 = (void*)0;
__right_value417 = (void*)0;
memset(&self_node_327, 0, sizeof(struct sNode*));
__right_value418 = (void*)0;
memset(&right_node_329, 0, sizeof(struct sNode*));
__right_value419 = (void*)0;
__right_value420 = (void*)0;
__right_value421 = (void*)0;
memset(&right_value_330, 0, sizeof(struct sNode*));
__right_value422 = (void*)0;
__right_value423 = (void*)0;
__right_value424 = (void*)0;
__right_value425 = (void*)0;
__right_value433 = (void*)0;
__right_value434 = (void*)0;
__right_value435 = (void*)0;
__right_value436 = (void*)0;
__right_value440 = (void*)0;
memset(&node_332, 0, sizeof(struct sNode*));
__right_value441 = (void*)0;
memset(&word_334, 0, sizeof(char*));
__right_value442 = (void*)0;
__right_value443 = (void*)0;
__right_value444 = (void*)0;
__right_value445 = (void*)0;
memset(&right_value_339, 0, sizeof(struct sNode*));
__right_value446 = (void*)0;
__right_value447 = (void*)0;
__right_value448 = (void*)0;
__right_value456 = (void*)0;
__right_value457 = (void*)0;
__right_value458 = (void*)0;
__right_value466 = (void*)0;
    is_type_name_flag_274=is_type_name(buf,info);
    multiple_declare_275=(_Bool)0;
    if(is_type_name_flag_274) {
        p_276=info->p;
        sline_277=info->sline;
        info->p=head;
        info->sline=head_sline;
        if(xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value347=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_278=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            name_279=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_280=multiple_assign_var3->v3;
            come_call_finalizer3(__right_value347,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(err_280) {
                multiple_assign_var4=((struct tuple2$2sTypephcharph*)(__right_value348=parse_variable_name((struct sType*)come_increment_ref_count(type_278),(_Bool)1,info)));
                type_281=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                name_282=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                come_call_finalizer3(__right_value348,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                if(*info->p==61) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(*info->p==123) {
                        ((char*)(__right_value349=skip_block(info)));
                        __right_value349 = come_decrement_ref_count2(__right_value349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        no_output_err_283=info->no_output_err;
                        no_comma_284=info->no_comma;
                        no_output_come_code_285=info->no_output_come_code;
                        info->no_output_err=(_Bool)1;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        exp_286=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value350=expression_v13(info))));
                        info->no_comma=no_comma_284;
                        info->no_output_err=no_output_err_283;
                        info->no_output_come_code=no_output_come_code_285;
                        if(exp_286) { exp_286 = come_decrement_ref_count2(exp_286, ((struct sNode*)exp_286)->finalize, ((struct sNode*)exp_286)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                }
                if(!is_type_name(name_282,info)&&*info->p==44) {
                    multiple_declare_275=(_Bool)1;
                }
                come_call_finalizer3(type_281,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_282 = come_decrement_ref_count2(name_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(type_278,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_279 = come_decrement_ref_count2(name_279, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_276;
        info->sline=sline_277;
    }
    attr_define_287=(_Bool)0;
    if(is_type_name_flag_274&&info->defining_class) {
        p_288=info->p;
        sline_289=info->sline;
        info->p=head;
        info->sline=head_sline;
        multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value351=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_290=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
        name_291=(char*)come_increment_ref_count(multiple_assign_var5->v2);
        err_292=multiple_assign_var5->v3;
        come_call_finalizer3(__right_value351,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(err_292&&strmemcmp(info->p,"self")) {
            attr_define_287=(_Bool)1;
        }
        info->p=p_288;
        info->sline=sline_289;
        come_call_finalizer3(type_290,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_291 = come_decrement_ref_count2(name_291, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    fun_293=map$2charphsFunphp_operator_load_element(info->funcs,buf);
    if((!gComeC&&charp_operator_equals(buf,"var"))||charp_operator_equals(buf,"auto")) {
        parse_sharp_v5(info);
        buf2_294=(char*)come_increment_ref_count(((char*)(__right_value352=parse_word(info))));
        parse_sharp_v5(info);
        multiple_assign_295=((void*)0);
        if(*info->p==44) {
            __dec_obj118=multiple_assign_295;
            multiple_assign_295=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value354=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value353=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "07var.c", 949, "list$1charph"))))))));
            come_call_finalizer3(__dec_obj118,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value353,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(multiple_assign_295,(char*)come_increment_ref_count(((char*)(__right_value358=string_clone(buf2_294)))));
            __right_value358 = come_decrement_ref_count2(__right_value358, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                buf3_299=(char*)come_increment_ref_count(((char*)(__right_value359=parse_word(info))));
                parse_sharp_v5(info);
                list$1charph_push_back(multiple_assign_295,(char*)come_increment_ref_count(((char*)(__right_value360=string_clone(buf3_299)))));
                __right_value360 = come_decrement_ref_count2(__right_value360, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buf3_299 = come_decrement_ref_count2(buf3_299, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        parse_sharp_v5(info);
        if(*info->p==61&&*(info->p+1)!=61) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            no_comma_300=info->no_comma;
            info->no_comma=(_Bool)1;
            right_value_301=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value361=expression_v13(info))));
            info->no_comma=no_comma_300;
            parse_sharp_v5(info);
            __dec_obj122=right_value_301;
            right_value_301=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value362=post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_301),info))));
            if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count2(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0,0,0, (void*)0); }
            parse_sharp_v5(info);
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 979, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sStoreNode*)(__right_value365=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value363=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 979, "sStoreNode")))),(char*)come_increment_ref_count(((char*)(__right_value364=__builtin_string(buf2_294)))),(struct list$1charph*)come_increment_ref_count(multiple_assign_295),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_301),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sStoreNode_finalize;
            _inf_value2->clone=(void*)sStoreNode_clone;
            _inf_value2->compile=(void*)sStoreNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sNodeBase_terminated;
            _inf_value2->kind=(void*)sStoreNode_kind;
            __result165__ = __result_obj__ = ((struct sNode*)(__right_value373=_inf_value2));
            if(right_value_301) { right_value_301 = come_decrement_ref_count2(right_value_301, ((struct sNode*)right_value_301)->finalize, ((struct sNode*)right_value_301)->_protocol_obj, 0, 0, 0, (void*)0); } 
            buf2_294 = come_decrement_ref_count2(buf2_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(multiple_assign_295,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value363,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            __right_value364 = come_decrement_ref_count2(__right_value364, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(__right_value365,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value373) { __right_value373 = come_decrement_ref_count2(__right_value373, ((struct sNode*)__right_value373)->finalize, ((struct sNode*)__right_value373)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result165__;
            if(right_value_301) { right_value_301 = come_decrement_ref_count2(right_value_301, ((struct sNode*)right_value_301)->finalize, ((struct sNode*)right_value_301)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            err_msg(info,"var requires a right value(%c)",*info->p);
            exit(1);
        }
        buf2_294 = come_decrement_ref_count2(buf2_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(multiple_assign_295,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(multiple_declare_275) {
            info->p=head;
            info->sline=head_sline;
            multiple_declare_303=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(__right_value375=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(__right_value374=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "07var.c", 990, "list$1tuple3$3sTypephcharphsNodephph"))))))));
            come_call_finalizer3(__right_value374,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
            multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value376=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            base_type_304=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
            name_305=(char*)come_increment_ref_count(multiple_assign_var6->v2);
            err_306=multiple_assign_var6->v3;
            come_call_finalizer3(__right_value376,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(!err_306) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            parse_sharp_v5(info);
            multiple_assign_var7=((struct tuple2$2sTypephcharph*)(__right_value377=parse_variable_name((struct sType*)come_increment_ref_count(base_type_304),(_Bool)1,info)));
            type2_307=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
            var_name_308=(char*)come_increment_ref_count(multiple_assign_var7->v2);
            come_call_finalizer3(__right_value377,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            if(*info->p==61) {
                info->p++;
                skip_spaces_and_lf(info);
                info->array_initializer=(_Bool)1;
                no_comma_309=info->no_comma;
                info->no_comma=(_Bool)1;
                exp_310=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value378=expression_v13(info))));
                info->no_comma=no_comma_309;
                info->array_initializer=(_Bool)0;
                list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_303,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(__right_value383=tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(__right_value382=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1015, "struct tuple3$3sTypephcharphsNodeph")))),(struct sType*)come_increment_ref_count(type2_307),(char*)come_increment_ref_count(var_name_308),(struct sNode*)come_increment_ref_count(exp_310))))));
                come_call_finalizer3(__right_value382,tuple3$3sTypephcharphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(__right_value383,tuple3$3sTypephcharphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                if(exp_310) { exp_310 = come_decrement_ref_count2(exp_310, ((struct sNode*)exp_310)->finalize, ((struct sNode*)exp_310)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_303,(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(__right_value385=tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(__right_value384=(struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 1018, "struct tuple3$3sTypephcharphvoidp")))),(struct sType*)come_increment_ref_count(type2_307),(char*)come_increment_ref_count(var_name_308),((void*)0))))));
                __right_value384 = come_decrement_ref_count2(__right_value384, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(__right_value385,tuple3$3sTypephcharphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                multiple_assign_var8=((struct tuple2$2sTypephcharph*)(__right_value386=parse_variable_name((struct sType*)come_increment_ref_count(base_type_304),(_Bool)0,info)));
                type2_314=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                var_name_315=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                come_call_finalizer3(__right_value386,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                parse_sharp_v5(info);
                if(*info->p==61) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    no_comma_316=info->no_comma;
                    info->no_comma=(_Bool)1;
                    info->array_initializer=(_Bool)1;
                    exp_317=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value387=expression_v13(info))));
                    info->no_comma=no_comma_316;
                    info->array_initializer=(_Bool)0;
                    list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_303,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(__right_value389=tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(__right_value388=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1042, "struct tuple3$3sTypephcharphsNodeph")))),(struct sType*)come_increment_ref_count(type2_314),(char*)come_increment_ref_count(var_name_315),(struct sNode*)come_increment_ref_count(exp_317))))));
                    come_call_finalizer3(__right_value388,tuple3$3sTypephcharphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(__right_value389,tuple3$3sTypephcharphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(exp_317) { exp_317 = come_decrement_ref_count2(exp_317, ((struct sNode*)exp_317)->finalize, ((struct sNode*)exp_317)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_303,(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(__right_value391=tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(__right_value390=(struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 1045, "struct tuple3$3sTypephcharphvoidp")))),(struct sType*)come_increment_ref_count(type2_314),(char*)come_increment_ref_count(var_name_315),((void*)0))))));
                    __right_value390 = come_decrement_ref_count2(__right_value390, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(__right_value391,tuple3$3sTypephcharphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                come_call_finalizer3(type2_314,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_315 = come_decrement_ref_count2(var_name_315, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            right_node_318=((void*)0);
            var_name2_319=(char*)come_increment_ref_count(((char*)(__right_value392=__builtin_string(""))));
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1052, "struct sNode");
            _inf_obj_value3=come_increment_ref_count(((struct sStoreNode*)(__right_value395=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value393=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1052, "sStoreNode")))),(char*)come_increment_ref_count(((char*)(__right_value394=__builtin_string(buf)))),((void*)0),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare_303),(struct sType*)come_increment_ref_count(base_type_304),(_Bool)1,((void*)0),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sStoreNode_finalize;
            _inf_value3->clone=(void*)sStoreNode_clone;
            _inf_value3->compile=(void*)sStoreNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sStoreNode_kind;
            __result171__ = __result_obj__ = ((struct sNode*)(__right_value403=_inf_value3));
            come_call_finalizer3(multiple_declare_303,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(base_type_304,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_305 = come_decrement_ref_count2(name_305, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_307,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_308 = come_decrement_ref_count2(var_name_308, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_node_318) { right_node_318 = come_decrement_ref_count2(right_node_318, ((struct sNode*)right_node_318)->finalize, ((struct sNode*)right_node_318)->_protocol_obj, 0, 0, 0, (void*)0); } 
            var_name2_319 = come_decrement_ref_count2(var_name2_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value393,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            __right_value394 = come_decrement_ref_count2(__right_value394, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(__right_value395,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value403) { __right_value403 = come_decrement_ref_count2(__right_value403, ((struct sNode*)__right_value403)->finalize, ((struct sNode*)__right_value403)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result171__;
            come_call_finalizer3(multiple_declare_303,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(base_type_304,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_305 = come_decrement_ref_count2(name_305, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_307,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_308 = come_decrement_ref_count2(var_name_308, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_node_318) { right_node_318 = come_decrement_ref_count2(right_node_318, ((struct sNode*)right_node_318)->finalize, ((struct sNode*)right_node_318)->_protocol_obj, 0, 0, 0, (void*)0); } 
            var_name2_319 = come_decrement_ref_count2(var_name2_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(attr_define_287) {
                info->p=head;
                info->sline=head_sline;
                parse_sharp_v5(info);
                multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(__right_value404=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_321=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                name_322=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                err_323=multiple_assign_var9->v3;
                come_call_finalizer3(__right_value404,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(!err_323) {
                    printf("%s %d: parse_type failed\n",info->sname,info->sline);
                    exit(2);
                }
                info->p+=strlen("self.");
                __dec_obj143=name_322;
                name_322=(char*)come_increment_ref_count(((char*)(__right_value405=parse_word(info))));
                __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
                parse_sharp_v5(info);
                list$1tuple2$2charphsTypephph_add(info->defining_class->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value410=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value409=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "07var.c", 1072, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_322),(struct sType*)come_increment_ref_count(type_321))))));
                __right_value409 = come_decrement_ref_count2(__right_value409, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(__right_value410,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                if(*info->p==61&&*(info->p+1)!=61) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1080, "struct sNode");
                    _inf_obj_value4=come_increment_ref_count(((struct sLoadNode*)(__right_value413=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value411=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1080, "sLoadNode")))),(char*)come_increment_ref_count(((char*)(__right_value412=__builtin_string("self")))),info))));
                    _inf_value4->_protocol_obj=_inf_obj_value4;
                    _inf_value4->finalize=(void*)sLoadNode_finalize;
                    _inf_value4->clone=(void*)sLoadNode_clone;
                    _inf_value4->compile=(void*)sLoadNode_compile;
                    _inf_value4->sline=(void*)sNodeBase_sline;
                    _inf_value4->sname=(void*)sNodeBase_sname;
                    _inf_value4->terminated=(void*)sNodeBase_terminated;
                    _inf_value4->kind=(void*)sLoadNode_kind;
                    self_node_327=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value417=_inf_value4)));
                    come_call_finalizer3(__right_value411,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                    __right_value412 = come_decrement_ref_count2(__right_value412, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(__right_value413,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                    right_node_329=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value418=expression_v13(info))));
                    __result176__ = __result_obj__ = ((struct sNode*)(__right_value419=store_field(self_node_327,(struct sNode*)come_increment_ref_count(right_node_329),(char*)come_increment_ref_count(name_322),info)));
                    if(self_node_327) { self_node_327 = come_decrement_ref_count2(self_node_327, ((struct sNode*)self_node_327)->finalize, ((struct sNode*)self_node_327)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(right_node_329) { right_node_329 = come_decrement_ref_count2(right_node_329, ((struct sNode*)right_node_329)->finalize, ((struct sNode*)right_node_329)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(type_321,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_322 = come_decrement_ref_count2(name_322, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(__right_value419) { __right_value419 = come_decrement_ref_count2(__right_value419, ((struct sNode*)__right_value419)->finalize, ((struct sNode*)__right_value419)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result176__;
                    if(self_node_327) { self_node_327 = come_decrement_ref_count2(self_node_327, ((struct sNode*)self_node_327)->finalize, ((struct sNode*)self_node_327)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(right_node_329) { right_node_329 = come_decrement_ref_count2(right_node_329, ((struct sNode*)right_node_329)->finalize, ((struct sNode*)right_node_329)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    __result177__ = __result_obj__ = ((struct sNode*)(__right_value420=create_null_node(info)));
                    come_call_finalizer3(type_321,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_322 = come_decrement_ref_count2(name_322, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(__right_value420) { __right_value420 = come_decrement_ref_count2(__right_value420, ((struct sNode*)__right_value420)->finalize, ((struct sNode*)__right_value420)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result177__;
                }
                come_call_finalizer3(type_321,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_322 = come_decrement_ref_count2(name_322, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(!is_type_name_flag_274&&*info->p==61&&*(info->p+1)!=61&&!info->no_assign) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    right_value_330=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value421=expression_v13(info))));
                    parse_sharp_v5(info);
                    __dec_obj151=right_value_330;
                    right_value_330=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value422=post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_330),info))));
                    if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count2(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0, (void*)0); }
                    parse_sharp_v5(info);
                    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1102, "struct sNode");
                    _inf_obj_value5=come_increment_ref_count(((struct sStoreNode*)(__right_value425=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value423=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1102, "sStoreNode")))),(char*)come_increment_ref_count(((char*)(__right_value424=__builtin_string(buf)))),((void*)0),((void*)0),((void*)0),(_Bool)0,(struct sNode*)come_increment_ref_count(right_value_330),info))));
                    _inf_value5->_protocol_obj=_inf_obj_value5;
                    _inf_value5->finalize=(void*)sStoreNode_finalize;
                    _inf_value5->clone=(void*)sStoreNode_clone;
                    _inf_value5->compile=(void*)sStoreNode_compile;
                    _inf_value5->sline=(void*)sNodeBase_sline;
                    _inf_value5->sname=(void*)sNodeBase_sname;
                    _inf_value5->terminated=(void*)sNodeBase_terminated;
                    _inf_value5->kind=(void*)sStoreNode_kind;
                    __result180__ = __result_obj__ = ((struct sNode*)(__right_value433=_inf_value5));
                    if(right_value_330) { right_value_330 = come_decrement_ref_count2(right_value_330, ((struct sNode*)right_value_330)->finalize, ((struct sNode*)right_value_330)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(__right_value423,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                    __right_value424 = come_decrement_ref_count2(__right_value424, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(__right_value425,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(__right_value433) { __right_value433 = come_decrement_ref_count2(__right_value433, ((struct sNode*)__right_value433)->finalize, ((struct sNode*)__right_value433)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result180__;
                    if(right_value_330) { right_value_330 = come_decrement_ref_count2(right_value_330, ((struct sNode*)right_value_330)->finalize, ((struct sNode*)right_value_330)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(!is_type_name_flag_274||map$2charphsFunphp_operator_load_element(info->funcs,buf)) {
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1105, "struct sNode");
                        _inf_obj_value6=come_increment_ref_count(((struct sLoadNode*)(__right_value436=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value434=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1105, "sLoadNode")))),(char*)come_increment_ref_count(((char*)(__right_value435=__builtin_string(buf)))),info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sLoadNode_finalize;
                        _inf_value6->clone=(void*)sLoadNode_clone;
                        _inf_value6->compile=(void*)sLoadNode_compile;
                        _inf_value6->sline=(void*)sNodeBase_sline;
                        _inf_value6->sname=(void*)sNodeBase_sname;
                        _inf_value6->terminated=(void*)sNodeBase_terminated;
                        _inf_value6->kind=(void*)sLoadNode_kind;
                        node_332=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value440=_inf_value6)));
                        come_call_finalizer3(__right_value434,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                        __right_value435 = come_decrement_ref_count2(__right_value435, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(__right_value436,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                        __dec_obj160=node_332;
                        node_332=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value441=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_332),info))));
                        if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count2(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0, (void*)0); }
                        __result183__ = __result_obj__ = node_332;
                        if(node_332) { node_332 = come_decrement_ref_count2(node_332, ((struct sNode*)node_332)->finalize, ((struct sNode*)node_332)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result183__;
                        if(node_332) { node_332 = come_decrement_ref_count2(node_332, ((struct sNode*)node_332)->finalize, ((struct sNode*)node_332)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        info->p=head;
                        info->sline=head_sline;
                        if(xisalpha(*info->p)||*info->p==95) {
                            __dec_obj161=word_334;
                            word_334=(char*)come_increment_ref_count(((char*)(__right_value442=parse_word(info))));
                            __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            __dec_obj162=word_334;
                            word_334=(char*)come_increment_ref_count(((char*)(__right_value443=__builtin_string(""))));
                            __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        is_type_name_flag_335=is_type_name(word_334,info);
                        info->p=head;
                        info->sline=head_sline;
                        if(is_type_name_flag_335) {
                            parse_sharp_v5(info);
                            multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(__right_value444=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                            type_336=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
                            name_337=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                            err_338=multiple_assign_var10->v3;
                            come_call_finalizer3(__right_value444,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            if(!err_338) {
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
                                right_value_339=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value445=expression_v13(info))));
                                parse_sharp_v5(info);
                                info->array_initializer=(_Bool)0;
                                __dec_obj163=right_value_339;
                                right_value_339=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value446=post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_339),info))));
                                if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count2(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0,0, (void*)0); }
                                _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1153, "struct sNode");
                                _inf_obj_value7=come_increment_ref_count(((struct sStoreNode*)(__right_value448=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value447=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1153, "sStoreNode")))),(char*)come_increment_ref_count(name_337),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_336),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_339),info))));
                                _inf_value7->_protocol_obj=_inf_obj_value7;
                                _inf_value7->finalize=(void*)sStoreNode_finalize;
                                _inf_value7->clone=(void*)sStoreNode_clone;
                                _inf_value7->compile=(void*)sStoreNode_compile;
                                _inf_value7->sline=(void*)sNodeBase_sline;
                                _inf_value7->sname=(void*)sNodeBase_sname;
                                _inf_value7->terminated=(void*)sNodeBase_terminated;
                                _inf_value7->kind=(void*)sStoreNode_kind;
                                __result186__ = __result_obj__ = ((struct sNode*)(__right_value456=_inf_value7));
                                if(right_value_339) { right_value_339 = come_decrement_ref_count2(right_value_339, ((struct sNode*)right_value_339)->finalize, ((struct sNode*)right_value_339)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(type_336,sType_finalize, 0, 0, 0, 0, (void*)0);
                                name_337 = come_decrement_ref_count2(name_337, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                word_334 = come_decrement_ref_count2(word_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(__right_value447,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(__right_value448,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(__right_value456) { __right_value456 = come_decrement_ref_count2(__right_value456, ((struct sNode*)__right_value456)->finalize, ((struct sNode*)__right_value456)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result186__;
                                if(right_value_339) { right_value_339 = come_decrement_ref_count2(right_value_339, ((struct sNode*)right_value_339)->finalize, ((struct sNode*)right_value_339)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1156, "struct sNode");
                                _inf_obj_value8=come_increment_ref_count(((struct sStoreNode*)(__right_value458=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value457=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1156, "sStoreNode")))),(char*)come_increment_ref_count(name_337),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_336),(_Bool)1,((void*)0),info))));
                                _inf_value8->_protocol_obj=_inf_obj_value8;
                                _inf_value8->finalize=(void*)sStoreNode_finalize;
                                _inf_value8->clone=(void*)sStoreNode_clone;
                                _inf_value8->compile=(void*)sStoreNode_compile;
                                _inf_value8->sline=(void*)sNodeBase_sline;
                                _inf_value8->sname=(void*)sNodeBase_sname;
                                _inf_value8->terminated=(void*)sNodeBase_terminated;
                                _inf_value8->kind=(void*)sStoreNode_kind;
                                __result189__ = __result_obj__ = ((struct sNode*)(__right_value466=_inf_value8));
                                come_call_finalizer3(type_336,sType_finalize, 0, 0, 0, 0, (void*)0);
                                name_337 = come_decrement_ref_count2(name_337, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                word_334 = come_decrement_ref_count2(word_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(__right_value457,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(__right_value458,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(__right_value466) { __right_value466 = come_decrement_ref_count2(__right_value466, ((struct sNode*)__right_value466)->finalize, ((struct sNode*)__right_value466)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result189__;
                            }
                            come_call_finalizer3(type_336,sType_finalize, 0, 0, 0, 0, (void*)0);
                            name_337 = come_decrement_ref_count2(name_337, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        word_334 = come_decrement_ref_count2(word_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
void* __right_value355;
struct list_item$1charph* litem_296;
char* __dec_obj119;
void* __right_value356;
struct list_item$1charph* litem_297;
char* __dec_obj120;
void* __right_value357;
struct list_item$1charph* litem_298;
char* __dec_obj121;
struct list$1charph* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value355 = (void*)0;
memset(&litem_296, 0, sizeof(struct list_item$1charph*));
__right_value356 = (void*)0;
memset(&litem_297, 0, sizeof(struct list_item$1charph*));
__right_value357 = (void*)0;
memset(&litem_298, 0, sizeof(struct list_item$1charph*));
                if(self->len==0) {
                    litem_296=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value355=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 219, "list_item$1charph"))));
                    come_call_finalizer3(__right_value355,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_296->prev=((void*)0);
                    litem_296->next=((void*)0);
                    __dec_obj119=litem_296->item;
                    litem_296->item=(char*)come_increment_ref_count(item);
                    __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
                    self->tail=litem_296;
                    self->head=litem_296;
                }
                else {
                    if(self->len==1) {
                        litem_297=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value356=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 229, "list_item$1charph"))));
                        come_call_finalizer3(__right_value356,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_297->prev=self->head;
                        litem_297->next=((void*)0);
                        __dec_obj120=litem_297->item;
                        litem_297->item=(char*)come_increment_ref_count(item);
                        __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail=litem_297;
                        self->head->next=litem_297;
                    }
                    else {
                        litem_298=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value357=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 239, "list_item$1charph"))));
                        come_call_finalizer3(__right_value357,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_298->prev=self->tail;
                        litem_298->next=((void*)0);
                        __dec_obj121=litem_298->item;
                        litem_298->item=(char*)come_increment_ref_count(item);
                        __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail->next=litem_298;
                        self->tail=litem_298;
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
void* __right_value379;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_311;
struct tuple3$3sTypephcharphsNodeph* __dec_obj129;
void* __right_value380;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_312;
struct tuple3$3sTypephcharphsNodeph* __dec_obj130;
void* __right_value381;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_313;
struct tuple3$3sTypephcharphsNodeph* __dec_obj131;
struct list$1tuple3$3sTypephcharphsNodephph* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value379 = (void*)0;
memset(&litem_311, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
__right_value380 = (void*)0;
memset(&litem_312, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
__right_value381 = (void*)0;
memset(&litem_313, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                    if(self->len==0) {
                        litem_311=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value379=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 219, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                        come_call_finalizer3(__right_value379,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_311->prev=((void*)0);
                        litem_311->next=((void*)0);
                        __dec_obj129=litem_311->item;
                        litem_311->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj129,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_311;
                        self->head=litem_311;
                    }
                    else {
                        if(self->len==1) {
                            litem_312=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value380=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 229, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                            come_call_finalizer3(__right_value380,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_312->prev=self->head;
                            litem_312->next=((void*)0);
                            __dec_obj130=litem_312->item;
                            litem_312->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj130,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_312;
                            self->head->next=litem_312;
                        }
                        else {
                            litem_313=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value381=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 239, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                            come_call_finalizer3(__right_value381,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_313->prev=self->tail;
                            litem_313->next=((void*)0);
                            __dec_obj131=litem_313->item;
                            litem_313->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj131,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_313;
                            self->tail=litem_313;
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
struct sType* __dec_obj132;
char* __dec_obj133;
struct sNode* __dec_obj134;
struct tuple3$3sTypephcharphsNodeph* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
                    __dec_obj132=self->v1;
                    self->v1=(struct sType*)come_increment_ref_count(v1);
                    come_call_finalizer3(__dec_obj132,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __dec_obj133=self->v2;
                    self->v2=(char*)come_increment_ref_count(v2);
                    __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj134=self->v3;
                    self->v3=(struct sNode*)come_increment_ref_count(v3);
                    if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count2(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0, (void*)0); }
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
struct sType* __dec_obj135;
char* __dec_obj136;
struct tuple3$3sTypephcharphvoidp* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
                    __dec_obj135=self->v1;
                    self->v1=(struct sType*)come_increment_ref_count(v1);
                    come_call_finalizer3(__dec_obj135,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __dec_obj136=self->v2;
                    self->v2=(char*)come_increment_ref_count(v2);
                    __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
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
void* __right_value406;
struct list_item$1tuple2$2charphsTypephph* litem_324;
struct tuple2$2charphsTypeph* __dec_obj144;
void* __right_value407;
struct list_item$1tuple2$2charphsTypephph* litem_325;
struct tuple2$2charphsTypeph* __dec_obj145;
void* __right_value408;
struct list_item$1tuple2$2charphsTypephph* litem_326;
struct tuple2$2charphsTypeph* __dec_obj146;
struct list$1tuple2$2charphsTypephph* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value406 = (void*)0;
memset(&litem_324, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
__right_value407 = (void*)0;
memset(&litem_325, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
__right_value408 = (void*)0;
memset(&litem_326, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                    if(self->len==0) {
                        litem_324=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value406=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 149, "list_item$1tuple2$2charphsTypephph"))));
                        come_call_finalizer3(__right_value406,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_324->prev=((void*)0);
                        litem_324->next=((void*)0);
                        __dec_obj144=litem_324->item;
                        litem_324->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj144,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_324;
                        self->head=litem_324;
                    }
                    else {
                        if(self->len==1) {
                            litem_325=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value407=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 159, "list_item$1tuple2$2charphsTypephph"))));
                            come_call_finalizer3(__right_value407,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_325->prev=self->head;
                            litem_325->next=((void*)0);
                            __dec_obj145=litem_325->item;
                            litem_325->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj145,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_325;
                            self->head->next=litem_325;
                        }
                        else {
                            litem_326=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value408=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 169, "list_item$1tuple2$2charphsTypephph"))));
                            come_call_finalizer3(__right_value408,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_326->prev=self->tail;
                            litem_326->next=((void*)0);
                            __dec_obj146=litem_326->item;
                            litem_326->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj146,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_326;
                            self->tail=litem_326;
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
char* __dec_obj147;
struct sType* __dec_obj148;
struct tuple2$2charphsTypeph* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
                    __dec_obj147=self->v1;
                    self->v1=(char*)come_increment_ref_count(v1);
                    __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj148=self->v2;
                    self->v2=(struct sType*)come_increment_ref_count(v2);
                    come_call_finalizer3(__dec_obj148,sType_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value437;
struct sLoadNode* result_333;
void* __right_value438;
char* __dec_obj158;
void* __right_value439;
char* __dec_obj159;
struct sLoadNode* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value437 = (void*)0;
memset(&result_333, 0, sizeof(struct sLoadNode*));
__right_value438 = (void*)0;
__right_value439 = (void*)0;
                            if(self==(void*)0) {
                                __result181__ = __result_obj__ = (void*)0;
                                return __result181__;
                            }
                            result_333=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value437=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "sLoadNode_clone", 3, "sLoadNode"))));
                            if(self!=((void*)0)) {
                                result_333->sline=self->sline;
                            }
                            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                __dec_obj158=result_333->sname;
                                result_333->sname=(char*)come_increment_ref_count(((char*)(__right_value438=string_clone(self->sname))));
                                __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->name!=((void*)0)) {
                                __dec_obj159=result_333->name;
                                result_333->name=(char*)come_increment_ref_count(((char*)(__right_value439=string_clone(self->name))));
                                __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            __result182__ = __result_obj__ = result_333;
                            come_call_finalizer3(result_333,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
                            return __result182__;
                            come_call_finalizer3(result_333,sLoadNode_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value459;
struct sStoreNode* result_341;
void* __right_value460;
char* __dec_obj170;
void* __right_value461;
char* __dec_obj171;
void* __right_value462;
struct sType* __dec_obj172;
void* __right_value463;
struct sNode* __dec_obj173;
void* __right_value464;
struct list$1charph* __dec_obj174;
void* __right_value465;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj175;
struct sStoreNode* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value459 = (void*)0;
memset(&result_341, 0, sizeof(struct sStoreNode*));
__right_value460 = (void*)0;
__right_value461 = (void*)0;
__right_value462 = (void*)0;
__right_value463 = (void*)0;
__right_value464 = (void*)0;
__right_value465 = (void*)0;
                                    if(self==(void*)0) {
                                        __result187__ = __result_obj__ = (void*)0;
                                        return __result187__;
                                    }
                                    result_341=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value459=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "sStoreNode_clone", 3, "sStoreNode"))));
                                    if(self!=((void*)0)) {
                                        result_341->sline=self->sline;
                                    }
                                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                        __dec_obj170=result_341->sname;
                                        result_341->sname=(char*)come_increment_ref_count(((char*)(__right_value460=string_clone(self->sname))));
                                        __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    }
                                    if(self!=((void*)0)&&self->name!=((void*)0)) {
                                        __dec_obj171=result_341->name;
                                        result_341->name=(char*)come_increment_ref_count(((char*)(__right_value461=string_clone(self->name))));
                                        __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    }
                                    if(self!=((void*)0)) {
                                        result_341->alloc=self->alloc;
                                    }
                                    if(self!=((void*)0)&&self->type!=((void*)0)) {
                                        __dec_obj172=result_341->type;
                                        result_341->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value462=sType_clone(self->type))));
                                        come_call_finalizer3(__dec_obj172,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(self!=((void*)0)&&self->right_value!=((void*)0)) {
                                        __dec_obj173=result_341->right_value;
                                        result_341->right_value=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value463=sNode_clone(self->right_value))));
                                        if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count2(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0,0, (void*)0); }
                                    }
                                    if(self!=((void*)0)&&self->multiple_assign!=((void*)0)) {
                                        __dec_obj174=result_341->multiple_assign;
                                        result_341->multiple_assign=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value464=list$1charphp_clone(self->multiple_assign))));
                                        come_call_finalizer3(__dec_obj174,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
                                        __dec_obj175=result_341->multiple_declare;
                                        result_341->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(__right_value465=list$1tuple3$3sTypephcharphsNodephphp_clone(self->multiple_declare))));
                                        come_call_finalizer3(__dec_obj175,list$1tuple3$3sTypephcharphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    __result188__ = __result_obj__ = result_341;
                                    come_call_finalizer3(result_341,sStoreNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result188__;
                                    come_call_finalizer3(result_341,sStoreNode_finalize, 0, 0, 0, 0, (void*)0);
}

