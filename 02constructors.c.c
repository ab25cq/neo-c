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

// uniq global variable
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
void* right_value0;
void* right_value1;
struct buffer* __exception_result_var_b1;
struct buffer* result_0;
struct buffer* __exception_result_var_b2;
struct buffer* __result2__;
memset(&__result_obj__, 0, sizeof(void*));
right_value0 = (void*)0;
right_value1 = (void*)0;
memset(&result_0, 0, sizeof(struct buffer*));
    result_0=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 1903, 4),__exception_result_var_b1=((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1903, "buffer"))), "./neo-c.h", 1903, 3)))))), come_pop_stackframe(), __exception_result_var_b1));
    come_call_finalizer3(right_value0,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value1,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("./neo-c.h", 1904, 7),__exception_result_var_b2=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_0, "./neo-c.h", 1904, 5)), "./neo-c.h", 1904, 6)),self,sizeof(char)*len), come_pop_stackframe(), __exception_result_var_b2);
    __result2__ = __result_obj__ = result_0;
    come_call_finalizer3(result_0,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result2__;
    come_call_finalizer3(result_0,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* shortpa_to_buffer(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value2;
void* right_value3;
struct buffer* __exception_result_var_b3;
struct buffer* result_1;
struct buffer* __exception_result_var_b4;
struct buffer* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
right_value2 = (void*)0;
right_value3 = (void*)0;
memset(&result_1, 0, sizeof(struct buffer*));
    result_1=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 1910, 9),__exception_result_var_b3=((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1910, "buffer"))), "./neo-c.h", 1910, 8)))))), come_pop_stackframe(), __exception_result_var_b3));
    come_call_finalizer3(right_value2,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value3,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("./neo-c.h", 1911, 12),__exception_result_var_b4=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_1, "./neo-c.h", 1911, 10)), "./neo-c.h", 1911, 11)),(char*)self,sizeof(short short)*len), come_pop_stackframe(), __exception_result_var_b4);
    __result3__ = __result_obj__ = result_1;
    come_call_finalizer3(result_1,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result3__;
    come_call_finalizer3(result_1,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long int len){
void* __result_obj__;
void* right_value4;
void* right_value5;
struct buffer* __exception_result_var_b5;
struct buffer* result_2;
struct buffer* __exception_result_var_b6;
struct buffer* __result4__;
memset(&__result_obj__, 0, sizeof(void*));
right_value4 = (void*)0;
right_value5 = (void*)0;
memset(&result_2, 0, sizeof(struct buffer*));
    result_2=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 1917, 14),__exception_result_var_b5=((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1917, "buffer"))), "./neo-c.h", 1917, 13)))))), come_pop_stackframe(), __exception_result_var_b5));
    come_call_finalizer3(right_value4,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value5,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("./neo-c.h", 1918, 17),__exception_result_var_b6=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_2, "./neo-c.h", 1918, 15)), "./neo-c.h", 1918, 16)),(char*)self,sizeof(int)*len), come_pop_stackframe(), __exception_result_var_b6);
    __result4__ = __result_obj__ = result_2;
    come_call_finalizer3(result_2,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result4__;
    come_call_finalizer3(result_2,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long int len){
void* __result_obj__;
void* right_value6;
void* right_value7;
struct buffer* __exception_result_var_b7;
struct buffer* result_3;
struct buffer* __exception_result_var_b8;
struct buffer* __result5__;
memset(&__result_obj__, 0, sizeof(void*));
right_value6 = (void*)0;
right_value7 = (void*)0;
memset(&result_3, 0, sizeof(struct buffer*));
    result_3=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 1924, 19),__exception_result_var_b7=((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1924, "buffer"))), "./neo-c.h", 1924, 18)))))), come_pop_stackframe(), __exception_result_var_b7));
    come_call_finalizer3(right_value6,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value7,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("./neo-c.h", 1925, 22),__exception_result_var_b8=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_3, "./neo-c.h", 1925, 20)), "./neo-c.h", 1925, 21)),(char*)self,sizeof(long)*len), come_pop_stackframe(), __exception_result_var_b8);
    __result5__ = __result_obj__ = result_3;
    come_call_finalizer3(result_3,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result5__;
    come_call_finalizer3(result_3,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long int len){
void* __result_obj__;
void* right_value8;
void* right_value9;
struct buffer* __exception_result_var_b9;
struct buffer* result_4;
struct buffer* __exception_result_var_b10;
struct buffer* __result6__;
memset(&__result_obj__, 0, sizeof(void*));
right_value8 = (void*)0;
right_value9 = (void*)0;
memset(&result_4, 0, sizeof(struct buffer*));
    result_4=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 1931, 24),__exception_result_var_b9=((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1931, "buffer"))), "./neo-c.h", 1931, 23)))))), come_pop_stackframe(), __exception_result_var_b9));
    come_call_finalizer3(right_value8,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value9,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("./neo-c.h", 1932, 27),__exception_result_var_b10=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_4, "./neo-c.h", 1932, 25)), "./neo-c.h", 1932, 26)),(char*)self,sizeof(float)*len), come_pop_stackframe(), __exception_result_var_b10);
    __result6__ = __result_obj__ = result_4;
    come_call_finalizer3(result_4,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result6__;
    come_call_finalizer3(result_4,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long int len){
void* __result_obj__;
void* right_value10;
void* right_value11;
struct buffer* __exception_result_var_b11;
struct buffer* result_5;
struct buffer* __exception_result_var_b12;
struct buffer* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
right_value11 = (void*)0;
memset(&result_5, 0, sizeof(struct buffer*));
    result_5=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 1938, 29),__exception_result_var_b11=((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1938, "buffer"))), "./neo-c.h", 1938, 28)))))), come_pop_stackframe(), __exception_result_var_b11));
    come_call_finalizer3(right_value10,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value11,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("./neo-c.h", 1939, 32),__exception_result_var_b12=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_5, "./neo-c.h", 1939, 30)), "./neo-c.h", 1939, 31)),(char*)self,sizeof(double)*len), come_pop_stackframe(), __exception_result_var_b12);
    __result7__ = __result_obj__ = result_5;
    come_call_finalizer3(result_5,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result7__;
    come_call_finalizer3(result_5,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__;
void* right_value12;
struct smart_pointer$1char* result_6;
struct buffer* __exception_result_var_b13;
void* right_value13;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
right_value12 = (void*)0;
memset(&result_6, 0, sizeof(struct smart_pointer$1char*));
right_value13 = (void*)0;
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1954, "smart_pointer$1char"))));
    come_call_finalizer3(right_value12,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj1=((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_6, "./neo-c.h", 1956, 37)), "./neo-c.h", 1956, 38))->memory;
    ((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_6, "./neo-c.h", 1956, 37)), "./neo-c.h", 1956, 38))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=(come_push_stackframe("./neo-c.h", 1956, 39),__exception_result_var_b13=buffer_clone(self), come_pop_stackframe(), __exception_result_var_b13))));
    come_call_finalizer3(__dec_obj1,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value13,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_6, "./neo-c.h", 1957, 40)), "./neo-c.h", 1957, 41))->p=((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_6, "./neo-c.h", 1957, 42)), "./neo-c.h", 1957, 43))->memory, "./neo-c.h", 1957, 44)), "./neo-c.h", 1957, 45))->buf;
    __result8__ = __result_obj__ = result_6;
    come_call_finalizer3(result_6,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result8__;
    come_call_finalizer3(result_6,smart_pointer$1charp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__;
void* right_value14;
struct smart_pointer$1char* result_7;
struct buffer* __exception_result_var_b14;
void* right_value15;
struct buffer* __dec_obj2;
struct smart_pointer$1char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
right_value14 = (void*)0;
memset(&result_7, 0, sizeof(struct smart_pointer$1char*));
right_value15 = (void*)0;
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1964, "smart_pointer$1char"))));
    come_call_finalizer3(right_value14,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj2=((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_7, "./neo-c.h", 1966, 46)), "./neo-c.h", 1966, 47))->memory;
    ((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_7, "./neo-c.h", 1966, 46)), "./neo-c.h", 1966, 47))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=(come_push_stackframe("./neo-c.h", 1966, 48),__exception_result_var_b14=buffer_clone(self), come_pop_stackframe(), __exception_result_var_b14))));
    come_call_finalizer3(__dec_obj2,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value15,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_7, "./neo-c.h", 1967, 49)), "./neo-c.h", 1967, 50))->p=(char*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_7, "./neo-c.h", 1967, 51)), "./neo-c.h", 1967, 52))->memory, "./neo-c.h", 1967, 53)), "./neo-c.h", 1967, 54))->buf;
    __result9__ = __result_obj__ = result_7;
    come_call_finalizer3(result_7,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result9__;
    come_call_finalizer3(result_7,smart_pointer$1charp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__;
void* right_value16;
struct smart_pointer$1short* result_8;
struct buffer* __exception_result_var_b15;
void* right_value17;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
right_value16 = (void*)0;
memset(&result_8, 0, sizeof(struct smart_pointer$1short*));
right_value17 = (void*)0;
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 1974, "smart_pointer$1short"))));
    come_call_finalizer3(right_value16,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj3=((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(result_8, "./neo-c.h", 1976, 59)), "./neo-c.h", 1976, 60))->memory;
    ((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(result_8, "./neo-c.h", 1976, 59)), "./neo-c.h", 1976, 60))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value17=(come_push_stackframe("./neo-c.h", 1976, 61),__exception_result_var_b15=buffer_clone(self), come_pop_stackframe(), __exception_result_var_b15))));
    come_call_finalizer3(__dec_obj3,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value17,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(result_8, "./neo-c.h", 1977, 62)), "./neo-c.h", 1977, 63))->p=(short short*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(result_8, "./neo-c.h", 1977, 64)), "./neo-c.h", 1977, 65))->memory, "./neo-c.h", 1977, 66)), "./neo-c.h", 1977, 67))->buf;
    __result10__ = __result_obj__ = result_8;
    come_call_finalizer3(result_8,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    return __result10__;
    come_call_finalizer3(result_8,smart_pointer$1shortp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__;
void* right_value18;
struct smart_pointer$1int* result_9;
struct buffer* __exception_result_var_b16;
void* right_value19;
struct buffer* __dec_obj4;
struct smart_pointer$1int* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
right_value18 = (void*)0;
memset(&result_9, 0, sizeof(struct smart_pointer$1int*));
right_value19 = (void*)0;
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 1984, "smart_pointer$1int"))));
    come_call_finalizer3(right_value18,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj4=((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(result_9, "./neo-c.h", 1986, 72)), "./neo-c.h", 1986, 73))->memory;
    ((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(result_9, "./neo-c.h", 1986, 72)), "./neo-c.h", 1986, 73))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=(come_push_stackframe("./neo-c.h", 1986, 74),__exception_result_var_b16=buffer_clone(self), come_pop_stackframe(), __exception_result_var_b16))));
    come_call_finalizer3(__dec_obj4,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value19,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(result_9, "./neo-c.h", 1987, 75)), "./neo-c.h", 1987, 76))->p=(int*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(result_9, "./neo-c.h", 1987, 77)), "./neo-c.h", 1987, 78))->memory, "./neo-c.h", 1987, 79)), "./neo-c.h", 1987, 80))->buf;
    __result11__ = __result_obj__ = result_9;
    come_call_finalizer3(result_9,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    return __result11__;
    come_call_finalizer3(result_9,smart_pointer$1intp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__;
void* right_value20;
struct smart_pointer$1long* result_10;
struct buffer* __exception_result_var_b17;
void* right_value21;
struct buffer* __dec_obj5;
struct smart_pointer$1long* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
right_value20 = (void*)0;
memset(&result_10, 0, sizeof(struct smart_pointer$1long*));
right_value21 = (void*)0;
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 1994, "smart_pointer$1long"))));
    come_call_finalizer3(right_value20,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj5=((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(result_10, "./neo-c.h", 1996, 85)), "./neo-c.h", 1996, 86))->memory;
    ((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(result_10, "./neo-c.h", 1996, 85)), "./neo-c.h", 1996, 86))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value21=(come_push_stackframe("./neo-c.h", 1996, 87),__exception_result_var_b17=buffer_clone(self), come_pop_stackframe(), __exception_result_var_b17))));
    come_call_finalizer3(__dec_obj5,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value21,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(result_10, "./neo-c.h", 1997, 88)), "./neo-c.h", 1997, 89))->p=(long*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(result_10, "./neo-c.h", 1997, 90)), "./neo-c.h", 1997, 91))->memory, "./neo-c.h", 1997, 92)), "./neo-c.h", 1997, 93))->buf;
    __result12__ = __result_obj__ = result_10;
    come_call_finalizer3(result_10,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    return __result12__;
    come_call_finalizer3(result_10,smart_pointer$1longp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long int len){
void* __result_obj__;
void* right_value22;
void* right_value25;
struct smart_pointer$1char* __exception_result_var_b20;
struct smart_pointer$1char* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
right_value22 = (void*)0;
right_value25 = (void*)0;
    __result14__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2165, 110),__exception_result_var_b20=((struct smart_pointer$1char*)(right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)(right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2165, "smart_pointer$1char"))), "./neo-c.h", 2165, 94))),self,len))), come_pop_stackframe(), __exception_result_var_b20);
    come_call_finalizer3(right_value22,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value25,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result14__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value26;
void* right_value29;
struct smart_pointer$1short* __exception_result_var_b23;
struct smart_pointer$1short* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
right_value26 = (void*)0;
right_value29 = (void*)0;
    __result16__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2170, 127),__exception_result_var_b23=((struct smart_pointer$1short*)(right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)(right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2170, "smart_pointer$1short"))), "./neo-c.h", 2170, 111))),self,len))), come_pop_stackframe(), __exception_result_var_b23);
    come_call_finalizer3(right_value26,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value29,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result16__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long int len){
void* __result_obj__;
void* right_value30;
void* right_value33;
struct smart_pointer$1int* __exception_result_var_b26;
struct smart_pointer$1int* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
right_value30 = (void*)0;
right_value33 = (void*)0;
    __result18__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2175, 144),__exception_result_var_b26=((struct smart_pointer$1int*)(right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)(right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2175, "smart_pointer$1int"))), "./neo-c.h", 2175, 128))),self,len))), come_pop_stackframe(), __exception_result_var_b26);
    come_call_finalizer3(right_value30,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value33,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result18__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long int len){
void* __result_obj__;
void* right_value34;
void* right_value37;
struct smart_pointer$1long* __exception_result_var_b29;
struct smart_pointer$1long* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
right_value34 = (void*)0;
right_value37 = (void*)0;
    __result20__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2180, 161),__exception_result_var_b29=((struct smart_pointer$1long*)(right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)(right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2180, "smart_pointer$1long"))), "./neo-c.h", 2180, 145))),self,len))), come_pop_stackframe(), __exception_result_var_b29);
    come_call_finalizer3(right_value34,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value37,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result20__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long int len){
void* __result_obj__;
void* right_value38;
void* right_value41;
struct smart_pointer$1float* __exception_result_var_b32;
struct smart_pointer$1float* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
right_value38 = (void*)0;
right_value41 = (void*)0;
    __result22__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2185, 182),__exception_result_var_b32=((struct smart_pointer$1float*)(right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)come_null_check(((struct smart_pointer$1float*)(right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./neo-c.h", 2185, "smart_pointer$1float"))), "./neo-c.h", 2185, 162))),self,len))), come_pop_stackframe(), __exception_result_var_b32);
    come_call_finalizer3(right_value38,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value41,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result22__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long int len){
void* __result_obj__;
void* right_value42;
void* right_value45;
struct smart_pointer$1double* __exception_result_var_b35;
struct smart_pointer$1double* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
right_value42 = (void*)0;
right_value45 = (void*)0;
    __result24__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2190, 203),__exception_result_var_b35=((struct smart_pointer$1double*)(right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)come_null_check(((struct smart_pointer$1double*)(right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./neo-c.h", 2190, "smart_pointer$1double"))), "./neo-c.h", 2190, 183))),self,len))), come_pop_stackframe(), __exception_result_var_b35);
    come_call_finalizer3(right_value42,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value45,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    return __result24__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long int len){
void* __result_obj__;
void* right_value46;
void* right_value50;
struct list$1char* __exception_result_var_b37;
struct list$1char* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
right_value46 = (void*)0;
right_value50 = (void*)0;
    __result27__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2195, 264),__exception_result_var_b37=((struct list$1char*)(right_value50=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count(((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(((struct list$1char*)(right_value46=(struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./neo-c.h", 2195, "list$1char"))), "./neo-c.h", 2195, 204)), "./neo-c.h", 2195, 205))),len,self))), come_pop_stackframe(), __exception_result_var_b37);
    come_call_finalizer3(right_value46,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value50,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result27__;
}
static inline struct list$1short* shortpa_to_list(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value51;
void* right_value55;
struct list$1short* __exception_result_var_b39;
struct list$1short* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
right_value51 = (void*)0;
right_value55 = (void*)0;
    __result30__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2200, 325),__exception_result_var_b39=((struct list$1short*)(right_value55=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count(((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(((struct list$1short*)(right_value51=(struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./neo-c.h", 2200, "list$1short"))), "./neo-c.h", 2200, 265)), "./neo-c.h", 2200, 266))),len,self))), come_pop_stackframe(), __exception_result_var_b39);
    come_call_finalizer3(right_value51,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value55,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result30__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long int len){
void* __result_obj__;
void* right_value56;
void* right_value60;
struct list$1int* __exception_result_var_b41;
struct list$1int* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
right_value56 = (void*)0;
right_value60 = (void*)0;
    __result33__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2205, 386),__exception_result_var_b41=((struct list$1int*)(right_value60=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(((struct list$1int*)(right_value56=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./neo-c.h", 2205, "list$1int"))), "./neo-c.h", 2205, 326)), "./neo-c.h", 2205, 327))),len,self))), come_pop_stackframe(), __exception_result_var_b41);
    come_call_finalizer3(right_value56,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value60,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result33__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long int len){
void* __result_obj__;
void* right_value61;
void* right_value65;
struct list$1long* __exception_result_var_b43;
struct list$1long* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value61 = (void*)0;
right_value65 = (void*)0;
    __result36__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2210, 447),__exception_result_var_b43=((struct list$1long*)(right_value65=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count(((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(((struct list$1long*)(right_value61=(struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./neo-c.h", 2210, "list$1long"))), "./neo-c.h", 2210, 387)), "./neo-c.h", 2210, 388))),len,self))), come_pop_stackframe(), __exception_result_var_b43);
    come_call_finalizer3(right_value61,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value65,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result36__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long int len){
void* __result_obj__;
void* right_value66;
void* right_value70;
struct list$1float* __exception_result_var_b45;
struct list$1float* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
right_value66 = (void*)0;
right_value70 = (void*)0;
    __result39__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2215, 508),__exception_result_var_b45=((struct list$1float*)(right_value70=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count(((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(((struct list$1float*)(right_value66=(struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./neo-c.h", 2215, "list$1float"))), "./neo-c.h", 2215, 448)), "./neo-c.h", 2215, 449))),len,self))), come_pop_stackframe(), __exception_result_var_b45);
    come_call_finalizer3(right_value66,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value70,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result39__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long int len){
void* __result_obj__;
void* right_value71;
void* right_value75;
struct list$1double* __exception_result_var_b47;
struct list$1double* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
right_value71 = (void*)0;
right_value75 = (void*)0;
    __result42__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2220, 569),__exception_result_var_b47=((struct list$1double*)(right_value75=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count(((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(((struct list$1double*)(right_value71=(struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./neo-c.h", 2220, "list$1double"))), "./neo-c.h", 2220, 509)), "./neo-c.h", 2220, 510))),len,self))), come_pop_stackframe(), __exception_result_var_b47);
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
char* __exception_result_var_b48;
char* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
right_value76 = (void*)0;
    __result49__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2336, 570),__exception_result_var_b48=((char*)(right_value76=xsprintf(msg,self))), come_pop_stackframe(), __exception_result_var_b48);
    right_value76 = come_decrement_ref_count2(right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result49__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value77;
char* __exception_result_var_b49;
char* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
right_value77 = (void*)0;
    __result50__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2341, 571),__exception_result_var_b49=((char*)(right_value77=xsprintf(msg,self))), come_pop_stackframe(), __exception_result_var_b49);
    right_value77 = come_decrement_ref_count2(right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result50__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__;
void* right_value78;
char* __exception_result_var_b50;
char* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value78 = (void*)0;
    __result51__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2346, 572),__exception_result_var_b50=((char*)(right_value78=xsprintf(msg,self))), come_pop_stackframe(), __exception_result_var_b50);
    right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result51__;
}

// body function








static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
void* __result_obj__;
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional1=self!=((void*)0)&&((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(self, "smart_pointer$1charp_finalize", 0, 33)), "smart_pointer$1charp_finalize", 0, 34))->memory!=((void*)0),        _if_conditional1) {
            come_call_finalizer3(((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(self, "smart_pointer$1charp_finalize", 0, 35)), "smart_pointer$1charp_finalize", 0, 36))->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
void* __result_obj__;
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional2=self!=((void*)0)&&((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(self, "smart_pointer$1shortp_finalize", 0, 55)), "smart_pointer$1shortp_finalize", 0, 56))->memory!=((void*)0),        _if_conditional2) {
            come_call_finalizer3(((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(self, "smart_pointer$1shortp_finalize", 0, 57)), "smart_pointer$1shortp_finalize", 0, 58))->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
void* __result_obj__;
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional3=self!=((void*)0)&&((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(self, "smart_pointer$1intp_finalize", 0, 68)), "smart_pointer$1intp_finalize", 0, 69))->memory!=((void*)0),        _if_conditional3) {
            come_call_finalizer3(((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(self, "smart_pointer$1intp_finalize", 0, 70)), "smart_pointer$1intp_finalize", 0, 71))->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
void* __result_obj__;
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional4=self!=((void*)0)&&((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(self, "smart_pointer$1longp_finalize", 0, 81)), "smart_pointer$1longp_finalize", 0, 82))->memory!=((void*)0),        _if_conditional4) {
            come_call_finalizer3(((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(self, "smart_pointer$1longp_finalize", 0, 83)), "smart_pointer$1longp_finalize", 0, 84))->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}


static struct smart_pointer$1char* smart_pointer$1char_initialize(struct smart_pointer$1char* self, void* memory, int size){
void* __result_obj__;
void* right_value23;
void* right_value24;
struct buffer* __exception_result_var_b18;
struct buffer* __dec_obj6;
struct buffer* __exception_result_var_b19;
struct smart_pointer$1char* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
right_value23 = (void*)0;
right_value24 = (void*)0;
        __dec_obj6=((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(self, "./neo-c.h", 2006, 95)), "./neo-c.h", 2006, 96))->memory;
        ((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(self, "./neo-c.h", 2006, 95)), "./neo-c.h", 2006, 96))->memory=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 2006, 98),__exception_result_var_b18=((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))), "./neo-c.h", 2006, 97)))))), come_pop_stackframe(), __exception_result_var_b18));
        come_call_finalizer3(__dec_obj6,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value23,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value24,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("./neo-c.h", 2008, 103),__exception_result_var_b19=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(self, "./neo-c.h", 2008, 99)), "./neo-c.h", 2008, 100))->memory, "./neo-c.h", 2008, 101)), "./neo-c.h", 2008, 102)),memory,sizeof(char)*size), come_pop_stackframe(), __exception_result_var_b19);
        ((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(self, "./neo-c.h", 2010, 104)), "./neo-c.h", 2010, 105))->p=(char*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(self, "./neo-c.h", 2010, 106)), "./neo-c.h", 2010, 107))->memory, "./neo-c.h", 2010, 108)), "./neo-c.h", 2010, 109))->buf;
        __result13__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
        return __result13__;
        come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size){
void* __result_obj__;
void* right_value27;
void* right_value28;
struct buffer* __exception_result_var_b21;
struct buffer* __dec_obj7;
struct buffer* __exception_result_var_b22;
struct smart_pointer$1short* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
right_value27 = (void*)0;
right_value28 = (void*)0;
        __dec_obj7=((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(self, "./neo-c.h", 2006, 112)), "./neo-c.h", 2006, 113))->memory;
        ((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(self, "./neo-c.h", 2006, 112)), "./neo-c.h", 2006, 113))->memory=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 2006, 115),__exception_result_var_b21=((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))), "./neo-c.h", 2006, 114)))))), come_pop_stackframe(), __exception_result_var_b21));
        come_call_finalizer3(__dec_obj7,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value27,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value28,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("./neo-c.h", 2008, 120),__exception_result_var_b22=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(self, "./neo-c.h", 2008, 116)), "./neo-c.h", 2008, 117))->memory, "./neo-c.h", 2008, 118)), "./neo-c.h", 2008, 119)),memory,sizeof(short short)*size), come_pop_stackframe(), __exception_result_var_b22);
        ((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(self, "./neo-c.h", 2010, 121)), "./neo-c.h", 2010, 122))->p=(short short*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(self, "./neo-c.h", 2010, 123)), "./neo-c.h", 2010, 124))->memory, "./neo-c.h", 2010, 125)), "./neo-c.h", 2010, 126))->buf;
        __result15__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
        return __result15__;
        come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size){
void* __result_obj__;
void* right_value31;
void* right_value32;
struct buffer* __exception_result_var_b24;
struct buffer* __dec_obj8;
struct buffer* __exception_result_var_b25;
struct smart_pointer$1int* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
right_value31 = (void*)0;
right_value32 = (void*)0;
        __dec_obj8=((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(self, "./neo-c.h", 2006, 129)), "./neo-c.h", 2006, 130))->memory;
        ((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(self, "./neo-c.h", 2006, 129)), "./neo-c.h", 2006, 130))->memory=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 2006, 132),__exception_result_var_b24=((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))), "./neo-c.h", 2006, 131)))))), come_pop_stackframe(), __exception_result_var_b24));
        come_call_finalizer3(__dec_obj8,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value31,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value32,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("./neo-c.h", 2008, 137),__exception_result_var_b25=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(self, "./neo-c.h", 2008, 133)), "./neo-c.h", 2008, 134))->memory, "./neo-c.h", 2008, 135)), "./neo-c.h", 2008, 136)),memory,sizeof(int)*size), come_pop_stackframe(), __exception_result_var_b25);
        ((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(self, "./neo-c.h", 2010, 138)), "./neo-c.h", 2010, 139))->p=(int*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(self, "./neo-c.h", 2010, 140)), "./neo-c.h", 2010, 141))->memory, "./neo-c.h", 2010, 142)), "./neo-c.h", 2010, 143))->buf;
        __result17__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
        return __result17__;
        come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size){
void* __result_obj__;
void* right_value35;
void* right_value36;
struct buffer* __exception_result_var_b27;
struct buffer* __dec_obj9;
struct buffer* __exception_result_var_b28;
struct smart_pointer$1long* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
right_value35 = (void*)0;
right_value36 = (void*)0;
        __dec_obj9=((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(self, "./neo-c.h", 2006, 146)), "./neo-c.h", 2006, 147))->memory;
        ((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(self, "./neo-c.h", 2006, 146)), "./neo-c.h", 2006, 147))->memory=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 2006, 149),__exception_result_var_b27=((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))), "./neo-c.h", 2006, 148)))))), come_pop_stackframe(), __exception_result_var_b27));
        come_call_finalizer3(__dec_obj9,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value35,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value36,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("./neo-c.h", 2008, 154),__exception_result_var_b28=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(self, "./neo-c.h", 2008, 150)), "./neo-c.h", 2008, 151))->memory, "./neo-c.h", 2008, 152)), "./neo-c.h", 2008, 153)),memory,sizeof(long)*size), come_pop_stackframe(), __exception_result_var_b28);
        ((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(self, "./neo-c.h", 2010, 155)), "./neo-c.h", 2010, 156))->p=(long*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(self, "./neo-c.h", 2010, 157)), "./neo-c.h", 2010, 158))->memory, "./neo-c.h", 2010, 159)), "./neo-c.h", 2010, 160))->buf;
        __result19__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
        return __result19__;
        come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size){
void* __result_obj__;
void* right_value39;
void* right_value40;
struct buffer* __exception_result_var_b30;
struct buffer* __dec_obj10;
struct buffer* __exception_result_var_b31;
struct smart_pointer$1float* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
right_value39 = (void*)0;
right_value40 = (void*)0;
        __dec_obj10=((struct smart_pointer$1float*)come_null_check(((struct smart_pointer$1float*)come_null_check(self, "./neo-c.h", 2006, 163)), "./neo-c.h", 2006, 164))->memory;
        ((struct smart_pointer$1float*)come_null_check(((struct smart_pointer$1float*)come_null_check(self, "./neo-c.h", 2006, 163)), "./neo-c.h", 2006, 164))->memory=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 2006, 166),__exception_result_var_b30=((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))), "./neo-c.h", 2006, 165)))))), come_pop_stackframe(), __exception_result_var_b30));
        come_call_finalizer3(__dec_obj10,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value39,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value40,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("./neo-c.h", 2008, 171),__exception_result_var_b31=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1float*)come_null_check(((struct smart_pointer$1float*)come_null_check(self, "./neo-c.h", 2008, 167)), "./neo-c.h", 2008, 168))->memory, "./neo-c.h", 2008, 169)), "./neo-c.h", 2008, 170)),memory,sizeof(float)*size), come_pop_stackframe(), __exception_result_var_b31);
        ((struct smart_pointer$1float*)come_null_check(((struct smart_pointer$1float*)come_null_check(self, "./neo-c.h", 2010, 172)), "./neo-c.h", 2010, 173))->p=(float*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1float*)come_null_check(((struct smart_pointer$1float*)come_null_check(self, "./neo-c.h", 2010, 174)), "./neo-c.h", 2010, 175))->memory, "./neo-c.h", 2010, 176)), "./neo-c.h", 2010, 177))->buf;
        __result21__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
        return __result21__;
        come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
