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
struct tuple2$2charphsNodeph
{
    char* v1;
    struct sNode* v2;
};
struct list_item$1tuple2$2charphsNodephph
{
    struct tuple2$2charphsNodeph* item;
    struct list_item$1tuple2$2charphsNodephph* prev;
    struct list_item$1tuple2$2charphsNodephph* next;
};
struct list$1tuple2$2charphsNodephph
{
    struct list_item$1tuple2$2charphsNodephph* head;
    struct list_item$1tuple2$2charphsNodephph* tail;
    int len;
    struct list_item$1tuple2$2charphsNodephph* it;
};
struct sEnumNode
{
    int sline;
    char* sname;
    char* mTypeName;
    struct list$1tuple2$2charphsNodephph* mElements;
    _Bool mOutput;
    char* mDeclareSName;
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

struct sEnumNode* sEnumNode_initialize(struct sEnumNode* self, char* type_name, struct list$1tuple2$2charphsNodephph* elements, _Bool output, struct sInfo* info);

_Bool sEnumNode_terminated(struct sEnumNode* self);

char* sEnumNode_kind(struct sEnumNode* self);

_Bool sEnumNode_compile(struct sEnumNode* self, struct sInfo* info);

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static struct sNode* sNode_clone(struct sNode* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static void sVar_finalize(struct sVar* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self);
static void CVALUE_finalize(struct CVALUE* self);
struct sNode* parse_enum(char* type_name, struct sInfo* info);

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
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
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charph_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info);

static void sEnumNode_finalize(struct sEnumNode* self);
static struct sEnumNode* sEnumNode_clone(struct sEnumNode* self);
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










struct sEnumNode* sEnumNode_initialize(struct sEnumNode* self, char* type_name, struct list$1tuple2$2charphsNodephph* elements, _Bool output, struct sInfo* info){
void* __result_obj__;
void* right_value79;
char* __dec_obj12;
void* right_value80;
char* __dec_obj13;
void* right_value91;
struct list$1tuple2$2charphsNodephph* __dec_obj19;
void* right_value92;
char* __dec_obj20;
struct sEnumNode* __result60__;
struct sEnumNode* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value80 = (void*)0;
right_value91 = (void*)0;
right_value92 = (void*)0;
    # 14 "16enum.c"
    self->sline=info->sline;
    # 15 "16enum.c"
    __dec_obj12=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value79=__builtin_string(info->sname))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 17 "16enum.c"
    __dec_obj13=self->mTypeName;
    self->mTypeName=(char*)come_increment_ref_count(((char*)(right_value80=__builtin_string(type_name))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 18 "16enum.c"
    __dec_obj19=self->mElements;
    self->mElements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value91=list$1tuple2$2charphsNodephphp_clone(elements))));
    come_call_finalizer3(__dec_obj19,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value91,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 20 "16enum.c"
    self->mOutput=output;
    # 22 "16enum.c"
    __dec_obj20=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value92=__builtin_string(info->sname))));
    __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 24 "16enum.c"
    __result60__ = __result_obj__ = self;
    come_call_finalizer3(self,sEnumNode_finalize, 0, 0, 1, 0, (void*)0);
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result60__;
    # 27 "16enum.c"
    __result61__ = __result_obj__ = self;
    come_call_finalizer3(self,sEnumNode_finalize, 0, 0, 1, 0, (void*)0);
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result61__;
    come_call_finalizer3(self,sEnumNode_finalize, 0, 0, 1, 0, (void*)0);
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sEnumNode_terminated(struct sEnumNode* self){
void* __result_obj__;
_Bool __result62__;
memset(&__result_obj__, 0, sizeof(void*));
    # 29 "16enum.c"
    __result62__ = (_Bool)1;
    return __result62__;
}

char* sEnumNode_kind(struct sEnumNode* self){
void* __result_obj__;
void* right_value93;
char* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
    # 34 "16enum.c"
    __result63__ = __result_obj__ = ((char*)(right_value93=__builtin_string("sEnumNode")));
    right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result63__;
}

