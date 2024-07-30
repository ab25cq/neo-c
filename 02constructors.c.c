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

int come_main_v1(int argc, char** argv);

_Bool node_compile(struct sNode* node, struct sInfo* info);

int come_main_v2(int argc, char** argv);

void err_msg(struct sInfo* info, char* msg, ...);

int transpile_v2(struct sInfo* info);

_Bool output_source_file_v2(struct sInfo* info);

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

struct sModule* sModule_initialize(struct sModule* self);

static void sModule_finalize(struct sModule* self);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
void sVarTable_finalize(struct sVarTable* self);

struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list$1charph_finalize(struct list$1charph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info);

static void sClassModule_finalize(struct sClassModule* self);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info);

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* sType_clone(struct sType* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct sBlock* sBlock_clone(struct sBlock* self);
static void sBlock_finalize(struct sBlock* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static void sFun_finalize(struct sFun* self);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);

static void sNodeBase_finalize(struct sNodeBase* self);
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);

_Bool sNodeBase_terminated(struct sNodeBase* self);

char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);

// uniq global variable
// source head3

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
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1903, "buffer"))))))));
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
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1910, "buffer"))))))));
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
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1917, "buffer"))))))));
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
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1924, "buffer"))))))));
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
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1931, "buffer"))))))));
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
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1938, "buffer"))))))));
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
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1954, "smart_pointer$1char"))));
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
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1964, "smart_pointer$1char"))));
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
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 1974, "smart_pointer$1short"))));
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
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 1984, "smart_pointer$1int"))));
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
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 1994, "smart_pointer$1long"))));
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
    __result14__ = __result_obj__ = ((struct smart_pointer$1char*)(right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2165, "smart_pointer$1char")))),self,len)));
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
    __result16__ = __result_obj__ = ((struct smart_pointer$1short*)(right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2170, "smart_pointer$1short")))),self,len)));
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
    __result18__ = __result_obj__ = ((struct smart_pointer$1int*)(right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2175, "smart_pointer$1int")))),self,len)));
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
    __result20__ = __result_obj__ = ((struct smart_pointer$1long*)(right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2180, "smart_pointer$1long")))),self,len)));
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
    __result22__ = __result_obj__ = ((struct smart_pointer$1float*)(right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./neo-c.h", 2185, "smart_pointer$1float")))),self,len)));
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
    __result24__ = __result_obj__ = ((struct smart_pointer$1double*)(right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./neo-c.h", 2190, "smart_pointer$1double")))),self,len)));
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
    __result27__ = __result_obj__ = ((struct list$1char*)(right_value50=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count(((struct list$1char*)(right_value46=(struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./neo-c.h", 2195, "list$1char")))),len,self)));
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
    __result30__ = __result_obj__ = ((struct list$1short*)(right_value55=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count(((struct list$1short*)(right_value51=(struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./neo-c.h", 2200, "list$1short")))),len,self)));
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
    __result33__ = __result_obj__ = ((struct list$1int*)(right_value60=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value56=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./neo-c.h", 2205, "list$1int")))),len,self)));
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
    __result36__ = __result_obj__ = ((struct list$1long*)(right_value65=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count(((struct list$1long*)(right_value61=(struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./neo-c.h", 2210, "list$1long")))),len,self)));
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
    __result39__ = __result_obj__ = ((struct list$1float*)(right_value70=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count(((struct list$1float*)(right_value66=(struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./neo-c.h", 2215, "list$1float")))),len,self)));
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
    __result42__ = __result_obj__ = ((struct list$1double*)(right_value75=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count(((struct list$1double*)(right_value71=(struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./neo-c.h", 2220, "list$1double")))),len,self)));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))))))));
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
                    litem_12=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value47=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 223, "list_item$1char"))));
                    come_call_finalizer3(right_value47,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_12->prev=((void*)0);
                    litem_12->next=((void*)0);
                    litem_12->item=item;
                    self->tail=litem_12;
                    self->head=litem_12;
                }
                else {
                    if(_if_conditional8=self->len==1,                    _if_conditional8) {
                        litem_13=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value48=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 233, "list_item$1char"))));
                        come_call_finalizer3(right_value48,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_13->prev=self->head;
                        litem_13->next=((void*)0);
                        litem_13->item=item;
                        self->tail=litem_13;
                        self->head->next=litem_13;
                    }
                    else {
                        litem_14=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value49=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 243, "list_item$1char"))));
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
                    litem_18=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value52=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 223, "list_item$1short"))));
                    come_call_finalizer3(right_value52,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_18->prev=((void*)0);
                    litem_18->next=((void*)0);
                    litem_18->item=item;
                    self->tail=litem_18;
                    self->head=litem_18;
                }
                else {
                    if(_if_conditional10=self->len==1,                    _if_conditional10) {
                        litem_19=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value53=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 233, "list_item$1short"))));
                        come_call_finalizer3(right_value53,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_19->prev=self->head;
                        litem_19->next=((void*)0);
                        litem_19->item=item;
                        self->tail=litem_19;
                        self->head->next=litem_19;
                    }
                    else {
                        litem_20=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value54=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 243, "list_item$1short"))));
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
                    litem_24=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value57=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 223, "list_item$1int"))));
                    come_call_finalizer3(right_value57,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_24->prev=((void*)0);
                    litem_24->next=((void*)0);
                    litem_24->item=item;
                    self->tail=litem_24;
                    self->head=litem_24;
                }
                else {
                    if(_if_conditional12=self->len==1,                    _if_conditional12) {
                        litem_25=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value58=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 233, "list_item$1int"))));
                        come_call_finalizer3(right_value58,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_25->prev=self->head;
                        litem_25->next=((void*)0);
                        litem_25->item=item;
                        self->tail=litem_25;
                        self->head->next=litem_25;
                    }
                    else {
                        litem_26=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value59=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 243, "list_item$1int"))));
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
                    litem_30=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value62=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 223, "list_item$1long"))));
                    come_call_finalizer3(right_value62,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_30->prev=((void*)0);
                    litem_30->next=((void*)0);
                    litem_30->item=item;
                    self->tail=litem_30;
                    self->head=litem_30;
                }
                else {
                    if(_if_conditional14=self->len==1,                    _if_conditional14) {
                        litem_31=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value63=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 233, "list_item$1long"))));
                        come_call_finalizer3(right_value63,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_31->prev=self->head;
                        litem_31->next=((void*)0);
                        litem_31->item=item;
                        self->tail=litem_31;
                        self->head->next=litem_31;
                    }
                    else {
                        litem_32=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value64=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 243, "list_item$1long"))));
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
                    litem_36=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value67=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 223, "list_item$1float"))));
                    come_call_finalizer3(right_value67,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_36->prev=((void*)0);
                    litem_36->next=((void*)0);
                    litem_36->item=item;
                    self->tail=litem_36;
                    self->head=litem_36;
                }
                else {
                    if(_if_conditional16=self->len==1,                    _if_conditional16) {
                        litem_37=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value68=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 233, "list_item$1float"))));
                        come_call_finalizer3(right_value68,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_37->prev=self->head;
                        litem_37->next=((void*)0);
                        litem_37->item=item;
                        self->tail=litem_37;
                        self->head->next=litem_37;
                    }
                    else {
                        litem_38=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value69=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 243, "list_item$1float"))));
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
                    litem_42=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value72=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 223, "list_item$1double"))));
                    come_call_finalizer3(right_value72,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_42->prev=((void*)0);
                    litem_42->next=((void*)0);
                    litem_42->item=item;
                    self->tail=litem_42;
                    self->head=litem_42;
                }
                else {
                    if(_if_conditional18=self->len==1,                    _if_conditional18) {
                        litem_43=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value73=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 233, "list_item$1double"))));
                        come_call_finalizer3(right_value73,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_43->prev=self->head;
                        litem_43->next=((void*)0);
                        litem_43->item=item;
                        self->tail=litem_43;
                        self->head->next=litem_43;
                    }
                    else {
                        litem_44=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value74=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 243, "list_item$1double"))));
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