void* __result_obj__;
_Bool _if_conditional5;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional5=self!=((void*)0)&&((struct smart_pointer$1float*)come_null_check(((struct smart_pointer$1float*)come_null_check(self, "smart_pointer$1floatp_finalize", 0, 178)), "smart_pointer$1floatp_finalize", 0, 179))->memory!=((void*)0),            _if_conditional5) {
                come_call_finalizer3(((struct smart_pointer$1float*)come_null_check(((struct smart_pointer$1float*)come_null_check(self, "smart_pointer$1floatp_finalize", 0, 180)), "smart_pointer$1floatp_finalize", 0, 181))->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct smart_pointer$1double* smart_pointer$1double_initialize(struct smart_pointer$1double* self, void* memory, int size){
void* __result_obj__;
void* right_value43;
void* right_value44;
struct buffer* __exception_result_var_b33;
struct buffer* __dec_obj11;
struct buffer* __exception_result_var_b34;
struct smart_pointer$1double* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
right_value43 = (void*)0;
right_value44 = (void*)0;
        __dec_obj11=((struct smart_pointer$1double*)come_null_check(((struct smart_pointer$1double*)come_null_check(self, "./neo-c.h", 2006, 184)), "./neo-c.h", 2006, 185))->memory;
        ((struct smart_pointer$1double*)come_null_check(((struct smart_pointer$1double*)come_null_check(self, "./neo-c.h", 2006, 184)), "./neo-c.h", 2006, 185))->memory=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 2006, 187),__exception_result_var_b33=((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))), "./neo-c.h", 2006, 186)))))), come_pop_stackframe(), __exception_result_var_b33));
        come_call_finalizer3(__dec_obj11,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value43,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value44,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("./neo-c.h", 2008, 192),__exception_result_var_b34=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1double*)come_null_check(((struct smart_pointer$1double*)come_null_check(self, "./neo-c.h", 2008, 188)), "./neo-c.h", 2008, 189))->memory, "./neo-c.h", 2008, 190)), "./neo-c.h", 2008, 191)),memory,sizeof(double)*size), come_pop_stackframe(), __exception_result_var_b34);
        ((struct smart_pointer$1double*)come_null_check(((struct smart_pointer$1double*)come_null_check(self, "./neo-c.h", 2010, 193)), "./neo-c.h", 2010, 194))->p=(double*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1double*)come_null_check(((struct smart_pointer$1double*)come_null_check(self, "./neo-c.h", 2010, 195)), "./neo-c.h", 2010, 196))->memory, "./neo-c.h", 2010, 197)), "./neo-c.h", 2010, 198))->buf;
        __result23__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
        return __result23__;
        come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
void* __result_obj__;
_Bool _if_conditional6;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional6=self!=((void*)0)&&((struct smart_pointer$1double*)come_null_check(((struct smart_pointer$1double*)come_null_check(self, "smart_pointer$1doublep_finalize", 0, 199)), "smart_pointer$1doublep_finalize", 0, 200))->memory!=((void*)0),            _if_conditional6) {
                come_call_finalizer3(((struct smart_pointer$1double*)come_null_check(((struct smart_pointer$1double*)come_null_check(self, "smart_pointer$1doublep_finalize", 0, 201)), "smart_pointer$1doublep_finalize", 0, 202))->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__;
int i_11;
struct list$1char* __exception_result_var_b36;
struct list$1char* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_11, 0, sizeof(int));
        ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 109, 206)), "./neo-c.h", 109, 207))->head=((void*)0);
        ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 110, 208)), "./neo-c.h", 110, 209))->tail=((void*)0);
        ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 111, 210)), "./neo-c.h", 111, 211))->len=0;
        for(        i_11=0;        i_11<num_value;        i_11++        ){
            (come_push_stackframe("./neo-c.h", 114, 259),__exception_result_var_b36=list$1char_push_back(((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 114, 212)), "./neo-c.h", 114, 213)),((char*)come_null_check(values, "./neo-c.h", 114, 258))[i_11]), come_pop_stackframe(), __exception_result_var_b36);
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
                if(_if_conditional7=((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 222, 214)), "./neo-c.h", 222, 215))->len==0,                _if_conditional7) {
                    litem_12=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value47=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 223, "list_item$1char"))));
                    come_call_finalizer3(right_value47,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_12, "./neo-c.h", 225, 216)), "./neo-c.h", 225, 217))->prev=((void*)0);
                    ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_12, "./neo-c.h", 226, 218)), "./neo-c.h", 226, 219))->next=((void*)0);
                    ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_12, "./neo-c.h", 227, 220)), "./neo-c.h", 227, 221))->item=item;
                    ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 229, 222)), "./neo-c.h", 229, 223))->tail=litem_12;
                    ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 230, 224)), "./neo-c.h", 230, 225))->head=litem_12;
                }
                else {
                    if(_if_conditional8=((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 232, 226)), "./neo-c.h", 232, 227))->len==1,                    _if_conditional8) {
                        litem_13=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value48=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 233, "list_item$1char"))));
                        come_call_finalizer3(right_value48,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_13, "./neo-c.h", 235, 228)), "./neo-c.h", 235, 229))->prev=((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 235, 230)), "./neo-c.h", 235, 231))->head;
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_13, "./neo-c.h", 236, 232)), "./neo-c.h", 236, 233))->next=((void*)0);
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_13, "./neo-c.h", 237, 234)), "./neo-c.h", 237, 235))->item=item;
                        ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 239, 236)), "./neo-c.h", 239, 237))->tail=litem_13;
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 240, 238)), "./neo-c.h", 240, 239))->head, "./neo-c.h", 240, 240)), "./neo-c.h", 240, 241))->next=litem_13;
                    }
                    else {
                        litem_14=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value49=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 243, "list_item$1char"))));
                        come_call_finalizer3(right_value49,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_14, "./neo-c.h", 245, 242)), "./neo-c.h", 245, 243))->prev=((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 245, 244)), "./neo-c.h", 245, 245))->tail;
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_14, "./neo-c.h", 246, 246)), "./neo-c.h", 246, 247))->next=((void*)0);
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_14, "./neo-c.h", 247, 248)), "./neo-c.h", 247, 249))->item=item;
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 249, 250)), "./neo-c.h", 249, 251))->tail, "./neo-c.h", 249, 252)), "./neo-c.h", 249, 253))->next=litem_14;
                        ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 250, 254)), "./neo-c.h", 250, 255))->tail=litem_14;
                    }
                }
                ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 253, 256)), "./neo-c.h", 253, 257))->len++;
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
            it_15=((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 120, 260)), "./neo-c.h", 120, 261))->head;
            while(_while_condtional1=it_15!=((void*)0),            _while_condtional1) {
                prev_it_16=it_15;
                it_15=((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(it_15, "./neo-c.h", 123, 262)), "./neo-c.h", 123, 263))->next;
                come_call_finalizer3(prev_it_16,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values){
void* __result_obj__;
int i_17;
struct list$1short* __exception_result_var_b38;
struct list$1short* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_17, 0, sizeof(int));
        ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 109, 267)), "./neo-c.h", 109, 268))->head=((void*)0);
        ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 110, 269)), "./neo-c.h", 110, 270))->tail=((void*)0);
        ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 111, 271)), "./neo-c.h", 111, 272))->len=0;
        for(        i_17=0;        i_17<num_value;        i_17++        ){
            (come_push_stackframe("./neo-c.h", 114, 320),__exception_result_var_b38=list$1short_push_back(((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 114, 273)), "./neo-c.h", 114, 274)),((short short*)come_null_check(values, "./neo-c.h", 114, 319))[i_17]), come_pop_stackframe(), __exception_result_var_b38);
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
                if(_if_conditional9=((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 222, 275)), "./neo-c.h", 222, 276))->len==0,                _if_conditional9) {
                    litem_18=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value52=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 223, "list_item$1short"))));
                    come_call_finalizer3(right_value52,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_18, "./neo-c.h", 225, 277)), "./neo-c.h", 225, 278))->prev=((void*)0);
                    ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_18, "./neo-c.h", 226, 279)), "./neo-c.h", 226, 280))->next=((void*)0);
                    ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_18, "./neo-c.h", 227, 281)), "./neo-c.h", 227, 282))->item=item;
                    ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 229, 283)), "./neo-c.h", 229, 284))->tail=litem_18;
                    ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 230, 285)), "./neo-c.h", 230, 286))->head=litem_18;
                }
                else {
                    if(_if_conditional10=((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 232, 287)), "./neo-c.h", 232, 288))->len==1,                    _if_conditional10) {
                        litem_19=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value53=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 233, "list_item$1short"))));
                        come_call_finalizer3(right_value53,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_19, "./neo-c.h", 235, 289)), "./neo-c.h", 235, 290))->prev=((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 235, 291)), "./neo-c.h", 235, 292))->head;
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_19, "./neo-c.h", 236, 293)), "./neo-c.h", 236, 294))->next=((void*)0);
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_19, "./neo-c.h", 237, 295)), "./neo-c.h", 237, 296))->item=item;
                        ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 239, 297)), "./neo-c.h", 239, 298))->tail=litem_19;
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 240, 299)), "./neo-c.h", 240, 300))->head, "./neo-c.h", 240, 301)), "./neo-c.h", 240, 302))->next=litem_19;
                    }
                    else {
                        litem_20=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value54=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 243, "list_item$1short"))));
                        come_call_finalizer3(right_value54,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_20, "./neo-c.h", 245, 303)), "./neo-c.h", 245, 304))->prev=((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 245, 305)), "./neo-c.h", 245, 306))->tail;
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_20, "./neo-c.h", 246, 307)), "./neo-c.h", 246, 308))->next=((void*)0);
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_20, "./neo-c.h", 247, 309)), "./neo-c.h", 247, 310))->item=item;
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 249, 311)), "./neo-c.h", 249, 312))->tail, "./neo-c.h", 249, 313)), "./neo-c.h", 249, 314))->next=litem_20;
                        ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 250, 315)), "./neo-c.h", 250, 316))->tail=litem_20;
                    }
                }
                ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 253, 317)), "./neo-c.h", 253, 318))->len++;
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
            it_21=((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 120, 321)), "./neo-c.h", 120, 322))->head;
            while(_while_condtional2=it_21!=((void*)0),            _while_condtional2) {
                prev_it_22=it_21;
                it_21=((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(it_21, "./neo-c.h", 123, 323)), "./neo-c.h", 123, 324))->next;
                come_call_finalizer3(prev_it_22,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__;
int i_23;
struct list$1int* __exception_result_var_b40;
struct list$1int* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_23, 0, sizeof(int));
        ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 109, 328)), "./neo-c.h", 109, 329))->head=((void*)0);
        ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 110, 330)), "./neo-c.h", 110, 331))->tail=((void*)0);
        ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 111, 332)), "./neo-c.h", 111, 333))->len=0;
        for(        i_23=0;        i_23<num_value;        i_23++        ){
            (come_push_stackframe("./neo-c.h", 114, 381),__exception_result_var_b40=list$1int_push_back(((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 114, 334)), "./neo-c.h", 114, 335)),((int*)come_null_check(values, "./neo-c.h", 114, 380))[i_23]), come_pop_stackframe(), __exception_result_var_b40);
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
                if(_if_conditional11=((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 222, 336)), "./neo-c.h", 222, 337))->len==0,                _if_conditional11) {
                    litem_24=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value57=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 223, "list_item$1int"))));
                    come_call_finalizer3(right_value57,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_24, "./neo-c.h", 225, 338)), "./neo-c.h", 225, 339))->prev=((void*)0);
                    ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_24, "./neo-c.h", 226, 340)), "./neo-c.h", 226, 341))->next=((void*)0);
                    ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_24, "./neo-c.h", 227, 342)), "./neo-c.h", 227, 343))->item=item;
                    ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 229, 344)), "./neo-c.h", 229, 345))->tail=litem_24;
                    ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 230, 346)), "./neo-c.h", 230, 347))->head=litem_24;
                }
                else {
                    if(_if_conditional12=((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 232, 348)), "./neo-c.h", 232, 349))->len==1,                    _if_conditional12) {
                        litem_25=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value58=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 233, "list_item$1int"))));
                        come_call_finalizer3(right_value58,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_25, "./neo-c.h", 235, 350)), "./neo-c.h", 235, 351))->prev=((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 235, 352)), "./neo-c.h", 235, 353))->head;
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_25, "./neo-c.h", 236, 354)), "./neo-c.h", 236, 355))->next=((void*)0);
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_25, "./neo-c.h", 237, 356)), "./neo-c.h", 237, 357))->item=item;
                        ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 239, 358)), "./neo-c.h", 239, 359))->tail=litem_25;
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 240, 360)), "./neo-c.h", 240, 361))->head, "./neo-c.h", 240, 362)), "./neo-c.h", 240, 363))->next=litem_25;
                    }
                    else {
                        litem_26=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value59=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 243, "list_item$1int"))));
                        come_call_finalizer3(right_value59,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_26, "./neo-c.h", 245, 364)), "./neo-c.h", 245, 365))->prev=((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 245, 366)), "./neo-c.h", 245, 367))->tail;
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_26, "./neo-c.h", 246, 368)), "./neo-c.h", 246, 369))->next=((void*)0);
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_26, "./neo-c.h", 247, 370)), "./neo-c.h", 247, 371))->item=item;
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 249, 372)), "./neo-c.h", 249, 373))->tail, "./neo-c.h", 249, 374)), "./neo-c.h", 249, 375))->next=litem_26;
                        ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 250, 376)), "./neo-c.h", 250, 377))->tail=litem_26;
                    }
                }
                ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 253, 378)), "./neo-c.h", 253, 379))->len++;
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
            it_27=((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 120, 382)), "./neo-c.h", 120, 383))->head;
            while(_while_condtional3=it_27!=((void*)0),            _while_condtional3) {
                prev_it_28=it_27;
                it_27=((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(it_27, "./neo-c.h", 123, 384)), "./neo-c.h", 123, 385))->next;
                come_call_finalizer3(prev_it_28,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__;
int i_29;
struct list$1long* __exception_result_var_b42;
struct list$1long* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_29, 0, sizeof(int));
        ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 109, 389)), "./neo-c.h", 109, 390))->head=((void*)0);
        ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 110, 391)), "./neo-c.h", 110, 392))->tail=((void*)0);
        ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 111, 393)), "./neo-c.h", 111, 394))->len=0;
        for(        i_29=0;        i_29<num_value;        i_29++        ){
            (come_push_stackframe("./neo-c.h", 114, 442),__exception_result_var_b42=list$1long_push_back(((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 114, 395)), "./neo-c.h", 114, 396)),((long*)come_null_check(values, "./neo-c.h", 114, 441))[i_29]), come_pop_stackframe(), __exception_result_var_b42);
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
                if(_if_conditional13=((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 222, 397)), "./neo-c.h", 222, 398))->len==0,                _if_conditional13) {
                    litem_30=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value62=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 223, "list_item$1long"))));
                    come_call_finalizer3(right_value62,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_30, "./neo-c.h", 225, 399)), "./neo-c.h", 225, 400))->prev=((void*)0);
                    ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_30, "./neo-c.h", 226, 401)), "./neo-c.h", 226, 402))->next=((void*)0);
                    ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_30, "./neo-c.h", 227, 403)), "./neo-c.h", 227, 404))->item=item;
                    ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 229, 405)), "./neo-c.h", 229, 406))->tail=litem_30;
                    ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 230, 407)), "./neo-c.h", 230, 408))->head=litem_30;
                }
                else {
                    if(_if_conditional14=((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 232, 409)), "./neo-c.h", 232, 410))->len==1,                    _if_conditional14) {
                        litem_31=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value63=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 233, "list_item$1long"))));
                        come_call_finalizer3(right_value63,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_31, "./neo-c.h", 235, 411)), "./neo-c.h", 235, 412))->prev=((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 235, 413)), "./neo-c.h", 235, 414))->head;
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_31, "./neo-c.h", 236, 415)), "./neo-c.h", 236, 416))->next=((void*)0);
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_31, "./neo-c.h", 237, 417)), "./neo-c.h", 237, 418))->item=item;
                        ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 239, 419)), "./neo-c.h", 239, 420))->tail=litem_31;
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 240, 421)), "./neo-c.h", 240, 422))->head, "./neo-c.h", 240, 423)), "./neo-c.h", 240, 424))->next=litem_31;
                    }
                    else {
                        litem_32=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value64=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 243, "list_item$1long"))));
                        come_call_finalizer3(right_value64,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_32, "./neo-c.h", 245, 425)), "./neo-c.h", 245, 426))->prev=((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 245, 427)), "./neo-c.h", 245, 428))->tail;
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_32, "./neo-c.h", 246, 429)), "./neo-c.h", 246, 430))->next=((void*)0);
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_32, "./neo-c.h", 247, 431)), "./neo-c.h", 247, 432))->item=item;
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 249, 433)), "./neo-c.h", 249, 434))->tail, "./neo-c.h", 249, 435)), "./neo-c.h", 249, 436))->next=litem_32;
                        ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 250, 437)), "./neo-c.h", 250, 438))->tail=litem_32;
                    }
                }
                ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 253, 439)), "./neo-c.h", 253, 440))->len++;
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
            it_33=((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 120, 443)), "./neo-c.h", 120, 444))->head;
            while(_while_condtional4=it_33!=((void*)0),            _while_condtional4) {
                prev_it_34=it_33;
                it_33=((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(it_33, "./neo-c.h", 123, 445)), "./neo-c.h", 123, 446))->next;
                come_call_finalizer3(prev_it_34,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__;
int i_35;
struct list$1float* __exception_result_var_b44;
struct list$1float* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_35, 0, sizeof(int));
        ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 109, 450)), "./neo-c.h", 109, 451))->head=((void*)0);
        ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 110, 452)), "./neo-c.h", 110, 453))->tail=((void*)0);
        ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 111, 454)), "./neo-c.h", 111, 455))->len=0;
        for(        i_35=0;        i_35<num_value;        i_35++        ){
            (come_push_stackframe("./neo-c.h", 114, 503),__exception_result_var_b44=list$1float_push_back(((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 114, 456)), "./neo-c.h", 114, 457)),((float*)come_null_check(values, "./neo-c.h", 114, 502))[i_35]), come_pop_stackframe(), __exception_result_var_b44);
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
                if(_if_conditional15=((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 222, 458)), "./neo-c.h", 222, 459))->len==0,                _if_conditional15) {
                    litem_36=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value67=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 223, "list_item$1float"))));
                    come_call_finalizer3(right_value67,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_36, "./neo-c.h", 225, 460)), "./neo-c.h", 225, 461))->prev=((void*)0);
                    ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_36, "./neo-c.h", 226, 462)), "./neo-c.h", 226, 463))->next=((void*)0);
                    ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_36, "./neo-c.h", 227, 464)), "./neo-c.h", 227, 465))->item=item;
                    ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 229, 466)), "./neo-c.h", 229, 467))->tail=litem_36;
                    ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 230, 468)), "./neo-c.h", 230, 469))->head=litem_36;
                }
                else {
                    if(_if_conditional16=((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 232, 470)), "./neo-c.h", 232, 471))->len==1,                    _if_conditional16) {
                        litem_37=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value68=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 233, "list_item$1float"))));
                        come_call_finalizer3(right_value68,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_37, "./neo-c.h", 235, 472)), "./neo-c.h", 235, 473))->prev=((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 235, 474)), "./neo-c.h", 235, 475))->head;
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_37, "./neo-c.h", 236, 476)), "./neo-c.h", 236, 477))->next=((void*)0);
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_37, "./neo-c.h", 237, 478)), "./neo-c.h", 237, 479))->item=item;
                        ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 239, 480)), "./neo-c.h", 239, 481))->tail=litem_37;
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 240, 482)), "./neo-c.h", 240, 483))->head, "./neo-c.h", 240, 484)), "./neo-c.h", 240, 485))->next=litem_37;
                    }
                    else {
                        litem_38=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value69=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 243, "list_item$1float"))));
                        come_call_finalizer3(right_value69,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_38, "./neo-c.h", 245, 486)), "./neo-c.h", 245, 487))->prev=((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 245, 488)), "./neo-c.h", 245, 489))->tail;
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_38, "./neo-c.h", 246, 490)), "./neo-c.h", 246, 491))->next=((void*)0);
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_38, "./neo-c.h", 247, 492)), "./neo-c.h", 247, 493))->item=item;
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 249, 494)), "./neo-c.h", 249, 495))->tail, "./neo-c.h", 249, 496)), "./neo-c.h", 249, 497))->next=litem_38;
                        ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 250, 498)), "./neo-c.h", 250, 499))->tail=litem_38;
                    }
                }
                ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 253, 500)), "./neo-c.h", 253, 501))->len++;
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
            it_39=((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 120, 504)), "./neo-c.h", 120, 505))->head;
            while(_while_condtional5=it_39!=((void*)0),            _while_condtional5) {
                prev_it_40=it_39;
                it_39=((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(it_39, "./neo-c.h", 123, 506)), "./neo-c.h", 123, 507))->next;
                come_call_finalizer3(prev_it_40,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__;
int i_41;
struct list$1double* __exception_result_var_b46;
struct list$1double* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_41, 0, sizeof(int));
        ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 109, 511)), "./neo-c.h", 109, 512))->head=((void*)0);
        ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 110, 513)), "./neo-c.h", 110, 514))->tail=((void*)0);
        ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 111, 515)), "./neo-c.h", 111, 516))->len=0;
        for(        i_41=0;        i_41<num_value;        i_41++        ){
            (come_push_stackframe("./neo-c.h", 114, 564),__exception_result_var_b46=list$1double_push_back(((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 114, 517)), "./neo-c.h", 114, 518)),((double*)come_null_check(values, "./neo-c.h", 114, 563))[i_41]), come_pop_stackframe(), __exception_result_var_b46);
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
                if(_if_conditional17=((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 222, 519)), "./neo-c.h", 222, 520))->len==0,                _if_conditional17) {
                    litem_42=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value72=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 223, "list_item$1double"))));
                    come_call_finalizer3(right_value72,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_42, "./neo-c.h", 225, 521)), "./neo-c.h", 225, 522))->prev=((void*)0);
                    ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_42, "./neo-c.h", 226, 523)), "./neo-c.h", 226, 524))->next=((void*)0);
                    ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_42, "./neo-c.h", 227, 525)), "./neo-c.h", 227, 526))->item=item;
                    ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 229, 527)), "./neo-c.h", 229, 528))->tail=litem_42;
                    ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 230, 529)), "./neo-c.h", 230, 530))->head=litem_42;
                }
                else {
                    if(_if_conditional18=((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 232, 531)), "./neo-c.h", 232, 532))->len==1,                    _if_conditional18) {
                        litem_43=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value73=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 233, "list_item$1double"))));
                        come_call_finalizer3(right_value73,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_43, "./neo-c.h", 235, 533)), "./neo-c.h", 235, 534))->prev=((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 235, 535)), "./neo-c.h", 235, 536))->head;
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_43, "./neo-c.h", 236, 537)), "./neo-c.h", 236, 538))->next=((void*)0);
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_43, "./neo-c.h", 237, 539)), "./neo-c.h", 237, 540))->item=item;
                        ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 239, 541)), "./neo-c.h", 239, 542))->tail=litem_43;
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 240, 543)), "./neo-c.h", 240, 544))->head, "./neo-c.h", 240, 545)), "./neo-c.h", 240, 546))->next=litem_43;
                    }
                    else {
                        litem_44=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value74=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 243, "list_item$1double"))));
                        come_call_finalizer3(right_value74,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_44, "./neo-c.h", 245, 547)), "./neo-c.h", 245, 548))->prev=((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 245, 549)), "./neo-c.h", 245, 550))->tail;
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_44, "./neo-c.h", 246, 551)), "./neo-c.h", 246, 552))->next=((void*)0);
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_44, "./neo-c.h", 247, 553)), "./neo-c.h", 247, 554))->item=item;
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 249, 555)), "./neo-c.h", 249, 556))->tail, "./neo-c.h", 249, 557)), "./neo-c.h", 249, 558))->next=litem_44;
                        ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 250, 559)), "./neo-c.h", 250, 560))->tail=litem_44;
                    }
                }
                ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 253, 561)), "./neo-c.h", 253, 562))->len++;
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
            it_45=((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 120, 565)), "./neo-c.h", 120, 566))->head;
            while(_while_condtional6=it_45!=((void*)0),            _while_condtional6) {
                prev_it_46=it_45;
                it_45=((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(it_45, "./neo-c.h", 123, 567)), "./neo-c.h", 123, 568))->next;
                come_call_finalizer3(prev_it_46,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
            }
}










struct sModule* sModule_initialize(struct sModule* self){
void* __result_obj__;
void* right_value79;
void* right_value80;
struct buffer* __exception_result_var_b51;
struct buffer* __dec_obj12;
void* right_value81;
void* right_value82;
struct buffer* __exception_result_var_b52;
struct buffer* __dec_obj13;
void* right_value83;
void* right_value84;
struct buffer* __exception_result_var_b53;
struct buffer* __dec_obj14;
char* __dec_obj15;
char* __dec_obj16;
void* right_value85;
void* right_value86;
struct buffer* __exception_result_var_b54;
struct buffer* __dec_obj17;
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
    __dec_obj12=((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "02constructors.c", 5, 573)), "02constructors.c", 5, 574))->mSourceHead;
    ((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "02constructors.c", 5, 573)), "02constructors.c", 5, 574))->mSourceHead=(struct buffer*)come_increment_ref_count((come_push_stackframe("02constructors.c", 5, 576),__exception_result_var_b51=((struct buffer*)(right_value80=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value79=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02constructors.c", 5, "buffer"))), "02constructors.c", 5, 575)))))), come_pop_stackframe(), __exception_result_var_b51));
    come_call_finalizer3(__dec_obj12,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value79,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value80,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj13=((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "02constructors.c", 6, 577)), "02constructors.c", 6, 578))->mSourceHead2;
    ((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "02constructors.c", 6, 577)), "02constructors.c", 6, 578))->mSourceHead2=(struct buffer*)come_increment_ref_count((come_push_stackframe("02constructors.c", 6, 580),__exception_result_var_b52=((struct buffer*)(right_value82=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value81=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02constructors.c", 6, "buffer"))), "02constructors.c", 6, 579)))))), come_pop_stackframe(), __exception_result_var_b52));
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value81,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value82,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj14=((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "02constructors.c", 7, 581)), "02constructors.c", 7, 582))->mSource;
    ((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "02constructors.c", 7, 581)), "02constructors.c", 7, 582))->mSource=(struct buffer*)come_increment_ref_count((come_push_stackframe("02constructors.c", 7, 584),__exception_result_var_b53=((struct buffer*)(right_value84=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value83=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02constructors.c", 7, "buffer"))), "02constructors.c", 7, 583)))))), come_pop_stackframe(), __exception_result_var_b53));
    come_call_finalizer3(__dec_obj14,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value83,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value84,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj15=((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "02constructors.c", 8, 585)), "02constructors.c", 8, 586))->mLastCode;
    ((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "02constructors.c", 8, 585)), "02constructors.c", 8, 586))->mLastCode=((void*)0);
    __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj16=((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "02constructors.c", 9, 587)), "02constructors.c", 9, 588))->mLastCode2;
    ((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "02constructors.c", 9, 587)), "02constructors.c", 9, 588))->mLastCode2=((void*)0);
    __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj17=((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "02constructors.c", 10, 589)), "02constructors.c", 10, 590))->mHeader;
    ((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "02constructors.c", 10, 589)), "02constructors.c", 10, 590))->mHeader=(struct buffer*)come_increment_ref_count((come_push_stackframe("02constructors.c", 10, 592),__exception_result_var_b54=((struct buffer*)(right_value86=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value85=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02constructors.c", 10, "buffer"))), "02constructors.c", 10, 591)))))), come_pop_stackframe(), __exception_result_var_b54));
    come_call_finalizer3(__dec_obj17,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value85,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value86,buffer_finalize, 0, 1, 0, 0, __result_obj__);
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
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional19=self!=((void*)0)&&((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "sModule_finalize", 0, 593)), "sModule_finalize", 0, 594))->mSourceHead!=((void*)0),        _if_conditional19) {
            come_call_finalizer3(((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "sModule_finalize", 0, 595)), "sModule_finalize", 0, 596))->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional20=self!=((void*)0)&&((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "sModule_finalize", 1, 597)), "sModule_finalize", 1, 598))->mSourceHead2!=((void*)0),        _if_conditional20) {
            come_call_finalizer3(((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "sModule_finalize", 1, 599)), "sModule_finalize", 1, 600))->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional21=self!=((void*)0)&&((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "sModule_finalize", 2, 601)), "sModule_finalize", 2, 602))->mSource!=((void*)0),        _if_conditional21) {
            come_call_finalizer3(((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "sModule_finalize", 2, 603)), "sModule_finalize", 2, 604))->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional22=self!=((void*)0)&&((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "sModule_finalize", 3, 605)), "sModule_finalize", 3, 606))->mLastCode!=((void*)0),        _if_conditional22) {
            ((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "sModule_finalize", 3, 607)), "sModule_finalize", 3, 608))->mLastCode = come_decrement_ref_count2(((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "sModule_finalize", 3, 607)), "sModule_finalize", 3, 608))->mLastCode, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional23=self!=((void*)0)&&((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "sModule_finalize", 4, 609)), "sModule_finalize", 4, 610))->mLastCode2!=((void*)0),        _if_conditional23) {
            ((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "sModule_finalize", 4, 611)), "sModule_finalize", 4, 612))->mLastCode2 = come_decrement_ref_count2(((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "sModule_finalize", 4, 611)), "sModule_finalize", 4, 612))->mLastCode2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional24=self!=((void*)0)&&((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "sModule_finalize", 5, 613)), "sModule_finalize", 5, 614))->mLastCode3!=((void*)0),        _if_conditional24) {
            ((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "sModule_finalize", 5, 615)), "sModule_finalize", 5, 616))->mLastCode3 = come_decrement_ref_count2(((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "sModule_finalize", 5, 615)), "sModule_finalize", 5, 616))->mLastCode3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional25=self!=((void*)0)&&((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "sModule_finalize", 6, 617)), "sModule_finalize", 6, 618))->mHeader!=((void*)0),        _if_conditional25) {
            come_call_finalizer3(((struct sModule*)come_null_check(((struct sModule*)come_null_check(self, "sModule_finalize", 6, 619)), "sModule_finalize", 6, 620))->mHeader,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}

struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent){
void* __result_obj__;
void* right_value87;
void* right_value93;
struct map$2charphsVarph* __exception_result_var_b56;
struct map$2charphsVarph* __dec_obj19;
struct sVarTable* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value87 = (void*)0;
right_value93 = (void*)0;
    __dec_obj19=((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(self, "02constructors.c", 17, 621)), "02constructors.c", 17, 622))->mVars;
    ((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(self, "02constructors.c", 17, 621)), "02constructors.c", 17, 622))->mVars=(struct map$2charphsVarph*)come_increment_ref_count((come_push_stackframe("02constructors.c", 17, 775),__exception_result_var_b56=((struct map$2charphsVarph*)(right_value93=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)(right_value87=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "02constructors.c", 17, "map$2charphsVarph"))), "02constructors.c", 17, 623)))))), come_pop_stackframe(), __exception_result_var_b56));
    come_call_finalizer3(__dec_obj19,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value87,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value93,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(self, "02constructors.c", 18, 802)), "02constructors.c", 18, 803))->mGlobal=global;
    ((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(self, "02constructors.c", 19, 804)), "02constructors.c", 19, 805))->mParent=parent;
    static int id_60=0;
    ((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(self, "02constructors.c", 21, 806)), "02constructors.c", 21, 807))->mID=++id_60;
    __result55__ = __result_obj__ = self;
    come_call_finalizer3(self,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    return __result55__;
    come_call_finalizer3(self,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
void* right_value88;
void* right_value89;
void* right_value90;
int i_53;
void* right_value91;
void* right_value92;
struct list$1charp* __exception_result_var_b55;
struct list$1charp* __dec_obj18;
struct map$2charphsVarph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
right_value89 = (void*)0;
right_value90 = (void*)0;
memset(&i_53, 0, sizeof(int));
right_value91 = (void*)0;
right_value92 = (void*)0;
        ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1068, 624)), "./neo-c.h", 1068, 625))->keys=(char**)come_increment_ref_count(((char**)(right_value88=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1068, "char*%"))));
        right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1069, 626)), "./neo-c.h", 1069, 627))->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value89=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./neo-c.h", 1069, "sVar*%"))));
        come_call_finalizer3(right_value89,sVar_finalize, 0, 1, 0, 0, __result_obj__);
        ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1070, 724)), "./neo-c.h", 1070, 725))->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value90=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1070, "bool"))));
        right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        for(        i_53=0;        i_53<128;        i_53++        ){
            ((_Bool*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1074, 726)), "./neo-c.h", 1074, 727))->item_existance, "./neo-c.h", 1074, 728))[i_53]=(_Bool)0;
        }
        ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1077, 729)), "./neo-c.h", 1077, 730))->size=128;
        ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1078, 731)), "./neo-c.h", 1078, 732))->len=0;
        __dec_obj18=((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1080, 733)), "./neo-c.h", 1080, 734))->key_list;
        ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1080, 733)), "./neo-c.h", 1080, 734))->key_list=(struct list$1charp*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 1080, 746),__exception_result_var_b55=((struct list$1charp*)(right_value92=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)come_null_check(((struct list$1charp*)(right_value91=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1080, "list$1charp"))), "./neo-c.h", 1080, 735)))))), come_pop_stackframe(), __exception_result_var_b55));
        come_call_finalizer3(__dec_obj18,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value91,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value92,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
        ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1082, 747)), "./neo-c.h", 1082, 748))->it=0;
        __result54__ = __result_obj__ = self;
        come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result54__;
        come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional46;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional26=self!=((void*)0)&&((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 0, 628)), "sVar_finalize", 0, 629))->mName!=((void*)0),            _if_conditional26) {
                ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 0, 630)), "sVar_finalize", 0, 631))->mName = come_decrement_ref_count2(((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 0, 630)), "sVar_finalize", 0, 631))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional27=self!=((void*)0)&&((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 1, 632)), "sVar_finalize", 1, 633))->mCValueName!=((void*)0),            _if_conditional27) {
                ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 1, 634)), "sVar_finalize", 1, 635))->mCValueName = come_decrement_ref_count2(((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 1, 634)), "sVar_finalize", 1, 635))->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional28=self!=((void*)0)&&((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 2, 636)), "sVar_finalize", 2, 637))->mType!=((void*)0),            _if_conditional28) {
                come_call_finalizer3(((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 2, 638)), "sVar_finalize", 2, 639))->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional46=self!=((void*)0)&&((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 3, 720)), "sVar_finalize", 3, 721))->mFunName!=((void*)0),            _if_conditional46) {
                ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 3, 722)), "sVar_finalize", 3, 723))->mFunName = come_decrement_ref_count2(((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 3, 722)), "sVar_finalize", 3, 723))->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional29;
