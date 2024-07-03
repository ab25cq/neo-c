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
int gRightValueNum=0;

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

void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info);

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);

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
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static int list$1sNodeph_length(struct list$1sNodeph* self);
struct sType* solve_method_generics(struct sType* type, struct sInfo* info);

struct sType* solve_type(struct sType* type, struct sType* generics_type, struct list$1sTypeph* method_generics_types, struct sInfo* info);

int get_right_value_id_from_obj(char* obj);

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);

static void sRightValueObject_finalize(struct sRightValueObject* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_push_back(struct list$1sRightValueObjectph* self, struct sRightValueObject* item);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);

static struct sRightValueObject* list$1sRightValueObjectph_begin(struct list$1sRightValueObjectph* self);
static _Bool list$1sRightValueObjectph_end(struct list$1sRightValueObjectph* self);
static struct sRightValueObject* list$1sRightValueObjectph_next(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_delete(struct list$1sRightValueObjectph* self, int head, int tail);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_);

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self);
static void list$1CVALUEph_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_);

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info);

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
_Bool create_equals_method(struct sType* type, struct sInfo* info);

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);

_Bool existance_free_right_value_objects(struct sInfo* info);

void free_right_value_objects(struct sInfo* info, _Bool comma);

_Bool is_right_values(int right_value_num, struct sInfo* info);

struct sVar* get_variable_from_table(struct sVarTable* table, char* name);

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static void sVar_finalize(struct sVar* self);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);

void free_objects_on_break(struct sInfo* info);

char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info);

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