struct sModule* sModule_initialize(struct sModule* self){
void* __result_obj__;
void* right_value79;
void* right_value80;
struct buffer* __dec_obj12;
void* right_value81;
void* right_value82;
struct buffer* __dec_obj13;
void* right_value83;
void* right_value84;
struct buffer* __dec_obj14;
void* right_value85;
void* right_value86;
struct buffer* __dec_obj15;
char* __dec_obj16;
char* __dec_obj17;
void* right_value87;
void* right_value88;
struct buffer* __dec_obj18;
struct sModule* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value80 = (void*)0;
right_value81 = (void*)0;
right_value82 = (void*)0;
right_value83 = (void*)0;
right_value84 = (void*)0;
right_value85 = (void*)0;
right_value86 = (void*)0;
right_value87 = (void*)0;
right_value88 = (void*)0;
    __dec_obj12=self->mSourceHead;
    self->mSourceHead=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value80=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value79=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02constructors.c", 5, "buffer"))))))));
    come_call_finalizer3(__dec_obj12,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value79,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value80,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj13=self->mSourceHead2;
    self->mSourceHead2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value82=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value81=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02constructors.c", 6, "buffer"))))))));
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value81,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value82,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj14=self->mSourceHead3;
    self->mSourceHead3=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value84=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value83=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02constructors.c", 7, "buffer"))))))));
    come_call_finalizer3(__dec_obj14,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value83,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value84,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj15=self->mSource;
    self->mSource=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value86=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value85=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02constructors.c", 8, "buffer"))))))));
    come_call_finalizer3(__dec_obj15,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value85,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value86,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj16=self->mLastCode;
    self->mLastCode=((void*)0);
    __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj17=self->mLastCode2;
    self->mLastCode2=((void*)0);
    __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj18=self->mHeader;
    self->mHeader=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value88=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value87=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02constructors.c", 11, "buffer"))))))));
    come_call_finalizer3(__dec_obj18,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value87,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value88,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    __result52__ = __result_obj__ = self;
    come_call_finalizer3(self,sModule_finalize, 0, 0, 1, 0, (void*)0);
    return __result52__;
    come_call_finalizer3(self,sModule_finalize, 0, 0, 1, 0, (void*)0);
}

static void sModule_finalize(struct sModule* self){
void* __result_obj__;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _if_conditional26;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional19=self!=((void*)0)&&self->mSourceHead!=((void*)0),        _if_conditional19) {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional20=self!=((void*)0)&&self->mSourceHead2!=((void*)0),        _if_conditional20) {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional21=self!=((void*)0)&&self->mSourceHead3!=((void*)0),        _if_conditional21) {
            come_call_finalizer3(self->mSourceHead3,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional22=self!=((void*)0)&&self->mSource!=((void*)0),        _if_conditional22) {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional23=self!=((void*)0)&&self->mLastCode!=((void*)0),        _if_conditional23) {
            self->mLastCode = come_decrement_ref_count2(self->mLastCode, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional24=self!=((void*)0)&&self->mLastCode2!=((void*)0),        _if_conditional24) {
            self->mLastCode2 = come_decrement_ref_count2(self->mLastCode2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional25=self!=((void*)0)&&self->mLastCode3!=((void*)0),        _if_conditional25) {
            self->mLastCode3 = come_decrement_ref_count2(self->mLastCode3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional26=self!=((void*)0)&&self->mHeader!=((void*)0),        _if_conditional26) {
            come_call_finalizer3(self->mHeader,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}

struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent){
void* __result_obj__;
void* right_value89;
void* right_value95;
struct map$2charphsVarph* __dec_obj20;
struct sVarTable* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
right_value95 = (void*)0;
    __dec_obj20=self->mVars;
    self->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value95=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value89=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "02constructors.c", 18, "map$2charphsVarph"))))))));
    come_call_finalizer3(__dec_obj20,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value89,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value95,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
    self->mGlobal=global;
    self->mParent=parent;
    static int id_60=0;
    self->mID=++id_60;
    __result55__ = __result_obj__ = self;
    come_call_finalizer3(self,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    return __result55__;
    come_call_finalizer3(self,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
void* right_value90;
void* right_value91;
void* right_value92;
int i_53;
void* right_value93;
void* right_value94;
struct list$1charp* __dec_obj19;
struct map$2charphsVarph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
right_value91 = (void*)0;
right_value92 = (void*)0;
memset(&i_53, 0, sizeof(int));
right_value93 = (void*)0;
right_value94 = (void*)0;
        self->keys=(char**)come_increment_ref_count(((char**)(right_value90=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1068, "char*%"))));
        right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value91=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./neo-c.h", 1069, "sVar*%"))));
        come_call_finalizer3(right_value91,sVar_finalize, 0, 1, 0, 0, __result_obj__);
        self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value92=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1070, "bool"))));
        right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        for(        i_53=0;        i_53<128;        i_53++        ){
            self->item_existance[i_53]=(_Bool)0;
        }
        self->size=128;
        self->len=0;
        __dec_obj19=self->key_list;
        self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value94=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value93=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1080, "list$1charp"))))))));
        come_call_finalizer3(__dec_obj19,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value93,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value94,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
        self->it=0;
        __result54__ = __result_obj__ = self;
        come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result54__;
        come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional29;
_Bool _if_conditional47;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional27=self!=((void*)0)&&self->mName!=((void*)0),            _if_conditional27) {
                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional28=self!=((void*)0)&&self->mCValueName!=((void*)0),            _if_conditional28) {
                self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional29=self!=((void*)0)&&self->mType!=((void*)0),            _if_conditional29) {
                come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional47=self!=((void*)0)&&self->mFunName!=((void*)0),            _if_conditional47) {
                self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional30;
_Bool _if_conditional32;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional30=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                    _if_conditional30) {
                        come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional32=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                    _if_conditional32) {
                        come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional34=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                    _if_conditional34) {
                        come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional35=self!=((void*)0)&&self->mGenericsName!=((void*)0),                    _if_conditional35) {
                        self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional36=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                    _if_conditional36) {
                        come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional37=self!=((void*)0)&&self->mArrayNum!=((void*)0),                    _if_conditional37) {
                        come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional39=self!=((void*)0)&&self->mParamTypes!=((void*)0),                    _if_conditional39) {
                        come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional40=self!=((void*)0)&&self->mParamNames!=((void*)0),                    _if_conditional40) {
                        come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional42=self!=((void*)0)&&self->mResultType!=((void*)0),                    _if_conditional42) {
                        come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional43=self!=((void*)0)&&self->mAlignas!=((void*)0),                    _if_conditional43) {
                        if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional44=self!=((void*)0)&&self->mSizeNum!=((void*)0),                    _if_conditional44) {
                        if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional45=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                    _if_conditional45) {
                        self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional46=self!=((void*)0)&&self->mAsmName!=((void*)0),                    _if_conditional46) {
                        self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_47;
_Bool _while_condtional7;
struct list_item$1sTypeph* prev_it_48;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_47, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_48, 0, sizeof(struct list_item$1sTypeph*));
                            it_47=self->head;
                            while(_while_condtional7=it_47!=((void*)0),                            _while_condtional7) {
                                prev_it_48=it_47;
                                it_47=it_47->next;
                                come_call_finalizer3(prev_it_48,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional31;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional31=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional31) {
                                        come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_49;
_Bool _while_condtional8;
struct list_item$1sNodeph* prev_it_50;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_49, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_50, 0, sizeof(struct list_item$1sNodeph*));
                            it_49=self->head;
                            while(_while_condtional8=it_49!=((void*)0),                            _while_condtional8) {
                                prev_it_50=it_49;
                                it_49=it_49->next;
                                come_call_finalizer3(prev_it_50,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional38;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional38=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional38) {
                                        if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_51;
_Bool _while_condtional9;
struct list_item$1charph* prev_it_52;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_51, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_52, 0, sizeof(struct list_item$1charph*));
                            it_51=self->head;
                            while(_while_condtional9=it_51!=((void*)0),                            _while_condtional9) {
                                prev_it_52=it_51;
                                it_51=it_51->next;
                                come_call_finalizer3(prev_it_52,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional41;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional41=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional41) {
                                        self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result53__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
            return __result53__;
            come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_54;
_Bool _while_condtional10;
struct list_item$1charp* prev_it_55;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_54, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_55, 0, sizeof(struct list_item$1charp*));
                it_54=self->head;
                while(_while_condtional10=it_54!=((void*)0),                _while_condtional10) {
                    prev_it_55=it_54;
                    it_54=it_54->next;
                    come_call_finalizer3(prev_it_55,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_56;
_Bool _if_conditional48;
_Bool _if_conditional49;
int i_57;
_Bool _if_conditional50;
_Bool _if_conditional51;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_56, 0, sizeof(int));
memset(&i_57, 0, sizeof(int));
            for(            i_56=0;            i_56<self->size;            i_56++            ){
                if(_if_conditional48=self->item_existance[i_56],                _if_conditional48) {
                    if(_if_conditional49=1,                    _if_conditional49) {
                        come_call_finalizer3(self->items[i_56],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->items);
            for(            i_57=0;            i_57<self->size;            i_57++            ){
                if(_if_conditional50=self->item_existance[i_57],                _if_conditional50) {
                    if(_if_conditional51=1,                    _if_conditional51) {
                        self->keys[i_57] = come_decrement_ref_count2(self->keys[i_57], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->keys);
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_58;
_Bool _if_conditional52;
_Bool _if_conditional53;
int i_59;
_Bool _if_conditional54;
_Bool _if_conditional55;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_58, 0, sizeof(int));
memset(&i_59, 0, sizeof(int));
        for(        i_58=0;        i_58<self->size;        i_58++        ){
            if(_if_conditional52=self->item_existance[i_58],            _if_conditional52) {
                if(_if_conditional53=1,                _if_conditional53) {
                    come_call_finalizer3(self->items[i_58],sVar_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
        }
        come_free((char*)self->items);
        for(        i_59=0;        i_59<self->size;        i_59++        ){
            if(_if_conditional54=self->item_existance[i_59],            _if_conditional54) {
                if(_if_conditional55=1,                _if_conditional55) {
                    self->keys[i_59] = come_decrement_ref_count2(self->keys[i_59], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        come_free((char*)self->keys);
        come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void sVarTable_finalize(struct sVarTable* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    come_call_finalizer3(self->mVars,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
}

struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info){
void* __result_obj__;
int pointer_num_61;
char* p_62;
_Bool _while_condtional11;
_Bool _if_conditional56;
_Bool _while_condtional12;
void* right_value96;
void* right_value97;
char* name2_63;
struct sClass* klass_64;
struct sClass* generics_class_70;
_Bool _if_conditional68;
_Bool _if_conditional69;
void* right_value98;
struct sClass* klass2_71;
void* right_value99;
char* __dec_obj21;
void* right_value100;
char* __dec_obj22;
void* right_value107;
void* right_value108;
void* right_value109;
void* right_value110;
struct tuple1$1sTypeph* __dec_obj24;
void* right_value111;
void* right_value112;
struct list$1sTypeph* __dec_obj25;
void* right_value113;
void* right_value114;
struct tuple1$1sTypeph* __dec_obj26;
void* right_value115;
void* right_value116;
struct list$1sTypeph* __dec_obj27;
void* right_value117;
void* right_value118;
struct list$1sNodeph* __dec_obj28;
void* right_value119;
void* right_value120;
struct list$1sTypeph* __dec_obj29;
void* right_value121;
void* right_value122;
struct list$1charph* __dec_obj30;
struct tuple1$1sTypeph* __dec_obj31;
struct sNode* __dec_obj32;
void* right_value123;
char* __dec_obj33;
struct sType* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&pointer_num_61, 0, sizeof(int));
memset(&p_62, 0, sizeof(char*));
right_value96 = (void*)0;
right_value97 = (void*)0;
memset(&name2_63, 0, sizeof(char*));
memset(&klass_64, 0, sizeof(struct sClass*));
memset(&generics_class_70, 0, sizeof(struct sClass*));
right_value98 = (void*)0;
memset(&klass2_71, 0, sizeof(struct sClass*));
right_value99 = (void*)0;
right_value100 = (void*)0;
right_value107 = (void*)0;
right_value108 = (void*)0;
right_value109 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value118 = (void*)0;
right_value119 = (void*)0;
right_value120 = (void*)0;
right_value121 = (void*)0;
right_value122 = (void*)0;
right_value123 = (void*)0;
    pointer_num_61=0;
    p_62=name;
    while(_while_condtional11=*p_62,    _while_condtional11) {
        if(_if_conditional56=xisalpha(*p_62),        _if_conditional56) {
            p_62++;
        }
        else {
            break;
        }
    }
    while(_while_condtional12=*p_62==42,    _while_condtional12) {
        pointer_num_61++;
        p_62++;
    }
    name2_63=(char*)come_increment_ref_count(((char*)(right_value97=string_substring(((char*)(right_value96=__builtin_string(name))),0,-pointer_num_61-1))));
    right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    klass_64=map$2charphsClassphp_operator_load_element(info->classes,name2_63);
    generics_class_70=map$2charphsClassphp_operator_load_element(info->generics_classes,name2_63);
    if(_if_conditional68=klass_64==((void*)0)&&generics_class_70==((void*)0),    _if_conditional68) {
        printf("%s %d: class not found(%s)(1)\n",info->sname,info->sline,name2_63);
    }
    if(klass_64) {
        self->mClass=klass_64;
    }
    else {
        klass2_71=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value98=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02constructors.c", 62, "sClass"))));
        come_call_finalizer3(right_value98,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj21=klass2_71->mName;
        klass2_71->mName=(char*)come_increment_ref_count(((char*)(right_value99=__builtin_string(name))));
        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj22=klass2_71->mDeclareSName;
        klass2_71->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value100=__builtin_string(info->sname))));
        __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value107=__builtin_string(name)))),(struct sClass*)come_increment_ref_count(klass2_71));
        right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self->mClass=map$2charphsClassphp_operator_load_element(info->classes,((char*)(right_value108=__builtin_string(name))));
        right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(klass2_71,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    __dec_obj24=self->mNoSolvedGenericsType;
    self->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value110=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value109=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "02constructors.c", 71, "tuple1$1sTypeph")))),((void*)0)))));
    come_call_finalizer3(__dec_obj24,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value109,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value110,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj25=self->mMultipleTypes;
    self->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value112=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value111=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "02constructors.c", 72, "list$1sTypeph"))))))));
    come_call_finalizer3(__dec_obj25,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value111,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value112,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj26=self->mOriginalLoadVarType;
    self->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value114=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value113=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "02constructors.c", 73, "tuple1$1sTypeph")))),((void*)0)))));
    come_call_finalizer3(__dec_obj26,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value113,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value114,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj27=self->mGenericsTypes;
    self->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value116=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value115=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "02constructors.c", 74, "list$1sTypeph"))))))));
    come_call_finalizer3(__dec_obj27,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value115,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value116,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj28=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value118=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value117=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "02constructors.c", 75, "list$1sNodeph"))))))));
    come_call_finalizer3(__dec_obj28,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value117,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value118,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    self->mOmitArrayNum=(_Bool)0;
    __dec_obj29=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value120=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value119=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "02constructors.c", 77, "list$1sTypeph"))))))));
    come_call_finalizer3(__dec_obj29,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value119,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value120,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj30=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value122=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value121=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02constructors.c", 78, "list$1charph"))))))));
    come_call_finalizer3(__dec_obj30,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value121,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value122,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    self->mVarArgs=(_Bool)0;
    __dec_obj31=self->mResultType;
    self->mResultType=((void*)0);
    come_call_finalizer3(__dec_obj31,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    self->mUnsigned=(_Bool)0;
    self->mConstant=(_Bool)0;
    self->mRegister=(_Bool)0;
    self->mVolatile=(_Bool)0;
    self->mStatic=(_Bool)0;
    self->mRestrict=(_Bool)0;
    self->mImmutable=(_Bool)0;
    self->mLongLong=(_Bool)0;
    self->mHeap=heap;
    self->mDummyHeap=(_Bool)0;
    self->mNoHeap=(_Bool)0;
    self->mRefference=(_Bool)0;
    self->mPointerNum=pointer_num_61;
    self->mNoArrayPointerNum=0;
    __dec_obj32=self->mSizeNum;
    self->mSizeNum=((void*)0);
    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
    self->mDynamicArrayNum=0;
    self->mTypeOfExpression=0;
    __dec_obj33=self->mOriginalTypeName;
    self->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value123=__builtin_string(""))));
    __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mOriginalPointerNum=0;
    self->mFunctionParam=(_Bool)0;
    __result88__ = __result_obj__ = self;
    come_call_finalizer3(self,sType_finalize, 0, 0, 1, 0, (void*)0);
    name2_63 = come_decrement_ref_count2(name2_63, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result88__;
    come_call_finalizer3(self,sType_finalize, 0, 0, 1, 0, (void*)0);
    name2_63 = come_decrement_ref_count2(name2_63, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_65;
unsigned int hash_66;
unsigned int it_67;
_Bool _while_condtional13;
_Bool _if_conditional57;
_Bool _if_conditional58;
struct sClass* __result56__;
_Bool _if_conditional66;
_Bool _if_conditional67;
struct sClass* __result57__;
struct sClass* __result58__;
struct sClass* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_65, 0, sizeof(struct sClass*));
memset(&hash_66, 0, sizeof(unsigned int));
memset(&it_67, 0, sizeof(unsigned int));
        memset(&default_value_65,0,sizeof(struct sClass*));
        hash_66=string_get_hash_key(((char*)key))%self->size;
        it_67=hash_66;
        while(_while_condtional13=(_Bool)1,        _while_condtional13) {
            if(_if_conditional57=self->item_existance[it_67],            _if_conditional57) {
                if(_if_conditional58=string_equals(self->keys[it_67],key),                _if_conditional58) {
                    __result56__ = __result_obj__ = self->items[it_67];
                    come_call_finalizer3(default_value_65,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    return __result56__;
                }
                it_67++;
                if(_if_conditional66=it_67>=self->size,                _if_conditional66) {
                    it_67=0;
                }
                else {
                    if(_if_conditional67=it_67==hash_66,                    _if_conditional67) {
                        __result57__ = __result_obj__ = default_value_65;
                        come_call_finalizer3(default_value_65,sClass_finalize, 0, 0, 1, 0, (void*)0);
                        return __result57__;
                    }
                }
            }
            else {
                __result58__ = __result_obj__ = default_value_65;
                come_call_finalizer3(default_value_65,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result58__;
            }
        }
        __result59__ = __result_obj__ = default_value_65;
        come_call_finalizer3(default_value_65,sClass_finalize, 0, 0, 1, 0, (void*)0);
        return __result59__;
        come_call_finalizer3(default_value_65,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional64;
_Bool _if_conditional65;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional59=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional59) {
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional60=self!=((void*)0)&&self->mFields!=((void*)0),                        _if_conditional60) {
                            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional64=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                        _if_conditional64) {
                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional65=self!=((void*)0)&&self->mParentClassName!=((void*)0),                        _if_conditional65) {
                            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_68;
_Bool _while_condtional14;
struct list_item$1tuple2$2charphsTypephph* prev_it_69;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_68, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_69, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                it_68=self->head;
                                while(_while_condtional14=it_68!=((void*)0),                                _while_condtional14) {
                                    prev_it_69=it_68;
                                    it_68=it_68->next;
                                    come_call_finalizer3(prev_it_69,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional61;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional61=self!=((void*)0)&&self->item!=((void*)0),                                        _if_conditional61) {
                                            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional62;
_Bool _if_conditional63;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional62=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional62) {
                                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional63=self!=((void*)0)&&self->v2!=((void*)0),                                                _if_conditional63) {
                                                    come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional70;
unsigned int hash_89;
unsigned int it_90;
_Bool _while_condtional17;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool same_key_exist_107;
char* it2_110;
_Bool _if_conditional113;
_Bool _if_conditional114;
struct map$2charphsClassph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_89, 0, sizeof(unsigned int));
memset(&it_90, 0, sizeof(unsigned int));
memset(&same_key_exist_107, 0, sizeof(_Bool));
memset(&it2_110, 0, sizeof(char*));
            if(_if_conditional70=self->len*10>=self->size,            _if_conditional70) {
                map$2charphsClassph_rehash(self);
            }
            hash_89=string_get_hash_key(key)%self->size;
            it_90=hash_89;
            while(_while_condtional17=(_Bool)1,            _while_condtional17) {
                if(_if_conditional82=self->item_existance[it_90],                _if_conditional82) {
                    if(_if_conditional83=string_equals(self->keys[it_90],key),                    _if_conditional83) {
                        if(_if_conditional84=1,                        _if_conditional84) {
                            list$1charp_remove(self->key_list,self->keys[it_90]);
                            self->keys[it_90] = come_decrement_ref_count2(self->keys[it_90], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            self->keys[it_90]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charp_remove(self->key_list,self->keys[it_90]);
                            self->keys[it_90]=key;
                        }
                        if(_if_conditional104=1,                        _if_conditional104) {
                            come_call_finalizer3(self->items[it_90],sClass_finalize, 0, 0, 0, 0, (void*)0);
                            self->items[it_90]=(struct sClass*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_90]=item;
                        }
                        break;
                    }
                    it_90++;
                    if(_if_conditional105=it_90>=self->size,                    _if_conditional105) {
                        it_90=0;
                    }
                    else {
                        if(_if_conditional106=it_90==hash_89,                        _if_conditional106) {
                            printf("unexpected error in map.insert\n");
                            stackframe();
                            exit(2);
                        }
                    }
                }
                else {
                    self->item_existance[it_90]=(_Bool)1;
                    if(_if_conditional107=1,                    _if_conditional107) {
                        self->keys[it_90]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_90]=key;
                    }
                    if(_if_conditional108=1,                    _if_conditional108) {
                        self->items[it_90]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_90]=item;
                    }
                    self->len++;
                    break;
                }
            }
            same_key_exist_107=(_Bool)0;
            for(            it2_110=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_110=list$1charp_next(self->key_list)            ){
                if(_if_conditional113=string_equals(it2_110,key),                _if_conditional113) {
                    same_key_exist_107=(_Bool)1;
                }
            }
            if(_if_conditional114=!same_key_exist_107,            _if_conditional114) {
                list$1charp_push_back(self->key_list,key);
            }
            __result83__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result83__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_72;
void* right_value101;
char** keys_73;
void* right_value102;
struct sClass** items_74;
void* right_value103;
_Bool* item_existance_75;
int len_76;
char* it_79;
struct sClass* default_value_82;
struct sClass* it2_83;
unsigned int hash_86;
int n_87;
_Bool _while_condtional16;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
struct sClass* default_value_88;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_72, 0, sizeof(int));
right_value101 = (void*)0;
memset(&keys_73, 0, sizeof(char**));
right_value102 = (void*)0;
memset(&items_74, 0, sizeof(struct sClass**));
right_value103 = (void*)0;
memset(&item_existance_75, 0, sizeof(_Bool*));
memset(&len_76, 0, sizeof(int));
memset(&it_79, 0, sizeof(char*));
memset(&default_value_82, 0, sizeof(struct sClass*));
memset(&it2_83, 0, sizeof(struct sClass*));
memset(&hash_86, 0, sizeof(unsigned int));
memset(&n_87, 0, sizeof(int));
memset(&default_value_88, 0, sizeof(struct sClass*));
                    size_72=self->size*10;
                    keys_73=(char**)come_increment_ref_count(((char**)(right_value101=(char**)come_calloc(1, sizeof(char*)*(1*(size_72)), "./neo-c.h", 1319, "char*%"))));
                    right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    items_74=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value102=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_72)), "./neo-c.h", 1320, "sClass*%"))));
                    come_call_finalizer3(right_value102,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                    item_existance_75=(_Bool*)come_increment_ref_count(((_Bool*)(right_value103=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_72)), "./neo-c.h", 1321, "bool"))));
                    right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    len_76=0;
                    for(                    it_79=map$2charphsClassph_begin(self);                    !map$2charphsClassph_end(self);                    it_79=map$2charphsClassph_next(self)                    ){
                        memset(&default_value_82,0,sizeof(struct sClass*));
                        it2_83=map$2charphsClassph_at(self,it_79,default_value_82);
                        hash_86=string_get_hash_key(it_79)%size_72;
                        n_87=hash_86;
                        while(_while_condtional16=(_Bool)1,                        _while_condtional16) {
                            if(_if_conditional79=item_existance_75[n_87],                            _if_conditional79) {
                                n_87++;
                                if(_if_conditional80=n_87>=size_72,                                _if_conditional80) {
                                    n_87=0;
                                }
                                else {
                                    if(_if_conditional81=n_87==hash_86,                                    _if_conditional81) {
                                        printf("unexpected error in map.rehash(1)\n");
                                        stackframe();
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                item_existance_75[n_87]=(_Bool)1;
                                keys_73[n_87]=it_79;
                                items_74[n_87]=map$2charphsClassph_at(self,it_79,default_value_88);
                                len_76++;
                                break;
                            }
                        }
                    }
                    come_free((char*)self->items);
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_free((char*)self->keys);
                    self->keys=keys_73;
                    self->items=items_74;
                    self->item_existance=item_existance_75;
                    self->size=size_72;
                    self->len=len_76;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional71;
char* result_77;
char* __result60__;
_Bool _if_conditional72;
char* __result61__;
char* result_78;
char* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_77, 0, sizeof(char*));
memset(&result_78, 0, sizeof(char*));
                        if(_if_conditional71=self==((void*)0),                        _if_conditional71) {
                            memset(&result_77,0,sizeof(char*));
                            __result60__ = __result_obj__ = result_77;
                            return __result60__;
                        }
                        self->key_list->it=self->key_list->head;
                        if(self->key_list->it) {
                            __result61__ = __result_obj__ = self->key_list->it->item;
                            return __result61__;
                        }
                        memset(&result_78,0,sizeof(char*));
                        __result62__ = __result_obj__ = result_78;
                        return __result62__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result63__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result63__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result63__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional73;
char* result_80;
char* __result64__;
_Bool _if_conditional74;
char* __result65__;
char* result_81;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_80, 0, sizeof(char*));
memset(&result_81, 0, sizeof(char*));
                        if(_if_conditional73=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional73) {
                            memset(&result_80,0,sizeof(char*));
                            __result64__ = __result_obj__ = result_80;
                            return __result64__;
                        }
                        self->key_list->it=self->key_list->it->next;
                        if(self->key_list->it) {
                            __result65__ = __result_obj__ = self->key_list->it->item;
                            return __result65__;
                        }
                        memset(&result_81,0,sizeof(char*));
                        __result66__ = __result_obj__ = result_81;
                        return __result66__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_84;