_Bool _if_conditional31;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional29=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 0, 640)), "sType_finalize", 0, 641))->mMultipleTypes!=((void*)0),                    _if_conditional29) {
                        come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 0, 642)), "sType_finalize", 0, 643))->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional31=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 1, 652)), "sType_finalize", 1, 653))->mNoSolvedGenericsType!=((void*)0),                    _if_conditional31) {
                        come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 1, 654)), "sType_finalize", 1, 655))->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional33=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 2, 660)), "sType_finalize", 2, 661))->mOriginalLoadVarType!=((void*)0),                    _if_conditional33) {
                        come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 2, 662)), "sType_finalize", 2, 663))->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional34=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 664)), "sType_finalize", 3, 665))->mGenericsName!=((void*)0),                    _if_conditional34) {
                        ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 666)), "sType_finalize", 3, 667))->mGenericsName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 666)), "sType_finalize", 3, 667))->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional35=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 4, 668)), "sType_finalize", 4, 669))->mGenericsTypes!=((void*)0),                    _if_conditional35) {
                        come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 4, 670)), "sType_finalize", 4, 671))->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional36=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 5, 672)), "sType_finalize", 5, 673))->mArrayNum!=((void*)0),                    _if_conditional36) {
                        come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 5, 674)), "sType_finalize", 5, 675))->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional38=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 6, 684)), "sType_finalize", 6, 685))->mParamTypes!=((void*)0),                    _if_conditional38) {
                        come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 6, 686)), "sType_finalize", 6, 687))->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional39=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 7, 688)), "sType_finalize", 7, 689))->mParamNames!=((void*)0),                    _if_conditional39) {
                        come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 7, 690)), "sType_finalize", 7, 691))->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional41=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 8, 700)), "sType_finalize", 8, 701))->mResultType!=((void*)0),                    _if_conditional41) {
                        come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 8, 702)), "sType_finalize", 8, 703))->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional42=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 704)), "sType_finalize", 9, 705))->mAlignas!=((void*)0),                    _if_conditional42) {
                        if(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 706)), "sType_finalize", 9, 707))->mAlignas) { ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 706)), "sType_finalize", 9, 707))->mAlignas = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 706)), "sType_finalize", 9, 707))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 706)), "sType_finalize", 9, 707))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 706)), "sType_finalize", 9, 707))->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional43=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 708)), "sType_finalize", 10, 709))->mSizeNum!=((void*)0),                    _if_conditional43) {
                        if(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 710)), "sType_finalize", 10, 711))->mSizeNum) { ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 710)), "sType_finalize", 10, 711))->mSizeNum = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 710)), "sType_finalize", 10, 711))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 710)), "sType_finalize", 10, 711))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 710)), "sType_finalize", 10, 711))->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional44=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 712)), "sType_finalize", 11, 713))->mOriginalTypeName!=((void*)0),                    _if_conditional44) {
                        ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 714)), "sType_finalize", 11, 715))->mOriginalTypeName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 714)), "sType_finalize", 11, 715))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional45=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 716)), "sType_finalize", 12, 717))->mAsmName!=((void*)0),                    _if_conditional45) {
                        ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 718)), "sType_finalize", 12, 719))->mAsmName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 718)), "sType_finalize", 12, 719))->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
                            it_47=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 120, 644)), "./neo-c.h", 120, 645))->head;
                            while(_while_condtional7=it_47!=((void*)0),                            _while_condtional7) {
                                prev_it_48=it_47;
                                it_47=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_47, "./neo-c.h", 123, 646)), "./neo-c.h", 123, 647))->next;
                                come_call_finalizer3(prev_it_48,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional30;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional30=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0, 648)), "list_item$1sTypephp_finalize", 0, 649))->item!=((void*)0),                                    _if_conditional30) {
                                        come_call_finalizer3(((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0, 650)), "list_item$1sTypephp_finalize", 0, 651))->item,sType_finalize, 0, 0, 0, 0, (void*)0);
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
                            it_49=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 120, 676)), "./neo-c.h", 120, 677))->head;
                            while(_while_condtional8=it_49!=((void*)0),                            _while_condtional8) {
                                prev_it_50=it_49;
                                it_49=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_49, "./neo-c.h", 123, 678)), "./neo-c.h", 123, 679))->next;
                                come_call_finalizer3(prev_it_50,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional37;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional37=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 680)), "list_item$1sNodephp_finalize", 0, 681))->item!=((void*)0),                                    _if_conditional37) {
                                        if(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 682)), "list_item$1sNodephp_finalize", 0, 683))->item) { ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 682)), "list_item$1sNodephp_finalize", 0, 683))->item = come_decrement_ref_count2(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 682)), "list_item$1sNodephp_finalize", 0, 683))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 682)), "list_item$1sNodephp_finalize", 0, 683))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 682)), "list_item$1sNodephp_finalize", 0, 683))->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
                            it_51=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 120, 692)), "./neo-c.h", 120, 693))->head;
                            while(_while_condtional9=it_51!=((void*)0),                            _while_condtional9) {
                                prev_it_52=it_51;
                                it_51=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_51, "./neo-c.h", 123, 694)), "./neo-c.h", 123, 695))->next;
                                come_call_finalizer3(prev_it_52,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional40;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional40=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 696)), "list_item$1charphp_finalize", 0, 697))->item!=((void*)0),                                    _if_conditional40) {
                                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 698)), "list_item$1charphp_finalize", 0, 699))->item = come_decrement_ref_count2(((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 698)), "list_item$1charphp_finalize", 0, 699))->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 101, 736)), "./neo-c.h", 101, 737))->head=((void*)0);
            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 102, 738)), "./neo-c.h", 102, 739))->tail=((void*)0);
            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 103, 740)), "./neo-c.h", 103, 741))->len=0;
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
                it_54=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 120, 742)), "./neo-c.h", 120, 743))->head;
                while(_while_condtional10=it_54!=((void*)0),                _while_condtional10) {
                    prev_it_55=it_54;
                    it_54=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_54, "./neo-c.h", 123, 744)), "./neo-c.h", 123, 745))->next;
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
_Bool _if_conditional47;
_Bool _if_conditional48;
int i_57;
_Bool _if_conditional49;
_Bool _if_conditional50;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_56, 0, sizeof(int));
memset(&i_57, 0, sizeof(int));
            for(            i_56=0;            i_56<((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1111, 749)), "./neo-c.h", 1111, 750))->size;            i_56++            ){
                if(_if_conditional47=((_Bool*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1112, 751)), "./neo-c.h", 1112, 752))->item_existance, "./neo-c.h", 1112, 753))[i_56],                _if_conditional47) {
                    if(_if_conditional48=1,                    _if_conditional48) {
                        come_call_finalizer3(((struct sVar**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1114, 754)), "./neo-c.h", 1114, 755))->items, "./neo-c.h", 1114, 756))[i_56],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            (come_push_stackframe("./neo-c.h", 1118,759),come_free((char*)((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1118, 757)), "./neo-c.h", 1118, 758))->items),come_pop_stackframe());
            for(            i_57=0;            i_57<((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1120, 760)), "./neo-c.h", 1120, 761))->size;            i_57++            ){
                if(_if_conditional49=((_Bool*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1121, 762)), "./neo-c.h", 1121, 763))->item_existance, "./neo-c.h", 1121, 764))[i_57],                _if_conditional49) {
                    if(_if_conditional50=1,                    _if_conditional50) {
                        ((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1123, 765)), "./neo-c.h", 1123, 766))->keys, "./neo-c.h", 1123, 767))[i_57] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1123, 765)), "./neo-c.h", 1123, 766))->keys, "./neo-c.h", 1123, 767))[i_57], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            (come_push_stackframe("./neo-c.h", 1127,770),come_free((char*)((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1127, 768)), "./neo-c.h", 1127, 769))->keys),come_pop_stackframe());
            come_call_finalizer3(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1129, 771)), "./neo-c.h", 1129, 772))->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1131, 773)), "./neo-c.h", 1131, 774))->item_existance = come_decrement_ref_count2(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1131, 773)), "./neo-c.h", 1131, 774))->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_58;
_Bool _if_conditional51;
_Bool _if_conditional52;
int i_59;
_Bool _if_conditional53;
_Bool _if_conditional54;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_58, 0, sizeof(int));
memset(&i_59, 0, sizeof(int));
        for(        i_58=0;        i_58<((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1111, 776)), "./neo-c.h", 1111, 777))->size;        i_58++        ){
            if(_if_conditional51=((_Bool*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1112, 778)), "./neo-c.h", 1112, 779))->item_existance, "./neo-c.h", 1112, 780))[i_58],            _if_conditional51) {
                if(_if_conditional52=1,                _if_conditional52) {
                    come_call_finalizer3(((struct sVar**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1114, 781)), "./neo-c.h", 1114, 782))->items, "./neo-c.h", 1114, 783))[i_58],sVar_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
        }
        (come_push_stackframe("./neo-c.h", 1118,786),come_free((char*)((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1118, 784)), "./neo-c.h", 1118, 785))->items),come_pop_stackframe());
        for(        i_59=0;        i_59<((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1120, 787)), "./neo-c.h", 1120, 788))->size;        i_59++        ){
            if(_if_conditional53=((_Bool*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1121, 789)), "./neo-c.h", 1121, 790))->item_existance, "./neo-c.h", 1121, 791))[i_59],            _if_conditional53) {
                if(_if_conditional54=1,                _if_conditional54) {
                    ((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1123, 792)), "./neo-c.h", 1123, 793))->keys, "./neo-c.h", 1123, 794))[i_59] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1123, 792)), "./neo-c.h", 1123, 793))->keys, "./neo-c.h", 1123, 794))[i_59], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        (come_push_stackframe("./neo-c.h", 1127,797),come_free((char*)((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1127, 795)), "./neo-c.h", 1127, 796))->keys),come_pop_stackframe());
        come_call_finalizer3(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1129, 798)), "./neo-c.h", 1129, 799))->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
        ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1131, 800)), "./neo-c.h", 1131, 801))->item_existance = come_decrement_ref_count2(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1131, 800)), "./neo-c.h", 1131, 801))->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void sVarTable_finalize(struct sVarTable* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    come_call_finalizer3(((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(self, "02constructors.c", 28, 808)), "02constructors.c", 28, 809))->mVars,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
}

struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info){
void* __result_obj__;
int pointer_num_61;
char* p_62;
_Bool _while_condtional11;
_Bool __exception_result_var_b57;
_Bool _if_conditional55;
_Bool _while_condtional12;
void* right_value94;
char* __exception_result_var_b58;
void* right_value95;
char* __exception_result_var_b59;
char* name2_63;
struct sClass* __exception_result_var_b63;
struct sClass* klass_64;
struct sClass* __exception_result_var_b64;
struct sClass* generics_class_70;
_Bool _if_conditional67;
int __exception_result_var_b65;
_Bool _if_conditional68;
void* right_value96;
struct sClass* klass2_71;
void* right_value97;
char* __exception_result_var_b66;
char* __dec_obj20;
void* right_value98;
char* __exception_result_var_b67;
char* __dec_obj21;
void* right_value105;
char* __exception_result_var_b99;
struct map$2charphsClassph* __exception_result_var_b100;
void* right_value106;
char* __exception_result_var_b101;
struct sClass* __exception_result_var_b102;
void* right_value107;
void* right_value108;
struct tuple1$1sTypeph* __exception_result_var_b103;
struct tuple1$1sTypeph* __dec_obj23;
void* right_value109;
void* right_value110;
struct list$1sTypeph* __exception_result_var_b104;
struct list$1sTypeph* __dec_obj24;
void* right_value111;
void* right_value112;
struct tuple1$1sTypeph* __exception_result_var_b105;
struct tuple1$1sTypeph* __dec_obj25;
void* right_value113;
void* right_value114;
struct list$1sTypeph* __exception_result_var_b106;
struct list$1sTypeph* __dec_obj26;
void* right_value115;
void* right_value116;
struct list$1sNodeph* __exception_result_var_b107;
struct list$1sNodeph* __dec_obj27;
void* right_value117;
void* right_value118;
struct list$1sTypeph* __exception_result_var_b108;
struct list$1sTypeph* __dec_obj28;
void* right_value119;
void* right_value120;
struct list$1charph* __exception_result_var_b109;
struct list$1charph* __dec_obj29;
struct tuple1$1sTypeph* __dec_obj30;
struct sNode* __dec_obj31;
void* right_value121;
char* __exception_result_var_b110;
char* __dec_obj32;
struct sType* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&pointer_num_61, 0, sizeof(int));
memset(&p_62, 0, sizeof(char*));
right_value94 = (void*)0;
right_value95 = (void*)0;
memset(&name2_63, 0, sizeof(char*));
memset(&klass_64, 0, sizeof(struct sClass*));
memset(&generics_class_70, 0, sizeof(struct sClass*));
right_value96 = (void*)0;
memset(&klass2_71, 0, sizeof(struct sClass*));
right_value97 = (void*)0;
right_value98 = (void*)0;
right_value105 = (void*)0;
right_value106 = (void*)0;
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
    pointer_num_61=0;
    p_62=name;
    while(_while_condtional11=*((char*)come_null_check(p_62, "02constructors.c", 35, 810)),    _while_condtional11) {
        if(_if_conditional55=(come_push_stackframe("02constructors.c", 36, 812),__exception_result_var_b57=xisalpha(*((char*)come_null_check(p_62, "02constructors.c", 36, 811))), come_pop_stackframe(), __exception_result_var_b57),        _if_conditional55) {
            p_62++;
        }
        else {
            break;
        }
    }
    while(_while_condtional12=*((char*)come_null_check(p_62, "02constructors.c", 43, 813))==42,    _while_condtional12) {
        pointer_num_61++;
        p_62++;
    }
    name2_63=(char*)come_increment_ref_count((come_push_stackframe("02constructors.c", 48, 817),__exception_result_var_b59=((char*)(right_value95=string_substring(((char*)come_null_check(((char*)come_null_check((come_push_stackframe("02constructors.c", 48, 814),__exception_result_var_b58=((char*)(right_value94=__builtin_string(name))), come_pop_stackframe(), __exception_result_var_b58), "02constructors.c", 48, 815)), "02constructors.c", 48, 816)),0,-pointer_num_61-1))), come_pop_stackframe(), __exception_result_var_b59));
    right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    klass_64=(come_push_stackframe("02constructors.c", 50, 872),__exception_result_var_b63=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02constructors.c", 50, 818)), "02constructors.c", 50, 819))->classes,name2_63), come_pop_stackframe(), __exception_result_var_b63);
    generics_class_70=(come_push_stackframe("02constructors.c", 51, 875),__exception_result_var_b64=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02constructors.c", 51, 873)), "02constructors.c", 51, 874))->generics_classes,name2_63), come_pop_stackframe(), __exception_result_var_b64);
    if(_if_conditional67=klass_64==((void*)0)&&generics_class_70==((void*)0),    _if_conditional67) {
        (come_push_stackframe("02constructors.c", 54, 880),__exception_result_var_b65=printf("%s %d: class not found(%s)(1)\n",((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02constructors.c", 54, 876)), "02constructors.c", 54, 877))->sname,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02constructors.c", 54, 878)), "02constructors.c", 54, 879))->sline,name2_63), come_pop_stackframe(), __exception_result_var_b65);
    }
    if(klass_64) {
        ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 58, 881)), "02constructors.c", 58, 882))->mClass=klass_64;
    }
    else {
        klass2_71=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value96=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02constructors.c", 61, "sClass"))));
        come_call_finalizer3(right_value96,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj20=((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass2_71, "02constructors.c", 62, 883)), "02constructors.c", 62, 884))->mName;
        ((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass2_71, "02constructors.c", 62, 883)), "02constructors.c", 62, 884))->mName=(char*)come_increment_ref_count((come_push_stackframe("02constructors.c", 62, 885),__exception_result_var_b66=((char*)(right_value97=__builtin_string(name))), come_pop_stackframe(), __exception_result_var_b66));
        __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj21=((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass2_71, "02constructors.c", 63, 886)), "02constructors.c", 63, 887))->mDeclareSName;
        ((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass2_71, "02constructors.c", 63, 886)), "02constructors.c", 63, 887))->mDeclareSName=(char*)come_increment_ref_count((come_push_stackframe("02constructors.c", 63, 890),__exception_result_var_b67=((char*)(right_value98=__builtin_string(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02constructors.c", 63, 888)), "02constructors.c", 63, 889))->sname))), come_pop_stackframe(), __exception_result_var_b67));
        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("02constructors.c", 65, 1268),__exception_result_var_b100=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02constructors.c", 65, 891)), "02constructors.c", 65, 892))->classes, "02constructors.c", 65, 893)), "02constructors.c", 65, 894)),(char*)come_increment_ref_count((come_push_stackframe("02constructors.c", 65, 1267),__exception_result_var_b99=((char*)(right_value105=__builtin_string(name))), come_pop_stackframe(), __exception_result_var_b99)),(struct sClass*)come_increment_ref_count(klass2_71)), come_pop_stackframe(), __exception_result_var_b100);
        right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 67, 1269)), "02constructors.c", 67, 1270))->mClass=(come_push_stackframe("02constructors.c", 67, 1274),__exception_result_var_b102=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02constructors.c", 67, 1271)), "02constructors.c", 67, 1272))->classes,(come_push_stackframe("02constructors.c", 67, 1273),__exception_result_var_b101=((char*)(right_value106=__builtin_string(name))), come_pop_stackframe(), __exception_result_var_b101)), come_pop_stackframe(), __exception_result_var_b102);
        right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(klass2_71,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    __dec_obj23=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 70, 1275)), "02constructors.c", 70, 1276))->mNoSolvedGenericsType;
    ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 70, 1275)), "02constructors.c", 70, 1276))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count((come_push_stackframe("02constructors.c", 70, 1280),__exception_result_var_b103=((struct tuple1$1sTypeph*)(right_value108=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)(right_value107=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "02constructors.c", 70, "tuple1$1sTypeph"))), "02constructors.c", 70, 1277))),((void*)0)))), come_pop_stackframe(), __exception_result_var_b103));
    come_call_finalizer3(__dec_obj23,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value107,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value108,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj24=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 71, 1285)), "02constructors.c", 71, 1286))->mMultipleTypes;
    ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 71, 1285)), "02constructors.c", 71, 1286))->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("02constructors.c", 71, 1294),__exception_result_var_b104=((struct list$1sTypeph*)(right_value110=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value109=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "02constructors.c", 71, "list$1sTypeph"))), "02constructors.c", 71, 1287)))))), come_pop_stackframe(), __exception_result_var_b104));
    come_call_finalizer3(__dec_obj24,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value109,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value110,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj25=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 72, 1299)), "02constructors.c", 72, 1300))->mOriginalLoadVarType;
    ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 72, 1299)), "02constructors.c", 72, 1300))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count((come_push_stackframe("02constructors.c", 72, 1302),__exception_result_var_b105=((struct tuple1$1sTypeph*)(right_value112=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)(right_value111=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "02constructors.c", 72, "tuple1$1sTypeph"))), "02constructors.c", 72, 1301))),((void*)0)))), come_pop_stackframe(), __exception_result_var_b105));
    come_call_finalizer3(__dec_obj25,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value111,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value112,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj26=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 73, 1307)), "02constructors.c", 73, 1308))->mGenericsTypes;
    ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 73, 1307)), "02constructors.c", 73, 1308))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("02constructors.c", 73, 1310),__exception_result_var_b106=((struct list$1sTypeph*)(right_value114=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value113=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "02constructors.c", 73, "list$1sTypeph"))), "02constructors.c", 73, 1309)))))), come_pop_stackframe(), __exception_result_var_b106));
    come_call_finalizer3(__dec_obj26,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value113,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value114,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj27=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 74, 1311)), "02constructors.c", 74, 1312))->mArrayNum;
    ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 74, 1311)), "02constructors.c", 74, 1312))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("02constructors.c", 74, 1320),__exception_result_var_b107=((struct list$1sNodeph*)(right_value116=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value115=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "02constructors.c", 74, "list$1sNodeph"))), "02constructors.c", 74, 1313)))))), come_pop_stackframe(), __exception_result_var_b107));
    come_call_finalizer3(__dec_obj27,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value115,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value116,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 75, 1325)), "02constructors.c", 75, 1326))->mOmitArrayNum=(_Bool)0;
    __dec_obj28=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 76, 1327)), "02constructors.c", 76, 1328))->mParamTypes;
    ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 76, 1327)), "02constructors.c", 76, 1328))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("02constructors.c", 76, 1330),__exception_result_var_b108=((struct list$1sTypeph*)(right_value118=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value117=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "02constructors.c", 76, "list$1sTypeph"))), "02constructors.c", 76, 1329)))))), come_pop_stackframe(), __exception_result_var_b108));
    come_call_finalizer3(__dec_obj28,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value117,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value118,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj29=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 77, 1331)), "02constructors.c", 77, 1332))->mParamNames;
    ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 77, 1331)), "02constructors.c", 77, 1332))->mParamNames=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("02constructors.c", 77, 1340),__exception_result_var_b109=((struct list$1charph*)(right_value120=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value119=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02constructors.c", 77, "list$1charph"))), "02constructors.c", 77, 1333)))))), come_pop_stackframe(), __exception_result_var_b109));
    come_call_finalizer3(__dec_obj29,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value119,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value120,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 78, 1345)), "02constructors.c", 78, 1346))->mVarArgs=(_Bool)0;
    __dec_obj30=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 79, 1347)), "02constructors.c", 79, 1348))->mResultType;
    ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 79, 1347)), "02constructors.c", 79, 1348))->mResultType=((void*)0);
    come_call_finalizer3(__dec_obj30,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 80, 1353)), "02constructors.c", 80, 1354))->mUnsigned=(_Bool)0;
    ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 81, 1355)), "02constructors.c", 81, 1356))->mConstant=(_Bool)0;
    ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 82, 1357)), "02constructors.c", 82, 1358))->mRegister=(_Bool)0;
    ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 83, 1359)), "02constructors.c", 83, 1360))->mVolatile=(_Bool)0;
    ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 84, 1361)), "02constructors.c", 84, 1362))->mStatic=(_Bool)0;
    ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 85, 1363)), "02constructors.c", 85, 1364))->mRestrict=(_Bool)0;
    ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 86, 1365)), "02constructors.c", 86, 1366))->mImmutable=(_Bool)0;
    ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 87, 1367)), "02constructors.c", 87, 1368))->mLongLong=(_Bool)0;
    ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 88, 1369)), "02constructors.c", 88, 1370))->mHeap=heap;
    ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 89, 1371)), "02constructors.c", 89, 1372))->mDummyHeap=(_Bool)0;
    ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 90, 1373)), "02constructors.c", 90, 1374))->mNoHeap=(_Bool)0;
    ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 91, 1375)), "02constructors.c", 91, 1376))->mRefference=(_Bool)0;
    ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 93, 1377)), "02constructors.c", 93, 1378))->mPointerNum=pointer_num_61;
    ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 94, 1379)), "02constructors.c", 94, 1380))->mNoArrayPointerNum=0;
    __dec_obj31=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 95, 1381)), "02constructors.c", 95, 1382))->mSizeNum;
    ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 95, 1381)), "02constructors.c", 95, 1382))->mSizeNum=((void*)0);
    if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); }
    ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 97, 1383)), "02constructors.c", 97, 1384))->mDynamicArrayNum=0;
    ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 98, 1385)), "02constructors.c", 98, 1386))->mTypeOfExpression=0;
    __dec_obj32=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 100, 1387)), "02constructors.c", 100, 1388))->mOriginalTypeName;
    ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 100, 1387)), "02constructors.c", 100, 1388))->mOriginalTypeName=(char*)come_increment_ref_count((come_push_stackframe("02constructors.c", 100, 1389),__exception_result_var_b110=((char*)(right_value121=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b110));
    __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 101, 1390)), "02constructors.c", 101, 1391))->mOriginalPointerNum=0;
    ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "02constructors.c", 103, 1392)), "02constructors.c", 103, 1393))->mFunctionParam=(_Bool)0;
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
void* __exception_result_var_b60;
unsigned int __exception_result_var_b61;
unsigned int hash_66;
unsigned int it_67;
_Bool _while_condtional13;
_Bool _if_conditional56;
_Bool __exception_result_var_b62;
_Bool _if_conditional57;
struct sClass* __result56__;
_Bool _if_conditional65;
_Bool _if_conditional66;
struct sClass* __result57__;
struct sClass* __result58__;
struct sClass* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_65, 0, sizeof(struct sClass*));
memset(&hash_66, 0, sizeof(unsigned int));
memset(&it_67, 0, sizeof(unsigned int));
        (come_push_stackframe("./neo-c.h", 1526, 820),__exception_result_var_b60=memset(&default_value_65,0,sizeof(struct sClass*)), come_pop_stackframe(), __exception_result_var_b60);
        hash_66=(come_push_stackframe("./neo-c.h", 1528, 823),__exception_result_var_b61=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1528, 821)), "./neo-c.h", 1528, 822))), come_pop_stackframe(), __exception_result_var_b61)%((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1528, 824)), "./neo-c.h", 1528, 825))->size;
        it_67=hash_66;
        while(_while_condtional13=(_Bool)1,        _while_condtional13) {
            if(_if_conditional56=((_Bool*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1532, 826)), "./neo-c.h", 1532, 827))->item_existance, "./neo-c.h", 1532, 828))[it_67],            _if_conditional56) {
                if(_if_conditional57=(come_push_stackframe("./neo-c.h", 1534, 834),__exception_result_var_b62=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1534, 829)), "./neo-c.h", 1534, 830))->keys, "./neo-c.h", 1534, 831))[it_67], "./neo-c.h", 1534, 832)), "./neo-c.h", 1534, 833)),key), come_pop_stackframe(), __exception_result_var_b62),                _if_conditional57) {
                    __result56__ = __result_obj__ = ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1536, 835)), "./neo-c.h", 1536, 836))->items, "./neo-c.h", 1536, 837))[it_67];
                    come_call_finalizer3(default_value_65,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    return __result56__;
                }
                it_67++;
                if(_if_conditional65=it_67>=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1541, 870)), "./neo-c.h", 1541, 871))->size,                _if_conditional65) {
                    it_67=0;
                }
                else {
                    if(_if_conditional66=it_67==hash_66,                    _if_conditional66) {
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
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional63;
_Bool _if_conditional64;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional58=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 0, 838)), "sClass_finalize", 0, 839))->mName!=((void*)0),                        _if_conditional58) {
                            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 0, 840)), "sClass_finalize", 0, 841))->mName = come_decrement_ref_count2(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 0, 840)), "sClass_finalize", 0, 841))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional59=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 1, 842)), "sClass_finalize", 1, 843))->mFields!=((void*)0),                        _if_conditional59) {
                            come_call_finalizer3(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 1, 844)), "sClass_finalize", 1, 845))->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional63=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 2, 862)), "sClass_finalize", 2, 863))->mDeclareSName!=((void*)0),                        _if_conditional63) {
                            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 2, 864)), "sClass_finalize", 2, 865))->mDeclareSName = come_decrement_ref_count2(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 2, 864)), "sClass_finalize", 2, 865))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional64=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 3, 866)), "sClass_finalize", 3, 867))->mParentClassName!=((void*)0),                        _if_conditional64) {
                            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 3, 868)), "sClass_finalize", 3, 869))->mParentClassName = come_decrement_ref_count2(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 3, 868)), "sClass_finalize", 3, 869))->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
                                it_68=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 120, 846)), "./neo-c.h", 120, 847))->head;
                                while(_while_condtional14=it_68!=((void*)0),                                _while_condtional14) {
                                    prev_it_69=it_68;
                                    it_68=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_68, "./neo-c.h", 123, 848)), "./neo-c.h", 123, 849))->next;
                                    come_call_finalizer3(prev_it_69,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional60;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional60=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0, 850)), "list_item$1tuple2$2charphsTypephphp_finalize", 0, 851))->item!=((void*)0),                                        _if_conditional60) {
                                            come_call_finalizer3(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0, 852)), "list_item$1tuple2$2charphsTypephphp_finalize", 0, 853))->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional61;