void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional21;
char* __dec_obj12;
_Bool _if_conditional22;
void* right_value79;
char* __dec_obj13;
_Bool _if_conditional23;
void* right_value80;
char* __dec_obj14;
void* right_value81;
char* __dec_obj15;
_Bool _if_conditional24;
void* right_value82;
char* __dec_obj16;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value80 = (void*)0;
right_value81 = (void*)0;
right_value82 = (void*)0;
    # 8 "04heap.c"
    # 5 "04heap.c"
    if(gComeGC) {
        # 6 "04heap.c"
        return;
    }
    # 29 "04heap.c"
    # 8 "04heap.c"
    if(right_value->var) {
        # 21 "04heap.c"
        # 9 "04heap.c"
        if(right_value->var->mType->mDelegate) {
            # 10 "04heap.c"
            __dec_obj12=right_value->var->mCValueName;
            right_value->var->mCValueName=((void*)0);
            __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            # 21 "04heap.c"
            # 12 "04heap.c"
            if(right_value->var->mType->mShare) {
                # 13 "04heap.c"
                __dec_obj13=right_value->c_value;
                right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value79=increment_ref_count_object(right_value->type,right_value->c_value,info))));
                __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                # 21 "04heap.c"
                # 15 "04heap.c"
                if(right_value->var->mType->mClone) {
                    # 16 "04heap.c"
                    __dec_obj14=right_value->c_value;
                    right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value80=increment_ref_count_object(right_value->type,right_value->c_value,info))));
                    __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 19 "04heap.c"
                    __dec_obj15=right_value->c_value;
                    right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value81=increment_ref_count_object(right_value->type,right_value->c_value,info))));
                    __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
    }
    else {
        # 28 "04heap.c"
        # 23 "04heap.c"
        if(right_value->type->mDelegate) {
        }
        else {
            # 26 "04heap.c"
            __dec_obj16=right_value->c_value;
            right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value82=increment_ref_count_object(right_value->type,right_value->c_value,info))));
            __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
}

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
void* right_value118;
struct sType* result_77;
_Bool _if_conditional116;
struct sType* __result70__;
_Bool _if_conditional118;
struct sType* __result73__;
struct sClass* klass_78;
_Bool _if_conditional119;
void* right_value119;
struct sType* result_type_79;
void* right_value120;
void* right_value121;
struct tuple1$1sTypeph* __dec_obj41;
struct list$1sTypeph* o2_saved_82;
struct sType* it_85;
void* right_value122;
struct sType* new_param_type_88;
void* right_value126;
_Bool _if_conditional126;
int generics_number_92;
_Bool _if_conditional127;
void* right_value127;
struct list$1sNodeph* array_num_93;
_Bool immutable__94;
int pointer_num_95;
_Bool heap_96;
_Bool guard__97;
_Bool no_heap_98;
_Bool no_calling_destructor_99;
_Bool null_value_100;
void* right_value128;
struct sType* __dec_obj45;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool _if_conditional136;
struct list$1sNodeph* __dec_obj46;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional139;
int generics_number_104;
_Bool _if_conditional140;
struct sClass* klass2_105;
int generics_number2_106;
_Bool _if_conditional141;
void* right_value129;
struct list$1sNodeph* array_num_107;
_Bool immutable__108;
int pointer_num_109;
_Bool heap_110;
_Bool guard__111;
_Bool no_heap_112;
_Bool no_calling_destructor_113;
_Bool null_value_114;
_Bool record__115;
void* right_value130;
struct sType* __dec_obj47;
_Bool _if_conditional142;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
struct list$1sNodeph* __dec_obj48;
_Bool _if_conditional149;
_Bool _if_conditional150;
struct list$1sTypeph* o2_saved_116;
struct sType* it_117;
void* right_value131;
struct sType* type_118;
void* right_value132;
struct list$1sTypeph* o2_saved_119;
struct sType* it_120;
void* right_value133;
struct sType* type_121;
void* right_value134;
_Bool _if_conditional151;
void* right_value135;
char* new_name_122;
struct sType* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value118 = (void*)0;
memset(&result_77, 0, sizeof(struct sType*));
memset(&klass_78, 0, sizeof(struct sClass*));
right_value119 = (void*)0;
memset(&result_type_79, 0, sizeof(struct sType*));
right_value120 = (void*)0;
right_value121 = (void*)0;
memset(&o2_saved_82, 0, sizeof(struct list$1sTypeph*));
memset(&it_85, 0, sizeof(struct sType*));
right_value122 = (void*)0;
memset(&new_param_type_88, 0, sizeof(struct sType*));
right_value126 = (void*)0;
memset(&generics_number_92, 0, sizeof(int));
right_value127 = (void*)0;
memset(&array_num_93, 0, sizeof(struct list$1sNodeph*));
memset(&immutable__94, 0, sizeof(_Bool));
memset(&pointer_num_95, 0, sizeof(int));
memset(&heap_96, 0, sizeof(_Bool));
memset(&guard__97, 0, sizeof(_Bool));
memset(&no_heap_98, 0, sizeof(_Bool));
memset(&no_calling_destructor_99, 0, sizeof(_Bool));
memset(&null_value_100, 0, sizeof(_Bool));
right_value128 = (void*)0;
memset(&generics_number_104, 0, sizeof(int));
memset(&klass2_105, 0, sizeof(struct sClass*));
memset(&generics_number2_106, 0, sizeof(int));
right_value129 = (void*)0;
memset(&array_num_107, 0, sizeof(struct list$1sNodeph*));
memset(&immutable__108, 0, sizeof(_Bool));
memset(&pointer_num_109, 0, sizeof(int));
memset(&heap_110, 0, sizeof(_Bool));
memset(&guard__111, 0, sizeof(_Bool));
memset(&no_heap_112, 0, sizeof(_Bool));
memset(&no_calling_destructor_113, 0, sizeof(_Bool));
memset(&null_value_114, 0, sizeof(_Bool));
memset(&record__115, 0, sizeof(_Bool));
right_value130 = (void*)0;
memset(&o2_saved_116, 0, sizeof(struct list$1sTypeph*));
memset(&it_117, 0, sizeof(struct sType*));
right_value131 = (void*)0;
memset(&type_118, 0, sizeof(struct sType*));
right_value132 = (void*)0;
memset(&o2_saved_119, 0, sizeof(struct list$1sTypeph*));
memset(&it_120, 0, sizeof(struct sType*));
right_value133 = (void*)0;
memset(&type_121, 0, sizeof(struct sType*));
right_value134 = (void*)0;
right_value135 = (void*)0;
memset(&new_name_122, 0, sizeof(char*));
    # 33 "04heap.c"
    result_77=(struct sType*)come_increment_ref_count(((struct sType*)(right_value118=sType_clone(type))));
    come_call_finalizer3(right_value118,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 37 "04heap.c"
    # 34 "04heap.c"
    if(_if_conditional116=generics_type==((void*)0),    _if_conditional116) {
        # 35 "04heap.c"
        __result70__ = __result_obj__ = result_77;
        come_call_finalizer3(result_77,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result70__;
    }
    # 41 "04heap.c"
    # 37 "04heap.c"
    if(_if_conditional118=list$1sTypeph_length(generics_type->mGenericsTypes)==0,    _if_conditional118) {
        # 38 "04heap.c"
        __result73__ = __result_obj__ = result_77;
        come_call_finalizer3(result_77,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result73__;
    }
    # 41 "04heap.c"
    klass_78=type->mClass;
    # 185 "04heap.c"
    # 43 "04heap.c"
    if(_if_conditional119=string_operator_equals(klass_78->mName,"lambda"),    _if_conditional119) {
        # 44 "04heap.c"
        result_type_79=(struct sType*)come_increment_ref_count(((struct sType*)(right_value119=solve_generics(type->mResultType->v1,generics_type,info))));
        come_call_finalizer3(right_value119,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 46 "04heap.c"
        __dec_obj41=result_77->mResultType;
        result_77->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value121=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value120=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "04heap.c", 46, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_79)))));
        come_call_finalizer3(__dec_obj41,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value120,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value121,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 48 "04heap.c"
        list$1sTypeph_reset(result_77->mParamTypes);
        # 55 "04heap.c"
        for(        o2_saved_82=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_85=list$1sTypeph_begin((o2_saved_82));        !list$1sTypeph_end((o2_saved_82));        it_85=list$1sTypeph_next((o2_saved_82))        ){
            # 51 "04heap.c"
            new_param_type_88=(struct sType*)come_increment_ref_count(((struct sType*)(right_value122=solve_generics(it_85,generics_type,info))));
            come_call_finalizer3(right_value122,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 53 "04heap.c"
            list$1sTypeph_push_back(result_77->mParamTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value126=sType_clone(new_param_type_88)))));
            come_call_finalizer3(right_value126,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(new_param_type_88,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_82,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_79,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 185 "04heap.c"
        # 56 "04heap.c"
        if(_if_conditional126=klass_78->mMethodGenerics&&info->method_generics_types&&list$1sTypeph_length(info->method_generics_types)>0,        _if_conditional126) {
            # 57 "04heap.c"
            generics_number_92=klass_78->mMethodGenericsNum;
            # 65 "04heap.c"
            # 59 "04heap.c"
            if(_if_conditional127=generics_number_92>=list$1sTypeph_length(info->method_generics_types),            _if_conditional127) {
                # 61 "04heap.c"
                err_msg(info,"invalid method generics parametor number. %d %d",generics_number_92,list$1sTypeph_length(info->method_generics_types));
                # 62 "04heap.c"
                exit(2);
            }
            # 65 "04heap.c"
            array_num_93=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value127=list$1sNodephp_clone(type->mArrayNum))));
            come_call_finalizer3(right_value127,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            # 66 "04heap.c"
            immutable__94=type->mImmutable;
            # 67 "04heap.c"
            pointer_num_95=type->mPointerNum;
            # 68 "04heap.c"
            heap_96=type->mHeap;
            # 69 "04heap.c"
            guard__97=type->mGuardValue;
            # 71 "04heap.c"
            no_heap_98=type->mNoHeap;
            # 72 "04heap.c"
            no_calling_destructor_99=type->mNoCallingDestructor;
            # 73 "04heap.c"
            null_value_100=type->mNullValue;
            # 75 "04heap.c"
            __dec_obj45=result_77;
            result_77=(struct sType*)come_increment_ref_count(((struct sType*)(right_value128=sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(info->method_generics_types,generics_number_92), "04heap.c", 75, 0))))));
            come_call_finalizer3(__dec_obj45,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value128,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 80 "04heap.c"
            # 77 "04heap.c"
            if(heap_96) {
                # 78 "04heap.c"
                result_77->mHeap=heap_96;
            }
            # 83 "04heap.c"
            # 80 "04heap.c"
            if(guard__97) {
                # 81 "04heap.c"
                result_77->mGuardValue=guard__97;
            }
            # 87 "04heap.c"
            # 83 "04heap.c"
            if(no_heap_98) {
                # 84 "04heap.c"
                result_77->mNoHeap=(_Bool)1;
                # 85 "04heap.c"
                result_77->mHeap=(_Bool)0;
            }
            # 90 "04heap.c"
            # 87 "04heap.c"
            if(no_calling_destructor_99) {
                # 88 "04heap.c"
                result_77->mNoCallingDestructor=(_Bool)1;
            }
            # 93 "04heap.c"
            # 90 "04heap.c"
            if(immutable__94) {
                # 91 "04heap.c"
                result_77->mImmutable=immutable__94;
            }
            # 97 "04heap.c"
            # 93 "04heap.c"
            if(_if_conditional136=list$1sNodeph_length(array_num_93)>0,            _if_conditional136) {
                # 94 "04heap.c"
                __dec_obj46=result_77->mArrayNum;
                result_77->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_93);
                come_call_finalizer3(__dec_obj46,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 101 "04heap.c"
            # 97 "04heap.c"
            if(null_value_100) {
                # 98 "04heap.c"
                result_77->mNullValue=null_value_100;
            }
            # 104 "04heap.c"
            # 101 "04heap.c"
            if(_if_conditional138=pointer_num_95>0,            _if_conditional138) {
                # 102 "04heap.c"
                result_77->mPointerNum+=pointer_num_95;
            }
            come_call_finalizer3(array_num_93,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 185 "04heap.c"
            # 105 "04heap.c"
            if(klass_78->mGenerics) {
                # 106 "04heap.c"
                generics_number_104=klass_78->mGenericsNum;
                # 114 "04heap.c"
                # 108 "04heap.c"
                if(_if_conditional140=generics_number_104>=list$1sTypeph_length(generics_type->mGenericsTypes),                _if_conditional140) {
                    # 110 "04heap.c"
                    err_msg(info,"invalid generics parametor number");
                    # 111 "04heap.c"
                    exit(2);
                }
                # 114 "04heap.c"
                klass2_105=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,generics_number_104), "04heap.c", 114, 1))->mClass;
                # 116 "04heap.c"
                generics_number2_106=klass2_105->mGenericsNum;
                # 164 "04heap.c"
                # 118 "04heap.c"
                if(_if_conditional141=generics_number_104!=generics_number2_106,                _if_conditional141) {
                    # 120 "04heap.c"
                    array_num_107=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value129=list$1sNodephp_clone(type->mArrayNum))));
                    come_call_finalizer3(right_value129,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 121 "04heap.c"
                    immutable__108=type->mImmutable;
                    # 122 "04heap.c"
                    pointer_num_109=type->mPointerNum;
                    # 123 "04heap.c"
                    heap_110=type->mHeap;
                    # 124 "04heap.c"
                    guard__111=type->mGuardValue;
                    # 126 "04heap.c"
                    no_heap_112=type->mNoHeap;
                    # 127 "04heap.c"
                    no_calling_destructor_113=type->mNoCallingDestructor;
                    # 128 "04heap.c"
                    null_value_114=type->mNullValue;
                    # 129 "04heap.c"
                    record__115=type->mRecord;
                    # 131 "04heap.c"
                    __dec_obj47=result_77;
                    result_77=(struct sType*)come_increment_ref_count(((struct sType*)(right_value130=sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,generics_number_104), "04heap.c", 131, 2))))));
                    come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value130,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 136 "04heap.c"
                    # 133 "04heap.c"
                    if(heap_110) {
                        # 134 "04heap.c"
                        result_77->mHeap=heap_110;
                    }
                    # 139 "04heap.c"
                    # 136 "04heap.c"
                    if(guard__111) {
                        # 137 "04heap.c"
                        result_77->mGuardValue=guard__111;
                    }
                    # 142 "04heap.c"
                    # 139 "04heap.c"
                    if(record__115) {
                        # 140 "04heap.c"
                        result_77->mRecord=record__115;
                    }
                    # 146 "04heap.c"
                    # 142 "04heap.c"
                    if(no_heap_112) {
                        # 143 "04heap.c"
                        result_77->mNoHeap=(_Bool)1;
                        # 144 "04heap.c"
                        result_77->mHeap=(_Bool)0;
                    }
                    # 149 "04heap.c"
                    # 146 "04heap.c"
                    if(no_calling_destructor_113) {
                        # 147 "04heap.c"
                        result_77->mNoCallingDestructor=(_Bool)1;
                    }
                    # 152 "04heap.c"
                    # 149 "04heap.c"
                    if(immutable__108) {
                        # 150 "04heap.c"
                        result_77->mImmutable=immutable__108;
                    }
                    # 156 "04heap.c"
                    # 152 "04heap.c"
                    if(_if_conditional148=list$1sNodeph_length(array_num_107)>0,                    _if_conditional148) {
                        # 153 "04heap.c"
                        __dec_obj48=result_77->mArrayNum;
                        result_77->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_107);
                        come_call_finalizer3(__dec_obj48,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    # 160 "04heap.c"
                    # 156 "04heap.c"
                    if(null_value_114) {
                        # 157 "04heap.c"
                        result_77->mNullValue=null_value_114;
                    }
                    # 163 "04heap.c"
                    # 160 "04heap.c"
                    if(_if_conditional150=pointer_num_109>0,                    _if_conditional150) {
                        # 161 "04heap.c"
                        result_77->mPointerNum+=pointer_num_109;
                    }
                    come_call_finalizer3(array_num_107,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                # 166 "04heap.c"
                list$1sTypeph_reset(result_77->mGenericsTypes);
                # 171 "04heap.c"
                for(                o2_saved_116=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_117=list$1sTypeph_begin((o2_saved_116));                !list$1sTypeph_end((o2_saved_116));                it_117=list$1sTypeph_next((o2_saved_116))                ){
                    # 168 "04heap.c"
                    type_118=(struct sType*)come_increment_ref_count(((struct sType*)(right_value131=solve_generics(it_117,generics_type,info))));
                    come_call_finalizer3(right_value131,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 169 "04heap.c"
                    list$1sTypeph_push_back(result_77->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value132=sType_clone(type_118)))));
                    come_call_finalizer3(right_value132,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(type_118,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer3(o2_saved_116,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                # 171 "04heap.c"
                list$1sTypeph_reset(result_77->mMultipleTypes);
                # 177 "04heap.c"
                for(                o2_saved_119=(struct list$1sTypeph*)come_increment_ref_count((type->mMultipleTypes)),it_120=list$1sTypeph_begin((o2_saved_119));                !list$1sTypeph_end((o2_saved_119));                it_120=list$1sTypeph_next((o2_saved_119))                ){
                    # 173 "04heap.c"
                    type_121=(struct sType*)come_increment_ref_count(((struct sType*)(right_value133=solve_generics(it_120,generics_type,info))));
                    come_call_finalizer3(right_value133,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 174 "04heap.c"
                    list$1sTypeph_push_back(result_77->mMultipleTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value134=sType_clone(type_121)))));
                    come_call_finalizer3(right_value134,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(type_121,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer3(o2_saved_119,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                # 183 "04heap.c"
                # 177 "04heap.c"
                if(_if_conditional151=!output_generics_struct(result_77,generics_type,info),                _if_conditional151) {
                    # 179 "04heap.c"
                    new_name_122=(char*)come_increment_ref_count(((char*)(right_value135=create_generics_name(type,info))));
                    right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 180 "04heap.c"
                    printf("output generics is failed(%s)",new_name_122);
                    # 181 "04heap.c"
                    exit(1);
                    new_name_122 = come_decrement_ref_count2(new_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
    }
    # 185 "04heap.c"
    __result88__ = __result_obj__ = result_77;
    come_call_finalizer3(result_77,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result88__;
    come_call_finalizer3(result_77,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional25;
struct sType* __result52__;
void* right_value83;
struct sType* result_47;
_Bool _if_conditional43;
_Bool _if_conditional44;
void* right_value90;
struct list$1sTypeph* __dec_obj20;
_Bool _if_conditional48;
void* right_value93;
struct tuple1$1sTypeph* __dec_obj22;
_Bool _if_conditional52;
void* right_value94;
struct tuple1$1sTypeph* __dec_obj23;
_Bool _if_conditional53;
void* right_value95;
char* __dec_obj24;
_Bool _if_conditional54;
void* right_value96;
struct list$1sTypeph* __dec_obj25;
_Bool _if_conditional55;
void* right_value104;
struct list$1sNodeph* __dec_obj29;
_Bool _if_conditional68;
_Bool _if_conditional69;
void* right_value105;
struct list$1sTypeph* __dec_obj30;
_Bool _if_conditional70;
void* right_value112;
struct list$1charph* __dec_obj34;
_Bool _if_conditional74;
void* right_value113;
struct tuple1$1sTypeph* __dec_obj35;
_Bool _if_conditional75;
_Bool _if_conditional76;
void* right_value114;
struct sNode* __dec_obj36;
_Bool _if_conditional77;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool _if_conditional95;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
_Bool _if_conditional101;
void* right_value115;
struct sNode* __dec_obj37;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
void* right_value116;
char* __dec_obj38;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
void* right_value117;
char* __dec_obj39;
_Bool _if_conditional115;
struct sType* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value83 = (void*)0;
memset(&result_47, 0, sizeof(struct sType*));
right_value90 = (void*)0;
right_value93 = (void*)0;
right_value94 = (void*)0;
right_value95 = (void*)0;
right_value96 = (void*)0;
right_value104 = (void*)0;
right_value105 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
right_value117 = (void*)0;
        # 3 "sType_clone"
        # 2 "sType_clone"
        if(_if_conditional25=self==(void*)0,        _if_conditional25) {
            # 2 "sType_clone"
            __result52__ = __result_obj__ = (void*)0;
            return __result52__;
        }
        # 3 "sType_clone"
        result_47=(struct sType*)come_increment_ref_count(((struct sType*)(right_value83=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer3(right_value83,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 5 "sType_clone"
        # 4 "sType_clone"
        if(_if_conditional43=self!=((void*)0),        _if_conditional43) {
            # 4 "sType_clone"
            result_47->mClass=self->mClass;
        }
        # 6 "sType_clone"
        # 5 "sType_clone"
        if(_if_conditional44=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional44) {
            # 5 "sType_clone"
            __dec_obj20=result_47->mMultipleTypes;
            result_47->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value90=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer3(__dec_obj20,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value90,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 7 "sType_clone"
        # 6 "sType_clone"
        if(_if_conditional48=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional48) {
            # 6 "sType_clone"
            __dec_obj22=result_47->mNoSolvedGenericsType;
            result_47->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value93=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer3(__dec_obj22,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value93,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 8 "sType_clone"
        # 7 "sType_clone"
        if(_if_conditional52=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional52) {
            # 7 "sType_clone"
            __dec_obj23=result_47->mOriginalLoadVarType;
            result_47->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value94=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer3(__dec_obj23,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value94,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 9 "sType_clone"
        # 8 "sType_clone"
        if(_if_conditional53=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional53) {
            # 8 "sType_clone"
            __dec_obj24=result_47->mGenericsName;
            result_47->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value95=string_clone(self->mGenericsName))));
            __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 10 "sType_clone"
        # 9 "sType_clone"
        if(_if_conditional54=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional54) {
            # 9 "sType_clone"
            __dec_obj25=result_47->mGenericsTypes;
            result_47->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value96=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer3(__dec_obj25,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value96,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 11 "sType_clone"
        # 10 "sType_clone"
        if(_if_conditional55=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional55) {
            # 10 "sType_clone"
            __dec_obj29=result_47->mArrayNum;
            result_47->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value104=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer3(__dec_obj29,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value104,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 12 "sType_clone"
        # 11 "sType_clone"
        if(_if_conditional68=self!=((void*)0),        _if_conditional68) {
            # 11 "sType_clone"
            result_47->mOmitArrayNum=self->mOmitArrayNum;
        }
        # 13 "sType_clone"
        # 12 "sType_clone"
        if(_if_conditional69=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional69) {
            # 12 "sType_clone"
            __dec_obj30=result_47->mParamTypes;
            result_47->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value105=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer3(__dec_obj30,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value105,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 14 "sType_clone"
        # 13 "sType_clone"
        if(_if_conditional70=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional70) {
            # 13 "sType_clone"
            __dec_obj34=result_47->mParamNames;
            result_47->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value112=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer3(__dec_obj34,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value112,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 15 "sType_clone"
        # 14 "sType_clone"
        if(_if_conditional74=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional74) {
            # 14 "sType_clone"
            __dec_obj35=result_47->mResultType;
            result_47->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value113=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer3(__dec_obj35,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value113,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 16 "sType_clone"
        # 15 "sType_clone"
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            # 15 "sType_clone"
            result_47->mVarArgs=self->mVarArgs;
        }
        # 17 "sType_clone"
        # 16 "sType_clone"
        if(_if_conditional76=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional76) {
            # 16 "sType_clone"
            __dec_obj36=result_47->mAlignas;
            result_47->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value114=sNode_clone(self->mAlignas))));
            if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count2(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value114) { right_value114 = come_decrement_ref_count2(right_value114, ((struct sNode*)right_value114)->finalize, ((struct sNode*)right_value114)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 18 "sType_clone"
        # 17 "sType_clone"
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            # 17 "sType_clone"
            result_47->mUnsigned=self->mUnsigned;
        }
        # 19 "sType_clone"
        # 18 "sType_clone"
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            # 18 "sType_clone"
            result_47->mShort=self->mShort;
        }
        # 20 "sType_clone"
        # 19 "sType_clone"
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            # 19 "sType_clone"
            result_47->mLong=self->mLong;
        }
        # 21 "sType_clone"
        # 20 "sType_clone"
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            # 20 "sType_clone"
            result_47->mLongLong=self->mLongLong;
        }
        # 22 "sType_clone"
        # 21 "sType_clone"
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            # 21 "sType_clone"
            result_47->mConstant=self->mConstant;
        }
        # 23 "sType_clone"
        # 22 "sType_clone"
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            # 22 "sType_clone"
            result_47->mRegister=self->mRegister;
        }
        # 24 "sType_clone"
        # 23 "sType_clone"
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            # 23 "sType_clone"
            result_47->mVolatile=self->mVolatile;
        }
        # 25 "sType_clone"
        # 24 "sType_clone"
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            # 24 "sType_clone"
            result_47->mStatic=self->mStatic;
        }
        # 26 "sType_clone"
        # 25 "sType_clone"
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            # 25 "sType_clone"
            result_47->mRecord=self->mRecord;
        }
        # 27 "sType_clone"
        # 26 "sType_clone"
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            # 26 "sType_clone"
            result_47->mExtern=self->mExtern;
        }
        # 28 "sType_clone"
        # 27 "sType_clone"
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            # 27 "sType_clone"
            result_47->mRestrict=self->mRestrict;
        }
        # 29 "sType_clone"
        # 28 "sType_clone"
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            # 28 "sType_clone"
            result_47->mImmutable=self->mImmutable;
        }
        # 30 "sType_clone"
        # 29 "sType_clone"
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            # 29 "sType_clone"
            result_47->mHeap=self->mHeap;
        }
        # 31 "sType_clone"
        # 30 "sType_clone"
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            # 30 "sType_clone"
            result_47->mDummyHeap=self->mDummyHeap;
        }
        # 32 "sType_clone"
        # 31 "sType_clone"
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            # 31 "sType_clone"
            result_47->mDelegate=self->mDelegate;
        }
        # 33 "sType_clone"
        # 32 "sType_clone"
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            # 32 "sType_clone"
            result_47->mShare=self->mShare;
        }
        # 34 "sType_clone"
        # 33 "sType_clone"
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            # 33 "sType_clone"
            result_47->mClone=self->mClone;
        }
        # 35 "sType_clone"
        # 34 "sType_clone"
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            # 34 "sType_clone"
            result_47->mNoHeap=self->mNoHeap;
        }
        # 36 "sType_clone"
        # 35 "sType_clone"
        if(_if_conditional95=self!=((void*)0),        _if_conditional95) {
            # 35 "sType_clone"
            result_47->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        # 37 "sType_clone"
        # 36 "sType_clone"
        if(_if_conditional96=self!=((void*)0),        _if_conditional96) {
            # 36 "sType_clone"
            result_47->mRefference=self->mRefference;
        }
        # 38 "sType_clone"
        # 37 "sType_clone"
        if(_if_conditional97=self!=((void*)0),        _if_conditional97) {
            # 37 "sType_clone"
            result_47->mException=self->mException;
        }
        # 39 "sType_clone"
        # 38 "sType_clone"
        if(_if_conditional98=self!=((void*)0),        _if_conditional98) {
            # 38 "sType_clone"
            result_47->mPointerNum=self->mPointerNum;
        }
        # 40 "sType_clone"
        # 39 "sType_clone"
        if(_if_conditional99=self!=((void*)0),        _if_conditional99) {
            # 39 "sType_clone"
            result_47->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        # 41 "sType_clone"
        # 40 "sType_clone"
        if(_if_conditional100=self!=((void*)0),        _if_conditional100) {
            # 40 "sType_clone"
            result_47->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        # 42 "sType_clone"
        # 41 "sType_clone"
        if(_if_conditional101=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional101) {
            # 41 "sType_clone"
            __dec_obj37=result_47->mSizeNum;
            result_47->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value115=sNode_clone(self->mSizeNum))));
            if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value115) { right_value115 = come_decrement_ref_count2(right_value115, ((struct sNode*)right_value115)->finalize, ((struct sNode*)right_value115)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 43 "sType_clone"
        # 42 "sType_clone"
        if(_if_conditional102=self!=((void*)0),        _if_conditional102) {
            # 42 "sType_clone"
            result_47->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        # 44 "sType_clone"
        # 43 "sType_clone"
        if(_if_conditional103=self!=((void*)0),        _if_conditional103) {
            # 43 "sType_clone"
            result_47->mTypeOfExpression=self->mTypeOfExpression;
        }
        # 45 "sType_clone"
        # 44 "sType_clone"
        if(_if_conditional104=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional104) {
            # 44 "sType_clone"
            __dec_obj38=result_47->mOriginalTypeName;
            result_47->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value116=string_clone(self->mOriginalTypeName))));
            __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 46 "sType_clone"
        # 45 "sType_clone"
        if(_if_conditional105=self!=((void*)0),        _if_conditional105) {
            # 45 "sType_clone"
            result_47->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        # 47 "sType_clone"
        # 46 "sType_clone"
        if(_if_conditional106=self!=((void*)0),        _if_conditional106) {
            # 46 "sType_clone"
            result_47->mFunctionParam=self->mFunctionParam;
        }
        # 48 "sType_clone"
        # 47 "sType_clone"
        if(_if_conditional107=self!=((void*)0),        _if_conditional107) {
            # 47 "sType_clone"
            result_47->mAllocaValue=self->mAllocaValue;
        }
        # 49 "sType_clone"
        # 48 "sType_clone"
        if(_if_conditional108=self!=((void*)0),        _if_conditional108) {
            # 48 "sType_clone"
            result_47->mGenericsStruct=self->mGenericsStruct;
        }
        # 50 "sType_clone"
        # 49 "sType_clone"
        if(_if_conditional109=self!=((void*)0),        _if_conditional109) {
            # 49 "sType_clone"
            result_47->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        # 51 "sType_clone"
        # 50 "sType_clone"
        if(_if_conditional110=self!=((void*)0),        _if_conditional110) {
            # 50 "sType_clone"
            result_47->mComeMemCore=self->mComeMemCore;
        }
        # 52 "sType_clone"
        # 51 "sType_clone"
        if(_if_conditional111=self!=((void*)0),        _if_conditional111) {
            # 51 "sType_clone"
            result_47->mInline=self->mInline;
        }
        # 53 "sType_clone"
        # 52 "sType_clone"
        if(_if_conditional112=self!=((void*)0),        _if_conditional112) {
            # 52 "sType_clone"
            result_47->mNullValue=self->mNullValue;
        }
        # 54 "sType_clone"
        # 53 "sType_clone"
        if(_if_conditional113=self!=((void*)0),        _if_conditional113) {
            # 53 "sType_clone"
            result_47->mGuardValue=self->mGuardValue;
        }
        # 55 "sType_clone"
        # 54 "sType_clone"
        if(_if_conditional114=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional114) {
            # 54 "sType_clone"
            __dec_obj39=result_47->mAsmName;
            result_47->mAsmName=(char*)come_increment_ref_count(((char*)(right_value117=string_clone(self->mAsmName))));
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 56 "sType_clone"
        # 55 "sType_clone"
        if(_if_conditional115=self!=((void*)0),        _if_conditional115) {
            # 55 "sType_clone"
            result_47->mArrayPointerType=self->mArrayPointerType;
        }
        # 56 "sType_clone"
        __result69__ = __result_obj__ = result_47;
        come_call_finalizer3(result_47,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result69__;
        come_call_finalizer3(result_47,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional26;
_Bool _if_conditional28;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sType_finalize"
            # 0 "sType_finalize"
            if(_if_conditional26=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional26) {
                # 0 "sType_finalize"
                come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 2 "sType_finalize"
            # 1 "sType_finalize"
            if(_if_conditional28=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional28) {
                # 1 "sType_finalize"
                come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 3 "sType_finalize"
            # 2 "sType_finalize"
            if(_if_conditional30=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional30) {
                # 2 "sType_finalize"
                come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 4 "sType_finalize"
            # 3 "sType_finalize"
            if(_if_conditional31=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional31) {
                # 3 "sType_finalize"
                self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 5 "sType_finalize"
            # 4 "sType_finalize"
            if(_if_conditional32=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional32) {
                # 4 "sType_finalize"
                come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 6 "sType_finalize"
            # 5 "sType_finalize"
            if(_if_conditional33=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional33) {
                # 5 "sType_finalize"
                come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 7 "sType_finalize"
            # 6 "sType_finalize"
            if(_if_conditional35=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional35) {
                # 6 "sType_finalize"
                come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 8 "sType_finalize"
            # 7 "sType_finalize"
            if(_if_conditional36=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional36) {
                # 7 "sType_finalize"
                come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 9 "sType_finalize"
            # 8 "sType_finalize"
            if(_if_conditional38=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional38) {
                # 8 "sType_finalize"
                come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 10 "sType_finalize"
            # 9 "sType_finalize"
            if(_if_conditional39=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional39) {
                # 9 "sType_finalize"
                if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 11 "sType_finalize"
            # 10 "sType_finalize"
            if(_if_conditional40=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional40) {
                # 10 "sType_finalize"
                if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 12 "sType_finalize"
            # 11 "sType_finalize"
            if(_if_conditional41=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional41) {
                # 11 "sType_finalize"
                self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 13 "sType_finalize"
            # 12 "sType_finalize"
            if(_if_conditional42=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional42) {
                # 12 "sType_finalize"
                self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_48;
_Bool _while_condtional7;
struct list_item$1sTypeph* prev_it_49;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_48, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_49, 0, sizeof(struct list_item$1sTypeph*));
                    # 114 "./neo-c.h"
                    it_48=self->head;
                    # 120 "./neo-c.h"
                    while(_while_condtional7=it_48!=((void*)0),                    _while_condtional7) {
                        # 116 "./neo-c.h"
                        prev_it_49=it_48;
                        # 117 "./neo-c.h"
                        it_48=it_48->next;
                        # 118 "./neo-c.h"
                        come_call_finalizer3(prev_it_49,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional27;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1sTypephp_finalize"
                            # 0 "list_item$1sTypephp_finalize"
                            if(_if_conditional27=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional27) {
                                # 0 "list_item$1sTypephp_finalize"
                                come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional29;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple1$1sTypephp_finalize"
                    # 0 "tuple1$1sTypephp_finalize"
                    if(_if_conditional29=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional29) {
                        # 0 "tuple1$1sTypephp_finalize"
                        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_50;
_Bool _while_condtional8;
struct list_item$1sNodeph* prev_it_51;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_50, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_51, 0, sizeof(struct list_item$1sNodeph*));
                    # 114 "./neo-c.h"
                    it_50=self->head;
                    # 120 "./neo-c.h"
                    while(_while_condtional8=it_50!=((void*)0),                    _while_condtional8) {
                        # 116 "./neo-c.h"
                        prev_it_51=it_50;
                        # 117 "./neo-c.h"
                        it_50=it_50->next;
                        # 118 "./neo-c.h"
                        come_call_finalizer3(prev_it_51,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional34;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1sNodephp_finalize"
                            # 0 "list_item$1sNodephp_finalize"
                            if(_if_conditional34=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional34) {
                                # 0 "list_item$1sNodephp_finalize"
                                if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_52;
_Bool _while_condtional9;
struct list_item$1charph* prev_it_53;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_52, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_53, 0, sizeof(struct list_item$1charph*));
                    # 114 "./neo-c.h"
                    it_52=self->head;
                    # 120 "./neo-c.h"
                    while(_while_condtional9=it_52!=((void*)0),                    _while_condtional9) {
                        # 116 "./neo-c.h"
                        prev_it_53=it_52;
                        # 117 "./neo-c.h"
                        it_52=it_52->next;
                        # 118 "./neo-c.h"
                        come_call_finalizer3(prev_it_53,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional37;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1charphp_finalize"
                            # 0 "list_item$1charphp_finalize"
                            if(_if_conditional37=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional37) {
                                # 0 "list_item$1charphp_finalize"
                                self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional45;
struct list$1sTypeph* __result53__;
void* right_value84;
void* right_value85;
struct list$1sTypeph* result_54;
struct list_item$1sTypeph* it_55;
_Bool _while_condtional10;
void* right_value89;
struct list$1sTypeph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value84 = (void*)0;
right_value85 = (void*)0;
memset(&result_54, 0, sizeof(struct list$1sTypeph*));
memset(&it_55, 0, sizeof(struct list_item$1sTypeph*));
right_value89 = (void*)0;
                # 133 "./neo-c.h"
                # 130 "./neo-c.h"
                if(_if_conditional45=self==((void*)0),                _if_conditional45) {
                    # 131 "./neo-c.h"
                    __result53__ = __result_obj__ = ((void*)0);
                    return __result53__;
                }
                # 133 "./neo-c.h"
                result_54=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value85=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value84=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 133, "list$1sTypeph"))))))));
                come_call_finalizer3(right_value84,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value85,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                # 135 "./neo-c.h"
                it_55=self->head;
                # 142 "./neo-c.h"
                while(_while_condtional10=it_55!=((void*)0),                _while_condtional10) {
                    # 137 "./neo-c.h"
                    list$1sTypeph_add(result_54,(struct sType*)come_increment_ref_count(((struct sType*)(right_value89=sType_clone(it_55->item)))));
                    come_call_finalizer3(right_value89,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 139 "./neo-c.h"
                    it_55=it_55->next;
                }
                # 142 "./neo-c.h"
                __result56__ = __result_obj__ = result_54;
                come_call_finalizer3(result_54,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result56__;
                come_call_finalizer3(result_54,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 95 "./neo-c.h"
                    self->head=((void*)0);
                    # 96 "./neo-c.h"
                    self->tail=((void*)0);
                    # 97 "./neo-c.h"
                    self->len=0;
                    # 99 "./neo-c.h"
                    __result54__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result54__;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional46;
void* right_value86;
struct list_item$1sTypeph* litem_56;
struct sType* __dec_obj17;
_Bool _if_conditional47;
void* right_value87;
struct list_item$1sTypeph* litem_57;
struct sType* __dec_obj18;
void* right_value88;
struct list_item$1sTypeph* litem_58;
struct sType* __dec_obj19;
struct list$1sTypeph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
memset(&litem_56, 0, sizeof(struct list_item$1sTypeph*));
right_value87 = (void*)0;
memset(&litem_57, 0, sizeof(struct list_item$1sTypeph*));
right_value88 = (void*)0;
memset(&litem_58, 0, sizeof(struct list_item$1sTypeph*));
                        # 177 "./neo-c.h"
                        # 146 "./neo-c.h"
                        if(_if_conditional46=self->len==0,                        _if_conditional46) {
                            # 147 "./neo-c.h"
                            litem_56=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value86=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 147, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value86,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 149 "./neo-c.h"
                            litem_56->prev=((void*)0);
                            # 150 "./neo-c.h"
                            litem_56->next=((void*)0);
                            # 151 "./neo-c.h"
                            __dec_obj17=litem_56->item;
                            litem_56->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj17,sType_finalize, 0, 0, 0, 0, (void*)0);
                            # 153 "./neo-c.h"
                            self->tail=litem_56;
                            # 154 "./neo-c.h"
                            self->head=litem_56;
                        }
                        else {
                            # 177 "./neo-c.h"
                            # 156 "./neo-c.h"
                            if(_if_conditional47=self->len==1,                            _if_conditional47) {
                                # 157 "./neo-c.h"
                                litem_57=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value87=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 157, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value87,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 159 "./neo-c.h"
                                litem_57->prev=self->head;
                                # 160 "./neo-c.h"
                                litem_57->next=((void*)0);
                                # 161 "./neo-c.h"
                                __dec_obj18=litem_57->item;
                                litem_57->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj18,sType_finalize, 0, 0, 0, 0, (void*)0);
                                # 163 "./neo-c.h"
                                self->tail=litem_57;
                                # 164 "./neo-c.h"
                                self->head->next=litem_57;
                            }
                            else {
                                # 167 "./neo-c.h"
                                litem_58=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value88=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 167, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value88,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 169 "./neo-c.h"
                                litem_58->prev=self->tail;
                                # 170 "./neo-c.h"
                                litem_58->next=((void*)0);
                                # 171 "./neo-c.h"
                                __dec_obj19=litem_58->item;
                                litem_58->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj19,sType_finalize, 0, 0, 0, 0, (void*)0);
                                # 173 "./neo-c.h"
                                self->tail->next=litem_58;
                                # 174 "./neo-c.h"
                                self->tail=litem_58;
                            }
                        }
                        # 177 "./neo-c.h"
                        self->len++;
                        # 179 "./neo-c.h"
                        __result55__ = __result_obj__ = self;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result55__;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_59;
_Bool _while_condtional11;
struct list_item$1sTypeph* prev_it_60;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_59, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_60, 0, sizeof(struct list_item$1sTypeph*));
                # 114 "./neo-c.h"
                it_59=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional11=it_59!=((void*)0),                _while_condtional11) {
                    # 116 "./neo-c.h"
                    prev_it_60=it_59;
                    # 117 "./neo-c.h"
                    it_59=it_59->next;
                    # 118 "./neo-c.h"
                    come_call_finalizer3(prev_it_60,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional49;
struct tuple1$1sTypeph* __result57__;
void* right_value91;
struct tuple1$1sTypeph* result_61;
_Bool _if_conditional51;
void* right_value92;
struct sType* __dec_obj21;
struct tuple1$1sTypeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value91 = (void*)0;
memset(&result_61, 0, sizeof(struct tuple1$1sTypeph*));
right_value92 = (void*)0;
                # 3 "tuple1$1sTypephp_clone"
                # 2 "tuple1$1sTypephp_clone"
                if(_if_conditional49=self==(void*)0,                _if_conditional49) {
                    # 2 "tuple1$1sTypephp_clone"
                    __result57__ = __result_obj__ = (void*)0;
                    return __result57__;
                }
                # 3 "tuple1$1sTypephp_clone"
                result_61=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value91=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer3(right_value91,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                # 5 "tuple1$1sTypephp_clone"
                # 4 "tuple1$1sTypephp_clone"
                if(_if_conditional51=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional51) {
                    # 4 "tuple1$1sTypephp_clone"
                    __dec_obj21=result_61->v1;
                    result_61->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value92=sType_clone(self->v1))));
                    come_call_finalizer3(__dec_obj21,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value92,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                # 5 "tuple1$1sTypephp_clone"
                __result58__ = __result_obj__ = result_61;
                come_call_finalizer3(result_61,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result58__;
                come_call_finalizer3(result_61,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional50;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple1$1sTypeph_finalize"
                    # 0 "tuple1$1sTypeph_finalize"
                    if(_if_conditional50=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional50) {
                        # 0 "tuple1$1sTypeph_finalize"
                        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional56;
struct list$1sNodeph* __result59__;
void* right_value97;
void* right_value98;
struct list$1sNodeph* result_62;
struct list_item$1sNodeph* it_63;
_Bool _while_condtional12;
void* right_value103;
struct list$1sNodeph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value97 = (void*)0;
right_value98 = (void*)0;
memset(&result_62, 0, sizeof(struct list$1sNodeph*));
memset(&it_63, 0, sizeof(struct list_item$1sNodeph*));
right_value103 = (void*)0;
                # 133 "./neo-c.h"
                # 130 "./neo-c.h"
                if(_if_conditional56=self==((void*)0),                _if_conditional56) {
                    # 131 "./neo-c.h"
                    __result59__ = __result_obj__ = ((void*)0);
                    return __result59__;
                }
                # 133 "./neo-c.h"
                result_62=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value98=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value97=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 133, "list$1sNodeph"))))))));
                come_call_finalizer3(right_value97,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value98,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                # 135 "./neo-c.h"
                it_63=self->head;
                # 142 "./neo-c.h"
                while(_while_condtional12=it_63!=((void*)0),                _while_condtional12) {
                    # 137 "./neo-c.h"
                    list$1sNodeph_add(result_62,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value103=sNode_clone(it_63->item)))));
                    if(right_value103) { right_value103 = come_decrement_ref_count2(right_value103, ((struct sNode*)right_value103)->finalize, ((struct sNode*)right_value103)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 139 "./neo-c.h"
                    it_63=it_63->next;
                }
                # 142 "./neo-c.h"
                __result64__ = __result_obj__ = result_62;
                come_call_finalizer3(result_62,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result64__;
                come_call_finalizer3(result_62,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 95 "./neo-c.h"
                    self->head=((void*)0);
                    # 96 "./neo-c.h"
                    self->tail=((void*)0);
                    # 97 "./neo-c.h"
                    self->len=0;
                    # 99 "./neo-c.h"
                    __result60__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result60__;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional57;
void* right_value99;
struct list_item$1sNodeph* litem_64;
struct sNode* __dec_obj26;
_Bool _if_conditional58;
void* right_value100;
struct list_item$1sNodeph* litem_65;
struct sNode* __dec_obj27;
void* right_value101;
struct list_item$1sNodeph* litem_66;
struct sNode* __dec_obj28;
struct list$1sNodeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value99 = (void*)0;
memset(&litem_64, 0, sizeof(struct list_item$1sNodeph*));
right_value100 = (void*)0;
memset(&litem_65, 0, sizeof(struct list_item$1sNodeph*));
right_value101 = (void*)0;
memset(&litem_66, 0, sizeof(struct list_item$1sNodeph*));
                        # 177 "./neo-c.h"
                        # 146 "./neo-c.h"
                        if(_if_conditional57=self->len==0,                        _if_conditional57) {
                            # 147 "./neo-c.h"
                            litem_64=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value99=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 147, "list_item$1sNodeph"))));
                            come_call_finalizer3(right_value99,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 149 "./neo-c.h"
                            litem_64->prev=((void*)0);
                            # 150 "./neo-c.h"
                            litem_64->next=((void*)0);
                            # 151 "./neo-c.h"
                            __dec_obj26=litem_64->item;
                            litem_64->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count2(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0, (void*)0); }
                            # 153 "./neo-c.h"
                            self->tail=litem_64;
                            # 154 "./neo-c.h"
                            self->head=litem_64;
                        }
                        else {
                            # 177 "./neo-c.h"
                            # 156 "./neo-c.h"
                            if(_if_conditional58=self->len==1,                            _if_conditional58) {
                                # 157 "./neo-c.h"
                                litem_65=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value100=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 157, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value100,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 159 "./neo-c.h"
                                litem_65->prev=self->head;
                                # 160 "./neo-c.h"
                                litem_65->next=((void*)0);
                                # 161 "./neo-c.h"
                                __dec_obj27=litem_65->item;
                                litem_65->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count2(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0,0, (void*)0); }
                                # 163 "./neo-c.h"
                                self->tail=litem_65;
                                # 164 "./neo-c.h"
                                self->head->next=litem_65;
                            }
                            else {
                                # 167 "./neo-c.h"
                                litem_66=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value101=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 167, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value101,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 169 "./neo-c.h"
                                litem_66->prev=self->tail;
                                # 170 "./neo-c.h"
                                litem_66->next=((void*)0);
                                # 171 "./neo-c.h"
                                __dec_obj28=litem_66->item;
                                litem_66->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count2(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0,0, (void*)0); }
                                # 173 "./neo-c.h"
                                self->tail->next=litem_66;
                                # 174 "./neo-c.h"
                                self->tail=litem_66;
                            }
                        }
                        # 177 "./neo-c.h"
                        self->len++;
                        # 179 "./neo-c.h"
                        __result61__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result61__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional59;
struct sNode* __result62__;
void* right_value102;
struct sNode* result_67;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional63;
_Bool _if_conditional64;
_Bool _if_conditional65;
_Bool _if_conditional66;
_Bool _if_conditional67;
struct sNode* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value102 = (void*)0;
memset(&result_67, 0, sizeof(struct sNode*));
                        # 3 "sNode_clone"
                        # 2 "sNode_clone"
                        if(_if_conditional59=self==(void*)0,                        _if_conditional59) {
                            # 2 "sNode_clone"
                            __result62__ = __result_obj__ = (void*)0;
                            return __result62__;
                        }
                        # 3 "sNode_clone"
                        result_67=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value102=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value102) { right_value102 = come_decrement_ref_count2(right_value102, ((struct sNode*)right_value102)->finalize, ((struct sNode*)right_value102)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 5 "sNode_clone"
                        # 4 "sNode_clone"
                        if(_if_conditional60=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional60) {
                            # 4 "sNode_clone"
                            result_67->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        # 6 "sNode_clone"
                        # 5 "sNode_clone"
                        if(_if_conditional61=self!=((void*)0),                        _if_conditional61) {
                            # 5 "sNode_clone"
                            result_67->finalize=self->finalize;
                        }
                        # 7 "sNode_clone"
                        # 6 "sNode_clone"
                        if(_if_conditional62=self!=((void*)0),                        _if_conditional62) {
                            # 6 "sNode_clone"
                            result_67->clone=self->clone;
                        }
                        # 8 "sNode_clone"
                        # 7 "sNode_clone"
                        if(_if_conditional63=self!=((void*)0),                        _if_conditional63) {
                            # 7 "sNode_clone"
                            result_67->compile=self->compile;
                        }
                        # 9 "sNode_clone"
                        # 8 "sNode_clone"
                        if(_if_conditional64=self!=((void*)0),                        _if_conditional64) {
                            # 8 "sNode_clone"
                            result_67->sline=self->sline;
                        }
                        # 10 "sNode_clone"
                        # 9 "sNode_clone"
                        if(_if_conditional65=self!=((void*)0),                        _if_conditional65) {
                            # 9 "sNode_clone"
                            result_67->sname=self->sname;
                        }
                        # 11 "sNode_clone"
                        # 10 "sNode_clone"
                        if(_if_conditional66=self!=((void*)0),                        _if_conditional66) {
                            # 10 "sNode_clone"
                            result_67->terminated=self->terminated;
                        }
                        # 12 "sNode_clone"
                        # 11 "sNode_clone"
                        if(_if_conditional67=self!=((void*)0),                        _if_conditional67) {
                            # 11 "sNode_clone"
                            result_67->kind=self->kind;
                        }
                        # 12 "sNode_clone"
                        __result63__ = __result_obj__ = result_67;
                        if(result_67) { result_67 = come_decrement_ref_count2(result_67, ((struct sNode*)result_67)->finalize, ((struct sNode*)result_67)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result63__;
                        if(result_67) { result_67 = come_decrement_ref_count2(result_67, ((struct sNode*)result_67)->finalize, ((struct sNode*)result_67)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_68;
_Bool _while_condtional13;
struct list_item$1sNodeph* prev_it_69;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_68, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_69, 0, sizeof(struct list_item$1sNodeph*));
                # 114 "./neo-c.h"
                it_68=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional13=it_68!=((void*)0),                _while_condtional13) {
                    # 116 "./neo-c.h"
                    prev_it_69=it_68;
                    # 117 "./neo-c.h"
                    it_68=it_68->next;
                    # 118 "./neo-c.h"
                    come_call_finalizer3(prev_it_69,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional71;
struct list$1charph* __result65__;
void* right_value106;
void* right_value107;
struct list$1charph* result_70;
struct list_item$1charph* it_71;
_Bool _while_condtional14;
void* right_value111;
struct list$1charph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
right_value107 = (void*)0;
memset(&result_70, 0, sizeof(struct list$1charph*));
memset(&it_71, 0, sizeof(struct list_item$1charph*));
right_value111 = (void*)0;
                # 133 "./neo-c.h"
                # 130 "./neo-c.h"
                if(_if_conditional71=self==((void*)0),                _if_conditional71) {
                    # 131 "./neo-c.h"
                    __result65__ = __result_obj__ = ((void*)0);
                    return __result65__;
                }
                # 133 "./neo-c.h"
                result_70=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value107=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value106=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 133, "list$1charph"))))))));
                come_call_finalizer3(right_value106,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value107,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 135 "./neo-c.h"
                it_71=self->head;
                # 142 "./neo-c.h"
                while(_while_condtional14=it_71!=((void*)0),                _while_condtional14) {
                    # 137 "./neo-c.h"
                    list$1charph_add(result_70,(char*)come_increment_ref_count(((char*)(right_value111=string_clone(it_71->item)))));
                    right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 139 "./neo-c.h"
                    it_71=it_71->next;
                }
                # 142 "./neo-c.h"
                __result68__ = __result_obj__ = result_70;
                come_call_finalizer3(result_70,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result68__;
                come_call_finalizer3(result_70,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 95 "./neo-c.h"
                    self->head=((void*)0);
                    # 96 "./neo-c.h"
                    self->tail=((void*)0);
                    # 97 "./neo-c.h"
                    self->len=0;
                    # 99 "./neo-c.h"
                    __result66__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result66__;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional72;
void* right_value108;
struct list_item$1charph* litem_72;
char* __dec_obj31;
_Bool _if_conditional73;
void* right_value109;
struct list_item$1charph* litem_73;
char* __dec_obj32;
void* right_value110;
struct list_item$1charph* litem_74;
char* __dec_obj33;
struct list$1charph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value108 = (void*)0;
memset(&litem_72, 0, sizeof(struct list_item$1charph*));
right_value109 = (void*)0;
memset(&litem_73, 0, sizeof(struct list_item$1charph*));
right_value110 = (void*)0;
memset(&litem_74, 0, sizeof(struct list_item$1charph*));
                        # 177 "./neo-c.h"
                        # 146 "./neo-c.h"
                        if(_if_conditional72=self->len==0,                        _if_conditional72) {
                            # 147 "./neo-c.h"
                            litem_72=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value108=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 147, "list_item$1charph"))));
                            come_call_finalizer3(right_value108,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 149 "./neo-c.h"
                            litem_72->prev=((void*)0);
                            # 150 "./neo-c.h"
                            litem_72->next=((void*)0);
                            # 151 "./neo-c.h"
                            __dec_obj31=litem_72->item;
                            litem_72->item=(char*)come_increment_ref_count(item);
                            __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
                            # 153 "./neo-c.h"
                            self->tail=litem_72;
                            # 154 "./neo-c.h"
                            self->head=litem_72;
                        }
                        else {
                            # 177 "./neo-c.h"
                            # 156 "./neo-c.h"
                            if(_if_conditional73=self->len==1,                            _if_conditional73) {
                                # 157 "./neo-c.h"
                                litem_73=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value109=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 157, "list_item$1charph"))));
                                come_call_finalizer3(right_value109,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 159 "./neo-c.h"
                                litem_73->prev=self->head;
                                # 160 "./neo-c.h"
                                litem_73->next=((void*)0);
                                # 161 "./neo-c.h"
                                __dec_obj32=litem_73->item;
                                litem_73->item=(char*)come_increment_ref_count(item);
                                __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 163 "./neo-c.h"
                                self->tail=litem_73;
                                # 164 "./neo-c.h"
                                self->head->next=litem_73;
                            }
                            else {
                                # 167 "./neo-c.h"
                                litem_74=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value110=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 167, "list_item$1charph"))));
                                come_call_finalizer3(right_value110,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 169 "./neo-c.h"
                                litem_74->prev=self->tail;
                                # 170 "./neo-c.h"
                                litem_74->next=((void*)0);
                                # 171 "./neo-c.h"
                                __dec_obj33=litem_74->item;
                                litem_74->item=(char*)come_increment_ref_count(item);
                                __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 173 "./neo-c.h"
                                self->tail->next=litem_74;
                                # 174 "./neo-c.h"
                                self->tail=litem_74;
                            }
                        }
                        # 177 "./neo-c.h"
                        self->len++;
                        # 179 "./neo-c.h"
                        __result67__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result67__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_75;
_Bool _while_condtional15;
struct list_item$1charph* prev_it_76;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_75, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_76, 0, sizeof(struct list_item$1charph*));
                # 114 "./neo-c.h"
                it_75=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional15=it_75!=((void*)0),                _while_condtional15) {
                    # 116 "./neo-c.h"
                    prev_it_76=it_75;
                    # 117 "./neo-c.h"
                    it_75=it_75->next;
                    # 118 "./neo-c.h"
                    come_call_finalizer3(prev_it_76,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional117;
int __result71__;
int __result72__;
memset(&__result_obj__, 0, sizeof(void*));
        # 354 "./neo-c.h"
        # 351 "./neo-c.h"
        if(_if_conditional117=self==((void*)0),        _if_conditional117) {
            # 352 "./neo-c.h"
            __result71__ = 0;
            return __result71__;
        }
        # 354 "./neo-c.h"
        __result72__ = self->len;
        return __result72__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj40;
struct tuple1$1sTypeph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
            # 1710 "./neo-c.h"
            __dec_obj40=self->v1;
            self->v1=(struct sType*)come_increment_ref_count(v1);
            come_call_finalizer3(__dec_obj40,sType_finalize, 0, 0, 0, 0, (void*)0);
            # 1712 "./neo-c.h"
            __result74__ = __result_obj__ = self;
            come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result74__;
            come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_80;
_Bool _while_condtional16;
struct list_item$1sTypeph* prev_it_81;
struct list$1sTypeph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_80, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_81, 0, sizeof(struct list_item$1sTypeph*));
            # 420 "./neo-c.h"
            it_80=self->head;
            # 427 "./neo-c.h"
            while(_while_condtional16=it_80!=((void*)0),            _while_condtional16) {
                # 422 "./neo-c.h"
                prev_it_81=it_80;
                # 423 "./neo-c.h"
                it_80=it_80->next;
                # 424 "./neo-c.h"
                come_call_finalizer3(prev_it_81,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 427 "./neo-c.h"
            self->head=((void*)0);
            # 428 "./neo-c.h"
            self->tail=((void*)0);
            # 430 "./neo-c.h"
            self->len=0;
            # 432 "./neo-c.h"
            __result75__ = __result_obj__ = self;
            return __result75__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional120;
struct sType* result_83;
struct sType* __result76__;
_Bool _if_conditional121;
struct sType* __result77__;
struct sType* result_84;
struct sType* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_83, 0, sizeof(struct sType*));
memset(&result_84, 0, sizeof(struct sType*));
            # 281 "./neo-c.h"
            # 276 "./neo-c.h"
            if(_if_conditional120=self==((void*)0),            _if_conditional120) {
                # 277 "./neo-c.h"
                # 278 "./neo-c.h"
                memset(&result_83,0,sizeof(struct sType*));
                # 279 "./neo-c.h"
                __result76__ = __result_obj__ = result_83;
                return __result76__;
            }
            # 281 "./neo-c.h"
            self->it=self->head;
            # 287 "./neo-c.h"
            # 283 "./neo-c.h"
            if(self->it) {
                # 284 "./neo-c.h"
                __result77__ = __result_obj__ = self->it->item;
                return __result77__;
            }
            # 287 "./neo-c.h"
            # 288 "./neo-c.h"
            memset(&result_84,0,sizeof(struct sType*));
            # 289 "./neo-c.h"
            __result78__ = __result_obj__ = result_84;
            return __result78__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result79__;
memset(&__result_obj__, 0, sizeof(void*));
            # 311 "./neo-c.h"
            __result79__ = self==((void*)0)||self->it==((void*)0);
            return __result79__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional122;
struct sType* result_86;
struct sType* __result80__;
_Bool _if_conditional123;
struct sType* __result81__;
struct sType* result_87;
struct sType* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_86, 0, sizeof(struct sType*));
memset(&result_87, 0, sizeof(struct sType*));
            # 299 "./neo-c.h"
            # 293 "./neo-c.h"
            if(_if_conditional122=self==((void*)0)||self->it==((void*)0),            _if_conditional122) {
                # 294 "./neo-c.h"
                # 295 "./neo-c.h"
                memset(&result_86,0,sizeof(struct sType*));
                # 296 "./neo-c.h"
                __result80__ = __result_obj__ = result_86;
                return __result80__;
            }
            # 299 "./neo-c.h"
            self->it=self->it->next;
            # 305 "./neo-c.h"
            # 301 "./neo-c.h"
            if(self->it) {
                # 302 "./neo-c.h"
                __result81__ = __result_obj__ = self->it->item;
                return __result81__;
            }
            # 305 "./neo-c.h"
            # 306 "./neo-c.h"
            memset(&result_87,0,sizeof(struct sType*));
            # 307 "./neo-c.h"
            __result82__ = __result_obj__ = result_87;
            return __result82__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional124;
void* right_value123;
struct list_item$1sTypeph* litem_89;
struct sType* __dec_obj42;
_Bool _if_conditional125;
void* right_value124;
struct list_item$1sTypeph* litem_90;
struct sType* __dec_obj43;
void* right_value125;
struct list_item$1sTypeph* litem_91;
struct sType* __dec_obj44;
struct list$1sTypeph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
memset(&litem_89, 0, sizeof(struct list_item$1sTypeph*));
right_value124 = (void*)0;
memset(&litem_90, 0, sizeof(struct list_item$1sTypeph*));
right_value125 = (void*)0;
memset(&litem_91, 0, sizeof(struct list_item$1sTypeph*));
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional124=self->len==0,                _if_conditional124) {
                    # 217 "./neo-c.h"
                    litem_89=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value123=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 217, "list_item$1sTypeph"))));
                    come_call_finalizer3(right_value123,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "./neo-c.h"
                    litem_89->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_89->next=((void*)0);
                    # 221 "./neo-c.h"
                    __dec_obj42=litem_89->item;
                    litem_89->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj42,sType_finalize, 0, 0, 0, 0, (void*)0);
                    # 223 "./neo-c.h"
                    self->tail=litem_89;
                    # 224 "./neo-c.h"
                    self->head=litem_89;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional125=self->len==1,                    _if_conditional125) {
                        # 227 "./neo-c.h"
                        litem_90=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value124=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 227, "list_item$1sTypeph"))));
                        come_call_finalizer3(right_value124,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_90->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_90->next=((void*)0);
                        # 231 "./neo-c.h"
                        __dec_obj43=litem_90->item;
                        litem_90->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj43,sType_finalize, 0, 0, 0, 0, (void*)0);
                        # 233 "./neo-c.h"
                        self->tail=litem_90;
                        # 234 "./neo-c.h"
                        self->head->next=litem_90;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_91=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value125=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 237, "list_item$1sTypeph"))));
                        come_call_finalizer3(right_value125,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_91->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_91->next=((void*)0);
                        # 241 "./neo-c.h"
                        __dec_obj44=litem_91->item;
                        litem_91->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 0, 0, (void*)0);
                        # 243 "./neo-c.h"
                        self->tail->next=litem_91;
                        # 244 "./neo-c.h"
                        self->tail=litem_91;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
                __result83__ = __result_obj__ = self;
                come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result83__;
                come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional128;