unsigned int it_85;
_Bool _while_condtional15;
_Bool _if_conditional75;
_Bool _if_conditional76;
struct sClass* __result67__;
_Bool _if_conditional77;
_Bool _if_conditional78;
struct sClass* __result68__;
struct sClass* __result69__;
struct sClass* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_84, 0, sizeof(unsigned int));
memset(&it_85, 0, sizeof(unsigned int));
                            hash_84=string_get_hash_key(((char*)key))%self->size;
                            it_85=hash_84;
                            while(_while_condtional15=(_Bool)1,                            _while_condtional15) {
                                if(_if_conditional75=self->item_existance[it_85],                                _if_conditional75) {
                                    if(_if_conditional76=string_equals(self->keys[it_85],key),                                    _if_conditional76) {
                                        __result67__ = __result_obj__ = self->items[it_85];
                                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result67__;
                                    }
                                    it_85++;
                                    if(_if_conditional77=it_85>=self->size,                                    _if_conditional77) {
                                        it_85=0;
                                    }
                                    else {
                                        if(_if_conditional78=it_85==hash_84,                                        _if_conditional78) {
                                            __result68__ = __result_obj__ = default_value;
                                            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result68__;
                                        }
                                    }
                                }
                                else {
                                    __result69__ = __result_obj__ = default_value;
                                    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result69__;
                                }
                            }
                            __result70__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                            return __result70__;
                            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_91;
struct list_item$1charp* it_92;
_Bool _while_condtional18;
_Bool _if_conditional85;
struct list$1charp* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_91, 0, sizeof(int));
memset(&it_92, 0, sizeof(struct list_item$1charp*));
                                it2_91=0;
                                it_92=self->head;
                                while(_while_condtional18=it_92!=((void*)0),                                _while_condtional18) {
                                    if(_if_conditional85=string_equals(it_92->item,item),                                    _if_conditional85) {
                                        list$1charp_delete(self,it2_91,it2_91+1);
                                        break;
                                    }
                                    it2_91++;
                                    it_92=it_92->next;
                                }
                                __result74__ = __result_obj__ = self;
                                return __result74__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