_Bool sEnumNode_compile(struct sEnumNode* self, struct sInfo* info){
void* __result_obj__;
char* type_name_58;
struct list$1tuple2$2charphsNodephph* elements_59;
void* right_value94;
void* right_value95;
struct buffer* buf_60;
_Bool _if_conditional49;
void* right_value96;
void* right_value97;
int i_61;
int n_62;
struct list$1tuple2$2charphsNodephph* o2_saved_63;
struct tuple2$2charphsNodeph* it_66;
struct tuple2$2charphsNodeph* multiple_assign_var1;
char* name_69;
struct sNode* value_70;
void* right_value98;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional82;
void* right_value99;
char* c_value_79;
void* right_value100;
void* right_value101;
_Bool _if_conditional83;
_Bool __result77__;
void* right_value102;
struct CVALUE* right_value_80;
void* right_value103;
void* right_value104;
void* right_value105;
_Bool _if_conditional86;
void* right_value106;
_Bool _if_conditional87;
_Bool _if_conditional88;
void* right_value107;
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_name_58, 0, sizeof(char*));
memset(&elements_59, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
right_value94 = (void*)0;
right_value95 = (void*)0;
memset(&buf_60, 0, sizeof(struct buffer*));
right_value96 = (void*)0;
right_value97 = (void*)0;
memset(&i_61, 0, sizeof(int));
memset(&n_62, 0, sizeof(int));
memset(&o2_saved_63, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_66, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&name_69, 0, sizeof(char*));
memset(&value_70, 0, sizeof(struct sNode*));
memset(&name_69, 0, sizeof(char*));
memset(&value_70, 0, sizeof(struct sNode*));
right_value98 = (void*)0;
right_value99 = (void*)0;
memset(&c_value_79, 0, sizeof(char*));
right_value100 = (void*)0;
right_value101 = (void*)0;
right_value102 = (void*)0;
memset(&right_value_80, 0, sizeof(struct CVALUE*));
right_value103 = (void*)0;
right_value104 = (void*)0;
right_value105 = (void*)0;
right_value106 = (void*)0;
right_value107 = (void*)0;
    # 39 "16enum.c"
    type_name_58=(char*)come_increment_ref_count(self->mTypeName);
    # 40 "16enum.c"
    elements_59=self->mElements;
    # 42 "16enum.c"
    buf_60=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value95=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value94=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "16enum.c", 42, "buffer"))))))));
    come_call_finalizer3(right_value94,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value95,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 51 "16enum.c"
    # 44 "16enum.c"
    if(_if_conditional49=string_operator_equals(type_name_58,""),    _if_conditional49) {
        # 45 "16enum.c"
        buffer_append_str(buf_60,((char*)(right_value96=xsprintf("enum { ",type_name_58))));
        right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        # 48 "16enum.c"
        buffer_append_str(buf_60,((char*)(right_value97=xsprintf("enum %s { ",type_name_58))));
        right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 51 "16enum.c"
    i_61=0;
    # 52 "16enum.c"
    n_62=0;
    # 96 "16enum.c"
    for(    o2_saved_63=(elements_59),it_66=list$1tuple2$2charphsNodephph_begin((o2_saved_63));    !list$1tuple2$2charphsNodephph_end((o2_saved_63));    it_66=list$1tuple2$2charphsNodephph_next((o2_saved_63))    ){
        # 54 "16enum.c"
        multiple_assign_var1=it_66;
        name_69=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        value_70=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
        # 60 "16enum.c"
        # 56 "16enum.c"
        if(_if_conditional79=map$2charphsVarph_at(info->gv_table->mVars,((char*)(right_value98=__builtin_string(name_69))),((void*)0))!=((void*)0),        right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
        _if_conditional79) {
            # 57 "16enum.c"
            self->mOutput=(_Bool)0;
        }
        # 93 "16enum.c"
        # 60 "16enum.c"
        if(_if_conditional80=value_70==((void*)0),        _if_conditional80) {
            # 61 "16enum.c"
            buffer_append_str(buf_60,name_69);
            # 62 "16enum.c"
            buffer_append_str(buf_60,"\n");
            # 68 "16enum.c"
            # 64 "16enum.c"
            if(_if_conditional82=i_61!=list$1tuple2$2charphsNodephph_length(elements_59)-1,            _if_conditional82) {
                # 65 "16enum.c"
                buffer_append_str(buf_60,",");
            }
            # 68 "16enum.c"
            c_value_79=(char*)come_increment_ref_count(((char*)(right_value99=xsprintf("%d",n_62))));
            right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 70 "16enum.c"
            add_variable_to_global_table_with_int_value(name_69,(struct sType*)come_increment_ref_count(((struct sType*)(right_value101=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value100=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "16enum.c", 70, "sType")))),"int",(_Bool)0,info)))),c_value_79,info);
            come_call_finalizer3(right_value100,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value101,sType_finalize, 0, 1, 0, 0, __result_obj__);
            c_value_79 = come_decrement_ref_count2(c_value_79, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            # 77 "16enum.c"
            # 73 "16enum.c"
            if(_if_conditional83=!node_compile(value_70,info),            _if_conditional83) {
                # 74 "16enum.c"
                __result77__ = (_Bool)0;
                name_69 = come_decrement_ref_count2(name_69, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(value_70) { value_70 = come_decrement_ref_count2(value_70, ((struct sNode*)value_70)->finalize, ((struct sNode*)value_70)->_protocol_obj, 0, 0, 0, (void*)0); } 
                type_name_58 = come_decrement_ref_count2(type_name_58, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_60,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result77__;
            }
            # 77 "16enum.c"
            right_value_80=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value102=get_value_from_stack(-1,info))));
            come_call_finalizer3(right_value102,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            # 78 "16enum.c"
            dec_stack_ptr(1,info);
            # 80 "16enum.c"
            add_variable_to_global_table_with_int_value(name_69,(struct sType*)come_increment_ref_count(((struct sType*)(right_value104=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value103=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "16enum.c", 80, "sType")))),"int",(_Bool)0,info)))),right_value_80->c_value,info);
            come_call_finalizer3(right_value103,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value104,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 82 "16enum.c"
            buffer_append_str(buf_60,((char*)(right_value105=xsprintf("%s=%s",name_69,right_value_80->c_value))));
            right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 88 "16enum.c"
            # 84 "16enum.c"
            if(_if_conditional86=i_61!=list$1tuple2$2charphsNodephph_length(elements_59)-1,            _if_conditional86) {
                # 85 "16enum.c"
                buffer_append_str(buf_60,",");
            }
            # 88 "16enum.c"
            buffer_append_str(buf_60,"\n");
            # 90 "16enum.c"
            n_62=atoi(right_value_80->c_value);
            come_call_finalizer3(right_value_80,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 93 "16enum.c"
        i_61++;
        # 94 "16enum.c"
        n_62++;
        name_69 = come_decrement_ref_count2(name_69, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(value_70) { value_70 = come_decrement_ref_count2(value_70, ((struct sNode*)value_70)->finalize, ((struct sNode*)value_70)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 96 "16enum.c"
    buffer_append_str(buf_60,((char*)(right_value106=xsprintf("};\n",type_name_58))));
    right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 106 "16enum.c"
    # 98 "16enum.c"
    if(_if_conditional87=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),    _if_conditional87) {
    }
    else {
        # 104 "16enum.c"
        # 101 "16enum.c"
        if(self->mOutput) {
            # 102 "16enum.c"
            add_come_code_at_source_head(info,"%s",((char*)(right_value107=buffer_to_string(buf_60))));
            right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    # 106 "16enum.c"
    __result78__ = (_Bool)1;
    type_name_58 = come_decrement_ref_count2(type_name_58, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_60,buffer_finalize, 0, 0, 0, 0, (void*)0);
    return __result78__;
    type_name_58 = come_decrement_ref_count2(type_name_58, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_60,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional19;
struct list$1tuple2$2charphsNodephph* __result52__;
void* right_value81;
void* right_value82;
struct list$1tuple2$2charphsNodephph* result_49;
struct list_item$1tuple2$2charphsNodephph* it_50;
_Bool _while_condtional8;
void* right_value90;
struct list$1tuple2$2charphsNodephph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
right_value82 = (void*)0;
memset(&result_49, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_50, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value90 = (void*)0;
        # 133 "./neo-c.h"
        # 130 "./neo-c.h"
        if(_if_conditional19=self==((void*)0),        _if_conditional19) {
            # 131 "./neo-c.h"
            __result52__ = __result_obj__ = ((void*)0);
            return __result52__;
        }
        # 133 "./neo-c.h"
        result_49=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value82=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value81=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 133, "list$1tuple2$2charphsNodephph"))))))));
        come_call_finalizer3(right_value81,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value82,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 135 "./neo-c.h"
        it_50=self->head;
        # 142 "./neo-c.h"
        while(_while_condtional8=it_50!=((void*)0),        _while_condtional8) {
            # 137 "./neo-c.h"
            list$1tuple2$2charphsNodephph_add(result_49,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value90=tuple2$2charphsNodephp_clone(it_50->item)))));
            come_call_finalizer3(right_value90,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            # 139 "./neo-c.h"
            it_50=it_50->next;
        }
        # 142 "./neo-c.h"
        __result59__ = __result_obj__ = result_49;
        come_call_finalizer3(result_49,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result59__;
        come_call_finalizer3(result_49,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsNodephph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
            # 95 "./neo-c.h"
            self->head=((void*)0);
            # 96 "./neo-c.h"
            self->tail=((void*)0);
            # 97 "./neo-c.h"
            self->len=0;
            # 99 "./neo-c.h"
            __result53__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result53__;
            come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsNodephph* it_47;
_Bool _while_condtional7;
struct list_item$1tuple2$2charphsNodephph* prev_it_48;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_47, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_48, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                # 114 "./neo-c.h"
                it_47=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional7=it_47!=((void*)0),                _while_condtional7) {
                    # 116 "./neo-c.h"
                    prev_it_48=it_47;
                    # 117 "./neo-c.h"
                    it_47=it_47->next;
                    # 118 "./neo-c.h"
                    come_call_finalizer3(prev_it_48,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional20;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1tuple2$2charphsNodephphp_finalize"
                        # 0 "list_item$1tuple2$2charphsNodephphp_finalize"
                        if(_if_conditional20=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional20) {
                            # 0 "list_item$1tuple2$2charphsNodephphp_finalize"
                            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional23;
void* right_value83;
struct list_item$1tuple2$2charphsNodephph* litem_51;
struct tuple2$2charphsNodeph* __dec_obj14;
_Bool _if_conditional26;
void* right_value84;
struct list_item$1tuple2$2charphsNodephph* litem_52;
struct tuple2$2charphsNodeph* __dec_obj15;
void* right_value85;
struct list_item$1tuple2$2charphsNodephph* litem_53;
struct tuple2$2charphsNodeph* __dec_obj16;
struct list$1tuple2$2charphsNodephph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value83 = (void*)0;
memset(&litem_51, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value84 = (void*)0;
memset(&litem_52, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value85 = (void*)0;
memset(&litem_53, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                # 177 "./neo-c.h"
                # 146 "./neo-c.h"
                if(_if_conditional23=self->len==0,                _if_conditional23) {
                    # 147 "./neo-c.h"
                    litem_51=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value83=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 147, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer3(right_value83,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 149 "./neo-c.h"
                    litem_51->prev=((void*)0);
                    # 150 "./neo-c.h"
                    litem_51->next=((void*)0);
                    # 151 "./neo-c.h"
                    __dec_obj14=litem_51->item;
                    litem_51->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj14,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    # 153 "./neo-c.h"
                    self->tail=litem_51;
                    # 154 "./neo-c.h"
                    self->head=litem_51;
                }
                else {
                    # 177 "./neo-c.h"
                    # 156 "./neo-c.h"
                    if(_if_conditional26=self->len==1,                    _if_conditional26) {
                        # 157 "./neo-c.h"
                        litem_52=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value84=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 157, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer3(right_value84,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 159 "./neo-c.h"
                        litem_52->prev=self->head;
                        # 160 "./neo-c.h"
                        litem_52->next=((void*)0);
                        # 161 "./neo-c.h"
                        __dec_obj15=litem_52->item;
                        litem_52->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj15,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        # 163 "./neo-c.h"
                        self->tail=litem_52;
                        # 164 "./neo-c.h"
                        self->head->next=litem_52;
                    }
                    else {
                        # 167 "./neo-c.h"
                        litem_53=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value85=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 167, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer3(right_value85,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 169 "./neo-c.h"
                        litem_53->prev=self->tail;
                        # 170 "./neo-c.h"
                        litem_53->next=((void*)0);
                        # 171 "./neo-c.h"
                        __dec_obj16=litem_53->item;
                        litem_53->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj16,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        # 173 "./neo-c.h"
                        self->tail->next=litem_53;
                        # 174 "./neo-c.h"
                        self->tail=litem_53;
                    }
                }
                # 177 "./neo-c.h"
                self->len++;
                # 179 "./neo-c.h"
                __result54__ = __result_obj__ = self;
                come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result54__;
                come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional29;
_Bool _if_conditional30;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "tuple2$2charphsNodephp_finalize"
                            # 0 "tuple2$2charphsNodephp_finalize"
                            if(_if_conditional29=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional29) {
                                # 0 "tuple2$2charphsNodephp_finalize"
                                self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 2 "tuple2$2charphsNodephp_finalize"
                            # 1 "tuple2$2charphsNodephp_finalize"
                            if(_if_conditional30=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional30) {
                                # 1 "tuple2$2charphsNodephp_finalize"
                                if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional31;
struct tuple2$2charphsNodeph* __result55__;
void* right_value86;
struct tuple2$2charphsNodeph* result_54;
_Bool _if_conditional34;
void* right_value87;
char* __dec_obj17;
_Bool _if_conditional35;
void* right_value89;
struct sNode* __dec_obj18;
struct tuple2$2charphsNodeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
memset(&result_54, 0, sizeof(struct tuple2$2charphsNodeph*));
right_value87 = (void*)0;
right_value89 = (void*)0;
                # 3 "tuple2$2charphsNodephp_clone"
                # 2 "tuple2$2charphsNodephp_clone"
                if(_if_conditional31=self==(void*)0,                _if_conditional31) {
                    # 2 "tuple2$2charphsNodephp_clone"
                    __result55__ = __result_obj__ = (void*)0;
                    return __result55__;
                }
                # 3 "tuple2$2charphsNodephp_clone"
                result_54=(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value86=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"))));
                come_call_finalizer3(right_value86,tuple2$2charphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
                # 5 "tuple2$2charphsNodephp_clone"
                # 4 "tuple2$2charphsNodephp_clone"
                if(_if_conditional34=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional34) {
                    # 4 "tuple2$2charphsNodephp_clone"
                    __dec_obj17=result_54->v1;
                    result_54->v1=(char*)come_increment_ref_count(((char*)(right_value87=string_clone(self->v1))));
                    __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 6 "tuple2$2charphsNodephp_clone"
                # 5 "tuple2$2charphsNodephp_clone"
                if(_if_conditional35=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional35) {
                    # 5 "tuple2$2charphsNodephp_clone"
                    __dec_obj18=result_54->v2;
                    result_54->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value89=sNode_clone(self->v2))));
                    if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count2(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value89) { right_value89 = come_decrement_ref_count2(right_value89, ((struct sNode*)right_value89)->finalize, ((struct sNode*)right_value89)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 6 "tuple2$2charphsNodephp_clone"
                __result58__ = __result_obj__ = result_54;
                come_call_finalizer3(result_54,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result58__;
                come_call_finalizer3(result_54,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional32;
_Bool _if_conditional33;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple2$2charphsNodeph_finalize"
                    # 0 "tuple2$2charphsNodeph_finalize"
                    if(_if_conditional32=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional32) {
                        # 0 "tuple2$2charphsNodeph_finalize"
                        self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 2 "tuple2$2charphsNodeph_finalize"
                    # 1 "tuple2$2charphsNodeph_finalize"
                    if(_if_conditional33=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional33) {
                        # 1 "tuple2$2charphsNodeph_finalize"
                        if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional36;
struct sNode* __result56__;
void* right_value88;
struct sNode* result_55;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
struct sNode* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
memset(&result_55, 0, sizeof(struct sNode*));
                        # 3 "sNode_clone"
                        # 2 "sNode_clone"
                        if(_if_conditional36=self==(void*)0,                        _if_conditional36) {
                            # 2 "sNode_clone"
                            __result56__ = __result_obj__ = (void*)0;
                            return __result56__;
                        }
                        # 3 "sNode_clone"
                        result_55=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value88=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value88) { right_value88 = come_decrement_ref_count2(right_value88, ((struct sNode*)right_value88)->finalize, ((struct sNode*)right_value88)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 5 "sNode_clone"
                        # 4 "sNode_clone"
                        if(_if_conditional37=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional37) {
                            # 4 "sNode_clone"
                            result_55->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        # 6 "sNode_clone"
                        # 5 "sNode_clone"
                        if(_if_conditional38=self!=((void*)0),                        _if_conditional38) {
                            # 5 "sNode_clone"
                            result_55->finalize=self->finalize;
                        }
                        # 7 "sNode_clone"
                        # 6 "sNode_clone"
                        if(_if_conditional39=self!=((void*)0),                        _if_conditional39) {
                            # 6 "sNode_clone"
                            result_55->clone=self->clone;
                        }
                        # 8 "sNode_clone"
                        # 7 "sNode_clone"
                        if(_if_conditional40=self!=((void*)0),                        _if_conditional40) {
                            # 7 "sNode_clone"
                            result_55->compile=self->compile;
                        }
                        # 9 "sNode_clone"
                        # 8 "sNode_clone"
                        if(_if_conditional41=self!=((void*)0),                        _if_conditional41) {
                            # 8 "sNode_clone"
                            result_55->sline=self->sline;
                        }
                        # 10 "sNode_clone"
                        # 9 "sNode_clone"
                        if(_if_conditional42=self!=((void*)0),                        _if_conditional42) {
                            # 9 "sNode_clone"
                            result_55->sname=self->sname;
                        }
                        # 11 "sNode_clone"
                        # 10 "sNode_clone"
                        if(_if_conditional43=self!=((void*)0),                        _if_conditional43) {
                            # 10 "sNode_clone"
                            result_55->terminated=self->terminated;
                        }
                        # 12 "sNode_clone"
                        # 11 "sNode_clone"
                        if(_if_conditional44=self!=((void*)0),                        _if_conditional44) {
                            # 11 "sNode_clone"
                            result_55->kind=self->kind;
                        }
                        # 12 "sNode_clone"
                        __result57__ = __result_obj__ = result_55;
                        if(result_55) { result_55 = come_decrement_ref_count2(result_55, ((struct sNode*)result_55)->finalize, ((struct sNode*)result_55)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result57__;
                        if(result_55) { result_55 = come_decrement_ref_count2(result_55, ((struct sNode*)result_55)->finalize, ((struct sNode*)result_55)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsNodephph* it_56;
_Bool _while_condtional9;
struct list_item$1tuple2$2charphsNodephph* prev_it_57;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_56, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_57, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
        # 114 "./neo-c.h"
        it_56=self->head;
        # 120 "./neo-c.h"
        while(_while_condtional9=it_56!=((void*)0),        _while_condtional9) {
            # 116 "./neo-c.h"
            prev_it_57=it_56;
            # 117 "./neo-c.h"
            it_56=it_56->next;
            # 118 "./neo-c.h"
            come_call_finalizer3(prev_it_57,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional50;
struct tuple2$2charphsNodeph* result_64;
struct tuple2$2charphsNodeph* __result64__;
_Bool _if_conditional51;
struct tuple2$2charphsNodeph* __result65__;
struct tuple2$2charphsNodeph* result_65;
struct tuple2$2charphsNodeph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_64, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_65, 0, sizeof(struct tuple2$2charphsNodeph*));
        # 281 "./neo-c.h"
        # 276 "./neo-c.h"
        if(_if_conditional50=self==((void*)0),        _if_conditional50) {
            # 277 "./neo-c.h"
            # 278 "./neo-c.h"
            memset(&result_64,0,sizeof(struct tuple2$2charphsNodeph*));
            # 279 "./neo-c.h"
            __result64__ = __result_obj__ = result_64;
            return __result64__;
        }
        # 281 "./neo-c.h"
        self->it=self->head;
        # 287 "./neo-c.h"
        # 283 "./neo-c.h"
        if(self->it) {
            # 284 "./neo-c.h"
            __result65__ = __result_obj__ = self->it->item;
            return __result65__;
        }
        # 287 "./neo-c.h"
        # 288 "./neo-c.h"
        memset(&result_65,0,sizeof(struct tuple2$2charphsNodeph*));
        # 289 "./neo-c.h"
        __result66__ = __result_obj__ = result_65;
        return __result66__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __result67__;
memset(&__result_obj__, 0, sizeof(void*));
        # 311 "./neo-c.h"
        __result67__ = self==((void*)0)||self->it==((void*)0);
        return __result67__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional52;
struct tuple2$2charphsNodeph* result_67;
struct tuple2$2charphsNodeph* __result68__;
_Bool _if_conditional53;
struct tuple2$2charphsNodeph* __result69__;
struct tuple2$2charphsNodeph* result_68;
struct tuple2$2charphsNodeph* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_67, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_68, 0, sizeof(struct tuple2$2charphsNodeph*));
        # 299 "./neo-c.h"
        # 293 "./neo-c.h"
        if(_if_conditional52=self==((void*)0)||self->it==((void*)0),        _if_conditional52) {
            # 294 "./neo-c.h"
            # 295 "./neo-c.h"
            memset(&result_67,0,sizeof(struct tuple2$2charphsNodeph*));
            # 296 "./neo-c.h"
            __result68__ = __result_obj__ = result_67;
            return __result68__;
        }
        # 299 "./neo-c.h"
        self->it=self->it->next;
        # 305 "./neo-c.h"
        # 301 "./neo-c.h"
        if(self->it) {
            # 302 "./neo-c.h"
            __result69__ = __result_obj__ = self->it->item;
            return __result69__;
        }
        # 305 "./neo-c.h"
        # 306 "./neo-c.h"
        memset(&result_68,0,sizeof(struct tuple2$2charphsNodeph*));
        # 307 "./neo-c.h"
        __result70__ = __result_obj__ = result_68;
        return __result70__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_71;
unsigned int it_72;
_Bool _while_condtional10;
_Bool _if_conditional54;
_Bool _if_conditional55;
struct sVar* __result71__;
_Bool _if_conditional77;
_Bool _if_conditional78;
struct sVar* __result72__;
struct sVar* __result73__;
struct sVar* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_71, 0, sizeof(unsigned int));
memset(&it_72, 0, sizeof(unsigned int));
            # 1201 "./neo-c.h"
            hash_71=string_get_hash_key(((char*)key))%self->size;
            # 1202 "./neo-c.h"
            it_72=hash_71;
            # 1226 "./neo-c.h"
            while(_while_condtional10=(_Bool)1,            _while_condtional10) {
                # 1224 "./neo-c.h"
                # 1205 "./neo-c.h"
                if(_if_conditional54=self->item_existance[it_72],                _if_conditional54) {
                    # 1212 "./neo-c.h"
                    # 1207 "./neo-c.h"
                    if(_if_conditional55=string_equals(self->keys[it_72],key),                    _if_conditional55) {
                        # 1209 "./neo-c.h"
                        __result71__ = __result_obj__ = self->items[it_72];
                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                        return __result71__;
                    }
                    # 1212 "./neo-c.h"
                    it_72++;
                    # 1220 "./neo-c.h"
                    # 1214 "./neo-c.h"
                    if(_if_conditional77=it_72>=self->size,                    _if_conditional77) {
                        # 1215 "./neo-c.h"
                        it_72=0;
                    }
                    else {
                        # 1220 "./neo-c.h"
                        # 1217 "./neo-c.h"
                        if(_if_conditional78=it_72==hash_71,                        _if_conditional78) {
                            # 1218 "./neo-c.h"
                            __result72__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                            return __result72__;
                        }
                    }
                }
                else {
                    # 1222 "./neo-c.h"
                    __result73__ = __result_obj__ = default_value;
                    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                    return __result73__;
                }
            }
            # 1226 "./neo-c.h"
            __result74__ = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            return __result74__;
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional76;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "sVar_finalize"
                            # 0 "sVar_finalize"
                            if(_if_conditional56=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional56) {
                                # 0 "sVar_finalize"
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 2 "sVar_finalize"
                            # 1 "sVar_finalize"
                            if(_if_conditional57=self!=((void*)0)&&self->mCValueName!=((void*)0),                            _if_conditional57) {
                                # 1 "sVar_finalize"
                                self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 3 "sVar_finalize"
                            # 2 "sVar_finalize"
                            if(_if_conditional58=self!=((void*)0)&&self->mType!=((void*)0),                            _if_conditional58) {
                                # 2 "sVar_finalize"
                                come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 4 "sVar_finalize"
                            # 3 "sVar_finalize"
                            if(_if_conditional76=self!=((void*)0)&&self->mFunName!=((void*)0),                            _if_conditional76) {
                                # 3 "sVar_finalize"
                                self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional59;
_Bool _if_conditional61;
_Bool _if_conditional63;
_Bool _if_conditional64;
_Bool _if_conditional65;
_Bool _if_conditional66;
_Bool _if_conditional68;
_Bool _if_conditional69;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
_Bool _if_conditional74;
_Bool _if_conditional75;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sType_finalize"
                                    # 0 "sType_finalize"
                                    if(_if_conditional59=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                    _if_conditional59) {
                                        # 0 "sType_finalize"
                                        come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 2 "sType_finalize"
                                    # 1 "sType_finalize"
                                    if(_if_conditional61=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                    _if_conditional61) {
                                        # 1 "sType_finalize"
                                        come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 3 "sType_finalize"
                                    # 2 "sType_finalize"
                                    if(_if_conditional63=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                    _if_conditional63) {
                                        # 2 "sType_finalize"
                                        come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 4 "sType_finalize"
                                    # 3 "sType_finalize"
                                    if(_if_conditional64=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                    _if_conditional64) {
                                        # 3 "sType_finalize"
                                        self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 5 "sType_finalize"
                                    # 4 "sType_finalize"
                                    if(_if_conditional65=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                    _if_conditional65) {
                                        # 4 "sType_finalize"
                                        come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 6 "sType_finalize"
                                    # 5 "sType_finalize"
                                    if(_if_conditional66=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                    _if_conditional66) {
                                        # 5 "sType_finalize"
                                        come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 7 "sType_finalize"
                                    # 6 "sType_finalize"
                                    if(_if_conditional68=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                    _if_conditional68) {
                                        # 6 "sType_finalize"
                                        come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 8 "sType_finalize"
                                    # 7 "sType_finalize"
                                    if(_if_conditional69=self!=((void*)0)&&self->mParamNames!=((void*)0),                                    _if_conditional69) {
                                        # 7 "sType_finalize"
                                        come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 9 "sType_finalize"
                                    # 8 "sType_finalize"
                                    if(_if_conditional71=self!=((void*)0)&&self->mResultType!=((void*)0),                                    _if_conditional71) {
                                        # 8 "sType_finalize"
                                        come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 10 "sType_finalize"
                                    # 9 "sType_finalize"
                                    if(_if_conditional72=self!=((void*)0)&&self->mAlignas!=((void*)0),                                    _if_conditional72) {
                                        # 9 "sType_finalize"
                                        if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    # 11 "sType_finalize"
                                    # 10 "sType_finalize"
                                    if(_if_conditional73=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                    _if_conditional73) {
                                        # 10 "sType_finalize"
                                        if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    # 12 "sType_finalize"
                                    # 11 "sType_finalize"
                                    if(_if_conditional74=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                    _if_conditional74) {
                                        # 11 "sType_finalize"
                                        self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 13 "sType_finalize"
                                    # 12 "sType_finalize"
                                    if(_if_conditional75=self!=((void*)0)&&self->mAsmName!=((void*)0),                                    _if_conditional75) {
                                        # 12 "sType_finalize"
                                        self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_73;
_Bool _while_condtional11;
struct list_item$1sTypeph* prev_it_74;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_73, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_74, 0, sizeof(struct list_item$1sTypeph*));
                                            # 114 "./neo-c.h"
                                            it_73=self->head;
                                            # 120 "./neo-c.h"
                                            while(_while_condtional11=it_73!=((void*)0),                                            _while_condtional11) {
                                                # 116 "./neo-c.h"
                                                prev_it_74=it_73;
                                                # 117 "./neo-c.h"
                                                it_73=it_73->next;
                                                # 118 "./neo-c.h"
                                                come_call_finalizer3(prev_it_74,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional60;
memset(&__result_obj__, 0, sizeof(void*));
                                                    # 1 "list_item$1sTypephp_finalize"
                                                    # 0 "list_item$1sTypephp_finalize"
                                                    if(_if_conditional60=self!=((void*)0)&&self->item!=((void*)0),                                                    _if_conditional60) {
                                                        # 0 "list_item$1sTypephp_finalize"
                                                        come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional62;
memset(&__result_obj__, 0, sizeof(void*));
                                            # 1 "tuple1$1sTypephp_finalize"
                                            # 0 "tuple1$1sTypephp_finalize"
                                            if(_if_conditional62=self!=((void*)0)&&self->v1!=((void*)0),                                            _if_conditional62) {
                                                # 0 "tuple1$1sTypephp_finalize"
                                                come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_75;
_Bool _while_condtional12;
struct list_item$1sNodeph* prev_it_76;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_75, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_76, 0, sizeof(struct list_item$1sNodeph*));
                                            # 114 "./neo-c.h"
                                            it_75=self->head;
                                            # 120 "./neo-c.h"
                                            while(_while_condtional12=it_75!=((void*)0),                                            _while_condtional12) {
                                                # 116 "./neo-c.h"
                                                prev_it_76=it_75;
                                                # 117 "./neo-c.h"
                                                it_75=it_75->next;
                                                # 118 "./neo-c.h"
                                                come_call_finalizer3(prev_it_76,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional67;
memset(&__result_obj__, 0, sizeof(void*));
                                                    # 1 "list_item$1sNodephp_finalize"
                                                    # 0 "list_item$1sNodephp_finalize"
                                                    if(_if_conditional67=self!=((void*)0)&&self->item!=((void*)0),                                                    _if_conditional67) {
                                                        # 0 "list_item$1sNodephp_finalize"
                                                        if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_77;
_Bool _while_condtional13;
struct list_item$1charph* prev_it_78;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_77, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_78, 0, sizeof(struct list_item$1charph*));
                                            # 114 "./neo-c.h"
                                            it_77=self->head;
                                            # 120 "./neo-c.h"
                                            while(_while_condtional13=it_77!=((void*)0),                                            _while_condtional13) {
                                                # 116 "./neo-c.h"
                                                prev_it_78=it_77;
                                                # 117 "./neo-c.h"
                                                it_77=it_77->next;
                                                # 118 "./neo-c.h"
                                                come_call_finalizer3(prev_it_78,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional70;
memset(&__result_obj__, 0, sizeof(void*));
                                                    # 1 "list_item$1charphp_finalize"
                                                    # 0 "list_item$1charphp_finalize"
                                                    if(_if_conditional70=self!=((void*)0)&&self->item!=((void*)0),                                                    _if_conditional70) {
                                                        # 0 "list_item$1charphp_finalize"
                                                        self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional81;
int __result75__;
int __result76__;
memset(&__result_obj__, 0, sizeof(void*));
                # 354 "./neo-c.h"
                # 351 "./neo-c.h"
                if(_if_conditional81=self==((void*)0),                _if_conditional81) {
                    # 352 "./neo-c.h"
                    __result75__ = 0;
                    return __result75__;
                }
                # 354 "./neo-c.h"
                __result76__ = self->len;
                return __result76__;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional84;
_Bool _if_conditional85;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "CVALUE_finalize"
                # 0 "CVALUE_finalize"
                if(_if_conditional84=self!=((void*)0)&&self->c_value!=((void*)0),                _if_conditional84) {
                    # 0 "CVALUE_finalize"
                    self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 2 "CVALUE_finalize"
                # 1 "CVALUE_finalize"
                if(_if_conditional85=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional85) {
                    # 1 "CVALUE_finalize"
                    come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
}

struct sNode* parse_enum(char* type_name, struct sInfo* info){
void* __result_obj__;
struct sClass* klass_81;
_Bool output_82;
_Bool _if_conditional100;
void* right_value108;
void* right_value109;
struct sClass* __dec_obj21;
void* right_value168;
struct sClass* __dec_obj56;
int __exception_result_var_b1;
void* right_value169;
void* right_value170;
struct list$1tuple2$2charphsNodephph* elements_163;
_Bool _while_condtional31;
void* right_value171;
char* element_name_164;
_Bool _if_conditional245;
_Bool no_comma_165;
void* right_value172;
struct sNode* element_value_166;
_Bool _if_conditional246;
void* right_value176;
void* right_value177;
_Bool _if_conditional249;
void* right_value178;
void* right_value179;
_Bool _if_conditional250;
_Bool _if_conditional251;
void* right_value180;
void* right_value181;
struct sNode* _inf_value1;
struct sEnumNode* _inf_obj_value1;
void* right_value187;
struct sNode* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&klass_81, 0, sizeof(struct sClass*));
memset(&output_82, 0, sizeof(_Bool));
right_value108 = (void*)0;
right_value109 = (void*)0;
right_value168 = (void*)0;
right_value169 = (void*)0;
right_value170 = (void*)0;
memset(&elements_163, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
right_value171 = (void*)0;
memset(&element_name_164, 0, sizeof(char*));
memset(&no_comma_165, 0, sizeof(_Bool));
right_value172 = (void*)0;
memset(&element_value_166, 0, sizeof(struct sNode*));
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value187 = (void*)0;
    # 112 "16enum.c"
    # 113 "16enum.c"
    # 124 "16enum.c"
    # 114 "16enum.c"
    if(_if_conditional100=map$2charphsClassph_at(info->classes,type_name,((void*)0))==((void*)0),    _if_conditional100) {
        # 115 "16enum.c"
        output_82=(_Bool)1;
        # 116 "16enum.c"
        __dec_obj21=klass_81;
        klass_81=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value109=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value108=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "16enum.c", 116, "sClass")))),type_name,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)1,info))));
        come_call_finalizer3(__dec_obj21,sClass_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value108,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value109,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        # 117 "16enum.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name),(struct sClass*)come_increment_ref_count(klass_81));
    }
    else {
        # 120 "16enum.c"
        output_82=(_Bool)0;
        # 121 "16enum.c"
        __dec_obj56=klass_81;
        klass_81=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value168=sClass_clone(map$2charphsClassph_at(info->classes,type_name,((void*)0))))));
        come_call_finalizer3(__dec_obj56,sClass_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value168,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    }
    # 124 "16enum.c"
    (come_push_stackframe("16enum.c", 124, 0),__exception_result_var_b1=expected_next_character(123,info), come_pop_stackframe(), __exception_result_var_b1);
    # 126 "16enum.c"
    elements_163=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value170=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value169=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "16enum.c", 126, "list$1tuple2$2charphsNodephph"))))))));
    come_call_finalizer3(right_value169,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value170,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 171 "16enum.c"
    while(_while_condtional31=(_Bool)1,    _while_condtional31) {
        # 129 "16enum.c"
        parse_sharp_v5(info);
        # 131 "16enum.c"
        element_name_164=(char*)come_increment_ref_count(((char*)(right_value171=parse_word(info))));
        right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 133 "16enum.c"
        parse_sharp_v5(info);
        # 155 "16enum.c"
        # 135 "16enum.c"
        if(_if_conditional245=*info->p==61,        _if_conditional245) {
            # 136 "16enum.c"
            info->p++;
            # 137 "16enum.c"
            skip_spaces_and_lf(info);
            # 139 "16enum.c"
            no_comma_165=info->no_comma;
            # 140 "16enum.c"
            info->no_comma=(_Bool)1;
            # 141 "16enum.c"
            element_value_166=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value172=expression_v13(info))));
            if(right_value172) { right_value172 = come_decrement_ref_count2(right_value172, ((struct sNode*)right_value172)->finalize, ((struct sNode*)right_value172)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 143 "16enum.c"
            info->no_comma=no_comma_165;
            # 148 "16enum.c"
            # 145 "16enum.c"
            if(_if_conditional246=!info->no_output_err,            _if_conditional246) {
                # 146 "16enum.c"
                list$1tuple2$2charphsNodephph_push_back(elements_163,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value177=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value176=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "16enum.c", 146, "tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(element_name_164),(struct sNode*)come_increment_ref_count(element_value_166))))));
                come_call_finalizer3(right_value176,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value177,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(element_value_166) { element_value_166 = come_decrement_ref_count2(element_value_166, ((struct sNode*)element_value_166)->finalize, ((struct sNode*)element_value_166)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 153 "16enum.c"
            # 150 "16enum.c"
            if(_if_conditional249=!info->no_output_err,            _if_conditional249) {
                # 151 "16enum.c"
                list$1tuple2$2charphsNodephph_push_back(elements_163,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value179=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value178=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "16enum.c", 151, "tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(element_name_164),((void*)0))))));
                come_call_finalizer3(right_value178,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value179,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
        }
        # 155 "16enum.c"
        parse_sharp_v5(info);
        # 162 "16enum.c"
        # 157 "16enum.c"
        if(_if_conditional250=*info->p==44,        _if_conditional250) {
            # 158 "16enum.c"
            info->p++;
            # 159 "16enum.c"
            skip_spaces_and_lf(info);
        }
        # 162 "16enum.c"
        parse_sharp_v5(info);
        # 169 "16enum.c"
        # 164 "16enum.c"
        if(_if_conditional251=*info->p==125,        _if_conditional251) {
            # 165 "16enum.c"
            info->p++;
            # 166 "16enum.c"
            skip_spaces_and_lf(info);
            # 167 "16enum.c"
            element_name_164 = come_decrement_ref_count2(element_name_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        element_name_164 = come_decrement_ref_count2(element_name_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 171 "16enum.c"
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "16enum.c", 171, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sEnumNode*)(right_value181=sEnumNode_initialize((struct sEnumNode*)come_increment_ref_count(((struct sEnumNode*)(right_value180=(struct sEnumNode*)come_calloc(1, sizeof(struct sEnumNode)*(1), "16enum.c", 171, "sEnumNode")))),(char*)come_increment_ref_count(type_name),elements_163,output_82,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sEnumNode_finalize;
    _inf_value1->clone=(void*)sEnumNode_clone;
    _inf_value1->compile=(void*)sEnumNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sEnumNode_terminated;
    _inf_value1->kind=(void*)sEnumNode_kind;
    __result135__ = __result_obj__ = ((struct sNode*)(right_value187=_inf_value1));
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(klass_81,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elements_163,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value180,sEnumNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value181,sEnumNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value187) { right_value187 = come_decrement_ref_count2(right_value187, ((struct sNode*)right_value187)->finalize, ((struct sNode*)right_value187)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result135__;
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(klass_81,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elements_163,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_83;
unsigned int it_84;
_Bool _while_condtional14;
_Bool _if_conditional89;
_Bool _if_conditional90;
struct sClass* __result79__;
_Bool _if_conditional98;
_Bool _if_conditional99;
struct sClass* __result80__;
struct sClass* __result81__;
struct sClass* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_83, 0, sizeof(unsigned int));
memset(&it_84, 0, sizeof(unsigned int));
        # 1201 "./neo-c.h"
        hash_83=string_get_hash_key(((char*)key))%self->size;
        # 1202 "./neo-c.h"
        it_84=hash_83;
        # 1226 "./neo-c.h"
        while(_while_condtional14=(_Bool)1,        _while_condtional14) {
            # 1224 "./neo-c.h"
            # 1205 "./neo-c.h"
            if(_if_conditional89=self->item_existance[it_84],            _if_conditional89) {
                # 1212 "./neo-c.h"
                # 1207 "./neo-c.h"
                if(_if_conditional90=string_equals(self->keys[it_84],key),                _if_conditional90) {
                    # 1209 "./neo-c.h"
                    __result79__ = __result_obj__ = self->items[it_84];
                    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                    return __result79__;
                }
                # 1212 "./neo-c.h"
                it_84++;
                # 1220 "./neo-c.h"
                # 1214 "./neo-c.h"
                if(_if_conditional98=it_84>=self->size,                _if_conditional98) {
                    # 1215 "./neo-c.h"
                    it_84=0;
                }
                else {
                    # 1220 "./neo-c.h"
                    # 1217 "./neo-c.h"
                    if(_if_conditional99=it_84==hash_83,                    _if_conditional99) {
                        # 1218 "./neo-c.h"
                        __result80__ = __result_obj__ = default_value;
                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                        return __result80__;
                    }
                }
            }
            else {
                # 1222 "./neo-c.h"
                __result81__ = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result81__;
            }
        }
        # 1226 "./neo-c.h"
        __result82__ = __result_obj__ = default_value;
        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
        return __result82__;
        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional91;
_Bool _if_conditional92;
_Bool _if_conditional96;
_Bool _if_conditional97;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sClass_finalize"
                        # 0 "sClass_finalize"
                        if(_if_conditional91=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional91) {
                            # 0 "sClass_finalize"
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "sClass_finalize"
                        # 1 "sClass_finalize"
                        if(_if_conditional92=self!=((void*)0)&&self->mFields!=((void*)0),                        _if_conditional92) {
                            # 1 "sClass_finalize"
                            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        # 3 "sClass_finalize"
                        # 2 "sClass_finalize"
                        if(_if_conditional96=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                        _if_conditional96) {
                            # 2 "sClass_finalize"
                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 4 "sClass_finalize"
                        # 3 "sClass_finalize"
                        if(_if_conditional97=self!=((void*)0)&&self->mParentClassName!=((void*)0),                        _if_conditional97) {
                            # 3 "sClass_finalize"
                            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_85;
_Bool _while_condtional15;
struct list_item$1tuple2$2charphsTypephph* prev_it_86;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_85, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_86, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                # 114 "./neo-c.h"
                                it_85=self->head;
                                # 120 "./neo-c.h"
                                while(_while_condtional15=it_85!=((void*)0),                                _while_condtional15) {
                                    # 116 "./neo-c.h"
                                    prev_it_86=it_85;
                                    # 117 "./neo-c.h"
                                    it_85=it_85->next;
                                    # 118 "./neo-c.h"
                                    come_call_finalizer3(prev_it_86,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional93;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                                        # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                        if(_if_conditional93=self!=((void*)0)&&self->item!=((void*)0),                                        _if_conditional93) {
                                            # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional101;
unsigned int hash_102;
unsigned int it_103;
_Bool _while_condtional17;
_Bool _if_conditional109;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool _if_conditional135;
_Bool same_key_exist_120;
char* it2_123;
_Bool _if_conditional140;
_Bool _if_conditional141;
struct map$2charphsClassph* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_102, 0, sizeof(unsigned int));
memset(&it_103, 0, sizeof(unsigned int));
memset(&same_key_exist_120, 0, sizeof(_Bool));
memset(&it2_123, 0, sizeof(char*));
            # 1368 "./neo-c.h"
            # 1365 "./neo-c.h"
            if(_if_conditional101=self->len*10>=self->size,            _if_conditional101) {
                # 1366 "./neo-c.h"
                map$2charphsClassph_rehash(self);
            }
            # 1368 "./neo-c.h"
            hash_102=string_get_hash_key(key)%self->size;
            # 1369 "./neo-c.h"
            it_103=hash_102;
            # 1427 "./neo-c.h"
            while(_while_condtional17=(_Bool)1,            _while_condtional17) {
                # 1425 "./neo-c.h"
                # 1372 "./neo-c.h"
                if(_if_conditional109=self->item_existance[it_103],                _if_conditional109) {
                    # 1395 "./neo-c.h"
                    # 1374 "./neo-c.h"
                    if(_if_conditional110=string_equals(self->keys[it_103],key),                    _if_conditional110) {
                        # 1385 "./neo-c.h"
                        # 1376 "./neo-c.h"
                        if(_if_conditional111=1,                        _if_conditional111) {
                            # 1377 "./neo-c.h"
                            list$1charp_remove(self->key_list,self->keys[it_103]);
                            # 1378 "./neo-c.h"
                            self->keys[it_103] = come_decrement_ref_count2(self->keys[it_103], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            # 1379 "./neo-c.h"
                            self->keys[it_103]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            # 1382 "./neo-c.h"
                            list$1charp_remove(self->key_list,self->keys[it_103]);
                            # 1383 "./neo-c.h"
                            self->keys[it_103]=key;
                        }
                        # 1392 "./neo-c.h"
                        # 1385 "./neo-c.h"
                        if(_if_conditional131=1,                        _if_conditional131) {
                            # 1386 "./neo-c.h"
                            come_call_finalizer3(self->items[it_103],sClass_finalize, 0, 0, 0, 0, (void*)0);
                            # 1387 "./neo-c.h"
                            self->items[it_103]=(struct sClass*)come_increment_ref_count(item);
                        }
                        else {
                            # 1390 "./neo-c.h"
                            self->items[it_103]=item;
                        }
                        # 1392 "./neo-c.h"
                        break;
                    }
                    # 1395 "./neo-c.h"
                    it_103++;
                    # 1405 "./neo-c.h"
                    # 1397 "./neo-c.h"
                    if(_if_conditional132=it_103>=self->size,                    _if_conditional132) {
                        # 1398 "./neo-c.h"
                        it_103=0;
                    }
                    else {
                        # 1405 "./neo-c.h"
                        # 1400 "./neo-c.h"
                        if(_if_conditional133=it_103==hash_102,                        _if_conditional133) {
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
                    self->item_existance[it_103]=(_Bool)1;
                    # 1414 "./neo-c.h"
                    # 1408 "./neo-c.h"
                    if(_if_conditional134=1,                    _if_conditional134) {
                        # 1409 "./neo-c.h"
                        self->keys[it_103]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1412 "./neo-c.h"
                        self->keys[it_103]=key;
                    }
                    # 1421 "./neo-c.h"
                    # 1414 "./neo-c.h"
                    if(_if_conditional135=1,                    _if_conditional135) {
                        # 1415 "./neo-c.h"
                        self->items[it_103]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        # 1418 "./neo-c.h"
                        self->items[it_103]=item;
                    }
                    # 1421 "./neo-c.h"
                    self->len++;
                    # 1423 "./neo-c.h"
                    break;
                }
            }
            # 1427 "./neo-c.h"
            same_key_exist_120=(_Bool)0;
            # 1435 "./neo-c.h"
            for(            it2_123=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_123=list$1charp_next(self->key_list)            ){
                # 1433 "./neo-c.h"
                # 1430 "./neo-c.h"
                if(_if_conditional140=string_equals(it2_123,key),                _if_conditional140) {
                    # 1431 "./neo-c.h"
                    same_key_exist_120=(_Bool)1;
                }
            }
            # 1439 "./neo-c.h"
            # 1435 "./neo-c.h"
            if(_if_conditional141=!same_key_exist_120,            _if_conditional141) {
                # 1436 "./neo-c.h"
                list$1charp_push_back(self->key_list,key);
            }
            # 1439 "./neo-c.h"
            __result102__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result102__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_87;
void* right_value110;
char** keys_88;
void* right_value111;
struct sClass** items_89;
void* right_value112;
_Bool* item_existance_90;
int len_91;
char* it_94;
struct sClass* default_value_97;
struct sClass* it2_98;
unsigned int hash_99;
int n_100;
_Bool _while_condtional16;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
struct sClass* default_value_101;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_87, 0, sizeof(int));
right_value110 = (void*)0;
memset(&keys_88, 0, sizeof(char**));
right_value111 = (void*)0;
memset(&items_89, 0, sizeof(struct sClass**));
right_value112 = (void*)0;
memset(&item_existance_90, 0, sizeof(_Bool*));
memset(&len_91, 0, sizeof(int));
memset(&it_94, 0, sizeof(char*));
memset(&default_value_97, 0, sizeof(struct sClass*));
memset(&it2_98, 0, sizeof(struct sClass*));
memset(&hash_99, 0, sizeof(unsigned int));
memset(&n_100, 0, sizeof(int));
memset(&default_value_101, 0, sizeof(struct sClass*));
                    # 1312 "./neo-c.h"
                    size_87=self->size*10;
                    # 1313 "./neo-c.h"
                    keys_88=(char**)come_increment_ref_count(((char**)(right_value110=(char**)come_calloc(1, sizeof(char*)*(1*(size_87)), "./neo-c.h", 1313, "char*%"))));
                    right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1314 "./neo-c.h"
                    items_89=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value111=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_87)), "./neo-c.h", 1314, "sClass*%"))));
                    come_call_finalizer3(right_value111,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                    # 1315 "./neo-c.h"
                    item_existance_90=(_Bool*)come_increment_ref_count(((_Bool*)(right_value112=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_87)), "./neo-c.h", 1315, "bool"))));
                    right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1317 "./neo-c.h"
                    len_91=0;
                    # 1352 "./neo-c.h"
                    for(                    it_94=map$2charphsClassph_begin(self);                    !map$2charphsClassph_end(self);                    it_94=map$2charphsClassph_next(self)                    ){
                        # 1320 "./neo-c.h"
                        # 1321 "./neo-c.h"
                        memset(&default_value_97,0,sizeof(struct sClass*));
                        # 1322 "./neo-c.h"
                        it2_98=map$2charphsClassph_at(self,it_94,default_value_97);
                        # 1323 "./neo-c.h"
                        hash_99=string_get_hash_key(it_94)%size_87;
                        # 1324 "./neo-c.h"
                        n_100=hash_99;
                        # 1350 "./neo-c.h"
                        while(_while_condtional16=(_Bool)1,                        _while_condtional16) {
                            # 1349 "./neo-c.h"
                            # 1327 "./neo-c.h"
                            if(_if_conditional106=item_existance_90[n_100],                            _if_conditional106) {
                                # 1329 "./neo-c.h"
                                n_100++;
                                # 1339 "./neo-c.h"
                                # 1331 "./neo-c.h"
                                if(_if_conditional107=n_100>=size_87,                                _if_conditional107) {
                                    # 1332 "./neo-c.h"
                                    n_100=0;
                                }
                                else {
                                    # 1339 "./neo-c.h"
                                    # 1334 "./neo-c.h"
                                    if(_if_conditional108=n_100==hash_99,                                    _if_conditional108) {
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
                                item_existance_90[n_100]=(_Bool)1;
                                # 1342 "./neo-c.h"
                                keys_88[n_100]=it_94;
                                # 1343 "./neo-c.h"
                                # 1344 "./neo-c.h"
                                items_89[n_100]=map$2charphsClassph_at(self,it_94,default_value_101);
                                # 1346 "./neo-c.h"
                                len_91++;
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
                    self->keys=keys_88;
                    # 1357 "./neo-c.h"
                    self->items=items_89;
                    # 1358 "./neo-c.h"
                    self->item_existance=item_existance_90;
                    # 1360 "./neo-c.h"
                    self->size=size_87;
                    # 1361 "./neo-c.h"
                    self->len=len_91;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional102;
char* result_92;
char* __result83__;
_Bool _if_conditional103;
char* __result84__;
char* result_93;
char* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_92, 0, sizeof(char*));
memset(&result_93, 0, sizeof(char*));
                        # 1279 "./neo-c.h"
                        # 1274 "./neo-c.h"
                        if(_if_conditional102=self==((void*)0),                        _if_conditional102) {
                            # 1275 "./neo-c.h"
                            # 1276 "./neo-c.h"
                            memset(&result_92,0,sizeof(char*));
                            # 1277 "./neo-c.h"
                            __result83__ = __result_obj__ = result_92;
                            return __result83__;
                        }
                        # 1279 "./neo-c.h"
                        self->key_list->it=self->key_list->head;
                        # 1285 "./neo-c.h"
                        # 1281 "./neo-c.h"
                        if(self->key_list->it) {
                            # 1282 "./neo-c.h"
                            __result84__ = __result_obj__ = self->key_list->it->item;
                            return __result84__;
                        }
                        # 1285 "./neo-c.h"
                        # 1286 "./neo-c.h"
                        memset(&result_93,0,sizeof(char*));
                        # 1287 "./neo-c.h"
                        __result85__ = __result_obj__ = result_93;
                        return __result85__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1308 "./neo-c.h"
                        __result86__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result86__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional104;
char* result_95;
char* __result87__;
_Bool _if_conditional105;
char* __result88__;
char* result_96;
char* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_95, 0, sizeof(char*));
memset(&result_96, 0, sizeof(char*));
                        # 1296 "./neo-c.h"
                        # 1291 "./neo-c.h"
                        if(_if_conditional104=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional104) {
                            # 1292 "./neo-c.h"
                            # 1293 "./neo-c.h"
                            memset(&result_95,0,sizeof(char*));
                            # 1294 "./neo-c.h"
                            __result87__ = __result_obj__ = result_95;
                            return __result87__;
                        }
                        # 1296 "./neo-c.h"
                        self->key_list->it=self->key_list->it->next;
                        # 1302 "./neo-c.h"
                        # 1298 "./neo-c.h"
                        if(self->key_list->it) {
                            # 1299 "./neo-c.h"
                            __result88__ = __result_obj__ = self->key_list->it->item;
                            return __result88__;
                        }
                        # 1302 "./neo-c.h"
                        # 1303 "./neo-c.h"
                        memset(&result_96,0,sizeof(char*));
                        # 1304 "./neo-c.h"
                        __result89__ = __result_obj__ = result_96;
                        return __result89__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_104;
struct list_item$1charp* it_105;
_Bool _while_condtional18;
_Bool _if_conditional112;
struct list$1charp* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_104, 0, sizeof(int));
memset(&it_105, 0, sizeof(struct list_item$1charp*));
                                # 435 "./neo-c.h"
                                it2_104=0;
                                # 436 "./neo-c.h"
                                it_105=self->head;
                                # 447 "./neo-c.h"
                                while(_while_condtional18=it_105!=((void*)0),                                _while_condtional18) {
                                    # 442 "./neo-c.h"
                                    # 438 "./neo-c.h"
                                    if(_if_conditional112=string_equals(it_105->item,item),                                    _if_conditional112) {
                                        # 439 "./neo-c.h"
                                        list$1charp_delete(self,it2_104,it2_104+1);
                                        # 440 "./neo-c.h"
                                        break;
                                    }
                                    # 442 "./neo-c.h"
                                    it2_104++;
                                    # 444 "./neo-c.h"
                                    it_105=it_105->next;
                                }
                                # 447 "./neo-c.h"
                                __result93__ = __result_obj__ = self;
                                return __result93__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
int tmp_106;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
struct list$1charp* __result90__;
_Bool _if_conditional119;
_Bool _if_conditional120;
struct list_item$1charp* it_109;
int i_110;
_Bool _while_condtional20;
_Bool _if_conditional121;
struct list_item$1charp* prev_it_111;
_Bool _if_conditional122;
_Bool _if_conditional123;
struct list_item$1charp* it_112;
int i_113;
_Bool _while_condtional21;
_Bool _if_conditional124;
_Bool _if_conditional125;
struct list_item$1charp* prev_it_114;
struct list_item$1charp* it_115;
struct list_item$1charp* head_prev_it_116;
struct list_item$1charp* tail_it_117;
int i_118;
_Bool _while_condtional22;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
struct list_item$1charp* prev_it_119;
_Bool _if_conditional129;
_Bool _if_conditional130;
struct list$1charp* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_106, 0, sizeof(int));
memset(&it_109, 0, sizeof(struct list_item$1charp*));
memset(&i_110, 0, sizeof(int));
memset(&prev_it_111, 0, sizeof(struct list_item$1charp*));
memset(&it_112, 0, sizeof(struct list_item$1charp*));
memset(&i_113, 0, sizeof(int));
memset(&prev_it_114, 0, sizeof(struct list_item$1charp*));
memset(&it_115, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_116, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_117, 0, sizeof(struct list_item$1charp*));
memset(&i_118, 0, sizeof(int));
memset(&prev_it_119, 0, sizeof(struct list_item$1charp*));
                                            # 454 "./neo-c.h"
                                            # 451 "./neo-c.h"
                                            if(_if_conditional113=head<0,                                            _if_conditional113) {
                                                # 452 "./neo-c.h"
                                                head+=self->len;
                                            }
                                            # 458 "./neo-c.h"
                                            # 454 "./neo-c.h"
                                            if(_if_conditional114=tail<0,                                            _if_conditional114) {
                                                # 455 "./neo-c.h"
                                                tail+=self->len+1;
                                            }
                                            # 464 "./neo-c.h"
                                            # 458 "./neo-c.h"
                                            if(_if_conditional115=head>tail,                                            _if_conditional115) {
                                                # 459 "./neo-c.h"
                                                tmp_106=tail;
                                                # 460 "./neo-c.h"
                                                tail=head;
                                                # 461 "./neo-c.h"
                                                head=tmp_106;
                                            }
                                            # 468 "./neo-c.h"
                                            # 464 "./neo-c.h"
                                            if(_if_conditional116=head<0,                                            _if_conditional116) {
                                                # 465 "./neo-c.h"
                                                head=0;
                                            }
                                            # 472 "./neo-c.h"
                                            # 468 "./neo-c.h"
                                            if(_if_conditional117=tail>self->len,                                            _if_conditional117) {
                                                # 469 "./neo-c.h"
                                                tail=self->len;
                                            }
                                            # 476 "./neo-c.h"
                                            # 472 "./neo-c.h"
                                            if(_if_conditional118=head==tail,                                            _if_conditional118) {
                                                # 473 "./neo-c.h"
                                                __result90__ = __result_obj__ = self;
                                                return __result90__;
                                            }
                                            # 571 "./neo-c.h"
                                            # 476 "./neo-c.h"
                                            if(_if_conditional119=head==0&&tail==self->len,                                            _if_conditional119) {
                                                # 478 "./neo-c.h"
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                # 571 "./neo-c.h"
                                                # 480 "./neo-c.h"
                                                if(_if_conditional120=head==0,                                                _if_conditional120) {
                                                    # 481 "./neo-c.h"
                                                    it_109=self->head;
                                                    # 482 "./neo-c.h"
                                                    i_110=0;
                                                    # 504 "./neo-c.h"
                                                    while(_while_condtional20=it_109!=((void*)0),                                                    _while_condtional20) {
                                                        # 503 "./neo-c.h"
                                                        # 484 "./neo-c.h"
                                                        if(_if_conditional121=i_110<tail,                                                        _if_conditional121) {
                                                            # 485 "./neo-c.h"
                                                            prev_it_111=it_109;
                                                            # 487 "./neo-c.h"
                                                            it_109=it_109->next;
                                                            # 488 "./neo-c.h"
                                                            i_110++;
                                                            # 490 "./neo-c.h"
                                                            come_call_finalizer3(prev_it_111,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            # 492 "./neo-c.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 503 "./neo-c.h"
                                                            # 494 "./neo-c.h"
                                                            if(_if_conditional122=i_110==tail,                                                            _if_conditional122) {
                                                                # 495 "./neo-c.h"
                                                                self->head=it_109;
                                                                # 496 "./neo-c.h"
                                                                self->head->prev=((void*)0);
                                                                # 497 "./neo-c.h"
                                                                break;
                                                            }
                                                            else {
                                                                # 500 "./neo-c.h"
                                                                it_109=it_109->next;
                                                                # 501 "./neo-c.h"
                                                                i_110++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 571 "./neo-c.h"
                                                    # 505 "./neo-c.h"
                                                    if(_if_conditional123=tail==self->len,                                                    _if_conditional123) {
                                                        # 506 "./neo-c.h"
                                                        it_112=self->head;
                                                        # 507 "./neo-c.h"
                                                        i_113=0;
                                                        # 529 "./neo-c.h"
                                                        while(_while_condtional21=it_112!=((void*)0),                                                        _while_condtional21) {
                                                            # 514 "./neo-c.h"
                                                            # 509 "./neo-c.h"
                                                            if(_if_conditional124=i_113==head,                                                            _if_conditional124) {
                                                                # 510 "./neo-c.h"
                                                                self->tail=it_112->prev;
                                                                # 511 "./neo-c.h"
                                                                self->tail->next=((void*)0);
                                                            }
                                                            # 528 "./neo-c.h"
                                                            # 514 "./neo-c.h"
                                                            if(_if_conditional125=i_113>=head,                                                            _if_conditional125) {
                                                                # 515 "./neo-c.h"
                                                                prev_it_114=it_112;
                                                                # 517 "./neo-c.h"
                                                                it_112=it_112->next;
                                                                # 518 "./neo-c.h"
                                                                i_113++;
                                                                # 520 "./neo-c.h"
                                                                come_call_finalizer3(prev_it_114,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                # 522 "./neo-c.h"
                                                                self->len--;
                                                            }
                                                            else {
                                                                # 525 "./neo-c.h"
                                                                it_112=it_112->next;
                                                                # 526 "./neo-c.h"
                                                                i_113++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        # 531 "./neo-c.h"
                                                        it_115=self->head;
                                                        # 533 "./neo-c.h"
                                                        head_prev_it_116=((void*)0);
                                                        # 534 "./neo-c.h"
                                                        tail_it_117=((void*)0);
                                                        # 537 "./neo-c.h"
                                                        i_118=0;
                                                        # 563 "./neo-c.h"
                                                        while(_while_condtional22=it_115!=((void*)0),                                                        _while_condtional22) {
                                                            # 542 "./neo-c.h"
                                                            # 539 "./neo-c.h"
                                                            if(_if_conditional126=i_118==head,                                                            _if_conditional126) {
                                                                # 540 "./neo-c.h"
                                                                head_prev_it_116=it_115->prev;
                                                            }
                                                            # 546 "./neo-c.h"
                                                            # 542 "./neo-c.h"
                                                            if(_if_conditional127=i_118==tail,                                                            _if_conditional127) {
                                                                # 543 "./neo-c.h"
                                                                tail_it_117=it_115;
                                                            }
                                                            # 561 "./neo-c.h"
                                                            # 546 "./neo-c.h"
                                                            if(_if_conditional128=i_118>=head&&i_118<tail,                                                            _if_conditional128) {
                                                                # 548 "./neo-c.h"
                                                                prev_it_119=it_115;
                                                                # 550 "./neo-c.h"
                                                                it_115=it_115->next;
                                                                # 551 "./neo-c.h"
                                                                i_118++;
                                                                # 553 "./neo-c.h"
                                                                come_call_finalizer3(prev_it_119,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                # 555 "./neo-c.h"
                                                                self->len--;
                                                            }
                                                            else {
                                                                # 558 "./neo-c.h"
                                                                it_115=it_115->next;
                                                                # 559 "./neo-c.h"
                                                                i_118++;
                                                            }
                                                        }
                                                        # 566 "./neo-c.h"
                                                        # 563 "./neo-c.h"
                                                        if(_if_conditional129=head_prev_it_116!=((void*)0),                                                        _if_conditional129) {
                                                            # 564 "./neo-c.h"
                                                            head_prev_it_116->next=tail_it_117;
                                                        }
                                                        # 569 "./neo-c.h"
                                                        # 566 "./neo-c.h"
                                                        if(_if_conditional130=tail_it_117!=((void*)0),                                                        _if_conditional130) {
                                                            # 567 "./neo-c.h"
                                                            tail_it_117->prev=head_prev_it_116;
                                                        }
                                                    }
                                                }
                                            }
                                            # 571 "./neo-c.h"
                                            __result92__ = __result_obj__ = self;
                                            return __result92__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_107;
_Bool _while_condtional19;
struct list_item$1charp* prev_it_108;
struct list$1charp* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_107, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_108, 0, sizeof(struct list_item$1charp*));
                                                    # 420 "./neo-c.h"
                                                    it_107=self->head;
                                                    # 427 "./neo-c.h"
                                                    while(_while_condtional19=it_107!=((void*)0),                                                    _while_condtional19) {
                                                        # 422 "./neo-c.h"
                                                        prev_it_108=it_107;
                                                        # 423 "./neo-c.h"
                                                        it_107=it_107->next;
                                                        # 424 "./neo-c.h"
                                                        come_call_finalizer3(prev_it_108,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 427 "./neo-c.h"
                                                    self->head=((void*)0);
                                                    # 428 "./neo-c.h"
                                                    self->tail=((void*)0);
                                                    # 430 "./neo-c.h"
                                                    self->len=0;
                                                    # 432 "./neo-c.h"
                                                    __result91__ = __result_obj__ = self;
                                                    return __result91__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional136;
char* result_121;
char* __result94__;
_Bool _if_conditional137;
char* __result95__;
char* result_122;
char* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_121, 0, sizeof(char*));
memset(&result_122, 0, sizeof(char*));
                # 281 "./neo-c.h"
                # 276 "./neo-c.h"
                if(_if_conditional136=self==((void*)0),                _if_conditional136) {
                    # 277 "./neo-c.h"
                    # 278 "./neo-c.h"
                    memset(&result_121,0,sizeof(char*));
                    # 279 "./neo-c.h"
                    __result94__ = __result_obj__ = result_121;
                    return __result94__;
                }
                # 281 "./neo-c.h"
                self->it=self->head;
                # 287 "./neo-c.h"
                # 283 "./neo-c.h"
                if(self->it) {
                    # 284 "./neo-c.h"
                    __result95__ = __result_obj__ = self->it->item;
                    return __result95__;
                }
                # 287 "./neo-c.h"
                # 288 "./neo-c.h"
                memset(&result_122,0,sizeof(char*));
                # 289 "./neo-c.h"
                __result96__ = __result_obj__ = result_122;
                return __result96__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
                # 311 "./neo-c.h"
                __result97__ = self==((void*)0)||self->it==((void*)0);
                return __result97__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional138;
char* result_124;
char* __result98__;
_Bool _if_conditional139;
char* __result99__;
char* result_125;
char* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_124, 0, sizeof(char*));
memset(&result_125, 0, sizeof(char*));
                # 299 "./neo-c.h"
                # 293 "./neo-c.h"
                if(_if_conditional138=self==((void*)0)||self->it==((void*)0),                _if_conditional138) {
                    # 294 "./neo-c.h"
                    # 295 "./neo-c.h"
                    memset(&result_124,0,sizeof(char*));
                    # 296 "./neo-c.h"
                    __result98__ = __result_obj__ = result_124;
                    return __result98__;
                }
                # 299 "./neo-c.h"
                self->it=self->it->next;
                # 305 "./neo-c.h"
                # 301 "./neo-c.h"
                if(self->it) {
                    # 302 "./neo-c.h"
                    __result99__ = __result_obj__ = self->it->item;
                    return __result99__;
                }
                # 305 "./neo-c.h"
                # 306 "./neo-c.h"
                memset(&result_125,0,sizeof(char*));
                # 307 "./neo-c.h"
                __result100__ = __result_obj__ = result_125;
                return __result100__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional142;
void* right_value113;
struct list_item$1charp* litem_126;
_Bool _if_conditional143;
void* right_value114;
struct list_item$1charp* litem_127;
void* right_value115;
struct list_item$1charp* litem_128;
struct list$1charp* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value113 = (void*)0;
memset(&litem_126, 0, sizeof(struct list_item$1charp*));
right_value114 = (void*)0;
memset(&litem_127, 0, sizeof(struct list_item$1charp*));
right_value115 = (void*)0;
memset(&litem_128, 0, sizeof(struct list_item$1charp*));
                    # 247 "./neo-c.h"
                    # 216 "./neo-c.h"
                    if(_if_conditional142=self->len==0,                    _if_conditional142) {
                        # 217 "./neo-c.h"
                        litem_126=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value113=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 217, "list_item$1charp"))));
                        come_call_finalizer3(right_value113,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 219 "./neo-c.h"
                        litem_126->prev=((void*)0);
                        # 220 "./neo-c.h"
                        litem_126->next=((void*)0);
                        # 221 "./neo-c.h"
                        litem_126->item=item;
                        # 223 "./neo-c.h"
                        self->tail=litem_126;
                        # 224 "./neo-c.h"
                        self->head=litem_126;
                    }
                    else {
                        # 247 "./neo-c.h"
                        # 226 "./neo-c.h"
                        if(_if_conditional143=self->len==1,                        _if_conditional143) {
                            # 227 "./neo-c.h"
                            litem_127=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value114=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 227, "list_item$1charp"))));
                            come_call_finalizer3(right_value114,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 229 "./neo-c.h"
                            litem_127->prev=self->head;
                            # 230 "./neo-c.h"
                            litem_127->next=((void*)0);
                            # 231 "./neo-c.h"
                            litem_127->item=item;
                            # 233 "./neo-c.h"
                            self->tail=litem_127;
                            # 234 "./neo-c.h"
                            self->head->next=litem_127;
                        }
                        else {
                            # 237 "./neo-c.h"
                            litem_128=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value115=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 237, "list_item$1charp"))));
                            come_call_finalizer3(right_value115,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 239 "./neo-c.h"
                            litem_128->prev=self->tail;
                            # 240 "./neo-c.h"
                            litem_128->next=((void*)0);
                            # 241 "./neo-c.h"
                            litem_128->item=item;
                            # 243 "./neo-c.h"
                            self->tail->next=litem_128;
                            # 244 "./neo-c.h"
                            self->tail=litem_128;
                        }
                    }
                    # 247 "./neo-c.h"
                    self->len++;
                    # 249 "./neo-c.h"
                    __result101__ = __result_obj__ = self;
                    return __result101__;
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional144;
struct sClass* __result103__;
void* right_value116;
struct sClass* result_129;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
void* right_value117;
char* __dec_obj22;
_Bool _if_conditional154;
_Bool _if_conditional155;
_Bool _if_conditional156;
void* right_value165;
struct list$1tuple2$2charphsTypephph* __dec_obj53;
_Bool _if_conditional240;
_Bool _if_conditional241;
_Bool _if_conditional242;
void* right_value166;
char* __dec_obj54;
_Bool _if_conditional243;
_Bool _if_conditional244;
void* right_value167;
char* __dec_obj55;
struct sClass* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value116 = (void*)0;
memset(&result_129, 0, sizeof(struct sClass*));
right_value117 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
            # 3 "sClass_clone"
            # 2 "sClass_clone"
            if(_if_conditional144=self==(void*)0,            _if_conditional144) {
                # 2 "sClass_clone"
                __result103__ = __result_obj__ = (void*)0;
                return __result103__;
            }
            # 3 "sClass_clone"
            result_129=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value116=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "sClass"))));
            come_call_finalizer3(right_value116,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            # 5 "sClass_clone"
            # 4 "sClass_clone"
            if(_if_conditional145=self!=((void*)0),            _if_conditional145) {
                # 4 "sClass_clone"
                result_129->mStruct=self->mStruct;
            }
            # 6 "sClass_clone"
            # 5 "sClass_clone"
            if(_if_conditional146=self!=((void*)0),            _if_conditional146) {
                # 5 "sClass_clone"
                result_129->mFloat=self->mFloat;
            }
            # 7 "sClass_clone"
            # 6 "sClass_clone"
            if(_if_conditional147=self!=((void*)0),            _if_conditional147) {
                # 6 "sClass_clone"
                result_129->mUnion=self->mUnion;
            }
            # 8 "sClass_clone"
            # 7 "sClass_clone"
            if(_if_conditional148=self!=((void*)0),            _if_conditional148) {
                # 7 "sClass_clone"
                result_129->mGenerics=self->mGenerics;
            }
            # 9 "sClass_clone"
            # 8 "sClass_clone"
            if(_if_conditional149=self!=((void*)0),            _if_conditional149) {
                # 8 "sClass_clone"
                result_129->mMethodGenerics=self->mMethodGenerics;
            }
            # 10 "sClass_clone"
            # 9 "sClass_clone"
            if(_if_conditional150=self!=((void*)0),            _if_conditional150) {
                # 9 "sClass_clone"
                result_129->mEnum=self->mEnum;
            }
            # 11 "sClass_clone"
            # 10 "sClass_clone"
            if(_if_conditional151=self!=((void*)0),            _if_conditional151) {
                # 10 "sClass_clone"
                result_129->mProtocol=self->mProtocol;
            }
            # 12 "sClass_clone"
            # 11 "sClass_clone"
            if(_if_conditional152=self!=((void*)0),            _if_conditional152) {
                # 11 "sClass_clone"
                result_129->mNumber=self->mNumber;
            }
            # 13 "sClass_clone"
            # 12 "sClass_clone"
            if(_if_conditional153=self!=((void*)0)&&self->mName!=((void*)0),            _if_conditional153) {
                # 12 "sClass_clone"
                __dec_obj22=result_129->mName;
                result_129->mName=(char*)come_increment_ref_count(((char*)(right_value117=string_clone(self->mName))));
                __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 14 "sClass_clone"
            # 13 "sClass_clone"
            if(_if_conditional154=self!=((void*)0),            _if_conditional154) {
                # 13 "sClass_clone"
                result_129->mGenericsNum=self->mGenericsNum;
            }
            # 15 "sClass_clone"
            # 14 "sClass_clone"
            if(_if_conditional155=self!=((void*)0),            _if_conditional155) {
                # 14 "sClass_clone"
                result_129->mMethodGenericsNum=self->mMethodGenericsNum;
            }
            # 16 "sClass_clone"
            # 15 "sClass_clone"
            if(_if_conditional156=self!=((void*)0)&&self->mFields!=((void*)0),            _if_conditional156) {
                # 15 "sClass_clone"
                __dec_obj53=result_129->mFields;
                result_129->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value165=list$1tuple2$2charphsTypephphp_clone(self->mFields))));
                come_call_finalizer3(__dec_obj53,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value165,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 17 "sClass_clone"
            # 16 "sClass_clone"
            if(_if_conditional240=self!=((void*)0),            _if_conditional240) {
                # 16 "sClass_clone"
                result_129->mOutputed=self->mOutputed;
            }
            # 18 "sClass_clone"
            # 17 "sClass_clone"
            if(_if_conditional241=self!=((void*)0),            _if_conditional241) {
                # 17 "sClass_clone"
                result_129->mOutputed2=self->mOutputed2;
            }
            # 19 "sClass_clone"
            # 18 "sClass_clone"
            if(_if_conditional242=self!=((void*)0)&&self->mDeclareSName!=((void*)0),            _if_conditional242) {
                # 18 "sClass_clone"
                __dec_obj54=result_129->mDeclareSName;
                result_129->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value166=string_clone(self->mDeclareSName))));
                __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 20 "sClass_clone"
            # 19 "sClass_clone"
            if(_if_conditional243=self!=((void*)0),            _if_conditional243) {
                # 19 "sClass_clone"
                result_129->mNobodyStruct=self->mNobodyStruct;
            }
            # 21 "sClass_clone"
            # 20 "sClass_clone"
            if(_if_conditional244=self!=((void*)0)&&self->mParentClassName!=((void*)0),            _if_conditional244) {
                # 20 "sClass_clone"
                __dec_obj55=result_129->mParentClassName;
                result_129->mParentClassName=(char*)come_increment_ref_count(((char*)(right_value167=string_clone(self->mParentClassName))));
                __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 21 "sClass_clone"
            __result130__ = __result_obj__ = result_129;
            come_call_finalizer3(result_129,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result130__;
            come_call_finalizer3(result_129,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional157;
struct list$1tuple2$2charphsTypephph* __result104__;
void* right_value118;
void* right_value119;
struct list$1tuple2$2charphsTypephph* result_130;
struct list_item$1tuple2$2charphsTypephph* it_131;
_Bool _while_condtional23;
void* right_value164;
struct list$1tuple2$2charphsTypephph* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value118 = (void*)0;
right_value119 = (void*)0;
memset(&result_130, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_131, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value164 = (void*)0;
                    # 133 "./neo-c.h"
                    # 130 "./neo-c.h"
                    if(_if_conditional157=self==((void*)0),                    _if_conditional157) {
                        # 131 "./neo-c.h"
                        __result104__ = __result_obj__ = ((void*)0);
                        return __result104__;
                    }
                    # 133 "./neo-c.h"
                    result_130=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value119=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value118=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 133, "list$1tuple2$2charphsTypephph"))))))));
                    come_call_finalizer3(right_value118,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value119,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 135 "./neo-c.h"
                    it_131=self->head;
                    # 142 "./neo-c.h"
                    while(_while_condtional23=it_131!=((void*)0),                    _while_condtional23) {
                        # 137 "./neo-c.h"
                        list$1tuple2$2charphsTypephph_add(result_130,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value164=tuple2$2charphsTypephp_clone(it_131->item)))));
                        come_call_finalizer3(right_value164,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 139 "./neo-c.h"
                        it_131=it_131->next;
                    }
                    # 142 "./neo-c.h"
                    __result129__ = __result_obj__ = result_130;
                    come_call_finalizer3(result_130,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result129__;
                    come_call_finalizer3(result_130,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsTypephph* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 95 "./neo-c.h"
                        self->head=((void*)0);
                        # 96 "./neo-c.h"
                        self->tail=((void*)0);
                        # 97 "./neo-c.h"
                        self->len=0;
                        # 99 "./neo-c.h"
                        __result105__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result105__;
                        come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional158;
void* right_value120;
struct list_item$1tuple2$2charphsTypephph* litem_132;
struct tuple2$2charphsTypeph* __dec_obj23;
_Bool _if_conditional161;
void* right_value121;
struct list_item$1tuple2$2charphsTypephph* litem_133;
struct tuple2$2charphsTypeph* __dec_obj24;
void* right_value122;
struct list_item$1tuple2$2charphsTypephph* litem_134;
struct tuple2$2charphsTypeph* __dec_obj25;
struct list$1tuple2$2charphsTypephph* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
right_value120 = (void*)0;
memset(&litem_132, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value121 = (void*)0;
memset(&litem_133, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value122 = (void*)0;
memset(&litem_134, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                            # 177 "./neo-c.h"
                            # 146 "./neo-c.h"
                            if(_if_conditional158=self->len==0,                            _if_conditional158) {
                                # 147 "./neo-c.h"
                                litem_132=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value120=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 147, "list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer3(right_value120,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 149 "./neo-c.h"
                                litem_132->prev=((void*)0);
                                # 150 "./neo-c.h"
                                litem_132->next=((void*)0);
                                # 151 "./neo-c.h"
                                __dec_obj23=litem_132->item;
                                litem_132->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj23,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                # 153 "./neo-c.h"
                                self->tail=litem_132;
                                # 154 "./neo-c.h"
                                self->head=litem_132;
                            }
                            else {
                                # 177 "./neo-c.h"
                                # 156 "./neo-c.h"
                                if(_if_conditional161=self->len==1,                                _if_conditional161) {
                                    # 157 "./neo-c.h"
                                    litem_133=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value121=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 157, "list_item$1tuple2$2charphsTypephph"))));
                                    come_call_finalizer3(right_value121,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 159 "./neo-c.h"
                                    litem_133->prev=self->head;
                                    # 160 "./neo-c.h"
                                    litem_133->next=((void*)0);
                                    # 161 "./neo-c.h"
                                    __dec_obj24=litem_133->item;
                                    litem_133->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj24,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    # 163 "./neo-c.h"
                                    self->tail=litem_133;
                                    # 164 "./neo-c.h"
                                    self->head->next=litem_133;
                                }
                                else {
                                    # 167 "./neo-c.h"
                                    litem_134=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value122=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 167, "list_item$1tuple2$2charphsTypephph"))));
                                    come_call_finalizer3(right_value122,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 169 "./neo-c.h"
                                    litem_134->prev=self->tail;
                                    # 170 "./neo-c.h"
                                    litem_134->next=((void*)0);
                                    # 171 "./neo-c.h"
                                    __dec_obj25=litem_134->item;
                                    litem_134->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj25,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    # 173 "./neo-c.h"
                                    self->tail->next=litem_134;
                                    # 174 "./neo-c.h"
                                    self->tail=litem_134;
                                }
                            }
                            # 177 "./neo-c.h"
                            self->len++;
                            # 179 "./neo-c.h"
                            __result106__ = __result_obj__ = self;
                            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                            return __result106__;
                            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional164;
_Bool _if_conditional165;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "tuple2$2charphsTypephp_finalize"
                                        # 0 "tuple2$2charphsTypephp_finalize"
                                        if(_if_conditional164=self!=((void*)0)&&self->v1!=((void*)0),                                        _if_conditional164) {
                                            # 0 "tuple2$2charphsTypephp_finalize"
                                            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "tuple2$2charphsTypephp_finalize"
                                        # 1 "tuple2$2charphsTypephp_finalize"
                                        if(_if_conditional165=self!=((void*)0)&&self->v2!=((void*)0),                                        _if_conditional165) {
                                            # 1 "tuple2$2charphsTypephp_finalize"
                                            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional166;
struct tuple2$2charphsTypeph* __result107__;
void* right_value123;
struct tuple2$2charphsTypeph* result_135;
_Bool _if_conditional169;
void* right_value124;
char* __dec_obj26;
_Bool _if_conditional170;
void* right_value163;
struct sType* __dec_obj52;
struct tuple2$2charphsTypeph* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
memset(&result_135, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value124 = (void*)0;
right_value163 = (void*)0;
                            # 3 "tuple2$2charphsTypephp_clone"
                            # 2 "tuple2$2charphsTypephp_clone"
                            if(_if_conditional166=self==(void*)0,                            _if_conditional166) {
                                # 2 "tuple2$2charphsTypephp_clone"
                                __result107__ = __result_obj__ = (void*)0;
                                return __result107__;
                            }
                            # 3 "tuple2$2charphsTypephp_clone"
                            result_135=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value123=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"))));
                            come_call_finalizer3(right_value123,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                            # 5 "tuple2$2charphsTypephp_clone"
                            # 4 "tuple2$2charphsTypephp_clone"
                            if(_if_conditional169=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional169) {
                                # 4 "tuple2$2charphsTypephp_clone"
                                __dec_obj26=result_135->v1;
                                result_135->v1=(char*)come_increment_ref_count(((char*)(right_value124=string_clone(self->v1))));
                                __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 6 "tuple2$2charphsTypephp_clone"
                            # 5 "tuple2$2charphsTypephp_clone"
                            if(_if_conditional170=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional170) {
                                # 5 "tuple2$2charphsTypephp_clone"
                                __dec_obj52=result_135->v2;
                                result_135->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value163=sType_clone(self->v2))));
                                come_call_finalizer3(__dec_obj52,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value163,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            }
                            # 6 "tuple2$2charphsTypephp_clone"
                            __result128__ = __result_obj__ = result_135;
                            come_call_finalizer3(result_135,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
                            return __result128__;
                            come_call_finalizer3(result_135,tuple2$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional167;
_Bool _if_conditional168;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "tuple2$2charphsTypeph_finalize"
                                # 0 "tuple2$2charphsTypeph_finalize"
                                if(_if_conditional167=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional167) {
                                    # 0 "tuple2$2charphsTypeph_finalize"
                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "tuple2$2charphsTypeph_finalize"
                                # 1 "tuple2$2charphsTypeph_finalize"
                                if(_if_conditional168=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional168) {
                                    # 1 "tuple2$2charphsTypeph_finalize"
                                    come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional171;
struct sType* __result108__;
void* right_value125;
struct sType* result_136;
_Bool _if_conditional172;
_Bool _if_conditional173;
void* right_value132;
struct list$1sTypeph* __dec_obj30;
_Bool _if_conditional177;
void* right_value135;
struct tuple1$1sTypeph* __dec_obj32;
_Bool _if_conditional181;
void* right_value138;
struct tuple1$1sTypeph* __dec_obj34;
_Bool _if_conditional184;
void* right_value139;
char* __dec_obj35;
_Bool _if_conditional185;
void* right_value140;
struct list$1sTypeph* __dec_obj36;
_Bool _if_conditional186;
void* right_value147;
struct list$1sNodeph* __dec_obj40;
_Bool _if_conditional190;
_Bool _if_conditional191;
void* right_value148;
struct list$1sTypeph* __dec_obj41;
_Bool _if_conditional192;
void* right_value155;
struct list$1charph* __dec_obj45;
_Bool _if_conditional196;
void* right_value158;
struct tuple1$1sTypeph* __dec_obj47;
_Bool _if_conditional199;
_Bool _if_conditional200;
void* right_value159;
struct sNode* __dec_obj48;
_Bool _if_conditional201;
_Bool _if_conditional202;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _if_conditional205;
_Bool _if_conditional206;
_Bool _if_conditional207;
_Bool _if_conditional208;
_Bool _if_conditional209;
_Bool _if_conditional210;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional223;
_Bool _if_conditional224;
_Bool _if_conditional225;
void* right_value160;
struct sNode* __dec_obj49;
_Bool _if_conditional226;
_Bool _if_conditional227;
_Bool _if_conditional228;
void* right_value161;
char* __dec_obj50;
_Bool _if_conditional229;
_Bool _if_conditional230;
_Bool _if_conditional231;
_Bool _if_conditional232;
_Bool _if_conditional233;
_Bool _if_conditional234;
_Bool _if_conditional235;
_Bool _if_conditional236;
_Bool _if_conditional237;
_Bool _if_conditional238;
void* right_value162;
char* __dec_obj51;
_Bool _if_conditional239;
struct sType* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
right_value125 = (void*)0;
memset(&result_136, 0, sizeof(struct sType*));
right_value132 = (void*)0;
right_value135 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
right_value140 = (void*)0;
right_value147 = (void*)0;
right_value148 = (void*)0;
right_value155 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value161 = (void*)0;
right_value162 = (void*)0;
                                    # 3 "sType_clone"
                                    # 2 "sType_clone"
                                    if(_if_conditional171=self==(void*)0,                                    _if_conditional171) {
                                        # 2 "sType_clone"
                                        __result108__ = __result_obj__ = (void*)0;
                                        return __result108__;
                                    }
                                    # 3 "sType_clone"
                                    result_136=(struct sType*)come_increment_ref_count(((struct sType*)(right_value125=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
                                    come_call_finalizer3(right_value125,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 5 "sType_clone"
                                    # 4 "sType_clone"
                                    if(_if_conditional172=self!=((void*)0),                                    _if_conditional172) {
                                        # 4 "sType_clone"
                                        result_136->mClass=self->mClass;
                                    }
                                    # 6 "sType_clone"
                                    # 5 "sType_clone"
                                    if(_if_conditional173=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                    _if_conditional173) {
                                        # 5 "sType_clone"
                                        __dec_obj30=result_136->mMultipleTypes;
                                        result_136->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value132=list$1sTypeph_clone(self->mMultipleTypes))));
                                        come_call_finalizer3(__dec_obj30,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value132,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 7 "sType_clone"
                                    # 6 "sType_clone"
                                    if(_if_conditional177=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                    _if_conditional177) {
                                        # 6 "sType_clone"
                                        __dec_obj32=result_136->mNoSolvedGenericsType;
                                        result_136->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value135=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                                        come_call_finalizer3(__dec_obj32,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value135,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 8 "sType_clone"
                                    # 7 "sType_clone"
                                    if(_if_conditional181=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                    _if_conditional181) {
                                        # 7 "sType_clone"
                                        __dec_obj34=result_136->mOriginalLoadVarType;
                                        result_136->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value138=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                                        come_call_finalizer3(__dec_obj34,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value138,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 9 "sType_clone"
                                    # 8 "sType_clone"
                                    if(_if_conditional184=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                    _if_conditional184) {
                                        # 8 "sType_clone"
                                        __dec_obj35=result_136->mGenericsName;
                                        result_136->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value139=string_clone(self->mGenericsName))));
                                        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 10 "sType_clone"
                                    # 9 "sType_clone"
                                    if(_if_conditional185=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                    _if_conditional185) {
                                        # 9 "sType_clone"
                                        __dec_obj36=result_136->mGenericsTypes;
                                        result_136->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value140=list$1sTypeph_clone(self->mGenericsTypes))));
                                        come_call_finalizer3(__dec_obj36,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value140,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 11 "sType_clone"
                                    # 10 "sType_clone"
                                    if(_if_conditional186=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                    _if_conditional186) {
                                        # 10 "sType_clone"
                                        __dec_obj40=result_136->mArrayNum;
                                        result_136->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value147=list$1sNodeph_clone(self->mArrayNum))));
                                        come_call_finalizer3(__dec_obj40,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value147,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 12 "sType_clone"
                                    # 11 "sType_clone"
                                    if(_if_conditional190=self!=((void*)0),                                    _if_conditional190) {
                                        # 11 "sType_clone"
                                        result_136->mOmitArrayNum=self->mOmitArrayNum;
                                    }
                                    # 13 "sType_clone"
                                    # 12 "sType_clone"
                                    if(_if_conditional191=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                    _if_conditional191) {
                                        # 12 "sType_clone"
                                        __dec_obj41=result_136->mParamTypes;
                                        result_136->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value148=list$1sTypeph_clone(self->mParamTypes))));
                                        come_call_finalizer3(__dec_obj41,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value148,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 14 "sType_clone"
                                    # 13 "sType_clone"
                                    if(_if_conditional192=self!=((void*)0)&&self->mParamNames!=((void*)0),                                    _if_conditional192) {
                                        # 13 "sType_clone"
                                        __dec_obj45=result_136->mParamNames;
                                        result_136->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value155=list$1charph_clone(self->mParamNames))));
                                        come_call_finalizer3(__dec_obj45,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value155,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 15 "sType_clone"
                                    # 14 "sType_clone"
                                    if(_if_conditional196=self!=((void*)0)&&self->mResultType!=((void*)0),                                    _if_conditional196) {
                                        # 14 "sType_clone"
                                        __dec_obj47=result_136->mResultType;
                                        result_136->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value158=tuple1$1sTypephp_clone(self->mResultType))));
                                        come_call_finalizer3(__dec_obj47,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value158,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 16 "sType_clone"
                                    # 15 "sType_clone"
                                    if(_if_conditional199=self!=((void*)0),                                    _if_conditional199) {
                                        # 15 "sType_clone"
                                        result_136->mVarArgs=self->mVarArgs;
                                    }
                                    # 17 "sType_clone"
                                    # 16 "sType_clone"
                                    if(_if_conditional200=self!=((void*)0)&&self->mAlignas!=((void*)0),                                    _if_conditional200) {
                                        # 16 "sType_clone"
                                        __dec_obj48=result_136->mAlignas;
                                        result_136->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value159=sNode_clone(self->mAlignas))));
                                        if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value159) { right_value159 = come_decrement_ref_count2(right_value159, ((struct sNode*)right_value159)->finalize, ((struct sNode*)right_value159)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    # 18 "sType_clone"
                                    # 17 "sType_clone"
                                    if(_if_conditional201=self!=((void*)0),                                    _if_conditional201) {
                                        # 17 "sType_clone"
                                        result_136->mUnsigned=self->mUnsigned;
                                    }
                                    # 19 "sType_clone"
                                    # 18 "sType_clone"
                                    if(_if_conditional202=self!=((void*)0),                                    _if_conditional202) {
                                        # 18 "sType_clone"
                                        result_136->mShort=self->mShort;
                                    }
                                    # 20 "sType_clone"
                                    # 19 "sType_clone"
                                    if(_if_conditional203=self!=((void*)0),                                    _if_conditional203) {
                                        # 19 "sType_clone"
                                        result_136->mLong=self->mLong;
                                    }
                                    # 21 "sType_clone"
                                    # 20 "sType_clone"
                                    if(_if_conditional204=self!=((void*)0),                                    _if_conditional204) {
                                        # 20 "sType_clone"
                                        result_136->mLongLong=self->mLongLong;
                                    }
                                    # 22 "sType_clone"
                                    # 21 "sType_clone"
                                    if(_if_conditional205=self!=((void*)0),                                    _if_conditional205) {
                                        # 21 "sType_clone"
                                        result_136->mConstant=self->mConstant;
                                    }
                                    # 23 "sType_clone"
                                    # 22 "sType_clone"
                                    if(_if_conditional206=self!=((void*)0),                                    _if_conditional206) {
                                        # 22 "sType_clone"
                                        result_136->mRegister=self->mRegister;
                                    }
                                    # 24 "sType_clone"
                                    # 23 "sType_clone"
                                    if(_if_conditional207=self!=((void*)0),                                    _if_conditional207) {
                                        # 23 "sType_clone"
                                        result_136->mVolatile=self->mVolatile;
                                    }
                                    # 25 "sType_clone"
                                    # 24 "sType_clone"
                                    if(_if_conditional208=self!=((void*)0),                                    _if_conditional208) {
                                        # 24 "sType_clone"
                                        result_136->mStatic=self->mStatic;
                                    }
                                    # 26 "sType_clone"
                                    # 25 "sType_clone"
                                    if(_if_conditional209=self!=((void*)0),                                    _if_conditional209) {
                                        # 25 "sType_clone"
                                        result_136->mRecord=self->mRecord;
                                    }
                                    # 27 "sType_clone"
                                    # 26 "sType_clone"
                                    if(_if_conditional210=self!=((void*)0),                                    _if_conditional210) {
                                        # 26 "sType_clone"
                                        result_136->mExtern=self->mExtern;
                                    }
                                    # 28 "sType_clone"
                                    # 27 "sType_clone"
                                    if(_if_conditional211=self!=((void*)0),                                    _if_conditional211) {
                                        # 27 "sType_clone"
                                        result_136->mRestrict=self->mRestrict;
                                    }
                                    # 29 "sType_clone"
                                    # 28 "sType_clone"
                                    if(_if_conditional212=self!=((void*)0),                                    _if_conditional212) {
                                        # 28 "sType_clone"
                                        result_136->mImmutable=self->mImmutable;
                                    }
                                    # 30 "sType_clone"
                                    # 29 "sType_clone"
                                    if(_if_conditional213=self!=((void*)0),                                    _if_conditional213) {
                                        # 29 "sType_clone"
                                        result_136->mHeap=self->mHeap;
                                    }
                                    # 31 "sType_clone"
                                    # 30 "sType_clone"
                                    if(_if_conditional214=self!=((void*)0),                                    _if_conditional214) {
                                        # 30 "sType_clone"
                                        result_136->mDummyHeap=self->mDummyHeap;
                                    }
                                    # 32 "sType_clone"
                                    # 31 "sType_clone"
                                    if(_if_conditional215=self!=((void*)0),                                    _if_conditional215) {
                                        # 31 "sType_clone"
                                        result_136->mDelegate=self->mDelegate;
                                    }
                                    # 33 "sType_clone"
                                    # 32 "sType_clone"
                                    if(_if_conditional216=self!=((void*)0),                                    _if_conditional216) {
                                        # 32 "sType_clone"
                                        result_136->mShare=self->mShare;
                                    }
                                    # 34 "sType_clone"
                                    # 33 "sType_clone"
                                    if(_if_conditional217=self!=((void*)0),                                    _if_conditional217) {
                                        # 33 "sType_clone"
                                        result_136->mClone=self->mClone;
                                    }
                                    # 35 "sType_clone"
                                    # 34 "sType_clone"
                                    if(_if_conditional218=self!=((void*)0),                                    _if_conditional218) {
                                        # 34 "sType_clone"
                                        result_136->mNoHeap=self->mNoHeap;
                                    }
                                    # 36 "sType_clone"
                                    # 35 "sType_clone"
                                    if(_if_conditional219=self!=((void*)0),                                    _if_conditional219) {
                                        # 35 "sType_clone"
                                        result_136->mNoCallingDestructor=self->mNoCallingDestructor;
                                    }
                                    # 37 "sType_clone"
                                    # 36 "sType_clone"
                                    if(_if_conditional220=self!=((void*)0),                                    _if_conditional220) {
                                        # 36 "sType_clone"
                                        result_136->mRefference=self->mRefference;
                                    }
                                    # 38 "sType_clone"
                                    # 37 "sType_clone"
                                    if(_if_conditional221=self!=((void*)0),                                    _if_conditional221) {
                                        # 37 "sType_clone"
                                        result_136->mException=self->mException;
                                    }
                                    # 39 "sType_clone"
                                    # 38 "sType_clone"
                                    if(_if_conditional222=self!=((void*)0),                                    _if_conditional222) {
                                        # 38 "sType_clone"
                                        result_136->mPointerNum=self->mPointerNum;
                                    }
                                    # 40 "sType_clone"
                                    # 39 "sType_clone"
                                    if(_if_conditional223=self!=((void*)0),                                    _if_conditional223) {
                                        # 39 "sType_clone"
                                        result_136->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                                    }
                                    # 41 "sType_clone"
                                    # 40 "sType_clone"
                                    if(_if_conditional224=self!=((void*)0),                                    _if_conditional224) {
                                        # 40 "sType_clone"
                                        result_136->mNoArrayPointerNum=self->mNoArrayPointerNum;
                                    }
                                    # 42 "sType_clone"
                                    # 41 "sType_clone"
                                    if(_if_conditional225=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                    _if_conditional225) {
                                        # 41 "sType_clone"
                                        __dec_obj49=result_136->mSizeNum;
                                        result_136->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value160=sNode_clone(self->mSizeNum))));
                                        if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value160) { right_value160 = come_decrement_ref_count2(right_value160, ((struct sNode*)right_value160)->finalize, ((struct sNode*)right_value160)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    # 43 "sType_clone"
                                    # 42 "sType_clone"
                                    if(_if_conditional226=self!=((void*)0),                                    _if_conditional226) {
                                        # 42 "sType_clone"
                                        result_136->mDynamicArrayNum=self->mDynamicArrayNum;
                                    }
                                    # 44 "sType_clone"
                                    # 43 "sType_clone"
                                    if(_if_conditional227=self!=((void*)0),                                    _if_conditional227) {
                                        # 43 "sType_clone"
                                        result_136->mTypeOfExpression=self->mTypeOfExpression;
                                    }
                                    # 45 "sType_clone"
                                    # 44 "sType_clone"
                                    if(_if_conditional228=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                    _if_conditional228) {
                                        # 44 "sType_clone"
                                        __dec_obj50=result_136->mOriginalTypeName;
                                        result_136->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value161=string_clone(self->mOriginalTypeName))));
                                        __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 46 "sType_clone"
                                    # 45 "sType_clone"
                                    if(_if_conditional229=self!=((void*)0),                                    _if_conditional229) {
                                        # 45 "sType_clone"
                                        result_136->mOriginalPointerNum=self->mOriginalPointerNum;
                                    }
                                    # 47 "sType_clone"
                                    # 46 "sType_clone"
                                    if(_if_conditional230=self!=((void*)0),                                    _if_conditional230) {
                                        # 46 "sType_clone"
                                        result_136->mFunctionParam=self->mFunctionParam;
                                    }
                                    # 48 "sType_clone"
                                    # 47 "sType_clone"
                                    if(_if_conditional231=self!=((void*)0),                                    _if_conditional231) {
                                        # 47 "sType_clone"
                                        result_136->mAllocaValue=self->mAllocaValue;
                                    }
                                    # 49 "sType_clone"
                                    # 48 "sType_clone"
                                    if(_if_conditional232=self!=((void*)0),                                    _if_conditional232) {
                                        # 48 "sType_clone"
                                        result_136->mGenericsStruct=self->mGenericsStruct;
                                    }
                                    # 50 "sType_clone"
                                    # 49 "sType_clone"
                                    if(_if_conditional233=self!=((void*)0),                                    _if_conditional233) {
                                        # 49 "sType_clone"
                                        result_136->mSolvedGenericsName=self->mSolvedGenericsName;
                                    }
                                    # 51 "sType_clone"
                                    # 50 "sType_clone"
                                    if(_if_conditional234=self!=((void*)0),                                    _if_conditional234) {
                                        # 50 "sType_clone"
                                        result_136->mComeMemCore=self->mComeMemCore;
                                    }
                                    # 52 "sType_clone"
                                    # 51 "sType_clone"
                                    if(_if_conditional235=self!=((void*)0),                                    _if_conditional235) {
                                        # 51 "sType_clone"
                                        result_136->mInline=self->mInline;
                                    }
                                    # 53 "sType_clone"
                                    # 52 "sType_clone"
                                    if(_if_conditional236=self!=((void*)0),                                    _if_conditional236) {
                                        # 52 "sType_clone"
                                        result_136->mNullValue=self->mNullValue;
                                    }
                                    # 54 "sType_clone"
                                    # 53 "sType_clone"
                                    if(_if_conditional237=self!=((void*)0),                                    _if_conditional237) {
                                        # 53 "sType_clone"
                                        result_136->mGuardValue=self->mGuardValue;
                                    }
                                    # 55 "sType_clone"
                                    # 54 "sType_clone"
                                    if(_if_conditional238=self!=((void*)0)&&self->mAsmName!=((void*)0),                                    _if_conditional238) {
                                        # 54 "sType_clone"
                                        __dec_obj51=result_136->mAsmName;
                                        result_136->mAsmName=(char*)come_increment_ref_count(((char*)(right_value162=string_clone(self->mAsmName))));
                                        __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 56 "sType_clone"
                                    # 55 "sType_clone"
                                    if(_if_conditional239=self!=((void*)0),                                    _if_conditional239) {
                                        # 55 "sType_clone"
                                        result_136->mArrayPointerType=self->mArrayPointerType;
                                    }
                                    # 56 "sType_clone"
                                    __result127__ = __result_obj__ = result_136;
                                    come_call_finalizer3(result_136,sType_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result127__;
                                    come_call_finalizer3(result_136,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional174;
struct list$1sTypeph* __result109__;
void* right_value126;
void* right_value127;
struct list$1sTypeph* result_137;
struct list_item$1sTypeph* it_138;
_Bool _while_condtional24;
void* right_value131;
struct list$1sTypeph* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
right_value126 = (void*)0;
right_value127 = (void*)0;
memset(&result_137, 0, sizeof(struct list$1sTypeph*));
memset(&it_138, 0, sizeof(struct list_item$1sTypeph*));
right_value131 = (void*)0;
                                            # 133 "./neo-c.h"
                                            # 130 "./neo-c.h"
                                            if(_if_conditional174=self==((void*)0),                                            _if_conditional174) {
                                                # 131 "./neo-c.h"
                                                __result109__ = __result_obj__ = ((void*)0);
                                                return __result109__;
                                            }
                                            # 133 "./neo-c.h"
                                            result_137=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value127=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value126=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 133, "list$1sTypeph"))))))));
                                            come_call_finalizer3(right_value126,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value127,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            # 135 "./neo-c.h"
                                            it_138=self->head;
                                            # 142 "./neo-c.h"
                                            while(_while_condtional24=it_138!=((void*)0),                                            _while_condtional24) {
                                                # 137 "./neo-c.h"
                                                list$1sTypeph_add(result_137,(struct sType*)come_increment_ref_count(((struct sType*)(right_value131=sType_clone(it_138->item)))));
                                                come_call_finalizer3(right_value131,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                # 139 "./neo-c.h"
                                                it_138=it_138->next;
                                            }
                                            # 142 "./neo-c.h"
                                            __result112__ = __result_obj__ = result_137;
                                            come_call_finalizer3(result_137,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result112__;
                                            come_call_finalizer3(result_137,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 95 "./neo-c.h"
                                                self->head=((void*)0);
                                                # 96 "./neo-c.h"
                                                self->tail=((void*)0);
                                                # 97 "./neo-c.h"
                                                self->len=0;
                                                # 99 "./neo-c.h"
                                                __result110__ = __result_obj__ = self;
                                                come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result110__;
                                                come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional175;
void* right_value128;
struct list_item$1sTypeph* litem_139;
struct sType* __dec_obj27;
_Bool _if_conditional176;
void* right_value129;
struct list_item$1sTypeph* litem_140;
struct sType* __dec_obj28;
void* right_value130;
struct list_item$1sTypeph* litem_141;
struct sType* __dec_obj29;
struct list$1sTypeph* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value128 = (void*)0;
memset(&litem_139, 0, sizeof(struct list_item$1sTypeph*));
right_value129 = (void*)0;
memset(&litem_140, 0, sizeof(struct list_item$1sTypeph*));
right_value130 = (void*)0;
memset(&litem_141, 0, sizeof(struct list_item$1sTypeph*));
                                                    # 177 "./neo-c.h"
                                                    # 146 "./neo-c.h"
                                                    if(_if_conditional175=self->len==0,                                                    _if_conditional175) {
                                                        # 147 "./neo-c.h"
                                                        litem_139=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value128=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 147, "list_item$1sTypeph"))));
                                                        come_call_finalizer3(right_value128,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        # 149 "./neo-c.h"
                                                        litem_139->prev=((void*)0);
                                                        # 150 "./neo-c.h"
                                                        litem_139->next=((void*)0);
                                                        # 151 "./neo-c.h"
                                                        __dec_obj27=litem_139->item;
                                                        litem_139->item=(struct sType*)come_increment_ref_count(item);
                                                        come_call_finalizer3(__dec_obj27,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        # 153 "./neo-c.h"
                                                        self->tail=litem_139;
                                                        # 154 "./neo-c.h"
                                                        self->head=litem_139;
                                                    }
                                                    else {
                                                        # 177 "./neo-c.h"
                                                        # 156 "./neo-c.h"
                                                        if(_if_conditional176=self->len==1,                                                        _if_conditional176) {
                                                            # 157 "./neo-c.h"
                                                            litem_140=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value129=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 157, "list_item$1sTypeph"))));
                                                            come_call_finalizer3(right_value129,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            # 159 "./neo-c.h"
                                                            litem_140->prev=self->head;
                                                            # 160 "./neo-c.h"
                                                            litem_140->next=((void*)0);
                                                            # 161 "./neo-c.h"
                                                            __dec_obj28=litem_140->item;
                                                            litem_140->item=(struct sType*)come_increment_ref_count(item);
                                                            come_call_finalizer3(__dec_obj28,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            # 163 "./neo-c.h"
                                                            self->tail=litem_140;
                                                            # 164 "./neo-c.h"
                                                            self->head->next=litem_140;
                                                        }
                                                        else {
                                                            # 167 "./neo-c.h"
                                                            litem_141=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value130=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 167, "list_item$1sTypeph"))));
                                                            come_call_finalizer3(right_value130,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            # 169 "./neo-c.h"
                                                            litem_141->prev=self->tail;
                                                            # 170 "./neo-c.h"
                                                            litem_141->next=((void*)0);
                                                            # 171 "./neo-c.h"
                                                            __dec_obj29=litem_141->item;
                                                            litem_141->item=(struct sType*)come_increment_ref_count(item);
                                                            come_call_finalizer3(__dec_obj29,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            # 173 "./neo-c.h"
                                                            self->tail->next=litem_141;
                                                            # 174 "./neo-c.h"
                                                            self->tail=litem_141;
                                                        }
                                                    }
                                                    # 177 "./neo-c.h"
                                                    self->len++;
                                                    # 179 "./neo-c.h"
                                                    __result111__ = __result_obj__ = self;
                                                    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                                                    return __result111__;
                                                    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_142;
_Bool _while_condtional25;
struct list_item$1sTypeph* prev_it_143;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_142, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_143, 0, sizeof(struct list_item$1sTypeph*));
                                            # 114 "./neo-c.h"
                                            it_142=self->head;
                                            # 120 "./neo-c.h"
                                            while(_while_condtional25=it_142!=((void*)0),                                            _while_condtional25) {
                                                # 116 "./neo-c.h"
                                                prev_it_143=it_142;
                                                # 117 "./neo-c.h"
                                                it_142=it_142->next;
                                                # 118 "./neo-c.h"
                                                come_call_finalizer3(prev_it_143,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional179;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "tuple1$1sTypeph_finalize"
                                                # 0 "tuple1$1sTypeph_finalize"
                                                if(_if_conditional179=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional179) {
                                                    # 0 "tuple1$1sTypeph_finalize"
                                                    come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional187;
struct list$1sNodeph* __result117__;
void* right_value141;
void* right_value142;
struct list$1sNodeph* result_146;
struct list_item$1sNodeph* it_147;
_Bool _while_condtional26;
void* right_value146;
struct list$1sNodeph* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
right_value141 = (void*)0;
right_value142 = (void*)0;
memset(&result_146, 0, sizeof(struct list$1sNodeph*));
memset(&it_147, 0, sizeof(struct list_item$1sNodeph*));
right_value146 = (void*)0;
                                            # 133 "./neo-c.h"
                                            # 130 "./neo-c.h"
                                            if(_if_conditional187=self==((void*)0),                                            _if_conditional187) {
                                                # 131 "./neo-c.h"
                                                __result117__ = __result_obj__ = ((void*)0);
                                                return __result117__;
                                            }
                                            # 133 "./neo-c.h"
                                            result_146=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value142=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value141=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 133, "list$1sNodeph"))))))));
                                            come_call_finalizer3(right_value141,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value142,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            # 135 "./neo-c.h"
                                            it_147=self->head;
                                            # 142 "./neo-c.h"
                                            while(_while_condtional26=it_147!=((void*)0),                                            _while_condtional26) {
                                                # 137 "./neo-c.h"
                                                list$1sNodeph_add(result_146,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value146=sNode_clone(it_147->item)))));
                                                if(right_value146) { right_value146 = come_decrement_ref_count2(right_value146, ((struct sNode*)right_value146)->finalize, ((struct sNode*)right_value146)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                # 139 "./neo-c.h"
                                                it_147=it_147->next;
                                            }
                                            # 142 "./neo-c.h"
                                            __result120__ = __result_obj__ = result_146;
                                            come_call_finalizer3(result_146,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result120__;
                                            come_call_finalizer3(result_146,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 95 "./neo-c.h"
                                                self->head=((void*)0);
                                                # 96 "./neo-c.h"
                                                self->tail=((void*)0);
                                                # 97 "./neo-c.h"
                                                self->len=0;
                                                # 99 "./neo-c.h"
                                                __result118__ = __result_obj__ = self;
                                                come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result118__;
                                                come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional188;
void* right_value143;
struct list_item$1sNodeph* litem_148;
struct sNode* __dec_obj37;
_Bool _if_conditional189;
void* right_value144;
struct list_item$1sNodeph* litem_149;
struct sNode* __dec_obj38;
void* right_value145;
struct list_item$1sNodeph* litem_150;
struct sNode* __dec_obj39;
struct list$1sNodeph* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
right_value143 = (void*)0;
memset(&litem_148, 0, sizeof(struct list_item$1sNodeph*));
right_value144 = (void*)0;
memset(&litem_149, 0, sizeof(struct list_item$1sNodeph*));
right_value145 = (void*)0;
memset(&litem_150, 0, sizeof(struct list_item$1sNodeph*));
                                                    # 177 "./neo-c.h"
                                                    # 146 "./neo-c.h"
                                                    if(_if_conditional188=self->len==0,                                                    _if_conditional188) {
                                                        # 147 "./neo-c.h"
                                                        litem_148=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value143=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 147, "list_item$1sNodeph"))));
                                                        come_call_finalizer3(right_value143,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        # 149 "./neo-c.h"
                                                        litem_148->prev=((void*)0);
                                                        # 150 "./neo-c.h"
                                                        litem_148->next=((void*)0);
                                                        # 151 "./neo-c.h"
                                                        __dec_obj37=litem_148->item;
                                                        litem_148->item=(struct sNode*)come_increment_ref_count(item);
                                                        if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); }
                                                        # 153 "./neo-c.h"
                                                        self->tail=litem_148;
                                                        # 154 "./neo-c.h"
                                                        self->head=litem_148;
                                                    }
                                                    else {
                                                        # 177 "./neo-c.h"
                                                        # 156 "./neo-c.h"
                                                        if(_if_conditional189=self->len==1,                                                        _if_conditional189) {
                                                            # 157 "./neo-c.h"
                                                            litem_149=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value144=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 157, "list_item$1sNodeph"))));
                                                            come_call_finalizer3(right_value144,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            # 159 "./neo-c.h"
                                                            litem_149->prev=self->head;
                                                            # 160 "./neo-c.h"
                                                            litem_149->next=((void*)0);
                                                            # 161 "./neo-c.h"
                                                            __dec_obj38=litem_149->item;
                                                            litem_149->item=(struct sNode*)come_increment_ref_count(item);
                                                            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); }
                                                            # 163 "./neo-c.h"
                                                            self->tail=litem_149;
                                                            # 164 "./neo-c.h"
                                                            self->head->next=litem_149;
                                                        }
                                                        else {
                                                            # 167 "./neo-c.h"
                                                            litem_150=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value145=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 167, "list_item$1sNodeph"))));
                                                            come_call_finalizer3(right_value145,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            # 169 "./neo-c.h"
                                                            litem_150->prev=self->tail;
                                                            # 170 "./neo-c.h"
                                                            litem_150->next=((void*)0);
                                                            # 171 "./neo-c.h"
                                                            __dec_obj39=litem_150->item;
                                                            litem_150->item=(struct sNode*)come_increment_ref_count(item);
                                                            if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0, (void*)0); }
                                                            # 173 "./neo-c.h"
                                                            self->tail->next=litem_150;
                                                            # 174 "./neo-c.h"
                                                            self->tail=litem_150;
                                                        }
                                                    }
                                                    # 177 "./neo-c.h"
                                                    self->len++;
                                                    # 179 "./neo-c.h"
                                                    __result119__ = __result_obj__ = self;
                                                    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                    return __result119__;
                                                    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_151;
_Bool _while_condtional27;
struct list_item$1sNodeph* prev_it_152;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_151, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_152, 0, sizeof(struct list_item$1sNodeph*));
                                            # 114 "./neo-c.h"
                                            it_151=self->head;
                                            # 120 "./neo-c.h"
                                            while(_while_condtional27=it_151!=((void*)0),                                            _while_condtional27) {
                                                # 116 "./neo-c.h"
                                                prev_it_152=it_151;
                                                # 117 "./neo-c.h"
                                                it_151=it_151->next;
                                                # 118 "./neo-c.h"
                                                come_call_finalizer3(prev_it_152,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional193;
struct list$1charph* __result121__;
void* right_value149;
void* right_value150;
struct list$1charph* result_153;
struct list_item$1charph* it_154;
_Bool _while_condtional28;
void* right_value154;
struct list$1charph* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
right_value149 = (void*)0;
right_value150 = (void*)0;
memset(&result_153, 0, sizeof(struct list$1charph*));
memset(&it_154, 0, sizeof(struct list_item$1charph*));
right_value154 = (void*)0;
                                            # 133 "./neo-c.h"
                                            # 130 "./neo-c.h"
                                            if(_if_conditional193=self==((void*)0),                                            _if_conditional193) {
                                                # 131 "./neo-c.h"
                                                __result121__ = __result_obj__ = ((void*)0);
                                                return __result121__;
                                            }
                                            # 133 "./neo-c.h"
                                            result_153=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value150=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value149=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 133, "list$1charph"))))))));
                                            come_call_finalizer3(right_value149,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value150,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                            # 135 "./neo-c.h"
                                            it_154=self->head;
                                            # 142 "./neo-c.h"
                                            while(_while_condtional28=it_154!=((void*)0),                                            _while_condtional28) {
                                                # 137 "./neo-c.h"
                                                list$1charph_add(result_153,(char*)come_increment_ref_count(((char*)(right_value154=string_clone(it_154->item)))));
                                                right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                # 139 "./neo-c.h"
                                                it_154=it_154->next;
                                            }
                                            # 142 "./neo-c.h"
                                            __result124__ = __result_obj__ = result_153;
                                            come_call_finalizer3(result_153,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result124__;
                                            come_call_finalizer3(result_153,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 95 "./neo-c.h"
                                                self->head=((void*)0);
                                                # 96 "./neo-c.h"
                                                self->tail=((void*)0);
                                                # 97 "./neo-c.h"
                                                self->len=0;
                                                # 99 "./neo-c.h"
                                                __result122__ = __result_obj__ = self;
                                                come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result122__;
                                                come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional194;
void* right_value151;
struct list_item$1charph* litem_155;
char* __dec_obj42;
_Bool _if_conditional195;
void* right_value152;
struct list_item$1charph* litem_156;
char* __dec_obj43;
void* right_value153;
struct list_item$1charph* litem_157;
char* __dec_obj44;
struct list$1charph* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value151 = (void*)0;
memset(&litem_155, 0, sizeof(struct list_item$1charph*));
right_value152 = (void*)0;
memset(&litem_156, 0, sizeof(struct list_item$1charph*));
right_value153 = (void*)0;
memset(&litem_157, 0, sizeof(struct list_item$1charph*));
                                                    # 177 "./neo-c.h"
                                                    # 146 "./neo-c.h"
                                                    if(_if_conditional194=self->len==0,                                                    _if_conditional194) {
                                                        # 147 "./neo-c.h"
                                                        litem_155=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value151=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 147, "list_item$1charph"))));
                                                        come_call_finalizer3(right_value151,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        # 149 "./neo-c.h"
                                                        litem_155->prev=((void*)0);
                                                        # 150 "./neo-c.h"
                                                        litem_155->next=((void*)0);
                                                        # 151 "./neo-c.h"
                                                        __dec_obj42=litem_155->item;
                                                        litem_155->item=(char*)come_increment_ref_count(item);
                                                        __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        # 153 "./neo-c.h"
                                                        self->tail=litem_155;
                                                        # 154 "./neo-c.h"
                                                        self->head=litem_155;
                                                    }
                                                    else {
                                                        # 177 "./neo-c.h"
                                                        # 156 "./neo-c.h"
                                                        if(_if_conditional195=self->len==1,                                                        _if_conditional195) {
                                                            # 157 "./neo-c.h"
                                                            litem_156=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value152=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 157, "list_item$1charph"))));
                                                            come_call_finalizer3(right_value152,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            # 159 "./neo-c.h"
                                                            litem_156->prev=self->head;
                                                            # 160 "./neo-c.h"
                                                            litem_156->next=((void*)0);
                                                            # 161 "./neo-c.h"
                                                            __dec_obj43=litem_156->item;
                                                            litem_156->item=(char*)come_increment_ref_count(item);
                                                            __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            # 163 "./neo-c.h"
                                                            self->tail=litem_156;
                                                            # 164 "./neo-c.h"
                                                            self->head->next=litem_156;
                                                        }
                                                        else {
                                                            # 167 "./neo-c.h"
                                                            litem_157=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value153=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 167, "list_item$1charph"))));
                                                            come_call_finalizer3(right_value153,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            # 169 "./neo-c.h"
                                                            litem_157->prev=self->tail;
                                                            # 170 "./neo-c.h"
                                                            litem_157->next=((void*)0);
                                                            # 171 "./neo-c.h"
                                                            __dec_obj44=litem_157->item;
                                                            litem_157->item=(char*)come_increment_ref_count(item);
                                                            __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            # 173 "./neo-c.h"
                                                            self->tail->next=litem_157;
                                                            # 174 "./neo-c.h"
                                                            self->tail=litem_157;
                                                        }
                                                    }
                                                    # 177 "./neo-c.h"
                                                    self->len++;
                                                    # 179 "./neo-c.h"
                                                    __result123__ = __result_obj__ = self;
                                                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                    return __result123__;
                                                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_158;