struct list_item$1sTypeph* it_101;
int i_102;
_Bool _while_condtional17;
_Bool _if_conditional129;
struct sType* __result84__;
struct sType* default_value_103;
struct sType* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_101, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_102, 0, sizeof(int));
memset(&default_value_103, 0, sizeof(struct sType*));
                # 673 "./neo-c.h"
                # 669 "./neo-c.h"
                if(_if_conditional128=position<0,                _if_conditional128) {
                    # 670 "./neo-c.h"
                    position+=self->len;
                }
                # 673 "./neo-c.h"
                it_101=self->head;
                # 674 "./neo-c.h"
                i_102=0;
                # 681 "./neo-c.h"
                while(_while_condtional17=it_101!=((void*)0),                _while_condtional17) {
                    # 679 "./neo-c.h"
                    # 676 "./neo-c.h"
                    if(_if_conditional129=position==i_102,                    _if_conditional129) {
                        # 677 "./neo-c.h"
                        __result84__ = __result_obj__ = it_101->item;
                        return __result84__;
                    }
                    # 679 "./neo-c.h"
                    it_101=it_101->next;
                    # 680 "./neo-c.h"
                    i_102++;
                }
                # 683 "./neo-c.h"
                # 684 "./neo-c.h"
                memset(&default_value_103,0,sizeof(struct sType*));
                # 685 "./neo-c.h"
                __result85__ = __result_obj__ = default_value_103;
                come_call_finalizer3(default_value_103,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result85__;
                come_call_finalizer3(default_value_103,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional135;
int __result86__;
int __result87__;
memset(&__result_obj__, 0, sizeof(void*));
                # 354 "./neo-c.h"
                # 351 "./neo-c.h"
                if(_if_conditional135=self==((void*)0),                _if_conditional135) {
                    # 352 "./neo-c.h"
                    __result86__ = 0;
                    return __result86__;
                }
                # 354 "./neo-c.h"
                __result87__ = self->len;
                return __result87__;
}

struct sType* solve_method_generics(struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value136;
struct sType* result_123;
struct sClass* klass_124;
_Bool _if_conditional152;
int generics_number_125;
_Bool _if_conditional153;
void* right_value137;
struct list$1sNodeph* array_num_126;
_Bool immutable__127;
int pointer_num_128;
_Bool heap_129;
_Bool guard__130;
_Bool no_heap_131;
_Bool no_calling_destructor_132;
_Bool null_value_133;
void* right_value138;
struct sType* __dec_obj49;
_Bool _if_conditional154;
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
struct list$1sNodeph* __dec_obj50;
_Bool _if_conditional160;
_Bool _if_conditional161;
struct sType* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
right_value136 = (void*)0;
memset(&result_123, 0, sizeof(struct sType*));
memset(&klass_124, 0, sizeof(struct sClass*));
memset(&generics_number_125, 0, sizeof(int));
right_value137 = (void*)0;
memset(&array_num_126, 0, sizeof(struct list$1sNodeph*));
memset(&immutable__127, 0, sizeof(_Bool));
memset(&pointer_num_128, 0, sizeof(int));
memset(&heap_129, 0, sizeof(_Bool));
memset(&guard__130, 0, sizeof(_Bool));
memset(&no_heap_131, 0, sizeof(_Bool));
memset(&no_calling_destructor_132, 0, sizeof(_Bool));
memset(&null_value_133, 0, sizeof(_Bool));
right_value138 = (void*)0;
    # 190 "04heap.c"
    result_123=(struct sType*)come_increment_ref_count(((struct sType*)(right_value136=sType_clone(type))));
    come_call_finalizer3(right_value136,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 192 "04heap.c"
    klass_124=type->mClass;
    # 244 "04heap.c"
    # 194 "04heap.c"
    if(_if_conditional152=klass_124->mMethodGenerics&&info->method_generics_types&&list$1sTypeph_length(info->method_generics_types)>0,    _if_conditional152) {
        # 195 "04heap.c"
        generics_number_125=klass_124->mMethodGenericsNum;
        # 203 "04heap.c"
        # 197 "04heap.c"
        if(_if_conditional153=generics_number_125>=list$1sTypeph_length(info->method_generics_types),        _if_conditional153) {
            # 199 "04heap.c"
            err_msg(info,"invalid method generics parametor number. %d %d",generics_number_125,list$1sTypeph_length(info->method_generics_types));
            # 200 "04heap.c"
            exit(2);
        }
        # 203 "04heap.c"
        array_num_126=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value137=list$1sNodephp_clone(type->mArrayNum))));
        come_call_finalizer3(right_value137,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 204 "04heap.c"
        immutable__127=type->mImmutable;
        # 205 "04heap.c"
        pointer_num_128=type->mPointerNum;
        # 206 "04heap.c"
        heap_129=type->mHeap;
        # 207 "04heap.c"
        guard__130=type->mGuardValue;
        # 209 "04heap.c"
        no_heap_131=type->mNoHeap;
        # 210 "04heap.c"
        no_calling_destructor_132=type->mNoCallingDestructor;
        # 211 "04heap.c"
        null_value_133=type->mNullValue;
        # 213 "04heap.c"
        __dec_obj49=result_123;
        result_123=(struct sType*)come_increment_ref_count(((struct sType*)(right_value138=sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(info->method_generics_types,generics_number_125), "04heap.c", 213, 3))))));
        come_call_finalizer3(__dec_obj49,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value138,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 218 "04heap.c"
        # 215 "04heap.c"
        if(heap_129) {
            # 216 "04heap.c"
            result_123->mHeap=heap_129;
        }
        # 221 "04heap.c"
        # 218 "04heap.c"
        if(guard__130) {
            # 219 "04heap.c"
            result_123->mGuardValue=guard__130;
        }
        # 225 "04heap.c"
        # 221 "04heap.c"
        if(no_heap_131) {
            # 222 "04heap.c"
            result_123->mNoHeap=(_Bool)1;
            # 223 "04heap.c"
            result_123->mHeap=(_Bool)0;
        }
        # 228 "04heap.c"
        # 225 "04heap.c"
        if(no_calling_destructor_132) {
            # 226 "04heap.c"
            result_123->mNoCallingDestructor=(_Bool)1;
        }
        # 231 "04heap.c"
        # 228 "04heap.c"
        if(immutable__127) {
            # 229 "04heap.c"
            result_123->mImmutable=immutable__127;
        }
        # 235 "04heap.c"
        # 231 "04heap.c"
        if(_if_conditional159=list$1sNodeph_length(array_num_126)>0,        _if_conditional159) {
            # 232 "04heap.c"
            __dec_obj50=result_123->mArrayNum;
            result_123->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_126);
            come_call_finalizer3(__dec_obj50,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 239 "04heap.c"
        # 235 "04heap.c"
        if(null_value_133) {
            # 236 "04heap.c"
            result_123->mNullValue=null_value_133;
        }
        # 242 "04heap.c"
        # 239 "04heap.c"
        if(_if_conditional161=pointer_num_128>0,        _if_conditional161) {
            # 240 "04heap.c"
            result_123->mPointerNum+=pointer_num_128;
        }
        come_call_finalizer3(array_num_126,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 244 "04heap.c"
    __result89__ = __result_obj__ = result_123;
    come_call_finalizer3(result_123,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result89__;
    come_call_finalizer3(result_123,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sType* solve_type(struct sType* type, struct sType* generics_type, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__;
void* right_value139;
struct sType* result_134;
_Bool _if_conditional162;
void* right_value140;
struct sType* __dec_obj51;
struct sType* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value139 = (void*)0;
memset(&result_134, 0, sizeof(struct sType*));
right_value140 = (void*)0;
    # 249 "04heap.c"
    result_134=(struct sType*)come_increment_ref_count(((struct sType*)(right_value139=sType_clone(type))));
    come_call_finalizer3(right_value139,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 255 "04heap.c"
    # 251 "04heap.c"
    if(generics_type) {
        # 252 "04heap.c"
        __dec_obj51=result_134;
        result_134=(struct sType*)come_increment_ref_count(((struct sType*)(right_value140=solve_generics(result_134,generics_type,info))));
        come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value140,sType_finalize, 0, 1, 0, 0, __result_obj__);
    }
    # 255 "04heap.c"
    __result90__ = __result_obj__ = result_134;
    come_call_finalizer3(result_134,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result90__;
    come_call_finalizer3(result_134,sType_finalize, 0, 0, 0, 0, (void*)0);
}

int get_right_value_id_from_obj(char* obj){
void* __result_obj__;
char* p_135;
_Bool _if_conditional163;
_Bool _while_condtional18;
_Bool _if_conditional164;
_Bool _if_conditional165;
_Bool _if_conditional166;
int n_136;
_Bool _while_condtional19;
int __result91__;
int __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_135, 0, sizeof(char*));
memset(&n_136, 0, sizeof(int));
    # 262 "04heap.c"
    p_135=obj;
    # 285 "04heap.c"
    # 263 "04heap.c"
    if(_if_conditional163=*p_135==40,    _if_conditional163) {
        # 264 "04heap.c"
        p_135++;
        # 268 "04heap.c"
        while(_while_condtional18=*p_135!=41,        _while_condtional18) {
            # 266 "04heap.c"
            p_135++;
        }
        # 268 "04heap.c"
        p_135++;
        # 283 "04heap.c"
        # 269 "04heap.c"
        if(_if_conditional164=*p_135==40,        _if_conditional164) {
            # 270 "04heap.c"
            p_135++;
            # 282 "04heap.c"
            # 271 "04heap.c"
            if(_if_conditional165=strcmp(p_135,"right_value")==0,            _if_conditional165) {
                # 272 "04heap.c"
                p_135+=strlen("right_value");
                # 281 "04heap.c"
                # 273 "04heap.c"
                if(_if_conditional166=xisdigit(*p_135),                _if_conditional166) {
                    # 274 "04heap.c"
                    n_136=0;
                    # 279 "04heap.c"
                    while(_while_condtional19=xisdigit(*p_135),                    _while_condtional19) {
                        # 276 "04heap.c"
                        n_136=n_136*10+*p_135-48;
                        # 277 "04heap.c"
                        p_135++;
                    }
                    # 279 "04heap.c"
                    __result91__ = n_136;
                    obj = come_decrement_ref_count2(obj, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result91__;
                }
            }
        }
    }
    # 285 "04heap.c"
    __result92__ = -1;
    obj = come_decrement_ref_count2(obj, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result92__;
    obj = come_decrement_ref_count2(obj, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional167;
void* right_value141;
char* __result93__;
_Bool _if_conditional168;
void* right_value142;
char* __result94__;
void* right_value143;
struct sRightValueObject* new_value_137;
struct sType* __dec_obj52;
void* right_value144;
char* __dec_obj53;
void* right_value145;
char* __dec_obj54;
void* right_value149;
char* buf_141;
void* right_value150;
void* right_value151;
char* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
memset(&new_value_137, 0, sizeof(struct sRightValueObject*));
right_value144 = (void*)0;
right_value145 = (void*)0;
right_value149 = (void*)0;
memset(&buf_141, 0, sizeof(char*));
right_value150 = (void*)0;
right_value151 = (void*)0;
    # 293 "04heap.c"
    # 290 "04heap.c"
    if(gComeGC) {
        # 291 "04heap.c"
        __result93__ = __result_obj__ = ((char*)(right_value141=__builtin_string(obj)));
        come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
        right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result93__;
    }
    # 296 "04heap.c"
    # 293 "04heap.c"
    if(info->no_output_come_code) {
        # 294 "04heap.c"
        __result94__ = __result_obj__ = ((char*)(right_value142=__builtin_string("")));
        come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
        right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result94__;
    }
    # 296 "04heap.c"
    new_value_137=(struct sRightValueObject*)come_increment_ref_count(((struct sRightValueObject*)(right_value143=(struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1), "04heap.c", 296, "sRightValueObject"))));
    come_call_finalizer3(right_value143,sRightValueObject_finalize, 0, 1, 0, 0, __result_obj__);
    # 297 "04heap.c"
    __dec_obj52=new_value_137->mType;
    new_value_137->mType=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj52,sType_finalize, 0, 0, 0, 0, (void*)0);
    # 298 "04heap.c"
    new_value_137->mFreed=(_Bool)0;
    # 299 "04heap.c"
    new_value_137->mID=gRightValueNum;
    # 300 "04heap.c"
    __dec_obj53=new_value_137->mVarName;
    new_value_137->mVarName=(char*)come_increment_ref_count(((char*)(right_value144=xsprintf("right_value%d",gRightValueNum++))));
    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 301 "04heap.c"
    __dec_obj54=new_value_137->mFunName;
    new_value_137->mFunName=(char*)come_increment_ref_count(((char*)(right_value145=string_clone(info->come_fun->mName))));
    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 302 "04heap.c"
    new_value_137->mBlockLevel=info->block_level;
    # 304 "04heap.c"
    list$1sRightValueObjectph_push_back(info->right_value_objects,(struct sRightValueObject*)come_increment_ref_count(new_value_137));
    # 306 "04heap.c"
    buf_141=(char*)come_increment_ref_count(((char*)(right_value149=xsprintf("void* right_value%d;\n",gRightValueNum-1))));
    right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 307 "04heap.c"
    add_come_code_at_function_head(info,buf_141);
    # 308 "04heap.c"
    add_come_code_at_function_head2(info,"right_value%d = (void*)0;\n",gRightValueNum-1);
    # 310 "04heap.c"
    __result96__ = __result_obj__ = ((char*)(right_value151=xsprintf("((%s)(%s=%s))",((char*)(right_value150=make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info))),new_value_137->mVarName,obj)));
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(new_value_137,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
    buf_141 = come_decrement_ref_count2(buf_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result96__;
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(new_value_137,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
    buf_141 = come_decrement_ref_count2(buf_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
void* __result_obj__;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool _if_conditional171;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sRightValueObject_finalize"
        # 0 "sRightValueObject_finalize"
        if(_if_conditional169=self!=((void*)0)&&self->mType!=((void*)0),        _if_conditional169) {
            # 0 "sRightValueObject_finalize"
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 2 "sRightValueObject_finalize"
        # 1 "sRightValueObject_finalize"
        if(_if_conditional170=self!=((void*)0)&&self->mVarName!=((void*)0),        _if_conditional170) {
            # 1 "sRightValueObject_finalize"
            self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 3 "sRightValueObject_finalize"
        # 2 "sRightValueObject_finalize"
        if(_if_conditional171=self!=((void*)0)&&self->mFunName!=((void*)0),        _if_conditional171) {
            # 2 "sRightValueObject_finalize"
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_push_back(struct list$1sRightValueObjectph* self, struct sRightValueObject* item){
void* __result_obj__;
_Bool _if_conditional172;
void* right_value146;
struct list_item$1sRightValueObjectph* litem_138;
struct sRightValueObject* __dec_obj55;
_Bool _if_conditional174;
void* right_value147;
struct list_item$1sRightValueObjectph* litem_139;
struct sRightValueObject* __dec_obj56;
void* right_value148;
struct list_item$1sRightValueObjectph* litem_140;
struct sRightValueObject* __dec_obj57;
struct list$1sRightValueObjectph* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value146 = (void*)0;
memset(&litem_138, 0, sizeof(struct list_item$1sRightValueObjectph*));
right_value147 = (void*)0;
memset(&litem_139, 0, sizeof(struct list_item$1sRightValueObjectph*));
right_value148 = (void*)0;
memset(&litem_140, 0, sizeof(struct list_item$1sRightValueObjectph*));
        # 247 "./neo-c.h"
        # 216 "./neo-c.h"
        if(_if_conditional172=self->len==0,        _if_conditional172) {
            # 217 "./neo-c.h"
            litem_138=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value146=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./neo-c.h", 217, "list_item$1sRightValueObjectph"))));
            come_call_finalizer3(right_value146,list_item$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
            # 219 "./neo-c.h"
            litem_138->prev=((void*)0);
            # 220 "./neo-c.h"
            litem_138->next=((void*)0);
            # 221 "./neo-c.h"
            __dec_obj55=litem_138->item;
            litem_138->item=(struct sRightValueObject*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj55,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
            # 223 "./neo-c.h"
            self->tail=litem_138;
            # 224 "./neo-c.h"
            self->head=litem_138;
        }
        else {
            # 247 "./neo-c.h"
            # 226 "./neo-c.h"
            if(_if_conditional174=self->len==1,            _if_conditional174) {
                # 227 "./neo-c.h"
                litem_139=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value147=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./neo-c.h", 227, "list_item$1sRightValueObjectph"))));
                come_call_finalizer3(right_value147,list_item$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 229 "./neo-c.h"
                litem_139->prev=self->head;
                # 230 "./neo-c.h"
                litem_139->next=((void*)0);
                # 231 "./neo-c.h"
                __dec_obj56=litem_139->item;
                litem_139->item=(struct sRightValueObject*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj56,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
                # 233 "./neo-c.h"
                self->tail=litem_139;
                # 234 "./neo-c.h"
                self->head->next=litem_139;
            }
            else {
                # 237 "./neo-c.h"
                litem_140=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value148=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./neo-c.h", 237, "list_item$1sRightValueObjectph"))));
                come_call_finalizer3(right_value148,list_item$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 239 "./neo-c.h"
                litem_140->prev=self->tail;
                # 240 "./neo-c.h"
                litem_140->next=((void*)0);
                # 241 "./neo-c.h"
                __dec_obj57=litem_140->item;
                litem_140->item=(struct sRightValueObject*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj57,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
                # 243 "./neo-c.h"
                self->tail->next=litem_140;
                # 244 "./neo-c.h"
                self->tail=litem_140;
            }
        }
        # 247 "./neo-c.h"
        self->len++;
        # 249 "./neo-c.h"
        __result95__ = __result_obj__ = self;
        come_call_finalizer3(item,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
        return __result95__;
        come_call_finalizer3(item,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional173;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "list_item$1sRightValueObjectphp_finalize"
                # 0 "list_item$1sRightValueObjectphp_finalize"
                if(_if_conditional173=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional173) {
                    # 0 "list_item$1sRightValueObjectphp_finalize"
                    come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
                }
}

void remove_object_from_right_values(int right_value_num, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional175;
int i_142;
struct list$1sRightValueObjectph* o2_saved_143;
struct sRightValueObject* it_146;
_Bool _if_conditional180;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_142, 0, sizeof(int));
memset(&o2_saved_143, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_146, 0, sizeof(struct sRightValueObject*));
    # 318 "04heap.c"
    # 315 "04heap.c"
    if(gComeGC) {
        # 316 "04heap.c"
        return;
    }
    # 318 "04heap.c"
    i_142=0;
    # 326 "04heap.c"
    for(    o2_saved_143=(struct list$1sRightValueObjectph*)come_increment_ref_count((info->right_value_objects)),it_146=list$1sRightValueObjectph_begin((o2_saved_143));    !list$1sRightValueObjectph_end((o2_saved_143));    it_146=list$1sRightValueObjectph_next((o2_saved_143))    ){
        # 323 "04heap.c"
        # 320 "04heap.c"
        if(_if_conditional180=it_146->mID==right_value_num,        _if_conditional180) {
            # 321 "04heap.c"
            break;
        }
        # 323 "04heap.c"
        i_142++;
    }
    come_call_finalizer3(o2_saved_143,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    # 326 "04heap.c"
    list$1sRightValueObjectph_delete(info->right_value_objects,i_142,i_142+1);
}

static struct sRightValueObject* list$1sRightValueObjectph_begin(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional176;
struct sRightValueObject* result_144;
struct sRightValueObject* __result97__;
_Bool _if_conditional177;
struct sRightValueObject* __result98__;
struct sRightValueObject* result_145;
struct sRightValueObject* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_144, 0, sizeof(struct sRightValueObject*));
memset(&result_145, 0, sizeof(struct sRightValueObject*));
        # 281 "./neo-c.h"
        # 276 "./neo-c.h"
        if(_if_conditional176=self==((void*)0),        _if_conditional176) {
            # 277 "./neo-c.h"
            # 278 "./neo-c.h"
            memset(&result_144,0,sizeof(struct sRightValueObject*));
            # 279 "./neo-c.h"
            __result97__ = __result_obj__ = result_144;
            return __result97__;
        }
        # 281 "./neo-c.h"
        self->it=self->head;
        # 287 "./neo-c.h"
        # 283 "./neo-c.h"
        if(self->it) {
            # 284 "./neo-c.h"
            __result98__ = __result_obj__ = self->it->item;
            return __result98__;
        }
        # 287 "./neo-c.h"
        # 288 "./neo-c.h"
        memset(&result_145,0,sizeof(struct sRightValueObject*));
        # 289 "./neo-c.h"
        __result99__ = __result_obj__ = result_145;
        return __result99__;
}

static _Bool list$1sRightValueObjectph_end(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
        # 311 "./neo-c.h"
        __result100__ = self==((void*)0)||self->it==((void*)0);
        return __result100__;
}

static struct sRightValueObject* list$1sRightValueObjectph_next(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional178;
struct sRightValueObject* result_147;
struct sRightValueObject* __result101__;
_Bool _if_conditional179;
struct sRightValueObject* __result102__;
struct sRightValueObject* result_148;
struct sRightValueObject* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_147, 0, sizeof(struct sRightValueObject*));
memset(&result_148, 0, sizeof(struct sRightValueObject*));
        # 299 "./neo-c.h"
        # 293 "./neo-c.h"
        if(_if_conditional178=self==((void*)0)||self->it==((void*)0),        _if_conditional178) {
            # 294 "./neo-c.h"
            # 295 "./neo-c.h"
            memset(&result_147,0,sizeof(struct sRightValueObject*));
            # 296 "./neo-c.h"
            __result101__ = __result_obj__ = result_147;
            return __result101__;
        }
        # 299 "./neo-c.h"
        self->it=self->it->next;
        # 305 "./neo-c.h"
        # 301 "./neo-c.h"
        if(self->it) {
            # 302 "./neo-c.h"
            __result102__ = __result_obj__ = self->it->item;
            return __result102__;
        }
        # 305 "./neo-c.h"
        # 306 "./neo-c.h"
        memset(&result_148,0,sizeof(struct sRightValueObject*));
        # 307 "./neo-c.h"
        __result103__ = __result_obj__ = result_148;
        return __result103__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_149;
_Bool _while_condtional20;
struct list_item$1sRightValueObjectph* prev_it_150;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_149, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_150, 0, sizeof(struct list_item$1sRightValueObjectph*));
        # 114 "./neo-c.h"
        it_149=self->head;
        # 120 "./neo-c.h"
        while(_while_condtional20=it_149!=((void*)0),        _while_condtional20) {
            # 116 "./neo-c.h"
            prev_it_150=it_149;
            # 117 "./neo-c.h"
            it_149=it_149->next;
            # 118 "./neo-c.h"
            come_call_finalizer3(prev_it_150,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_delete(struct list$1sRightValueObjectph* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional183;
int tmp_151;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool _if_conditional186;
struct list$1sRightValueObjectph* __result104__;
_Bool _if_conditional187;
_Bool _if_conditional188;
struct list_item$1sRightValueObjectph* it_154;
int i_155;
_Bool _while_condtional22;
_Bool _if_conditional189;
struct list_item$1sRightValueObjectph* prev_it_156;
_Bool _if_conditional190;
_Bool _if_conditional191;
struct list_item$1sRightValueObjectph* it_157;
int i_158;
_Bool _while_condtional23;
_Bool _if_conditional192;
_Bool _if_conditional193;
struct list_item$1sRightValueObjectph* prev_it_159;
struct list_item$1sRightValueObjectph* it_160;
struct list_item$1sRightValueObjectph* head_prev_it_161;
struct list_item$1sRightValueObjectph* tail_it_162;
int i_163;
_Bool _while_condtional24;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
struct list_item$1sRightValueObjectph* prev_it_164;
_Bool _if_conditional197;
_Bool _if_conditional198;
struct list$1sRightValueObjectph* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_151, 0, sizeof(int));
memset(&it_154, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_155, 0, sizeof(int));
memset(&prev_it_156, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&it_157, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_158, 0, sizeof(int));
memset(&prev_it_159, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&it_160, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&head_prev_it_161, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&tail_it_162, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_163, 0, sizeof(int));
memset(&prev_it_164, 0, sizeof(struct list_item$1sRightValueObjectph*));
        # 454 "./neo-c.h"
        # 451 "./neo-c.h"
        if(_if_conditional181=head<0,        _if_conditional181) {
            # 452 "./neo-c.h"
            head+=self->len;
        }
        # 458 "./neo-c.h"
        # 454 "./neo-c.h"
        if(_if_conditional182=tail<0,        _if_conditional182) {
            # 455 "./neo-c.h"
            tail+=self->len+1;
        }
        # 464 "./neo-c.h"
        # 458 "./neo-c.h"
        if(_if_conditional183=head>tail,        _if_conditional183) {
            # 459 "./neo-c.h"
            tmp_151=tail;
            # 460 "./neo-c.h"
            tail=head;
            # 461 "./neo-c.h"
            head=tmp_151;
        }
        # 468 "./neo-c.h"
        # 464 "./neo-c.h"
        if(_if_conditional184=head<0,        _if_conditional184) {
            # 465 "./neo-c.h"
            head=0;
        }
        # 472 "./neo-c.h"
        # 468 "./neo-c.h"
        if(_if_conditional185=tail>self->len,        _if_conditional185) {
            # 469 "./neo-c.h"
            tail=self->len;
        }
        # 476 "./neo-c.h"
        # 472 "./neo-c.h"
        if(_if_conditional186=head==tail,        _if_conditional186) {
            # 473 "./neo-c.h"
            __result104__ = __result_obj__ = self;
            return __result104__;
        }
        # 571 "./neo-c.h"
        # 476 "./neo-c.h"
        if(_if_conditional187=head==0&&tail==self->len,        _if_conditional187) {
            # 478 "./neo-c.h"
            list$1sRightValueObjectph_reset(self);
        }
        else {
            # 571 "./neo-c.h"
            # 480 "./neo-c.h"
            if(_if_conditional188=head==0,            _if_conditional188) {
                # 481 "./neo-c.h"
                it_154=self->head;
                # 482 "./neo-c.h"
                i_155=0;
                # 504 "./neo-c.h"
                while(_while_condtional22=it_154!=((void*)0),                _while_condtional22) {
                    # 503 "./neo-c.h"
                    # 484 "./neo-c.h"
                    if(_if_conditional189=i_155<tail,                    _if_conditional189) {
                        # 485 "./neo-c.h"
                        prev_it_156=it_154;
                        # 487 "./neo-c.h"
                        it_154=it_154->next;
                        # 488 "./neo-c.h"
                        i_155++;
                        # 490 "./neo-c.h"
                        come_call_finalizer3(prev_it_156,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                        # 492 "./neo-c.h"
                        self->len--;
                    }
                    else {
                        # 503 "./neo-c.h"
                        # 494 "./neo-c.h"
                        if(_if_conditional190=i_155==tail,                        _if_conditional190) {
                            # 495 "./neo-c.h"
                            self->head=it_154;
                            # 496 "./neo-c.h"
                            self->head->prev=((void*)0);
                            # 497 "./neo-c.h"
                            break;
                        }
                        else {
                            # 500 "./neo-c.h"
                            it_154=it_154->next;
                            # 501 "./neo-c.h"
                            i_155++;
                        }
                    }
                }
            }
            else {
                # 571 "./neo-c.h"
                # 505 "./neo-c.h"
                if(_if_conditional191=tail==self->len,                _if_conditional191) {
                    # 506 "./neo-c.h"
                    it_157=self->head;
                    # 507 "./neo-c.h"
                    i_158=0;
                    # 529 "./neo-c.h"
                    while(_while_condtional23=it_157!=((void*)0),                    _while_condtional23) {
                        # 514 "./neo-c.h"
                        # 509 "./neo-c.h"
                        if(_if_conditional192=i_158==head,                        _if_conditional192) {
                            # 510 "./neo-c.h"
                            self->tail=it_157->prev;
                            # 511 "./neo-c.h"
                            self->tail->next=((void*)0);
                        }
                        # 528 "./neo-c.h"
                        # 514 "./neo-c.h"
                        if(_if_conditional193=i_158>=head,                        _if_conditional193) {
                            # 515 "./neo-c.h"
                            prev_it_159=it_157;
                            # 517 "./neo-c.h"
                            it_157=it_157->next;
                            # 518 "./neo-c.h"
                            i_158++;
                            # 520 "./neo-c.h"
                            come_call_finalizer3(prev_it_159,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                            # 522 "./neo-c.h"
                            self->len--;
                        }
                        else {
                            # 525 "./neo-c.h"
                            it_157=it_157->next;
                            # 526 "./neo-c.h"
                            i_158++;
                        }
                    }
                }
                else {
                    # 531 "./neo-c.h"
                    it_160=self->head;
                    # 533 "./neo-c.h"
                    head_prev_it_161=((void*)0);
                    # 534 "./neo-c.h"
                    tail_it_162=((void*)0);
                    # 537 "./neo-c.h"
                    i_163=0;
                    # 563 "./neo-c.h"
                    while(_while_condtional24=it_160!=((void*)0),                    _while_condtional24) {
                        # 542 "./neo-c.h"
                        # 539 "./neo-c.h"
                        if(_if_conditional194=i_163==head,                        _if_conditional194) {
                            # 540 "./neo-c.h"
                            head_prev_it_161=it_160->prev;
                        }
                        # 546 "./neo-c.h"
                        # 542 "./neo-c.h"
                        if(_if_conditional195=i_163==tail,                        _if_conditional195) {
                            # 543 "./neo-c.h"
                            tail_it_162=it_160;
                        }
                        # 561 "./neo-c.h"
                        # 546 "./neo-c.h"
                        if(_if_conditional196=i_163>=head&&i_163<tail,                        _if_conditional196) {
                            # 548 "./neo-c.h"
                            prev_it_164=it_160;
                            # 550 "./neo-c.h"
                            it_160=it_160->next;
                            # 551 "./neo-c.h"
                            i_163++;
                            # 553 "./neo-c.h"
                            come_call_finalizer3(prev_it_164,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                            # 555 "./neo-c.h"
                            self->len--;
                        }
                        else {
                            # 558 "./neo-c.h"
                            it_160=it_160->next;
                            # 559 "./neo-c.h"
                            i_163++;
                        }
                    }
                    # 566 "./neo-c.h"
                    # 563 "./neo-c.h"
                    if(_if_conditional197=head_prev_it_161!=((void*)0),                    _if_conditional197) {
                        # 564 "./neo-c.h"
                        head_prev_it_161->next=tail_it_162;
                    }
                    # 569 "./neo-c.h"
                    # 566 "./neo-c.h"
                    if(_if_conditional198=tail_it_162!=((void*)0),                    _if_conditional198) {
                        # 567 "./neo-c.h"
                        tail_it_162->prev=head_prev_it_161;
                    }
                }
            }
        }
        # 571 "./neo-c.h"
        __result106__ = __result_obj__ = self;
        return __result106__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_152;
_Bool _while_condtional21;
struct list_item$1sRightValueObjectph* prev_it_153;
struct list$1sRightValueObjectph* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_152, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_153, 0, sizeof(struct list_item$1sRightValueObjectph*));
                # 420 "./neo-c.h"
                it_152=self->head;
                # 427 "./neo-c.h"
                while(_while_condtional21=it_152!=((void*)0),                _while_condtional21) {
                    # 422 "./neo-c.h"
                    prev_it_153=it_152;
                    # 423 "./neo-c.h"
                    it_152=it_152->next;
                    # 424 "./neo-c.h"
                    come_call_finalizer3(prev_it_153,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 427 "./neo-c.h"
                self->head=((void*)0);
                # 428 "./neo-c.h"
                self->tail=((void*)0);
                # 430 "./neo-c.h"
                self->len=0;
                # 432 "./neo-c.h"
                __result105__ = __result_obj__ = self;
                return __result105__;
}

char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional199;
void* right_value152;
char* __result107__;
struct sClass* klass_165;
void* right_value153;
char* type_name_166;
void* right_value154;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
right_value152 = (void*)0;
memset(&klass_165, 0, sizeof(struct sClass*));
right_value153 = (void*)0;
memset(&type_name_166, 0, sizeof(char*));
right_value154 = (void*)0;
    # 334 "04heap.c"
    # 331 "04heap.c"
    if(gComeGC) {
        # 332 "04heap.c"
        __result107__ = __result_obj__ = ((char*)(right_value152=__builtin_string(obj)));
        right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result107__;
    }
    # 334 "04heap.c"
    klass_165=type->mClass;
    # 336 "04heap.c"
    type_name_166=(char*)come_increment_ref_count(((char*)(right_value153=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 338 "04heap.c"
    __result108__ = __result_obj__ = ((char*)(right_value154=xsprintf("(%s)come_increment_ref_count(%s)",type_name_166,obj)));
    type_name_166 = come_decrement_ref_count2(type_name_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result108__;
    type_name_166 = come_decrement_ref_count2(type_name_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_){
void* __result_obj__;
_Bool _if_conditional200;
struct list$1CVALUEph* stack_saved_167;
struct list$1sRightValueObjectph* right_value_objects_168;
struct sClass* klass_169;
static int dec_num_170=0;
void* right_value155;
char* name_171;
void* right_value156;
_Bool no_decrement_172;
_Bool no_free_173;
_Bool _if_conditional201;
void* right_value157;
char* c_value_174;
struct sClass* klass_175;
char* class_name_176;
char* fun_name_177;
void* right_value158;
struct sType* type2_178;
void* right_value159;
char* fun_name2_179;
_Bool _if_conditional202;
struct sFun* finalizer_180;
_Bool _if_conditional203;
_Bool _if_conditional223;
void* right_value160;
char* none_generics_name_184;
void* right_value161;
char* generics_fun_name_185;
struct sGenericsFun* generics_fun_189;
_Bool _if_conditional238;
_Bool _if_conditional239;
int i_190;
void* right_value162;
char* new_fun_name_191;
_Bool _if_conditional240;
void* right_value163;
char* __dec_obj58;
_Bool _if_conditional241;
_Bool _if_conditional242;
void* right_value164;
struct tuple2$2sFunpcharph* multiple_assign_var1;
struct sFun* fun_192;
char* new_fun_name_193;
char* __dec_obj59;
_Bool _if_conditional244;
_Bool _if_conditional245;
void* right_value165;
char* type_name_194;
_Bool _if_conditional246;
_Bool _if_conditional247;
void* right_value166;
_Bool _if_conditional248;
void* right_value167;
char* type_name_195;
void* right_value168;
void* right_value169;
struct list$1sRightValueObjectph* __dec_obj60;
struct list$1CVALUEph* __dec_obj61;
memset(&__result_obj__, 0, sizeof(void*));
memset(&stack_saved_167, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_168, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_169, 0, sizeof(struct sClass*));
right_value155 = (void*)0;
memset(&name_171, 0, sizeof(char*));
right_value156 = (void*)0;
memset(&no_decrement_172, 0, sizeof(_Bool));
memset(&no_free_173, 0, sizeof(_Bool));
right_value157 = (void*)0;
memset(&c_value_174, 0, sizeof(char*));
memset(&klass_175, 0, sizeof(struct sClass*));
memset(&class_name_176, 0, sizeof(char*));
memset(&fun_name_177, 0, sizeof(char*));
right_value158 = (void*)0;
memset(&type2_178, 0, sizeof(struct sType*));
right_value159 = (void*)0;
memset(&fun_name2_179, 0, sizeof(char*));
memset(&finalizer_180, 0, sizeof(struct sFun*));
right_value160 = (void*)0;
memset(&none_generics_name_184, 0, sizeof(char*));
right_value161 = (void*)0;
memset(&generics_fun_name_185, 0, sizeof(char*));
memset(&generics_fun_189, 0, sizeof(struct sGenericsFun*));
memset(&i_190, 0, sizeof(int));
right_value162 = (void*)0;
memset(&new_fun_name_191, 0, sizeof(char*));
right_value163 = (void*)0;
right_value164 = (void*)0;
memset(&fun_192, 0, sizeof(struct sFun*));
memset(&new_fun_name_193, 0, sizeof(char*));
memset(&fun_192, 0, sizeof(struct sFun*));
memset(&new_fun_name_193, 0, sizeof(char*));
right_value165 = (void*)0;
memset(&type_name_194, 0, sizeof(char*));
right_value166 = (void*)0;
right_value167 = (void*)0;
memset(&type_name_195, 0, sizeof(char*));
right_value168 = (void*)0;
right_value169 = (void*)0;
    # 346 "04heap.c"
    # 343 "04heap.c"
    if(gComeGC) {
        # 344 "04heap.c"
        return;
    }
    # 346 "04heap.c"
    stack_saved_167=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    # 347 "04heap.c"
    right_value_objects_168=info->right_value_objects;
    # 349 "04heap.c"
    klass_169=type->mClass;
    # 351 "04heap.c"
    # 353 "04heap.c"
    name_171=(char*)come_increment_ref_count(((char*)(right_value155=xsprintf("__dec_obj%d",++dec_num_170))));
    right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 354 "04heap.c"
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value156=make_define_var(type,name_171,(_Bool)0,info))));
    right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 356 "04heap.c"
    add_come_code(info,"%s=%s;\n",name_171,obj);
    # 358 "04heap.c"
    obj=name_171;
    # 359 "04heap.c"
    no_decrement_172=(_Bool)0;
    # 360 "04heap.c"
    no_free_173=(_Bool)0;
    # 451 "04heap.c"
    # 362 "04heap.c"
    if(_if_conditional201=type->mPointerNum>0,    _if_conditional201) {
        # 363 "04heap.c"
        c_value_174=(char*)come_increment_ref_count(((char*)(right_value157=__builtin_string(obj))));
        right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 365 "04heap.c"
        klass_175=type->mClass;
        # 367 "04heap.c"
        class_name_176=klass_175->mName;
        # 369 "04heap.c"
        fun_name_177="finalize";
        # 371 "04heap.c"
        type2_178=(struct sType*)come_increment_ref_count(((struct sType*)(right_value158=sType_clone(type))));
        come_call_finalizer3(right_value158,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 372 "04heap.c"
        type2_178->mHeap=(_Bool)0;
        # 374 "04heap.c"
        fun_name2_179=(char*)come_increment_ref_count(((char*)(right_value159=create_method_name(type,(_Bool)0,fun_name_177,info,(_Bool)1))));
        right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 380 "04heap.c"
        # 376 "04heap.c"
        if(type->mNoSolvedGenericsType->v1) {
            # 377 "04heap.c"
            type=type->mNoSolvedGenericsType->v1;
        }
        # 380 "04heap.c"
        finalizer_180=((void*)0);
        # 418 "04heap.c"
        # 381 "04heap.c"
        if(_if_conditional203=list$1sTypeph_length(type->mGenericsTypes)>0,        _if_conditional203) {
            # 382 "04heap.c"
            finalizer_180=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_179);
            # 400 "04heap.c"
            # 385 "04heap.c"
            if(_if_conditional223=finalizer_180==((void*)0),            _if_conditional223) {
                # 386 "04heap.c"
                none_generics_name_184=(char*)come_increment_ref_count(((char*)(right_value160=get_none_generics_name(type2_178->mClass->mName))));
                right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 388 "04heap.c"
                generics_fun_name_185=(char*)come_increment_ref_count(((char*)(right_value161=xsprintf("%s_%s",none_generics_name_184,fun_name_177))));
                right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 389 "04heap.c"
                generics_fun_189=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_185);
                # 399 "04heap.c"
                # 391 "04heap.c"
                if(generics_fun_189) {
                    # 397 "04heap.c"
                    # 392 "04heap.c"
                    if(_if_conditional239=!create_generics_fun((char*)come_increment_ref_count(fun_name2_179),generics_fun_189,type,info),                    _if_conditional239) {
                        # 394 "04heap.c"
                        printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                        # 395 "04heap.c"
                        exit(2);
                    }
                    # 397 "04heap.c"
                    finalizer_180=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_179);
                }
                none_generics_name_184 = come_decrement_ref_count2(none_generics_name_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                generics_fun_name_185 = come_decrement_ref_count2(generics_fun_name_185, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            # 402 "04heap.c"
            # 413 "04heap.c"
            for(            i_190=128-1;            i_190>=1;            i_190--            ){
                # 404 "04heap.c"
                new_fun_name_191=(char*)come_increment_ref_count(((char*)(right_value162=xsprintf("%s_v%d",fun_name2_179,i_190))));
                right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 405 "04heap.c"
                finalizer_180=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_191);
                # 411 "04heap.c"
                # 407 "04heap.c"
                if(finalizer_180) {
                    # 408 "04heap.c"
                    __dec_obj58=fun_name2_179;
                    fun_name2_179=(char*)come_increment_ref_count(((char*)(right_value163=__builtin_string(new_fun_name_191))));
                    __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 409 "04heap.c"
                    new_fun_name_191 = come_decrement_ref_count2(new_fun_name_191, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                new_fun_name_191 = come_decrement_ref_count2(new_fun_name_191, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 416 "04heap.c"
            # 413 "04heap.c"
            if(_if_conditional241=finalizer_180==((void*)0),            _if_conditional241) {
                # 414 "04heap.c"
                finalizer_180=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_179);
            }
        }
        # 427 "04heap.c"
        # 418 "04heap.c"
        if(_if_conditional242=finalizer_180==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,        _if_conditional242) {
            # 420 "04heap.c"
            multiple_assign_var1=((struct tuple2$2sFunpcharph*)(right_value164=create_finalizer_automatically(type,fun_name_177,info)));
            fun_192=multiple_assign_var1->v1;
            new_fun_name_193=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            come_call_finalizer3(right_value164,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            # 422 "04heap.c"
            __dec_obj59=fun_name2_179;
            fun_name2_179=(char*)come_increment_ref_count(new_fun_name_193);
            __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
            # 423 "04heap.c"
            finalizer_180=fun_192;
            new_fun_name_193 = come_decrement_ref_count2(new_fun_name_193, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 449 "04heap.c"
        # 427 "04heap.c"
        if(_if_conditional244=finalizer_180!=((void*)0),        _if_conditional244) {
            # 439 "04heap.c"
            # 428 "04heap.c"
            if(_if_conditional245=klass_175->mProtocol&&type->mPointerNum==1,            _if_conditional245) {
                # 429 "04heap.c"
                type_name_194=(char*)come_increment_ref_count(((char*)(right_value165=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 433 "04heap.c"
                # 430 "04heap.c"
                if(c_value_174) {
                    # 431 "04heap.c"
                    add_come_last_code2(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0);\n",fun_name2_179,c_value_174,type_name_194,c_value_174,type_name_194,c_value_174,type->mAllocaValue,no_decrement_172,no_free_173,force_delete_);
                }
                type_name_194 = come_decrement_ref_count2(type_name_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                # 438 "04heap.c"
                # 435 "04heap.c"
                if(c_value_174) {
                    # 436 "04heap.c"
                    add_come_last_code2(info,((char*)(right_value166=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0);\n",c_value_174,fun_name2_179,type->mAllocaValue,no_decrement_172,no_free_173,force_delete_))));
                    right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else {
            # 448 "04heap.c"
            # 441 "04heap.c"
            if(_if_conditional248=klass_175->mProtocol&&type->mPointerNum==1,            _if_conditional248) {
                # 442 "04heap.c"
                type_name_195=(char*)come_increment_ref_count(((char*)(right_value167=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 443 "04heap.c"
                add_come_last_code2(info,((char*)(right_value168=xsprintf("if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, 0,0,0, (void*)0); }\n",name_171,name_171,name_171,type_name_195,name_171,type_name_195,name_171))));
                right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                type_name_195 = come_decrement_ref_count2(type_name_195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                # 446 "04heap.c"
                add_come_last_code2(info,((char*)(right_value169=xsprintf("%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, 0,0,0, (void*)0);\n",name_171,name_171))));
                right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        c_value_174 = come_decrement_ref_count2(c_value_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_178,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name2_179 = come_decrement_ref_count2(fun_name2_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 451 "04heap.c"
    __dec_obj60=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_168);
    come_call_finalizer3(__dec_obj60,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    # 452 "04heap.c"
    __dec_obj61=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_167);
    come_call_finalizer3(__dec_obj61,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_167,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    name_171 = come_decrement_ref_count2(name_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_181;
unsigned int hash_182;
unsigned int it_183;
_Bool _while_condtional25;
_Bool _if_conditional204;
_Bool _if_conditional205;
struct sFun* __result109__;
_Bool _if_conditional221;
_Bool _if_conditional222;
struct sFun* __result110__;
struct sFun* __result111__;
struct sFun* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_181, 0, sizeof(struct sFun*));
memset(&hash_182, 0, sizeof(unsigned int));
memset(&it_183, 0, sizeof(unsigned int));
                # 1519 "./neo-c.h"
                # 1520 "./neo-c.h"
                memset(&default_value_181,0,sizeof(struct sFun*));
                # 1522 "./neo-c.h"
                hash_182=string_get_hash_key(((char*)key))%self->size;
                # 1523 "./neo-c.h"
                it_183=hash_182;
                # 1547 "./neo-c.h"
                while(_while_condtional25=(_Bool)1,                _while_condtional25) {
                    # 1545 "./neo-c.h"
                    # 1526 "./neo-c.h"
                    if(_if_conditional204=self->item_existance[it_183],                    _if_conditional204) {
                        # 1533 "./neo-c.h"
                        # 1528 "./neo-c.h"
                        if(_if_conditional205=string_equals(self->keys[it_183],key),                        _if_conditional205) {
                            # 1530 "./neo-c.h"
                            __result109__ = __result_obj__ = self->items[it_183];
                            come_call_finalizer3(default_value_181,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            return __result109__;
                        }
                        # 1533 "./neo-c.h"
                        it_183++;
                        # 1541 "./neo-c.h"
                        # 1535 "./neo-c.h"
                        if(_if_conditional221=it_183>=self->size,                        _if_conditional221) {
                            # 1536 "./neo-c.h"
                            it_183=0;
                        }
                        else {
                            # 1541 "./neo-c.h"
                            # 1538 "./neo-c.h"
                            if(_if_conditional222=it_183==hash_182,                            _if_conditional222) {
                                # 1539 "./neo-c.h"
                                __result110__ = __result_obj__ = default_value_181;
                                come_call_finalizer3(default_value_181,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result110__;
                            }
                        }
                    }
                    else {
                        # 1543 "./neo-c.h"
                        __result111__ = __result_obj__ = default_value_181;
                        come_call_finalizer3(default_value_181,sFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result111__;
                    }
                }
                # 1547 "./neo-c.h"
                __result112__ = __result_obj__ = default_value_181;
                come_call_finalizer3(default_value_181,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result112__;
                come_call_finalizer3(default_value_181,sFun_finalize, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional206;
_Bool _if_conditional207;
_Bool _if_conditional208;
_Bool _if_conditional209;
_Bool _if_conditional210;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sFun_finalize"
                                # 0 "sFun_finalize"
                                if(_if_conditional206=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional206) {
                                    # 0 "sFun_finalize"
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sFun_finalize"
                                # 1 "sFun_finalize"
                                if(_if_conditional207=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional207) {
                                    # 1 "sFun_finalize"
                                    come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 3 "sFun_finalize"
                                # 2 "sFun_finalize"
                                if(_if_conditional208=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional208) {
                                    # 2 "sFun_finalize"
                                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 4 "sFun_finalize"
                                # 3 "sFun_finalize"
                                if(_if_conditional209=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional209) {
                                    # 3 "sFun_finalize"
                                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 5 "sFun_finalize"
                                # 4 "sFun_finalize"
                                if(_if_conditional210=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional210) {
                                    # 4 "sFun_finalize"
                                    come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 6 "sFun_finalize"
                                # 5 "sFun_finalize"
                                if(_if_conditional211=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional211) {
                                    # 5 "sFun_finalize"
                                    come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 7 "sFun_finalize"
                                # 6 "sFun_finalize"
                                if(_if_conditional212=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional212) {
                                    # 6 "sFun_finalize"
                                    come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 8 "sFun_finalize"
                                # 7 "sFun_finalize"
                                if(_if_conditional215=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional215) {
                                    # 7 "sFun_finalize"
                                    come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 9 "sFun_finalize"
                                # 8 "sFun_finalize"
                                if(_if_conditional216=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional216) {
                                    # 8 "sFun_finalize"
                                    come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 10 "sFun_finalize"
                                # 9 "sFun_finalize"
                                if(_if_conditional217=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional217) {
                                    # 9 "sFun_finalize"
                                    come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 11 "sFun_finalize"
                                # 10 "sFun_finalize"
                                if(_if_conditional218=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional218) {
                                    # 10 "sFun_finalize"
                                    come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 12 "sFun_finalize"
                                # 11 "sFun_finalize"
                                if(_if_conditional219=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional219) {
                                    # 11 "sFun_finalize"
                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 13 "sFun_finalize"
                                # 12 "sFun_finalize"
                                if(_if_conditional220=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional220) {
                                    # 12 "sFun_finalize"
                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional213;
_Bool _if_conditional214;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "sBlock_finalize"
                                        # 0 "sBlock_finalize"
                                        if(_if_conditional213=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional213) {
                                            # 0 "sBlock_finalize"
                                            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "sBlock_finalize"
                                        # 1 "sBlock_finalize"
                                        if(_if_conditional214=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional214) {
                                            # 1 "sBlock_finalize"
                                            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key){
void* __result_obj__;
struct sGenericsFun* default_value_186;
unsigned int hash_187;
unsigned int it_188;
_Bool _while_condtional26;
_Bool _if_conditional224;
_Bool _if_conditional225;
struct sGenericsFun* __result113__;
_Bool _if_conditional236;
_Bool _if_conditional237;
struct sGenericsFun* __result114__;
struct sGenericsFun* __result115__;
struct sGenericsFun* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_186, 0, sizeof(struct sGenericsFun*));
memset(&hash_187, 0, sizeof(unsigned int));
memset(&it_188, 0, sizeof(unsigned int));
                    # 1519 "./neo-c.h"
                    # 1520 "./neo-c.h"
                    memset(&default_value_186,0,sizeof(struct sGenericsFun*));
                    # 1522 "./neo-c.h"
                    hash_187=string_get_hash_key(((char*)key))%self->size;
                    # 1523 "./neo-c.h"
                    it_188=hash_187;
                    # 1547 "./neo-c.h"
                    while(_while_condtional26=(_Bool)1,                    _while_condtional26) {
                        # 1545 "./neo-c.h"
                        # 1526 "./neo-c.h"
                        if(_if_conditional224=self->item_existance[it_188],                        _if_conditional224) {
                            # 1533 "./neo-c.h"
                            # 1528 "./neo-c.h"
                            if(_if_conditional225=string_equals(self->keys[it_188],key),                            _if_conditional225) {
                                # 1530 "./neo-c.h"
                                __result113__ = __result_obj__ = self->items[it_188];
                                come_call_finalizer3(default_value_186,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                                return __result113__;
                            }
                            # 1533 "./neo-c.h"
                            it_188++;
                            # 1541 "./neo-c.h"
                            # 1535 "./neo-c.h"
                            if(_if_conditional236=it_188>=self->size,                            _if_conditional236) {
                                # 1536 "./neo-c.h"
                                it_188=0;
                            }
                            else {
                                # 1541 "./neo-c.h"
                                # 1538 "./neo-c.h"
                                if(_if_conditional237=it_188==hash_187,                                _if_conditional237) {
                                    # 1539 "./neo-c.h"
                                    __result114__ = __result_obj__ = default_value_186;
                                    come_call_finalizer3(default_value_186,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result114__;
                                }
                            }
                        }
                        else {
                            # 1543 "./neo-c.h"
                            __result115__ = __result_obj__ = default_value_186;
                            come_call_finalizer3(default_value_186,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result115__;
                        }
                    }
                    # 1547 "./neo-c.h"
                    __result116__ = __result_obj__ = default_value_186;
                    come_call_finalizer3(default_value_186,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result116__;
                    come_call_finalizer3(default_value_186,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool _if_conditional226;
_Bool _if_conditional227;
_Bool _if_conditional228;
_Bool _if_conditional229;
_Bool _if_conditional230;
_Bool _if_conditional231;
_Bool _if_conditional232;
_Bool _if_conditional233;
_Bool _if_conditional234;
_Bool _if_conditional235;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sGenericsFun_finalize"
                                    # 0 "sGenericsFun_finalize"
                                    if(_if_conditional226=self!=((void*)0)&&self->mImplType!=((void*)0),                                    _if_conditional226) {
                                        # 0 "sGenericsFun_finalize"
                                        come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 2 "sGenericsFun_finalize"
                                    # 1 "sGenericsFun_finalize"
                                    if(_if_conditional227=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                                    _if_conditional227) {
                                        # 1 "sGenericsFun_finalize"
                                        come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 3 "sGenericsFun_finalize"
                                    # 2 "sGenericsFun_finalize"
                                    if(_if_conditional228=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),                                    _if_conditional228) {
                                        # 2 "sGenericsFun_finalize"
                                        come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 4 "sGenericsFun_finalize"
                                    # 3 "sGenericsFun_finalize"
                                    if(_if_conditional229=self!=((void*)0)&&self->mName!=((void*)0),                                    _if_conditional229) {
                                        # 3 "sGenericsFun_finalize"
                                        self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 5 "sGenericsFun_finalize"
                                    # 4 "sGenericsFun_finalize"
                                    if(_if_conditional230=self!=((void*)0)&&self->mResultType!=((void*)0),                                    _if_conditional230) {
                                        # 4 "sGenericsFun_finalize"
                                        come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 6 "sGenericsFun_finalize"
                                    # 5 "sGenericsFun_finalize"
                                    if(_if_conditional231=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                    _if_conditional231) {
                                        # 5 "sGenericsFun_finalize"
                                        come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 7 "sGenericsFun_finalize"
                                    # 6 "sGenericsFun_finalize"
                                    if(_if_conditional232=self!=((void*)0)&&self->mParamNames!=((void*)0),                                    _if_conditional232) {
                                        # 6 "sGenericsFun_finalize"
                                        come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 8 "sGenericsFun_finalize"
                                    # 7 "sGenericsFun_finalize"
                                    if(_if_conditional233=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                    _if_conditional233) {
                                        # 7 "sGenericsFun_finalize"
                                        come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 9 "sGenericsFun_finalize"
                                    # 8 "sGenericsFun_finalize"
                                    if(_if_conditional234=self!=((void*)0)&&self->mBlock!=((void*)0),                                    _if_conditional234) {
                                        # 8 "sGenericsFun_finalize"
                                        self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 10 "sGenericsFun_finalize"
                                    # 9 "sGenericsFun_finalize"
                                    if(_if_conditional235=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                                    _if_conditional235) {
                                        # 9 "sGenericsFun_finalize"
                                        self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool _if_conditional243;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "tuple2$2sFunpcharphp_finalize"
                # 0 "tuple2$2sFunpcharphp_finalize"
                if(_if_conditional243=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional243) {
                    # 0 "tuple2$2sFunpcharphp_finalize"
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_196;
_Bool _while_condtional27;
struct list_item$1sRightValueObjectph* prev_it_197;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_196, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_197, 0, sizeof(struct list_item$1sRightValueObjectph*));
        # 114 "./neo-c.h"
        it_196=self->head;
        # 120 "./neo-c.h"
        while(_while_condtional27=it_196!=((void*)0),        _while_condtional27) {
            # 116 "./neo-c.h"
            prev_it_197=it_196;
            # 117 "./neo-c.h"
            it_196=it_196->next;
            # 118 "./neo-c.h"
            come_call_finalizer3(prev_it_197,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_198;
_Bool _while_condtional28;
struct list_item$1CVALUEph* prev_it_199;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_198, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_199, 0, sizeof(struct list_item$1CVALUEph*));
        # 114 "./neo-c.h"
        it_198=self->head;
        # 120 "./neo-c.h"
        while(_while_condtional28=it_198!=((void*)0),        _while_condtional28) {
            # 116 "./neo-c.h"
            prev_it_199=it_198;
            # 117 "./neo-c.h"
            it_198=it_198->next;
            # 118 "./neo-c.h"
            come_call_finalizer3(prev_it_199,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional249;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "list_item$1CVALUEphp_finalize"
                # 0 "list_item$1CVALUEphp_finalize"
                if(_if_conditional249=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional249) {
                    # 0 "list_item$1CVALUEphp_finalize"
                    come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional250;
_Bool _if_conditional251;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "CVALUE_finalize"
                        # 0 "CVALUE_finalize"
                        if(_if_conditional250=self!=((void*)0)&&self->c_value!=((void*)0),                        _if_conditional250) {
                            # 0 "CVALUE_finalize"
                            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "CVALUE_finalize"
                        # 1 "CVALUE_finalize"
                        if(_if_conditional251=self!=((void*)0)&&self->type!=((void*)0),                        _if_conditional251) {
                            # 1 "CVALUE_finalize"
                            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_200;
_Bool _while_condtional29;
struct list_item$1CVALUEph* prev_it_201;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_200, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_201, 0, sizeof(struct list_item$1CVALUEph*));
        # 114 "./neo-c.h"
        it_200=self->head;
        # 120 "./neo-c.h"
        while(_while_condtional29=it_200!=((void*)0),        _while_condtional29) {
            # 116 "./neo-c.h"
            prev_it_201=it_200;
            # 117 "./neo-c.h"
            it_200=it_200->next;
            # 118 "./neo-c.h"
            come_call_finalizer3(prev_it_201,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_){
void* __result_obj__;
_Bool _if_conditional252;
struct list$1CVALUEph* stack_saved_202;
struct list$1sRightValueObjectph* right_value_objects_203;
struct sType* type_before_204;
_Bool _if_conditional253;
_Bool _if_conditional254;
_Bool _if_conditional255;
void* right_value170;
char* c_value_205;
struct sClass* klass_206;
char* class_name_207;
char* fun_name_208;
void* right_value171;
struct sType* type2_209;
void* right_value172;
char* fun_name2_210;
struct sFun* finalizer_211;
_Bool _if_conditional256;
_Bool _if_conditional257;
void* right_value173;
char* none_generics_name_212;
void* right_value174;
char* generics_fun_name_213;
struct sGenericsFun* generics_fun_214;
_Bool _if_conditional258;
_Bool _if_conditional259;
int i_215;
void* right_value175;
char* new_fun_name_216;
_Bool _if_conditional260;
void* right_value176;
char* __dec_obj62;
_Bool _if_conditional261;
_Bool _if_conditional262;
void* right_value177;
struct tuple2$2sFunpcharph* multiple_assign_var2;
struct sFun* fun_217;
char* new_fun_name_218;
char* __dec_obj63;
_Bool _if_conditional263;
_Bool _if_conditional264;
void* right_value178;
char* type_name_219;
_Bool _if_conditional265;
_Bool _if_conditional266;
_Bool _if_conditional267;
_Bool _if_conditional268;
_Bool _if_conditional269;
_Bool _if_conditional270;
_Bool _if_conditional271;
void* right_value179;
void* right_value180;
_Bool _if_conditional272;
void* right_value181;
void* right_value182;
_Bool _if_conditional273;
struct list$1tuple2$2charphsTypephph* o2_saved_220;
struct tuple2$2charphsTypeph* it_223;
struct tuple2$2charphsTypeph* multiple_assign_var3;
char* name_226;
struct sType* field_type_227;
_Bool _if_conditional278;
void* right_value183;
void* right_value184;
char* obj_228;
_Bool _if_conditional282;
struct list$1tuple2$2charphsTypephph* o2_saved_231;
struct tuple2$2charphsTypeph* it_232;
struct tuple2$2charphsTypeph* multiple_assign_var4;
char* name_233;
struct sType* field_type_234;
_Bool _if_conditional283;
void* right_value185;
void* right_value186;
char* obj_235;
_Bool _if_conditional284;
_Bool _if_conditional285;
_Bool _if_conditional286;
void* right_value187;
char* type_name_236;
_Bool _if_conditional287;
_Bool _if_conditional288;
_Bool _if_conditional289;
_Bool _if_conditional290;
_Bool _if_conditional291;
_Bool _if_conditional292;
_Bool _if_conditional293;
void* right_value188;
char* c_value_237;
struct sClass* klass_238;
char* class_name_239;
char* fun_name_240;
void* right_value189;
struct sType* type2_241;
void* right_value190;
char* fun_name2_242;
struct sFun* finalizer_243;
_Bool _if_conditional294;
_Bool _if_conditional295;
void* right_value191;
char* none_generics_name_244;
void* right_value192;
char* generics_fun_name_245;
struct sGenericsFun* generics_fun_246;
_Bool _if_conditional296;
_Bool _if_conditional297;
int i_247;
void* right_value193;
char* new_fun_name_248;
_Bool _if_conditional298;
void* right_value194;
char* __dec_obj64;
_Bool _if_conditional299;
_Bool _if_conditional300;
void* right_value195;
struct tuple2$2sFunpcharph* multiple_assign_var5;
struct sFun* fun_249;
char* new_fun_name_250;
char* __dec_obj65;
_Bool _if_conditional301;
_Bool _if_conditional302;
void* right_value196;
char* type_name_251;
_Bool _if_conditional303;
_Bool _if_conditional304;
_Bool _if_conditional305;
_Bool _if_conditional306;
_Bool _if_conditional307;
_Bool _if_conditional308;
_Bool _if_conditional309;
void* right_value197;
void* right_value198;
_Bool _if_conditional310;
void* right_value199;
void* right_value200;
_Bool _if_conditional311;
struct list$1tuple2$2charphsTypephph* o2_saved_252;
struct tuple2$2charphsTypeph* it_253;
struct tuple2$2charphsTypeph* multiple_assign_var6;
char* name_254;
struct sType* field_type_255;
_Bool _if_conditional312;
void* right_value201;
void* right_value202;
char* obj_256;
_Bool _if_conditional313;
struct list$1tuple2$2charphsTypephph* o2_saved_257;
struct tuple2$2charphsTypeph* it_258;
struct tuple2$2charphsTypeph* multiple_assign_var7;
char* name_259;
struct sType* field_type_260;
_Bool _if_conditional314;
void* right_value203;
void* right_value204;
char* obj_261;
_Bool _if_conditional315;
_Bool _if_conditional316;
_Bool _if_conditional317;
void* right_value205;
char* type_name_262;
_Bool _if_conditional318;
_Bool _if_conditional319;
_Bool _if_conditional320;
_Bool _if_conditional321;
_Bool _if_conditional322;
_Bool _if_conditional323;
_Bool _if_conditional324;
struct list$1sRightValueObjectph* __dec_obj66;
struct list$1CVALUEph* __dec_obj67;
memset(&__result_obj__, 0, sizeof(void*));
memset(&stack_saved_202, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_203, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&type_before_204, 0, sizeof(struct sType*));
right_value170 = (void*)0;
memset(&c_value_205, 0, sizeof(char*));
memset(&klass_206, 0, sizeof(struct sClass*));
memset(&class_name_207, 0, sizeof(char*));
memset(&fun_name_208, 0, sizeof(char*));
right_value171 = (void*)0;
memset(&type2_209, 0, sizeof(struct sType*));
right_value172 = (void*)0;
memset(&fun_name2_210, 0, sizeof(char*));
memset(&finalizer_211, 0, sizeof(struct sFun*));
right_value173 = (void*)0;
memset(&none_generics_name_212, 0, sizeof(char*));
right_value174 = (void*)0;
memset(&generics_fun_name_213, 0, sizeof(char*));
memset(&generics_fun_214, 0, sizeof(struct sGenericsFun*));
memset(&i_215, 0, sizeof(int));
right_value175 = (void*)0;
memset(&new_fun_name_216, 0, sizeof(char*));
right_value176 = (void*)0;
right_value177 = (void*)0;
memset(&fun_217, 0, sizeof(struct sFun*));
memset(&new_fun_name_218, 0, sizeof(char*));
memset(&fun_217, 0, sizeof(struct sFun*));
memset(&new_fun_name_218, 0, sizeof(char*));
right_value178 = (void*)0;
memset(&type_name_219, 0, sizeof(char*));
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value182 = (void*)0;
memset(&o2_saved_220, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_223, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_226, 0, sizeof(char*));
memset(&field_type_227, 0, sizeof(struct sType*));
memset(&name_226, 0, sizeof(char*));
memset(&field_type_227, 0, sizeof(struct sType*));
right_value183 = (void*)0;
right_value184 = (void*)0;
memset(&obj_228, 0, sizeof(char*));
memset(&o2_saved_231, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_232, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_233, 0, sizeof(char*));
memset(&field_type_234, 0, sizeof(struct sType*));
memset(&name_233, 0, sizeof(char*));
memset(&field_type_234, 0, sizeof(struct sType*));
right_value185 = (void*)0;
right_value186 = (void*)0;
memset(&obj_235, 0, sizeof(char*));
right_value187 = (void*)0;
memset(&type_name_236, 0, sizeof(char*));
right_value188 = (void*)0;
memset(&c_value_237, 0, sizeof(char*));
memset(&klass_238, 0, sizeof(struct sClass*));
memset(&class_name_239, 0, sizeof(char*));
memset(&fun_name_240, 0, sizeof(char*));
right_value189 = (void*)0;
memset(&type2_241, 0, sizeof(struct sType*));
right_value190 = (void*)0;
memset(&fun_name2_242, 0, sizeof(char*));
memset(&finalizer_243, 0, sizeof(struct sFun*));
right_value191 = (void*)0;
memset(&none_generics_name_244, 0, sizeof(char*));
right_value192 = (void*)0;
memset(&generics_fun_name_245, 0, sizeof(char*));
memset(&generics_fun_246, 0, sizeof(struct sGenericsFun*));
memset(&i_247, 0, sizeof(int));
right_value193 = (void*)0;
memset(&new_fun_name_248, 0, sizeof(char*));
right_value194 = (void*)0;
right_value195 = (void*)0;
memset(&fun_249, 0, sizeof(struct sFun*));
memset(&new_fun_name_250, 0, sizeof(char*));
memset(&fun_249, 0, sizeof(struct sFun*));
memset(&new_fun_name_250, 0, sizeof(char*));
right_value196 = (void*)0;
memset(&type_name_251, 0, sizeof(char*));
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value200 = (void*)0;
memset(&o2_saved_252, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_253, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_254, 0, sizeof(char*));
memset(&field_type_255, 0, sizeof(struct sType*));
memset(&name_254, 0, sizeof(char*));
memset(&field_type_255, 0, sizeof(struct sType*));
right_value201 = (void*)0;
right_value202 = (void*)0;
memset(&obj_256, 0, sizeof(char*));
memset(&o2_saved_257, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_258, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_259, 0, sizeof(char*));
memset(&field_type_260, 0, sizeof(struct sType*));
memset(&name_259, 0, sizeof(char*));
memset(&field_type_260, 0, sizeof(struct sType*));
right_value203 = (void*)0;
right_value204 = (void*)0;
memset(&obj_261, 0, sizeof(char*));
right_value205 = (void*)0;
memset(&type_name_262, 0, sizeof(char*));
    # 460 "04heap.c"
    # 457 "04heap.c"
    if(gComeGC) {
        # 458 "04heap.c"
        return;
    }
    # 460 "04heap.c"
    stack_saved_202=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    # 461 "04heap.c"
    right_value_objects_203=info->right_value_objects;
    # 463 "04heap.c"
    type_before_204=type;
    # 470 "04heap.c"
    # 466 "04heap.c"
    if(type->mNoSolvedGenericsType->v1) {
        # 467 "04heap.c"
        type=type->mNoSolvedGenericsType->v1;
    }
    # 819 "04heap.c"
    # 470 "04heap.c"
    if(_if_conditional254=type->mPointerNum>0||type->mClass->mProtocol||list$1sTypeph_length(type->mGenericsTypes)>0||(info->come_fun->mCloner&&ret_value),    _if_conditional254) {
        # 817 "04heap.c"
        # 471 "04heap.c"
        if(force_delete_) {
            # 472 "04heap.c"
            c_value_205=(char*)come_increment_ref_count(((char*)(right_value170=__builtin_string(obj))));
            right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 474 "04heap.c"
            klass_206=type->mClass;
            # 476 "04heap.c"
            class_name_207=klass_206->mName;
            # 478 "04heap.c"
            fun_name_208="force_finalize";
            # 480 "04heap.c"
            type2_209=(struct sType*)come_increment_ref_count(((struct sType*)(right_value171=sType_clone(type))));
            come_call_finalizer3(right_value171,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 481 "04heap.c"
            type2_209->mHeap=(_Bool)0;
            # 483 "04heap.c"
            fun_name2_210=(char*)come_increment_ref_count(((char*)(right_value172=create_method_name(type,(_Bool)0,fun_name_208,info,(_Bool)1))));
            right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 485 "04heap.c"
            finalizer_211=((void*)0);
            # 522 "04heap.c"
            # 486 "04heap.c"
            if(_if_conditional256=list$1sTypeph_length(type->mGenericsTypes)>0,            _if_conditional256) {
                # 487 "04heap.c"
                finalizer_211=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_210);
                # 504 "04heap.c"
                # 489 "04heap.c"
                if(_if_conditional257=finalizer_211==((void*)0),                _if_conditional257) {
                    # 490 "04heap.c"
                    none_generics_name_212=(char*)come_increment_ref_count(((char*)(right_value173=get_none_generics_name(type2_209->mClass->mName))));
                    right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 492 "04heap.c"
                    generics_fun_name_213=(char*)come_increment_ref_count(((char*)(right_value174=xsprintf("%s_%s",none_generics_name_212,fun_name_208))));
                    right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 493 "04heap.c"
                    generics_fun_214=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_213);
                    # 503 "04heap.c"
                    # 495 "04heap.c"
                    if(generics_fun_214) {
                        # 501 "04heap.c"
                        # 496 "04heap.c"
                        if(_if_conditional259=!create_generics_fun((char*)come_increment_ref_count(fun_name2_210),generics_fun_214,type,info),                        _if_conditional259) {
                            # 498 "04heap.c"
                            printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                            # 499 "04heap.c"
                            exit(2);
                        }
                        # 501 "04heap.c"
                        finalizer_211=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_210);
                    }
                    none_generics_name_212 = come_decrement_ref_count2(none_generics_name_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    generics_fun_name_213 = come_decrement_ref_count2(generics_fun_name_213, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                # 506 "04heap.c"
                # 517 "04heap.c"
                for(                i_215=128-1;                i_215>=1;                i_215--                ){
                    # 508 "04heap.c"
                    new_fun_name_216=(char*)come_increment_ref_count(((char*)(right_value175=xsprintf("%s_v%d",fun_name2_210,i_215))));
                    right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 509 "04heap.c"
                    finalizer_211=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_216);
                    # 515 "04heap.c"
                    # 511 "04heap.c"
                    if(finalizer_211) {
                        # 512 "04heap.c"
                        __dec_obj62=fun_name2_210;
                        fun_name2_210=(char*)come_increment_ref_count(((char*)(right_value176=__builtin_string(new_fun_name_216))));
                        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 513 "04heap.c"
                        new_fun_name_216 = come_decrement_ref_count2(new_fun_name_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    new_fun_name_216 = come_decrement_ref_count2(new_fun_name_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 520 "04heap.c"
                # 517 "04heap.c"
                if(_if_conditional261=finalizer_211==((void*)0),                _if_conditional261) {
                    # 518 "04heap.c"
                    finalizer_211=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_210);
                }
            }
            # 531 "04heap.c"
            # 522 "04heap.c"
            if(_if_conditional262=finalizer_211==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,            _if_conditional262) {
                # 524 "04heap.c"
                multiple_assign_var2=((struct tuple2$2sFunpcharph*)(right_value177=create_force_finalizer_automatically(type,fun_name_208,info)));
                fun_217=multiple_assign_var2->v1;
                new_fun_name_218=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                come_call_finalizer3(right_value177,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 526 "04heap.c"
                __dec_obj63=fun_name2_210;
                fun_name2_210=(char*)come_increment_ref_count(new_fun_name_218);
                __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                # 527 "04heap.c"
                finalizer_211=fun_217;
                new_fun_name_218 = come_decrement_ref_count2(new_fun_name_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 643 "04heap.c"
            # 531 "04heap.c"
            if(_if_conditional263=finalizer_211!=((void*)0),            _if_conditional263) {
                # 573 "04heap.c"
                # 532 "04heap.c"
                if(_if_conditional264=klass_206->mProtocol&&type->mPointerNum==1,                _if_conditional264) {
                    # 533 "04heap.c"
                    type_name_219=(char*)come_increment_ref_count(((char*)(right_value178=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                    right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 552 "04heap.c"
                    # 534 "04heap.c"
                    if(c_value_205) {
                        # 551 "04heap.c"
                        # 535 "04heap.c"
                        if(no_decrement) {
                            # 542 "04heap.c"
                            # 536 "04heap.c"
                            if(comma) {
                                # 537 "04heap.c"
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, __result_obj__),\n",fun_name2_210,c_value_205,type_name_219,c_value_205,type_name_219,c_value_205,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                # 540 "04heap.c"
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, __result_obj__);\n",fun_name2_210,c_value_205,type_name_219,c_value_205,type_name_219,c_value_205,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                        else {
                            # 550 "04heap.c"
                            # 544 "04heap.c"
                            if(comma) {
                                # 545 "04heap.c"
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0),\n",fun_name2_210,c_value_205,type_name_219,c_value_205,type_name_219,c_value_205,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                # 548 "04heap.c"
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0);\n",fun_name2_210,c_value_205,type_name_219,c_value_205,type_name_219,c_value_205,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                    }
                    type_name_219 = come_decrement_ref_count2(type_name_219, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    # 572 "04heap.c"
                    # 554 "04heap.c"
                    if(c_value_205) {
                        # 571 "04heap.c"
                        # 555 "04heap.c"
                        if(no_decrement) {
                            # 562 "04heap.c"
                            # 556 "04heap.c"
                            if(comma) {
                                # 557 "04heap.c"
                                add_come_code(info,((char*)(right_value179=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, __result_obj__),\n",c_value_205,fun_name2_210,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                # 560 "04heap.c"
                                add_come_code(info,((char*)(right_value180=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, __result_obj__);\n",c_value_205,fun_name2_210,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                        else {
                            # 570 "04heap.c"
                            # 564 "04heap.c"
                            if(comma) {
                                # 565 "04heap.c"
                                add_come_code(info,((char*)(right_value181=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0),\n",c_value_205,fun_name2_210,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                # 568 "04heap.c"
                                add_come_code(info,((char*)(right_value182=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0);\n",c_value_205,fun_name2_210,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                }
            }
            else {
                # 599 "04heap.c"
                # 575 "04heap.c"
                if(_if_conditional273=klass_206->mStruct&&type->mPointerNum==0,                _if_conditional273) {
                    # 585 "04heap.c"
                    for(                    o2_saved_220=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_206->mFields)),it_223=list$1tuple2$2charphsTypephph_begin((o2_saved_220));                    !list$1tuple2$2charphsTypephph_end((o2_saved_220));                    it_223=list$1tuple2$2charphsTypephph_next((o2_saved_220))                    ){
                        # 578 "04heap.c"
                        multiple_assign_var3=it_223;
                        name_226=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                        field_type_227=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
                        # 584 "04heap.c"
                        # 580 "04heap.c"
                        if(_if_conditional278=field_type_227->mHeap&&field_type_227->mPointerNum>0,                        _if_conditional278) {
                            # 581 "04heap.c"
                            obj_228=(char*)come_increment_ref_count(((char*)(right_value184=xsprintf("(((%s)%s).%s)",((char*)(right_value183=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))),c_value_205,name_226))));
                            right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 582 "04heap.c"
                            free_object(field_type_227,obj_228,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                            obj_228 = come_decrement_ref_count2(obj_228, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        name_226 = come_decrement_ref_count2(name_226, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(field_type_227,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_220,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    # 599 "04heap.c"
                    # 586 "04heap.c"
                    if(_if_conditional282=klass_206->mStruct&&type->mPointerNum==1,                    _if_conditional282) {
                        # 596 "04heap.c"
                        for(                        o2_saved_231=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_206->mFields)),it_232=list$1tuple2$2charphsTypephph_begin((o2_saved_231));                        !list$1tuple2$2charphsTypephph_end((o2_saved_231));                        it_232=list$1tuple2$2charphsTypephph_next((o2_saved_231))                        ){
                            # 589 "04heap.c"
                            multiple_assign_var4=it_232;
                            name_233=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                            field_type_234=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
                            # 595 "04heap.c"
                            # 591 "04heap.c"
                            if(_if_conditional283=field_type_234->mHeap&&field_type_234->mPointerNum>0,                            _if_conditional283) {
                                # 592 "04heap.c"
                                obj_235=(char*)come_increment_ref_count(((char*)(right_value186=xsprintf("(((%s)%s)->%s)",((char*)(right_value185=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))),c_value_205,name_233))));
                                right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 593 "04heap.c"
                                free_object(field_type_234,obj_235,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                                obj_235 = come_decrement_ref_count2(obj_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            name_233 = come_decrement_ref_count2(name_233, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(field_type_234,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer3(o2_saved_231,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
                # 642 "04heap.c"
                # 599 "04heap.c"
                if(_if_conditional284=!type->mAllocaValue,                _if_conditional284) {
                    # 641 "04heap.c"
                    # 600 "04heap.c"
                    if(_if_conditional285=klass_206->mProtocol&&type->mPointerNum==1,                    _if_conditional285) {
                        # 620 "04heap.c"
                        # 601 "04heap.c"
                        if(c_value_205) {
                            # 602 "04heap.c"
                            type_name_236=(char*)come_increment_ref_count(((char*)(right_value187=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 619 "04heap.c"
                            # 603 "04heap.c"
                            if(no_decrement) {
                                # 610 "04heap.c"
                                # 604 "04heap.c"
                                if(comma) {
                                    # 605 "04heap.c"
                                    add_come_code(info,"(%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d, __result_obj__):0,\n",c_value_205,c_value_205,c_value_205,type_name_236,c_value_205,type_name_236,c_value_205,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    # 608 "04heap.c"
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, __result_obj__); } \n",c_value_205,c_value_205,c_value_205,type_name_236,c_value_205,type_name_236,c_value_205,no_decrement,no_free,force_delete_);
                                }
                            }
                            else {
                                # 618 "04heap.c"
                                # 612 "04heap.c"
                                if(comma) {
                                    # 613 "04heap.c"
                                    add_come_code(info,"(%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0):0,\n",c_value_205,c_value_205,c_value_205,type_name_236,c_value_205,type_name_236,c_value_205,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    # 616 "04heap.c"
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0); } \n",c_value_205,c_value_205,c_value_205,type_name_236,c_value_205,type_name_236,c_value_205,no_decrement,no_free,force_delete_);
                                }
                            }
                            type_name_236 = come_decrement_ref_count2(type_name_236, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        # 640 "04heap.c"
                        # 622 "04heap.c"
                        if(c_value_205) {
                            # 639 "04heap.c"
                            # 623 "04heap.c"
                            if(no_decrement) {
                                # 630 "04heap.c"
                                # 624 "04heap.c"
                                if(comma) {
                                    # 625 "04heap.c"
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, __result_obj__),\n",c_value_205,c_value_205,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    # 628 "04heap.c"
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, __result_obj__);\n",c_value_205,c_value_205,no_decrement,no_free,force_delete_);
                                }
                            }
                            else {
                                # 638 "04heap.c"
                                # 632 "04heap.c"
                                if(comma) {
                                    # 633 "04heap.c"
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0),\n",c_value_205,c_value_205,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    # 636 "04heap.c"
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0);\n",c_value_205,c_value_205,no_decrement,no_free,force_delete_);
                                }
                            }
                        }
                    }
                }
            }
            c_value_205 = come_decrement_ref_count2(c_value_205, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_209,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name2_210 = come_decrement_ref_count2(fun_name2_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            # 645 "04heap.c"
            c_value_237=(char*)come_increment_ref_count(((char*)(right_value188=__builtin_string(obj))));
            right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 647 "04heap.c"
            klass_238=type->mClass;
            # 649 "04heap.c"
            class_name_239=klass_238->mName;
            # 651 "04heap.c"
            fun_name_240="finalize";
            # 653 "04heap.c"
            type2_241=(struct sType*)come_increment_ref_count(((struct sType*)(right_value189=sType_clone(type))));
            come_call_finalizer3(right_value189,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 654 "04heap.c"
            type2_241->mHeap=(_Bool)0;
            # 656 "04heap.c"
            fun_name2_242=(char*)come_increment_ref_count(((char*)(right_value190=create_method_name(type,(_Bool)0,fun_name_240,info,(_Bool)1))));
            right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 658 "04heap.c"
            finalizer_243=((void*)0);
            # 695 "04heap.c"
            # 659 "04heap.c"
            if(_if_conditional294=list$1sTypeph_length(type->mGenericsTypes)>0,            _if_conditional294) {
                # 660 "04heap.c"
                finalizer_243=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_242);
                # 677 "04heap.c"
                # 662 "04heap.c"
                if(_if_conditional295=finalizer_243==((void*)0),                _if_conditional295) {
                    # 663 "04heap.c"
                    none_generics_name_244=(char*)come_increment_ref_count(((char*)(right_value191=get_none_generics_name(type2_241->mClass->mName))));
                    right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 665 "04heap.c"
                    generics_fun_name_245=(char*)come_increment_ref_count(((char*)(right_value192=xsprintf("%s_%s",none_generics_name_244,fun_name_240))));
                    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 666 "04heap.c"
                    generics_fun_246=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_245);
                    # 676 "04heap.c"
                    # 668 "04heap.c"
                    if(generics_fun_246) {
                        # 674 "04heap.c"
                        # 669 "04heap.c"
                        if(_if_conditional297=!create_generics_fun((char*)come_increment_ref_count(fun_name2_242),generics_fun_246,type,info),                        _if_conditional297) {
                            # 671 "04heap.c"
                            printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                            # 672 "04heap.c"
                            exit(2);
                        }
                        # 674 "04heap.c"
                        finalizer_243=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_242);
                    }
                    none_generics_name_244 = come_decrement_ref_count2(none_generics_name_244, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    generics_fun_name_245 = come_decrement_ref_count2(generics_fun_name_245, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                # 679 "04heap.c"
                # 690 "04heap.c"
                for(                i_247=128-1;                i_247>=1;                i_247--                ){
                    # 681 "04heap.c"
                    new_fun_name_248=(char*)come_increment_ref_count(((char*)(right_value193=xsprintf("%s_v%d",fun_name2_242,i_247))));
                    right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 682 "04heap.c"
                    finalizer_243=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_248);
                    # 688 "04heap.c"
                    # 684 "04heap.c"
                    if(finalizer_243) {
                        # 685 "04heap.c"
                        __dec_obj64=fun_name2_242;
                        fun_name2_242=(char*)come_increment_ref_count(((char*)(right_value194=__builtin_string(new_fun_name_248))));
                        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 686 "04heap.c"
                        new_fun_name_248 = come_decrement_ref_count2(new_fun_name_248, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    new_fun_name_248 = come_decrement_ref_count2(new_fun_name_248, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 693 "04heap.c"
                # 690 "04heap.c"
                if(_if_conditional299=finalizer_243==((void*)0),                _if_conditional299) {
                    # 691 "04heap.c"
                    finalizer_243=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_242);
                }
            }
            # 704 "04heap.c"
            # 695 "04heap.c"
            if(_if_conditional300=finalizer_243==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,            _if_conditional300) {
                # 697 "04heap.c"
                multiple_assign_var5=((struct tuple2$2sFunpcharph*)(right_value195=create_finalizer_automatically(type,fun_name_240,info)));
                fun_249=multiple_assign_var5->v1;
                new_fun_name_250=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                come_call_finalizer3(right_value195,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 699 "04heap.c"
                __dec_obj65=fun_name2_242;
                fun_name2_242=(char*)come_increment_ref_count(new_fun_name_250);
                __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                # 700 "04heap.c"
                finalizer_243=fun_249;
                new_fun_name_250 = come_decrement_ref_count2(new_fun_name_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 816 "04heap.c"
            # 704 "04heap.c"
            if(_if_conditional301=finalizer_243!=((void*)0),            _if_conditional301) {
                # 746 "04heap.c"
                # 705 "04heap.c"
                if(_if_conditional302=klass_238->mProtocol&&type->mPointerNum==1,                _if_conditional302) {
                    # 706 "04heap.c"
                    type_name_251=(char*)come_increment_ref_count(((char*)(right_value196=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                    right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 725 "04heap.c"
                    # 707 "04heap.c"
                    if(c_value_237) {
                        # 724 "04heap.c"
                        # 708 "04heap.c"
                        if(no_decrement) {
                            # 715 "04heap.c"
                            # 709 "04heap.c"
                            if(comma) {
                                # 710 "04heap.c"
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, __result_obj__),\n",fun_name2_242,c_value_237,type_name_251,c_value_237,type_name_251,c_value_237,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                # 713 "04heap.c"
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, __result_obj__);\n",fun_name2_242,c_value_237,type_name_251,c_value_237,type_name_251,c_value_237,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                        else {
                            # 723 "04heap.c"
                            # 717 "04heap.c"
                            if(comma) {
                                # 718 "04heap.c"
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0),\n",fun_name2_242,c_value_237,type_name_251,c_value_237,type_name_251,c_value_237,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                # 721 "04heap.c"
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0);\n",fun_name2_242,c_value_237,type_name_251,c_value_237,type_name_251,c_value_237,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                    }
                    type_name_251 = come_decrement_ref_count2(type_name_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    # 745 "04heap.c"
                    # 727 "04heap.c"
                    if(c_value_237) {
                        # 744 "04heap.c"
                        # 728 "04heap.c"
                        if(no_decrement) {
                            # 735 "04heap.c"
                            # 729 "04heap.c"
                            if(comma) {
                                # 730 "04heap.c"
                                add_come_code(info,((char*)(right_value197=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, __result_obj__),\n",c_value_237,fun_name2_242,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                # 733 "04heap.c"
                                add_come_code(info,((char*)(right_value198=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, __result_obj__);\n",c_value_237,fun_name2_242,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                        else {
                            # 743 "04heap.c"
                            # 737 "04heap.c"
                            if(comma) {
                                # 738 "04heap.c"
                                add_come_code(info,((char*)(right_value199=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0),\n",c_value_237,fun_name2_242,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                # 741 "04heap.c"
                                add_come_code(info,((char*)(right_value200=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0);\n",c_value_237,fun_name2_242,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                }
            }
            else {
                # 772 "04heap.c"
                # 748 "04heap.c"
                if(_if_conditional311=klass_238->mStruct&&type->mPointerNum==0,                _if_conditional311) {
                    # 758 "04heap.c"
                    for(                    o2_saved_252=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_238->mFields)),it_253=list$1tuple2$2charphsTypephph_begin((o2_saved_252));                    !list$1tuple2$2charphsTypephph_end((o2_saved_252));                    it_253=list$1tuple2$2charphsTypephph_next((o2_saved_252))                    ){
                        # 751 "04heap.c"
                        multiple_assign_var6=it_253;
                        name_254=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                        field_type_255=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
                        # 757 "04heap.c"
                        # 753 "04heap.c"
                        if(_if_conditional312=field_type_255->mHeap&&field_type_255->mPointerNum>0,                        _if_conditional312) {
                            # 754 "04heap.c"
                            obj_256=(char*)come_increment_ref_count(((char*)(right_value202=xsprintf("(((%s)%s).%s)",((char*)(right_value201=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))),c_value_237,name_254))));
                            right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 755 "04heap.c"
                            free_object(field_type_255,obj_256,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                            obj_256 = come_decrement_ref_count2(obj_256, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        name_254 = come_decrement_ref_count2(name_254, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(field_type_255,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_252,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    # 772 "04heap.c"
                    # 759 "04heap.c"
                    if(_if_conditional313=klass_238->mStruct&&type->mPointerNum==1,                    _if_conditional313) {
                        # 769 "04heap.c"
                        for(                        o2_saved_257=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_238->mFields)),it_258=list$1tuple2$2charphsTypephph_begin((o2_saved_257));                        !list$1tuple2$2charphsTypephph_end((o2_saved_257));                        it_258=list$1tuple2$2charphsTypephph_next((o2_saved_257))                        ){
                            # 762 "04heap.c"
                            multiple_assign_var7=it_258;
                            name_259=(char*)come_increment_ref_count(multiple_assign_var7->v1);
                            field_type_260=(struct sType*)come_increment_ref_count(multiple_assign_var7->v2);
                            # 768 "04heap.c"
                            # 764 "04heap.c"
                            if(_if_conditional314=field_type_260->mHeap&&field_type_260->mPointerNum>0,                            _if_conditional314) {
                                # 765 "04heap.c"
                                obj_261=(char*)come_increment_ref_count(((char*)(right_value204=xsprintf("(((%s)%s)->%s)",((char*)(right_value203=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))),c_value_237,name_259))));
                                right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 766 "04heap.c"
                                free_object(field_type_260,obj_261,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                                obj_261 = come_decrement_ref_count2(obj_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            name_259 = come_decrement_ref_count2(name_259, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(field_type_260,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer3(o2_saved_257,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
                # 815 "04heap.c"
                # 772 "04heap.c"
                if(_if_conditional315=!type->mAllocaValue,                _if_conditional315) {
                    # 814 "04heap.c"
                    # 773 "04heap.c"
                    if(_if_conditional316=klass_238->mProtocol&&type->mPointerNum==1,                    _if_conditional316) {
                        # 793 "04heap.c"
                        # 774 "04heap.c"
                        if(c_value_237) {
                            # 775 "04heap.c"
                            type_name_262=(char*)come_increment_ref_count(((char*)(right_value205=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 792 "04heap.c"
                            # 776 "04heap.c"
                            if(no_decrement) {
                                # 783 "04heap.c"
                                # 777 "04heap.c"
                                if(comma) {
                                    # 778 "04heap.c"
                                    add_come_code(info,"(%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d, __result_obj__):0,\n",c_value_237,c_value_237,c_value_237,type_name_262,c_value_237,type_name_262,c_value_237,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    # 781 "04heap.c"
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, __result_obj__); } \n",c_value_237,c_value_237,c_value_237,type_name_262,c_value_237,type_name_262,c_value_237,no_decrement,no_free,force_delete_);
                                }
                            }
                            else {
                                # 791 "04heap.c"
                                # 785 "04heap.c"
                                if(comma) {
                                    # 786 "04heap.c"
                                    add_come_code(info,"(%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0):0,\n",c_value_237,c_value_237,c_value_237,type_name_262,c_value_237,type_name_262,c_value_237,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    # 789 "04heap.c"
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0); } \n",c_value_237,c_value_237,c_value_237,type_name_262,c_value_237,type_name_262,c_value_237,no_decrement,no_free,force_delete_);
                                }
                            }
                            type_name_262 = come_decrement_ref_count2(type_name_262, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        # 813 "04heap.c"
                        # 795 "04heap.c"
                        if(c_value_237) {
                            # 812 "04heap.c"
                            # 796 "04heap.c"
                            if(no_decrement) {
                                # 803 "04heap.c"
                                # 797 "04heap.c"
                                if(comma) {
                                    # 798 "04heap.c"
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, __result_obj__),\n",c_value_237,c_value_237,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    # 801 "04heap.c"
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, __result_obj__);\n",c_value_237,c_value_237,no_decrement,no_free,force_delete_);
                                }
                            }
                            else {
                                # 811 "04heap.c"
                                # 805 "04heap.c"
                                if(comma) {
                                    # 806 "04heap.c"
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0),\n",c_value_237,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    # 809 "04heap.c"
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0);\n",c_value_237,c_value_237,no_decrement,no_free,force_delete_);
                                }
                            }
                        }
                    }
                }
            }
            c_value_237 = come_decrement_ref_count2(c_value_237, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_241,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name2_242 = come_decrement_ref_count2(fun_name2_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    # 819 "04heap.c"
    __dec_obj66=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_203);
    come_call_finalizer3(__dec_obj66,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    # 820 "04heap.c"
    __dec_obj67=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_202);
    come_call_finalizer3(__dec_obj67,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_202,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional274;
struct tuple2$2charphsTypeph* result_221;
struct tuple2$2charphsTypeph* __result117__;
_Bool _if_conditional275;
struct tuple2$2charphsTypeph* __result118__;
struct tuple2$2charphsTypeph* result_222;
struct tuple2$2charphsTypeph* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_221, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_222, 0, sizeof(struct tuple2$2charphsTypeph*));
                        # 281 "./neo-c.h"
                        # 276 "./neo-c.h"
                        if(_if_conditional274=self==((void*)0),                        _if_conditional274) {
                            # 277 "./neo-c.h"
                            # 278 "./neo-c.h"
                            memset(&result_221,0,sizeof(struct tuple2$2charphsTypeph*));
                            # 279 "./neo-c.h"
                            __result117__ = __result_obj__ = result_221;
                            return __result117__;
                        }
                        # 281 "./neo-c.h"
                        self->it=self->head;
                        # 287 "./neo-c.h"
                        # 283 "./neo-c.h"
                        if(self->it) {
                            # 284 "./neo-c.h"
                            __result118__ = __result_obj__ = self->it->item;
                            return __result118__;
                        }
                        # 287 "./neo-c.h"
                        # 288 "./neo-c.h"
                        memset(&result_222,0,sizeof(struct tuple2$2charphsTypeph*));
                        # 289 "./neo-c.h"
                        __result119__ = __result_obj__ = result_222;
                        return __result119__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result120__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 311 "./neo-c.h"
                        __result120__ = self==((void*)0)||self->it==((void*)0);
                        return __result120__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional276;
struct tuple2$2charphsTypeph* result_224;
struct tuple2$2charphsTypeph* __result121__;
_Bool _if_conditional277;
struct tuple2$2charphsTypeph* __result122__;
struct tuple2$2charphsTypeph* result_225;
struct tuple2$2charphsTypeph* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_224, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_225, 0, sizeof(struct tuple2$2charphsTypeph*));
                        # 299 "./neo-c.h"
                        # 293 "./neo-c.h"
                        if(_if_conditional276=self==((void*)0)||self->it==((void*)0),                        _if_conditional276) {
                            # 294 "./neo-c.h"
                            # 295 "./neo-c.h"
                            memset(&result_224,0,sizeof(struct tuple2$2charphsTypeph*));
                            # 296 "./neo-c.h"
                            __result121__ = __result_obj__ = result_224;
                            return __result121__;
                        }
                        # 299 "./neo-c.h"
                        self->it=self->it->next;
                        # 305 "./neo-c.h"
                        # 301 "./neo-c.h"
                        if(self->it) {
                            # 302 "./neo-c.h"
                            __result122__ = __result_obj__ = self->it->item;
                            return __result122__;
                        }
                        # 305 "./neo-c.h"
                        # 306 "./neo-c.h"
                        memset(&result_225,0,sizeof(struct tuple2$2charphsTypeph*));
                        # 307 "./neo-c.h"
                        __result123__ = __result_obj__ = result_225;
                        return __result123__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_229;
_Bool _while_condtional30;
struct list_item$1tuple2$2charphsTypephph* prev_it_230;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_229, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_230, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                        # 114 "./neo-c.h"
                        it_229=self->head;
                        # 120 "./neo-c.h"
                        while(_while_condtional30=it_229!=((void*)0),                        _while_condtional30) {
                            # 116 "./neo-c.h"
                            prev_it_230=it_229;
                            # 117 "./neo-c.h"
                            it_229=it_229->next;
                            # 118 "./neo-c.h"
                            come_call_finalizer3(prev_it_230,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional279;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                                # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                if(_if_conditional279=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional279) {
                                    # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                    come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional280;
_Bool _if_conditional281;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "tuple2$2charphsTypephp_finalize"
                                        # 0 "tuple2$2charphsTypephp_finalize"
                                        if(_if_conditional280=self!=((void*)0)&&self->v1!=((void*)0),                                        _if_conditional280) {
                                            # 0 "tuple2$2charphsTypephp_finalize"
                                            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "tuple2$2charphsTypephp_finalize"
                                        # 1 "tuple2$2charphsTypephp_finalize"
                                        if(_if_conditional281=self!=((void*)0)&&self->v2!=((void*)0),                                        _if_conditional281) {
                                            # 1 "tuple2$2charphsTypephp_finalize"
                                            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__;
void* right_value206;
struct sType* type2_263;
_Bool _if_conditional325;
char* result_264;
struct sType* result_type_265;
struct list$1CVALUEph* stack_saved_266;
struct list$1sRightValueObjectph* right_value_objects_267;
void* right_value207;
char* c_value_268;
struct sClass* klass_269;
char* class_name_270;
char* fun_name_271;
struct sFun* cloner_272;
char* fun_name2_273;
_Bool _if_conditional326;
void* right_value208;
char* none_generics_name_274;
void* right_value209;
struct sType* obj_type_275;
void* right_value210;
char* __dec_obj68;
void* right_value211;
char* fun_name3_276;
struct sGenericsFun* generics_fun_279;
_Bool _if_conditional331;
void* right_value212;
_Bool _if_conditional332;
void* right_value213;
void* right_value214;
void* right_value215;
void* right_value216;
void* right_value217;
struct tuple2$2sTypephcharph* __result129__;
void* right_value218;
char* __dec_obj71;
int i_280;
void* right_value219;
char* new_fun_name_281;
_Bool _if_conditional335;
void* right_value220;
char* __dec_obj72;
_Bool _if_conditional336;
_Bool _if_conditional337;
void* right_value221;
struct tuple2$2sFunpcharph* multiple_assign_var8;
struct sFun* fun_282;
char* new_fun_name_283;
char* __dec_obj73;
_Bool _if_conditional338;
struct sType* __dec_obj74;
void* right_value222;
struct sType* __dec_obj75;
void* right_value223;
char* __dec_obj76;
_Bool _if_conditional339;
void* right_value224;
char* __dec_obj77;
void* right_value225;
struct sType* __dec_obj78;
void* right_value226;
char* type_name_284;
void* right_value227;
char* __dec_obj79;
_Bool _if_conditional340;
void* right_value228;
char* __dec_obj80;
struct list$1sRightValueObjectph* __dec_obj81;
struct list$1CVALUEph* __dec_obj82;
void* right_value229;
void* right_value230;
struct tuple2$2sTypephcharph* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value206 = (void*)0;
memset(&type2_263, 0, sizeof(struct sType*));
memset(&result_264, 0, sizeof(char*));
memset(&result_type_265, 0, sizeof(struct sType*));
memset(&stack_saved_266, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_267, 0, sizeof(struct list$1sRightValueObjectph*));
right_value207 = (void*)0;
memset(&c_value_268, 0, sizeof(char*));
memset(&klass_269, 0, sizeof(struct sClass*));
memset(&class_name_270, 0, sizeof(char*));
memset(&fun_name_271, 0, sizeof(char*));
memset(&cloner_272, 0, sizeof(struct sFun*));
memset(&fun_name2_273, 0, sizeof(char*));
right_value208 = (void*)0;
memset(&none_generics_name_274, 0, sizeof(char*));
right_value209 = (void*)0;
memset(&obj_type_275, 0, sizeof(struct sType*));
right_value210 = (void*)0;
right_value211 = (void*)0;
memset(&fun_name3_276, 0, sizeof(char*));
memset(&generics_fun_279, 0, sizeof(struct sGenericsFun*));
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
memset(&i_280, 0, sizeof(int));
right_value219 = (void*)0;
memset(&new_fun_name_281, 0, sizeof(char*));
right_value220 = (void*)0;
right_value221 = (void*)0;
memset(&fun_282, 0, sizeof(struct sFun*));
memset(&new_fun_name_283, 0, sizeof(char*));
memset(&fun_282, 0, sizeof(struct sFun*));
memset(&new_fun_name_283, 0, sizeof(char*));
right_value222 = (void*)0;
right_value223 = (void*)0;
right_value224 = (void*)0;
right_value225 = (void*)0;
right_value226 = (void*)0;
memset(&type_name_284, 0, sizeof(char*));
right_value227 = (void*)0;
right_value228 = (void*)0;
right_value229 = (void*)0;
right_value230 = (void*)0;
    # 825 "04heap.c"
    type2_263=(struct sType*)come_increment_ref_count(((struct sType*)(right_value206=sType_clone(type))));
    come_call_finalizer3(right_value206,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 830 "04heap.c"
    # 826 "04heap.c"
    if(type->mNoSolvedGenericsType->v1) {
        # 827 "04heap.c"
        type=type->mNoSolvedGenericsType->v1;
    }
    # 831 "04heap.c"
    result_264=((void*)0);
    # 831 "04heap.c"
    result_type_265=((void*)0);
    # 832 "04heap.c"
    stack_saved_266=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    # 833 "04heap.c"
    right_value_objects_267=info->right_value_objects;
    # 835 "04heap.c"
    c_value_268=(char*)come_increment_ref_count(((char*)(right_value207=__builtin_string(obj))));
    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 837 "04heap.c"
    klass_269=type->mClass;
    # 839 "04heap.c"
    class_name_270=klass_269->mName;
    # 841 "04heap.c"
    fun_name_271="clone";
    # 843 "04heap.c"
    cloner_272=((void*)0);
    # 844 "04heap.c"
    # 882 "04heap.c"
    # 845 "04heap.c"
    if(_if_conditional326=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional326) {
        # 846 "04heap.c"
        none_generics_name_274=(char*)come_increment_ref_count(((char*)(right_value208=get_none_generics_name(type->mClass->mName))));
        right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 848 "04heap.c"
        obj_type_275=(struct sType*)come_increment_ref_count(((struct sType*)(right_value209=solve_generics(type,info->generics_type,info))));
        come_call_finalizer3(right_value209,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 850 "04heap.c"
        __dec_obj68=fun_name2_273;
        fun_name2_273=(char*)come_increment_ref_count(((char*)(right_value210=create_method_name(obj_type_275,(_Bool)0,fun_name_271,info,(_Bool)1))));
        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 851 "04heap.c"
        fun_name3_276=(char*)come_increment_ref_count(((char*)(right_value211=xsprintf("%s_%s",none_generics_name_274,fun_name_271))));
        right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 853 "04heap.c"
        generics_fun_279=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_276,((void*)0));
        # 861 "04heap.c"
        # 855 "04heap.c"
        if(generics_fun_279) {
            # 859 "04heap.c"
            # 856 "04heap.c"
            if(_if_conditional332=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value212=__builtin_string(fun_name2_273)))),generics_fun_279,obj_type_275,info),            right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional332) {
                # 857 "04heap.c"
                __result129__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value217=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value216=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 857, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value214=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value213=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "04heap.c", 857, "sType")))),"void",(_Bool)0,info)))),(char*)come_increment_ref_count(((char*)(right_value215=__builtin_string("")))))));
                none_generics_name_274 = come_decrement_ref_count2(none_generics_name_274, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_275,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_276 = come_decrement_ref_count2(fun_name3_276, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_263,sType_finalize, 0, 0, 0, 0, (void*)0);
                result_264 = come_decrement_ref_count2(result_264, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_265,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(stack_saved_266,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                c_value_268 = come_decrement_ref_count2(c_value_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_273 = come_decrement_ref_count2(fun_name2_273, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value213,sType_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value214,sType_finalize, 0, 1, 0, 0, __result_obj__);
                right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value217,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                return __result129__;
            }
        }
        # 861 "04heap.c"
        cloner_272=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_273);
        none_generics_name_274 = come_decrement_ref_count2(none_generics_name_274, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_275,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_276 = come_decrement_ref_count2(fun_name3_276, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 864 "04heap.c"
        __dec_obj71=fun_name2_273;
        fun_name2_273=(char*)come_increment_ref_count(((char*)(right_value218=create_method_name(type,(_Bool)0,fun_name_271,info,(_Bool)1))));
        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 866 "04heap.c"
        # 877 "04heap.c"
        for(        i_280=128-1;        i_280>=1;        i_280--        ){
            # 868 "04heap.c"
            new_fun_name_281=(char*)come_increment_ref_count(((char*)(right_value219=xsprintf("%s_v%d",fun_name2_273,i_280))));
            right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 869 "04heap.c"
            cloner_272=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_281);
            # 875 "04heap.c"
            # 871 "04heap.c"
            if(cloner_272) {
                # 872 "04heap.c"
                __dec_obj72=fun_name2_273;
                fun_name2_273=(char*)come_increment_ref_count(((char*)(right_value220=__builtin_string(new_fun_name_281))));
                __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 873 "04heap.c"
                new_fun_name_281 = come_decrement_ref_count2(new_fun_name_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_281 = come_decrement_ref_count2(new_fun_name_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 880 "04heap.c"
        # 877 "04heap.c"
        if(_if_conditional336=cloner_272==((void*)0),        _if_conditional336) {
            # 878 "04heap.c"
            cloner_272=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_273);
        }
    }
    # 891 "04heap.c"
    # 882 "04heap.c"
    if(_if_conditional337=cloner_272==((void*)0)&&!type->mClass->mNumber,    _if_conditional337) {
        # 884 "04heap.c"
        multiple_assign_var8=((struct tuple2$2sFunpcharph*)(right_value221=create_cloner_automatically(type,fun_name_271,info)));
        fun_282=multiple_assign_var8->v1;
        new_fun_name_283=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        come_call_finalizer3(right_value221,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 886 "04heap.c"
        __dec_obj73=fun_name2_273;
        fun_name2_273=(char*)come_increment_ref_count(new_fun_name_283);
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        # 887 "04heap.c"
        cloner_272=fun_282;
        new_fun_name_283 = come_decrement_ref_count2(new_fun_name_283, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 911 "04heap.c"
    # 891 "04heap.c"
    if(_if_conditional338=cloner_272!=((void*)0),    _if_conditional338) {
        # 892 "04heap.c"
        __dec_obj74=result_type_265;
        result_type_265=(struct sType*)come_increment_ref_count(cloner_272->mResultType);
        come_call_finalizer3(__dec_obj74,sType_finalize, 0, 0, 0, 0, (void*)0);
        # 893 "04heap.c"
        __dec_obj75=result_type_265;
        result_type_265=(struct sType*)come_increment_ref_count(((struct sType*)(right_value222=solve_generics(result_type_265,type,info))));
        come_call_finalizer3(__dec_obj75,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value222,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 895 "04heap.c"
        __dec_obj76=result_264;
        result_264=(char*)come_increment_ref_count(((char*)(right_value223=xsprintf("%s(%s)",fun_name2_273,c_value_268))));
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 900 "04heap.c"
        # 897 "04heap.c"
        if(gComeDebug) {
            # 898 "04heap.c"
            __dec_obj77=result_264;
            result_264=(char*)come_increment_ref_count(((char*)(right_value224=append_stackframe(result_264,result_type_265,info))));
            __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    else {
        # 902 "04heap.c"
        __dec_obj78=result_type_265;
        result_type_265=(struct sType*)come_increment_ref_count(((struct sType*)(right_value225=sType_clone(type))));
        come_call_finalizer3(__dec_obj78,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value225,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 903 "04heap.c"
        type2_263->mHeap=(_Bool)1;
        # 904 "04heap.c"
        type_name_284=(char*)come_increment_ref_count(((char*)(right_value226=make_type_name_string(type2_263,(_Bool)0,(_Bool)0,(_Bool)0,info))));
        right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 905 "04heap.c"
        __dec_obj79=result_264;
        result_264=(char*)come_increment_ref_count(((char*)(right_value227=xsprintf("(%s)come_memdup(%s, \"%s\", %d, \"%s\")",type_name_284,c_value_268,info->sname,info->sline,type_name_284))));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 909 "04heap.c"
        # 906 "04heap.c"
        if(gComeDebug) {
            # 907 "04heap.c"
            __dec_obj80=result_264;
            result_264=(char*)come_increment_ref_count(((char*)(right_value228=append_stackframe(result_264,result_type_265,info))));
            __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        type_name_284 = come_decrement_ref_count2(type_name_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 911 "04heap.c"
    __dec_obj81=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_267);
    come_call_finalizer3(__dec_obj81,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    # 912 "04heap.c"
    __dec_obj82=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_266);
    come_call_finalizer3(__dec_obj82,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    # 914 "04heap.c"
    __result130__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value230=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value229=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 914, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(result_type_265),(char*)come_increment_ref_count(result_264))));
    come_call_finalizer3(type2_263,sType_finalize, 0, 0, 0, 0, (void*)0);
    result_264 = come_decrement_ref_count2(result_264, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_265,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_266,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    c_value_268 = come_decrement_ref_count2(c_value_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_273 = come_decrement_ref_count2(fun_name2_273, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value230,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result130__;
    come_call_finalizer3(type2_263,sType_finalize, 0, 0, 0, 0, (void*)0);
    result_264 = come_decrement_ref_count2(result_264, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_265,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_266,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    c_value_268 = come_decrement_ref_count2(c_value_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_273 = come_decrement_ref_count2(fun_name2_273, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_277;
unsigned int it_278;
_Bool _while_condtional31;
_Bool _if_conditional327;
_Bool _if_conditional328;
struct sGenericsFun* __result124__;
_Bool _if_conditional329;
_Bool _if_conditional330;
struct sGenericsFun* __result125__;
struct sGenericsFun* __result126__;
struct sGenericsFun* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_277, 0, sizeof(unsigned int));
memset(&it_278, 0, sizeof(unsigned int));
            # 1201 "./neo-c.h"
            hash_277=string_get_hash_key(((char*)key))%self->size;
            # 1202 "./neo-c.h"
            it_278=hash_277;
            # 1226 "./neo-c.h"
            while(_while_condtional31=(_Bool)1,            _while_condtional31) {
                # 1224 "./neo-c.h"
                # 1205 "./neo-c.h"
                if(_if_conditional327=self->item_existance[it_278],                _if_conditional327) {
                    # 1212 "./neo-c.h"
                    # 1207 "./neo-c.h"
                    if(_if_conditional328=string_equals(self->keys[it_278],key),                    _if_conditional328) {
                        # 1209 "./neo-c.h"
                        __result124__ = __result_obj__ = self->items[it_278];
                        come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result124__;
                    }
                    # 1212 "./neo-c.h"
                    it_278++;
                    # 1220 "./neo-c.h"
                    # 1214 "./neo-c.h"
                    if(_if_conditional329=it_278>=self->size,                    _if_conditional329) {
                        # 1215 "./neo-c.h"
                        it_278=0;
                    }
                    else {
                        # 1220 "./neo-c.h"
                        # 1217 "./neo-c.h"
                        if(_if_conditional330=it_278==hash_277,                        _if_conditional330) {
                            # 1218 "./neo-c.h"
                            __result125__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result125__;
                        }
                    }
                }
                else {
                    # 1222 "./neo-c.h"
                    __result126__ = __result_obj__ = default_value;
                    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result126__;
                }
            }
            # 1226 "./neo-c.h"
            __result127__ = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result127__;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
struct sType* __dec_obj69;
char* __dec_obj70;
struct tuple2$2sTypephcharph* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1738 "./neo-c.h"
                    __dec_obj69=self->v1;
                    self->v1=(struct sType*)come_increment_ref_count(v1);
                    come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 0, 0, (void*)0);
                    # 1739 "./neo-c.h"
                    __dec_obj70=self->v2;
                    self->v2=(char*)come_increment_ref_count(v2);
                    __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                    # 1741 "./neo-c.h"
                    __result128__ = __result_obj__ = self;
                    come_call_finalizer3(self,tuple2$2sTypephcharphp_finalize, 0, 0, 1, 0, (void*)0);
                    come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result128__;
                    come_call_finalizer3(self,tuple2$2sTypephcharphp_finalize, 0, 0, 1, 0, (void*)0);
                    come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional333;
_Bool _if_conditional334;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "tuple2$2sTypephcharphp_finalize"
                        # 0 "tuple2$2sTypephcharphp_finalize"
                        if(_if_conditional333=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional333) {
                            # 0 "tuple2$2sTypephcharphp_finalize"
                            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        # 2 "tuple2$2sTypephcharphp_finalize"
                        # 1 "tuple2$2sTypephcharphp_finalize"
                        if(_if_conditional334=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional334) {
                            # 1 "tuple2$2sTypephcharphp_finalize"
                            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

_Bool create_equals_method(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional341;
char* result_285;
struct list$1CVALUEph* stack_saved_286;
struct list$1sRightValueObjectph* right_value_objects_287;
struct sClass* klass_288;
char* class_name_289;
char* fun_name_290;
void* right_value231;
struct sType* type2_291;
struct sFun* cloner_292;
char* fun_name2_293;
_Bool _if_conditional342;
void* right_value232;
char* none_generics_name_294;
void* right_value233;
struct sType* obj_type_295;
void* right_value234;
char* __dec_obj83;
void* right_value235;
char* fun_name3_296;
struct sGenericsFun* generics_fun_297;
_Bool _if_conditional343;
void* right_value236;
_Bool _if_conditional344;
_Bool __result131__;
void* right_value237;
char* __dec_obj84;
int i_298;
void* right_value238;
char* new_fun_name_299;
_Bool _if_conditional345;
void* right_value239;
char* __dec_obj85;
_Bool _if_conditional346;
_Bool _if_conditional347;
void* right_value240;
struct tuple2$2sFunpcharph* multiple_assign_var9;
struct sFun* fun_300;
char* new_fun_name_301;
char* __dec_obj86;
struct list$1sRightValueObjectph* __dec_obj87;
struct list$1CVALUEph* __dec_obj88;
_Bool __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_285, 0, sizeof(char*));
memset(&stack_saved_286, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_287, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_288, 0, sizeof(struct sClass*));
memset(&class_name_289, 0, sizeof(char*));
memset(&fun_name_290, 0, sizeof(char*));
right_value231 = (void*)0;
memset(&type2_291, 0, sizeof(struct sType*));
memset(&cloner_292, 0, sizeof(struct sFun*));
memset(&fun_name2_293, 0, sizeof(char*));
right_value232 = (void*)0;
memset(&none_generics_name_294, 0, sizeof(char*));
right_value233 = (void*)0;
memset(&obj_type_295, 0, sizeof(struct sType*));
right_value234 = (void*)0;
right_value235 = (void*)0;
memset(&fun_name3_296, 0, sizeof(char*));
memset(&generics_fun_297, 0, sizeof(struct sGenericsFun*));
right_value236 = (void*)0;
right_value237 = (void*)0;
memset(&i_298, 0, sizeof(int));
right_value238 = (void*)0;
memset(&new_fun_name_299, 0, sizeof(char*));
right_value239 = (void*)0;
right_value240 = (void*)0;
memset(&fun_300, 0, sizeof(struct sFun*));
memset(&new_fun_name_301, 0, sizeof(char*));
memset(&fun_300, 0, sizeof(struct sFun*));
memset(&new_fun_name_301, 0, sizeof(char*));
    # 922 "04heap.c"
    # 919 "04heap.c"
    if(type->mNoSolvedGenericsType->v1) {
        # 920 "04heap.c"
        type=type->mNoSolvedGenericsType->v1;
    }
    # 923 "04heap.c"
    result_285=((void*)0);
    # 923 "04heap.c"
    stack_saved_286=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    # 924 "04heap.c"
    right_value_objects_287=info->right_value_objects;
    # 926 "04heap.c"
    klass_288=type->mClass;
    # 928 "04heap.c"
    class_name_289=klass_288->mName;
    # 930 "04heap.c"
    fun_name_290="equals";
    # 932 "04heap.c"
    type2_291=(struct sType*)come_increment_ref_count(((struct sType*)(right_value231=sType_clone(type))));
    come_call_finalizer3(right_value231,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 933 "04heap.c"
    type2_291->mHeap=(_Bool)0;
    # 935 "04heap.c"
    cloner_292=((void*)0);
    # 936 "04heap.c"
    # 974 "04heap.c"
    # 937 "04heap.c"
    if(_if_conditional342=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional342) {
        # 938 "04heap.c"
        none_generics_name_294=(char*)come_increment_ref_count(((char*)(right_value232=get_none_generics_name(type->mClass->mName))));
        right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 940 "04heap.c"
        obj_type_295=(struct sType*)come_increment_ref_count(((struct sType*)(right_value233=solve_generics(type,info->generics_type,info))));
        come_call_finalizer3(right_value233,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 942 "04heap.c"
        __dec_obj83=fun_name2_293;
        fun_name2_293=(char*)come_increment_ref_count(((char*)(right_value234=create_method_name(obj_type_295,(_Bool)0,fun_name_290,info,(_Bool)1))));
        __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 943 "04heap.c"
        fun_name3_296=(char*)come_increment_ref_count(((char*)(right_value235=xsprintf("%s_%s",none_generics_name_294,fun_name_290))));
        right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 945 "04heap.c"
        generics_fun_297=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_296,((void*)0));
        # 953 "04heap.c"
        # 947 "04heap.c"
        if(generics_fun_297) {
            # 951 "04heap.c"
            # 948 "04heap.c"
            if(_if_conditional344=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value236=__builtin_string(fun_name2_293)))),generics_fun_297,obj_type_295,info),            right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional344) {
                # 949 "04heap.c"
                __result131__ = (_Bool)0;
                none_generics_name_294 = come_decrement_ref_count2(none_generics_name_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_295,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_296 = come_decrement_ref_count2(fun_name3_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_285 = come_decrement_ref_count2(result_285, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(stack_saved_286,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_291,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_293 = come_decrement_ref_count2(fun_name2_293, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result131__;
            }
        }
        # 953 "04heap.c"
        cloner_292=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_293);
        none_generics_name_294 = come_decrement_ref_count2(none_generics_name_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_295,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_296 = come_decrement_ref_count2(fun_name3_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 956 "04heap.c"
        __dec_obj84=fun_name2_293;
        fun_name2_293=(char*)come_increment_ref_count(((char*)(right_value237=create_method_name(type,(_Bool)0,fun_name_290,info,(_Bool)1))));
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 958 "04heap.c"
        # 969 "04heap.c"
        for(        i_298=128-1;        i_298>=1;        i_298--        ){
            # 960 "04heap.c"
            new_fun_name_299=(char*)come_increment_ref_count(((char*)(right_value238=xsprintf("%s_v%d",fun_name2_293,i_298))));
            right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 961 "04heap.c"
            cloner_292=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_299);
            # 967 "04heap.c"
            # 963 "04heap.c"
            if(cloner_292) {
                # 964 "04heap.c"
                __dec_obj85=fun_name2_293;
                fun_name2_293=(char*)come_increment_ref_count(((char*)(right_value239=__builtin_string(new_fun_name_299))));
                __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 965 "04heap.c"
                new_fun_name_299 = come_decrement_ref_count2(new_fun_name_299, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_299 = come_decrement_ref_count2(new_fun_name_299, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 972 "04heap.c"
        # 969 "04heap.c"
        if(_if_conditional346=cloner_292==((void*)0),        _if_conditional346) {
            # 970 "04heap.c"
            cloner_292=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_293);
        }
    }
    # 982 "04heap.c"
    # 974 "04heap.c"
    if(_if_conditional347=cloner_292==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,    _if_conditional347) {
        # 976 "04heap.c"
        multiple_assign_var9=((struct tuple2$2sFunpcharph*)(right_value240=create_equals_automatically(type,fun_name_290,info)));
        fun_300=multiple_assign_var9->v1;
        new_fun_name_301=(char*)come_increment_ref_count(multiple_assign_var9->v2);
        come_call_finalizer3(right_value240,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 978 "04heap.c"
        __dec_obj86=fun_name2_293;
        fun_name2_293=(char*)come_increment_ref_count(new_fun_name_301);
        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        # 979 "04heap.c"
        cloner_292=fun_300;
        new_fun_name_301 = come_decrement_ref_count2(new_fun_name_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 982 "04heap.c"
    __dec_obj87=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_287);
    come_call_finalizer3(__dec_obj87,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    # 983 "04heap.c"
    __dec_obj88=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_286);
    come_call_finalizer3(__dec_obj88,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    # 985 "04heap.c"
    __result132__ = (_Bool)1;
    result_285 = come_decrement_ref_count2(result_285, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_286,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_291,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_293 = come_decrement_ref_count2(fun_name2_293, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result132__;
    result_285 = come_decrement_ref_count2(result_285, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_286,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_291,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_293 = come_decrement_ref_count2(fun_name2_293, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional348;
char* result_302;
struct list$1CVALUEph* stack_saved_303;
struct list$1sRightValueObjectph* right_value_objects_304;
struct sClass* klass_305;
char* class_name_306;
char* fun_name_307;
void* right_value241;
struct sType* type2_308;
struct sFun* cloner_309;
char* fun_name2_310;
_Bool _if_conditional349;
void* right_value242;
char* none_generics_name_311;
void* right_value243;
struct sType* obj_type_312;
void* right_value244;
char* __dec_obj89;
void* right_value245;
char* fun_name3_313;
struct sGenericsFun* generics_fun_314;
_Bool _if_conditional350;
void* right_value246;
_Bool _if_conditional351;
_Bool __result133__;
void* right_value247;
char* __dec_obj90;
int i_315;
void* right_value248;
char* new_fun_name_316;
_Bool _if_conditional352;
void* right_value249;
char* __dec_obj91;
_Bool _if_conditional353;
_Bool _if_conditional354;
void* right_value250;
struct tuple2$2sFunpcharph* multiple_assign_var10;
struct sFun* fun_317;
char* new_fun_name_318;
char* __dec_obj92;
struct list$1sRightValueObjectph* __dec_obj93;
struct list$1CVALUEph* __dec_obj94;
_Bool __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_302, 0, sizeof(char*));
memset(&stack_saved_303, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_304, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_305, 0, sizeof(struct sClass*));
memset(&class_name_306, 0, sizeof(char*));
memset(&fun_name_307, 0, sizeof(char*));
right_value241 = (void*)0;
memset(&type2_308, 0, sizeof(struct sType*));
memset(&cloner_309, 0, sizeof(struct sFun*));
memset(&fun_name2_310, 0, sizeof(char*));
right_value242 = (void*)0;
memset(&none_generics_name_311, 0, sizeof(char*));
right_value243 = (void*)0;
memset(&obj_type_312, 0, sizeof(struct sType*));
right_value244 = (void*)0;
right_value245 = (void*)0;
memset(&fun_name3_313, 0, sizeof(char*));
memset(&generics_fun_314, 0, sizeof(struct sGenericsFun*));
right_value246 = (void*)0;
right_value247 = (void*)0;
memset(&i_315, 0, sizeof(int));
right_value248 = (void*)0;
memset(&new_fun_name_316, 0, sizeof(char*));
right_value249 = (void*)0;
right_value250 = (void*)0;
memset(&fun_317, 0, sizeof(struct sFun*));
memset(&new_fun_name_318, 0, sizeof(char*));
memset(&fun_317, 0, sizeof(struct sFun*));
memset(&new_fun_name_318, 0, sizeof(char*));
    # 993 "04heap.c"
    # 990 "04heap.c"
    if(type->mNoSolvedGenericsType->v1) {
        # 991 "04heap.c"
        type=type->mNoSolvedGenericsType->v1;
    }
    # 994 "04heap.c"
    result_302=((void*)0);
    # 994 "04heap.c"
    stack_saved_303=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    # 995 "04heap.c"
    right_value_objects_304=info->right_value_objects;
    # 997 "04heap.c"
    klass_305=type->mClass;
    # 999 "04heap.c"
    class_name_306=klass_305->mName;
    # 1001 "04heap.c"
    fun_name_307="operator_equals";
    # 1003 "04heap.c"
    type2_308=(struct sType*)come_increment_ref_count(((struct sType*)(right_value241=sType_clone(type))));
    come_call_finalizer3(right_value241,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 1004 "04heap.c"
    type2_308->mHeap=(_Bool)0;
    # 1006 "04heap.c"
    cloner_309=((void*)0);
    # 1007 "04heap.c"
    # 1045 "04heap.c"
    # 1008 "04heap.c"
    if(_if_conditional349=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional349) {
        # 1009 "04heap.c"
        none_generics_name_311=(char*)come_increment_ref_count(((char*)(right_value242=get_none_generics_name(type->mClass->mName))));
        right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1011 "04heap.c"
        obj_type_312=(struct sType*)come_increment_ref_count(((struct sType*)(right_value243=solve_generics(type,info->generics_type,info))));
        come_call_finalizer3(right_value243,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 1013 "04heap.c"
        __dec_obj89=fun_name2_310;
        fun_name2_310=(char*)come_increment_ref_count(((char*)(right_value244=create_method_name(obj_type_312,(_Bool)0,fun_name_307,info,(_Bool)1))));
        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1014 "04heap.c"
        fun_name3_313=(char*)come_increment_ref_count(((char*)(right_value245=xsprintf("%s_%s",none_generics_name_311,fun_name_307))));
        right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1016 "04heap.c"
        generics_fun_314=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_313,((void*)0));
        # 1024 "04heap.c"
        # 1018 "04heap.c"
        if(generics_fun_314) {
            # 1022 "04heap.c"
            # 1019 "04heap.c"
            if(_if_conditional351=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value246=__builtin_string(fun_name2_310)))),generics_fun_314,obj_type_312,info),            right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional351) {
                # 1020 "04heap.c"
                __result133__ = (_Bool)0;
                none_generics_name_311 = come_decrement_ref_count2(none_generics_name_311, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_312,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_313 = come_decrement_ref_count2(fun_name3_313, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_302 = come_decrement_ref_count2(result_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(stack_saved_303,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_308,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_310 = come_decrement_ref_count2(fun_name2_310, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result133__;
            }
        }
        # 1024 "04heap.c"
        cloner_309=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_310);
        none_generics_name_311 = come_decrement_ref_count2(none_generics_name_311, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_312,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_313 = come_decrement_ref_count2(fun_name3_313, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 1027 "04heap.c"
        __dec_obj90=fun_name2_310;
        fun_name2_310=(char*)come_increment_ref_count(((char*)(right_value247=create_method_name(type,(_Bool)0,fun_name_307,info,(_Bool)1))));
        __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1029 "04heap.c"
        # 1040 "04heap.c"
        for(        i_315=128-1;        i_315>=1;        i_315--        ){
            # 1031 "04heap.c"
            new_fun_name_316=(char*)come_increment_ref_count(((char*)(right_value248=xsprintf("%s_v%d",fun_name2_310,i_315))));
            right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1032 "04heap.c"
            cloner_309=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_316);
            # 1038 "04heap.c"
            # 1034 "04heap.c"
            if(cloner_309) {
                # 1035 "04heap.c"
                __dec_obj91=fun_name2_310;
                fun_name2_310=(char*)come_increment_ref_count(((char*)(right_value249=__builtin_string(new_fun_name_316))));
                __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1036 "04heap.c"
                new_fun_name_316 = come_decrement_ref_count2(new_fun_name_316, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_316 = come_decrement_ref_count2(new_fun_name_316, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 1043 "04heap.c"
        # 1040 "04heap.c"
        if(_if_conditional353=cloner_309==((void*)0),        _if_conditional353) {
            # 1041 "04heap.c"
            cloner_309=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_310);
        }
    }
    # 1053 "04heap.c"
    # 1045 "04heap.c"
    if(_if_conditional354=cloner_309==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,    _if_conditional354) {
        # 1047 "04heap.c"
        multiple_assign_var10=((struct tuple2$2sFunpcharph*)(right_value250=create_operator_equals_automatically(type,fun_name_307,info)));
        fun_317=multiple_assign_var10->v1;
        new_fun_name_318=(char*)come_increment_ref_count(multiple_assign_var10->v2);
        come_call_finalizer3(right_value250,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 1049 "04heap.c"
        __dec_obj92=fun_name2_310;
        fun_name2_310=(char*)come_increment_ref_count(new_fun_name_318);
        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        # 1050 "04heap.c"
        cloner_309=fun_317;
        new_fun_name_318 = come_decrement_ref_count2(new_fun_name_318, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 1053 "04heap.c"
    __dec_obj93=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_304);
    come_call_finalizer3(__dec_obj93,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    # 1054 "04heap.c"
    __dec_obj94=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_303);
    come_call_finalizer3(__dec_obj94,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    # 1056 "04heap.c"
    __result134__ = (_Bool)1;
    result_302 = come_decrement_ref_count2(result_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_303,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_308,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_310 = come_decrement_ref_count2(fun_name2_310, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result134__;
    result_302 = come_decrement_ref_count2(result_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_303,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_308,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_310 = come_decrement_ref_count2(fun_name2_310, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional355;
char* result_319;
struct list$1CVALUEph* stack_saved_320;
struct list$1sRightValueObjectph* right_value_objects_321;
struct sClass* klass_322;
char* class_name_323;
char* fun_name_324;
void* right_value251;
struct sType* type2_325;
struct sFun* cloner_326;
char* fun_name2_327;
_Bool _if_conditional356;
void* right_value252;
char* none_generics_name_328;
void* right_value253;
struct sType* obj_type_329;
void* right_value254;
char* __dec_obj95;
void* right_value255;
char* fun_name3_330;
struct sGenericsFun* generics_fun_331;
_Bool _if_conditional357;
void* right_value256;
_Bool _if_conditional358;
_Bool __result135__;
void* right_value257;
char* __dec_obj96;
int i_332;
void* right_value258;
char* new_fun_name_333;
_Bool _if_conditional359;
void* right_value259;
char* __dec_obj97;
_Bool _if_conditional360;
_Bool _if_conditional361;
void* right_value260;
struct tuple2$2sFunpcharph* multiple_assign_var11;
struct sFun* fun_334;
char* new_fun_name_335;
char* __dec_obj98;
struct list$1sRightValueObjectph* __dec_obj99;
struct list$1CVALUEph* __dec_obj100;
_Bool __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_319, 0, sizeof(char*));
memset(&stack_saved_320, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_321, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_322, 0, sizeof(struct sClass*));
memset(&class_name_323, 0, sizeof(char*));
memset(&fun_name_324, 0, sizeof(char*));
right_value251 = (void*)0;
memset(&type2_325, 0, sizeof(struct sType*));
memset(&cloner_326, 0, sizeof(struct sFun*));
memset(&fun_name2_327, 0, sizeof(char*));
right_value252 = (void*)0;
memset(&none_generics_name_328, 0, sizeof(char*));
right_value253 = (void*)0;
memset(&obj_type_329, 0, sizeof(struct sType*));
right_value254 = (void*)0;
right_value255 = (void*)0;
memset(&fun_name3_330, 0, sizeof(char*));
memset(&generics_fun_331, 0, sizeof(struct sGenericsFun*));
right_value256 = (void*)0;
right_value257 = (void*)0;
memset(&i_332, 0, sizeof(int));
right_value258 = (void*)0;
memset(&new_fun_name_333, 0, sizeof(char*));
right_value259 = (void*)0;
right_value260 = (void*)0;
memset(&fun_334, 0, sizeof(struct sFun*));
memset(&new_fun_name_335, 0, sizeof(char*));
memset(&fun_334, 0, sizeof(struct sFun*));
memset(&new_fun_name_335, 0, sizeof(char*));
    # 1064 "04heap.c"
    # 1061 "04heap.c"
    if(type->mNoSolvedGenericsType->v1) {
        # 1062 "04heap.c"
        type=type->mNoSolvedGenericsType->v1;
    }
    # 1065 "04heap.c"
    result_319=((void*)0);
    # 1065 "04heap.c"
    stack_saved_320=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    # 1066 "04heap.c"
    right_value_objects_321=info->right_value_objects;
    # 1068 "04heap.c"
    klass_322=type->mClass;
    # 1070 "04heap.c"
    class_name_323=klass_322->mName;
    # 1072 "04heap.c"
    fun_name_324="operator_not_equals";
    # 1074 "04heap.c"
    type2_325=(struct sType*)come_increment_ref_count(((struct sType*)(right_value251=sType_clone(type))));
    come_call_finalizer3(right_value251,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 1075 "04heap.c"
    type2_325->mHeap=(_Bool)0;
    # 1077 "04heap.c"
    cloner_326=((void*)0);
    # 1078 "04heap.c"
    # 1116 "04heap.c"
    # 1079 "04heap.c"
    if(_if_conditional356=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional356) {
        # 1080 "04heap.c"
        none_generics_name_328=(char*)come_increment_ref_count(((char*)(right_value252=get_none_generics_name(type->mClass->mName))));
        right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1082 "04heap.c"
        obj_type_329=(struct sType*)come_increment_ref_count(((struct sType*)(right_value253=solve_generics(type,info->generics_type,info))));
        come_call_finalizer3(right_value253,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 1084 "04heap.c"
        __dec_obj95=fun_name2_327;
        fun_name2_327=(char*)come_increment_ref_count(((char*)(right_value254=create_method_name(obj_type_329,(_Bool)0,fun_name_324,info,(_Bool)1))));
        __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1085 "04heap.c"
        fun_name3_330=(char*)come_increment_ref_count(((char*)(right_value255=xsprintf("%s_%s",none_generics_name_328,fun_name_324))));
        right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1087 "04heap.c"
        generics_fun_331=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_330,((void*)0));
        # 1095 "04heap.c"
        # 1089 "04heap.c"
        if(generics_fun_331) {
            # 1093 "04heap.c"
            # 1090 "04heap.c"
            if(_if_conditional358=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value256=__builtin_string(fun_name2_327)))),generics_fun_331,obj_type_329,info),            right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional358) {
                # 1091 "04heap.c"
                __result135__ = (_Bool)0;
                none_generics_name_328 = come_decrement_ref_count2(none_generics_name_328, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_329,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_330 = come_decrement_ref_count2(fun_name3_330, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_319 = come_decrement_ref_count2(result_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(stack_saved_320,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_325,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_327 = come_decrement_ref_count2(fun_name2_327, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result135__;
            }
        }
        # 1095 "04heap.c"
        cloner_326=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_327);
        none_generics_name_328 = come_decrement_ref_count2(none_generics_name_328, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_329,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_330 = come_decrement_ref_count2(fun_name3_330, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 1098 "04heap.c"
        __dec_obj96=fun_name2_327;
        fun_name2_327=(char*)come_increment_ref_count(((char*)(right_value257=create_method_name(type,(_Bool)0,fun_name_324,info,(_Bool)1))));
        __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1100 "04heap.c"
        # 1111 "04heap.c"
        for(        i_332=128-1;        i_332>=1;        i_332--        ){
            # 1102 "04heap.c"
            new_fun_name_333=(char*)come_increment_ref_count(((char*)(right_value258=xsprintf("%s_v%d",fun_name2_327,i_332))));
            right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1103 "04heap.c"
            cloner_326=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_333);
            # 1109 "04heap.c"
            # 1105 "04heap.c"
            if(cloner_326) {
                # 1106 "04heap.c"
                __dec_obj97=fun_name2_327;
                fun_name2_327=(char*)come_increment_ref_count(((char*)(right_value259=__builtin_string(new_fun_name_333))));
                __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1107 "04heap.c"
                new_fun_name_333 = come_decrement_ref_count2(new_fun_name_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_333 = come_decrement_ref_count2(new_fun_name_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 1114 "04heap.c"
        # 1111 "04heap.c"
        if(_if_conditional360=cloner_326==((void*)0),        _if_conditional360) {
            # 1112 "04heap.c"
            cloner_326=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_327);
        }
    }
    # 1124 "04heap.c"
    # 1116 "04heap.c"
    if(_if_conditional361=cloner_326==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,    _if_conditional361) {
        # 1118 "04heap.c"
        multiple_assign_var11=((struct tuple2$2sFunpcharph*)(right_value260=create_operator_not_equals_automatically(type,fun_name_324,info)));
        fun_334=multiple_assign_var11->v1;
        new_fun_name_335=(char*)come_increment_ref_count(multiple_assign_var11->v2);
        come_call_finalizer3(right_value260,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 1120 "04heap.c"
        __dec_obj98=fun_name2_327;
        fun_name2_327=(char*)come_increment_ref_count(new_fun_name_335);
        __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
        # 1121 "04heap.c"
        cloner_326=fun_334;
        new_fun_name_335 = come_decrement_ref_count2(new_fun_name_335, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 1124 "04heap.c"
    __dec_obj99=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_321);
    come_call_finalizer3(__dec_obj99,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    # 1125 "04heap.c"
    __dec_obj100=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_320);
    come_call_finalizer3(__dec_obj100,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    # 1127 "04heap.c"
    __result136__ = (_Bool)1;
    result_319 = come_decrement_ref_count2(result_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_320,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_325,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_327 = come_decrement_ref_count2(fun_name2_327, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result136__;
    result_319 = come_decrement_ref_count2(result_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_320,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_325,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_327 = come_decrement_ref_count2(fun_name2_327, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool existance_free_right_value_objects(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional362;
_Bool __result137__;
struct list$1sRightValueObjectph* right_value_objects_336;
struct list$1sRightValueObjectph* o2_saved_337;
struct sRightValueObject* it_338;
_Bool _if_conditional363;
_Bool _if_conditional364;
_Bool __result138__;
_Bool __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&right_value_objects_336, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&o2_saved_337, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_338, 0, sizeof(struct sRightValueObject*));
    # 1135 "04heap.c"
    # 1132 "04heap.c"
    if(gComeGC) {
        # 1133 "04heap.c"
        __result137__ = (_Bool)0;
        return __result137__;
    }
    # 1135 "04heap.c"
    right_value_objects_336=info->right_value_objects;
    # 1145 "04heap.c"
    for(    o2_saved_337=(right_value_objects_336),it_338=list$1sRightValueObjectph_begin((o2_saved_337));    !list$1sRightValueObjectph_end((o2_saved_337));    it_338=list$1sRightValueObjectph_next((o2_saved_337))    ){
        # 1143 "04heap.c"
        # 1138 "04heap.c"
        if(_if_conditional363=it_338&&!it_338->mFreed,        _if_conditional363) {
            # 1142 "04heap.c"
            # 1139 "04heap.c"
            if(_if_conditional364=string_operator_equals(it_338->mFunName,info->come_fun->mName)&&it_338->mBlockLevel==info->block_level,            _if_conditional364) {
                # 1140 "04heap.c"
                __result138__ = (_Bool)1;
                return __result138__;
            }
        }
    }
    # 1145 "04heap.c"
    __result139__ = (_Bool)0;
    return __result139__;
}

void free_right_value_objects(struct sInfo* info, _Bool comma){
void* __result_obj__;
_Bool _if_conditional365;
_Bool free_right_value_339;
struct list$1sRightValueObjectph* right_value_objects_340;
int n_341;
struct list$1sRightValueObjectph* o2_saved_342;
struct sRightValueObject* it_343;
_Bool _if_conditional366;
_Bool _if_conditional367;
void* right_value261;
struct sType* type_344;
void* right_value262;
struct sType* __dec_obj101;
memset(&__result_obj__, 0, sizeof(void*));
memset(&free_right_value_339, 0, sizeof(_Bool));
memset(&right_value_objects_340, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&n_341, 0, sizeof(int));
memset(&o2_saved_342, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_343, 0, sizeof(struct sRightValueObject*));
right_value261 = (void*)0;
memset(&type_344, 0, sizeof(struct sType*));
right_value262 = (void*)0;
    # 1153 "04heap.c"
    # 1150 "04heap.c"
    if(gComeGC) {
        # 1151 "04heap.c"
        return;
    }
    # 1153 "04heap.c"
    free_right_value_339=(_Bool)0;
    # 1154 "04heap.c"
    right_value_objects_340=info->right_value_objects;
    # 1156 "04heap.c"
    n_341=0;
    # 1175 "04heap.c"
    for(    o2_saved_342=(right_value_objects_340),it_343=list$1sRightValueObjectph_begin((o2_saved_342));    !list$1sRightValueObjectph_end((o2_saved_342));    it_343=list$1sRightValueObjectph_next((o2_saved_342))    ){
        # 1173 "04heap.c"
        # 1158 "04heap.c"
        if(_if_conditional366=it_343&&!it_343->mFreed,        _if_conditional366) {
            # 1171 "04heap.c"
            # 1159 "04heap.c"
            if(_if_conditional367=string_operator_equals(it_343->mFunName,info->come_fun->mName)&&it_343->mBlockLevel==info->block_level,            _if_conditional367) {
                # 1160 "04heap.c"
                type_344=(struct sType*)come_increment_ref_count(((struct sType*)(right_value261=sType_clone(it_343->mType))));
                come_call_finalizer3(right_value261,sType_finalize, 0, 1, 0, 0, __result_obj__);
                # 1162 "04heap.c"
                __dec_obj101=type_344;
                type_344=(struct sType*)come_increment_ref_count(((struct sType*)(right_value262=solve_type(type_344,info->generics_type,info->method_generics_types,info))));
                come_call_finalizer3(__dec_obj101,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value262,sType_finalize, 0, 1, 0, 0, __result_obj__);
                # 1165 "04heap.c"
                free_object(type_344,it_343->mVarName,(_Bool)1,(_Bool)0,info,comma,(_Bool)0,(_Bool)0);
                # 1168 "04heap.c"
                it_343->mFreed=(_Bool)1;
                # 1169 "04heap.c"
                free_right_value_339=(_Bool)1;
                come_call_finalizer3(type_344,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        # 1173 "04heap.c"
        n_341++;
    }
}

_Bool is_right_values(int right_value_num, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional368;
_Bool __result140__;
struct list$1sRightValueObjectph* o2_saved_345;
struct sRightValueObject* it_346;
_Bool _if_conditional369;
_Bool __result141__;
_Bool __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&o2_saved_345, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_346, 0, sizeof(struct sRightValueObject*));
    # 1182 "04heap.c"
    # 1179 "04heap.c"
    if(gComeGC) {
        # 1180 "04heap.c"
        __result140__ = (_Bool)0;
        return __result140__;
    }
    # 1188 "04heap.c"
    for(    o2_saved_345=(struct list$1sRightValueObjectph*)come_increment_ref_count((info->right_value_objects)),it_346=list$1sRightValueObjectph_begin((o2_saved_345));    !list$1sRightValueObjectph_end((o2_saved_345));    it_346=list$1sRightValueObjectph_next((o2_saved_345))    ){
        # 1186 "04heap.c"
        # 1183 "04heap.c"
        if(_if_conditional369=it_346->mID==right_value_num,        _if_conditional369) {
            # 1184 "04heap.c"
            __result141__ = (_Bool)1;
            come_call_finalizer3(o2_saved_345,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result141__;
        }
    }
    come_call_finalizer3(o2_saved_345,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    # 1188 "04heap.c"
    __result142__ = (_Bool)0;
    return __result142__;
}

struct sVar* get_variable_from_table(struct sVarTable* table, char* name){
void* __result_obj__;
struct sVarTable* it_347;
struct sVar* var__351;
_Bool _if_conditional378;
struct sVar* __result147__;
struct sVar* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_347, 0, sizeof(struct sVarTable*));
memset(&var__351, 0, sizeof(struct sVar*));
    # 1193 "04heap.c"
    it_347=table;
    # 1205 "04heap.c"
    while(it_347) {
        # 1196 "04heap.c"
        var__351=map$2charphsVarphp_operator_load_element(it_347->mVars,name);
        # 1202 "04heap.c"
        # 1198 "04heap.c"
        if(var__351) {
            # 1199 "04heap.c"
            __result147__ = __result_obj__ = var__351;
            return __result147__;
        }
        # 1202 "04heap.c"
        it_347=it_347->mParent;
    }
    # 1205 "04heap.c"
    __result148__ = __result_obj__ = ((void*)0);
    return __result148__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
struct sVar* default_value_348;
unsigned int hash_349;
unsigned int it_350;
_Bool _while_condtional32;
_Bool _if_conditional370;
_Bool _if_conditional371;
struct sVar* __result143__;
_Bool _if_conditional376;
_Bool _if_conditional377;
struct sVar* __result144__;
struct sVar* __result145__;
struct sVar* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_348, 0, sizeof(struct sVar*));
memset(&hash_349, 0, sizeof(unsigned int));
memset(&it_350, 0, sizeof(unsigned int));
            # 1519 "./neo-c.h"
            # 1520 "./neo-c.h"
            memset(&default_value_348,0,sizeof(struct sVar*));
            # 1522 "./neo-c.h"
            hash_349=string_get_hash_key(((char*)key))%self->size;
            # 1523 "./neo-c.h"
            it_350=hash_349;
            # 1547 "./neo-c.h"
            while(_while_condtional32=(_Bool)1,            _while_condtional32) {
                # 1545 "./neo-c.h"
                # 1526 "./neo-c.h"
                if(_if_conditional370=self->item_existance[it_350],                _if_conditional370) {
                    # 1533 "./neo-c.h"
                    # 1528 "./neo-c.h"
                    if(_if_conditional371=string_equals(self->keys[it_350],key),                    _if_conditional371) {
                        # 1530 "./neo-c.h"
                        __result143__ = __result_obj__ = self->items[it_350];
                        come_call_finalizer3(default_value_348,sVar_finalize, 0, 0, 0, 0, (void*)0);
                        return __result143__;
                    }
                    # 1533 "./neo-c.h"
                    it_350++;
                    # 1541 "./neo-c.h"
                    # 1535 "./neo-c.h"
                    if(_if_conditional376=it_350>=self->size,                    _if_conditional376) {
                        # 1536 "./neo-c.h"
                        it_350=0;
                    }
                    else {
                        # 1541 "./neo-c.h"
                        # 1538 "./neo-c.h"
                        if(_if_conditional377=it_350==hash_349,                        _if_conditional377) {
                            # 1539 "./neo-c.h"
                            __result144__ = __result_obj__ = default_value_348;
                            come_call_finalizer3(default_value_348,sVar_finalize, 0, 0, 1, 0, (void*)0);
                            return __result144__;
                        }
                    }
                }
                else {
                    # 1543 "./neo-c.h"
                    __result145__ = __result_obj__ = default_value_348;
                    come_call_finalizer3(default_value_348,sVar_finalize, 0, 0, 1, 0, (void*)0);
                    return __result145__;
                }
            }
            # 1547 "./neo-c.h"
            __result146__ = __result_obj__ = default_value_348;
            come_call_finalizer3(default_value_348,sVar_finalize, 0, 0, 1, 0, (void*)0);
            return __result146__;
            come_call_finalizer3(default_value_348,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional372;
_Bool _if_conditional373;
_Bool _if_conditional374;
_Bool _if_conditional375;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "sVar_finalize"
                            # 0 "sVar_finalize"
                            if(_if_conditional372=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional372) {
                                # 0 "sVar_finalize"
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 2 "sVar_finalize"
                            # 1 "sVar_finalize"
                            if(_if_conditional373=self!=((void*)0)&&self->mCValueName!=((void*)0),                            _if_conditional373) {
                                # 1 "sVar_finalize"
                                self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 3 "sVar_finalize"
                            # 2 "sVar_finalize"
                            if(_if_conditional374=self!=((void*)0)&&self->mType!=((void*)0),                            _if_conditional374) {
                                # 2 "sVar_finalize"
                                come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 4 "sVar_finalize"
                            # 3 "sVar_finalize"
                            if(_if_conditional375=self!=((void*)0)&&self->mFunName!=((void*)0),                            _if_conditional375) {
                                # 3 "sVar_finalize"
                                self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional379;
struct map$2charphsVarph* o2_saved_352;
char* it_355;
struct sVar* p_358;
struct sType* type_359;
struct sClass* klass_360;
_Bool _if_conditional384;
_Bool _if_conditional385;
_Bool _if_conditional386;
_Bool _if_conditional387;
void* right_value263;
char* c_value_361;
void* right_value264;
struct sType* type2_362;
memset(&__result_obj__, 0, sizeof(void*));
memset(&o2_saved_352, 0, sizeof(struct map$2charphsVarph*));
memset(&it_355, 0, sizeof(char*));
memset(&p_358, 0, sizeof(struct sVar*));
memset(&type_359, 0, sizeof(struct sType*));
memset(&klass_360, 0, sizeof(struct sClass*));
right_value263 = (void*)0;
memset(&c_value_361, 0, sizeof(char*));
right_value264 = (void*)0;
memset(&type2_362, 0, sizeof(struct sType*));
    # 1213 "04heap.c"
    # 1210 "04heap.c"
    if(gComeGC) {
        # 1211 "04heap.c"
        return;
    }
    # 1237 "04heap.c"
    for(    o2_saved_352=(struct map$2charphsVarph*)come_increment_ref_count((table->mVars)),it_355=map$2charphsVarph_begin((o2_saved_352));    !map$2charphsVarph_end((o2_saved_352));    it_355=map$2charphsVarph_next((o2_saved_352))    ){
        # 1214 "04heap.c"
        p_358=map$2charphsVarphp_operator_load_element(table->mVars,it_355);
        # 1215 "04heap.c"
        type_359=p_358->mType;
        # 1216 "04heap.c"
        klass_360=type_359->mClass;
        # 1236 "04heap.c"
        # 1218 "04heap.c"
        if(_if_conditional384=ret_value!=((void*)0)&&p_358->mCValueName!=((void*)0)&&string_operator_equals(p_358->mCValueName,ret_value->mCValueName)&&type_359->mHeap,        _if_conditional384) {
            # 1220 "04heap.c"
            free_object(p_358->mType,p_358->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)1,(_Bool)0);
        }
        else {
            # 1236 "04heap.c"
            # 1222 "04heap.c"
            if(_if_conditional385=type_359->mHeap&&p_358->mCValueName,            _if_conditional385) {
                # 1229 "04heap.c"
                # 1223 "04heap.c"
                if(type_359->mFunctionParam) {
                    # 1224 "04heap.c"
                    free_object(p_358->mType,p_358->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
                else {
                    # 1227 "04heap.c"
                    free_object(p_358->mType,p_358->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
            }
            else {
                # 1236 "04heap.c"
                # 1230 "04heap.c"
                if(_if_conditional387=klass_360->mStruct&&p_358->mCValueName&&type_359->mAllocaValue&&!type_359->mNoCallingDestructor,                _if_conditional387) {
                    # 1231 "04heap.c"
                    c_value_361=(char*)come_increment_ref_count(((char*)(right_value263=xsprintf("(&%s)",p_358->mCValueName))));
                    right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1232 "04heap.c"
                    type2_362=(struct sType*)come_increment_ref_count(((struct sType*)(right_value264=sType_clone(type_359))));
                    come_call_finalizer3(right_value264,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 1233 "04heap.c"
                    type2_362->mPointerNum++;
                    # 1234 "04heap.c"
                    free_object(type2_362,c_value_361,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    c_value_361 = come_decrement_ref_count2(c_value_361, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type2_362,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
        }
    }
    come_call_finalizer3(o2_saved_352,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional380;
char* result_353;
char* __result149__;
_Bool _if_conditional381;
char* __result150__;
char* result_354;
char* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_353, 0, sizeof(char*));
memset(&result_354, 0, sizeof(char*));
        # 1279 "./neo-c.h"
        # 1274 "./neo-c.h"
        if(_if_conditional380=self==((void*)0),        _if_conditional380) {
            # 1275 "./neo-c.h"
            # 1276 "./neo-c.h"
            memset(&result_353,0,sizeof(char*));
            # 1277 "./neo-c.h"
            __result149__ = __result_obj__ = result_353;
            return __result149__;
        }
        # 1279 "./neo-c.h"
        self->key_list->it=self->key_list->head;
        # 1285 "./neo-c.h"
        # 1281 "./neo-c.h"
        if(self->key_list->it) {
            # 1282 "./neo-c.h"
            __result150__ = __result_obj__ = self->key_list->it->item;
            return __result150__;
        }
        # 1285 "./neo-c.h"
        # 1286 "./neo-c.h"
        memset(&result_354,0,sizeof(char*));
        # 1287 "./neo-c.h"
        __result151__ = __result_obj__ = result_354;
        return __result151__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result152__;
memset(&__result_obj__, 0, sizeof(void*));
        # 1308 "./neo-c.h"
        __result152__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
        return __result152__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional382;
char* result_356;
char* __result153__;
_Bool _if_conditional383;
char* __result154__;
char* result_357;
char* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_356, 0, sizeof(char*));
memset(&result_357, 0, sizeof(char*));
        # 1296 "./neo-c.h"
        # 1291 "./neo-c.h"
        if(_if_conditional382=self==((void*)0)||self->key_list->it==((void*)0),        _if_conditional382) {
            # 1292 "./neo-c.h"
            # 1293 "./neo-c.h"
            memset(&result_356,0,sizeof(char*));
            # 1294 "./neo-c.h"
            __result153__ = __result_obj__ = result_356;
            return __result153__;
        }
        # 1296 "./neo-c.h"
        self->key_list->it=self->key_list->it->next;
        # 1302 "./neo-c.h"
        # 1298 "./neo-c.h"
        if(self->key_list->it) {
            # 1299 "./neo-c.h"
            __result154__ = __result_obj__ = self->key_list->it->item;
            return __result154__;
        }
        # 1302 "./neo-c.h"
        # 1303 "./neo-c.h"
        memset(&result_357,0,sizeof(char*));
        # 1304 "./neo-c.h"
        __result155__ = __result_obj__ = result_357;
        return __result155__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_363;
_Bool _if_conditional388;
_Bool _if_conditional389;
int i_364;
_Bool _if_conditional390;
_Bool _if_conditional391;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_363, 0, sizeof(int));
memset(&i_364, 0, sizeof(int));
        # 1112 "./neo-c.h"
        for(        i_363=0;        i_363<self->size;        i_363++        ){
            # 1111 "./neo-c.h"
            # 1106 "./neo-c.h"
            if(_if_conditional388=self->item_existance[i_363],            _if_conditional388) {
                # 1110 "./neo-c.h"
                # 1107 "./neo-c.h"
                if(_if_conditional389=1,                _if_conditional389) {
                    # 1108 "./neo-c.h"
                    come_call_finalizer3(self->items[i_363],sVar_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
        }
        # 1112 "./neo-c.h"
        come_free((char*)self->items);
        # 1121 "./neo-c.h"
        for(        i_364=0;        i_364<self->size;        i_364++        ){
            # 1120 "./neo-c.h"
            # 1115 "./neo-c.h"
            if(_if_conditional390=self->item_existance[i_364],            _if_conditional390) {
                # 1119 "./neo-c.h"
                # 1116 "./neo-c.h"
                if(_if_conditional391=1,                _if_conditional391) {
                    # 1117 "./neo-c.h"
                    self->keys[i_364] = come_decrement_ref_count2(self->keys[i_364], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        # 1121 "./neo-c.h"
        come_free((char*)self->keys);
        # 1123 "./neo-c.h"
        come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
        # 1125 "./neo-c.h"
        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_365;
_Bool _while_condtional33;
struct list_item$1charp* prev_it_366;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_365, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_366, 0, sizeof(struct list_item$1charp*));
            # 114 "./neo-c.h"
            it_365=self->head;
            # 120 "./neo-c.h"
            while(_while_condtional33=it_365!=((void*)0),            _while_condtional33) {
                # 116 "./neo-c.h"
                prev_it_366=it_365;
                # 117 "./neo-c.h"
                it_365=it_365->next;
                # 118 "./neo-c.h"
                come_call_finalizer3(prev_it_366,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
void* __result_obj__;
_Bool _if_conditional392;
struct sVarTable* it_367;
_Bool _if_conditional393;
_Bool _while_condtional34;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_367, 0, sizeof(struct sVarTable*));
    # 1244 "04heap.c"
    # 1241 "04heap.c"
    if(gComeGC) {
        # 1242 "04heap.c"
        return;
    }
    # 1244 "04heap.c"
    it_367=info->lv_table;
    # 1257 "04heap.c"
    # 1246 "04heap.c"
    if(_if_conditional393=it_367==info->come_fun->mBlock->mVarTable,    _if_conditional393) {
        # 1247 "04heap.c"
        free_objects(it_367,ret_value,info);
    }
    else {
        # 1255 "04heap.c"
        while(_while_condtional34=it_367!=info->come_fun->mBlock->mVarTable,        _while_condtional34) {
            # 1251 "04heap.c"
            free_objects(it_367,ret_value,info);
            # 1253 "04heap.c"
            it_367=it_367->mParent;
        }
        # 1255 "04heap.c"
        free_objects(it_367,ret_value,info);
    }
}

void free_objects_on_break(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional394;
struct sVar* ret_value_368;
struct sVarTable* current_loop_vtable_369;
_Bool _if_conditional395;
struct sVarTable* it_370;
_Bool _while_condtional35;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ret_value_368, 0, sizeof(struct sVar*));
memset(&current_loop_vtable_369, 0, sizeof(struct sVarTable*));
memset(&it_370, 0, sizeof(struct sVarTable*));
    # 1264 "04heap.c"
    # 1261 "04heap.c"
    if(gComeGC) {
        # 1262 "04heap.c"
        return;
    }
    # 1264 "04heap.c"
    ret_value_368=((void*)0);
    # 1266 "04heap.c"
    current_loop_vtable_369=info->current_loop_vtable;
    # 1277 "04heap.c"
    # 1268 "04heap.c"
    if(_if_conditional395=current_loop_vtable_369!=((void*)0),    _if_conditional395) {
        # 1269 "04heap.c"
        it_370=info->lv_table;
        # 1275 "04heap.c"
        while(_while_condtional35=it_370!=current_loop_vtable_369,        _while_condtional35) {
            # 1271 "04heap.c"
            free_objects(it_370,ret_value_368,info);
            # 1273 "04heap.c"
            it_370=it_370->mParent;
        }
        # 1275 "04heap.c"
        free_objects(it_370,ret_value_368,info);
    }
}

char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional396;
_Bool _if_conditional397;
void* right_value265;
void* right_value266;
void* right_value267;
void* right_value268;
void* right_value269;
char* __result156__;
_Bool _if_conditional398;
static int n_371=0;
void* right_value270;
char* var_name_372;
void* right_value271;
void* right_value272;
void* right_value273;
void* right_value274;
void* right_value275;
void* right_value276;
void* right_value277;
void* right_value278;
char* __result157__;
void* right_value279;
char* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
right_value265 = (void*)0;
right_value266 = (void*)0;
right_value267 = (void*)0;
right_value268 = (void*)0;
right_value269 = (void*)0;
right_value270 = (void*)0;
memset(&var_name_372, 0, sizeof(char*));
right_value271 = (void*)0;
right_value272 = (void*)0;
right_value273 = (void*)0;
right_value274 = (void*)0;
right_value275 = (void*)0;
right_value276 = (void*)0;
right_value277 = (void*)0;
right_value278 = (void*)0;
right_value279 = (void*)0;
    # 1295 "04heap.c"
    # 1281 "04heap.c"
    if(_if_conditional396=string_operator_equals(type->mClass->mName,"void")&&type->mPointerNum==0,    _if_conditional396) {
        # 1285 "04heap.c"
        # 1282 "04heap.c"
        if(_if_conditional397=gComeDebug||type->mRecord,        _if_conditional397) {
            # 1283 "04heap.c"
            __result156__ = __result_obj__ = ((char*)(right_value269=xsprintf("(come_push_stackframe(\"\%s\", \%s,\%s),\%s,come_pop_stackframe())",((char*)(right_value265=string_to_string(info->sname))),((char*)(right_value266=int_to_string(info->sline))),((char*)(right_value267=int_to_string(gComeDebugStackFrameID++))),((char*)(right_value268=charp_to_string(c_value))))));
            right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value269 = come_decrement_ref_count2(right_value269, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result156__;
        }
    }
    else {
        # 1295 "04heap.c"
        # 1286 "04heap.c"
        if(_if_conditional398=gComeDebug||type->mRecord,        _if_conditional398) {
            # 1287 "04heap.c"
            # 1288 "04heap.c"
            ++n_371;
            # 1290 "04heap.c"
            var_name_372=(char*)come_increment_ref_count(((char*)(right_value270=xsprintf("__exception_result_var_b%d",n_371))));
            right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1291 "04heap.c"
            add_come_code_at_function_head(info,"%s;\n",((char*)(right_value271=make_define_var(type,var_name_372,(_Bool)0,info))));
            right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1292 "04heap.c"
            __result157__ = __result_obj__ = ((char*)(right_value278=xsprintf("(come_push_stackframe(\"\%s\", \%s, \%s),\%s=\%s, come_pop_stackframe(), \%s)",((char*)(right_value272=string_to_string(info->sname))),((char*)(right_value273=int_to_string(info->sline))),((char*)(right_value274=int_to_string(gComeDebugStackFrameID++))),((char*)(right_value275=string_to_string(var_name_372))),((char*)(right_value276=charp_to_string(c_value))),((char*)(right_value277=string_to_string(var_name_372))))));
            var_name_372 = come_decrement_ref_count2(var_name_372, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result157__;
            var_name_372 = come_decrement_ref_count2(var_name_372, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    # 1295 "04heap.c"
    __result158__ = __result_obj__ = ((char*)(right_value279=__builtin_string(c_value)));
    right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result158__;
}

