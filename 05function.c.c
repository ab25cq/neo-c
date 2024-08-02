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
struct sSemicolonNode
{
    int sline;
    char* sname;
};
struct sLambdaNode
{
    int sline;
    char* sname;
    struct sFun* mFun;
};
struct sFunNode
{
    int sline;
    char* sname;
    struct sFun* mFun;
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

_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);

void caller_begin(struct sInfo* info);

void caller_end(struct sInfo* info);

struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);

struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);

void skip_pointer_attribute(struct sInfo* info);

struct sNode* parse_normal_block(struct sInfo* info);

_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, struct sInfo* info);

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);

struct sNode* get_number(_Bool minus, struct sInfo* info);

struct sNode* get_oct_number(struct sInfo* info);

struct sNode* get_hex_number(_Bool minus, struct sInfo* info);

struct sNode* create_int_node(int value, struct sInfo* info);

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);

_Bool parsecmp(char* str, struct sInfo* info);

char* parse_word(struct sInfo* info);

char* backtrace_parse_word(struct sInfo* info);

void skip_spaces_and_lf(struct sInfo* info);

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);

struct sNode* expression_v5(struct sInfo* info);

struct sNode* statment(struct sInfo* info);

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* expression_node_v1(struct sInfo* info);

struct sNode* expression_node_v99(struct sInfo* info);

struct sNode* expression_node_v98(struct sInfo* info);

struct sNode* expression_node_v97(struct sInfo* info);

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

struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info);

char* sSemicolonNode_kind(struct sSemicolonNode* self);

_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info);

static void sNodeBase_finalize(struct sNodeBase* self);
struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info);

char* sLambdaNode_kind(struct sLambdaNode* self);

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info);

static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void list$1sRightValueObjectpp_finalize(struct list$1sRightValueObjectp* self);
static void list_item$1sRightValueObjectpp_finalize(struct list_item$1sRightValueObjectp* self);
static struct sType* sType_clone(struct sType* self);
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
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info);

char* sFunNode_kind(struct sFunNode* self);

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info);

static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline);

static void sGenericsFun_finalize(struct sGenericsFun* self);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last);

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static void sSemicolonNode_finalize(struct sSemicolonNode* self);
static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self);
int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block);

static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self);
void arrange_stack(struct sInfo* info, int top);

int expected_next_character(char c, struct sInfo* info);

char* skip_block(struct sInfo* info);

_Bool strmemcmp(char* p, char* p2);

char* parse_attribute(struct sInfo* info);

void transpile_toplevel(_Bool block, struct sInfo* info);

int transpile_v5(struct sInfo* info);

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item);
static void map$2charphsFunph_rehash(struct map$2charphsFunph* self);
static char* map$2charphsFunph_begin(struct map$2charphsFunph* self);
static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self);
static char* map$2charphsFunph_next(struct map$2charphsFunph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1charph* list$1charph_reset(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct sFun* sFun_clone(struct sFun* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
_Bool is_type_name(char* buf, struct sInfo* info);

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
static _Bool list$1charph_contained(struct list$1charph* self, char* item);
_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);

struct sNode* parse_function(struct sInfo* info);

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
static void sLambdaNode_finalize(struct sLambdaNode* self);
static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self);
static int list$1charph_length(struct list$1charph* self);
static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item);
static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self);
static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self);
static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self);
static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);

static void sFunNode_finalize(struct sFunNode* self);
static struct sFunNode* sFunNode_clone(struct sFunNode* self);
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










struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value79;
struct sSemicolonNode* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
    ((struct sNodeBase*)(right_value79=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value79,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result45__ = __result_obj__ = self;
    come_call_finalizer3(self,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result45__;
    come_call_finalizer3(self,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sSemicolonNode_kind(struct sSemicolonNode* self){
void* __result_obj__;
void* right_value80;
char* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
    __result46__ = __result_obj__ = ((char*)(right_value80=__builtin_string("sSemicolonNode")));
    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result46__;
}

_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info){
    add_come_code(info,";\n");
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
        if(self!=((void*)0)&&self->sname!=((void*)0)) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__;
void* right_value81;
struct sLambdaNode* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
    ((struct sNodeBase*)(right_value81=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value81,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mFun=fun;
    __result47__ = __result_obj__ = self;
    come_call_finalizer3(self,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result47__;
    come_call_finalizer3(self,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sLambdaNode_kind(struct sLambdaNode* self){
void* __result_obj__;
void* right_value82;
char* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
    __result48__ = __result_obj__ = ((char*)(right_value82=__builtin_string("sLambdaNode")));
    right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result48__;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
struct sFun* come_fun_47;
void* right_value83;
void* right_value84;
struct sType* result_type_48;
void* right_value85;
void* right_value86;
void* right_value87;
void* right_value88;
struct CVALUE* come_value_55;
void* right_value89;
char* __dec_obj12;
void* right_value125;
struct sType* __dec_obj36;
_Bool __result68__;
memset(&come_fun_47, 0, sizeof(struct sFun*));
right_value83 = (void*)0;
right_value84 = (void*)0;
memset(&result_type_48, 0, sizeof(struct sType*));
right_value85 = (void*)0;
right_value86 = (void*)0;
right_value87 = (void*)0;
right_value88 = (void*)0;
memset(&come_value_55, 0, sizeof(struct CVALUE*));
right_value89 = (void*)0;
right_value125 = (void*)0;
    come_fun_47=info->come_fun;
    info->come_fun=self->mFun;
    result_type_48=(struct sType*)come_increment_ref_count(((struct sType*)(right_value84=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value83=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 42, "sType")))),"void*",(_Bool)0,info))));
    come_call_finalizer3(right_value83,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value84,sType_finalize, 0, 1, 0, 0, (void*)0);
    if(!gComeC&&!self->mFun->mNoResultType) {
        add_come_code_at_function_head(info,"%s;\n",((char*)(right_value85=make_define_var(result_type_48,"__result_obj__",(_Bool)0,info))));
        right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        add_come_code_at_function_head2(info,"memset(&__result_obj__, 0, sizeof(%s));\n",((char*)(right_value86=make_type_name_string(result_type_48,(_Bool)0,(_Bool)0,(_Bool)0,info))));
        right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    if(self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0);
    }
    come_value_55=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value88=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value87=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 53, "CVALUE"))))))));
    come_call_finalizer3(right_value87,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value88,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj12=come_value_55->c_value;
    come_value_55->c_value=(char*)come_increment_ref_count(((char*)(right_value89=xsprintf("%s",self->mFun->mName))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj36=come_value_55->type;
    come_value_55->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value125=sType_clone(self->mFun->mLambdaType))));
    come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value125,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_55->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_55->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_55));
    info->come_fun=come_fun_47;
    __result68__ = (_Bool)1;
    come_call_finalizer3(result_type_48,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_55,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result68__;
    come_call_finalizer3(result_type_48,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_55,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sTypeph* it_49;
struct list_item$1sTypeph* prev_it_50;
memset(&it_49, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_50, 0, sizeof(struct list_item$1sTypeph*));
                it_49=self->head;
                while(it_49!=((void*)0)) {
                    prev_it_50=it_49;
                    it_49=it_49->next;
                    come_call_finalizer3(prev_it_50,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_51;
struct list_item$1sNodeph* prev_it_52;
memset(&it_51, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_52, 0, sizeof(struct list_item$1sNodeph*));
                it_51=self->head;
                while(it_51!=((void*)0)) {
                    prev_it_52=it_51;
                    it_51=it_51->next;
                    come_call_finalizer3(prev_it_52,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
                        if(self!=((void*)0)&&self->item!=((void*)0)) {
                            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_53;
struct list_item$1charph* prev_it_54;
memset(&it_53, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_54, 0, sizeof(struct list_item$1charph*));
                it_53=self->head;
                while(it_53!=((void*)0)) {
                    prev_it_54=it_53;
                    it_53=it_53->next;
                    come_call_finalizer3(prev_it_54,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
                        if(self!=((void*)0)&&self->item!=((void*)0)) {
                            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
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
struct list_item$1sRightValueObjectp* it_56;
struct list_item$1sRightValueObjectp* prev_it_57;
memset(&it_56, 0, sizeof(struct list_item$1sRightValueObjectp*));
memset(&prev_it_57, 0, sizeof(struct list_item$1sRightValueObjectp*));
                it_56=self->head;
                while(it_56!=((void*)0)) {
                    prev_it_57=it_56;
                    it_56=it_56->next;
                    come_call_finalizer3(prev_it_57,list_item$1sRightValueObjectpp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sRightValueObjectpp_finalize(struct list_item$1sRightValueObjectp* self){
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
struct sType* __result49__;
void* right_value90;
struct sType* result_58;
void* right_value97;
struct list$1sTypeph* __dec_obj16;
void* right_value100;
struct tuple1$1sTypeph* __dec_obj18;
void* right_value101;
struct tuple1$1sTypeph* __dec_obj19;
void* right_value102;
char* __dec_obj20;
void* right_value103;
struct list$1sTypeph* __dec_obj21;
void* right_value111;
struct list$1sNodeph* __dec_obj25;
void* right_value112;
struct list$1sTypeph* __dec_obj26;
void* right_value119;
struct list$1charph* __dec_obj30;
void* right_value120;
struct tuple1$1sTypeph* __dec_obj31;
void* right_value121;
struct sNode* __dec_obj32;
void* right_value122;
struct sNode* __dec_obj33;
void* right_value123;
char* __dec_obj34;
void* right_value124;
char* __dec_obj35;
struct sType* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
memset(&result_58, 0, sizeof(struct sType*));
right_value97 = (void*)0;
right_value100 = (void*)0;
right_value101 = (void*)0;
right_value102 = (void*)0;
right_value103 = (void*)0;
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value119 = (void*)0;
right_value120 = (void*)0;
right_value121 = (void*)0;
right_value122 = (void*)0;
right_value123 = (void*)0;
right_value124 = (void*)0;
        if(self==(void*)0) {
            __result49__ = __result_obj__ = (void*)0;
            return __result49__;
        }
        result_58=(struct sType*)come_increment_ref_count(((struct sType*)(right_value90=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer3(right_value90,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(self!=((void*)0)) {
            result_58->mClass=self->mClass;
        }
        if(self!=((void*)0)&&self->mMultipleTypes!=((void*)0)) {
            __dec_obj16=result_58->mMultipleTypes;
            result_58->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value97=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer3(__dec_obj16,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value97,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
            __dec_obj18=result_58->mNoSolvedGenericsType;
            result_58->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value100=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer3(__dec_obj18,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value100,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
            __dec_obj19=result_58->mOriginalLoadVarType;
            result_58->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value101=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer3(__dec_obj19,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value101,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
            __dec_obj20=result_58->mGenericsName;
            result_58->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value102=string_clone(self->mGenericsName))));
            __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
            __dec_obj21=result_58->mGenericsTypes;
            result_58->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value103=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer3(__dec_obj21,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value103,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
            __dec_obj25=result_58->mArrayNum;
            result_58->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value111=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer3(__dec_obj25,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value111,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)) {
            result_58->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
            __dec_obj26=result_58->mParamTypes;
            result_58->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value112=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer3(__dec_obj26,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value112,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
            __dec_obj30=result_58->mParamNames;
            result_58->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value119=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer3(__dec_obj30,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value119,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
            __dec_obj31=result_58->mResultType;
            result_58->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value120=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer3(__dec_obj31,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value120,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)) {
            result_58->mVarArgs=self->mVarArgs;
        }
        if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
            __dec_obj32=result_58->mAlignas;
            result_58->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value121=sNode_clone(self->mAlignas))));
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value121) { right_value121 = come_decrement_ref_count2(right_value121, ((struct sNode*)right_value121)->finalize, ((struct sNode*)right_value121)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(self!=((void*)0)) {
            result_58->mUnsigned=self->mUnsigned;
        }
        if(self!=((void*)0)) {
            result_58->mShort=self->mShort;
        }
        if(self!=((void*)0)) {
            result_58->mLong=self->mLong;
        }
        if(self!=((void*)0)) {
            result_58->mLongLong=self->mLongLong;
        }
        if(self!=((void*)0)) {
            result_58->mConstant=self->mConstant;
        }
        if(self!=((void*)0)) {
            result_58->mRegister=self->mRegister;
        }
        if(self!=((void*)0)) {
            result_58->mVolatile=self->mVolatile;
        }
        if(self!=((void*)0)) {
            result_58->mStatic=self->mStatic;
        }
        if(self!=((void*)0)) {
            result_58->mUniq=self->mUniq;
        }
        if(self!=((void*)0)) {
            result_58->mRecord=self->mRecord;
        }
        if(self!=((void*)0)) {
            result_58->mExtern=self->mExtern;
        }
        if(self!=((void*)0)) {
            result_58->mRestrict=self->mRestrict;
        }
        if(self!=((void*)0)) {
            result_58->mImmutable=self->mImmutable;
        }
        if(self!=((void*)0)) {
            result_58->mHeap=self->mHeap;
        }
        if(self!=((void*)0)) {
            result_58->mDummyHeap=self->mDummyHeap;
        }
        if(self!=((void*)0)) {
            result_58->mDelegate=self->mDelegate;
        }
        if(self!=((void*)0)) {
            result_58->mShare=self->mShare;
        }
        if(self!=((void*)0)) {
            result_58->mClone=self->mClone;
        }
        if(self!=((void*)0)) {
            result_58->mNoHeap=self->mNoHeap;
        }
        if(self!=((void*)0)) {
            result_58->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(self!=((void*)0)) {
            result_58->mRefference=self->mRefference;
        }
        if(self!=((void*)0)) {
            result_58->mException=self->mException;
        }
        if(self!=((void*)0)) {
            result_58->mPointerNum=self->mPointerNum;
        }
        if(self!=((void*)0)) {
            result_58->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(self!=((void*)0)) {
            result_58->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(self!=((void*)0)) {
            result_58->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
        }
        if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
            __dec_obj33=result_58->mSizeNum;
            result_58->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value122=sNode_clone(self->mSizeNum))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value122) { right_value122 = come_decrement_ref_count2(right_value122, ((struct sNode*)right_value122)->finalize, ((struct sNode*)right_value122)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(self!=((void*)0)) {
            result_58->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(self!=((void*)0)) {
            result_58->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
            __dec_obj34=result_58->mOriginalTypeName;
            result_58->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value123=string_clone(self->mOriginalTypeName))));
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)) {
            result_58->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(self!=((void*)0)) {
            result_58->mFunctionParam=self->mFunctionParam;
        }
        if(self!=((void*)0)) {
            result_58->mAllocaValue=self->mAllocaValue;
        }
        if(self!=((void*)0)) {
            result_58->mGenericsStruct=self->mGenericsStruct;
        }
        if(self!=((void*)0)) {
            result_58->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(self!=((void*)0)) {
            result_58->mComeMemCore=self->mComeMemCore;
        }
        if(self!=((void*)0)) {
            result_58->mInline=self->mInline;
        }
        if(self!=((void*)0)) {
            result_58->mNullValue=self->mNullValue;
        }
        if(self!=((void*)0)) {
            result_58->mGuardValue=self->mGuardValue;
        }
        if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
            __dec_obj35=result_58->mAsmName;
            result_58->mAsmName=(char*)come_increment_ref_count(((char*)(right_value124=string_clone(self->mAsmName))));
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)) {
            result_58->mArrayPointerType=self->mArrayPointerType;
        }
        if(self!=((void*)0)) {
            result_58->mLambdaArray=self->mLambdaArray;
        }
        if(self!=((void*)0)) {
            result_58->mNoNumberArray=self->mNoNumberArray;
        }
        __result66__ = __result_obj__ = result_58;
        come_call_finalizer3(result_58,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result66__;
        come_call_finalizer3(result_58,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result50__;
void* right_value91;
void* right_value92;
struct list$1sTypeph* result_59;
struct list_item$1sTypeph* it_60;
void* right_value96;
struct list$1sTypeph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
right_value91 = (void*)0;
right_value92 = (void*)0;
memset(&result_59, 0, sizeof(struct list$1sTypeph*));
memset(&it_60, 0, sizeof(struct list_item$1sTypeph*));
right_value96 = (void*)0;
                if(self==((void*)0)) {
                    __result50__ = __result_obj__ = ((void*)0);
                    return __result50__;
                }
                result_59=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value92=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value91=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 135, "list$1sTypeph"))))))));
                come_call_finalizer3(right_value91,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value92,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_60=self->head;
                while(it_60!=((void*)0)) {
                    list$1sTypeph_add(result_59,(struct sType*)come_increment_ref_count(((struct sType*)(right_value96=sType_clone(it_60->item)))));
                    come_call_finalizer3(right_value96,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    it_60=it_60->next;
                }
                __result53__ = __result_obj__ = result_59;
                come_call_finalizer3(result_59,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result53__;
                come_call_finalizer3(result_59,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result51__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result51__;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
void* right_value93;
struct list_item$1sTypeph* litem_61;
struct sType* __dec_obj13;
void* right_value94;
struct list_item$1sTypeph* litem_62;
struct sType* __dec_obj14;
void* right_value95;
struct list_item$1sTypeph* litem_63;
struct sType* __dec_obj15;
struct list$1sTypeph* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
memset(&litem_61, 0, sizeof(struct list_item$1sTypeph*));
right_value94 = (void*)0;
memset(&litem_62, 0, sizeof(struct list_item$1sTypeph*));
right_value95 = (void*)0;
memset(&litem_63, 0, sizeof(struct list_item$1sTypeph*));
                        if(self->len==0) {
                            litem_61=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value93=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 149, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value93,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_61->prev=((void*)0);
                            litem_61->next=((void*)0);
                            __dec_obj13=litem_61->item;
                            litem_61->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj13,sType_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_61;
                            self->head=litem_61;
                        }
                        else {
                            if(self->len==1) {
                                litem_62=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value94=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 159, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value94,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_62->prev=self->head;
                                litem_62->next=((void*)0);
                                __dec_obj14=litem_62->item;
                                litem_62->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_62;
                                self->head->next=litem_62;
                            }
                            else {
                                litem_63=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value95=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 169, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value95,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_63->prev=self->tail;
                                litem_63->next=((void*)0);
                                __dec_obj15=litem_63->item;
                                litem_63->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj15,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail->next=litem_63;
                                self->tail=litem_63;
                            }
                        }
                        self->len++;
                        __result52__ = __result_obj__ = self;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result52__;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_64;
struct list_item$1sTypeph* prev_it_65;
memset(&it_64, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_65, 0, sizeof(struct list_item$1sTypeph*));
                it_64=self->head;
                while(it_64!=((void*)0)) {
                    prev_it_65=it_64;
                    it_64=it_64->next;
                    come_call_finalizer3(prev_it_65,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
struct tuple1$1sTypeph* __result54__;
void* right_value98;
struct tuple1$1sTypeph* result_66;
void* right_value99;
struct sType* __dec_obj17;
struct tuple1$1sTypeph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value98 = (void*)0;
memset(&result_66, 0, sizeof(struct tuple1$1sTypeph*));
right_value99 = (void*)0;
                if(self==(void*)0) {
                    __result54__ = __result_obj__ = (void*)0;
                    return __result54__;
                }
                result_66=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value98=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer3(right_value98,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                    __dec_obj17=result_66->v1;
                    result_66->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value99=sType_clone(self->v1))));
                    come_call_finalizer3(__dec_obj17,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value99,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                __result55__ = __result_obj__ = result_66;
                come_call_finalizer3(result_66,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result55__;
                come_call_finalizer3(result_66,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
                    if(self!=((void*)0)&&self->v1!=((void*)0)) {
                        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result56__;
void* right_value104;
void* right_value105;
struct list$1sNodeph* result_67;
struct list_item$1sNodeph* it_68;
void* right_value110;
struct list$1sNodeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
right_value105 = (void*)0;
memset(&result_67, 0, sizeof(struct list$1sNodeph*));
memset(&it_68, 0, sizeof(struct list_item$1sNodeph*));
right_value110 = (void*)0;
                if(self==((void*)0)) {
                    __result56__ = __result_obj__ = ((void*)0);
                    return __result56__;
                }
                result_67=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value105=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value104=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 135, "list$1sNodeph"))))))));
                come_call_finalizer3(right_value104,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value105,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_68=self->head;
                while(it_68!=((void*)0)) {
                    list$1sNodeph_add(result_67,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value110=sNode_clone(it_68->item)))));
                    if(right_value110) { right_value110 = come_decrement_ref_count2(right_value110, ((struct sNode*)right_value110)->finalize, ((struct sNode*)right_value110)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    it_68=it_68->next;
                }
                __result61__ = __result_obj__ = result_67;
                come_call_finalizer3(result_67,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result61__;
                come_call_finalizer3(result_67,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result57__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result57__;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
void* right_value106;
struct list_item$1sNodeph* litem_69;
struct sNode* __dec_obj22;
void* right_value107;
struct list_item$1sNodeph* litem_70;
struct sNode* __dec_obj23;
void* right_value108;
struct list_item$1sNodeph* litem_71;
struct sNode* __dec_obj24;
struct list$1sNodeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
memset(&litem_69, 0, sizeof(struct list_item$1sNodeph*));
right_value107 = (void*)0;
memset(&litem_70, 0, sizeof(struct list_item$1sNodeph*));
right_value108 = (void*)0;
memset(&litem_71, 0, sizeof(struct list_item$1sNodeph*));
                        if(self->len==0) {
                            litem_69=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value106=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 149, "list_item$1sNodeph"))));
                            come_call_finalizer3(right_value106,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_69->prev=((void*)0);
                            litem_69->next=((void*)0);
                            __dec_obj22=litem_69->item;
                            litem_69->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail=litem_69;
                            self->head=litem_69;
                        }
                        else {
                            if(self->len==1) {
                                litem_70=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value107=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 159, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value107,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_70->prev=self->head;
                                litem_70->next=((void*)0);
                                __dec_obj23=litem_70->item;
                                litem_70->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_70;
                                self->head->next=litem_70;
                            }
                            else {
                                litem_71=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value108=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 169, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value108,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_71->prev=self->tail;
                                litem_71->next=((void*)0);
                                __dec_obj24=litem_71->item;
                                litem_71->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail->next=litem_71;
                                self->tail=litem_71;
                            }
                        }
                        self->len++;
                        __result58__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result58__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
struct sNode* __result59__;
void* right_value109;
struct sNode* result_72;
struct sNode* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value109 = (void*)0;
memset(&result_72, 0, sizeof(struct sNode*));
                        if(self==(void*)0) {
                            __result59__ = __result_obj__ = (void*)0;
                            return __result59__;
                        }
                        result_72=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value109=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value109) { right_value109 = come_decrement_ref_count2(right_value109, ((struct sNode*)right_value109)->finalize, ((struct sNode*)right_value109)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        if(self!=((void*)0)&&self->clone!=((void*)0)) {
                            result_72->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(self!=((void*)0)) {
                            result_72->finalize=self->finalize;
                        }
                        if(self!=((void*)0)) {
                            result_72->clone=self->clone;
                        }
                        if(self!=((void*)0)) {
                            result_72->compile=self->compile;
                        }
                        if(self!=((void*)0)) {
                            result_72->sline=self->sline;
                        }
                        if(self!=((void*)0)) {
                            result_72->sname=self->sname;
                        }
                        if(self!=((void*)0)) {
                            result_72->terminated=self->terminated;
                        }
                        if(self!=((void*)0)) {
                            result_72->kind=self->kind;
                        }
                        __result60__ = __result_obj__ = result_72;
                        if(result_72) { result_72 = come_decrement_ref_count2(result_72, ((struct sNode*)result_72)->finalize, ((struct sNode*)result_72)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result60__;
                        if(result_72) { result_72 = come_decrement_ref_count2(result_72, ((struct sNode*)result_72)->finalize, ((struct sNode*)result_72)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_73;
struct list_item$1sNodeph* prev_it_74;
memset(&it_73, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_74, 0, sizeof(struct list_item$1sNodeph*));
                it_73=self->head;
                while(it_73!=((void*)0)) {
                    prev_it_74=it_73;
                    it_73=it_73->next;
                    come_call_finalizer3(prev_it_74,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result62__;
void* right_value113;
void* right_value114;
struct list$1charph* result_75;
struct list_item$1charph* it_76;
void* right_value118;
struct list$1charph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
right_value113 = (void*)0;
right_value114 = (void*)0;
memset(&result_75, 0, sizeof(struct list$1charph*));
memset(&it_76, 0, sizeof(struct list_item$1charph*));
right_value118 = (void*)0;
                if(self==((void*)0)) {
                    __result62__ = __result_obj__ = ((void*)0);
                    return __result62__;
                }
                result_75=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value114=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value113=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 135, "list$1charph"))))))));
                come_call_finalizer3(right_value113,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value114,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                it_76=self->head;
                while(it_76!=((void*)0)) {
                    list$1charph_add(result_75,(char*)come_increment_ref_count(((char*)(right_value118=string_clone(it_76->item)))));
                    right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    it_76=it_76->next;
                }
                __result65__ = __result_obj__ = result_75;
                come_call_finalizer3(result_75,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result65__;
                come_call_finalizer3(result_75,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result63__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result63__;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
void* right_value115;
struct list_item$1charph* litem_77;
char* __dec_obj27;
void* right_value116;
struct list_item$1charph* litem_78;
char* __dec_obj28;
void* right_value117;
struct list_item$1charph* litem_79;
char* __dec_obj29;
struct list$1charph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value115 = (void*)0;
memset(&litem_77, 0, sizeof(struct list_item$1charph*));
right_value116 = (void*)0;
memset(&litem_78, 0, sizeof(struct list_item$1charph*));
right_value117 = (void*)0;
memset(&litem_79, 0, sizeof(struct list_item$1charph*));
                        if(self->len==0) {
                            litem_77=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value115=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 149, "list_item$1charph"))));
                            come_call_finalizer3(right_value115,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_77->prev=((void*)0);
                            litem_77->next=((void*)0);
                            __dec_obj27=litem_77->item;
                            litem_77->item=(char*)come_increment_ref_count(item);
                            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_77;
                            self->head=litem_77;
                        }
                        else {
                            if(self->len==1) {
                                litem_78=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value116=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 159, "list_item$1charph"))));
                                come_call_finalizer3(right_value116,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_78->prev=self->head;
                                litem_78->next=((void*)0);
                                __dec_obj28=litem_78->item;
                                litem_78->item=(char*)come_increment_ref_count(item);
                                __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_78;
                                self->head->next=litem_78;
                            }
                            else {
                                litem_79=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value117=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 169, "list_item$1charph"))));
                                come_call_finalizer3(right_value117,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_79->prev=self->tail;
                                litem_79->next=((void*)0);
                                __dec_obj29=litem_79->item;
                                litem_79->item=(char*)come_increment_ref_count(item);
                                __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail->next=litem_79;
                                self->tail=litem_79;
                            }
                        }
                        self->len++;
                        __result64__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result64__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_80;
struct list_item$1charph* prev_it_81;
memset(&it_80, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_81, 0, sizeof(struct list_item$1charph*));
                it_80=self->head;
                while(it_80!=((void*)0)) {
                    prev_it_81=it_80;
                    it_80=it_80->next;
                    come_call_finalizer3(prev_it_81,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
void* right_value126;
struct list_item$1CVALUEph* litem_82;
struct CVALUE* __dec_obj37;
void* right_value127;
struct list_item$1CVALUEph* litem_83;
struct CVALUE* __dec_obj38;
void* right_value128;
struct list_item$1CVALUEph* litem_84;
struct CVALUE* __dec_obj39;
struct list$1CVALUEph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value126 = (void*)0;
memset(&litem_82, 0, sizeof(struct list_item$1CVALUEph*));
right_value127 = (void*)0;
memset(&litem_83, 0, sizeof(struct list_item$1CVALUEph*));
right_value128 = (void*)0;
memset(&litem_84, 0, sizeof(struct list_item$1CVALUEph*));
        if(self->len==0) {
            litem_82=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value126=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 219, "list_item$1CVALUEph"))));
            come_call_finalizer3(right_value126,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_82->prev=((void*)0);
            litem_82->next=((void*)0);
            __dec_obj37=litem_82->item;
            litem_82->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj37,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_82;
            self->head=litem_82;
        }
        else {
            if(self->len==1) {
                litem_83=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value127=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 229, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value127,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_83->prev=self->head;
                litem_83->next=((void*)0);
                __dec_obj38=litem_83->item;
                litem_83->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj38,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                self->tail=litem_83;
                self->head->next=litem_83;
            }
            else {
                litem_84=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value128=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 239, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value128,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_84->prev=self->tail;
                litem_84->next=((void*)0);
                __dec_obj39=litem_84->item;
                litem_84->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj39,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                self->tail->next=litem_84;
                self->tail=litem_84;
            }
        }
        self->len++;
        __result67__ = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        return __result67__;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
                if(self!=((void*)0)&&self->item!=((void*)0)) {
                    come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__;
void* right_value129;
struct sFun* __dec_obj40;
struct sFunNode* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value129 = (void*)0;
    ((struct sNodeBase*)(right_value129=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value129,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj40=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer3(__dec_obj40,sFun_finalize, 0, 0, 0, 0, (void*)0);
    __result69__ = __result_obj__ = self;
    come_call_finalizer3(self,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(fun,sFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result69__;
    come_call_finalizer3(self,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(fun,sFun_finalize, 0, 0, 1, 0, (void*)0);
}

char* sFunNode_kind(struct sFunNode* self){
void* __result_obj__;
void* right_value130;
char* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value130 = (void*)0;
    __result70__ = __result_obj__ = ((char*)(right_value130=__builtin_string("sFunNode")));
    right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result70__;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_85;
char* come_fun_name_86;
void* right_value131;
char* __dec_obj41;
void* right_value132;
void* right_value133;
struct sType* result_type_87;
void* right_value134;
void* right_value135;
void* right_value136;
char* __dec_obj42;
_Bool __result71__;
memset(&come_fun_85, 0, sizeof(struct sFun*));
memset(&come_fun_name_86, 0, sizeof(char*));
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
memset(&result_type_87, 0, sizeof(struct sType*));
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value136 = (void*)0;
    come_fun_85=info->come_fun;
    info->come_fun=self->mFun;
    come_fun_name_86=(char*)come_increment_ref_count(info->come_fun_name);
    __dec_obj41=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(((char*)(right_value131=__builtin_string(info->come_fun->mName))));
    __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(self->mFun->mBlock) {
        if(!gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        result_type_87=(struct sType*)come_increment_ref_count(((struct sType*)(right_value133=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value132=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 96, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer3(right_value132,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value133,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(!gComeC&&!self->mFun->mNoResultType) {
            add_come_code_at_function_head(info,"%s;\n",((char*)(right_value134=make_define_var(result_type_87,"__result_obj__",(_Bool)0,info))));
            right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            add_come_code_at_function_head2(info,"memset(&__result_obj__, 0, sizeof(%s));\n",((char*)(right_value135=make_type_name_string(result_type_87,(_Bool)0,(_Bool)0,(_Bool)0,info))));
            right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0);
        if(!gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(right_value136=xsprintf("come_heap_final();\n"))));
            right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_87,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->come_fun=come_fun_85;
    __dec_obj42=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(come_fun_name_86);
    __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result71__ = (_Bool)1;
    come_fun_name_86 = come_decrement_ref_count2(come_fun_name_86, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result71__;
    come_fun_name_86 = come_decrement_ref_count2(come_fun_name_86, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info){
void* __result_obj__;
void* right_value137;
void* right_value138;
struct list$1sNodeph* __dec_obj43;
struct sBlock* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value137 = (void*)0;
right_value138 = (void*)0;
    __dec_obj43=self->mNodes;
    self->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value138=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value137=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05function.c", 119, "list$1sNodeph"))))))));
    come_call_finalizer3(__dec_obj43,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value137,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value138,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    __result72__ = __result_obj__ = self;
    come_call_finalizer3(self,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result72__;
    come_call_finalizer3(self,sBlock_finalize, 0, 0, 1, 0, (void*)0);
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline){
void* __result_obj__;
void* right_value139;
struct sType* __dec_obj44;
void* right_value140;
struct list$1charph* __dec_obj45;
void* right_value141;
struct list$1charph* __dec_obj46;
char* __dec_obj47;
struct sType* __dec_obj48;
struct list$1sTypeph* __dec_obj49;
struct list$1charph* __dec_obj50;
struct list$1charph* __dec_obj51;
char* __dec_obj52;
void* right_value142;
char* __dec_obj53;
struct sGenericsFun* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value139 = (void*)0;
right_value140 = (void*)0;
right_value141 = (void*)0;
right_value142 = (void*)0;
    __dec_obj44=self->mImplType;
    self->mImplType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value139=sType_clone(impl_type))));
    come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value139,sType_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj45=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value140=list$1charphp_clone(generics_type_names))));
    come_call_finalizer3(__dec_obj45,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value140,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj46=self->mMethodGenericsTypeNames;
    self->mMethodGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value141=list$1charphp_clone(method_generics_type_names))));
    come_call_finalizer3(__dec_obj46,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value141,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj47=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj48=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer3(__dec_obj48,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj49=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    come_call_finalizer3(__dec_obj49,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj50=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    come_call_finalizer3(__dec_obj50,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj51=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer3(__dec_obj51,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    self->mVarArgs=var_args;
    __dec_obj52=self->mBlock;
    self->mBlock=(char*)come_increment_ref_count(block);
    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mSLine=info->sline;
    __dec_obj53=self->mGenericsSName;
    self->mGenericsSName=(char*)come_increment_ref_count(((char*)(right_value142=__builtin_string(generics_sname))));
    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mGenericsSLine=generics_sline;
    __result73__ = __result_obj__ = self;
    come_call_finalizer3(self,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(impl_type,sType_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(result_type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_types,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_names,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_default_parametors,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    block = come_decrement_ref_count2(block, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    generics_sname = come_decrement_ref_count2(generics_sname, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result73__;
    come_call_finalizer3(self,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(impl_type,sType_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(result_type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_types,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_names,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_default_parametors,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    block = come_decrement_ref_count2(block, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    generics_sname = come_decrement_ref_count2(generics_sname, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
        if(self!=((void*)0)&&self->mImplType!=((void*)0)) {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
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
        if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last){
void* __result_obj__;
void* right_value143;
void* right_value144;
struct sBlock* result_88;
int block_level_89;
int sline_90;
char* sname_91;
void* right_value145;
struct sNode* node_92;
void* right_value146;
char* __dec_obj54;
struct sNode* node_96;
void* right_value150;
void* right_value151;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* right_value154;
struct sNode* __dec_obj59;
void* right_value155;
struct sNode* __dec_obj60;
char* p_98;
char* head_99;
void* right_value156;
char* source_100;
void* right_value157;
struct sNode* node_101;
struct sBlock* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value143 = (void*)0;
right_value144 = (void*)0;
memset(&result_88, 0, sizeof(struct sBlock*));
memset(&block_level_89, 0, sizeof(int));
memset(&sline_90, 0, sizeof(int));
memset(&sname_91, 0, sizeof(char*));
right_value145 = (void*)0;
memset(&node_92, 0, sizeof(struct sNode*));
right_value146 = (void*)0;
memset(&node_96, 0, sizeof(struct sNode*));
right_value150 = (void*)0;
right_value151 = (void*)0;
right_value154 = (void*)0;
right_value155 = (void*)0;
memset(&p_98, 0, sizeof(char*));
memset(&head_99, 0, sizeof(char*));
right_value156 = (void*)0;
memset(&source_100, 0, sizeof(char*));
right_value157 = (void*)0;
memset(&node_101, 0, sizeof(struct sNode*));
    result_88=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value144=sBlock_initialize((struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value143=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function.c", 149, "sBlock")))),info))));
    come_call_finalizer3(right_value143,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value144,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
    block_level_89=info->block_level;
    if(!no_block_level) {
        info->block_level++;
    }
    if(*info->p==123) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            parse_sharp_v5(info);
            if(*info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            sline_90=info->sline;
            sname_91=info->sname;
            node_92=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value145=statment(info))));
            if(right_value145) { right_value145 = come_decrement_ref_count2(right_value145, ((struct sNode*)right_value145)->finalize, ((struct sNode*)right_value145)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            __dec_obj54=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value146=node_92->sname(node_92->_protocol_obj))));
            __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->sline=node_92->sline(node_92->_protocol_obj);
            if(node_92==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            list$1sNodeph_push_back(result_88->mNodes,(struct sNode*)come_increment_ref_count(node_92));
            parse_sharp_v5(info);
            if(node_92->terminated(node_92->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            if(*info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                if(node_92) { node_92 = come_decrement_ref_count2(node_92, ((struct sNode*)node_92)->finalize, ((struct sNode*)node_92)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            if(node_92) { node_92 = come_decrement_ref_count2(node_92, ((struct sNode*)node_92)->finalize, ((struct sNode*)node_92)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else {
        parse_sharp_v5(info);
        if(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 217, "struct sNode");
            _inf_obj_value1=come_increment_ref_count(((struct sSemicolonNode*)(right_value151=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(right_value150=(struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 217, "sSemicolonNode")))),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            __dec_obj59=node_96;
            node_96=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value154=_inf_value1)));
            if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); }
            come_call_finalizer3(right_value150,sSemicolonNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value151,sSemicolonNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value154) { right_value154 = come_decrement_ref_count2(right_value154, ((struct sNode*)right_value154)->finalize, ((struct sNode*)right_value154)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        else {
            __dec_obj60=node_96;
            node_96=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value155=expression_v13(info))));
            if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value155) { right_value155 = come_decrement_ref_count2(right_value155, ((struct sNode*)right_value155)->finalize, ((struct sNode*)right_value155)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            parse_sharp_v5(info);
            if(node_96==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            if(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
            }
        }
        list$1sNodeph_push_back(result_88->mNodes,(struct sNode*)come_increment_ref_count(node_96));
        if(node_96) { node_96 = come_decrement_ref_count2(node_96, ((struct sNode*)node_96)->finalize, ((struct sNode*)node_96)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    if(return_self_at_last) {
        p_98=info->p;
        head_99=info->head;
        source_100=(char*)come_increment_ref_count(((char*)(right_value156=__builtin_string("return self;"))));
        right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->p=source_100;
        info->head=source_100;
        node_101=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value157=expression_v13(info))));
        if(right_value157) { right_value157 = come_decrement_ref_count2(right_value157, ((struct sNode*)right_value157)->finalize, ((struct sNode*)right_value157)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(node_101==((void*)0)) {
            err_msg(info,"Invalid expression");
            exit(1);
        }
        list$1sNodeph_push_back(result_88->mNodes,(struct sNode*)come_increment_ref_count(node_101));
        info->p=p_98;
        info->head=head_99;
        source_100 = come_decrement_ref_count2(source_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_101) { node_101 = come_decrement_ref_count2(node_101, ((struct sNode*)node_101)->finalize, ((struct sNode*)node_101)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->block_level=block_level_89;
    __result77__ = __result_obj__ = result_88;
    come_call_finalizer3(result_88,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result77__;
    come_call_finalizer3(result_88,sBlock_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
void* right_value147;
struct list_item$1sNodeph* litem_93;
struct sNode* __dec_obj55;
void* right_value148;
struct list_item$1sNodeph* litem_94;
struct sNode* __dec_obj56;
void* right_value149;
struct list_item$1sNodeph* litem_95;
struct sNode* __dec_obj57;
struct list$1sNodeph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value147 = (void*)0;
memset(&litem_93, 0, sizeof(struct list_item$1sNodeph*));
right_value148 = (void*)0;
memset(&litem_94, 0, sizeof(struct list_item$1sNodeph*));
right_value149 = (void*)0;
memset(&litem_95, 0, sizeof(struct list_item$1sNodeph*));
                if(self->len==0) {
                    litem_93=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value147=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 219, "list_item$1sNodeph"))));
                    come_call_finalizer3(right_value147,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_93->prev=((void*)0);
                    litem_93->next=((void*)0);
                    __dec_obj55=litem_93->item;
                    litem_93->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count2(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0, (void*)0); }
                    self->tail=litem_93;
                    self->head=litem_93;
                }
                else {
                    if(self->len==1) {
                        litem_94=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value148=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 229, "list_item$1sNodeph"))));
                        come_call_finalizer3(right_value148,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_94->prev=self->head;
                        litem_94->next=((void*)0);
                        __dec_obj56=litem_94->item;
                        litem_94->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count2(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail=litem_94;
                        self->head->next=litem_94;
                    }
                    else {
                        litem_95=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value149=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 239, "list_item$1sNodeph"))));
                        come_call_finalizer3(right_value149,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_95->prev=self->tail;
                        litem_95->next=((void*)0);
                        __dec_obj57=litem_95->item;
                        litem_95->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count2(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail->next=litem_95;
                        self->tail=litem_95;
                    }
                }
                self->len++;
                __result74__ = __result_obj__ = self;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result74__;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sSemicolonNode_finalize(struct sSemicolonNode* self){
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
void* __result_obj__;
struct sSemicolonNode* __result75__;
void* right_value152;
struct sSemicolonNode* result_97;
void* right_value153;
char* __dec_obj58;
struct sSemicolonNode* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value152 = (void*)0;
memset(&result_97, 0, sizeof(struct sSemicolonNode*));
right_value153 = (void*)0;
                if(self==(void*)0) {
                    __result75__ = __result_obj__ = (void*)0;
                    return __result75__;
                }
                result_97=(struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(right_value152=(struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "sSemicolonNode"))));
                come_call_finalizer3(right_value152,sSemicolonNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(self!=((void*)0)) {
                    result_97->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj58=result_97->sname;
                    result_97->sname=(char*)come_increment_ref_count(((char*)(right_value153=string_clone(self->sname))));
                    __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result76__ = __result_obj__ = result_97;
                come_call_finalizer3(result_97,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result76__;
                come_call_finalizer3(result_97,sSemicolonNode_finalize, 0, 0, 0, 0, (void*)0);
}

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block){
struct sVarTable* old_table_102;
void* right_value158;
void* right_value159;
struct sVarTable* __dec_obj61;
struct sVarTable* current_loop_vtable_103;
struct list$1sTypeph* param_types__104;
struct list$1charph* param_names__105;
int i_106;
struct list$1charph* o2_saved_107;
char* name_110;
void* right_value160;
struct sType* type_113;
void* right_value161;
int block_level_117;
int i_118;
struct list$1sNodeph* o2_saved_119;
struct sNode* node_122;
struct list$1sRightValueObjectph* right_value_objects_125;
void* right_value162;
void* right_value163;
struct list$1sRightValueObjectph* __dec_obj62;
char* __dec_obj63;
char* __dec_obj64;
char* __dec_obj65;
int stack_num_before_130;
int sline_131;
void* right_value164;
char* sname_132;
void* right_value165;
char* __dec_obj66;
void* right_value166;
char* __dec_obj67;
struct list$1sRightValueObjectph* __dec_obj68;
memset(&old_table_102, 0, sizeof(struct sVarTable*));
right_value158 = (void*)0;
right_value159 = (void*)0;
memset(&current_loop_vtable_103, 0, sizeof(struct sVarTable*));
memset(&param_types__104, 0, sizeof(struct list$1sTypeph*));
memset(&param_names__105, 0, sizeof(struct list$1charph*));
memset(&i_106, 0, sizeof(int));
memset(&o2_saved_107, 0, sizeof(struct list$1charph*));
memset(&name_110, 0, sizeof(char*));
right_value160 = (void*)0;
memset(&type_113, 0, sizeof(struct sType*));
right_value161 = (void*)0;
memset(&block_level_117, 0, sizeof(int));
memset(&i_118, 0, sizeof(int));
memset(&o2_saved_119, 0, sizeof(struct list$1sNodeph*));
memset(&node_122, 0, sizeof(struct sNode*));
memset(&right_value_objects_125, 0, sizeof(struct list$1sRightValueObjectph*));
right_value162 = (void*)0;
right_value163 = (void*)0;
memset(&stack_num_before_130, 0, sizeof(int));
memset(&sline_131, 0, sizeof(int));
right_value164 = (void*)0;
memset(&sname_132, 0, sizeof(char*));
right_value165 = (void*)0;
right_value166 = (void*)0;
    if(info->output_header_file) {
        return 0;
    }
    old_table_102=info->lv_table;
    if(!no_var_table) {
        __dec_obj61=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value159=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value158=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 272, "sVarTable")))),(_Bool)0,old_table_102))));
        come_call_finalizer3(__dec_obj61,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value158,sVarTable_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value159,sVarTable_finalize, 0, 1, 0, 0, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_103=info->current_loop_vtable;
    if(loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    param_types__104=info->param_types;
    param_names__105=info->param_names;
    info->param_types=param_types;
    info->param_names=param_names;
    if(param_types&&param_names) {
        for(        o2_saved_107=(param_names),name_110=list$1charph_begin((o2_saved_107));        !list$1charph_end((o2_saved_107));        name_110=list$1charph_next((o2_saved_107))        ){
            type_113=(struct sType*)come_increment_ref_count(((struct sType*)(right_value160=sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types,i_106), "05function.c", 290, 0))))));
            come_call_finalizer3(right_value160,sType_finalize, 0, 1, 0, 0, (void*)0);
            type_113->mFunctionParam=(_Bool)1;
            type_113->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_110,(struct sType*)come_increment_ref_count(((struct sType*)(right_value161=sType_clone(type_113)))),info);
            come_call_finalizer3(right_value161,sType_finalize, 0, 1, 0, 0, (void*)0);
            i_106++;
            come_call_finalizer3(type_113,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_117=info->block_level;
    if(!no_var_table) {
        info->block_level++;
    }
    if(list$1sNodeph_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_119=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_122=list$1sNodeph_begin((o2_saved_119));        !list$1sNodeph_end((o2_saved_119));        node_122=list$1sNodeph_next((o2_saved_119))        ){
            right_value_objects_125=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj62=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value163=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value162=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "05function.c", 309, "list$1sRightValueObjectph"))))))));
            come_call_finalizer3(__dec_obj62,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value162,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(right_value163,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj63=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj64=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj65=info->module->mLastCode3;
            info->module->mLastCode3=((void*)0);
            __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_130=list$1CVALUEph_length(info->stack);
            sline_131=info->sline;
            sname_132=(char*)come_increment_ref_count(((char*)(right_value164=__builtin_string(info->sname))));
            right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_122->sline(node_122->_protocol_obj);
            __dec_obj66=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value165=node_122->sname(node_122->_protocol_obj))));
            __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            info->writing_source_file_position=(_Bool)1;
            if(!node_compile(node_122,info)) {
                printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                exit(2);
            }
            info->sline=sline_131;
            __dec_obj67=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value166=__builtin_string(sname_132))));
            __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            add_last_code_to_source(info);
            arrange_stack(info,stack_num_before_130);
            free_right_value_objects(info,(_Bool)0);
            list$1sRightValueObjectph_reset(info->right_value_objects);
            __dec_obj68=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_125);
            come_call_finalizer3(__dec_obj68,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value_objects_125,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            sname_132 = come_decrement_ref_count2(sname_132, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_119,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(!no_var_table) {
        free_objects(info->lv_table,((void*)0),info);
    }
    info->lv_table=old_table_102;
    info->block_level=block_level_117;
    info->param_types=param_types__104;
    info->param_names=param_names__105;
    info->current_loop_vtable=current_loop_vtable_103;
    return 0;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
char* result_108;
char* __result78__;
char* __result79__;
char* result_109;
char* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_108, 0, sizeof(char*));
memset(&result_109, 0, sizeof(char*));
            if(self==((void*)0)) {
                memset(&result_108,0,sizeof(char*));
                __result78__ = __result_obj__ = result_108;
                return __result78__;
            }
            self->it=self->head;
            if(self->it) {
                __result79__ = __result_obj__ = self->it->item;
                return __result79__;
            }
            memset(&result_109,0,sizeof(char*));
            __result80__ = __result_obj__ = result_109;
            return __result80__;
}

static _Bool list$1charph_end(struct list$1charph* self){
            return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
char* result_111;
char* __result81__;
char* __result82__;
char* result_112;
char* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_111, 0, sizeof(char*));
memset(&result_112, 0, sizeof(char*));
            if(self==((void*)0)||self->it==((void*)0)) {
                memset(&result_111,0,sizeof(char*));
                __result81__ = __result_obj__ = result_111;
                return __result81__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result82__ = __result_obj__ = self->it->item;
                return __result82__;
            }
            memset(&result_112,0,sizeof(char*));
            __result83__ = __result_obj__ = result_112;
            return __result83__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
struct list_item$1sTypeph* it_114;
int i_115;
struct sType* __result84__;
struct sType* default_value_116;
struct sType* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_114, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_115, 0, sizeof(int));
memset(&default_value_116, 0, sizeof(struct sType*));
                if(position<0) {
                    position+=self->len;
                }
                it_114=self->head;
                i_115=0;
                while(it_114!=((void*)0)) {
                    if(position==i_115) {
                        __result84__ = __result_obj__ = it_114->item;
                        return __result84__;
                    }
                    it_114=it_114->next;
                    i_115++;
                }
                memset(&default_value_116,0,sizeof(struct sType*));
                __result85__ = __result_obj__ = default_value_116;
                come_call_finalizer3(default_value_116,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result85__;
                come_call_finalizer3(default_value_116,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
        if(self==((void*)0)) {
            return 0;
        }
        return self->len;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
struct sNode* result_120;
struct sNode* __result86__;
struct sNode* __result87__;
struct sNode* result_121;
struct sNode* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_120, 0, sizeof(struct sNode*));
memset(&result_121, 0, sizeof(struct sNode*));
            if(self==((void*)0)) {
                memset(&result_120,0,sizeof(struct sNode*));
                __result86__ = __result_obj__ = result_120;
                return __result86__;
            }
            self->it=self->head;
            if(self->it) {
                __result87__ = __result_obj__ = self->it->item;
                return __result87__;
            }
            memset(&result_121,0,sizeof(struct sNode*));
            __result88__ = __result_obj__ = result_121;
            return __result88__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
            return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
struct sNode* result_123;
struct sNode* __result89__;
struct sNode* __result90__;
struct sNode* result_124;
struct sNode* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_123, 0, sizeof(struct sNode*));
memset(&result_124, 0, sizeof(struct sNode*));
            if(self==((void*)0)||self->it==((void*)0)) {
                memset(&result_123,0,sizeof(struct sNode*));
                __result89__ = __result_obj__ = result_123;
                return __result89__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result90__ = __result_obj__ = self->it->item;
                return __result90__;
            }
            memset(&result_124,0,sizeof(struct sNode*));
            __result91__ = __result_obj__ = result_124;
            return __result91__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list$1sRightValueObjectph* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result92__ = __result_obj__ = self;
                come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result92__;
                come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_126;
struct list_item$1sRightValueObjectph* prev_it_127;
memset(&it_126, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_127, 0, sizeof(struct list_item$1sRightValueObjectph*));
                    it_126=self->head;
                    while(it_126!=((void*)0)) {
                        prev_it_127=it_126;
                        it_126=it_126->next;
                        come_call_finalizer3(prev_it_127,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
                            if(self!=((void*)0)&&self->item!=((void*)0)) {
                                come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
                                    if(self!=((void*)0)&&self->mType!=((void*)0)) {
                                        come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(self!=((void*)0)&&self->mVarName!=((void*)0)) {
                                        self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
                                        self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_128;
struct list_item$1sRightValueObjectph* prev_it_129;
memset(&it_128, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_129, 0, sizeof(struct list_item$1sRightValueObjectph*));
                it_128=self->head;
                while(it_128!=((void*)0)) {
                    prev_it_129=it_128;
                    it_128=it_128->next;
                    come_call_finalizer3(prev_it_129,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
                if(self==((void*)0)) {
                    return 0;
                }
                return self->len;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_133;
struct list_item$1sRightValueObjectph* prev_it_134;
struct list$1sRightValueObjectph* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_133, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_134, 0, sizeof(struct list_item$1sRightValueObjectph*));
                it_133=self->head;
                while(it_133!=((void*)0)) {
                    prev_it_134=it_133;
                    it_133=it_133->next;
                    come_call_finalizer3(prev_it_134,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result93__ = __result_obj__ = self;
                return __result93__;
}

void arrange_stack(struct sInfo* info, int top){
    if(list$1CVALUEph_length(info->stack)>top) {
        dec_stack_ptr(list$1CVALUEph_length(info->stack)-top,info);
    }
    if(list$1CVALUEph_length(info->stack)<top) {
        printf("%s %d: unexpected stack value. The stack num is %d. top is %d\n",info->sname,info->sline,list$1CVALUEph_length(info->stack),top);
        exit(2);
    }
}

int expected_next_character(char c, struct sInfo* info){
    parse_sharp_v5(info);
    if(*info->p!=c) {
        if(!info->no_output_err) {
            err_msg(info,"expected next charaster is %c, but %c\n",c,*info->p);
            exit(2);
        }
    }
    info->p++;
    skip_spaces_and_lf(info);
    return 0;
}

char* skip_block(struct sInfo* info){
void* __result_obj__;
char* head_135;
_Bool dquort_136;
_Bool squort_137;
int sline_138;
int nest_139;
char* tail_140;
void* right_value167;
char* buf_141;
void* right_value168;
char* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_135, 0, sizeof(char*));
memset(&dquort_136, 0, sizeof(_Bool));
memset(&squort_137, 0, sizeof(_Bool));
memset(&sline_138, 0, sizeof(int));
memset(&nest_139, 0, sizeof(int));
memset(&tail_140, 0, sizeof(char*));
right_value167 = (void*)0;
memset(&buf_141, 0, sizeof(char*));
right_value168 = (void*)0;
    head_135=info->p;
    if(*info->p==123) {
        info->p++;
        dquort_136=(_Bool)0;
        squort_137=(_Bool)0;
        sline_138=0;
        nest_139=0;
        while(1) {
            if(dquort_136) {
                if(*info->p==92) {
                    info->p++;
                    if(*info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_138);
                        exit(2);
                    }
                    if(*info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else {
                    if(*info->p==34) {
                        info->p++;
                        dquort_136=!dquort_136;
                    }
                    else {
                        if(*info->p==10) {
                            info->p++;
                            info->sline++;
                            if(*info->p==0) {
                                err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_138);
                                exit(2);
                            }
                        }
                        else {
                            info->p++;
                            if(*info->p==0) {
                                err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_138);
                                exit(2);
                            }
                        }
                    }
                }
            }
            else {
                if(squort_137) {
                    if(*info->p==92) {
                        info->p++;
                        if(*info->p==0) {
                            err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_138);
                            exit(2);
                        }
                        if(*info->p==10) {
                            info->sline++;
                        }
                        info->p++;
                    }
                    else {
                        if(*info->p==39) {
                            info->p++;
                            squort_137=!squort_137;
                        }
                        else {
                            if(*info->p==10) {
                                info->p++;
                                info->sline++;
                                if(*info->p==0) {
                                    err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_138);
                                    exit(2);
                                }
                            }
                            else {
                                info->p++;
                                if(*info->p==0) {
                                    err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_138);
                                    exit(2);
                                }
                            }
                        }
                    }
                }
                else {
                    if(*info->p==39) {
                        sline_138=info->sline;
                        info->p++;
                        squort_137=!squort_137;
                    }
                    else {
                        if(*info->p==34) {
                            sline_138=info->sline;
                            info->p++;
                            dquort_136=!dquort_136;
                        }
                        else {
                            if(*info->p==35) {
                                parse_sharp_v5(info);
                            }
                            else {
                                if(*info->p==123) {
                                    info->p++;
                                    nest_139++;
                                }
                                else {
                                    if(*info->p==125) {
                                        info->p++;
                                        if(nest_139==0) {
                                            skip_spaces_and_lf(info);
                                            break;
                                        }
                                        nest_139--;
                                    }
                                    else {
                                        if(*info->p==0) {
                                            err_msg(info,"The block requires } character for closing block");
                                            exit(2);
                                        }
                                        else {
                                            if(*info->p==10) {
                                                info->p++;
                                                info->sline++;
                                            }
                                            else {
                                                info->p++;
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
    else {
        err_msg(info,"Require block. This is %c",*info->p);
    }
    tail_140=info->p;
    buf_141=(char*)come_increment_ref_count(((char*)(right_value167=(char*)come_calloc(1, sizeof(char)*(1*(tail_140-head_135+1)), "05function.c", 515, "char"))));
    right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(buf_141,head_135,tail_140-head_135);
    buf_141[tail_140-head_135]=0;
    __result94__ = __result_obj__ = ((char*)(right_value168=__builtin_string(buf_141)));
    buf_141 = come_decrement_ref_count2(buf_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result94__;
    buf_141 = come_decrement_ref_count2(buf_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool strmemcmp(char* p, char* p2){
_Bool terminated_142;
char* p3_143;
int i_144;
memset(&terminated_142, 0, sizeof(_Bool));
memset(&p3_143, 0, sizeof(char*));
memset(&i_144, 0, sizeof(int));
    terminated_142=(_Bool)0;
    p3_143=p;
    for(    i_144=0;    i_144<strlen(p2);    i_144++    ){
        if(*p3_143==0) {
            terminated_142=(_Bool)1;
            break;
        }
        p3_143++;
    }
    return !terminated_142&&memcmp(p,p2,strlen(p2))==0;
}

char* parse_attribute(struct sInfo* info){
void* __result_obj__;
void* right_value169;
void* right_value170;
struct buffer* asm_fun_name_145;
int brace_num_146;
int len_147;
_Bool in_dquort_148;
int brace_num_149;
int brace_num_150;
void* right_value171;
char* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value169 = (void*)0;
right_value170 = (void*)0;
memset(&asm_fun_name_145, 0, sizeof(struct buffer*));
memset(&brace_num_146, 0, sizeof(int));
memset(&len_147, 0, sizeof(int));
memset(&in_dquort_148, 0, sizeof(_Bool));
memset(&brace_num_149, 0, sizeof(int));
memset(&brace_num_150, 0, sizeof(int));
right_value171 = (void*)0;
    asm_fun_name_145=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value170=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value169=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 538, "buffer"))))))));
    come_call_finalizer3(right_value169,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value170,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    while((_Bool)1) {
        if(strmemcmp(info->p,"__attribute_pure__")) {
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
        }
        else {
            if(strmemcmp(info->p,"__attribute_malloc__")) {
                info->p+=strlen("__attribute_malloc__");
                skip_spaces_and_lf(info);
            }
            else {
                if(strmemcmp(info->p,"__attr_dealloc_fclose")) {
                    info->p+=strlen("__attr_dealloc_fclose");
                    skip_spaces_and_lf(info);
                }
                else {
                    if(strmemcmp(info->p,"__wur")) {
                        info->p+=strlen("__wur");
                        skip_spaces_and_lf(info);
                    }
                    else {
                        if(strmemcmp(info->p,"__noreturn")) {
                            info->p+=strlen("__noreturn");
                            skip_spaces_and_lf(info);
                        }
                        else {
                            if(strmemcmp(info->p,"__attribute__")) {
                                info->p+=strlen("__attribute__");
                                skip_spaces_and_lf(info);
                                brace_num_146=0;
                                while(*info->p) {
                                    if(*info->p==40) {
                                        info->p++;
                                        brace_num_146++;
                                    }
                                    else {
                                        if(*info->p==41) {
                                            info->p++;
                                            brace_num_146--;
                                            if(brace_num_146==0) {
                                                break;
                                            }
                                        }
                                        else {
                                            info->p++;
                                        }
                                    }
                                }
                                skip_spaces_and_lf(info);
                            }
                            else {
                                if(strmemcmp(info->p,"__asm__")) {
                                    info->p+=strlen("__asm__");
                                    skip_spaces_and_lf(info);
                                    len_147=0;
                                    in_dquort_148=(_Bool)0;
                                    brace_num_149=0;
                                    while(*info->p) {
                                        if(*info->p==34) {
                                            info->p++;
                                            in_dquort_148=!in_dquort_148;
                                        }
                                        else {
                                            if(in_dquort_148) {
                                                buffer_append_char(asm_fun_name_145,*info->p);
                                                info->p++;
                                            }
                                            else {
                                                if(*info->p==40) {
                                                    info->p++;
                                                    brace_num_149++;
                                                }
                                                else {
                                                    if(*info->p==41) {
                                                        info->p++;
                                                        brace_num_149--;
                                                        if(brace_num_149==0) {
                                                            break;
                                                        }
                                                    }
                                                    else {
                                                        info->p++;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    skip_spaces_and_lf(info);
                                }
                                else {
                                    if(strmemcmp(info->p,"__asm")) {
                                        info->p+=strlen("__asm");
                                        skip_spaces_and_lf(info);
                                        brace_num_150=0;
                                        while(*info->p) {
                                            if(*info->p==40) {
                                                info->p++;
                                                brace_num_150++;
                                            }
                                            else {
                                                if(*info->p==41) {
                                                    info->p++;
                                                    brace_num_150--;
                                                    if(brace_num_150==0) {
                                                        break;
                                                    }
                                                }
                                                else {
                                                    info->p++;
                                                }
                                            }
                                        }
                                        skip_spaces_and_lf(info);
                                    }
                                    else {
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    __result95__ = __result_obj__ = ((char*)(right_value171=buffer_to_string(asm_fun_name_145)));
    come_call_finalizer3(asm_fun_name_145,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result95__;
    come_call_finalizer3(asm_fun_name_145,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

void transpile_toplevel(_Bool block, struct sInfo* info){
char* head_151;
int head_sline_152;
void* right_value172;
char* buf_153;
void* right_value173;
struct sNode* node_154;
memset(&head_151, 0, sizeof(char*));
memset(&head_sline_152, 0, sizeof(int));
right_value172 = (void*)0;
memset(&buf_153, 0, sizeof(char*));
right_value173 = (void*)0;
memset(&node_154, 0, sizeof(struct sNode*));
    while(*info->p) {
        parse_sharp_v5(info);
        head_151=info->p;
        head_sline_152=info->sline;
        buf_153=(char*)come_increment_ref_count(((char*)(right_value172=parse_word(info))));
        right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        parse_sharp_v5(info);
        if(block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_153 = come_decrement_ref_count2(buf_153, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        node_154=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value173=top_level_v99(buf_153,head_151,head_sline_152,info))));
        if(right_value173) { right_value173 = come_decrement_ref_count2(right_value173, ((struct sNode*)right_value173)->finalize, ((struct sNode*)right_value173)->_protocol_obj, 1, 0, 0, (void*)0); } 
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(node_154!=((void*)0)) {
            if(!node_compile(node_154,info)) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
        }
        parse_sharp_v5(info);
        skip_spaces_and_lf(info);
        if(block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_153 = come_decrement_ref_count2(buf_153, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_154) { node_154 = come_decrement_ref_count2(node_154, ((struct sNode*)node_154)->finalize, ((struct sNode*)node_154)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        buf_153 = come_decrement_ref_count2(buf_153, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_154) { node_154 = come_decrement_ref_count2(node_154, ((struct sNode*)node_154)->finalize, ((struct sNode*)node_154)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

int transpile_v5(struct sInfo* info){
void* right_value174;
char* name_155;
void* right_value175;
void* right_value176;
struct sType* result_type_156;
void* right_value177;
void* right_value178;
void* right_value179;
void* right_value180;
void* right_value181;
void* right_value182;
void* right_value183;
void* right_value184;
void* right_value185;
void* right_value186;
struct sType* __list_values1___157[5];
void* right_value190;
void* right_value191;
struct list$1sTypeph* param_types_162;
void* right_value192;
void* right_value193;
void* right_value194;
void* right_value195;
void* right_value196;
char* __list_values2___163[5];
void* right_value200;
void* right_value201;
struct list$1charph* param_names_168;
void* right_value202;
void* right_value203;
struct list$1charph* param_default_parametors_169;
void* right_value204;
void* right_value205;
void* right_value206;
void* right_value207;
void* right_value208;
void* right_value209;
void* right_value210;
struct sFun* main_fun_170;
void* right_value217;
void* right_value218;
char* name_215;
void* right_value219;
void* right_value220;
struct sType* result_type_216;
void* right_value221;
void* right_value222;
struct sType* __list_values3___217[1];
void* right_value223;
void* right_value224;
struct list$1sTypeph* param_types_218;
void* right_value225;
char* __list_values4___219[1];
void* right_value226;
void* right_value227;
struct list$1charph* param_names_220;
void* right_value228;
void* right_value229;
struct list$1charph* param_default_parametors_221;
void* right_value230;
void* right_value231;
void* right_value232;
void* right_value233;
struct sFun* main_fun_222;
void* right_value234;
void* right_value235;
char* name_223;
void* right_value236;
void* right_value237;
struct sType* result_type_224;
void* right_value238;
void* right_value239;
void* right_value240;
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
struct sType* __list_values5___225[7];
void* right_value252;
void* right_value253;
struct list$1sTypeph* param_types_226;
void* right_value254;
void* right_value255;
void* right_value256;
void* right_value257;
void* right_value258;
void* right_value259;
void* right_value260;
char* __list_values6___227[7];
void* right_value261;
void* right_value262;
struct list$1charph* param_names_228;
void* right_value263;
void* right_value264;
struct list$1charph* param_default_parametors_229;
void* right_value265;
void* right_value266;
void* right_value267;
void* right_value268;
struct sFun* main_fun_230;
void* right_value269;
void* right_value270;
char* name_231;
void* right_value271;
void* right_value272;
struct sType* result_type_232;
void* right_value273;
void* right_value274;
void* right_value275;
void* right_value276;
void* right_value277;
void* right_value278;
void* right_value279;
void* right_value280;
void* right_value281;
void* right_value282;
struct sType* __list_values7___233[5];
void* right_value283;
void* right_value284;
struct list$1sTypeph* param_types_234;
void* right_value285;
void* right_value286;
void* right_value287;
void* right_value288;
void* right_value289;
char* __list_values8___235[5];
void* right_value290;
void* right_value291;
struct list$1charph* param_names_236;
void* right_value292;
void* right_value293;
struct list$1charph* param_default_parametors_237;
void* right_value294;
void* right_value295;
void* right_value296;
void* right_value297;
struct sFun* main_fun_238;
void* right_value298;
void* right_value299;
char* name_239;
void* right_value300;
void* right_value301;
struct sType* result_type_240;
void* right_value302;
void* right_value303;
struct sType* __list_values9___241[1];
void* right_value304;
void* right_value305;
struct list$1sTypeph* param_types_242;
void* right_value306;
char* __list_values10___243[1];
void* right_value307;
void* right_value308;
struct list$1charph* param_names_244;
void* right_value309;
void* right_value310;
struct list$1charph* param_default_parametors_245;
void* right_value311;
void* right_value312;
void* right_value313;
void* right_value314;
struct sFun* main_fun_246;
void* right_value315;
void* right_value316;
char* name_247;
void* right_value317;
void* right_value318;
struct sType* result_type_248;
void* right_value319;
void* right_value320;
void* right_value321;
void* right_value322;
void* right_value323;
void* right_value324;
void* right_value325;
void* right_value326;
struct sType* __list_values11___249[4];
void* right_value327;
void* right_value328;
struct list$1sTypeph* param_types_250;
void* right_value329;
void* right_value330;
void* right_value331;
void* right_value332;
char* __list_values12___251[4];
void* right_value333;
void* right_value334;
struct list$1charph* param_names_252;
void* right_value335;
void* right_value336;
struct list$1charph* param_default_parametors_253;
void* right_value337;
void* right_value338;
void* right_value339;
void* right_value340;
void* right_value341;
void* right_value342;
void* right_value343;
struct sFun* main_fun_254;
void* right_value344;
void* right_value345;
char* name_255;
void* right_value346;
void* right_value347;
struct sType* result_type_256;
void* right_value348;
void* right_value349;
void* right_value350;
void* right_value351;
void* right_value352;
void* right_value353;
struct sType* __list_values13___257[3];
void* right_value354;
void* right_value355;
struct list$1sTypeph* param_types_258;
void* right_value356;
void* right_value357;
void* right_value358;
char* __list_values14___259[3];
void* right_value359;
void* right_value360;
struct list$1charph* param_names_260;
void* right_value361;
void* right_value362;
struct list$1charph* param_default_parametors_261;
void* right_value363;
void* right_value364;
void* right_value365;
void* right_value366;
struct sFun* main_fun_262;
void* right_value367;
void* right_value368;
char* name_263;
void* right_value369;
void* right_value370;
struct sType* result_type_264;
void* right_value371;
void* right_value372;
struct sType* __list_values15___265[1];
void* right_value373;
void* right_value374;
struct list$1sTypeph* param_types_266;
void* right_value375;
char* __list_values16___267[1];
void* right_value376;
void* right_value377;
struct list$1charph* param_names_268;
void* right_value378;
void* right_value379;
struct list$1charph* param_default_parametors_269;
void* right_value380;
void* right_value381;
void* right_value382;
void* right_value383;
struct sFun* main_fun_270;
void* right_value384;
void* right_value385;
char* name_271;
void* right_value386;
void* right_value387;
struct sType* result_type_272;
void* right_value388;
void* right_value389;
void* right_value390;
void* right_value391;
void* right_value392;
void* right_value393;
struct sType* __list_values17___273[3];
void* right_value394;
void* right_value395;
struct list$1sTypeph* param_types_274;
void* right_value396;
void* right_value397;
void* right_value398;
char* __list_values18___275[3];
void* right_value399;
void* right_value400;
struct list$1charph* param_names_276;
void* right_value401;
void* right_value402;
struct list$1charph* param_default_parametors_277;
void* right_value403;
void* right_value404;
void* right_value405;
void* right_value406;
struct sFun* main_fun_278;
void* right_value407;
void* right_value408;
char* name_279;
void* right_value409;
void* right_value410;
struct sType* result_type_280;
void* right_value411;
void* right_value412;
struct list$1sTypeph* param_types_281;
void* right_value413;
void* right_value414;
struct list$1charph* param_names_282;
void* right_value415;
void* right_value416;
struct list$1charph* param_default_parametors_283;
void* right_value417;
void* right_value418;
void* right_value419;
void* right_value420;
struct sFun* main_fun_284;
void* right_value421;
void* right_value422;
char* name_285;
void* right_value423;
void* right_value424;
struct sType* result_type_286;
void* right_value425;
void* right_value426;
void* right_value427;
void* right_value428;
void* right_value429;
void* right_value430;
void* right_value431;
void* right_value432;
struct sType* __list_values19___287[4];
void* right_value433;
void* right_value434;
struct list$1sTypeph* param_types_288;
void* right_value435;
void* right_value436;
void* right_value437;
void* right_value438;
char* __list_values20___289[4];
void* right_value439;
void* right_value440;
struct list$1charph* param_names_290;
void* right_value441;
void* right_value442;
struct list$1charph* param_default_parametors_291;
void* right_value443;
void* right_value444;
void* right_value445;
void* right_value446;
struct sFun* main_fun_292;
void* right_value447;
void* right_value448;
char* name_293;
void* right_value449;
void* right_value450;
struct sType* result_type_294;
void* right_value451;
void* right_value452;
struct list$1sTypeph* param_types_295;
void* right_value453;
void* right_value454;
struct list$1charph* param_names_296;
void* right_value455;
void* right_value456;
struct list$1charph* param_default_parametors_297;
void* right_value457;
void* right_value458;
void* right_value459;
void* right_value460;
struct sFun* fun_298;
void* right_value461;
void* right_value462;
char* name_299;
void* right_value463;
void* right_value464;
struct sType* result_type_300;
void* right_value465;
void* right_value466;
struct list$1sTypeph* param_types_301;
void* right_value467;
void* right_value468;
struct list$1charph* param_names_302;
void* right_value469;
void* right_value470;
struct list$1charph* param_default_parametors_303;
void* right_value471;
void* right_value472;
void* right_value473;
void* right_value474;
struct sFun* fun_304;
void* right_value475;
right_value174 = (void*)0;
memset(&name_155, 0, sizeof(char*));
right_value175 = (void*)0;
right_value176 = (void*)0;
memset(&result_type_156, 0, sizeof(struct sType*));
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value185 = (void*)0;
right_value186 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
memset(&param_types_162, 0, sizeof(struct list$1sTypeph*));
right_value192 = (void*)0;
right_value193 = (void*)0;
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value200 = (void*)0;
right_value201 = (void*)0;
memset(&param_names_168, 0, sizeof(struct list$1charph*));
right_value202 = (void*)0;
right_value203 = (void*)0;
memset(&param_default_parametors_169, 0, sizeof(struct list$1charph*));
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
right_value210 = (void*)0;
memset(&main_fun_170, 0, sizeof(struct sFun*));
right_value217 = (void*)0;
right_value218 = (void*)0;
memset(&name_215, 0, sizeof(char*));
right_value219 = (void*)0;
right_value220 = (void*)0;
memset(&result_type_216, 0, sizeof(struct sType*));
right_value221 = (void*)0;
right_value222 = (void*)0;
right_value223 = (void*)0;
right_value224 = (void*)0;
memset(&param_types_218, 0, sizeof(struct list$1sTypeph*));
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
memset(&param_names_220, 0, sizeof(struct list$1charph*));
right_value228 = (void*)0;
right_value229 = (void*)0;
memset(&param_default_parametors_221, 0, sizeof(struct list$1charph*));
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value232 = (void*)0;
right_value233 = (void*)0;
memset(&main_fun_222, 0, sizeof(struct sFun*));
right_value234 = (void*)0;
right_value235 = (void*)0;
memset(&name_223, 0, sizeof(char*));
right_value236 = (void*)0;
right_value237 = (void*)0;
memset(&result_type_224, 0, sizeof(struct sType*));
right_value238 = (void*)0;
right_value239 = (void*)0;
right_value240 = (void*)0;
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
memset(&param_types_226, 0, sizeof(struct list$1sTypeph*));
right_value254 = (void*)0;
right_value255 = (void*)0;
right_value256 = (void*)0;
right_value257 = (void*)0;
right_value258 = (void*)0;
right_value259 = (void*)0;
right_value260 = (void*)0;
right_value261 = (void*)0;
right_value262 = (void*)0;
memset(&param_names_228, 0, sizeof(struct list$1charph*));
right_value263 = (void*)0;
right_value264 = (void*)0;
memset(&param_default_parametors_229, 0, sizeof(struct list$1charph*));
right_value265 = (void*)0;
right_value266 = (void*)0;
right_value267 = (void*)0;
right_value268 = (void*)0;
memset(&main_fun_230, 0, sizeof(struct sFun*));
right_value269 = (void*)0;
right_value270 = (void*)0;
memset(&name_231, 0, sizeof(char*));
right_value271 = (void*)0;
right_value272 = (void*)0;
memset(&result_type_232, 0, sizeof(struct sType*));
right_value273 = (void*)0;
right_value274 = (void*)0;
right_value275 = (void*)0;
right_value276 = (void*)0;
right_value277 = (void*)0;
right_value278 = (void*)0;
right_value279 = (void*)0;
right_value280 = (void*)0;
right_value281 = (void*)0;
right_value282 = (void*)0;
right_value283 = (void*)0;
right_value284 = (void*)0;
memset(&param_types_234, 0, sizeof(struct list$1sTypeph*));
right_value285 = (void*)0;
right_value286 = (void*)0;
right_value287 = (void*)0;
right_value288 = (void*)0;
right_value289 = (void*)0;
right_value290 = (void*)0;
right_value291 = (void*)0;
memset(&param_names_236, 0, sizeof(struct list$1charph*));
right_value292 = (void*)0;
right_value293 = (void*)0;
memset(&param_default_parametors_237, 0, sizeof(struct list$1charph*));
right_value294 = (void*)0;
right_value295 = (void*)0;
right_value296 = (void*)0;
right_value297 = (void*)0;
memset(&main_fun_238, 0, sizeof(struct sFun*));
right_value298 = (void*)0;
right_value299 = (void*)0;
memset(&name_239, 0, sizeof(char*));
right_value300 = (void*)0;
right_value301 = (void*)0;
memset(&result_type_240, 0, sizeof(struct sType*));
right_value302 = (void*)0;
right_value303 = (void*)0;
right_value304 = (void*)0;
right_value305 = (void*)0;
memset(&param_types_242, 0, sizeof(struct list$1sTypeph*));
right_value306 = (void*)0;
right_value307 = (void*)0;
right_value308 = (void*)0;
memset(&param_names_244, 0, sizeof(struct list$1charph*));
right_value309 = (void*)0;
right_value310 = (void*)0;
memset(&param_default_parametors_245, 0, sizeof(struct list$1charph*));
right_value311 = (void*)0;
right_value312 = (void*)0;
right_value313 = (void*)0;
right_value314 = (void*)0;
memset(&main_fun_246, 0, sizeof(struct sFun*));
right_value315 = (void*)0;
right_value316 = (void*)0;
memset(&name_247, 0, sizeof(char*));
right_value317 = (void*)0;
right_value318 = (void*)0;
memset(&result_type_248, 0, sizeof(struct sType*));
right_value319 = (void*)0;
right_value320 = (void*)0;
right_value321 = (void*)0;
right_value322 = (void*)0;
right_value323 = (void*)0;
right_value324 = (void*)0;
right_value325 = (void*)0;
right_value326 = (void*)0;
right_value327 = (void*)0;
right_value328 = (void*)0;
memset(&param_types_250, 0, sizeof(struct list$1sTypeph*));
right_value329 = (void*)0;
right_value330 = (void*)0;
right_value331 = (void*)0;
right_value332 = (void*)0;
right_value333 = (void*)0;
right_value334 = (void*)0;
memset(&param_names_252, 0, sizeof(struct list$1charph*));
right_value335 = (void*)0;
right_value336 = (void*)0;
memset(&param_default_parametors_253, 0, sizeof(struct list$1charph*));
right_value337 = (void*)0;
right_value338 = (void*)0;
right_value339 = (void*)0;
right_value340 = (void*)0;
right_value341 = (void*)0;
right_value342 = (void*)0;
right_value343 = (void*)0;
memset(&main_fun_254, 0, sizeof(struct sFun*));
right_value344 = (void*)0;
right_value345 = (void*)0;
memset(&name_255, 0, sizeof(char*));
right_value346 = (void*)0;
right_value347 = (void*)0;
memset(&result_type_256, 0, sizeof(struct sType*));
right_value348 = (void*)0;
right_value349 = (void*)0;
right_value350 = (void*)0;
right_value351 = (void*)0;
right_value352 = (void*)0;
right_value353 = (void*)0;
right_value354 = (void*)0;
right_value355 = (void*)0;
memset(&param_types_258, 0, sizeof(struct list$1sTypeph*));
right_value356 = (void*)0;
right_value357 = (void*)0;
right_value358 = (void*)0;
right_value359 = (void*)0;
right_value360 = (void*)0;
memset(&param_names_260, 0, sizeof(struct list$1charph*));
right_value361 = (void*)0;
right_value362 = (void*)0;
memset(&param_default_parametors_261, 0, sizeof(struct list$1charph*));
right_value363 = (void*)0;
right_value364 = (void*)0;
right_value365 = (void*)0;
right_value366 = (void*)0;
memset(&main_fun_262, 0, sizeof(struct sFun*));
right_value367 = (void*)0;
right_value368 = (void*)0;
memset(&name_263, 0, sizeof(char*));
right_value369 = (void*)0;
right_value370 = (void*)0;
memset(&result_type_264, 0, sizeof(struct sType*));
right_value371 = (void*)0;
right_value372 = (void*)0;
right_value373 = (void*)0;
right_value374 = (void*)0;
memset(&param_types_266, 0, sizeof(struct list$1sTypeph*));
right_value375 = (void*)0;
right_value376 = (void*)0;
right_value377 = (void*)0;
memset(&param_names_268, 0, sizeof(struct list$1charph*));
right_value378 = (void*)0;
right_value379 = (void*)0;
memset(&param_default_parametors_269, 0, sizeof(struct list$1charph*));
right_value380 = (void*)0;
right_value381 = (void*)0;
right_value382 = (void*)0;
right_value383 = (void*)0;
memset(&main_fun_270, 0, sizeof(struct sFun*));
right_value384 = (void*)0;
right_value385 = (void*)0;
memset(&name_271, 0, sizeof(char*));
right_value386 = (void*)0;
right_value387 = (void*)0;
memset(&result_type_272, 0, sizeof(struct sType*));
right_value388 = (void*)0;
right_value389 = (void*)0;
right_value390 = (void*)0;
right_value391 = (void*)0;
right_value392 = (void*)0;
right_value393 = (void*)0;
right_value394 = (void*)0;
right_value395 = (void*)0;
memset(&param_types_274, 0, sizeof(struct list$1sTypeph*));
right_value396 = (void*)0;
right_value397 = (void*)0;
right_value398 = (void*)0;
right_value399 = (void*)0;
right_value400 = (void*)0;
memset(&param_names_276, 0, sizeof(struct list$1charph*));
right_value401 = (void*)0;
right_value402 = (void*)0;
memset(&param_default_parametors_277, 0, sizeof(struct list$1charph*));
right_value403 = (void*)0;
right_value404 = (void*)0;
right_value405 = (void*)0;
right_value406 = (void*)0;
memset(&main_fun_278, 0, sizeof(struct sFun*));
right_value407 = (void*)0;
right_value408 = (void*)0;
memset(&name_279, 0, sizeof(char*));
right_value409 = (void*)0;
right_value410 = (void*)0;
memset(&result_type_280, 0, sizeof(struct sType*));
right_value411 = (void*)0;
right_value412 = (void*)0;
memset(&param_types_281, 0, sizeof(struct list$1sTypeph*));
right_value413 = (void*)0;
right_value414 = (void*)0;
memset(&param_names_282, 0, sizeof(struct list$1charph*));
right_value415 = (void*)0;
right_value416 = (void*)0;
memset(&param_default_parametors_283, 0, sizeof(struct list$1charph*));
right_value417 = (void*)0;
right_value418 = (void*)0;
right_value419 = (void*)0;
right_value420 = (void*)0;
memset(&main_fun_284, 0, sizeof(struct sFun*));
right_value421 = (void*)0;
right_value422 = (void*)0;
memset(&name_285, 0, sizeof(char*));
right_value423 = (void*)0;
right_value424 = (void*)0;
memset(&result_type_286, 0, sizeof(struct sType*));
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
memset(&param_types_288, 0, sizeof(struct list$1sTypeph*));
right_value435 = (void*)0;
right_value436 = (void*)0;
right_value437 = (void*)0;
right_value438 = (void*)0;
right_value439 = (void*)0;
right_value440 = (void*)0;
memset(&param_names_290, 0, sizeof(struct list$1charph*));
right_value441 = (void*)0;
right_value442 = (void*)0;
memset(&param_default_parametors_291, 0, sizeof(struct list$1charph*));
right_value443 = (void*)0;
right_value444 = (void*)0;
right_value445 = (void*)0;
right_value446 = (void*)0;
memset(&main_fun_292, 0, sizeof(struct sFun*));
right_value447 = (void*)0;
right_value448 = (void*)0;
memset(&name_293, 0, sizeof(char*));
right_value449 = (void*)0;
right_value450 = (void*)0;
memset(&result_type_294, 0, sizeof(struct sType*));
right_value451 = (void*)0;
right_value452 = (void*)0;
memset(&param_types_295, 0, sizeof(struct list$1sTypeph*));
right_value453 = (void*)0;
right_value454 = (void*)0;
memset(&param_names_296, 0, sizeof(struct list$1charph*));
right_value455 = (void*)0;
right_value456 = (void*)0;
memset(&param_default_parametors_297, 0, sizeof(struct list$1charph*));
right_value457 = (void*)0;
right_value458 = (void*)0;
right_value459 = (void*)0;
right_value460 = (void*)0;
memset(&fun_298, 0, sizeof(struct sFun*));
right_value461 = (void*)0;
right_value462 = (void*)0;
memset(&name_299, 0, sizeof(char*));
right_value463 = (void*)0;
right_value464 = (void*)0;
memset(&result_type_300, 0, sizeof(struct sType*));
right_value465 = (void*)0;
right_value466 = (void*)0;
memset(&param_types_301, 0, sizeof(struct list$1sTypeph*));
right_value467 = (void*)0;
right_value468 = (void*)0;
memset(&param_names_302, 0, sizeof(struct list$1charph*));
right_value469 = (void*)0;
right_value470 = (void*)0;
memset(&param_default_parametors_303, 0, sizeof(struct list$1charph*));
right_value471 = (void*)0;
right_value472 = (void*)0;
right_value473 = (void*)0;
right_value474 = (void*)0;
memset(&fun_304, 0, sizeof(struct sFun*));
right_value475 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_155=(char*)come_increment_ref_count(((char*)(right_value174=__builtin_string("come_calloc"))));
        right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value176=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value175=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 707, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer3(right_value175,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value176,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values1___157[0]=come_increment_ref_count(((struct sType*)(right_value178=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value177=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 708, "sType")))),"int",(_Bool)0,info))));
__list_values1___157[1]=come_increment_ref_count(((struct sType*)(right_value180=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value179=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 708, "sType")))),"int",(_Bool)0,info))));
__list_values1___157[2]=come_increment_ref_count(((struct sType*)(right_value182=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value181=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 708, "sType")))),"char*",(_Bool)0,info))));
__list_values1___157[3]=come_increment_ref_count(((struct sType*)(right_value184=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value183=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 708, "sType")))),"int",(_Bool)0,info))));
__list_values1___157[4]=come_increment_ref_count(((struct sType*)(right_value186=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value185=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 708, "sType")))),"char*",(_Bool)0,info))));
}        param_types_162=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value191=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value190=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 708, "struct list$1sTypeph")))),5,__list_values1___157))));
        come_call_finalizer3(right_value177,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value178,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value179,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value180,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value181,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value182,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value183,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value184,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value185,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value186,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value190,list$1sTypeph_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value191,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values2___163[0]=come_increment_ref_count(((char*)(right_value192=__builtin_string("count"))));
__list_values2___163[1]=come_increment_ref_count(((char*)(right_value193=__builtin_string("size"))));
__list_values2___163[2]=come_increment_ref_count(((char*)(right_value194=__builtin_string("sname"))));
__list_values2___163[3]=come_increment_ref_count(((char*)(right_value195=__builtin_string("sline"))));
__list_values2___163[4]=come_increment_ref_count(((char*)(right_value196=__builtin_string("class_name"))));
}        param_names_168=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value201=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value200=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 709, "struct list$1charph")))),5,__list_values2___163))));
        right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value200,list$1charph_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value201,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        param_default_parametors_169=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value203=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value202=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 710, "list$1charph"))))))));
        come_call_finalizer3(right_value202,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value203,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        list$1charph_push_back(param_default_parametors_169,((void*)0));
        list$1charph_push_back(param_default_parametors_169,((void*)0));
        list$1charph_push_back(param_default_parametors_169,(char*)come_increment_ref_count(((char*)(right_value204=__builtin_string("null")))));
        right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        list$1charph_push_back(param_default_parametors_169,(char*)come_increment_ref_count(((char*)(right_value205=__builtin_string("0")))));
        right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        list$1charph_push_back(param_default_parametors_169,(char*)come_increment_ref_count(((char*)(right_value206=__builtin_string("null")))));
        right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        main_fun_170=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value210=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value207=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 716, "sFun")))),(char*)come_increment_ref_count(name_155),(struct sType*)come_increment_ref_count(result_type_156),(struct list$1sTypeph*)come_increment_ref_count(param_types_162),(struct list$1charph*)come_increment_ref_count(param_names_168),(struct list$1charph*)come_increment_ref_count(param_default_parametors_169),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value208=__builtin_string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name)")))),(char*)come_increment_ref_count(((char*)(right_value209=__builtin_string("")))),info))));
        come_call_finalizer3(right_value207,sFun_finalize, 0, 1, 0, 0, (void*)0);
        right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value210,sFun_finalize, 0, 1, 0, 0, (void*)0);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value217=__builtin_string(name_155)))),(struct sFun*)come_increment_ref_count(main_fun_170));
        right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        name_155 = come_decrement_ref_count2(name_155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_156,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_162,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_168,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_169,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_170,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_215=(char*)come_increment_ref_count(((char*)(right_value218=__builtin_string("come_increment_ref_count"))));
        right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_216=(struct sType*)come_increment_ref_count(((struct sType*)(right_value220=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value219=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 727, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer3(right_value219,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value220,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values3___217[0]=come_increment_ref_count(((struct sType*)(right_value222=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value221=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 728, "sType")))),"void*",(_Bool)0,info))));
}        param_types_218=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value224=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value223=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 728, "struct list$1sTypeph")))),1,__list_values3___217))));
        come_call_finalizer3(right_value221,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value222,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value223,list$1sTypeph_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value224,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values4___219[0]=come_increment_ref_count(((char*)(right_value225=__builtin_string("mem"))));
}        param_names_220=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value227=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value226=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 729, "struct list$1charph")))),1,__list_values4___219))));
        right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value226,list$1charph_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value227,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        param_default_parametors_221=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value229=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value228=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 730, "list$1charph"))))))));
        come_call_finalizer3(right_value228,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value229,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        main_fun_222=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value233=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value230=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 731, "sFun")))),(char*)come_increment_ref_count(name_215),(struct sType*)come_increment_ref_count(result_type_216),(struct list$1sTypeph*)come_increment_ref_count(param_types_218),(struct list$1charph*)come_increment_ref_count(param_names_220),(struct list$1charph*)come_increment_ref_count(param_default_parametors_221),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value231=__builtin_string("void* come_increment_ref_count(void* mem)")))),(char*)come_increment_ref_count(((char*)(right_value232=__builtin_string("")))),info))));
        come_call_finalizer3(right_value230,sFun_finalize, 0, 1, 0, 0, (void*)0);
        right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value233,sFun_finalize, 0, 1, 0, 0, (void*)0);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value234=__builtin_string(name_215)))),(struct sFun*)come_increment_ref_count(main_fun_222));
        right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        name_215 = come_decrement_ref_count2(name_215, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_216,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_218,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_220,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_221,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_222,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_223=(char*)come_increment_ref_count(((char*)(right_value235=__builtin_string("come_call_finalizer"))));
        right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_224=(struct sType*)come_increment_ref_count(((struct sType*)(right_value237=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value236=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 742, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer3(right_value236,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value237,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values5___225[0]=come_increment_ref_count(((struct sType*)(right_value239=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value238=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 743, "sType")))),"void*",(_Bool)0,info))));
__list_values5___225[1]=come_increment_ref_count(((struct sType*)(right_value241=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value240=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 743, "sType")))),"void*",(_Bool)0,info))));
__list_values5___225[2]=come_increment_ref_count(((struct sType*)(right_value243=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value242=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 743, "sType")))),"void*",(_Bool)0,info))));
__list_values5___225[3]=come_increment_ref_count(((struct sType*)(right_value245=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value244=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 743, "sType")))),"void*",(_Bool)0,info))));
__list_values5___225[4]=come_increment_ref_count(((struct sType*)(right_value247=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value246=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 743, "sType")))),"int",(_Bool)0,info))));
__list_values5___225[5]=come_increment_ref_count(((struct sType*)(right_value249=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value248=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 743, "sType")))),"int",(_Bool)0,info))));
__list_values5___225[6]=come_increment_ref_count(((struct sType*)(right_value251=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value250=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 743, "sType")))),"int",(_Bool)0,info))));
}        param_types_226=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value253=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value252=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 743, "struct list$1sTypeph")))),7,__list_values5___225))));
        come_call_finalizer3(right_value238,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value239,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value240,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value241,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value242,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value243,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value244,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value245,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value246,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value247,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value248,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value249,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value250,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value251,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value252,list$1sTypeph_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value253,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values6___227[0]=come_increment_ref_count(((char*)(right_value254=__builtin_string("fun"))));
__list_values6___227[1]=come_increment_ref_count(((char*)(right_value255=__builtin_string("mem"))));
__list_values6___227[2]=come_increment_ref_count(((char*)(right_value256=__builtin_string("protocol_fun"))));
__list_values6___227[3]=come_increment_ref_count(((char*)(right_value257=__builtin_string("protocol_obj"))));
__list_values6___227[4]=come_increment_ref_count(((char*)(right_value258=__builtin_string("call_finalizer_only"))));
__list_values6___227[5]=come_increment_ref_count(((char*)(right_value259=__builtin_string("no_decrement"))));
__list_values6___227[6]=come_increment_ref_count(((char*)(right_value260=__builtin_string("no_free"))));
}        param_names_228=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value262=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value261=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 744, "struct list$1charph")))),7,__list_values6___227))));
        right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value261,list$1charph_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value262,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        param_default_parametors_229=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value264=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value263=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 745, "list$1charph"))))))));
        come_call_finalizer3(right_value263,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value264,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        main_fun_230=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value268=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value265=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 746, "sFun")))),(char*)come_increment_ref_count(name_223),(struct sType*)come_increment_ref_count(result_type_224),(struct list$1sTypeph*)come_increment_ref_count(param_types_226),(struct list$1charph*)come_increment_ref_count(param_names_228),(struct list$1charph*)come_increment_ref_count(param_default_parametors_229),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value266=__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")))),(char*)come_increment_ref_count(((char*)(right_value267=__builtin_string("")))),info))));
        come_call_finalizer3(right_value265,sFun_finalize, 0, 1, 0, 0, (void*)0);
        right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value268,sFun_finalize, 0, 1, 0, 0, (void*)0);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value269=__builtin_string(name_223)))),(struct sFun*)come_increment_ref_count(main_fun_230));
        right_value269 = come_decrement_ref_count2(right_value269, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        name_223 = come_decrement_ref_count2(name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_224,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_226,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_228,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_229,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_230,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_231=(char*)come_increment_ref_count(((char*)(right_value270=__builtin_string("come_decrement_ref_count"))));
        right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_232=(struct sType*)come_increment_ref_count(((struct sType*)(right_value272=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value271=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 757, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer3(right_value271,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value272,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values7___233[0]=come_increment_ref_count(((struct sType*)(right_value274=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value273=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 758, "sType")))),"void*",(_Bool)0,info))));
__list_values7___233[1]=come_increment_ref_count(((struct sType*)(right_value276=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value275=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 758, "sType")))),"void*",(_Bool)0,info))));
__list_values7___233[2]=come_increment_ref_count(((struct sType*)(right_value278=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value277=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 758, "sType")))),"void*",(_Bool)0,info))));
__list_values7___233[3]=come_increment_ref_count(((struct sType*)(right_value280=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value279=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 758, "sType")))),"bool",(_Bool)0,info))));
__list_values7___233[4]=come_increment_ref_count(((struct sType*)(right_value282=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value281=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 758, "sType")))),"bool",(_Bool)0,info))));
}        param_types_234=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value284=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value283=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 758, "struct list$1sTypeph")))),5,__list_values7___233))));
        come_call_finalizer3(right_value273,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value274,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value275,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value276,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value277,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value278,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value279,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value280,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value281,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value282,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value283,list$1sTypeph_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value284,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values8___235[0]=come_increment_ref_count(((char*)(right_value285=__builtin_string("mem"))));
__list_values8___235[1]=come_increment_ref_count(((char*)(right_value286=__builtin_string("protocol_fun"))));
__list_values8___235[2]=come_increment_ref_count(((char*)(right_value287=__builtin_string("protocol_obj"))));
__list_values8___235[3]=come_increment_ref_count(((char*)(right_value288=__builtin_string("no_decrement"))));
__list_values8___235[4]=come_increment_ref_count(((char*)(right_value289=__builtin_string("no_free"))));
}        param_names_236=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value291=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value290=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 759, "struct list$1charph")))),5,__list_values8___235))));
        right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value288 = come_decrement_ref_count2(right_value288, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value289 = come_decrement_ref_count2(right_value289, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value290,list$1charph_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value291,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        param_default_parametors_237=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value293=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value292=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 760, "list$1charph"))))))));
        come_call_finalizer3(right_value292,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value293,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        main_fun_238=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value297=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value294=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 761, "sFun")))),(char*)come_increment_ref_count(name_231),(struct sType*)come_increment_ref_count(result_type_232),(struct list$1sTypeph*)come_increment_ref_count(param_types_234),(struct list$1charph*)come_increment_ref_count(param_names_236),(struct list$1charph*)come_increment_ref_count(param_default_parametors_237),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value295=__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")))),(char*)come_increment_ref_count(((char*)(right_value296=__builtin_string("")))),info))));
        come_call_finalizer3(right_value294,sFun_finalize, 0, 1, 0, 0, (void*)0);
        right_value295 = come_decrement_ref_count2(right_value295, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value296 = come_decrement_ref_count2(right_value296, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value297,sFun_finalize, 0, 1, 0, 0, (void*)0);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value298=__builtin_string(name_231)))),(struct sFun*)come_increment_ref_count(main_fun_238));
        right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        name_231 = come_decrement_ref_count2(name_231, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_232,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_234,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_236,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_237,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_238,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_239=(char*)come_increment_ref_count(((char*)(right_value299=__builtin_string("come_free_object"))));
        right_value299 = come_decrement_ref_count2(right_value299, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_240=(struct sType*)come_increment_ref_count(((struct sType*)(right_value301=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value300=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 772, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer3(right_value300,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value301,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values9___241[0]=come_increment_ref_count(((struct sType*)(right_value303=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value302=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 773, "sType")))),"void*",(_Bool)0,info))));
}        param_types_242=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value305=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value304=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 773, "struct list$1sTypeph")))),1,__list_values9___241))));
        come_call_finalizer3(right_value302,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value303,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value304,list$1sTypeph_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value305,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values10___243[0]=come_increment_ref_count(((char*)(right_value306=__builtin_string("mem"))));
}        param_names_244=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value308=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value307=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 774, "struct list$1charph")))),1,__list_values10___243))));
        right_value306 = come_decrement_ref_count2(right_value306, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value307,list$1charph_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value308,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        param_default_parametors_245=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value310=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value309=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 775, "list$1charph"))))))));
        come_call_finalizer3(right_value309,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value310,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        main_fun_246=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value314=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value311=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 776, "sFun")))),(char*)come_increment_ref_count(name_239),(struct sType*)come_increment_ref_count(result_type_240),(struct list$1sTypeph*)come_increment_ref_count(param_types_242),(struct list$1charph*)come_increment_ref_count(param_names_244),(struct list$1charph*)come_increment_ref_count(param_default_parametors_245),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value312=__builtin_string("void come_free_object(void* mem)")))),(char*)come_increment_ref_count(((char*)(right_value313=__builtin_string("")))),info))));
        come_call_finalizer3(right_value311,sFun_finalize, 0, 1, 0, 0, (void*)0);
        right_value312 = come_decrement_ref_count2(right_value312, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value313 = come_decrement_ref_count2(right_value313, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value314,sFun_finalize, 0, 1, 0, 0, (void*)0);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value315=__builtin_string(name_239)))),(struct sFun*)come_increment_ref_count(main_fun_246));
        right_value315 = come_decrement_ref_count2(right_value315, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        name_239 = come_decrement_ref_count2(name_239, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_240,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_242,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_244,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_245,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_246,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_247=(char*)come_increment_ref_count(((char*)(right_value316=__builtin_string("come_memdup"))));
        right_value316 = come_decrement_ref_count2(right_value316, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_248=(struct sType*)come_increment_ref_count(((struct sType*)(right_value318=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value317=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 787, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer3(right_value317,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value318,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values11___249[0]=come_increment_ref_count(((struct sType*)(right_value320=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value319=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 788, "sType")))),"void*",(_Bool)0,info))));
__list_values11___249[1]=come_increment_ref_count(((struct sType*)(right_value322=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value321=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 788, "sType")))),"char*",(_Bool)0,info))));
__list_values11___249[2]=come_increment_ref_count(((struct sType*)(right_value324=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value323=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 788, "sType")))),"int",(_Bool)0,info))));
__list_values11___249[3]=come_increment_ref_count(((struct sType*)(right_value326=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value325=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 788, "sType")))),"char*",(_Bool)0,info))));
}        param_types_250=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value328=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value327=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 788, "struct list$1sTypeph")))),4,__list_values11___249))));
        come_call_finalizer3(right_value319,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value320,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value321,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value322,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value323,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value324,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value325,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value326,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value327,list$1sTypeph_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value328,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values12___251[0]=come_increment_ref_count(((char*)(right_value329=__builtin_string("block"))));
__list_values12___251[1]=come_increment_ref_count(((char*)(right_value330=__builtin_string("sname"))));
__list_values12___251[2]=come_increment_ref_count(((char*)(right_value331=__builtin_string("sline"))));
__list_values12___251[3]=come_increment_ref_count(((char*)(right_value332=__builtin_string("class_name"))));
}        param_names_252=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value334=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value333=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 789, "struct list$1charph")))),4,__list_values12___251))));
        right_value329 = come_decrement_ref_count2(right_value329, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value330 = come_decrement_ref_count2(right_value330, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value331 = come_decrement_ref_count2(right_value331, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value332 = come_decrement_ref_count2(right_value332, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value333,list$1charph_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value334,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        param_default_parametors_253=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value336=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value335=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 790, "list$1charph"))))))));
        come_call_finalizer3(right_value335,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value336,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        list$1charph_push_back(param_default_parametors_253,((void*)0));
        list$1charph_push_back(param_default_parametors_253,(char*)come_increment_ref_count(((char*)(right_value337=__builtin_string("null")))));
        right_value337 = come_decrement_ref_count2(right_value337, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        list$1charph_push_back(param_default_parametors_253,(char*)come_increment_ref_count(((char*)(right_value338=__builtin_string("0")))));
        right_value338 = come_decrement_ref_count2(right_value338, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        list$1charph_push_back(param_default_parametors_253,(char*)come_increment_ref_count(((char*)(right_value339=__builtin_string("null")))));
        right_value339 = come_decrement_ref_count2(right_value339, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        main_fun_254=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value343=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value340=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 795, "sFun")))),(char*)come_increment_ref_count(name_247),(struct sType*)come_increment_ref_count(result_type_248),(struct list$1sTypeph*)come_increment_ref_count(param_types_250),(struct list$1charph*)come_increment_ref_count(param_names_252),(struct list$1charph*)come_increment_ref_count(param_default_parametors_253),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value341=__builtin_string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")))),(char*)come_increment_ref_count(((char*)(right_value342=__builtin_string("")))),info))));
        come_call_finalizer3(right_value340,sFun_finalize, 0, 1, 0, 0, (void*)0);
        right_value341 = come_decrement_ref_count2(right_value341, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value342 = come_decrement_ref_count2(right_value342, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value343,sFun_finalize, 0, 1, 0, 0, (void*)0);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value344=__builtin_string(name_247)))),(struct sFun*)come_increment_ref_count(main_fun_254));
        right_value344 = come_decrement_ref_count2(right_value344, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        name_247 = come_decrement_ref_count2(name_247, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_248,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_250,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_252,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_253,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_254,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_255=(char*)come_increment_ref_count(((char*)(right_value345=__builtin_string("memset"))));
        right_value345 = come_decrement_ref_count2(right_value345, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_256=(struct sType*)come_increment_ref_count(((struct sType*)(right_value347=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value346=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 806, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer3(right_value346,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value347,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values13___257[0]=come_increment_ref_count(((struct sType*)(right_value349=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value348=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 807, "sType")))),"void*",(_Bool)0,info))));
__list_values13___257[1]=come_increment_ref_count(((struct sType*)(right_value351=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value350=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 807, "sType")))),"int",(_Bool)0,info))));
__list_values13___257[2]=come_increment_ref_count(((struct sType*)(right_value353=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value352=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 807, "sType")))),"long",(_Bool)0,info))));
}        param_types_258=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value355=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value354=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 807, "struct list$1sTypeph")))),3,__list_values13___257))));
        come_call_finalizer3(right_value348,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value349,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value350,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value351,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value352,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value353,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value354,list$1sTypeph_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value355,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values14___259[0]=come_increment_ref_count(((char*)(right_value356=__builtin_string("b"))));
__list_values14___259[1]=come_increment_ref_count(((char*)(right_value357=__builtin_string("c"))));
__list_values14___259[2]=come_increment_ref_count(((char*)(right_value358=__builtin_string("len"))));
}        param_names_260=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value360=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value359=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 808, "struct list$1charph")))),3,__list_values14___259))));
        right_value356 = come_decrement_ref_count2(right_value356, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value357 = come_decrement_ref_count2(right_value357, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value358 = come_decrement_ref_count2(right_value358, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value359,list$1charph_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value360,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        param_default_parametors_261=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value362=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value361=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 809, "list$1charph"))))))));
        come_call_finalizer3(right_value361,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value362,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        main_fun_262=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value366=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value363=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 810, "sFun")))),(char*)come_increment_ref_count(name_255),(struct sType*)come_increment_ref_count(result_type_256),(struct list$1sTypeph*)come_increment_ref_count(param_types_258),(struct list$1charph*)come_increment_ref_count(param_names_260),(struct list$1charph*)come_increment_ref_count(param_default_parametors_261),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value364=__builtin_string("void* memset(void* b, int c, size_t len)")))),(char*)come_increment_ref_count(((char*)(right_value365=__builtin_string("")))),info))));
        come_call_finalizer3(right_value363,sFun_finalize, 0, 1, 0, 0, (void*)0);
        right_value364 = come_decrement_ref_count2(right_value364, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value365 = come_decrement_ref_count2(right_value365, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value366,sFun_finalize, 0, 1, 0, 0, (void*)0);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value367=__builtin_string(name_255)))),(struct sFun*)come_increment_ref_count(main_fun_262));
        right_value367 = come_decrement_ref_count2(right_value367, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        name_255 = come_decrement_ref_count2(name_255, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_256,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_258,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_260,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_261,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_262,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_263=(char*)come_increment_ref_count(((char*)(right_value368=__builtin_string("__builtin_string"))));
        right_value368 = come_decrement_ref_count2(right_value368, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_264=(struct sType*)come_increment_ref_count(((struct sType*)(right_value370=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value369=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 821, "sType")))),"char*",(_Bool)0,info))));
        come_call_finalizer3(right_value369,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value370,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values15___265[0]=come_increment_ref_count(((struct sType*)(right_value372=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value371=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 822, "sType")))),"char*",(_Bool)0,info))));
}        param_types_266=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value374=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value373=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 822, "struct list$1sTypeph")))),1,__list_values15___265))));
        come_call_finalizer3(right_value371,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value372,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value373,list$1sTypeph_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value374,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values16___267[0]=come_increment_ref_count(((char*)(right_value375=__builtin_string("str"))));
}        param_names_268=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value377=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value376=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 823, "struct list$1charph")))),1,__list_values16___267))));
        right_value375 = come_decrement_ref_count2(right_value375, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value376,list$1charph_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value377,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        param_default_parametors_269=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value379=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value378=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 824, "list$1charph"))))))));
        come_call_finalizer3(right_value378,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value379,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        main_fun_270=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value383=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value380=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 825, "sFun")))),(char*)come_increment_ref_count(name_263),(struct sType*)come_increment_ref_count(result_type_264),(struct list$1sTypeph*)come_increment_ref_count(param_types_266),(struct list$1charph*)come_increment_ref_count(param_names_268),(struct list$1charph*)come_increment_ref_count(param_default_parametors_269),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value381=__builtin_string("char* __builtin_string(char* str)")))),(char*)come_increment_ref_count(((char*)(right_value382=__builtin_string("")))),info))));
        come_call_finalizer3(right_value380,sFun_finalize, 0, 1, 0, 0, (void*)0);
        right_value381 = come_decrement_ref_count2(right_value381, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value382 = come_decrement_ref_count2(right_value382, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value383,sFun_finalize, 0, 1, 0, 0, (void*)0);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value384=__builtin_string(name_263)))),(struct sFun*)come_increment_ref_count(main_fun_270));
        right_value384 = come_decrement_ref_count2(right_value384, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        name_263 = come_decrement_ref_count2(name_263, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_264,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_266,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_268,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_269,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_270,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_271=(char*)come_increment_ref_count(((char*)(right_value385=__builtin_string("come_heap_init"))));
        right_value385 = come_decrement_ref_count2(right_value385, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_272=(struct sType*)come_increment_ref_count(((struct sType*)(right_value387=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value386=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 836, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer3(right_value386,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value387,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values17___273[0]=come_increment_ref_count(((struct sType*)(right_value389=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value388=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 837, "sType")))),"int",(_Bool)0,info))));
__list_values17___273[1]=come_increment_ref_count(((struct sType*)(right_value391=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value390=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 837, "sType")))),"int",(_Bool)0,info))));
__list_values17___273[2]=come_increment_ref_count(((struct sType*)(right_value393=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value392=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 837, "sType")))),"int",(_Bool)0,info))));
}        param_types_274=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value395=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value394=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 837, "struct list$1sTypeph")))),3,__list_values17___273))));
        come_call_finalizer3(right_value388,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value389,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value390,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value391,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value392,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value393,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value394,list$1sTypeph_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value395,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values18___275[0]=come_increment_ref_count(((char*)(right_value396=xsprintf("come_malloc"))));
__list_values18___275[1]=come_increment_ref_count(((char*)(right_value397=xsprintf("come_debug"))));
__list_values18___275[2]=come_increment_ref_count(((char*)(right_value398=xsprintf("come_gc"))));
}        param_names_276=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value400=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value399=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 838, "struct list$1charph")))),3,__list_values18___275))));
        right_value396 = come_decrement_ref_count2(right_value396, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value397 = come_decrement_ref_count2(right_value397, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value398 = come_decrement_ref_count2(right_value398, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value399,list$1charph_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value400,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        param_default_parametors_277=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value402=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value401=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 839, "list$1charph"))))))));
        come_call_finalizer3(right_value401,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value402,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        list$1charph_push_back(param_default_parametors_277,((void*)0));
        main_fun_278=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value406=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value403=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 841, "sFun")))),(char*)come_increment_ref_count(name_271),(struct sType*)come_increment_ref_count(result_type_272),(struct list$1sTypeph*)come_increment_ref_count(param_types_274),(struct list$1charph*)come_increment_ref_count(param_names_276),(struct list$1charph*)come_increment_ref_count(param_default_parametors_277),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value404=__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")))),(char*)come_increment_ref_count(((char*)(right_value405=__builtin_string("")))),info))));
        come_call_finalizer3(right_value403,sFun_finalize, 0, 1, 0, 0, (void*)0);
        right_value404 = come_decrement_ref_count2(right_value404, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value405 = come_decrement_ref_count2(right_value405, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value406,sFun_finalize, 0, 1, 0, 0, (void*)0);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value407=__builtin_string(name_271)))),(struct sFun*)come_increment_ref_count(main_fun_278));
        right_value407 = come_decrement_ref_count2(right_value407, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        name_271 = come_decrement_ref_count2(name_271, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_272,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_274,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_276,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_277,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_278,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_279=(char*)come_increment_ref_count(((char*)(right_value408=__builtin_string("come_heap_final"))));
        right_value408 = come_decrement_ref_count2(right_value408, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_280=(struct sType*)come_increment_ref_count(((struct sType*)(right_value410=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value409=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 852, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer3(right_value409,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value410,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_types_281=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value412=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value411=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 853, "list$1sTypeph"))))))));
        come_call_finalizer3(right_value411,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value412,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
        param_names_282=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value414=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value413=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 854, "list$1charph"))))))));
        come_call_finalizer3(right_value413,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value414,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        param_default_parametors_283=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value416=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value415=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 855, "list$1charph"))))))));
        come_call_finalizer3(right_value415,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value416,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        main_fun_284=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value420=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value417=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 856, "sFun")))),(char*)come_increment_ref_count(name_279),(struct sType*)come_increment_ref_count(result_type_280),(struct list$1sTypeph*)come_increment_ref_count(param_types_281),(struct list$1charph*)come_increment_ref_count(param_names_282),(struct list$1charph*)come_increment_ref_count(param_default_parametors_283),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value418=__builtin_string("void come_heap_final()")))),(char*)come_increment_ref_count(((char*)(right_value419=__builtin_string("")))),info))));
        come_call_finalizer3(right_value417,sFun_finalize, 0, 1, 0, 0, (void*)0);
        right_value418 = come_decrement_ref_count2(right_value418, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value419 = come_decrement_ref_count2(right_value419, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value420,sFun_finalize, 0, 1, 0, 0, (void*)0);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value421=__builtin_string(name_279)))),(struct sFun*)come_increment_ref_count(main_fun_284));
        right_value421 = come_decrement_ref_count2(right_value421, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        name_279 = come_decrement_ref_count2(name_279, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_280,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_281,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_282,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_283,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_284,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_285=(char*)come_increment_ref_count(((char*)(right_value422=__builtin_string("come_null_check"))));
        right_value422 = come_decrement_ref_count2(right_value422, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_286=(struct sType*)come_increment_ref_count(((struct sType*)(right_value424=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value423=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 867, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer3(right_value423,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value424,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values19___287[0]=come_increment_ref_count(((struct sType*)(right_value426=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value425=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 868, "sType")))),"void*",(_Bool)0,info))));
__list_values19___287[1]=come_increment_ref_count(((struct sType*)(right_value428=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value427=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 868, "sType")))),"char*",(_Bool)0,info))));
__list_values19___287[2]=come_increment_ref_count(((struct sType*)(right_value430=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value429=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 868, "sType")))),"int",(_Bool)0,info))));
__list_values19___287[3]=come_increment_ref_count(((struct sType*)(right_value432=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value431=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 868, "sType")))),"int",(_Bool)0,info))));
}        param_types_288=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value434=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value433=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 868, "struct list$1sTypeph")))),4,__list_values19___287))));
        come_call_finalizer3(right_value425,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value426,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value427,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value428,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value429,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value430,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value431,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value432,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value433,list$1sTypeph_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value434,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values20___289[0]=come_increment_ref_count(((char*)(right_value435=__builtin_string("mem"))));
__list_values20___289[1]=come_increment_ref_count(((char*)(right_value436=__builtin_string("sname"))));
__list_values20___289[2]=come_increment_ref_count(((char*)(right_value437=__builtin_string("sline"))));
__list_values20___289[3]=come_increment_ref_count(((char*)(right_value438=__builtin_string("id"))));
}        param_names_290=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value440=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value439=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 869, "struct list$1charph")))),4,__list_values20___289))));
        right_value435 = come_decrement_ref_count2(right_value435, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value436 = come_decrement_ref_count2(right_value436, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value437 = come_decrement_ref_count2(right_value437, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value438 = come_decrement_ref_count2(right_value438, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value439,list$1charph_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value440,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        param_default_parametors_291=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value442=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value441=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 870, "list$1charph"))))))));
        come_call_finalizer3(right_value441,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value442,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        main_fun_292=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value446=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value443=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 871, "sFun")))),(char*)come_increment_ref_count(name_285),(struct sType*)come_increment_ref_count(result_type_286),(struct list$1sTypeph*)come_increment_ref_count(param_types_288),(struct list$1charph*)come_increment_ref_count(param_names_290),(struct list$1charph*)come_increment_ref_count(param_default_parametors_291),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value444=__builtin_string("void* come_null_check(void* mem, char* sname, int sline, int id)")))),(char*)come_increment_ref_count(((char*)(right_value445=__builtin_string("")))),info))));
        come_call_finalizer3(right_value443,sFun_finalize, 0, 1, 0, 0, (void*)0);
        right_value444 = come_decrement_ref_count2(right_value444, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value445 = come_decrement_ref_count2(right_value445, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value446,sFun_finalize, 0, 1, 0, 0, (void*)0);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value447=__builtin_string(name_285)))),(struct sFun*)come_increment_ref_count(main_fun_292));
        right_value447 = come_decrement_ref_count2(right_value447, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        name_285 = come_decrement_ref_count2(name_285, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_286,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_288,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_290,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_291,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_292,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_293=(char*)come_increment_ref_count(((char*)(right_value448=__builtin_string("__builtin_va_start"))));
        right_value448 = come_decrement_ref_count2(right_value448, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_294=(struct sType*)come_increment_ref_count(((struct sType*)(right_value450=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value449=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 882, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer3(right_value449,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value450,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_types_295=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value452=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value451=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 883, "list$1sTypeph"))))))));
        come_call_finalizer3(right_value451,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value452,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
        param_names_296=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value454=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value453=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 884, "list$1charph"))))))));
        come_call_finalizer3(right_value453,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value454,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        param_default_parametors_297=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value456=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value455=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 885, "list$1charph"))))))));
        come_call_finalizer3(right_value455,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value456,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        fun_298=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value460=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value457=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 886, "sFun")))),(char*)come_increment_ref_count(name_293),(struct sType*)come_increment_ref_count(result_type_294),(struct list$1sTypeph*)come_increment_ref_count(param_types_295),(struct list$1charph*)come_increment_ref_count(param_names_296),(struct list$1charph*)come_increment_ref_count(param_default_parametors_297),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value458=__builtin_string("void __builtin_va_start()")))),(char*)come_increment_ref_count(((char*)(right_value459=__builtin_string("")))),info))));
        come_call_finalizer3(right_value457,sFun_finalize, 0, 1, 0, 0, (void*)0);
        right_value458 = come_decrement_ref_count2(right_value458, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value459 = come_decrement_ref_count2(right_value459, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value460,sFun_finalize, 0, 1, 0, 0, (void*)0);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value461=__builtin_string(name_293)))),(struct sFun*)come_increment_ref_count(fun_298));
        right_value461 = come_decrement_ref_count2(right_value461, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        name_293 = come_decrement_ref_count2(name_293, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_294,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_295,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_296,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_297,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_298,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_299=(char*)come_increment_ref_count(((char*)(right_value462=__builtin_string("__builtin_va_end"))));
        right_value462 = come_decrement_ref_count2(right_value462, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_300=(struct sType*)come_increment_ref_count(((struct sType*)(right_value464=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value463=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 897, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer3(right_value463,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value464,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_types_301=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value466=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value465=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 898, "list$1sTypeph"))))))));
        come_call_finalizer3(right_value465,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value466,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
        param_names_302=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value468=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value467=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 899, "list$1charph"))))))));
        come_call_finalizer3(right_value467,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value468,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        param_default_parametors_303=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value470=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value469=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 900, "list$1charph"))))))));
        come_call_finalizer3(right_value469,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value470,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        fun_304=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value474=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value471=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 901, "sFun")))),(char*)come_increment_ref_count(name_299),(struct sType*)come_increment_ref_count(result_type_300),(struct list$1sTypeph*)come_increment_ref_count(param_types_301),(struct list$1charph*)come_increment_ref_count(param_names_302),(struct list$1charph*)come_increment_ref_count(param_default_parametors_303),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value472=__builtin_string("void __builtin_va_end()")))),(char*)come_increment_ref_count(((char*)(right_value473=__builtin_string("")))),info))));
        come_call_finalizer3(right_value471,sFun_finalize, 0, 1, 0, 0, (void*)0);
        right_value472 = come_decrement_ref_count2(right_value472, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value473 = come_decrement_ref_count2(right_value473, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value474,sFun_finalize, 0, 1, 0, 0, (void*)0);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value475=__builtin_string(name_299)))),(struct sFun*)come_increment_ref_count(fun_304));
        right_value475 = come_decrement_ref_count2(right_value475, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        name_299 = come_decrement_ref_count2(name_299, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_300,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_301,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_302,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_303,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_304,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__;
int i_158;
struct list$1sTypeph* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_158, 0, sizeof(int));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            for(            i_158=0;            i_158<num_value;            i_158++            ){
                list$1sTypeph_push_back(self,values[i_158]);
            }
            __result97__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result97__;
            come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
void* right_value187;
struct list_item$1sTypeph* litem_159;
struct sType* __dec_obj69;
void* right_value188;
struct list_item$1sTypeph* litem_160;
struct sType* __dec_obj70;
void* right_value189;
struct list_item$1sTypeph* litem_161;
struct sType* __dec_obj71;
struct list$1sTypeph* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value187 = (void*)0;
memset(&litem_159, 0, sizeof(struct list_item$1sTypeph*));
right_value188 = (void*)0;
memset(&litem_160, 0, sizeof(struct list_item$1sTypeph*));
right_value189 = (void*)0;
memset(&litem_161, 0, sizeof(struct list_item$1sTypeph*));
                    if(self->len==0) {
                        litem_159=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value187=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 219, "list_item$1sTypeph"))));
                        come_call_finalizer3(right_value187,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_159->prev=((void*)0);
                        litem_159->next=((void*)0);
                        __dec_obj69=litem_159->item;
                        litem_159->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_159;
                        self->head=litem_159;
                    }
                    else {
                        if(self->len==1) {
                            litem_160=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value188=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 229, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value188,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_160->prev=self->head;
                            litem_160->next=((void*)0);
                            __dec_obj70=litem_160->item;
                            litem_160->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_160;
                            self->head->next=litem_160;
                        }
                        else {
                            litem_161=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value189=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 239, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value189,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_161->prev=self->tail;
                            litem_161->next=((void*)0);
                            __dec_obj71=litem_161->item;
                            litem_161->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_161;
                            self->tail=litem_161;
                        }
                    }
                    self->len++;
                    __result96__ = __result_obj__ = self;
                    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                    return __result96__;
                    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__;
int i_164;
struct list$1charph* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_164, 0, sizeof(int));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            for(            i_164=0;            i_164<num_value;            i_164++            ){
                list$1charph_push_back(self,values[i_164]);
            }
            __result99__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result99__;
            come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
void* right_value197;
struct list_item$1charph* litem_165;
char* __dec_obj72;
void* right_value198;
struct list_item$1charph* litem_166;
char* __dec_obj73;
void* right_value199;
struct list_item$1charph* litem_167;
char* __dec_obj74;
struct list$1charph* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
right_value197 = (void*)0;
memset(&litem_165, 0, sizeof(struct list_item$1charph*));
right_value198 = (void*)0;
memset(&litem_166, 0, sizeof(struct list_item$1charph*));
right_value199 = (void*)0;
memset(&litem_167, 0, sizeof(struct list_item$1charph*));
                    if(self->len==0) {
                        litem_165=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value197=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 219, "list_item$1charph"))));
                        come_call_finalizer3(right_value197,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_165->prev=((void*)0);
                        litem_165->next=((void*)0);
                        __dec_obj72=litem_165->item;
                        litem_165->item=(char*)come_increment_ref_count(item);
                        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail=litem_165;
                        self->head=litem_165;
                    }
                    else {
                        if(self->len==1) {
                            litem_166=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value198=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 229, "list_item$1charph"))));
                            come_call_finalizer3(right_value198,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_166->prev=self->head;
                            litem_166->next=((void*)0);
                            __dec_obj73=litem_166->item;
                            litem_166->item=(char*)come_increment_ref_count(item);
                            __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_166;
                            self->head->next=litem_166;
                        }
                        else {
                            litem_167=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value199=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 239, "list_item$1charph"))));
                            come_call_finalizer3(right_value199,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_167->prev=self->tail;
                            litem_167->next=((void*)0);
                            __dec_obj74=litem_167->item;
                            litem_167->item=(char*)come_increment_ref_count(item);
                            __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail->next=litem_167;
                            self->tail=litem_167;
                        }
                    }
                    self->len++;
                    __result98__ = __result_obj__ = self;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result98__;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__;
unsigned int hash_188;
unsigned int it_189;
_Bool same_key_exist_206;
char* it2_209;
struct map$2charphsFunph* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_188, 0, sizeof(unsigned int));
memset(&it_189, 0, sizeof(unsigned int));
memset(&same_key_exist_206, 0, sizeof(_Bool));
memset(&it2_209, 0, sizeof(char*));
            if(self->len*10>=self->size) {
                map$2charphsFunph_rehash(self);
            }
            hash_188=string_get_hash_key(key)%self->size;
            it_189=hash_188;
            while((_Bool)1) {
                if(self->item_existance[it_189]) {
                    if(string_equals(self->keys[it_189],key)) {
                        if(1) {
                            list$1charp_remove(self->key_list,self->keys[it_189]);
                            self->keys[it_189] = come_decrement_ref_count2(self->keys[it_189], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            self->keys[it_189]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charp_remove(self->key_list,self->keys[it_189]);
                            self->keys[it_189]=key;
                        }
                        if(1) {
                            come_call_finalizer3(self->items[it_189],sFun_finalize, 0, 0, 0, 0, (void*)0);
                            self->items[it_189]=(struct sFun*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_189]=item;
                        }
                        break;
                    }
                    it_189++;
                    if(it_189>=self->size) {
                        it_189=0;
                    }
                    else {
                        if(it_189==hash_188) {
                            printf("unexpected error in map.insert\n");
                            stackframe();
                            exit(2);
                        }
                    }
                }
                else {
                    self->item_existance[it_189]=(_Bool)1;
                    if(1) {
                        self->keys[it_189]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_189]=key;
                    }
                    if(1) {
                        self->items[it_189]=(struct sFun*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_189]=item;
                    }
                    self->len++;
                    break;
                }
            }
            same_key_exist_206=(_Bool)0;
            for(            it2_209=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_209=list$1charp_next(self->key_list)            ){
                if(string_equals(it2_209,key)) {
                    same_key_exist_206=(_Bool)1;
                }
            }
            if(!same_key_exist_206) {
                list$1charp_push_back(self->key_list,key);
            }
            __result121__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result121__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sFun_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
int size_171;
void* right_value211;
char** keys_172;
void* right_value212;
struct sFun** items_173;
void* right_value213;
_Bool* item_existance_174;
int len_175;
char* it_178;
struct sFun* default_value_181;
struct sFun* it2_182;
unsigned int hash_185;
int n_186;
struct sFun* default_value_187;
memset(&size_171, 0, sizeof(int));
right_value211 = (void*)0;
memset(&keys_172, 0, sizeof(char**));
right_value212 = (void*)0;
memset(&items_173, 0, sizeof(struct sFun**));
right_value213 = (void*)0;
memset(&item_existance_174, 0, sizeof(_Bool*));
memset(&len_175, 0, sizeof(int));
memset(&it_178, 0, sizeof(char*));
memset(&default_value_181, 0, sizeof(struct sFun*));
memset(&it2_182, 0, sizeof(struct sFun*));
memset(&hash_185, 0, sizeof(unsigned int));
memset(&n_186, 0, sizeof(int));
memset(&default_value_187, 0, sizeof(struct sFun*));
                    size_171=self->size*10;
                    keys_172=(char**)come_increment_ref_count(((char**)(right_value211=(char**)come_calloc(1, sizeof(char*)*(1*(size_171)), "./neo-c.h", 1315, "char*%"))));
                    right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    items_173=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value212=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_171)), "./neo-c.h", 1316, "sFun*%"))));
                    come_call_finalizer3(right_value212,sFun_finalize, 0, 1, 0, 0, (void*)0);
                    item_existance_174=(_Bool*)come_increment_ref_count(((_Bool*)(right_value213=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_171)), "./neo-c.h", 1317, "bool"))));
                    right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    len_175=0;
                    for(                    it_178=map$2charphsFunph_begin(self);                    !map$2charphsFunph_end(self);                    it_178=map$2charphsFunph_next(self)                    ){
                        memset(&default_value_181,0,sizeof(struct sFun*));
                        it2_182=map$2charphsFunph_at(self,it_178,default_value_181);
                        hash_185=string_get_hash_key(it_178)%size_171;
                        n_186=hash_185;
                        while((_Bool)1) {
                            if(item_existance_174[n_186]) {
                                n_186++;
                                if(n_186>=size_171) {
                                    n_186=0;
                                }
                                else {
                                    if(n_186==hash_185) {
                                        printf("unexpected error in map.rehash(1)\n");
                                        stackframe();
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                item_existance_174[n_186]=(_Bool)1;
                                keys_172[n_186]=it_178;
                                items_173[n_186]=map$2charphsFunph_at(self,it_178,default_value_187);
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

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__;
char* result_176;
char* __result100__;
char* __result101__;
char* result_177;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_176, 0, sizeof(char*));
memset(&result_177, 0, sizeof(char*));
                        if(self==((void*)0)) {
                            memset(&result_176,0,sizeof(char*));
                            __result100__ = __result_obj__ = result_176;
                            return __result100__;
                        }
                        self->key_list->it=self->key_list->head;
                        if(self->key_list->it) {
                            __result101__ = __result_obj__ = self->key_list->it->item;
                            return __result101__;
                        }
                        memset(&result_177,0,sizeof(char*));
                        __result102__ = __result_obj__ = result_177;
                        return __result102__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
                        return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__;
char* result_179;
char* __result103__;
char* __result104__;
char* result_180;
char* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_179, 0, sizeof(char*));
memset(&result_180, 0, sizeof(char*));
                        if(self==((void*)0)||self->key_list->it==((void*)0)) {
                            memset(&result_179,0,sizeof(char*));
                            __result103__ = __result_obj__ = result_179;
                            return __result103__;
                        }
                        self->key_list->it=self->key_list->it->next;
                        if(self->key_list->it) {
                            __result104__ = __result_obj__ = self->key_list->it->item;
                            return __result104__;
                        }
                        memset(&result_180,0,sizeof(char*));
                        __result105__ = __result_obj__ = result_180;
                        return __result105__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_183;
unsigned int it_184;
struct sFun* __result106__;
struct sFun* __result107__;
struct sFun* __result108__;
struct sFun* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_183, 0, sizeof(unsigned int));
memset(&it_184, 0, sizeof(unsigned int));
                            hash_183=string_get_hash_key(((char*)key))%self->size;
                            it_184=hash_183;
                            while((_Bool)1) {
                                if(self->item_existance[it_184]) {
                                    if(string_equals(self->keys[it_184],key)) {
                                        __result106__ = __result_obj__ = self->items[it_184];
                                        come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result106__;
                                    }
                                    it_184++;
                                    if(it_184>=self->size) {
                                        it_184=0;
                                    }
                                    else {
                                        if(it_184==hash_183) {
                                            __result107__ = __result_obj__ = default_value;
                                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result107__;
                                        }
                                    }
                                }
                                else {
                                    __result108__ = __result_obj__ = default_value;
                                    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result108__;
                                }
                            }
                            __result109__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result109__;
                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_190;
struct list_item$1charp* it_191;
struct list$1charp* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_190, 0, sizeof(int));
memset(&it_191, 0, sizeof(struct list_item$1charp*));
                                it2_190=0;
                                it_191=self->head;
                                while(it_191!=((void*)0)) {
                                    if(string_equals(it_191->item,item)) {
                                        list$1charp_delete(self,it2_190,it2_190+1);
                                        break;
                                    }
                                    it2_190++;
                                    it_191=it_191->next;
                                }
                                __result113__ = __result_obj__ = self;
                                return __result113__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
int tmp_192;
struct list$1charp* __result110__;
struct list_item$1charp* it_195;
int i_196;
struct list_item$1charp* prev_it_197;
struct list_item$1charp* it_198;
int i_199;
struct list_item$1charp* prev_it_200;
struct list_item$1charp* it_201;
struct list_item$1charp* head_prev_it_202;
struct list_item$1charp* tail_it_203;
int i_204;
struct list_item$1charp* prev_it_205;
struct list$1charp* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_192, 0, sizeof(int));
memset(&it_195, 0, sizeof(struct list_item$1charp*));
memset(&i_196, 0, sizeof(int));
memset(&prev_it_197, 0, sizeof(struct list_item$1charp*));
memset(&it_198, 0, sizeof(struct list_item$1charp*));
memset(&i_199, 0, sizeof(int));
memset(&prev_it_200, 0, sizeof(struct list_item$1charp*));
memset(&it_201, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_202, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_203, 0, sizeof(struct list_item$1charp*));
memset(&i_204, 0, sizeof(int));
memset(&prev_it_205, 0, sizeof(struct list_item$1charp*));
                                            if(head<0) {
                                                head+=self->len;
                                            }
                                            if(tail<0) {
                                                tail+=self->len+1;
                                            }
                                            if(head>tail) {
                                                tmp_192=tail;
                                                tail=head;
                                                head=tmp_192;
                                            }
                                            if(head<0) {
                                                head=0;
                                            }
                                            if(tail>self->len) {
                                                tail=self->len;
                                            }
                                            if(head==tail) {
                                                __result110__ = __result_obj__ = self;
                                                return __result110__;
                                            }
                                            if(head==0&&tail==self->len) {
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                if(head==0) {
                                                    it_195=self->head;
                                                    i_196=0;
                                                    while(it_195!=((void*)0)) {
                                                        if(i_196<tail) {
                                                            prev_it_197=it_195;
                                                            it_195=it_195->next;
                                                            i_196++;
                                                            come_call_finalizer3(prev_it_197,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            if(i_196==tail) {
                                                                self->head=it_195;
                                                                self->head->prev=((void*)0);
                                                                break;
                                                            }
                                                            else {
                                                                it_195=it_195->next;
                                                                i_196++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    if(tail==self->len) {
                                                        it_198=self->head;
                                                        i_199=0;
                                                        while(it_198!=((void*)0)) {
                                                            if(i_199==head) {
                                                                self->tail=it_198->prev;
                                                                self->tail->next=((void*)0);
                                                            }
                                                            if(i_199>=head) {
                                                                prev_it_200=it_198;
                                                                it_198=it_198->next;
                                                                i_199++;
                                                                come_call_finalizer3(prev_it_200,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_198=it_198->next;
                                                                i_199++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        it_201=self->head;
                                                        head_prev_it_202=((void*)0);
                                                        tail_it_203=((void*)0);
                                                        i_204=0;
                                                        while(it_201!=((void*)0)) {
                                                            if(i_204==head) {
                                                                head_prev_it_202=it_201->prev;
                                                            }
                                                            if(i_204==tail) {
                                                                tail_it_203=it_201;
                                                            }
                                                            if(i_204>=head&&i_204<tail) {
                                                                prev_it_205=it_201;
                                                                it_201=it_201->next;
                                                                i_204++;
                                                                come_call_finalizer3(prev_it_205,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_201=it_201->next;
                                                                i_204++;
                                                            }
                                                        }
                                                        if(head_prev_it_202!=((void*)0)) {
                                                            head_prev_it_202->next=tail_it_203;
                                                        }
                                                        if(tail_it_203!=((void*)0)) {
                                                            tail_it_203->prev=head_prev_it_202;
                                                        }
                                                    }
                                                }
                                            }
                                            __result112__ = __result_obj__ = self;
                                            return __result112__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_193;
struct list_item$1charp* prev_it_194;
struct list$1charp* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_193, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_194, 0, sizeof(struct list_item$1charp*));
                                                    it_193=self->head;
                                                    while(it_193!=((void*)0)) {
                                                        prev_it_194=it_193;
                                                        it_193=it_193->next;
                                                        come_call_finalizer3(prev_it_194,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    self->head=((void*)0);
                                                    self->tail=((void*)0);
                                                    self->len=0;
                                                    __result111__ = __result_obj__ = self;
                                                    return __result111__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
char* result_207;
char* __result114__;
char* __result115__;
char* result_208;
char* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_207, 0, sizeof(char*));
memset(&result_208, 0, sizeof(char*));
                if(self==((void*)0)) {
                    memset(&result_207,0,sizeof(char*));
                    __result114__ = __result_obj__ = result_207;
                    return __result114__;
                }
                self->it=self->head;
                if(self->it) {
                    __result115__ = __result_obj__ = self->it->item;
                    return __result115__;
                }
                memset(&result_208,0,sizeof(char*));
                __result116__ = __result_obj__ = result_208;
                return __result116__;
}

static _Bool list$1charp_end(struct list$1charp* self){
                return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
char* result_210;
char* __result117__;
char* __result118__;
char* result_211;
char* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_210, 0, sizeof(char*));
memset(&result_211, 0, sizeof(char*));
                if(self==((void*)0)||self->it==((void*)0)) {
                    memset(&result_210,0,sizeof(char*));
                    __result117__ = __result_obj__ = result_210;
                    return __result117__;
                }
                self->it=self->it->next;
                if(self->it) {
                    __result118__ = __result_obj__ = self->it->item;
                    return __result118__;
                }
                memset(&result_211,0,sizeof(char*));
                __result119__ = __result_obj__ = result_211;
                return __result119__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
void* right_value214;
struct list_item$1charp* litem_212;
void* right_value215;
struct list_item$1charp* litem_213;
void* right_value216;
struct list_item$1charp* litem_214;
struct list$1charp* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
right_value214 = (void*)0;
memset(&litem_212, 0, sizeof(struct list_item$1charp*));
right_value215 = (void*)0;
memset(&litem_213, 0, sizeof(struct list_item$1charp*));
right_value216 = (void*)0;
memset(&litem_214, 0, sizeof(struct list_item$1charp*));
                    if(self->len==0) {
                        litem_212=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value214=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 219, "list_item$1charp"))));
                        come_call_finalizer3(right_value214,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_212->prev=((void*)0);
                        litem_212->next=((void*)0);
                        litem_212->item=item;
                        self->tail=litem_212;
                        self->head=litem_212;
                    }
                    else {
                        if(self->len==1) {
                            litem_213=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value215=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 229, "list_item$1charp"))));
                            come_call_finalizer3(right_value215,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_213->prev=self->head;
                            litem_213->next=((void*)0);
                            litem_213->item=item;
                            self->tail=litem_213;
                            self->head->next=litem_213;
                        }
                        else {
                            litem_214=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value216=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 239, "list_item$1charp"))));
                            come_call_finalizer3(right_value216,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_214->prev=self->tail;
                            litem_214->next=((void*)0);
                            litem_214->item=item;
                            self->tail->next=litem_214;
                            self->tail=litem_214;
                        }
                    }
                    self->len++;
                    __result120__ = __result_obj__ = self;
                    return __result120__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
char* source_head_305;
_Bool is_type_name_flag_306;
int sline_307;
_Bool define_struct_nobody_308;
char* p_309;
int sline_310;
void* right_value476;
char* word_311;
_Bool define_function_pointer_result_function_312;
_Bool define_variable_between_brace_313;
char* p_314;
void* right_value477;
struct tuple3$3sTypephcharphbool* multiple_assign_var1;
struct sType* result_type_315;
char* fun_name_316;
_Bool err_317;
void* right_value478;
char* word_318;
_Bool define_function_flag_319;
char* p_320;
void* right_value479;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* result_type_321;
char* fun_name_322;
_Bool err_323;
char* __dec_obj75;
char* word_324;
void* right_value480;
char* __dec_obj76;
void* right_value481;
char* __dec_obj77;
char* __dec_obj78;
void* right_value482;
char* __dec_obj79;
_Bool define_variable_325;
char* p_326;
void* right_value483;
struct tuple3$3sTypephcharphbool* multiple_assign_var3;
struct sType* result_type_327;
char* fun_name_328;
_Bool err_329;
void* right_value484;
char* word_330;
void* right_value485;
char* word_331;
char* p_332;
void* right_value486;
void* right_value487;
char* word_333;
void* right_value488;
char* __dec_obj80;
void* right_value489;
char* word_334;
void* right_value490;
char* word_337;
void* right_value491;
void* right_value492;
struct sNode* node_338;
struct sNode* __result123__;
void* right_value493;
struct sNode* __result124__;
char* header_head_339;
void* right_value494;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* result_type_340;
char* fun_name_341;
_Bool err_342;
void* right_value495;
void* right_value496;
struct list$1sTypeph* param_types_343;
void* right_value497;
void* right_value498;
struct list$1charph* param_names_344;
void* right_value499;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* param_type_345;
char* param_name_346;
_Bool err_347;
void* right_value500;
void* right_value501;
void* right_value502;
struct list$1sTypeph* param_types2_349;
void* right_value503;
void* right_value504;
struct list$1charph* param_names2_350;
void* right_value505;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* param_type_351;
char* param_name_352;
_Bool err_353;
void* right_value506;
char* header_tail_355;
void* right_value507;
void* right_value508;
struct sType* result_type2_356;
void* right_value509;
void* right_value510;
struct tuple1$1sTypeph* __dec_obj82;
void* right_value511;
struct list$1sTypeph* __dec_obj83;
void* right_value512;
struct list$1charph* __dec_obj84;
_Bool var_args_357;
void* right_value513;
void* right_value514;
struct buffer* header_buf_358;
void* right_value515;
void* right_value516;
struct list$1charph* param_default_parametors_359;
void* right_value517;
void* right_value518;
void* right_value519;
void* right_value520;
void* right_value521;
struct sFun* fun_360;
void* right_value522;
struct sFun* fun2_364;
void* right_value523;
void* right_value524;
void* right_value525;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* right_value560;
struct sNode* __result153__;
void* right_value561;
struct sNode* __result154__;
void* right_value562;
struct sNode* node_401;
char* source_tail_402;
void* right_value563;
void* right_value564;
struct buffer* header_403;
struct sNode* __result155__;
void* right_value565;
char* buf2_404;
void* right_value566;
struct sNode* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&source_head_305, 0, sizeof(char*));
memset(&is_type_name_flag_306, 0, sizeof(_Bool));
memset(&sline_307, 0, sizeof(int));
memset(&define_struct_nobody_308, 0, sizeof(_Bool));
memset(&p_309, 0, sizeof(char*));
memset(&sline_310, 0, sizeof(int));
right_value476 = (void*)0;
memset(&word_311, 0, sizeof(char*));
memset(&define_function_pointer_result_function_312, 0, sizeof(_Bool));
memset(&define_variable_between_brace_313, 0, sizeof(_Bool));
memset(&p_314, 0, sizeof(char*));
right_value477 = (void*)0;
right_value478 = (void*)0;
memset(&word_318, 0, sizeof(char*));
memset(&define_function_flag_319, 0, sizeof(_Bool));
memset(&p_320, 0, sizeof(char*));
right_value479 = (void*)0;
memset(&word_324, 0, sizeof(char*));
right_value480 = (void*)0;
right_value481 = (void*)0;
right_value482 = (void*)0;
memset(&define_variable_325, 0, sizeof(_Bool));
memset(&p_326, 0, sizeof(char*));
right_value483 = (void*)0;
right_value484 = (void*)0;
memset(&word_330, 0, sizeof(char*));
right_value485 = (void*)0;
memset(&word_331, 0, sizeof(char*));
memset(&p_332, 0, sizeof(char*));
right_value486 = (void*)0;
right_value487 = (void*)0;
memset(&word_333, 0, sizeof(char*));
right_value488 = (void*)0;
right_value489 = (void*)0;
memset(&word_334, 0, sizeof(char*));
right_value490 = (void*)0;
memset(&word_337, 0, sizeof(char*));
right_value491 = (void*)0;
right_value492 = (void*)0;
memset(&node_338, 0, sizeof(struct sNode*));
right_value493 = (void*)0;
memset(&header_head_339, 0, sizeof(char*));
right_value494 = (void*)0;
right_value495 = (void*)0;
right_value496 = (void*)0;
memset(&param_types_343, 0, sizeof(struct list$1sTypeph*));
right_value497 = (void*)0;
right_value498 = (void*)0;
memset(&param_names_344, 0, sizeof(struct list$1charph*));
right_value499 = (void*)0;
right_value500 = (void*)0;
right_value501 = (void*)0;
right_value502 = (void*)0;
memset(&param_types2_349, 0, sizeof(struct list$1sTypeph*));
right_value503 = (void*)0;
right_value504 = (void*)0;
memset(&param_names2_350, 0, sizeof(struct list$1charph*));
right_value505 = (void*)0;
right_value506 = (void*)0;
memset(&header_tail_355, 0, sizeof(char*));
right_value507 = (void*)0;
right_value508 = (void*)0;
memset(&result_type2_356, 0, sizeof(struct sType*));
right_value509 = (void*)0;
right_value510 = (void*)0;
right_value511 = (void*)0;
right_value512 = (void*)0;
memset(&var_args_357, 0, sizeof(_Bool));
right_value513 = (void*)0;
right_value514 = (void*)0;
memset(&header_buf_358, 0, sizeof(struct buffer*));
right_value515 = (void*)0;
right_value516 = (void*)0;
memset(&param_default_parametors_359, 0, sizeof(struct list$1charph*));
right_value517 = (void*)0;
right_value518 = (void*)0;
right_value519 = (void*)0;
right_value520 = (void*)0;
right_value521 = (void*)0;
memset(&fun_360, 0, sizeof(struct sFun*));
right_value522 = (void*)0;
memset(&fun2_364, 0, sizeof(struct sFun*));
right_value523 = (void*)0;
right_value524 = (void*)0;
right_value525 = (void*)0;
right_value560 = (void*)0;
right_value561 = (void*)0;
right_value562 = (void*)0;
memset(&node_401, 0, sizeof(struct sNode*));
memset(&source_tail_402, 0, sizeof(char*));
right_value563 = (void*)0;
right_value564 = (void*)0;
memset(&header_403, 0, sizeof(struct buffer*));
right_value565 = (void*)0;
memset(&buf2_404, 0, sizeof(char*));
right_value566 = (void*)0;
    source_head_305=info->p;
    is_type_name_flag_306=is_type_name(buf,info);
    sline_307=info->sline;
    define_struct_nobody_308=(_Bool)0;
    {
        p_309=info->p;
        sline_310=info->sline;
        if(charp_operator_equals(buf,"struct")) {
            if(xisalpha(*info->p)||*info->p==95) {
                word_311=(char*)come_increment_ref_count(((char*)(right_value476=parse_word(info))));
                right_value476 = come_decrement_ref_count2(right_value476, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(*info->p==59) {
                    define_struct_nobody_308=(_Bool)1;
                }
                word_311 = come_decrement_ref_count2(word_311, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=head;
        info->sline=sline_310;
    }
    define_function_pointer_result_function_312=(_Bool)0;
    define_variable_between_brace_313=(_Bool)0;
    if(is_type_name_flag_306) {
        p_314=info->p;
        info->p=head;
        if(xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(right_value477=backtrace_parse_type((_Bool)0,info)));
            result_type_315=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_316=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_317=multiple_assign_var1->v3;
            come_call_finalizer3(right_value477,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(*info->p!=42) {
                    define_function_pointer_result_function_312=(_Bool)1;
                    if(xisalpha(*info->p)||*info->p==95) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        word_318=(char*)come_increment_ref_count(((char*)(right_value478=parse_word(info))));
                        right_value478 = come_decrement_ref_count2(right_value478, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(!is_type_name(word_318,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(*info->p==40) {
                            }
                            else {
                                define_variable_between_brace_313=(_Bool)1;
                            }
                        }
                        word_318 = come_decrement_ref_count2(word_318, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer3(result_type_315,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_316 = come_decrement_ref_count2(fun_name_316, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=head;
        info->sline=sline_307;
    }
    define_function_flag_319=(_Bool)0;
    if(is_type_name_flag_306&&!define_function_pointer_result_function_312&&charp_operator_not_equals(buf,"__typeof__")) {
        p_320=info->p;
        info->p=head;
        if(xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(right_value479=backtrace_parse_type((_Bool)0,info)));
            result_type_321=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_322=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_323=multiple_assign_var2->v3;
            come_call_finalizer3(right_value479,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(result_type_321,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_322 = come_decrement_ref_count2(fun_name_322, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(!info->define_struct) {
            info->define_struct=(_Bool)0;
            __dec_obj75=word_324;
            word_324=((void*)0);
            __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(xisalnum(*info->p)||*info->p==95) {
                __dec_obj76=word_324;
                word_324=(char*)come_increment_ref_count(((char*)(right_value480=parse_word(info))));
                __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value480 = come_decrement_ref_count2(right_value480, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(string_operator_equals(word_324,"extern")) {
                    __dec_obj77=word_324;
                    word_324=(char*)come_increment_ref_count(((char*)(right_value481=parse_word(info))));
                    __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value481 = come_decrement_ref_count2(right_value481, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            else {
                __dec_obj78=word_324;
                word_324=((void*)0);
                __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(word_324) {
                if(is_type_name(word_324,info)) {
                    while(*info->p==42) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(*info->p==91&&*(info->p+1)==93) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                    }
                    if(*info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(*info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(xisalnum(*info->p)||*info->p==95) {
                        __dec_obj79=word_324;
                        word_324=(char*)come_increment_ref_count(((char*)(right_value482=parse_word(info))));
                        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value482 = come_decrement_ref_count2(right_value482, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                }
                if(strlen(word_324)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(is_type_name_flag_306) {
                        define_function_flag_319=(_Bool)1;
                    }
                }
            }
            word_324 = come_decrement_ref_count2(word_324, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_320;
        info->sline=sline_307;
    }
    define_variable_325=(_Bool)1;
    if(is_type_name_flag_306&&!define_function_pointer_result_function_312) {
        p_326=info->p;
        info->p=head;
        if(!is_type_name_flag_306) {
            define_variable_325=(_Bool)0;
        }
        if(xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(right_value483=backtrace_parse_type((_Bool)0,info)));
            result_type_327=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_328=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_329=multiple_assign_var3->v3;
            come_call_finalizer3(right_value483,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(*info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(xisalpha(*info->p)||*info->p==95) {
                        word_330=(char*)come_increment_ref_count(((char*)(right_value484=parse_word(info))));
                        right_value484 = come_decrement_ref_count2(right_value484, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(*info->p==40) {
                                define_variable_325=(_Bool)1;
                            }
                        }
                        word_330 = come_decrement_ref_count2(word_330, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    if(xisalpha(*info->p)||*info->p==95) {
                        word_331=(char*)come_increment_ref_count(((char*)(right_value485=parse_word(info))));
                        right_value485 = come_decrement_ref_count2(right_value485, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(!is_type_name(word_331,info)&&*info->p!=40) {
                                define_variable_325=(_Bool)1;
                            }
                        }
                        word_331 = come_decrement_ref_count2(word_331, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer3(result_type_327,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_328 = come_decrement_ref_count2(fun_name_328, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_325=(_Bool)0;
        }
        else {
            if(define_variable_325) {
            }
            else {
                if(!(xisalpha(*info->p)||*info->p==95)) {
                    define_variable_325=(_Bool)0;
                }
                while(xisalpha(*info->p)||*info->p==95) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                if(*info->p==40||*info->p==58) {
                    define_variable_325=(_Bool)0;
                }
            }
        }
        info->p=p_326;
        info->sline=sline_307;
    }
    else {
        define_variable_325=(_Bool)0;
    }
    {
        p_332=info->p;
        info->p=head;
        if(charp_operator_equals(buf,"struct")) {
            if(xisalpha(*info->p)||*info->p==95) {
                ((char*)(right_value486=parse_word(info)));
                right_value486 = come_decrement_ref_count2(right_value486, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(xisalpha(*info->p)||*info->p==95) {
                    word_333=(char*)come_increment_ref_count(((char*)(right_value487=parse_word(info))));
                    right_value487 = come_decrement_ref_count2(right_value487, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(xisalpha(*info->p)||*info->p==95) {
                        __dec_obj80=word_333;
                        word_333=(char*)come_increment_ref_count(((char*)(right_value488=parse_word(info))));
                        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value488 = come_decrement_ref_count2(right_value488, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(string_operator_equals(word_333,"extends")) {
                            define_variable_325=(_Bool)0;
                        }
                    }
                    word_333 = come_decrement_ref_count2(word_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        if(info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_325=(_Bool)0;
        }
        else {
            if(define_variable_325) {
            }
            else {
                if(!(xisalpha(*info->p)||*info->p==95)) {
                    define_variable_325=(_Bool)0;
                }
                while(xisalpha(*info->p)||*info->p==95) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                if(*info->p==40||*info->p==58) {
                    define_variable_325=(_Bool)0;
                }
            }
        }
        info->p=p_332;
        info->sline=sline_307;
    }
    if(charp_operator_equals(buf,"template")) {
        word_334=(char*)come_increment_ref_count(((char*)(right_value489=parse_word(info))));
        right_value489 = come_decrement_ref_count2(right_value489, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(*info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1charph_reset(info->method_generics_type_names);
            while((_Bool)1) {
                if(*info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else {
                    if(*info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        if(*info->p==0) {
                            err_msg(info,"unexpected source end");
                            exit(2);
                        }
                        else {
                            word_337=(char*)come_increment_ref_count(((char*)(right_value490=parse_word(info))));
                            right_value490 = come_decrement_ref_count2(right_value490, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value491=string_clone(word_337)))));
                            right_value491 = come_decrement_ref_count2(right_value491, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            word_337 = come_decrement_ref_count2(word_337, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
            node_338=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value492=parse_function(info))));
            if(right_value492) { right_value492 = come_decrement_ref_count2(right_value492, ((struct sNode*)right_value492)->finalize, ((struct sNode*)right_value492)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            list$1charph_reset(info->method_generics_type_names);
            __result123__ = __result_obj__ = node_338;
            if(node_338) { node_338 = come_decrement_ref_count2(node_338, ((struct sNode*)node_338)->finalize, ((struct sNode*)node_338)->_protocol_obj, 0, 1, 0, (void*)0); } 
            word_334 = come_decrement_ref_count2(word_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result123__;
            if(node_338) { node_338 = come_decrement_ref_count2(node_338, ((struct sNode*)node_338)->finalize, ((struct sNode*)node_338)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        word_334 = come_decrement_ref_count2(word_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(define_struct_nobody_308) {
        }
        else {
            if(define_variable_between_brace_313) {
                info->p=head;
                info->sline=sline_307;
                __result124__ = __result_obj__ = ((struct sNode*)(right_value493=parse_global_variable(info)));
                if(right_value493) { right_value493 = come_decrement_ref_count2(right_value493, ((struct sNode*)right_value493)->finalize, ((struct sNode*)right_value493)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result124__;
            }
            else {
                if(define_function_pointer_result_function_312) {
                    header_head_339=info->p;
                    multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value494=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                    result_type_340=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                    fun_name_341=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    err_342=multiple_assign_var4->v3;
                    come_call_finalizer3(right_value494,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(*info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        param_types_343=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value496=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value495=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1225, "list$1sTypeph"))))))));
                        come_call_finalizer3(right_value495,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value496,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        param_names_344=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value498=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value497=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1226, "list$1charph"))))))));
                        come_call_finalizer3(right_value497,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value498,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else {
                            while((_Bool)1) {
                                multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value499=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                param_type_345=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                                param_name_346=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                                err_347=multiple_assign_var5->v3;
                                come_call_finalizer3(right_value499,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                if(!err_347) {
                                    err_msg(info,"parse_type is failed");
                                    exit(2);
                                }
                                list$1sTypeph_push_back(param_types_343,(struct sType*)come_increment_ref_count(param_type_345));
                                static int num_function_pointer_result_var_name_a_348=0;
                                list$1charph_push_back(param_names_344,(char*)come_increment_ref_count(((char*)(right_value500=xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_348)))));
                                right_value500 = come_decrement_ref_count2(right_value500, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                if(*info->p==44) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                }
                                else {
                                    if(*info->p==41) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                        come_call_finalizer3(param_type_345,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        param_name_346 = come_decrement_ref_count2(param_name_346, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        break;
                                    }
                                    else {
                                        err_msg(info,"require , or )");
                                        exit(2);
                                    }
                                }
                                come_call_finalizer3(param_type_345,sType_finalize, 0, 0, 0, 0, (void*)0);
                                param_name_346 = come_decrement_ref_count2(param_name_346, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        expected_next_character(41,info);
                        if(*info->p==40) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            param_types2_349=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value502=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value501=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1268, "list$1sTypeph"))))))));
                            come_call_finalizer3(right_value501,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value502,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            param_names2_350=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value504=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value503=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1269, "list$1charph"))))))));
                            come_call_finalizer3(right_value503,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value504,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            if(*info->p==41) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            else {
                                while((_Bool)1) {
                                    multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(right_value505=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                    param_type_351=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                                    param_name_352=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                                    err_353=multiple_assign_var6->v3;
                                    come_call_finalizer3(right_value505,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(!err_353) {
                                        err_msg(info,"parse_type is failed");
                                        exit(2);
                                    }
                                    list$1sTypeph_push_back(param_types2_349,(struct sType*)come_increment_ref_count(param_type_351));
                                    static int num_function_pointer_result_var_name_b_354=0;
                                    list$1charph_push_back(param_names2_350,(char*)come_increment_ref_count(((char*)(right_value506=xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_354)))));
                                    right_value506 = come_decrement_ref_count2(right_value506, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    if(*info->p==44) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                    }
                                    else {
                                        if(*info->p==41) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                            come_call_finalizer3(param_type_351,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            param_name_352 = come_decrement_ref_count2(param_name_352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            break;
                                        }
                                        else {
                                            err_msg(info,"require , or )");
                                            exit(2);
                                        }
                                    }
                                    come_call_finalizer3(param_type_351,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    param_name_352 = come_decrement_ref_count2(param_name_352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                            }
                            header_tail_355=info->p;
                            result_type2_356=(struct sType*)come_increment_ref_count(((struct sType*)(right_value508=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value507=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1307, "sType")))),"lambda",(_Bool)0,info))));
                            come_call_finalizer3(right_value507,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value508,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            __dec_obj82=result_type2_356->mResultType;
                            result_type2_356->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value510=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value509=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function.c", 1309, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_340)))));
                            come_call_finalizer3(__dec_obj82,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value509,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value510,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            __dec_obj83=result_type2_356->mParamTypes;
                            result_type2_356->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value511=list$1sTypephp_clone(param_types2_349))));
                            come_call_finalizer3(__dec_obj83,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value511,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            __dec_obj84=result_type2_356->mParamNames;
                            result_type2_356->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value512=list$1charphp_clone(param_names2_350))));
                            come_call_finalizer3(__dec_obj84,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value512,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            result_type2_356->mVarArgs=(_Bool)0;
                            result_type2_356->mStatic=(_Bool)0;
                            var_args_357=(_Bool)0;
                            header_buf_358=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value514=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value513=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1317, "buffer"))))))));
                            come_call_finalizer3(right_value513,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value514,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            buffer_append(header_buf_358,header_head_339,header_tail_355-header_head_339);
                            buffer_append_char(header_buf_358,0);
                            param_default_parametors_359=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value516=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value515=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1321, "list$1charph"))))))));
                            come_call_finalizer3(right_value515,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value516,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            fun_360=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value521=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value517=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1323, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value518=__builtin_string(fun_name_341)))),(struct sType*)come_increment_ref_count(result_type2_356),(struct list$1sTypeph*)come_increment_ref_count(param_types_343),(struct list$1charph*)come_increment_ref_count(param_names_344),(struct list$1charph*)come_increment_ref_count(param_default_parametors_359),(_Bool)1,var_args_357,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value519=buffer_to_string(header_buf_358)))),(char*)come_increment_ref_count(((char*)(right_value520=__builtin_string(info->sname)))),info))));
                            come_call_finalizer3(right_value517,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                            right_value518 = come_decrement_ref_count2(right_value518, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value519 = come_decrement_ref_count2(right_value519, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value520 = come_decrement_ref_count2(right_value520, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value521,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                            fun2_364=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value522=__builtin_string(fun_name_341))));
                            right_value522 = come_decrement_ref_count2(right_value522, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(fun2_364==((void*)0)||fun2_364->mExternal) {
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value523=string_clone(fun_name_341)))),(struct sFun*)come_increment_ref_count(fun_360));
                                right_value523 = come_decrement_ref_count2(right_value523, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1335, "struct sNode");
                            _inf_obj_value2=come_increment_ref_count(((struct sFunNode*)(right_value525=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value524=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1335, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_360),info))));
                            _inf_value2->_protocol_obj=_inf_obj_value2;
                            _inf_value2->finalize=(void*)sFunNode_finalize;
                            _inf_value2->clone=(void*)sFunNode_clone;
                            _inf_value2->compile=(void*)sFunNode_compile;
                            _inf_value2->sline=(void*)sNodeBase_sline;
                            _inf_value2->sname=(void*)sNodeBase_sname;
                            _inf_value2->terminated=(void*)sNodeBase_terminated;
                            _inf_value2->kind=(void*)sFunNode_kind;
                            __result153__ = __result_obj__ = ((struct sNode*)(right_value560=_inf_value2));
                            come_call_finalizer3(param_types2_349,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_names2_350,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type2_356,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_buf_358,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_default_parametors_359,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(fun_360,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_343,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_names_344,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type_340,sType_finalize, 0, 0, 0, 0, (void*)0);
                            fun_name_341 = come_decrement_ref_count2(fun_name_341, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value524,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value525,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value560) { right_value560 = come_decrement_ref_count2(right_value560, ((struct sNode*)right_value560)->finalize, ((struct sNode*)right_value560)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result153__;
                            come_call_finalizer3(param_types2_349,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_names2_350,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type2_356,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_buf_358,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_default_parametors_359,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(fun_360,sFun_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            err_msg(info,"require (");
                            exit(2);
                        }
                        come_call_finalizer3(param_types_343,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_names_344,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(result_type_340,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_341 = come_decrement_ref_count2(fun_name_341, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(define_function_flag_319) {
                        info->p=head;
                        info->sline=sline_307;
                        __result154__ = __result_obj__ = ((struct sNode*)(right_value561=parse_function(info)));
                        if(right_value561) { right_value561 = come_decrement_ref_count2(right_value561, ((struct sNode*)right_value561)->finalize, ((struct sNode*)right_value561)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result154__;
                    }
                    else {
                        if(define_variable_325) {
                            info->p=head;
                            info->sline=sline_307;
                            node_401=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value562=parse_global_variable(info))));
                            if(right_value562) { right_value562 = come_decrement_ref_count2(right_value562, ((struct sNode*)right_value562)->finalize, ((struct sNode*)right_value562)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            source_tail_402=info->p;
                            header_403=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value564=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value563=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1357, "buffer"))))))));
                            come_call_finalizer3(right_value563,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value564,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            buffer_append(header_403,source_head_305,source_tail_402-source_head_305);
                            __result155__ = __result_obj__ = node_401;
                            if(node_401) { node_401 = come_decrement_ref_count2(node_401, ((struct sNode*)node_401)->finalize, ((struct sNode*)node_401)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            come_call_finalizer3(header_403,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            return __result155__;
                            if(node_401) { node_401 = come_decrement_ref_count2(node_401, ((struct sNode*)node_401)->finalize, ((struct sNode*)node_401)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(header_403,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
        }
    }
    info->p=head;
    info->sline=sline_307;
    buf2_404=(char*)come_increment_ref_count(((char*)(right_value565=parse_word(info))));
    right_value565 = come_decrement_ref_count2(right_value565, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result156__ = __result_obj__ = ((struct sNode*)(right_value566=top_level_v98(buf2_404,head,head_sline,info)));
    buf2_404 = come_decrement_ref_count2(buf2_404, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(right_value566) { right_value566 = come_decrement_ref_count2(right_value566, ((struct sNode*)right_value566)->finalize, ((struct sNode*)right_value566)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result156__;
    buf2_404 = come_decrement_ref_count2(buf2_404, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                    come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(self!=((void*)0)&&self->v2!=((void*)0)) {
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_335;
struct list_item$1charph* prev_it_336;
struct list$1charph* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_335, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_336, 0, sizeof(struct list_item$1charph*));
                it_335=self->head;
                while(it_335!=((void*)0)) {
                    prev_it_336=it_335;
                    it_335=it_335->next;
                    come_call_finalizer3(prev_it_336,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result122__ = __result_obj__ = self;
                return __result122__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj81;
struct tuple1$1sTypeph* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
                                __dec_obj81=self->v1;
                                self->v1=(struct sType*)come_increment_ref_count(v1);
                                come_call_finalizer3(__dec_obj81,sType_finalize, 0, 0, 0, 0, (void*)0);
                                __result125__ = __result_obj__ = self;
                                come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                                come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                                return __result125__;
                                come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                                come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_361;
unsigned int hash_362;
unsigned int it_363;
struct sFun* __result126__;
struct sFun* __result127__;
struct sFun* __result128__;
struct sFun* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_361, 0, sizeof(struct sFun*));
memset(&hash_362, 0, sizeof(unsigned int));
memset(&it_363, 0, sizeof(unsigned int));
                                memset(&default_value_361,0,sizeof(struct sFun*));
                                hash_362=string_get_hash_key(((char*)key))%self->size;
                                it_363=hash_362;
                                while((_Bool)1) {
                                    if(self->item_existance[it_363]) {
                                        if(string_equals(self->keys[it_363],key)) {
                                            __result126__ = __result_obj__ = self->items[it_363];
                                            come_call_finalizer3(default_value_361,sFun_finalize, 0, 0, 0, 0, (void*)0);
                                            return __result126__;
                                        }
                                        it_363++;
                                        if(it_363>=self->size) {
                                            it_363=0;
                                        }
                                        else {
                                            if(it_363==hash_362) {
                                                __result127__ = __result_obj__ = default_value_361;
                                                come_call_finalizer3(default_value_361,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result127__;
                                            }
                                        }
                                    }
                                    else {
                                        __result128__ = __result_obj__ = default_value_361;
                                        come_call_finalizer3(default_value_361,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result128__;
                                    }
                                }
                                __result129__ = __result_obj__ = default_value_361;
                                come_call_finalizer3(default_value_361,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result129__;
                                come_call_finalizer3(default_value_361,sFun_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sFun* sFun_clone(struct sFun* self){
void* __result_obj__;
struct sFun* __result131__;
void* right_value528;
struct sFun* result_366;
void* right_value529;
char* __dec_obj86;
void* right_value530;
struct sType* __dec_obj87;
void* right_value531;
struct list$1sTypeph* __dec_obj88;
void* right_value532;
struct list$1charph* __dec_obj89;
void* right_value533;
struct list$1charph* __dec_obj90;
void* right_value534;
struct sType* __dec_obj91;
void* right_value552;
struct sBlock* __dec_obj97;
void* right_value553;
struct buffer* __dec_obj98;
void* right_value554;
struct buffer* __dec_obj99;
void* right_value555;
struct buffer* __dec_obj100;
void* right_value556;
struct buffer* __dec_obj101;
void* right_value557;
char* __dec_obj102;
void* right_value558;
char* __dec_obj103;
struct sFun* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
right_value528 = (void*)0;
memset(&result_366, 0, sizeof(struct sFun*));
right_value529 = (void*)0;
right_value530 = (void*)0;
right_value531 = (void*)0;
right_value532 = (void*)0;
right_value533 = (void*)0;
right_value534 = (void*)0;
right_value552 = (void*)0;
right_value553 = (void*)0;
right_value554 = (void*)0;
right_value555 = (void*)0;
right_value556 = (void*)0;
right_value557 = (void*)0;
right_value558 = (void*)0;
                                        if(self==(void*)0) {
                                            __result131__ = __result_obj__ = (void*)0;
                                            return __result131__;
                                        }
                                        result_366=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value528=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "sFun"))));
                                        come_call_finalizer3(right_value528,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(self!=((void*)0)&&self->mName!=((void*)0)) {
                                            __dec_obj86=result_366->mName;
                                            result_366->mName=(char*)come_increment_ref_count(((char*)(right_value529=string_clone(self->mName))));
                                            __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value529 = come_decrement_ref_count2(right_value529, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                                            __dec_obj87=result_366->mResultType;
                                            result_366->mResultType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value530=sType_clone(self->mResultType))));
                                            come_call_finalizer3(__dec_obj87,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value530,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                                            __dec_obj88=result_366->mParamTypes;
                                            result_366->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value531=list$1sTypephp_clone(self->mParamTypes))));
                                            come_call_finalizer3(__dec_obj88,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value531,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                                            __dec_obj89=result_366->mParamNames;
                                            result_366->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value532=list$1charphp_clone(self->mParamNames))));
                                            come_call_finalizer3(__dec_obj89,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value532,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
                                            __dec_obj90=result_366->mParamDefaultParametors;
                                            result_366->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value533=list$1charphp_clone(self->mParamDefaultParametors))));
                                            come_call_finalizer3(__dec_obj90,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value533,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
                                            __dec_obj91=result_366->mLambdaType;
                                            result_366->mLambdaType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value534=sType_clone(self->mLambdaType))));
                                            come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value534,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
                                            __dec_obj97=result_366->mBlock;
                                            result_366->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value552=sBlock_clone(self->mBlock))));
                                            come_call_finalizer3(__dec_obj97,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value552,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(self!=((void*)0)) {
                                            result_366->mExternal=self->mExternal;
                                        }
                                        if(self!=((void*)0)) {
                                            result_366->mVarArgs=self->mVarArgs;
                                        }
                                        if(self!=((void*)0)&&self->mSource!=((void*)0)) {
                                            __dec_obj98=result_366->mSource;
                                            result_366->mSource=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value553=buffer_clone(self->mSource))));
                                            come_call_finalizer3(__dec_obj98,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value553,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
                                            __dec_obj99=result_366->mSourceHead;
                                            result_366->mSourceHead=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value554=buffer_clone(self->mSourceHead))));
                                            come_call_finalizer3(__dec_obj99,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value554,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
                                            __dec_obj100=result_366->mSourceHead2;
                                            result_366->mSourceHead2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value555=buffer_clone(self->mSourceHead2))));
                                            come_call_finalizer3(__dec_obj100,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value555,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
                                            __dec_obj101=result_366->mSourceDefer;
                                            result_366->mSourceDefer=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value556=buffer_clone(self->mSourceDefer))));
                                            come_call_finalizer3(__dec_obj101,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value556,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(self!=((void*)0)) {
                                            result_366->mStatic=self->mStatic;
                                        }
                                        if(self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
                                            __dec_obj102=result_366->mComeHeader;
                                            result_366->mComeHeader=(char*)come_increment_ref_count(((char*)(right_value557=string_clone(self->mComeHeader))));
                                            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value557 = come_decrement_ref_count2(right_value557, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        if(self!=((void*)0)) {
                                            result_366->mCloner=self->mCloner;
                                        }
                                        if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
                                            __dec_obj103=result_366->mDeclareSName;
                                            result_366->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value558=string_clone(self->mDeclareSName))));
                                            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value558 = come_decrement_ref_count2(right_value558, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        if(self!=((void*)0)) {
                                            result_366->mNoResultType=self->mNoResultType;
                                        }
                                        if(self!=((void*)0)) {
                                            result_366->mDeclaredResultObject=self->mDeclaredResultObject;
                                        }
                                        __result151__ = __result_obj__ = result_366;
                                        come_call_finalizer3(result_366,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result151__;
                                        come_call_finalizer3(result_366,sFun_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
struct sBlock* __result132__;
void* right_value535;
struct sBlock* result_367;
void* right_value536;
struct list$1sNodeph* __dec_obj92;
void* right_value551;
struct sVarTable* __dec_obj96;
struct sBlock* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
right_value535 = (void*)0;
memset(&result_367, 0, sizeof(struct sBlock*));
right_value536 = (void*)0;
right_value551 = (void*)0;
                                                if(self==(void*)0) {
                                                    __result132__ = __result_obj__ = (void*)0;
                                                    return __result132__;
                                                }
                                                result_367=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value535=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"))));
                                                come_call_finalizer3(right_value535,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
                                                if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
                                                    __dec_obj92=result_367->mNodes;
                                                    result_367->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value536=list$1sNodephp_clone(self->mNodes))));
                                                    come_call_finalizer3(__dec_obj92,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer3(right_value536,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                }
                                                if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
                                                    __dec_obj96=result_367->mVarTable;
                                                    result_367->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value551=sVarTable_clone(self->mVarTable))));
                                                    come_call_finalizer3(__dec_obj96,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer3(right_value551,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                                                }
                                                __result150__ = __result_obj__ = result_367;
                                                come_call_finalizer3(result_367,sBlock_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result150__;
                                                come_call_finalizer3(result_367,sBlock_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
struct sVarTable* __result133__;
void* right_value537;
struct sVarTable* result_368;
void* right_value550;
struct map$2charphsVarph* __dec_obj95;
struct sVarTable* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
right_value537 = (void*)0;
memset(&result_368, 0, sizeof(struct sVarTable*));
right_value550 = (void*)0;
                                                        if(self==(void*)0) {
                                                            __result133__ = __result_obj__ = (void*)0;
                                                            return __result133__;
                                                        }
                                                        result_368=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value537=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"))));
                                                        come_call_finalizer3(right_value537,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                                                        if(self!=((void*)0)&&self->mVars!=((void*)0)) {
                                                            __dec_obj95=result_368->mVars;
                                                            result_368->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value550=map$2charphsVarphp_clone(self->mVars))));
                                                            come_call_finalizer3(__dec_obj95,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer3(right_value550,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        }
                                                        if(self!=((void*)0)) {
                                                            result_368->mGlobal=self->mGlobal;
                                                        }
                                                        if(self!=((void*)0)) {
                                                            result_368->mParent=self->mParent;
                                                        }
                                                        if(self!=((void*)0)) {
                                                            result_368->mID=self->mID;
                                                        }
                                                        __result149__ = __result_obj__ = result_368;
                                                        come_call_finalizer3(result_368,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
                                                        return __result149__;
                                                        come_call_finalizer3(result_368,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
struct map$2charphsVarph* __result134__;
void* right_value538;
void* right_value544;
struct map$2charphsVarph* result_374;
void* right_value545;
void* right_value546;
struct list$1charp* __dec_obj94;
char* it_377;
struct sVar* default_value_380;
struct sVar* it2_383;
struct map$2charphsVarph* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
right_value538 = (void*)0;
right_value544 = (void*)0;
memset(&result_374, 0, sizeof(struct map$2charphsVarph*));
right_value545 = (void*)0;
right_value546 = (void*)0;
memset(&it_377, 0, sizeof(char*));
memset(&default_value_380, 0, sizeof(struct sVar*));
memset(&it2_383, 0, sizeof(struct sVar*));
                                                                if(self==((void*)0)) {
                                                                    __result134__ = __result_obj__ = ((void*)0);
                                                                    return __result134__;
                                                                }
                                                                result_374=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value544=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value538=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./neo-c.h", 1158, "map$2charphsVarph"))))))));
                                                                come_call_finalizer3(right_value538,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                come_call_finalizer3(right_value544,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                __dec_obj94=result_374->key_list;
                                                                result_374->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value546=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value545=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1160, "list$1charp"))))))));
                                                                come_call_finalizer3(__dec_obj94,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer3(right_value545,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                come_call_finalizer3(right_value546,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                for(                                                                it_377=map$2charphsVarph_begin(self);                                                                !map$2charphsVarph_end(self);                                                                it_377=map$2charphsVarph_next(self)                                                                ){
                                                                    memset(&default_value_380,0,sizeof(struct sVar*));
                                                                    it2_383=map$2charphsVarph_at(self,it_377,default_value_380);
                                                                    map$2charphsVarph_insert2(result_374,it_377,it2_383);
                                                                }
                                                                __result148__ = __result_obj__ = result_374;
                                                                come_call_finalizer3(result_374,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
                                                                return __result148__;
                                                                come_call_finalizer3(result_374,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
void* right_value539;
void* right_value540;
void* right_value541;
int i_369;
void* right_value542;
void* right_value543;
struct list$1charp* __dec_obj93;
struct map$2charphsVarph* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
right_value539 = (void*)0;
right_value540 = (void*)0;
right_value541 = (void*)0;
memset(&i_369, 0, sizeof(int));
right_value542 = (void*)0;
right_value543 = (void*)0;
                                                                    self->keys=(char**)come_increment_ref_count(((char**)(right_value539=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1064, "char*%"))));
                                                                    right_value539 = come_decrement_ref_count2(right_value539, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value540=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./neo-c.h", 1065, "sVar*%"))));
                                                                    come_call_finalizer3(right_value540,sVar_finalize, 0, 1, 0, 0, __result_obj__);
                                                                    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value541=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1066, "bool"))));
                                                                    right_value541 = come_decrement_ref_count2(right_value541, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    for(                                                                    i_369=0;                                                                    i_369<128;                                                                    i_369++                                                                    ){
                                                                        self->item_existance[i_369]=(_Bool)0;
                                                                    }
                                                                    self->size=128;
                                                                    self->len=0;
                                                                    __dec_obj93=self->key_list;
                                                                    self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value543=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value542=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1076, "list$1charp"))))))));
                                                                    come_call_finalizer3(__dec_obj93,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
                                                                    come_call_finalizer3(right_value542,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                    come_call_finalizer3(right_value543,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                    self->it=0;
                                                                    __result136__ = __result_obj__ = self;
                                                                    come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
                                                                    return __result136__;
                                                                    come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
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

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
                                                                        self->head=((void*)0);
                                                                        self->tail=((void*)0);
                                                                        self->len=0;
                                                                        __result135__ = __result_obj__ = self;
                                                                        come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
                                                                        return __result135__;
                                                                        come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_370;
struct list_item$1charp* prev_it_371;
memset(&it_370, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_371, 0, sizeof(struct list_item$1charp*));
                                                                            it_370=self->head;
                                                                            while(it_370!=((void*)0)) {
                                                                                prev_it_371=it_370;
                                                                                it_370=it_370->next;
                                                                                come_call_finalizer3(prev_it_371,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_372;
int i_373;
memset(&i_372, 0, sizeof(int));
memset(&i_373, 0, sizeof(int));
                                                                        for(                                                                        i_372=0;                                                                        i_372<self->size;                                                                        i_372++                                                                        ){
                                                                            if(self->item_existance[i_372]) {
                                                                                if(1) {
                                                                                    come_call_finalizer3(self->items[i_372],sVar_finalize, 0, 0, 0, 0, (void*)0);
                                                                                }
                                                                            }
                                                                        }
                                                                        come_free((char*)self->items);
                                                                        for(                                                                        i_373=0;                                                                        i_373<self->size;                                                                        i_373++                                                                        ){
                                                                            if(self->item_existance[i_373]) {
                                                                                if(1) {
                                                                                    self->keys[i_373] = come_decrement_ref_count2(self->keys[i_373], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                            }
                                                                        }
                                                                        come_free((char*)self->keys);
                                                                        come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
char* result_375;
char* __result137__;
char* __result138__;
char* result_376;
char* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_375, 0, sizeof(char*));
memset(&result_376, 0, sizeof(char*));
                                                                    if(self==((void*)0)) {
                                                                        memset(&result_375,0,sizeof(char*));
                                                                        __result137__ = __result_obj__ = result_375;
                                                                        return __result137__;
                                                                    }
                                                                    self->key_list->it=self->key_list->head;
                                                                    if(self->key_list->it) {
                                                                        __result138__ = __result_obj__ = self->key_list->it->item;
                                                                        return __result138__;
                                                                    }
                                                                    memset(&result_376,0,sizeof(char*));
                                                                    __result139__ = __result_obj__ = result_376;
                                                                    return __result139__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
                                                                    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
char* result_378;
char* __result140__;
char* __result141__;
char* result_379;
char* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_378, 0, sizeof(char*));
memset(&result_379, 0, sizeof(char*));
                                                                    if(self==((void*)0)||self->key_list->it==((void*)0)) {
                                                                        memset(&result_378,0,sizeof(char*));
                                                                        __result140__ = __result_obj__ = result_378;
                                                                        return __result140__;
                                                                    }
                                                                    self->key_list->it=self->key_list->it->next;
                                                                    if(self->key_list->it) {
                                                                        __result141__ = __result_obj__ = self->key_list->it->item;
                                                                        return __result141__;
                                                                    }
                                                                    memset(&result_379,0,sizeof(char*));
                                                                    __result142__ = __result_obj__ = result_379;
                                                                    return __result142__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_381;
unsigned int it_382;
struct sVar* __result143__;
struct sVar* __result144__;
struct sVar* __result145__;
struct sVar* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_381, 0, sizeof(unsigned int));
memset(&it_382, 0, sizeof(unsigned int));
                                                                        hash_381=string_get_hash_key(((char*)key))%self->size;
                                                                        it_382=hash_381;
                                                                        while((_Bool)1) {
                                                                            if(self->item_existance[it_382]) {
                                                                                if(string_equals(self->keys[it_382],key)) {
                                                                                    __result143__ = __result_obj__ = self->items[it_382];
                                                                                    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                                                                    return __result143__;
                                                                                }
                                                                                it_382++;
                                                                                if(it_382>=self->size) {
                                                                                    it_382=0;
                                                                                }
                                                                                else {
                                                                                    if(it_382==hash_381) {
                                                                                        __result144__ = __result_obj__ = default_value;
                                                                                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                                                                        return __result144__;
                                                                                    }
                                                                                }
                                                                            }
                                                                            else {
                                                                                __result145__ = __result_obj__ = default_value;
                                                                                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                                                                return __result145__;
                                                                            }
                                                                        }
                                                                        __result146__ = __result_obj__ = default_value;
                                                                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                                                        return __result146__;
                                                                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
unsigned int hash_395;
int it_396;
_Bool same_key_exist_397;
char* it2_398;
struct map$2charphsVarph* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_395, 0, sizeof(unsigned int));
memset(&it_396, 0, sizeof(int));
memset(&same_key_exist_397, 0, sizeof(_Bool));
memset(&it2_398, 0, sizeof(char*));
                                                                        if(self->len*2>=self->size) {
                                                                            map$2charphsVarph_rehash(self);
                                                                        }
                                                                        hash_395=string_get_hash_key(key)%self->size;
                                                                        it_396=hash_395;
                                                                        while((_Bool)1) {
                                                                            if(self->item_existance[it_396]) {
                                                                                if(string_equals(self->keys[it_396],key)) {
                                                                                    if(1) {
                                                                                        self->keys[it_396] = come_decrement_ref_count2(self->keys[it_396], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        list$1charp_remove(self->key_list,self->keys[it_396]);
                                                                                        self->keys[it_396]=(char*)come_increment_ref_count(key);
                                                                                    }
                                                                                    else {
                                                                                        list$1charp_remove(self->key_list,self->keys[it_396]);
                                                                                        self->keys[it_396]=key;
                                                                                    }
                                                                                    if(1) {
                                                                                        come_call_finalizer3(self->items[it_396],sVar_finalize, 0, 0, 0, 0, (void*)0);
                                                                                        self->items[it_396]=(struct sVar*)come_increment_ref_count(item);
                                                                                    }
                                                                                    else {
                                                                                        self->items[it_396]=item;
                                                                                    }
                                                                                    break;
                                                                                }
                                                                                it_396++;
                                                                                if(it_396>=self->size) {
                                                                                    it_396=0;
                                                                                }
                                                                                else {
                                                                                    if(it_396==hash_395) {
                                                                                        printf("unexpected error in map.insert\n");
                                                                                        stackframe();
                                                                                        exit(2);
                                                                                    }
                                                                                }
                                                                            }
                                                                            else {
                                                                                self->item_existance[it_396]=(_Bool)1;
                                                                                if(1) {
                                                                                    self->keys[it_396]=(char*)come_increment_ref_count(key);
                                                                                }
                                                                                else {
                                                                                    self->keys[it_396]=key;
                                                                                }
                                                                                if(1) {
                                                                                    self->items[it_396]=(struct sVar*)come_increment_ref_count(item);
                                                                                }
                                                                                else {
                                                                                    self->items[it_396]=item;
                                                                                }
                                                                                self->len++;
                                                                                break;
                                                                            }
                                                                        }
                                                                        same_key_exist_397=(_Bool)0;
                                                                        for(                                                                        it2_398=list$1charp_begin(self->key_list);                                                                        !list$1charp_end(self->key_list);                                                                        it2_398=list$1charp_next(self->key_list)                                                                        ){
                                                                            if(string_equals(it2_398,key)) {
                                                                                same_key_exist_397=(_Bool)1;
                                                                            }
                                                                        }
                                                                        if(!same_key_exist_397) {
                                                                            list$1charp_push_back(self->key_list,key);
                                                                        }
                                                                        __result147__ = __result_obj__ = self;
                                                                        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                                        come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                                                        return __result147__;
                                                                        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                                        come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_384;
void* right_value547;
char** keys_385;
void* right_value548;
struct sVar** items_386;
void* right_value549;
_Bool* item_existance_387;
int len_388;
char* it_389;
struct sVar* default_value_390;
struct sVar* it2_391;
unsigned int hash_392;
int n_393;
struct sVar* default_value_394;
memset(&size_384, 0, sizeof(int));
right_value547 = (void*)0;
memset(&keys_385, 0, sizeof(char**));
right_value548 = (void*)0;
memset(&items_386, 0, sizeof(struct sVar**));
right_value549 = (void*)0;
memset(&item_existance_387, 0, sizeof(_Bool*));
memset(&len_388, 0, sizeof(int));
memset(&it_389, 0, sizeof(char*));
memset(&default_value_390, 0, sizeof(struct sVar*));
memset(&it2_391, 0, sizeof(struct sVar*));
memset(&hash_392, 0, sizeof(unsigned int));
memset(&n_393, 0, sizeof(int));
memset(&default_value_394, 0, sizeof(struct sVar*));
                                                                                size_384=self->size*10;
                                                                                keys_385=(char**)come_increment_ref_count(((char**)(right_value547=(char**)come_calloc(1, sizeof(char*)*(1*(size_384)), "./neo-c.h", 1315, "char*%"))));
                                                                                right_value547 = come_decrement_ref_count2(right_value547, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                                items_386=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value548=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_384)), "./neo-c.h", 1316, "sVar*%"))));
                                                                                come_call_finalizer3(right_value548,sVar_finalize, 0, 1, 0, 0, (void*)0);
                                                                                item_existance_387=(_Bool*)come_increment_ref_count(((_Bool*)(right_value549=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_384)), "./neo-c.h", 1317, "bool"))));
                                                                                right_value549 = come_decrement_ref_count2(right_value549, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                                len_388=0;
                                                                                for(                                                                                it_389=map$2charphsVarph_begin(self);                                                                                !map$2charphsVarph_end(self);                                                                                it_389=map$2charphsVarph_next(self)                                                                                ){
                                                                                    memset(&default_value_390,0,sizeof(struct sVar*));
                                                                                    it2_391=map$2charphsVarph_at(self,it_389,default_value_390);
                                                                                    hash_392=string_get_hash_key(it_389)%size_384;
                                                                                    n_393=hash_392;
                                                                                    while((_Bool)1) {
                                                                                        if(item_existance_387[n_393]) {
                                                                                            n_393++;
                                                                                            if(n_393>=size_384) {
                                                                                                n_393=0;
                                                                                            }
                                                                                            else {
                                                                                                if(n_393==hash_392) {
                                                                                                    printf("unexpected error in map.rehash(1)\n");
                                                                                                    stackframe();
                                                                                                    exit(2);
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                        else {
                                                                                            item_existance_387[n_393]=(_Bool)1;
                                                                                            keys_385[n_393]=it_389;
                                                                                            items_386[n_393]=map$2charphsVarph_at(self,it_389,default_value_394);
                                                                                            len_388++;
                                                                                            break;
                                                                                        }
                                                                                    }
                                                                                }
                                                                                come_free((char*)self->items);
                                                                                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                come_free((char*)self->keys);
                                                                                self->keys=keys_385;
                                                                                self->items=items_386;
                                                                                self->item_existance=item_existance_387;
                                                                                self->size=size_384;
                                                                                self->len=len_388;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_399;
int i_400;
memset(&i_399, 0, sizeof(int));
memset(&i_400, 0, sizeof(int));
                                                                for(                                                                i_399=0;                                                                i_399<self->size;                                                                i_399++                                                                ){
                                                                    if(self->item_existance[i_399]) {
                                                                        if(1) {
                                                                            come_call_finalizer3(self->items[i_399],sVar_finalize, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                    }
                                                                }
                                                                come_free((char*)self->items);
                                                                for(                                                                i_400=0;                                                                i_400<self->size;                                                                i_400++                                                                ){
                                                                    if(self->item_existance[i_400]) {
                                                                        if(1) {
                                                                            self->keys[i_400] = come_decrement_ref_count2(self->keys[i_400], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                    }
                                                                }
                                                                come_free((char*)self->keys);
                                                                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool is_type_name(char* buf, struct sInfo* info){
struct sClass* klass_405;
struct sType* type_411;
struct sClass* generics_class_415;
void* right_value567;
_Bool generics_type_name_416;
void* right_value568;
_Bool mgenerics_type_name_418;
memset(&klass_405, 0, sizeof(struct sClass*));
memset(&type_411, 0, sizeof(struct sType*));
memset(&generics_class_415, 0, sizeof(struct sClass*));
right_value567 = (void*)0;
memset(&generics_type_name_416, 0, sizeof(_Bool));
right_value568 = (void*)0;
memset(&mgenerics_type_name_418, 0, sizeof(_Bool));
    klass_405=map$2charphsClassphp_operator_load_element(info->classes,buf);
    type_411=map$2charphsTypephp_operator_load_element(info->types,buf);
    generics_class_415=map$2charphsClassphp_operator_load_element(info->generics_classes,buf);
    generics_type_name_416=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(((char*)(right_value567=__builtin_string(buf)))));
    right_value567 = come_decrement_ref_count2(right_value567, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    mgenerics_type_name_418=list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value568=__builtin_string(buf)))));
    right_value568 = come_decrement_ref_count2(right_value568, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    return generics_class_415||generics_type_name_416||mgenerics_type_name_418||klass_405||type_411||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"uniq")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"record")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"immutable")||charp_operator_equals(buf,"mutable")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__typeof__");
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_406;
unsigned int hash_407;
unsigned int it_408;
struct sClass* __result157__;
struct sClass* __result158__;
struct sClass* __result159__;
struct sClass* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_406, 0, sizeof(struct sClass*));
memset(&hash_407, 0, sizeof(unsigned int));
memset(&it_408, 0, sizeof(unsigned int));
        memset(&default_value_406,0,sizeof(struct sClass*));
        hash_407=string_get_hash_key(((char*)key))%self->size;
        it_408=hash_407;
        while((_Bool)1) {
            if(self->item_existance[it_408]) {
                if(string_equals(self->keys[it_408],key)) {
                    __result157__ = __result_obj__ = self->items[it_408];
                    come_call_finalizer3(default_value_406,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    return __result157__;
                }
                it_408++;
                if(it_408>=self->size) {
                    it_408=0;
                }
                else {
                    if(it_408==hash_407) {
                        __result158__ = __result_obj__ = default_value_406;
                        come_call_finalizer3(default_value_406,sClass_finalize, 0, 0, 1, 0, (void*)0);
                        return __result158__;
                    }
                }
            }
            else {
                __result159__ = __result_obj__ = default_value_406;
                come_call_finalizer3(default_value_406,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result159__;
            }
        }
        __result160__ = __result_obj__ = default_value_406;
        come_call_finalizer3(default_value_406,sClass_finalize, 0, 0, 1, 0, (void*)0);
        return __result160__;
        come_call_finalizer3(default_value_406,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
                        if(self!=((void*)0)&&self->mName!=((void*)0)) {
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(self!=((void*)0)&&self->mFields!=((void*)0)) {
                            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
                            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_409;
struct list_item$1tuple2$2charphsTypephph* prev_it_410;
memset(&it_409, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_410, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                it_409=self->head;
                                while(it_409!=((void*)0)) {
                                    prev_it_410=it_409;
                                    it_409=it_409->next;
                                    come_call_finalizer3(prev_it_410,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
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

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__;
struct sType* default_value_412;
unsigned int hash_413;
unsigned int it_414;
struct sType* __result161__;
struct sType* __result162__;
struct sType* __result163__;
struct sType* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_412, 0, sizeof(struct sType*));
memset(&hash_413, 0, sizeof(unsigned int));
memset(&it_414, 0, sizeof(unsigned int));
        memset(&default_value_412,0,sizeof(struct sType*));
        hash_413=string_get_hash_key(((char*)key))%self->size;
        it_414=hash_413;
        while((_Bool)1) {
            if(self->item_existance[it_414]) {
                if(string_equals(self->keys[it_414],key)) {
                    __result161__ = __result_obj__ = self->items[it_414];
                    come_call_finalizer3(default_value_412,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result161__;
                }
                it_414++;
                if(it_414>=self->size) {
                    it_414=0;
                }
                else {
                    if(it_414==hash_413) {
                        __result162__ = __result_obj__ = default_value_412;
                        come_call_finalizer3(default_value_412,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result162__;
                    }
                }
            }
            else {
                __result163__ = __result_obj__ = default_value_412;
                come_call_finalizer3(default_value_412,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result163__;
            }
        }
        __result164__ = __result_obj__ = default_value_412;
        come_call_finalizer3(default_value_412,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result164__;
        come_call_finalizer3(default_value_412,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
char* it_417;
_Bool __result165__;
_Bool __result166__;
memset(&it_417, 0, sizeof(char*));
        for(        it_417=list$1charph_begin(self);        !list$1charph_end(self);        it_417=list$1charph_next(self)        ){
            if(string_operator_equals(it_417,item)) {
                __result165__ = (_Bool)1;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result165__;
            }
        }
        __result166__ = (_Bool)0;
        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result166__;
        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun_419;
int caller_line_420;
char* caller_sname_421;
char* last_code_422;
char* __dec_obj105;
char* last_code2_423;
char* __dec_obj106;
char* last_code3_424;
char* __dec_obj107;
void* right_value569;
char* sname_top_425;
int sline_top_426;
struct sFun* funX_427;
_Bool __result167__;
void* right_value570;
struct sType* result_type_428;
void* right_value571;
void* right_value572;
struct list$1sTypeph* param_types_429;
struct list$1sTypeph* o2_saved_430;
struct sType* it_433;
void* right_value573;
void* right_value574;
struct sType* param_type_436;
void* right_value575;
void* right_value576;
struct list$1charph* param_names_437;
void* right_value577;
struct list$1charph* param_default_parametors_438;
char* p_439;
int sline_440;
char* sname_441;
char* head_442;
struct buffer* source_443;
void* right_value578;
struct buffer* __dec_obj108;
struct sType* generics_type_saved_444;
void* right_value579;
struct sType* __dec_obj109;
struct list$1charph* method_generics_type_names_445;
void* right_value580;
void* right_value581;
struct list$1charph* __dec_obj110;
struct list$1charph* o2_saved_446;
char* it_447;
void* right_value582;
void* right_value583;
struct list$1charph* __dec_obj111;
char* __dec_obj112;
void* right_value584;
struct sBlock* block_448;
struct buffer* __dec_obj113;
char* __dec_obj114;
_Bool var_args_449;
void* right_value585;
void* right_value586;
void* right_value587;
void* right_value588;
void* right_value589;
struct sFun* fun_450;
void* right_value590;
void* right_value591;
void* right_value592;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* right_value596;
struct sNode* node_451;
_Bool __result176__;
struct sType* __dec_obj117;
struct list$1charph* __dec_obj118;
struct list$1charph* __dec_obj119;
void* right_value597;
char* __dec_obj120;
char* __dec_obj121;
char* __dec_obj122;
char* __dec_obj123;
_Bool __result177__;
memset(&caller_fun_419, 0, sizeof(struct sFun*));
memset(&caller_line_420, 0, sizeof(int));
memset(&caller_sname_421, 0, sizeof(char*));
memset(&last_code_422, 0, sizeof(char*));
memset(&last_code2_423, 0, sizeof(char*));
memset(&last_code3_424, 0, sizeof(char*));
right_value569 = (void*)0;
memset(&sname_top_425, 0, sizeof(char*));
memset(&sline_top_426, 0, sizeof(int));
memset(&funX_427, 0, sizeof(struct sFun*));
right_value570 = (void*)0;
memset(&result_type_428, 0, sizeof(struct sType*));
right_value571 = (void*)0;
right_value572 = (void*)0;
memset(&param_types_429, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_430, 0, sizeof(struct list$1sTypeph*));
memset(&it_433, 0, sizeof(struct sType*));
right_value573 = (void*)0;
right_value574 = (void*)0;
memset(&param_type_436, 0, sizeof(struct sType*));
right_value575 = (void*)0;
right_value576 = (void*)0;
memset(&param_names_437, 0, sizeof(struct list$1charph*));
right_value577 = (void*)0;
memset(&param_default_parametors_438, 0, sizeof(struct list$1charph*));
memset(&p_439, 0, sizeof(char*));
memset(&sline_440, 0, sizeof(int));
memset(&sname_441, 0, sizeof(char*));
memset(&head_442, 0, sizeof(char*));
memset(&source_443, 0, sizeof(struct buffer*));
right_value578 = (void*)0;
memset(&generics_type_saved_444, 0, sizeof(struct sType*));
right_value579 = (void*)0;
memset(&method_generics_type_names_445, 0, sizeof(struct list$1charph*));
right_value580 = (void*)0;
right_value581 = (void*)0;
memset(&o2_saved_446, 0, sizeof(struct list$1charph*));
memset(&it_447, 0, sizeof(char*));
right_value582 = (void*)0;
right_value583 = (void*)0;
right_value584 = (void*)0;
memset(&block_448, 0, sizeof(struct sBlock*));
memset(&var_args_449, 0, sizeof(_Bool));
right_value585 = (void*)0;
right_value586 = (void*)0;
right_value587 = (void*)0;
right_value588 = (void*)0;
right_value589 = (void*)0;
memset(&fun_450, 0, sizeof(struct sFun*));
right_value590 = (void*)0;
right_value591 = (void*)0;
right_value592 = (void*)0;
right_value596 = (void*)0;
memset(&node_451, 0, sizeof(struct sNode*));
right_value597 = (void*)0;
    caller_fun_419=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_420=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_421=info->caller_sname;
    info->caller_sname=info->sname;
    last_code_422=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj105=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_423=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj106=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_424=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj107=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_425=(char*)come_increment_ref_count(((char*)(right_value569=__builtin_string(info->sname))));
    right_value569 = come_decrement_ref_count2(right_value569, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    sline_top_426=info->sline;
    if(generics_type->mNoSolvedGenericsType->v1) {
        generics_type=generics_type->mNoSolvedGenericsType->v1;
    }
    funX_427=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(funX_427) {
        __result167__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_422 = come_decrement_ref_count2(last_code_422, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_423 = come_decrement_ref_count2(last_code2_423, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_424 = come_decrement_ref_count2(last_code3_424, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_425 = come_decrement_ref_count2(sname_top_425, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result167__;
    }
    result_type_428=(struct sType*)come_increment_ref_count(((struct sType*)(right_value570=solve_generics(generics_fun->mResultType,generics_type,info))));
    come_call_finalizer3(right_value570,sType_finalize, 0, 1, 0, 0, (void*)0);
    param_types_429=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value572=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value571=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1413, "list$1sTypeph"))))))));
    come_call_finalizer3(right_value571,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value572,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
    for(    o2_saved_430=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_433=list$1sTypeph_begin((o2_saved_430));    !list$1sTypeph_end((o2_saved_430));    it_433=list$1sTypeph_next((o2_saved_430))    ){
        param_type_436=(struct sType*)come_increment_ref_count(((struct sType*)(right_value574=solve_generics(((struct sType*)(right_value573=sType_clone(it_433))),generics_type,info))));
        come_call_finalizer3(right_value573,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value574,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_436->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_429,(struct sType*)come_increment_ref_count(((struct sType*)(right_value575=sType_clone(param_type_436)))));
        come_call_finalizer3(right_value575,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(param_type_436,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_430,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_437=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value576=list$1charphp_clone(generics_fun->mParamNames))));
    come_call_finalizer3(right_value576,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
    param_default_parametors_438=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value577=list$1charphp_clone(generics_fun->mParamDefaultParametors))));
    come_call_finalizer3(right_value577,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
    p_439=info->p;
    sline_440=info->sline;
    sname_441=(char*)come_increment_ref_count(info->sname);
    head_442=info->head;
    source_443=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj108=info->source;
    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value578=string_to_buffer(generics_fun->mBlock))));
    come_call_finalizer3(__dec_obj108,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value578,buffer_finalize, 0, 1, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_444=(struct sType*)come_increment_ref_count(info->generics_type);
    __dec_obj109=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value579=sType_clone(generics_type))));
    come_call_finalizer3(__dec_obj109,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value579,sType_finalize, 0, 1, 0, 0, (void*)0);
    method_generics_type_names_445=info->method_generics_type_names;
    __dec_obj110=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value581=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value580=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1440, "list$1charph"))))))));
    come_call_finalizer3(__dec_obj110,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value580,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value581,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
    for(    o2_saved_446=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_447=list$1charph_begin((o2_saved_446));    !list$1charph_end((o2_saved_446));    it_447=list$1charph_next((o2_saved_446))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value582=string_clone(it_447)))));
        right_value582 = come_decrement_ref_count2(right_value582, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_446,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj111=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value583=list$1charphp_clone(generics_fun->mGenericsTypeNames))));
    come_call_finalizer3(__dec_obj111,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value583,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj112=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_448=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value584=parse_block(info,(_Bool)0,(_Bool)0))));
    come_call_finalizer3(right_value584,sBlock_finalize, 0, 1, 0, 0, (void*)0);
    info->head=head_442;
    __dec_obj113=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_443);
    come_call_finalizer3(__dec_obj113,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_439;
    info->sline=sline_440;
    __dec_obj114=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_441);
    __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_428->mInline=(_Bool)0;
    var_args_449=generics_fun->mVarArgs;
    fun_450=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value589=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value585=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1462, "sFun")))),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_428),(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value586=list$1sTypephp_clone(param_types_429)))),(struct list$1charph*)come_increment_ref_count(param_names_437),(struct list$1charph*)come_increment_ref_count(param_default_parametors_438),(_Bool)0,var_args_449,(struct sBlock*)come_increment_ref_count(block_448),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value587=__builtin_string("")))),(char*)come_increment_ref_count(((char*)(right_value588=__builtin_string("")))),info))));
    come_call_finalizer3(right_value585,sFun_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value586,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
    right_value587 = come_decrement_ref_count2(right_value587, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    right_value588 = come_decrement_ref_count2(right_value588, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value589,sFun_finalize, 0, 1, 0, 0, (void*)0);
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value590=string_clone(fun_name)))),(struct sFun*)come_increment_ref_count(fun_450));
    right_value590 = come_decrement_ref_count2(right_value590, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1469, "struct sNode");
    _inf_obj_value3=come_increment_ref_count(((struct sFunNode*)(right_value592=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value591=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1469, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_450),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_451=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value596=_inf_value3)));
    come_call_finalizer3(right_value591,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value592,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    if(right_value596) { right_value596 = come_decrement_ref_count2(right_value596, ((struct sNode*)right_value596)->finalize, ((struct sNode*)right_value596)->_protocol_obj, 1, 0, 0, (void*)0); } 
    if(!node_compile(node_451,info)) {
        __result176__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_422 = come_decrement_ref_count2(last_code_422, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_423 = come_decrement_ref_count2(last_code2_423, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_424 = come_decrement_ref_count2(last_code3_424, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_425 = come_decrement_ref_count2(sname_top_425, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_428,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_429,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_437,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_438,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_441 = come_decrement_ref_count2(sname_441, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_443,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(generics_type_saved_444,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_448,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_450,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_451) { node_451 = come_decrement_ref_count2(node_451, ((struct sNode*)node_451)->finalize, ((struct sNode*)node_451)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result176__;
    }
    __dec_obj117=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_444);
    come_call_finalizer3(__dec_obj117,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(info->method_generics_type_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj118=method_generics_type_names_445;
    __dec_obj119=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_445);
    come_call_finalizer3(__dec_obj119,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj120=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value597=__builtin_string(sname_top_425))));
    __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value597 = come_decrement_ref_count2(right_value597, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    info->sline=sline_top_426;
    __dec_obj121=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_422);
    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj122=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_423);
    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj123=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_424);
    __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_419;
    info->caller_line=caller_line_420;
    info->caller_sname=caller_sname_421;
    __result177__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_422 = come_decrement_ref_count2(last_code_422, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_423 = come_decrement_ref_count2(last_code2_423, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_424 = come_decrement_ref_count2(last_code3_424, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_425 = come_decrement_ref_count2(sname_top_425, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_428,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_429,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_437,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_438,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_441 = come_decrement_ref_count2(sname_441, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_443,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(generics_type_saved_444,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_448,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_450,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_451) { node_451 = come_decrement_ref_count2(node_451, ((struct sNode*)node_451)->finalize, ((struct sNode*)node_451)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result177__;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_422 = come_decrement_ref_count2(last_code_422, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_423 = come_decrement_ref_count2(last_code2_423, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_424 = come_decrement_ref_count2(last_code3_424, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_425 = come_decrement_ref_count2(sname_top_425, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_428,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_429,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_437,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_438,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_441 = come_decrement_ref_count2(sname_441, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_443,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(generics_type_saved_444,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_448,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_450,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_451) { node_451 = come_decrement_ref_count2(node_451, ((struct sNode*)node_451)->finalize, ((struct sNode*)node_451)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
struct sType* result_431;
struct sType* __result168__;
struct sType* __result169__;
struct sType* result_432;
struct sType* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_431, 0, sizeof(struct sType*));
memset(&result_432, 0, sizeof(struct sType*));
        if(self==((void*)0)) {
            memset(&result_431,0,sizeof(struct sType*));
            __result168__ = __result_obj__ = result_431;
            return __result168__;
        }
        self->it=self->head;
        if(self->it) {
            __result169__ = __result_obj__ = self->it->item;
            return __result169__;
        }
        memset(&result_432,0,sizeof(struct sType*));
        __result170__ = __result_obj__ = result_432;
        return __result170__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
        return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
struct sType* result_434;
struct sType* __result171__;
struct sType* __result172__;
struct sType* result_435;
struct sType* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_434, 0, sizeof(struct sType*));
memset(&result_435, 0, sizeof(struct sType*));
        if(self==((void*)0)||self->it==((void*)0)) {
            memset(&result_434,0,sizeof(struct sType*));
            __result171__ = __result_obj__ = result_434;
            return __result171__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result172__ = __result_obj__ = self->it->item;
            return __result172__;
        }
        memset(&result_435,0,sizeof(struct sType*));
        __result173__ = __result_obj__ = result_435;
        return __result173__;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_453;
int caller_line_454;
char* caller_sname_455;
char* last_code_456;
char* __dec_obj124;
char* last_code2_457;
char* __dec_obj125;
char* last_code3_458;
char* __dec_obj126;
void* right_value598;
char* sname_top_459;
int sline_top_460;
struct sFun* funX_461;
_Bool __result178__;
void* right_value599;
struct sType* result_type_462;
void* right_value600;
void* right_value601;
struct list$1sTypeph* param_types_463;
struct list$1sTypeph* o2_saved_464;
struct sType* it_465;
void* right_value602;
void* right_value603;
struct sType* param_type_466;
void* right_value604;
void* right_value605;
struct list$1charph* param_names_467;
void* right_value606;
struct list$1charph* param_default_parametors_468;
char* p_469;
int sline_470;
char* sname_471;
char* head_472;
struct buffer* source_473;
void* right_value607;
struct buffer* __dec_obj127;
struct list$1charph* method_generics_type_names_474;
void* right_value608;
void* right_value609;
struct list$1charph* __dec_obj128;
struct list$1charph* o2_saved_475;
char* it_476;
void* right_value610;
void* right_value611;
struct list$1charph* __dec_obj129;
char* __dec_obj130;
void* right_value612;
struct sBlock* block_477;
struct buffer* __dec_obj131;
char* __dec_obj132;
_Bool var_args_478;
void* right_value613;
void* right_value614;
void* right_value615;
void* right_value616;
void* right_value617;
struct sFun* fun_479;
void* right_value618;
void* right_value619;
void* right_value620;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* right_value624;
struct sNode* node_480;
_Bool __result181__;
struct list$1charph* __dec_obj135;
struct list$1charph* __dec_obj136;
void* right_value625;
char* __dec_obj137;
char* __dec_obj138;
char* __dec_obj139;
char* __dec_obj140;
_Bool __result182__;
memset(&caller_fun_453, 0, sizeof(struct sFun*));
memset(&caller_line_454, 0, sizeof(int));
memset(&caller_sname_455, 0, sizeof(char*));
memset(&last_code_456, 0, sizeof(char*));
memset(&last_code2_457, 0, sizeof(char*));
memset(&last_code3_458, 0, sizeof(char*));
right_value598 = (void*)0;
memset(&sname_top_459, 0, sizeof(char*));
memset(&sline_top_460, 0, sizeof(int));
memset(&funX_461, 0, sizeof(struct sFun*));
right_value599 = (void*)0;
memset(&result_type_462, 0, sizeof(struct sType*));
right_value600 = (void*)0;
right_value601 = (void*)0;
memset(&param_types_463, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_464, 0, sizeof(struct list$1sTypeph*));
memset(&it_465, 0, sizeof(struct sType*));
right_value602 = (void*)0;
right_value603 = (void*)0;
memset(&param_type_466, 0, sizeof(struct sType*));
right_value604 = (void*)0;
right_value605 = (void*)0;
memset(&param_names_467, 0, sizeof(struct list$1charph*));
right_value606 = (void*)0;
memset(&param_default_parametors_468, 0, sizeof(struct list$1charph*));
memset(&p_469, 0, sizeof(char*));
memset(&sline_470, 0, sizeof(int));
memset(&sname_471, 0, sizeof(char*));
memset(&head_472, 0, sizeof(char*));
memset(&source_473, 0, sizeof(struct buffer*));
right_value607 = (void*)0;
memset(&method_generics_type_names_474, 0, sizeof(struct list$1charph*));
right_value608 = (void*)0;
right_value609 = (void*)0;
memset(&o2_saved_475, 0, sizeof(struct list$1charph*));
memset(&it_476, 0, sizeof(char*));
right_value610 = (void*)0;
right_value611 = (void*)0;
right_value612 = (void*)0;
memset(&block_477, 0, sizeof(struct sBlock*));
memset(&var_args_478, 0, sizeof(_Bool));
right_value613 = (void*)0;
right_value614 = (void*)0;
right_value615 = (void*)0;
right_value616 = (void*)0;
right_value617 = (void*)0;
memset(&fun_479, 0, sizeof(struct sFun*));
right_value618 = (void*)0;
right_value619 = (void*)0;
right_value620 = (void*)0;
right_value624 = (void*)0;
memset(&node_480, 0, sizeof(struct sNode*));
right_value625 = (void*)0;
    caller_fun_453=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_454=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_455=info->caller_sname;
    info->caller_sname=info->sname;
    last_code_456=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj124=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_457=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj125=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_458=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj126=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_459=(char*)come_increment_ref_count(((char*)(right_value598=__builtin_string(info->sname))));
    right_value598 = come_decrement_ref_count2(right_value598, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    sline_top_460=info->sline;
    funX_461=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(funX_461) {
        __result178__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_456 = come_decrement_ref_count2(last_code_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_457 = come_decrement_ref_count2(last_code2_457, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_458 = come_decrement_ref_count2(last_code3_458, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_459 = come_decrement_ref_count2(sname_top_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result178__;
    }
    result_type_462=(struct sType*)come_increment_ref_count(((struct sType*)(right_value599=solve_method_generics(generics_fun->mResultType,info))));
    come_call_finalizer3(right_value599,sType_finalize, 0, 1, 0, 0, (void*)0);
    param_types_463=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value601=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value600=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1521, "list$1sTypeph"))))))));
    come_call_finalizer3(right_value600,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value601,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
    for(    o2_saved_464=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_465=list$1sTypeph_begin((o2_saved_464));    !list$1sTypeph_end((o2_saved_464));    it_465=list$1sTypeph_next((o2_saved_464))    ){
        param_type_466=(struct sType*)come_increment_ref_count(((struct sType*)(right_value603=solve_method_generics(((struct sType*)(right_value602=sType_clone(it_465))),info))));
        come_call_finalizer3(right_value602,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value603,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_466->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_463,(struct sType*)come_increment_ref_count(((struct sType*)(right_value604=sType_clone(param_type_466)))));
        come_call_finalizer3(right_value604,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(param_type_466,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_464,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_467=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value605=list$1charphp_clone(generics_fun->mParamNames))));
    come_call_finalizer3(right_value605,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
    param_default_parametors_468=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value606=list$1charphp_clone(generics_fun->mParamDefaultParametors))));
    come_call_finalizer3(right_value606,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
    p_469=info->p;
    sline_470=info->sline;
    sname_471=(char*)come_increment_ref_count(info->sname);
    head_472=info->head;
    source_473=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj127=info->source;
    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value607=string_to_buffer(generics_fun->mBlock))));
    come_call_finalizer3(__dec_obj127,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value607,buffer_finalize, 0, 1, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_474=info->method_generics_type_names;
    __dec_obj128=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value609=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value608=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1545, "list$1charph"))))))));
    come_call_finalizer3(__dec_obj128,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value608,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value609,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
    for(    o2_saved_475=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_476=list$1charph_begin((o2_saved_475));    !list$1charph_end((o2_saved_475));    it_476=list$1charph_next((o2_saved_475))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value610=string_clone(it_476)))));
        right_value610 = come_decrement_ref_count2(right_value610, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_475,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj129=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value611=list$1charphp_clone(generics_fun->mGenericsTypeNames))));
    come_call_finalizer3(__dec_obj129,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value611,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj130=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_477=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value612=parse_block(info,(_Bool)0,(_Bool)0))));
    come_call_finalizer3(right_value612,sBlock_finalize, 0, 1, 0, 0, (void*)0);
    info->head=head_472;
    __dec_obj131=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_473);
    come_call_finalizer3(__dec_obj131,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_469;
    info->sline=sline_470;
    __dec_obj132=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_471);
    __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_462->mInline=(_Bool)0;
    var_args_478=generics_fun->mVarArgs;
    fun_479=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value617=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value613=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1567, "sFun")))),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_462),(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value614=list$1sTypephp_clone(param_types_463)))),(struct list$1charph*)come_increment_ref_count(param_names_467),(struct list$1charph*)come_increment_ref_count(param_default_parametors_468),(_Bool)0,var_args_478,(struct sBlock*)come_increment_ref_count(block_477),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value615=__builtin_string("")))),(char*)come_increment_ref_count(((char*)(right_value616=__builtin_string("")))),info))));
    come_call_finalizer3(right_value613,sFun_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value614,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
    right_value615 = come_decrement_ref_count2(right_value615, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    right_value616 = come_decrement_ref_count2(right_value616, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value617,sFun_finalize, 0, 1, 0, 0, (void*)0);
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value618=string_clone(fun_name)))),(struct sFun*)come_increment_ref_count(fun_479));
    right_value618 = come_decrement_ref_count2(right_value618, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1574, "struct sNode");
    _inf_obj_value4=come_increment_ref_count(((struct sFunNode*)(right_value620=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value619=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1574, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_479),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_480=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value624=_inf_value4)));
    come_call_finalizer3(right_value619,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value620,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    if(right_value624) { right_value624 = come_decrement_ref_count2(right_value624, ((struct sNode*)right_value624)->finalize, ((struct sNode*)right_value624)->_protocol_obj, 1, 0, 0, (void*)0); } 
    if(!node_compile(node_480,info)) {
        __result181__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_456 = come_decrement_ref_count2(last_code_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_457 = come_decrement_ref_count2(last_code2_457, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_458 = come_decrement_ref_count2(last_code3_458, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_459 = come_decrement_ref_count2(sname_top_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_462,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_463,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_467,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_468,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_471 = come_decrement_ref_count2(sname_471, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_473,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_477,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_479,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_480) { node_480 = come_decrement_ref_count2(node_480, ((struct sNode*)node_480)->finalize, ((struct sNode*)node_480)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result181__;
    }
    come_call_finalizer3(info->method_generics_type_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj135=method_generics_type_names_474;
    __dec_obj136=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_474);
    come_call_finalizer3(__dec_obj136,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj137=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value625=__builtin_string(sname_top_459))));
    __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value625 = come_decrement_ref_count2(right_value625, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    info->sline=sline_top_460;
    __dec_obj138=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_456);
    __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj139=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_457);
    __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj140=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_458);
    __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_453;
    info->caller_line=caller_line_454;
    info->caller_sname=caller_sname_455;
    __result182__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_456 = come_decrement_ref_count2(last_code_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_457 = come_decrement_ref_count2(last_code2_457, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_458 = come_decrement_ref_count2(last_code3_458, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_459 = come_decrement_ref_count2(sname_top_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_462,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_463,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_467,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_468,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_471 = come_decrement_ref_count2(sname_471, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_473,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_477,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_479,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_480) { node_480 = come_decrement_ref_count2(node_480, ((struct sNode*)node_480)->finalize, ((struct sNode*)node_480)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result182__;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_456 = come_decrement_ref_count2(last_code_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_457 = come_decrement_ref_count2(last_code2_457, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_458 = come_decrement_ref_count2(last_code3_458, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_459 = come_decrement_ref_count2(sname_top_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_462,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_463,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_467,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_468,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_471 = come_decrement_ref_count2(sname_471, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_473,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_477,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_479,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_480) { node_480 = come_decrement_ref_count2(node_480, ((struct sNode*)node_480)->finalize, ((struct sNode*)node_480)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__;
char* header_head_482;
char* source_head_483;
struct sType* __dec_obj141;
struct sType* result_type_484;
char* __dec_obj142;
char* var_name_485;
_Bool constructor__486;
void* right_value626;
void* right_value627;
struct sType* __dec_obj143;
void* right_value628;
struct tuple3$3sTypephcharphbool* multiple_assign_var7;
struct sType* result_type2_487;
char* var_name2_488;
_Bool err_489;
struct sType* __dec_obj144;
char* __dec_obj145;
_Bool method_definition_490;
char* p_491;
int sline_492;
void* right_value629;
void* right_value630;
struct buffer* buf2_493;
char* fun_name_494;
char* base_fun_name_495;
void* right_value631;
void* right_value632;
char* __dec_obj146;
void* right_value633;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* obj_type_496;
char* name_497;
_Bool err_498;
void* right_value634;
void* right_value635;
char* __dec_obj147;
void* right_value636;
void* right_value637;
char* __dec_obj148;
void* right_value638;
char* __dec_obj149;
void* right_value639;
void* right_value640;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var9;
struct list$1sTypeph* param_types_499;
struct list$1charph* param_names_500;
struct list$1charph* param_default_parametors_501;
_Bool var_args_502;
char* header_tail_503;
void* right_value641;
void* right_value642;
struct buffer* header_buf_504;
int version_505;
int n_506;
void* right_value643;
struct sBlock* block_507;
void* right_value644;
char* fun_name_509;
void* right_value645;
void* right_value646;
void* right_value647;
void* right_value648;
void* right_value649;
struct sFun* fun_510;
void* right_value650;
struct sFun* fun2_511;
void* right_value651;
void* right_value652;
void* right_value653;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* right_value656;
struct sNode* __result185__;
void* right_value657;
char* none_generics_name_513;
void* right_value658;
char* generics_sname_514;
int generics_sline_515;
void* right_value659;
char* block_516;
void* right_value660;
void* right_value661;
void* right_value662;
void* right_value663;
void* right_value664;
void* right_value665;
struct sGenericsFun* fun_517;
void* right_value666;
char* fun_name3_518;
void* right_value670;
struct sNode* __result197__;
void* right_value671;
char* generics_sname_540;
int generics_sline_541;
void* right_value672;
char* block_542;
void* right_value673;
void* right_value674;
void* right_value675;
void* right_value676;
void* right_value677;
void* right_value678;
struct sGenericsFun* fun_543;
void* right_value679;
char* fun_name3_544;
void* right_value680;
struct sNode* __result198__;
char* source_tail_545;
void* right_value681;
void* right_value682;
struct buffer* header_546;
void* right_value683;
char* name_547;
void* right_value684;
void* right_value685;
char* name_548;
void* right_value686;
int i_549;
struct sType* param_type_550;
char* param_name_554;
char* default_parametor_555;
void* right_value687;
void* right_value688;
void* right_value689;
void* right_value690;
void* right_value691;
char* impl_name_556;
void* right_value692;
char* result_type_name_557;
void* right_value693;
void* right_value694;
char* impl_name_558;
void* right_value695;
char* result_type_name_559;
void* right_value696;
int i_560;
struct sType* param_type_561;
char* param_name_562;
char* default_parametor_563;
void* right_value697;
void* right_value698;
void* right_value699;
void* right_value700;
void* right_value701;
void* right_value702;
struct sBlock* block_564;
_Bool static__565;
void* right_value703;
void* right_value704;
char* new_fun_name_566;
void* right_value705;
char* __dec_obj151;
void* right_value706;
void* right_value707;
void* right_value708;
void* right_value709;
void* right_value710;
void* right_value711;
struct sFun* fun_567;
void* right_value712;
void* right_value713;
struct sFun* fun2_568;
void* right_value714;
void* right_value715;
void* right_value716;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* right_value720;
struct sNode* __result203__;
void* right_value721;
char* new_fun_name_570;
void* right_value722;
char* __dec_obj154;
void* right_value723;
void* right_value724;
void* right_value725;
void* right_value726;
void* right_value727;
struct sFun* fun_571;
void* right_value728;
struct sFun* fun2_572;
void* right_value729;
char* source_tail_573;
void* right_value730;
void* right_value731;
struct buffer* header_574;
void* right_value732;
void* right_value733;
void* right_value734;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* right_value738;
struct sNode* __result206__;
void* right_value739;
char* asm_fun_576;
void* right_value740;
char* __dec_obj157;
void* right_value741;
void* right_value742;
void* right_value743;
void* right_value744;
void* right_value745;
struct sFun* fun_577;
void* right_value746;
struct sFun* fun2_578;
void* right_value747;
char* source_tail_579;
void* right_value748;
void* right_value749;
struct buffer* header_580;
void* right_value750;
void* right_value751;
void* right_value752;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* right_value756;
struct sNode* __result209__;
struct sNode* __result210__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&header_head_482, 0, sizeof(char*));
memset(&source_head_483, 0, sizeof(char*));
memset(&result_type_484, 0, sizeof(struct sType*));
memset(&var_name_485, 0, sizeof(char*));
memset(&constructor__486, 0, sizeof(_Bool));
right_value626 = (void*)0;
right_value627 = (void*)0;
right_value628 = (void*)0;
memset(&method_definition_490, 0, sizeof(_Bool));
memset(&p_491, 0, sizeof(char*));
memset(&sline_492, 0, sizeof(int));
right_value629 = (void*)0;
right_value630 = (void*)0;
memset(&buf2_493, 0, sizeof(struct buffer*));
memset(&fun_name_494, 0, sizeof(char*));
memset(&base_fun_name_495, 0, sizeof(char*));
right_value631 = (void*)0;
right_value632 = (void*)0;
right_value633 = (void*)0;
right_value634 = (void*)0;
right_value635 = (void*)0;
right_value636 = (void*)0;
right_value637 = (void*)0;
right_value638 = (void*)0;
right_value639 = (void*)0;
right_value640 = (void*)0;
memset(&header_tail_503, 0, sizeof(char*));
right_value641 = (void*)0;
right_value642 = (void*)0;
memset(&header_buf_504, 0, sizeof(struct buffer*));
memset(&version_505, 0, sizeof(int));
memset(&n_506, 0, sizeof(int));
right_value643 = (void*)0;
memset(&block_507, 0, sizeof(struct sBlock*));
right_value644 = (void*)0;
memset(&fun_name_509, 0, sizeof(char*));
right_value645 = (void*)0;
right_value646 = (void*)0;
right_value647 = (void*)0;
right_value648 = (void*)0;
right_value649 = (void*)0;
memset(&fun_510, 0, sizeof(struct sFun*));
right_value650 = (void*)0;
memset(&fun2_511, 0, sizeof(struct sFun*));
right_value651 = (void*)0;
right_value652 = (void*)0;
right_value653 = (void*)0;
right_value656 = (void*)0;
right_value657 = (void*)0;
memset(&none_generics_name_513, 0, sizeof(char*));
right_value658 = (void*)0;
memset(&generics_sname_514, 0, sizeof(char*));
memset(&generics_sline_515, 0, sizeof(int));
right_value659 = (void*)0;
memset(&block_516, 0, sizeof(char*));
right_value660 = (void*)0;
right_value661 = (void*)0;
right_value662 = (void*)0;
right_value663 = (void*)0;
right_value664 = (void*)0;
right_value665 = (void*)0;
memset(&fun_517, 0, sizeof(struct sGenericsFun*));
right_value666 = (void*)0;
memset(&fun_name3_518, 0, sizeof(char*));
right_value670 = (void*)0;
right_value671 = (void*)0;
memset(&generics_sname_540, 0, sizeof(char*));
memset(&generics_sline_541, 0, sizeof(int));
right_value672 = (void*)0;
memset(&block_542, 0, sizeof(char*));
right_value673 = (void*)0;
right_value674 = (void*)0;
right_value675 = (void*)0;
right_value676 = (void*)0;
right_value677 = (void*)0;
right_value678 = (void*)0;
memset(&fun_543, 0, sizeof(struct sGenericsFun*));
right_value679 = (void*)0;
memset(&fun_name3_544, 0, sizeof(char*));
right_value680 = (void*)0;
memset(&source_tail_545, 0, sizeof(char*));
right_value681 = (void*)0;
right_value682 = (void*)0;
memset(&header_546, 0, sizeof(struct buffer*));
right_value683 = (void*)0;
memset(&name_547, 0, sizeof(char*));
right_value684 = (void*)0;
right_value685 = (void*)0;
memset(&name_548, 0, sizeof(char*));
right_value686 = (void*)0;
memset(&i_549, 0, sizeof(int));
memset(&param_type_550, 0, sizeof(struct sType*));
memset(&param_name_554, 0, sizeof(char*));
memset(&default_parametor_555, 0, sizeof(char*));
right_value687 = (void*)0;
right_value688 = (void*)0;
right_value689 = (void*)0;
right_value690 = (void*)0;
right_value691 = (void*)0;
memset(&impl_name_556, 0, sizeof(char*));
right_value692 = (void*)0;
memset(&result_type_name_557, 0, sizeof(char*));
right_value693 = (void*)0;
right_value694 = (void*)0;
memset(&impl_name_558, 0, sizeof(char*));
right_value695 = (void*)0;
memset(&result_type_name_559, 0, sizeof(char*));
right_value696 = (void*)0;
memset(&i_560, 0, sizeof(int));
memset(&param_type_561, 0, sizeof(struct sType*));
memset(&param_name_562, 0, sizeof(char*));
memset(&default_parametor_563, 0, sizeof(char*));
right_value697 = (void*)0;
right_value698 = (void*)0;
right_value699 = (void*)0;
right_value700 = (void*)0;
right_value701 = (void*)0;
right_value702 = (void*)0;
memset(&block_564, 0, sizeof(struct sBlock*));
memset(&static__565, 0, sizeof(_Bool));
right_value703 = (void*)0;
right_value704 = (void*)0;
memset(&new_fun_name_566, 0, sizeof(char*));
right_value705 = (void*)0;
right_value706 = (void*)0;
right_value707 = (void*)0;
right_value708 = (void*)0;
right_value709 = (void*)0;
right_value710 = (void*)0;
right_value711 = (void*)0;
memset(&fun_567, 0, sizeof(struct sFun*));
right_value712 = (void*)0;
right_value713 = (void*)0;
memset(&fun2_568, 0, sizeof(struct sFun*));
right_value714 = (void*)0;
right_value715 = (void*)0;
right_value716 = (void*)0;
right_value720 = (void*)0;
right_value721 = (void*)0;
memset(&new_fun_name_570, 0, sizeof(char*));
right_value722 = (void*)0;
right_value723 = (void*)0;
right_value724 = (void*)0;
right_value725 = (void*)0;
right_value726 = (void*)0;
right_value727 = (void*)0;
memset(&fun_571, 0, sizeof(struct sFun*));
right_value728 = (void*)0;
memset(&fun2_572, 0, sizeof(struct sFun*));
right_value729 = (void*)0;
memset(&source_tail_573, 0, sizeof(char*));
right_value730 = (void*)0;
right_value731 = (void*)0;
memset(&header_574, 0, sizeof(struct buffer*));
right_value732 = (void*)0;
right_value733 = (void*)0;
right_value734 = (void*)0;
right_value738 = (void*)0;
right_value739 = (void*)0;
memset(&asm_fun_576, 0, sizeof(char*));
right_value740 = (void*)0;
right_value741 = (void*)0;
right_value742 = (void*)0;
right_value743 = (void*)0;
right_value744 = (void*)0;
right_value745 = (void*)0;
memset(&fun_577, 0, sizeof(struct sFun*));
right_value746 = (void*)0;
memset(&fun2_578, 0, sizeof(struct sFun*));
right_value747 = (void*)0;
memset(&source_tail_579, 0, sizeof(char*));
right_value748 = (void*)0;
right_value749 = (void*)0;
memset(&header_580, 0, sizeof(struct buffer*));
right_value750 = (void*)0;
right_value751 = (void*)0;
right_value752 = (void*)0;
right_value756 = (void*)0;
    header_head_482=info->p;
    source_head_483=info->p;
    __dec_obj141=result_type_484;
    result_type_484=((void*)0);
    come_call_finalizer3(__dec_obj141,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj142=var_name_485;
    var_name_485=((void*)0);
    __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
    constructor__486=(_Bool)0;
    if(info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(right_value626=parse_word(info)));
        right_value626 = come_decrement_ref_count2(right_value626, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj143=result_type_484;
        result_type_484=(struct sType*)come_increment_ref_count(((struct sType*)(right_value627=sType_clone(info->impl_type))));
        come_call_finalizer3(__dec_obj143,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value627,sType_finalize, 0, 1, 0, 0, __result_obj__);
        result_type_484->mHeap=(_Bool)1;
        constructor__486=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(right_value628=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_487=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2_488=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_489=multiple_assign_var7->v3;
        come_call_finalizer3(right_value628,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj144=result_type_484;
        result_type_484=(struct sType*)come_increment_ref_count(result_type2_487);
        come_call_finalizer3(__dec_obj144,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj145=var_name_485;
        var_name_485=(char*)come_increment_ref_count(var_name2_488);
        __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(info->in_class) {
        }
        if(!err_489) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        come_call_finalizer3(result_type2_487,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name2_488 = come_decrement_ref_count2(var_name2_488, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    method_definition_490=(_Bool)0;
    {
        p_491=info->p;
        sline_492=info->sline;
        buf2_493=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value630=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value629=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1639, "buffer"))))))));
        come_call_finalizer3(right_value629,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value630,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_493,*info->p);
            info->p++;
        }
        skip_spaces_and_lf(info);
        while(*info->p==91&&*(info->p+1)==93) {
            info->p+=2;
            skip_spaces_and_lf(info);
        }
        while(*info->p==42) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        while(*info->p==37) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(buffer_length(buf2_493)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_490=(_Bool)1;
        }
        info->p=p_491;
        info->sline=sline_492;
        come_call_finalizer3(buf2_493,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_495=((void*)0);
    if(constructor__486) {
        base_fun_name_495=(char*)come_increment_ref_count(((char*)(right_value631=__builtin_string("initialize"))));
        right_value631 = come_decrement_ref_count2(right_value631, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj146=fun_name_494;
        fun_name_494=(char*)come_increment_ref_count(((char*)(right_value632=create_method_name(info->impl_type,(_Bool)0,base_fun_name_495,info,(_Bool)1))));
        __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value632 = come_decrement_ref_count2(right_value632, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        if(method_definition_490) {
            multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(right_value633=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            obj_type_496=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
            name_497=(char*)come_increment_ref_count(multiple_assign_var8->v2);
            err_498=multiple_assign_var8->v3;
            come_call_finalizer3(right_value633,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(!err_498) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            expected_next_character(58,info);
            expected_next_character(58,info);
            base_fun_name_495=(char*)come_increment_ref_count(((char*)(right_value634=parse_word(info))));
            right_value634 = come_decrement_ref_count2(right_value634, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj147=fun_name_494;
            fun_name_494=(char*)come_increment_ref_count(((char*)(right_value635=create_method_name(obj_type_496,(_Bool)0,base_fun_name_495,info,(_Bool)1))));
            __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value635 = come_decrement_ref_count2(right_value635, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(obj_type_496,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_497 = come_decrement_ref_count2(name_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(info->impl_type) {
                base_fun_name_495=(char*)come_increment_ref_count(((char*)(right_value636=parse_word(info))));
                right_value636 = come_decrement_ref_count2(right_value636, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __dec_obj148=fun_name_494;
                fun_name_494=(char*)come_increment_ref_count(((char*)(right_value637=create_method_name(info->impl_type,(_Bool)0,base_fun_name_495,info,(_Bool)1))));
                __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value637 = come_decrement_ref_count2(right_value637, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                __dec_obj149=fun_name_494;
                fun_name_494=(char*)come_increment_ref_count(((char*)(right_value638=parse_word(info))));
                __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value638 = come_decrement_ref_count2(right_value638, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                base_fun_name_495=(char*)come_increment_ref_count(((char*)(right_value639=__builtin_string(fun_name_494))));
                right_value639 = come_decrement_ref_count2(right_value639, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
    }
    if(info->in_class&&charp_operator_equals(base_fun_name_495,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var9=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value640=parse_params(info,constructor__486)));
    param_types_499=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_500=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_501=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_502=multiple_assign_var9->v4;
    come_call_finalizer3(right_value640,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    header_tail_503=info->p;
    if(info->in_class&&charp_operator_equals(base_fun_name_495,"initialize")) {
        info->in_class=(_Bool)1;
    }
    header_buf_504=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value642=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value641=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1706, "buffer"))))))));
    come_call_finalizer3(right_value641,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value642,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(header_buf_504,header_head_482,header_tail_503-header_head_482);
    buffer_append_char(header_buf_504,0);
    version_505=0;
    if(parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_506=0;
        while(xisdigit(*info->p)) {
            n_506=n_506*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_505=n_506;
    }
    if(charp_operator_equals(base_fun_name_495,"lambda")) {
        block_507=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value643=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer3(right_value643,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        static int lambda_num_508=0;
        lambda_num_508++;
        fun_name_509=(char*)come_increment_ref_count(((char*)(right_value644=xsprintf("lambda%d",lambda_num_508))));
        right_value644 = come_decrement_ref_count2(right_value644, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_484->mStatic=(_Bool)0;
        fun_510=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value649=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value645=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1736, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value646=__builtin_string(fun_name_509)))),(struct sType*)come_increment_ref_count(result_type_484),(struct list$1sTypeph*)come_increment_ref_count(param_types_499),(struct list$1charph*)come_increment_ref_count(param_names_500),(struct list$1charph*)come_increment_ref_count(param_default_parametors_501),(_Bool)0,var_args_502,(struct sBlock*)come_increment_ref_count(block_507),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value647=buffer_to_string(header_buf_504)))),(char*)come_increment_ref_count(((char*)(right_value648=__builtin_string("")))),info))));
        come_call_finalizer3(right_value645,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value646 = come_decrement_ref_count2(right_value646, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value647 = come_decrement_ref_count2(right_value647, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value648 = come_decrement_ref_count2(right_value648, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value649,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        fun2_511=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value650=__builtin_string(fun_name_509))));
        right_value650 = come_decrement_ref_count2(right_value650, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_511==((void*)0)||fun2_511->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value651=string_clone(fun_name_509)))),(struct sFun*)come_increment_ref_count(fun_510));
            right_value651 = come_decrement_ref_count2(right_value651, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        base_fun_name_495 = come_decrement_ref_count2(base_fun_name_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1748, "struct sNode");
        _inf_obj_value5=come_increment_ref_count(((struct sLambdaNode*)(right_value653=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(right_value652=(struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 1748, "sLambdaNode")))),fun_510,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result185__ = __result_obj__ = ((struct sNode*)(right_value656=_inf_value5));
        come_call_finalizer3(block_507,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_509 = come_decrement_ref_count2(fun_name_509, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_510,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_484,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_485 = come_decrement_ref_count2(var_name_485, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_494 = come_decrement_ref_count2(fun_name_494, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_499,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_500,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_501,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_504,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value652,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value653,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value656) { right_value656 = come_decrement_ref_count2(right_value656, ((struct sNode*)right_value656)->finalize, ((struct sNode*)right_value656)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result185__;
        come_call_finalizer3(block_507,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_509 = come_decrement_ref_count2(fun_name_509, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_510,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(info->impl_type&&list$1charph_length(info->generics_type_names)>0) {
            none_generics_name_513=(char*)come_increment_ref_count(((char*)(right_value657=get_none_generics_name(info->impl_type->mClass->mName))));
            right_value657 = come_decrement_ref_count2(right_value657, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            generics_sname_514=(char*)come_increment_ref_count(((char*)(right_value658=__builtin_string(info->sname))));
            right_value658 = come_decrement_ref_count2(right_value658, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            generics_sline_515=info->sline;
            block_516=(char*)come_increment_ref_count(((char*)(right_value659=skip_block(info))));
            right_value659 = come_decrement_ref_count2(right_value659, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            fun_517=(struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value665=sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value660=(struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 1758, "sGenericsFun")))),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(right_value661=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(right_value662=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(((char*)(right_value663=__builtin_string(fun_name_494)))),(struct sType*)come_increment_ref_count(result_type_484),(struct list$1sTypeph*)come_increment_ref_count(param_types_499),(struct list$1charph*)come_increment_ref_count(param_names_500),(struct list$1charph*)come_increment_ref_count(param_default_parametors_501),var_args_502,(char*)come_increment_ref_count(block_516),info,(char*)come_increment_ref_count(((char*)(right_value664=__builtin_string(generics_sname_514)))),generics_sline_515))));
            come_call_finalizer3(right_value660,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value661,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value662,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            right_value663 = come_decrement_ref_count2(right_value663, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value664 = come_decrement_ref_count2(right_value664, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value665,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
            fun_name3_518=(char*)come_increment_ref_count(((char*)(right_value666=xsprintf("%s_%s",none_generics_name_513,base_fun_name_495))));
            right_value666 = come_decrement_ref_count2(right_value666, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(((char*)(right_value670=__builtin_string(fun_name3_518)))),(struct sGenericsFun*)come_increment_ref_count(fun_517));
            right_value670 = come_decrement_ref_count2(right_value670, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            base_fun_name_495 = come_decrement_ref_count2(base_fun_name_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            __result197__ = __result_obj__ = (struct sNode*)((void*)0);
            none_generics_name_513 = come_decrement_ref_count2(none_generics_name_513, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_sname_514 = come_decrement_ref_count2(generics_sname_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_516 = come_decrement_ref_count2(block_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_517,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            fun_name3_518 = come_decrement_ref_count2(fun_name3_518, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_484,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_485 = come_decrement_ref_count2(var_name_485, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_494 = come_decrement_ref_count2(fun_name_494, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_499,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_500,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_501,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_504,buffer_finalize, 0, 0, 0, 0, (void*)0);
            return __result197__;
            none_generics_name_513 = come_decrement_ref_count2(none_generics_name_513, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_sname_514 = come_decrement_ref_count2(generics_sname_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_516 = come_decrement_ref_count2(block_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_517,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            fun_name3_518 = come_decrement_ref_count2(fun_name3_518, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(list$1charph_length(info->method_generics_type_names)>0) {
                generics_sname_540=(char*)come_increment_ref_count(((char*)(right_value671=__builtin_string(info->sname))));
                right_value671 = come_decrement_ref_count2(right_value671, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                generics_sline_541=info->sline;
                block_542=(char*)come_increment_ref_count(((char*)(right_value672=skip_block(info))));
                right_value672 = come_decrement_ref_count2(right_value672, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                fun_543=(struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value678=sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value673=(struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 1774, "sGenericsFun")))),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(right_value674=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(right_value675=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(((char*)(right_value676=__builtin_string(fun_name_494)))),(struct sType*)come_increment_ref_count(result_type_484),(struct list$1sTypeph*)come_increment_ref_count(param_types_499),(struct list$1charph*)come_increment_ref_count(param_names_500),(struct list$1charph*)come_increment_ref_count(param_default_parametors_501),var_args_502,(char*)come_increment_ref_count(block_542),info,(char*)come_increment_ref_count(((char*)(right_value677=__builtin_string(generics_sname_540)))),generics_sline_541))));
                come_call_finalizer3(right_value673,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value674,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value675,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                right_value676 = come_decrement_ref_count2(right_value676, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value677 = come_decrement_ref_count2(right_value677, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value678,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
                fun_name3_544=(char*)come_increment_ref_count(((char*)(right_value679=charp_clone(base_fun_name_495))));
                right_value679 = come_decrement_ref_count2(right_value679, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(((char*)(right_value680=__builtin_string(fun_name3_544)))),(struct sGenericsFun*)come_increment_ref_count(fun_543));
                right_value680 = come_decrement_ref_count2(right_value680, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                base_fun_name_495 = come_decrement_ref_count2(base_fun_name_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                __result198__ = __result_obj__ = (struct sNode*)((void*)0);
                generics_sname_540 = come_decrement_ref_count2(generics_sname_540, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_542 = come_decrement_ref_count2(block_542, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_543,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_544 = come_decrement_ref_count2(fun_name3_544, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_484,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_485 = come_decrement_ref_count2(var_name_485, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name_494 = come_decrement_ref_count2(fun_name_494, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_499,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_500,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_501,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_buf_504,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result198__;
                generics_sname_540 = come_decrement_ref_count2(generics_sname_540, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_542 = come_decrement_ref_count2(block_542, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_543,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_544 = come_decrement_ref_count2(fun_name3_544, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(*info->p==123) {
                    source_tail_545=info->p-1;
                    header_546=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value682=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value681=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1787, "buffer"))))))));
                    come_call_finalizer3(right_value681,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value682,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                    if(constructor__486) {
                        if(list$1sTypeph_length(param_types_499)==1) {
                            name_547=(char*)come_increment_ref_count(((char*)(right_value683=string_clone(info->impl_type->mClass->mName))));
                            right_value683 = come_decrement_ref_count2(right_value683, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            buffer_append_str(header_546,((char*)(right_value684=xsprintf("extern %s*%% %s*::initialize(%s*%% self);\n",name_547,name_547,name_547))));
                            right_value684 = come_decrement_ref_count2(right_value684, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            name_547 = come_decrement_ref_count2(name_547, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        else {
                            name_548=(char*)come_increment_ref_count(((char*)(right_value685=string_clone(info->impl_type->mClass->mName))));
                            right_value685 = come_decrement_ref_count2(right_value685, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            buffer_append_str(header_546,((char*)(right_value686=xsprintf("extern %s*%% %s*::initialize(%s*%% self, ",name_548,name_548,name_548))));
                            right_value686 = come_decrement_ref_count2(right_value686, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            for(                            i_549=1;                            i_549<list$1sTypeph_length(param_types_499);                            i_549++                            ){
                                param_type_550=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_499,i_549), "05function.c", 1799, 1));
                                param_name_554=((char*)come_null_check(list$1charphp_operator_load_element(param_names_500,i_549), "05function.c", 1800, 2));
                                default_parametor_555=list$1charphp_operator_load_element(param_default_parametors_501,i_549);
                                if(default_parametor_555) {
                                    buffer_append_str(header_546,((char*)(right_value688=xsprintf("extern %s %s=%s",((char*)(right_value687=make_come_type_name_string_no_solved(param_type_550,info))),param_name_554,default_parametor_555))));
                                    right_value687 = come_decrement_ref_count2(right_value687, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    right_value688 = come_decrement_ref_count2(right_value688, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    buffer_append_str(header_546,((char*)(right_value690=xsprintf("extern %s %s",((char*)(right_value689=make_come_type_name_string_no_solved(param_type_550,info))),param_name_554))));
                                    right_value689 = come_decrement_ref_count2(right_value689, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    right_value690 = come_decrement_ref_count2(right_value690, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(i_549!=list$1sTypeph_length(param_types_499)-1) {
                                    buffer_append_str(header_546,",");
                                }
                            }
                            buffer_append_str(header_546,");\n");
                            name_548 = come_decrement_ref_count2(name_548, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        if(info->in_class&&info->impl_type) {
                            if(list$1sTypeph_length(param_types_499)==1) {
                                impl_name_556=(char*)come_increment_ref_count(((char*)(right_value691=string_clone(info->impl_type->mClass->mName))));
                                right_value691 = come_decrement_ref_count2(right_value691, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                result_type_name_557=(char*)come_increment_ref_count(((char*)(right_value692=make_come_type_name_string_no_solved(result_type_484,info))));
                                right_value692 = come_decrement_ref_count2(right_value692, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                buffer_append_str(header_546,((char*)(right_value693=xsprintf("extern %s %s*::%s(%s* self);\n",result_type_name_557,impl_name_556,base_fun_name_495,impl_name_556))));
                                right_value693 = come_decrement_ref_count2(right_value693, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                impl_name_556 = come_decrement_ref_count2(impl_name_556, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                result_type_name_557 = come_decrement_ref_count2(result_type_name_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                impl_name_558=(char*)come_increment_ref_count(((char*)(right_value694=string_clone(info->impl_type->mClass->mName))));
                                right_value694 = come_decrement_ref_count2(right_value694, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                result_type_name_559=(char*)come_increment_ref_count(((char*)(right_value695=make_come_type_name_string_no_solved(result_type_484,info))));
                                right_value695 = come_decrement_ref_count2(right_value695, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                buffer_append_str(header_546,((char*)(right_value696=xsprintf("extern %s %s*::%s(%s* self, ",result_type_name_559,impl_name_558,base_fun_name_495,impl_name_558))));
                                right_value696 = come_decrement_ref_count2(right_value696, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                for(                                i_560=1;                                i_560<list$1sTypeph_length(param_types_499);                                i_560++                                ){
                                    param_type_561=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_499,i_560), "05function.c", 1830, 3));
                                    param_name_562=((char*)come_null_check(list$1charphp_operator_load_element(param_names_500,i_560), "05function.c", 1831, 4));
                                    default_parametor_563=list$1charphp_operator_load_element(param_default_parametors_501,i_560);
                                    if(default_parametor_563) {
                                        buffer_append_str(header_546,((char*)(right_value698=xsprintf("extern %s %s=%s",((char*)(right_value697=make_come_type_name_string_no_solved(param_type_561,info))),param_name_562,default_parametor_563))));
                                        right_value697 = come_decrement_ref_count2(right_value697, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value698 = come_decrement_ref_count2(right_value698, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    else {
                                        buffer_append_str(header_546,((char*)(right_value700=xsprintf("extern %s %s",((char*)(right_value699=make_come_type_name_string_no_solved(param_type_561,info))),param_name_562))));
                                        right_value699 = come_decrement_ref_count2(right_value699, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value700 = come_decrement_ref_count2(right_value700, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(i_560!=list$1sTypeph_length(param_types_499)-1) {
                                        buffer_append_str(header_546,",");
                                    }
                                }
                                buffer_append_str(header_546,");\n");
                                impl_name_558 = come_decrement_ref_count2(impl_name_558, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                result_type_name_559 = come_decrement_ref_count2(result_type_name_559, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        else {
                            buffer_append(header_546,source_head_483,source_tail_545-source_head_483);
                            buffer_append_str(header_546,";\n");
                        }
                    }
                    if(!result_type_484->mStatic) {
                        add_come_code_at_come_header(info,"%s",((char*)(right_value701=buffer_to_string(header_546))));
                        right_value701 = come_decrement_ref_count2(right_value701, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    block_564=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value702=parse_block(info,(_Bool)0,constructor__486))));
                    come_call_finalizer3(right_value702,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
                    static__565=(_Bool)0;
                    if(result_type_484->mStatic) {
                        result_type_484->mStatic=(_Bool)0;
                        static__565=(_Bool)1;
                    }
                    if(version_505>0) {
                        new_fun_name_566=(char*)come_increment_ref_count(((char*)(right_value704=xsprintf("%s_v%d",((char*)(right_value703=__builtin_string(fun_name_494))),version_505))));
                        right_value703 = come_decrement_ref_count2(right_value703, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value704 = come_decrement_ref_count2(right_value704, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        __dec_obj151=fun_name_494;
                        fun_name_494=(char*)come_increment_ref_count(((char*)(right_value705=__builtin_string(new_fun_name_566))));
                        __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value705 = come_decrement_ref_count2(right_value705, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        new_fun_name_566 = come_decrement_ref_count2(new_fun_name_566, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    fun_567=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value711=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value706=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1871, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value707=__builtin_string(fun_name_494)))),(struct sType*)come_increment_ref_count(result_type_484),(struct list$1sTypeph*)come_increment_ref_count(param_types_499),(struct list$1charph*)come_increment_ref_count(param_names_500),(struct list$1charph*)come_increment_ref_count(param_default_parametors_501),(_Bool)0,var_args_502,(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value708=sBlock_clone(block_564)))),static__565,(char*)come_increment_ref_count(((char*)(right_value709=buffer_to_string(header_buf_504)))),(char*)come_increment_ref_count(((char*)(right_value710=__builtin_string(info->sname)))),info))));
                    come_call_finalizer3(right_value706,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                    right_value707 = come_decrement_ref_count2(right_value707, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value708,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
                    right_value709 = come_decrement_ref_count2(right_value709, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value710 = come_decrement_ref_count2(right_value710, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value711,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                    if(info->in_class) {
                        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value712=string_clone(fun_name_494)))),(struct sFun*)come_increment_ref_count(fun_567));
                        right_value712 = come_decrement_ref_count2(right_value712, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        fun2_568=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value713=__builtin_string(fun_name_494))));
                        right_value713 = come_decrement_ref_count2(right_value713, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(fun2_568==((void*)0)||fun2_568->mExternal) {
                            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value714=string_clone(fun_name_494)))),(struct sFun*)come_increment_ref_count(fun_567));
                            right_value714 = come_decrement_ref_count2(right_value714, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                    }
                    base_fun_name_495 = come_decrement_ref_count2(base_fun_name_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1893, "struct sNode");
                    _inf_obj_value6=come_increment_ref_count(((struct sFunNode*)(right_value716=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value715=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1893, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_567),info))));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sFunNode_finalize;
                    _inf_value6->clone=(void*)sFunNode_clone;
                    _inf_value6->compile=(void*)sFunNode_compile;
                    _inf_value6->sline=(void*)sNodeBase_sline;
                    _inf_value6->sname=(void*)sNodeBase_sname;
                    _inf_value6->terminated=(void*)sNodeBase_terminated;
                    _inf_value6->kind=(void*)sFunNode_kind;
                    __result203__ = __result_obj__ = ((struct sNode*)(right_value720=_inf_value6));
                    come_call_finalizer3(header_546,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(block_564,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(fun_567,sFun_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_484,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_485 = come_decrement_ref_count2(var_name_485, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_494 = come_decrement_ref_count2(fun_name_494, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_499,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_names_500,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_default_parametors_501,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(header_buf_504,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value715,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value716,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value720) { right_value720 = come_decrement_ref_count2(right_value720, ((struct sNode*)right_value720)->finalize, ((struct sNode*)right_value720)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result203__;
                    come_call_finalizer3(header_546,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(block_564,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(fun_567,sFun_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(xisalpha(*info->p)||*info->p==95||*info->p==59) {
                        if(version_505>0) {
                            new_fun_name_570=(char*)come_increment_ref_count(((char*)(right_value721=xsprintf("%s_v%d",fun_name_494,version_505))));
                            right_value721 = come_decrement_ref_count2(right_value721, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            __dec_obj154=fun_name_494;
                            fun_name_494=(char*)come_increment_ref_count(((char*)(right_value722=__builtin_string(new_fun_name_570))));
                            __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value722 = come_decrement_ref_count2(right_value722, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            new_fun_name_570 = come_decrement_ref_count2(new_fun_name_570, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(*info->p==59) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            result_type_484->mStatic=(_Bool)0;
                            fun_571=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value727=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value723=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1907, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value724=__builtin_string(fun_name_494)))),(struct sType*)come_increment_ref_count(result_type_484),(struct list$1sTypeph*)come_increment_ref_count(param_types_499),(struct list$1charph*)come_increment_ref_count(param_names_500),(struct list$1charph*)come_increment_ref_count(param_default_parametors_501),(_Bool)1,var_args_502,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value725=buffer_to_string(header_buf_504)))),(char*)come_increment_ref_count(((char*)(right_value726=__builtin_string(info->sname)))),info))));
                            come_call_finalizer3(right_value723,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                            right_value724 = come_decrement_ref_count2(right_value724, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value725 = come_decrement_ref_count2(right_value725, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value726 = come_decrement_ref_count2(right_value726, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value727,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                            fun2_572=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value728=__builtin_string(fun_name_494))));
                            right_value728 = come_decrement_ref_count2(right_value728, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(fun2_572==((void*)0)||fun2_572->mExternal) {
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value729=string_clone(fun_name_494)))),(struct sFun*)come_increment_ref_count(fun_571));
                                right_value729 = come_decrement_ref_count2(right_value729, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            base_fun_name_495 = come_decrement_ref_count2(base_fun_name_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            source_tail_573=info->p;
                            header_574=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value731=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value730=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1923, "buffer"))))))));
                            come_call_finalizer3(right_value730,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value731,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            buffer_append(header_574,source_head_483,source_tail_573-source_head_483);
                            add_come_code_at_come_header(info,"%s",((char*)(right_value732=buffer_to_string(header_574))));
                            right_value732 = come_decrement_ref_count2(right_value732, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1928, "struct sNode");
                            _inf_obj_value7=come_increment_ref_count(((struct sFunNode*)(right_value734=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value733=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1928, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_571),info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sFunNode_finalize;
                            _inf_value7->clone=(void*)sFunNode_clone;
                            _inf_value7->compile=(void*)sFunNode_compile;
                            _inf_value7->sline=(void*)sNodeBase_sline;
                            _inf_value7->sname=(void*)sNodeBase_sname;
                            _inf_value7->terminated=(void*)sNodeBase_terminated;
                            _inf_value7->kind=(void*)sFunNode_kind;
                            __result206__ = __result_obj__ = ((struct sNode*)(right_value738=_inf_value7));
                            come_call_finalizer3(fun_571,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_574,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type_484,sType_finalize, 0, 0, 0, 0, (void*)0);
                            var_name_485 = come_decrement_ref_count2(var_name_485, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            fun_name_494 = come_decrement_ref_count2(fun_name_494, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_499,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_names_500,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_default_parametors_501,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_buf_504,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value733,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value734,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value738) { right_value738 = come_decrement_ref_count2(right_value738, ((struct sNode*)right_value738)->finalize, ((struct sNode*)right_value738)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result206__;
                            come_call_finalizer3(fun_571,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_574,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            asm_fun_576=(char*)come_increment_ref_count(((char*)(right_value739=parse_attribute(info))));
                            right_value739 = come_decrement_ref_count2(right_value739, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(string_operator_not_equals(asm_fun_576,"")) {
                                __dec_obj157=fun_name_494;
                                fun_name_494=(char*)come_increment_ref_count(((char*)(right_value740=__builtin_string(asm_fun_576))));
                                __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value740 = come_decrement_ref_count2(right_value740, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            expected_next_character(59,info);
                            result_type_484->mStatic=(_Bool)0;
                            fun_577=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value745=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value741=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1941, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value742=__builtin_string(fun_name_494)))),(struct sType*)come_increment_ref_count(result_type_484),(struct list$1sTypeph*)come_increment_ref_count(param_types_499),(struct list$1charph*)come_increment_ref_count(param_names_500),(struct list$1charph*)come_increment_ref_count(param_default_parametors_501),(_Bool)1,var_args_502,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value743=buffer_to_string(header_buf_504)))),(char*)come_increment_ref_count(((char*)(right_value744=__builtin_string(info->sname)))),info))));
                            come_call_finalizer3(right_value741,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                            right_value742 = come_decrement_ref_count2(right_value742, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value743 = come_decrement_ref_count2(right_value743, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value744 = come_decrement_ref_count2(right_value744, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value745,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                            fun2_578=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value746=__builtin_string(fun_name_494))));
                            right_value746 = come_decrement_ref_count2(right_value746, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(fun2_578==((void*)0)||fun2_578->mExternal) {
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value747=string_clone(fun_name_494)))),(struct sFun*)come_increment_ref_count(fun_577));
                                right_value747 = come_decrement_ref_count2(right_value747, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            base_fun_name_495 = come_decrement_ref_count2(base_fun_name_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            source_tail_579=info->p;
                            header_580=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value749=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value748=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1957, "buffer"))))))));
                            come_call_finalizer3(right_value748,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value749,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            buffer_append(header_580,source_head_483,source_tail_579-source_head_483);
                            add_come_code_at_come_header(info,"%s",((char*)(right_value750=buffer_to_string(header_580))));
                            right_value750 = come_decrement_ref_count2(right_value750, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1962, "struct sNode");
                            _inf_obj_value8=come_increment_ref_count(((struct sFunNode*)(right_value752=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value751=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1962, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_577),info))));
                            _inf_value8->_protocol_obj=_inf_obj_value8;
                            _inf_value8->finalize=(void*)sFunNode_finalize;
                            _inf_value8->clone=(void*)sFunNode_clone;
                            _inf_value8->compile=(void*)sFunNode_compile;
                            _inf_value8->sline=(void*)sNodeBase_sline;
                            _inf_value8->sname=(void*)sNodeBase_sname;
                            _inf_value8->terminated=(void*)sNodeBase_terminated;
                            _inf_value8->kind=(void*)sFunNode_kind;
                            __result209__ = __result_obj__ = ((struct sNode*)(right_value756=_inf_value8));
                            asm_fun_576 = come_decrement_ref_count2(asm_fun_576, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(fun_577,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_580,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type_484,sType_finalize, 0, 0, 0, 0, (void*)0);
                            var_name_485 = come_decrement_ref_count2(var_name_485, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            fun_name_494 = come_decrement_ref_count2(fun_name_494, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_499,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_names_500,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_default_parametors_501,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_buf_504,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value751,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value752,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value756) { right_value756 = come_decrement_ref_count2(right_value756, ((struct sNode*)right_value756)->finalize, ((struct sNode*)right_value756)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result209__;
                            asm_fun_576 = come_decrement_ref_count2(asm_fun_576, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(fun_577,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_580,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        err_msg(info,"invalid character(%c)(2)\n",*info->p);
                        exit(2);
                    }
                }
            }
        }
    }
    info->constructor_=(_Bool)0;
    base_fun_name_495 = come_decrement_ref_count2(base_fun_name_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result210__ = __result_obj__ = (struct sNode*)((void*)0);
    come_call_finalizer3(result_type_484,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_485 = come_decrement_ref_count2(var_name_485, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_494 = come_decrement_ref_count2(fun_name_494, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_499,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_500,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_501,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(header_buf_504,buffer_finalize, 0, 0, 0, 0, (void*)0);
    return __result210__;
    come_call_finalizer3(result_type_484,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_485 = come_decrement_ref_count2(var_name_485, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_494 = come_decrement_ref_count2(fun_name_494, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_499,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_500,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_501,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(header_buf_504,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
        if(self!=((void*)0)&&self->v1!=((void*)0)) {
            come_call_finalizer3(self->v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->v2!=((void*)0)) {
            come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->v3!=((void*)0)) {
            come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* __result_obj__;
struct sLambdaNode* __result183__;
void* right_value654;
struct sLambdaNode* result_512;
void* right_value655;
char* __dec_obj150;
struct sLambdaNode* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
right_value654 = (void*)0;
memset(&result_512, 0, sizeof(struct sLambdaNode*));
right_value655 = (void*)0;
            if(self==(void*)0) {
                __result183__ = __result_obj__ = (void*)0;
                return __result183__;
            }
            result_512=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(right_value654=(struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "sLambdaNode"))));
            come_call_finalizer3(right_value654,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(self!=((void*)0)) {
                result_512->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj150=result_512->sname;
                result_512->sname=(char*)come_increment_ref_count(((char*)(right_value655=string_clone(self->sname))));
                __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value655 = come_decrement_ref_count2(right_value655, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(self!=((void*)0)) {
                result_512->mFun=self->mFun;
            }
            __result184__ = __result_obj__ = result_512;
            come_call_finalizer3(result_512,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
            return __result184__;
            come_call_finalizer3(result_512,sLambdaNode_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1charph_length(struct list$1charph* self){
            if(self==((void*)0)) {
                return 0;
            }
            return self->len;
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
void* __result_obj__;
unsigned int hash_536;
unsigned int it_537;
_Bool same_key_exist_538;
char* it2_539;
struct map$2charphsGenericsFunph* __result196__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_536, 0, sizeof(unsigned int));
memset(&it_537, 0, sizeof(unsigned int));
memset(&same_key_exist_538, 0, sizeof(_Bool));
memset(&it2_539, 0, sizeof(char*));
                if(self->len*10>=self->size) {
                    map$2charphsGenericsFunph_rehash(self);
                }
                hash_536=string_get_hash_key(key)%self->size;
                it_537=hash_536;
                while((_Bool)1) {
                    if(self->item_existance[it_537]) {
                        if(string_equals(self->keys[it_537],key)) {
                            if(1) {
                                list$1charp_remove(self->key_list,self->keys[it_537]);
                                self->keys[it_537] = come_decrement_ref_count2(self->keys[it_537], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                self->keys[it_537]=(char*)come_increment_ref_count(key);
                            }
                            else {
                                list$1charp_remove(self->key_list,self->keys[it_537]);
                                self->keys[it_537]=key;
                            }
                            if(1) {
                                come_call_finalizer3(self->items[it_537],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                                self->items[it_537]=(struct sGenericsFun*)come_increment_ref_count(item);
                            }
                            else {
                                self->items[it_537]=item;
                            }
                            break;
                        }
                        it_537++;
                        if(it_537>=self->size) {
                            it_537=0;
                        }
                        else {
                            if(it_537==hash_536) {
                                printf("unexpected error in map.insert\n");
                                stackframe();
                                exit(2);
                            }
                        }
                    }
                    else {
                        self->item_existance[it_537]=(_Bool)1;
                        if(1) {
                            self->keys[it_537]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            self->keys[it_537]=key;
                        }
                        if(1) {
                            self->items[it_537]=(struct sGenericsFun*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_537]=item;
                        }
                        self->len++;
                        break;
                    }
                }
                same_key_exist_538=(_Bool)0;
                for(                it2_539=list$1charp_begin(self->key_list);                !list$1charp_end(self->key_list);                it2_539=list$1charp_next(self->key_list)                ){
                    if(string_equals(it2_539,key)) {
                        same_key_exist_538=(_Bool)1;
                    }
                }
                if(!same_key_exist_538) {
                    list$1charp_push_back(self->key_list,key);
                }
                __result196__ = __result_obj__ = self;
                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer3(item,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result196__;
                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer3(item,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self){
int size_519;
void* right_value667;
char** keys_520;
void* right_value668;
struct sGenericsFun** items_521;
void* right_value669;
_Bool* item_existance_522;
int len_523;
char* it_526;
struct sGenericsFun* default_value_529;
struct sGenericsFun* it2_530;
unsigned int hash_533;
int n_534;
struct sGenericsFun* default_value_535;
memset(&size_519, 0, sizeof(int));
right_value667 = (void*)0;
memset(&keys_520, 0, sizeof(char**));
right_value668 = (void*)0;
memset(&items_521, 0, sizeof(struct sGenericsFun**));
right_value669 = (void*)0;
memset(&item_existance_522, 0, sizeof(_Bool*));
memset(&len_523, 0, sizeof(int));
memset(&it_526, 0, sizeof(char*));
memset(&default_value_529, 0, sizeof(struct sGenericsFun*));
memset(&it2_530, 0, sizeof(struct sGenericsFun*));
memset(&hash_533, 0, sizeof(unsigned int));
memset(&n_534, 0, sizeof(int));
memset(&default_value_535, 0, sizeof(struct sGenericsFun*));
                        size_519=self->size*10;
                        keys_520=(char**)come_increment_ref_count(((char**)(right_value667=(char**)come_calloc(1, sizeof(char*)*(1*(size_519)), "./neo-c.h", 1315, "char*%"))));
                        right_value667 = come_decrement_ref_count2(right_value667, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        items_521=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(right_value668=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_519)), "./neo-c.h", 1316, "sGenericsFun*%"))));
                        come_call_finalizer3(right_value668,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
                        item_existance_522=(_Bool*)come_increment_ref_count(((_Bool*)(right_value669=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_519)), "./neo-c.h", 1317, "bool"))));
                        right_value669 = come_decrement_ref_count2(right_value669, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        len_523=0;
                        for(                        it_526=map$2charphsGenericsFunph_begin(self);                        !map$2charphsGenericsFunph_end(self);                        it_526=map$2charphsGenericsFunph_next(self)                        ){
                            memset(&default_value_529,0,sizeof(struct sGenericsFun*));
                            it2_530=map$2charphsGenericsFunph_at(self,it_526,default_value_529);
                            hash_533=string_get_hash_key(it_526)%size_519;
                            n_534=hash_533;
                            while((_Bool)1) {
                                if(item_existance_522[n_534]) {
                                    n_534++;
                                    if(n_534>=size_519) {
                                        n_534=0;
                                    }
                                    else {
                                        if(n_534==hash_533) {
                                            printf("unexpected error in map.rehash(1)\n");
                                            stackframe();
                                            exit(2);
                                        }
                                    }
                                }
                                else {
                                    item_existance_522[n_534]=(_Bool)1;
                                    keys_520[n_534]=it_526;
                                    items_521[n_534]=map$2charphsGenericsFunph_at(self,it_526,default_value_535);
                                    len_523++;
                                    break;
                                }
                            }
                        }
                        come_free((char*)self->items);
                        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_free((char*)self->keys);
                        self->keys=keys_520;
                        self->items=items_521;
                        self->item_existance=item_existance_522;
                        self->size=size_519;
                        self->len=len_523;
}

static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
char* result_524;
char* __result186__;
char* __result187__;
char* result_525;
char* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_524, 0, sizeof(char*));
memset(&result_525, 0, sizeof(char*));
                            if(self==((void*)0)) {
                                memset(&result_524,0,sizeof(char*));
                                __result186__ = __result_obj__ = result_524;
                                return __result186__;
                            }
                            self->key_list->it=self->key_list->head;
                            if(self->key_list->it) {
                                __result187__ = __result_obj__ = self->key_list->it->item;
                                return __result187__;
                            }
                            memset(&result_525,0,sizeof(char*));
                            __result188__ = __result_obj__ = result_525;
                            return __result188__;
}

static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self){
                            return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
char* result_527;
char* __result189__;
char* __result190__;
char* result_528;
char* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_527, 0, sizeof(char*));
memset(&result_528, 0, sizeof(char*));
                            if(self==((void*)0)||self->key_list->it==((void*)0)) {
                                memset(&result_527,0,sizeof(char*));
                                __result189__ = __result_obj__ = result_527;
                                return __result189__;
                            }
                            self->key_list->it=self->key_list->it->next;
                            if(self->key_list->it) {
                                __result190__ = __result_obj__ = self->key_list->it->item;
                                return __result190__;
                            }
                            memset(&result_528,0,sizeof(char*));
                            __result191__ = __result_obj__ = result_528;
                            return __result191__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_531;
unsigned int it_532;
struct sGenericsFun* __result192__;
struct sGenericsFun* __result193__;
struct sGenericsFun* __result194__;
struct sGenericsFun* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_531, 0, sizeof(unsigned int));
memset(&it_532, 0, sizeof(unsigned int));
                                hash_531=string_get_hash_key(((char*)key))%self->size;
                                it_532=hash_531;
                                while((_Bool)1) {
                                    if(self->item_existance[it_532]) {
                                        if(string_equals(self->keys[it_532],key)) {
                                            __result192__ = __result_obj__ = self->items[it_532];
                                            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result192__;
                                        }
                                        it_532++;
                                        if(it_532>=self->size) {
                                            it_532=0;
                                        }
                                        else {
                                            if(it_532==hash_531) {
                                                __result193__ = __result_obj__ = default_value;
                                                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result193__;
                                            }
                                        }
                                    }
                                    else {
                                        __result194__ = __result_obj__ = default_value;
                                        come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result194__;
                                    }
                                }
                                __result195__ = __result_obj__ = default_value;
                                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result195__;
                                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
                            if(self==((void*)0)) {
                                return 0;
                            }
                            return self->len;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
struct list_item$1charph* it_551;
int i_552;
char* __result199__;
char* default_value_553;
char* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_551, 0, sizeof(struct list_item$1charph*));
memset(&i_552, 0, sizeof(int));
memset(&default_value_553, 0, sizeof(char*));
                                    if(position<0) {
                                        position+=self->len;
                                    }
                                    it_551=self->head;
                                    i_552=0;
                                    while(it_551!=((void*)0)) {
                                        if(position==i_552) {
                                            __result199__ = __result_obj__ = it_551->item;
                                            return __result199__;
                                        }
                                        it_551=it_551->next;
                                        i_552++;
                                    }
                                    memset(&default_value_553,0,sizeof(char*));
                                    __result200__ = __result_obj__ = default_value_553;
                                    default_value_553 = come_decrement_ref_count2(default_value_553, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                    return __result200__;
                                    default_value_553 = come_decrement_ref_count2(default_value_553, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_582;
char* __dec_obj160;
char* last_code2_583;
char* __dec_obj161;
char* last_code3_584;
char* __dec_obj162;
struct sClass* current_stack_frame_struct_585;
struct sFun* finalizer_586;
void* right_value757;
char* real_fun_name_587;
void* right_value758;
char* user_real_fun_name_588;
struct sFun* user_finalizer_589;
void* right_value759;
struct sType* type2_590;
struct sClass* klass_591;
void* right_value760;
void* right_value761;
struct buffer* source_592;
struct list$1tuple2$2charphsTypephph* o2_saved_594;
struct tuple2$2charphsTypeph* it_597;
struct tuple2$2charphsTypeph* multiple_assign_var10;
char* name_600;
struct sType* field_type_601;
char* p_603;
int sline_604;
char* sname_605;
char* head_606;
struct buffer* source3_607;
struct buffer* __dec_obj163;
void* right_value762;
char* __dec_obj164;
void* right_value763;
struct sBlock* block_608;
void* right_value764;
void* right_value765;
struct sType* result_type_609;
void* right_value766;
char* name_610;
void* right_value767;
struct sType* self_type_611;
struct sType* __list_values21___612[1];
void* right_value768;
void* right_value769;
struct list$1sTypeph* param_types_613;
void* right_value770;
char* __list_values22___614[1];
void* right_value771;
void* right_value772;
struct list$1charph* param_names_615;
void* right_value773;
void* right_value774;
struct list$1charph* param_default_parametors_616;
void* right_value775;
void* right_value776;
struct buffer* header_buf_617;
void* right_value777;
int i_618;
struct sType* param_type_619;
char* param_name_620;
void* right_value778;
void* right_value779;
void* right_value780;
void* right_value781;
void* right_value782;
struct sFun* fun_621;
void* right_value783;
struct sFun* fun2_622;
void* right_value784;
void* right_value785;
void* right_value786;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* right_value790;
struct sNode* node_623;
struct buffer* __dec_obj167;
char* __dec_obj168;
char* __dec_obj169;
char* __dec_obj170;
char* __dec_obj171;
void* right_value791;
void* right_value792;
struct tuple2$2sFunpcharph* __result220__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_582, 0, sizeof(char*));
memset(&last_code2_583, 0, sizeof(char*));
memset(&last_code3_584, 0, sizeof(char*));
memset(&current_stack_frame_struct_585, 0, sizeof(struct sClass*));
memset(&finalizer_586, 0, sizeof(struct sFun*));
right_value757 = (void*)0;
memset(&real_fun_name_587, 0, sizeof(char*));
right_value758 = (void*)0;
memset(&user_real_fun_name_588, 0, sizeof(char*));
memset(&user_finalizer_589, 0, sizeof(struct sFun*));
right_value759 = (void*)0;
memset(&type2_590, 0, sizeof(struct sType*));
memset(&klass_591, 0, sizeof(struct sClass*));
right_value760 = (void*)0;
right_value761 = (void*)0;
memset(&source_592, 0, sizeof(struct buffer*));
memset(&o2_saved_594, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_597, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&p_603, 0, sizeof(char*));
memset(&sline_604, 0, sizeof(int));
memset(&sname_605, 0, sizeof(char*));
memset(&head_606, 0, sizeof(char*));
memset(&source3_607, 0, sizeof(struct buffer*));
right_value762 = (void*)0;
right_value763 = (void*)0;
memset(&block_608, 0, sizeof(struct sBlock*));
right_value764 = (void*)0;
right_value765 = (void*)0;
memset(&result_type_609, 0, sizeof(struct sType*));
right_value766 = (void*)0;
memset(&name_610, 0, sizeof(char*));
right_value767 = (void*)0;
memset(&self_type_611, 0, sizeof(struct sType*));
right_value768 = (void*)0;
right_value769 = (void*)0;
memset(&param_types_613, 0, sizeof(struct list$1sTypeph*));
right_value770 = (void*)0;
right_value771 = (void*)0;
right_value772 = (void*)0;
memset(&param_names_615, 0, sizeof(struct list$1charph*));
right_value773 = (void*)0;
right_value774 = (void*)0;
memset(&param_default_parametors_616, 0, sizeof(struct list$1charph*));
right_value775 = (void*)0;
right_value776 = (void*)0;
memset(&header_buf_617, 0, sizeof(struct buffer*));
right_value777 = (void*)0;
memset(&i_618, 0, sizeof(int));
memset(&param_type_619, 0, sizeof(struct sType*));
memset(&param_name_620, 0, sizeof(char*));
right_value778 = (void*)0;
right_value779 = (void*)0;
right_value780 = (void*)0;
right_value781 = (void*)0;
right_value782 = (void*)0;
memset(&fun_621, 0, sizeof(struct sFun*));
right_value783 = (void*)0;
memset(&fun2_622, 0, sizeof(struct sFun*));
right_value784 = (void*)0;
right_value785 = (void*)0;
right_value786 = (void*)0;
right_value790 = (void*)0;
memset(&node_623, 0, sizeof(struct sNode*));
right_value791 = (void*)0;
right_value792 = (void*)0;
    last_code_582=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj160=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_583=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj161=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_584=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj162=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_585=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_586=((void*)0);
    real_fun_name_587=(char*)come_increment_ref_count(((char*)(right_value757=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value757 = come_decrement_ref_count2(right_value757, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    user_real_fun_name_588=(char*)come_increment_ref_count(((char*)(right_value758=create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1))));
    right_value758 = come_decrement_ref_count2(right_value758, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    user_finalizer_589=map$2charphsFunphp_operator_load_element(info->funcs,user_real_fun_name_588);
    type2_590=(struct sType*)come_increment_ref_count(((struct sType*)(right_value759=solve_generics(type,type,info))));
    come_call_finalizer3(right_value759,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type=type2_590;
    klass_591=type->mClass;
    if(type->mPointerNum>0&&klass_591->mStruct) {
        source_592=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value761=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value760=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2003, "buffer"))))))));
        come_call_finalizer3(right_value760,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value761,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_592,123);
        if(user_finalizer_589) {
            char source2_593[1024];
            memset(&source2_593, 0, sizeof(char)            *(1024)            );
            snprintf(source2_593,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_588);
            buffer_append_str(source_592,source2_593);
        }
        klass_591=map$2charphsClassphp_operator_load_element(info->classes,klass_591->mName);
        for(        o2_saved_594=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_591->mFields)),it_597=list$1tuple2$2charphsTypephph_begin((o2_saved_594));        !list$1tuple2$2charphsTypephph_end((o2_saved_594));        it_597=list$1tuple2$2charphsTypephph_next((o2_saved_594))        ){
            multiple_assign_var10=it_597;
            name_600=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            field_type_601=(struct sType*)come_increment_ref_count(multiple_assign_var10->v2);
            if(string_operator_equals(type->mClass->mName,field_type_601->mClass->mName)&&type->mPointerNum==field_type_601->mPointerNum&&field_type_601->mHeap) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(field_type_601->mHeap) {
                char source2_602[1024];
                memset(&source2_602, 0, sizeof(char)                *(1024)                );
                snprintf(source2_602,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n",name_600,name_600);
                buffer_append_str(source_592,source2_602);
            }
            name_600 = come_decrement_ref_count2(name_600, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_601,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_594,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_592,125);
        p_603=info->p;
        sline_604=info->sline;
        sname_605=(char*)come_increment_ref_count(info->sname);
        head_606=info->head;
        source3_607=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj163=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_592);
        come_call_finalizer3(__dec_obj163,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_592->buf;
        info->head=source_592->buf;
        __dec_obj164=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value762=__builtin_string(real_fun_name_587))));
        __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value762 = come_decrement_ref_count2(right_value762, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_608=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value763=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer3(right_value763,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        result_type_609=(struct sType*)come_increment_ref_count(((struct sType*)(right_value765=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value764=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2049, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer3(right_value764,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value765,sType_finalize, 0, 1, 0, 0, __result_obj__);
        name_610=(char*)come_increment_ref_count(((char*)(right_value766=string_clone(real_fun_name_587))));
        right_value766 = come_decrement_ref_count2(right_value766, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self_type_611=(struct sType*)come_increment_ref_count(((struct sType*)(right_value767=sType_clone(type))));
        come_call_finalizer3(right_value767,sType_finalize, 0, 1, 0, 0, __result_obj__);
        self_type_611->mHeap=(_Bool)0;
        if(self_type_611->mPointerNum>1) {
            self_type_611->mPointerNum=1;
        }
        {__list_values21___612[0]=come_increment_ref_count(self_type_611);
}        param_types_613=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value769=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value768=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2056, "struct list$1sTypeph")))),1,__list_values21___612))));
        come_call_finalizer3(right_value768,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value769,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values22___614[0]=come_increment_ref_count(((char*)(right_value770=__builtin_string("self"))));
}        param_names_615=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value772=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value771=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2057, "struct list$1charph")))),1,__list_values22___614))));
        right_value770 = come_decrement_ref_count2(right_value770, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value771,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value772,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_616=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value774=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value773=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2058, "list$1charph"))))))));
        come_call_finalizer3(right_value773,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value774,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_616,((void*)0));
        header_buf_617=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value776=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value775=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2061, "buffer"))))))));
        come_call_finalizer3(right_value775,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value776,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_617,((char*)(right_value777=make_come_type_name_string(result_type_609,info))));
        right_value777 = come_decrement_ref_count2(right_value777, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_617," ");
        buffer_append_str(header_buf_617,real_fun_name_587);
        buffer_append_str(header_buf_617,"(");
        for(        i_618=0;        i_618<list$1sTypeph_length(param_types_613);        i_618++        ){
            param_type_619=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_613,i_618), "05function.c", 2069, 5));
            param_name_620=((char*)come_null_check(list$1charphp_operator_load_element(param_names_615,i_618), "05function.c", 2070, 6));
            buffer_append_str(header_buf_617,((char*)(right_value778=make_come_type_name_string(param_type_619,info))));
            right_value778 = come_decrement_ref_count2(right_value778, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_617," ");
            buffer_append_str(header_buf_617,param_name_620);
            if(i_618!=list$1sTypeph_length(param_types_613)-1) {
                buffer_append_str(header_buf_617,",");
            }
        }
        buffer_append_str(header_buf_617,")");
        result_type_609->mStatic=(_Bool)0;
        fun_621=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value782=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value779=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2084, "sFun")))),(char*)come_increment_ref_count(name_610),(struct sType*)come_increment_ref_count(result_type_609),(struct list$1sTypeph*)come_increment_ref_count(param_types_613),(struct list$1charph*)come_increment_ref_count(param_names_615),(struct list$1charph*)come_increment_ref_count(param_default_parametors_616),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_608),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value780=buffer_to_string(header_buf_617)))),(char*)come_increment_ref_count(((char*)(right_value781=__builtin_string("")))),info))));
        come_call_finalizer3(right_value779,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value780 = come_decrement_ref_count2(right_value780, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value781 = come_decrement_ref_count2(right_value781, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value782,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        fun2_622=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value783=__builtin_string(fun_name))));
        right_value783 = come_decrement_ref_count2(right_value783, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_622==((void*)0)||fun2_622->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value784=string_clone(name_610)))),(struct sFun*)come_increment_ref_count(fun_621));
            right_value784 = come_decrement_ref_count2(right_value784, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        finalizer_586=fun_621;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2100, "struct sNode");
        _inf_obj_value9=come_increment_ref_count(((struct sFunNode*)(right_value786=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value785=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2100, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_621),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sFunNode_finalize;
        _inf_value9->clone=(void*)sFunNode_clone;
        _inf_value9->compile=(void*)sFunNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sFunNode_kind;
        node_623=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value790=_inf_value9)));
        come_call_finalizer3(right_value785,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value786,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value790) { right_value790 = come_decrement_ref_count2(right_value790, ((struct sNode*)right_value790)->finalize, ((struct sNode*)right_value790)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(!node_compile(node_623,info)) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj167=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_607);
        come_call_finalizer3(__dec_obj167,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_603;
        info->head=head_606;
        info->sline=sline_604;
        __dec_obj168=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_605);
        __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_592,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_605 = come_decrement_ref_count2(sname_605, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_607,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_608,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_609,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_610 = come_decrement_ref_count2(name_610, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_611,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_613,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_615,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_616,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_617,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_621,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_623) { node_623 = come_decrement_ref_count2(node_623, ((struct sNode*)node_623)->finalize, ((struct sNode*)node_623)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_585;
    __dec_obj169=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_582);
    __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj170=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_583);
    __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj171=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_584);
    __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result220__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value792=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value791=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2120, "struct tuple2$2sFunpcharph")))),finalizer_586,(char*)come_increment_ref_count(real_fun_name_587))));
    last_code_582 = come_decrement_ref_count2(last_code_582, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_583 = come_decrement_ref_count2(last_code2_583, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_584 = come_decrement_ref_count2(last_code3_584, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_587 = come_decrement_ref_count2(real_fun_name_587, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    user_real_fun_name_588 = come_decrement_ref_count2(user_real_fun_name_588, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_590,sType_finalize, 0, 0, 0, 0, (void*)0);
    right_value791 = come_decrement_ref_count2(right_value791, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value792,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result220__;
    last_code_582 = come_decrement_ref_count2(last_code_582, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_583 = come_decrement_ref_count2(last_code2_583, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_584 = come_decrement_ref_count2(last_code3_584, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_587 = come_decrement_ref_count2(real_fun_name_587, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    user_real_fun_name_588 = come_decrement_ref_count2(user_real_fun_name_588, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_590,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct tuple2$2charphsTypeph* result_595;
struct tuple2$2charphsTypeph* __result211__;
struct tuple2$2charphsTypeph* __result212__;
struct tuple2$2charphsTypeph* result_596;
struct tuple2$2charphsTypeph* __result213__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_595, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_596, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(self==((void*)0)) {
                memset(&result_595,0,sizeof(struct tuple2$2charphsTypeph*));
                __result211__ = __result_obj__ = result_595;
                return __result211__;
            }
            self->it=self->head;
            if(self->it) {
                __result212__ = __result_obj__ = self->it->item;
                return __result212__;
            }
            memset(&result_596,0,sizeof(struct tuple2$2charphsTypeph*));
            __result213__ = __result_obj__ = result_596;
            return __result213__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
            return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct tuple2$2charphsTypeph* result_598;
struct tuple2$2charphsTypeph* __result214__;
struct tuple2$2charphsTypeph* __result215__;
struct tuple2$2charphsTypeph* result_599;
struct tuple2$2charphsTypeph* __result216__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_598, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_599, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(self==((void*)0)||self->it==((void*)0)) {
                memset(&result_598,0,sizeof(struct tuple2$2charphsTypeph*));
                __result214__ = __result_obj__ = result_598;
                return __result214__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result215__ = __result_obj__ = self->it->item;
                return __result215__;
            }
            memset(&result_599,0,sizeof(struct tuple2$2charphsTypeph*));
            __result216__ = __result_obj__ = result_599;
            return __result216__;
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
void* __result_obj__;
char* __dec_obj172;
struct tuple2$2sFunpcharph* __result219__;
memset(&__result_obj__, 0, sizeof(void*));
        self->v1=v1;
        __dec_obj172=self->v2;
        self->v2=(char*)come_increment_ref_count(v2);
        __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
        __result219__ = __result_obj__ = self;
        come_call_finalizer3(self,tuple2$2sFunpcharphp_finalize, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result219__;
        come_call_finalizer3(self,tuple2$2sFunpcharphp_finalize, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
            if(self!=((void*)0)&&self->v2!=((void*)0)) {
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_625;
char* __dec_obj173;
char* last_code2_626;
char* __dec_obj174;
char* last_code3_627;
char* __dec_obj175;
struct sClass* current_stack_frame_struct_628;
struct sFun* finalizer_629;
void* right_value793;
char* real_fun_name_630;
void* right_value794;
struct sType* type2_631;
struct sClass* klass_632;
void* right_value795;
void* right_value796;
struct buffer* source_633;
struct list$1tuple2$2charphsTypephph* o2_saved_634;
struct tuple2$2charphsTypeph* it_635;
struct tuple2$2charphsTypeph* multiple_assign_var11;
char* name_636;
struct sType* field_type_637;
char* p_639;
int sline_640;
char* sname_641;
char* head_642;
struct buffer* source3_643;
struct buffer* __dec_obj176;
void* right_value797;
char* __dec_obj177;
void* right_value798;
struct sBlock* block_644;
void* right_value799;
void* right_value800;
struct sType* result_type_645;
void* right_value801;
char* name_646;
void* right_value802;
struct sType* self_type_647;
struct sType* __list_values23___648[1];
void* right_value803;
void* right_value804;
struct list$1sTypeph* param_types_649;
void* right_value805;
char* __list_values24___650[1];
void* right_value806;
void* right_value807;
struct list$1charph* param_names_651;
void* right_value808;
void* right_value809;
struct list$1charph* param_default_parametors_652;
void* right_value810;
void* right_value811;
struct buffer* header_buf_653;
void* right_value812;
int i_654;
struct sType* param_type_655;
char* param_name_656;
void* right_value813;
void* right_value814;
void* right_value815;
void* right_value816;
void* right_value817;
struct sFun* fun_657;
void* right_value818;
struct sFun* fun2_658;
void* right_value819;
void* right_value820;
void* right_value821;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* right_value825;
struct sNode* node_659;
struct buffer* __dec_obj180;
char* __dec_obj181;
char* __dec_obj182;
char* __dec_obj183;
char* __dec_obj184;
void* right_value826;
void* right_value827;
struct tuple2$2sFunpcharph* __result223__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_625, 0, sizeof(char*));
memset(&last_code2_626, 0, sizeof(char*));
memset(&last_code3_627, 0, sizeof(char*));
memset(&current_stack_frame_struct_628, 0, sizeof(struct sClass*));
memset(&finalizer_629, 0, sizeof(struct sFun*));
right_value793 = (void*)0;
memset(&real_fun_name_630, 0, sizeof(char*));
right_value794 = (void*)0;
memset(&type2_631, 0, sizeof(struct sType*));
memset(&klass_632, 0, sizeof(struct sClass*));
right_value795 = (void*)0;
right_value796 = (void*)0;
memset(&source_633, 0, sizeof(struct buffer*));
memset(&o2_saved_634, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_635, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&p_639, 0, sizeof(char*));
memset(&sline_640, 0, sizeof(int));
memset(&sname_641, 0, sizeof(char*));
memset(&head_642, 0, sizeof(char*));
memset(&source3_643, 0, sizeof(struct buffer*));
right_value797 = (void*)0;
right_value798 = (void*)0;
memset(&block_644, 0, sizeof(struct sBlock*));
right_value799 = (void*)0;
right_value800 = (void*)0;
memset(&result_type_645, 0, sizeof(struct sType*));
right_value801 = (void*)0;
memset(&name_646, 0, sizeof(char*));
right_value802 = (void*)0;
memset(&self_type_647, 0, sizeof(struct sType*));
right_value803 = (void*)0;
right_value804 = (void*)0;
memset(&param_types_649, 0, sizeof(struct list$1sTypeph*));
right_value805 = (void*)0;
right_value806 = (void*)0;
right_value807 = (void*)0;
memset(&param_names_651, 0, sizeof(struct list$1charph*));
right_value808 = (void*)0;
right_value809 = (void*)0;
memset(&param_default_parametors_652, 0, sizeof(struct list$1charph*));
right_value810 = (void*)0;
right_value811 = (void*)0;
memset(&header_buf_653, 0, sizeof(struct buffer*));
right_value812 = (void*)0;
memset(&i_654, 0, sizeof(int));
memset(&param_type_655, 0, sizeof(struct sType*));
memset(&param_name_656, 0, sizeof(char*));
right_value813 = (void*)0;
right_value814 = (void*)0;
right_value815 = (void*)0;
right_value816 = (void*)0;
right_value817 = (void*)0;
memset(&fun_657, 0, sizeof(struct sFun*));
right_value818 = (void*)0;
memset(&fun2_658, 0, sizeof(struct sFun*));
right_value819 = (void*)0;
right_value820 = (void*)0;
right_value821 = (void*)0;
right_value825 = (void*)0;
memset(&node_659, 0, sizeof(struct sNode*));
right_value826 = (void*)0;
right_value827 = (void*)0;
    last_code_625=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj173=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_626=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj174=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_627=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj175=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_628=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_629=((void*)0);
    real_fun_name_630=(char*)come_increment_ref_count(((char*)(right_value793=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value793 = come_decrement_ref_count2(right_value793, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_631=(struct sType*)come_increment_ref_count(((struct sType*)(right_value794=solve_generics(type,type,info))));
    come_call_finalizer3(right_value794,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type=type2_631;
    klass_632=type->mClass;
    if(type->mPointerNum>0&&klass_632->mStruct) {
        source_633=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value796=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value795=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2147, "buffer"))))))));
        come_call_finalizer3(right_value795,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value796,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_633,123);
        klass_632=map$2charphsClassphp_operator_load_element(info->classes,klass_632->mName);
        for(        o2_saved_634=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_632->mFields)),it_635=list$1tuple2$2charphsTypephph_begin((o2_saved_634));        !list$1tuple2$2charphsTypephph_end((o2_saved_634));        it_635=list$1tuple2$2charphsTypephph_next((o2_saved_634))        ){
            multiple_assign_var11=it_635;
            name_636=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            field_type_637=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
            if(string_operator_equals(type->mClass->mName,field_type_637->mClass->mName)&&type->mPointerNum==field_type_637->mPointerNum&&field_type_637->mHeap) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(field_type_637->mHeap) {
                char source2_638[1024];
                memset(&source2_638, 0, sizeof(char)                *(1024)                );
                snprintf(source2_638,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { force_delete borrow self.%s; }\n",name_636,name_636);
                buffer_append_str(source_633,source2_638);
            }
            name_636 = come_decrement_ref_count2(name_636, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_637,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_634,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_633,125);
        p_639=info->p;
        sline_640=info->sline;
        sname_641=(char*)come_increment_ref_count(info->sname);
        head_642=info->head;
        source3_643=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj176=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_633);
        come_call_finalizer3(__dec_obj176,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_633->buf;
        info->head=source_633->buf;
        __dec_obj177=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value797=__builtin_string(real_fun_name_630))));
        __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value797 = come_decrement_ref_count2(right_value797, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_644=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value798=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer3(right_value798,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        result_type_645=(struct sType*)come_increment_ref_count(((struct sType*)(right_value800=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value799=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2186, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer3(right_value799,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value800,sType_finalize, 0, 1, 0, 0, __result_obj__);
        name_646=(char*)come_increment_ref_count(((char*)(right_value801=string_clone(real_fun_name_630))));
        right_value801 = come_decrement_ref_count2(right_value801, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self_type_647=(struct sType*)come_increment_ref_count(((struct sType*)(right_value802=sType_clone(type))));
        come_call_finalizer3(right_value802,sType_finalize, 0, 1, 0, 0, __result_obj__);
        self_type_647->mHeap=(_Bool)0;
        if(self_type_647->mPointerNum>1) {
            self_type_647->mPointerNum=1;
        }
        {__list_values23___648[0]=come_increment_ref_count(self_type_647);
}        param_types_649=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value804=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value803=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2193, "struct list$1sTypeph")))),1,__list_values23___648))));
        come_call_finalizer3(right_value803,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value804,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values24___650[0]=come_increment_ref_count(((char*)(right_value805=__builtin_string("self"))));
}        param_names_651=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value807=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value806=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2194, "struct list$1charph")))),1,__list_values24___650))));
        right_value805 = come_decrement_ref_count2(right_value805, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value806,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value807,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_652=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value809=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value808=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2195, "list$1charph"))))))));
        come_call_finalizer3(right_value808,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value809,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_652,((void*)0));
        header_buf_653=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value811=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value810=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2198, "buffer"))))))));
        come_call_finalizer3(right_value810,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value811,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_653,((char*)(right_value812=make_come_type_name_string(result_type_645,info))));
        right_value812 = come_decrement_ref_count2(right_value812, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_653," ");
        buffer_append_str(header_buf_653,real_fun_name_630);
        buffer_append_str(header_buf_653,"(");
        for(        i_654=0;        i_654<list$1sTypeph_length(param_types_649);        i_654++        ){
            param_type_655=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_649,i_654), "05function.c", 2206, 7));
            param_name_656=((char*)come_null_check(list$1charphp_operator_load_element(param_names_651,i_654), "05function.c", 2207, 8));
            buffer_append_str(header_buf_653,((char*)(right_value813=make_come_type_name_string(param_type_655,info))));
            right_value813 = come_decrement_ref_count2(right_value813, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_653," ");
            buffer_append_str(header_buf_653,param_name_656);
            if(i_654!=list$1sTypeph_length(param_types_649)-1) {
                buffer_append_str(header_buf_653,",");
            }
        }
        buffer_append_str(header_buf_653,")");
        result_type_645->mStatic=(_Bool)0;
        fun_657=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value817=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value814=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2221, "sFun")))),(char*)come_increment_ref_count(name_646),(struct sType*)come_increment_ref_count(result_type_645),(struct list$1sTypeph*)come_increment_ref_count(param_types_649),(struct list$1charph*)come_increment_ref_count(param_names_651),(struct list$1charph*)come_increment_ref_count(param_default_parametors_652),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_644),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value815=buffer_to_string(header_buf_653)))),(char*)come_increment_ref_count(((char*)(right_value816=__builtin_string("")))),info))));
        come_call_finalizer3(right_value814,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value815 = come_decrement_ref_count2(right_value815, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value816 = come_decrement_ref_count2(right_value816, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value817,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        fun2_658=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value818=__builtin_string(fun_name))));
        right_value818 = come_decrement_ref_count2(right_value818, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_658==((void*)0)||fun2_658->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value819=string_clone(name_646)))),(struct sFun*)come_increment_ref_count(fun_657));
            right_value819 = come_decrement_ref_count2(right_value819, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        finalizer_629=fun_657;
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2237, "struct sNode");
        _inf_obj_value10=come_increment_ref_count(((struct sFunNode*)(right_value821=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value820=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2237, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_657),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sFunNode_finalize;
        _inf_value10->clone=(void*)sFunNode_clone;
        _inf_value10->compile=(void*)sFunNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sFunNode_kind;
        node_659=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value825=_inf_value10)));
        come_call_finalizer3(right_value820,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value821,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value825) { right_value825 = come_decrement_ref_count2(right_value825, ((struct sNode*)right_value825)->finalize, ((struct sNode*)right_value825)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(!node_compile(node_659,info)) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj180=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_643);
        come_call_finalizer3(__dec_obj180,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_639;
        info->head=head_642;
        info->sline=sline_640;
        __dec_obj181=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_641);
        __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_633,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_641 = come_decrement_ref_count2(sname_641, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_643,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_644,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_645,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_646 = come_decrement_ref_count2(name_646, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_647,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_649,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_651,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_652,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_653,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_657,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_659) { node_659 = come_decrement_ref_count2(node_659, ((struct sNode*)node_659)->finalize, ((struct sNode*)node_659)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_628;
    __dec_obj182=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_625);
    __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj183=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_626);
    __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj184=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_627);
    __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result223__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value827=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value826=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2257, "struct tuple2$2sFunpcharph")))),finalizer_629,(char*)come_increment_ref_count(real_fun_name_630))));
    last_code_625 = come_decrement_ref_count2(last_code_625, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_626 = come_decrement_ref_count2(last_code2_626, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_627 = come_decrement_ref_count2(last_code3_627, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_630 = come_decrement_ref_count2(real_fun_name_630, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_631,sType_finalize, 0, 0, 0, 0, (void*)0);
    right_value826 = come_decrement_ref_count2(right_value826, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value827,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result223__;
    last_code_625 = come_decrement_ref_count2(last_code_625, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_626 = come_decrement_ref_count2(last_code2_626, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_627 = come_decrement_ref_count2(last_code3_627, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_630 = come_decrement_ref_count2(real_fun_name_630, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_631,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_661;
char* __dec_obj185;
char* last_code2_662;
char* __dec_obj186;
char* last_code3_663;
char* __dec_obj187;
struct sClass* current_stack_frame_struct_664;
struct sFun* equaler_665;
void* right_value828;
char* real_fun_name_666;
void* right_value829;
struct sType* type2_667;
struct sClass* klass_668;
void* right_value830;
void* right_value831;
struct buffer* source_669;
char* name_670;
struct list$1tuple2$2charphsTypephph* o2_saved_672;
struct tuple2$2charphsTypeph* it_673;
struct tuple2$2charphsTypeph* multiple_assign_var12;
char* name_674;
struct sType* field_type_675;
char* p_677;
int sline_678;
char* sname_679;
char* head_680;
struct buffer* source3_681;
struct buffer* __dec_obj188;
void* right_value832;
char* __dec_obj189;
void* right_value833;
struct sBlock* block_682;
void* right_value834;
void* right_value835;
struct sType* result_type_683;
void* right_value836;
char* name_684;
void* right_value837;
struct sType* left_type_685;
void* right_value838;
struct sType* right_type_686;
struct sType* __list_values25___687[2];
void* right_value839;
void* right_value840;
struct list$1sTypeph* param_types_688;
void* right_value841;
void* right_value842;
char* __list_values26___689[2];
void* right_value843;
void* right_value844;
struct list$1charph* param_names_690;
void* right_value845;
void* right_value846;
struct list$1charph* param_default_parametors_691;
void* right_value847;
void* right_value848;
struct buffer* header_buf_692;
void* right_value849;
int i_693;
struct sType* param_type_694;
char* param_name_695;
void* right_value850;
void* right_value851;
void* right_value852;
void* right_value853;
void* right_value854;
struct sFun* fun_696;
void* right_value855;
struct sFun* fun2_697;
void* right_value856;
void* right_value857;
void* right_value858;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* right_value862;
struct sNode* node_698;
struct buffer* __dec_obj192;
char* __dec_obj193;
char* __dec_obj194;
char* __dec_obj195;
char* __dec_obj196;
void* right_value863;
void* right_value864;
struct tuple2$2sFunpcharph* __result226__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_661, 0, sizeof(char*));
memset(&last_code2_662, 0, sizeof(char*));
memset(&last_code3_663, 0, sizeof(char*));
memset(&current_stack_frame_struct_664, 0, sizeof(struct sClass*));
memset(&equaler_665, 0, sizeof(struct sFun*));
right_value828 = (void*)0;
memset(&real_fun_name_666, 0, sizeof(char*));
right_value829 = (void*)0;
memset(&type2_667, 0, sizeof(struct sType*));
memset(&klass_668, 0, sizeof(struct sClass*));
right_value830 = (void*)0;
right_value831 = (void*)0;
memset(&source_669, 0, sizeof(struct buffer*));
memset(&name_670, 0, sizeof(char*));
memset(&o2_saved_672, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_673, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&p_677, 0, sizeof(char*));
memset(&sline_678, 0, sizeof(int));
memset(&sname_679, 0, sizeof(char*));
memset(&head_680, 0, sizeof(char*));
memset(&source3_681, 0, sizeof(struct buffer*));
right_value832 = (void*)0;
right_value833 = (void*)0;
memset(&block_682, 0, sizeof(struct sBlock*));
right_value834 = (void*)0;
right_value835 = (void*)0;
memset(&result_type_683, 0, sizeof(struct sType*));
right_value836 = (void*)0;
memset(&name_684, 0, sizeof(char*));
right_value837 = (void*)0;
memset(&left_type_685, 0, sizeof(struct sType*));
right_value838 = (void*)0;
memset(&right_type_686, 0, sizeof(struct sType*));
right_value839 = (void*)0;
right_value840 = (void*)0;
memset(&param_types_688, 0, sizeof(struct list$1sTypeph*));
right_value841 = (void*)0;
right_value842 = (void*)0;
right_value843 = (void*)0;
right_value844 = (void*)0;
memset(&param_names_690, 0, sizeof(struct list$1charph*));
right_value845 = (void*)0;
right_value846 = (void*)0;
memset(&param_default_parametors_691, 0, sizeof(struct list$1charph*));
right_value847 = (void*)0;
right_value848 = (void*)0;
memset(&header_buf_692, 0, sizeof(struct buffer*));
right_value849 = (void*)0;
memset(&i_693, 0, sizeof(int));
memset(&param_type_694, 0, sizeof(struct sType*));
memset(&param_name_695, 0, sizeof(char*));
right_value850 = (void*)0;
right_value851 = (void*)0;
right_value852 = (void*)0;
right_value853 = (void*)0;
right_value854 = (void*)0;
memset(&fun_696, 0, sizeof(struct sFun*));
right_value855 = (void*)0;
memset(&fun2_697, 0, sizeof(struct sFun*));
right_value856 = (void*)0;
right_value857 = (void*)0;
right_value858 = (void*)0;
right_value862 = (void*)0;
memset(&node_698, 0, sizeof(struct sNode*));
right_value863 = (void*)0;
right_value864 = (void*)0;
    last_code_661=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj185=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_662=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj186=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_663=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj187=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_664=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_665=((void*)0);
    real_fun_name_666=(char*)come_increment_ref_count(((char*)(right_value828=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value828 = come_decrement_ref_count2(right_value828, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_667=(struct sType*)come_increment_ref_count(((struct sType*)(right_value829=solve_generics(type,type,info))));
    come_call_finalizer3(right_value829,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type=type2_667;
    klass_668=type->mClass;
    if(type->mPointerNum>0&&!klass_668->mNumber) {
        source_669=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value831=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value830=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2282, "buffer"))))))));
        come_call_finalizer3(right_value830,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value831,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_669,123);
        if(klass_668->mProtocol) {
            name_670="_protocol_obj";
            char source2_671[1024];
            memset(&source2_671, 0, sizeof(char)            *(1024)            );
            snprintf(source2_671,1024,"return left.%s.equals(right.%s);\n",name_670,name_670);
            buffer_append_str(source_669,source2_671);
        }
        else {
            klass_668=map$2charphsClassphp_operator_load_element(info->classes,klass_668->mName);
            for(            o2_saved_672=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_668->mFields)),it_673=list$1tuple2$2charphsTypephph_begin((o2_saved_672));            !list$1tuple2$2charphsTypephph_end((o2_saved_672));            it_673=list$1tuple2$2charphsTypephph_next((o2_saved_672))            ){
                multiple_assign_var12=it_673;
                name_674=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_675=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                if(string_operator_equals(type->mClass->mName,field_type_675->mClass->mName)&&type->mPointerNum==field_type_675->mPointerNum&&field_type_675->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_676[1024];
                memset(&source2_676, 0, sizeof(char)                *(1024)                );
                snprintf(source2_676,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_674,name_674);
                buffer_append_str(source_669,source2_676);
                name_674 = come_decrement_ref_count2(name_674, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_675,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_672,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_669,"return true;");
        buffer_append_char(source_669,125);
        p_677=info->p;
        sline_678=info->sline;
        sname_679=(char*)come_increment_ref_count(info->sname);
        head_680=info->head;
        source3_681=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj188=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_669);
        come_call_finalizer3(__dec_obj188,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_669->buf;
        info->head=source_669->buf;
        __dec_obj189=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value832=__builtin_string(real_fun_name_666))));
        __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value832 = come_decrement_ref_count2(right_value832, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_682=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value833=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer3(right_value833,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        result_type_683=(struct sType*)come_increment_ref_count(((struct sType*)(right_value835=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value834=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2328, "sType")))),"bool",(_Bool)0,info))));
        come_call_finalizer3(right_value834,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value835,sType_finalize, 0, 1, 0, 0, __result_obj__);
        name_684=(char*)come_increment_ref_count(((char*)(right_value836=string_clone(real_fun_name_666))));
        right_value836 = come_decrement_ref_count2(right_value836, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        left_type_685=(struct sType*)come_increment_ref_count(((struct sType*)(right_value837=sType_clone(type))));
        come_call_finalizer3(right_value837,sType_finalize, 0, 1, 0, 0, __result_obj__);
        left_type_685->mHeap=(_Bool)0;
        right_type_686=(struct sType*)come_increment_ref_count(((struct sType*)(right_value838=sType_clone(type))));
        come_call_finalizer3(right_value838,sType_finalize, 0, 1, 0, 0, __result_obj__);
        right_type_686->mHeap=(_Bool)0;
        {__list_values25___687[0]=come_increment_ref_count(left_type_685);
__list_values25___687[1]=come_increment_ref_count(right_type_686);
}        param_types_688=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value840=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value839=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2334, "struct list$1sTypeph")))),2,__list_values25___687))));
        come_call_finalizer3(right_value839,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value840,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values26___689[0]=come_increment_ref_count(((char*)(right_value841=__builtin_string("left"))));
__list_values26___689[1]=come_increment_ref_count(((char*)(right_value842=__builtin_string("right"))));
}        param_names_690=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value844=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value843=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2335, "struct list$1charph")))),2,__list_values26___689))));
        right_value841 = come_decrement_ref_count2(right_value841, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value842 = come_decrement_ref_count2(right_value842, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value843,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value844,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_691=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value846=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value845=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2336, "list$1charph"))))))));
        come_call_finalizer3(right_value845,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value846,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_691,((void*)0));
        list$1charph_push_back(param_default_parametors_691,((void*)0));
        header_buf_692=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value848=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value847=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2340, "buffer"))))))));
        come_call_finalizer3(right_value847,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value848,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_692,((char*)(right_value849=make_come_type_name_string(result_type_683,info))));
        right_value849 = come_decrement_ref_count2(right_value849, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_692," ");
        buffer_append_str(header_buf_692,real_fun_name_666);
        buffer_append_str(header_buf_692,"(");
        for(        i_693=0;        i_693<list$1sTypeph_length(param_types_688);        i_693++        ){
            param_type_694=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_688,i_693), "05function.c", 2348, 9));
            param_name_695=((char*)come_null_check(list$1charphp_operator_load_element(param_names_690,i_693), "05function.c", 2349, 10));
            buffer_append_str(header_buf_692,((char*)(right_value850=make_come_type_name_string(param_type_694,info))));
            right_value850 = come_decrement_ref_count2(right_value850, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_692," ");
            buffer_append_str(header_buf_692,param_name_695);
            if(i_693!=list$1sTypeph_length(param_types_688)-1) {
                buffer_append_str(header_buf_692,",");
            }
        }
        buffer_append_str(header_buf_692,")");
        result_type_683->mStatic=(_Bool)0;
        fun_696=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value854=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value851=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2363, "sFun")))),(char*)come_increment_ref_count(name_684),(struct sType*)come_increment_ref_count(result_type_683),(struct list$1sTypeph*)come_increment_ref_count(param_types_688),(struct list$1charph*)come_increment_ref_count(param_names_690),(struct list$1charph*)come_increment_ref_count(param_default_parametors_691),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_682),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value852=buffer_to_string(header_buf_692)))),(char*)come_increment_ref_count(((char*)(right_value853=__builtin_string("")))),info))));
        come_call_finalizer3(right_value851,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value852 = come_decrement_ref_count2(right_value852, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value853 = come_decrement_ref_count2(right_value853, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value854,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        fun2_697=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value855=__builtin_string(fun_name))));
        right_value855 = come_decrement_ref_count2(right_value855, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_697==((void*)0)||fun2_697->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value856=string_clone(name_684)))),(struct sFun*)come_increment_ref_count(fun_696));
            right_value856 = come_decrement_ref_count2(right_value856, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        equaler_665=fun_696;
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2379, "struct sNode");
        _inf_obj_value11=come_increment_ref_count(((struct sFunNode*)(right_value858=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value857=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2379, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_696),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sFunNode_finalize;
        _inf_value11->clone=(void*)sFunNode_clone;
        _inf_value11->compile=(void*)sFunNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sFunNode_kind;
        node_698=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value862=_inf_value11)));
        come_call_finalizer3(right_value857,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value858,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value862) { right_value862 = come_decrement_ref_count2(right_value862, ((struct sNode*)right_value862)->finalize, ((struct sNode*)right_value862)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(!node_compile(node_698,info)) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj192=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_681);
        come_call_finalizer3(__dec_obj192,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_677;
        info->head=head_680;
        info->sline=sline_678;
        __dec_obj193=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_679);
        __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_669,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_679 = come_decrement_ref_count2(sname_679, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_681,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_682,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_683,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_684 = come_decrement_ref_count2(name_684, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_685,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_686,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_688,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_690,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_691,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_692,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_696,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_698) { node_698 = come_decrement_ref_count2(node_698, ((struct sNode*)node_698)->finalize, ((struct sNode*)node_698)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_664;
    __dec_obj194=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_661);
    __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj195=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_662);
    __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj196=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_663);
    __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result226__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value864=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value863=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2399, "struct tuple2$2sFunpcharph")))),equaler_665,(char*)come_increment_ref_count(real_fun_name_666))));
    last_code_661 = come_decrement_ref_count2(last_code_661, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_662 = come_decrement_ref_count2(last_code2_662, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_663 = come_decrement_ref_count2(last_code3_663, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_666 = come_decrement_ref_count2(real_fun_name_666, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_667,sType_finalize, 0, 0, 0, 0, (void*)0);
    right_value863 = come_decrement_ref_count2(right_value863, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value864,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result226__;
    last_code_661 = come_decrement_ref_count2(last_code_661, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_662 = come_decrement_ref_count2(last_code2_662, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_663 = come_decrement_ref_count2(last_code3_663, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_666 = come_decrement_ref_count2(real_fun_name_666, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_667,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_700;
char* __dec_obj197;
char* last_code2_701;
char* __dec_obj198;
char* last_code3_702;
char* __dec_obj199;
struct sClass* current_stack_frame_struct_703;
struct sFun* equaler_704;
void* right_value865;
char* real_fun_name_705;
void* right_value866;
struct sType* type2_706;
struct sClass* klass_707;
void* right_value867;
void* right_value868;
struct buffer* source_708;
char* name_709;
int i_712;
struct list$1tuple2$2charphsTypephph* o2_saved_713;
struct tuple2$2charphsTypeph* it_714;
struct tuple2$2charphsTypeph* multiple_assign_var13;
char* name_715;
struct sType* field_type_716;
char* p_720;
int sline_721;
char* sname_722;
char* head_723;
struct buffer* source3_724;
struct buffer* __dec_obj200;
void* right_value869;
char* __dec_obj201;
void* right_value870;
struct sBlock* block_725;
void* right_value871;
void* right_value872;
struct sType* result_type_726;
void* right_value873;
char* name_727;
void* right_value874;
struct sType* left_type_728;
void* right_value875;
struct sType* right_type_729;
struct sType* __list_values27___730[2];
void* right_value876;
void* right_value877;
struct list$1sTypeph* param_types_731;
void* right_value878;
void* right_value879;
char* __list_values28___732[2];
void* right_value880;
void* right_value881;
struct list$1charph* param_names_733;
void* right_value882;
void* right_value883;
struct list$1charph* param_default_parametors_734;
void* right_value884;
void* right_value885;
struct buffer* header_buf_735;
void* right_value886;
int i_736;
struct sType* param_type_737;
char* param_name_738;
void* right_value887;
void* right_value888;
void* right_value889;
void* right_value890;
void* right_value891;
struct sFun* fun_739;
void* right_value892;
struct sFun* fun2_740;
void* right_value893;
void* right_value894;
void* right_value895;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* right_value899;
struct sNode* node_741;
struct buffer* __dec_obj204;
char* __dec_obj205;
char* __dec_obj206;
char* __dec_obj207;
char* __dec_obj208;
void* right_value900;
void* right_value901;
struct tuple2$2sFunpcharph* __result229__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_700, 0, sizeof(char*));
memset(&last_code2_701, 0, sizeof(char*));
memset(&last_code3_702, 0, sizeof(char*));
memset(&current_stack_frame_struct_703, 0, sizeof(struct sClass*));
memset(&equaler_704, 0, sizeof(struct sFun*));
right_value865 = (void*)0;
memset(&real_fun_name_705, 0, sizeof(char*));
right_value866 = (void*)0;
memset(&type2_706, 0, sizeof(struct sType*));
memset(&klass_707, 0, sizeof(struct sClass*));
right_value867 = (void*)0;
right_value868 = (void*)0;
memset(&source_708, 0, sizeof(struct buffer*));
memset(&name_709, 0, sizeof(char*));
memset(&i_712, 0, sizeof(int));
memset(&o2_saved_713, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_714, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&p_720, 0, sizeof(char*));
memset(&sline_721, 0, sizeof(int));
memset(&sname_722, 0, sizeof(char*));
memset(&head_723, 0, sizeof(char*));
memset(&source3_724, 0, sizeof(struct buffer*));
right_value869 = (void*)0;
right_value870 = (void*)0;
memset(&block_725, 0, sizeof(struct sBlock*));
right_value871 = (void*)0;
right_value872 = (void*)0;
memset(&result_type_726, 0, sizeof(struct sType*));
right_value873 = (void*)0;
memset(&name_727, 0, sizeof(char*));
right_value874 = (void*)0;
memset(&left_type_728, 0, sizeof(struct sType*));
right_value875 = (void*)0;
memset(&right_type_729, 0, sizeof(struct sType*));
right_value876 = (void*)0;
right_value877 = (void*)0;
memset(&param_types_731, 0, sizeof(struct list$1sTypeph*));
right_value878 = (void*)0;
right_value879 = (void*)0;
right_value880 = (void*)0;
right_value881 = (void*)0;
memset(&param_names_733, 0, sizeof(struct list$1charph*));
right_value882 = (void*)0;
right_value883 = (void*)0;
memset(&param_default_parametors_734, 0, sizeof(struct list$1charph*));
right_value884 = (void*)0;
right_value885 = (void*)0;
memset(&header_buf_735, 0, sizeof(struct buffer*));
right_value886 = (void*)0;
memset(&i_736, 0, sizeof(int));
memset(&param_type_737, 0, sizeof(struct sType*));
memset(&param_name_738, 0, sizeof(char*));
right_value887 = (void*)0;
right_value888 = (void*)0;
right_value889 = (void*)0;
right_value890 = (void*)0;
right_value891 = (void*)0;
memset(&fun_739, 0, sizeof(struct sFun*));
right_value892 = (void*)0;
memset(&fun2_740, 0, sizeof(struct sFun*));
right_value893 = (void*)0;
right_value894 = (void*)0;
right_value895 = (void*)0;
right_value899 = (void*)0;
memset(&node_741, 0, sizeof(struct sNode*));
right_value900 = (void*)0;
right_value901 = (void*)0;
    last_code_700=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj197=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_701=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj198=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_702=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj199=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_703=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_704=((void*)0);
    real_fun_name_705=(char*)come_increment_ref_count(((char*)(right_value865=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value865 = come_decrement_ref_count2(right_value865, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_706=(struct sType*)come_increment_ref_count(((struct sType*)(right_value866=solve_generics(type,type,info))));
    come_call_finalizer3(right_value866,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type=type2_706;
    klass_707=type->mClass;
    if(type->mPointerNum>0&&!klass_707->mNumber) {
        source_708=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value868=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value867=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2424, "buffer"))))))));
        come_call_finalizer3(right_value867,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value868,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_708,123);
        if(klass_707->mProtocol) {
            name_709="_protocol_obj";
            char source2_710[1024];
            memset(&source2_710, 0, sizeof(char)            *(1024)            );
            snprintf(source2_710,1024,"return !left.%s.equals(right.%s);\n",name_709,name_709);
            buffer_append_str(source_708,source2_710);
        }
        else {
            char source2_711[1024];
            memset(&source2_711, 0, sizeof(char)            *(1024)            );
            snprintf(source2_711,1024,"return !(");
            buffer_append_str(source_708,source2_711);
            i_712=0;
            klass_707=map$2charphsClassphp_operator_load_element(info->classes,klass_707->mName);
            for(            o2_saved_713=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_707->mFields)),it_714=list$1tuple2$2charphsTypephph_begin((o2_saved_713));            !list$1tuple2$2charphsTypephph_end((o2_saved_713));            it_714=list$1tuple2$2charphsTypephph_next((o2_saved_713))            ){
                multiple_assign_var13=it_714;
                name_715=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_716=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                if(string_operator_equals(type->mClass->mName,field_type_716->mClass->mName)&&type->mPointerNum==field_type_716->mPointerNum&&field_type_716->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_717[1024];
                memset(&source2_717, 0, sizeof(char)                *(1024)                );
                snprintf(source2_717,1024,"left.%s.equals(right.%s)",name_715,name_715);
                buffer_append_str(source_708,source2_717);
                if(i_712==list$1tuple2$2charphsTypephph_length(klass_707->mFields)-1) {
                    char source2_718[1024];
                    memset(&source2_718, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_718,1024,");");
                    buffer_append_str(source_708,source2_718);
                }
                else {
                    char source2_719[1024];
                    memset(&source2_719, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_719,1024," && ");
                    buffer_append_str(source_708,source2_719);
                }
                i_712++;
                name_715 = come_decrement_ref_count2(name_715, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_716,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_713,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_708,125);
        p_720=info->p;
        sline_721=info->sline;
        sname_722=(char*)come_increment_ref_count(info->sname);
        head_723=info->head;
        source3_724=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj200=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_708);
        come_call_finalizer3(__dec_obj200,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_708->buf;
        info->head=source_708->buf;
        __dec_obj201=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value869=__builtin_string(real_fun_name_705))));
        __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value869 = come_decrement_ref_count2(right_value869, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_725=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value870=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer3(right_value870,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        result_type_726=(struct sType*)come_increment_ref_count(((struct sType*)(right_value872=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value871=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2487, "sType")))),"bool",(_Bool)0,info))));
        come_call_finalizer3(right_value871,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value872,sType_finalize, 0, 1, 0, 0, __result_obj__);
        name_727=(char*)come_increment_ref_count(((char*)(right_value873=string_clone(real_fun_name_705))));
        right_value873 = come_decrement_ref_count2(right_value873, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        left_type_728=(struct sType*)come_increment_ref_count(((struct sType*)(right_value874=sType_clone(type))));
        come_call_finalizer3(right_value874,sType_finalize, 0, 1, 0, 0, __result_obj__);
        left_type_728->mHeap=(_Bool)0;
        right_type_729=(struct sType*)come_increment_ref_count(((struct sType*)(right_value875=sType_clone(type))));
        come_call_finalizer3(right_value875,sType_finalize, 0, 1, 0, 0, __result_obj__);
        right_type_729->mHeap=(_Bool)0;
        {__list_values27___730[0]=come_increment_ref_count(left_type_728);
__list_values27___730[1]=come_increment_ref_count(right_type_729);
}        param_types_731=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value877=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value876=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2493, "struct list$1sTypeph")))),2,__list_values27___730))));
        come_call_finalizer3(right_value876,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value877,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values28___732[0]=come_increment_ref_count(((char*)(right_value878=__builtin_string("left"))));
__list_values28___732[1]=come_increment_ref_count(((char*)(right_value879=__builtin_string("right"))));
}        param_names_733=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value881=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value880=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2494, "struct list$1charph")))),2,__list_values28___732))));
        right_value878 = come_decrement_ref_count2(right_value878, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value879 = come_decrement_ref_count2(right_value879, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value880,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value881,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_734=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value883=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value882=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2495, "list$1charph"))))))));
        come_call_finalizer3(right_value882,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value883,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_734,((void*)0));
        list$1charph_push_back(param_default_parametors_734,((void*)0));
        header_buf_735=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value885=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value884=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2499, "buffer"))))))));
        come_call_finalizer3(right_value884,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value885,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_735,((char*)(right_value886=make_come_type_name_string(result_type_726,info))));
        right_value886 = come_decrement_ref_count2(right_value886, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_735," ");
        buffer_append_str(header_buf_735,real_fun_name_705);
        buffer_append_str(header_buf_735,"(");
        for(        i_736=0;        i_736<list$1sTypeph_length(param_types_731);        i_736++        ){
            param_type_737=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_731,i_736), "05function.c", 2507, 11));
            param_name_738=((char*)come_null_check(list$1charphp_operator_load_element(param_names_733,i_736), "05function.c", 2508, 12));
            buffer_append_str(header_buf_735,((char*)(right_value887=make_come_type_name_string(param_type_737,info))));
            right_value887 = come_decrement_ref_count2(right_value887, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_735," ");
            buffer_append_str(header_buf_735,param_name_738);
            if(i_736!=list$1sTypeph_length(param_types_731)-1) {
                buffer_append_str(header_buf_735,",");
            }
        }
        buffer_append_str(header_buf_735,")");
        result_type_726->mStatic=(_Bool)0;
        fun_739=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value891=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value888=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2522, "sFun")))),(char*)come_increment_ref_count(name_727),(struct sType*)come_increment_ref_count(result_type_726),(struct list$1sTypeph*)come_increment_ref_count(param_types_731),(struct list$1charph*)come_increment_ref_count(param_names_733),(struct list$1charph*)come_increment_ref_count(param_default_parametors_734),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_725),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value889=buffer_to_string(header_buf_735)))),(char*)come_increment_ref_count(((char*)(right_value890=__builtin_string("")))),info))));
        come_call_finalizer3(right_value888,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value889 = come_decrement_ref_count2(right_value889, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value890 = come_decrement_ref_count2(right_value890, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value891,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        fun2_740=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value892=__builtin_string(fun_name))));
        right_value892 = come_decrement_ref_count2(right_value892, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_740==((void*)0)||fun2_740->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value893=string_clone(name_727)))),(struct sFun*)come_increment_ref_count(fun_739));
            right_value893 = come_decrement_ref_count2(right_value893, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        equaler_704=fun_739;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2538, "struct sNode");
        _inf_obj_value12=come_increment_ref_count(((struct sFunNode*)(right_value895=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value894=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2538, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_739),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sFunNode_finalize;
        _inf_value12->clone=(void*)sFunNode_clone;
        _inf_value12->compile=(void*)sFunNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sFunNode_kind;
        node_741=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value899=_inf_value12)));
        come_call_finalizer3(right_value894,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value895,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value899) { right_value899 = come_decrement_ref_count2(right_value899, ((struct sNode*)right_value899)->finalize, ((struct sNode*)right_value899)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(!node_compile(node_741,info)) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj204=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_724);
        come_call_finalizer3(__dec_obj204,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_720;
        info->head=head_723;
        info->sline=sline_721;
        __dec_obj205=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_722);
        __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_708,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_722 = come_decrement_ref_count2(sname_722, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_724,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_725,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_726,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_727 = come_decrement_ref_count2(name_727, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_728,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_729,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_731,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_733,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_734,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_735,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_739,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_741) { node_741 = come_decrement_ref_count2(node_741, ((struct sNode*)node_741)->finalize, ((struct sNode*)node_741)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_703;
    __dec_obj206=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_700);
    __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj207=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_701);
    __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj208=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_702);
    __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result229__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value901=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value900=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2558, "struct tuple2$2sFunpcharph")))),equaler_704,(char*)come_increment_ref_count(real_fun_name_705))));
    last_code_700 = come_decrement_ref_count2(last_code_700, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_701 = come_decrement_ref_count2(last_code2_701, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_702 = come_decrement_ref_count2(last_code3_702, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_705 = come_decrement_ref_count2(real_fun_name_705, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_706,sType_finalize, 0, 0, 0, 0, (void*)0);
    right_value900 = come_decrement_ref_count2(right_value900, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value901,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result229__;
    last_code_700 = come_decrement_ref_count2(last_code_700, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_701 = come_decrement_ref_count2(last_code2_701, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_702 = come_decrement_ref_count2(last_code3_702, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_705 = come_decrement_ref_count2(real_fun_name_705, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_706,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
                    if(self==((void*)0)) {
                        return 0;
                    }
                    return self->len;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_743;
char* __dec_obj209;
char* last_code2_744;
char* __dec_obj210;
char* last_code3_745;
char* __dec_obj211;
struct sClass* current_stack_frame_struct_746;
struct sFun* equaler_747;
void* right_value902;
char* real_fun_name_748;
void* right_value903;
struct sType* type2_749;
struct sClass* klass_750;
void* right_value904;
void* right_value905;
struct buffer* source_751;
char* name_752;
struct list$1tuple2$2charphsTypephph* o2_saved_754;
struct tuple2$2charphsTypeph* it_755;
struct tuple2$2charphsTypeph* multiple_assign_var14;
char* name_756;
struct sType* field_type_757;
char* p_759;
int sline_760;
char* sname_761;
char* head_762;
struct buffer* source3_763;
struct buffer* __dec_obj212;
void* right_value906;
char* __dec_obj213;
void* right_value907;
struct sBlock* block_764;
void* right_value908;
void* right_value909;
struct sType* result_type_765;
void* right_value910;
char* name_766;
void* right_value911;
struct sType* left_type_767;
void* right_value912;
struct sType* right_type_768;
struct sType* __list_values29___769[2];
void* right_value913;
void* right_value914;
struct list$1sTypeph* param_types_770;
void* right_value915;
void* right_value916;
char* __list_values30___771[2];
void* right_value917;
void* right_value918;
struct list$1charph* param_names_772;
void* right_value919;
void* right_value920;
struct list$1charph* param_default_parametors_773;
void* right_value921;
void* right_value922;
struct buffer* header_buf_774;
void* right_value923;
int i_775;
struct sType* param_type_776;
char* param_name_777;
void* right_value924;
void* right_value925;
void* right_value926;
void* right_value927;
void* right_value928;
struct sFun* fun_778;
void* right_value929;
struct sFun* fun2_779;
void* right_value930;
void* right_value931;
void* right_value932;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* right_value936;
struct sNode* node_780;
struct buffer* __dec_obj216;
char* __dec_obj217;
char* __dec_obj218;
char* __dec_obj219;
char* __dec_obj220;
void* right_value937;
void* right_value938;
struct tuple2$2sFunpcharph* __result232__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_743, 0, sizeof(char*));
memset(&last_code2_744, 0, sizeof(char*));
memset(&last_code3_745, 0, sizeof(char*));
memset(&current_stack_frame_struct_746, 0, sizeof(struct sClass*));
memset(&equaler_747, 0, sizeof(struct sFun*));
right_value902 = (void*)0;
memset(&real_fun_name_748, 0, sizeof(char*));
right_value903 = (void*)0;
memset(&type2_749, 0, sizeof(struct sType*));
memset(&klass_750, 0, sizeof(struct sClass*));
right_value904 = (void*)0;
right_value905 = (void*)0;
memset(&source_751, 0, sizeof(struct buffer*));
memset(&name_752, 0, sizeof(char*));
memset(&o2_saved_754, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_755, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&p_759, 0, sizeof(char*));
memset(&sline_760, 0, sizeof(int));
memset(&sname_761, 0, sizeof(char*));
memset(&head_762, 0, sizeof(char*));
memset(&source3_763, 0, sizeof(struct buffer*));
right_value906 = (void*)0;
right_value907 = (void*)0;
memset(&block_764, 0, sizeof(struct sBlock*));
right_value908 = (void*)0;
right_value909 = (void*)0;
memset(&result_type_765, 0, sizeof(struct sType*));
right_value910 = (void*)0;
memset(&name_766, 0, sizeof(char*));
right_value911 = (void*)0;
memset(&left_type_767, 0, sizeof(struct sType*));
right_value912 = (void*)0;
memset(&right_type_768, 0, sizeof(struct sType*));
right_value913 = (void*)0;
right_value914 = (void*)0;
memset(&param_types_770, 0, sizeof(struct list$1sTypeph*));
right_value915 = (void*)0;
right_value916 = (void*)0;
right_value917 = (void*)0;
right_value918 = (void*)0;
memset(&param_names_772, 0, sizeof(struct list$1charph*));
right_value919 = (void*)0;
right_value920 = (void*)0;
memset(&param_default_parametors_773, 0, sizeof(struct list$1charph*));
right_value921 = (void*)0;
right_value922 = (void*)0;
memset(&header_buf_774, 0, sizeof(struct buffer*));
right_value923 = (void*)0;
memset(&i_775, 0, sizeof(int));
memset(&param_type_776, 0, sizeof(struct sType*));
memset(&param_name_777, 0, sizeof(char*));
right_value924 = (void*)0;
right_value925 = (void*)0;
right_value926 = (void*)0;
right_value927 = (void*)0;
right_value928 = (void*)0;
memset(&fun_778, 0, sizeof(struct sFun*));
right_value929 = (void*)0;
memset(&fun2_779, 0, sizeof(struct sFun*));
right_value930 = (void*)0;
right_value931 = (void*)0;
right_value932 = (void*)0;
right_value936 = (void*)0;
memset(&node_780, 0, sizeof(struct sNode*));
right_value937 = (void*)0;
right_value938 = (void*)0;
    last_code_743=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj209=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_744=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj210=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_745=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj211=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_746=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_747=((void*)0);
    real_fun_name_748=(char*)come_increment_ref_count(((char*)(right_value902=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value902 = come_decrement_ref_count2(right_value902, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_749=(struct sType*)come_increment_ref_count(((struct sType*)(right_value903=solve_generics(type,type,info))));
    come_call_finalizer3(right_value903,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type=type2_749;
    klass_750=type->mClass;
    if(type->mPointerNum>0&&!klass_750->mNumber) {
        source_751=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value905=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value904=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2583, "buffer"))))))));
        come_call_finalizer3(right_value904,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value905,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_751,123);
        if(klass_750->mProtocol) {
            name_752="_protocol_obj";
            char source2_753[1024];
            memset(&source2_753, 0, sizeof(char)            *(1024)            );
            snprintf(source2_753,1024,"return left.%s.equals(right.%s);\n",name_752,name_752);
            buffer_append_str(source_751,source2_753);
        }
        else {
            klass_750=map$2charphsClassphp_operator_load_element(info->classes,klass_750->mName);
            for(            o2_saved_754=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_750->mFields)),it_755=list$1tuple2$2charphsTypephph_begin((o2_saved_754));            !list$1tuple2$2charphsTypephph_end((o2_saved_754));            it_755=list$1tuple2$2charphsTypephph_next((o2_saved_754))            ){
                multiple_assign_var14=it_755;
                name_756=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_757=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                if(string_operator_equals(type->mClass->mName,field_type_757->mClass->mName)&&type->mPointerNum==field_type_757->mPointerNum&&field_type_757->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_758[1024];
                memset(&source2_758, 0, sizeof(char)                *(1024)                );
                snprintf(source2_758,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_756,name_756);
                buffer_append_str(source_751,source2_758);
                name_756 = come_decrement_ref_count2(name_756, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_757,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_754,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_751,"return true;\n");
        buffer_append_char(source_751,125);
        p_759=info->p;
        sline_760=info->sline;
        sname_761=(char*)come_increment_ref_count(info->sname);
        head_762=info->head;
        source3_763=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj212=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_751);
        come_call_finalizer3(__dec_obj212,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_751->buf;
        info->head=source_751->buf;
        __dec_obj213=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value906=__builtin_string(real_fun_name_748))));
        __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value906 = come_decrement_ref_count2(right_value906, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_764=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value907=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer3(right_value907,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        result_type_765=(struct sType*)come_increment_ref_count(((struct sType*)(right_value909=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value908=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2629, "sType")))),"bool",(_Bool)0,info))));
        come_call_finalizer3(right_value908,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value909,sType_finalize, 0, 1, 0, 0, __result_obj__);
        name_766=(char*)come_increment_ref_count(((char*)(right_value910=string_clone(real_fun_name_748))));
        right_value910 = come_decrement_ref_count2(right_value910, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        left_type_767=(struct sType*)come_increment_ref_count(((struct sType*)(right_value911=sType_clone(type))));
        come_call_finalizer3(right_value911,sType_finalize, 0, 1, 0, 0, __result_obj__);
        left_type_767->mHeap=(_Bool)0;
        right_type_768=(struct sType*)come_increment_ref_count(((struct sType*)(right_value912=sType_clone(type))));
        come_call_finalizer3(right_value912,sType_finalize, 0, 1, 0, 0, __result_obj__);
        right_type_768->mHeap=(_Bool)0;
        {__list_values29___769[0]=come_increment_ref_count(left_type_767);
__list_values29___769[1]=come_increment_ref_count(right_type_768);
}        param_types_770=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value914=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value913=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2635, "struct list$1sTypeph")))),2,__list_values29___769))));
        come_call_finalizer3(right_value913,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value914,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values30___771[0]=come_increment_ref_count(((char*)(right_value915=__builtin_string("left"))));
__list_values30___771[1]=come_increment_ref_count(((char*)(right_value916=__builtin_string("right"))));
}        param_names_772=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value918=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value917=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2636, "struct list$1charph")))),2,__list_values30___771))));
        right_value915 = come_decrement_ref_count2(right_value915, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value916 = come_decrement_ref_count2(right_value916, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value917,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value918,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_773=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value920=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value919=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2637, "list$1charph"))))))));
        come_call_finalizer3(right_value919,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value920,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_773,((void*)0));
        list$1charph_push_back(param_default_parametors_773,((void*)0));
        header_buf_774=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value922=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value921=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2641, "buffer"))))))));
        come_call_finalizer3(right_value921,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value922,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_774,((char*)(right_value923=make_come_type_name_string(result_type_765,info))));
        right_value923 = come_decrement_ref_count2(right_value923, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_774," ");
        buffer_append_str(header_buf_774,real_fun_name_748);
        buffer_append_str(header_buf_774,"(");
        for(        i_775=0;        i_775<list$1sTypeph_length(param_types_770);        i_775++        ){
            param_type_776=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_770,i_775), "05function.c", 2649, 13));
            param_name_777=((char*)come_null_check(list$1charphp_operator_load_element(param_names_772,i_775), "05function.c", 2650, 14));
            buffer_append_str(header_buf_774,((char*)(right_value924=make_come_type_name_string(param_type_776,info))));
            right_value924 = come_decrement_ref_count2(right_value924, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_774," ");
            buffer_append_str(header_buf_774,param_name_777);
            if(i_775!=list$1sTypeph_length(param_types_770)-1) {
                buffer_append_str(header_buf_774,",");
            }
        }
        buffer_append_str(header_buf_774,")");
        result_type_765->mStatic=(_Bool)0;
        fun_778=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value928=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value925=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2664, "sFun")))),(char*)come_increment_ref_count(name_766),(struct sType*)come_increment_ref_count(result_type_765),(struct list$1sTypeph*)come_increment_ref_count(param_types_770),(struct list$1charph*)come_increment_ref_count(param_names_772),(struct list$1charph*)come_increment_ref_count(param_default_parametors_773),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_764),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value926=buffer_to_string(header_buf_774)))),(char*)come_increment_ref_count(((char*)(right_value927=__builtin_string("")))),info))));
        come_call_finalizer3(right_value925,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value926 = come_decrement_ref_count2(right_value926, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value927 = come_decrement_ref_count2(right_value927, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value928,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        fun2_779=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value929=__builtin_string(fun_name))));
        right_value929 = come_decrement_ref_count2(right_value929, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_779==((void*)0)||fun2_779->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value930=string_clone(name_766)))),(struct sFun*)come_increment_ref_count(fun_778));
            right_value930 = come_decrement_ref_count2(right_value930, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        equaler_747=fun_778;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2680, "struct sNode");
        _inf_obj_value13=come_increment_ref_count(((struct sFunNode*)(right_value932=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value931=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2680, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_778),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sFunNode_finalize;
        _inf_value13->clone=(void*)sFunNode_clone;
        _inf_value13->compile=(void*)sFunNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sFunNode_kind;
        node_780=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value936=_inf_value13)));
        come_call_finalizer3(right_value931,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value932,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value936) { right_value936 = come_decrement_ref_count2(right_value936, ((struct sNode*)right_value936)->finalize, ((struct sNode*)right_value936)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(!node_compile(node_780,info)) {
            err_msg(info,"compiling error(X)");
            exit(2);
        }
        __dec_obj216=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_763);
        come_call_finalizer3(__dec_obj216,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_759;
        info->head=head_762;
        info->sline=sline_760;
        __dec_obj217=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_761);
        __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_751,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_761 = come_decrement_ref_count2(sname_761, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_763,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_764,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_765,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_766 = come_decrement_ref_count2(name_766, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_767,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_768,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_770,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_772,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_773,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_774,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_778,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_780) { node_780 = come_decrement_ref_count2(node_780, ((struct sNode*)node_780)->finalize, ((struct sNode*)node_780)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_746;
    __dec_obj218=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_743);
    __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj219=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_744);
    __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj220=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_745);
    __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result232__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value938=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value937=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2700, "struct tuple2$2sFunpcharph")))),equaler_747,(char*)come_increment_ref_count(real_fun_name_748))));
    last_code_743 = come_decrement_ref_count2(last_code_743, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_744 = come_decrement_ref_count2(last_code2_744, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_745 = come_decrement_ref_count2(last_code3_745, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_748 = come_decrement_ref_count2(real_fun_name_748, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_749,sType_finalize, 0, 0, 0, 0, (void*)0);
    right_value937 = come_decrement_ref_count2(right_value937, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value938,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result232__;
    last_code_743 = come_decrement_ref_count2(last_code_743, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_744 = come_decrement_ref_count2(last_code2_744, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_745 = come_decrement_ref_count2(last_code3_745, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_748 = come_decrement_ref_count2(real_fun_name_748, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_749,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_782;
char* __dec_obj221;
char* last_code2_783;
char* __dec_obj222;
char* last_code3_784;
char* __dec_obj223;
struct sClass* current_stack_frame_struct_785;
struct sFun* cloner_786;
void* right_value939;
char* real_fun_name_787;
void* right_value940;
struct sType* type2_788;
struct sClass* klass_789;
void* right_value941;
void* right_value942;
struct buffer* source_790;
void* right_value943;
void* right_value944;
char* name_791;
struct list$1tuple2$2charphsTypephph* o2_saved_793;
struct tuple2$2charphsTypeph* it_794;
struct tuple2$2charphsTypeph* multiple_assign_var15;
char* name_795;
struct sType* field_type_796;
struct list$1tuple2$2charphsTypephph* o2_saved_799;
struct tuple2$2charphsTypeph* it_800;
struct tuple2$2charphsTypeph* multiple_assign_var16;
char* name_801;
struct sType* field_type_802;
void* right_value945;
char* p_806;
int sline_807;
char* sname_808;
struct buffer* source3_809;
char* head_810;
struct buffer* __dec_obj224;
void* right_value946;
char* __dec_obj225;
void* right_value947;
struct sBlock* block_811;
void* right_value948;
struct sType* result_type_812;
void* right_value949;
char* name_813;
void* right_value950;
struct sType* self_type_814;
struct sType* __list_values31___815[1];
void* right_value951;
void* right_value952;
struct list$1sTypeph* param_types_816;
void* right_value953;
char* __list_values32___817[1];
void* right_value954;
void* right_value955;
struct list$1charph* param_names_818;
void* right_value956;
void* right_value957;
struct list$1charph* param_default_parametors_819;
void* right_value958;
void* right_value959;
struct buffer* header_buf_820;
void* right_value960;
int i_821;
struct sType* param_type_822;
char* param_name_823;
void* right_value961;
void* right_value962;
void* right_value963;
void* right_value964;
void* right_value965;
struct sFun* fun_824;
void* right_value966;
struct sFun* fun2_825;
void* right_value967;
void* right_value968;
void* right_value969;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* right_value973;
struct sNode* node_826;
char* __dec_obj228;
struct buffer* __dec_obj229;
char* __dec_obj230;
char* __dec_obj231;
char* __dec_obj232;
void* right_value974;
void* right_value975;
struct tuple2$2sFunpcharph* __result235__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_782, 0, sizeof(char*));
memset(&last_code2_783, 0, sizeof(char*));
memset(&last_code3_784, 0, sizeof(char*));
memset(&current_stack_frame_struct_785, 0, sizeof(struct sClass*));
memset(&cloner_786, 0, sizeof(struct sFun*));
right_value939 = (void*)0;
memset(&real_fun_name_787, 0, sizeof(char*));
right_value940 = (void*)0;
memset(&type2_788, 0, sizeof(struct sType*));
memset(&klass_789, 0, sizeof(struct sClass*));
right_value941 = (void*)0;
right_value942 = (void*)0;
memset(&source_790, 0, sizeof(struct buffer*));
right_value943 = (void*)0;
right_value944 = (void*)0;
memset(&name_791, 0, sizeof(char*));
memset(&o2_saved_793, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_794, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&o2_saved_799, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_800, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value945 = (void*)0;
memset(&p_806, 0, sizeof(char*));
memset(&sline_807, 0, sizeof(int));
memset(&sname_808, 0, sizeof(char*));
memset(&source3_809, 0, sizeof(struct buffer*));
memset(&head_810, 0, sizeof(char*));
right_value946 = (void*)0;
right_value947 = (void*)0;
memset(&block_811, 0, sizeof(struct sBlock*));
right_value948 = (void*)0;
memset(&result_type_812, 0, sizeof(struct sType*));
right_value949 = (void*)0;
memset(&name_813, 0, sizeof(char*));
right_value950 = (void*)0;
memset(&self_type_814, 0, sizeof(struct sType*));
right_value951 = (void*)0;
right_value952 = (void*)0;
memset(&param_types_816, 0, sizeof(struct list$1sTypeph*));
right_value953 = (void*)0;
right_value954 = (void*)0;
right_value955 = (void*)0;
memset(&param_names_818, 0, sizeof(struct list$1charph*));
right_value956 = (void*)0;
right_value957 = (void*)0;
memset(&param_default_parametors_819, 0, sizeof(struct list$1charph*));
right_value958 = (void*)0;
right_value959 = (void*)0;
memset(&header_buf_820, 0, sizeof(struct buffer*));
right_value960 = (void*)0;
memset(&i_821, 0, sizeof(int));
memset(&param_type_822, 0, sizeof(struct sType*));
memset(&param_name_823, 0, sizeof(char*));
right_value961 = (void*)0;
right_value962 = (void*)0;
right_value963 = (void*)0;
right_value964 = (void*)0;
right_value965 = (void*)0;
memset(&fun_824, 0, sizeof(struct sFun*));
right_value966 = (void*)0;
memset(&fun2_825, 0, sizeof(struct sFun*));
right_value967 = (void*)0;
right_value968 = (void*)0;
right_value969 = (void*)0;
right_value973 = (void*)0;
memset(&node_826, 0, sizeof(struct sNode*));
right_value974 = (void*)0;
right_value975 = (void*)0;
    last_code_782=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj221=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_783=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj222=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_784=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj223=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_785=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_786=((void*)0);
    real_fun_name_787=(char*)come_increment_ref_count(((char*)(right_value939=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value939 = come_decrement_ref_count2(right_value939, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_788=(struct sType*)come_increment_ref_count(((struct sType*)(right_value940=solve_generics(type,type,info))));
    come_call_finalizer3(right_value940,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type=type2_788;
    klass_789=type->mClass;
    if(type->mPointerNum>0&&!klass_789->mNumber) {
        source_790=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value942=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value941=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2725, "buffer"))))))));
        come_call_finalizer3(right_value941,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value942,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(source_790,"{\n");
        buffer_append_str(source_790,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_str(source_790,((char*)(right_value944=xsprintf("var result = new %s;\n",((char*)(right_value943=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info)))))));
        right_value943 = come_decrement_ref_count2(right_value943, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value944 = come_decrement_ref_count2(right_value944, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(klass_789->mProtocol) {
            name_791="_protocol_obj";
            char source2_792[1024];
            memset(&source2_792, 0, sizeof(char)            *(1024)            );
            snprintf(source2_792,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_790,source2_792);
            klass_789=map$2charphsClassphp_operator_load_element(info->classes,klass_789->mName);
            for(            o2_saved_793=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_789->mFields)),it_794=list$1tuple2$2charphsTypephph_begin((o2_saved_793));            !list$1tuple2$2charphsTypephph_end((o2_saved_793));            it_794=list$1tuple2$2charphsTypephph_next((o2_saved_793))            ){
                multiple_assign_var15=it_794;
                name_795=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_796=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                if(string_operator_equals(type->mClass->mName,field_type_796->mClass->mName)&&type->mPointerNum==field_type_796->mPointerNum&&field_type_796->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(string_operator_equals(name_795,"_protocol_obj")) {
                }
                else {
                    if(list$1sNodeph_length(field_type_796->mArrayNum)>0) {
                        char source2_797[1024];
                        memset(&source2_797, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_797,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_795,name_795,name_795);
                        buffer_append_str(source_790,source2_797);
                    }
                    else {
                        char source2_798[1024];
                        memset(&source2_798, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_798,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_795,name_795);
                        buffer_append_str(source_790,source2_798);
                    }
                }
                name_795 = come_decrement_ref_count2(name_795, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_796,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_793,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_789=map$2charphsClassphp_operator_load_element(info->classes,klass_789->mName);
            for(            o2_saved_799=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_789->mFields)),it_800=list$1tuple2$2charphsTypephph_begin((o2_saved_799));            !list$1tuple2$2charphsTypephph_end((o2_saved_799));            it_800=list$1tuple2$2charphsTypephph_next((o2_saved_799))            ){
                multiple_assign_var16=it_800;
                name_801=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_802=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                if(string_operator_equals(type->mClass->mName,field_type_802->mClass->mName)&&type->mPointerNum==field_type_802->mPointerNum&&field_type_802->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(field_type_802->mHeap) {
                    char source2_803[1024];
                    memset(&source2_803, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_803,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_801,name_801,name_801);
                    buffer_append_str(source_790,source2_803);
                }
                else {
                    if(list$1sNodeph_length(field_type_802->mArrayNum)>0) {
                        char source2_804[1024];
                        memset(&source2_804, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_804,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_801,name_801,name_801);
                        buffer_append_str(source_790,source2_804);
                    }
                    else {
                        char source2_805[1024];
                        memset(&source2_805, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_805,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_801,name_801);
                        buffer_append_str(source_790,source2_805);
                    }
                }
                name_801 = come_decrement_ref_count2(name_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_802,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_799,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_790,((char*)(right_value945=xsprintf("return result;"))));
        right_value945 = come_decrement_ref_count2(right_value945, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_790,125);
        p_806=info->p;
        sline_807=info->sline;
        sname_808=(char*)come_increment_ref_count(info->sname);
        source3_809=(struct buffer*)come_increment_ref_count(info->source);
        head_810=info->head;
        __dec_obj224=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_790);
        come_call_finalizer3(__dec_obj224,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj225=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value946=__builtin_string(real_fun_name_787))));
        __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value946 = come_decrement_ref_count2(right_value946, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=1;
        block_811=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value947=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer3(right_value947,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        result_type_812=(struct sType*)come_increment_ref_count(((struct sType*)(right_value948=sType_clone(type))));
        come_call_finalizer3(right_value948,sType_finalize, 0, 1, 0, 0, __result_obj__);
        name_813=(char*)come_increment_ref_count(((char*)(right_value949=string_clone(real_fun_name_787))));
        right_value949 = come_decrement_ref_count2(right_value949, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self_type_814=(struct sType*)come_increment_ref_count(((struct sType*)(right_value950=sType_clone(type))));
        come_call_finalizer3(right_value950,sType_finalize, 0, 1, 0, 0, __result_obj__);
        self_type_814->mHeap=(_Bool)0;
        {__list_values31___815[0]=come_increment_ref_count(self_type_814);
}        param_types_816=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value952=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value951=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2819, "struct list$1sTypeph")))),1,__list_values31___815))));
        come_call_finalizer3(right_value951,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value952,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values32___817[0]=come_increment_ref_count(((char*)(right_value953=__builtin_string("self"))));
}        param_names_818=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value955=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value954=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2820, "struct list$1charph")))),1,__list_values32___817))));
        right_value953 = come_decrement_ref_count2(right_value953, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value954,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value955,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_819=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value957=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value956=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2821, "list$1charph"))))))));
        come_call_finalizer3(right_value956,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value957,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_819,((void*)0));
        header_buf_820=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value959=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value958=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2824, "buffer"))))))));
        come_call_finalizer3(right_value958,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value959,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_820,((char*)(right_value960=make_come_type_name_string(result_type_812,info))));
        right_value960 = come_decrement_ref_count2(right_value960, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_820," ");
        buffer_append_str(header_buf_820,real_fun_name_787);
        buffer_append_str(header_buf_820,"(");
        for(        i_821=0;        i_821<list$1sTypeph_length(param_types_816);        i_821++        ){
            param_type_822=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_816,i_821), "05function.c", 2832, 15));
            param_name_823=((char*)come_null_check(list$1charphp_operator_load_element(param_names_818,i_821), "05function.c", 2833, 16));
            buffer_append_str(header_buf_820,((char*)(right_value961=make_come_type_name_string(param_type_822,info))));
            right_value961 = come_decrement_ref_count2(right_value961, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_820," ");
            buffer_append_str(header_buf_820,param_name_823);
            if(i_821!=list$1sTypeph_length(param_types_816)-1) {
                buffer_append_str(header_buf_820,",");
            }
        }
        buffer_append_str(header_buf_820,")");
        result_type_812->mStatic=(_Bool)0;
        fun_824=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value965=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value962=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2847, "sFun")))),(char*)come_increment_ref_count(name_813),(struct sType*)come_increment_ref_count(result_type_812),(struct list$1sTypeph*)come_increment_ref_count(param_types_816),(struct list$1charph*)come_increment_ref_count(param_names_818),(struct list$1charph*)come_increment_ref_count(param_default_parametors_819),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_811),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value963=buffer_to_string(header_buf_820)))),(char*)come_increment_ref_count(((char*)(right_value964=__builtin_string("")))),info))));
        come_call_finalizer3(right_value962,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value963 = come_decrement_ref_count2(right_value963, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value964 = come_decrement_ref_count2(right_value964, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value965,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        fun_824->mCloner=(_Bool)1;
        fun2_825=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value966=__builtin_string(fun_name))));
        right_value966 = come_decrement_ref_count2(right_value966, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_825==((void*)0)||fun2_825->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value967=string_clone(name_813)))),(struct sFun*)come_increment_ref_count(fun_824));
            right_value967 = come_decrement_ref_count2(right_value967, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        cloner_786=fun_824;
        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2864, "struct sNode");
        _inf_obj_value14=come_increment_ref_count(((struct sFunNode*)(right_value969=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value968=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2864, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_824),info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sFunNode_finalize;
        _inf_value14->clone=(void*)sFunNode_clone;
        _inf_value14->compile=(void*)sFunNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sFunNode_kind;
        node_826=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value973=_inf_value14)));
        come_call_finalizer3(right_value968,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value969,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value973) { right_value973 = come_decrement_ref_count2(right_value973, ((struct sNode*)right_value973)->finalize, ((struct sNode*)right_value973)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(!node_compile(node_826,info)) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        __dec_obj228=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_808);
        __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_807;
        __dec_obj229=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_809);
        come_call_finalizer3(__dec_obj229,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_806;
        info->head=head_810;
        info->sline=sline_807;
        come_call_finalizer3(source_790,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_808 = come_decrement_ref_count2(sname_808, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_809,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_811,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_812,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_813 = come_decrement_ref_count2(name_813, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_814,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_816,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_818,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_819,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_820,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_824,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_826) { node_826 = come_decrement_ref_count2(node_826, ((struct sNode*)node_826)->finalize, ((struct sNode*)node_826)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_785;
    __dec_obj230=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_782);
    __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj231=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_783);
    __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj232=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_784);
    __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result235__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value975=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value974=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2886, "struct tuple2$2sFunpcharph")))),cloner_786,(char*)come_increment_ref_count(real_fun_name_787))));
    last_code_782 = come_decrement_ref_count2(last_code_782, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_783 = come_decrement_ref_count2(last_code2_783, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_784 = come_decrement_ref_count2(last_code3_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_787 = come_decrement_ref_count2(real_fun_name_787, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_788,sType_finalize, 0, 0, 0, 0, (void*)0);
    right_value974 = come_decrement_ref_count2(right_value974, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value975,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result235__;
    last_code_782 = come_decrement_ref_count2(last_code_782, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_783 = come_decrement_ref_count2(last_code2_783, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_784 = come_decrement_ref_count2(last_code3_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_787 = come_decrement_ref_count2(real_fun_name_787, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_788,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static void sFunNode_finalize(struct sFunNode* self){
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mFun!=((void*)0)) {
                come_call_finalizer3(self->mFun,sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__;
struct sFunNode* __result233__;
void* right_value970;
struct sFunNode* result_827;
void* right_value971;
char* __dec_obj226;
void* right_value972;
struct sFun* __dec_obj227;
struct sFunNode* __result234__;
memset(&__result_obj__, 0, sizeof(void*));
right_value970 = (void*)0;
memset(&result_827, 0, sizeof(struct sFunNode*));
right_value971 = (void*)0;
right_value972 = (void*)0;
            if(self==(void*)0) {
                __result233__ = __result_obj__ = (void*)0;
                return __result233__;
            }
            result_827=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value970=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "sFunNode"))));
            come_call_finalizer3(right_value970,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(self!=((void*)0)) {
                result_827->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj226=result_827->sname;
                result_827->sname=(char*)come_increment_ref_count(((char*)(right_value971=string_clone(self->sname))));
                __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value971 = come_decrement_ref_count2(right_value971, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(self!=((void*)0)&&self->mFun!=((void*)0)) {
                __dec_obj227=result_827->mFun;
                result_827->mFun=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value972=sFun_clone(self->mFun))));
                come_call_finalizer3(__dec_obj227,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value972,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            }
            __result234__ = __result_obj__ = result_827;
            come_call_finalizer3(result_827,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
            return __result234__;
            come_call_finalizer3(result_827,sFunNode_finalize, 0, 0, 0, 0, (void*)0);
}