int tmp_93;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
struct list$1charp* __result71__;
_Bool _if_conditional92;
_Bool _if_conditional93;
struct list_item$1charp* it_96;
int i_97;
_Bool _while_condtional20;
_Bool _if_conditional94;
struct list_item$1charp* prev_it_98;
_Bool _if_conditional95;
_Bool _if_conditional96;
struct list_item$1charp* it_99;
int i_100;
_Bool _while_condtional21;
_Bool _if_conditional97;
_Bool _if_conditional98;
struct list_item$1charp* prev_it_101;
struct list_item$1charp* it_102;
struct list_item$1charp* head_prev_it_103;
struct list_item$1charp* tail_it_104;
int i_105;
_Bool _while_condtional22;
_Bool _if_conditional99;
_Bool _if_conditional100;
_Bool _if_conditional101;
struct list_item$1charp* prev_it_106;
_Bool _if_conditional102;
_Bool _if_conditional103;
struct list$1charp* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_93, 0, sizeof(int));
memset(&it_96, 0, sizeof(struct list_item$1charp*));
memset(&i_97, 0, sizeof(int));
memset(&prev_it_98, 0, sizeof(struct list_item$1charp*));
memset(&it_99, 0, sizeof(struct list_item$1charp*));
memset(&i_100, 0, sizeof(int));
memset(&prev_it_101, 0, sizeof(struct list_item$1charp*));
memset(&it_102, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_103, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_104, 0, sizeof(struct list_item$1charp*));
memset(&i_105, 0, sizeof(int));
memset(&prev_it_106, 0, sizeof(struct list_item$1charp*));
                                            if(_if_conditional86=head<0,                                            _if_conditional86) {
                                                head+=self->len;
                                            }
                                            if(_if_conditional87=tail<0,                                            _if_conditional87) {
                                                tail+=self->len+1;
                                            }
                                            if(_if_conditional88=head>tail,                                            _if_conditional88) {
                                                tmp_93=tail;
                                                tail=head;
                                                head=tmp_93;
                                            }
                                            if(_if_conditional89=head<0,                                            _if_conditional89) {
                                                head=0;
                                            }
                                            if(_if_conditional90=tail>self->len,                                            _if_conditional90) {
                                                tail=self->len;
                                            }
                                            if(_if_conditional91=head==tail,                                            _if_conditional91) {
                                                __result71__ = __result_obj__ = self;
                                                return __result71__;
                                            }
                                            if(_if_conditional92=head==0&&tail==self->len,                                            _if_conditional92) {
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                if(_if_conditional93=head==0,                                                _if_conditional93) {
                                                    it_96=self->head;
                                                    i_97=0;
                                                    while(_while_condtional20=it_96!=((void*)0),                                                    _while_condtional20) {
                                                        if(_if_conditional94=i_97<tail,                                                        _if_conditional94) {
                                                            prev_it_98=it_96;
                                                            it_96=it_96->next;
                                                            i_97++;
                                                            come_call_finalizer3(prev_it_98,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            if(_if_conditional95=i_97==tail,                                                            _if_conditional95) {
                                                                self->head=it_96;
                                                                self->head->prev=((void*)0);
                                                                break;
                                                            }
                                                            else {
                                                                it_96=it_96->next;
                                                                i_97++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    if(_if_conditional96=tail==self->len,                                                    _if_conditional96) {
                                                        it_99=self->head;
                                                        i_100=0;
                                                        while(_while_condtional21=it_99!=((void*)0),                                                        _while_condtional21) {
                                                            if(_if_conditional97=i_100==head,                                                            _if_conditional97) {
                                                                self->tail=it_99->prev;
                                                                self->tail->next=((void*)0);
                                                            }
                                                            if(_if_conditional98=i_100>=head,                                                            _if_conditional98) {
                                                                prev_it_101=it_99;
                                                                it_99=it_99->next;
                                                                i_100++;
                                                                come_call_finalizer3(prev_it_101,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_99=it_99->next;
                                                                i_100++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        it_102=self->head;
                                                        head_prev_it_103=((void*)0);
                                                        tail_it_104=((void*)0);
                                                        i_105=0;
                                                        while(_while_condtional22=it_102!=((void*)0),                                                        _while_condtional22) {
                                                            if(_if_conditional99=i_105==head,                                                            _if_conditional99) {
                                                                head_prev_it_103=it_102->prev;
                                                            }
                                                            if(_if_conditional100=i_105==tail,                                                            _if_conditional100) {
                                                                tail_it_104=it_102;
                                                            }
                                                            if(_if_conditional101=i_105>=head&&i_105<tail,                                                            _if_conditional101) {
                                                                prev_it_106=it_102;
                                                                it_102=it_102->next;
                                                                i_105++;
                                                                come_call_finalizer3(prev_it_106,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_102=it_102->next;
                                                                i_105++;
                                                            }
                                                        }
                                                        if(_if_conditional102=head_prev_it_103!=((void*)0),                                                        _if_conditional102) {
                                                            head_prev_it_103->next=tail_it_104;
                                                        }
                                                        if(_if_conditional103=tail_it_104!=((void*)0),                                                        _if_conditional103) {
                                                            tail_it_104->prev=head_prev_it_103;
                                                        }
                                                    }
                                                }
                                            }
                                            __result73__ = __result_obj__ = self;
                                            return __result73__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_94;
_Bool _while_condtional19;
struct list_item$1charp* prev_it_95;
struct list$1charp* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_94, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_95, 0, sizeof(struct list_item$1charp*));
                                                    it_94=self->head;
                                                    while(_while_condtional19=it_94!=((void*)0),                                                    _while_condtional19) {
                                                        prev_it_95=it_94;
                                                        it_94=it_94->next;
                                                        come_call_finalizer3(prev_it_95,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    self->head=((void*)0);
                                                    self->tail=((void*)0);
                                                    self->len=0;
                                                    __result72__ = __result_obj__ = self;
                                                    return __result72__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional109;
char* result_108;
char* __result75__;
_Bool _if_conditional110;
char* __result76__;
char* result_109;
char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_108, 0, sizeof(char*));
memset(&result_109, 0, sizeof(char*));
                if(_if_conditional109=self==((void*)0),                _if_conditional109) {
                    memset(&result_108,0,sizeof(char*));
                    __result75__ = __result_obj__ = result_108;
                    return __result75__;
                }
                self->it=self->head;
                if(self->it) {
                    __result76__ = __result_obj__ = self->it->item;
                    return __result76__;
                }
                memset(&result_109,0,sizeof(char*));
                __result77__ = __result_obj__ = result_109;
                return __result77__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
                __result78__ = self==((void*)0)||self->it==((void*)0);
                return __result78__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional111;
char* result_111;
char* __result79__;
_Bool _if_conditional112;
char* __result80__;
char* result_112;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_111, 0, sizeof(char*));
memset(&result_112, 0, sizeof(char*));
                if(_if_conditional111=self==((void*)0)||self->it==((void*)0),                _if_conditional111) {
                    memset(&result_111,0,sizeof(char*));
                    __result79__ = __result_obj__ = result_111;
                    return __result79__;
                }
                self->it=self->it->next;
                if(self->it) {
                    __result80__ = __result_obj__ = self->it->item;
                    return __result80__;
                }
                memset(&result_112,0,sizeof(char*));
                __result81__ = __result_obj__ = result_112;
                return __result81__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional115;
void* right_value104;
struct list_item$1charp* litem_113;
_Bool _if_conditional116;
void* right_value105;
struct list_item$1charp* litem_114;
void* right_value106;
struct list_item$1charp* litem_115;
struct list$1charp* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
memset(&litem_113, 0, sizeof(struct list_item$1charp*));
right_value105 = (void*)0;
memset(&litem_114, 0, sizeof(struct list_item$1charp*));
right_value106 = (void*)0;
memset(&litem_115, 0, sizeof(struct list_item$1charp*));
                    if(_if_conditional115=self->len==0,                    _if_conditional115) {
                        litem_113=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value104=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 223, "list_item$1charp"))));
                        come_call_finalizer3(right_value104,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_113->prev=((void*)0);
                        litem_113->next=((void*)0);
                        litem_113->item=item;
                        self->tail=litem_113;
                        self->head=litem_113;
                    }
                    else {
                        if(_if_conditional116=self->len==1,                        _if_conditional116) {
                            litem_114=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value105=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 233, "list_item$1charp"))));
                            come_call_finalizer3(right_value105,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_114->prev=self->head;
                            litem_114->next=((void*)0);
                            litem_114->item=item;
                            self->tail=litem_114;
                            self->head->next=litem_114;
                        }
                        else {
                            litem_115=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value106=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 243, "list_item$1charp"))));
                            come_call_finalizer3(right_value106,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_115->prev=self->tail;
                            litem_115->next=((void*)0);
                            litem_115->item=item;
                            self->tail->next=litem_115;
                            self->tail=litem_115;
                        }
                    }
                    self->len++;
                    __result82__ = __result_obj__ = self;
                    return __result82__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj23;
struct tuple1$1sTypeph* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
        __dec_obj23=self->v1;
        self->v1=(struct sType*)come_increment_ref_count(v1);
        come_call_finalizer3(__dec_obj23,sType_finalize, 0, 0, 0, 0, (void*)0);
        __result84__ = __result_obj__ = self;
        come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result84__;
        come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result85__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        return __result85__;
        come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_116;