_Bool _if_conditional62;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional61=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0, 854)), "tuple2$2charphsTypephp_finalize", 0, 855))->v1!=((void*)0),                                                _if_conditional61) {
                                                    ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0, 856)), "tuple2$2charphsTypephp_finalize", 0, 857))->v1 = come_decrement_ref_count2(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0, 856)), "tuple2$2charphsTypephp_finalize", 0, 857))->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional62=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1, 858)), "tuple2$2charphsTypephp_finalize", 1, 859))->v2!=((void*)0),                                                _if_conditional62) {
                                                    come_call_finalizer3(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1, 860)), "tuple2$2charphsTypephp_finalize", 1, 861))->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional69;
unsigned int __exception_result_var_b82;
unsigned int hash_89;
unsigned int it_90;
_Bool _while_condtional17;
_Bool _if_conditional81;
_Bool __exception_result_var_b83;
_Bool _if_conditional82;
_Bool _if_conditional83;
struct list$1charp* __exception_result_var_b87;
struct list$1charp* __exception_result_var_b88;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
int __exception_result_var_b89;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool same_key_exist_107;
char* __exception_result_var_b92;
char* it2_110;
_Bool __exception_result_var_b93;
char* __exception_result_var_b96;
_Bool __exception_result_var_b97;
_Bool _if_conditional112;
_Bool _if_conditional113;
struct list$1charp* __exception_result_var_b98;
struct map$2charphsClassph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_89, 0, sizeof(unsigned int));
memset(&it_90, 0, sizeof(unsigned int));
memset(&same_key_exist_107, 0, sizeof(_Bool));
memset(&it2_110, 0, sizeof(char*));
            if(_if_conditional69=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1371, 895)), "./neo-c.h", 1371, 896))->len*10>=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1371, 897)), "./neo-c.h", 1371, 898))->size,            _if_conditional69) {
                (come_push_stackframe("./neo-c.h", 1372,1018),map$2charphsClassph_rehash(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1372, 899)), "./neo-c.h", 1372, 900))),come_pop_stackframe());
            }
            hash_89=(come_push_stackframe("./neo-c.h", 1374, 1021),__exception_result_var_b82=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(key, "./neo-c.h", 1374, 1019)), "./neo-c.h", 1374, 1020))), come_pop_stackframe(), __exception_result_var_b82)%((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1374, 1022)), "./neo-c.h", 1374, 1023))->size;
            it_90=hash_89;
            while(_while_condtional17=(_Bool)1,            _while_condtional17) {
                if(_if_conditional81=((_Bool*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1378, 1024)), "./neo-c.h", 1378, 1025))->item_existance, "./neo-c.h", 1378, 1026))[it_90],                _if_conditional81) {
                    if(_if_conditional82=(come_push_stackframe("./neo-c.h", 1380, 1032),__exception_result_var_b83=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1380, 1027)), "./neo-c.h", 1380, 1028))->keys, "./neo-c.h", 1380, 1029))[it_90], "./neo-c.h", 1380, 1030)), "./neo-c.h", 1380, 1031)),key), come_pop_stackframe(), __exception_result_var_b83),                    _if_conditional82) {
                        if(_if_conditional83=1,                        _if_conditional83) {
                            (come_push_stackframe("./neo-c.h", 1383, 1121),__exception_result_var_b87=list$1charp_remove(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1383, 1033)), "./neo-c.h", 1383, 1034))->key_list, "./neo-c.h", 1383, 1035)), "./neo-c.h", 1383, 1036)),((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1383, 1118)), "./neo-c.h", 1383, 1119))->keys, "./neo-c.h", 1383, 1120))[it_90]), come_pop_stackframe(), __exception_result_var_b87);
                            ((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1384, 1122)), "./neo-c.h", 1384, 1123))->keys, "./neo-c.h", 1384, 1124))[it_90] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1384, 1122)), "./neo-c.h", 1384, 1123))->keys, "./neo-c.h", 1384, 1124))[it_90], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            ((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1385, 1125)), "./neo-c.h", 1385, 1126))->keys, "./neo-c.h", 1385, 1127))[it_90]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            (come_push_stackframe("./neo-c.h", 1388, 1135),__exception_result_var_b88=list$1charp_remove(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1388, 1128)), "./neo-c.h", 1388, 1129))->key_list, "./neo-c.h", 1388, 1130)), "./neo-c.h", 1388, 1131)),((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1388, 1132)), "./neo-c.h", 1388, 1133))->keys, "./neo-c.h", 1388, 1134))[it_90]), come_pop_stackframe(), __exception_result_var_b88);
                            ((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1389, 1136)), "./neo-c.h", 1389, 1137))->keys, "./neo-c.h", 1389, 1138))[it_90]=key;
                        }
                        if(_if_conditional103=1,                        _if_conditional103) {
                            come_call_finalizer3(((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1392, 1139)), "./neo-c.h", 1392, 1140))->items, "./neo-c.h", 1392, 1141))[it_90],sClass_finalize, 0, 0, 0, 0, (void*)0);
                            ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1393, 1142)), "./neo-c.h", 1393, 1143))->items, "./neo-c.h", 1393, 1144))[it_90]=(struct sClass*)come_increment_ref_count(item);
                        }
                        else {
                            ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1396, 1145)), "./neo-c.h", 1396, 1146))->items, "./neo-c.h", 1396, 1147))[it_90]=item;
                        }
                        break;
                    }
                    it_90++;
                    if(_if_conditional104=it_90>=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1403, 1148)), "./neo-c.h", 1403, 1149))->size,                    _if_conditional104) {
                        it_90=0;
                    }
                    else {
                        if(_if_conditional105=it_90==hash_89,                        _if_conditional105) {
                            (come_push_stackframe("./neo-c.h", 1407, 1150),__exception_result_var_b89=printf("unexpected error in map.insert\n"), come_pop_stackframe(), __exception_result_var_b89);
                            (come_push_stackframe("./neo-c.h", 1408,1151),stackframe(),come_pop_stackframe());
                            (come_push_stackframe("./neo-c.h", 1409,1152),exit(2),come_pop_stackframe());
                        }
                    }
                }
                else {
                    ((_Bool*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1413, 1153)), "./neo-c.h", 1413, 1154))->item_existance, "./neo-c.h", 1413, 1155))[it_90]=(_Bool)1;
                    if(_if_conditional106=1,                    _if_conditional106) {
                        ((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1415, 1156)), "./neo-c.h", 1415, 1157))->keys, "./neo-c.h", 1415, 1158))[it_90]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        ((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1418, 1159)), "./neo-c.h", 1418, 1160))->keys, "./neo-c.h", 1418, 1161))[it_90]=key;
                    }
                    if(_if_conditional107=1,                    _if_conditional107) {
                        ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1421, 1162)), "./neo-c.h", 1421, 1163))->items, "./neo-c.h", 1421, 1164))[it_90]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1424, 1165)), "./neo-c.h", 1424, 1166))->items, "./neo-c.h", 1424, 1167))[it_90]=item;
                    }
                    ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1427, 1168)), "./neo-c.h", 1427, 1169))->len++;
                    break;
                }
            }
            same_key_exist_107=(_Bool)0;
            for(            it2_110=(come_push_stackframe("./neo-c.h", 1434, 1186),__exception_result_var_b92=list$1charp_begin(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1434, 1170)), "./neo-c.h", 1434, 1171))->key_list, "./neo-c.h", 1434, 1172)), "./neo-c.h", 1434, 1173))), come_pop_stackframe(), __exception_result_var_b92);            !(come_push_stackframe("./neo-c.h", 1434, 1193),__exception_result_var_b93=list$1charp_end(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1434, 1187)), "./neo-c.h", 1434, 1188))->key_list, "./neo-c.h", 1434, 1189)), "./neo-c.h", 1434, 1190))), come_pop_stackframe(), __exception_result_var_b93);            it2_110=(come_push_stackframe("./neo-c.h", 1434, 1214),__exception_result_var_b96=list$1charp_next(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1434, 1194)), "./neo-c.h", 1434, 1195))->key_list, "./neo-c.h", 1434, 1196)), "./neo-c.h", 1434, 1197))), come_pop_stackframe(), __exception_result_var_b96)            ){
                if(_if_conditional112=(come_push_stackframe("./neo-c.h", 1436, 1217),__exception_result_var_b97=string_equals(((char*)come_null_check(((char*)come_null_check(it2_110, "./neo-c.h", 1436, 1215)), "./neo-c.h", 1436, 1216)),key), come_pop_stackframe(), __exception_result_var_b97),                _if_conditional112) {
                    same_key_exist_107=(_Bool)1;
                }
            }
            if(_if_conditional113=!same_key_exist_107,            _if_conditional113) {
                (come_push_stackframe("./neo-c.h", 1442, 1266),__exception_result_var_b98=list$1charp_push_back(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1442, 1218)), "./neo-c.h", 1442, 1219))->key_list, "./neo-c.h", 1442, 1220)), "./neo-c.h", 1442, 1221)),key), come_pop_stackframe(), __exception_result_var_b98);
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
void* right_value99;
char** keys_73;
void* right_value100;
struct sClass** items_74;
void* right_value101;
_Bool* item_existance_75;
int len_76;
char* __exception_result_var_b70;
char* it_79;
_Bool __exception_result_var_b71;
char* __exception_result_var_b74;
struct sClass* default_value_82;
void* __exception_result_var_b75;
struct sClass* __exception_result_var_b78;
struct sClass* it2_83;
unsigned int __exception_result_var_b79;
unsigned int hash_86;
int n_87;
_Bool _while_condtional16;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional80;
int __exception_result_var_b80;
struct sClass* default_value_88;
struct sClass* __exception_result_var_b81;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_72, 0, sizeof(int));
right_value99 = (void*)0;
memset(&keys_73, 0, sizeof(char**));
right_value100 = (void*)0;
memset(&items_74, 0, sizeof(struct sClass**));
right_value101 = (void*)0;
memset(&item_existance_75, 0, sizeof(_Bool*));
memset(&len_76, 0, sizeof(int));
memset(&it_79, 0, sizeof(char*));
memset(&default_value_82, 0, sizeof(struct sClass*));
memset(&it2_83, 0, sizeof(struct sClass*));
memset(&hash_86, 0, sizeof(unsigned int));
memset(&n_87, 0, sizeof(int));
memset(&default_value_88, 0, sizeof(struct sClass*));
                    size_72=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1318, 901)), "./neo-c.h", 1318, 902))->size*10;
                    keys_73=(char**)come_increment_ref_count(((char**)(right_value99=(char**)come_calloc(1, sizeof(char*)*(1*(size_72)), "./neo-c.h", 1319, "char*%"))));
                    right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    items_74=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value100=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_72)), "./neo-c.h", 1320, "sClass*%"))));
                    come_call_finalizer3(right_value100,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                    item_existance_75=(_Bool*)come_increment_ref_count(((_Bool*)(right_value101=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_72)), "./neo-c.h", 1321, "bool"))));
                    right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    len_76=0;
                    for(                    it_79=(come_push_stackframe("./neo-c.h", 1325, 925),__exception_result_var_b70=map$2charphsClassph_begin(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1325, 903)), "./neo-c.h", 1325, 904))), come_pop_stackframe(), __exception_result_var_b70);                    !(come_push_stackframe("./neo-c.h", 1325, 934),__exception_result_var_b71=map$2charphsClassph_end(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1325, 926)), "./neo-c.h", 1325, 927))), come_pop_stackframe(), __exception_result_var_b71);                    it_79=(come_push_stackframe("./neo-c.h", 1325, 963),__exception_result_var_b74=map$2charphsClassph_next(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1325, 935)), "./neo-c.h", 1325, 936))), come_pop_stackframe(), __exception_result_var_b74)                    ){
                        (come_push_stackframe("./neo-c.h", 1327, 964),__exception_result_var_b75=memset(&default_value_82,0,sizeof(struct sClass*)), come_pop_stackframe(), __exception_result_var_b75);
                        it2_83=(come_push_stackframe("./neo-c.h", 1328, 986),__exception_result_var_b78=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1328, 965)), "./neo-c.h", 1328, 966)),it_79,default_value_82), come_pop_stackframe(), __exception_result_var_b78);
                        hash_86=(come_push_stackframe("./neo-c.h", 1329, 989),__exception_result_var_b79=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(it_79, "./neo-c.h", 1329, 987)), "./neo-c.h", 1329, 988))), come_pop_stackframe(), __exception_result_var_b79)%size_72;
                        n_87=hash_86;
                        while(_while_condtional16=(_Bool)1,                        _while_condtional16) {
                            if(_if_conditional78=((_Bool*)come_null_check(item_existance_75, "./neo-c.h", 1333, 990))[n_87],                            _if_conditional78) {
                                n_87++;
                                if(_if_conditional79=n_87>=size_72,                                _if_conditional79) {
                                    n_87=0;
                                }
                                else {
                                    if(_if_conditional80=n_87==hash_86,                                    _if_conditional80) {
                                        (come_push_stackframe("./neo-c.h", 1341, 991),__exception_result_var_b80=printf("unexpected error in map.rehash(1)\n"), come_pop_stackframe(), __exception_result_var_b80);
                                        (come_push_stackframe("./neo-c.h", 1342,992),stackframe(),come_pop_stackframe());
                                        (come_push_stackframe("./neo-c.h", 1343,993),exit(2),come_pop_stackframe());
                                    }
                                }
                            }
                            else {
                                ((_Bool*)come_null_check(item_existance_75, "./neo-c.h", 1347, 994))[n_87]=(_Bool)1;
                                ((char**)come_null_check(keys_73, "./neo-c.h", 1348, 995))[n_87]=it_79;
                                ((struct sClass**)come_null_check(items_74, "./neo-c.h", 1350, 996))[n_87]=(come_push_stackframe("./neo-c.h", 1350, 999),__exception_result_var_b81=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1350, 997)), "./neo-c.h", 1350, 998)),it_79,default_value_88), come_pop_stackframe(), __exception_result_var_b81);
                                len_76++;
                                break;
                            }
                        }
                    }
                    (come_push_stackframe("./neo-c.h", 1358,1002),come_free((char*)((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1358, 1000)), "./neo-c.h", 1358, 1001))->items),come_pop_stackframe());
                    ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1359, 1003)), "./neo-c.h", 1359, 1004))->item_existance = come_decrement_ref_count2(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1359, 1003)), "./neo-c.h", 1359, 1004))->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (come_push_stackframe("./neo-c.h", 1360,1007),come_free((char*)((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1360, 1005)), "./neo-c.h", 1360, 1006))->keys),come_pop_stackframe());
                    ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1362, 1008)), "./neo-c.h", 1362, 1009))->keys=keys_73;
                    ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1363, 1010)), "./neo-c.h", 1363, 1011))->items=items_74;
                    ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1364, 1012)), "./neo-c.h", 1364, 1013))->item_existance=item_existance_75;
                    ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1366, 1014)), "./neo-c.h", 1366, 1015))->size=size_72;
                    ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1367, 1016)), "./neo-c.h", 1367, 1017))->len=len_76;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional70;
char* result_77;
void* __exception_result_var_b68;
char* __result60__;
_Bool _if_conditional71;
char* __result61__;
char* result_78;
void* __exception_result_var_b69;
char* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_77, 0, sizeof(char*));
memset(&result_78, 0, sizeof(char*));
                        if(_if_conditional70=self==((void*)0),                        _if_conditional70) {
                            (come_push_stackframe("./neo-c.h", 1282, 905),__exception_result_var_b68=memset(&result_77,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b68);
                            __result60__ = __result_obj__ = result_77;
                            return __result60__;
                        }
                        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1285, 906)), "./neo-c.h", 1285, 907))->key_list, "./neo-c.h", 1285, 908)), "./neo-c.h", 1285, 909))->it=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1285, 910)), "./neo-c.h", 1285, 911))->key_list, "./neo-c.h", 1285, 912)), "./neo-c.h", 1285, 913))->head;
                        if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1287, 914)), "./neo-c.h", 1287, 915))->key_list, "./neo-c.h", 1287, 916)), "./neo-c.h", 1287, 917))->it) {
                            __result61__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1288, 918)), "./neo-c.h", 1288, 919))->key_list, "./neo-c.h", 1288, 920)), "./neo-c.h", 1288, 921))->it, "./neo-c.h", 1288, 922)), "./neo-c.h", 1288, 923))->item;
                            return __result61__;
                        }
                        (come_push_stackframe("./neo-c.h", 1292, 924),__exception_result_var_b69=memset(&result_78,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b69);
                        __result62__ = __result_obj__ = result_78;
                        return __result62__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result63__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result63__ = self==((void*)0)||((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1314, 928)), "./neo-c.h", 1314, 929))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1314, 930)), "./neo-c.h", 1314, 931))->key_list, "./neo-c.h", 1314, 932)), "./neo-c.h", 1314, 933))->it==((void*)0);
                        return __result63__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional72;
char* result_80;
void* __exception_result_var_b72;
char* __result64__;
_Bool _if_conditional73;
char* __result65__;
char* result_81;
void* __exception_result_var_b73;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_80, 0, sizeof(char*));
memset(&result_81, 0, sizeof(char*));
                        if(_if_conditional72=self==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1297, 937)), "./neo-c.h", 1297, 938))->key_list, "./neo-c.h", 1297, 939)), "./neo-c.h", 1297, 940))->it==((void*)0),                        _if_conditional72) {
                            (come_push_stackframe("./neo-c.h", 1299, 941),__exception_result_var_b72=memset(&result_80,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b72);
                            __result64__ = __result_obj__ = result_80;
                            return __result64__;
                        }
                        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1302, 942)), "./neo-c.h", 1302, 943))->key_list, "./neo-c.h", 1302, 944)), "./neo-c.h", 1302, 945))->it=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1302, 946)), "./neo-c.h", 1302, 947))->key_list, "./neo-c.h", 1302, 948)), "./neo-c.h", 1302, 949))->it, "./neo-c.h", 1302, 950)), "./neo-c.h", 1302, 951))->next;
                        if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1304, 952)), "./neo-c.h", 1304, 953))->key_list, "./neo-c.h", 1304, 954)), "./neo-c.h", 1304, 955))->it) {
                            __result65__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1305, 956)), "./neo-c.h", 1305, 957))->key_list, "./neo-c.h", 1305, 958)), "./neo-c.h", 1305, 959))->it, "./neo-c.h", 1305, 960)), "./neo-c.h", 1305, 961))->item;
                            return __result65__;
                        }
                        (come_push_stackframe("./neo-c.h", 1309, 962),__exception_result_var_b73=memset(&result_81,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b73);
                        __result66__ = __result_obj__ = result_81;
                        return __result66__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int __exception_result_var_b76;
unsigned int hash_84;
unsigned int it_85;
_Bool _while_condtional15;
_Bool _if_conditional74;
_Bool __exception_result_var_b77;
_Bool _if_conditional75;
struct sClass* __result67__;
_Bool _if_conditional76;
_Bool _if_conditional77;
struct sClass* __result68__;
struct sClass* __result69__;
struct sClass* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_84, 0, sizeof(unsigned int));
memset(&it_85, 0, sizeof(unsigned int));
                            hash_84=(come_push_stackframe("./neo-c.h", 1207, 969),__exception_result_var_b76=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1207, 967)), "./neo-c.h", 1207, 968))), come_pop_stackframe(), __exception_result_var_b76)%((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1207, 970)), "./neo-c.h", 1207, 971))->size;
                            it_85=hash_84;
                            while(_while_condtional15=(_Bool)1,                            _while_condtional15) {
                                if(_if_conditional74=((_Bool*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1211, 972)), "./neo-c.h", 1211, 973))->item_existance, "./neo-c.h", 1211, 974))[it_85],                                _if_conditional74) {
                                    if(_if_conditional75=(come_push_stackframe("./neo-c.h", 1213, 980),__exception_result_var_b77=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1213, 975)), "./neo-c.h", 1213, 976))->keys, "./neo-c.h", 1213, 977))[it_85], "./neo-c.h", 1213, 978)), "./neo-c.h", 1213, 979)),key), come_pop_stackframe(), __exception_result_var_b77),                                    _if_conditional75) {
                                        __result67__ = __result_obj__ = ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1215, 981)), "./neo-c.h", 1215, 982))->items, "./neo-c.h", 1215, 983))[it_85];
                                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result67__;
                                    }
                                    it_85++;
                                    if(_if_conditional76=it_85>=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1220, 984)), "./neo-c.h", 1220, 985))->size,                                    _if_conditional76) {
                                        it_85=0;
                                    }
                                    else {
                                        if(_if_conditional77=it_85==hash_84,                                        _if_conditional77) {
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
_Bool __exception_result_var_b84;
_Bool _if_conditional84;
struct list$1charp* __exception_result_var_b86;
struct list$1charp* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_91, 0, sizeof(int));
memset(&it_92, 0, sizeof(struct list_item$1charp*));
                                it2_91=0;
                                it_92=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 442, 1037)), "./neo-c.h", 442, 1038))->head;
                                while(_while_condtional18=it_92!=((void*)0),                                _while_condtional18) {
                                    if(_if_conditional84=(come_push_stackframe("./neo-c.h", 444, 1043),__exception_result_var_b84=string_equals(((char*)come_null_check(((char*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_92, "./neo-c.h", 444, 1039)), "./neo-c.h", 444, 1040))->item, "./neo-c.h", 444, 1041)), "./neo-c.h", 444, 1042)),item), come_pop_stackframe(), __exception_result_var_b84),                                    _if_conditional84) {
                                        (come_push_stackframe("./neo-c.h", 445, 1115),__exception_result_var_b86=list$1charp_delete(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 445, 1044)), "./neo-c.h", 445, 1045)),it2_91,it2_91+1), come_pop_stackframe(), __exception_result_var_b86);
                                        break;
                                    }
                                    it2_91++;
                                    it_92=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_92, "./neo-c.h", 450, 1116)), "./neo-c.h", 450, 1117))->next;
                                }
                                __result74__ = __result_obj__ = self;
                                return __result74__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
int tmp_93;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
struct list$1charp* __result71__;
_Bool _if_conditional91;
struct list$1charp* __exception_result_var_b85;
_Bool _if_conditional92;
struct list_item$1charp* it_96;
int i_97;
_Bool _while_condtional20;
_Bool _if_conditional93;
struct list_item$1charp* prev_it_98;
_Bool _if_conditional94;
_Bool _if_conditional95;
struct list_item$1charp* it_99;
int i_100;
_Bool _while_condtional21;
_Bool _if_conditional96;
_Bool _if_conditional97;
struct list_item$1charp* prev_it_101;
struct list_item$1charp* it_102;
struct list_item$1charp* head_prev_it_103;
struct list_item$1charp* tail_it_104;
int i_105;
_Bool _while_condtional22;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
struct list_item$1charp* prev_it_106;
_Bool _if_conditional101;
_Bool _if_conditional102;
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
                                            if(_if_conditional85=head<0,                                            _if_conditional85) {
                                                head+=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 458, 1046)), "./neo-c.h", 458, 1047))->len;
                                            }
                                            if(_if_conditional86=tail<0,                                            _if_conditional86) {
                                                tail+=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 461, 1048)), "./neo-c.h", 461, 1049))->len+1;
                                            }
                                            if(_if_conditional87=head>tail,                                            _if_conditional87) {
                                                tmp_93=tail;
                                                tail=head;
                                                head=tmp_93;
                                            }
                                            if(_if_conditional88=head<0,                                            _if_conditional88) {
                                                head=0;
                                            }
                                            if(_if_conditional89=tail>((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 474, 1050)), "./neo-c.h", 474, 1051))->len,                                            _if_conditional89) {
                                                tail=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 475, 1052)), "./neo-c.h", 475, 1053))->len;
                                            }
                                            if(_if_conditional90=head==tail,                                            _if_conditional90) {
                                                __result71__ = __result_obj__ = self;
                                                return __result71__;
                                            }
                                            if(_if_conditional91=head==0&&tail==((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 482, 1054)), "./neo-c.h", 482, 1055))->len,                                            _if_conditional91) {
                                                (come_push_stackframe("./neo-c.h", 484, 1068),__exception_result_var_b85=list$1charp_reset(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 484, 1056)), "./neo-c.h", 484, 1057))), come_pop_stackframe(), __exception_result_var_b85);
                                            }
                                            else {
                                                if(_if_conditional92=head==0,                                                _if_conditional92) {
                                                    it_96=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 487, 1069)), "./neo-c.h", 487, 1070))->head;
                                                    i_97=0;
                                                    while(_while_condtional20=it_96!=((void*)0),                                                    _while_condtional20) {
                                                        if(_if_conditional93=i_97<tail,                                                        _if_conditional93) {
                                                            prev_it_98=it_96;
                                                            it_96=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_96, "./neo-c.h", 493, 1071)), "./neo-c.h", 493, 1072))->next;
                                                            i_97++;
                                                            come_call_finalizer3(prev_it_98,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 498, 1073)), "./neo-c.h", 498, 1074))->len--;
                                                        }
                                                        else {
                                                            if(_if_conditional94=i_97==tail,                                                            _if_conditional94) {
                                                                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 501, 1075)), "./neo-c.h", 501, 1076))->head=it_96;
                                                                ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 502, 1077)), "./neo-c.h", 502, 1078))->head, "./neo-c.h", 502, 1079)), "./neo-c.h", 502, 1080))->prev=((void*)0);
                                                                break;
                                                            }
                                                            else {
                                                                it_96=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_96, "./neo-c.h", 506, 1081)), "./neo-c.h", 506, 1082))->next;
                                                                i_97++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    if(_if_conditional95=tail==((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 511, 1083)), "./neo-c.h", 511, 1084))->len,                                                    _if_conditional95) {
                                                        it_99=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 512, 1085)), "./neo-c.h", 512, 1086))->head;
                                                        i_100=0;
                                                        while(_while_condtional21=it_99!=((void*)0),                                                        _while_condtional21) {
                                                            if(_if_conditional96=i_100==head,                                                            _if_conditional96) {
                                                                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 516, 1087)), "./neo-c.h", 516, 1088))->tail=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_99, "./neo-c.h", 516, 1089)), "./neo-c.h", 516, 1090))->prev;
                                                                ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 517, 1091)), "./neo-c.h", 517, 1092))->tail, "./neo-c.h", 517, 1093)), "./neo-c.h", 517, 1094))->next=((void*)0);
                                                            }
                                                            if(_if_conditional97=i_100>=head,                                                            _if_conditional97) {
                                                                prev_it_101=it_99;
                                                                it_99=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_99, "./neo-c.h", 523, 1095)), "./neo-c.h", 523, 1096))->next;
                                                                i_100++;
                                                                come_call_finalizer3(prev_it_101,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 528, 1097)), "./neo-c.h", 528, 1098))->len--;
                                                            }
                                                            else {
                                                                it_99=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_99, "./neo-c.h", 531, 1099)), "./neo-c.h", 531, 1100))->next;
                                                                i_100++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        it_102=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 537, 1101)), "./neo-c.h", 537, 1102))->head;
                                                        head_prev_it_103=((void*)0);
                                                        tail_it_104=((void*)0);
                                                        i_105=0;
                                                        while(_while_condtional22=it_102!=((void*)0),                                                        _while_condtional22) {
                                                            if(_if_conditional98=i_105==head,                                                            _if_conditional98) {
                                                                head_prev_it_103=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_102, "./neo-c.h", 546, 1103)), "./neo-c.h", 546, 1104))->prev;
                                                            }
                                                            if(_if_conditional99=i_105==tail,                                                            _if_conditional99) {
                                                                tail_it_104=it_102;
                                                            }
                                                            if(_if_conditional100=i_105>=head&&i_105<tail,                                                            _if_conditional100) {
                                                                prev_it_106=it_102;
                                                                it_102=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_102, "./neo-c.h", 556, 1105)), "./neo-c.h", 556, 1106))->next;
                                                                i_105++;
                                                                come_call_finalizer3(prev_it_106,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 561, 1107)), "./neo-c.h", 561, 1108))->len--;
                                                            }
                                                            else {
                                                                it_102=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_102, "./neo-c.h", 564, 1109)), "./neo-c.h", 564, 1110))->next;
                                                                i_105++;
                                                            }
                                                        }
                                                        if(_if_conditional101=head_prev_it_103!=((void*)0),                                                        _if_conditional101) {
                                                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(head_prev_it_103, "./neo-c.h", 570, 1111)), "./neo-c.h", 570, 1112))->next=tail_it_104;
                                                        }
                                                        if(_if_conditional102=tail_it_104!=((void*)0),                                                        _if_conditional102) {
                                                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(tail_it_104, "./neo-c.h", 573, 1113)), "./neo-c.h", 573, 1114))->prev=head_prev_it_103;
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
                                                    it_94=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 426, 1058)), "./neo-c.h", 426, 1059))->head;
                                                    while(_while_condtional19=it_94!=((void*)0),                                                    _while_condtional19) {
                                                        prev_it_95=it_94;
                                                        it_94=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_94, "./neo-c.h", 429, 1060)), "./neo-c.h", 429, 1061))->next;
                                                        come_call_finalizer3(prev_it_95,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 433, 1062)), "./neo-c.h", 433, 1063))->head=((void*)0);
                                                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 434, 1064)), "./neo-c.h", 434, 1065))->tail=((void*)0);
                                                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 436, 1066)), "./neo-c.h", 436, 1067))->len=0;
                                                    __result72__ = __result_obj__ = self;
                                                    return __result72__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional108;
