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
_Bool __result1__;
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
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1899, "buffer"))))))));
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
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1906, "buffer"))))))));
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
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1913, "buffer"))))))));
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
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1920, "buffer"))))))));
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
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1927, "buffer"))))))));
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
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1934, "buffer"))))))));
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
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1950, "smart_pointer$1char"))));
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
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1960, "smart_pointer$1char"))));
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
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 1970, "smart_pointer$1short"))));
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
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 1980, "smart_pointer$1int"))));
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
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 1990, "smart_pointer$1long"))));
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
    __result14__ = __result_obj__ = ((struct smart_pointer$1char*)(right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2161, "smart_pointer$1char")))),self,len)));
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
    __result16__ = __result_obj__ = ((struct smart_pointer$1short*)(right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2166, "smart_pointer$1short")))),self,len)));
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
    __result18__ = __result_obj__ = ((struct smart_pointer$1int*)(right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2171, "smart_pointer$1int")))),self,len)));
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
    __result20__ = __result_obj__ = ((struct smart_pointer$1long*)(right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2176, "smart_pointer$1long")))),self,len)));
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
    __result22__ = __result_obj__ = ((struct smart_pointer$1float*)(right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./neo-c.h", 2181, "smart_pointer$1float")))),self,len)));
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
    __result24__ = __result_obj__ = ((struct smart_pointer$1double*)(right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./neo-c.h", 2186, "smart_pointer$1double")))),self,len)));
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
    __result27__ = __result_obj__ = ((struct list$1char*)(right_value50=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count(((struct list$1char*)(right_value46=(struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./neo-c.h", 2191, "list$1char")))),len,self)));
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
    __result30__ = __result_obj__ = ((struct list$1short*)(right_value55=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count(((struct list$1short*)(right_value51=(struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./neo-c.h", 2196, "list$1short")))),len,self)));
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
    __result33__ = __result_obj__ = ((struct list$1int*)(right_value60=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value56=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./neo-c.h", 2201, "list$1int")))),len,self)));
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
    __result36__ = __result_obj__ = ((struct list$1long*)(right_value65=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count(((struct list$1long*)(right_value61=(struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./neo-c.h", 2206, "list$1long")))),len,self)));
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
    __result39__ = __result_obj__ = ((struct list$1float*)(right_value70=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count(((struct list$1float*)(right_value66=(struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./neo-c.h", 2211, "list$1float")))),len,self)));
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
    __result42__ = __result_obj__ = ((struct list$1double*)(right_value75=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count(((struct list$1double*)(right_value71=(struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./neo-c.h", 2216, "list$1double")))),len,self)));
    come_call_finalizer3(right_value71,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value75,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    return __result42__;
}
static inline unsigned long int charpa_length(char* self, unsigned long int len){
unsigned long int __result43__;
    __result43__ = len;
    return __result43__;
}
static inline unsigned long int shortpa_length(short short* self, unsigned long int len){
unsigned long int __result44__;
    __result44__ = len;
    return __result44__;
}
static inline unsigned long int intpa_length(int* self, unsigned long int len){
unsigned long int __result45__;
    __result45__ = len;
    return __result45__;
}
static inline unsigned long int longpa_length(long* self, unsigned long int len){
unsigned long int __result46__;
    __result46__ = len;
    return __result46__;
}
static inline unsigned long int floatpa_length(float* self, unsigned long int len){
unsigned long int __result47__;
    __result47__ = len;
    return __result47__;
}
static inline unsigned long int doublepa_length(double* self, unsigned long int len){
unsigned long int __result48__;
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
struct smart_pointer$1char* __result13__;
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2002, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2002, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2002, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2002, "buffer"))))))));
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
            if(self!=((void*)0)&&self->memory!=((void*)0)) {
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2002, "buffer"))))))));
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
            if(self!=((void*)0)&&self->memory!=((void*)0)) {
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
void* right_value47;
struct list_item$1char* litem_12;
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
                __result25__ = __result_obj__ = self;
                return __result25__;
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
void* right_value52;
struct list_item$1short* litem_18;
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
                __result28__ = __result_obj__ = self;
                return __result28__;
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
void* right_value57;
struct list_item$1int* litem_24;
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
                __result31__ = __result_obj__ = self;
                return __result31__;
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
void* right_value62;
struct list_item$1long* litem_30;
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
                __result34__ = __result_obj__ = self;
                return __result34__;
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
void* right_value67;
struct list_item$1float* litem_36;
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
                __result37__ = __result_obj__ = self;
                return __result37__;
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
void* right_value72;
struct list_item$1double* litem_42;
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
                __result40__ = __result_obj__ = self;
                return __result40__;
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
struct sSemicolonNode* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
    ((struct sNodeBase*)(right_value79=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value79,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result52__ = __result_obj__ = self;
    come_call_finalizer3(self,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result52__;
    come_call_finalizer3(self,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sSemicolonNode_kind(struct sSemicolonNode* self){
void* __result_obj__;
void* right_value80;
char* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
    __result53__ = __result_obj__ = ((char*)(right_value80=__builtin_string("sSemicolonNode")));
    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result53__;
}

_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info){
_Bool __result54__;
    add_come_code(info,";\n");
    __result54__ = (_Bool)1;
    return __result54__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
        if(self!=((void*)0)&&self->sname!=((void*)0)) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__;
void* right_value81;
struct sLambdaNode* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
    ((struct sNodeBase*)(right_value81=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value81,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mFun=fun;
    __result55__ = __result_obj__ = self;
    come_call_finalizer3(self,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result55__;
    come_call_finalizer3(self,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sLambdaNode_kind(struct sLambdaNode* self){
void* __result_obj__;
void* right_value82;
char* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
    __result56__ = __result_obj__ = ((char*)(right_value82=__builtin_string("sLambdaNode")));
    right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result56__;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
struct sFun* come_fun_47;
void* right_value83;
void* right_value84;
struct sType* result_type_48;
void* right_value85;
void* right_value86;
void* right_value87;
struct CVALUE* come_value_55;
void* right_value88;
char* __dec_obj12;
void* right_value124;
struct sType* __dec_obj36;
_Bool __result76__;
memset(&come_fun_47, 0, sizeof(struct sFun*));
right_value83 = (void*)0;
right_value84 = (void*)0;
memset(&result_type_48, 0, sizeof(struct sType*));
right_value85 = (void*)0;
right_value86 = (void*)0;
right_value87 = (void*)0;
memset(&come_value_55, 0, sizeof(struct CVALUE*));
right_value88 = (void*)0;
right_value124 = (void*)0;
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
    come_value_55=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value87=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 53, "CVALUE"))));
    come_call_finalizer3(right_value87,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj12=come_value_55->c_value;
    come_value_55->c_value=(char*)come_increment_ref_count(((char*)(right_value88=xsprintf("%s",self->mFun->mName))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj36=come_value_55->type;
    come_value_55->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value124=sType_clone(self->mFun->mLambdaType))));
    come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value124,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_55->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_55->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_55));
    info->come_fun=come_fun_47;
    __result76__ = (_Bool)1;
    come_call_finalizer3(result_type_48,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_55,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result76__;
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
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
struct sType* __result57__;
void* right_value89;
struct sType* result_56;
void* right_value96;
struct list$1sTypeph* __dec_obj16;
void* right_value99;
struct tuple1$1sTypeph* __dec_obj18;
void* right_value100;
struct tuple1$1sTypeph* __dec_obj19;
void* right_value101;
char* __dec_obj20;
void* right_value102;
struct list$1sTypeph* __dec_obj21;
void* right_value110;
struct list$1sNodeph* __dec_obj25;
void* right_value111;
struct list$1sTypeph* __dec_obj26;
void* right_value118;
struct list$1charph* __dec_obj30;
void* right_value119;
struct tuple1$1sTypeph* __dec_obj31;
void* right_value120;
struct sNode* __dec_obj32;
void* right_value121;
struct sNode* __dec_obj33;
void* right_value122;
char* __dec_obj34;
void* right_value123;
char* __dec_obj35;
struct sType* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
memset(&result_56, 0, sizeof(struct sType*));
right_value96 = (void*)0;
right_value99 = (void*)0;
right_value100 = (void*)0;
right_value101 = (void*)0;
right_value102 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
right_value118 = (void*)0;
right_value119 = (void*)0;
right_value120 = (void*)0;
right_value121 = (void*)0;
right_value122 = (void*)0;
right_value123 = (void*)0;
        if(self==(void*)0) {
            __result57__ = __result_obj__ = (void*)0;
            return __result57__;
        }
        result_56=(struct sType*)come_increment_ref_count(((struct sType*)(right_value89=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer3(right_value89,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(self!=((void*)0)) {
            result_56->mClass=self->mClass;
        }
        if(self!=((void*)0)&&self->mMultipleTypes!=((void*)0)) {
            __dec_obj16=result_56->mMultipleTypes;
            result_56->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value96=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer3(__dec_obj16,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value96,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
            __dec_obj18=result_56->mNoSolvedGenericsType;
            result_56->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value99=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer3(__dec_obj18,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value99,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
            __dec_obj19=result_56->mOriginalLoadVarType;
            result_56->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value100=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer3(__dec_obj19,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value100,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
            __dec_obj20=result_56->mGenericsName;
            result_56->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value101=string_clone(self->mGenericsName))));
            __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
            __dec_obj21=result_56->mGenericsTypes;
            result_56->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value102=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer3(__dec_obj21,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value102,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
            __dec_obj25=result_56->mArrayNum;
            result_56->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value110=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer3(__dec_obj25,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value110,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)) {
            result_56->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
            __dec_obj26=result_56->mParamTypes;
            result_56->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value111=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer3(__dec_obj26,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value111,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
            __dec_obj30=result_56->mParamNames;
            result_56->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value118=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer3(__dec_obj30,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value118,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
            __dec_obj31=result_56->mResultType;
            result_56->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value119=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer3(__dec_obj31,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value119,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)) {
            result_56->mVarArgs=self->mVarArgs;
        }
        if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
            __dec_obj32=result_56->mAlignas;
            result_56->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value120=sNode_clone(self->mAlignas))));
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value120) { right_value120 = come_decrement_ref_count2(right_value120, ((struct sNode*)right_value120)->finalize, ((struct sNode*)right_value120)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(self!=((void*)0)) {
            result_56->mUnsigned=self->mUnsigned;
        }
        if(self!=((void*)0)) {
            result_56->mShort=self->mShort;
        }
        if(self!=((void*)0)) {
            result_56->mLong=self->mLong;
        }
        if(self!=((void*)0)) {
            result_56->mLongLong=self->mLongLong;
        }
        if(self!=((void*)0)) {
            result_56->mConstant=self->mConstant;
        }
        if(self!=((void*)0)) {
            result_56->mRegister=self->mRegister;
        }
        if(self!=((void*)0)) {
            result_56->mVolatile=self->mVolatile;
        }
        if(self!=((void*)0)) {
            result_56->mStatic=self->mStatic;
        }
        if(self!=((void*)0)) {
            result_56->mUniq=self->mUniq;
        }
        if(self!=((void*)0)) {
            result_56->mRecord=self->mRecord;
        }
        if(self!=((void*)0)) {
            result_56->mExtern=self->mExtern;
        }
        if(self!=((void*)0)) {
            result_56->mRestrict=self->mRestrict;
        }
        if(self!=((void*)0)) {
            result_56->mImmutable=self->mImmutable;
        }
        if(self!=((void*)0)) {
            result_56->mHeap=self->mHeap;
        }
        if(self!=((void*)0)) {
            result_56->mDummyHeap=self->mDummyHeap;
        }
        if(self!=((void*)0)) {
            result_56->mDelegate=self->mDelegate;
        }
        if(self!=((void*)0)) {
            result_56->mShare=self->mShare;
        }
        if(self!=((void*)0)) {
            result_56->mClone=self->mClone;
        }
        if(self!=((void*)0)) {
            result_56->mNoHeap=self->mNoHeap;
        }
        if(self!=((void*)0)) {
            result_56->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(self!=((void*)0)) {
            result_56->mRefference=self->mRefference;
        }
        if(self!=((void*)0)) {
            result_56->mException=self->mException;
        }
        if(self!=((void*)0)) {
            result_56->mPointerNum=self->mPointerNum;
        }
        if(self!=((void*)0)) {
            result_56->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(self!=((void*)0)) {
            result_56->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(self!=((void*)0)) {
            result_56->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
        }
        if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
            __dec_obj33=result_56->mSizeNum;
            result_56->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value121=sNode_clone(self->mSizeNum))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value121) { right_value121 = come_decrement_ref_count2(right_value121, ((struct sNode*)right_value121)->finalize, ((struct sNode*)right_value121)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(self!=((void*)0)) {
            result_56->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(self!=((void*)0)) {
            result_56->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
            __dec_obj34=result_56->mOriginalTypeName;
            result_56->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value122=string_clone(self->mOriginalTypeName))));
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)) {
            result_56->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(self!=((void*)0)) {
            result_56->mFunctionParam=self->mFunctionParam;
        }
        if(self!=((void*)0)) {
            result_56->mAllocaValue=self->mAllocaValue;
        }
        if(self!=((void*)0)) {
            result_56->mGenericsStruct=self->mGenericsStruct;
        }
        if(self!=((void*)0)) {
            result_56->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(self!=((void*)0)) {
            result_56->mComeMemCore=self->mComeMemCore;
        }
        if(self!=((void*)0)) {
            result_56->mInline=self->mInline;
        }
        if(self!=((void*)0)) {
            result_56->mNullValue=self->mNullValue;
        }
        if(self!=((void*)0)) {
            result_56->mGuardValue=self->mGuardValue;
        }
        if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
            __dec_obj35=result_56->mAsmName;
            result_56->mAsmName=(char*)come_increment_ref_count(((char*)(right_value123=string_clone(self->mAsmName))));
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)) {
            result_56->mArrayPointerType=self->mArrayPointerType;
        }
        if(self!=((void*)0)) {
            result_56->mLambdaArray=self->mLambdaArray;
        }
        if(self!=((void*)0)) {
            result_56->mNoNumberArray=self->mNoNumberArray;
        }
        __result74__ = __result_obj__ = result_56;
        come_call_finalizer3(result_56,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result74__;
        come_call_finalizer3(result_56,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result58__;
void* right_value90;
void* right_value91;
struct list$1sTypeph* result_57;
struct list_item$1sTypeph* it_58;
void* right_value95;
struct list$1sTypeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
right_value91 = (void*)0;
memset(&result_57, 0, sizeof(struct list$1sTypeph*));
memset(&it_58, 0, sizeof(struct list_item$1sTypeph*));
right_value95 = (void*)0;
                if(self==((void*)0)) {
                    __result58__ = __result_obj__ = ((void*)0);
                    return __result58__;
                }
                result_57=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value91=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value90=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 135, "list$1sTypeph"))))))));
                come_call_finalizer3(right_value90,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value91,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_58=self->head;
                while(it_58!=((void*)0)) {
                    list$1sTypeph_add(result_57,(struct sType*)come_increment_ref_count(((struct sType*)(right_value95=sType_clone(it_58->item)))));
                    come_call_finalizer3(right_value95,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    it_58=it_58->next;
                }
                __result61__ = __result_obj__ = result_57;
                come_call_finalizer3(result_57,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result61__;
                come_call_finalizer3(result_57,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result59__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result59__;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
void* right_value92;
struct list_item$1sTypeph* litem_59;
struct sType* __dec_obj13;
void* right_value93;
struct list_item$1sTypeph* litem_60;
struct sType* __dec_obj14;
void* right_value94;
struct list_item$1sTypeph* litem_61;
struct sType* __dec_obj15;
struct list$1sTypeph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value92 = (void*)0;
memset(&litem_59, 0, sizeof(struct list_item$1sTypeph*));
right_value93 = (void*)0;
memset(&litem_60, 0, sizeof(struct list_item$1sTypeph*));
right_value94 = (void*)0;
memset(&litem_61, 0, sizeof(struct list_item$1sTypeph*));
                        if(self->len==0) {
                            litem_59=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value92=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 149, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value92,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_59->prev=((void*)0);
                            litem_59->next=((void*)0);
                            __dec_obj13=litem_59->item;
                            litem_59->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj13,sType_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_59;
                            self->head=litem_59;
                        }
                        else {
                            if(self->len==1) {
                                litem_60=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value93=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 159, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value93,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_60->prev=self->head;
                                litem_60->next=((void*)0);
                                __dec_obj14=litem_60->item;
                                litem_60->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_60;
                                self->head->next=litem_60;
                            }
                            else {
                                litem_61=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value94=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 169, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value94,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_61->prev=self->tail;
                                litem_61->next=((void*)0);
                                __dec_obj15=litem_61->item;
                                litem_61->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj15,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail->next=litem_61;
                                self->tail=litem_61;
                            }
                        }
                        self->len++;
                        __result60__ = __result_obj__ = self;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result60__;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_62;
struct list_item$1sTypeph* prev_it_63;
memset(&it_62, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_63, 0, sizeof(struct list_item$1sTypeph*));
                it_62=self->head;
                while(it_62!=((void*)0)) {
                    prev_it_63=it_62;
                    it_62=it_62->next;
                    come_call_finalizer3(prev_it_63,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
struct tuple1$1sTypeph* __result62__;
void* right_value97;
struct tuple1$1sTypeph* result_64;
void* right_value98;
struct sType* __dec_obj17;
struct tuple1$1sTypeph* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value97 = (void*)0;
memset(&result_64, 0, sizeof(struct tuple1$1sTypeph*));
right_value98 = (void*)0;
                if(self==(void*)0) {
                    __result62__ = __result_obj__ = (void*)0;
                    return __result62__;
                }
                result_64=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value97=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer3(right_value97,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                    __dec_obj17=result_64->v1;
                    result_64->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value98=sType_clone(self->v1))));
                    come_call_finalizer3(__dec_obj17,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value98,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                __result63__ = __result_obj__ = result_64;
                come_call_finalizer3(result_64,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result63__;
                come_call_finalizer3(result_64,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
                    if(self!=((void*)0)&&self->v1!=((void*)0)) {
                        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result64__;
void* right_value103;
void* right_value104;
struct list$1sNodeph* result_65;
struct list_item$1sNodeph* it_66;
void* right_value109;
struct list$1sNodeph* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value103 = (void*)0;
right_value104 = (void*)0;
memset(&result_65, 0, sizeof(struct list$1sNodeph*));
memset(&it_66, 0, sizeof(struct list_item$1sNodeph*));
right_value109 = (void*)0;
                if(self==((void*)0)) {
                    __result64__ = __result_obj__ = ((void*)0);
                    return __result64__;
                }
                result_65=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value104=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value103=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 135, "list$1sNodeph"))))))));
                come_call_finalizer3(right_value103,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value104,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_66=self->head;
                while(it_66!=((void*)0)) {
                    list$1sNodeph_add(result_65,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value109=sNode_clone(it_66->item)))));
                    if(right_value109) { right_value109 = come_decrement_ref_count2(right_value109, ((struct sNode*)right_value109)->finalize, ((struct sNode*)right_value109)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    it_66=it_66->next;
                }
                __result69__ = __result_obj__ = result_65;
                come_call_finalizer3(result_65,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result69__;
                come_call_finalizer3(result_65,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result65__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result65__;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
void* right_value105;
struct list_item$1sNodeph* litem_67;
struct sNode* __dec_obj22;
void* right_value106;
struct list_item$1sNodeph* litem_68;
struct sNode* __dec_obj23;
void* right_value107;
struct list_item$1sNodeph* litem_69;
struct sNode* __dec_obj24;
struct list$1sNodeph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
right_value105 = (void*)0;
memset(&litem_67, 0, sizeof(struct list_item$1sNodeph*));
right_value106 = (void*)0;
memset(&litem_68, 0, sizeof(struct list_item$1sNodeph*));
right_value107 = (void*)0;
memset(&litem_69, 0, sizeof(struct list_item$1sNodeph*));
                        if(self->len==0) {
                            litem_67=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value105=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 149, "list_item$1sNodeph"))));
                            come_call_finalizer3(right_value105,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_67->prev=((void*)0);
                            litem_67->next=((void*)0);
                            __dec_obj22=litem_67->item;
                            litem_67->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail=litem_67;
                            self->head=litem_67;
                        }
                        else {
                            if(self->len==1) {
                                litem_68=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value106=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 159, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value106,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_68->prev=self->head;
                                litem_68->next=((void*)0);
                                __dec_obj23=litem_68->item;
                                litem_68->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_68;
                                self->head->next=litem_68;
                            }
                            else {
                                litem_69=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value107=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 169, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value107,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_69->prev=self->tail;
                                litem_69->next=((void*)0);
                                __dec_obj24=litem_69->item;
                                litem_69->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail->next=litem_69;
                                self->tail=litem_69;
                            }
                        }
                        self->len++;
                        __result66__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result66__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
struct sNode* __result67__;
void* right_value108;
struct sNode* result_70;
struct sNode* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value108 = (void*)0;
memset(&result_70, 0, sizeof(struct sNode*));
                        if(self==(void*)0) {
                            __result67__ = __result_obj__ = (void*)0;
                            return __result67__;
                        }
                        result_70=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value108=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value108) { right_value108 = come_decrement_ref_count2(right_value108, ((struct sNode*)right_value108)->finalize, ((struct sNode*)right_value108)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        if(self!=((void*)0)&&self->clone!=((void*)0)) {
                            result_70->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(self!=((void*)0)) {
                            result_70->finalize=self->finalize;
                        }
                        if(self!=((void*)0)) {
                            result_70->clone=self->clone;
                        }
                        if(self!=((void*)0)) {
                            result_70->compile=self->compile;
                        }
                        if(self!=((void*)0)) {
                            result_70->sline=self->sline;
                        }
                        if(self!=((void*)0)) {
                            result_70->sname=self->sname;
                        }
                        if(self!=((void*)0)) {
                            result_70->terminated=self->terminated;
                        }
                        if(self!=((void*)0)) {
                            result_70->kind=self->kind;
                        }
                        __result68__ = __result_obj__ = result_70;
                        if(result_70) { result_70 = come_decrement_ref_count2(result_70, ((struct sNode*)result_70)->finalize, ((struct sNode*)result_70)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result68__;
                        if(result_70) { result_70 = come_decrement_ref_count2(result_70, ((struct sNode*)result_70)->finalize, ((struct sNode*)result_70)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_71;
struct list_item$1sNodeph* prev_it_72;
memset(&it_71, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_72, 0, sizeof(struct list_item$1sNodeph*));
                it_71=self->head;
                while(it_71!=((void*)0)) {
                    prev_it_72=it_71;
                    it_71=it_71->next;
                    come_call_finalizer3(prev_it_72,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result70__;
void* right_value112;
void* right_value113;
struct list$1charph* result_73;
struct list_item$1charph* it_74;
void* right_value117;
struct list$1charph* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value112 = (void*)0;
right_value113 = (void*)0;
memset(&result_73, 0, sizeof(struct list$1charph*));
memset(&it_74, 0, sizeof(struct list_item$1charph*));
right_value117 = (void*)0;
                if(self==((void*)0)) {
                    __result70__ = __result_obj__ = ((void*)0);
                    return __result70__;
                }
                result_73=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value113=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value112=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 135, "list$1charph"))))))));
                come_call_finalizer3(right_value112,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value113,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                it_74=self->head;
                while(it_74!=((void*)0)) {
                    list$1charph_add(result_73,(char*)come_increment_ref_count(((char*)(right_value117=string_clone(it_74->item)))));
                    right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    it_74=it_74->next;
                }
                __result73__ = __result_obj__ = result_73;
                come_call_finalizer3(result_73,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result73__;
                come_call_finalizer3(result_73,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result71__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result71__;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
void* right_value114;
struct list_item$1charph* litem_75;
char* __dec_obj27;
void* right_value115;
struct list_item$1charph* litem_76;
char* __dec_obj28;
void* right_value116;
struct list_item$1charph* litem_77;
char* __dec_obj29;
struct list$1charph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value114 = (void*)0;
memset(&litem_75, 0, sizeof(struct list_item$1charph*));
right_value115 = (void*)0;
memset(&litem_76, 0, sizeof(struct list_item$1charph*));
right_value116 = (void*)0;
memset(&litem_77, 0, sizeof(struct list_item$1charph*));
                        if(self->len==0) {
                            litem_75=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value114=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 149, "list_item$1charph"))));
                            come_call_finalizer3(right_value114,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_75->prev=((void*)0);
                            litem_75->next=((void*)0);
                            __dec_obj27=litem_75->item;
                            litem_75->item=(char*)come_increment_ref_count(item);
                            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_75;
                            self->head=litem_75;
                        }
                        else {
                            if(self->len==1) {
                                litem_76=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value115=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 159, "list_item$1charph"))));
                                come_call_finalizer3(right_value115,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_76->prev=self->head;
                                litem_76->next=((void*)0);
                                __dec_obj28=litem_76->item;
                                litem_76->item=(char*)come_increment_ref_count(item);
                                __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_76;
                                self->head->next=litem_76;
                            }
                            else {
                                litem_77=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value116=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 169, "list_item$1charph"))));
                                come_call_finalizer3(right_value116,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_77->prev=self->tail;
                                litem_77->next=((void*)0);
                                __dec_obj29=litem_77->item;
                                litem_77->item=(char*)come_increment_ref_count(item);
                                __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail->next=litem_77;
                                self->tail=litem_77;
                            }
                        }
                        self->len++;
                        __result72__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result72__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_78;
struct list_item$1charph* prev_it_79;
memset(&it_78, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_79, 0, sizeof(struct list_item$1charph*));
                it_78=self->head;
                while(it_78!=((void*)0)) {
                    prev_it_79=it_78;
                    it_78=it_78->next;
                    come_call_finalizer3(prev_it_79,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
void* right_value125;
struct list_item$1CVALUEph* litem_80;
struct CVALUE* __dec_obj37;
void* right_value126;
struct list_item$1CVALUEph* litem_81;
struct CVALUE* __dec_obj38;
void* right_value127;
struct list_item$1CVALUEph* litem_82;
struct CVALUE* __dec_obj39;
struct list$1CVALUEph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value125 = (void*)0;
memset(&litem_80, 0, sizeof(struct list_item$1CVALUEph*));
right_value126 = (void*)0;
memset(&litem_81, 0, sizeof(struct list_item$1CVALUEph*));
right_value127 = (void*)0;
memset(&litem_82, 0, sizeof(struct list_item$1CVALUEph*));
        if(self->len==0) {
            litem_80=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value125=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 219, "list_item$1CVALUEph"))));
            come_call_finalizer3(right_value125,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_80->prev=((void*)0);
            litem_80->next=((void*)0);
            __dec_obj37=litem_80->item;
            litem_80->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj37,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_80;
            self->head=litem_80;
        }
        else {
            if(self->len==1) {
                litem_81=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value126=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 229, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value126,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_81->prev=self->head;
                litem_81->next=((void*)0);
                __dec_obj38=litem_81->item;
                litem_81->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj38,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                self->tail=litem_81;
                self->head->next=litem_81;
            }
            else {
                litem_82=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value127=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 239, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value127,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_82->prev=self->tail;
                litem_82->next=((void*)0);
                __dec_obj39=litem_82->item;
                litem_82->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj39,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                self->tail->next=litem_82;
                self->tail=litem_82;
            }
        }
        self->len++;
        __result75__ = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        return __result75__;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
                if(self!=((void*)0)&&self->item!=((void*)0)) {
                    come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__;
void* right_value128;
struct sFun* __dec_obj40;
struct sFunNode* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value128 = (void*)0;
    ((struct sNodeBase*)(right_value128=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value128,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj40=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer3(__dec_obj40,sFun_finalize, 0, 0, 0, 0, (void*)0);
    __result77__ = __result_obj__ = self;
    come_call_finalizer3(self,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(fun,sFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result77__;
    come_call_finalizer3(self,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(fun,sFun_finalize, 0, 0, 1, 0, (void*)0);
}

char* sFunNode_kind(struct sFunNode* self){
void* __result_obj__;
void* right_value129;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value129 = (void*)0;
    __result78__ = __result_obj__ = ((char*)(right_value129=__builtin_string("sFunNode")));
    right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result78__;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_83;
char* come_fun_name_84;
void* right_value130;
char* __dec_obj41;
void* right_value131;
void* right_value132;
struct sType* result_type_85;
void* right_value133;
void* right_value134;
void* right_value135;
char* __dec_obj42;
_Bool __result79__;
memset(&come_fun_83, 0, sizeof(struct sFun*));
memset(&come_fun_name_84, 0, sizeof(char*));
right_value130 = (void*)0;
right_value131 = (void*)0;
right_value132 = (void*)0;
memset(&result_type_85, 0, sizeof(struct sType*));
right_value133 = (void*)0;
right_value134 = (void*)0;
right_value135 = (void*)0;
    come_fun_83=info->come_fun;
    info->come_fun=self->mFun;
    come_fun_name_84=(char*)come_increment_ref_count(info->come_fun_name);
    __dec_obj41=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(((char*)(right_value130=__builtin_string(info->come_fun->mName))));
    __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(self->mFun->mBlock) {
        if(!gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        result_type_85=(struct sType*)come_increment_ref_count(((struct sType*)(right_value132=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value131=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 96, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer3(right_value131,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value132,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(!gComeC&&!self->mFun->mNoResultType) {
            add_come_code_at_function_head(info,"%s;\n",((char*)(right_value133=make_define_var(result_type_85,"__result_obj__",(_Bool)0,info))));
            right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            add_come_code_at_function_head2(info,"memset(&__result_obj__, 0, sizeof(%s));\n",((char*)(right_value134=make_type_name_string(result_type_85,(_Bool)0,(_Bool)0,(_Bool)0,info))));
            right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0);
        if(!gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(right_value135=xsprintf("come_heap_final();\n"))));
            right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_85,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->come_fun=come_fun_83;
    __dec_obj42=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(come_fun_name_84);
    __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result79__ = (_Bool)1;
    come_fun_name_84 = come_decrement_ref_count2(come_fun_name_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result79__;
    come_fun_name_84 = come_decrement_ref_count2(come_fun_name_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
void* right_value136;
void* right_value137;
struct list$1sNodeph* __dec_obj43;
struct sBlock* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
right_value136 = (void*)0;
right_value137 = (void*)0;
    __dec_obj43=self->mNodes;
    self->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value137=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value136=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05function.c", 119, "list$1sNodeph"))))))));
    come_call_finalizer3(__dec_obj43,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value136,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value137,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    __result80__ = __result_obj__ = self;
    come_call_finalizer3(self,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result80__;
    come_call_finalizer3(self,sBlock_finalize, 0, 0, 1, 0, (void*)0);
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline){
void* __result_obj__;
void* right_value138;
struct sType* __dec_obj44;
void* right_value139;
struct list$1charph* __dec_obj45;
void* right_value140;
struct list$1charph* __dec_obj46;
char* __dec_obj47;
struct sType* __dec_obj48;
struct list$1sTypeph* __dec_obj49;
struct list$1charph* __dec_obj50;
struct list$1charph* __dec_obj51;
char* __dec_obj52;
void* right_value141;
char* __dec_obj53;
struct sGenericsFun* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
right_value138 = (void*)0;
right_value139 = (void*)0;
right_value140 = (void*)0;
right_value141 = (void*)0;
    __dec_obj44=self->mImplType;
    self->mImplType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value138=sType_clone(impl_type))));
    come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value138,sType_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj45=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value139=list$1charphp_clone(generics_type_names))));
    come_call_finalizer3(__dec_obj45,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value139,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj46=self->mMethodGenericsTypeNames;
    self->mMethodGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value140=list$1charphp_clone(method_generics_type_names))));
    come_call_finalizer3(__dec_obj46,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value140,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
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
    self->mGenericsSName=(char*)come_increment_ref_count(((char*)(right_value141=__builtin_string(generics_sname))));
    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mGenericsSLine=generics_sline;
    __result81__ = __result_obj__ = self;
    come_call_finalizer3(self,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(impl_type,sType_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(result_type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_types,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_names,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_default_parametors,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    block = come_decrement_ref_count2(block, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    generics_sname = come_decrement_ref_count2(generics_sname, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result81__;
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
void* right_value142;
void* right_value143;
struct sBlock* result_86;
int block_level_87;
int sline_88;
char* sname_89;
void* right_value144;
struct sNode* node_90;
void* right_value145;
char* __dec_obj54;
struct sNode* node_94;
void* right_value149;
void* right_value150;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* right_value153;
struct sNode* __dec_obj59;
void* right_value154;
struct sNode* __dec_obj60;
char* p_96;
char* head_97;
void* right_value155;
char* source_98;
void* right_value156;
struct sNode* node_99;
struct sBlock* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value142 = (void*)0;
right_value143 = (void*)0;
memset(&result_86, 0, sizeof(struct sBlock*));
memset(&block_level_87, 0, sizeof(int));
memset(&sline_88, 0, sizeof(int));
memset(&sname_89, 0, sizeof(char*));
right_value144 = (void*)0;
memset(&node_90, 0, sizeof(struct sNode*));
right_value145 = (void*)0;
memset(&node_94, 0, sizeof(struct sNode*));
right_value149 = (void*)0;
right_value150 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
memset(&p_96, 0, sizeof(char*));
memset(&head_97, 0, sizeof(char*));
right_value155 = (void*)0;
memset(&source_98, 0, sizeof(char*));
right_value156 = (void*)0;
memset(&node_99, 0, sizeof(struct sNode*));
    result_86=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value143=sBlock_initialize((struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value142=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function.c", 149, "sBlock")))),info))));
    come_call_finalizer3(right_value142,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value143,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
    block_level_87=info->block_level;
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
            sline_88=info->sline;
            sname_89=info->sname;
            node_90=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value144=statment(info))));
            if(right_value144) { right_value144 = come_decrement_ref_count2(right_value144, ((struct sNode*)right_value144)->finalize, ((struct sNode*)right_value144)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            __dec_obj54=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value145=node_90->sname(node_90->_protocol_obj))));
            __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->sline=node_90->sline(node_90->_protocol_obj);
            if(node_90==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            list$1sNodeph_push_back(result_86->mNodes,(struct sNode*)come_increment_ref_count(node_90));
            parse_sharp_v5(info);
            if(node_90->terminated(node_90->_protocol_obj)) {
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
                if(node_90) { node_90 = come_decrement_ref_count2(node_90, ((struct sNode*)node_90)->finalize, ((struct sNode*)node_90)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            if(node_90) { node_90 = come_decrement_ref_count2(node_90, ((struct sNode*)node_90)->finalize, ((struct sNode*)node_90)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else {
        parse_sharp_v5(info);
        if(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 217, "struct sNode");
            _inf_obj_value1=come_increment_ref_count(((struct sSemicolonNode*)(right_value150=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(right_value149=(struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 217, "sSemicolonNode")))),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            __dec_obj59=node_94;
            node_94=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value153=_inf_value1)));
            if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); }
            come_call_finalizer3(right_value149,sSemicolonNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value150,sSemicolonNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value153) { right_value153 = come_decrement_ref_count2(right_value153, ((struct sNode*)right_value153)->finalize, ((struct sNode*)right_value153)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        else {
            __dec_obj60=node_94;
            node_94=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value154=expression_v13(info))));
            if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value154) { right_value154 = come_decrement_ref_count2(right_value154, ((struct sNode*)right_value154)->finalize, ((struct sNode*)right_value154)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            parse_sharp_v5(info);
            if(node_94==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            if(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
            }
        }
        list$1sNodeph_push_back(result_86->mNodes,(struct sNode*)come_increment_ref_count(node_94));
        if(node_94) { node_94 = come_decrement_ref_count2(node_94, ((struct sNode*)node_94)->finalize, ((struct sNode*)node_94)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    if(return_self_at_last) {
        p_96=info->p;
        head_97=info->head;
        source_98=(char*)come_increment_ref_count(((char*)(right_value155=__builtin_string("return self;"))));
        right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->p=source_98;
        info->head=source_98;
        node_99=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value156=expression_v13(info))));
        if(right_value156) { right_value156 = come_decrement_ref_count2(right_value156, ((struct sNode*)right_value156)->finalize, ((struct sNode*)right_value156)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(node_99==((void*)0)) {
            err_msg(info,"Invalid expression");
            exit(1);
        }
        list$1sNodeph_push_back(result_86->mNodes,(struct sNode*)come_increment_ref_count(node_99));
        info->p=p_96;
        info->head=head_97;
        source_98 = come_decrement_ref_count2(source_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_99) { node_99 = come_decrement_ref_count2(node_99, ((struct sNode*)node_99)->finalize, ((struct sNode*)node_99)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->block_level=block_level_87;
    __result85__ = __result_obj__ = result_86;
    come_call_finalizer3(result_86,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result85__;
    come_call_finalizer3(result_86,sBlock_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
void* right_value146;
struct list_item$1sNodeph* litem_91;
struct sNode* __dec_obj55;
void* right_value147;
struct list_item$1sNodeph* litem_92;
struct sNode* __dec_obj56;
void* right_value148;
struct list_item$1sNodeph* litem_93;
struct sNode* __dec_obj57;
struct list$1sNodeph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value146 = (void*)0;
memset(&litem_91, 0, sizeof(struct list_item$1sNodeph*));
right_value147 = (void*)0;
memset(&litem_92, 0, sizeof(struct list_item$1sNodeph*));
right_value148 = (void*)0;
memset(&litem_93, 0, sizeof(struct list_item$1sNodeph*));
                if(self->len==0) {
                    litem_91=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value146=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 219, "list_item$1sNodeph"))));
                    come_call_finalizer3(right_value146,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_91->prev=((void*)0);
                    litem_91->next=((void*)0);
                    __dec_obj55=litem_91->item;
                    litem_91->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count2(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0, (void*)0); }
                    self->tail=litem_91;
                    self->head=litem_91;
                }
                else {
                    if(self->len==1) {
                        litem_92=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value147=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 229, "list_item$1sNodeph"))));
                        come_call_finalizer3(right_value147,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_92->prev=self->head;
                        litem_92->next=((void*)0);
                        __dec_obj56=litem_92->item;
                        litem_92->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count2(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail=litem_92;
                        self->head->next=litem_92;
                    }
                    else {
                        litem_93=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value148=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 239, "list_item$1sNodeph"))));
                        come_call_finalizer3(right_value148,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_93->prev=self->tail;
                        litem_93->next=((void*)0);
                        __dec_obj57=litem_93->item;
                        litem_93->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count2(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail->next=litem_93;
                        self->tail=litem_93;
                    }
                }
                self->len++;
                __result82__ = __result_obj__ = self;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result82__;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sSemicolonNode_finalize(struct sSemicolonNode* self){
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
void* __result_obj__;
struct sSemicolonNode* __result83__;
void* right_value151;
struct sSemicolonNode* result_95;
void* right_value152;
char* __dec_obj58;
struct sSemicolonNode* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value151 = (void*)0;
memset(&result_95, 0, sizeof(struct sSemicolonNode*));
right_value152 = (void*)0;
                if(self==(void*)0) {
                    __result83__ = __result_obj__ = (void*)0;
                    return __result83__;
                }
                result_95=(struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(right_value151=(struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "sSemicolonNode"))));
                come_call_finalizer3(right_value151,sSemicolonNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(self!=((void*)0)) {
                    result_95->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj58=result_95->sname;
                    result_95->sname=(char*)come_increment_ref_count(((char*)(right_value152=string_clone(self->sname))));
                    __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result84__ = __result_obj__ = result_95;
                come_call_finalizer3(result_95,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result84__;
                come_call_finalizer3(result_95,sSemicolonNode_finalize, 0, 0, 0, 0, (void*)0);
}

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block){
int __result86__;
struct sVarTable* old_table_100;
void* right_value157;
void* right_value158;
struct sVarTable* __dec_obj61;
struct sVarTable* current_loop_vtable_101;
struct list$1sTypeph* param_types__102;
struct list$1charph* param_names__103;
int i_104;
struct list$1charph* o2_saved_105;
char* name_108;
void* right_value159;
struct sType* type_111;
void* right_value160;
int block_level_115;
int i_116;
struct list$1sNodeph* o2_saved_117;
struct sNode* node_120;
struct list$1sRightValueObjectph* right_value_objects_123;
void* right_value161;
void* right_value162;
struct list$1sRightValueObjectph* __dec_obj62;
char* __dec_obj63;
char* __dec_obj64;
char* __dec_obj65;
int stack_num_before_128;
int sline_129;
void* right_value163;
char* sname_130;
void* right_value164;
char* __dec_obj66;
void* right_value165;
char* __dec_obj67;
struct list$1sRightValueObjectph* __dec_obj68;
int __result109__;
memset(&old_table_100, 0, sizeof(struct sVarTable*));
right_value157 = (void*)0;
right_value158 = (void*)0;
memset(&current_loop_vtable_101, 0, sizeof(struct sVarTable*));
memset(&param_types__102, 0, sizeof(struct list$1sTypeph*));
memset(&param_names__103, 0, sizeof(struct list$1charph*));
memset(&i_104, 0, sizeof(int));
memset(&o2_saved_105, 0, sizeof(struct list$1charph*));
memset(&name_108, 0, sizeof(char*));
right_value159 = (void*)0;
memset(&type_111, 0, sizeof(struct sType*));
right_value160 = (void*)0;
memset(&block_level_115, 0, sizeof(int));
memset(&i_116, 0, sizeof(int));
memset(&o2_saved_117, 0, sizeof(struct list$1sNodeph*));
memset(&node_120, 0, sizeof(struct sNode*));
memset(&right_value_objects_123, 0, sizeof(struct list$1sRightValueObjectph*));
right_value161 = (void*)0;
right_value162 = (void*)0;
memset(&stack_num_before_128, 0, sizeof(int));
memset(&sline_129, 0, sizeof(int));
right_value163 = (void*)0;
memset(&sname_130, 0, sizeof(char*));
right_value164 = (void*)0;
right_value165 = (void*)0;
    if(info->output_header_file) {
        __result86__ = 0;
        return __result86__;
    }
    old_table_100=info->lv_table;
    if(!no_var_table) {
        __dec_obj61=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value158=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value157=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 272, "sVarTable")))),(_Bool)0,old_table_100))));
        come_call_finalizer3(__dec_obj61,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value157,sVarTable_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value158,sVarTable_finalize, 0, 1, 0, 0, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_101=info->current_loop_vtable;
    if(loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    param_types__102=info->param_types;
    param_names__103=info->param_names;
    info->param_types=param_types;
    info->param_names=param_names;
    if(param_types&&param_names) {
        for(        o2_saved_105=(param_names),name_108=list$1charph_begin((o2_saved_105));        !list$1charph_end((o2_saved_105));        name_108=list$1charph_next((o2_saved_105))        ){
            type_111=(struct sType*)come_increment_ref_count(((struct sType*)(right_value159=sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types,i_104), "05function.c", 290, 0))))));
            come_call_finalizer3(right_value159,sType_finalize, 0, 1, 0, 0, (void*)0);
            type_111->mFunctionParam=(_Bool)1;
            type_111->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_108,(struct sType*)come_increment_ref_count(((struct sType*)(right_value160=sType_clone(type_111)))),info);
            come_call_finalizer3(right_value160,sType_finalize, 0, 1, 0, 0, (void*)0);
            i_104++;
            come_call_finalizer3(type_111,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_115=info->block_level;
    if(!no_var_table) {
        info->block_level++;
    }
    if(list$1sNodeph_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_117=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_120=list$1sNodeph_begin((o2_saved_117));        !list$1sNodeph_end((o2_saved_117));        node_120=list$1sNodeph_next((o2_saved_117))        ){
            right_value_objects_123=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj62=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value162=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value161=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "05function.c", 309, "list$1sRightValueObjectph"))))))));
            come_call_finalizer3(__dec_obj62,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value161,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(right_value162,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj63=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj64=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj65=info->module->mLastCode3;
            info->module->mLastCode3=((void*)0);
            __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_128=list$1CVALUEph_length(info->stack);
            sline_129=info->sline;
            sname_130=(char*)come_increment_ref_count(((char*)(right_value163=__builtin_string(info->sname))));
            right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_120->sline(node_120->_protocol_obj);
            __dec_obj66=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value164=node_120->sname(node_120->_protocol_obj))));
            __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            info->writing_source_file_position=(_Bool)1;
            if(!node_compile(node_120,info)) {
                printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                exit(2);
            }
            info->sline=sline_129;
            __dec_obj67=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value165=__builtin_string(sname_130))));
            __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            add_last_code_to_source(info);
            arrange_stack(info,stack_num_before_128);
            free_right_value_objects(info,(_Bool)0);
            list$1sRightValueObjectph_reset(info->right_value_objects);
            __dec_obj68=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_123);
            come_call_finalizer3(__dec_obj68,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value_objects_123,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            sname_130 = come_decrement_ref_count2(sname_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_117,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(!no_var_table) {
        free_objects(info->lv_table,((void*)0),info);
    }
    info->lv_table=old_table_100;
    info->block_level=block_level_115;
    info->param_types=param_types__102;
    info->param_names=param_names__103;
    info->current_loop_vtable=current_loop_vtable_101;
    __result109__ = 0;
    return __result109__;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
char* result_106;
char* __result87__;
char* __result88__;
char* result_107;
char* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_106, 0, sizeof(char*));
memset(&result_107, 0, sizeof(char*));
            if(self==((void*)0)) {
                memset(&result_106,0,sizeof(char*));
                __result87__ = __result_obj__ = result_106;
                return __result87__;
            }
            self->it=self->head;
            if(self->it) {
                __result88__ = __result_obj__ = self->it->item;
                return __result88__;
            }
            memset(&result_107,0,sizeof(char*));
            __result89__ = __result_obj__ = result_107;
            return __result89__;
}

static _Bool list$1charph_end(struct list$1charph* self){
_Bool __result90__;
            __result90__ = self==((void*)0)||self->it==((void*)0);
            return __result90__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
char* result_109;
char* __result91__;
char* __result92__;
char* result_110;
char* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_109, 0, sizeof(char*));
memset(&result_110, 0, sizeof(char*));
            if(self==((void*)0)||self->it==((void*)0)) {
                memset(&result_109,0,sizeof(char*));
                __result91__ = __result_obj__ = result_109;
                return __result91__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result92__ = __result_obj__ = self->it->item;
                return __result92__;
            }
            memset(&result_110,0,sizeof(char*));
            __result93__ = __result_obj__ = result_110;
            return __result93__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
struct list_item$1sTypeph* it_112;
int i_113;
struct sType* __result94__;
struct sType* default_value_114;
struct sType* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_112, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_113, 0, sizeof(int));
memset(&default_value_114, 0, sizeof(struct sType*));
                if(position<0) {
                    position+=self->len;
                }
                it_112=self->head;
                i_113=0;
                while(it_112!=((void*)0)) {
                    if(position==i_113) {
                        __result94__ = __result_obj__ = it_112->item;
                        return __result94__;
                    }
                    it_112=it_112->next;
                    i_113++;
                }
                memset(&default_value_114,0,sizeof(struct sType*));
                __result95__ = __result_obj__ = default_value_114;
                come_call_finalizer3(default_value_114,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result95__;
                come_call_finalizer3(default_value_114,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
int __result96__;
int __result97__;
        if(self==((void*)0)) {
            __result96__ = 0;
            return __result96__;
        }
        __result97__ = self->len;
        return __result97__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
struct sNode* result_118;
struct sNode* __result98__;
struct sNode* __result99__;
struct sNode* result_119;
struct sNode* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_118, 0, sizeof(struct sNode*));
memset(&result_119, 0, sizeof(struct sNode*));
            if(self==((void*)0)) {
                memset(&result_118,0,sizeof(struct sNode*));
                __result98__ = __result_obj__ = result_118;
                return __result98__;
            }
            self->it=self->head;
            if(self->it) {
                __result99__ = __result_obj__ = self->it->item;
                return __result99__;
            }
            memset(&result_119,0,sizeof(struct sNode*));
            __result100__ = __result_obj__ = result_119;
            return __result100__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
_Bool __result101__;
            __result101__ = self==((void*)0)||self->it==((void*)0);
            return __result101__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
struct sNode* result_121;
struct sNode* __result102__;
struct sNode* __result103__;
struct sNode* result_122;
struct sNode* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_121, 0, sizeof(struct sNode*));
memset(&result_122, 0, sizeof(struct sNode*));
            if(self==((void*)0)||self->it==((void*)0)) {
                memset(&result_121,0,sizeof(struct sNode*));
                __result102__ = __result_obj__ = result_121;
                return __result102__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result103__ = __result_obj__ = self->it->item;
                return __result103__;
            }
            memset(&result_122,0,sizeof(struct sNode*));
            __result104__ = __result_obj__ = result_122;
            return __result104__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list$1sRightValueObjectph* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result105__ = __result_obj__ = self;
                come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result105__;
                come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_124;
struct list_item$1sRightValueObjectph* prev_it_125;
memset(&it_124, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_125, 0, sizeof(struct list_item$1sRightValueObjectph*));
                    it_124=self->head;
                    while(it_124!=((void*)0)) {
                        prev_it_125=it_124;
                        it_124=it_124->next;
                        come_call_finalizer3(prev_it_125,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
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

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
int __result106__;
int __result107__;
                if(self==((void*)0)) {
                    __result106__ = 0;
                    return __result106__;
                }
                __result107__ = self->len;
                return __result107__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_131;
struct list_item$1sRightValueObjectph* prev_it_132;
struct list$1sRightValueObjectph* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_131, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_132, 0, sizeof(struct list_item$1sRightValueObjectph*));
                it_131=self->head;
                while(it_131!=((void*)0)) {
                    prev_it_132=it_131;
                    it_131=it_131->next;
                    come_call_finalizer3(prev_it_132,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result108__ = __result_obj__ = self;
                return __result108__;
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
int __result110__;
    parse_sharp_v5(info);
    if(*info->p!=c) {
        if(!info->no_output_err) {
            err_msg(info,"expected next charaster is %c, but %c\n",c,*info->p);
            exit(2);
        }
    }
    info->p++;
    skip_spaces_and_lf(info);
    __result110__ = 0;
    return __result110__;
}

char* skip_block(struct sInfo* info){
void* __result_obj__;
char* head_133;
_Bool dquort_134;
_Bool squort_135;
int sline_136;
int nest_137;
char* tail_138;
void* right_value166;
char* buf_139;
void* right_value167;
char* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_133, 0, sizeof(char*));
memset(&dquort_134, 0, sizeof(_Bool));
memset(&squort_135, 0, sizeof(_Bool));
memset(&sline_136, 0, sizeof(int));
memset(&nest_137, 0, sizeof(int));
memset(&tail_138, 0, sizeof(char*));
right_value166 = (void*)0;
memset(&buf_139, 0, sizeof(char*));
right_value167 = (void*)0;
    head_133=info->p;
    if(*info->p==123) {
        info->p++;
        dquort_134=(_Bool)0;
        squort_135=(_Bool)0;
        sline_136=0;
        nest_137=0;
        while(1) {
            if(dquort_134) {
                if(*info->p==92) {
                    info->p++;
                    if(*info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_136);
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
                        dquort_134=!dquort_134;
                    }
                    else {
                        if(*info->p==10) {
                            info->p++;
                            info->sline++;
                            if(*info->p==0) {
                                err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_136);
                                exit(2);
                            }
                        }
                        else {
                            info->p++;
                            if(*info->p==0) {
                                err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_136);
                                exit(2);
                            }
                        }
                    }
                }
            }
            else {
                if(squort_135) {
                    if(*info->p==92) {
                        info->p++;
                        if(*info->p==0) {
                            err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_136);
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
                            squort_135=!squort_135;
                        }
                        else {
                            if(*info->p==10) {
                                info->p++;
                                info->sline++;
                                if(*info->p==0) {
                                    err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_136);
                                    exit(2);
                                }
                            }
                            else {
                                info->p++;
                                if(*info->p==0) {
                                    err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_136);
                                    exit(2);
                                }
                            }
                        }
                    }
                }
                else {
                    if(*info->p==39) {
                        sline_136=info->sline;
                        info->p++;
                        squort_135=!squort_135;
                    }
                    else {
                        if(*info->p==34) {
                            sline_136=info->sline;
                            info->p++;
                            dquort_134=!dquort_134;
                        }
                        else {
                            if(*info->p==35) {
                                parse_sharp_v5(info);
                            }
                            else {
                                if(*info->p==123) {
                                    info->p++;
                                    nest_137++;
                                }
                                else {
                                    if(*info->p==125) {
                                        info->p++;
                                        if(nest_137==0) {
                                            skip_spaces_and_lf(info);
                                            break;
                                        }
                                        nest_137--;
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
    tail_138=info->p;
    buf_139=(char*)come_increment_ref_count(((char*)(right_value166=(char*)come_calloc(1, sizeof(char)*(1*(tail_138-head_133+1)), "05function.c", 515, "char"))));
    right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(buf_139,head_133,tail_138-head_133);
    buf_139[tail_138-head_133]=0;
    __result111__ = __result_obj__ = ((char*)(right_value167=__builtin_string(buf_139)));
    buf_139 = come_decrement_ref_count2(buf_139, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result111__;
    buf_139 = come_decrement_ref_count2(buf_139, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool strmemcmp(char* p, char* p2){
_Bool terminated_140;
char* p3_141;
int i_142;
_Bool __result112__;
memset(&terminated_140, 0, sizeof(_Bool));
memset(&p3_141, 0, sizeof(char*));
memset(&i_142, 0, sizeof(int));
    terminated_140=(_Bool)0;
    p3_141=p;
    for(    i_142=0;    i_142<strlen(p2);    i_142++    ){
        if(*p3_141==0) {
            terminated_140=(_Bool)1;
            break;
        }
        p3_141++;
    }
    __result112__ = !terminated_140&&memcmp(p,p2,strlen(p2))==0;
    return __result112__;
}

char* parse_attribute(struct sInfo* info){
void* __result_obj__;
void* right_value168;
void* right_value169;
struct buffer* asm_fun_name_143;
int brace_num_144;
int len_145;
_Bool in_dquort_146;
int brace_num_147;
int brace_num_148;
void* right_value170;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
right_value168 = (void*)0;
right_value169 = (void*)0;
memset(&asm_fun_name_143, 0, sizeof(struct buffer*));
memset(&brace_num_144, 0, sizeof(int));
memset(&len_145, 0, sizeof(int));
memset(&in_dquort_146, 0, sizeof(_Bool));
memset(&brace_num_147, 0, sizeof(int));
memset(&brace_num_148, 0, sizeof(int));
right_value170 = (void*)0;
    asm_fun_name_143=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value169=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value168=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 538, "buffer"))))))));
    come_call_finalizer3(right_value168,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value169,buffer_finalize, 0, 1, 0, 0, __result_obj__);
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
                                brace_num_144=0;
                                while(*info->p) {
                                    if(*info->p==40) {
                                        info->p++;
                                        brace_num_144++;
                                    }
                                    else {
                                        if(*info->p==41) {
                                            info->p++;
                                            brace_num_144--;
                                            if(brace_num_144==0) {
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
                                    len_145=0;
                                    in_dquort_146=(_Bool)0;
                                    brace_num_147=0;
                                    while(*info->p) {
                                        if(*info->p==34) {
                                            info->p++;
                                            in_dquort_146=!in_dquort_146;
                                        }
                                        else {
                                            if(in_dquort_146) {
                                                buffer_append_char(asm_fun_name_143,*info->p);
                                                info->p++;
                                            }
                                            else {
                                                if(*info->p==40) {
                                                    info->p++;
                                                    brace_num_147++;
                                                }
                                                else {
                                                    if(*info->p==41) {
                                                        info->p++;
                                                        brace_num_147--;
                                                        if(brace_num_147==0) {
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
                                        brace_num_148=0;
                                        while(*info->p) {
                                            if(*info->p==40) {
                                                info->p++;
                                                brace_num_148++;
                                            }
                                            else {
                                                if(*info->p==41) {
                                                    info->p++;
                                                    brace_num_148--;
                                                    if(brace_num_148==0) {
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
    __result113__ = __result_obj__ = ((char*)(right_value170=buffer_to_string(asm_fun_name_143)));
    come_call_finalizer3(asm_fun_name_143,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result113__;
    come_call_finalizer3(asm_fun_name_143,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

void transpile_toplevel(_Bool block, struct sInfo* info){
char* head_149;
int head_sline_150;
void* right_value171;
char* buf_151;
void* right_value172;
struct sNode* node_152;
memset(&head_149, 0, sizeof(char*));
memset(&head_sline_150, 0, sizeof(int));
right_value171 = (void*)0;
memset(&buf_151, 0, sizeof(char*));
right_value172 = (void*)0;
memset(&node_152, 0, sizeof(struct sNode*));
    while(*info->p) {
        parse_sharp_v5(info);
        head_149=info->p;
        head_sline_150=info->sline;
        buf_151=(char*)come_increment_ref_count(((char*)(right_value171=parse_word(info))));
        right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        parse_sharp_v5(info);
        if(block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_151 = come_decrement_ref_count2(buf_151, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        node_152=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value172=top_level_v99(buf_151,head_149,head_sline_150,info))));
        if(right_value172) { right_value172 = come_decrement_ref_count2(right_value172, ((struct sNode*)right_value172)->finalize, ((struct sNode*)right_value172)->_protocol_obj, 1, 0, 0, (void*)0); } 
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(node_152!=((void*)0)) {
            if(!node_compile(node_152,info)) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
        }
        parse_sharp_v5(info);
        skip_spaces_and_lf(info);
        if(block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_151 = come_decrement_ref_count2(buf_151, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_152) { node_152 = come_decrement_ref_count2(node_152, ((struct sNode*)node_152)->finalize, ((struct sNode*)node_152)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        buf_151 = come_decrement_ref_count2(buf_151, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_152) { node_152 = come_decrement_ref_count2(node_152, ((struct sNode*)node_152)->finalize, ((struct sNode*)node_152)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

int transpile_v5(struct sInfo* info){
void* right_value173;
char* name_153;
void* right_value174;
void* right_value175;
struct sType* result_type_154;
void* right_value176;
void* right_value177;
void* right_value178;
void* right_value179;
void* right_value180;
void* right_value181;
void* right_value182;
void* right_value183;
void* right_value184;
void* right_value185;
struct sType* __list_values1___155[5];
void* right_value189;
void* right_value190;
struct list$1sTypeph* param_types_160;
void* right_value191;
void* right_value192;
void* right_value193;
void* right_value194;
void* right_value195;
char* __list_values2___161[5];
void* right_value199;
void* right_value200;
struct list$1charph* param_names_166;
void* right_value201;
void* right_value202;
struct list$1charph* param_default_parametors_167;
void* right_value203;
void* right_value204;
void* right_value205;
void* right_value206;
void* right_value207;
void* right_value208;
void* right_value209;
struct sFun* main_fun_168;
void* right_value216;
void* right_value217;
char* name_213;
void* right_value218;
void* right_value219;
struct sType* result_type_214;
void* right_value220;
void* right_value221;
struct sType* __list_values3___215[1];
void* right_value222;
void* right_value223;
struct list$1sTypeph* param_types_216;
void* right_value224;
char* __list_values4___217[1];
void* right_value225;
void* right_value226;
struct list$1charph* param_names_218;
void* right_value227;
void* right_value228;
struct list$1charph* param_default_parametors_219;
void* right_value229;
void* right_value230;
void* right_value231;
void* right_value232;
struct sFun* main_fun_220;
void* right_value233;
void* right_value234;
char* name_221;
void* right_value235;
void* right_value236;
struct sType* result_type_222;
void* right_value237;
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
struct sType* __list_values5___223[7];
void* right_value251;
void* right_value252;
struct list$1sTypeph* param_types_224;
void* right_value253;
void* right_value254;
void* right_value255;
void* right_value256;
void* right_value257;
void* right_value258;
void* right_value259;
char* __list_values6___225[7];
void* right_value260;
void* right_value261;
struct list$1charph* param_names_226;
void* right_value262;
void* right_value263;
struct list$1charph* param_default_parametors_227;
void* right_value264;
void* right_value265;
void* right_value266;
void* right_value267;
struct sFun* main_fun_228;
void* right_value268;
void* right_value269;
char* name_229;
void* right_value270;
void* right_value271;
struct sType* result_type_230;
void* right_value272;
void* right_value273;
void* right_value274;
void* right_value275;
void* right_value276;
void* right_value277;
void* right_value278;
void* right_value279;
void* right_value280;
void* right_value281;
struct sType* __list_values7___231[5];
void* right_value282;
void* right_value283;
struct list$1sTypeph* param_types_232;
void* right_value284;
void* right_value285;
void* right_value286;
void* right_value287;
void* right_value288;
char* __list_values8___233[5];
void* right_value289;
void* right_value290;
struct list$1charph* param_names_234;
void* right_value291;
void* right_value292;
struct list$1charph* param_default_parametors_235;
void* right_value293;
void* right_value294;
void* right_value295;
void* right_value296;
struct sFun* main_fun_236;
void* right_value297;
void* right_value298;
char* name_237;
void* right_value299;
void* right_value300;
struct sType* result_type_238;
void* right_value301;
void* right_value302;
struct sType* __list_values9___239[1];
void* right_value303;
void* right_value304;
struct list$1sTypeph* param_types_240;
void* right_value305;
char* __list_values10___241[1];
void* right_value306;
void* right_value307;
struct list$1charph* param_names_242;
void* right_value308;
void* right_value309;
struct list$1charph* param_default_parametors_243;
void* right_value310;
void* right_value311;
void* right_value312;
void* right_value313;
struct sFun* main_fun_244;
void* right_value314;
void* right_value315;
char* name_245;
void* right_value316;
void* right_value317;
struct sType* result_type_246;
void* right_value318;
void* right_value319;
void* right_value320;
void* right_value321;
void* right_value322;
void* right_value323;
void* right_value324;
void* right_value325;
struct sType* __list_values11___247[4];
void* right_value326;
void* right_value327;
struct list$1sTypeph* param_types_248;
void* right_value328;
void* right_value329;
void* right_value330;
void* right_value331;
char* __list_values12___249[4];
void* right_value332;
void* right_value333;
struct list$1charph* param_names_250;
void* right_value334;
void* right_value335;
struct list$1charph* param_default_parametors_251;
void* right_value336;
void* right_value337;
void* right_value338;
void* right_value339;
void* right_value340;
void* right_value341;
void* right_value342;
struct sFun* main_fun_252;
void* right_value343;
void* right_value344;
char* name_253;
void* right_value345;
void* right_value346;
struct sType* result_type_254;
void* right_value347;
void* right_value348;
void* right_value349;
void* right_value350;
void* right_value351;
void* right_value352;
struct sType* __list_values13___255[3];
void* right_value353;
void* right_value354;
struct list$1sTypeph* param_types_256;
void* right_value355;
void* right_value356;
void* right_value357;
char* __list_values14___257[3];
void* right_value358;
void* right_value359;
struct list$1charph* param_names_258;
void* right_value360;
void* right_value361;
struct list$1charph* param_default_parametors_259;
void* right_value362;
void* right_value363;
void* right_value364;
void* right_value365;
struct sFun* main_fun_260;
void* right_value366;
void* right_value367;
char* name_261;
void* right_value368;
void* right_value369;
struct sType* result_type_262;
void* right_value370;
void* right_value371;
struct sType* __list_values15___263[1];
void* right_value372;
void* right_value373;
struct list$1sTypeph* param_types_264;
void* right_value374;
char* __list_values16___265[1];
void* right_value375;
void* right_value376;
struct list$1charph* param_names_266;
void* right_value377;
void* right_value378;
struct list$1charph* param_default_parametors_267;
void* right_value379;
void* right_value380;
void* right_value381;
void* right_value382;
struct sFun* main_fun_268;
void* right_value383;
void* right_value384;
char* name_269;
void* right_value385;
void* right_value386;
struct sType* result_type_270;
void* right_value387;
void* right_value388;
void* right_value389;
void* right_value390;
void* right_value391;
void* right_value392;
struct sType* __list_values17___271[3];
void* right_value393;
void* right_value394;
struct list$1sTypeph* param_types_272;
void* right_value395;
void* right_value396;
void* right_value397;
char* __list_values18___273[3];
void* right_value398;
void* right_value399;
struct list$1charph* param_names_274;
void* right_value400;
void* right_value401;
struct list$1charph* param_default_parametors_275;
void* right_value402;
void* right_value403;
void* right_value404;
void* right_value405;
struct sFun* main_fun_276;
void* right_value406;
void* right_value407;
char* name_277;
void* right_value408;
void* right_value409;
struct sType* result_type_278;
void* right_value410;
void* right_value411;
struct list$1sTypeph* param_types_279;
void* right_value412;
void* right_value413;
struct list$1charph* param_names_280;
void* right_value414;
void* right_value415;
struct list$1charph* param_default_parametors_281;
void* right_value416;
void* right_value417;
void* right_value418;
void* right_value419;
struct sFun* main_fun_282;
void* right_value420;
void* right_value421;
char* name_283;
void* right_value422;
void* right_value423;
struct sType* result_type_284;
void* right_value424;
void* right_value425;
void* right_value426;
void* right_value427;
void* right_value428;
void* right_value429;
void* right_value430;
void* right_value431;
struct sType* __list_values19___285[4];
void* right_value432;
void* right_value433;
struct list$1sTypeph* param_types_286;
void* right_value434;
void* right_value435;
void* right_value436;
void* right_value437;
char* __list_values20___287[4];
void* right_value438;
void* right_value439;
struct list$1charph* param_names_288;
void* right_value440;
void* right_value441;
struct list$1charph* param_default_parametors_289;
void* right_value442;
void* right_value443;
void* right_value444;
void* right_value445;
struct sFun* main_fun_290;
void* right_value446;
void* right_value447;
char* name_291;
void* right_value448;
void* right_value449;
struct sType* result_type_292;
void* right_value450;
void* right_value451;
struct list$1sTypeph* param_types_293;
void* right_value452;
void* right_value453;
struct list$1charph* param_names_294;
void* right_value454;
void* right_value455;
struct list$1charph* param_default_parametors_295;
void* right_value456;
void* right_value457;
void* right_value458;
void* right_value459;
struct sFun* fun_296;
void* right_value460;
void* right_value461;
char* name_297;
void* right_value462;
void* right_value463;
struct sType* result_type_298;
void* right_value464;
void* right_value465;
struct list$1sTypeph* param_types_299;
void* right_value466;
void* right_value467;
struct list$1charph* param_names_300;
void* right_value468;
void* right_value469;
struct list$1charph* param_default_parametors_301;
void* right_value470;
void* right_value471;
void* right_value472;
void* right_value473;
struct sFun* fun_302;
void* right_value474;
int __result142__;
right_value173 = (void*)0;
memset(&name_153, 0, sizeof(char*));
right_value174 = (void*)0;
right_value175 = (void*)0;
memset(&result_type_154, 0, sizeof(struct sType*));
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value185 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
memset(&param_types_160, 0, sizeof(struct list$1sTypeph*));
right_value191 = (void*)0;
right_value192 = (void*)0;
right_value193 = (void*)0;
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value199 = (void*)0;
right_value200 = (void*)0;
memset(&param_names_166, 0, sizeof(struct list$1charph*));
right_value201 = (void*)0;
right_value202 = (void*)0;
memset(&param_default_parametors_167, 0, sizeof(struct list$1charph*));
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
memset(&main_fun_168, 0, sizeof(struct sFun*));
right_value216 = (void*)0;
right_value217 = (void*)0;
memset(&name_213, 0, sizeof(char*));
right_value218 = (void*)0;
right_value219 = (void*)0;
memset(&result_type_214, 0, sizeof(struct sType*));
right_value220 = (void*)0;
right_value221 = (void*)0;
right_value222 = (void*)0;
right_value223 = (void*)0;
memset(&param_types_216, 0, sizeof(struct list$1sTypeph*));
right_value224 = (void*)0;
right_value225 = (void*)0;
right_value226 = (void*)0;
memset(&param_names_218, 0, sizeof(struct list$1charph*));
right_value227 = (void*)0;
right_value228 = (void*)0;
memset(&param_default_parametors_219, 0, sizeof(struct list$1charph*));
right_value229 = (void*)0;
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value232 = (void*)0;
memset(&main_fun_220, 0, sizeof(struct sFun*));
right_value233 = (void*)0;
right_value234 = (void*)0;
memset(&name_221, 0, sizeof(char*));
right_value235 = (void*)0;
right_value236 = (void*)0;
memset(&result_type_222, 0, sizeof(struct sType*));
right_value237 = (void*)0;
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
memset(&param_types_224, 0, sizeof(struct list$1sTypeph*));
right_value253 = (void*)0;
right_value254 = (void*)0;
right_value255 = (void*)0;
right_value256 = (void*)0;
right_value257 = (void*)0;
right_value258 = (void*)0;
right_value259 = (void*)0;
right_value260 = (void*)0;
right_value261 = (void*)0;
memset(&param_names_226, 0, sizeof(struct list$1charph*));
right_value262 = (void*)0;
right_value263 = (void*)0;
memset(&param_default_parametors_227, 0, sizeof(struct list$1charph*));
right_value264 = (void*)0;
right_value265 = (void*)0;
right_value266 = (void*)0;
right_value267 = (void*)0;
memset(&main_fun_228, 0, sizeof(struct sFun*));
right_value268 = (void*)0;
right_value269 = (void*)0;
memset(&name_229, 0, sizeof(char*));
right_value270 = (void*)0;
right_value271 = (void*)0;
memset(&result_type_230, 0, sizeof(struct sType*));
right_value272 = (void*)0;
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
memset(&param_types_232, 0, sizeof(struct list$1sTypeph*));
right_value284 = (void*)0;
right_value285 = (void*)0;
right_value286 = (void*)0;
right_value287 = (void*)0;
right_value288 = (void*)0;
right_value289 = (void*)0;
right_value290 = (void*)0;
memset(&param_names_234, 0, sizeof(struct list$1charph*));
right_value291 = (void*)0;
right_value292 = (void*)0;
memset(&param_default_parametors_235, 0, sizeof(struct list$1charph*));
right_value293 = (void*)0;
right_value294 = (void*)0;
right_value295 = (void*)0;
right_value296 = (void*)0;
memset(&main_fun_236, 0, sizeof(struct sFun*));
right_value297 = (void*)0;
right_value298 = (void*)0;
memset(&name_237, 0, sizeof(char*));
right_value299 = (void*)0;
right_value300 = (void*)0;
memset(&result_type_238, 0, sizeof(struct sType*));
right_value301 = (void*)0;
right_value302 = (void*)0;
right_value303 = (void*)0;
right_value304 = (void*)0;
memset(&param_types_240, 0, sizeof(struct list$1sTypeph*));
right_value305 = (void*)0;
right_value306 = (void*)0;
right_value307 = (void*)0;
memset(&param_names_242, 0, sizeof(struct list$1charph*));
right_value308 = (void*)0;
right_value309 = (void*)0;
memset(&param_default_parametors_243, 0, sizeof(struct list$1charph*));
right_value310 = (void*)0;
right_value311 = (void*)0;
right_value312 = (void*)0;
right_value313 = (void*)0;
memset(&main_fun_244, 0, sizeof(struct sFun*));
right_value314 = (void*)0;
right_value315 = (void*)0;
memset(&name_245, 0, sizeof(char*));
right_value316 = (void*)0;
right_value317 = (void*)0;
memset(&result_type_246, 0, sizeof(struct sType*));
right_value318 = (void*)0;
right_value319 = (void*)0;
right_value320 = (void*)0;
right_value321 = (void*)0;
right_value322 = (void*)0;
right_value323 = (void*)0;
right_value324 = (void*)0;
right_value325 = (void*)0;
right_value326 = (void*)0;
right_value327 = (void*)0;
memset(&param_types_248, 0, sizeof(struct list$1sTypeph*));
right_value328 = (void*)0;
right_value329 = (void*)0;
right_value330 = (void*)0;
right_value331 = (void*)0;
right_value332 = (void*)0;
right_value333 = (void*)0;
memset(&param_names_250, 0, sizeof(struct list$1charph*));
right_value334 = (void*)0;
right_value335 = (void*)0;
memset(&param_default_parametors_251, 0, sizeof(struct list$1charph*));
right_value336 = (void*)0;
right_value337 = (void*)0;
right_value338 = (void*)0;
right_value339 = (void*)0;
right_value340 = (void*)0;
right_value341 = (void*)0;
right_value342 = (void*)0;
memset(&main_fun_252, 0, sizeof(struct sFun*));
right_value343 = (void*)0;
right_value344 = (void*)0;
memset(&name_253, 0, sizeof(char*));
right_value345 = (void*)0;
right_value346 = (void*)0;
memset(&result_type_254, 0, sizeof(struct sType*));
right_value347 = (void*)0;
right_value348 = (void*)0;
right_value349 = (void*)0;
right_value350 = (void*)0;
right_value351 = (void*)0;
right_value352 = (void*)0;
right_value353 = (void*)0;
right_value354 = (void*)0;
memset(&param_types_256, 0, sizeof(struct list$1sTypeph*));
right_value355 = (void*)0;
right_value356 = (void*)0;
right_value357 = (void*)0;
right_value358 = (void*)0;
right_value359 = (void*)0;
memset(&param_names_258, 0, sizeof(struct list$1charph*));
right_value360 = (void*)0;
right_value361 = (void*)0;
memset(&param_default_parametors_259, 0, sizeof(struct list$1charph*));
right_value362 = (void*)0;
right_value363 = (void*)0;
right_value364 = (void*)0;
right_value365 = (void*)0;
memset(&main_fun_260, 0, sizeof(struct sFun*));
right_value366 = (void*)0;
right_value367 = (void*)0;
memset(&name_261, 0, sizeof(char*));
right_value368 = (void*)0;
right_value369 = (void*)0;
memset(&result_type_262, 0, sizeof(struct sType*));
right_value370 = (void*)0;
right_value371 = (void*)0;
right_value372 = (void*)0;
right_value373 = (void*)0;
memset(&param_types_264, 0, sizeof(struct list$1sTypeph*));
right_value374 = (void*)0;
right_value375 = (void*)0;
right_value376 = (void*)0;
memset(&param_names_266, 0, sizeof(struct list$1charph*));
right_value377 = (void*)0;
right_value378 = (void*)0;
memset(&param_default_parametors_267, 0, sizeof(struct list$1charph*));
right_value379 = (void*)0;
right_value380 = (void*)0;
right_value381 = (void*)0;
right_value382 = (void*)0;
memset(&main_fun_268, 0, sizeof(struct sFun*));
right_value383 = (void*)0;
right_value384 = (void*)0;
memset(&name_269, 0, sizeof(char*));
right_value385 = (void*)0;
right_value386 = (void*)0;
memset(&result_type_270, 0, sizeof(struct sType*));
right_value387 = (void*)0;
right_value388 = (void*)0;
right_value389 = (void*)0;
right_value390 = (void*)0;
right_value391 = (void*)0;
right_value392 = (void*)0;
right_value393 = (void*)0;
right_value394 = (void*)0;
memset(&param_types_272, 0, sizeof(struct list$1sTypeph*));
right_value395 = (void*)0;
right_value396 = (void*)0;
right_value397 = (void*)0;
right_value398 = (void*)0;
right_value399 = (void*)0;
memset(&param_names_274, 0, sizeof(struct list$1charph*));
right_value400 = (void*)0;
right_value401 = (void*)0;
memset(&param_default_parametors_275, 0, sizeof(struct list$1charph*));
right_value402 = (void*)0;
right_value403 = (void*)0;
right_value404 = (void*)0;
right_value405 = (void*)0;
memset(&main_fun_276, 0, sizeof(struct sFun*));
right_value406 = (void*)0;
right_value407 = (void*)0;
memset(&name_277, 0, sizeof(char*));
right_value408 = (void*)0;
right_value409 = (void*)0;
memset(&result_type_278, 0, sizeof(struct sType*));
right_value410 = (void*)0;
right_value411 = (void*)0;
memset(&param_types_279, 0, sizeof(struct list$1sTypeph*));
right_value412 = (void*)0;
right_value413 = (void*)0;
memset(&param_names_280, 0, sizeof(struct list$1charph*));
right_value414 = (void*)0;
right_value415 = (void*)0;
memset(&param_default_parametors_281, 0, sizeof(struct list$1charph*));
right_value416 = (void*)0;
right_value417 = (void*)0;
right_value418 = (void*)0;
right_value419 = (void*)0;
memset(&main_fun_282, 0, sizeof(struct sFun*));
right_value420 = (void*)0;
right_value421 = (void*)0;
memset(&name_283, 0, sizeof(char*));
right_value422 = (void*)0;
right_value423 = (void*)0;
memset(&result_type_284, 0, sizeof(struct sType*));
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
memset(&param_types_286, 0, sizeof(struct list$1sTypeph*));
right_value434 = (void*)0;
right_value435 = (void*)0;
right_value436 = (void*)0;
right_value437 = (void*)0;
right_value438 = (void*)0;
right_value439 = (void*)0;
memset(&param_names_288, 0, sizeof(struct list$1charph*));
right_value440 = (void*)0;
right_value441 = (void*)0;
memset(&param_default_parametors_289, 0, sizeof(struct list$1charph*));
right_value442 = (void*)0;
right_value443 = (void*)0;
right_value444 = (void*)0;
right_value445 = (void*)0;
memset(&main_fun_290, 0, sizeof(struct sFun*));
right_value446 = (void*)0;
right_value447 = (void*)0;
memset(&name_291, 0, sizeof(char*));
right_value448 = (void*)0;
right_value449 = (void*)0;
memset(&result_type_292, 0, sizeof(struct sType*));
right_value450 = (void*)0;
right_value451 = (void*)0;
memset(&param_types_293, 0, sizeof(struct list$1sTypeph*));
right_value452 = (void*)0;
right_value453 = (void*)0;
memset(&param_names_294, 0, sizeof(struct list$1charph*));
right_value454 = (void*)0;
right_value455 = (void*)0;
memset(&param_default_parametors_295, 0, sizeof(struct list$1charph*));
right_value456 = (void*)0;
right_value457 = (void*)0;
right_value458 = (void*)0;
right_value459 = (void*)0;
memset(&fun_296, 0, sizeof(struct sFun*));
right_value460 = (void*)0;
right_value461 = (void*)0;
memset(&name_297, 0, sizeof(char*));
right_value462 = (void*)0;
right_value463 = (void*)0;
memset(&result_type_298, 0, sizeof(struct sType*));
right_value464 = (void*)0;
right_value465 = (void*)0;
memset(&param_types_299, 0, sizeof(struct list$1sTypeph*));
right_value466 = (void*)0;
right_value467 = (void*)0;
memset(&param_names_300, 0, sizeof(struct list$1charph*));
right_value468 = (void*)0;
right_value469 = (void*)0;
memset(&param_default_parametors_301, 0, sizeof(struct list$1charph*));
right_value470 = (void*)0;
right_value471 = (void*)0;
right_value472 = (void*)0;
right_value473 = (void*)0;
memset(&fun_302, 0, sizeof(struct sFun*));
right_value474 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_153=(char*)come_increment_ref_count(((char*)(right_value173=__builtin_string("come_calloc"))));
        right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_154=(struct sType*)come_increment_ref_count(((struct sType*)(right_value175=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value174=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 707, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer3(right_value174,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value175,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values1___155[0]=come_increment_ref_count(((struct sType*)(right_value177=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value176=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 708, "sType")))),"int",(_Bool)0,info))));
__list_values1___155[1]=come_increment_ref_count(((struct sType*)(right_value179=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value178=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 708, "sType")))),"int",(_Bool)0,info))));
__list_values1___155[2]=come_increment_ref_count(((struct sType*)(right_value181=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value180=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 708, "sType")))),"char*",(_Bool)0,info))));
__list_values1___155[3]=come_increment_ref_count(((struct sType*)(right_value183=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value182=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 708, "sType")))),"int",(_Bool)0,info))));
__list_values1___155[4]=come_increment_ref_count(((struct sType*)(right_value185=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value184=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 708, "sType")))),"char*",(_Bool)0,info))));
}        param_types_160=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value190=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value189=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 708, "struct list$1sTypeph")))),5,__list_values1___155))));
        come_call_finalizer3(right_value176,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value177,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value178,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value179,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value180,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value181,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value182,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value183,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value184,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value185,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value189,list$1sTypeph_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value190,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values2___161[0]=come_increment_ref_count(((char*)(right_value191=__builtin_string("count"))));
__list_values2___161[1]=come_increment_ref_count(((char*)(right_value192=__builtin_string("size"))));
__list_values2___161[2]=come_increment_ref_count(((char*)(right_value193=__builtin_string("sname"))));
__list_values2___161[3]=come_increment_ref_count(((char*)(right_value194=__builtin_string("sline"))));
__list_values2___161[4]=come_increment_ref_count(((char*)(right_value195=__builtin_string("class_name"))));
}        param_names_166=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value200=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value199=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 709, "struct list$1charph")))),5,__list_values2___161))));
        right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value199,list$1charph_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value200,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        param_default_parametors_167=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value202=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value201=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 710, "list$1charph"))))))));
        come_call_finalizer3(right_value201,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value202,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        list$1charph_push_back(param_default_parametors_167,((void*)0));
        list$1charph_push_back(param_default_parametors_167,((void*)0));
        list$1charph_push_back(param_default_parametors_167,(char*)come_increment_ref_count(((char*)(right_value203=__builtin_string("null")))));
        right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        list$1charph_push_back(param_default_parametors_167,(char*)come_increment_ref_count(((char*)(right_value204=__builtin_string("0")))));
        right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        list$1charph_push_back(param_default_parametors_167,(char*)come_increment_ref_count(((char*)(right_value205=__builtin_string("null")))));
        right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        main_fun_168=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value209=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value206=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 716, "sFun")))),(char*)come_increment_ref_count(name_153),(struct sType*)come_increment_ref_count(result_type_154),(struct list$1sTypeph*)come_increment_ref_count(param_types_160),(struct list$1charph*)come_increment_ref_count(param_names_166),(struct list$1charph*)come_increment_ref_count(param_default_parametors_167),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value207=__builtin_string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name)")))),(char*)come_increment_ref_count(((char*)(right_value208=__builtin_string("")))),info))));
        come_call_finalizer3(right_value206,sFun_finalize, 0, 1, 0, 0, (void*)0);
        right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value209,sFun_finalize, 0, 1, 0, 0, (void*)0);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value216=__builtin_string(name_153)))),(struct sFun*)come_increment_ref_count(main_fun_168));
        right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        name_153 = come_decrement_ref_count2(name_153, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_154,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_160,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_166,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_167,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_168,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_213=(char*)come_increment_ref_count(((char*)(right_value217=__builtin_string("come_increment_ref_count"))));
        right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_214=(struct sType*)come_increment_ref_count(((struct sType*)(right_value219=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value218=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 727, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer3(right_value218,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value219,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values3___215[0]=come_increment_ref_count(((struct sType*)(right_value221=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value220=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 728, "sType")))),"void*",(_Bool)0,info))));
}        param_types_216=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value223=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value222=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 728, "struct list$1sTypeph")))),1,__list_values3___215))));
        come_call_finalizer3(right_value220,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value221,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value222,list$1sTypeph_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value223,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values4___217[0]=come_increment_ref_count(((char*)(right_value224=__builtin_string("mem"))));
}        param_names_218=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value226=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value225=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 729, "struct list$1charph")))),1,__list_values4___217))));
        right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value225,list$1charph_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value226,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        param_default_parametors_219=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value228=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value227=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 730, "list$1charph"))))))));
        come_call_finalizer3(right_value227,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value228,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        main_fun_220=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value232=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value229=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 731, "sFun")))),(char*)come_increment_ref_count(name_213),(struct sType*)come_increment_ref_count(result_type_214),(struct list$1sTypeph*)come_increment_ref_count(param_types_216),(struct list$1charph*)come_increment_ref_count(param_names_218),(struct list$1charph*)come_increment_ref_count(param_default_parametors_219),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value230=__builtin_string("void* come_increment_ref_count(void* mem)")))),(char*)come_increment_ref_count(((char*)(right_value231=__builtin_string("")))),info))));
        come_call_finalizer3(right_value229,sFun_finalize, 0, 1, 0, 0, (void*)0);
        right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value232,sFun_finalize, 0, 1, 0, 0, (void*)0);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value233=__builtin_string(name_213)))),(struct sFun*)come_increment_ref_count(main_fun_220));
        right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        name_213 = come_decrement_ref_count2(name_213, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_214,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_216,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_218,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_219,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_220,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_221=(char*)come_increment_ref_count(((char*)(right_value234=__builtin_string("come_call_finalizer"))));
        right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_222=(struct sType*)come_increment_ref_count(((struct sType*)(right_value236=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value235=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 742, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer3(right_value235,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value236,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values5___223[0]=come_increment_ref_count(((struct sType*)(right_value238=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value237=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 743, "sType")))),"void*",(_Bool)0,info))));
__list_values5___223[1]=come_increment_ref_count(((struct sType*)(right_value240=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value239=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 743, "sType")))),"void*",(_Bool)0,info))));
__list_values5___223[2]=come_increment_ref_count(((struct sType*)(right_value242=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value241=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 743, "sType")))),"void*",(_Bool)0,info))));
__list_values5___223[3]=come_increment_ref_count(((struct sType*)(right_value244=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value243=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 743, "sType")))),"void*",(_Bool)0,info))));
__list_values5___223[4]=come_increment_ref_count(((struct sType*)(right_value246=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value245=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 743, "sType")))),"int",(_Bool)0,info))));
__list_values5___223[5]=come_increment_ref_count(((struct sType*)(right_value248=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value247=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 743, "sType")))),"int",(_Bool)0,info))));
__list_values5___223[6]=come_increment_ref_count(((struct sType*)(right_value250=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value249=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 743, "sType")))),"int",(_Bool)0,info))));
}        param_types_224=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value252=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value251=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 743, "struct list$1sTypeph")))),7,__list_values5___223))));
        come_call_finalizer3(right_value237,sType_finalize, 0, 1, 0, 0, (void*)0);
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
        come_call_finalizer3(right_value251,list$1sTypeph_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value252,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values6___225[0]=come_increment_ref_count(((char*)(right_value253=__builtin_string("fun"))));
__list_values6___225[1]=come_increment_ref_count(((char*)(right_value254=__builtin_string("mem"))));
__list_values6___225[2]=come_increment_ref_count(((char*)(right_value255=__builtin_string("protocol_fun"))));
__list_values6___225[3]=come_increment_ref_count(((char*)(right_value256=__builtin_string("protocol_obj"))));
__list_values6___225[4]=come_increment_ref_count(((char*)(right_value257=__builtin_string("call_finalizer_only"))));
__list_values6___225[5]=come_increment_ref_count(((char*)(right_value258=__builtin_string("no_decrement"))));
__list_values6___225[6]=come_increment_ref_count(((char*)(right_value259=__builtin_string("no_free"))));
}        param_names_226=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value261=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value260=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 744, "struct list$1charph")))),7,__list_values6___225))));
        right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value260,list$1charph_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value261,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        param_default_parametors_227=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value263=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value262=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 745, "list$1charph"))))))));
        come_call_finalizer3(right_value262,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value263,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        main_fun_228=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value267=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value264=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 746, "sFun")))),(char*)come_increment_ref_count(name_221),(struct sType*)come_increment_ref_count(result_type_222),(struct list$1sTypeph*)come_increment_ref_count(param_types_224),(struct list$1charph*)come_increment_ref_count(param_names_226),(struct list$1charph*)come_increment_ref_count(param_default_parametors_227),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value265=__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")))),(char*)come_increment_ref_count(((char*)(right_value266=__builtin_string("")))),info))));
        come_call_finalizer3(right_value264,sFun_finalize, 0, 1, 0, 0, (void*)0);
        right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value267,sFun_finalize, 0, 1, 0, 0, (void*)0);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value268=__builtin_string(name_221)))),(struct sFun*)come_increment_ref_count(main_fun_228));
        right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        name_221 = come_decrement_ref_count2(name_221, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_222,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_224,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_226,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_227,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_228,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_229=(char*)come_increment_ref_count(((char*)(right_value269=__builtin_string("come_decrement_ref_count"))));
        right_value269 = come_decrement_ref_count2(right_value269, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_230=(struct sType*)come_increment_ref_count(((struct sType*)(right_value271=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value270=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 757, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer3(right_value270,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value271,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values7___231[0]=come_increment_ref_count(((struct sType*)(right_value273=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value272=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 758, "sType")))),"void*",(_Bool)0,info))));
__list_values7___231[1]=come_increment_ref_count(((struct sType*)(right_value275=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value274=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 758, "sType")))),"void*",(_Bool)0,info))));
__list_values7___231[2]=come_increment_ref_count(((struct sType*)(right_value277=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value276=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 758, "sType")))),"void*",(_Bool)0,info))));
__list_values7___231[3]=come_increment_ref_count(((struct sType*)(right_value279=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value278=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 758, "sType")))),"bool",(_Bool)0,info))));
__list_values7___231[4]=come_increment_ref_count(((struct sType*)(right_value281=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value280=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 758, "sType")))),"bool",(_Bool)0,info))));
}        param_types_232=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value283=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value282=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 758, "struct list$1sTypeph")))),5,__list_values7___231))));
        come_call_finalizer3(right_value272,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value273,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value274,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value275,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value276,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value277,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value278,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value279,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value280,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value281,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value282,list$1sTypeph_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value283,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values8___233[0]=come_increment_ref_count(((char*)(right_value284=__builtin_string("mem"))));
__list_values8___233[1]=come_increment_ref_count(((char*)(right_value285=__builtin_string("protocol_fun"))));
__list_values8___233[2]=come_increment_ref_count(((char*)(right_value286=__builtin_string("protocol_obj"))));
__list_values8___233[3]=come_increment_ref_count(((char*)(right_value287=__builtin_string("no_decrement"))));
__list_values8___233[4]=come_increment_ref_count(((char*)(right_value288=__builtin_string("no_free"))));
}        param_names_234=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value290=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value289=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 759, "struct list$1charph")))),5,__list_values8___233))));
        right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value288 = come_decrement_ref_count2(right_value288, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value289,list$1charph_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value290,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        param_default_parametors_235=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value292=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value291=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 760, "list$1charph"))))))));
        come_call_finalizer3(right_value291,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value292,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        main_fun_236=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value296=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value293=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 761, "sFun")))),(char*)come_increment_ref_count(name_229),(struct sType*)come_increment_ref_count(result_type_230),(struct list$1sTypeph*)come_increment_ref_count(param_types_232),(struct list$1charph*)come_increment_ref_count(param_names_234),(struct list$1charph*)come_increment_ref_count(param_default_parametors_235),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value294=__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")))),(char*)come_increment_ref_count(((char*)(right_value295=__builtin_string("")))),info))));
        come_call_finalizer3(right_value293,sFun_finalize, 0, 1, 0, 0, (void*)0);
        right_value294 = come_decrement_ref_count2(right_value294, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value295 = come_decrement_ref_count2(right_value295, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value296,sFun_finalize, 0, 1, 0, 0, (void*)0);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value297=__builtin_string(name_229)))),(struct sFun*)come_increment_ref_count(main_fun_236));
        right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        name_229 = come_decrement_ref_count2(name_229, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_230,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_232,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_234,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_235,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_236,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_237=(char*)come_increment_ref_count(((char*)(right_value298=__builtin_string("come_free_object"))));
        right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_238=(struct sType*)come_increment_ref_count(((struct sType*)(right_value300=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value299=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 772, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer3(right_value299,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value300,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values9___239[0]=come_increment_ref_count(((struct sType*)(right_value302=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value301=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 773, "sType")))),"void*",(_Bool)0,info))));
}        param_types_240=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value304=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value303=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 773, "struct list$1sTypeph")))),1,__list_values9___239))));
        come_call_finalizer3(right_value301,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value302,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value303,list$1sTypeph_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value304,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values10___241[0]=come_increment_ref_count(((char*)(right_value305=__builtin_string("mem"))));
}        param_names_242=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value307=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value306=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 774, "struct list$1charph")))),1,__list_values10___241))));
        right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value306,list$1charph_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value307,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        param_default_parametors_243=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value309=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value308=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 775, "list$1charph"))))))));
        come_call_finalizer3(right_value308,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value309,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        main_fun_244=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value313=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value310=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 776, "sFun")))),(char*)come_increment_ref_count(name_237),(struct sType*)come_increment_ref_count(result_type_238),(struct list$1sTypeph*)come_increment_ref_count(param_types_240),(struct list$1charph*)come_increment_ref_count(param_names_242),(struct list$1charph*)come_increment_ref_count(param_default_parametors_243),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value311=__builtin_string("void come_free_object(void* mem)")))),(char*)come_increment_ref_count(((char*)(right_value312=__builtin_string("")))),info))));
        come_call_finalizer3(right_value310,sFun_finalize, 0, 1, 0, 0, (void*)0);
        right_value311 = come_decrement_ref_count2(right_value311, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value312 = come_decrement_ref_count2(right_value312, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value313,sFun_finalize, 0, 1, 0, 0, (void*)0);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value314=__builtin_string(name_237)))),(struct sFun*)come_increment_ref_count(main_fun_244));
        right_value314 = come_decrement_ref_count2(right_value314, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        name_237 = come_decrement_ref_count2(name_237, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_238,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_240,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_242,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_243,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_244,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_245=(char*)come_increment_ref_count(((char*)(right_value315=__builtin_string("come_memdup"))));
        right_value315 = come_decrement_ref_count2(right_value315, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_246=(struct sType*)come_increment_ref_count(((struct sType*)(right_value317=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value316=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 787, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer3(right_value316,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value317,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values11___247[0]=come_increment_ref_count(((struct sType*)(right_value319=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value318=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 788, "sType")))),"void*",(_Bool)0,info))));
__list_values11___247[1]=come_increment_ref_count(((struct sType*)(right_value321=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value320=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 788, "sType")))),"char*",(_Bool)0,info))));
__list_values11___247[2]=come_increment_ref_count(((struct sType*)(right_value323=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value322=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 788, "sType")))),"int",(_Bool)0,info))));
__list_values11___247[3]=come_increment_ref_count(((struct sType*)(right_value325=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value324=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 788, "sType")))),"char*",(_Bool)0,info))));
}        param_types_248=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value327=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value326=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 788, "struct list$1sTypeph")))),4,__list_values11___247))));
        come_call_finalizer3(right_value318,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value319,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value320,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value321,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value322,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value323,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value324,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value325,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value326,list$1sTypeph_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value327,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values12___249[0]=come_increment_ref_count(((char*)(right_value328=__builtin_string("block"))));
__list_values12___249[1]=come_increment_ref_count(((char*)(right_value329=__builtin_string("sname"))));
__list_values12___249[2]=come_increment_ref_count(((char*)(right_value330=__builtin_string("sline"))));
__list_values12___249[3]=come_increment_ref_count(((char*)(right_value331=__builtin_string("class_name"))));
}        param_names_250=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value333=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value332=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 789, "struct list$1charph")))),4,__list_values12___249))));
        right_value328 = come_decrement_ref_count2(right_value328, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value329 = come_decrement_ref_count2(right_value329, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value330 = come_decrement_ref_count2(right_value330, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value331 = come_decrement_ref_count2(right_value331, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value332,list$1charph_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value333,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        param_default_parametors_251=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value335=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value334=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 790, "list$1charph"))))))));
        come_call_finalizer3(right_value334,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value335,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        list$1charph_push_back(param_default_parametors_251,((void*)0));
        list$1charph_push_back(param_default_parametors_251,(char*)come_increment_ref_count(((char*)(right_value336=__builtin_string("null")))));
        right_value336 = come_decrement_ref_count2(right_value336, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        list$1charph_push_back(param_default_parametors_251,(char*)come_increment_ref_count(((char*)(right_value337=__builtin_string("0")))));
        right_value337 = come_decrement_ref_count2(right_value337, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        list$1charph_push_back(param_default_parametors_251,(char*)come_increment_ref_count(((char*)(right_value338=__builtin_string("null")))));
        right_value338 = come_decrement_ref_count2(right_value338, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        main_fun_252=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value342=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value339=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 795, "sFun")))),(char*)come_increment_ref_count(name_245),(struct sType*)come_increment_ref_count(result_type_246),(struct list$1sTypeph*)come_increment_ref_count(param_types_248),(struct list$1charph*)come_increment_ref_count(param_names_250),(struct list$1charph*)come_increment_ref_count(param_default_parametors_251),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value340=__builtin_string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")))),(char*)come_increment_ref_count(((char*)(right_value341=__builtin_string("")))),info))));
        come_call_finalizer3(right_value339,sFun_finalize, 0, 1, 0, 0, (void*)0);
        right_value340 = come_decrement_ref_count2(right_value340, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value341 = come_decrement_ref_count2(right_value341, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value342,sFun_finalize, 0, 1, 0, 0, (void*)0);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value343=__builtin_string(name_245)))),(struct sFun*)come_increment_ref_count(main_fun_252));
        right_value343 = come_decrement_ref_count2(right_value343, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        name_245 = come_decrement_ref_count2(name_245, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_246,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_248,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_250,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_251,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_252,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_253=(char*)come_increment_ref_count(((char*)(right_value344=__builtin_string("memset"))));
        right_value344 = come_decrement_ref_count2(right_value344, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_254=(struct sType*)come_increment_ref_count(((struct sType*)(right_value346=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value345=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 806, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer3(right_value345,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value346,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values13___255[0]=come_increment_ref_count(((struct sType*)(right_value348=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value347=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 807, "sType")))),"void*",(_Bool)0,info))));
__list_values13___255[1]=come_increment_ref_count(((struct sType*)(right_value350=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value349=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 807, "sType")))),"int",(_Bool)0,info))));
__list_values13___255[2]=come_increment_ref_count(((struct sType*)(right_value352=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value351=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 807, "sType")))),"long",(_Bool)0,info))));
}        param_types_256=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value354=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value353=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 807, "struct list$1sTypeph")))),3,__list_values13___255))));
        come_call_finalizer3(right_value347,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value348,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value349,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value350,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value351,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value352,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value353,list$1sTypeph_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value354,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values14___257[0]=come_increment_ref_count(((char*)(right_value355=__builtin_string("b"))));
__list_values14___257[1]=come_increment_ref_count(((char*)(right_value356=__builtin_string("c"))));
__list_values14___257[2]=come_increment_ref_count(((char*)(right_value357=__builtin_string("len"))));
}        param_names_258=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value359=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value358=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 808, "struct list$1charph")))),3,__list_values14___257))));
        right_value355 = come_decrement_ref_count2(right_value355, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value356 = come_decrement_ref_count2(right_value356, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value357 = come_decrement_ref_count2(right_value357, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value358,list$1charph_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value359,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        param_default_parametors_259=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value361=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value360=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 809, "list$1charph"))))))));
        come_call_finalizer3(right_value360,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value361,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        main_fun_260=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value365=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value362=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 810, "sFun")))),(char*)come_increment_ref_count(name_253),(struct sType*)come_increment_ref_count(result_type_254),(struct list$1sTypeph*)come_increment_ref_count(param_types_256),(struct list$1charph*)come_increment_ref_count(param_names_258),(struct list$1charph*)come_increment_ref_count(param_default_parametors_259),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value363=__builtin_string("void* memset(void* b, int c, size_t len)")))),(char*)come_increment_ref_count(((char*)(right_value364=__builtin_string("")))),info))));
        come_call_finalizer3(right_value362,sFun_finalize, 0, 1, 0, 0, (void*)0);
        right_value363 = come_decrement_ref_count2(right_value363, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value364 = come_decrement_ref_count2(right_value364, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value365,sFun_finalize, 0, 1, 0, 0, (void*)0);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value366=__builtin_string(name_253)))),(struct sFun*)come_increment_ref_count(main_fun_260));
        right_value366 = come_decrement_ref_count2(right_value366, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        name_253 = come_decrement_ref_count2(name_253, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_254,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_256,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_258,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_259,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_260,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_261=(char*)come_increment_ref_count(((char*)(right_value367=__builtin_string("__builtin_string"))));
        right_value367 = come_decrement_ref_count2(right_value367, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_262=(struct sType*)come_increment_ref_count(((struct sType*)(right_value369=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value368=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 821, "sType")))),"char*",(_Bool)0,info))));
        come_call_finalizer3(right_value368,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value369,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values15___263[0]=come_increment_ref_count(((struct sType*)(right_value371=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value370=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 822, "sType")))),"char*",(_Bool)0,info))));
}        param_types_264=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value373=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value372=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 822, "struct list$1sTypeph")))),1,__list_values15___263))));
        come_call_finalizer3(right_value370,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value371,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value372,list$1sTypeph_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value373,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values16___265[0]=come_increment_ref_count(((char*)(right_value374=__builtin_string("str"))));
}        param_names_266=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value376=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value375=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 823, "struct list$1charph")))),1,__list_values16___265))));
        right_value374 = come_decrement_ref_count2(right_value374, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value375,list$1charph_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value376,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        param_default_parametors_267=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value378=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value377=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 824, "list$1charph"))))))));
        come_call_finalizer3(right_value377,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value378,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        main_fun_268=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value382=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value379=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 825, "sFun")))),(char*)come_increment_ref_count(name_261),(struct sType*)come_increment_ref_count(result_type_262),(struct list$1sTypeph*)come_increment_ref_count(param_types_264),(struct list$1charph*)come_increment_ref_count(param_names_266),(struct list$1charph*)come_increment_ref_count(param_default_parametors_267),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value380=__builtin_string("char* __builtin_string(char* str)")))),(char*)come_increment_ref_count(((char*)(right_value381=__builtin_string("")))),info))));
        come_call_finalizer3(right_value379,sFun_finalize, 0, 1, 0, 0, (void*)0);
        right_value380 = come_decrement_ref_count2(right_value380, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value381 = come_decrement_ref_count2(right_value381, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value382,sFun_finalize, 0, 1, 0, 0, (void*)0);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value383=__builtin_string(name_261)))),(struct sFun*)come_increment_ref_count(main_fun_268));
        right_value383 = come_decrement_ref_count2(right_value383, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        name_261 = come_decrement_ref_count2(name_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_262,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_264,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_266,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_267,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_268,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_269=(char*)come_increment_ref_count(((char*)(right_value384=__builtin_string("come_heap_init"))));
        right_value384 = come_decrement_ref_count2(right_value384, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_270=(struct sType*)come_increment_ref_count(((struct sType*)(right_value386=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value385=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 836, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer3(right_value385,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value386,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values17___271[0]=come_increment_ref_count(((struct sType*)(right_value388=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value387=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 837, "sType")))),"int",(_Bool)0,info))));
__list_values17___271[1]=come_increment_ref_count(((struct sType*)(right_value390=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value389=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 837, "sType")))),"int",(_Bool)0,info))));
__list_values17___271[2]=come_increment_ref_count(((struct sType*)(right_value392=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value391=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 837, "sType")))),"int",(_Bool)0,info))));
}        param_types_272=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value394=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value393=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 837, "struct list$1sTypeph")))),3,__list_values17___271))));
        come_call_finalizer3(right_value387,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value388,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value389,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value390,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value391,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value392,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value393,list$1sTypeph_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value394,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values18___273[0]=come_increment_ref_count(((char*)(right_value395=xsprintf("come_malloc"))));
__list_values18___273[1]=come_increment_ref_count(((char*)(right_value396=xsprintf("come_debug"))));
__list_values18___273[2]=come_increment_ref_count(((char*)(right_value397=xsprintf("come_gc"))));
}        param_names_274=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value399=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value398=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 838, "struct list$1charph")))),3,__list_values18___273))));
        right_value395 = come_decrement_ref_count2(right_value395, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value396 = come_decrement_ref_count2(right_value396, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value397 = come_decrement_ref_count2(right_value397, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value398,list$1charph_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value399,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        param_default_parametors_275=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value401=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value400=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 839, "list$1charph"))))))));
        come_call_finalizer3(right_value400,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value401,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        list$1charph_push_back(param_default_parametors_275,((void*)0));
        main_fun_276=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value405=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value402=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 841, "sFun")))),(char*)come_increment_ref_count(name_269),(struct sType*)come_increment_ref_count(result_type_270),(struct list$1sTypeph*)come_increment_ref_count(param_types_272),(struct list$1charph*)come_increment_ref_count(param_names_274),(struct list$1charph*)come_increment_ref_count(param_default_parametors_275),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value403=__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")))),(char*)come_increment_ref_count(((char*)(right_value404=__builtin_string("")))),info))));
        come_call_finalizer3(right_value402,sFun_finalize, 0, 1, 0, 0, (void*)0);
        right_value403 = come_decrement_ref_count2(right_value403, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value404 = come_decrement_ref_count2(right_value404, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value405,sFun_finalize, 0, 1, 0, 0, (void*)0);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value406=__builtin_string(name_269)))),(struct sFun*)come_increment_ref_count(main_fun_276));
        right_value406 = come_decrement_ref_count2(right_value406, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        name_269 = come_decrement_ref_count2(name_269, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_270,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_272,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_274,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_275,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_276,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_277=(char*)come_increment_ref_count(((char*)(right_value407=__builtin_string("come_heap_final"))));
        right_value407 = come_decrement_ref_count2(right_value407, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_278=(struct sType*)come_increment_ref_count(((struct sType*)(right_value409=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value408=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 852, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer3(right_value408,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value409,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_types_279=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value411=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value410=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 853, "list$1sTypeph"))))))));
        come_call_finalizer3(right_value410,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value411,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
        param_names_280=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value413=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value412=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 854, "list$1charph"))))))));
        come_call_finalizer3(right_value412,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value413,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        param_default_parametors_281=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value415=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value414=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 855, "list$1charph"))))))));
        come_call_finalizer3(right_value414,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value415,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        main_fun_282=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value419=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value416=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 856, "sFun")))),(char*)come_increment_ref_count(name_277),(struct sType*)come_increment_ref_count(result_type_278),(struct list$1sTypeph*)come_increment_ref_count(param_types_279),(struct list$1charph*)come_increment_ref_count(param_names_280),(struct list$1charph*)come_increment_ref_count(param_default_parametors_281),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value417=__builtin_string("void come_heap_final()")))),(char*)come_increment_ref_count(((char*)(right_value418=__builtin_string("")))),info))));
        come_call_finalizer3(right_value416,sFun_finalize, 0, 1, 0, 0, (void*)0);
        right_value417 = come_decrement_ref_count2(right_value417, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value418 = come_decrement_ref_count2(right_value418, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value419,sFun_finalize, 0, 1, 0, 0, (void*)0);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value420=__builtin_string(name_277)))),(struct sFun*)come_increment_ref_count(main_fun_282));
        right_value420 = come_decrement_ref_count2(right_value420, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        name_277 = come_decrement_ref_count2(name_277, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_278,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_279,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_280,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_281,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_282,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_283=(char*)come_increment_ref_count(((char*)(right_value421=__builtin_string("come_null_check"))));
        right_value421 = come_decrement_ref_count2(right_value421, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_284=(struct sType*)come_increment_ref_count(((struct sType*)(right_value423=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value422=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 867, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer3(right_value422,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value423,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values19___285[0]=come_increment_ref_count(((struct sType*)(right_value425=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value424=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 868, "sType")))),"void*",(_Bool)0,info))));
__list_values19___285[1]=come_increment_ref_count(((struct sType*)(right_value427=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value426=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 868, "sType")))),"char*",(_Bool)0,info))));
__list_values19___285[2]=come_increment_ref_count(((struct sType*)(right_value429=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value428=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 868, "sType")))),"int",(_Bool)0,info))));
__list_values19___285[3]=come_increment_ref_count(((struct sType*)(right_value431=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value430=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 868, "sType")))),"int",(_Bool)0,info))));
}        param_types_286=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value433=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value432=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 868, "struct list$1sTypeph")))),4,__list_values19___285))));
        come_call_finalizer3(right_value424,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value425,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value426,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value427,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value428,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value429,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value430,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value431,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value432,list$1sTypeph_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value433,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values20___287[0]=come_increment_ref_count(((char*)(right_value434=__builtin_string("mem"))));
__list_values20___287[1]=come_increment_ref_count(((char*)(right_value435=__builtin_string("sname"))));
__list_values20___287[2]=come_increment_ref_count(((char*)(right_value436=__builtin_string("sline"))));
__list_values20___287[3]=come_increment_ref_count(((char*)(right_value437=__builtin_string("id"))));
}        param_names_288=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value439=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value438=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 869, "struct list$1charph")))),4,__list_values20___287))));
        right_value434 = come_decrement_ref_count2(right_value434, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value435 = come_decrement_ref_count2(right_value435, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value436 = come_decrement_ref_count2(right_value436, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value437 = come_decrement_ref_count2(right_value437, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value438,list$1charph_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value439,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        param_default_parametors_289=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value441=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value440=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 870, "list$1charph"))))))));
        come_call_finalizer3(right_value440,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value441,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        main_fun_290=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value445=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value442=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 871, "sFun")))),(char*)come_increment_ref_count(name_283),(struct sType*)come_increment_ref_count(result_type_284),(struct list$1sTypeph*)come_increment_ref_count(param_types_286),(struct list$1charph*)come_increment_ref_count(param_names_288),(struct list$1charph*)come_increment_ref_count(param_default_parametors_289),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value443=__builtin_string("void* come_null_check(void* mem, char* sname, int sline, int id)")))),(char*)come_increment_ref_count(((char*)(right_value444=__builtin_string("")))),info))));
        come_call_finalizer3(right_value442,sFun_finalize, 0, 1, 0, 0, (void*)0);
        right_value443 = come_decrement_ref_count2(right_value443, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value444 = come_decrement_ref_count2(right_value444, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value445,sFun_finalize, 0, 1, 0, 0, (void*)0);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value446=__builtin_string(name_283)))),(struct sFun*)come_increment_ref_count(main_fun_290));
        right_value446 = come_decrement_ref_count2(right_value446, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        name_283 = come_decrement_ref_count2(name_283, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_284,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_286,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_288,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_289,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_290,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_291=(char*)come_increment_ref_count(((char*)(right_value447=__builtin_string("__builtin_va_start"))));
        right_value447 = come_decrement_ref_count2(right_value447, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_292=(struct sType*)come_increment_ref_count(((struct sType*)(right_value449=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value448=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 882, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer3(right_value448,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value449,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_types_293=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value451=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value450=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 883, "list$1sTypeph"))))))));
        come_call_finalizer3(right_value450,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value451,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
        param_names_294=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value453=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value452=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 884, "list$1charph"))))))));
        come_call_finalizer3(right_value452,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value453,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        param_default_parametors_295=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value455=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value454=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 885, "list$1charph"))))))));
        come_call_finalizer3(right_value454,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value455,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        fun_296=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value459=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value456=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 886, "sFun")))),(char*)come_increment_ref_count(name_291),(struct sType*)come_increment_ref_count(result_type_292),(struct list$1sTypeph*)come_increment_ref_count(param_types_293),(struct list$1charph*)come_increment_ref_count(param_names_294),(struct list$1charph*)come_increment_ref_count(param_default_parametors_295),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value457=__builtin_string("void __builtin_va_start()")))),(char*)come_increment_ref_count(((char*)(right_value458=__builtin_string("")))),info))));
        come_call_finalizer3(right_value456,sFun_finalize, 0, 1, 0, 0, (void*)0);
        right_value457 = come_decrement_ref_count2(right_value457, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value458 = come_decrement_ref_count2(right_value458, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value459,sFun_finalize, 0, 1, 0, 0, (void*)0);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value460=__builtin_string(name_291)))),(struct sFun*)come_increment_ref_count(fun_296));
        right_value460 = come_decrement_ref_count2(right_value460, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        name_291 = come_decrement_ref_count2(name_291, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_292,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_293,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_294,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_295,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_296,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_297=(char*)come_increment_ref_count(((char*)(right_value461=__builtin_string("__builtin_va_end"))));
        right_value461 = come_decrement_ref_count2(right_value461, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_298=(struct sType*)come_increment_ref_count(((struct sType*)(right_value463=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value462=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 897, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer3(right_value462,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value463,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_types_299=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value465=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value464=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 898, "list$1sTypeph"))))))));
        come_call_finalizer3(right_value464,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value465,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
        param_names_300=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value467=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value466=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 899, "list$1charph"))))))));
        come_call_finalizer3(right_value466,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value467,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        param_default_parametors_301=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value469=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value468=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 900, "list$1charph"))))))));
        come_call_finalizer3(right_value468,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value469,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        fun_302=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value473=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value470=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 901, "sFun")))),(char*)come_increment_ref_count(name_297),(struct sType*)come_increment_ref_count(result_type_298),(struct list$1sTypeph*)come_increment_ref_count(param_types_299),(struct list$1charph*)come_increment_ref_count(param_names_300),(struct list$1charph*)come_increment_ref_count(param_default_parametors_301),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value471=__builtin_string("void __builtin_va_end()")))),(char*)come_increment_ref_count(((char*)(right_value472=__builtin_string("")))),info))));
        come_call_finalizer3(right_value470,sFun_finalize, 0, 1, 0, 0, (void*)0);
        right_value471 = come_decrement_ref_count2(right_value471, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value472 = come_decrement_ref_count2(right_value472, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value473,sFun_finalize, 0, 1, 0, 0, (void*)0);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value474=__builtin_string(name_297)))),(struct sFun*)come_increment_ref_count(fun_302));
        right_value474 = come_decrement_ref_count2(right_value474, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        name_297 = come_decrement_ref_count2(name_297, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_298,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_299,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_300,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_301,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_302,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    __result142__ = 0;
    return __result142__;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__;
int i_156;
struct list$1sTypeph* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_156, 0, sizeof(int));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            for(            i_156=0;            i_156<num_value;            i_156++            ){
                list$1sTypeph_push_back(self,values[i_156]);
            }
            __result115__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result115__;
            come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
void* right_value186;
struct list_item$1sTypeph* litem_157;
struct sType* __dec_obj69;
void* right_value187;
struct list_item$1sTypeph* litem_158;
struct sType* __dec_obj70;
void* right_value188;
struct list_item$1sTypeph* litem_159;
struct sType* __dec_obj71;
struct list$1sTypeph* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
right_value186 = (void*)0;
memset(&litem_157, 0, sizeof(struct list_item$1sTypeph*));
right_value187 = (void*)0;
memset(&litem_158, 0, sizeof(struct list_item$1sTypeph*));
right_value188 = (void*)0;
memset(&litem_159, 0, sizeof(struct list_item$1sTypeph*));
                    if(self->len==0) {
                        litem_157=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value186=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 219, "list_item$1sTypeph"))));
                        come_call_finalizer3(right_value186,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_157->prev=((void*)0);
                        litem_157->next=((void*)0);
                        __dec_obj69=litem_157->item;
                        litem_157->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_157;
                        self->head=litem_157;
                    }
                    else {
                        if(self->len==1) {
                            litem_158=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value187=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 229, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value187,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_158->prev=self->head;
                            litem_158->next=((void*)0);
                            __dec_obj70=litem_158->item;
                            litem_158->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_158;
                            self->head->next=litem_158;
                        }
                        else {
                            litem_159=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value188=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 239, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value188,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_159->prev=self->tail;
                            litem_159->next=((void*)0);
                            __dec_obj71=litem_159->item;
                            litem_159->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_159;
                            self->tail=litem_159;
                        }
                    }
                    self->len++;
                    __result114__ = __result_obj__ = self;
                    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                    return __result114__;
                    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__;
int i_162;
struct list$1charph* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_162, 0, sizeof(int));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            for(            i_162=0;            i_162<num_value;            i_162++            ){
                list$1charph_push_back(self,values[i_162]);
            }
            __result117__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result117__;
            come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
void* right_value196;
struct list_item$1charph* litem_163;
char* __dec_obj72;
void* right_value197;
struct list_item$1charph* litem_164;
char* __dec_obj73;
void* right_value198;
struct list_item$1charph* litem_165;
char* __dec_obj74;
struct list$1charph* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
right_value196 = (void*)0;
memset(&litem_163, 0, sizeof(struct list_item$1charph*));
right_value197 = (void*)0;
memset(&litem_164, 0, sizeof(struct list_item$1charph*));
right_value198 = (void*)0;
memset(&litem_165, 0, sizeof(struct list_item$1charph*));
                    if(self->len==0) {
                        litem_163=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value196=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 219, "list_item$1charph"))));
                        come_call_finalizer3(right_value196,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_163->prev=((void*)0);
                        litem_163->next=((void*)0);
                        __dec_obj72=litem_163->item;
                        litem_163->item=(char*)come_increment_ref_count(item);
                        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail=litem_163;
                        self->head=litem_163;
                    }
                    else {
                        if(self->len==1) {
                            litem_164=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value197=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 229, "list_item$1charph"))));
                            come_call_finalizer3(right_value197,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_164->prev=self->head;
                            litem_164->next=((void*)0);
                            __dec_obj73=litem_164->item;
                            litem_164->item=(char*)come_increment_ref_count(item);
                            __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_164;
                            self->head->next=litem_164;
                        }
                        else {
                            litem_165=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value198=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 239, "list_item$1charph"))));
                            come_call_finalizer3(right_value198,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_165->prev=self->tail;
                            litem_165->next=((void*)0);
                            __dec_obj74=litem_165->item;
                            litem_165->item=(char*)come_increment_ref_count(item);
                            __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail->next=litem_165;
                            self->tail=litem_165;
                        }
                    }
                    self->len++;
                    __result116__ = __result_obj__ = self;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result116__;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__;
unsigned int hash_186;
unsigned int it_187;
_Bool same_key_exist_204;
char* it2_207;
struct map$2charphsFunph* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_186, 0, sizeof(unsigned int));
memset(&it_187, 0, sizeof(unsigned int));
memset(&same_key_exist_204, 0, sizeof(_Bool));
memset(&it2_207, 0, sizeof(char*));
            if(self->len*10>=self->size) {
                map$2charphsFunph_rehash(self);
            }
            hash_186=string_get_hash_key(key)%self->size;
            it_187=hash_186;
            while((_Bool)1) {
                if(self->item_existance[it_187]) {
                    if(string_equals(self->keys[it_187],key)) {
                        if(1) {
                            list$1charp_remove(self->key_list,self->keys[it_187]);
                            self->keys[it_187] = come_decrement_ref_count2(self->keys[it_187], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            self->keys[it_187]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charp_remove(self->key_list,self->keys[it_187]);
                            self->keys[it_187]=key;
                        }
                        if(1) {
                            come_call_finalizer3(self->items[it_187],sFun_finalize, 0, 0, 0, 0, (void*)0);
                            self->items[it_187]=(struct sFun*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_187]=item;
                        }
                        break;
                    }
                    it_187++;
                    if(it_187>=self->size) {
                        it_187=0;
                    }
                    else {
                        if(it_187==hash_186) {
                            printf("unexpected error in map.insert\n");
                            stackframe();
                            exit(2);
                        }
                    }
                }
                else {
                    self->item_existance[it_187]=(_Bool)1;
                    if(1) {
                        self->keys[it_187]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_187]=key;
                    }
                    if(1) {
                        self->items[it_187]=(struct sFun*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_187]=item;
                    }
                    self->len++;
                    break;
                }
            }
            same_key_exist_204=(_Bool)0;
            for(            it2_207=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_207=list$1charp_next(self->key_list)            ){
                if(string_equals(it2_207,key)) {
                    same_key_exist_204=(_Bool)1;
                }
            }
            if(!same_key_exist_204) {
                list$1charp_push_back(self->key_list,key);
            }
            __result141__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result141__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sFun_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
int size_169;
void* right_value210;
char** keys_170;
void* right_value211;
struct sFun** items_171;
void* right_value212;
_Bool* item_existance_172;
int len_173;
char* it_176;
struct sFun* default_value_179;
struct sFun* it2_180;
unsigned int hash_183;
int n_184;
struct sFun* default_value_185;
memset(&size_169, 0, sizeof(int));
right_value210 = (void*)0;
memset(&keys_170, 0, sizeof(char**));
right_value211 = (void*)0;
memset(&items_171, 0, sizeof(struct sFun**));
right_value212 = (void*)0;
memset(&item_existance_172, 0, sizeof(_Bool*));
memset(&len_173, 0, sizeof(int));
memset(&it_176, 0, sizeof(char*));
memset(&default_value_179, 0, sizeof(struct sFun*));
memset(&it2_180, 0, sizeof(struct sFun*));
memset(&hash_183, 0, sizeof(unsigned int));
memset(&n_184, 0, sizeof(int));
memset(&default_value_185, 0, sizeof(struct sFun*));
                    size_169=self->size*10;
                    keys_170=(char**)come_increment_ref_count(((char**)(right_value210=(char**)come_calloc(1, sizeof(char*)*(1*(size_169)), "./neo-c.h", 1315, "char*%"))));
                    right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    items_171=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value211=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_169)), "./neo-c.h", 1316, "sFun*%"))));
                    come_call_finalizer3(right_value211,sFun_finalize, 0, 1, 0, 0, (void*)0);
                    item_existance_172=(_Bool*)come_increment_ref_count(((_Bool*)(right_value212=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_169)), "./neo-c.h", 1317, "bool"))));
                    right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    len_173=0;
                    for(                    it_176=map$2charphsFunph_begin(self);                    !map$2charphsFunph_end(self);                    it_176=map$2charphsFunph_next(self)                    ){
                        memset(&default_value_179,0,sizeof(struct sFun*));
                        it2_180=map$2charphsFunph_at(self,it_176,default_value_179);
                        hash_183=string_get_hash_key(it_176)%size_169;
                        n_184=hash_183;
                        while((_Bool)1) {
                            if(item_existance_172[n_184]) {
                                n_184++;
                                if(n_184>=size_169) {
                                    n_184=0;
                                }
                                else {
                                    if(n_184==hash_183) {
                                        printf("unexpected error in map.rehash(1)\n");
                                        stackframe();
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                item_existance_172[n_184]=(_Bool)1;
                                keys_170[n_184]=it_176;
                                items_171[n_184]=map$2charphsFunph_at(self,it_176,default_value_185);
                                len_173++;
                                break;
                            }
                        }
                    }
                    come_free((char*)self->items);
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_free((char*)self->keys);
                    self->keys=keys_170;
                    self->items=items_171;
                    self->item_existance=item_existance_172;
                    self->size=size_169;
                    self->len=len_173;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__;
char* result_174;
char* __result118__;
char* __result119__;
char* result_175;
char* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_174, 0, sizeof(char*));
memset(&result_175, 0, sizeof(char*));
                        if(self==((void*)0)) {
                            memset(&result_174,0,sizeof(char*));
                            __result118__ = __result_obj__ = result_174;
                            return __result118__;
                        }
                        self->key_list->it=self->key_list->head;
                        if(self->key_list->it) {
                            __result119__ = __result_obj__ = self->key_list->it->item;
                            return __result119__;
                        }
                        memset(&result_175,0,sizeof(char*));
                        __result120__ = __result_obj__ = result_175;
                        return __result120__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
_Bool __result121__;
                        __result121__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result121__;
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__;
char* result_177;
char* __result122__;
char* __result123__;
char* result_178;
char* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_177, 0, sizeof(char*));
memset(&result_178, 0, sizeof(char*));
                        if(self==((void*)0)||self->key_list->it==((void*)0)) {
                            memset(&result_177,0,sizeof(char*));
                            __result122__ = __result_obj__ = result_177;
                            return __result122__;
                        }
                        self->key_list->it=self->key_list->it->next;
                        if(self->key_list->it) {
                            __result123__ = __result_obj__ = self->key_list->it->item;
                            return __result123__;
                        }
                        memset(&result_178,0,sizeof(char*));
                        __result124__ = __result_obj__ = result_178;
                        return __result124__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_181;
unsigned int it_182;
struct sFun* __result125__;
struct sFun* __result126__;
struct sFun* __result127__;
struct sFun* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_181, 0, sizeof(unsigned int));
memset(&it_182, 0, sizeof(unsigned int));
                            hash_181=string_get_hash_key(((char*)key))%self->size;
                            it_182=hash_181;
                            while((_Bool)1) {
                                if(self->item_existance[it_182]) {
                                    if(string_equals(self->keys[it_182],key)) {
                                        __result125__ = __result_obj__ = self->items[it_182];
                                        come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result125__;
                                    }
                                    it_182++;
                                    if(it_182>=self->size) {
                                        it_182=0;
                                    }
                                    else {
                                        if(it_182==hash_181) {
                                            __result126__ = __result_obj__ = default_value;
                                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result126__;
                                        }
                                    }
                                }
                                else {
                                    __result127__ = __result_obj__ = default_value;
                                    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result127__;
                                }
                            }
                            __result128__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result128__;
                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_188;
struct list_item$1charp* it_189;
struct list$1charp* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_188, 0, sizeof(int));
memset(&it_189, 0, sizeof(struct list_item$1charp*));
                                it2_188=0;
                                it_189=self->head;
                                while(it_189!=((void*)0)) {
                                    if(string_equals(it_189->item,item)) {
                                        list$1charp_delete(self,it2_188,it2_188+1);
                                        break;
                                    }
                                    it2_188++;
                                    it_189=it_189->next;
                                }
                                __result132__ = __result_obj__ = self;
                                return __result132__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
int tmp_190;
struct list$1charp* __result129__;
struct list_item$1charp* it_193;
int i_194;
struct list_item$1charp* prev_it_195;
struct list_item$1charp* it_196;
int i_197;
struct list_item$1charp* prev_it_198;
struct list_item$1charp* it_199;
struct list_item$1charp* head_prev_it_200;
struct list_item$1charp* tail_it_201;
int i_202;
struct list_item$1charp* prev_it_203;
struct list$1charp* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_190, 0, sizeof(int));
memset(&it_193, 0, sizeof(struct list_item$1charp*));
memset(&i_194, 0, sizeof(int));
memset(&prev_it_195, 0, sizeof(struct list_item$1charp*));
memset(&it_196, 0, sizeof(struct list_item$1charp*));
memset(&i_197, 0, sizeof(int));
memset(&prev_it_198, 0, sizeof(struct list_item$1charp*));
memset(&it_199, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_200, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_201, 0, sizeof(struct list_item$1charp*));
memset(&i_202, 0, sizeof(int));
memset(&prev_it_203, 0, sizeof(struct list_item$1charp*));
                                            if(head<0) {
                                                head+=self->len;
                                            }
                                            if(tail<0) {
                                                tail+=self->len+1;
                                            }
                                            if(head>tail) {
                                                tmp_190=tail;
                                                tail=head;
                                                head=tmp_190;
                                            }
                                            if(head<0) {
                                                head=0;
                                            }
                                            if(tail>self->len) {
                                                tail=self->len;
                                            }
                                            if(head==tail) {
                                                __result129__ = __result_obj__ = self;
                                                return __result129__;
                                            }
                                            if(head==0&&tail==self->len) {
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                if(head==0) {
                                                    it_193=self->head;
                                                    i_194=0;
                                                    while(it_193!=((void*)0)) {
                                                        if(i_194<tail) {
                                                            prev_it_195=it_193;
                                                            it_193=it_193->next;
                                                            i_194++;
                                                            come_call_finalizer3(prev_it_195,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            if(i_194==tail) {
                                                                self->head=it_193;
                                                                self->head->prev=((void*)0);
                                                                break;
                                                            }
                                                            else {
                                                                it_193=it_193->next;
                                                                i_194++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    if(tail==self->len) {
                                                        it_196=self->head;
                                                        i_197=0;
                                                        while(it_196!=((void*)0)) {
                                                            if(i_197==head) {
                                                                self->tail=it_196->prev;
                                                                self->tail->next=((void*)0);
                                                            }
                                                            if(i_197>=head) {
                                                                prev_it_198=it_196;
                                                                it_196=it_196->next;
                                                                i_197++;
                                                                come_call_finalizer3(prev_it_198,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_196=it_196->next;
                                                                i_197++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        it_199=self->head;
                                                        head_prev_it_200=((void*)0);
                                                        tail_it_201=((void*)0);
                                                        i_202=0;
                                                        while(it_199!=((void*)0)) {
                                                            if(i_202==head) {
                                                                head_prev_it_200=it_199->prev;
                                                            }
                                                            if(i_202==tail) {
                                                                tail_it_201=it_199;
                                                            }
                                                            if(i_202>=head&&i_202<tail) {
                                                                prev_it_203=it_199;
                                                                it_199=it_199->next;
                                                                i_202++;
                                                                come_call_finalizer3(prev_it_203,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_199=it_199->next;
                                                                i_202++;
                                                            }
                                                        }
                                                        if(head_prev_it_200!=((void*)0)) {
                                                            head_prev_it_200->next=tail_it_201;
                                                        }
                                                        if(tail_it_201!=((void*)0)) {
                                                            tail_it_201->prev=head_prev_it_200;
                                                        }
                                                    }
                                                }
                                            }
                                            __result131__ = __result_obj__ = self;
                                            return __result131__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_191;
struct list_item$1charp* prev_it_192;
struct list$1charp* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_191, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_192, 0, sizeof(struct list_item$1charp*));
                                                    it_191=self->head;
                                                    while(it_191!=((void*)0)) {
                                                        prev_it_192=it_191;
                                                        it_191=it_191->next;
                                                        come_call_finalizer3(prev_it_192,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    self->head=((void*)0);
                                                    self->tail=((void*)0);
                                                    self->len=0;
                                                    __result130__ = __result_obj__ = self;
                                                    return __result130__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
char* result_205;
char* __result133__;
char* __result134__;
char* result_206;
char* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_205, 0, sizeof(char*));
memset(&result_206, 0, sizeof(char*));
                if(self==((void*)0)) {
                    memset(&result_205,0,sizeof(char*));
                    __result133__ = __result_obj__ = result_205;
                    return __result133__;
                }
                self->it=self->head;
                if(self->it) {
                    __result134__ = __result_obj__ = self->it->item;
                    return __result134__;
                }
                memset(&result_206,0,sizeof(char*));
                __result135__ = __result_obj__ = result_206;
                return __result135__;
}

static _Bool list$1charp_end(struct list$1charp* self){
_Bool __result136__;
                __result136__ = self==((void*)0)||self->it==((void*)0);
                return __result136__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
char* result_208;
char* __result137__;
char* __result138__;
char* result_209;
char* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_208, 0, sizeof(char*));
memset(&result_209, 0, sizeof(char*));
                if(self==((void*)0)||self->it==((void*)0)) {
                    memset(&result_208,0,sizeof(char*));
                    __result137__ = __result_obj__ = result_208;
                    return __result137__;
                }
                self->it=self->it->next;
                if(self->it) {
                    __result138__ = __result_obj__ = self->it->item;
                    return __result138__;
                }
                memset(&result_209,0,sizeof(char*));
                __result139__ = __result_obj__ = result_209;
                return __result139__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
void* right_value213;
struct list_item$1charp* litem_210;
void* right_value214;
struct list_item$1charp* litem_211;
void* right_value215;
struct list_item$1charp* litem_212;
struct list$1charp* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
right_value213 = (void*)0;
memset(&litem_210, 0, sizeof(struct list_item$1charp*));
right_value214 = (void*)0;
memset(&litem_211, 0, sizeof(struct list_item$1charp*));
right_value215 = (void*)0;
memset(&litem_212, 0, sizeof(struct list_item$1charp*));
                    if(self->len==0) {
                        litem_210=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value213=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 219, "list_item$1charp"))));
                        come_call_finalizer3(right_value213,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_210->prev=((void*)0);
                        litem_210->next=((void*)0);
                        litem_210->item=item;
                        self->tail=litem_210;
                        self->head=litem_210;
                    }
                    else {
                        if(self->len==1) {
                            litem_211=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value214=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 229, "list_item$1charp"))));
                            come_call_finalizer3(right_value214,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_211->prev=self->head;
                            litem_211->next=((void*)0);
                            litem_211->item=item;
                            self->tail=litem_211;
                            self->head->next=litem_211;
                        }
                        else {
                            litem_212=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value215=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 239, "list_item$1charp"))));
                            come_call_finalizer3(right_value215,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_212->prev=self->tail;
                            litem_212->next=((void*)0);
                            litem_212->item=item;
                            self->tail->next=litem_212;
                            self->tail=litem_212;
                        }
                    }
                    self->len++;
                    __result140__ = __result_obj__ = self;
                    return __result140__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
char* source_head_303;
_Bool is_type_name_flag_304;
int sline_305;
_Bool define_struct_nobody_306;
char* p_307;
int sline_308;
void* right_value475;
char* word_309;
_Bool define_function_pointer_result_function_310;
_Bool define_variable_between_brace_311;
char* p_312;
void* right_value476;
struct tuple3$3sTypephcharphbool* multiple_assign_var1;
struct sType* result_type_313;
char* fun_name_314;
_Bool err_315;
void* right_value477;
char* word_316;
_Bool define_function_flag_317;
char* p_318;
void* right_value478;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* result_type_319;
char* fun_name_320;
_Bool err_321;
char* __dec_obj75;
char* word_322;
void* right_value479;
char* __dec_obj76;
void* right_value480;
char* __dec_obj77;
char* __dec_obj78;
void* right_value481;
char* __dec_obj79;
_Bool define_variable_323;
char* p_324;
void* right_value482;
struct tuple3$3sTypephcharphbool* multiple_assign_var3;
struct sType* result_type_325;
char* fun_name_326;
_Bool err_327;
void* right_value483;
char* word_328;
void* right_value484;
char* word_329;
char* p_330;
void* right_value485;
void* right_value486;
char* word_331;
void* right_value487;
char* __dec_obj80;
void* right_value488;
char* word_332;
void* right_value489;
char* word_335;
void* right_value490;
void* right_value491;
struct sNode* node_336;
struct sNode* __result144__;
void* right_value492;
struct sNode* __result145__;
char* header_head_337;
void* right_value493;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* result_type_338;
char* fun_name_339;
_Bool err_340;
void* right_value494;
void* right_value495;
struct list$1sTypeph* param_types_341;
void* right_value496;
void* right_value497;
struct list$1charph* param_names_342;
void* right_value498;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* param_type_343;
char* param_name_344;
_Bool err_345;
void* right_value499;
void* right_value500;
void* right_value501;
struct list$1sTypeph* param_types2_347;
void* right_value502;
void* right_value503;
struct list$1charph* param_names2_348;
void* right_value504;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* param_type_349;
char* param_name_350;
_Bool err_351;
void* right_value505;
char* header_tail_353;
void* right_value506;
void* right_value507;
struct sType* result_type2_354;
void* right_value508;
void* right_value509;
struct tuple1$1sTypeph* __dec_obj82;
void* right_value510;
struct list$1sTypeph* __dec_obj83;
void* right_value511;
struct list$1charph* __dec_obj84;
_Bool var_args_355;
void* right_value512;
void* right_value513;
struct buffer* header_buf_356;
void* right_value514;
void* right_value515;
struct list$1charph* param_default_parametors_357;
void* right_value516;
void* right_value517;
void* right_value518;
void* right_value519;
void* right_value520;
struct sFun* fun_358;
void* right_value521;
struct sFun* fun2_362;
void* right_value522;
void* right_value523;
void* right_value524;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* right_value559;
struct sNode* __result175__;
void* right_value560;
struct sNode* __result176__;
void* right_value561;
struct sNode* node_399;
char* source_tail_400;
void* right_value562;
void* right_value563;
struct buffer* header_401;
struct sNode* __result177__;
void* right_value564;
char* buf2_402;
void* right_value565;
struct sNode* __result178__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&source_head_303, 0, sizeof(char*));
memset(&is_type_name_flag_304, 0, sizeof(_Bool));
memset(&sline_305, 0, sizeof(int));
memset(&define_struct_nobody_306, 0, sizeof(_Bool));
memset(&p_307, 0, sizeof(char*));
memset(&sline_308, 0, sizeof(int));
right_value475 = (void*)0;
memset(&word_309, 0, sizeof(char*));
memset(&define_function_pointer_result_function_310, 0, sizeof(_Bool));
memset(&define_variable_between_brace_311, 0, sizeof(_Bool));
memset(&p_312, 0, sizeof(char*));
right_value476 = (void*)0;
right_value477 = (void*)0;
memset(&word_316, 0, sizeof(char*));
memset(&define_function_flag_317, 0, sizeof(_Bool));
memset(&p_318, 0, sizeof(char*));
right_value478 = (void*)0;
memset(&word_322, 0, sizeof(char*));
right_value479 = (void*)0;
right_value480 = (void*)0;
right_value481 = (void*)0;
memset(&define_variable_323, 0, sizeof(_Bool));
memset(&p_324, 0, sizeof(char*));
right_value482 = (void*)0;
right_value483 = (void*)0;
memset(&word_328, 0, sizeof(char*));
right_value484 = (void*)0;
memset(&word_329, 0, sizeof(char*));
memset(&p_330, 0, sizeof(char*));
right_value485 = (void*)0;
right_value486 = (void*)0;
memset(&word_331, 0, sizeof(char*));
right_value487 = (void*)0;
right_value488 = (void*)0;
memset(&word_332, 0, sizeof(char*));
right_value489 = (void*)0;
memset(&word_335, 0, sizeof(char*));
right_value490 = (void*)0;
right_value491 = (void*)0;
memset(&node_336, 0, sizeof(struct sNode*));
right_value492 = (void*)0;
memset(&header_head_337, 0, sizeof(char*));
right_value493 = (void*)0;
right_value494 = (void*)0;
right_value495 = (void*)0;
memset(&param_types_341, 0, sizeof(struct list$1sTypeph*));
right_value496 = (void*)0;
right_value497 = (void*)0;
memset(&param_names_342, 0, sizeof(struct list$1charph*));
right_value498 = (void*)0;
right_value499 = (void*)0;
right_value500 = (void*)0;
right_value501 = (void*)0;
memset(&param_types2_347, 0, sizeof(struct list$1sTypeph*));
right_value502 = (void*)0;
right_value503 = (void*)0;
memset(&param_names2_348, 0, sizeof(struct list$1charph*));
right_value504 = (void*)0;
right_value505 = (void*)0;
memset(&header_tail_353, 0, sizeof(char*));
right_value506 = (void*)0;
right_value507 = (void*)0;
memset(&result_type2_354, 0, sizeof(struct sType*));
right_value508 = (void*)0;
right_value509 = (void*)0;
right_value510 = (void*)0;
right_value511 = (void*)0;
memset(&var_args_355, 0, sizeof(_Bool));
right_value512 = (void*)0;
right_value513 = (void*)0;
memset(&header_buf_356, 0, sizeof(struct buffer*));
right_value514 = (void*)0;
right_value515 = (void*)0;
memset(&param_default_parametors_357, 0, sizeof(struct list$1charph*));
right_value516 = (void*)0;
right_value517 = (void*)0;
right_value518 = (void*)0;
right_value519 = (void*)0;
right_value520 = (void*)0;
memset(&fun_358, 0, sizeof(struct sFun*));
right_value521 = (void*)0;
memset(&fun2_362, 0, sizeof(struct sFun*));
right_value522 = (void*)0;
right_value523 = (void*)0;
right_value524 = (void*)0;
right_value559 = (void*)0;
right_value560 = (void*)0;
right_value561 = (void*)0;
memset(&node_399, 0, sizeof(struct sNode*));
memset(&source_tail_400, 0, sizeof(char*));
right_value562 = (void*)0;
right_value563 = (void*)0;
memset(&header_401, 0, sizeof(struct buffer*));
right_value564 = (void*)0;
memset(&buf2_402, 0, sizeof(char*));
right_value565 = (void*)0;
    source_head_303=info->p;
    is_type_name_flag_304=is_type_name(buf,info);
    sline_305=info->sline;
    define_struct_nobody_306=(_Bool)0;
    {
        p_307=info->p;
        sline_308=info->sline;
        if(charp_operator_equals(buf,"struct")) {
            if(xisalpha(*info->p)||*info->p==95) {
                word_309=(char*)come_increment_ref_count(((char*)(right_value475=parse_word(info))));
                right_value475 = come_decrement_ref_count2(right_value475, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(*info->p==59) {
                    define_struct_nobody_306=(_Bool)1;
                }
                word_309 = come_decrement_ref_count2(word_309, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=head;
        info->sline=sline_308;
    }
    define_function_pointer_result_function_310=(_Bool)0;
    define_variable_between_brace_311=(_Bool)0;
    if(is_type_name_flag_304) {
        p_312=info->p;
        info->p=head;
        if(xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(right_value476=backtrace_parse_type((_Bool)0,info)));
            result_type_313=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_314=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_315=multiple_assign_var1->v3;
            come_call_finalizer3(right_value476,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(*info->p!=42) {
                    define_function_pointer_result_function_310=(_Bool)1;
                    if(xisalpha(*info->p)||*info->p==95) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        word_316=(char*)come_increment_ref_count(((char*)(right_value477=parse_word(info))));
                        right_value477 = come_decrement_ref_count2(right_value477, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(!is_type_name(word_316,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(*info->p==40) {
                            }
                            else {
                                define_variable_between_brace_311=(_Bool)1;
                            }
                        }
                        word_316 = come_decrement_ref_count2(word_316, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer3(result_type_313,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_314 = come_decrement_ref_count2(fun_name_314, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=head;
        info->sline=sline_305;
    }
    define_function_flag_317=(_Bool)0;
    if(is_type_name_flag_304&&!define_function_pointer_result_function_310&&charp_operator_not_equals(buf,"__typeof__")) {
        p_318=info->p;
        info->p=head;
        if(xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(right_value478=backtrace_parse_type((_Bool)0,info)));
            result_type_319=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_320=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_321=multiple_assign_var2->v3;
            come_call_finalizer3(right_value478,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(result_type_319,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_320 = come_decrement_ref_count2(fun_name_320, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(!info->define_struct) {
            info->define_struct=(_Bool)0;
            __dec_obj75=word_322;
            word_322=((void*)0);
            __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(xisalnum(*info->p)||*info->p==95) {
                __dec_obj76=word_322;
                word_322=(char*)come_increment_ref_count(((char*)(right_value479=parse_word(info))));
                __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value479 = come_decrement_ref_count2(right_value479, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(string_operator_equals(word_322,"extern")) {
                    __dec_obj77=word_322;
                    word_322=(char*)come_increment_ref_count(((char*)(right_value480=parse_word(info))));
                    __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value480 = come_decrement_ref_count2(right_value480, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            else {
                __dec_obj78=word_322;
                word_322=((void*)0);
                __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(word_322) {
                if(is_type_name(word_322,info)) {
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
                        __dec_obj79=word_322;
                        word_322=(char*)come_increment_ref_count(((char*)(right_value481=parse_word(info))));
                        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value481 = come_decrement_ref_count2(right_value481, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                }
                if(strlen(word_322)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(is_type_name_flag_304) {
                        define_function_flag_317=(_Bool)1;
                    }
                }
            }
            word_322 = come_decrement_ref_count2(word_322, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_318;
        info->sline=sline_305;
    }
    define_variable_323=(_Bool)1;
    if(is_type_name_flag_304&&!define_function_pointer_result_function_310) {
        p_324=info->p;
        info->p=head;
        if(!is_type_name_flag_304) {
            define_variable_323=(_Bool)0;
        }
        if(xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(right_value482=backtrace_parse_type((_Bool)0,info)));
            result_type_325=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_326=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_327=multiple_assign_var3->v3;
            come_call_finalizer3(right_value482,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(*info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(xisalpha(*info->p)||*info->p==95) {
                        word_328=(char*)come_increment_ref_count(((char*)(right_value483=parse_word(info))));
                        right_value483 = come_decrement_ref_count2(right_value483, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(*info->p==40) {
                                define_variable_323=(_Bool)1;
                            }
                        }
                        word_328 = come_decrement_ref_count2(word_328, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    if(xisalpha(*info->p)||*info->p==95) {
                        word_329=(char*)come_increment_ref_count(((char*)(right_value484=parse_word(info))));
                        right_value484 = come_decrement_ref_count2(right_value484, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(!is_type_name(word_329,info)&&*info->p!=40) {
                                define_variable_323=(_Bool)1;
                            }
                        }
                        word_329 = come_decrement_ref_count2(word_329, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer3(result_type_325,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_326 = come_decrement_ref_count2(fun_name_326, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_323=(_Bool)0;
        }
        else {
            if(define_variable_323) {
            }
            else {
                if(!(xisalpha(*info->p)||*info->p==95)) {
                    define_variable_323=(_Bool)0;
                }
                while(xisalpha(*info->p)||*info->p==95) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                if(*info->p==40||*info->p==58) {
                    define_variable_323=(_Bool)0;
                }
            }
        }
        info->p=p_324;
        info->sline=sline_305;
    }
    else {
        define_variable_323=(_Bool)0;
    }
    {
        p_330=info->p;
        info->p=head;
        if(charp_operator_equals(buf,"struct")) {
            if(xisalpha(*info->p)||*info->p==95) {
                ((char*)(right_value485=parse_word(info)));
                right_value485 = come_decrement_ref_count2(right_value485, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(xisalpha(*info->p)||*info->p==95) {
                    word_331=(char*)come_increment_ref_count(((char*)(right_value486=parse_word(info))));
                    right_value486 = come_decrement_ref_count2(right_value486, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(xisalpha(*info->p)||*info->p==95) {
                        __dec_obj80=word_331;
                        word_331=(char*)come_increment_ref_count(((char*)(right_value487=parse_word(info))));
                        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value487 = come_decrement_ref_count2(right_value487, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(string_operator_equals(word_331,"extends")) {
                            define_variable_323=(_Bool)0;
                        }
                    }
                    word_331 = come_decrement_ref_count2(word_331, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        if(info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_323=(_Bool)0;
        }
        else {
            if(define_variable_323) {
            }
            else {
                if(!(xisalpha(*info->p)||*info->p==95)) {
                    define_variable_323=(_Bool)0;
                }
                while(xisalpha(*info->p)||*info->p==95) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                if(*info->p==40||*info->p==58) {
                    define_variable_323=(_Bool)0;
                }
            }
        }
        info->p=p_330;
        info->sline=sline_305;
    }
    if(charp_operator_equals(buf,"template")) {
        word_332=(char*)come_increment_ref_count(((char*)(right_value488=parse_word(info))));
        right_value488 = come_decrement_ref_count2(right_value488, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
                            word_335=(char*)come_increment_ref_count(((char*)(right_value489=parse_word(info))));
                            right_value489 = come_decrement_ref_count2(right_value489, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value490=string_clone(word_335)))));
                            right_value490 = come_decrement_ref_count2(right_value490, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            word_335 = come_decrement_ref_count2(word_335, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
            node_336=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value491=parse_function(info))));
            if(right_value491) { right_value491 = come_decrement_ref_count2(right_value491, ((struct sNode*)right_value491)->finalize, ((struct sNode*)right_value491)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            list$1charph_reset(info->method_generics_type_names);
            __result144__ = __result_obj__ = node_336;
            if(node_336) { node_336 = come_decrement_ref_count2(node_336, ((struct sNode*)node_336)->finalize, ((struct sNode*)node_336)->_protocol_obj, 0, 1, 0, (void*)0); } 
            word_332 = come_decrement_ref_count2(word_332, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result144__;
            if(node_336) { node_336 = come_decrement_ref_count2(node_336, ((struct sNode*)node_336)->finalize, ((struct sNode*)node_336)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        word_332 = come_decrement_ref_count2(word_332, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(define_struct_nobody_306) {
        }
        else {
            if(define_variable_between_brace_311) {
                info->p=head;
                info->sline=sline_305;
                __result145__ = __result_obj__ = ((struct sNode*)(right_value492=parse_global_variable(info)));
                if(right_value492) { right_value492 = come_decrement_ref_count2(right_value492, ((struct sNode*)right_value492)->finalize, ((struct sNode*)right_value492)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result145__;
            }
            else {
                if(define_function_pointer_result_function_310) {
                    header_head_337=info->p;
                    multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value493=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                    result_type_338=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                    fun_name_339=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    err_340=multiple_assign_var4->v3;
                    come_call_finalizer3(right_value493,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(*info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        param_types_341=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value495=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value494=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1225, "list$1sTypeph"))))))));
                        come_call_finalizer3(right_value494,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value495,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        param_names_342=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value497=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value496=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1226, "list$1charph"))))))));
                        come_call_finalizer3(right_value496,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value497,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else {
                            while((_Bool)1) {
                                multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value498=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                param_type_343=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                                param_name_344=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                                err_345=multiple_assign_var5->v3;
                                come_call_finalizer3(right_value498,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                if(!err_345) {
                                    err_msg(info,"parse_type is failed");
                                    exit(2);
                                }
                                list$1sTypeph_push_back(param_types_341,(struct sType*)come_increment_ref_count(param_type_343));
                                static int num_function_pointer_result_var_name_a_346=0;
                                list$1charph_push_back(param_names_342,(char*)come_increment_ref_count(((char*)(right_value499=xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_346)))));
                                right_value499 = come_decrement_ref_count2(right_value499, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                if(*info->p==44) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                }
                                else {
                                    if(*info->p==41) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                        come_call_finalizer3(param_type_343,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        param_name_344 = come_decrement_ref_count2(param_name_344, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        break;
                                    }
                                    else {
                                        err_msg(info,"require , or )");
                                        exit(2);
                                    }
                                }
                                come_call_finalizer3(param_type_343,sType_finalize, 0, 0, 0, 0, (void*)0);
                                param_name_344 = come_decrement_ref_count2(param_name_344, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        expected_next_character(41,info);
                        if(*info->p==40) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            param_types2_347=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value501=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value500=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1268, "list$1sTypeph"))))))));
                            come_call_finalizer3(right_value500,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value501,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            param_names2_348=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value503=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value502=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1269, "list$1charph"))))))));
                            come_call_finalizer3(right_value502,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value503,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            if(*info->p==41) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            else {
                                while((_Bool)1) {
                                    multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(right_value504=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                    param_type_349=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                                    param_name_350=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                                    err_351=multiple_assign_var6->v3;
                                    come_call_finalizer3(right_value504,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(!err_351) {
                                        err_msg(info,"parse_type is failed");
                                        exit(2);
                                    }
                                    list$1sTypeph_push_back(param_types2_347,(struct sType*)come_increment_ref_count(param_type_349));
                                    static int num_function_pointer_result_var_name_b_352=0;
                                    list$1charph_push_back(param_names2_348,(char*)come_increment_ref_count(((char*)(right_value505=xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_352)))));
                                    right_value505 = come_decrement_ref_count2(right_value505, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    if(*info->p==44) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                    }
                                    else {
                                        if(*info->p==41) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                            come_call_finalizer3(param_type_349,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            param_name_350 = come_decrement_ref_count2(param_name_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            break;
                                        }
                                        else {
                                            err_msg(info,"require , or )");
                                            exit(2);
                                        }
                                    }
                                    come_call_finalizer3(param_type_349,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    param_name_350 = come_decrement_ref_count2(param_name_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                            }
                            header_tail_353=info->p;
                            result_type2_354=(struct sType*)come_increment_ref_count(((struct sType*)(right_value507=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value506=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1307, "sType")))),"lambda",(_Bool)0,info))));
                            come_call_finalizer3(right_value506,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value507,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            __dec_obj82=result_type2_354->mResultType;
                            result_type2_354->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value509=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value508=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function.c", 1309, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_338)))));
                            come_call_finalizer3(__dec_obj82,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value508,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value509,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            __dec_obj83=result_type2_354->mParamTypes;
                            result_type2_354->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value510=list$1sTypephp_clone(param_types2_347))));
                            come_call_finalizer3(__dec_obj83,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value510,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            __dec_obj84=result_type2_354->mParamNames;
                            result_type2_354->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value511=list$1charphp_clone(param_names2_348))));
                            come_call_finalizer3(__dec_obj84,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value511,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            result_type2_354->mVarArgs=(_Bool)0;
                            result_type2_354->mStatic=(_Bool)0;
                            var_args_355=(_Bool)0;
                            header_buf_356=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value513=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value512=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1317, "buffer"))))))));
                            come_call_finalizer3(right_value512,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value513,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            buffer_append(header_buf_356,header_head_337,header_tail_353-header_head_337);
                            buffer_append_char(header_buf_356,0);
                            param_default_parametors_357=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value515=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value514=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1321, "list$1charph"))))))));
                            come_call_finalizer3(right_value514,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value515,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            fun_358=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value520=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value516=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1323, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value517=__builtin_string(fun_name_339)))),(struct sType*)come_increment_ref_count(result_type2_354),(struct list$1sTypeph*)come_increment_ref_count(param_types_341),(struct list$1charph*)come_increment_ref_count(param_names_342),(struct list$1charph*)come_increment_ref_count(param_default_parametors_357),(_Bool)1,var_args_355,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value518=buffer_to_string(header_buf_356)))),(char*)come_increment_ref_count(((char*)(right_value519=__builtin_string(info->sname)))),info))));
                            come_call_finalizer3(right_value516,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                            right_value517 = come_decrement_ref_count2(right_value517, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value518 = come_decrement_ref_count2(right_value518, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value519 = come_decrement_ref_count2(right_value519, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value520,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                            fun2_362=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value521=__builtin_string(fun_name_339))));
                            right_value521 = come_decrement_ref_count2(right_value521, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(fun2_362==((void*)0)||fun2_362->mExternal) {
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value522=string_clone(fun_name_339)))),(struct sFun*)come_increment_ref_count(fun_358));
                                right_value522 = come_decrement_ref_count2(right_value522, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1335, "struct sNode");
                            _inf_obj_value2=come_increment_ref_count(((struct sFunNode*)(right_value524=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value523=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1335, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_358),info))));
                            _inf_value2->_protocol_obj=_inf_obj_value2;
                            _inf_value2->finalize=(void*)sFunNode_finalize;
                            _inf_value2->clone=(void*)sFunNode_clone;
                            _inf_value2->compile=(void*)sFunNode_compile;
                            _inf_value2->sline=(void*)sNodeBase_sline;
                            _inf_value2->sname=(void*)sNodeBase_sname;
                            _inf_value2->terminated=(void*)sNodeBase_terminated;
                            _inf_value2->kind=(void*)sFunNode_kind;
                            __result175__ = __result_obj__ = ((struct sNode*)(right_value559=_inf_value2));
                            come_call_finalizer3(param_types2_347,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_names2_348,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type2_354,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_buf_356,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_default_parametors_357,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(fun_358,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_341,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_names_342,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type_338,sType_finalize, 0, 0, 0, 0, (void*)0);
                            fun_name_339 = come_decrement_ref_count2(fun_name_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value523,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value524,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value559) { right_value559 = come_decrement_ref_count2(right_value559, ((struct sNode*)right_value559)->finalize, ((struct sNode*)right_value559)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result175__;
                            come_call_finalizer3(param_types2_347,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_names2_348,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type2_354,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_buf_356,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_default_parametors_357,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(fun_358,sFun_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            err_msg(info,"require (");
                            exit(2);
                        }
                        come_call_finalizer3(param_types_341,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_names_342,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(result_type_338,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_339 = come_decrement_ref_count2(fun_name_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(define_function_flag_317) {
                        info->p=head;
                        info->sline=sline_305;
                        __result176__ = __result_obj__ = ((struct sNode*)(right_value560=parse_function(info)));
                        if(right_value560) { right_value560 = come_decrement_ref_count2(right_value560, ((struct sNode*)right_value560)->finalize, ((struct sNode*)right_value560)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result176__;
                    }
                    else {
                        if(define_variable_323) {
                            info->p=head;
                            info->sline=sline_305;
                            node_399=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value561=parse_global_variable(info))));
                            if(right_value561) { right_value561 = come_decrement_ref_count2(right_value561, ((struct sNode*)right_value561)->finalize, ((struct sNode*)right_value561)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            source_tail_400=info->p;
                            header_401=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value563=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value562=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1357, "buffer"))))))));
                            come_call_finalizer3(right_value562,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value563,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            buffer_append(header_401,source_head_303,source_tail_400-source_head_303);
                            __result177__ = __result_obj__ = node_399;
                            if(node_399) { node_399 = come_decrement_ref_count2(node_399, ((struct sNode*)node_399)->finalize, ((struct sNode*)node_399)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            come_call_finalizer3(header_401,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            return __result177__;
                            if(node_399) { node_399 = come_decrement_ref_count2(node_399, ((struct sNode*)node_399)->finalize, ((struct sNode*)node_399)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(header_401,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
        }
    }
    info->p=head;
    info->sline=sline_305;
    buf2_402=(char*)come_increment_ref_count(((char*)(right_value564=parse_word(info))));
    right_value564 = come_decrement_ref_count2(right_value564, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result178__ = __result_obj__ = ((struct sNode*)(right_value565=top_level_v98(buf2_402,head,head_sline,info)));
    buf2_402 = come_decrement_ref_count2(buf2_402, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(right_value565) { right_value565 = come_decrement_ref_count2(right_value565, ((struct sNode*)right_value565)->finalize, ((struct sNode*)right_value565)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result178__;
    buf2_402 = come_decrement_ref_count2(buf2_402, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
struct list_item$1charph* it_333;
struct list_item$1charph* prev_it_334;
struct list$1charph* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_333, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_334, 0, sizeof(struct list_item$1charph*));
                it_333=self->head;
                while(it_333!=((void*)0)) {
                    prev_it_334=it_333;
                    it_333=it_333->next;
                    come_call_finalizer3(prev_it_334,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result143__ = __result_obj__ = self;
                return __result143__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj81;
struct tuple1$1sTypeph* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
                                __dec_obj81=self->v1;
                                self->v1=(struct sType*)come_increment_ref_count(v1);
                                come_call_finalizer3(__dec_obj81,sType_finalize, 0, 0, 0, 0, (void*)0);
                                __result146__ = __result_obj__ = self;
                                come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                                come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                                return __result146__;
                                come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                                come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_359;
unsigned int hash_360;
unsigned int it_361;
struct sFun* __result147__;
struct sFun* __result148__;
struct sFun* __result149__;
struct sFun* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_359, 0, sizeof(struct sFun*));
memset(&hash_360, 0, sizeof(unsigned int));
memset(&it_361, 0, sizeof(unsigned int));
                                memset(&default_value_359,0,sizeof(struct sFun*));
                                hash_360=string_get_hash_key(((char*)key))%self->size;
                                it_361=hash_360;
                                while((_Bool)1) {
                                    if(self->item_existance[it_361]) {
                                        if(string_equals(self->keys[it_361],key)) {
                                            __result147__ = __result_obj__ = self->items[it_361];
                                            come_call_finalizer3(default_value_359,sFun_finalize, 0, 0, 0, 0, (void*)0);
                                            return __result147__;
                                        }
                                        it_361++;
                                        if(it_361>=self->size) {
                                            it_361=0;
                                        }
                                        else {
                                            if(it_361==hash_360) {
                                                __result148__ = __result_obj__ = default_value_359;
                                                come_call_finalizer3(default_value_359,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result148__;
                                            }
                                        }
                                    }
                                    else {
                                        __result149__ = __result_obj__ = default_value_359;
                                        come_call_finalizer3(default_value_359,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result149__;
                                    }
                                }
                                __result150__ = __result_obj__ = default_value_359;
                                come_call_finalizer3(default_value_359,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result150__;
                                come_call_finalizer3(default_value_359,sFun_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sFun* sFun_clone(struct sFun* self){
void* __result_obj__;
struct sFun* __result152__;
void* right_value527;
struct sFun* result_364;
void* right_value528;
char* __dec_obj86;
void* right_value529;
struct sType* __dec_obj87;
void* right_value530;
struct list$1sTypeph* __dec_obj88;
void* right_value531;
struct list$1charph* __dec_obj89;
void* right_value532;
struct list$1charph* __dec_obj90;
void* right_value533;
struct sType* __dec_obj91;
void* right_value551;
struct sBlock* __dec_obj97;
void* right_value552;
struct buffer* __dec_obj98;
void* right_value553;
struct buffer* __dec_obj99;
void* right_value554;
struct buffer* __dec_obj100;
void* right_value555;
struct buffer* __dec_obj101;
void* right_value556;
char* __dec_obj102;
void* right_value557;
char* __dec_obj103;
struct sFun* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
right_value527 = (void*)0;
memset(&result_364, 0, sizeof(struct sFun*));
right_value528 = (void*)0;
right_value529 = (void*)0;
right_value530 = (void*)0;
right_value531 = (void*)0;
right_value532 = (void*)0;
right_value533 = (void*)0;
right_value551 = (void*)0;
right_value552 = (void*)0;
right_value553 = (void*)0;
right_value554 = (void*)0;
right_value555 = (void*)0;
right_value556 = (void*)0;
right_value557 = (void*)0;
                                        if(self==(void*)0) {
                                            __result152__ = __result_obj__ = (void*)0;
                                            return __result152__;
                                        }
                                        result_364=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value527=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "sFun"))));
                                        come_call_finalizer3(right_value527,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(self!=((void*)0)&&self->mName!=((void*)0)) {
                                            __dec_obj86=result_364->mName;
                                            result_364->mName=(char*)come_increment_ref_count(((char*)(right_value528=string_clone(self->mName))));
                                            __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value528 = come_decrement_ref_count2(right_value528, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                                            __dec_obj87=result_364->mResultType;
                                            result_364->mResultType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value529=sType_clone(self->mResultType))));
                                            come_call_finalizer3(__dec_obj87,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value529,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                                            __dec_obj88=result_364->mParamTypes;
                                            result_364->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value530=list$1sTypephp_clone(self->mParamTypes))));
                                            come_call_finalizer3(__dec_obj88,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value530,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                                            __dec_obj89=result_364->mParamNames;
                                            result_364->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value531=list$1charphp_clone(self->mParamNames))));
                                            come_call_finalizer3(__dec_obj89,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value531,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
                                            __dec_obj90=result_364->mParamDefaultParametors;
                                            result_364->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value532=list$1charphp_clone(self->mParamDefaultParametors))));
                                            come_call_finalizer3(__dec_obj90,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value532,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
                                            __dec_obj91=result_364->mLambdaType;
                                            result_364->mLambdaType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value533=sType_clone(self->mLambdaType))));
                                            come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value533,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
                                            __dec_obj97=result_364->mBlock;
                                            result_364->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value551=sBlock_clone(self->mBlock))));
                                            come_call_finalizer3(__dec_obj97,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value551,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(self!=((void*)0)) {
                                            result_364->mExternal=self->mExternal;
                                        }
                                        if(self!=((void*)0)) {
                                            result_364->mVarArgs=self->mVarArgs;
                                        }
                                        if(self!=((void*)0)&&self->mSource!=((void*)0)) {
                                            __dec_obj98=result_364->mSource;
                                            result_364->mSource=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value552=buffer_clone(self->mSource))));
                                            come_call_finalizer3(__dec_obj98,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value552,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
                                            __dec_obj99=result_364->mSourceHead;
                                            result_364->mSourceHead=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value553=buffer_clone(self->mSourceHead))));
                                            come_call_finalizer3(__dec_obj99,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value553,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
                                            __dec_obj100=result_364->mSourceHead2;
                                            result_364->mSourceHead2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value554=buffer_clone(self->mSourceHead2))));
                                            come_call_finalizer3(__dec_obj100,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value554,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
                                            __dec_obj101=result_364->mSourceDefer;
                                            result_364->mSourceDefer=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value555=buffer_clone(self->mSourceDefer))));
                                            come_call_finalizer3(__dec_obj101,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value555,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(self!=((void*)0)) {
                                            result_364->mStatic=self->mStatic;
                                        }
                                        if(self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
                                            __dec_obj102=result_364->mComeHeader;
                                            result_364->mComeHeader=(char*)come_increment_ref_count(((char*)(right_value556=string_clone(self->mComeHeader))));
                                            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value556 = come_decrement_ref_count2(right_value556, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        if(self!=((void*)0)) {
                                            result_364->mCloner=self->mCloner;
                                        }
                                        if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
                                            __dec_obj103=result_364->mDeclareSName;
                                            result_364->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value557=string_clone(self->mDeclareSName))));
                                            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value557 = come_decrement_ref_count2(right_value557, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        if(self!=((void*)0)) {
                                            result_364->mNoResultType=self->mNoResultType;
                                        }
                                        if(self!=((void*)0)) {
                                            result_364->mDeclaredResultObject=self->mDeclaredResultObject;
                                        }
                                        __result173__ = __result_obj__ = result_364;
                                        come_call_finalizer3(result_364,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result173__;
                                        come_call_finalizer3(result_364,sFun_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
struct sBlock* __result153__;
void* right_value534;
struct sBlock* result_365;
void* right_value535;
struct list$1sNodeph* __dec_obj92;
void* right_value550;
struct sVarTable* __dec_obj96;
struct sBlock* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
right_value534 = (void*)0;
memset(&result_365, 0, sizeof(struct sBlock*));
right_value535 = (void*)0;
right_value550 = (void*)0;
                                                if(self==(void*)0) {
                                                    __result153__ = __result_obj__ = (void*)0;
                                                    return __result153__;
                                                }
                                                result_365=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value534=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"))));
                                                come_call_finalizer3(right_value534,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
                                                if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
                                                    __dec_obj92=result_365->mNodes;
                                                    result_365->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value535=list$1sNodephp_clone(self->mNodes))));
                                                    come_call_finalizer3(__dec_obj92,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer3(right_value535,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                }
                                                if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
                                                    __dec_obj96=result_365->mVarTable;
                                                    result_365->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value550=sVarTable_clone(self->mVarTable))));
                                                    come_call_finalizer3(__dec_obj96,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer3(right_value550,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                                                }
                                                __result172__ = __result_obj__ = result_365;
                                                come_call_finalizer3(result_365,sBlock_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result172__;
                                                come_call_finalizer3(result_365,sBlock_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
struct sVarTable* __result154__;
void* right_value536;
struct sVarTable* result_366;
void* right_value549;
struct map$2charphsVarph* __dec_obj95;
struct sVarTable* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
right_value536 = (void*)0;
memset(&result_366, 0, sizeof(struct sVarTable*));
right_value549 = (void*)0;
                                                        if(self==(void*)0) {
                                                            __result154__ = __result_obj__ = (void*)0;
                                                            return __result154__;
                                                        }
                                                        result_366=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value536=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"))));
                                                        come_call_finalizer3(right_value536,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                                                        if(self!=((void*)0)&&self->mVars!=((void*)0)) {
                                                            __dec_obj95=result_366->mVars;
                                                            result_366->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value549=map$2charphsVarphp_clone(self->mVars))));
                                                            come_call_finalizer3(__dec_obj95,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer3(right_value549,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        }
                                                        if(self!=((void*)0)) {
                                                            result_366->mGlobal=self->mGlobal;
                                                        }
                                                        if(self!=((void*)0)) {
                                                            result_366->mParent=self->mParent;
                                                        }
                                                        if(self!=((void*)0)) {
                                                            result_366->mID=self->mID;
                                                        }
                                                        __result171__ = __result_obj__ = result_366;
                                                        come_call_finalizer3(result_366,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
                                                        return __result171__;
                                                        come_call_finalizer3(result_366,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
struct map$2charphsVarph* __result155__;
void* right_value537;
void* right_value543;
struct map$2charphsVarph* result_372;
void* right_value544;
void* right_value545;
struct list$1charp* __dec_obj94;
char* it_375;
struct sVar* default_value_378;
struct sVar* it2_381;
struct map$2charphsVarph* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
right_value537 = (void*)0;
right_value543 = (void*)0;
memset(&result_372, 0, sizeof(struct map$2charphsVarph*));
right_value544 = (void*)0;
right_value545 = (void*)0;
memset(&it_375, 0, sizeof(char*));
memset(&default_value_378, 0, sizeof(struct sVar*));
memset(&it2_381, 0, sizeof(struct sVar*));
                                                                if(self==((void*)0)) {
                                                                    __result155__ = __result_obj__ = ((void*)0);
                                                                    return __result155__;
                                                                }
                                                                result_372=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value543=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value537=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./neo-c.h", 1158, "map$2charphsVarph"))))))));
                                                                come_call_finalizer3(right_value537,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                come_call_finalizer3(right_value543,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                __dec_obj94=result_372->key_list;
                                                                result_372->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value545=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value544=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1160, "list$1charp"))))))));
                                                                come_call_finalizer3(__dec_obj94,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer3(right_value544,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                come_call_finalizer3(right_value545,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                for(                                                                it_375=map$2charphsVarph_begin(self);                                                                !map$2charphsVarph_end(self);                                                                it_375=map$2charphsVarph_next(self)                                                                ){
                                                                    memset(&default_value_378,0,sizeof(struct sVar*));
                                                                    it2_381=map$2charphsVarph_at(self,it_375,default_value_378);
                                                                    map$2charphsVarph_insert2(result_372,it_375,it2_381);
                                                                }
                                                                __result170__ = __result_obj__ = result_372;
                                                                come_call_finalizer3(result_372,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
                                                                return __result170__;
                                                                come_call_finalizer3(result_372,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
void* right_value538;
void* right_value539;
void* right_value540;
int i_367;
void* right_value541;
void* right_value542;
struct list$1charp* __dec_obj93;
struct map$2charphsVarph* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
right_value538 = (void*)0;
right_value539 = (void*)0;
right_value540 = (void*)0;
memset(&i_367, 0, sizeof(int));
right_value541 = (void*)0;
right_value542 = (void*)0;
                                                                    self->keys=(char**)come_increment_ref_count(((char**)(right_value538=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1064, "char*%"))));
                                                                    right_value538 = come_decrement_ref_count2(right_value538, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value539=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./neo-c.h", 1065, "sVar*%"))));
                                                                    come_call_finalizer3(right_value539,sVar_finalize, 0, 1, 0, 0, __result_obj__);
                                                                    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value540=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1066, "bool"))));
                                                                    right_value540 = come_decrement_ref_count2(right_value540, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    for(                                                                    i_367=0;                                                                    i_367<128;                                                                    i_367++                                                                    ){
                                                                        self->item_existance[i_367]=(_Bool)0;
                                                                    }
                                                                    self->size=128;
                                                                    self->len=0;
                                                                    __dec_obj93=self->key_list;
                                                                    self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value542=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value541=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1076, "list$1charp"))))))));
                                                                    come_call_finalizer3(__dec_obj93,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
                                                                    come_call_finalizer3(right_value541,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                    come_call_finalizer3(right_value542,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                    self->it=0;
                                                                    __result157__ = __result_obj__ = self;
                                                                    come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
                                                                    return __result157__;
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
struct list$1charp* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
                                                                        self->head=((void*)0);
                                                                        self->tail=((void*)0);
                                                                        self->len=0;
                                                                        __result156__ = __result_obj__ = self;
                                                                        come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
                                                                        return __result156__;
                                                                        come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_368;
struct list_item$1charp* prev_it_369;
memset(&it_368, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_369, 0, sizeof(struct list_item$1charp*));
                                                                            it_368=self->head;
                                                                            while(it_368!=((void*)0)) {
                                                                                prev_it_369=it_368;
                                                                                it_368=it_368->next;
                                                                                come_call_finalizer3(prev_it_369,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_370;
int i_371;
memset(&i_370, 0, sizeof(int));
memset(&i_371, 0, sizeof(int));
                                                                        for(                                                                        i_370=0;                                                                        i_370<self->size;                                                                        i_370++                                                                        ){
                                                                            if(self->item_existance[i_370]) {
                                                                                if(1) {
                                                                                    come_call_finalizer3(self->items[i_370],sVar_finalize, 0, 0, 0, 0, (void*)0);
                                                                                }
                                                                            }
                                                                        }
                                                                        come_free((char*)self->items);
                                                                        for(                                                                        i_371=0;                                                                        i_371<self->size;                                                                        i_371++                                                                        ){
                                                                            if(self->item_existance[i_371]) {
                                                                                if(1) {
                                                                                    self->keys[i_371] = come_decrement_ref_count2(self->keys[i_371], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                            }
                                                                        }
                                                                        come_free((char*)self->keys);
                                                                        come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
char* result_373;
char* __result158__;
char* __result159__;
char* result_374;
char* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_373, 0, sizeof(char*));
memset(&result_374, 0, sizeof(char*));
                                                                    if(self==((void*)0)) {
                                                                        memset(&result_373,0,sizeof(char*));
                                                                        __result158__ = __result_obj__ = result_373;
                                                                        return __result158__;
                                                                    }
                                                                    self->key_list->it=self->key_list->head;
                                                                    if(self->key_list->it) {
                                                                        __result159__ = __result_obj__ = self->key_list->it->item;
                                                                        return __result159__;
                                                                    }
                                                                    memset(&result_374,0,sizeof(char*));
                                                                    __result160__ = __result_obj__ = result_374;
                                                                    return __result160__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
_Bool __result161__;
                                                                    __result161__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                                                                    return __result161__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
char* result_376;
char* __result162__;
char* __result163__;
char* result_377;
char* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_376, 0, sizeof(char*));
memset(&result_377, 0, sizeof(char*));
                                                                    if(self==((void*)0)||self->key_list->it==((void*)0)) {
                                                                        memset(&result_376,0,sizeof(char*));
                                                                        __result162__ = __result_obj__ = result_376;
                                                                        return __result162__;
                                                                    }
                                                                    self->key_list->it=self->key_list->it->next;
                                                                    if(self->key_list->it) {
                                                                        __result163__ = __result_obj__ = self->key_list->it->item;
                                                                        return __result163__;
                                                                    }
                                                                    memset(&result_377,0,sizeof(char*));
                                                                    __result164__ = __result_obj__ = result_377;
                                                                    return __result164__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_379;
unsigned int it_380;
struct sVar* __result165__;
struct sVar* __result166__;
struct sVar* __result167__;
struct sVar* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_379, 0, sizeof(unsigned int));
memset(&it_380, 0, sizeof(unsigned int));
                                                                        hash_379=string_get_hash_key(((char*)key))%self->size;
                                                                        it_380=hash_379;
                                                                        while((_Bool)1) {
                                                                            if(self->item_existance[it_380]) {
                                                                                if(string_equals(self->keys[it_380],key)) {
                                                                                    __result165__ = __result_obj__ = self->items[it_380];
                                                                                    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                                                                    return __result165__;
                                                                                }
                                                                                it_380++;
                                                                                if(it_380>=self->size) {
                                                                                    it_380=0;
                                                                                }
                                                                                else {
                                                                                    if(it_380==hash_379) {
                                                                                        __result166__ = __result_obj__ = default_value;
                                                                                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                                                                        return __result166__;
                                                                                    }
                                                                                }
                                                                            }
                                                                            else {
                                                                                __result167__ = __result_obj__ = default_value;
                                                                                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                                                                return __result167__;
                                                                            }
                                                                        }
                                                                        __result168__ = __result_obj__ = default_value;
                                                                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                                                        return __result168__;
                                                                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
unsigned int hash_393;
int it_394;
_Bool same_key_exist_395;
char* it2_396;
struct map$2charphsVarph* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_393, 0, sizeof(unsigned int));
memset(&it_394, 0, sizeof(int));
memset(&same_key_exist_395, 0, sizeof(_Bool));
memset(&it2_396, 0, sizeof(char*));
                                                                        if(self->len*2>=self->size) {
                                                                            map$2charphsVarph_rehash(self);
                                                                        }
                                                                        hash_393=string_get_hash_key(key)%self->size;
                                                                        it_394=hash_393;
                                                                        while((_Bool)1) {
                                                                            if(self->item_existance[it_394]) {
                                                                                if(string_equals(self->keys[it_394],key)) {
                                                                                    if(1) {
                                                                                        self->keys[it_394] = come_decrement_ref_count2(self->keys[it_394], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        list$1charp_remove(self->key_list,self->keys[it_394]);
                                                                                        self->keys[it_394]=(char*)come_increment_ref_count(key);
                                                                                    }
                                                                                    else {
                                                                                        list$1charp_remove(self->key_list,self->keys[it_394]);
                                                                                        self->keys[it_394]=key;
                                                                                    }
                                                                                    if(1) {
                                                                                        come_call_finalizer3(self->items[it_394],sVar_finalize, 0, 0, 0, 0, (void*)0);
                                                                                        self->items[it_394]=(struct sVar*)come_increment_ref_count(item);
                                                                                    }
                                                                                    else {
                                                                                        self->items[it_394]=item;
                                                                                    }
                                                                                    break;
                                                                                }
                                                                                it_394++;
                                                                                if(it_394>=self->size) {
                                                                                    it_394=0;
                                                                                }
                                                                                else {
                                                                                    if(it_394==hash_393) {
                                                                                        printf("unexpected error in map.insert\n");
                                                                                        stackframe();
                                                                                        exit(2);
                                                                                    }
                                                                                }
                                                                            }
                                                                            else {
                                                                                self->item_existance[it_394]=(_Bool)1;
                                                                                if(1) {
                                                                                    self->keys[it_394]=(char*)come_increment_ref_count(key);
                                                                                }
                                                                                else {
                                                                                    self->keys[it_394]=key;
                                                                                }
                                                                                if(1) {
                                                                                    self->items[it_394]=(struct sVar*)come_increment_ref_count(item);
                                                                                }
                                                                                else {
                                                                                    self->items[it_394]=item;
                                                                                }
                                                                                self->len++;
                                                                                break;
                                                                            }
                                                                        }
                                                                        same_key_exist_395=(_Bool)0;
                                                                        for(                                                                        it2_396=list$1charp_begin(self->key_list);                                                                        !list$1charp_end(self->key_list);                                                                        it2_396=list$1charp_next(self->key_list)                                                                        ){
                                                                            if(string_equals(it2_396,key)) {
                                                                                same_key_exist_395=(_Bool)1;
                                                                            }
                                                                        }
                                                                        if(!same_key_exist_395) {
                                                                            list$1charp_push_back(self->key_list,key);
                                                                        }
                                                                        __result169__ = __result_obj__ = self;
                                                                        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                                        come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                                                        return __result169__;
                                                                        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                                        come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_382;
void* right_value546;
char** keys_383;
void* right_value547;
struct sVar** items_384;
void* right_value548;
_Bool* item_existance_385;
int len_386;
char* it_387;
struct sVar* default_value_388;
struct sVar* it2_389;
unsigned int hash_390;
int n_391;
struct sVar* default_value_392;
memset(&size_382, 0, sizeof(int));
right_value546 = (void*)0;
memset(&keys_383, 0, sizeof(char**));
right_value547 = (void*)0;
memset(&items_384, 0, sizeof(struct sVar**));
right_value548 = (void*)0;
memset(&item_existance_385, 0, sizeof(_Bool*));
memset(&len_386, 0, sizeof(int));
memset(&it_387, 0, sizeof(char*));
memset(&default_value_388, 0, sizeof(struct sVar*));
memset(&it2_389, 0, sizeof(struct sVar*));
memset(&hash_390, 0, sizeof(unsigned int));
memset(&n_391, 0, sizeof(int));
memset(&default_value_392, 0, sizeof(struct sVar*));
                                                                                size_382=self->size*10;
                                                                                keys_383=(char**)come_increment_ref_count(((char**)(right_value546=(char**)come_calloc(1, sizeof(char*)*(1*(size_382)), "./neo-c.h", 1315, "char*%"))));
                                                                                right_value546 = come_decrement_ref_count2(right_value546, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                                items_384=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value547=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_382)), "./neo-c.h", 1316, "sVar*%"))));
                                                                                come_call_finalizer3(right_value547,sVar_finalize, 0, 1, 0, 0, (void*)0);
                                                                                item_existance_385=(_Bool*)come_increment_ref_count(((_Bool*)(right_value548=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_382)), "./neo-c.h", 1317, "bool"))));
                                                                                right_value548 = come_decrement_ref_count2(right_value548, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                                len_386=0;
                                                                                for(                                                                                it_387=map$2charphsVarph_begin(self);                                                                                !map$2charphsVarph_end(self);                                                                                it_387=map$2charphsVarph_next(self)                                                                                ){
                                                                                    memset(&default_value_388,0,sizeof(struct sVar*));
                                                                                    it2_389=map$2charphsVarph_at(self,it_387,default_value_388);
                                                                                    hash_390=string_get_hash_key(it_387)%size_382;
                                                                                    n_391=hash_390;
                                                                                    while((_Bool)1) {
                                                                                        if(item_existance_385[n_391]) {
                                                                                            n_391++;
                                                                                            if(n_391>=size_382) {
                                                                                                n_391=0;
                                                                                            }
                                                                                            else {
                                                                                                if(n_391==hash_390) {
                                                                                                    printf("unexpected error in map.rehash(1)\n");
                                                                                                    stackframe();
                                                                                                    exit(2);
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                        else {
                                                                                            item_existance_385[n_391]=(_Bool)1;
                                                                                            keys_383[n_391]=it_387;
                                                                                            items_384[n_391]=map$2charphsVarph_at(self,it_387,default_value_392);
                                                                                            len_386++;
                                                                                            break;
                                                                                        }
                                                                                    }
                                                                                }
                                                                                come_free((char*)self->items);
                                                                                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                come_free((char*)self->keys);
                                                                                self->keys=keys_383;
                                                                                self->items=items_384;
                                                                                self->item_existance=item_existance_385;
                                                                                self->size=size_382;
                                                                                self->len=len_386;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_397;
int i_398;
memset(&i_397, 0, sizeof(int));
memset(&i_398, 0, sizeof(int));
                                                                for(                                                                i_397=0;                                                                i_397<self->size;                                                                i_397++                                                                ){
                                                                    if(self->item_existance[i_397]) {
                                                                        if(1) {
                                                                            come_call_finalizer3(self->items[i_397],sVar_finalize, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                    }
                                                                }
                                                                come_free((char*)self->items);
                                                                for(                                                                i_398=0;                                                                i_398<self->size;                                                                i_398++                                                                ){
                                                                    if(self->item_existance[i_398]) {
                                                                        if(1) {
                                                                            self->keys[i_398] = come_decrement_ref_count2(self->keys[i_398], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                    }
                                                                }
                                                                come_free((char*)self->keys);
                                                                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool is_type_name(char* buf, struct sInfo* info){
struct sClass* klass_403;
struct sType* type_409;
struct sClass* generics_class_413;
void* right_value566;
_Bool generics_type_name_414;
void* right_value567;
_Bool mgenerics_type_name_416;
_Bool __result189__;
memset(&klass_403, 0, sizeof(struct sClass*));
memset(&type_409, 0, sizeof(struct sType*));
memset(&generics_class_413, 0, sizeof(struct sClass*));
right_value566 = (void*)0;
memset(&generics_type_name_414, 0, sizeof(_Bool));
right_value567 = (void*)0;
memset(&mgenerics_type_name_416, 0, sizeof(_Bool));
    klass_403=map$2charphsClassphp_operator_load_element(info->classes,buf);
    type_409=map$2charphsTypephp_operator_load_element(info->types,buf);
    generics_class_413=map$2charphsClassphp_operator_load_element(info->generics_classes,buf);
    generics_type_name_414=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(((char*)(right_value566=__builtin_string(buf)))));
    right_value566 = come_decrement_ref_count2(right_value566, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    mgenerics_type_name_416=list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value567=__builtin_string(buf)))));
    right_value567 = come_decrement_ref_count2(right_value567, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __result189__ = generics_class_413||generics_type_name_414||mgenerics_type_name_416||klass_403||type_409||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"uniq")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"record")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"immutable")||charp_operator_equals(buf,"mutable")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__typeof__");
    return __result189__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_404;
unsigned int hash_405;
unsigned int it_406;
struct sClass* __result179__;
struct sClass* __result180__;
struct sClass* __result181__;
struct sClass* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_404, 0, sizeof(struct sClass*));
memset(&hash_405, 0, sizeof(unsigned int));
memset(&it_406, 0, sizeof(unsigned int));
        memset(&default_value_404,0,sizeof(struct sClass*));
        hash_405=string_get_hash_key(((char*)key))%self->size;
        it_406=hash_405;
        while((_Bool)1) {
            if(self->item_existance[it_406]) {
                if(string_equals(self->keys[it_406],key)) {
                    __result179__ = __result_obj__ = self->items[it_406];
                    come_call_finalizer3(default_value_404,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    return __result179__;
                }
                it_406++;
                if(it_406>=self->size) {
                    it_406=0;
                }
                else {
                    if(it_406==hash_405) {
                        __result180__ = __result_obj__ = default_value_404;
                        come_call_finalizer3(default_value_404,sClass_finalize, 0, 0, 1, 0, (void*)0);
                        return __result180__;
                    }
                }
            }
            else {
                __result181__ = __result_obj__ = default_value_404;
                come_call_finalizer3(default_value_404,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result181__;
            }
        }
        __result182__ = __result_obj__ = default_value_404;
        come_call_finalizer3(default_value_404,sClass_finalize, 0, 0, 1, 0, (void*)0);
        return __result182__;
        come_call_finalizer3(default_value_404,sClass_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1tuple2$2charphsTypephph* it_407;
struct list_item$1tuple2$2charphsTypephph* prev_it_408;
memset(&it_407, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_408, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                it_407=self->head;
                                while(it_407!=((void*)0)) {
                                    prev_it_408=it_407;
                                    it_407=it_407->next;
                                    come_call_finalizer3(prev_it_408,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct sType* default_value_410;
unsigned int hash_411;
unsigned int it_412;
struct sType* __result183__;
struct sType* __result184__;
struct sType* __result185__;
struct sType* __result186__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_410, 0, sizeof(struct sType*));
memset(&hash_411, 0, sizeof(unsigned int));
memset(&it_412, 0, sizeof(unsigned int));
        memset(&default_value_410,0,sizeof(struct sType*));
        hash_411=string_get_hash_key(((char*)key))%self->size;
        it_412=hash_411;
        while((_Bool)1) {
            if(self->item_existance[it_412]) {
                if(string_equals(self->keys[it_412],key)) {
                    __result183__ = __result_obj__ = self->items[it_412];
                    come_call_finalizer3(default_value_410,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result183__;
                }
                it_412++;
                if(it_412>=self->size) {
                    it_412=0;
                }
                else {
                    if(it_412==hash_411) {
                        __result184__ = __result_obj__ = default_value_410;
                        come_call_finalizer3(default_value_410,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result184__;
                    }
                }
            }
            else {
                __result185__ = __result_obj__ = default_value_410;
                come_call_finalizer3(default_value_410,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result185__;
            }
        }
        __result186__ = __result_obj__ = default_value_410;
        come_call_finalizer3(default_value_410,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result186__;
        come_call_finalizer3(default_value_410,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
char* it_415;
_Bool __result187__;
_Bool __result188__;
memset(&it_415, 0, sizeof(char*));
        for(        it_415=list$1charph_begin(self);        !list$1charph_end(self);        it_415=list$1charph_next(self)        ){
            if(string_operator_equals(it_415,item)) {
                __result187__ = (_Bool)1;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result187__;
            }
        }
        __result188__ = (_Bool)0;
        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result188__;
        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun_417;
int caller_line_418;
char* caller_sname_419;
char* last_code_420;
char* __dec_obj105;
char* last_code2_421;
char* __dec_obj106;
char* last_code3_422;
char* __dec_obj107;
void* right_value568;
char* sname_top_423;
int sline_top_424;
struct sFun* funX_425;
_Bool __result190__;
void* right_value569;
struct sType* result_type_426;
void* right_value570;
void* right_value571;
struct list$1sTypeph* param_types_427;
struct list$1sTypeph* o2_saved_428;
struct sType* it_431;
void* right_value572;
void* right_value573;
struct sType* param_type_434;
void* right_value574;
void* right_value575;
struct list$1charph* param_names_435;
void* right_value576;
struct list$1charph* param_default_parametors_436;
char* p_437;
int sline_438;
char* sname_439;
char* head_440;
struct buffer* source_441;
void* right_value577;
struct buffer* __dec_obj108;
struct sType* generics_type_saved_442;
void* right_value578;
struct sType* __dec_obj109;
struct list$1charph* method_generics_type_names_443;
void* right_value579;
void* right_value580;
struct list$1charph* __dec_obj110;
struct list$1charph* o2_saved_444;
char* it_445;
void* right_value581;
void* right_value582;
struct list$1charph* __dec_obj111;
char* __dec_obj112;
void* right_value583;
struct sBlock* block_446;
struct buffer* __dec_obj113;
char* __dec_obj114;
_Bool var_args_447;
void* right_value584;
void* right_value585;
void* right_value586;
void* right_value587;
void* right_value588;
struct sFun* fun_448;
void* right_value589;
void* right_value590;
void* right_value591;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* right_value595;
struct sNode* node_449;
_Bool __result200__;
struct sType* __dec_obj117;
struct list$1charph* __dec_obj118;
struct list$1charph* __dec_obj119;
void* right_value596;
char* __dec_obj120;
char* __dec_obj121;
char* __dec_obj122;
char* __dec_obj123;
_Bool __result201__;
memset(&caller_fun_417, 0, sizeof(struct sFun*));
memset(&caller_line_418, 0, sizeof(int));
memset(&caller_sname_419, 0, sizeof(char*));
memset(&last_code_420, 0, sizeof(char*));
memset(&last_code2_421, 0, sizeof(char*));
memset(&last_code3_422, 0, sizeof(char*));
right_value568 = (void*)0;
memset(&sname_top_423, 0, sizeof(char*));
memset(&sline_top_424, 0, sizeof(int));
memset(&funX_425, 0, sizeof(struct sFun*));
right_value569 = (void*)0;
memset(&result_type_426, 0, sizeof(struct sType*));
right_value570 = (void*)0;
right_value571 = (void*)0;
memset(&param_types_427, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_428, 0, sizeof(struct list$1sTypeph*));
memset(&it_431, 0, sizeof(struct sType*));
right_value572 = (void*)0;
right_value573 = (void*)0;
memset(&param_type_434, 0, sizeof(struct sType*));
right_value574 = (void*)0;
right_value575 = (void*)0;
memset(&param_names_435, 0, sizeof(struct list$1charph*));
right_value576 = (void*)0;
memset(&param_default_parametors_436, 0, sizeof(struct list$1charph*));
memset(&p_437, 0, sizeof(char*));
memset(&sline_438, 0, sizeof(int));
memset(&sname_439, 0, sizeof(char*));
memset(&head_440, 0, sizeof(char*));
memset(&source_441, 0, sizeof(struct buffer*));
right_value577 = (void*)0;
memset(&generics_type_saved_442, 0, sizeof(struct sType*));
right_value578 = (void*)0;
memset(&method_generics_type_names_443, 0, sizeof(struct list$1charph*));
right_value579 = (void*)0;
right_value580 = (void*)0;
memset(&o2_saved_444, 0, sizeof(struct list$1charph*));
memset(&it_445, 0, sizeof(char*));
right_value581 = (void*)0;
right_value582 = (void*)0;
right_value583 = (void*)0;
memset(&block_446, 0, sizeof(struct sBlock*));
memset(&var_args_447, 0, sizeof(_Bool));
right_value584 = (void*)0;
right_value585 = (void*)0;
right_value586 = (void*)0;
right_value587 = (void*)0;
right_value588 = (void*)0;
memset(&fun_448, 0, sizeof(struct sFun*));
right_value589 = (void*)0;
right_value590 = (void*)0;
right_value591 = (void*)0;
right_value595 = (void*)0;
memset(&node_449, 0, sizeof(struct sNode*));
right_value596 = (void*)0;
    caller_fun_417=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_418=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_419=info->caller_sname;
    info->caller_sname=info->sname;
    last_code_420=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj105=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_421=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj106=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_422=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj107=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_423=(char*)come_increment_ref_count(((char*)(right_value568=__builtin_string(info->sname))));
    right_value568 = come_decrement_ref_count2(right_value568, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    sline_top_424=info->sline;
    if(generics_type->mNoSolvedGenericsType->v1) {
        generics_type=generics_type->mNoSolvedGenericsType->v1;
    }
    funX_425=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(funX_425) {
        __result190__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_420 = come_decrement_ref_count2(last_code_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_421 = come_decrement_ref_count2(last_code2_421, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_422 = come_decrement_ref_count2(last_code3_422, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_423 = come_decrement_ref_count2(sname_top_423, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result190__;
    }
    result_type_426=(struct sType*)come_increment_ref_count(((struct sType*)(right_value569=solve_generics(generics_fun->mResultType,generics_type,info))));
    come_call_finalizer3(right_value569,sType_finalize, 0, 1, 0, 0, (void*)0);
    param_types_427=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value571=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value570=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1413, "list$1sTypeph"))))))));
    come_call_finalizer3(right_value570,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value571,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
    for(    o2_saved_428=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_431=list$1sTypeph_begin((o2_saved_428));    !list$1sTypeph_end((o2_saved_428));    it_431=list$1sTypeph_next((o2_saved_428))    ){
        param_type_434=(struct sType*)come_increment_ref_count(((struct sType*)(right_value573=solve_generics(((struct sType*)(right_value572=sType_clone(it_431))),generics_type,info))));
        come_call_finalizer3(right_value572,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value573,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_434->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_427,(struct sType*)come_increment_ref_count(((struct sType*)(right_value574=sType_clone(param_type_434)))));
        come_call_finalizer3(right_value574,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(param_type_434,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_428,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_435=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value575=list$1charphp_clone(generics_fun->mParamNames))));
    come_call_finalizer3(right_value575,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
    param_default_parametors_436=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value576=list$1charphp_clone(generics_fun->mParamDefaultParametors))));
    come_call_finalizer3(right_value576,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
    p_437=info->p;
    sline_438=info->sline;
    sname_439=(char*)come_increment_ref_count(info->sname);
    head_440=info->head;
    source_441=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj108=info->source;
    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value577=string_to_buffer(generics_fun->mBlock))));
    come_call_finalizer3(__dec_obj108,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value577,buffer_finalize, 0, 1, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_442=(struct sType*)come_increment_ref_count(info->generics_type);
    __dec_obj109=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value578=sType_clone(generics_type))));
    come_call_finalizer3(__dec_obj109,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value578,sType_finalize, 0, 1, 0, 0, (void*)0);
    method_generics_type_names_443=info->method_generics_type_names;
    __dec_obj110=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value580=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value579=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1440, "list$1charph"))))))));
    come_call_finalizer3(__dec_obj110,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value579,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value580,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
    for(    o2_saved_444=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_445=list$1charph_begin((o2_saved_444));    !list$1charph_end((o2_saved_444));    it_445=list$1charph_next((o2_saved_444))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value581=string_clone(it_445)))));
        right_value581 = come_decrement_ref_count2(right_value581, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_444,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj111=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value582=list$1charphp_clone(generics_fun->mGenericsTypeNames))));
    come_call_finalizer3(__dec_obj111,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value582,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj112=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_446=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value583=parse_block(info,(_Bool)0,(_Bool)0))));
    come_call_finalizer3(right_value583,sBlock_finalize, 0, 1, 0, 0, (void*)0);
    info->head=head_440;
    __dec_obj113=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_441);
    come_call_finalizer3(__dec_obj113,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_437;
    info->sline=sline_438;
    __dec_obj114=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_439);
    __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_426->mInline=(_Bool)0;
    var_args_447=generics_fun->mVarArgs;
    fun_448=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value588=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value584=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1462, "sFun")))),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_426),(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value585=list$1sTypephp_clone(param_types_427)))),(struct list$1charph*)come_increment_ref_count(param_names_435),(struct list$1charph*)come_increment_ref_count(param_default_parametors_436),(_Bool)0,var_args_447,(struct sBlock*)come_increment_ref_count(block_446),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value586=__builtin_string("")))),(char*)come_increment_ref_count(((char*)(right_value587=__builtin_string("")))),info))));
    come_call_finalizer3(right_value584,sFun_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value585,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
    right_value586 = come_decrement_ref_count2(right_value586, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    right_value587 = come_decrement_ref_count2(right_value587, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value588,sFun_finalize, 0, 1, 0, 0, (void*)0);
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value589=string_clone(fun_name)))),(struct sFun*)come_increment_ref_count(fun_448));
    right_value589 = come_decrement_ref_count2(right_value589, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1469, "struct sNode");
    _inf_obj_value3=come_increment_ref_count(((struct sFunNode*)(right_value591=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value590=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1469, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_448),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_449=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value595=_inf_value3)));
    come_call_finalizer3(right_value590,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value591,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    if(right_value595) { right_value595 = come_decrement_ref_count2(right_value595, ((struct sNode*)right_value595)->finalize, ((struct sNode*)right_value595)->_protocol_obj, 1, 0, 0, (void*)0); } 
    if(!node_compile(node_449,info)) {
        __result200__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_420 = come_decrement_ref_count2(last_code_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_421 = come_decrement_ref_count2(last_code2_421, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_422 = come_decrement_ref_count2(last_code3_422, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_423 = come_decrement_ref_count2(sname_top_423, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_426,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_427,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_435,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_436,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_439 = come_decrement_ref_count2(sname_439, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_441,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(generics_type_saved_442,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_446,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_448,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_449) { node_449 = come_decrement_ref_count2(node_449, ((struct sNode*)node_449)->finalize, ((struct sNode*)node_449)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result200__;
    }
    __dec_obj117=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_442);
    come_call_finalizer3(__dec_obj117,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(info->method_generics_type_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj118=method_generics_type_names_443;
    __dec_obj119=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_443);
    come_call_finalizer3(__dec_obj119,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj120=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value596=__builtin_string(sname_top_423))));
    __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value596 = come_decrement_ref_count2(right_value596, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    info->sline=sline_top_424;
    __dec_obj121=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_420);
    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj122=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_421);
    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj123=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_422);
    __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_417;
    info->caller_line=caller_line_418;
    info->caller_sname=caller_sname_419;
    __result201__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_420 = come_decrement_ref_count2(last_code_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_421 = come_decrement_ref_count2(last_code2_421, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_422 = come_decrement_ref_count2(last_code3_422, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_423 = come_decrement_ref_count2(sname_top_423, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_426,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_427,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_435,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_436,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_439 = come_decrement_ref_count2(sname_439, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_441,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(generics_type_saved_442,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_446,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_448,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_449) { node_449 = come_decrement_ref_count2(node_449, ((struct sNode*)node_449)->finalize, ((struct sNode*)node_449)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result201__;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_420 = come_decrement_ref_count2(last_code_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_421 = come_decrement_ref_count2(last_code2_421, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_422 = come_decrement_ref_count2(last_code3_422, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_423 = come_decrement_ref_count2(sname_top_423, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_426,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_427,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_435,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_436,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_439 = come_decrement_ref_count2(sname_439, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_441,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(generics_type_saved_442,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_446,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_448,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_449) { node_449 = come_decrement_ref_count2(node_449, ((struct sNode*)node_449)->finalize, ((struct sNode*)node_449)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
struct sType* result_429;
struct sType* __result191__;
struct sType* __result192__;
struct sType* result_430;
struct sType* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_429, 0, sizeof(struct sType*));
memset(&result_430, 0, sizeof(struct sType*));
        if(self==((void*)0)) {
            memset(&result_429,0,sizeof(struct sType*));
            __result191__ = __result_obj__ = result_429;
            return __result191__;
        }
        self->it=self->head;
        if(self->it) {
            __result192__ = __result_obj__ = self->it->item;
            return __result192__;
        }
        memset(&result_430,0,sizeof(struct sType*));
        __result193__ = __result_obj__ = result_430;
        return __result193__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
_Bool __result194__;
        __result194__ = self==((void*)0)||self->it==((void*)0);
        return __result194__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
struct sType* result_432;
struct sType* __result195__;
struct sType* __result196__;
struct sType* result_433;
struct sType* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_432, 0, sizeof(struct sType*));
memset(&result_433, 0, sizeof(struct sType*));
        if(self==((void*)0)||self->it==((void*)0)) {
            memset(&result_432,0,sizeof(struct sType*));
            __result195__ = __result_obj__ = result_432;
            return __result195__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result196__ = __result_obj__ = self->it->item;
            return __result196__;
        }
        memset(&result_433,0,sizeof(struct sType*));
        __result197__ = __result_obj__ = result_433;
        return __result197__;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_451;
int caller_line_452;
char* caller_sname_453;
char* last_code_454;
char* __dec_obj124;
char* last_code2_455;
char* __dec_obj125;
char* last_code3_456;
char* __dec_obj126;
void* right_value597;
char* sname_top_457;
int sline_top_458;
struct sFun* funX_459;
_Bool __result202__;
void* right_value598;
struct sType* result_type_460;
void* right_value599;
void* right_value600;
struct list$1sTypeph* param_types_461;
struct list$1sTypeph* o2_saved_462;
struct sType* it_463;
void* right_value601;
void* right_value602;
struct sType* param_type_464;
void* right_value603;
void* right_value604;
struct list$1charph* param_names_465;
void* right_value605;
struct list$1charph* param_default_parametors_466;
char* p_467;
int sline_468;
char* sname_469;
char* head_470;
struct buffer* source_471;
void* right_value606;
struct buffer* __dec_obj127;
struct list$1charph* method_generics_type_names_472;
void* right_value607;
void* right_value608;
struct list$1charph* __dec_obj128;
struct list$1charph* o2_saved_473;
char* it_474;
void* right_value609;
void* right_value610;
struct list$1charph* __dec_obj129;
char* __dec_obj130;
void* right_value611;
struct sBlock* block_475;
struct buffer* __dec_obj131;
char* __dec_obj132;
_Bool var_args_476;
void* right_value612;
void* right_value613;
void* right_value614;
void* right_value615;
void* right_value616;
struct sFun* fun_477;
void* right_value617;
void* right_value618;
void* right_value619;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* right_value623;
struct sNode* node_478;
_Bool __result205__;
struct list$1charph* __dec_obj135;
struct list$1charph* __dec_obj136;
void* right_value624;
char* __dec_obj137;
char* __dec_obj138;
char* __dec_obj139;
char* __dec_obj140;
_Bool __result206__;
memset(&caller_fun_451, 0, sizeof(struct sFun*));
memset(&caller_line_452, 0, sizeof(int));
memset(&caller_sname_453, 0, sizeof(char*));
memset(&last_code_454, 0, sizeof(char*));
memset(&last_code2_455, 0, sizeof(char*));
memset(&last_code3_456, 0, sizeof(char*));
right_value597 = (void*)0;
memset(&sname_top_457, 0, sizeof(char*));
memset(&sline_top_458, 0, sizeof(int));
memset(&funX_459, 0, sizeof(struct sFun*));
right_value598 = (void*)0;
memset(&result_type_460, 0, sizeof(struct sType*));
right_value599 = (void*)0;
right_value600 = (void*)0;
memset(&param_types_461, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_462, 0, sizeof(struct list$1sTypeph*));
memset(&it_463, 0, sizeof(struct sType*));
right_value601 = (void*)0;
right_value602 = (void*)0;
memset(&param_type_464, 0, sizeof(struct sType*));
right_value603 = (void*)0;
right_value604 = (void*)0;
memset(&param_names_465, 0, sizeof(struct list$1charph*));
right_value605 = (void*)0;
memset(&param_default_parametors_466, 0, sizeof(struct list$1charph*));
memset(&p_467, 0, sizeof(char*));
memset(&sline_468, 0, sizeof(int));
memset(&sname_469, 0, sizeof(char*));
memset(&head_470, 0, sizeof(char*));
memset(&source_471, 0, sizeof(struct buffer*));
right_value606 = (void*)0;
memset(&method_generics_type_names_472, 0, sizeof(struct list$1charph*));
right_value607 = (void*)0;
right_value608 = (void*)0;
memset(&o2_saved_473, 0, sizeof(struct list$1charph*));
memset(&it_474, 0, sizeof(char*));
right_value609 = (void*)0;
right_value610 = (void*)0;
right_value611 = (void*)0;
memset(&block_475, 0, sizeof(struct sBlock*));
memset(&var_args_476, 0, sizeof(_Bool));
right_value612 = (void*)0;
right_value613 = (void*)0;
right_value614 = (void*)0;
right_value615 = (void*)0;
right_value616 = (void*)0;
memset(&fun_477, 0, sizeof(struct sFun*));
right_value617 = (void*)0;
right_value618 = (void*)0;
right_value619 = (void*)0;
right_value623 = (void*)0;
memset(&node_478, 0, sizeof(struct sNode*));
right_value624 = (void*)0;
    caller_fun_451=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_452=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_453=info->caller_sname;
    info->caller_sname=info->sname;
    last_code_454=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj124=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_455=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj125=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_456=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj126=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_457=(char*)come_increment_ref_count(((char*)(right_value597=__builtin_string(info->sname))));
    right_value597 = come_decrement_ref_count2(right_value597, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    sline_top_458=info->sline;
    funX_459=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(funX_459) {
        __result202__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_454 = come_decrement_ref_count2(last_code_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_455 = come_decrement_ref_count2(last_code2_455, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_456 = come_decrement_ref_count2(last_code3_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_457 = come_decrement_ref_count2(sname_top_457, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result202__;
    }
    result_type_460=(struct sType*)come_increment_ref_count(((struct sType*)(right_value598=solve_method_generics(generics_fun->mResultType,info))));
    come_call_finalizer3(right_value598,sType_finalize, 0, 1, 0, 0, (void*)0);
    param_types_461=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value600=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value599=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1521, "list$1sTypeph"))))))));
    come_call_finalizer3(right_value599,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value600,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
    for(    o2_saved_462=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_463=list$1sTypeph_begin((o2_saved_462));    !list$1sTypeph_end((o2_saved_462));    it_463=list$1sTypeph_next((o2_saved_462))    ){
        param_type_464=(struct sType*)come_increment_ref_count(((struct sType*)(right_value602=solve_method_generics(((struct sType*)(right_value601=sType_clone(it_463))),info))));
        come_call_finalizer3(right_value601,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value602,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_464->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_461,(struct sType*)come_increment_ref_count(((struct sType*)(right_value603=sType_clone(param_type_464)))));
        come_call_finalizer3(right_value603,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(param_type_464,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_462,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_465=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value604=list$1charphp_clone(generics_fun->mParamNames))));
    come_call_finalizer3(right_value604,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
    param_default_parametors_466=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value605=list$1charphp_clone(generics_fun->mParamDefaultParametors))));
    come_call_finalizer3(right_value605,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
    p_467=info->p;
    sline_468=info->sline;
    sname_469=(char*)come_increment_ref_count(info->sname);
    head_470=info->head;
    source_471=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj127=info->source;
    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value606=string_to_buffer(generics_fun->mBlock))));
    come_call_finalizer3(__dec_obj127,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value606,buffer_finalize, 0, 1, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_472=info->method_generics_type_names;
    __dec_obj128=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value608=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value607=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1545, "list$1charph"))))))));
    come_call_finalizer3(__dec_obj128,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value607,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value608,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
    for(    o2_saved_473=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_474=list$1charph_begin((o2_saved_473));    !list$1charph_end((o2_saved_473));    it_474=list$1charph_next((o2_saved_473))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value609=string_clone(it_474)))));
        right_value609 = come_decrement_ref_count2(right_value609, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_473,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj129=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value610=list$1charphp_clone(generics_fun->mGenericsTypeNames))));
    come_call_finalizer3(__dec_obj129,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value610,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj130=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_475=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value611=parse_block(info,(_Bool)0,(_Bool)0))));
    come_call_finalizer3(right_value611,sBlock_finalize, 0, 1, 0, 0, (void*)0);
    info->head=head_470;
    __dec_obj131=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_471);
    come_call_finalizer3(__dec_obj131,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_467;
    info->sline=sline_468;
    __dec_obj132=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_469);
    __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_460->mInline=(_Bool)0;
    var_args_476=generics_fun->mVarArgs;
    fun_477=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value616=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value612=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1567, "sFun")))),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_460),(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value613=list$1sTypephp_clone(param_types_461)))),(struct list$1charph*)come_increment_ref_count(param_names_465),(struct list$1charph*)come_increment_ref_count(param_default_parametors_466),(_Bool)0,var_args_476,(struct sBlock*)come_increment_ref_count(block_475),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value614=__builtin_string("")))),(char*)come_increment_ref_count(((char*)(right_value615=__builtin_string("")))),info))));
    come_call_finalizer3(right_value612,sFun_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value613,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
    right_value614 = come_decrement_ref_count2(right_value614, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    right_value615 = come_decrement_ref_count2(right_value615, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value616,sFun_finalize, 0, 1, 0, 0, (void*)0);
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value617=string_clone(fun_name)))),(struct sFun*)come_increment_ref_count(fun_477));
    right_value617 = come_decrement_ref_count2(right_value617, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1574, "struct sNode");
    _inf_obj_value4=come_increment_ref_count(((struct sFunNode*)(right_value619=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value618=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1574, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_477),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_478=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value623=_inf_value4)));
    come_call_finalizer3(right_value618,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value619,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    if(right_value623) { right_value623 = come_decrement_ref_count2(right_value623, ((struct sNode*)right_value623)->finalize, ((struct sNode*)right_value623)->_protocol_obj, 1, 0, 0, (void*)0); } 
    if(!node_compile(node_478,info)) {
        __result205__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_454 = come_decrement_ref_count2(last_code_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_455 = come_decrement_ref_count2(last_code2_455, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_456 = come_decrement_ref_count2(last_code3_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_457 = come_decrement_ref_count2(sname_top_457, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_460,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_461,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_465,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_466,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_469 = come_decrement_ref_count2(sname_469, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_471,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_475,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_477,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_478) { node_478 = come_decrement_ref_count2(node_478, ((struct sNode*)node_478)->finalize, ((struct sNode*)node_478)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result205__;
    }
    come_call_finalizer3(info->method_generics_type_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj135=method_generics_type_names_472;
    __dec_obj136=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_472);
    come_call_finalizer3(__dec_obj136,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj137=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value624=__builtin_string(sname_top_457))));
    __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value624 = come_decrement_ref_count2(right_value624, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    info->sline=sline_top_458;
    __dec_obj138=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_454);
    __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj139=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_455);
    __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj140=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_456);
    __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_451;
    info->caller_line=caller_line_452;
    info->caller_sname=caller_sname_453;
    __result206__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_454 = come_decrement_ref_count2(last_code_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_455 = come_decrement_ref_count2(last_code2_455, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_456 = come_decrement_ref_count2(last_code3_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_457 = come_decrement_ref_count2(sname_top_457, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_460,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_461,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_465,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_466,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_469 = come_decrement_ref_count2(sname_469, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_471,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_475,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_477,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_478) { node_478 = come_decrement_ref_count2(node_478, ((struct sNode*)node_478)->finalize, ((struct sNode*)node_478)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result206__;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_454 = come_decrement_ref_count2(last_code_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_455 = come_decrement_ref_count2(last_code2_455, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_456 = come_decrement_ref_count2(last_code3_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_457 = come_decrement_ref_count2(sname_top_457, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_460,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_461,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_465,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_466,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_469 = come_decrement_ref_count2(sname_469, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_471,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_475,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_477,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_478) { node_478 = come_decrement_ref_count2(node_478, ((struct sNode*)node_478)->finalize, ((struct sNode*)node_478)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__;
char* header_head_480;
char* source_head_481;
struct sType* __dec_obj141;
struct sType* result_type_482;
char* __dec_obj142;
char* var_name_483;
_Bool constructor__484;
void* right_value625;
void* right_value626;
struct sType* __dec_obj143;
void* right_value627;
struct tuple3$3sTypephcharphbool* multiple_assign_var7;
struct sType* result_type2_485;
char* var_name2_486;
_Bool err_487;
struct sType* __dec_obj144;
char* __dec_obj145;
_Bool method_definition_488;
char* p_489;
int sline_490;
void* right_value628;
void* right_value629;
struct buffer* buf2_491;
char* fun_name_492;
char* base_fun_name_493;
void* right_value630;
void* right_value631;
char* __dec_obj146;
void* right_value632;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* obj_type_494;
char* name_495;
_Bool err_496;
void* right_value633;
void* right_value634;
char* __dec_obj147;
void* right_value635;
void* right_value636;
char* __dec_obj148;
void* right_value637;
char* __dec_obj149;
void* right_value638;
void* right_value639;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var9;
struct list$1sTypeph* param_types_497;
struct list$1charph* param_names_498;
struct list$1charph* param_default_parametors_499;
_Bool var_args_500;
char* header_tail_501;
void* right_value640;
void* right_value641;
struct buffer* header_buf_502;
int version_503;
int n_504;
void* right_value642;
struct sBlock* block_505;
void* right_value643;
char* fun_name_507;
void* right_value644;
void* right_value645;
void* right_value646;
void* right_value647;
void* right_value648;
struct sFun* fun_508;
void* right_value649;
struct sFun* fun2_509;
void* right_value650;
void* right_value651;
void* right_value652;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* right_value655;
struct sNode* __result209__;
void* right_value656;
char* none_generics_name_511;
void* right_value657;
char* generics_sname_512;
int generics_sline_513;
void* right_value658;
char* block_514;
void* right_value659;
void* right_value660;
void* right_value661;
void* right_value662;
void* right_value663;
void* right_value664;
struct sGenericsFun* fun_515;
void* right_value665;
char* fun_name3_516;
void* right_value669;
struct sNode* __result224__;
void* right_value670;
char* generics_sname_538;
int generics_sline_539;
void* right_value671;
char* block_540;
void* right_value672;
void* right_value673;
void* right_value674;
void* right_value675;
void* right_value676;
void* right_value677;
struct sGenericsFun* fun_541;
void* right_value678;
char* fun_name3_542;
void* right_value679;
struct sNode* __result225__;
char* source_tail_543;
void* right_value680;
void* right_value681;
struct buffer* header_544;
void* right_value682;
char* name_545;
void* right_value683;
void* right_value684;
char* name_546;
void* right_value685;
int i_547;
struct sType* param_type_548;
char* param_name_552;
char* default_parametor_553;
void* right_value686;
void* right_value687;
void* right_value688;
void* right_value689;
void* right_value690;
char* impl_name_554;
void* right_value691;
char* result_type_name_555;
void* right_value692;
void* right_value693;
char* impl_name_556;
void* right_value694;
char* result_type_name_557;
void* right_value695;
int i_558;
struct sType* param_type_559;
char* param_name_560;
char* default_parametor_561;
void* right_value696;
void* right_value697;
void* right_value698;
void* right_value699;
void* right_value700;
void* right_value701;
struct sBlock* block_562;
_Bool static__563;
void* right_value702;
void* right_value703;
char* new_fun_name_564;
void* right_value704;
char* __dec_obj151;
void* right_value705;
void* right_value706;
void* right_value707;
void* right_value708;
void* right_value709;
void* right_value710;
struct sFun* fun_565;
void* right_value711;
void* right_value712;
struct sFun* fun2_566;
void* right_value713;
void* right_value714;
void* right_value715;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* right_value719;
struct sNode* __result232__;
void* right_value720;
char* new_fun_name_568;
void* right_value721;
char* __dec_obj154;
void* right_value722;
void* right_value723;
void* right_value724;
void* right_value725;
void* right_value726;
struct sFun* fun_569;
void* right_value727;
struct sFun* fun2_570;
void* right_value728;
char* source_tail_571;
void* right_value729;
void* right_value730;
struct buffer* header_572;
void* right_value731;
void* right_value732;
void* right_value733;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* right_value737;
struct sNode* __result235__;
void* right_value738;
char* asm_fun_574;
void* right_value739;
char* __dec_obj157;
void* right_value740;
void* right_value741;
void* right_value742;
void* right_value743;
void* right_value744;
struct sFun* fun_575;
void* right_value745;
struct sFun* fun2_576;
void* right_value746;
char* source_tail_577;
void* right_value747;
void* right_value748;
struct buffer* header_578;
void* right_value749;
void* right_value750;
void* right_value751;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* right_value755;
struct sNode* __result238__;
struct sNode* __result239__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&header_head_480, 0, sizeof(char*));
memset(&source_head_481, 0, sizeof(char*));
memset(&result_type_482, 0, sizeof(struct sType*));
memset(&var_name_483, 0, sizeof(char*));
memset(&constructor__484, 0, sizeof(_Bool));
right_value625 = (void*)0;
right_value626 = (void*)0;
right_value627 = (void*)0;
memset(&method_definition_488, 0, sizeof(_Bool));
memset(&p_489, 0, sizeof(char*));
memset(&sline_490, 0, sizeof(int));
right_value628 = (void*)0;
right_value629 = (void*)0;
memset(&buf2_491, 0, sizeof(struct buffer*));
memset(&fun_name_492, 0, sizeof(char*));
memset(&base_fun_name_493, 0, sizeof(char*));
right_value630 = (void*)0;
right_value631 = (void*)0;
right_value632 = (void*)0;
right_value633 = (void*)0;
right_value634 = (void*)0;
right_value635 = (void*)0;
right_value636 = (void*)0;
right_value637 = (void*)0;
right_value638 = (void*)0;
right_value639 = (void*)0;
memset(&header_tail_501, 0, sizeof(char*));
right_value640 = (void*)0;
right_value641 = (void*)0;
memset(&header_buf_502, 0, sizeof(struct buffer*));
memset(&version_503, 0, sizeof(int));
memset(&n_504, 0, sizeof(int));
right_value642 = (void*)0;
memset(&block_505, 0, sizeof(struct sBlock*));
right_value643 = (void*)0;
memset(&fun_name_507, 0, sizeof(char*));
right_value644 = (void*)0;
right_value645 = (void*)0;
right_value646 = (void*)0;
right_value647 = (void*)0;
right_value648 = (void*)0;
memset(&fun_508, 0, sizeof(struct sFun*));
right_value649 = (void*)0;
memset(&fun2_509, 0, sizeof(struct sFun*));
right_value650 = (void*)0;
right_value651 = (void*)0;
right_value652 = (void*)0;
right_value655 = (void*)0;
right_value656 = (void*)0;
memset(&none_generics_name_511, 0, sizeof(char*));
right_value657 = (void*)0;
memset(&generics_sname_512, 0, sizeof(char*));
memset(&generics_sline_513, 0, sizeof(int));
right_value658 = (void*)0;
memset(&block_514, 0, sizeof(char*));
right_value659 = (void*)0;
right_value660 = (void*)0;
right_value661 = (void*)0;
right_value662 = (void*)0;
right_value663 = (void*)0;
right_value664 = (void*)0;
memset(&fun_515, 0, sizeof(struct sGenericsFun*));
right_value665 = (void*)0;
memset(&fun_name3_516, 0, sizeof(char*));
right_value669 = (void*)0;
right_value670 = (void*)0;
memset(&generics_sname_538, 0, sizeof(char*));
memset(&generics_sline_539, 0, sizeof(int));
right_value671 = (void*)0;
memset(&block_540, 0, sizeof(char*));
right_value672 = (void*)0;
right_value673 = (void*)0;
right_value674 = (void*)0;
right_value675 = (void*)0;
right_value676 = (void*)0;
right_value677 = (void*)0;
memset(&fun_541, 0, sizeof(struct sGenericsFun*));
right_value678 = (void*)0;
memset(&fun_name3_542, 0, sizeof(char*));
right_value679 = (void*)0;
memset(&source_tail_543, 0, sizeof(char*));
right_value680 = (void*)0;
right_value681 = (void*)0;
memset(&header_544, 0, sizeof(struct buffer*));
right_value682 = (void*)0;
memset(&name_545, 0, sizeof(char*));
right_value683 = (void*)0;
right_value684 = (void*)0;
memset(&name_546, 0, sizeof(char*));
right_value685 = (void*)0;
memset(&i_547, 0, sizeof(int));
memset(&param_type_548, 0, sizeof(struct sType*));
memset(&param_name_552, 0, sizeof(char*));
memset(&default_parametor_553, 0, sizeof(char*));
right_value686 = (void*)0;
right_value687 = (void*)0;
right_value688 = (void*)0;
right_value689 = (void*)0;
right_value690 = (void*)0;
memset(&impl_name_554, 0, sizeof(char*));
right_value691 = (void*)0;
memset(&result_type_name_555, 0, sizeof(char*));
right_value692 = (void*)0;
right_value693 = (void*)0;
memset(&impl_name_556, 0, sizeof(char*));
right_value694 = (void*)0;
memset(&result_type_name_557, 0, sizeof(char*));
right_value695 = (void*)0;
memset(&i_558, 0, sizeof(int));
memset(&param_type_559, 0, sizeof(struct sType*));
memset(&param_name_560, 0, sizeof(char*));
memset(&default_parametor_561, 0, sizeof(char*));
right_value696 = (void*)0;
right_value697 = (void*)0;
right_value698 = (void*)0;
right_value699 = (void*)0;
right_value700 = (void*)0;
right_value701 = (void*)0;
memset(&block_562, 0, sizeof(struct sBlock*));
memset(&static__563, 0, sizeof(_Bool));
right_value702 = (void*)0;
right_value703 = (void*)0;
memset(&new_fun_name_564, 0, sizeof(char*));
right_value704 = (void*)0;
right_value705 = (void*)0;
right_value706 = (void*)0;
right_value707 = (void*)0;
right_value708 = (void*)0;
right_value709 = (void*)0;
right_value710 = (void*)0;
memset(&fun_565, 0, sizeof(struct sFun*));
right_value711 = (void*)0;
right_value712 = (void*)0;
memset(&fun2_566, 0, sizeof(struct sFun*));
right_value713 = (void*)0;
right_value714 = (void*)0;
right_value715 = (void*)0;
right_value719 = (void*)0;
right_value720 = (void*)0;
memset(&new_fun_name_568, 0, sizeof(char*));
right_value721 = (void*)0;
right_value722 = (void*)0;
right_value723 = (void*)0;
right_value724 = (void*)0;
right_value725 = (void*)0;
right_value726 = (void*)0;
memset(&fun_569, 0, sizeof(struct sFun*));
right_value727 = (void*)0;
memset(&fun2_570, 0, sizeof(struct sFun*));
right_value728 = (void*)0;
memset(&source_tail_571, 0, sizeof(char*));
right_value729 = (void*)0;
right_value730 = (void*)0;
memset(&header_572, 0, sizeof(struct buffer*));
right_value731 = (void*)0;
right_value732 = (void*)0;
right_value733 = (void*)0;
right_value737 = (void*)0;
right_value738 = (void*)0;
memset(&asm_fun_574, 0, sizeof(char*));
right_value739 = (void*)0;
right_value740 = (void*)0;
right_value741 = (void*)0;
right_value742 = (void*)0;
right_value743 = (void*)0;
right_value744 = (void*)0;
memset(&fun_575, 0, sizeof(struct sFun*));
right_value745 = (void*)0;
memset(&fun2_576, 0, sizeof(struct sFun*));
right_value746 = (void*)0;
memset(&source_tail_577, 0, sizeof(char*));
right_value747 = (void*)0;
right_value748 = (void*)0;
memset(&header_578, 0, sizeof(struct buffer*));
right_value749 = (void*)0;
right_value750 = (void*)0;
right_value751 = (void*)0;
right_value755 = (void*)0;
    header_head_480=info->p;
    source_head_481=info->p;
    __dec_obj141=result_type_482;
    result_type_482=((void*)0);
    come_call_finalizer3(__dec_obj141,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj142=var_name_483;
    var_name_483=((void*)0);
    __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
    constructor__484=(_Bool)0;
    if(info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(right_value625=parse_word(info)));
        right_value625 = come_decrement_ref_count2(right_value625, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj143=result_type_482;
        result_type_482=(struct sType*)come_increment_ref_count(((struct sType*)(right_value626=sType_clone(info->impl_type))));
        come_call_finalizer3(__dec_obj143,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value626,sType_finalize, 0, 1, 0, 0, __result_obj__);
        result_type_482->mHeap=(_Bool)1;
        constructor__484=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(right_value627=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_485=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2_486=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_487=multiple_assign_var7->v3;
        come_call_finalizer3(right_value627,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj144=result_type_482;
        result_type_482=(struct sType*)come_increment_ref_count(result_type2_485);
        come_call_finalizer3(__dec_obj144,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj145=var_name_483;
        var_name_483=(char*)come_increment_ref_count(var_name2_486);
        __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(info->in_class) {
        }
        if(!err_487) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        come_call_finalizer3(result_type2_485,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name2_486 = come_decrement_ref_count2(var_name2_486, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    method_definition_488=(_Bool)0;
    {
        p_489=info->p;
        sline_490=info->sline;
        buf2_491=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value629=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value628=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1639, "buffer"))))))));
        come_call_finalizer3(right_value628,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value629,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_491,*info->p);
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
        if(buffer_length(buf2_491)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_488=(_Bool)1;
        }
        info->p=p_489;
        info->sline=sline_490;
        come_call_finalizer3(buf2_491,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_493=((void*)0);
    if(constructor__484) {
        base_fun_name_493=(char*)come_increment_ref_count(((char*)(right_value630=__builtin_string("initialize"))));
        right_value630 = come_decrement_ref_count2(right_value630, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj146=fun_name_492;
        fun_name_492=(char*)come_increment_ref_count(((char*)(right_value631=create_method_name(info->impl_type,(_Bool)0,base_fun_name_493,info,(_Bool)1))));
        __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value631 = come_decrement_ref_count2(right_value631, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        if(method_definition_488) {
            multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(right_value632=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            obj_type_494=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
            name_495=(char*)come_increment_ref_count(multiple_assign_var8->v2);
            err_496=multiple_assign_var8->v3;
            come_call_finalizer3(right_value632,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(!err_496) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            expected_next_character(58,info);
            expected_next_character(58,info);
            base_fun_name_493=(char*)come_increment_ref_count(((char*)(right_value633=parse_word(info))));
            right_value633 = come_decrement_ref_count2(right_value633, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj147=fun_name_492;
            fun_name_492=(char*)come_increment_ref_count(((char*)(right_value634=create_method_name(obj_type_494,(_Bool)0,base_fun_name_493,info,(_Bool)1))));
            __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value634 = come_decrement_ref_count2(right_value634, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(obj_type_494,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_495 = come_decrement_ref_count2(name_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(info->impl_type) {
                base_fun_name_493=(char*)come_increment_ref_count(((char*)(right_value635=parse_word(info))));
                right_value635 = come_decrement_ref_count2(right_value635, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __dec_obj148=fun_name_492;
                fun_name_492=(char*)come_increment_ref_count(((char*)(right_value636=create_method_name(info->impl_type,(_Bool)0,base_fun_name_493,info,(_Bool)1))));
                __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value636 = come_decrement_ref_count2(right_value636, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                __dec_obj149=fun_name_492;
                fun_name_492=(char*)come_increment_ref_count(((char*)(right_value637=parse_word(info))));
                __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value637 = come_decrement_ref_count2(right_value637, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                base_fun_name_493=(char*)come_increment_ref_count(((char*)(right_value638=__builtin_string(fun_name_492))));
                right_value638 = come_decrement_ref_count2(right_value638, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
    }
    if(info->in_class&&charp_operator_equals(base_fun_name_493,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var9=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value639=parse_params(info,constructor__484)));
    param_types_497=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_498=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_499=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_500=multiple_assign_var9->v4;
    come_call_finalizer3(right_value639,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    header_tail_501=info->p;
    if(info->in_class&&charp_operator_equals(base_fun_name_493,"initialize")) {
        info->in_class=(_Bool)1;
    }
    header_buf_502=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value641=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value640=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1706, "buffer"))))))));
    come_call_finalizer3(right_value640,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value641,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(header_buf_502,header_head_480,header_tail_501-header_head_480);
    buffer_append_char(header_buf_502,0);
    version_503=0;
    if(parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_504=0;
        while(xisdigit(*info->p)) {
            n_504=n_504*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_503=n_504;
    }
    if(charp_operator_equals(base_fun_name_493,"lambda")) {
        block_505=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value642=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer3(right_value642,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        static int lambda_num_506=0;
        lambda_num_506++;
        fun_name_507=(char*)come_increment_ref_count(((char*)(right_value643=xsprintf("lambda%d",lambda_num_506))));
        right_value643 = come_decrement_ref_count2(right_value643, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_482->mStatic=(_Bool)0;
        fun_508=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value648=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value644=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1736, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value645=__builtin_string(fun_name_507)))),(struct sType*)come_increment_ref_count(result_type_482),(struct list$1sTypeph*)come_increment_ref_count(param_types_497),(struct list$1charph*)come_increment_ref_count(param_names_498),(struct list$1charph*)come_increment_ref_count(param_default_parametors_499),(_Bool)0,var_args_500,(struct sBlock*)come_increment_ref_count(block_505),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value646=buffer_to_string(header_buf_502)))),(char*)come_increment_ref_count(((char*)(right_value647=__builtin_string("")))),info))));
        come_call_finalizer3(right_value644,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value645 = come_decrement_ref_count2(right_value645, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value646 = come_decrement_ref_count2(right_value646, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value647 = come_decrement_ref_count2(right_value647, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value648,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        fun2_509=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value649=__builtin_string(fun_name_507))));
        right_value649 = come_decrement_ref_count2(right_value649, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_509==((void*)0)||fun2_509->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value650=string_clone(fun_name_507)))),(struct sFun*)come_increment_ref_count(fun_508));
            right_value650 = come_decrement_ref_count2(right_value650, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        base_fun_name_493 = come_decrement_ref_count2(base_fun_name_493, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1748, "struct sNode");
        _inf_obj_value5=come_increment_ref_count(((struct sLambdaNode*)(right_value652=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(right_value651=(struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 1748, "sLambdaNode")))),fun_508,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result209__ = __result_obj__ = ((struct sNode*)(right_value655=_inf_value5));
        come_call_finalizer3(block_505,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_507 = come_decrement_ref_count2(fun_name_507, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_508,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_482,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_483 = come_decrement_ref_count2(var_name_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_492 = come_decrement_ref_count2(fun_name_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_497,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_498,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_499,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_502,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value651,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value652,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value655) { right_value655 = come_decrement_ref_count2(right_value655, ((struct sNode*)right_value655)->finalize, ((struct sNode*)right_value655)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result209__;
        come_call_finalizer3(block_505,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_507 = come_decrement_ref_count2(fun_name_507, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_508,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(info->impl_type&&list$1charph_length(info->generics_type_names)>0) {
            none_generics_name_511=(char*)come_increment_ref_count(((char*)(right_value656=get_none_generics_name(info->impl_type->mClass->mName))));
            right_value656 = come_decrement_ref_count2(right_value656, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            generics_sname_512=(char*)come_increment_ref_count(((char*)(right_value657=__builtin_string(info->sname))));
            right_value657 = come_decrement_ref_count2(right_value657, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            generics_sline_513=info->sline;
            block_514=(char*)come_increment_ref_count(((char*)(right_value658=skip_block(info))));
            right_value658 = come_decrement_ref_count2(right_value658, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            fun_515=(struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value664=sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value659=(struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 1758, "sGenericsFun")))),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(right_value660=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(right_value661=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(((char*)(right_value662=__builtin_string(fun_name_492)))),(struct sType*)come_increment_ref_count(result_type_482),(struct list$1sTypeph*)come_increment_ref_count(param_types_497),(struct list$1charph*)come_increment_ref_count(param_names_498),(struct list$1charph*)come_increment_ref_count(param_default_parametors_499),var_args_500,(char*)come_increment_ref_count(block_514),info,(char*)come_increment_ref_count(((char*)(right_value663=__builtin_string(generics_sname_512)))),generics_sline_513))));
            come_call_finalizer3(right_value659,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value660,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value661,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            right_value662 = come_decrement_ref_count2(right_value662, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value663 = come_decrement_ref_count2(right_value663, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value664,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
            fun_name3_516=(char*)come_increment_ref_count(((char*)(right_value665=xsprintf("%s_%s",none_generics_name_511,base_fun_name_493))));
            right_value665 = come_decrement_ref_count2(right_value665, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(((char*)(right_value669=__builtin_string(fun_name3_516)))),(struct sGenericsFun*)come_increment_ref_count(fun_515));
            right_value669 = come_decrement_ref_count2(right_value669, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            base_fun_name_493 = come_decrement_ref_count2(base_fun_name_493, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            __result224__ = __result_obj__ = (struct sNode*)((void*)0);
            none_generics_name_511 = come_decrement_ref_count2(none_generics_name_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_sname_512 = come_decrement_ref_count2(generics_sname_512, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_514 = come_decrement_ref_count2(block_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_515,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            fun_name3_516 = come_decrement_ref_count2(fun_name3_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_482,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_483 = come_decrement_ref_count2(var_name_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_492 = come_decrement_ref_count2(fun_name_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_497,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_498,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_499,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_502,buffer_finalize, 0, 0, 0, 0, (void*)0);
            return __result224__;
            none_generics_name_511 = come_decrement_ref_count2(none_generics_name_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_sname_512 = come_decrement_ref_count2(generics_sname_512, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_514 = come_decrement_ref_count2(block_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_515,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            fun_name3_516 = come_decrement_ref_count2(fun_name3_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(list$1charph_length(info->method_generics_type_names)>0) {
                generics_sname_538=(char*)come_increment_ref_count(((char*)(right_value670=__builtin_string(info->sname))));
                right_value670 = come_decrement_ref_count2(right_value670, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                generics_sline_539=info->sline;
                block_540=(char*)come_increment_ref_count(((char*)(right_value671=skip_block(info))));
                right_value671 = come_decrement_ref_count2(right_value671, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                fun_541=(struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value677=sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value672=(struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 1774, "sGenericsFun")))),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(right_value673=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(right_value674=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(((char*)(right_value675=__builtin_string(fun_name_492)))),(struct sType*)come_increment_ref_count(result_type_482),(struct list$1sTypeph*)come_increment_ref_count(param_types_497),(struct list$1charph*)come_increment_ref_count(param_names_498),(struct list$1charph*)come_increment_ref_count(param_default_parametors_499),var_args_500,(char*)come_increment_ref_count(block_540),info,(char*)come_increment_ref_count(((char*)(right_value676=__builtin_string(generics_sname_538)))),generics_sline_539))));
                come_call_finalizer3(right_value672,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value673,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value674,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                right_value675 = come_decrement_ref_count2(right_value675, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value676 = come_decrement_ref_count2(right_value676, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value677,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
                fun_name3_542=(char*)come_increment_ref_count(((char*)(right_value678=charp_clone(base_fun_name_493))));
                right_value678 = come_decrement_ref_count2(right_value678, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(((char*)(right_value679=__builtin_string(fun_name3_542)))),(struct sGenericsFun*)come_increment_ref_count(fun_541));
                right_value679 = come_decrement_ref_count2(right_value679, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                base_fun_name_493 = come_decrement_ref_count2(base_fun_name_493, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                __result225__ = __result_obj__ = (struct sNode*)((void*)0);
                generics_sname_538 = come_decrement_ref_count2(generics_sname_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_540 = come_decrement_ref_count2(block_540, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_541,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_542 = come_decrement_ref_count2(fun_name3_542, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_482,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_483 = come_decrement_ref_count2(var_name_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name_492 = come_decrement_ref_count2(fun_name_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_497,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_498,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_499,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_buf_502,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result225__;
                generics_sname_538 = come_decrement_ref_count2(generics_sname_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_540 = come_decrement_ref_count2(block_540, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_541,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_542 = come_decrement_ref_count2(fun_name3_542, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(*info->p==123) {
                    source_tail_543=info->p-1;
                    header_544=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value681=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value680=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1787, "buffer"))))))));
                    come_call_finalizer3(right_value680,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value681,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                    if(constructor__484) {
                        if(list$1sTypeph_length(param_types_497)==1) {
                            name_545=(char*)come_increment_ref_count(((char*)(right_value682=string_clone(info->impl_type->mClass->mName))));
                            right_value682 = come_decrement_ref_count2(right_value682, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            buffer_append_str(header_544,((char*)(right_value683=xsprintf("extern %s*%% %s*::initialize(%s*%% self);\n",name_545,name_545,name_545))));
                            right_value683 = come_decrement_ref_count2(right_value683, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            name_545 = come_decrement_ref_count2(name_545, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        else {
                            name_546=(char*)come_increment_ref_count(((char*)(right_value684=string_clone(info->impl_type->mClass->mName))));
                            right_value684 = come_decrement_ref_count2(right_value684, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            buffer_append_str(header_544,((char*)(right_value685=xsprintf("extern %s*%% %s*::initialize(%s*%% self, ",name_546,name_546,name_546))));
                            right_value685 = come_decrement_ref_count2(right_value685, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            for(                            i_547=1;                            i_547<list$1sTypeph_length(param_types_497);                            i_547++                            ){
                                param_type_548=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_497,i_547), "05function.c", 1799, 1));
                                param_name_552=((char*)come_null_check(list$1charphp_operator_load_element(param_names_498,i_547), "05function.c", 1800, 2));
                                default_parametor_553=list$1charphp_operator_load_element(param_default_parametors_499,i_547);
                                if(default_parametor_553) {
                                    buffer_append_str(header_544,((char*)(right_value687=xsprintf("extern %s %s=%s",((char*)(right_value686=make_come_type_name_string_no_solved(param_type_548,info))),param_name_552,default_parametor_553))));
                                    right_value686 = come_decrement_ref_count2(right_value686, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    right_value687 = come_decrement_ref_count2(right_value687, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    buffer_append_str(header_544,((char*)(right_value689=xsprintf("extern %s %s",((char*)(right_value688=make_come_type_name_string_no_solved(param_type_548,info))),param_name_552))));
                                    right_value688 = come_decrement_ref_count2(right_value688, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    right_value689 = come_decrement_ref_count2(right_value689, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(i_547!=list$1sTypeph_length(param_types_497)-1) {
                                    buffer_append_str(header_544,",");
                                }
                            }
                            buffer_append_str(header_544,");\n");
                            name_546 = come_decrement_ref_count2(name_546, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        if(info->in_class&&info->impl_type) {
                            if(list$1sTypeph_length(param_types_497)==1) {
                                impl_name_554=(char*)come_increment_ref_count(((char*)(right_value690=string_clone(info->impl_type->mClass->mName))));
                                right_value690 = come_decrement_ref_count2(right_value690, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                result_type_name_555=(char*)come_increment_ref_count(((char*)(right_value691=make_come_type_name_string_no_solved(result_type_482,info))));
                                right_value691 = come_decrement_ref_count2(right_value691, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                buffer_append_str(header_544,((char*)(right_value692=xsprintf("extern %s %s*::%s(%s* self);\n",result_type_name_555,impl_name_554,base_fun_name_493,impl_name_554))));
                                right_value692 = come_decrement_ref_count2(right_value692, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                impl_name_554 = come_decrement_ref_count2(impl_name_554, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                result_type_name_555 = come_decrement_ref_count2(result_type_name_555, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                impl_name_556=(char*)come_increment_ref_count(((char*)(right_value693=string_clone(info->impl_type->mClass->mName))));
                                right_value693 = come_decrement_ref_count2(right_value693, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                result_type_name_557=(char*)come_increment_ref_count(((char*)(right_value694=make_come_type_name_string_no_solved(result_type_482,info))));
                                right_value694 = come_decrement_ref_count2(right_value694, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                buffer_append_str(header_544,((char*)(right_value695=xsprintf("extern %s %s*::%s(%s* self, ",result_type_name_557,impl_name_556,base_fun_name_493,impl_name_556))));
                                right_value695 = come_decrement_ref_count2(right_value695, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                for(                                i_558=1;                                i_558<list$1sTypeph_length(param_types_497);                                i_558++                                ){
                                    param_type_559=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_497,i_558), "05function.c", 1830, 3));
                                    param_name_560=((char*)come_null_check(list$1charphp_operator_load_element(param_names_498,i_558), "05function.c", 1831, 4));
                                    default_parametor_561=list$1charphp_operator_load_element(param_default_parametors_499,i_558);
                                    if(default_parametor_561) {
                                        buffer_append_str(header_544,((char*)(right_value697=xsprintf("extern %s %s=%s",((char*)(right_value696=make_come_type_name_string_no_solved(param_type_559,info))),param_name_560,default_parametor_561))));
                                        right_value696 = come_decrement_ref_count2(right_value696, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value697 = come_decrement_ref_count2(right_value697, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    else {
                                        buffer_append_str(header_544,((char*)(right_value699=xsprintf("extern %s %s",((char*)(right_value698=make_come_type_name_string_no_solved(param_type_559,info))),param_name_560))));
                                        right_value698 = come_decrement_ref_count2(right_value698, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value699 = come_decrement_ref_count2(right_value699, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(i_558!=list$1sTypeph_length(param_types_497)-1) {
                                        buffer_append_str(header_544,",");
                                    }
                                }
                                buffer_append_str(header_544,");\n");
                                impl_name_556 = come_decrement_ref_count2(impl_name_556, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                result_type_name_557 = come_decrement_ref_count2(result_type_name_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        else {
                            buffer_append(header_544,source_head_481,source_tail_543-source_head_481);
                            buffer_append_str(header_544,";\n");
                        }
                    }
                    if(!result_type_482->mStatic) {
                        add_come_code_at_come_header(info,"%s",((char*)(right_value700=buffer_to_string(header_544))));
                        right_value700 = come_decrement_ref_count2(right_value700, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    block_562=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value701=parse_block(info,(_Bool)0,constructor__484))));
                    come_call_finalizer3(right_value701,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
                    static__563=(_Bool)0;
                    if(result_type_482->mStatic) {
                        result_type_482->mStatic=(_Bool)0;
                        static__563=(_Bool)1;
                    }
                    if(version_503>0) {
                        new_fun_name_564=(char*)come_increment_ref_count(((char*)(right_value703=xsprintf("%s_v%d",((char*)(right_value702=__builtin_string(fun_name_492))),version_503))));
                        right_value702 = come_decrement_ref_count2(right_value702, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value703 = come_decrement_ref_count2(right_value703, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        __dec_obj151=fun_name_492;
                        fun_name_492=(char*)come_increment_ref_count(((char*)(right_value704=__builtin_string(new_fun_name_564))));
                        __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value704 = come_decrement_ref_count2(right_value704, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        new_fun_name_564 = come_decrement_ref_count2(new_fun_name_564, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    fun_565=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value710=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value705=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1871, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value706=__builtin_string(fun_name_492)))),(struct sType*)come_increment_ref_count(result_type_482),(struct list$1sTypeph*)come_increment_ref_count(param_types_497),(struct list$1charph*)come_increment_ref_count(param_names_498),(struct list$1charph*)come_increment_ref_count(param_default_parametors_499),(_Bool)0,var_args_500,(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value707=sBlock_clone(block_562)))),static__563,(char*)come_increment_ref_count(((char*)(right_value708=buffer_to_string(header_buf_502)))),(char*)come_increment_ref_count(((char*)(right_value709=__builtin_string(info->sname)))),info))));
                    come_call_finalizer3(right_value705,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                    right_value706 = come_decrement_ref_count2(right_value706, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value707,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
                    right_value708 = come_decrement_ref_count2(right_value708, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value709 = come_decrement_ref_count2(right_value709, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value710,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                    if(info->in_class) {
                        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value711=string_clone(fun_name_492)))),(struct sFun*)come_increment_ref_count(fun_565));
                        right_value711 = come_decrement_ref_count2(right_value711, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        fun2_566=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value712=__builtin_string(fun_name_492))));
                        right_value712 = come_decrement_ref_count2(right_value712, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(fun2_566==((void*)0)||fun2_566->mExternal) {
                            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value713=string_clone(fun_name_492)))),(struct sFun*)come_increment_ref_count(fun_565));
                            right_value713 = come_decrement_ref_count2(right_value713, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                    }
                    base_fun_name_493 = come_decrement_ref_count2(base_fun_name_493, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1893, "struct sNode");
                    _inf_obj_value6=come_increment_ref_count(((struct sFunNode*)(right_value715=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value714=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1893, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_565),info))));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sFunNode_finalize;
                    _inf_value6->clone=(void*)sFunNode_clone;
                    _inf_value6->compile=(void*)sFunNode_compile;
                    _inf_value6->sline=(void*)sNodeBase_sline;
                    _inf_value6->sname=(void*)sNodeBase_sname;
                    _inf_value6->terminated=(void*)sNodeBase_terminated;
                    _inf_value6->kind=(void*)sFunNode_kind;
                    __result232__ = __result_obj__ = ((struct sNode*)(right_value719=_inf_value6));
                    come_call_finalizer3(header_544,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(block_562,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(fun_565,sFun_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_482,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_483 = come_decrement_ref_count2(var_name_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_492 = come_decrement_ref_count2(fun_name_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_497,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_names_498,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_default_parametors_499,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(header_buf_502,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value714,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value715,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value719) { right_value719 = come_decrement_ref_count2(right_value719, ((struct sNode*)right_value719)->finalize, ((struct sNode*)right_value719)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result232__;
                    come_call_finalizer3(header_544,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(block_562,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(fun_565,sFun_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(xisalpha(*info->p)||*info->p==95||*info->p==59) {
                        if(version_503>0) {
                            new_fun_name_568=(char*)come_increment_ref_count(((char*)(right_value720=xsprintf("%s_v%d",fun_name_492,version_503))));
                            right_value720 = come_decrement_ref_count2(right_value720, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            __dec_obj154=fun_name_492;
                            fun_name_492=(char*)come_increment_ref_count(((char*)(right_value721=__builtin_string(new_fun_name_568))));
                            __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value721 = come_decrement_ref_count2(right_value721, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            new_fun_name_568 = come_decrement_ref_count2(new_fun_name_568, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(*info->p==59) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            result_type_482->mStatic=(_Bool)0;
                            fun_569=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value726=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value722=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1907, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value723=__builtin_string(fun_name_492)))),(struct sType*)come_increment_ref_count(result_type_482),(struct list$1sTypeph*)come_increment_ref_count(param_types_497),(struct list$1charph*)come_increment_ref_count(param_names_498),(struct list$1charph*)come_increment_ref_count(param_default_parametors_499),(_Bool)1,var_args_500,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value724=buffer_to_string(header_buf_502)))),(char*)come_increment_ref_count(((char*)(right_value725=__builtin_string(info->sname)))),info))));
                            come_call_finalizer3(right_value722,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                            right_value723 = come_decrement_ref_count2(right_value723, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value724 = come_decrement_ref_count2(right_value724, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value725 = come_decrement_ref_count2(right_value725, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value726,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                            fun2_570=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value727=__builtin_string(fun_name_492))));
                            right_value727 = come_decrement_ref_count2(right_value727, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(fun2_570==((void*)0)||fun2_570->mExternal) {
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value728=string_clone(fun_name_492)))),(struct sFun*)come_increment_ref_count(fun_569));
                                right_value728 = come_decrement_ref_count2(right_value728, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            base_fun_name_493 = come_decrement_ref_count2(base_fun_name_493, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            source_tail_571=info->p;
                            header_572=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value730=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value729=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1923, "buffer"))))))));
                            come_call_finalizer3(right_value729,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value730,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            buffer_append(header_572,source_head_481,source_tail_571-source_head_481);
                            add_come_code_at_come_header(info,"%s",((char*)(right_value731=buffer_to_string(header_572))));
                            right_value731 = come_decrement_ref_count2(right_value731, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1928, "struct sNode");
                            _inf_obj_value7=come_increment_ref_count(((struct sFunNode*)(right_value733=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value732=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1928, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_569),info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sFunNode_finalize;
                            _inf_value7->clone=(void*)sFunNode_clone;
                            _inf_value7->compile=(void*)sFunNode_compile;
                            _inf_value7->sline=(void*)sNodeBase_sline;
                            _inf_value7->sname=(void*)sNodeBase_sname;
                            _inf_value7->terminated=(void*)sNodeBase_terminated;
                            _inf_value7->kind=(void*)sFunNode_kind;
                            __result235__ = __result_obj__ = ((struct sNode*)(right_value737=_inf_value7));
                            come_call_finalizer3(fun_569,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_572,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type_482,sType_finalize, 0, 0, 0, 0, (void*)0);
                            var_name_483 = come_decrement_ref_count2(var_name_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            fun_name_492 = come_decrement_ref_count2(fun_name_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_497,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_names_498,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_default_parametors_499,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_buf_502,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value732,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value733,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value737) { right_value737 = come_decrement_ref_count2(right_value737, ((struct sNode*)right_value737)->finalize, ((struct sNode*)right_value737)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result235__;
                            come_call_finalizer3(fun_569,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_572,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            asm_fun_574=(char*)come_increment_ref_count(((char*)(right_value738=parse_attribute(info))));
                            right_value738 = come_decrement_ref_count2(right_value738, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(string_operator_not_equals(asm_fun_574,"")) {
                                __dec_obj157=fun_name_492;
                                fun_name_492=(char*)come_increment_ref_count(((char*)(right_value739=__builtin_string(asm_fun_574))));
                                __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value739 = come_decrement_ref_count2(right_value739, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            expected_next_character(59,info);
                            result_type_482->mStatic=(_Bool)0;
                            fun_575=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value744=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value740=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1941, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value741=__builtin_string(fun_name_492)))),(struct sType*)come_increment_ref_count(result_type_482),(struct list$1sTypeph*)come_increment_ref_count(param_types_497),(struct list$1charph*)come_increment_ref_count(param_names_498),(struct list$1charph*)come_increment_ref_count(param_default_parametors_499),(_Bool)1,var_args_500,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value742=buffer_to_string(header_buf_502)))),(char*)come_increment_ref_count(((char*)(right_value743=__builtin_string(info->sname)))),info))));
                            come_call_finalizer3(right_value740,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                            right_value741 = come_decrement_ref_count2(right_value741, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value742 = come_decrement_ref_count2(right_value742, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value743 = come_decrement_ref_count2(right_value743, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value744,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                            fun2_576=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value745=__builtin_string(fun_name_492))));
                            right_value745 = come_decrement_ref_count2(right_value745, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(fun2_576==((void*)0)||fun2_576->mExternal) {
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value746=string_clone(fun_name_492)))),(struct sFun*)come_increment_ref_count(fun_575));
                                right_value746 = come_decrement_ref_count2(right_value746, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            base_fun_name_493 = come_decrement_ref_count2(base_fun_name_493, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            source_tail_577=info->p;
                            header_578=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value748=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value747=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1957, "buffer"))))))));
                            come_call_finalizer3(right_value747,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value748,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            buffer_append(header_578,source_head_481,source_tail_577-source_head_481);
                            add_come_code_at_come_header(info,"%s",((char*)(right_value749=buffer_to_string(header_578))));
                            right_value749 = come_decrement_ref_count2(right_value749, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1962, "struct sNode");
                            _inf_obj_value8=come_increment_ref_count(((struct sFunNode*)(right_value751=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value750=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1962, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_575),info))));
                            _inf_value8->_protocol_obj=_inf_obj_value8;
                            _inf_value8->finalize=(void*)sFunNode_finalize;
                            _inf_value8->clone=(void*)sFunNode_clone;
                            _inf_value8->compile=(void*)sFunNode_compile;
                            _inf_value8->sline=(void*)sNodeBase_sline;
                            _inf_value8->sname=(void*)sNodeBase_sname;
                            _inf_value8->terminated=(void*)sNodeBase_terminated;
                            _inf_value8->kind=(void*)sFunNode_kind;
                            __result238__ = __result_obj__ = ((struct sNode*)(right_value755=_inf_value8));
                            asm_fun_574 = come_decrement_ref_count2(asm_fun_574, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(fun_575,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_578,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type_482,sType_finalize, 0, 0, 0, 0, (void*)0);
                            var_name_483 = come_decrement_ref_count2(var_name_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            fun_name_492 = come_decrement_ref_count2(fun_name_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_497,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_names_498,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_default_parametors_499,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_buf_502,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value750,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value751,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value755) { right_value755 = come_decrement_ref_count2(right_value755, ((struct sNode*)right_value755)->finalize, ((struct sNode*)right_value755)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result238__;
                            asm_fun_574 = come_decrement_ref_count2(asm_fun_574, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(fun_575,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_578,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
    base_fun_name_493 = come_decrement_ref_count2(base_fun_name_493, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result239__ = __result_obj__ = (struct sNode*)((void*)0);
    come_call_finalizer3(result_type_482,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_483 = come_decrement_ref_count2(var_name_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_492 = come_decrement_ref_count2(fun_name_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_497,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_498,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_499,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(header_buf_502,buffer_finalize, 0, 0, 0, 0, (void*)0);
    return __result239__;
    come_call_finalizer3(result_type_482,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_483 = come_decrement_ref_count2(var_name_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_492 = come_decrement_ref_count2(fun_name_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_497,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_498,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_499,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(header_buf_502,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
struct sLambdaNode* __result207__;
void* right_value653;
struct sLambdaNode* result_510;
void* right_value654;
char* __dec_obj150;
struct sLambdaNode* __result208__;
memset(&__result_obj__, 0, sizeof(void*));
right_value653 = (void*)0;
memset(&result_510, 0, sizeof(struct sLambdaNode*));
right_value654 = (void*)0;
            if(self==(void*)0) {
                __result207__ = __result_obj__ = (void*)0;
                return __result207__;
            }
            result_510=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(right_value653=(struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "sLambdaNode"))));
            come_call_finalizer3(right_value653,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(self!=((void*)0)) {
                result_510->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj150=result_510->sname;
                result_510->sname=(char*)come_increment_ref_count(((char*)(right_value654=string_clone(self->sname))));
                __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value654 = come_decrement_ref_count2(right_value654, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(self!=((void*)0)) {
                result_510->mFun=self->mFun;
            }
            __result208__ = __result_obj__ = result_510;
            come_call_finalizer3(result_510,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
            return __result208__;
            come_call_finalizer3(result_510,sLambdaNode_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1charph_length(struct list$1charph* self){
int __result210__;
int __result211__;
            if(self==((void*)0)) {
                __result210__ = 0;
                return __result210__;
            }
            __result211__ = self->len;
            return __result211__;
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
void* __result_obj__;
unsigned int hash_534;
unsigned int it_535;
_Bool same_key_exist_536;
char* it2_537;
struct map$2charphsGenericsFunph* __result223__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_534, 0, sizeof(unsigned int));
memset(&it_535, 0, sizeof(unsigned int));
memset(&same_key_exist_536, 0, sizeof(_Bool));
memset(&it2_537, 0, sizeof(char*));
                if(self->len*10>=self->size) {
                    map$2charphsGenericsFunph_rehash(self);
                }
                hash_534=string_get_hash_key(key)%self->size;
                it_535=hash_534;
                while((_Bool)1) {
                    if(self->item_existance[it_535]) {
                        if(string_equals(self->keys[it_535],key)) {
                            if(1) {
                                list$1charp_remove(self->key_list,self->keys[it_535]);
                                self->keys[it_535] = come_decrement_ref_count2(self->keys[it_535], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                self->keys[it_535]=(char*)come_increment_ref_count(key);
                            }
                            else {
                                list$1charp_remove(self->key_list,self->keys[it_535]);
                                self->keys[it_535]=key;
                            }
                            if(1) {
                                come_call_finalizer3(self->items[it_535],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                                self->items[it_535]=(struct sGenericsFun*)come_increment_ref_count(item);
                            }
                            else {
                                self->items[it_535]=item;
                            }
                            break;
                        }
                        it_535++;
                        if(it_535>=self->size) {
                            it_535=0;
                        }
                        else {
                            if(it_535==hash_534) {
                                printf("unexpected error in map.insert\n");
                                stackframe();
                                exit(2);
                            }
                        }
                    }
                    else {
                        self->item_existance[it_535]=(_Bool)1;
                        if(1) {
                            self->keys[it_535]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            self->keys[it_535]=key;
                        }
                        if(1) {
                            self->items[it_535]=(struct sGenericsFun*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_535]=item;
                        }
                        self->len++;
                        break;
                    }
                }
                same_key_exist_536=(_Bool)0;
                for(                it2_537=list$1charp_begin(self->key_list);                !list$1charp_end(self->key_list);                it2_537=list$1charp_next(self->key_list)                ){
                    if(string_equals(it2_537,key)) {
                        same_key_exist_536=(_Bool)1;
                    }
                }
                if(!same_key_exist_536) {
                    list$1charp_push_back(self->key_list,key);
                }
                __result223__ = __result_obj__ = self;
                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer3(item,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result223__;
                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer3(item,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self){
int size_517;
void* right_value666;
char** keys_518;
void* right_value667;
struct sGenericsFun** items_519;
void* right_value668;
_Bool* item_existance_520;
int len_521;
char* it_524;
struct sGenericsFun* default_value_527;
struct sGenericsFun* it2_528;
unsigned int hash_531;
int n_532;
struct sGenericsFun* default_value_533;
memset(&size_517, 0, sizeof(int));
right_value666 = (void*)0;
memset(&keys_518, 0, sizeof(char**));
right_value667 = (void*)0;
memset(&items_519, 0, sizeof(struct sGenericsFun**));
right_value668 = (void*)0;
memset(&item_existance_520, 0, sizeof(_Bool*));
memset(&len_521, 0, sizeof(int));
memset(&it_524, 0, sizeof(char*));
memset(&default_value_527, 0, sizeof(struct sGenericsFun*));
memset(&it2_528, 0, sizeof(struct sGenericsFun*));
memset(&hash_531, 0, sizeof(unsigned int));
memset(&n_532, 0, sizeof(int));
memset(&default_value_533, 0, sizeof(struct sGenericsFun*));
                        size_517=self->size*10;
                        keys_518=(char**)come_increment_ref_count(((char**)(right_value666=(char**)come_calloc(1, sizeof(char*)*(1*(size_517)), "./neo-c.h", 1315, "char*%"))));
                        right_value666 = come_decrement_ref_count2(right_value666, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        items_519=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(right_value667=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_517)), "./neo-c.h", 1316, "sGenericsFun*%"))));
                        come_call_finalizer3(right_value667,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
                        item_existance_520=(_Bool*)come_increment_ref_count(((_Bool*)(right_value668=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_517)), "./neo-c.h", 1317, "bool"))));
                        right_value668 = come_decrement_ref_count2(right_value668, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        len_521=0;
                        for(                        it_524=map$2charphsGenericsFunph_begin(self);                        !map$2charphsGenericsFunph_end(self);                        it_524=map$2charphsGenericsFunph_next(self)                        ){
                            memset(&default_value_527,0,sizeof(struct sGenericsFun*));
                            it2_528=map$2charphsGenericsFunph_at(self,it_524,default_value_527);
                            hash_531=string_get_hash_key(it_524)%size_517;
                            n_532=hash_531;
                            while((_Bool)1) {
                                if(item_existance_520[n_532]) {
                                    n_532++;
                                    if(n_532>=size_517) {
                                        n_532=0;
                                    }
                                    else {
                                        if(n_532==hash_531) {
                                            printf("unexpected error in map.rehash(1)\n");
                                            stackframe();
                                            exit(2);
                                        }
                                    }
                                }
                                else {
                                    item_existance_520[n_532]=(_Bool)1;
                                    keys_518[n_532]=it_524;
                                    items_519[n_532]=map$2charphsGenericsFunph_at(self,it_524,default_value_533);
                                    len_521++;
                                    break;
                                }
                            }
                        }
                        come_free((char*)self->items);
                        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_free((char*)self->keys);
                        self->keys=keys_518;
                        self->items=items_519;
                        self->item_existance=item_existance_520;
                        self->size=size_517;
                        self->len=len_521;
}

static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
char* result_522;
char* __result212__;
char* __result213__;
char* result_523;
char* __result214__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_522, 0, sizeof(char*));
memset(&result_523, 0, sizeof(char*));
                            if(self==((void*)0)) {
                                memset(&result_522,0,sizeof(char*));
                                __result212__ = __result_obj__ = result_522;
                                return __result212__;
                            }
                            self->key_list->it=self->key_list->head;
                            if(self->key_list->it) {
                                __result213__ = __result_obj__ = self->key_list->it->item;
                                return __result213__;
                            }
                            memset(&result_523,0,sizeof(char*));
                            __result214__ = __result_obj__ = result_523;
                            return __result214__;
}

static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self){
_Bool __result215__;
                            __result215__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                            return __result215__;
}

static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
char* result_525;
char* __result216__;
char* __result217__;
char* result_526;
char* __result218__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_525, 0, sizeof(char*));
memset(&result_526, 0, sizeof(char*));
                            if(self==((void*)0)||self->key_list->it==((void*)0)) {
                                memset(&result_525,0,sizeof(char*));
                                __result216__ = __result_obj__ = result_525;
                                return __result216__;
                            }
                            self->key_list->it=self->key_list->it->next;
                            if(self->key_list->it) {
                                __result217__ = __result_obj__ = self->key_list->it->item;
                                return __result217__;
                            }
                            memset(&result_526,0,sizeof(char*));
                            __result218__ = __result_obj__ = result_526;
                            return __result218__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_529;
unsigned int it_530;
struct sGenericsFun* __result219__;
struct sGenericsFun* __result220__;
struct sGenericsFun* __result221__;
struct sGenericsFun* __result222__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_529, 0, sizeof(unsigned int));
memset(&it_530, 0, sizeof(unsigned int));
                                hash_529=string_get_hash_key(((char*)key))%self->size;
                                it_530=hash_529;
                                while((_Bool)1) {
                                    if(self->item_existance[it_530]) {
                                        if(string_equals(self->keys[it_530],key)) {
                                            __result219__ = __result_obj__ = self->items[it_530];
                                            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result219__;
                                        }
                                        it_530++;
                                        if(it_530>=self->size) {
                                            it_530=0;
                                        }
                                        else {
                                            if(it_530==hash_529) {
                                                __result220__ = __result_obj__ = default_value;
                                                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result220__;
                                            }
                                        }
                                    }
                                    else {
                                        __result221__ = __result_obj__ = default_value;
                                        come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result221__;
                                    }
                                }
                                __result222__ = __result_obj__ = default_value;
                                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result222__;
                                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
int __result226__;
int __result227__;
                            if(self==((void*)0)) {
                                __result226__ = 0;
                                return __result226__;
                            }
                            __result227__ = self->len;
                            return __result227__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
struct list_item$1charph* it_549;
int i_550;
char* __result228__;
char* default_value_551;
char* __result229__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_549, 0, sizeof(struct list_item$1charph*));
memset(&i_550, 0, sizeof(int));
memset(&default_value_551, 0, sizeof(char*));
                                    if(position<0) {
                                        position+=self->len;
                                    }
                                    it_549=self->head;
                                    i_550=0;
                                    while(it_549!=((void*)0)) {
                                        if(position==i_550) {
                                            __result228__ = __result_obj__ = it_549->item;
                                            return __result228__;
                                        }
                                        it_549=it_549->next;
                                        i_550++;
                                    }
                                    memset(&default_value_551,0,sizeof(char*));
                                    __result229__ = __result_obj__ = default_value_551;
                                    default_value_551 = come_decrement_ref_count2(default_value_551, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                    return __result229__;
                                    default_value_551 = come_decrement_ref_count2(default_value_551, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_580;
char* __dec_obj160;
char* last_code2_581;
char* __dec_obj161;
char* last_code3_582;
char* __dec_obj162;
struct sClass* current_stack_frame_struct_583;
struct sFun* finalizer_584;
void* right_value756;
char* real_fun_name_585;
void* right_value757;
char* user_real_fun_name_586;
struct sFun* user_finalizer_587;
void* right_value758;
struct sType* type2_588;
struct sClass* klass_589;
void* right_value759;
void* right_value760;
struct buffer* source_590;
struct list$1tuple2$2charphsTypephph* o2_saved_592;
struct tuple2$2charphsTypeph* it_595;
struct tuple2$2charphsTypeph* multiple_assign_var10;
char* name_598;
struct sType* field_type_599;
char* p_601;
int sline_602;
char* sname_603;
char* head_604;
struct buffer* source3_605;
struct buffer* __dec_obj163;
void* right_value761;
char* __dec_obj164;
void* right_value762;
struct sBlock* block_606;
void* right_value763;
void* right_value764;
struct sType* result_type_607;
void* right_value765;
char* name_608;
void* right_value766;
struct sType* self_type_609;
struct sType* __list_values21___610[1];
void* right_value767;
void* right_value768;
struct list$1sTypeph* param_types_611;
void* right_value769;
char* __list_values22___612[1];
void* right_value770;
void* right_value771;
struct list$1charph* param_names_613;
void* right_value772;
void* right_value773;
struct list$1charph* param_default_parametors_614;
void* right_value774;
void* right_value775;
struct buffer* header_buf_615;
void* right_value776;
int i_616;
struct sType* param_type_617;
char* param_name_618;
void* right_value777;
void* right_value778;
void* right_value779;
void* right_value780;
void* right_value781;
struct sFun* fun_619;
void* right_value782;
struct sFun* fun2_620;
void* right_value783;
void* right_value784;
void* right_value785;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* right_value789;
struct sNode* node_621;
struct buffer* __dec_obj167;
char* __dec_obj168;
char* __dec_obj169;
char* __dec_obj170;
char* __dec_obj171;
void* right_value790;
void* right_value791;
struct tuple2$2sFunpcharph* __result250__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_580, 0, sizeof(char*));
memset(&last_code2_581, 0, sizeof(char*));
memset(&last_code3_582, 0, sizeof(char*));
memset(&current_stack_frame_struct_583, 0, sizeof(struct sClass*));
memset(&finalizer_584, 0, sizeof(struct sFun*));
right_value756 = (void*)0;
memset(&real_fun_name_585, 0, sizeof(char*));
right_value757 = (void*)0;
memset(&user_real_fun_name_586, 0, sizeof(char*));
memset(&user_finalizer_587, 0, sizeof(struct sFun*));
right_value758 = (void*)0;
memset(&type2_588, 0, sizeof(struct sType*));
memset(&klass_589, 0, sizeof(struct sClass*));
right_value759 = (void*)0;
right_value760 = (void*)0;
memset(&source_590, 0, sizeof(struct buffer*));
memset(&o2_saved_592, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_595, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&p_601, 0, sizeof(char*));
memset(&sline_602, 0, sizeof(int));
memset(&sname_603, 0, sizeof(char*));
memset(&head_604, 0, sizeof(char*));
memset(&source3_605, 0, sizeof(struct buffer*));
right_value761 = (void*)0;
right_value762 = (void*)0;
memset(&block_606, 0, sizeof(struct sBlock*));
right_value763 = (void*)0;
right_value764 = (void*)0;
memset(&result_type_607, 0, sizeof(struct sType*));
right_value765 = (void*)0;
memset(&name_608, 0, sizeof(char*));
right_value766 = (void*)0;
memset(&self_type_609, 0, sizeof(struct sType*));
right_value767 = (void*)0;
right_value768 = (void*)0;
memset(&param_types_611, 0, sizeof(struct list$1sTypeph*));
right_value769 = (void*)0;
right_value770 = (void*)0;
right_value771 = (void*)0;
memset(&param_names_613, 0, sizeof(struct list$1charph*));
right_value772 = (void*)0;
right_value773 = (void*)0;
memset(&param_default_parametors_614, 0, sizeof(struct list$1charph*));
right_value774 = (void*)0;
right_value775 = (void*)0;
memset(&header_buf_615, 0, sizeof(struct buffer*));
right_value776 = (void*)0;
memset(&i_616, 0, sizeof(int));
memset(&param_type_617, 0, sizeof(struct sType*));
memset(&param_name_618, 0, sizeof(char*));
right_value777 = (void*)0;
right_value778 = (void*)0;
right_value779 = (void*)0;
right_value780 = (void*)0;
right_value781 = (void*)0;
memset(&fun_619, 0, sizeof(struct sFun*));
right_value782 = (void*)0;
memset(&fun2_620, 0, sizeof(struct sFun*));
right_value783 = (void*)0;
right_value784 = (void*)0;
right_value785 = (void*)0;
right_value789 = (void*)0;
memset(&node_621, 0, sizeof(struct sNode*));
right_value790 = (void*)0;
right_value791 = (void*)0;
    last_code_580=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj160=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_581=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj161=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_582=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj162=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_583=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_584=((void*)0);
    real_fun_name_585=(char*)come_increment_ref_count(((char*)(right_value756=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value756 = come_decrement_ref_count2(right_value756, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    user_real_fun_name_586=(char*)come_increment_ref_count(((char*)(right_value757=create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1))));
    right_value757 = come_decrement_ref_count2(right_value757, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    user_finalizer_587=map$2charphsFunphp_operator_load_element(info->funcs,user_real_fun_name_586);
    type2_588=(struct sType*)come_increment_ref_count(((struct sType*)(right_value758=solve_generics(type,type,info))));
    come_call_finalizer3(right_value758,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type=type2_588;
    klass_589=type->mClass;
    if(type->mPointerNum>0&&klass_589->mStruct) {
        source_590=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value760=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value759=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2003, "buffer"))))))));
        come_call_finalizer3(right_value759,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value760,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_590,123);
        if(user_finalizer_587) {
            char source2_591[1024];
            memset(&source2_591, 0, sizeof(char)            *(1024)            );
            snprintf(source2_591,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_586);
            buffer_append_str(source_590,source2_591);
        }
        klass_589=map$2charphsClassphp_operator_load_element(info->classes,klass_589->mName);
        for(        o2_saved_592=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_589->mFields)),it_595=list$1tuple2$2charphsTypephph_begin((o2_saved_592));        !list$1tuple2$2charphsTypephph_end((o2_saved_592));        it_595=list$1tuple2$2charphsTypephph_next((o2_saved_592))        ){
            multiple_assign_var10=it_595;
            name_598=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            field_type_599=(struct sType*)come_increment_ref_count(multiple_assign_var10->v2);
            if(string_operator_equals(type->mClass->mName,field_type_599->mClass->mName)&&type->mPointerNum==field_type_599->mPointerNum&&field_type_599->mHeap) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(field_type_599->mHeap) {
                char source2_600[1024];
                memset(&source2_600, 0, sizeof(char)                *(1024)                );
                snprintf(source2_600,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n",name_598,name_598);
                buffer_append_str(source_590,source2_600);
            }
            name_598 = come_decrement_ref_count2(name_598, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_599,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_592,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_590,125);
        p_601=info->p;
        sline_602=info->sline;
        sname_603=(char*)come_increment_ref_count(info->sname);
        head_604=info->head;
        source3_605=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj163=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_590);
        come_call_finalizer3(__dec_obj163,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_590->buf;
        info->head=source_590->buf;
        __dec_obj164=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value761=__builtin_string(real_fun_name_585))));
        __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value761 = come_decrement_ref_count2(right_value761, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_606=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value762=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer3(right_value762,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        result_type_607=(struct sType*)come_increment_ref_count(((struct sType*)(right_value764=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value763=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2049, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer3(right_value763,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value764,sType_finalize, 0, 1, 0, 0, __result_obj__);
        name_608=(char*)come_increment_ref_count(((char*)(right_value765=string_clone(real_fun_name_585))));
        right_value765 = come_decrement_ref_count2(right_value765, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self_type_609=(struct sType*)come_increment_ref_count(((struct sType*)(right_value766=sType_clone(type))));
        come_call_finalizer3(right_value766,sType_finalize, 0, 1, 0, 0, __result_obj__);
        self_type_609->mHeap=(_Bool)0;
        if(self_type_609->mPointerNum>1) {
            self_type_609->mPointerNum=1;
        }
        {__list_values21___610[0]=come_increment_ref_count(self_type_609);
}        param_types_611=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value768=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value767=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2056, "struct list$1sTypeph")))),1,__list_values21___610))));
        come_call_finalizer3(right_value767,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value768,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values22___612[0]=come_increment_ref_count(((char*)(right_value769=__builtin_string("self"))));
}        param_names_613=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value771=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value770=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2057, "struct list$1charph")))),1,__list_values22___612))));
        right_value769 = come_decrement_ref_count2(right_value769, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value770,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value771,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_614=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value773=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value772=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2058, "list$1charph"))))))));
        come_call_finalizer3(right_value772,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value773,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_614,((void*)0));
        header_buf_615=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value775=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value774=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2061, "buffer"))))))));
        come_call_finalizer3(right_value774,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value775,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_615,((char*)(right_value776=make_come_type_name_string(result_type_607,info))));
        right_value776 = come_decrement_ref_count2(right_value776, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_615," ");
        buffer_append_str(header_buf_615,real_fun_name_585);
        buffer_append_str(header_buf_615,"(");
        for(        i_616=0;        i_616<list$1sTypeph_length(param_types_611);        i_616++        ){
            param_type_617=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_611,i_616), "05function.c", 2069, 5));
            param_name_618=((char*)come_null_check(list$1charphp_operator_load_element(param_names_613,i_616), "05function.c", 2070, 6));
            buffer_append_str(header_buf_615,((char*)(right_value777=make_come_type_name_string(param_type_617,info))));
            right_value777 = come_decrement_ref_count2(right_value777, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_615," ");
            buffer_append_str(header_buf_615,param_name_618);
            if(i_616!=list$1sTypeph_length(param_types_611)-1) {
                buffer_append_str(header_buf_615,",");
            }
        }
        buffer_append_str(header_buf_615,")");
        result_type_607->mStatic=(_Bool)0;
        fun_619=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value781=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value778=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2084, "sFun")))),(char*)come_increment_ref_count(name_608),(struct sType*)come_increment_ref_count(result_type_607),(struct list$1sTypeph*)come_increment_ref_count(param_types_611),(struct list$1charph*)come_increment_ref_count(param_names_613),(struct list$1charph*)come_increment_ref_count(param_default_parametors_614),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_606),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value779=buffer_to_string(header_buf_615)))),(char*)come_increment_ref_count(((char*)(right_value780=__builtin_string("")))),info))));
        come_call_finalizer3(right_value778,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value779 = come_decrement_ref_count2(right_value779, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value780 = come_decrement_ref_count2(right_value780, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value781,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        fun2_620=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value782=__builtin_string(fun_name))));
        right_value782 = come_decrement_ref_count2(right_value782, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_620==((void*)0)||fun2_620->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value783=string_clone(name_608)))),(struct sFun*)come_increment_ref_count(fun_619));
            right_value783 = come_decrement_ref_count2(right_value783, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        finalizer_584=fun_619;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2100, "struct sNode");
        _inf_obj_value9=come_increment_ref_count(((struct sFunNode*)(right_value785=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value784=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2100, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_619),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sFunNode_finalize;
        _inf_value9->clone=(void*)sFunNode_clone;
        _inf_value9->compile=(void*)sFunNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sFunNode_kind;
        node_621=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value789=_inf_value9)));
        come_call_finalizer3(right_value784,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value785,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value789) { right_value789 = come_decrement_ref_count2(right_value789, ((struct sNode*)right_value789)->finalize, ((struct sNode*)right_value789)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(!node_compile(node_621,info)) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj167=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_605);
        come_call_finalizer3(__dec_obj167,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_601;
        info->head=head_604;
        info->sline=sline_602;
        __dec_obj168=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_603);
        __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_590,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_603 = come_decrement_ref_count2(sname_603, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_605,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_606,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_607,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_608 = come_decrement_ref_count2(name_608, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_609,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_611,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_613,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_614,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_615,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_619,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_621) { node_621 = come_decrement_ref_count2(node_621, ((struct sNode*)node_621)->finalize, ((struct sNode*)node_621)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_583;
    __dec_obj169=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_580);
    __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj170=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_581);
    __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj171=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_582);
    __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result250__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value791=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value790=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2120, "struct tuple2$2sFunpcharph")))),finalizer_584,(char*)come_increment_ref_count(real_fun_name_585))));
    last_code_580 = come_decrement_ref_count2(last_code_580, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_581 = come_decrement_ref_count2(last_code2_581, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_582 = come_decrement_ref_count2(last_code3_582, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_585 = come_decrement_ref_count2(real_fun_name_585, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    user_real_fun_name_586 = come_decrement_ref_count2(user_real_fun_name_586, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_588,sType_finalize, 0, 0, 0, 0, (void*)0);
    right_value790 = come_decrement_ref_count2(right_value790, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value791,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result250__;
    last_code_580 = come_decrement_ref_count2(last_code_580, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_581 = come_decrement_ref_count2(last_code2_581, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_582 = come_decrement_ref_count2(last_code3_582, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_585 = come_decrement_ref_count2(real_fun_name_585, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    user_real_fun_name_586 = come_decrement_ref_count2(user_real_fun_name_586, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_588,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct tuple2$2charphsTypeph* result_593;
struct tuple2$2charphsTypeph* __result240__;
struct tuple2$2charphsTypeph* __result241__;
struct tuple2$2charphsTypeph* result_594;
struct tuple2$2charphsTypeph* __result242__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_593, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_594, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(self==((void*)0)) {
                memset(&result_593,0,sizeof(struct tuple2$2charphsTypeph*));
                __result240__ = __result_obj__ = result_593;
                return __result240__;
            }
            self->it=self->head;
            if(self->it) {
                __result241__ = __result_obj__ = self->it->item;
                return __result241__;
            }
            memset(&result_594,0,sizeof(struct tuple2$2charphsTypeph*));
            __result242__ = __result_obj__ = result_594;
            return __result242__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
_Bool __result243__;
            __result243__ = self==((void*)0)||self->it==((void*)0);
            return __result243__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct tuple2$2charphsTypeph* result_596;
struct tuple2$2charphsTypeph* __result244__;
struct tuple2$2charphsTypeph* __result245__;
struct tuple2$2charphsTypeph* result_597;
struct tuple2$2charphsTypeph* __result246__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_596, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_597, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(self==((void*)0)||self->it==((void*)0)) {
                memset(&result_596,0,sizeof(struct tuple2$2charphsTypeph*));
                __result244__ = __result_obj__ = result_596;
                return __result244__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result245__ = __result_obj__ = self->it->item;
                return __result245__;
            }
            memset(&result_597,0,sizeof(struct tuple2$2charphsTypeph*));
            __result246__ = __result_obj__ = result_597;
            return __result246__;
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
void* __result_obj__;
char* __dec_obj172;
struct tuple2$2sFunpcharph* __result249__;
memset(&__result_obj__, 0, sizeof(void*));
        self->v1=v1;
        __dec_obj172=self->v2;
        self->v2=(char*)come_increment_ref_count(v2);
        __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
        __result249__ = __result_obj__ = self;
        come_call_finalizer3(self,tuple2$2sFunpcharphp_finalize, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result249__;
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
char* last_code_623;
char* __dec_obj173;
char* last_code2_624;
char* __dec_obj174;
char* last_code3_625;
char* __dec_obj175;
struct sClass* current_stack_frame_struct_626;
struct sFun* finalizer_627;
void* right_value792;
char* real_fun_name_628;
void* right_value793;
struct sType* type2_629;
struct sClass* klass_630;
void* right_value794;
void* right_value795;
struct buffer* source_631;
struct list$1tuple2$2charphsTypephph* o2_saved_632;
struct tuple2$2charphsTypeph* it_633;
struct tuple2$2charphsTypeph* multiple_assign_var11;
char* name_634;
struct sType* field_type_635;
char* p_637;
int sline_638;
char* sname_639;
char* head_640;
struct buffer* source3_641;
struct buffer* __dec_obj176;
void* right_value796;
char* __dec_obj177;
void* right_value797;
struct sBlock* block_642;
void* right_value798;
void* right_value799;
struct sType* result_type_643;
void* right_value800;
char* name_644;
void* right_value801;
struct sType* self_type_645;
struct sType* __list_values23___646[1];
void* right_value802;
void* right_value803;
struct list$1sTypeph* param_types_647;
void* right_value804;
char* __list_values24___648[1];
void* right_value805;
void* right_value806;
struct list$1charph* param_names_649;
void* right_value807;
void* right_value808;
struct list$1charph* param_default_parametors_650;
void* right_value809;
void* right_value810;
struct buffer* header_buf_651;
void* right_value811;
int i_652;
struct sType* param_type_653;
char* param_name_654;
void* right_value812;
void* right_value813;
void* right_value814;
void* right_value815;
void* right_value816;
struct sFun* fun_655;
void* right_value817;
struct sFun* fun2_656;
void* right_value818;
void* right_value819;
void* right_value820;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* right_value824;
struct sNode* node_657;
struct buffer* __dec_obj180;
char* __dec_obj181;
char* __dec_obj182;
char* __dec_obj183;
char* __dec_obj184;
void* right_value825;
void* right_value826;
struct tuple2$2sFunpcharph* __result253__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_623, 0, sizeof(char*));
memset(&last_code2_624, 0, sizeof(char*));
memset(&last_code3_625, 0, sizeof(char*));
memset(&current_stack_frame_struct_626, 0, sizeof(struct sClass*));
memset(&finalizer_627, 0, sizeof(struct sFun*));
right_value792 = (void*)0;
memset(&real_fun_name_628, 0, sizeof(char*));
right_value793 = (void*)0;
memset(&type2_629, 0, sizeof(struct sType*));
memset(&klass_630, 0, sizeof(struct sClass*));
right_value794 = (void*)0;
right_value795 = (void*)0;
memset(&source_631, 0, sizeof(struct buffer*));
memset(&o2_saved_632, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_633, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&p_637, 0, sizeof(char*));
memset(&sline_638, 0, sizeof(int));
memset(&sname_639, 0, sizeof(char*));
memset(&head_640, 0, sizeof(char*));
memset(&source3_641, 0, sizeof(struct buffer*));
right_value796 = (void*)0;
right_value797 = (void*)0;
memset(&block_642, 0, sizeof(struct sBlock*));
right_value798 = (void*)0;
right_value799 = (void*)0;
memset(&result_type_643, 0, sizeof(struct sType*));
right_value800 = (void*)0;
memset(&name_644, 0, sizeof(char*));
right_value801 = (void*)0;
memset(&self_type_645, 0, sizeof(struct sType*));
right_value802 = (void*)0;
right_value803 = (void*)0;
memset(&param_types_647, 0, sizeof(struct list$1sTypeph*));
right_value804 = (void*)0;
right_value805 = (void*)0;
right_value806 = (void*)0;
memset(&param_names_649, 0, sizeof(struct list$1charph*));
right_value807 = (void*)0;
right_value808 = (void*)0;
memset(&param_default_parametors_650, 0, sizeof(struct list$1charph*));
right_value809 = (void*)0;
right_value810 = (void*)0;
memset(&header_buf_651, 0, sizeof(struct buffer*));
right_value811 = (void*)0;
memset(&i_652, 0, sizeof(int));
memset(&param_type_653, 0, sizeof(struct sType*));
memset(&param_name_654, 0, sizeof(char*));
right_value812 = (void*)0;
right_value813 = (void*)0;
right_value814 = (void*)0;
right_value815 = (void*)0;
right_value816 = (void*)0;
memset(&fun_655, 0, sizeof(struct sFun*));
right_value817 = (void*)0;
memset(&fun2_656, 0, sizeof(struct sFun*));
right_value818 = (void*)0;
right_value819 = (void*)0;
right_value820 = (void*)0;
right_value824 = (void*)0;
memset(&node_657, 0, sizeof(struct sNode*));
right_value825 = (void*)0;
right_value826 = (void*)0;
    last_code_623=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj173=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_624=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj174=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_625=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj175=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_626=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_627=((void*)0);
    real_fun_name_628=(char*)come_increment_ref_count(((char*)(right_value792=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value792 = come_decrement_ref_count2(right_value792, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_629=(struct sType*)come_increment_ref_count(((struct sType*)(right_value793=solve_generics(type,type,info))));
    come_call_finalizer3(right_value793,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type=type2_629;
    klass_630=type->mClass;
    if(type->mPointerNum>0&&klass_630->mStruct) {
        source_631=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value795=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value794=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2147, "buffer"))))))));
        come_call_finalizer3(right_value794,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value795,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_631,123);
        klass_630=map$2charphsClassphp_operator_load_element(info->classes,klass_630->mName);
        for(        o2_saved_632=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_630->mFields)),it_633=list$1tuple2$2charphsTypephph_begin((o2_saved_632));        !list$1tuple2$2charphsTypephph_end((o2_saved_632));        it_633=list$1tuple2$2charphsTypephph_next((o2_saved_632))        ){
            multiple_assign_var11=it_633;
            name_634=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            field_type_635=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
            if(string_operator_equals(type->mClass->mName,field_type_635->mClass->mName)&&type->mPointerNum==field_type_635->mPointerNum&&field_type_635->mHeap) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(field_type_635->mHeap) {
                char source2_636[1024];
                memset(&source2_636, 0, sizeof(char)                *(1024)                );
                snprintf(source2_636,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { force_delete borrow self.%s; }\n",name_634,name_634);
                buffer_append_str(source_631,source2_636);
            }
            name_634 = come_decrement_ref_count2(name_634, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_635,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_632,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_631,125);
        p_637=info->p;
        sline_638=info->sline;
        sname_639=(char*)come_increment_ref_count(info->sname);
        head_640=info->head;
        source3_641=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj176=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_631);
        come_call_finalizer3(__dec_obj176,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_631->buf;
        info->head=source_631->buf;
        __dec_obj177=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value796=__builtin_string(real_fun_name_628))));
        __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value796 = come_decrement_ref_count2(right_value796, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_642=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value797=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer3(right_value797,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        result_type_643=(struct sType*)come_increment_ref_count(((struct sType*)(right_value799=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value798=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2186, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer3(right_value798,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value799,sType_finalize, 0, 1, 0, 0, __result_obj__);
        name_644=(char*)come_increment_ref_count(((char*)(right_value800=string_clone(real_fun_name_628))));
        right_value800 = come_decrement_ref_count2(right_value800, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self_type_645=(struct sType*)come_increment_ref_count(((struct sType*)(right_value801=sType_clone(type))));
        come_call_finalizer3(right_value801,sType_finalize, 0, 1, 0, 0, __result_obj__);
        self_type_645->mHeap=(_Bool)0;
        if(self_type_645->mPointerNum>1) {
            self_type_645->mPointerNum=1;
        }
        {__list_values23___646[0]=come_increment_ref_count(self_type_645);
}        param_types_647=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value803=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value802=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2193, "struct list$1sTypeph")))),1,__list_values23___646))));
        come_call_finalizer3(right_value802,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value803,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values24___648[0]=come_increment_ref_count(((char*)(right_value804=__builtin_string("self"))));
}        param_names_649=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value806=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value805=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2194, "struct list$1charph")))),1,__list_values24___648))));
        right_value804 = come_decrement_ref_count2(right_value804, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value805,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value806,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_650=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value808=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value807=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2195, "list$1charph"))))))));
        come_call_finalizer3(right_value807,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value808,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_650,((void*)0));
        header_buf_651=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value810=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value809=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2198, "buffer"))))))));
        come_call_finalizer3(right_value809,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value810,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_651,((char*)(right_value811=make_come_type_name_string(result_type_643,info))));
        right_value811 = come_decrement_ref_count2(right_value811, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_651," ");
        buffer_append_str(header_buf_651,real_fun_name_628);
        buffer_append_str(header_buf_651,"(");
        for(        i_652=0;        i_652<list$1sTypeph_length(param_types_647);        i_652++        ){
            param_type_653=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_647,i_652), "05function.c", 2206, 7));
            param_name_654=((char*)come_null_check(list$1charphp_operator_load_element(param_names_649,i_652), "05function.c", 2207, 8));
            buffer_append_str(header_buf_651,((char*)(right_value812=make_come_type_name_string(param_type_653,info))));
            right_value812 = come_decrement_ref_count2(right_value812, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_651," ");
            buffer_append_str(header_buf_651,param_name_654);
            if(i_652!=list$1sTypeph_length(param_types_647)-1) {
                buffer_append_str(header_buf_651,",");
            }
        }
        buffer_append_str(header_buf_651,")");
        result_type_643->mStatic=(_Bool)0;
        fun_655=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value816=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value813=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2221, "sFun")))),(char*)come_increment_ref_count(name_644),(struct sType*)come_increment_ref_count(result_type_643),(struct list$1sTypeph*)come_increment_ref_count(param_types_647),(struct list$1charph*)come_increment_ref_count(param_names_649),(struct list$1charph*)come_increment_ref_count(param_default_parametors_650),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_642),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value814=buffer_to_string(header_buf_651)))),(char*)come_increment_ref_count(((char*)(right_value815=__builtin_string("")))),info))));
        come_call_finalizer3(right_value813,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value814 = come_decrement_ref_count2(right_value814, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value815 = come_decrement_ref_count2(right_value815, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value816,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        fun2_656=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value817=__builtin_string(fun_name))));
        right_value817 = come_decrement_ref_count2(right_value817, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_656==((void*)0)||fun2_656->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value818=string_clone(name_644)))),(struct sFun*)come_increment_ref_count(fun_655));
            right_value818 = come_decrement_ref_count2(right_value818, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        finalizer_627=fun_655;
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2237, "struct sNode");
        _inf_obj_value10=come_increment_ref_count(((struct sFunNode*)(right_value820=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value819=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2237, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_655),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sFunNode_finalize;
        _inf_value10->clone=(void*)sFunNode_clone;
        _inf_value10->compile=(void*)sFunNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sFunNode_kind;
        node_657=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value824=_inf_value10)));
        come_call_finalizer3(right_value819,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value820,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value824) { right_value824 = come_decrement_ref_count2(right_value824, ((struct sNode*)right_value824)->finalize, ((struct sNode*)right_value824)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(!node_compile(node_657,info)) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj180=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_641);
        come_call_finalizer3(__dec_obj180,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_637;
        info->head=head_640;
        info->sline=sline_638;
        __dec_obj181=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_639);
        __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_631,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_639 = come_decrement_ref_count2(sname_639, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_641,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_642,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_643,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_644 = come_decrement_ref_count2(name_644, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_645,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_647,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_649,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_650,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_651,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_655,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_657) { node_657 = come_decrement_ref_count2(node_657, ((struct sNode*)node_657)->finalize, ((struct sNode*)node_657)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_626;
    __dec_obj182=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_623);
    __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj183=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_624);
    __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj184=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_625);
    __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result253__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value826=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value825=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2257, "struct tuple2$2sFunpcharph")))),finalizer_627,(char*)come_increment_ref_count(real_fun_name_628))));
    last_code_623 = come_decrement_ref_count2(last_code_623, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_624 = come_decrement_ref_count2(last_code2_624, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_625 = come_decrement_ref_count2(last_code3_625, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_628 = come_decrement_ref_count2(real_fun_name_628, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_629,sType_finalize, 0, 0, 0, 0, (void*)0);
    right_value825 = come_decrement_ref_count2(right_value825, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value826,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result253__;
    last_code_623 = come_decrement_ref_count2(last_code_623, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_624 = come_decrement_ref_count2(last_code2_624, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_625 = come_decrement_ref_count2(last_code3_625, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_628 = come_decrement_ref_count2(real_fun_name_628, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_629,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_659;
char* __dec_obj185;
char* last_code2_660;
char* __dec_obj186;
char* last_code3_661;
char* __dec_obj187;
struct sClass* current_stack_frame_struct_662;
struct sFun* equaler_663;
void* right_value827;
char* real_fun_name_664;
void* right_value828;
struct sType* type2_665;
struct sClass* klass_666;
void* right_value829;
void* right_value830;
struct buffer* source_667;
char* name_668;
struct list$1tuple2$2charphsTypephph* o2_saved_670;
struct tuple2$2charphsTypeph* it_671;
struct tuple2$2charphsTypeph* multiple_assign_var12;
char* name_672;
struct sType* field_type_673;
char* p_675;
int sline_676;
char* sname_677;
char* head_678;
struct buffer* source3_679;
struct buffer* __dec_obj188;
void* right_value831;
char* __dec_obj189;
void* right_value832;
struct sBlock* block_680;
void* right_value833;
void* right_value834;
struct sType* result_type_681;
void* right_value835;
char* name_682;
void* right_value836;
struct sType* left_type_683;
void* right_value837;
struct sType* right_type_684;
struct sType* __list_values25___685[2];
void* right_value838;
void* right_value839;
struct list$1sTypeph* param_types_686;
void* right_value840;
void* right_value841;
char* __list_values26___687[2];
void* right_value842;
void* right_value843;
struct list$1charph* param_names_688;
void* right_value844;
void* right_value845;
struct list$1charph* param_default_parametors_689;
void* right_value846;
void* right_value847;
struct buffer* header_buf_690;
void* right_value848;
int i_691;
struct sType* param_type_692;
char* param_name_693;
void* right_value849;
void* right_value850;
void* right_value851;
void* right_value852;
void* right_value853;
struct sFun* fun_694;
void* right_value854;
struct sFun* fun2_695;
void* right_value855;
void* right_value856;
void* right_value857;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* right_value861;
struct sNode* node_696;
struct buffer* __dec_obj192;
char* __dec_obj193;
char* __dec_obj194;
char* __dec_obj195;
char* __dec_obj196;
void* right_value862;
void* right_value863;
struct tuple2$2sFunpcharph* __result256__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_659, 0, sizeof(char*));
memset(&last_code2_660, 0, sizeof(char*));
memset(&last_code3_661, 0, sizeof(char*));
memset(&current_stack_frame_struct_662, 0, sizeof(struct sClass*));
memset(&equaler_663, 0, sizeof(struct sFun*));
right_value827 = (void*)0;
memset(&real_fun_name_664, 0, sizeof(char*));
right_value828 = (void*)0;
memset(&type2_665, 0, sizeof(struct sType*));
memset(&klass_666, 0, sizeof(struct sClass*));
right_value829 = (void*)0;
right_value830 = (void*)0;
memset(&source_667, 0, sizeof(struct buffer*));
memset(&name_668, 0, sizeof(char*));
memset(&o2_saved_670, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_671, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&p_675, 0, sizeof(char*));
memset(&sline_676, 0, sizeof(int));
memset(&sname_677, 0, sizeof(char*));
memset(&head_678, 0, sizeof(char*));
memset(&source3_679, 0, sizeof(struct buffer*));
right_value831 = (void*)0;
right_value832 = (void*)0;
memset(&block_680, 0, sizeof(struct sBlock*));
right_value833 = (void*)0;
right_value834 = (void*)0;
memset(&result_type_681, 0, sizeof(struct sType*));
right_value835 = (void*)0;
memset(&name_682, 0, sizeof(char*));
right_value836 = (void*)0;
memset(&left_type_683, 0, sizeof(struct sType*));
right_value837 = (void*)0;
memset(&right_type_684, 0, sizeof(struct sType*));
right_value838 = (void*)0;
right_value839 = (void*)0;
memset(&param_types_686, 0, sizeof(struct list$1sTypeph*));
right_value840 = (void*)0;
right_value841 = (void*)0;
right_value842 = (void*)0;
right_value843 = (void*)0;
memset(&param_names_688, 0, sizeof(struct list$1charph*));
right_value844 = (void*)0;
right_value845 = (void*)0;
memset(&param_default_parametors_689, 0, sizeof(struct list$1charph*));
right_value846 = (void*)0;
right_value847 = (void*)0;
memset(&header_buf_690, 0, sizeof(struct buffer*));
right_value848 = (void*)0;
memset(&i_691, 0, sizeof(int));
memset(&param_type_692, 0, sizeof(struct sType*));
memset(&param_name_693, 0, sizeof(char*));
right_value849 = (void*)0;
right_value850 = (void*)0;
right_value851 = (void*)0;
right_value852 = (void*)0;
right_value853 = (void*)0;
memset(&fun_694, 0, sizeof(struct sFun*));
right_value854 = (void*)0;
memset(&fun2_695, 0, sizeof(struct sFun*));
right_value855 = (void*)0;
right_value856 = (void*)0;
right_value857 = (void*)0;
right_value861 = (void*)0;
memset(&node_696, 0, sizeof(struct sNode*));
right_value862 = (void*)0;
right_value863 = (void*)0;
    last_code_659=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj185=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_660=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj186=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_661=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj187=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_662=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_663=((void*)0);
    real_fun_name_664=(char*)come_increment_ref_count(((char*)(right_value827=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value827 = come_decrement_ref_count2(right_value827, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_665=(struct sType*)come_increment_ref_count(((struct sType*)(right_value828=solve_generics(type,type,info))));
    come_call_finalizer3(right_value828,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type=type2_665;
    klass_666=type->mClass;
    if(type->mPointerNum>0&&!klass_666->mNumber) {
        source_667=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value830=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value829=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2282, "buffer"))))))));
        come_call_finalizer3(right_value829,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value830,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_667,123);
        if(klass_666->mProtocol) {
            name_668="_protocol_obj";
            char source2_669[1024];
            memset(&source2_669, 0, sizeof(char)            *(1024)            );
            snprintf(source2_669,1024,"return left.%s.equals(right.%s);\n",name_668,name_668);
            buffer_append_str(source_667,source2_669);
        }
        else {
            klass_666=map$2charphsClassphp_operator_load_element(info->classes,klass_666->mName);
            for(            o2_saved_670=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_666->mFields)),it_671=list$1tuple2$2charphsTypephph_begin((o2_saved_670));            !list$1tuple2$2charphsTypephph_end((o2_saved_670));            it_671=list$1tuple2$2charphsTypephph_next((o2_saved_670))            ){
                multiple_assign_var12=it_671;
                name_672=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_673=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                if(string_operator_equals(type->mClass->mName,field_type_673->mClass->mName)&&type->mPointerNum==field_type_673->mPointerNum&&field_type_673->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_674[1024];
                memset(&source2_674, 0, sizeof(char)                *(1024)                );
                snprintf(source2_674,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_672,name_672);
                buffer_append_str(source_667,source2_674);
                name_672 = come_decrement_ref_count2(name_672, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_673,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_670,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_667,"return true;");
        buffer_append_char(source_667,125);
        p_675=info->p;
        sline_676=info->sline;
        sname_677=(char*)come_increment_ref_count(info->sname);
        head_678=info->head;
        source3_679=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj188=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_667);
        come_call_finalizer3(__dec_obj188,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_667->buf;
        info->head=source_667->buf;
        __dec_obj189=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value831=__builtin_string(real_fun_name_664))));
        __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value831 = come_decrement_ref_count2(right_value831, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_680=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value832=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer3(right_value832,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        result_type_681=(struct sType*)come_increment_ref_count(((struct sType*)(right_value834=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value833=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2328, "sType")))),"bool",(_Bool)0,info))));
        come_call_finalizer3(right_value833,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value834,sType_finalize, 0, 1, 0, 0, __result_obj__);
        name_682=(char*)come_increment_ref_count(((char*)(right_value835=string_clone(real_fun_name_664))));
        right_value835 = come_decrement_ref_count2(right_value835, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        left_type_683=(struct sType*)come_increment_ref_count(((struct sType*)(right_value836=sType_clone(type))));
        come_call_finalizer3(right_value836,sType_finalize, 0, 1, 0, 0, __result_obj__);
        left_type_683->mHeap=(_Bool)0;
        right_type_684=(struct sType*)come_increment_ref_count(((struct sType*)(right_value837=sType_clone(type))));
        come_call_finalizer3(right_value837,sType_finalize, 0, 1, 0, 0, __result_obj__);
        right_type_684->mHeap=(_Bool)0;
        {__list_values25___685[0]=come_increment_ref_count(left_type_683);
__list_values25___685[1]=come_increment_ref_count(right_type_684);
}        param_types_686=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value839=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value838=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2334, "struct list$1sTypeph")))),2,__list_values25___685))));
        come_call_finalizer3(right_value838,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value839,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values26___687[0]=come_increment_ref_count(((char*)(right_value840=__builtin_string("left"))));
__list_values26___687[1]=come_increment_ref_count(((char*)(right_value841=__builtin_string("right"))));
}        param_names_688=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value843=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value842=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2335, "struct list$1charph")))),2,__list_values26___687))));
        right_value840 = come_decrement_ref_count2(right_value840, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value841 = come_decrement_ref_count2(right_value841, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value842,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value843,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_689=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value845=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value844=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2336, "list$1charph"))))))));
        come_call_finalizer3(right_value844,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value845,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_689,((void*)0));
        list$1charph_push_back(param_default_parametors_689,((void*)0));
        header_buf_690=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value847=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value846=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2340, "buffer"))))))));
        come_call_finalizer3(right_value846,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value847,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_690,((char*)(right_value848=make_come_type_name_string(result_type_681,info))));
        right_value848 = come_decrement_ref_count2(right_value848, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_690," ");
        buffer_append_str(header_buf_690,real_fun_name_664);
        buffer_append_str(header_buf_690,"(");
        for(        i_691=0;        i_691<list$1sTypeph_length(param_types_686);        i_691++        ){
            param_type_692=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_686,i_691), "05function.c", 2348, 9));
            param_name_693=((char*)come_null_check(list$1charphp_operator_load_element(param_names_688,i_691), "05function.c", 2349, 10));
            buffer_append_str(header_buf_690,((char*)(right_value849=make_come_type_name_string(param_type_692,info))));
            right_value849 = come_decrement_ref_count2(right_value849, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_690," ");
            buffer_append_str(header_buf_690,param_name_693);
            if(i_691!=list$1sTypeph_length(param_types_686)-1) {
                buffer_append_str(header_buf_690,",");
            }
        }
        buffer_append_str(header_buf_690,")");
        result_type_681->mStatic=(_Bool)0;
        fun_694=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value853=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value850=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2363, "sFun")))),(char*)come_increment_ref_count(name_682),(struct sType*)come_increment_ref_count(result_type_681),(struct list$1sTypeph*)come_increment_ref_count(param_types_686),(struct list$1charph*)come_increment_ref_count(param_names_688),(struct list$1charph*)come_increment_ref_count(param_default_parametors_689),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_680),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value851=buffer_to_string(header_buf_690)))),(char*)come_increment_ref_count(((char*)(right_value852=__builtin_string("")))),info))));
        come_call_finalizer3(right_value850,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value851 = come_decrement_ref_count2(right_value851, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value852 = come_decrement_ref_count2(right_value852, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value853,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        fun2_695=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value854=__builtin_string(fun_name))));
        right_value854 = come_decrement_ref_count2(right_value854, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_695==((void*)0)||fun2_695->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value855=string_clone(name_682)))),(struct sFun*)come_increment_ref_count(fun_694));
            right_value855 = come_decrement_ref_count2(right_value855, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        equaler_663=fun_694;
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2379, "struct sNode");
        _inf_obj_value11=come_increment_ref_count(((struct sFunNode*)(right_value857=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value856=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2379, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_694),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sFunNode_finalize;
        _inf_value11->clone=(void*)sFunNode_clone;
        _inf_value11->compile=(void*)sFunNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sFunNode_kind;
        node_696=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value861=_inf_value11)));
        come_call_finalizer3(right_value856,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value857,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value861) { right_value861 = come_decrement_ref_count2(right_value861, ((struct sNode*)right_value861)->finalize, ((struct sNode*)right_value861)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(!node_compile(node_696,info)) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj192=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_679);
        come_call_finalizer3(__dec_obj192,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_675;
        info->head=head_678;
        info->sline=sline_676;
        __dec_obj193=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_677);
        __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_667,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_677 = come_decrement_ref_count2(sname_677, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_679,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_680,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_681,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_682 = come_decrement_ref_count2(name_682, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_683,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_684,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_686,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_688,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_689,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_690,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_694,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_696) { node_696 = come_decrement_ref_count2(node_696, ((struct sNode*)node_696)->finalize, ((struct sNode*)node_696)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_662;
    __dec_obj194=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_659);
    __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj195=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_660);
    __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj196=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_661);
    __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result256__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value863=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value862=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2399, "struct tuple2$2sFunpcharph")))),equaler_663,(char*)come_increment_ref_count(real_fun_name_664))));
    last_code_659 = come_decrement_ref_count2(last_code_659, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_660 = come_decrement_ref_count2(last_code2_660, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_661 = come_decrement_ref_count2(last_code3_661, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_664 = come_decrement_ref_count2(real_fun_name_664, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_665,sType_finalize, 0, 0, 0, 0, (void*)0);
    right_value862 = come_decrement_ref_count2(right_value862, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value863,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result256__;
    last_code_659 = come_decrement_ref_count2(last_code_659, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_660 = come_decrement_ref_count2(last_code2_660, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_661 = come_decrement_ref_count2(last_code3_661, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_664 = come_decrement_ref_count2(real_fun_name_664, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_665,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_698;
char* __dec_obj197;
char* last_code2_699;
char* __dec_obj198;
char* last_code3_700;
char* __dec_obj199;
struct sClass* current_stack_frame_struct_701;
struct sFun* equaler_702;
void* right_value864;
char* real_fun_name_703;
void* right_value865;
struct sType* type2_704;
struct sClass* klass_705;
void* right_value866;
void* right_value867;
struct buffer* source_706;
char* name_707;
int i_710;
struct list$1tuple2$2charphsTypephph* o2_saved_711;
struct tuple2$2charphsTypeph* it_712;
struct tuple2$2charphsTypeph* multiple_assign_var13;
char* name_713;
struct sType* field_type_714;
char* p_718;
int sline_719;
char* sname_720;
char* head_721;
struct buffer* source3_722;
struct buffer* __dec_obj200;
void* right_value868;
char* __dec_obj201;
void* right_value869;
struct sBlock* block_723;
void* right_value870;
void* right_value871;
struct sType* result_type_724;
void* right_value872;
char* name_725;
void* right_value873;
struct sType* left_type_726;
void* right_value874;
struct sType* right_type_727;
struct sType* __list_values27___728[2];
void* right_value875;
void* right_value876;
struct list$1sTypeph* param_types_729;
void* right_value877;
void* right_value878;
char* __list_values28___730[2];
void* right_value879;
void* right_value880;
struct list$1charph* param_names_731;
void* right_value881;
void* right_value882;
struct list$1charph* param_default_parametors_732;
void* right_value883;
void* right_value884;
struct buffer* header_buf_733;
void* right_value885;
int i_734;
struct sType* param_type_735;
char* param_name_736;
void* right_value886;
void* right_value887;
void* right_value888;
void* right_value889;
void* right_value890;
struct sFun* fun_737;
void* right_value891;
struct sFun* fun2_738;
void* right_value892;
void* right_value893;
void* right_value894;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* right_value898;
struct sNode* node_739;
struct buffer* __dec_obj204;
char* __dec_obj205;
char* __dec_obj206;
char* __dec_obj207;
char* __dec_obj208;
void* right_value899;
void* right_value900;
struct tuple2$2sFunpcharph* __result261__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_698, 0, sizeof(char*));
memset(&last_code2_699, 0, sizeof(char*));
memset(&last_code3_700, 0, sizeof(char*));
memset(&current_stack_frame_struct_701, 0, sizeof(struct sClass*));
memset(&equaler_702, 0, sizeof(struct sFun*));
right_value864 = (void*)0;
memset(&real_fun_name_703, 0, sizeof(char*));
right_value865 = (void*)0;
memset(&type2_704, 0, sizeof(struct sType*));
memset(&klass_705, 0, sizeof(struct sClass*));
right_value866 = (void*)0;
right_value867 = (void*)0;
memset(&source_706, 0, sizeof(struct buffer*));
memset(&name_707, 0, sizeof(char*));
memset(&i_710, 0, sizeof(int));
memset(&o2_saved_711, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_712, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&p_718, 0, sizeof(char*));
memset(&sline_719, 0, sizeof(int));
memset(&sname_720, 0, sizeof(char*));
memset(&head_721, 0, sizeof(char*));
memset(&source3_722, 0, sizeof(struct buffer*));
right_value868 = (void*)0;
right_value869 = (void*)0;
memset(&block_723, 0, sizeof(struct sBlock*));
right_value870 = (void*)0;
right_value871 = (void*)0;
memset(&result_type_724, 0, sizeof(struct sType*));
right_value872 = (void*)0;
memset(&name_725, 0, sizeof(char*));
right_value873 = (void*)0;
memset(&left_type_726, 0, sizeof(struct sType*));
right_value874 = (void*)0;
memset(&right_type_727, 0, sizeof(struct sType*));
right_value875 = (void*)0;
right_value876 = (void*)0;
memset(&param_types_729, 0, sizeof(struct list$1sTypeph*));
right_value877 = (void*)0;
right_value878 = (void*)0;
right_value879 = (void*)0;
right_value880 = (void*)0;
memset(&param_names_731, 0, sizeof(struct list$1charph*));
right_value881 = (void*)0;
right_value882 = (void*)0;
memset(&param_default_parametors_732, 0, sizeof(struct list$1charph*));
right_value883 = (void*)0;
right_value884 = (void*)0;
memset(&header_buf_733, 0, sizeof(struct buffer*));
right_value885 = (void*)0;
memset(&i_734, 0, sizeof(int));
memset(&param_type_735, 0, sizeof(struct sType*));
memset(&param_name_736, 0, sizeof(char*));
right_value886 = (void*)0;
right_value887 = (void*)0;
right_value888 = (void*)0;
right_value889 = (void*)0;
right_value890 = (void*)0;
memset(&fun_737, 0, sizeof(struct sFun*));
right_value891 = (void*)0;
memset(&fun2_738, 0, sizeof(struct sFun*));
right_value892 = (void*)0;
right_value893 = (void*)0;
right_value894 = (void*)0;
right_value898 = (void*)0;
memset(&node_739, 0, sizeof(struct sNode*));
right_value899 = (void*)0;
right_value900 = (void*)0;
    last_code_698=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj197=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_699=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj198=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_700=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj199=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_701=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_702=((void*)0);
    real_fun_name_703=(char*)come_increment_ref_count(((char*)(right_value864=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value864 = come_decrement_ref_count2(right_value864, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_704=(struct sType*)come_increment_ref_count(((struct sType*)(right_value865=solve_generics(type,type,info))));
    come_call_finalizer3(right_value865,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type=type2_704;
    klass_705=type->mClass;
    if(type->mPointerNum>0&&!klass_705->mNumber) {
        source_706=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value867=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value866=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2424, "buffer"))))))));
        come_call_finalizer3(right_value866,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value867,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_706,123);
        if(klass_705->mProtocol) {
            name_707="_protocol_obj";
            char source2_708[1024];
            memset(&source2_708, 0, sizeof(char)            *(1024)            );
            snprintf(source2_708,1024,"return !left.%s.equals(right.%s);\n",name_707,name_707);
            buffer_append_str(source_706,source2_708);
        }
        else {
            char source2_709[1024];
            memset(&source2_709, 0, sizeof(char)            *(1024)            );
            snprintf(source2_709,1024,"return !(");
            buffer_append_str(source_706,source2_709);
            i_710=0;
            klass_705=map$2charphsClassphp_operator_load_element(info->classes,klass_705->mName);
            for(            o2_saved_711=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_705->mFields)),it_712=list$1tuple2$2charphsTypephph_begin((o2_saved_711));            !list$1tuple2$2charphsTypephph_end((o2_saved_711));            it_712=list$1tuple2$2charphsTypephph_next((o2_saved_711))            ){
                multiple_assign_var13=it_712;
                name_713=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_714=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                if(string_operator_equals(type->mClass->mName,field_type_714->mClass->mName)&&type->mPointerNum==field_type_714->mPointerNum&&field_type_714->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_715[1024];
                memset(&source2_715, 0, sizeof(char)                *(1024)                );
                snprintf(source2_715,1024,"left.%s.equals(right.%s)",name_713,name_713);
                buffer_append_str(source_706,source2_715);
                if(i_710==list$1tuple2$2charphsTypephph_length(klass_705->mFields)-1) {
                    char source2_716[1024];
                    memset(&source2_716, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_716,1024,");");
                    buffer_append_str(source_706,source2_716);
                }
                else {
                    char source2_717[1024];
                    memset(&source2_717, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_717,1024," && ");
                    buffer_append_str(source_706,source2_717);
                }
                i_710++;
                name_713 = come_decrement_ref_count2(name_713, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_714,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_711,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_706,125);
        p_718=info->p;
        sline_719=info->sline;
        sname_720=(char*)come_increment_ref_count(info->sname);
        head_721=info->head;
        source3_722=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj200=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_706);
        come_call_finalizer3(__dec_obj200,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_706->buf;
        info->head=source_706->buf;
        __dec_obj201=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value868=__builtin_string(real_fun_name_703))));
        __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value868 = come_decrement_ref_count2(right_value868, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_723=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value869=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer3(right_value869,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        result_type_724=(struct sType*)come_increment_ref_count(((struct sType*)(right_value871=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value870=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2487, "sType")))),"bool",(_Bool)0,info))));
        come_call_finalizer3(right_value870,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value871,sType_finalize, 0, 1, 0, 0, __result_obj__);
        name_725=(char*)come_increment_ref_count(((char*)(right_value872=string_clone(real_fun_name_703))));
        right_value872 = come_decrement_ref_count2(right_value872, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        left_type_726=(struct sType*)come_increment_ref_count(((struct sType*)(right_value873=sType_clone(type))));
        come_call_finalizer3(right_value873,sType_finalize, 0, 1, 0, 0, __result_obj__);
        left_type_726->mHeap=(_Bool)0;
        right_type_727=(struct sType*)come_increment_ref_count(((struct sType*)(right_value874=sType_clone(type))));
        come_call_finalizer3(right_value874,sType_finalize, 0, 1, 0, 0, __result_obj__);
        right_type_727->mHeap=(_Bool)0;
        {__list_values27___728[0]=come_increment_ref_count(left_type_726);
__list_values27___728[1]=come_increment_ref_count(right_type_727);
}        param_types_729=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value876=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value875=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2493, "struct list$1sTypeph")))),2,__list_values27___728))));
        come_call_finalizer3(right_value875,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value876,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values28___730[0]=come_increment_ref_count(((char*)(right_value877=__builtin_string("left"))));
__list_values28___730[1]=come_increment_ref_count(((char*)(right_value878=__builtin_string("right"))));
}        param_names_731=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value880=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value879=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2494, "struct list$1charph")))),2,__list_values28___730))));
        right_value877 = come_decrement_ref_count2(right_value877, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value878 = come_decrement_ref_count2(right_value878, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value879,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value880,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_732=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value882=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value881=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2495, "list$1charph"))))))));
        come_call_finalizer3(right_value881,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value882,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_732,((void*)0));
        list$1charph_push_back(param_default_parametors_732,((void*)0));
        header_buf_733=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value884=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value883=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2499, "buffer"))))))));
        come_call_finalizer3(right_value883,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value884,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_733,((char*)(right_value885=make_come_type_name_string(result_type_724,info))));
        right_value885 = come_decrement_ref_count2(right_value885, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_733," ");
        buffer_append_str(header_buf_733,real_fun_name_703);
        buffer_append_str(header_buf_733,"(");
        for(        i_734=0;        i_734<list$1sTypeph_length(param_types_729);        i_734++        ){
            param_type_735=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_729,i_734), "05function.c", 2507, 11));
            param_name_736=((char*)come_null_check(list$1charphp_operator_load_element(param_names_731,i_734), "05function.c", 2508, 12));
            buffer_append_str(header_buf_733,((char*)(right_value886=make_come_type_name_string(param_type_735,info))));
            right_value886 = come_decrement_ref_count2(right_value886, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_733," ");
            buffer_append_str(header_buf_733,param_name_736);
            if(i_734!=list$1sTypeph_length(param_types_729)-1) {
                buffer_append_str(header_buf_733,",");
            }
        }
        buffer_append_str(header_buf_733,")");
        result_type_724->mStatic=(_Bool)0;
        fun_737=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value890=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value887=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2522, "sFun")))),(char*)come_increment_ref_count(name_725),(struct sType*)come_increment_ref_count(result_type_724),(struct list$1sTypeph*)come_increment_ref_count(param_types_729),(struct list$1charph*)come_increment_ref_count(param_names_731),(struct list$1charph*)come_increment_ref_count(param_default_parametors_732),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_723),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value888=buffer_to_string(header_buf_733)))),(char*)come_increment_ref_count(((char*)(right_value889=__builtin_string("")))),info))));
        come_call_finalizer3(right_value887,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value888 = come_decrement_ref_count2(right_value888, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value889 = come_decrement_ref_count2(right_value889, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value890,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        fun2_738=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value891=__builtin_string(fun_name))));
        right_value891 = come_decrement_ref_count2(right_value891, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_738==((void*)0)||fun2_738->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value892=string_clone(name_725)))),(struct sFun*)come_increment_ref_count(fun_737));
            right_value892 = come_decrement_ref_count2(right_value892, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        equaler_702=fun_737;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2538, "struct sNode");
        _inf_obj_value12=come_increment_ref_count(((struct sFunNode*)(right_value894=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value893=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2538, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_737),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sFunNode_finalize;
        _inf_value12->clone=(void*)sFunNode_clone;
        _inf_value12->compile=(void*)sFunNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sFunNode_kind;
        node_739=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value898=_inf_value12)));
        come_call_finalizer3(right_value893,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value894,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value898) { right_value898 = come_decrement_ref_count2(right_value898, ((struct sNode*)right_value898)->finalize, ((struct sNode*)right_value898)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(!node_compile(node_739,info)) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj204=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_722);
        come_call_finalizer3(__dec_obj204,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_718;
        info->head=head_721;
        info->sline=sline_719;
        __dec_obj205=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_720);
        __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_706,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_720 = come_decrement_ref_count2(sname_720, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_722,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_723,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_724,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_725 = come_decrement_ref_count2(name_725, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_726,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_727,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_729,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_731,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_732,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_733,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_737,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_739) { node_739 = come_decrement_ref_count2(node_739, ((struct sNode*)node_739)->finalize, ((struct sNode*)node_739)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_701;
    __dec_obj206=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_698);
    __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj207=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_699);
    __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj208=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_700);
    __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result261__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value900=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value899=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2558, "struct tuple2$2sFunpcharph")))),equaler_702,(char*)come_increment_ref_count(real_fun_name_703))));
    last_code_698 = come_decrement_ref_count2(last_code_698, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_699 = come_decrement_ref_count2(last_code2_699, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_700 = come_decrement_ref_count2(last_code3_700, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_703 = come_decrement_ref_count2(real_fun_name_703, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_704,sType_finalize, 0, 0, 0, 0, (void*)0);
    right_value899 = come_decrement_ref_count2(right_value899, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value900,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result261__;
    last_code_698 = come_decrement_ref_count2(last_code_698, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_699 = come_decrement_ref_count2(last_code2_699, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_700 = come_decrement_ref_count2(last_code3_700, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_703 = come_decrement_ref_count2(real_fun_name_703, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_704,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
int __result257__;
int __result258__;
                    if(self==((void*)0)) {
                        __result257__ = 0;
                        return __result257__;
                    }
                    __result258__ = self->len;
                    return __result258__;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_741;
char* __dec_obj209;
char* last_code2_742;
char* __dec_obj210;
char* last_code3_743;
char* __dec_obj211;
struct sClass* current_stack_frame_struct_744;
struct sFun* equaler_745;
void* right_value901;
char* real_fun_name_746;
void* right_value902;
struct sType* type2_747;
struct sClass* klass_748;
void* right_value903;
void* right_value904;
struct buffer* source_749;
char* name_750;
struct list$1tuple2$2charphsTypephph* o2_saved_752;
struct tuple2$2charphsTypeph* it_753;
struct tuple2$2charphsTypeph* multiple_assign_var14;
char* name_754;
struct sType* field_type_755;
char* p_757;
int sline_758;
char* sname_759;
char* head_760;
struct buffer* source3_761;
struct buffer* __dec_obj212;
void* right_value905;
char* __dec_obj213;
void* right_value906;
struct sBlock* block_762;
void* right_value907;
void* right_value908;
struct sType* result_type_763;
void* right_value909;
char* name_764;
void* right_value910;
struct sType* left_type_765;
void* right_value911;
struct sType* right_type_766;
struct sType* __list_values29___767[2];
void* right_value912;
void* right_value913;
struct list$1sTypeph* param_types_768;
void* right_value914;
void* right_value915;
char* __list_values30___769[2];
void* right_value916;
void* right_value917;
struct list$1charph* param_names_770;
void* right_value918;
void* right_value919;
struct list$1charph* param_default_parametors_771;
void* right_value920;
void* right_value921;
struct buffer* header_buf_772;
void* right_value922;
int i_773;
struct sType* param_type_774;
char* param_name_775;
void* right_value923;
void* right_value924;
void* right_value925;
void* right_value926;
void* right_value927;
struct sFun* fun_776;
void* right_value928;
struct sFun* fun2_777;
void* right_value929;
void* right_value930;
void* right_value931;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* right_value935;
struct sNode* node_778;
struct buffer* __dec_obj216;
char* __dec_obj217;
char* __dec_obj218;
char* __dec_obj219;
char* __dec_obj220;
void* right_value936;
void* right_value937;
struct tuple2$2sFunpcharph* __result264__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_741, 0, sizeof(char*));
memset(&last_code2_742, 0, sizeof(char*));
memset(&last_code3_743, 0, sizeof(char*));
memset(&current_stack_frame_struct_744, 0, sizeof(struct sClass*));
memset(&equaler_745, 0, sizeof(struct sFun*));
right_value901 = (void*)0;
memset(&real_fun_name_746, 0, sizeof(char*));
right_value902 = (void*)0;
memset(&type2_747, 0, sizeof(struct sType*));
memset(&klass_748, 0, sizeof(struct sClass*));
right_value903 = (void*)0;
right_value904 = (void*)0;
memset(&source_749, 0, sizeof(struct buffer*));
memset(&name_750, 0, sizeof(char*));
memset(&o2_saved_752, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_753, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&p_757, 0, sizeof(char*));
memset(&sline_758, 0, sizeof(int));
memset(&sname_759, 0, sizeof(char*));
memset(&head_760, 0, sizeof(char*));
memset(&source3_761, 0, sizeof(struct buffer*));
right_value905 = (void*)0;
right_value906 = (void*)0;
memset(&block_762, 0, sizeof(struct sBlock*));
right_value907 = (void*)0;
right_value908 = (void*)0;
memset(&result_type_763, 0, sizeof(struct sType*));
right_value909 = (void*)0;
memset(&name_764, 0, sizeof(char*));
right_value910 = (void*)0;
memset(&left_type_765, 0, sizeof(struct sType*));
right_value911 = (void*)0;
memset(&right_type_766, 0, sizeof(struct sType*));
right_value912 = (void*)0;
right_value913 = (void*)0;
memset(&param_types_768, 0, sizeof(struct list$1sTypeph*));
right_value914 = (void*)0;
right_value915 = (void*)0;
right_value916 = (void*)0;
right_value917 = (void*)0;
memset(&param_names_770, 0, sizeof(struct list$1charph*));
right_value918 = (void*)0;
right_value919 = (void*)0;
memset(&param_default_parametors_771, 0, sizeof(struct list$1charph*));
right_value920 = (void*)0;
right_value921 = (void*)0;
memset(&header_buf_772, 0, sizeof(struct buffer*));
right_value922 = (void*)0;
memset(&i_773, 0, sizeof(int));
memset(&param_type_774, 0, sizeof(struct sType*));
memset(&param_name_775, 0, sizeof(char*));
right_value923 = (void*)0;
right_value924 = (void*)0;
right_value925 = (void*)0;
right_value926 = (void*)0;
right_value927 = (void*)0;
memset(&fun_776, 0, sizeof(struct sFun*));
right_value928 = (void*)0;
memset(&fun2_777, 0, sizeof(struct sFun*));
right_value929 = (void*)0;
right_value930 = (void*)0;
right_value931 = (void*)0;
right_value935 = (void*)0;
memset(&node_778, 0, sizeof(struct sNode*));
right_value936 = (void*)0;
right_value937 = (void*)0;
    last_code_741=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj209=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_742=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj210=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_743=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj211=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_744=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_745=((void*)0);
    real_fun_name_746=(char*)come_increment_ref_count(((char*)(right_value901=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value901 = come_decrement_ref_count2(right_value901, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_747=(struct sType*)come_increment_ref_count(((struct sType*)(right_value902=solve_generics(type,type,info))));
    come_call_finalizer3(right_value902,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type=type2_747;
    klass_748=type->mClass;
    if(type->mPointerNum>0&&!klass_748->mNumber) {
        source_749=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value904=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value903=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2583, "buffer"))))))));
        come_call_finalizer3(right_value903,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value904,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_749,123);
        if(klass_748->mProtocol) {
            name_750="_protocol_obj";
            char source2_751[1024];
            memset(&source2_751, 0, sizeof(char)            *(1024)            );
            snprintf(source2_751,1024,"return left.%s.equals(right.%s);\n",name_750,name_750);
            buffer_append_str(source_749,source2_751);
        }
        else {
            klass_748=map$2charphsClassphp_operator_load_element(info->classes,klass_748->mName);
            for(            o2_saved_752=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_748->mFields)),it_753=list$1tuple2$2charphsTypephph_begin((o2_saved_752));            !list$1tuple2$2charphsTypephph_end((o2_saved_752));            it_753=list$1tuple2$2charphsTypephph_next((o2_saved_752))            ){
                multiple_assign_var14=it_753;
                name_754=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_755=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                if(string_operator_equals(type->mClass->mName,field_type_755->mClass->mName)&&type->mPointerNum==field_type_755->mPointerNum&&field_type_755->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_756[1024];
                memset(&source2_756, 0, sizeof(char)                *(1024)                );
                snprintf(source2_756,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_754,name_754);
                buffer_append_str(source_749,source2_756);
                name_754 = come_decrement_ref_count2(name_754, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_755,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_752,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_749,"return true;\n");
        buffer_append_char(source_749,125);
        p_757=info->p;
        sline_758=info->sline;
        sname_759=(char*)come_increment_ref_count(info->sname);
        head_760=info->head;
        source3_761=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj212=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_749);
        come_call_finalizer3(__dec_obj212,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_749->buf;
        info->head=source_749->buf;
        __dec_obj213=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value905=__builtin_string(real_fun_name_746))));
        __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value905 = come_decrement_ref_count2(right_value905, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_762=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value906=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer3(right_value906,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        result_type_763=(struct sType*)come_increment_ref_count(((struct sType*)(right_value908=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value907=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2629, "sType")))),"bool",(_Bool)0,info))));
        come_call_finalizer3(right_value907,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value908,sType_finalize, 0, 1, 0, 0, __result_obj__);
        name_764=(char*)come_increment_ref_count(((char*)(right_value909=string_clone(real_fun_name_746))));
        right_value909 = come_decrement_ref_count2(right_value909, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        left_type_765=(struct sType*)come_increment_ref_count(((struct sType*)(right_value910=sType_clone(type))));
        come_call_finalizer3(right_value910,sType_finalize, 0, 1, 0, 0, __result_obj__);
        left_type_765->mHeap=(_Bool)0;
        right_type_766=(struct sType*)come_increment_ref_count(((struct sType*)(right_value911=sType_clone(type))));
        come_call_finalizer3(right_value911,sType_finalize, 0, 1, 0, 0, __result_obj__);
        right_type_766->mHeap=(_Bool)0;
        {__list_values29___767[0]=come_increment_ref_count(left_type_765);
__list_values29___767[1]=come_increment_ref_count(right_type_766);
}        param_types_768=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value913=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value912=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2635, "struct list$1sTypeph")))),2,__list_values29___767))));
        come_call_finalizer3(right_value912,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value913,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values30___769[0]=come_increment_ref_count(((char*)(right_value914=__builtin_string("left"))));
__list_values30___769[1]=come_increment_ref_count(((char*)(right_value915=__builtin_string("right"))));
}        param_names_770=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value917=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value916=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2636, "struct list$1charph")))),2,__list_values30___769))));
        right_value914 = come_decrement_ref_count2(right_value914, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value915 = come_decrement_ref_count2(right_value915, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value916,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value917,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_771=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value919=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value918=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2637, "list$1charph"))))))));
        come_call_finalizer3(right_value918,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value919,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_771,((void*)0));
        list$1charph_push_back(param_default_parametors_771,((void*)0));
        header_buf_772=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value921=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value920=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2641, "buffer"))))))));
        come_call_finalizer3(right_value920,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value921,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_772,((char*)(right_value922=make_come_type_name_string(result_type_763,info))));
        right_value922 = come_decrement_ref_count2(right_value922, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_772," ");
        buffer_append_str(header_buf_772,real_fun_name_746);
        buffer_append_str(header_buf_772,"(");
        for(        i_773=0;        i_773<list$1sTypeph_length(param_types_768);        i_773++        ){
            param_type_774=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_768,i_773), "05function.c", 2649, 13));
            param_name_775=((char*)come_null_check(list$1charphp_operator_load_element(param_names_770,i_773), "05function.c", 2650, 14));
            buffer_append_str(header_buf_772,((char*)(right_value923=make_come_type_name_string(param_type_774,info))));
            right_value923 = come_decrement_ref_count2(right_value923, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_772," ");
            buffer_append_str(header_buf_772,param_name_775);
            if(i_773!=list$1sTypeph_length(param_types_768)-1) {
                buffer_append_str(header_buf_772,",");
            }
        }
        buffer_append_str(header_buf_772,")");
        result_type_763->mStatic=(_Bool)0;
        fun_776=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value927=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value924=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2664, "sFun")))),(char*)come_increment_ref_count(name_764),(struct sType*)come_increment_ref_count(result_type_763),(struct list$1sTypeph*)come_increment_ref_count(param_types_768),(struct list$1charph*)come_increment_ref_count(param_names_770),(struct list$1charph*)come_increment_ref_count(param_default_parametors_771),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_762),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value925=buffer_to_string(header_buf_772)))),(char*)come_increment_ref_count(((char*)(right_value926=__builtin_string("")))),info))));
        come_call_finalizer3(right_value924,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value925 = come_decrement_ref_count2(right_value925, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value926 = come_decrement_ref_count2(right_value926, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value927,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        fun2_777=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value928=__builtin_string(fun_name))));
        right_value928 = come_decrement_ref_count2(right_value928, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_777==((void*)0)||fun2_777->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value929=string_clone(name_764)))),(struct sFun*)come_increment_ref_count(fun_776));
            right_value929 = come_decrement_ref_count2(right_value929, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        equaler_745=fun_776;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2680, "struct sNode");
        _inf_obj_value13=come_increment_ref_count(((struct sFunNode*)(right_value931=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value930=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2680, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_776),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sFunNode_finalize;
        _inf_value13->clone=(void*)sFunNode_clone;
        _inf_value13->compile=(void*)sFunNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sFunNode_kind;
        node_778=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value935=_inf_value13)));
        come_call_finalizer3(right_value930,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value931,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value935) { right_value935 = come_decrement_ref_count2(right_value935, ((struct sNode*)right_value935)->finalize, ((struct sNode*)right_value935)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(!node_compile(node_778,info)) {
            err_msg(info,"compiling error(X)");
            exit(2);
        }
        __dec_obj216=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_761);
        come_call_finalizer3(__dec_obj216,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_757;
        info->head=head_760;
        info->sline=sline_758;
        __dec_obj217=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_759);
        __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_749,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_759 = come_decrement_ref_count2(sname_759, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_761,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_762,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_763,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_764 = come_decrement_ref_count2(name_764, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_765,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_766,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_768,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_770,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_771,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_772,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_776,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_778) { node_778 = come_decrement_ref_count2(node_778, ((struct sNode*)node_778)->finalize, ((struct sNode*)node_778)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_744;
    __dec_obj218=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_741);
    __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj219=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_742);
    __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj220=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_743);
    __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result264__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value937=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value936=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2700, "struct tuple2$2sFunpcharph")))),equaler_745,(char*)come_increment_ref_count(real_fun_name_746))));
    last_code_741 = come_decrement_ref_count2(last_code_741, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_742 = come_decrement_ref_count2(last_code2_742, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_743 = come_decrement_ref_count2(last_code3_743, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_746 = come_decrement_ref_count2(real_fun_name_746, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_747,sType_finalize, 0, 0, 0, 0, (void*)0);
    right_value936 = come_decrement_ref_count2(right_value936, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value937,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result264__;
    last_code_741 = come_decrement_ref_count2(last_code_741, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_742 = come_decrement_ref_count2(last_code2_742, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_743 = come_decrement_ref_count2(last_code3_743, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_746 = come_decrement_ref_count2(real_fun_name_746, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_747,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_780;
char* __dec_obj221;
char* last_code2_781;
char* __dec_obj222;
char* last_code3_782;
char* __dec_obj223;
struct sClass* current_stack_frame_struct_783;
struct sFun* cloner_784;
void* right_value938;
char* real_fun_name_785;
void* right_value939;
struct sType* type2_786;
struct sClass* klass_787;
void* right_value940;
void* right_value941;
struct buffer* source_788;
void* right_value942;
void* right_value943;
char* name_789;
struct list$1tuple2$2charphsTypephph* o2_saved_791;
struct tuple2$2charphsTypeph* it_792;
struct tuple2$2charphsTypeph* multiple_assign_var15;
char* name_793;
struct sType* field_type_794;
struct list$1tuple2$2charphsTypephph* o2_saved_797;
struct tuple2$2charphsTypeph* it_798;
struct tuple2$2charphsTypeph* multiple_assign_var16;
char* name_799;
struct sType* field_type_800;
void* right_value944;
char* p_804;
int sline_805;
char* sname_806;
struct buffer* source3_807;
char* head_808;
struct buffer* __dec_obj224;
void* right_value945;
char* __dec_obj225;
void* right_value946;
struct sBlock* block_809;
void* right_value947;
struct sType* result_type_810;
void* right_value948;
char* name_811;
void* right_value949;
struct sType* self_type_812;
struct sType* __list_values31___813[1];
void* right_value950;
void* right_value951;
struct list$1sTypeph* param_types_814;
void* right_value952;
char* __list_values32___815[1];
void* right_value953;
void* right_value954;
struct list$1charph* param_names_816;
void* right_value955;
void* right_value956;
struct list$1charph* param_default_parametors_817;
void* right_value957;
void* right_value958;
struct buffer* header_buf_818;
void* right_value959;
int i_819;
struct sType* param_type_820;
char* param_name_821;
void* right_value960;
void* right_value961;
void* right_value962;
void* right_value963;
void* right_value964;
struct sFun* fun_822;
void* right_value965;
struct sFun* fun2_823;
void* right_value966;
void* right_value967;
void* right_value968;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* right_value972;
struct sNode* node_824;
char* __dec_obj228;
struct buffer* __dec_obj229;
char* __dec_obj230;
char* __dec_obj231;
char* __dec_obj232;
void* right_value973;
void* right_value974;
struct tuple2$2sFunpcharph* __result267__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_780, 0, sizeof(char*));
memset(&last_code2_781, 0, sizeof(char*));
memset(&last_code3_782, 0, sizeof(char*));
memset(&current_stack_frame_struct_783, 0, sizeof(struct sClass*));
memset(&cloner_784, 0, sizeof(struct sFun*));
right_value938 = (void*)0;
memset(&real_fun_name_785, 0, sizeof(char*));
right_value939 = (void*)0;
memset(&type2_786, 0, sizeof(struct sType*));
memset(&klass_787, 0, sizeof(struct sClass*));
right_value940 = (void*)0;
right_value941 = (void*)0;
memset(&source_788, 0, sizeof(struct buffer*));
right_value942 = (void*)0;
right_value943 = (void*)0;
memset(&name_789, 0, sizeof(char*));
memset(&o2_saved_791, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_792, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&o2_saved_797, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_798, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value944 = (void*)0;
memset(&p_804, 0, sizeof(char*));
memset(&sline_805, 0, sizeof(int));
memset(&sname_806, 0, sizeof(char*));
memset(&source3_807, 0, sizeof(struct buffer*));
memset(&head_808, 0, sizeof(char*));
right_value945 = (void*)0;
right_value946 = (void*)0;
memset(&block_809, 0, sizeof(struct sBlock*));
right_value947 = (void*)0;
memset(&result_type_810, 0, sizeof(struct sType*));
right_value948 = (void*)0;
memset(&name_811, 0, sizeof(char*));
right_value949 = (void*)0;
memset(&self_type_812, 0, sizeof(struct sType*));
right_value950 = (void*)0;
right_value951 = (void*)0;
memset(&param_types_814, 0, sizeof(struct list$1sTypeph*));
right_value952 = (void*)0;
right_value953 = (void*)0;
right_value954 = (void*)0;
memset(&param_names_816, 0, sizeof(struct list$1charph*));
right_value955 = (void*)0;
right_value956 = (void*)0;
memset(&param_default_parametors_817, 0, sizeof(struct list$1charph*));
right_value957 = (void*)0;
right_value958 = (void*)0;
memset(&header_buf_818, 0, sizeof(struct buffer*));
right_value959 = (void*)0;
memset(&i_819, 0, sizeof(int));
memset(&param_type_820, 0, sizeof(struct sType*));
memset(&param_name_821, 0, sizeof(char*));
right_value960 = (void*)0;
right_value961 = (void*)0;
right_value962 = (void*)0;
right_value963 = (void*)0;
right_value964 = (void*)0;
memset(&fun_822, 0, sizeof(struct sFun*));
right_value965 = (void*)0;
memset(&fun2_823, 0, sizeof(struct sFun*));
right_value966 = (void*)0;
right_value967 = (void*)0;
right_value968 = (void*)0;
right_value972 = (void*)0;
memset(&node_824, 0, sizeof(struct sNode*));
right_value973 = (void*)0;
right_value974 = (void*)0;
    last_code_780=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj221=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_781=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj222=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_782=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj223=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_783=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_784=((void*)0);
    real_fun_name_785=(char*)come_increment_ref_count(((char*)(right_value938=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value938 = come_decrement_ref_count2(right_value938, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_786=(struct sType*)come_increment_ref_count(((struct sType*)(right_value939=solve_generics(type,type,info))));
    come_call_finalizer3(right_value939,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type=type2_786;
    klass_787=type->mClass;
    if(type->mPointerNum>0&&!klass_787->mNumber) {
        source_788=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value941=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value940=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2725, "buffer"))))))));
        come_call_finalizer3(right_value940,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value941,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(source_788,"{\n");
        buffer_append_str(source_788,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_str(source_788,((char*)(right_value943=xsprintf("var result = new %s;\n",((char*)(right_value942=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info)))))));
        right_value942 = come_decrement_ref_count2(right_value942, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value943 = come_decrement_ref_count2(right_value943, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(klass_787->mProtocol) {
            name_789="_protocol_obj";
            char source2_790[1024];
            memset(&source2_790, 0, sizeof(char)            *(1024)            );
            snprintf(source2_790,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_788,source2_790);
            klass_787=map$2charphsClassphp_operator_load_element(info->classes,klass_787->mName);
            for(            o2_saved_791=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_787->mFields)),it_792=list$1tuple2$2charphsTypephph_begin((o2_saved_791));            !list$1tuple2$2charphsTypephph_end((o2_saved_791));            it_792=list$1tuple2$2charphsTypephph_next((o2_saved_791))            ){
                multiple_assign_var15=it_792;
                name_793=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_794=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                if(string_operator_equals(type->mClass->mName,field_type_794->mClass->mName)&&type->mPointerNum==field_type_794->mPointerNum&&field_type_794->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(string_operator_equals(name_793,"_protocol_obj")) {
                }
                else {
                    if(list$1sNodeph_length(field_type_794->mArrayNum)>0) {
                        char source2_795[1024];
                        memset(&source2_795, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_795,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_793,name_793,name_793);
                        buffer_append_str(source_788,source2_795);
                    }
                    else {
                        char source2_796[1024];
                        memset(&source2_796, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_796,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_793,name_793);
                        buffer_append_str(source_788,source2_796);
                    }
                }
                name_793 = come_decrement_ref_count2(name_793, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_794,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_791,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_787=map$2charphsClassphp_operator_load_element(info->classes,klass_787->mName);
            for(            o2_saved_797=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_787->mFields)),it_798=list$1tuple2$2charphsTypephph_begin((o2_saved_797));            !list$1tuple2$2charphsTypephph_end((o2_saved_797));            it_798=list$1tuple2$2charphsTypephph_next((o2_saved_797))            ){
                multiple_assign_var16=it_798;
                name_799=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_800=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                if(string_operator_equals(type->mClass->mName,field_type_800->mClass->mName)&&type->mPointerNum==field_type_800->mPointerNum&&field_type_800->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(field_type_800->mHeap) {
                    char source2_801[1024];
                    memset(&source2_801, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_801,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_799,name_799,name_799);
                    buffer_append_str(source_788,source2_801);
                }
                else {
                    if(list$1sNodeph_length(field_type_800->mArrayNum)>0) {
                        char source2_802[1024];
                        memset(&source2_802, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_802,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_799,name_799,name_799);
                        buffer_append_str(source_788,source2_802);
                    }
                    else {
                        char source2_803[1024];
                        memset(&source2_803, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_803,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_799,name_799);
                        buffer_append_str(source_788,source2_803);
                    }
                }
                name_799 = come_decrement_ref_count2(name_799, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_800,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_797,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_788,((char*)(right_value944=xsprintf("return result;"))));
        right_value944 = come_decrement_ref_count2(right_value944, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_788,125);
        p_804=info->p;
        sline_805=info->sline;
        sname_806=(char*)come_increment_ref_count(info->sname);
        source3_807=(struct buffer*)come_increment_ref_count(info->source);
        head_808=info->head;
        __dec_obj224=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_788);
        come_call_finalizer3(__dec_obj224,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj225=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value945=__builtin_string(real_fun_name_785))));
        __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value945 = come_decrement_ref_count2(right_value945, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=1;
        block_809=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value946=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer3(right_value946,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        result_type_810=(struct sType*)come_increment_ref_count(((struct sType*)(right_value947=sType_clone(type))));
        come_call_finalizer3(right_value947,sType_finalize, 0, 1, 0, 0, __result_obj__);
        name_811=(char*)come_increment_ref_count(((char*)(right_value948=string_clone(real_fun_name_785))));
        right_value948 = come_decrement_ref_count2(right_value948, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self_type_812=(struct sType*)come_increment_ref_count(((struct sType*)(right_value949=sType_clone(type))));
        come_call_finalizer3(right_value949,sType_finalize, 0, 1, 0, 0, __result_obj__);
        self_type_812->mHeap=(_Bool)0;
        {__list_values31___813[0]=come_increment_ref_count(self_type_812);
}        param_types_814=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value951=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value950=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2819, "struct list$1sTypeph")))),1,__list_values31___813))));
        come_call_finalizer3(right_value950,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value951,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values32___815[0]=come_increment_ref_count(((char*)(right_value952=__builtin_string("self"))));
}        param_names_816=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value954=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value953=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2820, "struct list$1charph")))),1,__list_values32___815))));
        right_value952 = come_decrement_ref_count2(right_value952, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value953,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value954,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_817=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value956=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value955=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2821, "list$1charph"))))))));
        come_call_finalizer3(right_value955,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value956,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_817,((void*)0));
        header_buf_818=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value958=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value957=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2824, "buffer"))))))));
        come_call_finalizer3(right_value957,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value958,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_818,((char*)(right_value959=make_come_type_name_string(result_type_810,info))));
        right_value959 = come_decrement_ref_count2(right_value959, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_818," ");
        buffer_append_str(header_buf_818,real_fun_name_785);
        buffer_append_str(header_buf_818,"(");
        for(        i_819=0;        i_819<list$1sTypeph_length(param_types_814);        i_819++        ){
            param_type_820=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_814,i_819), "05function.c", 2832, 15));
            param_name_821=((char*)come_null_check(list$1charphp_operator_load_element(param_names_816,i_819), "05function.c", 2833, 16));
            buffer_append_str(header_buf_818,((char*)(right_value960=make_come_type_name_string(param_type_820,info))));
            right_value960 = come_decrement_ref_count2(right_value960, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_818," ");
            buffer_append_str(header_buf_818,param_name_821);
            if(i_819!=list$1sTypeph_length(param_types_814)-1) {
                buffer_append_str(header_buf_818,",");
            }
        }
        buffer_append_str(header_buf_818,")");
        result_type_810->mStatic=(_Bool)0;
        fun_822=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value964=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value961=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2847, "sFun")))),(char*)come_increment_ref_count(name_811),(struct sType*)come_increment_ref_count(result_type_810),(struct list$1sTypeph*)come_increment_ref_count(param_types_814),(struct list$1charph*)come_increment_ref_count(param_names_816),(struct list$1charph*)come_increment_ref_count(param_default_parametors_817),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_809),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value962=buffer_to_string(header_buf_818)))),(char*)come_increment_ref_count(((char*)(right_value963=__builtin_string("")))),info))));
        come_call_finalizer3(right_value961,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value962 = come_decrement_ref_count2(right_value962, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value963 = come_decrement_ref_count2(right_value963, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value964,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        fun_822->mCloner=(_Bool)1;
        fun2_823=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value965=__builtin_string(fun_name))));
        right_value965 = come_decrement_ref_count2(right_value965, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_823==((void*)0)||fun2_823->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value966=string_clone(name_811)))),(struct sFun*)come_increment_ref_count(fun_822));
            right_value966 = come_decrement_ref_count2(right_value966, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        cloner_784=fun_822;
        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2864, "struct sNode");
        _inf_obj_value14=come_increment_ref_count(((struct sFunNode*)(right_value968=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value967=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2864, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_822),info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sFunNode_finalize;
        _inf_value14->clone=(void*)sFunNode_clone;
        _inf_value14->compile=(void*)sFunNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sFunNode_kind;
        node_824=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value972=_inf_value14)));
        come_call_finalizer3(right_value967,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value968,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value972) { right_value972 = come_decrement_ref_count2(right_value972, ((struct sNode*)right_value972)->finalize, ((struct sNode*)right_value972)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(!node_compile(node_824,info)) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        __dec_obj228=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_806);
        __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_805;
        __dec_obj229=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_807);
        come_call_finalizer3(__dec_obj229,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_804;
        info->head=head_808;
        info->sline=sline_805;
        come_call_finalizer3(source_788,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_806 = come_decrement_ref_count2(sname_806, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_807,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_809,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_810,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_811 = come_decrement_ref_count2(name_811, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_812,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_814,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_816,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_817,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_818,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_822,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_824) { node_824 = come_decrement_ref_count2(node_824, ((struct sNode*)node_824)->finalize, ((struct sNode*)node_824)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_783;
    __dec_obj230=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_780);
    __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj231=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_781);
    __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj232=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_782);
    __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result267__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value974=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value973=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2886, "struct tuple2$2sFunpcharph")))),cloner_784,(char*)come_increment_ref_count(real_fun_name_785))));
    last_code_780 = come_decrement_ref_count2(last_code_780, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_781 = come_decrement_ref_count2(last_code2_781, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_782 = come_decrement_ref_count2(last_code3_782, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_785 = come_decrement_ref_count2(real_fun_name_785, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_786,sType_finalize, 0, 0, 0, 0, (void*)0);
    right_value973 = come_decrement_ref_count2(right_value973, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value974,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result267__;
    last_code_780 = come_decrement_ref_count2(last_code_780, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_781 = come_decrement_ref_count2(last_code2_781, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_782 = come_decrement_ref_count2(last_code3_782, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_785 = come_decrement_ref_count2(real_fun_name_785, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_786,sType_finalize, 0, 0, 0, 0, (void*)0);
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
struct sFunNode* __result265__;
void* right_value969;
struct sFunNode* result_825;
void* right_value970;
char* __dec_obj226;
void* right_value971;
struct sFun* __dec_obj227;
struct sFunNode* __result266__;
memset(&__result_obj__, 0, sizeof(void*));
right_value969 = (void*)0;
memset(&result_825, 0, sizeof(struct sFunNode*));
right_value970 = (void*)0;
right_value971 = (void*)0;
            if(self==(void*)0) {
                __result265__ = __result_obj__ = (void*)0;
                return __result265__;
            }
            result_825=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value969=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "sFunNode"))));
            come_call_finalizer3(right_value969,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(self!=((void*)0)) {
                result_825->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj226=result_825->sname;
                result_825->sname=(char*)come_increment_ref_count(((char*)(right_value970=string_clone(self->sname))));
                __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value970 = come_decrement_ref_count2(right_value970, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(self!=((void*)0)&&self->mFun!=((void*)0)) {
                __dec_obj227=result_825->mFun;
                result_825->mFun=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value971=sFun_clone(self->mFun))));
                come_call_finalizer3(__dec_obj227,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value971,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            }
            __result266__ = __result_obj__ = result_825;
            come_call_finalizer3(result_825,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
            return __result266__;
            come_call_finalizer3(result_825,sFunNode_finalize, 0, 0, 0, 0, (void*)0);
}