_Bool _while_condtional23;
struct list_item$1sTypeph* prev_it_117;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_116, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_117, 0, sizeof(struct list_item$1sTypeph*));
        it_116=self->head;
        while(_while_condtional23=it_116!=((void*)0),        _while_condtional23) {
            prev_it_117=it_116;
            it_116=it_116->next;
            come_call_finalizer3(prev_it_117,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result86__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
        return __result86__;
        come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_118;
_Bool _while_condtional24;
struct list_item$1sNodeph* prev_it_119;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_118, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_119, 0, sizeof(struct list_item$1sNodeph*));
        it_118=self->head;
        while(_while_condtional24=it_118!=((void*)0),        _while_condtional24) {
            prev_it_119=it_118;
            it_118=it_118->next;
            come_call_finalizer3(prev_it_119,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result87__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result87__;
        come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_120;
_Bool _while_condtional25;
struct list_item$1charph* prev_it_121;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_120, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_121, 0, sizeof(struct list_item$1charph*));
        it_120=self->head;
        while(_while_condtional25=it_120!=((void*)0),        _while_condtional25) {
            prev_it_121=it_120;
            it_120=it_120->next;
            come_call_finalizer3(prev_it_121,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional119;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional119=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional119) {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
}

struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info){
void* __result_obj__;
void* right_value124;
char* __dec_obj34;
void* right_value125;
void* right_value126;
struct list$1tuple2$2charphsTypephph* __dec_obj35;
void* right_value127;
char* __dec_obj36;
struct sClass* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value124 = (void*)0;
right_value125 = (void*)0;
right_value126 = (void*)0;
right_value127 = (void*)0;
    self->mNumber=number;
    self->mStruct=struct_;
    self->mUnion=union_;
    self->mGenerics=generics;
    self->mMethodGenerics=method_generics;
    self->mEnum=(_Bool)0;
    self->mProtocol=protocol_;
    self->mFloat=float_;
    self->mEnum=enum_;
    __dec_obj34=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value124=__builtin_string(name))));
    __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mGenericsNum=generics_num;
    self->mMethodGenericsNum=method_generics_num;
    __dec_obj35=self->mFields;
    self->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value126=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value125=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "02constructors.c", 126, "list$1tuple2$2charphsTypephph"))))))));
    come_call_finalizer3(__dec_obj35,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value125,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value126,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj36=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value127=__builtin_string(info->sname))));
    __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result90__ = __result_obj__ = self;
    come_call_finalizer3(self,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result90__;
    come_call_finalizer3(self,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsTypephph* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result89__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result89__;
        come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_122;
_Bool _while_condtional26;
struct list_item$1tuple2$2charphsTypephph* prev_it_123;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_122, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_123, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
        it_122=self->head;
        while(_while_condtional26=it_122!=((void*)0),        _while_condtional26) {
            prev_it_123=it_122;
            it_122=it_122->next;
            come_call_finalizer3(prev_it_123,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info){
void* __result_obj__;
void* right_value128;
char* __dec_obj37;
void* right_value129;
char* __dec_obj38;
void* right_value130;
void* right_value131;
struct list$1charph* __dec_obj39;
void* right_value132;
char* __dec_obj40;
struct sClassModule* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
right_value132 = (void*)0;
    __dec_obj37=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value128=charp_clone(name))));
    __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj38=self->mText;
    self->mText=(char*)come_increment_ref_count(((char*)(right_value129=string_clone(text))));
    __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj39=self->mParams;
    self->mParams=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value131=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value130=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02constructors.c", 137, "list$1charph"))))))));
    come_call_finalizer3(__dec_obj39,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value130,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value131,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj40=self->mSName;
    self->mSName=(char*)come_increment_ref_count(((char*)(right_value132=__builtin_string(sname))));
    __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mSLine=sline;
    __result91__ = __result_obj__ = self;
    come_call_finalizer3(self,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
    text = come_decrement_ref_count2(text, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    sname = come_decrement_ref_count2(sname, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result91__;
    come_call_finalizer3(self,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
    text = come_decrement_ref_count2(text, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    sname = come_decrement_ref_count2(sname, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void sClassModule_finalize(struct sClassModule* self){
void* __result_obj__;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional120=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional120) {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional121=self!=((void*)0)&&self->mText!=((void*)0),        _if_conditional121) {
            self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional122=self!=((void*)0)&&self->mParams!=((void*)0),        _if_conditional122) {
            come_call_finalizer3(self->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional123=self!=((void*)0)&&self->mSName!=((void*)0),        _if_conditional123) {
            self->mSName = come_decrement_ref_count2(self->mSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info){
void* __result_obj__;
char* __dec_obj41;
struct sType* __dec_obj42;
struct list$1sTypeph* __dec_obj43;
struct list$1charph* __dec_obj44;
struct list$1charph* __dec_obj45;
void* right_value133;
void* right_value134;
struct sType* __dec_obj46;
struct list$1sTypeph* o2_saved_124;
struct sType* it_127;
void* right_value173;
struct list$1charph* o2_saved_151;
char* it_154;
void* right_value177;
void* right_value178;
void* right_value179;
struct tuple1$1sTypeph* __dec_obj76;
void* right_value180;
void* right_value181;
struct buffer* __dec_obj77;
void* right_value182;
void* right_value183;
struct buffer* __dec_obj78;
void* right_value184;
void* right_value185;
struct buffer* __dec_obj79;
void* right_value186;
void* right_value187;
struct buffer* __dec_obj80;
void* right_value200;
struct sBlock* __dec_obj85;
char* __dec_obj86;
void* right_value201;
char* __dec_obj87;
struct sFun* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value133 = (void*)0;
right_value134 = (void*)0;
memset(&o2_saved_124, 0, sizeof(struct list$1sTypeph*));
memset(&it_127, 0, sizeof(struct sType*));
right_value173 = (void*)0;
memset(&o2_saved_151, 0, sizeof(struct list$1charph*));
memset(&it_154, 0, sizeof(char*));
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
right_value187 = (void*)0;
right_value200 = (void*)0;
right_value201 = (void*)0;
    __dec_obj41=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj42=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer3(__dec_obj42,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj43=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    come_call_finalizer3(__dec_obj43,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj44=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    come_call_finalizer3(__dec_obj44,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj45=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer3(__dec_obj45,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    self->mExternal=external;
    self->mVarArgs=var_args;
    self->mStatic=static_;
    __dec_obj46=self->mLambdaType;
    self->mLambdaType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value134=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value133=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02constructors.c", 155, "sType")))),"lambda",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value133,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value134,sType_finalize, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_124=(struct list$1sTypeph*)come_increment_ref_count((param_types)),it_127=list$1sTypeph_begin((o2_saved_124));    !list$1sTypeph_end((o2_saved_124));    it_127=list$1sTypeph_next((o2_saved_124))    ){
        list$1sTypeph_push_back(self->mLambdaType->mParamTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value173=sType_clone(it_127)))));
        come_call_finalizer3(right_value173,sType_finalize, 0, 1, 0, 0, __result_obj__);
    }
    come_call_finalizer3(o2_saved_124,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_151=(struct list$1charph*)come_increment_ref_count((param_names)),it_154=list$1charph_begin((o2_saved_151));    !list$1charph_end((o2_saved_151));    it_154=list$1charph_next((o2_saved_151))    ){
        list$1charph_push_back(self->mLambdaType->mParamNames,(char*)come_increment_ref_count(((char*)(right_value177=string_clone(it_154)))));
        right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    come_call_finalizer3(o2_saved_151,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj76=self->mLambdaType->mResultType;
    self->mLambdaType->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value179=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value178=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "02constructors.c", 165, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type)))));
    come_call_finalizer3(__dec_obj76,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value178,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value179,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    self->mLambdaType->mVarArgs=var_args;
    __dec_obj77=self->mSource;
    self->mSource=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value181=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value180=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02constructors.c", 168, "buffer"))))))));
    come_call_finalizer3(__dec_obj77,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value180,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value181,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj78=self->mSourceHead;
    self->mSourceHead=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value183=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value182=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02constructors.c", 169, "buffer"))))))));
    come_call_finalizer3(__dec_obj78,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value182,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value183,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj79=self->mSourceHead2;
    self->mSourceHead2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value185=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value184=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02constructors.c", 170, "buffer"))))))));
    come_call_finalizer3(__dec_obj79,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value184,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value185,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj80=self->mSourceDefer;
    self->mSourceDefer=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value187=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value186=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02constructors.c", 171, "buffer"))))))));
    come_call_finalizer3(__dec_obj80,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value186,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value187,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj85=self->mBlock;
    self->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value200=sBlock_clone(block))));
    come_call_finalizer3(__dec_obj85,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value200,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj86=self->mComeHeader;
    self->mComeHeader=(char*)come_increment_ref_count(come_header);
    __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj87=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value201=__builtin_string(declare_sname))));
    __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result141__ = __result_obj__ = self;
    come_call_finalizer3(self,sFun_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(result_type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_types,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_names,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_default_parametors,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(block,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    come_header = come_decrement_ref_count2(come_header, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    declare_sname = come_decrement_ref_count2(declare_sname, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result141__;
    come_call_finalizer3(self,sFun_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(result_type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_types,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_names,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_default_parametors,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(block,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    come_header = come_decrement_ref_count2(come_header, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    declare_sname = come_decrement_ref_count2(declare_sname, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional124;
struct sType* result_125;
struct sType* __result92__;
_Bool _if_conditional125;
struct sType* __result93__;
struct sType* result_126;
struct sType* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_125, 0, sizeof(struct sType*));
memset(&result_126, 0, sizeof(struct sType*));
        if(_if_conditional124=self==((void*)0),        _if_conditional124) {
            memset(&result_125,0,sizeof(struct sType*));
            __result92__ = __result_obj__ = result_125;
            return __result92__;
        }
        self->it=self->head;
        if(self->it) {
            __result93__ = __result_obj__ = self->it->item;
            return __result93__;
        }
        memset(&result_126,0,sizeof(struct sType*));
        __result94__ = __result_obj__ = result_126;
        return __result94__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result95__;
memset(&__result_obj__, 0, sizeof(void*));
        __result95__ = self==((void*)0)||self->it==((void*)0);
        return __result95__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional126;
struct sType* result_128;
struct sType* __result96__;
_Bool _if_conditional127;
struct sType* __result97__;
struct sType* result_129;
struct sType* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_128, 0, sizeof(struct sType*));
memset(&result_129, 0, sizeof(struct sType*));
        if(_if_conditional126=self==((void*)0)||self->it==((void*)0),        _if_conditional126) {
            memset(&result_128,0,sizeof(struct sType*));
            __result96__ = __result_obj__ = result_128;
            return __result96__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result97__ = __result_obj__ = self->it->item;
            return __result97__;
        }
        memset(&result_129,0,sizeof(struct sType*));
        __result98__ = __result_obj__ = result_129;
        return __result98__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional128;
void* right_value135;
struct list_item$1sTypeph* litem_130;
struct sType* __dec_obj47;
_Bool _if_conditional129;
void* right_value136;
struct list_item$1sTypeph* litem_131;
struct sType* __dec_obj48;
void* right_value137;
struct list_item$1sTypeph* litem_132;
struct sType* __dec_obj49;
struct list$1sTypeph* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
right_value135 = (void*)0;
memset(&litem_130, 0, sizeof(struct list_item$1sTypeph*));
right_value136 = (void*)0;
memset(&litem_131, 0, sizeof(struct list_item$1sTypeph*));
right_value137 = (void*)0;
memset(&litem_132, 0, sizeof(struct list_item$1sTypeph*));
            if(_if_conditional128=self->len==0,            _if_conditional128) {
                litem_130=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value135=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 223, "list_item$1sTypeph"))));
                come_call_finalizer3(right_value135,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_130->prev=((void*)0);
                litem_130->next=((void*)0);
                __dec_obj47=litem_130->item;
                litem_130->item=(struct sType*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 0, 0, (void*)0);
                self->tail=litem_130;
                self->head=litem_130;
            }
            else {
                if(_if_conditional129=self->len==1,                _if_conditional129) {
                    litem_131=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value136=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 233, "list_item$1sTypeph"))));
                    come_call_finalizer3(right_value136,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_131->prev=self->head;
                    litem_131->next=((void*)0);
                    __dec_obj48=litem_131->item;
                    litem_131->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj48,sType_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_131;
                    self->head->next=litem_131;
                }
                else {
                    litem_132=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value137=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 243, "list_item$1sTypeph"))));
                    come_call_finalizer3(right_value137,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_132->prev=self->tail;
                    litem_132->next=((void*)0);
                    __dec_obj49=litem_132->item;
                    litem_132->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj49,sType_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_132;
                    self->tail=litem_132;
                }
            }
            self->len++;
            __result99__ = __result_obj__ = self;
            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result99__;
            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional130;
struct sType* __result100__;
void* right_value138;
struct sType* result_133;
_Bool _if_conditional131;
_Bool _if_conditional132;
void* right_value145;
struct list$1sTypeph* __dec_obj53;
_Bool _if_conditional136;
void* right_value148;
struct tuple1$1sTypeph* __dec_obj55;
_Bool _if_conditional140;
void* right_value149;
struct tuple1$1sTypeph* __dec_obj56;
_Bool _if_conditional141;
void* right_value150;
char* __dec_obj57;
_Bool _if_conditional142;
void* right_value151;
struct list$1sTypeph* __dec_obj58;
_Bool _if_conditional143;
void* right_value159;
struct list$1sNodeph* __dec_obj62;
_Bool _if_conditional156;
_Bool _if_conditional157;
void* right_value160;
struct list$1sTypeph* __dec_obj63;
_Bool _if_conditional158;
void* right_value167;
struct list$1charph* __dec_obj67;
_Bool _if_conditional162;
void* right_value168;
struct tuple1$1sTypeph* __dec_obj68;
_Bool _if_conditional163;
_Bool _if_conditional164;
void* right_value169;
struct sNode* __dec_obj69;
_Bool _if_conditional165;
_Bool _if_conditional166;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool _if_conditional171;
_Bool _if_conditional172;
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool _if_conditional186;
_Bool _if_conditional187;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
void* right_value170;
struct sNode* __dec_obj70;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _if_conditional194;
void* right_value171;
char* __dec_obj71;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional201;
_Bool _if_conditional202;
_Bool _if_conditional203;
_Bool _if_conditional204;
void* right_value172;
char* __dec_obj72;
_Bool _if_conditional205;
_Bool _if_conditional206;
_Bool _if_conditional207;
struct sType* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
right_value138 = (void*)0;
memset(&result_133, 0, sizeof(struct sType*));
right_value145 = (void*)0;
right_value148 = (void*)0;
right_value149 = (void*)0;
right_value150 = (void*)0;
right_value151 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value167 = (void*)0;
right_value168 = (void*)0;
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value171 = (void*)0;
right_value172 = (void*)0;
            if(_if_conditional130=self==(void*)0,            _if_conditional130) {
                __result100__ = __result_obj__ = (void*)0;
                return __result100__;
            }
            result_133=(struct sType*)come_increment_ref_count(((struct sType*)(right_value138=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
            come_call_finalizer3(right_value138,sType_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional131=self!=((void*)0),            _if_conditional131) {
                result_133->mClass=self->mClass;
            }
            if(_if_conditional132=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional132) {
                __dec_obj53=result_133->mMultipleTypes;
                result_133->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value145=list$1sTypephp_clone(self->mMultipleTypes))));
                come_call_finalizer3(__dec_obj53,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value145,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional136=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional136) {
                __dec_obj55=result_133->mNoSolvedGenericsType;
                result_133->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value148=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                come_call_finalizer3(__dec_obj55,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value148,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional140=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional140) {
                __dec_obj56=result_133->mOriginalLoadVarType;
                result_133->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value149=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                come_call_finalizer3(__dec_obj56,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value149,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional141=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional141) {
                __dec_obj57=result_133->mGenericsName;
                result_133->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value150=string_clone(self->mGenericsName))));
                __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional142=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional142) {
                __dec_obj58=result_133->mGenericsTypes;
                result_133->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value151=list$1sTypephp_clone(self->mGenericsTypes))));
                come_call_finalizer3(__dec_obj58,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value151,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional143=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional143) {
                __dec_obj62=result_133->mArrayNum;
                result_133->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value159=list$1sNodephp_clone(self->mArrayNum))));
                come_call_finalizer3(__dec_obj62,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value159,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional156=self!=((void*)0),            _if_conditional156) {
                result_133->mOmitArrayNum=self->mOmitArrayNum;
            }
            if(_if_conditional157=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional157) {
                __dec_obj63=result_133->mParamTypes;
                result_133->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value160=list$1sTypephp_clone(self->mParamTypes))));
                come_call_finalizer3(__dec_obj63,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value160,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional158=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional158) {
                __dec_obj67=result_133->mParamNames;
                result_133->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value167=list$1charphp_clone(self->mParamNames))));
                come_call_finalizer3(__dec_obj67,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value167,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional162=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional162) {
                __dec_obj68=result_133->mResultType;
                result_133->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value168=tuple1$1sTypephp_clone(self->mResultType))));
                come_call_finalizer3(__dec_obj68,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value168,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional163=self!=((void*)0),            _if_conditional163) {
                result_133->mVarArgs=self->mVarArgs;
            }
            if(_if_conditional164=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional164) {
                __dec_obj69=result_133->mAlignas;
                result_133->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value169=sNode_clone(self->mAlignas))));
                if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value169) { right_value169 = come_decrement_ref_count2(right_value169, ((struct sNode*)right_value169)->finalize, ((struct sNode*)right_value169)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional165=self!=((void*)0),            _if_conditional165) {
                result_133->mUnsigned=self->mUnsigned;
            }
            if(_if_conditional166=self!=((void*)0),            _if_conditional166) {
                result_133->mShort=self->mShort;
            }
            if(_if_conditional167=self!=((void*)0),            _if_conditional167) {
                result_133->mLong=self->mLong;
            }
            if(_if_conditional168=self!=((void*)0),            _if_conditional168) {
                result_133->mLongLong=self->mLongLong;
            }
            if(_if_conditional169=self!=((void*)0),            _if_conditional169) {
                result_133->mConstant=self->mConstant;
            }
            if(_if_conditional170=self!=((void*)0),            _if_conditional170) {
                result_133->mRegister=self->mRegister;
            }
            if(_if_conditional171=self!=((void*)0),            _if_conditional171) {
                result_133->mVolatile=self->mVolatile;
            }
            if(_if_conditional172=self!=((void*)0),            _if_conditional172) {
                result_133->mStatic=self->mStatic;
            }
            if(_if_conditional173=self!=((void*)0),            _if_conditional173) {
                result_133->mUniq=self->mUniq;
            }
            if(_if_conditional174=self!=((void*)0),            _if_conditional174) {
                result_133->mRecord=self->mRecord;
            }
            if(_if_conditional175=self!=((void*)0),            _if_conditional175) {
                result_133->mExtern=self->mExtern;
            }
            if(_if_conditional176=self!=((void*)0),            _if_conditional176) {
                result_133->mRestrict=self->mRestrict;
            }
            if(_if_conditional177=self!=((void*)0),            _if_conditional177) {
                result_133->mImmutable=self->mImmutable;
            }
            if(_if_conditional178=self!=((void*)0),            _if_conditional178) {
                result_133->mHeap=self->mHeap;
            }
            if(_if_conditional179=self!=((void*)0),            _if_conditional179) {
                result_133->mDummyHeap=self->mDummyHeap;
            }
            if(_if_conditional180=self!=((void*)0),            _if_conditional180) {
                result_133->mDelegate=self->mDelegate;
            }
            if(_if_conditional181=self!=((void*)0),            _if_conditional181) {
                result_133->mShare=self->mShare;
            }
            if(_if_conditional182=self!=((void*)0),            _if_conditional182) {
                result_133->mClone=self->mClone;
            }
            if(_if_conditional183=self!=((void*)0),            _if_conditional183) {
                result_133->mNoHeap=self->mNoHeap;
            }
            if(_if_conditional184=self!=((void*)0),            _if_conditional184) {
                result_133->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            if(_if_conditional185=self!=((void*)0),            _if_conditional185) {
                result_133->mRefference=self->mRefference;
            }
            if(_if_conditional186=self!=((void*)0),            _if_conditional186) {
                result_133->mException=self->mException;
            }
            if(_if_conditional187=self!=((void*)0),            _if_conditional187) {
                result_133->mPointerNum=self->mPointerNum;
            }
            if(_if_conditional188=self!=((void*)0),            _if_conditional188) {
                result_133->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            }
            if(_if_conditional189=self!=((void*)0),            _if_conditional189) {
                result_133->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            if(_if_conditional190=self!=((void*)0),            _if_conditional190) {
                result_133->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
            }
            if(_if_conditional191=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional191) {
                __dec_obj70=result_133->mSizeNum;
                result_133->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value170=sNode_clone(self->mSizeNum))));
                if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count2(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value170) { right_value170 = come_decrement_ref_count2(right_value170, ((struct sNode*)right_value170)->finalize, ((struct sNode*)right_value170)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional192=self!=((void*)0),            _if_conditional192) {
                result_133->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            if(_if_conditional193=self!=((void*)0),            _if_conditional193) {
                result_133->mTypeOfExpression=self->mTypeOfExpression;
            }
            if(_if_conditional194=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional194) {
                __dec_obj71=result_133->mOriginalTypeName;
                result_133->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value171=string_clone(self->mOriginalTypeName))));
                __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional195=self!=((void*)0),            _if_conditional195) {
                result_133->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            if(_if_conditional196=self!=((void*)0),            _if_conditional196) {
                result_133->mFunctionParam=self->mFunctionParam;
            }
            if(_if_conditional197=self!=((void*)0),            _if_conditional197) {
                result_133->mAllocaValue=self->mAllocaValue;
            }
            if(_if_conditional198=self!=((void*)0),            _if_conditional198) {
                result_133->mGenericsStruct=self->mGenericsStruct;
            }
            if(_if_conditional199=self!=((void*)0),            _if_conditional199) {
                result_133->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            if(_if_conditional200=self!=((void*)0),            _if_conditional200) {
                result_133->mComeMemCore=self->mComeMemCore;
            }
            if(_if_conditional201=self!=((void*)0),            _if_conditional201) {
                result_133->mInline=self->mInline;
            }
            if(_if_conditional202=self!=((void*)0),            _if_conditional202) {
                result_133->mNullValue=self->mNullValue;
            }
            if(_if_conditional203=self!=((void*)0),            _if_conditional203) {
                result_133->mGuardValue=self->mGuardValue;
            }
            if(_if_conditional204=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional204) {
                __dec_obj72=result_133->mAsmName;
                result_133->mAsmName=(char*)come_increment_ref_count(((char*)(right_value172=string_clone(self->mAsmName))));
                __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional205=self!=((void*)0),            _if_conditional205) {
                result_133->mArrayPointerType=self->mArrayPointerType;
            }
            if(_if_conditional206=self!=((void*)0),            _if_conditional206) {
                result_133->mLambdaArray=self->mLambdaArray;
            }
            if(_if_conditional207=self!=((void*)0),            _if_conditional207) {
                result_133->mNoNumberArray=self->mNoNumberArray;
            }
            __result114__ = __result_obj__ = result_133;
            come_call_finalizer3(result_133,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result114__;
            come_call_finalizer3(result_133,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional133;
struct list$1sTypeph* __result101__;
void* right_value139;
void* right_value140;
struct list$1sTypeph* result_134;
struct list_item$1sTypeph* it_135;
_Bool _while_condtional27;
void* right_value144;
struct list$1sTypeph* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
right_value139 = (void*)0;
right_value140 = (void*)0;
memset(&result_134, 0, sizeof(struct list$1sTypeph*));
memset(&it_135, 0, sizeof(struct list_item$1sTypeph*));
right_value144 = (void*)0;
                    if(_if_conditional133=self==((void*)0),                    _if_conditional133) {
                        __result101__ = __result_obj__ = ((void*)0);
                        return __result101__;
                    }
                    result_134=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value140=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value139=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 139, "list$1sTypeph"))))))));
                    come_call_finalizer3(right_value139,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value140,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_135=self->head;
                    while(_while_condtional27=it_135!=((void*)0),                    _while_condtional27) {
                        list$1sTypeph_add(result_134,(struct sType*)come_increment_ref_count(((struct sType*)(right_value144=sType_clone(it_135->item)))));
                        come_call_finalizer3(right_value144,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        it_135=it_135->next;
                    }
                    __result103__ = __result_obj__ = result_134;
                    come_call_finalizer3(result_134,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result103__;
                    come_call_finalizer3(result_134,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional134;
void* right_value141;
struct list_item$1sTypeph* litem_136;
struct sType* __dec_obj50;
_Bool _if_conditional135;
void* right_value142;
struct list_item$1sTypeph* litem_137;
struct sType* __dec_obj51;
void* right_value143;
struct list_item$1sTypeph* litem_138;
struct sType* __dec_obj52;
struct list$1sTypeph* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
right_value141 = (void*)0;
memset(&litem_136, 0, sizeof(struct list_item$1sTypeph*));
right_value142 = (void*)0;
memset(&litem_137, 0, sizeof(struct list_item$1sTypeph*));
right_value143 = (void*)0;
memset(&litem_138, 0, sizeof(struct list_item$1sTypeph*));
                            if(_if_conditional134=self->len==0,                            _if_conditional134) {
                                litem_136=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value141=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 153, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value141,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_136->prev=((void*)0);
                                litem_136->next=((void*)0);
                                __dec_obj50=litem_136->item;
                                litem_136->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj50,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_136;
                                self->head=litem_136;
                            }
                            else {
                                if(_if_conditional135=self->len==1,                                _if_conditional135) {
                                    litem_137=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value142=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 163, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value142,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_137->prev=self->head;
                                    litem_137->next=((void*)0);
                                    __dec_obj51=litem_137->item;
                                    litem_137->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_137;
                                    self->head->next=litem_137;
                                }
                                else {
                                    litem_138=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value143=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 173, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value143,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_138->prev=self->tail;
                                    litem_138->next=((void*)0);
                                    __dec_obj52=litem_138->item;
                                    litem_138->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj52,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    self->tail->next=litem_138;
                                    self->tail=litem_138;
                                }
                            }
                            self->len++;
                            __result102__ = __result_obj__ = self;
                            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                            return __result102__;
                            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional137;
struct tuple1$1sTypeph* __result104__;
void* right_value146;
struct tuple1$1sTypeph* result_139;
_Bool _if_conditional139;
void* right_value147;
struct sType* __dec_obj54;
struct tuple1$1sTypeph* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value146 = (void*)0;
memset(&result_139, 0, sizeof(struct tuple1$1sTypeph*));
right_value147 = (void*)0;
                    if(_if_conditional137=self==(void*)0,                    _if_conditional137) {
                        __result104__ = __result_obj__ = (void*)0;
                        return __result104__;
                    }
                    result_139=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value146=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                    come_call_finalizer3(right_value146,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional139=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional139) {
                        __dec_obj54=result_139->v1;
                        result_139->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value147=sType_clone(self->v1))));
                        come_call_finalizer3(__dec_obj54,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value147,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    __result105__ = __result_obj__ = result_139;
                    come_call_finalizer3(result_139,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                    return __result105__;
                    come_call_finalizer3(result_139,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional138;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional138=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional138) {
                            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional144;
struct list$1sNodeph* __result106__;
void* right_value152;
void* right_value153;
struct list$1sNodeph* result_140;
struct list_item$1sNodeph* it_141;
_Bool _while_condtional28;
void* right_value158;
struct list$1sNodeph* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
right_value152 = (void*)0;
right_value153 = (void*)0;
memset(&result_140, 0, sizeof(struct list$1sNodeph*));
memset(&it_141, 0, sizeof(struct list_item$1sNodeph*));
right_value158 = (void*)0;
                    if(_if_conditional144=self==((void*)0),                    _if_conditional144) {
                        __result106__ = __result_obj__ = ((void*)0);
                        return __result106__;
                    }
                    result_140=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value153=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value152=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 139, "list$1sNodeph"))))))));
                    come_call_finalizer3(right_value152,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value153,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_141=self->head;
                    while(_while_condtional28=it_141!=((void*)0),                    _while_condtional28) {
                        list$1sNodeph_add(result_140,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value158=sNode_clone(it_141->item)))));
                        if(right_value158) { right_value158 = come_decrement_ref_count2(right_value158, ((struct sNode*)right_value158)->finalize, ((struct sNode*)right_value158)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        it_141=it_141->next;
                    }
                    __result110__ = __result_obj__ = result_140;
                    come_call_finalizer3(result_140,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result110__;
                    come_call_finalizer3(result_140,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional145;
void* right_value154;
struct list_item$1sNodeph* litem_142;
struct sNode* __dec_obj59;
_Bool _if_conditional146;
void* right_value155;
struct list_item$1sNodeph* litem_143;
struct sNode* __dec_obj60;
void* right_value156;
struct list_item$1sNodeph* litem_144;
struct sNode* __dec_obj61;
struct list$1sNodeph* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
right_value154 = (void*)0;
memset(&litem_142, 0, sizeof(struct list_item$1sNodeph*));
right_value155 = (void*)0;
memset(&litem_143, 0, sizeof(struct list_item$1sNodeph*));
right_value156 = (void*)0;
memset(&litem_144, 0, sizeof(struct list_item$1sNodeph*));
                            if(_if_conditional145=self->len==0,                            _if_conditional145) {
                                litem_142=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value154=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 153, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value154,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_142->prev=((void*)0);
                                litem_142->next=((void*)0);
                                __dec_obj59=litem_142->item;
                                litem_142->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_142;
                                self->head=litem_142;
                            }
                            else {
                                if(_if_conditional146=self->len==1,                                _if_conditional146) {
                                    litem_143=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value155=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 163, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value155,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_143->prev=self->head;
                                    litem_143->next=((void*)0);
                                    __dec_obj60=litem_143->item;
                                    litem_143->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail=litem_143;
                                    self->head->next=litem_143;
                                }
                                else {
                                    litem_144=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value156=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 173, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value156,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_144->prev=self->tail;
                                    litem_144->next=((void*)0);
                                    __dec_obj61=litem_144->item;
                                    litem_144->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail->next=litem_144;
                                    self->tail=litem_144;
                                }
                            }
                            self->len++;
                            __result107__ = __result_obj__ = self;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result107__;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional147;
struct sNode* __result108__;
void* right_value157;
struct sNode* result_145;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
_Bool _if_conditional154;
_Bool _if_conditional155;
struct sNode* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value157 = (void*)0;
memset(&result_145, 0, sizeof(struct sNode*));
                            if(_if_conditional147=self==(void*)0,                            _if_conditional147) {
                                __result108__ = __result_obj__ = (void*)0;
                                return __result108__;
                            }
                            result_145=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value157=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                            if(right_value157) { right_value157 = come_decrement_ref_count2(right_value157, ((struct sNode*)right_value157)->finalize, ((struct sNode*)right_value157)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            if(_if_conditional148=self!=((void*)0)&&self->clone!=((void*)0),                            _if_conditional148) {
                                result_145->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            if(_if_conditional149=self!=((void*)0),                            _if_conditional149) {
                                result_145->finalize=self->finalize;
                            }
                            if(_if_conditional150=self!=((void*)0),                            _if_conditional150) {
                                result_145->clone=self->clone;
                            }
                            if(_if_conditional151=self!=((void*)0),                            _if_conditional151) {
                                result_145->compile=self->compile;
                            }
                            if(_if_conditional152=self!=((void*)0),                            _if_conditional152) {
                                result_145->sline=self->sline;
                            }
                            if(_if_conditional153=self!=((void*)0),                            _if_conditional153) {
                                result_145->sname=self->sname;
                            }
                            if(_if_conditional154=self!=((void*)0),                            _if_conditional154) {
                                result_145->terminated=self->terminated;
                            }
                            if(_if_conditional155=self!=((void*)0),                            _if_conditional155) {
                                result_145->kind=self->kind;
                            }
                            __result109__ = __result_obj__ = result_145;
                            if(result_145) { result_145 = come_decrement_ref_count2(result_145, ((struct sNode*)result_145)->finalize, ((struct sNode*)result_145)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result109__;
                            if(result_145) { result_145 = come_decrement_ref_count2(result_145, ((struct sNode*)result_145)->finalize, ((struct sNode*)result_145)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional159;
struct list$1charph* __result111__;
void* right_value161;
void* right_value162;
struct list$1charph* result_146;
struct list_item$1charph* it_147;
_Bool _while_condtional29;
void* right_value166;
struct list$1charph* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
right_value161 = (void*)0;
right_value162 = (void*)0;
memset(&result_146, 0, sizeof(struct list$1charph*));
memset(&it_147, 0, sizeof(struct list_item$1charph*));
right_value166 = (void*)0;
                    if(_if_conditional159=self==((void*)0),                    _if_conditional159) {
                        __result111__ = __result_obj__ = ((void*)0);
                        return __result111__;
                    }
                    result_146=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value162=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value161=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 139, "list$1charph"))))))));
                    come_call_finalizer3(right_value161,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value162,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_147=self->head;
                    while(_while_condtional29=it_147!=((void*)0),                    _while_condtional29) {
                        list$1charph_add(result_146,(char*)come_increment_ref_count(((char*)(right_value166=string_clone(it_147->item)))));
                        right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        it_147=it_147->next;
                    }
                    __result113__ = __result_obj__ = result_146;
                    come_call_finalizer3(result_146,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result113__;
                    come_call_finalizer3(result_146,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional160;
void* right_value163;
struct list_item$1charph* litem_148;
char* __dec_obj64;
_Bool _if_conditional161;
void* right_value164;
struct list_item$1charph* litem_149;
char* __dec_obj65;
void* right_value165;
struct list_item$1charph* litem_150;
char* __dec_obj66;
struct list$1charph* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
right_value163 = (void*)0;
memset(&litem_148, 0, sizeof(struct list_item$1charph*));
right_value164 = (void*)0;
memset(&litem_149, 0, sizeof(struct list_item$1charph*));
right_value165 = (void*)0;
memset(&litem_150, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional160=self->len==0,                            _if_conditional160) {
                                litem_148=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value163=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 153, "list_item$1charph"))));
                                come_call_finalizer3(right_value163,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_148->prev=((void*)0);
                                litem_148->next=((void*)0);
                                __dec_obj64=litem_148->item;
                                litem_148->item=(char*)come_increment_ref_count(item);
                                __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_148;
                                self->head=litem_148;
                            }
                            else {
                                if(_if_conditional161=self->len==1,                                _if_conditional161) {
                                    litem_149=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value164=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 163, "list_item$1charph"))));
                                    come_call_finalizer3(right_value164,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_149->prev=self->head;
                                    litem_149->next=((void*)0);
                                    __dec_obj65=litem_149->item;
                                    litem_149->item=(char*)come_increment_ref_count(item);
                                    __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail=litem_149;
                                    self->head->next=litem_149;
                                }
                                else {
                                    litem_150=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value165=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 173, "list_item$1charph"))));
                                    come_call_finalizer3(right_value165,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_150->prev=self->tail;
                                    litem_150->next=((void*)0);
                                    __dec_obj66=litem_150->item;
                                    litem_150->item=(char*)come_increment_ref_count(item);
                                    __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail->next=litem_150;
                                    self->tail=litem_150;
                                }
                            }
                            self->len++;
                            __result112__ = __result_obj__ = self;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result112__;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional208;