char* result_108;
void* __exception_result_var_b90;
char* __result75__;
_Bool _if_conditional109;
char* __result76__;
char* result_109;
void* __exception_result_var_b91;
char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_108, 0, sizeof(char*));
memset(&result_109, 0, sizeof(char*));
                if(_if_conditional108=self==((void*)0),                _if_conditional108) {
                    (come_push_stackframe("./neo-c.h", 284, 1174),__exception_result_var_b90=memset(&result_108,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b90);
                    __result75__ = __result_obj__ = result_108;
                    return __result75__;
                }
                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 287, 1175)), "./neo-c.h", 287, 1176))->it=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 287, 1177)), "./neo-c.h", 287, 1178))->head;
                if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 289, 1179)), "./neo-c.h", 289, 1180))->it) {
                    __result76__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 290, 1181)), "./neo-c.h", 290, 1182))->it, "./neo-c.h", 290, 1183)), "./neo-c.h", 290, 1184))->item;
                    return __result76__;
                }
                (come_push_stackframe("./neo-c.h", 294, 1185),__exception_result_var_b91=memset(&result_109,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b91);
                __result77__ = __result_obj__ = result_109;
                return __result77__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
                __result78__ = self==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 317, 1191)), "./neo-c.h", 317, 1192))->it==((void*)0);
                return __result78__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional110;
char* result_111;
void* __exception_result_var_b94;
char* __result79__;
_Bool _if_conditional111;
char* __result80__;
char* result_112;
void* __exception_result_var_b95;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_111, 0, sizeof(char*));
memset(&result_112, 0, sizeof(char*));
                if(_if_conditional110=self==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 299, 1198)), "./neo-c.h", 299, 1199))->it==((void*)0),                _if_conditional110) {
                    (come_push_stackframe("./neo-c.h", 301, 1200),__exception_result_var_b94=memset(&result_111,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b94);
                    __result79__ = __result_obj__ = result_111;
                    return __result79__;
                }
                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 305, 1201)), "./neo-c.h", 305, 1202))->it=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 305, 1203)), "./neo-c.h", 305, 1204))->it, "./neo-c.h", 305, 1205)), "./neo-c.h", 305, 1206))->next;
                if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 307, 1207)), "./neo-c.h", 307, 1208))->it) {
                    __result80__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 308, 1209)), "./neo-c.h", 308, 1210))->it, "./neo-c.h", 308, 1211)), "./neo-c.h", 308, 1212))->item;
                    return __result80__;
                }
                (come_push_stackframe("./neo-c.h", 312, 1213),__exception_result_var_b95=memset(&result_112,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b95);
                __result81__ = __result_obj__ = result_112;
                return __result81__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional114;
void* right_value102;
struct list_item$1charp* litem_113;
_Bool _if_conditional115;
void* right_value103;
struct list_item$1charp* litem_114;
void* right_value104;
struct list_item$1charp* litem_115;
struct list$1charp* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value102 = (void*)0;
memset(&litem_113, 0, sizeof(struct list_item$1charp*));
right_value103 = (void*)0;
memset(&litem_114, 0, sizeof(struct list_item$1charp*));
right_value104 = (void*)0;
memset(&litem_115, 0, sizeof(struct list_item$1charp*));
                    if(_if_conditional114=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 222, 1222)), "./neo-c.h", 222, 1223))->len==0,                    _if_conditional114) {
                        litem_113=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value102=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 223, "list_item$1charp"))));
                        come_call_finalizer3(right_value102,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_113, "./neo-c.h", 225, 1224)), "./neo-c.h", 225, 1225))->prev=((void*)0);
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_113, "./neo-c.h", 226, 1226)), "./neo-c.h", 226, 1227))->next=((void*)0);
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_113, "./neo-c.h", 227, 1228)), "./neo-c.h", 227, 1229))->item=item;
                        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 229, 1230)), "./neo-c.h", 229, 1231))->tail=litem_113;
                        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 230, 1232)), "./neo-c.h", 230, 1233))->head=litem_113;
                    }
                    else {
                        if(_if_conditional115=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 232, 1234)), "./neo-c.h", 232, 1235))->len==1,                        _if_conditional115) {
                            litem_114=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value103=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 233, "list_item$1charp"))));
                            come_call_finalizer3(right_value103,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_114, "./neo-c.h", 235, 1236)), "./neo-c.h", 235, 1237))->prev=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 235, 1238)), "./neo-c.h", 235, 1239))->head;
                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_114, "./neo-c.h", 236, 1240)), "./neo-c.h", 236, 1241))->next=((void*)0);
                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_114, "./neo-c.h", 237, 1242)), "./neo-c.h", 237, 1243))->item=item;
                            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 239, 1244)), "./neo-c.h", 239, 1245))->tail=litem_114;
                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 240, 1246)), "./neo-c.h", 240, 1247))->head, "./neo-c.h", 240, 1248)), "./neo-c.h", 240, 1249))->next=litem_114;
                        }
                        else {
                            litem_115=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value104=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 243, "list_item$1charp"))));
                            come_call_finalizer3(right_value104,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_115, "./neo-c.h", 245, 1250)), "./neo-c.h", 245, 1251))->prev=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 245, 1252)), "./neo-c.h", 245, 1253))->tail;
                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_115, "./neo-c.h", 246, 1254)), "./neo-c.h", 246, 1255))->next=((void*)0);
                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_115, "./neo-c.h", 247, 1256)), "./neo-c.h", 247, 1257))->item=item;
                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 249, 1258)), "./neo-c.h", 249, 1259))->tail, "./neo-c.h", 249, 1260)), "./neo-c.h", 249, 1261))->next=litem_115;
                            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 250, 1262)), "./neo-c.h", 250, 1263))->tail=litem_115;
                        }
                    }
                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 253, 1264)), "./neo-c.h", 253, 1265))->len++;
                    __result82__ = __result_obj__ = self;
                    return __result82__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj22;
struct tuple1$1sTypeph* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
        __dec_obj22=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "./neo-c.h", 1716, 1278)), "./neo-c.h", 1716, 1279))->v1;
        ((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "./neo-c.h", 1716, 1278)), "./neo-c.h", 1716, 1279))->v1=(struct sType*)come_increment_ref_count(v1);
        come_call_finalizer3(__dec_obj22,sType_finalize, 0, 0, 0, 0, (void*)0);
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
        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 101, 1288)), "./neo-c.h", 101, 1289))->head=((void*)0);
        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 102, 1290)), "./neo-c.h", 102, 1291))->tail=((void*)0);
        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 103, 1292)), "./neo-c.h", 103, 1293))->len=0;
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
        it_116=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 120, 1295)), "./neo-c.h", 120, 1296))->head;
        while(_while_condtional23=it_116!=((void*)0),        _while_condtional23) {
            prev_it_117=it_116;
            it_116=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_116, "./neo-c.h", 123, 1297)), "./neo-c.h", 123, 1298))->next;
            come_call_finalizer3(prev_it_117,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 101, 1314)), "./neo-c.h", 101, 1315))->head=((void*)0);
        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 102, 1316)), "./neo-c.h", 102, 1317))->tail=((void*)0);
        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 103, 1318)), "./neo-c.h", 103, 1319))->len=0;
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
        it_118=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 120, 1321)), "./neo-c.h", 120, 1322))->head;
        while(_while_condtional24=it_118!=((void*)0),        _while_condtional24) {
            prev_it_119=it_118;
            it_118=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_118, "./neo-c.h", 123, 1323)), "./neo-c.h", 123, 1324))->next;
            come_call_finalizer3(prev_it_119,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 101, 1334)), "./neo-c.h", 101, 1335))->head=((void*)0);
        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 102, 1336)), "./neo-c.h", 102, 1337))->tail=((void*)0);
        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 103, 1338)), "./neo-c.h", 103, 1339))->len=0;
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
        it_120=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 120, 1341)), "./neo-c.h", 120, 1342))->head;
        while(_while_condtional25=it_120!=((void*)0),        _while_condtional25) {
            prev_it_121=it_120;
            it_120=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_120, "./neo-c.h", 123, 1343)), "./neo-c.h", 123, 1344))->next;
            come_call_finalizer3(prev_it_121,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional118;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional118=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0, 1349)), "tuple1$1sTypephp_finalize", 0, 1350))->v1!=((void*)0),        _if_conditional118) {
            come_call_finalizer3(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0, 1351)), "tuple1$1sTypephp_finalize", 0, 1352))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
}

struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info){
void* __result_obj__;
void* right_value122;
char* __exception_result_var_b111;
char* __dec_obj33;
void* right_value123;
void* right_value124;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b112;
struct list$1tuple2$2charphsTypephph* __dec_obj34;
void* right_value125;
char* __exception_result_var_b113;
char* __dec_obj35;
struct sClass* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value122 = (void*)0;
right_value123 = (void*)0;
right_value124 = (void*)0;
right_value125 = (void*)0;
    ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "02constructors.c", 110, 1394)), "02constructors.c", 110, 1395))->mNumber=number;
    ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "02constructors.c", 111, 1396)), "02constructors.c", 111, 1397))->mStruct=struct_;
    ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "02constructors.c", 112, 1398)), "02constructors.c", 112, 1399))->mUnion=union_;
    ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "02constructors.c", 113, 1400)), "02constructors.c", 113, 1401))->mGenerics=generics;
    ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "02constructors.c", 114, 1402)), "02constructors.c", 114, 1403))->mMethodGenerics=method_generics;
    ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "02constructors.c", 115, 1404)), "02constructors.c", 115, 1405))->mEnum=(_Bool)0;
    ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "02constructors.c", 116, 1406)), "02constructors.c", 116, 1407))->mProtocol=protocol_;
    ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "02constructors.c", 117, 1408)), "02constructors.c", 117, 1409))->mFloat=float_;
    ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "02constructors.c", 118, 1410)), "02constructors.c", 118, 1411))->mEnum=enum_;
    __dec_obj33=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "02constructors.c", 120, 1412)), "02constructors.c", 120, 1413))->mName;
    ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "02constructors.c", 120, 1412)), "02constructors.c", 120, 1413))->mName=(char*)come_increment_ref_count((come_push_stackframe("02constructors.c", 120, 1414),__exception_result_var_b111=((char*)(right_value122=__builtin_string(name))), come_pop_stackframe(), __exception_result_var_b111));
    __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "02constructors.c", 122, 1415)), "02constructors.c", 122, 1416))->mGenericsNum=generics_num;
    ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "02constructors.c", 123, 1417)), "02constructors.c", 123, 1418))->mMethodGenericsNum=method_generics_num;
    __dec_obj34=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "02constructors.c", 125, 1419)), "02constructors.c", 125, 1420))->mFields;
    ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "02constructors.c", 125, 1419)), "02constructors.c", 125, 1420))->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((come_push_stackframe("02constructors.c", 125, 1428),__exception_result_var_b112=((struct list$1tuple2$2charphsTypephph*)(right_value124=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)(right_value123=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "02constructors.c", 125, "list$1tuple2$2charphsTypephph"))), "02constructors.c", 125, 1421)))))), come_pop_stackframe(), __exception_result_var_b112));
    come_call_finalizer3(__dec_obj34,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value123,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value124,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj35=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "02constructors.c", 127, 1433)), "02constructors.c", 127, 1434))->mDeclareSName;
    ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "02constructors.c", 127, 1433)), "02constructors.c", 127, 1434))->mDeclareSName=(char*)come_increment_ref_count((come_push_stackframe("02constructors.c", 127, 1437),__exception_result_var_b113=((char*)(right_value125=__builtin_string(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02constructors.c", 127, 1435)), "02constructors.c", 127, 1436))->sname))), come_pop_stackframe(), __exception_result_var_b113));
    __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result90__ = __result_obj__ = self;
    come_call_finalizer3(self,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result90__;
    come_call_finalizer3(self,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsTypephph* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 101, 1422)), "./neo-c.h", 101, 1423))->head=((void*)0);
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 102, 1424)), "./neo-c.h", 102, 1425))->tail=((void*)0);
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 103, 1426)), "./neo-c.h", 103, 1427))->len=0;
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
        it_122=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 120, 1429)), "./neo-c.h", 120, 1430))->head;
        while(_while_condtional26=it_122!=((void*)0),        _while_condtional26) {
            prev_it_123=it_122;
            it_122=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_122, "./neo-c.h", 123, 1431)), "./neo-c.h", 123, 1432))->next;
            come_call_finalizer3(prev_it_123,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info){
void* __result_obj__;
char* __exception_result_var_b114;
void* right_value126;
char* __dec_obj36;
char* __exception_result_var_b115;
void* right_value127;
char* __dec_obj37;
void* right_value128;
void* right_value129;
struct list$1charph* __exception_result_var_b116;
struct list$1charph* __dec_obj38;
void* right_value130;
char* __exception_result_var_b117;
char* __dec_obj39;
struct sClassModule* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value126 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
    __dec_obj36=((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "02constructors.c", 134, 1438)), "02constructors.c", 134, 1439))->mName;
    ((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "02constructors.c", 134, 1438)), "02constructors.c", 134, 1439))->mName=(char*)come_increment_ref_count(((char*)(right_value126=(come_push_stackframe("02constructors.c", 134, 1440),__exception_result_var_b114=charp_clone(name), come_pop_stackframe(), __exception_result_var_b114))));
    __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj37=((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "02constructors.c", 135, 1441)), "02constructors.c", 135, 1442))->mText;
    ((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "02constructors.c", 135, 1441)), "02constructors.c", 135, 1442))->mText=(char*)come_increment_ref_count(((char*)(right_value127=(come_push_stackframe("02constructors.c", 135, 1443),__exception_result_var_b115=string_clone(text), come_pop_stackframe(), __exception_result_var_b115))));
    __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj38=((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "02constructors.c", 136, 1444)), "02constructors.c", 136, 1445))->mParams;
    ((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "02constructors.c", 136, 1444)), "02constructors.c", 136, 1445))->mParams=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("02constructors.c", 136, 1447),__exception_result_var_b116=((struct list$1charph*)(right_value129=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value128=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02constructors.c", 136, "list$1charph"))), "02constructors.c", 136, 1446)))))), come_pop_stackframe(), __exception_result_var_b116));
    come_call_finalizer3(__dec_obj38,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value128,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value129,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj39=((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "02constructors.c", 137, 1448)), "02constructors.c", 137, 1449))->mSName;
    ((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "02constructors.c", 137, 1448)), "02constructors.c", 137, 1449))->mSName=(char*)come_increment_ref_count((come_push_stackframe("02constructors.c", 137, 1450),__exception_result_var_b117=((char*)(right_value130=__builtin_string(sname))), come_pop_stackframe(), __exception_result_var_b117));
    __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    ((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "02constructors.c", 138, 1451)), "02constructors.c", 138, 1452))->mSLine=sline;
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
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional119=self!=((void*)0)&&((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "sClassModule_finalize", 0, 1453)), "sClassModule_finalize", 0, 1454))->mName!=((void*)0),        _if_conditional119) {
            ((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "sClassModule_finalize", 0, 1455)), "sClassModule_finalize", 0, 1456))->mName = come_decrement_ref_count2(((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "sClassModule_finalize", 0, 1455)), "sClassModule_finalize", 0, 1456))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional120=self!=((void*)0)&&((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "sClassModule_finalize", 1, 1457)), "sClassModule_finalize", 1, 1458))->mText!=((void*)0),        _if_conditional120) {
            ((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "sClassModule_finalize", 1, 1459)), "sClassModule_finalize", 1, 1460))->mText = come_decrement_ref_count2(((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "sClassModule_finalize", 1, 1459)), "sClassModule_finalize", 1, 1460))->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional121=self!=((void*)0)&&((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "sClassModule_finalize", 2, 1461)), "sClassModule_finalize", 2, 1462))->mParams!=((void*)0),        _if_conditional121) {
            come_call_finalizer3(((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "sClassModule_finalize", 2, 1463)), "sClassModule_finalize", 2, 1464))->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional122=self!=((void*)0)&&((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "sClassModule_finalize", 3, 1465)), "sClassModule_finalize", 3, 1466))->mSName!=((void*)0),        _if_conditional122) {
            ((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "sClassModule_finalize", 3, 1467)), "sClassModule_finalize", 3, 1468))->mSName = come_decrement_ref_count2(((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "sClassModule_finalize", 3, 1467)), "sClassModule_finalize", 3, 1468))->mSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info){
void* __result_obj__;
char* __dec_obj40;
struct sType* __dec_obj41;
struct list$1sTypeph* __dec_obj42;
struct list$1charph* __dec_obj43;
struct list$1charph* __dec_obj44;
void* right_value131;
void* right_value132;
struct sType* __exception_result_var_b118;
struct sType* __dec_obj45;
struct list$1sTypeph* o2_saved_124;
struct sType* __exception_result_var_b121;
struct sType* it_127;
_Bool __exception_result_var_b122;
struct sType* __exception_result_var_b125;
struct sType* __exception_result_var_b149;
void* right_value171;
struct list$1sTypeph* __exception_result_var_b150;
struct list$1charph* o2_saved_151;
char* __exception_result_var_b153;
char* it_154;
_Bool __exception_result_var_b154;
char* __exception_result_var_b157;
char* __exception_result_var_b158;
void* right_value175;
struct list$1charph* __exception_result_var_b159;
void* right_value176;
void* right_value177;
struct tuple1$1sTypeph* __exception_result_var_b160;
struct tuple1$1sTypeph* __dec_obj75;
void* right_value178;
void* right_value179;
struct buffer* __exception_result_var_b161;
struct buffer* __dec_obj76;
void* right_value180;
void* right_value181;
struct buffer* __exception_result_var_b162;
struct buffer* __dec_obj77;
void* right_value182;
void* right_value183;
struct buffer* __exception_result_var_b163;
struct buffer* __dec_obj78;
void* right_value184;
void* right_value185;
struct buffer* __exception_result_var_b164;
struct buffer* __dec_obj79;
struct sBlock* __exception_result_var_b200;
void* right_value198;
struct sBlock* __dec_obj84;
char* __dec_obj85;
void* right_value199;
char* __exception_result_var_b201;
char* __dec_obj86;
struct sFun* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value131 = (void*)0;
right_value132 = (void*)0;
memset(&o2_saved_124, 0, sizeof(struct list$1sTypeph*));
memset(&it_127, 0, sizeof(struct sType*));
right_value171 = (void*)0;
memset(&o2_saved_151, 0, sizeof(struct list$1charph*));
memset(&it_154, 0, sizeof(char*));
right_value175 = (void*)0;
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
right_value198 = (void*)0;
right_value199 = (void*)0;
    __dec_obj40=((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "02constructors.c", 145, 1469)), "02constructors.c", 145, 1470))->mName;
    ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "02constructors.c", 145, 1469)), "02constructors.c", 145, 1470))->mName=(char*)come_increment_ref_count(name);
    __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj41=((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "02constructors.c", 146, 1471)), "02constructors.c", 146, 1472))->mResultType;
    ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "02constructors.c", 146, 1471)), "02constructors.c", 146, 1472))->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer3(__dec_obj41,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj42=((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "02constructors.c", 147, 1473)), "02constructors.c", 147, 1474))->mParamTypes;
    ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "02constructors.c", 147, 1473)), "02constructors.c", 147, 1474))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    come_call_finalizer3(__dec_obj42,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj43=((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "02constructors.c", 148, 1475)), "02constructors.c", 148, 1476))->mParamNames;
    ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "02constructors.c", 148, 1475)), "02constructors.c", 148, 1476))->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    come_call_finalizer3(__dec_obj43,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj44=((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "02constructors.c", 149, 1477)), "02constructors.c", 149, 1478))->mParamDefaultParametors;
    ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "02constructors.c", 149, 1477)), "02constructors.c", 149, 1478))->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer3(__dec_obj44,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "02constructors.c", 150, 1479)), "02constructors.c", 150, 1480))->mExternal=external;
    ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "02constructors.c", 151, 1481)), "02constructors.c", 151, 1482))->mVarArgs=var_args;
    ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "02constructors.c", 152, 1483)), "02constructors.c", 152, 1484))->mStatic=static_;
    __dec_obj45=((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "02constructors.c", 154, 1485)), "02constructors.c", 154, 1486))->mLambdaType;
    ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "02constructors.c", 154, 1485)), "02constructors.c", 154, 1486))->mLambdaType=(struct sType*)come_increment_ref_count((come_push_stackframe("02constructors.c", 154, 1488),__exception_result_var_b118=((struct sType*)(right_value132=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value131=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02constructors.c", 154, "sType"))), "02constructors.c", 154, 1487))),"lambda",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b118));
    come_call_finalizer3(__dec_obj45,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value131,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value132,sType_finalize, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_124=(struct list$1sTypeph*)come_increment_ref_count((param_types)),it_127=(come_push_stackframe("02constructors.c", 156, 1503),__exception_result_var_b121=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_124), "02constructors.c", 156, 1489)), "02constructors.c", 156, 1490))), come_pop_stackframe(), __exception_result_var_b121);    !(come_push_stackframe("02constructors.c", 156, 1508),__exception_result_var_b122=list$1sTypeph_end(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_124), "02constructors.c", 156, 1504)), "02constructors.c", 156, 1505))), come_pop_stackframe(), __exception_result_var_b122);    it_127=(come_push_stackframe("02constructors.c", 156, 1527),__exception_result_var_b125=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_124), "02constructors.c", 156, 1509)), "02constructors.c", 156, 1510))), come_pop_stackframe(), __exception_result_var_b125)    ){
        (come_push_stackframe("02constructors.c", 157, 2058),__exception_result_var_b150=list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "02constructors.c", 157, 1528)), "02constructors.c", 157, 1529))->mLambdaType, "02constructors.c", 157, 1530)), "02constructors.c", 157, 1531))->mParamTypes, "02constructors.c", 157, 1532)), "02constructors.c", 157, 1533)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value171=(come_push_stackframe("02constructors.c", 157, 2057),__exception_result_var_b149=sType_clone(it_127), come_pop_stackframe(), __exception_result_var_b149))))), come_pop_stackframe(), __exception_result_var_b150);
        come_call_finalizer3(right_value171,sType_finalize, 0, 1, 0, 0, __result_obj__);
    }
    come_call_finalizer3(o2_saved_124,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_151=(struct list$1charph*)come_increment_ref_count((param_names)),it_154=(come_push_stackframe("02constructors.c", 160, 2073),__exception_result_var_b153=list$1charph_begin(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((o2_saved_151), "02constructors.c", 160, 2059)), "02constructors.c", 160, 2060))), come_pop_stackframe(), __exception_result_var_b153);    !(come_push_stackframe("02constructors.c", 160, 2078),__exception_result_var_b154=list$1charph_end(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((o2_saved_151), "02constructors.c", 160, 2074)), "02constructors.c", 160, 2075))), come_pop_stackframe(), __exception_result_var_b154);    it_154=(come_push_stackframe("02constructors.c", 160, 2097),__exception_result_var_b157=list$1charph_next(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((o2_saved_151), "02constructors.c", 160, 2079)), "02constructors.c", 160, 2080))), come_pop_stackframe(), __exception_result_var_b157)    ){
        (come_push_stackframe("02constructors.c", 161, 2149),__exception_result_var_b159=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "02constructors.c", 161, 2098)), "02constructors.c", 161, 2099))->mLambdaType, "02constructors.c", 161, 2100)), "02constructors.c", 161, 2101))->mParamNames, "02constructors.c", 161, 2102)), "02constructors.c", 161, 2103)),(char*)come_increment_ref_count(((char*)(right_value175=(come_push_stackframe("02constructors.c", 161, 2148),__exception_result_var_b158=string_clone(it_154), come_pop_stackframe(), __exception_result_var_b158))))), come_pop_stackframe(), __exception_result_var_b159);
        right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    come_call_finalizer3(o2_saved_151,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj75=((struct sType*)come_null_check(((struct sType*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "02constructors.c", 164, 2150)), "02constructors.c", 164, 2151))->mLambdaType, "02constructors.c", 164, 2152)), "02constructors.c", 164, 2153))->mResultType;
    ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "02constructors.c", 164, 2150)), "02constructors.c", 164, 2151))->mLambdaType, "02constructors.c", 164, 2152)), "02constructors.c", 164, 2153))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count((come_push_stackframe("02constructors.c", 164, 2155),__exception_result_var_b160=((struct tuple1$1sTypeph*)(right_value177=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)(right_value176=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "02constructors.c", 164, "tuple1$1sTypeph"))), "02constructors.c", 164, 2154))),(struct sType*)come_increment_ref_count(result_type)))), come_pop_stackframe(), __exception_result_var_b160));
    come_call_finalizer3(__dec_obj75,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value176,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value177,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "02constructors.c", 165, 2156)), "02constructors.c", 165, 2157))->mLambdaType, "02constructors.c", 165, 2158)), "02constructors.c", 165, 2159))->mVarArgs=var_args;
    __dec_obj76=((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "02constructors.c", 167, 2160)), "02constructors.c", 167, 2161))->mSource;
    ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "02constructors.c", 167, 2160)), "02constructors.c", 167, 2161))->mSource=(struct buffer*)come_increment_ref_count((come_push_stackframe("02constructors.c", 167, 2163),__exception_result_var_b161=((struct buffer*)(right_value179=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value178=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02constructors.c", 167, "buffer"))), "02constructors.c", 167, 2162)))))), come_pop_stackframe(), __exception_result_var_b161));
    come_call_finalizer3(__dec_obj76,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value178,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value179,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj77=((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "02constructors.c", 168, 2164)), "02constructors.c", 168, 2165))->mSourceHead;
    ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "02constructors.c", 168, 2164)), "02constructors.c", 168, 2165))->mSourceHead=(struct buffer*)come_increment_ref_count((come_push_stackframe("02constructors.c", 168, 2167),__exception_result_var_b162=((struct buffer*)(right_value181=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value180=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02constructors.c", 168, "buffer"))), "02constructors.c", 168, 2166)))))), come_pop_stackframe(), __exception_result_var_b162));
    come_call_finalizer3(__dec_obj77,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value180,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value181,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj78=((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "02constructors.c", 169, 2168)), "02constructors.c", 169, 2169))->mSourceHead2;
    ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "02constructors.c", 169, 2168)), "02constructors.c", 169, 2169))->mSourceHead2=(struct buffer*)come_increment_ref_count((come_push_stackframe("02constructors.c", 169, 2171),__exception_result_var_b163=((struct buffer*)(right_value183=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value182=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02constructors.c", 169, "buffer"))), "02constructors.c", 169, 2170)))))), come_pop_stackframe(), __exception_result_var_b163));
    come_call_finalizer3(__dec_obj78,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value182,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value183,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj79=((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "02constructors.c", 170, 2172)), "02constructors.c", 170, 2173))->mSourceDefer;
    ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "02constructors.c", 170, 2172)), "02constructors.c", 170, 2173))->mSourceDefer=(struct buffer*)come_increment_ref_count((come_push_stackframe("02constructors.c", 170, 2175),__exception_result_var_b164=((struct buffer*)(right_value185=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value184=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02constructors.c", 170, "buffer"))), "02constructors.c", 170, 2174)))))), come_pop_stackframe(), __exception_result_var_b164));
    come_call_finalizer3(__dec_obj79,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value184,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value185,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj84=((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "02constructors.c", 172, 2176)), "02constructors.c", 172, 2177))->mBlock;
    ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "02constructors.c", 172, 2176)), "02constructors.c", 172, 2177))->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value198=(come_push_stackframe("02constructors.c", 172, 2458),__exception_result_var_b200=sBlock_clone(block), come_pop_stackframe(), __exception_result_var_b200))));
    come_call_finalizer3(__dec_obj84,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value198,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj85=((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "02constructors.c", 174, 2459)), "02constructors.c", 174, 2460))->mComeHeader;
    ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "02constructors.c", 174, 2459)), "02constructors.c", 174, 2460))->mComeHeader=(char*)come_increment_ref_count(come_header);
    __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj86=((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "02constructors.c", 176, 2461)), "02constructors.c", 176, 2462))->mDeclareSName;
    ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "02constructors.c", 176, 2461)), "02constructors.c", 176, 2462))->mDeclareSName=(char*)come_increment_ref_count((come_push_stackframe("02constructors.c", 176, 2463),__exception_result_var_b201=((char*)(right_value199=__builtin_string(declare_sname))), come_pop_stackframe(), __exception_result_var_b201));
    __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
_Bool _if_conditional123;
struct sType* result_125;
void* __exception_result_var_b119;
struct sType* __result92__;
_Bool _if_conditional124;
struct sType* __result93__;
struct sType* result_126;
void* __exception_result_var_b120;
struct sType* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_125, 0, sizeof(struct sType*));
memset(&result_126, 0, sizeof(struct sType*));
        if(_if_conditional123=self==((void*)0),        _if_conditional123) {
            (come_push_stackframe("./neo-c.h", 284, 1491),__exception_result_var_b119=memset(&result_125,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b119);
            __result92__ = __result_obj__ = result_125;
            return __result92__;
        }
        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 287, 1492)), "./neo-c.h", 287, 1493))->it=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 287, 1494)), "./neo-c.h", 287, 1495))->head;
        if(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 289, 1496)), "./neo-c.h", 289, 1497))->it) {
            __result93__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 290, 1498)), "./neo-c.h", 290, 1499))->it, "./neo-c.h", 290, 1500)), "./neo-c.h", 290, 1501))->item;
            return __result93__;
        }
        (come_push_stackframe("./neo-c.h", 294, 1502),__exception_result_var_b120=memset(&result_126,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b120);
        __result94__ = __result_obj__ = result_126;
        return __result94__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result95__;
memset(&__result_obj__, 0, sizeof(void*));
        __result95__ = self==((void*)0)||((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 317, 1506)), "./neo-c.h", 317, 1507))->it==((void*)0);
        return __result95__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional125;