_Bool _while_condtional29;
struct list_item$1charph* prev_it_159;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_158, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_159, 0, sizeof(struct list_item$1charph*));
                                            # 114 "./neo-c.h"
                                            it_158=self->head;
                                            # 120 "./neo-c.h"
                                            while(_while_condtional29=it_158!=((void*)0),                                            _while_condtional29) {
                                                # 116 "./neo-c.h"
                                                prev_it_159=it_158;
                                                # 117 "./neo-c.h"
                                                it_158=it_158->next;
                                                # 118 "./neo-c.h"
                                                come_call_finalizer3(prev_it_159,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional197;
struct tuple1$1sTypeph* __result125__;
void* right_value156;
struct tuple1$1sTypeph* result_160;
_Bool _if_conditional198;
void* right_value157;
struct sType* __dec_obj46;
struct tuple1$1sTypeph* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value156 = (void*)0;
memset(&result_160, 0, sizeof(struct tuple1$1sTypeph*));
right_value157 = (void*)0;
                                            # 3 "tuple1$1sTypephp_clone"
                                            # 2 "tuple1$1sTypephp_clone"
                                            if(_if_conditional197=self==(void*)0,                                            _if_conditional197) {
                                                # 2 "tuple1$1sTypephp_clone"
                                                __result125__ = __result_obj__ = (void*)0;
                                                return __result125__;
                                            }
                                            # 3 "tuple1$1sTypephp_clone"
                                            result_160=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value156=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                                            come_call_finalizer3(right_value156,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                                            # 5 "tuple1$1sTypephp_clone"
                                            # 4 "tuple1$1sTypephp_clone"
                                            if(_if_conditional198=self!=((void*)0)&&self->v1!=((void*)0),                                            _if_conditional198) {
                                                # 4 "tuple1$1sTypephp_clone"
                                                __dec_obj46=result_160->v1;
                                                result_160->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value157=sType_clone(self->v1))));
                                                come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                come_call_finalizer3(right_value157,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                            }
                                            # 5 "tuple1$1sTypephp_clone"
                                            __result126__ = __result_obj__ = result_160;
                                            come_call_finalizer3(result_160,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result126__;
                                            come_call_finalizer3(result_160,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_161;
_Bool _while_condtional30;
struct list_item$1tuple2$2charphsTypephph* prev_it_162;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_161, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_162, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                    # 114 "./neo-c.h"
                    it_161=self->head;
                    # 120 "./neo-c.h"
                    while(_while_condtional30=it_161!=((void*)0),                    _while_condtional30) {
                        # 116 "./neo-c.h"
                        prev_it_162=it_161;
                        # 117 "./neo-c.h"
                        it_161=it_161->next;
                        # 118 "./neo-c.h"
                        come_call_finalizer3(prev_it_162,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional247;
void* right_value173;
struct list_item$1tuple2$2charphsNodephph* litem_167;
struct tuple2$2charphsNodeph* __dec_obj57;
_Bool _if_conditional248;
void* right_value174;
struct list_item$1tuple2$2charphsNodephph* litem_168;
struct tuple2$2charphsNodeph* __dec_obj58;
void* right_value175;
struct list_item$1tuple2$2charphsNodephph* litem_169;
struct tuple2$2charphsNodeph* __dec_obj59;
struct list$1tuple2$2charphsNodephph* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
right_value173 = (void*)0;
memset(&litem_167, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value174 = (void*)0;
memset(&litem_168, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value175 = (void*)0;
memset(&litem_169, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                    # 247 "./neo-c.h"
                    # 216 "./neo-c.h"
                    if(_if_conditional247=self->len==0,                    _if_conditional247) {
                        # 217 "./neo-c.h"
                        litem_167=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value173=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 217, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer3(right_value173,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 219 "./neo-c.h"
                        litem_167->prev=((void*)0);
                        # 220 "./neo-c.h"
                        litem_167->next=((void*)0);
                        # 221 "./neo-c.h"
                        __dec_obj57=litem_167->item;
                        litem_167->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj57,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                        # 223 "./neo-c.h"
                        self->tail=litem_167;
                        # 224 "./neo-c.h"
                        self->head=litem_167;
                    }
                    else {
                        # 247 "./neo-c.h"
                        # 226 "./neo-c.h"
                        if(_if_conditional248=self->len==1,                        _if_conditional248) {
                            # 227 "./neo-c.h"
                            litem_168=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value174=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 227, "list_item$1tuple2$2charphsNodephph"))));
                            come_call_finalizer3(right_value174,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 229 "./neo-c.h"
                            litem_168->prev=self->head;
                            # 230 "./neo-c.h"
                            litem_168->next=((void*)0);
                            # 231 "./neo-c.h"
                            __dec_obj58=litem_168->item;
                            litem_168->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj58,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                            # 233 "./neo-c.h"
                            self->tail=litem_168;
                            # 234 "./neo-c.h"
                            self->head->next=litem_168;
                        }
                        else {
                            # 237 "./neo-c.h"
                            litem_169=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value175=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 237, "list_item$1tuple2$2charphsNodephph"))));
                            come_call_finalizer3(right_value175,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 239 "./neo-c.h"
                            litem_169->prev=self->tail;
                            # 240 "./neo-c.h"
                            litem_169->next=((void*)0);
                            # 241 "./neo-c.h"
                            __dec_obj59=litem_169->item;
                            litem_169->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj59,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                            # 243 "./neo-c.h"
                            self->tail->next=litem_169;
                            # 244 "./neo-c.h"
                            self->tail=litem_169;
                        }
                    }
                    # 247 "./neo-c.h"
                    self->len++;
                    # 249 "./neo-c.h"
                    __result131__ = __result_obj__ = self;
                    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result131__;
                    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__;
char* __dec_obj60;
struct sNode* __dec_obj61;
struct tuple2$2charphsNodeph* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1738 "./neo-c.h"
                    __dec_obj60=self->v1;
                    self->v1=(char*)come_increment_ref_count(v1);
                    __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
                    # 1739 "./neo-c.h"
                    __dec_obj61=self->v2;
                    self->v2=(struct sNode*)come_increment_ref_count(v2);
                    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); }
                    # 1741 "./neo-c.h"
                    __result132__ = __result_obj__ = self;
                    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
                    return __result132__;
                    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional263;
char* source_head_171;
_Bool output_172;
char* type_name_173;
_Bool _if_conditional264;
void* right_value188;
char* __dec_obj66;
_Bool _if_conditional265;
void* right_value189;
char* __dec_obj67;
void* right_value190;
void* right_value191;
int __exception_result_var_b2;
void* right_value192;
void* right_value193;
struct list$1tuple2$2charphsNodephph* elements_174;
_Bool _while_condtional32;
void* right_value194;
char* element_name_175;
_Bool _if_conditional266;
_Bool no_comma_176;
void* right_value195;
struct sNode* element_value_177;
void* right_value196;
void* right_value197;
void* right_value198;
void* right_value199;
_Bool _if_conditional267;
_Bool _if_conditional268;
char* source_tail_178;
void* right_value200;
void* right_value201;
struct buffer* header_179;
void* right_value202;
void* right_value203;
void* right_value204;
struct sNode* _inf_value2;
struct sEnumNode* _inf_obj_value2;
void* right_value210;
struct sNode* __result138__;
void* right_value211;
struct sNode* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&source_head_171, 0, sizeof(char*));
memset(&output_172, 0, sizeof(_Bool));
memset(&type_name_173, 0, sizeof(char*));
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
right_value193 = (void*)0;
memset(&elements_174, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
right_value194 = (void*)0;
memset(&element_name_175, 0, sizeof(char*));
memset(&no_comma_176, 0, sizeof(_Bool));
right_value195 = (void*)0;
memset(&element_value_177, 0, sizeof(struct sNode*));
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
memset(&source_tail_178, 0, sizeof(char*));
right_value200 = (void*)0;
right_value201 = (void*)0;
memset(&header_179, 0, sizeof(struct buffer*));
right_value202 = (void*)0;
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value210 = (void*)0;
right_value211 = (void*)0;
    # 247 "16enum.c"
    # 176 "16enum.c"
    if(_if_conditional263=charp_operator_equals(buf,"enum"),    _if_conditional263) {
        # 177 "16enum.c"
        source_head_171=info->p;
        # 179 "16enum.c"
        output_172=(_Bool)1;
        # 181 "16enum.c"
        type_name_173=((void*)0);
        # 197 "16enum.c"
        # 182 "16enum.c"
        if(_if_conditional264=*info->p==123,        _if_conditional264) {
            # 183 "16enum.c"
            __dec_obj66=type_name_173;
            type_name_173=(char*)come_increment_ref_count(((char*)(right_value188=__builtin_string(""))));
            __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 192 "16enum.c"
            # 186 "16enum.c"
            if(_if_conditional265=map$2charphsClassph_at(info->classes,type_name_173,((void*)0))==((void*)0),            _if_conditional265) {
            }
            else {
                # 189 "16enum.c"
                output_172=(_Bool)0;
            }
            # 192 "16enum.c"
            __dec_obj67=type_name_173;
            type_name_173=(char*)come_increment_ref_count(((char*)(right_value189=parse_word(info))));
            __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 194 "16enum.c"
            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_173),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value191=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value190=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "16enum.c", 194, "sClass")))),type_name_173,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)1,info)))));
            come_call_finalizer3(right_value190,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value191,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 197 "16enum.c"
        (come_push_stackframe("16enum.c", 197, 1),__exception_result_var_b2=expected_next_character(123,info), come_pop_stackframe(), __exception_result_var_b2);
        # 199 "16enum.c"
        elements_174=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value193=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value192=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "16enum.c", 199, "list$1tuple2$2charphsNodephph"))))))));
        come_call_finalizer3(right_value192,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value193,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 236 "16enum.c"
        while(_while_condtional32=(_Bool)1,        _while_condtional32) {
            # 202 "16enum.c"
            parse_sharp_v5(info);
            # 203 "16enum.c"
            element_name_175=(char*)come_increment_ref_count(((char*)(right_value194=parse_word(info))));
            right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 204 "16enum.c"
            parse_sharp_v5(info);
            # 221 "16enum.c"
            # 206 "16enum.c"
            if(_if_conditional266=*info->p==61,            _if_conditional266) {
                # 207 "16enum.c"
                info->p++;
                # 208 "16enum.c"
                skip_spaces_and_lf(info);
                # 210 "16enum.c"
                no_comma_176=info->no_comma;
                # 211 "16enum.c"
                info->no_comma=(_Bool)1;
                # 212 "16enum.c"
                element_value_177=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value195=expression_v13(info))));
                if(right_value195) { right_value195 = come_decrement_ref_count2(right_value195, ((struct sNode*)right_value195)->finalize, ((struct sNode*)right_value195)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 214 "16enum.c"
                info->no_comma=no_comma_176;
                # 216 "16enum.c"
                list$1tuple2$2charphsNodephph_push_back(elements_174,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value197=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value196=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "16enum.c", 216, "tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(element_name_175),(struct sNode*)come_increment_ref_count(element_value_177))))));
                come_call_finalizer3(right_value196,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value197,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                if(element_value_177) { element_value_177 = come_decrement_ref_count2(element_value_177, ((struct sNode*)element_value_177)->finalize, ((struct sNode*)element_value_177)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 219 "16enum.c"
                list$1tuple2$2charphsNodephph_push_back(elements_174,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value199=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value198=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "16enum.c", 219, "tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(element_name_175),((void*)0))))));
                come_call_finalizer3(right_value198,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value199,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 221 "16enum.c"
            parse_sharp_v5(info);
            # 227 "16enum.c"
            # 223 "16enum.c"
            if(_if_conditional267=*info->p==44,            _if_conditional267) {
                # 224 "16enum.c"
                info->p++;
                # 225 "16enum.c"
                skip_spaces_and_lf(info);
            }
            # 227 "16enum.c"
            parse_sharp_v5(info);
            # 234 "16enum.c"
            # 229 "16enum.c"
            if(_if_conditional268=*info->p==125,            _if_conditional268) {
                # 230 "16enum.c"
                info->p++;
                # 231 "16enum.c"
                skip_spaces_and_lf(info);
                # 232 "16enum.c"
                element_name_175 = come_decrement_ref_count2(element_name_175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            element_name_175 = come_decrement_ref_count2(element_name_175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 236 "16enum.c"
        source_tail_178=info->p;
        # 238 "16enum.c"
        header_179=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value201=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value200=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "16enum.c", 238, "buffer"))))))));
        come_call_finalizer3(right_value200,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value201,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 239 "16enum.c"
        buffer_append_str(header_179,"enum ");
        # 240 "16enum.c"
        buffer_append(header_179,source_head_171,source_tail_178-source_head_171);
        # 242 "16enum.c"
        add_come_code_at_come_header(info,"%s;\n",((char*)(right_value202=buffer_to_string(header_179))));
        right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 244 "16enum.c"
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "16enum.c", 244, "struct sNode");
        _inf_obj_value2=come_increment_ref_count(((struct sEnumNode*)(right_value204=sEnumNode_initialize((struct sEnumNode*)come_increment_ref_count(((struct sEnumNode*)(right_value203=(struct sEnumNode*)come_calloc(1, sizeof(struct sEnumNode)*(1), "16enum.c", 244, "sEnumNode")))),(char*)come_increment_ref_count(type_name_173),elements_174,output_172,info))));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=(void*)sEnumNode_finalize;
        _inf_value2->clone=(void*)sEnumNode_clone;
        _inf_value2->compile=(void*)sEnumNode_compile;
        _inf_value2->sline=(void*)sNodeBase_sline;
        _inf_value2->sname=(void*)sNodeBase_sname;
        _inf_value2->terminated=(void*)sEnumNode_terminated;
        _inf_value2->kind=(void*)sEnumNode_kind;
        __result138__ = __result_obj__ = ((struct sNode*)(right_value210=_inf_value2));
        type_name_173 = come_decrement_ref_count2(type_name_173, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(elements_174,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_179,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value203,sEnumNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value204,sEnumNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value210) { right_value210 = come_decrement_ref_count2(right_value210, ((struct sNode*)right_value210)->finalize, ((struct sNode*)right_value210)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result138__;
        type_name_173 = come_decrement_ref_count2(type_name_173, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(elements_174,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_179,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 247 "16enum.c"
    __result139__ = __result_obj__ = ((struct sNode*)(right_value211=top_level_v95(buf,head,head_sline,info)));
    if(right_value211) { right_value211 = come_decrement_ref_count2(right_value211, ((struct sNode*)right_value211)->finalize, ((struct sNode*)right_value211)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result139__;
}

static void sEnumNode_finalize(struct sEnumNode* self){
void* __result_obj__;
_Bool _if_conditional269;
_Bool _if_conditional270;
_Bool _if_conditional271;
_Bool _if_conditional272;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sEnumNode_finalize"
            # 0 "sEnumNode_finalize"
            if(_if_conditional269=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional269) {
                # 0 "sEnumNode_finalize"
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 2 "sEnumNode_finalize"
            # 1 "sEnumNode_finalize"
            if(_if_conditional270=self!=((void*)0)&&self->mTypeName!=((void*)0),            _if_conditional270) {
                # 1 "sEnumNode_finalize"
                self->mTypeName = come_decrement_ref_count2(self->mTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 3 "sEnumNode_finalize"
            # 2 "sEnumNode_finalize"
            if(_if_conditional271=self!=((void*)0)&&self->mElements!=((void*)0),            _if_conditional271) {
                # 2 "sEnumNode_finalize"
                come_call_finalizer3(self->mElements,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 4 "sEnumNode_finalize"
            # 3 "sEnumNode_finalize"
            if(_if_conditional272=self!=((void*)0)&&self->mDeclareSName!=((void*)0),            _if_conditional272) {
                # 3 "sEnumNode_finalize"
                self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sEnumNode* sEnumNode_clone(struct sEnumNode* self){
void* __result_obj__;
_Bool _if_conditional273;
struct sEnumNode* __result136__;
void* right_value205;
struct sEnumNode* result_180;
_Bool _if_conditional274;
_Bool _if_conditional275;
void* right_value206;
char* __dec_obj68;
_Bool _if_conditional276;
void* right_value207;
char* __dec_obj69;
_Bool _if_conditional277;
void* right_value208;
struct list$1tuple2$2charphsNodephph* __dec_obj70;
_Bool _if_conditional278;
_Bool _if_conditional279;
void* right_value209;
char* __dec_obj71;
struct sEnumNode* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
right_value205 = (void*)0;
memset(&result_180, 0, sizeof(struct sEnumNode*));
right_value206 = (void*)0;
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
            # 3 "sEnumNode_clone"
            # 2 "sEnumNode_clone"
            if(_if_conditional273=self==(void*)0,            _if_conditional273) {
                # 2 "sEnumNode_clone"
                __result136__ = __result_obj__ = (void*)0;
                return __result136__;
            }
            # 3 "sEnumNode_clone"
            result_180=(struct sEnumNode*)come_increment_ref_count(((struct sEnumNode*)(right_value205=(struct sEnumNode*)come_calloc(1, sizeof(struct sEnumNode)*(1), "sEnumNode_clone", 3, "sEnumNode"))));
            come_call_finalizer3(right_value205,sEnumNode_finalize, 0, 1, 0, 0, __result_obj__);
            # 5 "sEnumNode_clone"
            # 4 "sEnumNode_clone"
            if(_if_conditional274=self!=((void*)0),            _if_conditional274) {
                # 4 "sEnumNode_clone"
                result_180->sline=self->sline;
            }
            # 6 "sEnumNode_clone"
            # 5 "sEnumNode_clone"
            if(_if_conditional275=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional275) {
                # 5 "sEnumNode_clone"
                __dec_obj68=result_180->sname;
                result_180->sname=(char*)come_increment_ref_count(((char*)(right_value206=string_clone(self->sname))));
                __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 7 "sEnumNode_clone"
            # 6 "sEnumNode_clone"
            if(_if_conditional276=self!=((void*)0)&&self->mTypeName!=((void*)0),            _if_conditional276) {
                # 6 "sEnumNode_clone"
                __dec_obj69=result_180->mTypeName;
                result_180->mTypeName=(char*)come_increment_ref_count(((char*)(right_value207=string_clone(self->mTypeName))));
                __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 8 "sEnumNode_clone"
            # 7 "sEnumNode_clone"
            if(_if_conditional277=self!=((void*)0)&&self->mElements!=((void*)0),            _if_conditional277) {
                # 7 "sEnumNode_clone"
                __dec_obj70=result_180->mElements;
                result_180->mElements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value208=list$1tuple2$2charphsNodephphp_clone(self->mElements))));
                come_call_finalizer3(__dec_obj70,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value208,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 9 "sEnumNode_clone"
            # 8 "sEnumNode_clone"
            if(_if_conditional278=self!=((void*)0),            _if_conditional278) {
                # 8 "sEnumNode_clone"
                result_180->mOutput=self->mOutput;
            }
            # 10 "sEnumNode_clone"
            # 9 "sEnumNode_clone"
            if(_if_conditional279=self!=((void*)0)&&self->mDeclareSName!=((void*)0),            _if_conditional279) {
                # 9 "sEnumNode_clone"
                __dec_obj71=result_180->mDeclareSName;
                result_180->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value209=string_clone(self->mDeclareSName))));
                __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 10 "sEnumNode_clone"
            __result137__ = __result_obj__ = result_180;
            come_call_finalizer3(result_180,sEnumNode_finalize, 0, 0, 1, 0, (void*)0);
            return __result137__;
            come_call_finalizer3(result_180,sEnumNode_finalize, 0, 0, 0, 0, (void*)0);
}