char* result_152;
char* __result115__;
_Bool _if_conditional209;
char* __result116__;
char* result_153;
char* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_152, 0, sizeof(char*));
memset(&result_153, 0, sizeof(char*));
        if(_if_conditional208=self==((void*)0),        _if_conditional208) {
            memset(&result_152,0,sizeof(char*));
            __result115__ = __result_obj__ = result_152;
            return __result115__;
        }
        self->it=self->head;
        if(self->it) {
            __result116__ = __result_obj__ = self->it->item;
            return __result116__;
        }
        memset(&result_153,0,sizeof(char*));
        __result117__ = __result_obj__ = result_153;
        return __result117__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result118__;
memset(&__result_obj__, 0, sizeof(void*));
        __result118__ = self==((void*)0)||self->it==((void*)0);
        return __result118__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional210;
char* result_155;
char* __result119__;
_Bool _if_conditional211;
char* __result120__;
char* result_156;
char* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_155, 0, sizeof(char*));
memset(&result_156, 0, sizeof(char*));
        if(_if_conditional210=self==((void*)0)||self->it==((void*)0),        _if_conditional210) {
            memset(&result_155,0,sizeof(char*));
            __result119__ = __result_obj__ = result_155;
            return __result119__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result120__ = __result_obj__ = self->it->item;
            return __result120__;
        }
        memset(&result_156,0,sizeof(char*));
        __result121__ = __result_obj__ = result_156;
        return __result121__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional212;