struct sType* result_128;
void* __exception_result_var_b123;
struct sType* __result96__;
_Bool _if_conditional126;
struct sType* __result97__;
struct sType* result_129;
void* __exception_result_var_b124;
struct sType* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_128, 0, sizeof(struct sType*));
memset(&result_129, 0, sizeof(struct sType*));
        if(_if_conditional125=self==((void*)0)||((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 299, 1511)), "./neo-c.h", 299, 1512))->it==((void*)0),        _if_conditional125) {
            (come_push_stackframe("./neo-c.h", 301, 1513),__exception_result_var_b123=memset(&result_128,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b123);
            __result96__ = __result_obj__ = result_128;
            return __result96__;
        }
        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 305, 1514)), "./neo-c.h", 305, 1515))->it=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 305, 1516)), "./neo-c.h", 305, 1517))->it, "./neo-c.h", 305, 1518)), "./neo-c.h", 305, 1519))->next;
        if(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 307, 1520)), "./neo-c.h", 307, 1521))->it) {
            __result97__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 308, 1522)), "./neo-c.h", 308, 1523))->it, "./neo-c.h", 308, 1524)), "./neo-c.h", 308, 1525))->item;
            return __result97__;
        }
        (come_push_stackframe("./neo-c.h", 312, 1526),__exception_result_var_b124=memset(&result_129,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b124);
        __result98__ = __result_obj__ = result_129;
        return __result98__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional127;
void* right_value133;
struct list_item$1sTypeph* litem_130;
struct sType* __dec_obj46;
_Bool _if_conditional128;
void* right_value134;
struct list_item$1sTypeph* litem_131;
struct sType* __dec_obj47;
void* right_value135;
struct list_item$1sTypeph* litem_132;
struct sType* __dec_obj48;
struct list$1sTypeph* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
right_value133 = (void*)0;
memset(&litem_130, 0, sizeof(struct list_item$1sTypeph*));
right_value134 = (void*)0;
memset(&litem_131, 0, sizeof(struct list_item$1sTypeph*));
right_value135 = (void*)0;
memset(&litem_132, 0, sizeof(struct list_item$1sTypeph*));
            if(_if_conditional127=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 222, 1534)), "./neo-c.h", 222, 1535))->len==0,            _if_conditional127) {
                litem_130=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value133=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 223, "list_item$1sTypeph"))));
                come_call_finalizer3(right_value133,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_130, "./neo-c.h", 225, 1536)), "./neo-c.h", 225, 1537))->prev=((void*)0);
                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_130, "./neo-c.h", 226, 1538)), "./neo-c.h", 226, 1539))->next=((void*)0);
                __dec_obj46=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_130, "./neo-c.h", 227, 1540)), "./neo-c.h", 227, 1541))->item;
                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_130, "./neo-c.h", 227, 1540)), "./neo-c.h", 227, 1541))->item=(struct sType*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 0, 0, (void*)0);
                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 229, 1542)), "./neo-c.h", 229, 1543))->tail=litem_130;
                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 230, 1544)), "./neo-c.h", 230, 1545))->head=litem_130;
            }
            else {
                if(_if_conditional128=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 232, 1546)), "./neo-c.h", 232, 1547))->len==1,                _if_conditional128) {
                    litem_131=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value134=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 233, "list_item$1sTypeph"))));
                    come_call_finalizer3(right_value134,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_131, "./neo-c.h", 235, 1548)), "./neo-c.h", 235, 1549))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 235, 1550)), "./neo-c.h", 235, 1551))->head;
                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_131, "./neo-c.h", 236, 1552)), "./neo-c.h", 236, 1553))->next=((void*)0);
                    __dec_obj47=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_131, "./neo-c.h", 237, 1554)), "./neo-c.h", 237, 1555))->item;
                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_131, "./neo-c.h", 237, 1554)), "./neo-c.h", 237, 1555))->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 0, 0, (void*)0);
                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 239, 1556)), "./neo-c.h", 239, 1557))->tail=litem_131;
                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 240, 1558)), "./neo-c.h", 240, 1559))->head, "./neo-c.h", 240, 1560)), "./neo-c.h", 240, 1561))->next=litem_131;
                }
                else {
                    litem_132=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value135=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 243, "list_item$1sTypeph"))));
                    come_call_finalizer3(right_value135,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_132, "./neo-c.h", 245, 1562)), "./neo-c.h", 245, 1563))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 245, 1564)), "./neo-c.h", 245, 1565))->tail;
                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_132, "./neo-c.h", 246, 1566)), "./neo-c.h", 246, 1567))->next=((void*)0);
                    __dec_obj48=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_132, "./neo-c.h", 247, 1568)), "./neo-c.h", 247, 1569))->item;
                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_132, "./neo-c.h", 247, 1568)), "./neo-c.h", 247, 1569))->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj48,sType_finalize, 0, 0, 0, 0, (void*)0);
                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 249, 1570)), "./neo-c.h", 249, 1571))->tail, "./neo-c.h", 249, 1572)), "./neo-c.h", 249, 1573))->next=litem_132;
                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 250, 1574)), "./neo-c.h", 250, 1575))->tail=litem_132;
                }
            }
            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 253, 1576)), "./neo-c.h", 253, 1577))->len++;
            __result99__ = __result_obj__ = self;
            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result99__;
            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional129;
struct sType* __result100__;
void* right_value136;
struct sType* result_133;
_Bool _if_conditional130;
_Bool _if_conditional131;
struct list$1sTypeph* __exception_result_var_b129;
void* right_value143;
struct list$1sTypeph* __dec_obj52;
_Bool _if_conditional135;
struct tuple1$1sTypeph* __exception_result_var_b131;
void* right_value146;
struct tuple1$1sTypeph* __dec_obj54;
_Bool _if_conditional139;
struct tuple1$1sTypeph* __exception_result_var_b132;
void* right_value147;
struct tuple1$1sTypeph* __dec_obj55;
_Bool _if_conditional140;
char* __exception_result_var_b133;
void* right_value148;
char* __dec_obj56;
_Bool _if_conditional141;
struct list$1sTypeph* __exception_result_var_b134;
void* right_value149;
struct list$1sTypeph* __dec_obj57;
_Bool _if_conditional142;
struct list$1sNodeph* __exception_result_var_b138;
void* right_value157;
struct list$1sNodeph* __dec_obj61;
_Bool _if_conditional155;
_Bool _if_conditional156;
struct list$1sTypeph* __exception_result_var_b139;
void* right_value158;
struct list$1sTypeph* __dec_obj62;
_Bool _if_conditional157;
struct list$1charph* __exception_result_var_b143;
void* right_value165;
struct list$1charph* __dec_obj66;
_Bool _if_conditional161;
struct tuple1$1sTypeph* __exception_result_var_b144;
void* right_value166;
struct tuple1$1sTypeph* __dec_obj67;
_Bool _if_conditional162;
_Bool _if_conditional163;
struct sNode* __exception_result_var_b145;
void* right_value167;
struct sNode* __dec_obj68;
_Bool _if_conditional164;
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
struct sNode* __exception_result_var_b146;
void* right_value168;
struct sNode* __dec_obj69;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool _if_conditional193;
char* __exception_result_var_b147;
void* right_value169;
char* __dec_obj70;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional201;
_Bool _if_conditional202;
_Bool _if_conditional203;
char* __exception_result_var_b148;
void* right_value170;
char* __dec_obj71;
_Bool _if_conditional204;
_Bool _if_conditional205;
_Bool _if_conditional206;
struct sType* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
right_value136 = (void*)0;
memset(&result_133, 0, sizeof(struct sType*));
right_value143 = (void*)0;
right_value146 = (void*)0;
right_value147 = (void*)0;
right_value148 = (void*)0;
right_value149 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
right_value168 = (void*)0;
right_value169 = (void*)0;
right_value170 = (void*)0;
            if(_if_conditional129=self==(void*)0,            _if_conditional129) {
                __result100__ = __result_obj__ = (void*)0;
                return __result100__;
            }
            result_133=(struct sType*)come_increment_ref_count(((struct sType*)(right_value136=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
            come_call_finalizer3(right_value136,sType_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional130=self!=((void*)0),            _if_conditional130) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 4, 1578)), "sType_clone", 4, 1579))->mClass=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 4, 1580)), "sType_clone", 4, 1581))->mClass;
            }
            if(_if_conditional131=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 5, 1582)), "sType_clone", 5, 1583))->mMultipleTypes!=((void*)0),            _if_conditional131) {
                __dec_obj52=((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 5, 1584)), "sType_clone", 5, 1585))->mMultipleTypes;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 5, 1584)), "sType_clone", 5, 1585))->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value143=(come_push_stackframe("sType_clone", 5, 1645),__exception_result_var_b129=list$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 5, 1586)), "sType_clone", 5, 1587))->mMultipleTypes), come_pop_stackframe(), __exception_result_var_b129))));
                come_call_finalizer3(__dec_obj52,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value143,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional135=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 6, 1646)), "sType_clone", 6, 1647))->mNoSolvedGenericsType!=((void*)0),            _if_conditional135) {
                __dec_obj54=((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 6, 1648)), "sType_clone", 6, 1649))->mNoSolvedGenericsType;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 6, 1648)), "sType_clone", 6, 1649))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value146=(come_push_stackframe("sType_clone", 6, 1663),__exception_result_var_b131=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 6, 1650)), "sType_clone", 6, 1651))->mNoSolvedGenericsType), come_pop_stackframe(), __exception_result_var_b131))));
                come_call_finalizer3(__dec_obj54,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value146,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional139=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 7, 1664)), "sType_clone", 7, 1665))->mOriginalLoadVarType!=((void*)0),            _if_conditional139) {
                __dec_obj55=((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 7, 1666)), "sType_clone", 7, 1667))->mOriginalLoadVarType;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 7, 1666)), "sType_clone", 7, 1667))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value147=(come_push_stackframe("sType_clone", 7, 1670),__exception_result_var_b132=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 7, 1668)), "sType_clone", 7, 1669))->mOriginalLoadVarType), come_pop_stackframe(), __exception_result_var_b132))));
                come_call_finalizer3(__dec_obj55,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value147,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional140=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 8, 1671)), "sType_clone", 8, 1672))->mGenericsName!=((void*)0),            _if_conditional140) {
                __dec_obj56=((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 8, 1673)), "sType_clone", 8, 1674))->mGenericsName;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 8, 1673)), "sType_clone", 8, 1674))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value148=(come_push_stackframe("sType_clone", 8, 1677),__exception_result_var_b133=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 8, 1675)), "sType_clone", 8, 1676))->mGenericsName), come_pop_stackframe(), __exception_result_var_b133))));
                __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional141=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 9, 1678)), "sType_clone", 9, 1679))->mGenericsTypes!=((void*)0),            _if_conditional141) {
                __dec_obj57=((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 9, 1680)), "sType_clone", 9, 1681))->mGenericsTypes;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 9, 1680)), "sType_clone", 9, 1681))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value149=(come_push_stackframe("sType_clone", 9, 1684),__exception_result_var_b134=list$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 9, 1682)), "sType_clone", 9, 1683))->mGenericsTypes), come_pop_stackframe(), __exception_result_var_b134))));
                come_call_finalizer3(__dec_obj57,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value149,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional142=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 10, 1685)), "sType_clone", 10, 1686))->mArrayNum!=((void*)0),            _if_conditional142) {
                __dec_obj61=((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 10, 1687)), "sType_clone", 10, 1688))->mArrayNum;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 10, 1687)), "sType_clone", 10, 1688))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value157=(come_push_stackframe("sType_clone", 10, 1782),__exception_result_var_b138=list$1sNodephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 10, 1689)), "sType_clone", 10, 1690))->mArrayNum), come_pop_stackframe(), __exception_result_var_b138))));
                come_call_finalizer3(__dec_obj61,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value157,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional155=self!=((void*)0),            _if_conditional155) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 11, 1783)), "sType_clone", 11, 1784))->mOmitArrayNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 11, 1785)), "sType_clone", 11, 1786))->mOmitArrayNum;
            }
            if(_if_conditional156=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 12, 1787)), "sType_clone", 12, 1788))->mParamTypes!=((void*)0),            _if_conditional156) {
                __dec_obj62=((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 12, 1789)), "sType_clone", 12, 1790))->mParamTypes;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 12, 1789)), "sType_clone", 12, 1790))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value158=(come_push_stackframe("sType_clone", 12, 1793),__exception_result_var_b139=list$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 12, 1791)), "sType_clone", 12, 1792))->mParamTypes), come_pop_stackframe(), __exception_result_var_b139))));
                come_call_finalizer3(__dec_obj62,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value158,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional157=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 13, 1794)), "sType_clone", 13, 1795))->mParamNames!=((void*)0),            _if_conditional157) {
                __dec_obj66=((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 13, 1796)), "sType_clone", 13, 1797))->mParamNames;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 13, 1796)), "sType_clone", 13, 1797))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value165=(come_push_stackframe("sType_clone", 13, 1857),__exception_result_var_b143=list$1charphp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 13, 1798)), "sType_clone", 13, 1799))->mParamNames), come_pop_stackframe(), __exception_result_var_b143))));
                come_call_finalizer3(__dec_obj66,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value165,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional161=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 14, 1858)), "sType_clone", 14, 1859))->mResultType!=((void*)0),            _if_conditional161) {
                __dec_obj67=((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 14, 1860)), "sType_clone", 14, 1861))->mResultType;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 14, 1860)), "sType_clone", 14, 1861))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value166=(come_push_stackframe("sType_clone", 14, 1864),__exception_result_var_b144=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 14, 1862)), "sType_clone", 14, 1863))->mResultType), come_pop_stackframe(), __exception_result_var_b144))));
                come_call_finalizer3(__dec_obj67,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value166,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional162=self!=((void*)0),            _if_conditional162) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 15, 1865)), "sType_clone", 15, 1866))->mVarArgs=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 15, 1867)), "sType_clone", 15, 1868))->mVarArgs;
            }
            if(_if_conditional163=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 16, 1869)), "sType_clone", 16, 1870))->mAlignas!=((void*)0),            _if_conditional163) {
                __dec_obj68=((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 16, 1871)), "sType_clone", 16, 1872))->mAlignas;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 16, 1871)), "sType_clone", 16, 1872))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value167=(come_push_stackframe("sType_clone", 16, 1875),__exception_result_var_b145=sNode_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 16, 1873)), "sType_clone", 16, 1874))->mAlignas), come_pop_stackframe(), __exception_result_var_b145))));
                if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value167) { right_value167 = come_decrement_ref_count2(right_value167, ((struct sNode*)right_value167)->finalize, ((struct sNode*)right_value167)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional164=self!=((void*)0),            _if_conditional164) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 17, 1876)), "sType_clone", 17, 1877))->mUnsigned=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 17, 1878)), "sType_clone", 17, 1879))->mUnsigned;
            }
            if(_if_conditional165=self!=((void*)0),            _if_conditional165) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 18, 1880)), "sType_clone", 18, 1881))->mShort=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 18, 1882)), "sType_clone", 18, 1883))->mShort;
            }
            if(_if_conditional166=self!=((void*)0),            _if_conditional166) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 19, 1884)), "sType_clone", 19, 1885))->mLong=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 19, 1886)), "sType_clone", 19, 1887))->mLong;
            }
            if(_if_conditional167=self!=((void*)0),            _if_conditional167) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 20, 1888)), "sType_clone", 20, 1889))->mLongLong=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 20, 1890)), "sType_clone", 20, 1891))->mLongLong;
            }
            if(_if_conditional168=self!=((void*)0),            _if_conditional168) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 21, 1892)), "sType_clone", 21, 1893))->mConstant=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 21, 1894)), "sType_clone", 21, 1895))->mConstant;
            }
            if(_if_conditional169=self!=((void*)0),            _if_conditional169) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 22, 1896)), "sType_clone", 22, 1897))->mRegister=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 22, 1898)), "sType_clone", 22, 1899))->mRegister;
            }
            if(_if_conditional170=self!=((void*)0),            _if_conditional170) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 23, 1900)), "sType_clone", 23, 1901))->mVolatile=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 23, 1902)), "sType_clone", 23, 1903))->mVolatile;
            }
            if(_if_conditional171=self!=((void*)0),            _if_conditional171) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 24, 1904)), "sType_clone", 24, 1905))->mStatic=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 24, 1906)), "sType_clone", 24, 1907))->mStatic;
            }
            if(_if_conditional172=self!=((void*)0),            _if_conditional172) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 25, 1908)), "sType_clone", 25, 1909))->mUniq=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 25, 1910)), "sType_clone", 25, 1911))->mUniq;
            }
            if(_if_conditional173=self!=((void*)0),            _if_conditional173) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 26, 1912)), "sType_clone", 26, 1913))->mRecord=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 26, 1914)), "sType_clone", 26, 1915))->mRecord;
            }
            if(_if_conditional174=self!=((void*)0),            _if_conditional174) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 27, 1916)), "sType_clone", 27, 1917))->mExtern=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 27, 1918)), "sType_clone", 27, 1919))->mExtern;
            }
            if(_if_conditional175=self!=((void*)0),            _if_conditional175) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 28, 1920)), "sType_clone", 28, 1921))->mRestrict=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 28, 1922)), "sType_clone", 28, 1923))->mRestrict;
            }
            if(_if_conditional176=self!=((void*)0),            _if_conditional176) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 29, 1924)), "sType_clone", 29, 1925))->mImmutable=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 29, 1926)), "sType_clone", 29, 1927))->mImmutable;
            }
            if(_if_conditional177=self!=((void*)0),            _if_conditional177) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 30, 1928)), "sType_clone", 30, 1929))->mHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 30, 1930)), "sType_clone", 30, 1931))->mHeap;
            }
            if(_if_conditional178=self!=((void*)0),            _if_conditional178) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 31, 1932)), "sType_clone", 31, 1933))->mDummyHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 31, 1934)), "sType_clone", 31, 1935))->mDummyHeap;
            }
            if(_if_conditional179=self!=((void*)0),            _if_conditional179) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 32, 1936)), "sType_clone", 32, 1937))->mDelegate=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 32, 1938)), "sType_clone", 32, 1939))->mDelegate;
            }
            if(_if_conditional180=self!=((void*)0),            _if_conditional180) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 33, 1940)), "sType_clone", 33, 1941))->mShare=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 33, 1942)), "sType_clone", 33, 1943))->mShare;
            }
            if(_if_conditional181=self!=((void*)0),            _if_conditional181) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 34, 1944)), "sType_clone", 34, 1945))->mClone=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 34, 1946)), "sType_clone", 34, 1947))->mClone;
            }
            if(_if_conditional182=self!=((void*)0),            _if_conditional182) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 35, 1948)), "sType_clone", 35, 1949))->mNoHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 35, 1950)), "sType_clone", 35, 1951))->mNoHeap;
            }
            if(_if_conditional183=self!=((void*)0),            _if_conditional183) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 36, 1952)), "sType_clone", 36, 1953))->mNoCallingDestructor=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 36, 1954)), "sType_clone", 36, 1955))->mNoCallingDestructor;
            }
            if(_if_conditional184=self!=((void*)0),            _if_conditional184) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 37, 1956)), "sType_clone", 37, 1957))->mRefference=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 37, 1958)), "sType_clone", 37, 1959))->mRefference;
            }
            if(_if_conditional185=self!=((void*)0),            _if_conditional185) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 38, 1960)), "sType_clone", 38, 1961))->mException=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 38, 1962)), "sType_clone", 38, 1963))->mException;
            }
            if(_if_conditional186=self!=((void*)0),            _if_conditional186) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 39, 1964)), "sType_clone", 39, 1965))->mPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 39, 1966)), "sType_clone", 39, 1967))->mPointerNum;
            }
            if(_if_conditional187=self!=((void*)0),            _if_conditional187) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 40, 1968)), "sType_clone", 40, 1969))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 40, 1970)), "sType_clone", 40, 1971))->mOriginalTypeNamePointerNum;
            }
            if(_if_conditional188=self!=((void*)0),            _if_conditional188) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 41, 1972)), "sType_clone", 41, 1973))->mNoArrayPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 41, 1974)), "sType_clone", 41, 1975))->mNoArrayPointerNum;
            }
            if(_if_conditional189=self!=((void*)0),            _if_conditional189) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 42, 1976)), "sType_clone", 42, 1977))->mTypedefOriginalPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 42, 1978)), "sType_clone", 42, 1979))->mTypedefOriginalPointerNum;
            }
            if(_if_conditional190=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 43, 1980)), "sType_clone", 43, 1981))->mSizeNum!=((void*)0),            _if_conditional190) {
                __dec_obj69=((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 43, 1982)), "sType_clone", 43, 1983))->mSizeNum;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 43, 1982)), "sType_clone", 43, 1983))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value168=(come_push_stackframe("sType_clone", 43, 1986),__exception_result_var_b146=sNode_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 43, 1984)), "sType_clone", 43, 1985))->mSizeNum), come_pop_stackframe(), __exception_result_var_b146))));
                if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value168) { right_value168 = come_decrement_ref_count2(right_value168, ((struct sNode*)right_value168)->finalize, ((struct sNode*)right_value168)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional191=self!=((void*)0),            _if_conditional191) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 44, 1987)), "sType_clone", 44, 1988))->mDynamicArrayNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 44, 1989)), "sType_clone", 44, 1990))->mDynamicArrayNum;
            }
            if(_if_conditional192=self!=((void*)0),            _if_conditional192) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 45, 1991)), "sType_clone", 45, 1992))->mTypeOfExpression=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 45, 1993)), "sType_clone", 45, 1994))->mTypeOfExpression;
            }
            if(_if_conditional193=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 46, 1995)), "sType_clone", 46, 1996))->mOriginalTypeName!=((void*)0),            _if_conditional193) {
                __dec_obj70=((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 46, 1997)), "sType_clone", 46, 1998))->mOriginalTypeName;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 46, 1997)), "sType_clone", 46, 1998))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value169=(come_push_stackframe("sType_clone", 46, 2001),__exception_result_var_b147=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 46, 1999)), "sType_clone", 46, 2000))->mOriginalTypeName), come_pop_stackframe(), __exception_result_var_b147))));
                __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional194=self!=((void*)0),            _if_conditional194) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 47, 2002)), "sType_clone", 47, 2003))->mOriginalPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 47, 2004)), "sType_clone", 47, 2005))->mOriginalPointerNum;
            }
            if(_if_conditional195=self!=((void*)0),            _if_conditional195) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 48, 2006)), "sType_clone", 48, 2007))->mFunctionParam=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 48, 2008)), "sType_clone", 48, 2009))->mFunctionParam;
            }
            if(_if_conditional196=self!=((void*)0),            _if_conditional196) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 49, 2010)), "sType_clone", 49, 2011))->mAllocaValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 49, 2012)), "sType_clone", 49, 2013))->mAllocaValue;
            }
            if(_if_conditional197=self!=((void*)0),            _if_conditional197) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 50, 2014)), "sType_clone", 50, 2015))->mGenericsStruct=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 50, 2016)), "sType_clone", 50, 2017))->mGenericsStruct;
            }
            if(_if_conditional198=self!=((void*)0),            _if_conditional198) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 51, 2018)), "sType_clone", 51, 2019))->mSolvedGenericsName=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 51, 2020)), "sType_clone", 51, 2021))->mSolvedGenericsName;
            }
            if(_if_conditional199=self!=((void*)0),            _if_conditional199) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 52, 2022)), "sType_clone", 52, 2023))->mComeMemCore=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 52, 2024)), "sType_clone", 52, 2025))->mComeMemCore;
            }
            if(_if_conditional200=self!=((void*)0),            _if_conditional200) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 53, 2026)), "sType_clone", 53, 2027))->mInline=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 53, 2028)), "sType_clone", 53, 2029))->mInline;
            }
            if(_if_conditional201=self!=((void*)0),            _if_conditional201) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 54, 2030)), "sType_clone", 54, 2031))->mNullValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 54, 2032)), "sType_clone", 54, 2033))->mNullValue;
            }
            if(_if_conditional202=self!=((void*)0),            _if_conditional202) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 55, 2034)), "sType_clone", 55, 2035))->mGuardValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 55, 2036)), "sType_clone", 55, 2037))->mGuardValue;
            }
            if(_if_conditional203=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 56, 2038)), "sType_clone", 56, 2039))->mAsmName!=((void*)0),            _if_conditional203) {
                __dec_obj71=((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 56, 2040)), "sType_clone", 56, 2041))->mAsmName;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 56, 2040)), "sType_clone", 56, 2041))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value170=(come_push_stackframe("sType_clone", 56, 2044),__exception_result_var_b148=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 56, 2042)), "sType_clone", 56, 2043))->mAsmName), come_pop_stackframe(), __exception_result_var_b148))));
                __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional204=self!=((void*)0),            _if_conditional204) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 57, 2045)), "sType_clone", 57, 2046))->mArrayPointerType=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 57, 2047)), "sType_clone", 57, 2048))->mArrayPointerType;
            }
            if(_if_conditional205=self!=((void*)0),            _if_conditional205) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 58, 2049)), "sType_clone", 58, 2050))->mLambdaArray=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 58, 2051)), "sType_clone", 58, 2052))->mLambdaArray;
            }
            if(_if_conditional206=self!=((void*)0),            _if_conditional206) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_133, "sType_clone", 59, 2053)), "sType_clone", 59, 2054))->mNoNumberArray=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 59, 2055)), "sType_clone", 59, 2056))->mNoNumberArray;
            }
            __result114__ = __result_obj__ = result_133;
            come_call_finalizer3(result_133,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result114__;
            come_call_finalizer3(result_133,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional132;
struct list$1sTypeph* __result101__;
void* right_value137;
void* right_value138;
struct list$1sTypeph* __exception_result_var_b126;
struct list$1sTypeph* result_134;
struct list_item$1sTypeph* it_135;
_Bool _while_condtional27;
struct sType* __exception_result_var_b127;
void* right_value142;
struct list$1sTypeph* __exception_result_var_b128;
struct list$1sTypeph* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
right_value137 = (void*)0;
right_value138 = (void*)0;
memset(&result_134, 0, sizeof(struct list$1sTypeph*));
memset(&it_135, 0, sizeof(struct list_item$1sTypeph*));
right_value142 = (void*)0;
                    if(_if_conditional132=self==((void*)0),                    _if_conditional132) {
                        __result101__ = __result_obj__ = ((void*)0);
                        return __result101__;
                    }
                    result_134=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 1590),__exception_result_var_b126=((struct list$1sTypeph*)(right_value138=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value137=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 139, "list$1sTypeph"))), "./neo-c.h", 139, 1588)), "./neo-c.h", 139, 1589)))))), come_pop_stackframe(), __exception_result_var_b126));
                    come_call_finalizer3(right_value137,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value138,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_135=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 141, 1591)), "./neo-c.h", 141, 1592))->head;
                    while(_while_condtional27=it_135!=((void*)0),                    _while_condtional27) {
                        (come_push_stackframe("./neo-c.h", 143, 1642),__exception_result_var_b128=list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(result_134, "./neo-c.h", 143, 1593)), "./neo-c.h", 143, 1594)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value142=(come_push_stackframe("./neo-c.h", 143, 1641),__exception_result_var_b127=sType_clone(((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_135, "./neo-c.h", 143, 1639)), "./neo-c.h", 143, 1640))->item), come_pop_stackframe(), __exception_result_var_b127))))), come_pop_stackframe(), __exception_result_var_b128);
                        come_call_finalizer3(right_value142,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        it_135=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_135, "./neo-c.h", 145, 1643)), "./neo-c.h", 145, 1644))->next;
                    }
                    __result103__ = __result_obj__ = result_134;
                    come_call_finalizer3(result_134,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result103__;
                    come_call_finalizer3(result_134,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional133;
void* right_value139;
struct list_item$1sTypeph* litem_136;
struct sType* __dec_obj49;
_Bool _if_conditional134;
void* right_value140;
struct list_item$1sTypeph* litem_137;
struct sType* __dec_obj50;
void* right_value141;
struct list_item$1sTypeph* litem_138;
struct sType* __dec_obj51;
struct list$1sTypeph* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
right_value139 = (void*)0;
memset(&litem_136, 0, sizeof(struct list_item$1sTypeph*));
right_value140 = (void*)0;
memset(&litem_137, 0, sizeof(struct list_item$1sTypeph*));
right_value141 = (void*)0;
memset(&litem_138, 0, sizeof(struct list_item$1sTypeph*));
                            if(_if_conditional133=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 152, 1595)), "./neo-c.h", 152, 1596))->len==0,                            _if_conditional133) {
                                litem_136=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value139=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 153, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value139,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_136, "./neo-c.h", 155, 1597)), "./neo-c.h", 155, 1598))->prev=((void*)0);
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_136, "./neo-c.h", 156, 1599)), "./neo-c.h", 156, 1600))->next=((void*)0);
                                __dec_obj49=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_136, "./neo-c.h", 157, 1601)), "./neo-c.h", 157, 1602))->item;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_136, "./neo-c.h", 157, 1601)), "./neo-c.h", 157, 1602))->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj49,sType_finalize, 0, 0, 0, 0, (void*)0);
                                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 159, 1603)), "./neo-c.h", 159, 1604))->tail=litem_136;
                                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 160, 1605)), "./neo-c.h", 160, 1606))->head=litem_136;
                            }
                            else {
                                if(_if_conditional134=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 162, 1607)), "./neo-c.h", 162, 1608))->len==1,                                _if_conditional134) {
                                    litem_137=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value140=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 163, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value140,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_137, "./neo-c.h", 165, 1609)), "./neo-c.h", 165, 1610))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 165, 1611)), "./neo-c.h", 165, 1612))->head;
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_137, "./neo-c.h", 166, 1613)), "./neo-c.h", 166, 1614))->next=((void*)0);
                                    __dec_obj50=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_137, "./neo-c.h", 167, 1615)), "./neo-c.h", 167, 1616))->item;
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_137, "./neo-c.h", 167, 1615)), "./neo-c.h", 167, 1616))->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj50,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 169, 1617)), "./neo-c.h", 169, 1618))->tail=litem_137;
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 170, 1619)), "./neo-c.h", 170, 1620))->head, "./neo-c.h", 170, 1621)), "./neo-c.h", 170, 1622))->next=litem_137;
                                }
                                else {
                                    litem_138=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value141=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 173, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value141,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_138, "./neo-c.h", 175, 1623)), "./neo-c.h", 175, 1624))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 175, 1625)), "./neo-c.h", 175, 1626))->tail;
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_138, "./neo-c.h", 176, 1627)), "./neo-c.h", 176, 1628))->next=((void*)0);
                                    __dec_obj51=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_138, "./neo-c.h", 177, 1629)), "./neo-c.h", 177, 1630))->item;
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_138, "./neo-c.h", 177, 1629)), "./neo-c.h", 177, 1630))->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 179, 1631)), "./neo-c.h", 179, 1632))->tail, "./neo-c.h", 179, 1633)), "./neo-c.h", 179, 1634))->next=litem_138;
                                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 180, 1635)), "./neo-c.h", 180, 1636))->tail=litem_138;
                                }
                            }
                            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 183, 1637)), "./neo-c.h", 183, 1638))->len++;
                            __result102__ = __result_obj__ = self;
                            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                            return __result102__;
                            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional136;