void* right_value174;
struct list_item$1charph* litem_157;
char* __dec_obj73;
_Bool _if_conditional213;
void* right_value175;
struct list_item$1charph* litem_158;
char* __dec_obj74;
void* right_value176;
struct list_item$1charph* litem_159;
char* __dec_obj75;
struct list$1charph* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
right_value174 = (void*)0;
memset(&litem_157, 0, sizeof(struct list_item$1charph*));
right_value175 = (void*)0;
memset(&litem_158, 0, sizeof(struct list_item$1charph*));
right_value176 = (void*)0;
memset(&litem_159, 0, sizeof(struct list_item$1charph*));
            if(_if_conditional212=self->len==0,            _if_conditional212) {
                litem_157=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value174=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 223, "list_item$1charph"))));
                come_call_finalizer3(right_value174,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_157->prev=((void*)0);
                litem_157->next=((void*)0);
                __dec_obj73=litem_157->item;
                litem_157->item=(char*)come_increment_ref_count(item);
                __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                self->tail=litem_157;
                self->head=litem_157;
            }
            else {
                if(_if_conditional213=self->len==1,                _if_conditional213) {
                    litem_158=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value175=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 233, "list_item$1charph"))));
                    come_call_finalizer3(right_value175,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_158->prev=self->head;
                    litem_158->next=((void*)0);
                    __dec_obj74=litem_158->item;
                    litem_158->item=(char*)come_increment_ref_count(item);
                    __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                    self->tail=litem_158;
                    self->head->next=litem_158;
                }
                else {
                    litem_159=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value176=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 243, "list_item$1charph"))));
                    come_call_finalizer3(right_value176,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_159->prev=self->tail;
                    litem_159->next=((void*)0);
                    __dec_obj75=litem_159->item;
                    litem_159->item=(char*)come_increment_ref_count(item);
                    __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
                    self->tail->next=litem_159;
                    self->tail=litem_159;
                }
            }
            self->len++;
            __result122__ = __result_obj__ = self;
            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            return __result122__;
            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional214;
struct sBlock* __result123__;
void* right_value188;
struct sBlock* result_160;
_Bool _if_conditional217;
void* right_value189;
struct list$1sNodeph* __dec_obj81;
_Bool _if_conditional218;
void* right_value199;
struct sVarTable* __dec_obj84;
struct sBlock* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
right_value188 = (void*)0;
memset(&result_160, 0, sizeof(struct sBlock*));
right_value189 = (void*)0;
right_value199 = (void*)0;
        if(_if_conditional214=self==(void*)0,        _if_conditional214) {
            __result123__ = __result_obj__ = (void*)0;
            return __result123__;
        }
        result_160=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value188=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"))));
        come_call_finalizer3(right_value188,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional217=self!=((void*)0)&&self->mNodes!=((void*)0),        _if_conditional217) {
            __dec_obj81=result_160->mNodes;
            result_160->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value189=list$1sNodephp_clone(self->mNodes))));
            come_call_finalizer3(__dec_obj81,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value189,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional218=self!=((void*)0)&&self->mVarTable!=((void*)0),        _if_conditional218) {
            __dec_obj84=result_160->mVarTable;
            result_160->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value199=sVarTable_clone(self->mVarTable))));
            come_call_finalizer3(__dec_obj84,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value199,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        }
        __result140__ = __result_obj__ = result_160;
        come_call_finalizer3(result_160,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        return __result140__;
        come_call_finalizer3(result_160,sBlock_finalize, 0, 0, 0, 0, (void*)0);
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional215;
_Bool _if_conditional216;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional215=self!=((void*)0)&&self->mNodes!=((void*)0),            _if_conditional215) {
                come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional216=self!=((void*)0)&&self->mVarTable!=((void*)0),            _if_conditional216) {
                come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool _if_conditional219;
struct sVarTable* __result124__;
void* right_value190;
struct sVarTable* result_161;
_Bool _if_conditional220;
void* right_value198;
struct map$2charphsVarph* __dec_obj83;
_Bool _if_conditional244;
_Bool _if_conditional245;
_Bool _if_conditional246;
struct sVarTable* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
right_value190 = (void*)0;
memset(&result_161, 0, sizeof(struct sVarTable*));
right_value198 = (void*)0;
                if(_if_conditional219=self==(void*)0,                _if_conditional219) {
                    __result124__ = __result_obj__ = (void*)0;
                    return __result124__;
                }
                result_161=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value190=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"))));
                come_call_finalizer3(right_value190,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional220=self!=((void*)0)&&self->mVars!=((void*)0),                _if_conditional220) {
                    __dec_obj83=result_161->mVars;
                    result_161->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value198=map$2charphsVarphp_clone(self->mVars))));
                    come_call_finalizer3(__dec_obj83,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value198,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional244=self!=((void*)0),                _if_conditional244) {
                    result_161->mGlobal=self->mGlobal;
                }
                if(_if_conditional245=self!=((void*)0),                _if_conditional245) {
                    result_161->mParent=self->mParent;
                }
                if(_if_conditional246=self!=((void*)0),                _if_conditional246) {
                    result_161->mID=self->mID;
                }
                __result139__ = __result_obj__ = result_161;
                come_call_finalizer3(result_161,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
                return __result139__;
                come_call_finalizer3(result_161,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional221;
struct map$2charphsVarph* __result125__;
void* right_value191;
void* right_value192;
struct map$2charphsVarph* result_162;
void* right_value193;
void* right_value194;
struct list$1charp* __dec_obj82;
char* it_165;
struct sVar* default_value_168;
struct sVar* it2_171;
struct map$2charphsVarph* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
right_value191 = (void*)0;
right_value192 = (void*)0;
memset(&result_162, 0, sizeof(struct map$2charphsVarph*));
right_value193 = (void*)0;
right_value194 = (void*)0;
memset(&it_165, 0, sizeof(char*));
memset(&default_value_168, 0, sizeof(struct sVar*));
memset(&it2_171, 0, sizeof(struct sVar*));
                        if(_if_conditional221=self==((void*)0),                        _if_conditional221) {
                            __result125__ = __result_obj__ = ((void*)0);
                            return __result125__;
                        }
                        result_162=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value192=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value191=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./neo-c.h", 1162, "map$2charphsVarph"))))))));
                        come_call_finalizer3(right_value191,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value192,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                        __dec_obj82=result_162->key_list;
                        result_162->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value194=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value193=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1164, "list$1charp"))))))));
                        come_call_finalizer3(__dec_obj82,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value193,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value194,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        for(                        it_165=map$2charphsVarph_begin(self);                        !map$2charphsVarph_end(self);                        it_165=map$2charphsVarph_next(self)                        ){
                            memset(&default_value_168,0,sizeof(struct sVar*));
                            it2_171=map$2charphsVarph_at(self,it_165,default_value_168);
                            map$2charphsVarph_insert2(result_162,it_165,it2_171);
                        }
                        __result138__ = __result_obj__ = result_162;
                        come_call_finalizer3(result_162,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result138__;
                        come_call_finalizer3(result_162,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional222;
char* result_163;
char* __result126__;
_Bool _if_conditional223;
char* __result127__;
char* result_164;
char* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_163, 0, sizeof(char*));
memset(&result_164, 0, sizeof(char*));
                            if(_if_conditional222=self==((void*)0),                            _if_conditional222) {
                                memset(&result_163,0,sizeof(char*));
                                __result126__ = __result_obj__ = result_163;
                                return __result126__;
                            }
                            self->key_list->it=self->key_list->head;
                            if(self->key_list->it) {
                                __result127__ = __result_obj__ = self->key_list->it->item;
                                return __result127__;
                            }
                            memset(&result_164,0,sizeof(char*));
                            __result128__ = __result_obj__ = result_164;
                            return __result128__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result129__;
memset(&__result_obj__, 0, sizeof(void*));
                            __result129__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                            return __result129__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional224;
char* result_166;
char* __result130__;
_Bool _if_conditional225;
char* __result131__;
char* result_167;
char* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_166, 0, sizeof(char*));
memset(&result_167, 0, sizeof(char*));
                            if(_if_conditional224=self==((void*)0)||self->key_list->it==((void*)0),                            _if_conditional224) {
                                memset(&result_166,0,sizeof(char*));
                                __result130__ = __result_obj__ = result_166;
                                return __result130__;
                            }
                            self->key_list->it=self->key_list->it->next;
                            if(self->key_list->it) {
                                __result131__ = __result_obj__ = self->key_list->it->item;
                                return __result131__;
                            }
                            memset(&result_167,0,sizeof(char*));
                            __result132__ = __result_obj__ = result_167;
                            return __result132__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_169;
unsigned int it_170;
_Bool _while_condtional30;
_Bool _if_conditional226;
_Bool _if_conditional227;
struct sVar* __result133__;
_Bool _if_conditional228;
_Bool _if_conditional229;
struct sVar* __result134__;
struct sVar* __result135__;
struct sVar* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_169, 0, sizeof(unsigned int));
memset(&it_170, 0, sizeof(unsigned int));
                                hash_169=string_get_hash_key(((char*)key))%self->size;
                                it_170=hash_169;
                                while(_while_condtional30=(_Bool)1,                                _while_condtional30) {
                                    if(_if_conditional226=self->item_existance[it_170],                                    _if_conditional226) {
                                        if(_if_conditional227=string_equals(self->keys[it_170],key),                                        _if_conditional227) {
                                            __result133__ = __result_obj__ = self->items[it_170];
                                            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result133__;
                                        }
                                        it_170++;
                                        if(_if_conditional228=it_170>=self->size,                                        _if_conditional228) {
                                            it_170=0;
                                        }
                                        else {
                                            if(_if_conditional229=it_170==hash_169,                                            _if_conditional229) {
                                                __result134__ = __result_obj__ = default_value;
                                                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result134__;
                                            }
                                        }
                                    }
                                    else {
                                        __result135__ = __result_obj__ = default_value;
                                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result135__;
                                    }
                                }
                                __result136__ = __result_obj__ = default_value;
                                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                return __result136__;
                                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool _if_conditional230;