struct tuple1$1sTypeph* __result104__;
void* right_value144;
struct tuple1$1sTypeph* result_139;
_Bool _if_conditional138;
struct sType* __exception_result_var_b130;
void* right_value145;
struct sType* __dec_obj53;
struct tuple1$1sTypeph* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value144 = (void*)0;
memset(&result_139, 0, sizeof(struct tuple1$1sTypeph*));
right_value145 = (void*)0;
                    if(_if_conditional136=self==(void*)0,                    _if_conditional136) {
                        __result104__ = __result_obj__ = (void*)0;
                        return __result104__;
                    }
                    result_139=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value144=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                    come_call_finalizer3(right_value144,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional138=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4, 1656)), "tuple1$1sTypephp_clone", 4, 1657))->v1!=((void*)0),                    _if_conditional138) {
                        __dec_obj53=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(result_139, "tuple1$1sTypephp_clone", 4, 1658)), "tuple1$1sTypephp_clone", 4, 1659))->v1;
                        ((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(result_139, "tuple1$1sTypephp_clone", 4, 1658)), "tuple1$1sTypephp_clone", 4, 1659))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value145=(come_push_stackframe("tuple1$1sTypephp_clone", 4, 1662),__exception_result_var_b130=sType_clone(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4, 1660)), "tuple1$1sTypephp_clone", 4, 1661))->v1), come_pop_stackframe(), __exception_result_var_b130))));
                        come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value145,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    __result105__ = __result_obj__ = result_139;
                    come_call_finalizer3(result_139,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                    return __result105__;
                    come_call_finalizer3(result_139,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional137;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional137=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0, 1652)), "tuple1$1sTypeph_finalize", 0, 1653))->v1!=((void*)0),                        _if_conditional137) {
                            come_call_finalizer3(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0, 1654)), "tuple1$1sTypeph_finalize", 0, 1655))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional143;
struct list$1sNodeph* __result106__;
void* right_value150;
void* right_value151;
struct list$1sNodeph* __exception_result_var_b135;
struct list$1sNodeph* result_140;
struct list_item$1sNodeph* it_141;
_Bool _while_condtional28;
struct sNode* __exception_result_var_b136;
void* right_value156;
struct list$1sNodeph* __exception_result_var_b137;
struct list$1sNodeph* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
right_value150 = (void*)0;
right_value151 = (void*)0;
memset(&result_140, 0, sizeof(struct list$1sNodeph*));
memset(&it_141, 0, sizeof(struct list_item$1sNodeph*));
right_value156 = (void*)0;
                    if(_if_conditional143=self==((void*)0),                    _if_conditional143) {
                        __result106__ = __result_obj__ = ((void*)0);
                        return __result106__;
                    }
                    result_140=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 1693),__exception_result_var_b135=((struct list$1sNodeph*)(right_value151=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value150=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 139, "list$1sNodeph"))), "./neo-c.h", 139, 1691)), "./neo-c.h", 139, 1692)))))), come_pop_stackframe(), __exception_result_var_b135));
                    come_call_finalizer3(right_value150,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value151,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_141=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 141, 1694)), "./neo-c.h", 141, 1695))->head;
                    while(_while_condtional28=it_141!=((void*)0),                    _while_condtional28) {
                        (come_push_stackframe("./neo-c.h", 143, 1779),__exception_result_var_b137=list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(result_140, "./neo-c.h", 143, 1696)), "./neo-c.h", 143, 1697)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value156=(come_push_stackframe("./neo-c.h", 143, 1778),__exception_result_var_b136=sNode_clone(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_141, "./neo-c.h", 143, 1742)), "./neo-c.h", 143, 1743))->item), come_pop_stackframe(), __exception_result_var_b136))))), come_pop_stackframe(), __exception_result_var_b137);
                        if(right_value156) { right_value156 = come_decrement_ref_count2(right_value156, ((struct sNode*)right_value156)->finalize, ((struct sNode*)right_value156)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        it_141=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_141, "./neo-c.h", 145, 1780)), "./neo-c.h", 145, 1781))->next;
                    }
                    __result110__ = __result_obj__ = result_140;
                    come_call_finalizer3(result_140,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result110__;
                    come_call_finalizer3(result_140,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional144;
void* right_value152;
struct list_item$1sNodeph* litem_142;
struct sNode* __dec_obj58;
_Bool _if_conditional145;
void* right_value153;
struct list_item$1sNodeph* litem_143;
struct sNode* __dec_obj59;
void* right_value154;
struct list_item$1sNodeph* litem_144;
struct sNode* __dec_obj60;
struct list$1sNodeph* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
right_value152 = (void*)0;
memset(&litem_142, 0, sizeof(struct list_item$1sNodeph*));
right_value153 = (void*)0;
memset(&litem_143, 0, sizeof(struct list_item$1sNodeph*));
right_value154 = (void*)0;
memset(&litem_144, 0, sizeof(struct list_item$1sNodeph*));
                            if(_if_conditional144=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 152, 1698)), "./neo-c.h", 152, 1699))->len==0,                            _if_conditional144) {
                                litem_142=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value152=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 153, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value152,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_142, "./neo-c.h", 155, 1700)), "./neo-c.h", 155, 1701))->prev=((void*)0);
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_142, "./neo-c.h", 156, 1702)), "./neo-c.h", 156, 1703))->next=((void*)0);
                                __dec_obj58=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_142, "./neo-c.h", 157, 1704)), "./neo-c.h", 157, 1705))->item;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_142, "./neo-c.h", 157, 1704)), "./neo-c.h", 157, 1705))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count2(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0, (void*)0); }
                                ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 159, 1706)), "./neo-c.h", 159, 1707))->tail=litem_142;
                                ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 160, 1708)), "./neo-c.h", 160, 1709))->head=litem_142;
                            }
                            else {
                                if(_if_conditional145=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 162, 1710)), "./neo-c.h", 162, 1711))->len==1,                                _if_conditional145) {
                                    litem_143=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value153=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 163, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value153,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_143, "./neo-c.h", 165, 1712)), "./neo-c.h", 165, 1713))->prev=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 165, 1714)), "./neo-c.h", 165, 1715))->head;
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_143, "./neo-c.h", 166, 1716)), "./neo-c.h", 166, 1717))->next=((void*)0);
                                    __dec_obj59=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_143, "./neo-c.h", 167, 1718)), "./neo-c.h", 167, 1719))->item;
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_143, "./neo-c.h", 167, 1718)), "./neo-c.h", 167, 1719))->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); }
                                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 169, 1720)), "./neo-c.h", 169, 1721))->tail=litem_143;
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 170, 1722)), "./neo-c.h", 170, 1723))->head, "./neo-c.h", 170, 1724)), "./neo-c.h", 170, 1725))->next=litem_143;
                                }
                                else {
                                    litem_144=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value154=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 173, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value154,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_144, "./neo-c.h", 175, 1726)), "./neo-c.h", 175, 1727))->prev=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 175, 1728)), "./neo-c.h", 175, 1729))->tail;
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_144, "./neo-c.h", 176, 1730)), "./neo-c.h", 176, 1731))->next=((void*)0);
                                    __dec_obj60=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_144, "./neo-c.h", 177, 1732)), "./neo-c.h", 177, 1733))->item;
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_144, "./neo-c.h", 177, 1732)), "./neo-c.h", 177, 1733))->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0, (void*)0); }
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 179, 1734)), "./neo-c.h", 179, 1735))->tail, "./neo-c.h", 179, 1736)), "./neo-c.h", 179, 1737))->next=litem_144;
                                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 180, 1738)), "./neo-c.h", 180, 1739))->tail=litem_144;
                                }
                            }
                            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 183, 1740)), "./neo-c.h", 183, 1741))->len++;
                            __result107__ = __result_obj__ = self;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result107__;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional146;
struct sNode* __result108__;
void* right_value155;
struct sNode* result_145;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
_Bool _if_conditional154;
struct sNode* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value155 = (void*)0;
memset(&result_145, 0, sizeof(struct sNode*));
                            if(_if_conditional146=self==(void*)0,                            _if_conditional146) {
                                __result108__ = __result_obj__ = (void*)0;
                                return __result108__;
                            }
                            result_145=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value155=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                            if(right_value155) { right_value155 = come_decrement_ref_count2(right_value155, ((struct sNode*)right_value155)->finalize, ((struct sNode*)right_value155)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            if(_if_conditional147=self!=((void*)0)&&((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 1744)), "sNode_clone", 4, 1745))->clone!=((void*)0),                            _if_conditional147) {
                                ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_145, "sNode_clone", 4, 1746)), "sNode_clone", 4, 1747))->_protocol_obj=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 1748)), "sNode_clone", 4, 1749))->clone(((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 1748)), "sNode_clone", 4, 1749))->_protocol_obj);
                            }
                            if(_if_conditional148=self!=((void*)0),                            _if_conditional148) {
                                ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_145, "sNode_clone", 5, 1750)), "sNode_clone", 5, 1751))->finalize=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 5, 1752)), "sNode_clone", 5, 1753))->finalize;
                            }
                            if(_if_conditional149=self!=((void*)0),                            _if_conditional149) {
                                ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_145, "sNode_clone", 6, 1754)), "sNode_clone", 6, 1755))->clone=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 6, 1756)), "sNode_clone", 6, 1757))->clone;
                            }
                            if(_if_conditional150=self!=((void*)0),                            _if_conditional150) {
                                ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_145, "sNode_clone", 7, 1758)), "sNode_clone", 7, 1759))->compile=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 7, 1760)), "sNode_clone", 7, 1761))->compile;
                            }
                            if(_if_conditional151=self!=((void*)0),                            _if_conditional151) {
                                ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_145, "sNode_clone", 8, 1762)), "sNode_clone", 8, 1763))->sline=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 8, 1764)), "sNode_clone", 8, 1765))->sline;
                            }
                            if(_if_conditional152=self!=((void*)0),                            _if_conditional152) {
                                ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_145, "sNode_clone", 9, 1766)), "sNode_clone", 9, 1767))->sname=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 9, 1768)), "sNode_clone", 9, 1769))->sname;
                            }
                            if(_if_conditional153=self!=((void*)0),                            _if_conditional153) {
                                ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_145, "sNode_clone", 10, 1770)), "sNode_clone", 10, 1771))->terminated=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 10, 1772)), "sNode_clone", 10, 1773))->terminated;
                            }
                            if(_if_conditional154=self!=((void*)0),                            _if_conditional154) {
                                ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_145, "sNode_clone", 11, 1774)), "sNode_clone", 11, 1775))->kind=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 11, 1776)), "sNode_clone", 11, 1777))->kind;
                            }
                            __result109__ = __result_obj__ = result_145;
                            if(result_145) { result_145 = come_decrement_ref_count2(result_145, ((struct sNode*)result_145)->finalize, ((struct sNode*)result_145)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result109__;
                            if(result_145) { result_145 = come_decrement_ref_count2(result_145, ((struct sNode*)result_145)->finalize, ((struct sNode*)result_145)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional158;
struct list$1charph* __result111__;
void* right_value159;
void* right_value160;
struct list$1charph* __exception_result_var_b140;
struct list$1charph* result_146;
struct list_item$1charph* it_147;
_Bool _while_condtional29;
char* __exception_result_var_b141;
void* right_value164;
struct list$1charph* __exception_result_var_b142;
struct list$1charph* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
right_value159 = (void*)0;
right_value160 = (void*)0;
memset(&result_146, 0, sizeof(struct list$1charph*));
memset(&it_147, 0, sizeof(struct list_item$1charph*));
right_value164 = (void*)0;
                    if(_if_conditional158=self==((void*)0),                    _if_conditional158) {
                        __result111__ = __result_obj__ = ((void*)0);
                        return __result111__;
                    }
                    result_146=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 1802),__exception_result_var_b140=((struct list$1charph*)(right_value160=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value159=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 139, "list$1charph"))), "./neo-c.h", 139, 1800)), "./neo-c.h", 139, 1801)))))), come_pop_stackframe(), __exception_result_var_b140));
                    come_call_finalizer3(right_value159,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value160,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_147=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 141, 1803)), "./neo-c.h", 141, 1804))->head;
                    while(_while_condtional29=it_147!=((void*)0),                    _while_condtional29) {
                        (come_push_stackframe("./neo-c.h", 143, 1854),__exception_result_var_b142=list$1charph_add(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_146, "./neo-c.h", 143, 1805)), "./neo-c.h", 143, 1806)),(char*)come_increment_ref_count(((char*)(right_value164=(come_push_stackframe("./neo-c.h", 143, 1853),__exception_result_var_b141=string_clone(((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_147, "./neo-c.h", 143, 1851)), "./neo-c.h", 143, 1852))->item), come_pop_stackframe(), __exception_result_var_b141))))), come_pop_stackframe(), __exception_result_var_b142);
                        right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        it_147=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_147, "./neo-c.h", 145, 1855)), "./neo-c.h", 145, 1856))->next;
                    }
                    __result113__ = __result_obj__ = result_146;
                    come_call_finalizer3(result_146,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result113__;
                    come_call_finalizer3(result_146,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional159;
void* right_value161;
struct list_item$1charph* litem_148;
char* __dec_obj63;
_Bool _if_conditional160;
void* right_value162;
struct list_item$1charph* litem_149;
char* __dec_obj64;
void* right_value163;
struct list_item$1charph* litem_150;
char* __dec_obj65;
struct list$1charph* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
right_value161 = (void*)0;
memset(&litem_148, 0, sizeof(struct list_item$1charph*));
right_value162 = (void*)0;
memset(&litem_149, 0, sizeof(struct list_item$1charph*));
right_value163 = (void*)0;
memset(&litem_150, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional159=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 152, 1807)), "./neo-c.h", 152, 1808))->len==0,                            _if_conditional159) {
                                litem_148=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value161=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 153, "list_item$1charph"))));
                                come_call_finalizer3(right_value161,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_148, "./neo-c.h", 155, 1809)), "./neo-c.h", 155, 1810))->prev=((void*)0);
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_148, "./neo-c.h", 156, 1811)), "./neo-c.h", 156, 1812))->next=((void*)0);
                                __dec_obj63=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_148, "./neo-c.h", 157, 1813)), "./neo-c.h", 157, 1814))->item;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_148, "./neo-c.h", 157, 1813)), "./neo-c.h", 157, 1814))->item=(char*)come_increment_ref_count(item);
                                __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 159, 1815)), "./neo-c.h", 159, 1816))->tail=litem_148;
                                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 160, 1817)), "./neo-c.h", 160, 1818))->head=litem_148;
                            }
                            else {
                                if(_if_conditional160=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 162, 1819)), "./neo-c.h", 162, 1820))->len==1,                                _if_conditional160) {
                                    litem_149=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value162=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 163, "list_item$1charph"))));
                                    come_call_finalizer3(right_value162,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_149, "./neo-c.h", 165, 1821)), "./neo-c.h", 165, 1822))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 165, 1823)), "./neo-c.h", 165, 1824))->head;
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_149, "./neo-c.h", 166, 1825)), "./neo-c.h", 166, 1826))->next=((void*)0);
                                    __dec_obj64=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_149, "./neo-c.h", 167, 1827)), "./neo-c.h", 167, 1828))->item;
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_149, "./neo-c.h", 167, 1827)), "./neo-c.h", 167, 1828))->item=(char*)come_increment_ref_count(item);
                                    __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 169, 1829)), "./neo-c.h", 169, 1830))->tail=litem_149;
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 170, 1831)), "./neo-c.h", 170, 1832))->head, "./neo-c.h", 170, 1833)), "./neo-c.h", 170, 1834))->next=litem_149;
                                }
                                else {
                                    litem_150=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value163=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 173, "list_item$1charph"))));
                                    come_call_finalizer3(right_value163,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_150, "./neo-c.h", 175, 1835)), "./neo-c.h", 175, 1836))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 175, 1837)), "./neo-c.h", 175, 1838))->tail;
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_150, "./neo-c.h", 176, 1839)), "./neo-c.h", 176, 1840))->next=((void*)0);
                                    __dec_obj65=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_150, "./neo-c.h", 177, 1841)), "./neo-c.h", 177, 1842))->item;
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_150, "./neo-c.h", 177, 1841)), "./neo-c.h", 177, 1842))->item=(char*)come_increment_ref_count(item);
                                    __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 179, 1843)), "./neo-c.h", 179, 1844))->tail, "./neo-c.h", 179, 1845)), "./neo-c.h", 179, 1846))->next=litem_150;
                                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 180, 1847)), "./neo-c.h", 180, 1848))->tail=litem_150;
                                }
                            }
                            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 183, 1849)), "./neo-c.h", 183, 1850))->len++;
                            __result112__ = __result_obj__ = self;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result112__;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional207;
char* result_152;
void* __exception_result_var_b151;
char* __result115__;
_Bool _if_conditional208;
char* __result116__;
char* result_153;
void* __exception_result_var_b152;
char* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_152, 0, sizeof(char*));
memset(&result_153, 0, sizeof(char*));
        if(_if_conditional207=self==((void*)0),        _if_conditional207) {
            (come_push_stackframe("./neo-c.h", 284, 2061),__exception_result_var_b151=memset(&result_152,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b151);
            __result115__ = __result_obj__ = result_152;
            return __result115__;
        }
        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 287, 2062)), "./neo-c.h", 287, 2063))->it=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 287, 2064)), "./neo-c.h", 287, 2065))->head;
        if(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 289, 2066)), "./neo-c.h", 289, 2067))->it) {
            __result116__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 290, 2068)), "./neo-c.h", 290, 2069))->it, "./neo-c.h", 290, 2070)), "./neo-c.h", 290, 2071))->item;
            return __result116__;
        }
        (come_push_stackframe("./neo-c.h", 294, 2072),__exception_result_var_b152=memset(&result_153,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b152);
        __result117__ = __result_obj__ = result_153;
        return __result117__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result118__;
memset(&__result_obj__, 0, sizeof(void*));
        __result118__ = self==((void*)0)||((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 317, 2076)), "./neo-c.h", 317, 2077))->it==((void*)0);
        return __result118__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional209;
char* result_155;
void* __exception_result_var_b155;
char* __result119__;
_Bool _if_conditional210;
char* __result120__;
char* result_156;
void* __exception_result_var_b156;
char* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_155, 0, sizeof(char*));
memset(&result_156, 0, sizeof(char*));
        if(_if_conditional209=self==((void*)0)||((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 299, 2081)), "./neo-c.h", 299, 2082))->it==((void*)0),        _if_conditional209) {
            (come_push_stackframe("./neo-c.h", 301, 2083),__exception_result_var_b155=memset(&result_155,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b155);
            __result119__ = __result_obj__ = result_155;
            return __result119__;
        }
        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 305, 2084)), "./neo-c.h", 305, 2085))->it=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 305, 2086)), "./neo-c.h", 305, 2087))->it, "./neo-c.h", 305, 2088)), "./neo-c.h", 305, 2089))->next;
        if(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 307, 2090)), "./neo-c.h", 307, 2091))->it) {
            __result120__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 308, 2092)), "./neo-c.h", 308, 2093))->it, "./neo-c.h", 308, 2094)), "./neo-c.h", 308, 2095))->item;
            return __result120__;
        }
        (come_push_stackframe("./neo-c.h", 312, 2096),__exception_result_var_b156=memset(&result_156,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b156);
        __result121__ = __result_obj__ = result_156;
        return __result121__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional211;
void* right_value172;
struct list_item$1charph* litem_157;
char* __dec_obj72;
_Bool _if_conditional212;
void* right_value173;
struct list_item$1charph* litem_158;
char* __dec_obj73;
void* right_value174;
struct list_item$1charph* litem_159;
char* __dec_obj74;
struct list$1charph* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
right_value172 = (void*)0;
memset(&litem_157, 0, sizeof(struct list_item$1charph*));
right_value173 = (void*)0;
memset(&litem_158, 0, sizeof(struct list_item$1charph*));
right_value174 = (void*)0;
memset(&litem_159, 0, sizeof(struct list_item$1charph*));
            if(_if_conditional211=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 222, 2104)), "./neo-c.h", 222, 2105))->len==0,            _if_conditional211) {
                litem_157=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value172=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 223, "list_item$1charph"))));
                come_call_finalizer3(right_value172,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_157, "./neo-c.h", 225, 2106)), "./neo-c.h", 225, 2107))->prev=((void*)0);
                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_157, "./neo-c.h", 226, 2108)), "./neo-c.h", 226, 2109))->next=((void*)0);
                __dec_obj72=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_157, "./neo-c.h", 227, 2110)), "./neo-c.h", 227, 2111))->item;
                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_157, "./neo-c.h", 227, 2110)), "./neo-c.h", 227, 2111))->item=(char*)come_increment_ref_count(item);
                __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 229, 2112)), "./neo-c.h", 229, 2113))->tail=litem_157;
                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 230, 2114)), "./neo-c.h", 230, 2115))->head=litem_157;
            }
            else {
                if(_if_conditional212=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 232, 2116)), "./neo-c.h", 232, 2117))->len==1,                _if_conditional212) {
                    litem_158=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value173=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 233, "list_item$1charph"))));
                    come_call_finalizer3(right_value173,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_158, "./neo-c.h", 235, 2118)), "./neo-c.h", 235, 2119))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 235, 2120)), "./neo-c.h", 235, 2121))->head;
                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_158, "./neo-c.h", 236, 2122)), "./neo-c.h", 236, 2123))->next=((void*)0);
                    __dec_obj73=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_158, "./neo-c.h", 237, 2124)), "./neo-c.h", 237, 2125))->item;
                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_158, "./neo-c.h", 237, 2124)), "./neo-c.h", 237, 2125))->item=(char*)come_increment_ref_count(item);
                    __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 239, 2126)), "./neo-c.h", 239, 2127))->tail=litem_158;
                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 240, 2128)), "./neo-c.h", 240, 2129))->head, "./neo-c.h", 240, 2130)), "./neo-c.h", 240, 2131))->next=litem_158;
                }
                else {
                    litem_159=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value174=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 243, "list_item$1charph"))));
                    come_call_finalizer3(right_value174,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_159, "./neo-c.h", 245, 2132)), "./neo-c.h", 245, 2133))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 245, 2134)), "./neo-c.h", 245, 2135))->tail;
                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_159, "./neo-c.h", 246, 2136)), "./neo-c.h", 246, 2137))->next=((void*)0);
                    __dec_obj74=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_159, "./neo-c.h", 247, 2138)), "./neo-c.h", 247, 2139))->item;
                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_159, "./neo-c.h", 247, 2138)), "./neo-c.h", 247, 2139))->item=(char*)come_increment_ref_count(item);
                    __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 249, 2140)), "./neo-c.h", 249, 2141))->tail, "./neo-c.h", 249, 2142)), "./neo-c.h", 249, 2143))->next=litem_159;
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 250, 2144)), "./neo-c.h", 250, 2145))->tail=litem_159;
                }
            }
            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 253, 2146)), "./neo-c.h", 253, 2147))->len++;
            __result122__ = __result_obj__ = self;
            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            return __result122__;
            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional213;
struct sBlock* __result123__;
void* right_value186;
struct sBlock* result_160;
_Bool _if_conditional216;
struct list$1sNodeph* __exception_result_var_b165;
void* right_value187;
struct list$1sNodeph* __dec_obj80;
_Bool _if_conditional217;
struct sVarTable* __exception_result_var_b199;
void* right_value197;
struct sVarTable* __dec_obj83;
struct sBlock* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
right_value186 = (void*)0;
memset(&result_160, 0, sizeof(struct sBlock*));
right_value187 = (void*)0;
right_value197 = (void*)0;
        if(_if_conditional213=self==(void*)0,        _if_conditional213) {
            __result123__ = __result_obj__ = (void*)0;
            return __result123__;
        }
        result_160=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value186=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"))));
        come_call_finalizer3(right_value186,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional216=self!=((void*)0)&&((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_clone", 4, 2186)), "sBlock_clone", 4, 2187))->mNodes!=((void*)0),        _if_conditional216) {
            __dec_obj80=((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(result_160, "sBlock_clone", 4, 2188)), "sBlock_clone", 4, 2189))->mNodes;
            ((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(result_160, "sBlock_clone", 4, 2188)), "sBlock_clone", 4, 2189))->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value187=(come_push_stackframe("sBlock_clone", 4, 2192),__exception_result_var_b165=list$1sNodephp_clone(((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_clone", 4, 2190)), "sBlock_clone", 4, 2191))->mNodes), come_pop_stackframe(), __exception_result_var_b165))));
            come_call_finalizer3(__dec_obj80,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value187,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional217=self!=((void*)0)&&((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_clone", 5, 2193)), "sBlock_clone", 5, 2194))->mVarTable!=((void*)0),        _if_conditional217) {
            __dec_obj83=((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(result_160, "sBlock_clone", 5, 2195)), "sBlock_clone", 5, 2196))->mVarTable;
            ((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(result_160, "sBlock_clone", 5, 2195)), "sBlock_clone", 5, 2196))->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value197=(come_push_stackframe("sBlock_clone", 5, 2457),__exception_result_var_b199=sVarTable_clone(((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_clone", 5, 2197)), "sBlock_clone", 5, 2198))->mVarTable), come_pop_stackframe(), __exception_result_var_b199))));
            come_call_finalizer3(__dec_obj83,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value197,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        }
        __result140__ = __result_obj__ = result_160;
        come_call_finalizer3(result_160,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        return __result140__;
        come_call_finalizer3(result_160,sBlock_finalize, 0, 0, 0, 0, (void*)0);
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional214;
_Bool _if_conditional215;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional214=self!=((void*)0)&&((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0, 2178)), "sBlock_finalize", 0, 2179))->mNodes!=((void*)0),            _if_conditional214) {
                come_call_finalizer3(((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0, 2180)), "sBlock_finalize", 0, 2181))->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional215=self!=((void*)0)&&((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1, 2182)), "sBlock_finalize", 1, 2183))->mVarTable!=((void*)0),            _if_conditional215) {
                come_call_finalizer3(((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1, 2184)), "sBlock_finalize", 1, 2185))->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool _if_conditional218;
struct sVarTable* __result124__;
void* right_value188;
struct sVarTable* result_161;
_Bool _if_conditional219;
struct map$2charphsVarph* __exception_result_var_b198;
void* right_value196;
struct map$2charphsVarph* __dec_obj82;
_Bool _if_conditional243;
_Bool _if_conditional244;
_Bool _if_conditional245;
struct sVarTable* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
right_value188 = (void*)0;
memset(&result_161, 0, sizeof(struct sVarTable*));
right_value196 = (void*)0;
                if(_if_conditional218=self==(void*)0,                _if_conditional218) {
                    __result124__ = __result_obj__ = (void*)0;
                    return __result124__;
                }
                result_161=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value188=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"))));
                come_call_finalizer3(right_value188,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional219=self!=((void*)0)&&((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(self, "sVarTable_clone", 4, 2199)), "sVarTable_clone", 4, 2200))->mVars!=((void*)0),                _if_conditional219) {
                    __dec_obj82=((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(result_161, "sVarTable_clone", 4, 2201)), "sVarTable_clone", 4, 2202))->mVars;
                    ((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(result_161, "sVarTable_clone", 4, 2201)), "sVarTable_clone", 4, 2202))->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value196=(come_push_stackframe("sVarTable_clone", 4, 2444),__exception_result_var_b198=map$2charphsVarphp_clone(((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(self, "sVarTable_clone", 4, 2203)), "sVarTable_clone", 4, 2204))->mVars), come_pop_stackframe(), __exception_result_var_b198))));
                    come_call_finalizer3(__dec_obj82,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value196,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional243=self!=((void*)0),                _if_conditional243) {
                    ((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(result_161, "sVarTable_clone", 5, 2445)), "sVarTable_clone", 5, 2446))->mGlobal=((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(self, "sVarTable_clone", 5, 2447)), "sVarTable_clone", 5, 2448))->mGlobal;
                }
                if(_if_conditional244=self!=((void*)0),                _if_conditional244) {
                    ((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(result_161, "sVarTable_clone", 6, 2449)), "sVarTable_clone", 6, 2450))->mParent=((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(self, "sVarTable_clone", 6, 2451)), "sVarTable_clone", 6, 2452))->mParent;
                }
                if(_if_conditional245=self!=((void*)0),                _if_conditional245) {
                    ((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(result_161, "sVarTable_clone", 7, 2453)), "sVarTable_clone", 7, 2454))->mID=((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(self, "sVarTable_clone", 7, 2455)), "sVarTable_clone", 7, 2456))->mID;
                }
                __result139__ = __result_obj__ = result_161;
                come_call_finalizer3(result_161,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
                return __result139__;
                come_call_finalizer3(result_161,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional220;
struct map$2charphsVarph* __result125__;
void* right_value189;
void* right_value190;
struct map$2charphsVarph* __exception_result_var_b166;
struct map$2charphsVarph* result_162;
void* right_value191;
void* right_value192;
struct list$1charp* __exception_result_var_b167;
struct list$1charp* __dec_obj81;
char* __exception_result_var_b170;
char* it_165;
_Bool __exception_result_var_b171;
char* __exception_result_var_b174;
struct sVar* default_value_168;
void* __exception_result_var_b175;
struct sVar* __exception_result_var_b178;
struct sVar* it2_171;
struct map$2charphsVarph* __exception_result_var_b197;
struct map$2charphsVarph* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
right_value189 = (void*)0;
right_value190 = (void*)0;
memset(&result_162, 0, sizeof(struct map$2charphsVarph*));
right_value191 = (void*)0;
right_value192 = (void*)0;
memset(&it_165, 0, sizeof(char*));
memset(&default_value_168, 0, sizeof(struct sVar*));
memset(&it2_171, 0, sizeof(struct sVar*));
                        if(_if_conditional220=self==((void*)0),                        _if_conditional220) {
                            __result125__ = __result_obj__ = ((void*)0);
                            return __result125__;
                        }
                        result_162=(struct map$2charphsVarph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 1162, 2206),__exception_result_var_b166=((struct map$2charphsVarph*)(right_value190=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)(right_value189=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./neo-c.h", 1162, "map$2charphsVarph"))), "./neo-c.h", 1162, 2205)))))), come_pop_stackframe(), __exception_result_var_b166));
                        come_call_finalizer3(right_value189,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value190,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                        __dec_obj81=((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(result_162, "./neo-c.h", 1164, 2207)), "./neo-c.h", 1164, 2208))->key_list;
                        ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(result_162, "./neo-c.h", 1164, 2207)), "./neo-c.h", 1164, 2208))->key_list=(struct list$1charp*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 1164, 2210),__exception_result_var_b167=((struct list$1charp*)(right_value192=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)come_null_check(((struct list$1charp*)(right_value191=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1164, "list$1charp"))), "./neo-c.h", 1164, 2209)))))), come_pop_stackframe(), __exception_result_var_b167));
                        come_call_finalizer3(__dec_obj81,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value191,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value192,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        for(                        it_165=(come_push_stackframe("./neo-c.h", 1166, 2233),__exception_result_var_b170=map$2charphsVarph_begin(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1166, 2211)), "./neo-c.h", 1166, 2212))), come_pop_stackframe(), __exception_result_var_b170);                        !(come_push_stackframe("./neo-c.h", 1166, 2242),__exception_result_var_b171=map$2charphsVarph_end(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1166, 2234)), "./neo-c.h", 1166, 2235))), come_pop_stackframe(), __exception_result_var_b171);                        it_165=(come_push_stackframe("./neo-c.h", 1166, 2271),__exception_result_var_b174=map$2charphsVarph_next(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1166, 2243)), "./neo-c.h", 1166, 2244))), come_pop_stackframe(), __exception_result_var_b174)                        ){
                            (come_push_stackframe("./neo-c.h", 1168, 2272),__exception_result_var_b175=memset(&default_value_168,0,sizeof(struct sVar*)), come_pop_stackframe(), __exception_result_var_b175);
                            it2_171=(come_push_stackframe("./neo-c.h", 1170, 2294),__exception_result_var_b178=map$2charphsVarph_at(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1170, 2273)), "./neo-c.h", 1170, 2274)),it_165,default_value_168), come_pop_stackframe(), __exception_result_var_b178);
                            (come_push_stackframe("./neo-c.h", 1172, 2443),__exception_result_var_b197=map$2charphsVarph_insert2(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(result_162, "./neo-c.h", 1172, 2295)), "./neo-c.h", 1172, 2296)),it_165,it2_171), come_pop_stackframe(), __exception_result_var_b197);
                        }
                        __result138__ = __result_obj__ = result_162;
                        come_call_finalizer3(result_162,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result138__;
                        come_call_finalizer3(result_162,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional221;
char* result_163;
void* __exception_result_var_b168;
char* __result126__;
_Bool _if_conditional222;
char* __result127__;
char* result_164;
void* __exception_result_var_b169;
char* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_163, 0, sizeof(char*));
memset(&result_164, 0, sizeof(char*));
                            if(_if_conditional221=self==((void*)0),                            _if_conditional221) {
                                (come_push_stackframe("./neo-c.h", 1282, 2213),__exception_result_var_b168=memset(&result_163,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b168);
                                __result126__ = __result_obj__ = result_163;
                                return __result126__;
                            }
                            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1285, 2214)), "./neo-c.h", 1285, 2215))->key_list, "./neo-c.h", 1285, 2216)), "./neo-c.h", 1285, 2217))->it=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1285, 2218)), "./neo-c.h", 1285, 2219))->key_list, "./neo-c.h", 1285, 2220)), "./neo-c.h", 1285, 2221))->head;
                            if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1287, 2222)), "./neo-c.h", 1287, 2223))->key_list, "./neo-c.h", 1287, 2224)), "./neo-c.h", 1287, 2225))->it) {
                                __result127__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1288, 2226)), "./neo-c.h", 1288, 2227))->key_list, "./neo-c.h", 1288, 2228)), "./neo-c.h", 1288, 2229))->it, "./neo-c.h", 1288, 2230)), "./neo-c.h", 1288, 2231))->item;
                                return __result127__;
                            }
                            (come_push_stackframe("./neo-c.h", 1292, 2232),__exception_result_var_b169=memset(&result_164,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b169);
                            __result128__ = __result_obj__ = result_164;
                            return __result128__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result129__;
memset(&__result_obj__, 0, sizeof(void*));
                            __result129__ = self==((void*)0)||((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1314, 2236)), "./neo-c.h", 1314, 2237))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1314, 2238)), "./neo-c.h", 1314, 2239))->key_list, "./neo-c.h", 1314, 2240)), "./neo-c.h", 1314, 2241))->it==((void*)0);
                            return __result129__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional223;