unsigned int hash_183;
int it_184;
_Bool _while_condtional32;
_Bool _if_conditional234;
_Bool _if_conditional235;
_Bool _if_conditional236;
_Bool _if_conditional237;
_Bool _if_conditional238;
_Bool _if_conditional239;
_Bool _if_conditional240;
_Bool _if_conditional241;
_Bool same_key_exist_185;
char* it2_186;
_Bool _if_conditional242;
_Bool _if_conditional243;
struct map$2charphsVarph* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_183, 0, sizeof(unsigned int));
memset(&it_184, 0, sizeof(int));
memset(&same_key_exist_185, 0, sizeof(_Bool));
memset(&it2_186, 0, sizeof(char*));
                                if(_if_conditional230=self->len*2>=self->size,                                _if_conditional230) {
                                    map$2charphsVarph_rehash(self);
                                }
                                hash_183=string_get_hash_key(key)%self->size;
                                it_184=hash_183;
                                while(_while_condtional32=(_Bool)1,                                _while_condtional32) {
                                    if(_if_conditional234=self->item_existance[it_184],                                    _if_conditional234) {
                                        if(_if_conditional235=string_equals(self->keys[it_184],key),                                        _if_conditional235) {
                                            if(_if_conditional236=1,                                            _if_conditional236) {
                                                self->keys[it_184] = come_decrement_ref_count2(self->keys[it_184], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                list$1charp_remove(self->key_list,self->keys[it_184]);
                                                self->keys[it_184]=(char*)come_increment_ref_count(key);
                                            }
                                            else {
                                                list$1charp_remove(self->key_list,self->keys[it_184]);
                                                self->keys[it_184]=key;
                                            }
                                            if(_if_conditional237=1,                                            _if_conditional237) {
                                                come_call_finalizer3(self->items[it_184],sVar_finalize, 0, 0, 0, 0, (void*)0);
                                                self->items[it_184]=(struct sVar*)come_increment_ref_count(item);
                                            }
                                            else {
                                                self->items[it_184]=item;
                                            }
                                            break;
                                        }
                                        it_184++;
                                        if(_if_conditional238=it_184>=self->size,                                        _if_conditional238) {
                                            it_184=0;
                                        }
                                        else {
                                            if(_if_conditional239=it_184==hash_183,                                            _if_conditional239) {
                                                printf("unexpected error in map.insert\n");
                                                stackframe();
                                                exit(2);
                                            }
                                        }
                                    }
                                    else {
                                        self->item_existance[it_184]=(_Bool)1;
                                        if(_if_conditional240=1,                                        _if_conditional240) {
                                            self->keys[it_184]=(char*)come_increment_ref_count(key);
                                        }
                                        else {
                                            self->keys[it_184]=key;
                                        }
                                        if(_if_conditional241=1,                                        _if_conditional241) {
                                            self->items[it_184]=(struct sVar*)come_increment_ref_count(item);
                                        }
                                        else {
                                            self->items[it_184]=item;
                                        }
                                        self->len++;
                                        break;
                                    }
                                }
                                same_key_exist_185=(_Bool)0;
                                for(                                it2_186=list$1charp_begin(self->key_list);                                !list$1charp_end(self->key_list);                                it2_186=list$1charp_next(self->key_list)                                ){
                                    if(_if_conditional242=string_equals(it2_186,key),                                    _if_conditional242) {
                                        same_key_exist_185=(_Bool)1;
                                    }
                                }
                                if(_if_conditional243=!same_key_exist_185,                                _if_conditional243) {
                                    list$1charp_push_back(self->key_list,key);
                                }
                                __result137__ = __result_obj__ = self;
                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                return __result137__;
                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
int size_172;
void* right_value195;
char** keys_173;
void* right_value196;
struct sVar** items_174;
void* right_value197;
_Bool* item_existance_175;
int len_176;
char* it_177;
struct sVar* default_value_178;
struct sVar* it2_179;
unsigned int hash_180;
int n_181;
_Bool _while_condtional31;
_Bool _if_conditional231;
_Bool _if_conditional232;
_Bool _if_conditional233;
struct sVar* default_value_182;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_172, 0, sizeof(int));
right_value195 = (void*)0;
memset(&keys_173, 0, sizeof(char**));
right_value196 = (void*)0;
memset(&items_174, 0, sizeof(struct sVar**));
right_value197 = (void*)0;
memset(&item_existance_175, 0, sizeof(_Bool*));
memset(&len_176, 0, sizeof(int));
memset(&it_177, 0, sizeof(char*));
memset(&default_value_178, 0, sizeof(struct sVar*));
memset(&it2_179, 0, sizeof(struct sVar*));
memset(&hash_180, 0, sizeof(unsigned int));
memset(&n_181, 0, sizeof(int));
memset(&default_value_182, 0, sizeof(struct sVar*));
                                        size_172=self->size*10;
                                        keys_173=(char**)come_increment_ref_count(((char**)(right_value195=(char**)come_calloc(1, sizeof(char*)*(1*(size_172)), "./neo-c.h", 1319, "char*%"))));
                                        right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        items_174=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value196=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_172)), "./neo-c.h", 1320, "sVar*%"))));
                                        come_call_finalizer3(right_value196,sVar_finalize, 0, 1, 0, 0, __result_obj__);
                                        item_existance_175=(_Bool*)come_increment_ref_count(((_Bool*)(right_value197=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_172)), "./neo-c.h", 1321, "bool"))));
                                        right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        len_176=0;
                                        for(                                        it_177=map$2charphsVarph_begin(self);                                        !map$2charphsVarph_end(self);                                        it_177=map$2charphsVarph_next(self)                                        ){
                                            memset(&default_value_178,0,sizeof(struct sVar*));
                                            it2_179=map$2charphsVarph_at(self,it_177,default_value_178);
                                            hash_180=string_get_hash_key(it_177)%size_172;
                                            n_181=hash_180;
                                            while(_while_condtional31=(_Bool)1,                                            _while_condtional31) {
                                                if(_if_conditional231=item_existance_175[n_181],                                                _if_conditional231) {
                                                    n_181++;
                                                    if(_if_conditional232=n_181>=size_172,                                                    _if_conditional232) {
                                                        n_181=0;
                                                    }
                                                    else {
                                                        if(_if_conditional233=n_181==hash_180,                                                        _if_conditional233) {
                                                            printf("unexpected error in map.rehash(1)\n");
                                                            stackframe();
                                                            exit(2);
                                                        }
                                                    }
                                                }
                                                else {
                                                    item_existance_175[n_181]=(_Bool)1;
                                                    keys_173[n_181]=it_177;
                                                    items_174[n_181]=map$2charphsVarph_at(self,it_177,default_value_182);
                                                    len_176++;
                                                    break;
                                                }
                                            }
                                        }
                                        come_free((char*)self->items);
                                        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        come_free((char*)self->keys);
                                        self->keys=keys_173;
                                        self->items=items_174;
                                        self->item_existance=item_existance_175;
                                        self->size=size_172;
                                        self->len=len_176;
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
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
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional247=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional247) {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional248=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional248) {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional249=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional249) {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional250=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional250) {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional251=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),        _if_conditional251) {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional252=self!=((void*)0)&&self->mLambdaType!=((void*)0),        _if_conditional252) {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional253=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional253) {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional254=self!=((void*)0)&&self->mSource!=((void*)0),        _if_conditional254) {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional255=self!=((void*)0)&&self->mSourceHead!=((void*)0),        _if_conditional255) {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional256=self!=((void*)0)&&self->mSourceHead2!=((void*)0),        _if_conditional256) {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional257=self!=((void*)0)&&self->mSourceDefer!=((void*)0),        _if_conditional257) {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional258=self!=((void*)0)&&self->mComeHeader!=((void*)0),        _if_conditional258) {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional259=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional259) {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info){
void* __result_obj__;
void* right_value202;
char* __dec_obj88;
struct sNodeBase* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
right_value202 = (void*)0;
    self->sline=info->sline;
    __dec_obj88=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value202=__builtin_string(info->sname))));
    __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result142__ = __result_obj__ = self;
    come_call_finalizer3(self,sNodeBase_finalize, 0, 0, 1, 0, (void*)0);
    return __result142__;
    come_call_finalizer3(self,sNodeBase_finalize, 0, 0, 1, 0, (void*)0);
}

static void sNodeBase_finalize(struct sNodeBase* self){
void* __result_obj__;
_Bool _if_conditional260;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional260=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional260) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info){
void* __result_obj__;
int __result143__;
memset(&__result_obj__, 0, sizeof(void*));
    __result143__ = self->sline;
    return __result143__;
}

_Bool sNodeBase_terminated(struct sNodeBase* self){
void* __result_obj__;
_Bool __result144__;
memset(&__result_obj__, 0, sizeof(void*));
    __result144__ = (_Bool)0;
    return __result144__;
}

char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info){
void* __result_obj__;
void* right_value203;
char* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
right_value203 = (void*)0;
    __result145__ = __result_obj__ = ((char*)(right_value203=__builtin_string(self->sname)));
    right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result145__;
}