char* result_166;
void* __exception_result_var_b172;
char* __result130__;
_Bool _if_conditional224;
char* __result131__;
char* result_167;
void* __exception_result_var_b173;
char* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_166, 0, sizeof(char*));
memset(&result_167, 0, sizeof(char*));
                            if(_if_conditional223=self==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1297, 2245)), "./neo-c.h", 1297, 2246))->key_list, "./neo-c.h", 1297, 2247)), "./neo-c.h", 1297, 2248))->it==((void*)0),                            _if_conditional223) {
                                (come_push_stackframe("./neo-c.h", 1299, 2249),__exception_result_var_b172=memset(&result_166,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b172);
                                __result130__ = __result_obj__ = result_166;
                                return __result130__;
                            }
                            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1302, 2250)), "./neo-c.h", 1302, 2251))->key_list, "./neo-c.h", 1302, 2252)), "./neo-c.h", 1302, 2253))->it=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1302, 2254)), "./neo-c.h", 1302, 2255))->key_list, "./neo-c.h", 1302, 2256)), "./neo-c.h", 1302, 2257))->it, "./neo-c.h", 1302, 2258)), "./neo-c.h", 1302, 2259))->next;
                            if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1304, 2260)), "./neo-c.h", 1304, 2261))->key_list, "./neo-c.h", 1304, 2262)), "./neo-c.h", 1304, 2263))->it) {
                                __result131__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1305, 2264)), "./neo-c.h", 1305, 2265))->key_list, "./neo-c.h", 1305, 2266)), "./neo-c.h", 1305, 2267))->it, "./neo-c.h", 1305, 2268)), "./neo-c.h", 1305, 2269))->item;
                                return __result131__;
                            }
                            (come_push_stackframe("./neo-c.h", 1309, 2270),__exception_result_var_b173=memset(&result_167,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b173);
                            __result132__ = __result_obj__ = result_167;
                            return __result132__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int __exception_result_var_b176;
unsigned int hash_169;
unsigned int it_170;
_Bool _while_condtional30;
_Bool _if_conditional225;
_Bool __exception_result_var_b177;
_Bool _if_conditional226;
struct sVar* __result133__;
_Bool _if_conditional227;
_Bool _if_conditional228;
struct sVar* __result134__;
struct sVar* __result135__;
struct sVar* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_169, 0, sizeof(unsigned int));
memset(&it_170, 0, sizeof(unsigned int));
                                hash_169=(come_push_stackframe("./neo-c.h", 1207, 2277),__exception_result_var_b176=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1207, 2275)), "./neo-c.h", 1207, 2276))), come_pop_stackframe(), __exception_result_var_b176)%((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1207, 2278)), "./neo-c.h", 1207, 2279))->size;
                                it_170=hash_169;
                                while(_while_condtional30=(_Bool)1,                                _while_condtional30) {
                                    if(_if_conditional225=((_Bool*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1211, 2280)), "./neo-c.h", 1211, 2281))->item_existance, "./neo-c.h", 1211, 2282))[it_170],                                    _if_conditional225) {
                                        if(_if_conditional226=(come_push_stackframe("./neo-c.h", 1213, 2288),__exception_result_var_b177=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1213, 2283)), "./neo-c.h", 1213, 2284))->keys, "./neo-c.h", 1213, 2285))[it_170], "./neo-c.h", 1213, 2286)), "./neo-c.h", 1213, 2287)),key), come_pop_stackframe(), __exception_result_var_b177),                                        _if_conditional226) {
                                            __result133__ = __result_obj__ = ((struct sVar**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1215, 2289)), "./neo-c.h", 1215, 2290))->items, "./neo-c.h", 1215, 2291))[it_170];
                                            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result133__;
                                        }
                                        it_170++;
                                        if(_if_conditional227=it_170>=((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1220, 2292)), "./neo-c.h", 1220, 2293))->size,                                        _if_conditional227) {
                                            it_170=0;
                                        }
                                        else {
                                            if(_if_conditional228=it_170==hash_169,                                            _if_conditional228) {
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
_Bool _if_conditional229;
unsigned int __exception_result_var_b187;
unsigned int hash_183;
int it_184;
_Bool _while_condtional32;
_Bool _if_conditional233;
_Bool __exception_result_var_b188;
_Bool _if_conditional234;
_Bool _if_conditional235;
struct list$1charp* __exception_result_var_b189;
struct list$1charp* __exception_result_var_b190;
_Bool _if_conditional236;
_Bool _if_conditional237;
_Bool _if_conditional238;
int __exception_result_var_b191;
_Bool _if_conditional239;
_Bool _if_conditional240;
_Bool same_key_exist_185;
char* __exception_result_var_b192;
char* it2_186;
_Bool __exception_result_var_b193;
char* __exception_result_var_b194;
_Bool __exception_result_var_b195;
_Bool _if_conditional241;
_Bool _if_conditional242;
struct list$1charp* __exception_result_var_b196;
struct map$2charphsVarph* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_183, 0, sizeof(unsigned int));
memset(&it_184, 0, sizeof(int));
memset(&same_key_exist_185, 0, sizeof(_Bool));
memset(&it2_186, 0, sizeof(char*));
                                if(_if_conditional229=((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1448, 2297)), "./neo-c.h", 1448, 2298))->len*2>=((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1448, 2299)), "./neo-c.h", 1448, 2300))->size,                                _if_conditional229) {
                                    (come_push_stackframe("./neo-c.h", 1449,2349),map$2charphsVarph_rehash(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1449, 2301)), "./neo-c.h", 1449, 2302))),come_pop_stackframe());
                                }
                                hash_183=(come_push_stackframe("./neo-c.h", 1451, 2352),__exception_result_var_b187=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(key, "./neo-c.h", 1451, 2350)), "./neo-c.h", 1451, 2351))), come_pop_stackframe(), __exception_result_var_b187)%((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1451, 2353)), "./neo-c.h", 1451, 2354))->size;
                                it_184=hash_183;
                                while(_while_condtional32=(_Bool)1,                                _while_condtional32) {
                                    if(_if_conditional233=((_Bool*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1455, 2355)), "./neo-c.h", 1455, 2356))->item_existance, "./neo-c.h", 1455, 2357))[it_184],                                    _if_conditional233) {
                                        if(_if_conditional234=(come_push_stackframe("./neo-c.h", 1457, 2363),__exception_result_var_b188=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1457, 2358)), "./neo-c.h", 1457, 2359))->keys, "./neo-c.h", 1457, 2360))[it_184], "./neo-c.h", 1457, 2361)), "./neo-c.h", 1457, 2362)),key), come_pop_stackframe(), __exception_result_var_b188),                                        _if_conditional234) {
                                            if(_if_conditional235=1,                                            _if_conditional235) {
                                                ((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1460, 2364)), "./neo-c.h", 1460, 2365))->keys, "./neo-c.h", 1460, 2366))[it_184] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1460, 2364)), "./neo-c.h", 1460, 2365))->keys, "./neo-c.h", 1460, 2366))[it_184], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                (come_push_stackframe("./neo-c.h", 1461, 2374),__exception_result_var_b189=list$1charp_remove(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1461, 2367)), "./neo-c.h", 1461, 2368))->key_list, "./neo-c.h", 1461, 2369)), "./neo-c.h", 1461, 2370)),((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1461, 2371)), "./neo-c.h", 1461, 2372))->keys, "./neo-c.h", 1461, 2373))[it_184]), come_pop_stackframe(), __exception_result_var_b189);
                                                ((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1462, 2375)), "./neo-c.h", 1462, 2376))->keys, "./neo-c.h", 1462, 2377))[it_184]=(char*)come_increment_ref_count(key);
                                            }
                                            else {
                                                (come_push_stackframe("./neo-c.h", 1465, 2385),__exception_result_var_b190=list$1charp_remove(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1465, 2378)), "./neo-c.h", 1465, 2379))->key_list, "./neo-c.h", 1465, 2380)), "./neo-c.h", 1465, 2381)),((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1465, 2382)), "./neo-c.h", 1465, 2383))->keys, "./neo-c.h", 1465, 2384))[it_184]), come_pop_stackframe(), __exception_result_var_b190);
                                                ((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1466, 2386)), "./neo-c.h", 1466, 2387))->keys, "./neo-c.h", 1466, 2388))[it_184]=key;
                                            }
                                            if(_if_conditional236=1,                                            _if_conditional236) {
                                                come_call_finalizer3(((struct sVar**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1469, 2389)), "./neo-c.h", 1469, 2390))->items, "./neo-c.h", 1469, 2391))[it_184],sVar_finalize, 0, 0, 0, 0, (void*)0);
                                                ((struct sVar**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1470, 2392)), "./neo-c.h", 1470, 2393))->items, "./neo-c.h", 1470, 2394))[it_184]=(struct sVar*)come_increment_ref_count(item);
                                            }
                                            else {
                                                ((struct sVar**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1473, 2395)), "./neo-c.h", 1473, 2396))->items, "./neo-c.h", 1473, 2397))[it_184]=item;
                                            }
                                            break;
                                        }
                                        it_184++;
                                        if(_if_conditional237=it_184>=((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1480, 2398)), "./neo-c.h", 1480, 2399))->size,                                        _if_conditional237) {
                                            it_184=0;
                                        }
                                        else {
                                            if(_if_conditional238=it_184==hash_183,                                            _if_conditional238) {
                                                (come_push_stackframe("./neo-c.h", 1484, 2400),__exception_result_var_b191=printf("unexpected error in map.insert\n"), come_pop_stackframe(), __exception_result_var_b191);
                                                (come_push_stackframe("./neo-c.h", 1485,2401),stackframe(),come_pop_stackframe());
                                                (come_push_stackframe("./neo-c.h", 1486,2402),exit(2),come_pop_stackframe());
                                            }
                                        }
                                    }
                                    else {
                                        ((_Bool*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1490, 2403)), "./neo-c.h", 1490, 2404))->item_existance, "./neo-c.h", 1490, 2405))[it_184]=(_Bool)1;
                                        if(_if_conditional239=1,                                        _if_conditional239) {
                                            ((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1492, 2406)), "./neo-c.h", 1492, 2407))->keys, "./neo-c.h", 1492, 2408))[it_184]=(char*)come_increment_ref_count(key);
                                        }
                                        else {
                                            ((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1495, 2409)), "./neo-c.h", 1495, 2410))->keys, "./neo-c.h", 1495, 2411))[it_184]=key;
                                        }
                                        if(_if_conditional240=1,                                        _if_conditional240) {
                                            ((struct sVar**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1498, 2412)), "./neo-c.h", 1498, 2413))->items, "./neo-c.h", 1498, 2414))[it_184]=(struct sVar*)come_increment_ref_count(item);
                                        }
                                        else {
                                            ((struct sVar**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1501, 2415)), "./neo-c.h", 1501, 2416))->items, "./neo-c.h", 1501, 2417))[it_184]=item;
                                        }
                                        ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1504, 2418)), "./neo-c.h", 1504, 2419))->len++;
                                        break;
                                    }
                                }
                                same_key_exist_185=(_Bool)0;
                                for(                                it2_186=(come_push_stackframe("./neo-c.h", 1511, 2424),__exception_result_var_b192=list$1charp_begin(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1511, 2420)), "./neo-c.h", 1511, 2421))->key_list, "./neo-c.h", 1511, 2422)), "./neo-c.h", 1511, 2423))), come_pop_stackframe(), __exception_result_var_b192);                                !(come_push_stackframe("./neo-c.h", 1511, 2429),__exception_result_var_b193=list$1charp_end(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1511, 2425)), "./neo-c.h", 1511, 2426))->key_list, "./neo-c.h", 1511, 2427)), "./neo-c.h", 1511, 2428))), come_pop_stackframe(), __exception_result_var_b193);                                it2_186=(come_push_stackframe("./neo-c.h", 1511, 2434),__exception_result_var_b194=list$1charp_next(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1511, 2430)), "./neo-c.h", 1511, 2431))->key_list, "./neo-c.h", 1511, 2432)), "./neo-c.h", 1511, 2433))), come_pop_stackframe(), __exception_result_var_b194)                                ){
                                    if(_if_conditional241=(come_push_stackframe("./neo-c.h", 1513, 2437),__exception_result_var_b195=string_equals(((char*)come_null_check(((char*)come_null_check(it2_186, "./neo-c.h", 1513, 2435)), "./neo-c.h", 1513, 2436)),key), come_pop_stackframe(), __exception_result_var_b195),                                    _if_conditional241) {
                                        same_key_exist_185=(_Bool)1;
                                    }
                                }
                                if(_if_conditional242=!same_key_exist_185,                                _if_conditional242) {
                                    (come_push_stackframe("./neo-c.h", 1519, 2442),__exception_result_var_b196=list$1charp_push_back(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1519, 2438)), "./neo-c.h", 1519, 2439))->key_list, "./neo-c.h", 1519, 2440)), "./neo-c.h", 1519, 2441)),key), come_pop_stackframe(), __exception_result_var_b196);
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
void* right_value193;
char** keys_173;
void* right_value194;
struct sVar** items_174;
void* right_value195;
_Bool* item_existance_175;
int len_176;
char* __exception_result_var_b179;
char* it_177;
_Bool __exception_result_var_b180;
char* __exception_result_var_b181;
struct sVar* default_value_178;
void* __exception_result_var_b182;
struct sVar* __exception_result_var_b183;
struct sVar* it2_179;
unsigned int __exception_result_var_b184;
unsigned int hash_180;
int n_181;
_Bool _while_condtional31;
_Bool _if_conditional230;
_Bool _if_conditional231;
_Bool _if_conditional232;
int __exception_result_var_b185;
struct sVar* default_value_182;
struct sVar* __exception_result_var_b186;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_172, 0, sizeof(int));
right_value193 = (void*)0;
memset(&keys_173, 0, sizeof(char**));
right_value194 = (void*)0;
memset(&items_174, 0, sizeof(struct sVar**));
right_value195 = (void*)0;
memset(&item_existance_175, 0, sizeof(_Bool*));
memset(&len_176, 0, sizeof(int));
memset(&it_177, 0, sizeof(char*));
memset(&default_value_178, 0, sizeof(struct sVar*));
memset(&it2_179, 0, sizeof(struct sVar*));
memset(&hash_180, 0, sizeof(unsigned int));
memset(&n_181, 0, sizeof(int));
memset(&default_value_182, 0, sizeof(struct sVar*));
                                        size_172=((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1318, 2303)), "./neo-c.h", 1318, 2304))->size*10;
                                        keys_173=(char**)come_increment_ref_count(((char**)(right_value193=(char**)come_calloc(1, sizeof(char*)*(1*(size_172)), "./neo-c.h", 1319, "char*%"))));
                                        right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        items_174=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value194=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_172)), "./neo-c.h", 1320, "sVar*%"))));
                                        come_call_finalizer3(right_value194,sVar_finalize, 0, 1, 0, 0, __result_obj__);
                                        item_existance_175=(_Bool*)come_increment_ref_count(((_Bool*)(right_value195=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_172)), "./neo-c.h", 1321, "bool"))));
                                        right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        len_176=0;
                                        for(                                        it_177=(come_push_stackframe("./neo-c.h", 1325, 2307),__exception_result_var_b179=map$2charphsVarph_begin(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1325, 2305)), "./neo-c.h", 1325, 2306))), come_pop_stackframe(), __exception_result_var_b179);                                        !(come_push_stackframe("./neo-c.h", 1325, 2310),__exception_result_var_b180=map$2charphsVarph_end(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1325, 2308)), "./neo-c.h", 1325, 2309))), come_pop_stackframe(), __exception_result_var_b180);                                        it_177=(come_push_stackframe("./neo-c.h", 1325, 2313),__exception_result_var_b181=map$2charphsVarph_next(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1325, 2311)), "./neo-c.h", 1325, 2312))), come_pop_stackframe(), __exception_result_var_b181)                                        ){
                                            (come_push_stackframe("./neo-c.h", 1327, 2314),__exception_result_var_b182=memset(&default_value_178,0,sizeof(struct sVar*)), come_pop_stackframe(), __exception_result_var_b182);
                                            it2_179=(come_push_stackframe("./neo-c.h", 1328, 2317),__exception_result_var_b183=map$2charphsVarph_at(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1328, 2315)), "./neo-c.h", 1328, 2316)),it_177,default_value_178), come_pop_stackframe(), __exception_result_var_b183);
                                            hash_180=(come_push_stackframe("./neo-c.h", 1329, 2320),__exception_result_var_b184=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(it_177, "./neo-c.h", 1329, 2318)), "./neo-c.h", 1329, 2319))), come_pop_stackframe(), __exception_result_var_b184)%size_172;
                                            n_181=hash_180;
                                            while(_while_condtional31=(_Bool)1,                                            _while_condtional31) {
                                                if(_if_conditional230=((_Bool*)come_null_check(item_existance_175, "./neo-c.h", 1333, 2321))[n_181],                                                _if_conditional230) {
                                                    n_181++;
                                                    if(_if_conditional231=n_181>=size_172,                                                    _if_conditional231) {
                                                        n_181=0;
                                                    }
                                                    else {
                                                        if(_if_conditional232=n_181==hash_180,                                                        _if_conditional232) {
                                                            (come_push_stackframe("./neo-c.h", 1341, 2322),__exception_result_var_b185=printf("unexpected error in map.rehash(1)\n"), come_pop_stackframe(), __exception_result_var_b185);
                                                            (come_push_stackframe("./neo-c.h", 1342,2323),stackframe(),come_pop_stackframe());
                                                            (come_push_stackframe("./neo-c.h", 1343,2324),exit(2),come_pop_stackframe());
                                                        }
                                                    }
                                                }
                                                else {
                                                    ((_Bool*)come_null_check(item_existance_175, "./neo-c.h", 1347, 2325))[n_181]=(_Bool)1;
                                                    ((char**)come_null_check(keys_173, "./neo-c.h", 1348, 2326))[n_181]=it_177;
                                                    ((struct sVar**)come_null_check(items_174, "./neo-c.h", 1350, 2327))[n_181]=(come_push_stackframe("./neo-c.h", 1350, 2330),__exception_result_var_b186=map$2charphsVarph_at(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1350, 2328)), "./neo-c.h", 1350, 2329)),it_177,default_value_182), come_pop_stackframe(), __exception_result_var_b186);
                                                    len_176++;
                                                    break;
                                                }
                                            }
                                        }
                                        (come_push_stackframe("./neo-c.h", 1358,2333),come_free((char*)((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1358, 2331)), "./neo-c.h", 1358, 2332))->items),come_pop_stackframe());
                                        ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1359, 2334)), "./neo-c.h", 1359, 2335))->item_existance = come_decrement_ref_count2(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1359, 2334)), "./neo-c.h", 1359, 2335))->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        (come_push_stackframe("./neo-c.h", 1360,2338),come_free((char*)((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1360, 2336)), "./neo-c.h", 1360, 2337))->keys),come_pop_stackframe());
                                        ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1362, 2339)), "./neo-c.h", 1362, 2340))->keys=keys_173;
                                        ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1363, 2341)), "./neo-c.h", 1363, 2342))->items=items_174;
                                        ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1364, 2343)), "./neo-c.h", 1364, 2344))->item_existance=item_existance_175;
                                        ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1366, 2345)), "./neo-c.h", 1366, 2346))->size=size_172;
                                        ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1367, 2347)), "./neo-c.h", 1367, 2348))->len=len_176;
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional246;
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
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional246=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 0, 2464)), "sFun_finalize", 0, 2465))->mName!=((void*)0),        _if_conditional246) {
            ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 0, 2466)), "sFun_finalize", 0, 2467))->mName = come_decrement_ref_count2(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 0, 2466)), "sFun_finalize", 0, 2467))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional247=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 1, 2468)), "sFun_finalize", 1, 2469))->mResultType!=((void*)0),        _if_conditional247) {
            come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 1, 2470)), "sFun_finalize", 1, 2471))->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional248=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 2, 2472)), "sFun_finalize", 2, 2473))->mParamTypes!=((void*)0),        _if_conditional248) {
            come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 2, 2474)), "sFun_finalize", 2, 2475))->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional249=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 3, 2476)), "sFun_finalize", 3, 2477))->mParamNames!=((void*)0),        _if_conditional249) {
            come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 3, 2478)), "sFun_finalize", 3, 2479))->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional250=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 4, 2480)), "sFun_finalize", 4, 2481))->mParamDefaultParametors!=((void*)0),        _if_conditional250) {
            come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 4, 2482)), "sFun_finalize", 4, 2483))->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional251=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 5, 2484)), "sFun_finalize", 5, 2485))->mLambdaType!=((void*)0),        _if_conditional251) {
            come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 5, 2486)), "sFun_finalize", 5, 2487))->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional252=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 6, 2488)), "sFun_finalize", 6, 2489))->mBlock!=((void*)0),        _if_conditional252) {
            come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 6, 2490)), "sFun_finalize", 6, 2491))->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional253=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 7, 2492)), "sFun_finalize", 7, 2493))->mSource!=((void*)0),        _if_conditional253) {
            come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 7, 2494)), "sFun_finalize", 7, 2495))->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional254=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 8, 2496)), "sFun_finalize", 8, 2497))->mSourceHead!=((void*)0),        _if_conditional254) {
            come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 8, 2498)), "sFun_finalize", 8, 2499))->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional255=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 9, 2500)), "sFun_finalize", 9, 2501))->mSourceHead2!=((void*)0),        _if_conditional255) {
            come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 9, 2502)), "sFun_finalize", 9, 2503))->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional256=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 10, 2504)), "sFun_finalize", 10, 2505))->mSourceDefer!=((void*)0),        _if_conditional256) {
            come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 10, 2506)), "sFun_finalize", 10, 2507))->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional257=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 11, 2508)), "sFun_finalize", 11, 2509))->mComeHeader!=((void*)0),        _if_conditional257) {
            ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 11, 2510)), "sFun_finalize", 11, 2511))->mComeHeader = come_decrement_ref_count2(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 11, 2510)), "sFun_finalize", 11, 2511))->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional258=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 12, 2512)), "sFun_finalize", 12, 2513))->mDeclareSName!=((void*)0),        _if_conditional258) {
            ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 12, 2514)), "sFun_finalize", 12, 2515))->mDeclareSName = come_decrement_ref_count2(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 12, 2514)), "sFun_finalize", 12, 2515))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info){
void* __result_obj__;
void* right_value200;
char* __exception_result_var_b202;
char* __dec_obj87;
struct sNodeBase* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
right_value200 = (void*)0;
    ((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "02constructors.c", 183, 2516)), "02constructors.c", 183, 2517))->sline=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02constructors.c", 183, 2518)), "02constructors.c", 183, 2519))->sline;
    __dec_obj87=((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "02constructors.c", 184, 2520)), "02constructors.c", 184, 2521))->sname;
    ((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "02constructors.c", 184, 2520)), "02constructors.c", 184, 2521))->sname=(char*)come_increment_ref_count((come_push_stackframe("02constructors.c", 184, 2524),__exception_result_var_b202=((char*)(right_value200=__builtin_string(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "02constructors.c", 184, 2522)), "02constructors.c", 184, 2523))->sname))), come_pop_stackframe(), __exception_result_var_b202));
    __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result142__ = __result_obj__ = self;
    come_call_finalizer3(self,sNodeBase_finalize, 0, 0, 1, 0, (void*)0);
    return __result142__;
    come_call_finalizer3(self,sNodeBase_finalize, 0, 0, 1, 0, (void*)0);
}

static void sNodeBase_finalize(struct sNodeBase* self){
void* __result_obj__;
_Bool _if_conditional259;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional259=self!=((void*)0)&&((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "sNodeBase_finalize", 0, 2525)), "sNodeBase_finalize", 0, 2526))->sname!=((void*)0),        _if_conditional259) {
            ((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "sNodeBase_finalize", 0, 2527)), "sNodeBase_finalize", 0, 2528))->sname = come_decrement_ref_count2(((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "sNodeBase_finalize", 0, 2527)), "sNodeBase_finalize", 0, 2528))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info){
void* __result_obj__;
int __result143__;
memset(&__result_obj__, 0, sizeof(void*));
    __result143__ = ((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "02constructors.c", 191, 2529)), "02constructors.c", 191, 2530))->sline;
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
void* right_value201;
char* __exception_result_var_b203;
char* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
right_value201 = (void*)0;
    __result145__ = __result_obj__ = (come_push_stackframe("02constructors.c", 201, 2533),__exception_result_var_b203=((char*)(right_value201=__builtin_string(((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "02constructors.c", 201, 2531)), "02constructors.c", 201, 2532))->sname))), come_pop_stackframe(), __exception_result_var_b203);
    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result145__;
}

