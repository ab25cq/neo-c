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
int gRightValueNum=0;

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










void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional21;
char* __dec_obj12;
_Bool _if_conditional22;
void* right_value79;
char* __exception_result_var_b51;
char* __dec_obj13;
_Bool _if_conditional23;
void* right_value80;
char* __exception_result_var_b52;
char* __dec_obj14;
void* right_value81;
char* __exception_result_var_b53;
char* __dec_obj15;
_Bool _if_conditional24;
void* right_value82;
char* __exception_result_var_b54;
char* __dec_obj16;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value80 = (void*)0;
right_value81 = (void*)0;
right_value82 = (void*)0;
    if(_if_conditional19=gComeGC||gComeC,    _if_conditional19) {
        return;
    }
    if(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value, "04heap.c", 8, 573)), "04heap.c", 8, 574))->var) {
        if(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value, "04heap.c", 9, 575)), "04heap.c", 9, 576))->var, "04heap.c", 9, 577)), "04heap.c", 9, 578))->mType, "04heap.c", 9, 579)), "04heap.c", 9, 580))->mDelegate) {
            __dec_obj12=((struct sVar*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value, "04heap.c", 10, 581)), "04heap.c", 10, 582))->var, "04heap.c", 10, 583)), "04heap.c", 10, 584))->mCValueName;
            ((struct sVar*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value, "04heap.c", 10, 581)), "04heap.c", 10, 582))->var, "04heap.c", 10, 583)), "04heap.c", 10, 584))->mCValueName=((void*)0);
            __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            if(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value, "04heap.c", 12, 585)), "04heap.c", 12, 586))->var, "04heap.c", 12, 587)), "04heap.c", 12, 588))->mType, "04heap.c", 12, 589)), "04heap.c", 12, 590))->mShare) {
                __dec_obj13=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value, "04heap.c", 13, 591)), "04heap.c", 13, 592))->c_value;
                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value, "04heap.c", 13, 591)), "04heap.c", 13, 592))->c_value=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 13, 597),__exception_result_var_b51=((char*)(right_value79=increment_ref_count_object(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value, "04heap.c", 13, 593)), "04heap.c", 13, 594))->type,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value, "04heap.c", 13, 595)), "04heap.c", 13, 596))->c_value,info))), come_pop_stackframe(), __exception_result_var_b51));
                __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                if(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value, "04heap.c", 15, 598)), "04heap.c", 15, 599))->var, "04heap.c", 15, 600)), "04heap.c", 15, 601))->mType, "04heap.c", 15, 602)), "04heap.c", 15, 603))->mClone) {
                    __dec_obj14=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value, "04heap.c", 16, 604)), "04heap.c", 16, 605))->c_value;
                    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value, "04heap.c", 16, 604)), "04heap.c", 16, 605))->c_value=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 16, 610),__exception_result_var_b52=((char*)(right_value80=increment_ref_count_object(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value, "04heap.c", 16, 606)), "04heap.c", 16, 607))->type,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value, "04heap.c", 16, 608)), "04heap.c", 16, 609))->c_value,info))), come_pop_stackframe(), __exception_result_var_b52));
                    __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    __dec_obj15=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value, "04heap.c", 19, 611)), "04heap.c", 19, 612))->c_value;
                    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value, "04heap.c", 19, 611)), "04heap.c", 19, 612))->c_value=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 19, 617),__exception_result_var_b53=((char*)(right_value81=increment_ref_count_object(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value, "04heap.c", 19, 613)), "04heap.c", 19, 614))->type,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value, "04heap.c", 19, 615)), "04heap.c", 19, 616))->c_value,info))), come_pop_stackframe(), __exception_result_var_b53));
                    __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
    }
    else {
        if(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value, "04heap.c", 23, 618)), "04heap.c", 23, 619))->type, "04heap.c", 23, 620)), "04heap.c", 23, 621))->mDelegate) {
        }
        else {
            __dec_obj16=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value, "04heap.c", 26, 622)), "04heap.c", 26, 623))->c_value;
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value, "04heap.c", 26, 622)), "04heap.c", 26, 623))->c_value=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 26, 628),__exception_result_var_b54=((char*)(right_value82=increment_ref_count_object(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value, "04heap.c", 26, 624)), "04heap.c", 26, 625))->type,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value, "04heap.c", 26, 626)), "04heap.c", 26, 627))->c_value,info))), come_pop_stackframe(), __exception_result_var_b54));
            __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
}

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
struct sType* __exception_result_var_b78;
void* right_value118;
struct sType* result_47;
_Bool _if_conditional120;
struct sType* __result70__;
int __exception_result_var_b79;
_Bool _if_conditional122;
struct sType* __result73__;
struct sClass* klass_78;
_Bool __exception_result_var_b80;
_Bool _if_conditional123;
void* right_value119;
struct sType* __exception_result_var_b81;
struct sType* result_type_79;
void* right_value120;
void* right_value121;
struct tuple1$1sTypeph* __exception_result_var_b82;
struct tuple1$1sTypeph* __dec_obj41;
struct list$1sTypeph* __exception_result_var_b83;
struct list$1sTypeph* o2_saved_82;
struct sType* __exception_result_var_b86;
struct sType* it_85;
_Bool __exception_result_var_b87;
struct sType* __exception_result_var_b90;
void* right_value122;
struct sType* __exception_result_var_b91;
struct sType* new_param_type_88;
struct sType* __exception_result_var_b92;
void* right_value126;
struct list$1sTypeph* __exception_result_var_b93;
int __exception_result_var_b94;
_Bool _if_conditional130;
int generics_number_92;
int __exception_result_var_b95;
_Bool _if_conditional131;
int __exception_result_var_b96;
struct list$1sNodeph* __exception_result_var_b97;
void* right_value127;
struct list$1sNodeph* array_num_93;
_Bool immutable__94;
int pointer_num_95;
_Bool heap_96;
_Bool guard__97;
_Bool no_heap_98;
_Bool no_calling_destructor_99;
_Bool null_value_100;
struct sType* __exception_result_var_b99;
struct sType* __exception_result_var_b100;
void* right_value128;
struct sType* __dec_obj45;
_Bool _if_conditional134;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional137;
_Bool _if_conditional138;
int __exception_result_var_b101;
_Bool _if_conditional140;
struct list$1sNodeph* __dec_obj46;
_Bool _if_conditional141;
_Bool _if_conditional142;
_Bool _if_conditional143;
int generics_number_104;
int __exception_result_var_b102;
_Bool _if_conditional144;
struct sType* __exception_result_var_b103;
struct sClass* klass2_105;
int generics_number2_106;
_Bool _if_conditional145;
struct list$1sNodeph* __exception_result_var_b104;
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
struct sType* __exception_result_var_b105;
struct sType* __exception_result_var_b106;
void* right_value130;
struct sType* __dec_obj47;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
_Bool _if_conditional151;
int __exception_result_var_b107;
_Bool _if_conditional152;
struct list$1sNodeph* __dec_obj48;
_Bool _if_conditional153;
_Bool _if_conditional154;
struct list$1sTypeph* __exception_result_var_b108;
struct list$1sTypeph* o2_saved_116;
struct sType* __exception_result_var_b109;
struct sType* it_117;
_Bool __exception_result_var_b110;
struct sType* __exception_result_var_b111;
void* right_value131;
struct sType* __exception_result_var_b112;
struct sType* type_118;
struct sType* __exception_result_var_b113;
void* right_value132;
struct list$1sTypeph* __exception_result_var_b114;
struct list$1sTypeph* __exception_result_var_b115;
struct list$1sTypeph* o2_saved_119;
struct sType* __exception_result_var_b116;
struct sType* it_120;
_Bool __exception_result_var_b117;
struct sType* __exception_result_var_b118;
void* right_value133;
struct sType* __exception_result_var_b119;
struct sType* type_121;
struct sType* __exception_result_var_b120;
void* right_value134;
struct list$1sTypeph* __exception_result_var_b121;
_Bool __exception_result_var_b122;
_Bool _if_conditional155;
void* right_value135;
char* __exception_result_var_b123;
char* new_name_122;
int __exception_result_var_b124;
struct sType* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value118 = (void*)0;
memset(&result_47, 0, sizeof(struct sType*));
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
    result_47=(struct sType*)come_increment_ref_count(((struct sType*)(right_value118=(come_push_stackframe("04heap.c", 33, 1218),__exception_result_var_b78=sType_clone(type), come_pop_stackframe(), __exception_result_var_b78))));
    come_call_finalizer3(right_value118,sType_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional120=generics_type==((void*)0),    _if_conditional120) {
        __result70__ = __result_obj__ = result_47;
        come_call_finalizer3(result_47,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result70__;
    }
    if(_if_conditional122=(come_push_stackframe("04heap.c", 37, 1225),__exception_result_var_b79=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(generics_type, "04heap.c", 37, 1219)), "04heap.c", 37, 1220))->mGenericsTypes, "04heap.c", 37, 1221)), "04heap.c", 37, 1222))), come_pop_stackframe(), __exception_result_var_b79)==0,    _if_conditional122) {
        __result73__ = __result_obj__ = result_47;
        come_call_finalizer3(result_47,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result73__;
    }
    klass_78=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 41, 1226)), "04heap.c", 41, 1227))->mClass;
    if(_if_conditional123=(come_push_stackframe("04heap.c", 43, 1230),__exception_result_var_b80=string_operator_equals(((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_78, "04heap.c", 43, 1228)), "04heap.c", 43, 1229))->mName,"lambda"), come_pop_stackframe(), __exception_result_var_b80),    _if_conditional123) {
        result_type_79=(struct sType*)come_increment_ref_count((come_push_stackframe("04heap.c", 44, 1235),__exception_result_var_b81=((struct sType*)(right_value119=solve_generics(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 44, 1231)), "04heap.c", 44, 1232))->mResultType, "04heap.c", 44, 1233)), "04heap.c", 44, 1234))->v1,generics_type,info))), come_pop_stackframe(), __exception_result_var_b81));
        come_call_finalizer3(right_value119,sType_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj41=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "04heap.c", 46, 1236)), "04heap.c", 46, 1237))->mResultType;
        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "04heap.c", 46, 1236)), "04heap.c", 46, 1237))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count((come_push_stackframe("04heap.c", 46, 1241),__exception_result_var_b82=((struct tuple1$1sTypeph*)(right_value121=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)(right_value120=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "04heap.c", 46, "tuple1$1sTypeph"))), "04heap.c", 46, 1238))),(struct sType*)come_increment_ref_count(result_type_79)))), come_pop_stackframe(), __exception_result_var_b82));
        come_call_finalizer3(__dec_obj41,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value120,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value121,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("04heap.c", 48, 1256),__exception_result_var_b83=list$1sTypeph_reset(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "04heap.c", 48, 1242)), "04heap.c", 48, 1243))->mParamTypes, "04heap.c", 48, 1244)), "04heap.c", 48, 1245))), come_pop_stackframe(), __exception_result_var_b83);
        for(        o2_saved_82=(struct list$1sTypeph*)come_increment_ref_count((((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 50, 1257)), "04heap.c", 50, 1258))->mParamTypes)),it_85=(come_push_stackframe("04heap.c", 50, 1273),__exception_result_var_b86=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_82), "04heap.c", 50, 1259)), "04heap.c", 50, 1260))), come_pop_stackframe(), __exception_result_var_b86);        !(come_push_stackframe("04heap.c", 50, 1278),__exception_result_var_b87=list$1sTypeph_end(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_82), "04heap.c", 50, 1274)), "04heap.c", 50, 1275))), come_pop_stackframe(), __exception_result_var_b87);        it_85=(come_push_stackframe("04heap.c", 50, 1297),__exception_result_var_b90=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_82), "04heap.c", 50, 1279)), "04heap.c", 50, 1280))), come_pop_stackframe(), __exception_result_var_b90)        ){
            new_param_type_88=(struct sType*)come_increment_ref_count((come_push_stackframe("04heap.c", 51, 1298),__exception_result_var_b91=((struct sType*)(right_value122=solve_generics(it_85,generics_type,info))), come_pop_stackframe(), __exception_result_var_b91));
            come_call_finalizer3(right_value122,sType_finalize, 0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("04heap.c", 53, 1348),__exception_result_var_b93=list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "04heap.c", 53, 1299)), "04heap.c", 53, 1300))->mParamTypes, "04heap.c", 53, 1301)), "04heap.c", 53, 1302)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value126=(come_push_stackframe("04heap.c", 53, 1347),__exception_result_var_b92=sType_clone(new_param_type_88), come_pop_stackframe(), __exception_result_var_b92))))), come_pop_stackframe(), __exception_result_var_b93);
            come_call_finalizer3(right_value126,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(new_param_type_88,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_82,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_79,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional130=((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_78, "04heap.c", 56, 1349)), "04heap.c", 56, 1350))->mMethodGenerics&&((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 56, 1351)), "04heap.c", 56, 1352))->method_generics_types&&(come_push_stackframe("04heap.c", 56, 1357),__exception_result_var_b94=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 56, 1353)), "04heap.c", 56, 1354))->method_generics_types, "04heap.c", 56, 1355)), "04heap.c", 56, 1356))), come_pop_stackframe(), __exception_result_var_b94)>0,        _if_conditional130) {
            generics_number_92=((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_78, "04heap.c", 57, 1358)), "04heap.c", 57, 1359))->mMethodGenericsNum;
            if(_if_conditional131=generics_number_92>=(come_push_stackframe("04heap.c", 59, 1364),__exception_result_var_b95=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 59, 1360)), "04heap.c", 59, 1361))->method_generics_types, "04heap.c", 59, 1362)), "04heap.c", 59, 1363))), come_pop_stackframe(), __exception_result_var_b95),            _if_conditional131) {
                (come_push_stackframe("04heap.c", 61,1370),err_msg(info,"invalid method generics parametor number. %d %d",generics_number_92,(come_push_stackframe("04heap.c", 61, 1369),__exception_result_var_b96=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 61, 1365)), "04heap.c", 61, 1366))->method_generics_types, "04heap.c", 61, 1367)), "04heap.c", 61, 1368))), come_pop_stackframe(), __exception_result_var_b96)),come_pop_stackframe());
                (come_push_stackframe("04heap.c", 62,1371),exit(2),come_pop_stackframe());
            }
            array_num_93=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value127=(come_push_stackframe("04heap.c", 65, 1374),__exception_result_var_b97=list$1sNodephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 65, 1372)), "04heap.c", 65, 1373))->mArrayNum), come_pop_stackframe(), __exception_result_var_b97))));
            come_call_finalizer3(right_value127,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            immutable__94=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 66, 1375)), "04heap.c", 66, 1376))->mImmutable;
            pointer_num_95=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 67, 1377)), "04heap.c", 67, 1378))->mPointerNum;
            heap_96=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 68, 1379)), "04heap.c", 68, 1380))->mHeap;
            guard__97=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 69, 1381)), "04heap.c", 69, 1382))->mGuardValue;
            no_heap_98=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 71, 1383)), "04heap.c", 71, 1384))->mNoHeap;
            no_calling_destructor_99=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 72, 1385)), "04heap.c", 72, 1386))->mNoCallingDestructor;
            null_value_100=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 73, 1387)), "04heap.c", 73, 1388))->mNullValue;
            __dec_obj45=result_47;
            result_47=(struct sType*)come_increment_ref_count(((struct sType*)(right_value128=(come_push_stackframe("04heap.c", 75, 1403),__exception_result_var_b100=sType_clone((come_push_stackframe("04heap.c", 75, 1402),__exception_result_var_b99=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 75, 1389)), "04heap.c", 75, 1390))->method_generics_types, "04heap.c", 75, 1391)),generics_number_92), "04heap.c", 75, 1401)), come_pop_stackframe(), __exception_result_var_b99)), come_pop_stackframe(), __exception_result_var_b100))));
            come_call_finalizer3(__dec_obj45,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value128,sType_finalize, 0, 1, 0, 0, __result_obj__);
            if(heap_96) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "04heap.c", 78, 1404)), "04heap.c", 78, 1405))->mHeap=heap_96;
            }
            if(guard__97) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "04heap.c", 81, 1406)), "04heap.c", 81, 1407))->mGuardValue=guard__97;
            }
            if(no_heap_98) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "04heap.c", 84, 1408)), "04heap.c", 84, 1409))->mNoHeap=(_Bool)1;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "04heap.c", 85, 1410)), "04heap.c", 85, 1411))->mHeap=(_Bool)0;
            }
            if(no_calling_destructor_99) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "04heap.c", 88, 1412)), "04heap.c", 88, 1413))->mNoCallingDestructor=(_Bool)1;
            }
            if(immutable__94) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "04heap.c", 91, 1414)), "04heap.c", 91, 1415))->mImmutable=immutable__94;
            }
            if(_if_conditional140=(come_push_stackframe("04heap.c", 93, 1420),__exception_result_var_b101=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(array_num_93, "04heap.c", 93, 1416)), "04heap.c", 93, 1417))), come_pop_stackframe(), __exception_result_var_b101)>0,            _if_conditional140) {
                __dec_obj46=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "04heap.c", 94, 1421)), "04heap.c", 94, 1422))->mArrayNum;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "04heap.c", 94, 1421)), "04heap.c", 94, 1422))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_93);
                come_call_finalizer3(__dec_obj46,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(null_value_100) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "04heap.c", 98, 1423)), "04heap.c", 98, 1424))->mNullValue=null_value_100;
            }
            if(_if_conditional142=pointer_num_95>0,            _if_conditional142) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "04heap.c", 102, 1425)), "04heap.c", 102, 1426))->mPointerNum+=pointer_num_95;
            }
            come_call_finalizer3(array_num_93,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_78, "04heap.c", 105, 1427)), "04heap.c", 105, 1428))->mGenerics) {
                generics_number_104=((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_78, "04heap.c", 106, 1429)), "04heap.c", 106, 1430))->mGenericsNum;
                if(_if_conditional144=generics_number_104>=(come_push_stackframe("04heap.c", 108, 1435),__exception_result_var_b102=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(generics_type, "04heap.c", 108, 1431)), "04heap.c", 108, 1432))->mGenericsTypes, "04heap.c", 108, 1433)), "04heap.c", 108, 1434))), come_pop_stackframe(), __exception_result_var_b102),                _if_conditional144) {
                    (come_push_stackframe("04heap.c", 110,1436),err_msg(info,"invalid generics parametor number"),come_pop_stackframe());
                    (come_push_stackframe("04heap.c", 111,1437),exit(2),come_pop_stackframe());
                }
                klass2_105=((struct sType*)come_null_check(((struct sType*)come_null_check((come_push_stackframe("04heap.c", 114, 1442),__exception_result_var_b103=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(generics_type, "04heap.c", 114, 1438)), "04heap.c", 114, 1439))->mGenericsTypes, "04heap.c", 114, 1440)),generics_number_104), "04heap.c", 114, 1441)), come_pop_stackframe(), __exception_result_var_b103), "04heap.c", 114, 1443)), "04heap.c", 114, 1444))->mClass;
                generics_number2_106=((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass2_105, "04heap.c", 116, 1445)), "04heap.c", 116, 1446))->mGenericsNum;
                if(_if_conditional145=generics_number_104!=generics_number2_106,                _if_conditional145) {
                    array_num_107=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value129=(come_push_stackframe("04heap.c", 120, 1449),__exception_result_var_b104=list$1sNodephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 120, 1447)), "04heap.c", 120, 1448))->mArrayNum), come_pop_stackframe(), __exception_result_var_b104))));
                    come_call_finalizer3(right_value129,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    immutable__108=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 121, 1450)), "04heap.c", 121, 1451))->mImmutable;
                    pointer_num_109=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 122, 1452)), "04heap.c", 122, 1453))->mPointerNum;
                    heap_110=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 123, 1454)), "04heap.c", 123, 1455))->mHeap;
                    guard__111=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 124, 1456)), "04heap.c", 124, 1457))->mGuardValue;
                    no_heap_112=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 126, 1458)), "04heap.c", 126, 1459))->mNoHeap;
                    no_calling_destructor_113=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 127, 1460)), "04heap.c", 127, 1461))->mNoCallingDestructor;
                    null_value_114=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 128, 1462)), "04heap.c", 128, 1463))->mNullValue;
                    record__115=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 129, 1464)), "04heap.c", 129, 1465))->mRecord;
                    __dec_obj47=result_47;
                    result_47=(struct sType*)come_increment_ref_count(((struct sType*)(right_value130=(come_push_stackframe("04heap.c", 131, 1471),__exception_result_var_b106=sType_clone((come_push_stackframe("04heap.c", 131, 1470),__exception_result_var_b105=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(generics_type, "04heap.c", 131, 1466)), "04heap.c", 131, 1467))->mGenericsTypes, "04heap.c", 131, 1468)),generics_number_104), "04heap.c", 131, 1469)), come_pop_stackframe(), __exception_result_var_b105)), come_pop_stackframe(), __exception_result_var_b106))));
                    come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value130,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    if(heap_110) {
                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "04heap.c", 134, 1472)), "04heap.c", 134, 1473))->mHeap=heap_110;
                    }
                    if(guard__111) {
                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "04heap.c", 137, 1474)), "04heap.c", 137, 1475))->mGuardValue=guard__111;
                    }
                    if(record__115) {
                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "04heap.c", 140, 1476)), "04heap.c", 140, 1477))->mRecord=record__115;
                    }
                    if(no_heap_112) {
                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "04heap.c", 143, 1478)), "04heap.c", 143, 1479))->mNoHeap=(_Bool)1;
                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "04heap.c", 144, 1480)), "04heap.c", 144, 1481))->mHeap=(_Bool)0;
                    }
                    if(no_calling_destructor_113) {
                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "04heap.c", 147, 1482)), "04heap.c", 147, 1483))->mNoCallingDestructor=(_Bool)1;
                    }
                    if(immutable__108) {
                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "04heap.c", 150, 1484)), "04heap.c", 150, 1485))->mImmutable=immutable__108;
                    }
                    if(_if_conditional152=(come_push_stackframe("04heap.c", 152, 1488),__exception_result_var_b107=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(array_num_107, "04heap.c", 152, 1486)), "04heap.c", 152, 1487))), come_pop_stackframe(), __exception_result_var_b107)>0,                    _if_conditional152) {
                        __dec_obj48=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "04heap.c", 153, 1489)), "04heap.c", 153, 1490))->mArrayNum;
                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "04heap.c", 153, 1489)), "04heap.c", 153, 1490))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_107);
                        come_call_finalizer3(__dec_obj48,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(null_value_114) {
                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "04heap.c", 157, 1491)), "04heap.c", 157, 1492))->mNullValue=null_value_114;
                    }
                    if(_if_conditional154=pointer_num_109>0,                    _if_conditional154) {
                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "04heap.c", 161, 1493)), "04heap.c", 161, 1494))->mPointerNum+=pointer_num_109;
                    }
                    come_call_finalizer3(array_num_107,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                (come_push_stackframe("04heap.c", 166, 1499),__exception_result_var_b108=list$1sTypeph_reset(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "04heap.c", 166, 1495)), "04heap.c", 166, 1496))->mGenericsTypes, "04heap.c", 166, 1497)), "04heap.c", 166, 1498))), come_pop_stackframe(), __exception_result_var_b108);
                for(                o2_saved_116=(struct list$1sTypeph*)come_increment_ref_count((((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 167, 1500)), "04heap.c", 167, 1501))->mGenericsTypes)),it_117=(come_push_stackframe("04heap.c", 167, 1504),__exception_result_var_b109=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_116), "04heap.c", 167, 1502)), "04heap.c", 167, 1503))), come_pop_stackframe(), __exception_result_var_b109);                !(come_push_stackframe("04heap.c", 167, 1507),__exception_result_var_b110=list$1sTypeph_end(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_116), "04heap.c", 167, 1505)), "04heap.c", 167, 1506))), come_pop_stackframe(), __exception_result_var_b110);                it_117=(come_push_stackframe("04heap.c", 167, 1510),__exception_result_var_b111=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_116), "04heap.c", 167, 1508)), "04heap.c", 167, 1509))), come_pop_stackframe(), __exception_result_var_b111)                ){
                    type_118=(struct sType*)come_increment_ref_count((come_push_stackframe("04heap.c", 168, 1511),__exception_result_var_b112=((struct sType*)(right_value131=solve_generics(it_117,generics_type,info))), come_pop_stackframe(), __exception_result_var_b112));
                    come_call_finalizer3(right_value131,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    (come_push_stackframe("04heap.c", 169, 1517),__exception_result_var_b114=list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "04heap.c", 169, 1512)), "04heap.c", 169, 1513))->mGenericsTypes, "04heap.c", 169, 1514)), "04heap.c", 169, 1515)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value132=(come_push_stackframe("04heap.c", 169, 1516),__exception_result_var_b113=sType_clone(type_118), come_pop_stackframe(), __exception_result_var_b113))))), come_pop_stackframe(), __exception_result_var_b114);
                    come_call_finalizer3(right_value132,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(type_118,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer3(o2_saved_116,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                (come_push_stackframe("04heap.c", 171, 1522),__exception_result_var_b115=list$1sTypeph_reset(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "04heap.c", 171, 1518)), "04heap.c", 171, 1519))->mMultipleTypes, "04heap.c", 171, 1520)), "04heap.c", 171, 1521))), come_pop_stackframe(), __exception_result_var_b115);
                for(                o2_saved_119=(struct list$1sTypeph*)come_increment_ref_count((((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 172, 1523)), "04heap.c", 172, 1524))->mMultipleTypes)),it_120=(come_push_stackframe("04heap.c", 172, 1527),__exception_result_var_b116=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_119), "04heap.c", 172, 1525)), "04heap.c", 172, 1526))), come_pop_stackframe(), __exception_result_var_b116);                !(come_push_stackframe("04heap.c", 172, 1530),__exception_result_var_b117=list$1sTypeph_end(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_119), "04heap.c", 172, 1528)), "04heap.c", 172, 1529))), come_pop_stackframe(), __exception_result_var_b117);                it_120=(come_push_stackframe("04heap.c", 172, 1533),__exception_result_var_b118=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_119), "04heap.c", 172, 1531)), "04heap.c", 172, 1532))), come_pop_stackframe(), __exception_result_var_b118)                ){
                    type_121=(struct sType*)come_increment_ref_count((come_push_stackframe("04heap.c", 173, 1534),__exception_result_var_b119=((struct sType*)(right_value133=solve_generics(it_120,generics_type,info))), come_pop_stackframe(), __exception_result_var_b119));
                    come_call_finalizer3(right_value133,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    (come_push_stackframe("04heap.c", 174, 1540),__exception_result_var_b121=list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "04heap.c", 174, 1535)), "04heap.c", 174, 1536))->mMultipleTypes, "04heap.c", 174, 1537)), "04heap.c", 174, 1538)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value134=(come_push_stackframe("04heap.c", 174, 1539),__exception_result_var_b120=sType_clone(type_121), come_pop_stackframe(), __exception_result_var_b120))))), come_pop_stackframe(), __exception_result_var_b121);
                    come_call_finalizer3(right_value134,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(type_121,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer3(o2_saved_119,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                if(_if_conditional155=!(come_push_stackframe("04heap.c", 177, 1541),__exception_result_var_b122=output_generics_struct(result_47,generics_type,info), come_pop_stackframe(), __exception_result_var_b122),                _if_conditional155) {
                    new_name_122=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 179, 1542),__exception_result_var_b123=((char*)(right_value135=create_generics_name(type,info))), come_pop_stackframe(), __exception_result_var_b123));
                    right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    (come_push_stackframe("04heap.c", 180, 1543),__exception_result_var_b124=printf("output generics is failed(%s)",new_name_122), come_pop_stackframe(), __exception_result_var_b124);
                    (come_push_stackframe("04heap.c", 181,1544),exit(1),come_pop_stackframe());
                    new_name_122 = come_decrement_ref_count2(new_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
    }
    __result88__ = __result_obj__ = result_47;
    come_call_finalizer3(result_47,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result88__;
    come_call_finalizer3(result_47,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional25;
struct sType* __result52__;
void* right_value83;
struct sType* result_48;
_Bool _if_conditional43;
_Bool _if_conditional44;
struct list$1sTypeph* __exception_result_var_b58;
void* right_value90;
struct list$1sTypeph* __dec_obj20;
_Bool _if_conditional48;
struct tuple1$1sTypeph* __exception_result_var_b60;
void* right_value93;
struct tuple1$1sTypeph* __dec_obj22;
_Bool _if_conditional52;
struct tuple1$1sTypeph* __exception_result_var_b61;
void* right_value94;
struct tuple1$1sTypeph* __dec_obj23;
_Bool _if_conditional53;
char* __exception_result_var_b62;
void* right_value95;
char* __dec_obj24;
_Bool _if_conditional54;
struct list$1sTypeph* __exception_result_var_b63;
void* right_value96;
struct list$1sTypeph* __dec_obj25;
_Bool _if_conditional55;
struct list$1sNodeph* __exception_result_var_b67;
void* right_value104;
struct list$1sNodeph* __dec_obj29;
_Bool _if_conditional68;
_Bool _if_conditional69;
struct list$1sTypeph* __exception_result_var_b68;
void* right_value105;
struct list$1sTypeph* __dec_obj30;
_Bool _if_conditional70;
struct list$1charph* __exception_result_var_b72;
void* right_value112;
struct list$1charph* __dec_obj34;
_Bool _if_conditional74;
struct tuple1$1sTypeph* __exception_result_var_b73;
void* right_value113;
struct tuple1$1sTypeph* __dec_obj35;
_Bool _if_conditional75;
_Bool _if_conditional76;
struct sNode* __exception_result_var_b74;
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
_Bool _if_conditional102;
_Bool _if_conditional103;
struct sNode* __exception_result_var_b75;
void* right_value115;
struct sNode* __dec_obj37;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
char* __exception_result_var_b76;
void* right_value116;
char* __dec_obj38;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
char* __exception_result_var_b77;
void* right_value117;
char* __dec_obj39;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
struct sType* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value83 = (void*)0;
memset(&result_48, 0, sizeof(struct sType*));
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
        if(_if_conditional25=self==(void*)0,        _if_conditional25) {
            __result52__ = __result_obj__ = (void*)0;
            return __result52__;
        }
        result_48=(struct sType*)come_increment_ref_count(((struct sType*)(right_value83=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer3(right_value83,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional43=self!=((void*)0),        _if_conditional43) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 4, 709)), "sType_clone", 4, 710))->mClass=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 4, 711)), "sType_clone", 4, 712))->mClass;
        }
        if(_if_conditional44=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 5, 713)), "sType_clone", 5, 714))->mMultipleTypes!=((void*)0),        _if_conditional44) {
            __dec_obj20=((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 5, 715)), "sType_clone", 5, 716))->mMultipleTypes;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 5, 715)), "sType_clone", 5, 716))->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value90=(come_push_stackframe("sType_clone", 5, 782),__exception_result_var_b58=list$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 5, 717)), "sType_clone", 5, 718))->mMultipleTypes), come_pop_stackframe(), __exception_result_var_b58))));
            come_call_finalizer3(__dec_obj20,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value90,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional48=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 6, 787)), "sType_clone", 6, 788))->mNoSolvedGenericsType!=((void*)0),        _if_conditional48) {
            __dec_obj22=((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 6, 789)), "sType_clone", 6, 790))->mNoSolvedGenericsType;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 6, 789)), "sType_clone", 6, 790))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value93=(come_push_stackframe("sType_clone", 6, 804),__exception_result_var_b60=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 6, 791)), "sType_clone", 6, 792))->mNoSolvedGenericsType), come_pop_stackframe(), __exception_result_var_b60))));
            come_call_finalizer3(__dec_obj22,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value93,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional52=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 7, 805)), "sType_clone", 7, 806))->mOriginalLoadVarType!=((void*)0),        _if_conditional52) {
            __dec_obj23=((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 7, 807)), "sType_clone", 7, 808))->mOriginalLoadVarType;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 7, 807)), "sType_clone", 7, 808))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value94=(come_push_stackframe("sType_clone", 7, 811),__exception_result_var_b61=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 7, 809)), "sType_clone", 7, 810))->mOriginalLoadVarType), come_pop_stackframe(), __exception_result_var_b61))));
            come_call_finalizer3(__dec_obj23,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value94,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional53=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 8, 812)), "sType_clone", 8, 813))->mGenericsName!=((void*)0),        _if_conditional53) {
            __dec_obj24=((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 8, 814)), "sType_clone", 8, 815))->mGenericsName;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 8, 814)), "sType_clone", 8, 815))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value95=(come_push_stackframe("sType_clone", 8, 818),__exception_result_var_b62=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 8, 816)), "sType_clone", 8, 817))->mGenericsName), come_pop_stackframe(), __exception_result_var_b62))));
            __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional54=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 9, 819)), "sType_clone", 9, 820))->mGenericsTypes!=((void*)0),        _if_conditional54) {
            __dec_obj25=((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 9, 821)), "sType_clone", 9, 822))->mGenericsTypes;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 9, 821)), "sType_clone", 9, 822))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value96=(come_push_stackframe("sType_clone", 9, 825),__exception_result_var_b63=list$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 9, 823)), "sType_clone", 9, 824))->mGenericsTypes), come_pop_stackframe(), __exception_result_var_b63))));
            come_call_finalizer3(__dec_obj25,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value96,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional55=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 10, 826)), "sType_clone", 10, 827))->mArrayNum!=((void*)0),        _if_conditional55) {
            __dec_obj29=((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 10, 828)), "sType_clone", 10, 829))->mArrayNum;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 10, 828)), "sType_clone", 10, 829))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value104=(come_push_stackframe("sType_clone", 10, 929),__exception_result_var_b67=list$1sNodephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 10, 830)), "sType_clone", 10, 831))->mArrayNum), come_pop_stackframe(), __exception_result_var_b67))));
            come_call_finalizer3(__dec_obj29,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value104,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional68=self!=((void*)0),        _if_conditional68) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 11, 934)), "sType_clone", 11, 935))->mOmitArrayNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 11, 936)), "sType_clone", 11, 937))->mOmitArrayNum;
        }
        if(_if_conditional69=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 12, 938)), "sType_clone", 12, 939))->mParamTypes!=((void*)0),        _if_conditional69) {
            __dec_obj30=((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 12, 940)), "sType_clone", 12, 941))->mParamTypes;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 12, 940)), "sType_clone", 12, 941))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value105=(come_push_stackframe("sType_clone", 12, 944),__exception_result_var_b68=list$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 12, 942)), "sType_clone", 12, 943))->mParamTypes), come_pop_stackframe(), __exception_result_var_b68))));
            come_call_finalizer3(__dec_obj30,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value105,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional70=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 13, 945)), "sType_clone", 13, 946))->mParamNames!=((void*)0),        _if_conditional70) {
            __dec_obj34=((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 13, 947)), "sType_clone", 13, 948))->mParamNames;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 13, 947)), "sType_clone", 13, 948))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value112=(come_push_stackframe("sType_clone", 13, 1014),__exception_result_var_b72=list$1charphp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 13, 949)), "sType_clone", 13, 950))->mParamNames), come_pop_stackframe(), __exception_result_var_b72))));
            come_call_finalizer3(__dec_obj34,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value112,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional74=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 14, 1019)), "sType_clone", 14, 1020))->mResultType!=((void*)0),        _if_conditional74) {
            __dec_obj35=((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 14, 1021)), "sType_clone", 14, 1022))->mResultType;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 14, 1021)), "sType_clone", 14, 1022))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value113=(come_push_stackframe("sType_clone", 14, 1025),__exception_result_var_b73=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 14, 1023)), "sType_clone", 14, 1024))->mResultType), come_pop_stackframe(), __exception_result_var_b73))));
            come_call_finalizer3(__dec_obj35,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value113,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 15, 1026)), "sType_clone", 15, 1027))->mVarArgs=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 15, 1028)), "sType_clone", 15, 1029))->mVarArgs;
        }
        if(_if_conditional76=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 16, 1030)), "sType_clone", 16, 1031))->mAlignas!=((void*)0),        _if_conditional76) {
            __dec_obj36=((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 16, 1032)), "sType_clone", 16, 1033))->mAlignas;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 16, 1032)), "sType_clone", 16, 1033))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value114=(come_push_stackframe("sType_clone", 16, 1036),__exception_result_var_b74=sNode_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 16, 1034)), "sType_clone", 16, 1035))->mAlignas), come_pop_stackframe(), __exception_result_var_b74))));
            if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count2(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value114) { right_value114 = come_decrement_ref_count2(right_value114, ((struct sNode*)right_value114)->finalize, ((struct sNode*)right_value114)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 17, 1037)), "sType_clone", 17, 1038))->mUnsigned=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 17, 1039)), "sType_clone", 17, 1040))->mUnsigned;
        }
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 18, 1041)), "sType_clone", 18, 1042))->mShort=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 18, 1043)), "sType_clone", 18, 1044))->mShort;
        }
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 19, 1045)), "sType_clone", 19, 1046))->mLong=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 19, 1047)), "sType_clone", 19, 1048))->mLong;
        }
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 20, 1049)), "sType_clone", 20, 1050))->mLongLong=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 20, 1051)), "sType_clone", 20, 1052))->mLongLong;
        }
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 21, 1053)), "sType_clone", 21, 1054))->mConstant=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 21, 1055)), "sType_clone", 21, 1056))->mConstant;
        }
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 22, 1057)), "sType_clone", 22, 1058))->mRegister=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 22, 1059)), "sType_clone", 22, 1060))->mRegister;
        }
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 23, 1061)), "sType_clone", 23, 1062))->mVolatile=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 23, 1063)), "sType_clone", 23, 1064))->mVolatile;
        }
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 24, 1065)), "sType_clone", 24, 1066))->mStatic=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 24, 1067)), "sType_clone", 24, 1068))->mStatic;
        }
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 25, 1069)), "sType_clone", 25, 1070))->mUniq=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 25, 1071)), "sType_clone", 25, 1072))->mUniq;
        }
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 26, 1073)), "sType_clone", 26, 1074))->mRecord=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 26, 1075)), "sType_clone", 26, 1076))->mRecord;
        }
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 27, 1077)), "sType_clone", 27, 1078))->mExtern=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 27, 1079)), "sType_clone", 27, 1080))->mExtern;
        }
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 28, 1081)), "sType_clone", 28, 1082))->mRestrict=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 28, 1083)), "sType_clone", 28, 1084))->mRestrict;
        }
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 29, 1085)), "sType_clone", 29, 1086))->mImmutable=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 29, 1087)), "sType_clone", 29, 1088))->mImmutable;
        }
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 30, 1089)), "sType_clone", 30, 1090))->mHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 30, 1091)), "sType_clone", 30, 1092))->mHeap;
        }
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 31, 1093)), "sType_clone", 31, 1094))->mDummyHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 31, 1095)), "sType_clone", 31, 1096))->mDummyHeap;
        }
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 32, 1097)), "sType_clone", 32, 1098))->mDelegate=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 32, 1099)), "sType_clone", 32, 1100))->mDelegate;
        }
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 33, 1101)), "sType_clone", 33, 1102))->mShare=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 33, 1103)), "sType_clone", 33, 1104))->mShare;
        }
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 34, 1105)), "sType_clone", 34, 1106))->mClone=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 34, 1107)), "sType_clone", 34, 1108))->mClone;
        }
        if(_if_conditional95=self!=((void*)0),        _if_conditional95) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 35, 1109)), "sType_clone", 35, 1110))->mNoHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 35, 1111)), "sType_clone", 35, 1112))->mNoHeap;
        }
        if(_if_conditional96=self!=((void*)0),        _if_conditional96) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 36, 1113)), "sType_clone", 36, 1114))->mNoCallingDestructor=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 36, 1115)), "sType_clone", 36, 1116))->mNoCallingDestructor;
        }
        if(_if_conditional97=self!=((void*)0),        _if_conditional97) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 37, 1117)), "sType_clone", 37, 1118))->mRefference=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 37, 1119)), "sType_clone", 37, 1120))->mRefference;
        }
        if(_if_conditional98=self!=((void*)0),        _if_conditional98) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 38, 1121)), "sType_clone", 38, 1122))->mException=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 38, 1123)), "sType_clone", 38, 1124))->mException;
        }
        if(_if_conditional99=self!=((void*)0),        _if_conditional99) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 39, 1125)), "sType_clone", 39, 1126))->mPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 39, 1127)), "sType_clone", 39, 1128))->mPointerNum;
        }
        if(_if_conditional100=self!=((void*)0),        _if_conditional100) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 40, 1129)), "sType_clone", 40, 1130))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 40, 1131)), "sType_clone", 40, 1132))->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional101=self!=((void*)0),        _if_conditional101) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 41, 1133)), "sType_clone", 41, 1134))->mNoArrayPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 41, 1135)), "sType_clone", 41, 1136))->mNoArrayPointerNum;
        }
        if(_if_conditional102=self!=((void*)0),        _if_conditional102) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 42, 1137)), "sType_clone", 42, 1138))->mTypedefOriginalPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 42, 1139)), "sType_clone", 42, 1140))->mTypedefOriginalPointerNum;
        }
        if(_if_conditional103=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 43, 1141)), "sType_clone", 43, 1142))->mSizeNum!=((void*)0),        _if_conditional103) {
            __dec_obj37=((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 43, 1143)), "sType_clone", 43, 1144))->mSizeNum;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 43, 1143)), "sType_clone", 43, 1144))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value115=(come_push_stackframe("sType_clone", 43, 1147),__exception_result_var_b75=sNode_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 43, 1145)), "sType_clone", 43, 1146))->mSizeNum), come_pop_stackframe(), __exception_result_var_b75))));
            if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value115) { right_value115 = come_decrement_ref_count2(right_value115, ((struct sNode*)right_value115)->finalize, ((struct sNode*)right_value115)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional104=self!=((void*)0),        _if_conditional104) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 44, 1148)), "sType_clone", 44, 1149))->mDynamicArrayNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 44, 1150)), "sType_clone", 44, 1151))->mDynamicArrayNum;
        }
        if(_if_conditional105=self!=((void*)0),        _if_conditional105) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 45, 1152)), "sType_clone", 45, 1153))->mTypeOfExpression=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 45, 1154)), "sType_clone", 45, 1155))->mTypeOfExpression;
        }
        if(_if_conditional106=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 46, 1156)), "sType_clone", 46, 1157))->mOriginalTypeName!=((void*)0),        _if_conditional106) {
            __dec_obj38=((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 46, 1158)), "sType_clone", 46, 1159))->mOriginalTypeName;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 46, 1158)), "sType_clone", 46, 1159))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value116=(come_push_stackframe("sType_clone", 46, 1162),__exception_result_var_b76=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 46, 1160)), "sType_clone", 46, 1161))->mOriginalTypeName), come_pop_stackframe(), __exception_result_var_b76))));
            __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional107=self!=((void*)0),        _if_conditional107) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 47, 1163)), "sType_clone", 47, 1164))->mOriginalPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 47, 1165)), "sType_clone", 47, 1166))->mOriginalPointerNum;
        }
        if(_if_conditional108=self!=((void*)0),        _if_conditional108) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 48, 1167)), "sType_clone", 48, 1168))->mFunctionParam=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 48, 1169)), "sType_clone", 48, 1170))->mFunctionParam;
        }
        if(_if_conditional109=self!=((void*)0),        _if_conditional109) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 49, 1171)), "sType_clone", 49, 1172))->mAllocaValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 49, 1173)), "sType_clone", 49, 1174))->mAllocaValue;
        }
        if(_if_conditional110=self!=((void*)0),        _if_conditional110) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 50, 1175)), "sType_clone", 50, 1176))->mGenericsStruct=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 50, 1177)), "sType_clone", 50, 1178))->mGenericsStruct;
        }
        if(_if_conditional111=self!=((void*)0),        _if_conditional111) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 51, 1179)), "sType_clone", 51, 1180))->mSolvedGenericsName=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 51, 1181)), "sType_clone", 51, 1182))->mSolvedGenericsName;
        }
        if(_if_conditional112=self!=((void*)0),        _if_conditional112) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 52, 1183)), "sType_clone", 52, 1184))->mComeMemCore=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 52, 1185)), "sType_clone", 52, 1186))->mComeMemCore;
        }
        if(_if_conditional113=self!=((void*)0),        _if_conditional113) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 53, 1187)), "sType_clone", 53, 1188))->mInline=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 53, 1189)), "sType_clone", 53, 1190))->mInline;
        }
        if(_if_conditional114=self!=((void*)0),        _if_conditional114) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 54, 1191)), "sType_clone", 54, 1192))->mNullValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 54, 1193)), "sType_clone", 54, 1194))->mNullValue;
        }
        if(_if_conditional115=self!=((void*)0),        _if_conditional115) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 55, 1195)), "sType_clone", 55, 1196))->mGuardValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 55, 1197)), "sType_clone", 55, 1198))->mGuardValue;
        }
        if(_if_conditional116=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 56, 1199)), "sType_clone", 56, 1200))->mAsmName!=((void*)0),        _if_conditional116) {
            __dec_obj39=((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 56, 1201)), "sType_clone", 56, 1202))->mAsmName;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 56, 1201)), "sType_clone", 56, 1202))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value117=(come_push_stackframe("sType_clone", 56, 1205),__exception_result_var_b77=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 56, 1203)), "sType_clone", 56, 1204))->mAsmName), come_pop_stackframe(), __exception_result_var_b77))));
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional117=self!=((void*)0),        _if_conditional117) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 57, 1206)), "sType_clone", 57, 1207))->mArrayPointerType=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 57, 1208)), "sType_clone", 57, 1209))->mArrayPointerType;
        }
        if(_if_conditional118=self!=((void*)0),        _if_conditional118) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 58, 1210)), "sType_clone", 58, 1211))->mLambdaArray=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 58, 1212)), "sType_clone", 58, 1213))->mLambdaArray;
        }
        if(_if_conditional119=self!=((void*)0),        _if_conditional119) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 59, 1214)), "sType_clone", 59, 1215))->mNoNumberArray=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 59, 1216)), "sType_clone", 59, 1217))->mNoNumberArray;
        }
        __result69__ = __result_obj__ = result_48;
        come_call_finalizer3(result_48,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result69__;
        come_call_finalizer3(result_48,sType_finalize, 0, 0, 0, 0, (void*)0);
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
            if(_if_conditional26=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 0, 629)), "sType_finalize", 0, 630))->mMultipleTypes!=((void*)0),            _if_conditional26) {
                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 0, 631)), "sType_finalize", 0, 632))->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional28=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 1, 641)), "sType_finalize", 1, 642))->mNoSolvedGenericsType!=((void*)0),            _if_conditional28) {
                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 1, 643)), "sType_finalize", 1, 644))->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional30=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 2, 649)), "sType_finalize", 2, 650))->mOriginalLoadVarType!=((void*)0),            _if_conditional30) {
                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 2, 651)), "sType_finalize", 2, 652))->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional31=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 653)), "sType_finalize", 3, 654))->mGenericsName!=((void*)0),            _if_conditional31) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 655)), "sType_finalize", 3, 656))->mGenericsName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 655)), "sType_finalize", 3, 656))->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional32=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 4, 657)), "sType_finalize", 4, 658))->mGenericsTypes!=((void*)0),            _if_conditional32) {
                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 4, 659)), "sType_finalize", 4, 660))->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional33=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 5, 661)), "sType_finalize", 5, 662))->mArrayNum!=((void*)0),            _if_conditional33) {
                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 5, 663)), "sType_finalize", 5, 664))->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional35=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 6, 673)), "sType_finalize", 6, 674))->mParamTypes!=((void*)0),            _if_conditional35) {
                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 6, 675)), "sType_finalize", 6, 676))->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional36=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 7, 677)), "sType_finalize", 7, 678))->mParamNames!=((void*)0),            _if_conditional36) {
                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 7, 679)), "sType_finalize", 7, 680))->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional38=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 8, 689)), "sType_finalize", 8, 690))->mResultType!=((void*)0),            _if_conditional38) {
                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 8, 691)), "sType_finalize", 8, 692))->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional39=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 693)), "sType_finalize", 9, 694))->mAlignas!=((void*)0),            _if_conditional39) {
                if(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 695)), "sType_finalize", 9, 696))->mAlignas) { ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 695)), "sType_finalize", 9, 696))->mAlignas = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 695)), "sType_finalize", 9, 696))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 695)), "sType_finalize", 9, 696))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 695)), "sType_finalize", 9, 696))->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional40=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 697)), "sType_finalize", 10, 698))->mSizeNum!=((void*)0),            _if_conditional40) {
                if(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 699)), "sType_finalize", 10, 700))->mSizeNum) { ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 699)), "sType_finalize", 10, 700))->mSizeNum = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 699)), "sType_finalize", 10, 700))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 699)), "sType_finalize", 10, 700))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 699)), "sType_finalize", 10, 700))->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional41=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 701)), "sType_finalize", 11, 702))->mOriginalTypeName!=((void*)0),            _if_conditional41) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 703)), "sType_finalize", 11, 704))->mOriginalTypeName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 703)), "sType_finalize", 11, 704))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional42=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 705)), "sType_finalize", 12, 706))->mAsmName!=((void*)0),            _if_conditional42) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 707)), "sType_finalize", 12, 708))->mAsmName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 707)), "sType_finalize", 12, 708))->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_49;
_Bool _while_condtional7;
struct list_item$1sTypeph* prev_it_50;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_49, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_50, 0, sizeof(struct list_item$1sTypeph*));
                    it_49=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 120, 633)), "./neo-c.h", 120, 634))->head;
                    while(_while_condtional7=it_49!=((void*)0),                    _while_condtional7) {
                        prev_it_50=it_49;
                        it_49=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_49, "./neo-c.h", 123, 635)), "./neo-c.h", 123, 636))->next;
                        come_call_finalizer3(prev_it_50,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional27;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional27=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0, 637)), "list_item$1sTypephp_finalize", 0, 638))->item!=((void*)0),                            _if_conditional27) {
                                come_call_finalizer3(((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0, 639)), "list_item$1sTypephp_finalize", 0, 640))->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional29;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional29=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0, 645)), "tuple1$1sTypephp_finalize", 0, 646))->v1!=((void*)0),                    _if_conditional29) {
                        come_call_finalizer3(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0, 647)), "tuple1$1sTypephp_finalize", 0, 648))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_51;
_Bool _while_condtional8;
struct list_item$1sNodeph* prev_it_52;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_51, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_52, 0, sizeof(struct list_item$1sNodeph*));
                    it_51=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 120, 665)), "./neo-c.h", 120, 666))->head;
                    while(_while_condtional8=it_51!=((void*)0),                    _while_condtional8) {
                        prev_it_52=it_51;
                        it_51=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_51, "./neo-c.h", 123, 667)), "./neo-c.h", 123, 668))->next;
                        come_call_finalizer3(prev_it_52,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional34;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional34=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 669)), "list_item$1sNodephp_finalize", 0, 670))->item!=((void*)0),                            _if_conditional34) {
                                if(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 671)), "list_item$1sNodephp_finalize", 0, 672))->item) { ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 671)), "list_item$1sNodephp_finalize", 0, 672))->item = come_decrement_ref_count2(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 671)), "list_item$1sNodephp_finalize", 0, 672))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 671)), "list_item$1sNodephp_finalize", 0, 672))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 671)), "list_item$1sNodephp_finalize", 0, 672))->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_53;
_Bool _while_condtional9;
struct list_item$1charph* prev_it_54;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_53, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_54, 0, sizeof(struct list_item$1charph*));
                    it_53=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 120, 681)), "./neo-c.h", 120, 682))->head;
                    while(_while_condtional9=it_53!=((void*)0),                    _while_condtional9) {
                        prev_it_54=it_53;
                        it_53=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_53, "./neo-c.h", 123, 683)), "./neo-c.h", 123, 684))->next;
                        come_call_finalizer3(prev_it_54,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional37;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional37=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 685)), "list_item$1charphp_finalize", 0, 686))->item!=((void*)0),                            _if_conditional37) {
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 687)), "list_item$1charphp_finalize", 0, 688))->item = come_decrement_ref_count2(((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 687)), "list_item$1charphp_finalize", 0, 688))->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional45;
struct list$1sTypeph* __result53__;
void* right_value84;
void* right_value85;
struct list$1sTypeph* __exception_result_var_b55;
struct list$1sTypeph* result_55;
struct list_item$1sTypeph* it_56;
_Bool _while_condtional10;
struct sType* __exception_result_var_b56;
void* right_value89;
struct list$1sTypeph* __exception_result_var_b57;
struct list$1sTypeph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value84 = (void*)0;
right_value85 = (void*)0;
memset(&result_55, 0, sizeof(struct list$1sTypeph*));
memset(&it_56, 0, sizeof(struct list_item$1sTypeph*));
right_value89 = (void*)0;
                if(_if_conditional45=self==((void*)0),                _if_conditional45) {
                    __result53__ = __result_obj__ = ((void*)0);
                    return __result53__;
                }
                result_55=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 727),__exception_result_var_b55=((struct list$1sTypeph*)(right_value85=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value84=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 139, "list$1sTypeph"))), "./neo-c.h", 139, 719)), "./neo-c.h", 139, 720)))))), come_pop_stackframe(), __exception_result_var_b55));
                come_call_finalizer3(right_value84,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value85,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_56=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 141, 728)), "./neo-c.h", 141, 729))->head;
                while(_while_condtional10=it_56!=((void*)0),                _while_condtional10) {
                    (come_push_stackframe("./neo-c.h", 143, 779),__exception_result_var_b57=list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(result_55, "./neo-c.h", 143, 730)), "./neo-c.h", 143, 731)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value89=(come_push_stackframe("./neo-c.h", 143, 778),__exception_result_var_b56=sType_clone(((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_56, "./neo-c.h", 143, 776)), "./neo-c.h", 143, 777))->item), come_pop_stackframe(), __exception_result_var_b56))))), come_pop_stackframe(), __exception_result_var_b57);
                    come_call_finalizer3(right_value89,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    it_56=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_56, "./neo-c.h", 145, 780)), "./neo-c.h", 145, 781))->next;
                }
                __result56__ = __result_obj__ = result_55;
                come_call_finalizer3(result_55,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result56__;
                come_call_finalizer3(result_55,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 101, 721)), "./neo-c.h", 101, 722))->head=((void*)0);
                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 102, 723)), "./neo-c.h", 102, 724))->tail=((void*)0);
                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 103, 725)), "./neo-c.h", 103, 726))->len=0;
                    __result54__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result54__;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional46;
void* right_value86;
struct list_item$1sTypeph* litem_57;
struct sType* __dec_obj17;
_Bool _if_conditional47;
void* right_value87;
struct list_item$1sTypeph* litem_58;
struct sType* __dec_obj18;
void* right_value88;
struct list_item$1sTypeph* litem_59;
struct sType* __dec_obj19;
struct list$1sTypeph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
memset(&litem_57, 0, sizeof(struct list_item$1sTypeph*));
right_value87 = (void*)0;
memset(&litem_58, 0, sizeof(struct list_item$1sTypeph*));
right_value88 = (void*)0;
memset(&litem_59, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional46=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 152, 732)), "./neo-c.h", 152, 733))->len==0,                        _if_conditional46) {
                            litem_57=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value86=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 153, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value86,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_57, "./neo-c.h", 155, 734)), "./neo-c.h", 155, 735))->prev=((void*)0);
                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_57, "./neo-c.h", 156, 736)), "./neo-c.h", 156, 737))->next=((void*)0);
                            __dec_obj17=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_57, "./neo-c.h", 157, 738)), "./neo-c.h", 157, 739))->item;
                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_57, "./neo-c.h", 157, 738)), "./neo-c.h", 157, 739))->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj17,sType_finalize, 0, 0, 0, 0, (void*)0);
                            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 159, 740)), "./neo-c.h", 159, 741))->tail=litem_57;
                            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 160, 742)), "./neo-c.h", 160, 743))->head=litem_57;
                        }
                        else {
                            if(_if_conditional47=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 162, 744)), "./neo-c.h", 162, 745))->len==1,                            _if_conditional47) {
                                litem_58=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value87=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 163, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value87,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_58, "./neo-c.h", 165, 746)), "./neo-c.h", 165, 747))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 165, 748)), "./neo-c.h", 165, 749))->head;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_58, "./neo-c.h", 166, 750)), "./neo-c.h", 166, 751))->next=((void*)0);
                                __dec_obj18=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_58, "./neo-c.h", 167, 752)), "./neo-c.h", 167, 753))->item;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_58, "./neo-c.h", 167, 752)), "./neo-c.h", 167, 753))->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj18,sType_finalize, 0, 0, 0, 0, (void*)0);
                                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 169, 754)), "./neo-c.h", 169, 755))->tail=litem_58;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 170, 756)), "./neo-c.h", 170, 757))->head, "./neo-c.h", 170, 758)), "./neo-c.h", 170, 759))->next=litem_58;
                            }
                            else {
                                litem_59=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value88=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 173, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value88,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_59, "./neo-c.h", 175, 760)), "./neo-c.h", 175, 761))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 175, 762)), "./neo-c.h", 175, 763))->tail;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_59, "./neo-c.h", 176, 764)), "./neo-c.h", 176, 765))->next=((void*)0);
                                __dec_obj19=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_59, "./neo-c.h", 177, 766)), "./neo-c.h", 177, 767))->item;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_59, "./neo-c.h", 177, 766)), "./neo-c.h", 177, 767))->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj19,sType_finalize, 0, 0, 0, 0, (void*)0);
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 179, 768)), "./neo-c.h", 179, 769))->tail, "./neo-c.h", 179, 770)), "./neo-c.h", 179, 771))->next=litem_59;
                                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 180, 772)), "./neo-c.h", 180, 773))->tail=litem_59;
                            }
                        }
                        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 183, 774)), "./neo-c.h", 183, 775))->len++;
                        __result55__ = __result_obj__ = self;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result55__;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_60;
_Bool _while_condtional11;
struct list_item$1sTypeph* prev_it_61;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_60, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_61, 0, sizeof(struct list_item$1sTypeph*));
                it_60=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 120, 783)), "./neo-c.h", 120, 784))->head;
                while(_while_condtional11=it_60!=((void*)0),                _while_condtional11) {
                    prev_it_61=it_60;
                    it_60=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_60, "./neo-c.h", 123, 785)), "./neo-c.h", 123, 786))->next;
                    come_call_finalizer3(prev_it_61,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional49;
struct tuple1$1sTypeph* __result57__;
void* right_value91;
struct tuple1$1sTypeph* result_62;
_Bool _if_conditional51;
struct sType* __exception_result_var_b59;
void* right_value92;
struct sType* __dec_obj21;
struct tuple1$1sTypeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value91 = (void*)0;
memset(&result_62, 0, sizeof(struct tuple1$1sTypeph*));
right_value92 = (void*)0;
                if(_if_conditional49=self==(void*)0,                _if_conditional49) {
                    __result57__ = __result_obj__ = (void*)0;
                    return __result57__;
                }
                result_62=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value91=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer3(right_value91,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional51=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4, 797)), "tuple1$1sTypephp_clone", 4, 798))->v1!=((void*)0),                _if_conditional51) {
                    __dec_obj21=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(result_62, "tuple1$1sTypephp_clone", 4, 799)), "tuple1$1sTypephp_clone", 4, 800))->v1;
                    ((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(result_62, "tuple1$1sTypephp_clone", 4, 799)), "tuple1$1sTypephp_clone", 4, 800))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value92=(come_push_stackframe("tuple1$1sTypephp_clone", 4, 803),__exception_result_var_b59=sType_clone(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4, 801)), "tuple1$1sTypephp_clone", 4, 802))->v1), come_pop_stackframe(), __exception_result_var_b59))));
                    come_call_finalizer3(__dec_obj21,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value92,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                __result58__ = __result_obj__ = result_62;
                come_call_finalizer3(result_62,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result58__;
                come_call_finalizer3(result_62,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional50;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional50=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0, 793)), "tuple1$1sTypeph_finalize", 0, 794))->v1!=((void*)0),                    _if_conditional50) {
                        come_call_finalizer3(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0, 795)), "tuple1$1sTypeph_finalize", 0, 796))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional56;
struct list$1sNodeph* __result59__;
void* right_value97;
void* right_value98;
struct list$1sNodeph* __exception_result_var_b64;
struct list$1sNodeph* result_63;
struct list_item$1sNodeph* it_64;
_Bool _while_condtional12;
struct sNode* __exception_result_var_b65;
void* right_value103;
struct list$1sNodeph* __exception_result_var_b66;
struct list$1sNodeph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value97 = (void*)0;
right_value98 = (void*)0;
memset(&result_63, 0, sizeof(struct list$1sNodeph*));
memset(&it_64, 0, sizeof(struct list_item$1sNodeph*));
right_value103 = (void*)0;
                if(_if_conditional56=self==((void*)0),                _if_conditional56) {
                    __result59__ = __result_obj__ = ((void*)0);
                    return __result59__;
                }
                result_63=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 840),__exception_result_var_b64=((struct list$1sNodeph*)(right_value98=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value97=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 139, "list$1sNodeph"))), "./neo-c.h", 139, 832)), "./neo-c.h", 139, 833)))))), come_pop_stackframe(), __exception_result_var_b64));
                come_call_finalizer3(right_value97,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value98,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_64=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 141, 841)), "./neo-c.h", 141, 842))->head;
                while(_while_condtional12=it_64!=((void*)0),                _while_condtional12) {
                    (come_push_stackframe("./neo-c.h", 143, 926),__exception_result_var_b66=list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(result_63, "./neo-c.h", 143, 843)), "./neo-c.h", 143, 844)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value103=(come_push_stackframe("./neo-c.h", 143, 925),__exception_result_var_b65=sNode_clone(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_64, "./neo-c.h", 143, 889)), "./neo-c.h", 143, 890))->item), come_pop_stackframe(), __exception_result_var_b65))))), come_pop_stackframe(), __exception_result_var_b66);
                    if(right_value103) { right_value103 = come_decrement_ref_count2(right_value103, ((struct sNode*)right_value103)->finalize, ((struct sNode*)right_value103)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    it_64=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_64, "./neo-c.h", 145, 927)), "./neo-c.h", 145, 928))->next;
                }
                __result64__ = __result_obj__ = result_63;
                come_call_finalizer3(result_63,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result64__;
                come_call_finalizer3(result_63,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 101, 834)), "./neo-c.h", 101, 835))->head=((void*)0);
                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 102, 836)), "./neo-c.h", 102, 837))->tail=((void*)0);
                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 103, 838)), "./neo-c.h", 103, 839))->len=0;
                    __result60__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result60__;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional57;
void* right_value99;
struct list_item$1sNodeph* litem_65;
struct sNode* __dec_obj26;
_Bool _if_conditional58;
void* right_value100;
struct list_item$1sNodeph* litem_66;
struct sNode* __dec_obj27;
void* right_value101;
struct list_item$1sNodeph* litem_67;
struct sNode* __dec_obj28;
struct list$1sNodeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value99 = (void*)0;
memset(&litem_65, 0, sizeof(struct list_item$1sNodeph*));
right_value100 = (void*)0;
memset(&litem_66, 0, sizeof(struct list_item$1sNodeph*));
right_value101 = (void*)0;
memset(&litem_67, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional57=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 152, 845)), "./neo-c.h", 152, 846))->len==0,                        _if_conditional57) {
                            litem_65=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value99=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 153, "list_item$1sNodeph"))));
                            come_call_finalizer3(right_value99,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_65, "./neo-c.h", 155, 847)), "./neo-c.h", 155, 848))->prev=((void*)0);
                            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_65, "./neo-c.h", 156, 849)), "./neo-c.h", 156, 850))->next=((void*)0);
                            __dec_obj26=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_65, "./neo-c.h", 157, 851)), "./neo-c.h", 157, 852))->item;
                            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_65, "./neo-c.h", 157, 851)), "./neo-c.h", 157, 852))->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count2(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0, (void*)0); }
                            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 159, 853)), "./neo-c.h", 159, 854))->tail=litem_65;
                            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 160, 855)), "./neo-c.h", 160, 856))->head=litem_65;
                        }
                        else {
                            if(_if_conditional58=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 162, 857)), "./neo-c.h", 162, 858))->len==1,                            _if_conditional58) {
                                litem_66=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value100=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 163, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value100,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_66, "./neo-c.h", 165, 859)), "./neo-c.h", 165, 860))->prev=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 165, 861)), "./neo-c.h", 165, 862))->head;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_66, "./neo-c.h", 166, 863)), "./neo-c.h", 166, 864))->next=((void*)0);
                                __dec_obj27=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_66, "./neo-c.h", 167, 865)), "./neo-c.h", 167, 866))->item;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_66, "./neo-c.h", 167, 865)), "./neo-c.h", 167, 866))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count2(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0,0, (void*)0); }
                                ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 169, 867)), "./neo-c.h", 169, 868))->tail=litem_66;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 170, 869)), "./neo-c.h", 170, 870))->head, "./neo-c.h", 170, 871)), "./neo-c.h", 170, 872))->next=litem_66;
                            }
                            else {
                                litem_67=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value101=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 173, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value101,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_67, "./neo-c.h", 175, 873)), "./neo-c.h", 175, 874))->prev=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 175, 875)), "./neo-c.h", 175, 876))->tail;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_67, "./neo-c.h", 176, 877)), "./neo-c.h", 176, 878))->next=((void*)0);
                                __dec_obj28=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_67, "./neo-c.h", 177, 879)), "./neo-c.h", 177, 880))->item;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_67, "./neo-c.h", 177, 879)), "./neo-c.h", 177, 880))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count2(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0,0, (void*)0); }
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 179, 881)), "./neo-c.h", 179, 882))->tail, "./neo-c.h", 179, 883)), "./neo-c.h", 179, 884))->next=litem_67;
                                ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 180, 885)), "./neo-c.h", 180, 886))->tail=litem_67;
                            }
                        }
                        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 183, 887)), "./neo-c.h", 183, 888))->len++;
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
struct sNode* result_68;
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
memset(&result_68, 0, sizeof(struct sNode*));
                        if(_if_conditional59=self==(void*)0,                        _if_conditional59) {
                            __result62__ = __result_obj__ = (void*)0;
                            return __result62__;
                        }
                        result_68=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value102=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value102) { right_value102 = come_decrement_ref_count2(right_value102, ((struct sNode*)right_value102)->finalize, ((struct sNode*)right_value102)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        if(_if_conditional60=self!=((void*)0)&&((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 891)), "sNode_clone", 4, 892))->clone!=((void*)0),                        _if_conditional60) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_68, "sNode_clone", 4, 893)), "sNode_clone", 4, 894))->_protocol_obj=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 895)), "sNode_clone", 4, 896))->clone(((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 895)), "sNode_clone", 4, 896))->_protocol_obj);
                        }
                        if(_if_conditional61=self!=((void*)0),                        _if_conditional61) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_68, "sNode_clone", 5, 897)), "sNode_clone", 5, 898))->finalize=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 5, 899)), "sNode_clone", 5, 900))->finalize;
                        }
                        if(_if_conditional62=self!=((void*)0),                        _if_conditional62) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_68, "sNode_clone", 6, 901)), "sNode_clone", 6, 902))->clone=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 6, 903)), "sNode_clone", 6, 904))->clone;
                        }
                        if(_if_conditional63=self!=((void*)0),                        _if_conditional63) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_68, "sNode_clone", 7, 905)), "sNode_clone", 7, 906))->compile=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 7, 907)), "sNode_clone", 7, 908))->compile;
                        }
                        if(_if_conditional64=self!=((void*)0),                        _if_conditional64) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_68, "sNode_clone", 8, 909)), "sNode_clone", 8, 910))->sline=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 8, 911)), "sNode_clone", 8, 912))->sline;
                        }
                        if(_if_conditional65=self!=((void*)0),                        _if_conditional65) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_68, "sNode_clone", 9, 913)), "sNode_clone", 9, 914))->sname=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 9, 915)), "sNode_clone", 9, 916))->sname;
                        }
                        if(_if_conditional66=self!=((void*)0),                        _if_conditional66) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_68, "sNode_clone", 10, 917)), "sNode_clone", 10, 918))->terminated=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 10, 919)), "sNode_clone", 10, 920))->terminated;
                        }
                        if(_if_conditional67=self!=((void*)0),                        _if_conditional67) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_68, "sNode_clone", 11, 921)), "sNode_clone", 11, 922))->kind=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 11, 923)), "sNode_clone", 11, 924))->kind;
                        }
                        __result63__ = __result_obj__ = result_68;
                        if(result_68) { result_68 = come_decrement_ref_count2(result_68, ((struct sNode*)result_68)->finalize, ((struct sNode*)result_68)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result63__;
                        if(result_68) { result_68 = come_decrement_ref_count2(result_68, ((struct sNode*)result_68)->finalize, ((struct sNode*)result_68)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_69;
_Bool _while_condtional13;
struct list_item$1sNodeph* prev_it_70;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_69, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_70, 0, sizeof(struct list_item$1sNodeph*));
                it_69=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 120, 930)), "./neo-c.h", 120, 931))->head;
                while(_while_condtional13=it_69!=((void*)0),                _while_condtional13) {
                    prev_it_70=it_69;
                    it_69=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_69, "./neo-c.h", 123, 932)), "./neo-c.h", 123, 933))->next;
                    come_call_finalizer3(prev_it_70,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional71;
struct list$1charph* __result65__;
void* right_value106;
void* right_value107;
struct list$1charph* __exception_result_var_b69;
struct list$1charph* result_71;
struct list_item$1charph* it_72;
_Bool _while_condtional14;
char* __exception_result_var_b70;
void* right_value111;
struct list$1charph* __exception_result_var_b71;
struct list$1charph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
right_value107 = (void*)0;
memset(&result_71, 0, sizeof(struct list$1charph*));
memset(&it_72, 0, sizeof(struct list_item$1charph*));
right_value111 = (void*)0;
                if(_if_conditional71=self==((void*)0),                _if_conditional71) {
                    __result65__ = __result_obj__ = ((void*)0);
                    return __result65__;
                }
                result_71=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 959),__exception_result_var_b69=((struct list$1charph*)(right_value107=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value106=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 139, "list$1charph"))), "./neo-c.h", 139, 951)), "./neo-c.h", 139, 952)))))), come_pop_stackframe(), __exception_result_var_b69));
                come_call_finalizer3(right_value106,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value107,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                it_72=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 141, 960)), "./neo-c.h", 141, 961))->head;
                while(_while_condtional14=it_72!=((void*)0),                _while_condtional14) {
                    (come_push_stackframe("./neo-c.h", 143, 1011),__exception_result_var_b71=list$1charph_add(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_71, "./neo-c.h", 143, 962)), "./neo-c.h", 143, 963)),(char*)come_increment_ref_count(((char*)(right_value111=(come_push_stackframe("./neo-c.h", 143, 1010),__exception_result_var_b70=string_clone(((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_72, "./neo-c.h", 143, 1008)), "./neo-c.h", 143, 1009))->item), come_pop_stackframe(), __exception_result_var_b70))))), come_pop_stackframe(), __exception_result_var_b71);
                    right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    it_72=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_72, "./neo-c.h", 145, 1012)), "./neo-c.h", 145, 1013))->next;
                }
                __result68__ = __result_obj__ = result_71;
                come_call_finalizer3(result_71,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result68__;
                come_call_finalizer3(result_71,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 101, 953)), "./neo-c.h", 101, 954))->head=((void*)0);
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 102, 955)), "./neo-c.h", 102, 956))->tail=((void*)0);
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 103, 957)), "./neo-c.h", 103, 958))->len=0;
                    __result66__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result66__;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional72;
void* right_value108;
struct list_item$1charph* litem_73;
char* __dec_obj31;
_Bool _if_conditional73;
void* right_value109;
struct list_item$1charph* litem_74;
char* __dec_obj32;
void* right_value110;
struct list_item$1charph* litem_75;
char* __dec_obj33;
struct list$1charph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value108 = (void*)0;
memset(&litem_73, 0, sizeof(struct list_item$1charph*));
right_value109 = (void*)0;
memset(&litem_74, 0, sizeof(struct list_item$1charph*));
right_value110 = (void*)0;
memset(&litem_75, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional72=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 152, 964)), "./neo-c.h", 152, 965))->len==0,                        _if_conditional72) {
                            litem_73=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value108=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 153, "list_item$1charph"))));
                            come_call_finalizer3(right_value108,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_73, "./neo-c.h", 155, 966)), "./neo-c.h", 155, 967))->prev=((void*)0);
                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_73, "./neo-c.h", 156, 968)), "./neo-c.h", 156, 969))->next=((void*)0);
                            __dec_obj31=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_73, "./neo-c.h", 157, 970)), "./neo-c.h", 157, 971))->item;
                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_73, "./neo-c.h", 157, 970)), "./neo-c.h", 157, 971))->item=(char*)come_increment_ref_count(item);
                            __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
                            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 159, 972)), "./neo-c.h", 159, 973))->tail=litem_73;
                            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 160, 974)), "./neo-c.h", 160, 975))->head=litem_73;
                        }
                        else {
                            if(_if_conditional73=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 162, 976)), "./neo-c.h", 162, 977))->len==1,                            _if_conditional73) {
                                litem_74=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value109=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 163, "list_item$1charph"))));
                                come_call_finalizer3(right_value109,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_74, "./neo-c.h", 165, 978)), "./neo-c.h", 165, 979))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 165, 980)), "./neo-c.h", 165, 981))->head;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_74, "./neo-c.h", 166, 982)), "./neo-c.h", 166, 983))->next=((void*)0);
                                __dec_obj32=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_74, "./neo-c.h", 167, 984)), "./neo-c.h", 167, 985))->item;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_74, "./neo-c.h", 167, 984)), "./neo-c.h", 167, 985))->item=(char*)come_increment_ref_count(item);
                                __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
                                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 169, 986)), "./neo-c.h", 169, 987))->tail=litem_74;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 170, 988)), "./neo-c.h", 170, 989))->head, "./neo-c.h", 170, 990)), "./neo-c.h", 170, 991))->next=litem_74;
                            }
                            else {
                                litem_75=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value110=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 173, "list_item$1charph"))));
                                come_call_finalizer3(right_value110,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_75, "./neo-c.h", 175, 992)), "./neo-c.h", 175, 993))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 175, 994)), "./neo-c.h", 175, 995))->tail;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_75, "./neo-c.h", 176, 996)), "./neo-c.h", 176, 997))->next=((void*)0);
                                __dec_obj33=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_75, "./neo-c.h", 177, 998)), "./neo-c.h", 177, 999))->item;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_75, "./neo-c.h", 177, 998)), "./neo-c.h", 177, 999))->item=(char*)come_increment_ref_count(item);
                                __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 179, 1000)), "./neo-c.h", 179, 1001))->tail, "./neo-c.h", 179, 1002)), "./neo-c.h", 179, 1003))->next=litem_75;
                                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 180, 1004)), "./neo-c.h", 180, 1005))->tail=litem_75;
                            }
                        }
                        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 183, 1006)), "./neo-c.h", 183, 1007))->len++;
                        __result67__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result67__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_76;
_Bool _while_condtional15;
struct list_item$1charph* prev_it_77;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_76, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_77, 0, sizeof(struct list_item$1charph*));
                it_76=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 120, 1015)), "./neo-c.h", 120, 1016))->head;
                while(_while_condtional15=it_76!=((void*)0),                _while_condtional15) {
                    prev_it_77=it_76;
                    it_76=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_76, "./neo-c.h", 123, 1017)), "./neo-c.h", 123, 1018))->next;
                    come_call_finalizer3(prev_it_77,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional121;
int __result71__;
int __result72__;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional121=self==((void*)0),        _if_conditional121) {
            __result71__ = 0;
            return __result71__;
        }
        __result72__ = ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 360, 1223)), "./neo-c.h", 360, 1224))->len;
        return __result72__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj40;
struct tuple1$1sTypeph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
            __dec_obj40=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "./neo-c.h", 1716, 1239)), "./neo-c.h", 1716, 1240))->v1;
            ((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "./neo-c.h", 1716, 1239)), "./neo-c.h", 1716, 1240))->v1=(struct sType*)come_increment_ref_count(v1);
            come_call_finalizer3(__dec_obj40,sType_finalize, 0, 0, 0, 0, (void*)0);
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
            it_80=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 426, 1246)), "./neo-c.h", 426, 1247))->head;
            while(_while_condtional16=it_80!=((void*)0),            _while_condtional16) {
                prev_it_81=it_80;
                it_80=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_80, "./neo-c.h", 429, 1248)), "./neo-c.h", 429, 1249))->next;
                come_call_finalizer3(prev_it_81,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 433, 1250)), "./neo-c.h", 433, 1251))->head=((void*)0);
            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 434, 1252)), "./neo-c.h", 434, 1253))->tail=((void*)0);
            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 436, 1254)), "./neo-c.h", 436, 1255))->len=0;
            __result75__ = __result_obj__ = self;
            return __result75__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional124;
struct sType* result_83;
void* __exception_result_var_b84;
struct sType* __result76__;
_Bool _if_conditional125;
struct sType* __result77__;
struct sType* result_84;
void* __exception_result_var_b85;
struct sType* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_83, 0, sizeof(struct sType*));
memset(&result_84, 0, sizeof(struct sType*));
            if(_if_conditional124=self==((void*)0),            _if_conditional124) {
                (come_push_stackframe("./neo-c.h", 284, 1261),__exception_result_var_b84=memset(&result_83,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b84);
                __result76__ = __result_obj__ = result_83;
                return __result76__;
            }
            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 287, 1262)), "./neo-c.h", 287, 1263))->it=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 287, 1264)), "./neo-c.h", 287, 1265))->head;
            if(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 289, 1266)), "./neo-c.h", 289, 1267))->it) {
                __result77__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 290, 1268)), "./neo-c.h", 290, 1269))->it, "./neo-c.h", 290, 1270)), "./neo-c.h", 290, 1271))->item;
                return __result77__;
            }
            (come_push_stackframe("./neo-c.h", 294, 1272),__exception_result_var_b85=memset(&result_84,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b85);
            __result78__ = __result_obj__ = result_84;
            return __result78__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result79__;
memset(&__result_obj__, 0, sizeof(void*));
            __result79__ = self==((void*)0)||((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 317, 1276)), "./neo-c.h", 317, 1277))->it==((void*)0);
            return __result79__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional126;
struct sType* result_86;
void* __exception_result_var_b88;
struct sType* __result80__;
_Bool _if_conditional127;
struct sType* __result81__;
struct sType* result_87;
void* __exception_result_var_b89;
struct sType* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_86, 0, sizeof(struct sType*));
memset(&result_87, 0, sizeof(struct sType*));
            if(_if_conditional126=self==((void*)0)||((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 299, 1281)), "./neo-c.h", 299, 1282))->it==((void*)0),            _if_conditional126) {
                (come_push_stackframe("./neo-c.h", 301, 1283),__exception_result_var_b88=memset(&result_86,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b88);
                __result80__ = __result_obj__ = result_86;
                return __result80__;
            }
            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 305, 1284)), "./neo-c.h", 305, 1285))->it=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 305, 1286)), "./neo-c.h", 305, 1287))->it, "./neo-c.h", 305, 1288)), "./neo-c.h", 305, 1289))->next;
            if(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 307, 1290)), "./neo-c.h", 307, 1291))->it) {
                __result81__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 308, 1292)), "./neo-c.h", 308, 1293))->it, "./neo-c.h", 308, 1294)), "./neo-c.h", 308, 1295))->item;
                return __result81__;
            }
            (come_push_stackframe("./neo-c.h", 312, 1296),__exception_result_var_b89=memset(&result_87,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b89);
            __result82__ = __result_obj__ = result_87;
            return __result82__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional128;
void* right_value123;
struct list_item$1sTypeph* litem_89;
struct sType* __dec_obj42;
_Bool _if_conditional129;
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
                if(_if_conditional128=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 222, 1303)), "./neo-c.h", 222, 1304))->len==0,                _if_conditional128) {
                    litem_89=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value123=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 223, "list_item$1sTypeph"))));
                    come_call_finalizer3(right_value123,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_89, "./neo-c.h", 225, 1305)), "./neo-c.h", 225, 1306))->prev=((void*)0);
                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_89, "./neo-c.h", 226, 1307)), "./neo-c.h", 226, 1308))->next=((void*)0);
                    __dec_obj42=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_89, "./neo-c.h", 227, 1309)), "./neo-c.h", 227, 1310))->item;
                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_89, "./neo-c.h", 227, 1309)), "./neo-c.h", 227, 1310))->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj42,sType_finalize, 0, 0, 0, 0, (void*)0);
                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 229, 1311)), "./neo-c.h", 229, 1312))->tail=litem_89;
                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 230, 1313)), "./neo-c.h", 230, 1314))->head=litem_89;
                }
                else {
                    if(_if_conditional129=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 232, 1315)), "./neo-c.h", 232, 1316))->len==1,                    _if_conditional129) {
                        litem_90=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value124=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 233, "list_item$1sTypeph"))));
                        come_call_finalizer3(right_value124,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_90, "./neo-c.h", 235, 1317)), "./neo-c.h", 235, 1318))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 235, 1319)), "./neo-c.h", 235, 1320))->head;
                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_90, "./neo-c.h", 236, 1321)), "./neo-c.h", 236, 1322))->next=((void*)0);
                        __dec_obj43=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_90, "./neo-c.h", 237, 1323)), "./neo-c.h", 237, 1324))->item;
                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_90, "./neo-c.h", 237, 1323)), "./neo-c.h", 237, 1324))->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj43,sType_finalize, 0, 0, 0, 0, (void*)0);
                        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 239, 1325)), "./neo-c.h", 239, 1326))->tail=litem_90;
                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 240, 1327)), "./neo-c.h", 240, 1328))->head, "./neo-c.h", 240, 1329)), "./neo-c.h", 240, 1330))->next=litem_90;
                    }
                    else {
                        litem_91=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value125=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 243, "list_item$1sTypeph"))));
                        come_call_finalizer3(right_value125,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_91, "./neo-c.h", 245, 1331)), "./neo-c.h", 245, 1332))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 245, 1333)), "./neo-c.h", 245, 1334))->tail;
                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_91, "./neo-c.h", 246, 1335)), "./neo-c.h", 246, 1336))->next=((void*)0);
                        __dec_obj44=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_91, "./neo-c.h", 247, 1337)), "./neo-c.h", 247, 1338))->item;
                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_91, "./neo-c.h", 247, 1337)), "./neo-c.h", 247, 1338))->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 0, 0, (void*)0);
                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 249, 1339)), "./neo-c.h", 249, 1340))->tail, "./neo-c.h", 249, 1341)), "./neo-c.h", 249, 1342))->next=litem_91;
                        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 250, 1343)), "./neo-c.h", 250, 1344))->tail=litem_91;
                    }
                }
                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 253, 1345)), "./neo-c.h", 253, 1346))->len++;
                __result83__ = __result_obj__ = self;
                come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result83__;
                come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional132;
struct list_item$1sTypeph* it_101;
int i_102;
_Bool _while_condtional17;
_Bool _if_conditional133;
struct sType* __result84__;
struct sType* default_value_103;
void* __exception_result_var_b98;
struct sType* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_101, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_102, 0, sizeof(int));
memset(&default_value_103, 0, sizeof(struct sType*));
                if(_if_conditional132=position<0,                _if_conditional132) {
                    position+=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 676, 1392)), "./neo-c.h", 676, 1393))->len;
                }
                it_101=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 679, 1394)), "./neo-c.h", 679, 1395))->head;
                i_102=0;
                while(_while_condtional17=it_101!=((void*)0),                _while_condtional17) {
                    if(_if_conditional133=position==i_102,                    _if_conditional133) {
                        __result84__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_101, "./neo-c.h", 683, 1396)), "./neo-c.h", 683, 1397))->item;
                        return __result84__;
                    }
                    it_101=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_101, "./neo-c.h", 685, 1398)), "./neo-c.h", 685, 1399))->next;
                    i_102++;
                }
                (come_push_stackframe("./neo-c.h", 690, 1400),__exception_result_var_b98=memset(&default_value_103,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b98);
                __result85__ = __result_obj__ = default_value_103;
                come_call_finalizer3(default_value_103,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result85__;
                come_call_finalizer3(default_value_103,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional139;
int __result86__;
int __result87__;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional139=self==((void*)0),                _if_conditional139) {
                    __result86__ = 0;
                    return __result86__;
                }
                __result87__ = ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 360, 1418)), "./neo-c.h", 360, 1419))->len;
                return __result87__;
}

struct sType* solve_method_generics(struct sType* type, struct sInfo* info){
void* __result_obj__;
struct sType* __exception_result_var_b125;
void* right_value136;
struct sType* result_123;
struct sClass* klass_124;
int __exception_result_var_b126;
_Bool _if_conditional156;
int generics_number_125;
int __exception_result_var_b127;
_Bool _if_conditional157;
int __exception_result_var_b128;
struct list$1sNodeph* __exception_result_var_b129;
void* right_value137;
struct list$1sNodeph* array_num_126;
_Bool immutable__127;
int pointer_num_128;
_Bool heap_129;
_Bool guard__130;
_Bool no_heap_131;
_Bool no_calling_destructor_132;
_Bool null_value_133;
struct sType* __exception_result_var_b130;
struct sType* __exception_result_var_b131;
void* right_value138;
struct sType* __dec_obj49;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool _if_conditional162;
int __exception_result_var_b132;
_Bool _if_conditional163;
struct list$1sNodeph* __dec_obj50;
_Bool _if_conditional164;
_Bool _if_conditional165;
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
    result_123=(struct sType*)come_increment_ref_count(((struct sType*)(right_value136=(come_push_stackframe("04heap.c", 190, 1545),__exception_result_var_b125=sType_clone(type), come_pop_stackframe(), __exception_result_var_b125))));
    come_call_finalizer3(right_value136,sType_finalize, 0, 1, 0, 0, __result_obj__);
    klass_124=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 192, 1546)), "04heap.c", 192, 1547))->mClass;
    if(_if_conditional156=((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_124, "04heap.c", 194, 1548)), "04heap.c", 194, 1549))->mMethodGenerics&&((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 194, 1550)), "04heap.c", 194, 1551))->method_generics_types&&(come_push_stackframe("04heap.c", 194, 1556),__exception_result_var_b126=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 194, 1552)), "04heap.c", 194, 1553))->method_generics_types, "04heap.c", 194, 1554)), "04heap.c", 194, 1555))), come_pop_stackframe(), __exception_result_var_b126)>0,    _if_conditional156) {
        generics_number_125=((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_124, "04heap.c", 195, 1557)), "04heap.c", 195, 1558))->mMethodGenericsNum;
        if(_if_conditional157=generics_number_125>=(come_push_stackframe("04heap.c", 197, 1563),__exception_result_var_b127=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 197, 1559)), "04heap.c", 197, 1560))->method_generics_types, "04heap.c", 197, 1561)), "04heap.c", 197, 1562))), come_pop_stackframe(), __exception_result_var_b127),        _if_conditional157) {
            (come_push_stackframe("04heap.c", 199,1569),err_msg(info,"invalid method generics parametor number. %d %d",generics_number_125,(come_push_stackframe("04heap.c", 199, 1568),__exception_result_var_b128=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 199, 1564)), "04heap.c", 199, 1565))->method_generics_types, "04heap.c", 199, 1566)), "04heap.c", 199, 1567))), come_pop_stackframe(), __exception_result_var_b128)),come_pop_stackframe());
            (come_push_stackframe("04heap.c", 200,1570),exit(2),come_pop_stackframe());
        }
        array_num_126=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value137=(come_push_stackframe("04heap.c", 203, 1573),__exception_result_var_b129=list$1sNodephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 203, 1571)), "04heap.c", 203, 1572))->mArrayNum), come_pop_stackframe(), __exception_result_var_b129))));
        come_call_finalizer3(right_value137,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        immutable__127=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 204, 1574)), "04heap.c", 204, 1575))->mImmutable;
        pointer_num_128=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 205, 1576)), "04heap.c", 205, 1577))->mPointerNum;
        heap_129=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 206, 1578)), "04heap.c", 206, 1579))->mHeap;
        guard__130=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 207, 1580)), "04heap.c", 207, 1581))->mGuardValue;
        no_heap_131=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 209, 1582)), "04heap.c", 209, 1583))->mNoHeap;
        no_calling_destructor_132=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 210, 1584)), "04heap.c", 210, 1585))->mNoCallingDestructor;
        null_value_133=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 211, 1586)), "04heap.c", 211, 1587))->mNullValue;
        __dec_obj49=result_123;
        result_123=(struct sType*)come_increment_ref_count(((struct sType*)(right_value138=(come_push_stackframe("04heap.c", 213, 1593),__exception_result_var_b131=sType_clone((come_push_stackframe("04heap.c", 213, 1592),__exception_result_var_b130=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 213, 1588)), "04heap.c", 213, 1589))->method_generics_types, "04heap.c", 213, 1590)),generics_number_125), "04heap.c", 213, 1591)), come_pop_stackframe(), __exception_result_var_b130)), come_pop_stackframe(), __exception_result_var_b131))));
        come_call_finalizer3(__dec_obj49,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value138,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(heap_129) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_123, "04heap.c", 216, 1594)), "04heap.c", 216, 1595))->mHeap=heap_129;
        }
        if(guard__130) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_123, "04heap.c", 219, 1596)), "04heap.c", 219, 1597))->mGuardValue=guard__130;
        }
        if(no_heap_131) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_123, "04heap.c", 222, 1598)), "04heap.c", 222, 1599))->mNoHeap=(_Bool)1;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_123, "04heap.c", 223, 1600)), "04heap.c", 223, 1601))->mHeap=(_Bool)0;
        }
        if(no_calling_destructor_132) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_123, "04heap.c", 226, 1602)), "04heap.c", 226, 1603))->mNoCallingDestructor=(_Bool)1;
        }
        if(immutable__127) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_123, "04heap.c", 229, 1604)), "04heap.c", 229, 1605))->mImmutable=immutable__127;
        }
        if(_if_conditional163=(come_push_stackframe("04heap.c", 231, 1608),__exception_result_var_b132=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(array_num_126, "04heap.c", 231, 1606)), "04heap.c", 231, 1607))), come_pop_stackframe(), __exception_result_var_b132)>0,        _if_conditional163) {
            __dec_obj50=((struct sType*)come_null_check(((struct sType*)come_null_check(result_123, "04heap.c", 232, 1609)), "04heap.c", 232, 1610))->mArrayNum;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_123, "04heap.c", 232, 1609)), "04heap.c", 232, 1610))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_126);
            come_call_finalizer3(__dec_obj50,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(null_value_133) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_123, "04heap.c", 236, 1611)), "04heap.c", 236, 1612))->mNullValue=null_value_133;
        }
        if(_if_conditional165=pointer_num_128>0,        _if_conditional165) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_123, "04heap.c", 240, 1613)), "04heap.c", 240, 1614))->mPointerNum+=pointer_num_128;
        }
        come_call_finalizer3(array_num_126,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result89__ = __result_obj__ = result_123;
    come_call_finalizer3(result_123,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result89__;
    come_call_finalizer3(result_123,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sType* solve_type(struct sType* type, struct sType* generics_type, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__;
struct sType* __exception_result_var_b133;
void* right_value139;
struct sType* result_134;
_Bool _if_conditional166;
void* right_value140;
struct sType* __exception_result_var_b134;
struct sType* __dec_obj51;
struct sType* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value139 = (void*)0;
memset(&result_134, 0, sizeof(struct sType*));
right_value140 = (void*)0;
    result_134=(struct sType*)come_increment_ref_count(((struct sType*)(right_value139=(come_push_stackframe("04heap.c", 249, 1615),__exception_result_var_b133=sType_clone(type), come_pop_stackframe(), __exception_result_var_b133))));
    come_call_finalizer3(right_value139,sType_finalize, 0, 1, 0, 0, __result_obj__);
    if(generics_type) {
        __dec_obj51=result_134;
        result_134=(struct sType*)come_increment_ref_count((come_push_stackframe("04heap.c", 252, 1616),__exception_result_var_b134=((struct sType*)(right_value140=solve_generics(result_134,generics_type,info))), come_pop_stackframe(), __exception_result_var_b134));
        come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value140,sType_finalize, 0, 1, 0, 0, __result_obj__);
    }
    __result90__ = __result_obj__ = result_134;
    come_call_finalizer3(result_134,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result90__;
    come_call_finalizer3(result_134,sType_finalize, 0, 0, 0, 0, (void*)0);
}

int get_right_value_id_from_obj(char* obj){
void* __result_obj__;
char* p_135;
_Bool _if_conditional167;
_Bool _while_condtional18;
_Bool _if_conditional168;
int __exception_result_var_b135;
_Bool _if_conditional169;
unsigned long int __exception_result_var_b136;
_Bool __exception_result_var_b137;
_Bool _if_conditional170;
int n_136;
_Bool __exception_result_var_b138;
_Bool _while_condtional19;
int __result91__;
int __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_135, 0, sizeof(char*));
memset(&n_136, 0, sizeof(int));
    p_135=obj;
    if(_if_conditional167=*((char*)come_null_check(p_135, "04heap.c", 263, 1617))==40,    _if_conditional167) {
        p_135++;
        while(_while_condtional18=*((char*)come_null_check(p_135, "04heap.c", 265, 1618))!=41,        _while_condtional18) {
            p_135++;
        }
        p_135++;
        if(_if_conditional168=*((char*)come_null_check(p_135, "04heap.c", 269, 1619))==40,        _if_conditional168) {
            p_135++;
            if(_if_conditional169=(come_push_stackframe("04heap.c", 271, 1620),__exception_result_var_b135=strcmp(p_135,"right_value"), come_pop_stackframe(), __exception_result_var_b135)==0,            _if_conditional169) {
                p_135+=(come_push_stackframe("04heap.c", 272, 1621),__exception_result_var_b136=strlen("right_value"), come_pop_stackframe(), __exception_result_var_b136);
                if(_if_conditional170=(come_push_stackframe("04heap.c", 273, 1623),__exception_result_var_b137=xisdigit(*((char*)come_null_check(p_135, "04heap.c", 273, 1622))), come_pop_stackframe(), __exception_result_var_b137),                _if_conditional170) {
                    n_136=0;
                    while(_while_condtional19=(come_push_stackframe("04heap.c", 275, 1625),__exception_result_var_b138=xisdigit(*((char*)come_null_check(p_135, "04heap.c", 275, 1624))), come_pop_stackframe(), __exception_result_var_b138),                    _while_condtional19) {
                        n_136=n_136*10+*((char*)come_null_check(p_135, "04heap.c", 276, 1626))-48;
                        p_135++;
                    }
                    __result91__ = n_136;
                    obj = come_decrement_ref_count2(obj, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result91__;
                }
            }
        }
    }
    __result92__ = -1;
    obj = come_decrement_ref_count2(obj, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result92__;
    obj = come_decrement_ref_count2(obj, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional171;
void* right_value141;
char* __exception_result_var_b139;
char* __result93__;
_Bool _if_conditional172;
void* right_value142;
char* __exception_result_var_b140;
char* __result94__;
void* right_value143;
struct sRightValueObject* new_value_137;
struct sType* __dec_obj52;
void* right_value144;
char* __exception_result_var_b141;
char* __dec_obj53;
char* __exception_result_var_b142;
void* right_value145;
char* __dec_obj54;
struct list$1sRightValueObjectph* __exception_result_var_b143;
void* right_value149;
char* __exception_result_var_b144;
char* buf_141;
void* right_value150;
char* __exception_result_var_b145;
void* right_value151;
char* __exception_result_var_b146;
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
    if(_if_conditional171=gComeGC||gComeC,    _if_conditional171) {
        __result93__ = __result_obj__ = (come_push_stackframe("04heap.c", 291, 1627),__exception_result_var_b139=((char*)(right_value141=__builtin_string(obj))), come_pop_stackframe(), __exception_result_var_b139);
        come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
        right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result93__;
    }
    if(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 293, 1628)), "04heap.c", 293, 1629))->no_output_come_code) {
        __result94__ = __result_obj__ = (come_push_stackframe("04heap.c", 294, 1630),__exception_result_var_b140=((char*)(right_value142=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b140);
        come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
        right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result94__;
    }
    new_value_137=(struct sRightValueObject*)come_increment_ref_count(((struct sRightValueObject*)(right_value143=(struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1), "04heap.c", 296, "sRightValueObject"))));
    come_call_finalizer3(right_value143,sRightValueObject_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj52=((struct sRightValueObject*)come_null_check(((struct sRightValueObject*)come_null_check(new_value_137, "04heap.c", 297, 1643)), "04heap.c", 297, 1644))->mType;
    ((struct sRightValueObject*)come_null_check(((struct sRightValueObject*)come_null_check(new_value_137, "04heap.c", 297, 1643)), "04heap.c", 297, 1644))->mType=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj52,sType_finalize, 0, 0, 0, 0, (void*)0);
    ((struct sRightValueObject*)come_null_check(((struct sRightValueObject*)come_null_check(new_value_137, "04heap.c", 298, 1645)), "04heap.c", 298, 1646))->mFreed=(_Bool)0;
    ((struct sRightValueObject*)come_null_check(((struct sRightValueObject*)come_null_check(new_value_137, "04heap.c", 299, 1647)), "04heap.c", 299, 1648))->mID=gRightValueNum;
    __dec_obj53=((struct sRightValueObject*)come_null_check(((struct sRightValueObject*)come_null_check(new_value_137, "04heap.c", 300, 1649)), "04heap.c", 300, 1650))->mVarName;
    ((struct sRightValueObject*)come_null_check(((struct sRightValueObject*)come_null_check(new_value_137, "04heap.c", 300, 1649)), "04heap.c", 300, 1650))->mVarName=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 300, 1651),__exception_result_var_b141=((char*)(right_value144=xsprintf("right_value%d",gRightValueNum++))), come_pop_stackframe(), __exception_result_var_b141));
    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj54=((struct sRightValueObject*)come_null_check(((struct sRightValueObject*)come_null_check(new_value_137, "04heap.c", 301, 1652)), "04heap.c", 301, 1653))->mFunName;
    ((struct sRightValueObject*)come_null_check(((struct sRightValueObject*)come_null_check(new_value_137, "04heap.c", 301, 1652)), "04heap.c", 301, 1653))->mFunName=(char*)come_increment_ref_count(((char*)(right_value145=(come_push_stackframe("04heap.c", 301, 1658),__exception_result_var_b142=string_clone(((struct sFun*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 301, 1654)), "04heap.c", 301, 1655))->come_fun, "04heap.c", 301, 1656)), "04heap.c", 301, 1657))->mName), come_pop_stackframe(), __exception_result_var_b142))));
    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    ((struct sRightValueObject*)come_null_check(((struct sRightValueObject*)come_null_check(new_value_137, "04heap.c", 302, 1659)), "04heap.c", 302, 1660))->mBlockLevel=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 302, 1661)), "04heap.c", 302, 1662))->block_level;
    (come_push_stackframe("04heap.c", 304, 1715),__exception_result_var_b143=list$1sRightValueObjectph_push_back(((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 304, 1663)), "04heap.c", 304, 1664))->right_value_objects, "04heap.c", 304, 1665)), "04heap.c", 304, 1666)),(struct sRightValueObject*)come_increment_ref_count(new_value_137)), come_pop_stackframe(), __exception_result_var_b143);
    buf_141=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 306, 1716),__exception_result_var_b144=((char*)(right_value149=xsprintf("void* right_value%d;\n",gRightValueNum-1))), come_pop_stackframe(), __exception_result_var_b144));
    right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("04heap.c", 307,1717),add_come_code_at_function_head(info,buf_141),come_pop_stackframe());
    (come_push_stackframe("04heap.c", 308,1718),add_come_code_at_function_head2(info,"right_value%d = (void*)0;\n",gRightValueNum-1),come_pop_stackframe());
    __result96__ = __result_obj__ = ((char*)come_null_check((come_push_stackframe("04heap.c", 310, 1722),__exception_result_var_b146=((char*)(right_value151=xsprintf("((%s)(%s=%s))",(come_push_stackframe("04heap.c", 310, 1719),__exception_result_var_b145=((char*)(right_value150=make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b145),((struct sRightValueObject*)come_null_check(((struct sRightValueObject*)come_null_check(new_value_137, "04heap.c", 310, 1720)), "04heap.c", 310, 1721))->mVarName,obj))), come_pop_stackframe(), __exception_result_var_b146), "04heap.c", 310, 1723));
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
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool _if_conditional175;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional173=self!=((void*)0)&&((struct sRightValueObject*)come_null_check(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 0, 1631)), "sRightValueObject_finalize", 0, 1632))->mType!=((void*)0),        _if_conditional173) {
            come_call_finalizer3(((struct sRightValueObject*)come_null_check(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 0, 1633)), "sRightValueObject_finalize", 0, 1634))->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional174=self!=((void*)0)&&((struct sRightValueObject*)come_null_check(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1, 1635)), "sRightValueObject_finalize", 1, 1636))->mVarName!=((void*)0),        _if_conditional174) {
            ((struct sRightValueObject*)come_null_check(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1, 1637)), "sRightValueObject_finalize", 1, 1638))->mVarName = come_decrement_ref_count2(((struct sRightValueObject*)come_null_check(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1, 1637)), "sRightValueObject_finalize", 1, 1638))->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional175=self!=((void*)0)&&((struct sRightValueObject*)come_null_check(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2, 1639)), "sRightValueObject_finalize", 2, 1640))->mFunName!=((void*)0),        _if_conditional175) {
            ((struct sRightValueObject*)come_null_check(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2, 1641)), "sRightValueObject_finalize", 2, 1642))->mFunName = come_decrement_ref_count2(((struct sRightValueObject*)come_null_check(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2, 1641)), "sRightValueObject_finalize", 2, 1642))->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_push_back(struct list$1sRightValueObjectph* self, struct sRightValueObject* item){
void* __result_obj__;
_Bool _if_conditional176;
void* right_value146;
struct list_item$1sRightValueObjectph* litem_138;
struct sRightValueObject* __dec_obj55;
_Bool _if_conditional178;
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
        if(_if_conditional176=((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 222, 1667)), "./neo-c.h", 222, 1668))->len==0,        _if_conditional176) {
            litem_138=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value146=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./neo-c.h", 223, "list_item$1sRightValueObjectph"))));
            come_call_finalizer3(right_value146,list_item$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
            ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list_item$1sRightValueObjectph*)come_null_check(litem_138, "./neo-c.h", 225, 1673)), "./neo-c.h", 225, 1674))->prev=((void*)0);
            ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list_item$1sRightValueObjectph*)come_null_check(litem_138, "./neo-c.h", 226, 1675)), "./neo-c.h", 226, 1676))->next=((void*)0);
            __dec_obj55=((struct list_item$1sRightValueObjectph*)come_null_check(((struct list_item$1sRightValueObjectph*)come_null_check(litem_138, "./neo-c.h", 227, 1677)), "./neo-c.h", 227, 1678))->item;
            ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list_item$1sRightValueObjectph*)come_null_check(litem_138, "./neo-c.h", 227, 1677)), "./neo-c.h", 227, 1678))->item=(struct sRightValueObject*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj55,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
            ((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 229, 1679)), "./neo-c.h", 229, 1680))->tail=litem_138;
            ((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 230, 1681)), "./neo-c.h", 230, 1682))->head=litem_138;
        }
        else {
            if(_if_conditional178=((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 232, 1683)), "./neo-c.h", 232, 1684))->len==1,            _if_conditional178) {
                litem_139=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value147=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./neo-c.h", 233, "list_item$1sRightValueObjectph"))));
                come_call_finalizer3(right_value147,list_item$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
                ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list_item$1sRightValueObjectph*)come_null_check(litem_139, "./neo-c.h", 235, 1685)), "./neo-c.h", 235, 1686))->prev=((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 235, 1687)), "./neo-c.h", 235, 1688))->head;
                ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list_item$1sRightValueObjectph*)come_null_check(litem_139, "./neo-c.h", 236, 1689)), "./neo-c.h", 236, 1690))->next=((void*)0);
                __dec_obj56=((struct list_item$1sRightValueObjectph*)come_null_check(((struct list_item$1sRightValueObjectph*)come_null_check(litem_139, "./neo-c.h", 237, 1691)), "./neo-c.h", 237, 1692))->item;
                ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list_item$1sRightValueObjectph*)come_null_check(litem_139, "./neo-c.h", 237, 1691)), "./neo-c.h", 237, 1692))->item=(struct sRightValueObject*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj56,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
                ((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 239, 1693)), "./neo-c.h", 239, 1694))->tail=litem_139;
                ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 240, 1695)), "./neo-c.h", 240, 1696))->head, "./neo-c.h", 240, 1697)), "./neo-c.h", 240, 1698))->next=litem_139;
            }
            else {
                litem_140=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value148=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./neo-c.h", 243, "list_item$1sRightValueObjectph"))));
                come_call_finalizer3(right_value148,list_item$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
                ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list_item$1sRightValueObjectph*)come_null_check(litem_140, "./neo-c.h", 245, 1699)), "./neo-c.h", 245, 1700))->prev=((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 245, 1701)), "./neo-c.h", 245, 1702))->tail;
                ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list_item$1sRightValueObjectph*)come_null_check(litem_140, "./neo-c.h", 246, 1703)), "./neo-c.h", 246, 1704))->next=((void*)0);
                __dec_obj57=((struct list_item$1sRightValueObjectph*)come_null_check(((struct list_item$1sRightValueObjectph*)come_null_check(litem_140, "./neo-c.h", 247, 1705)), "./neo-c.h", 247, 1706))->item;
                ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list_item$1sRightValueObjectph*)come_null_check(litem_140, "./neo-c.h", 247, 1705)), "./neo-c.h", 247, 1706))->item=(struct sRightValueObject*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj57,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
                ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 249, 1707)), "./neo-c.h", 249, 1708))->tail, "./neo-c.h", 249, 1709)), "./neo-c.h", 249, 1710))->next=litem_140;
                ((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 250, 1711)), "./neo-c.h", 250, 1712))->tail=litem_140;
            }
        }
        ((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 253, 1713)), "./neo-c.h", 253, 1714))->len++;
        __result95__ = __result_obj__ = self;
        come_call_finalizer3(item,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
        return __result95__;
        come_call_finalizer3(item,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional177;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional177=self!=((void*)0)&&((struct list_item$1sRightValueObjectph*)come_null_check(((struct list_item$1sRightValueObjectph*)come_null_check(self, "list_item$1sRightValueObjectphp_finalize", 0, 1669)), "list_item$1sRightValueObjectphp_finalize", 0, 1670))->item!=((void*)0),                _if_conditional177) {
                    come_call_finalizer3(((struct list_item$1sRightValueObjectph*)come_null_check(((struct list_item$1sRightValueObjectph*)come_null_check(self, "list_item$1sRightValueObjectphp_finalize", 0, 1671)), "list_item$1sRightValueObjectphp_finalize", 0, 1672))->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
                }
}

void remove_object_from_right_values(int right_value_num, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional179;
int i_142;
struct list$1sRightValueObjectph* o2_saved_143;
struct sRightValueObject* __exception_result_var_b149;
struct sRightValueObject* it_146;
_Bool __exception_result_var_b150;
struct sRightValueObject* __exception_result_var_b153;
_Bool _if_conditional184;
struct list$1sRightValueObjectph* __exception_result_var_b155;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_142, 0, sizeof(int));
memset(&o2_saved_143, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_146, 0, sizeof(struct sRightValueObject*));
    if(_if_conditional179=gComeGC||gComeC,    _if_conditional179) {
        return;
    }
    i_142=0;
    for(    o2_saved_143=(struct list$1sRightValueObjectph*)come_increment_ref_count((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 319, 1724)), "04heap.c", 319, 1725))->right_value_objects)),it_146=(come_push_stackframe("04heap.c", 319, 1740),__exception_result_var_b149=list$1sRightValueObjectph_begin(((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_143), "04heap.c", 319, 1726)), "04heap.c", 319, 1727))), come_pop_stackframe(), __exception_result_var_b149);    !(come_push_stackframe("04heap.c", 319, 1745),__exception_result_var_b150=list$1sRightValueObjectph_end(((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_143), "04heap.c", 319, 1741)), "04heap.c", 319, 1742))), come_pop_stackframe(), __exception_result_var_b150);    it_146=(come_push_stackframe("04heap.c", 319, 1764),__exception_result_var_b153=list$1sRightValueObjectph_next(((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_143), "04heap.c", 319, 1746)), "04heap.c", 319, 1747))), come_pop_stackframe(), __exception_result_var_b153)    ){
        if(_if_conditional184=((struct sRightValueObject*)come_null_check(((struct sRightValueObject*)come_null_check(it_146, "04heap.c", 320, 1765)), "04heap.c", 320, 1766))->mID==right_value_num,        _if_conditional184) {
            break;
        }
        i_142++;
    }
    come_call_finalizer3(o2_saved_143,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    (come_push_stackframe("04heap.c", 326, 1844),__exception_result_var_b155=list$1sRightValueObjectph_delete(((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 326, 1771)), "04heap.c", 326, 1772))->right_value_objects, "04heap.c", 326, 1773)), "04heap.c", 326, 1774)),i_142,i_142+1), come_pop_stackframe(), __exception_result_var_b155);
}

static struct sRightValueObject* list$1sRightValueObjectph_begin(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional180;
struct sRightValueObject* result_144;
void* __exception_result_var_b147;
struct sRightValueObject* __result97__;
_Bool _if_conditional181;
struct sRightValueObject* __result98__;
struct sRightValueObject* result_145;
void* __exception_result_var_b148;
struct sRightValueObject* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_144, 0, sizeof(struct sRightValueObject*));
memset(&result_145, 0, sizeof(struct sRightValueObject*));
        if(_if_conditional180=self==((void*)0),        _if_conditional180) {
            (come_push_stackframe("./neo-c.h", 284, 1728),__exception_result_var_b147=memset(&result_144,0,sizeof(struct sRightValueObject*)), come_pop_stackframe(), __exception_result_var_b147);
            __result97__ = __result_obj__ = result_144;
            return __result97__;
        }
        ((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 287, 1729)), "./neo-c.h", 287, 1730))->it=((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 287, 1731)), "./neo-c.h", 287, 1732))->head;
        if(((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 289, 1733)), "./neo-c.h", 289, 1734))->it) {
            __result98__ = __result_obj__ = ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 290, 1735)), "./neo-c.h", 290, 1736))->it, "./neo-c.h", 290, 1737)), "./neo-c.h", 290, 1738))->item;
            return __result98__;
        }
        (come_push_stackframe("./neo-c.h", 294, 1739),__exception_result_var_b148=memset(&result_145,0,sizeof(struct sRightValueObject*)), come_pop_stackframe(), __exception_result_var_b148);
        __result99__ = __result_obj__ = result_145;
        return __result99__;
}

static _Bool list$1sRightValueObjectph_end(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
        __result100__ = self==((void*)0)||((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 317, 1743)), "./neo-c.h", 317, 1744))->it==((void*)0);
        return __result100__;
}

static struct sRightValueObject* list$1sRightValueObjectph_next(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional182;
struct sRightValueObject* result_147;
void* __exception_result_var_b151;
struct sRightValueObject* __result101__;
_Bool _if_conditional183;
struct sRightValueObject* __result102__;
struct sRightValueObject* result_148;
void* __exception_result_var_b152;
struct sRightValueObject* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_147, 0, sizeof(struct sRightValueObject*));
memset(&result_148, 0, sizeof(struct sRightValueObject*));
        if(_if_conditional182=self==((void*)0)||((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 299, 1748)), "./neo-c.h", 299, 1749))->it==((void*)0),        _if_conditional182) {
            (come_push_stackframe("./neo-c.h", 301, 1750),__exception_result_var_b151=memset(&result_147,0,sizeof(struct sRightValueObject*)), come_pop_stackframe(), __exception_result_var_b151);
            __result101__ = __result_obj__ = result_147;
            return __result101__;
        }
        ((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 305, 1751)), "./neo-c.h", 305, 1752))->it=((struct list_item$1sRightValueObjectph*)come_null_check(((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 305, 1753)), "./neo-c.h", 305, 1754))->it, "./neo-c.h", 305, 1755)), "./neo-c.h", 305, 1756))->next;
        if(((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 307, 1757)), "./neo-c.h", 307, 1758))->it) {
            __result102__ = __result_obj__ = ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 308, 1759)), "./neo-c.h", 308, 1760))->it, "./neo-c.h", 308, 1761)), "./neo-c.h", 308, 1762))->item;
            return __result102__;
        }
        (come_push_stackframe("./neo-c.h", 312, 1763),__exception_result_var_b152=memset(&result_148,0,sizeof(struct sRightValueObject*)), come_pop_stackframe(), __exception_result_var_b152);
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
        it_149=((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 120, 1767)), "./neo-c.h", 120, 1768))->head;
        while(_while_condtional20=it_149!=((void*)0),        _while_condtional20) {
            prev_it_150=it_149;
            it_149=((struct list_item$1sRightValueObjectph*)come_null_check(((struct list_item$1sRightValueObjectph*)come_null_check(it_149, "./neo-c.h", 123, 1769)), "./neo-c.h", 123, 1770))->next;
            come_call_finalizer3(prev_it_150,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_delete(struct list$1sRightValueObjectph* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional185;
_Bool _if_conditional186;
_Bool _if_conditional187;
int tmp_151;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
struct list$1sRightValueObjectph* __result104__;
_Bool _if_conditional191;
struct list$1sRightValueObjectph* __exception_result_var_b154;
_Bool _if_conditional192;
struct list_item$1sRightValueObjectph* it_154;
int i_155;
_Bool _while_condtional22;
_Bool _if_conditional193;
struct list_item$1sRightValueObjectph* prev_it_156;
_Bool _if_conditional194;
_Bool _if_conditional195;
struct list_item$1sRightValueObjectph* it_157;
int i_158;
_Bool _while_condtional23;
_Bool _if_conditional196;
_Bool _if_conditional197;
struct list_item$1sRightValueObjectph* prev_it_159;
struct list_item$1sRightValueObjectph* it_160;
struct list_item$1sRightValueObjectph* head_prev_it_161;
struct list_item$1sRightValueObjectph* tail_it_162;
int i_163;
_Bool _while_condtional24;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
struct list_item$1sRightValueObjectph* prev_it_164;
_Bool _if_conditional201;
_Bool _if_conditional202;
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
        if(_if_conditional185=head<0,        _if_conditional185) {
            head+=((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 458, 1775)), "./neo-c.h", 458, 1776))->len;
        }
        if(_if_conditional186=tail<0,        _if_conditional186) {
            tail+=((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 461, 1777)), "./neo-c.h", 461, 1778))->len+1;
        }
        if(_if_conditional187=head>tail,        _if_conditional187) {
            tmp_151=tail;
            tail=head;
            head=tmp_151;
        }
        if(_if_conditional188=head<0,        _if_conditional188) {
            head=0;
        }
        if(_if_conditional189=tail>((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 474, 1779)), "./neo-c.h", 474, 1780))->len,        _if_conditional189) {
            tail=((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 475, 1781)), "./neo-c.h", 475, 1782))->len;
        }
        if(_if_conditional190=head==tail,        _if_conditional190) {
            __result104__ = __result_obj__ = self;
            return __result104__;
        }
        if(_if_conditional191=head==0&&tail==((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 482, 1783)), "./neo-c.h", 482, 1784))->len,        _if_conditional191) {
            (come_push_stackframe("./neo-c.h", 484, 1797),__exception_result_var_b154=list$1sRightValueObjectph_reset(((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 484, 1785)), "./neo-c.h", 484, 1786))), come_pop_stackframe(), __exception_result_var_b154);
        }
        else {
            if(_if_conditional192=head==0,            _if_conditional192) {
                it_154=((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 487, 1798)), "./neo-c.h", 487, 1799))->head;
                i_155=0;
                while(_while_condtional22=it_154!=((void*)0),                _while_condtional22) {
                    if(_if_conditional193=i_155<tail,                    _if_conditional193) {
                        prev_it_156=it_154;
                        it_154=((struct list_item$1sRightValueObjectph*)come_null_check(((struct list_item$1sRightValueObjectph*)come_null_check(it_154, "./neo-c.h", 493, 1800)), "./neo-c.h", 493, 1801))->next;
                        i_155++;
                        come_call_finalizer3(prev_it_156,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                        ((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 498, 1802)), "./neo-c.h", 498, 1803))->len--;
                    }
                    else {
                        if(_if_conditional194=i_155==tail,                        _if_conditional194) {
                            ((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 501, 1804)), "./neo-c.h", 501, 1805))->head=it_154;
                            ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 502, 1806)), "./neo-c.h", 502, 1807))->head, "./neo-c.h", 502, 1808)), "./neo-c.h", 502, 1809))->prev=((void*)0);
                            break;
                        }
                        else {
                            it_154=((struct list_item$1sRightValueObjectph*)come_null_check(((struct list_item$1sRightValueObjectph*)come_null_check(it_154, "./neo-c.h", 506, 1810)), "./neo-c.h", 506, 1811))->next;
                            i_155++;
                        }
                    }
                }
            }
            else {
                if(_if_conditional195=tail==((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 511, 1812)), "./neo-c.h", 511, 1813))->len,                _if_conditional195) {
                    it_157=((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 512, 1814)), "./neo-c.h", 512, 1815))->head;
                    i_158=0;
                    while(_while_condtional23=it_157!=((void*)0),                    _while_condtional23) {
                        if(_if_conditional196=i_158==head,                        _if_conditional196) {
                            ((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 516, 1816)), "./neo-c.h", 516, 1817))->tail=((struct list_item$1sRightValueObjectph*)come_null_check(((struct list_item$1sRightValueObjectph*)come_null_check(it_157, "./neo-c.h", 516, 1818)), "./neo-c.h", 516, 1819))->prev;
                            ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 517, 1820)), "./neo-c.h", 517, 1821))->tail, "./neo-c.h", 517, 1822)), "./neo-c.h", 517, 1823))->next=((void*)0);
                        }
                        if(_if_conditional197=i_158>=head,                        _if_conditional197) {
                            prev_it_159=it_157;
                            it_157=((struct list_item$1sRightValueObjectph*)come_null_check(((struct list_item$1sRightValueObjectph*)come_null_check(it_157, "./neo-c.h", 523, 1824)), "./neo-c.h", 523, 1825))->next;
                            i_158++;
                            come_call_finalizer3(prev_it_159,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                            ((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 528, 1826)), "./neo-c.h", 528, 1827))->len--;
                        }
                        else {
                            it_157=((struct list_item$1sRightValueObjectph*)come_null_check(((struct list_item$1sRightValueObjectph*)come_null_check(it_157, "./neo-c.h", 531, 1828)), "./neo-c.h", 531, 1829))->next;
                            i_158++;
                        }
                    }
                }
                else {
                    it_160=((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 537, 1830)), "./neo-c.h", 537, 1831))->head;
                    head_prev_it_161=((void*)0);
                    tail_it_162=((void*)0);
                    i_163=0;
                    while(_while_condtional24=it_160!=((void*)0),                    _while_condtional24) {
                        if(_if_conditional198=i_163==head,                        _if_conditional198) {
                            head_prev_it_161=((struct list_item$1sRightValueObjectph*)come_null_check(((struct list_item$1sRightValueObjectph*)come_null_check(it_160, "./neo-c.h", 546, 1832)), "./neo-c.h", 546, 1833))->prev;
                        }
                        if(_if_conditional199=i_163==tail,                        _if_conditional199) {
                            tail_it_162=it_160;
                        }
                        if(_if_conditional200=i_163>=head&&i_163<tail,                        _if_conditional200) {
                            prev_it_164=it_160;
                            it_160=((struct list_item$1sRightValueObjectph*)come_null_check(((struct list_item$1sRightValueObjectph*)come_null_check(it_160, "./neo-c.h", 556, 1834)), "./neo-c.h", 556, 1835))->next;
                            i_163++;
                            come_call_finalizer3(prev_it_164,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                            ((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 561, 1836)), "./neo-c.h", 561, 1837))->len--;
                        }
                        else {
                            it_160=((struct list_item$1sRightValueObjectph*)come_null_check(((struct list_item$1sRightValueObjectph*)come_null_check(it_160, "./neo-c.h", 564, 1838)), "./neo-c.h", 564, 1839))->next;
                            i_163++;
                        }
                    }
                    if(_if_conditional201=head_prev_it_161!=((void*)0),                    _if_conditional201) {
                        ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list_item$1sRightValueObjectph*)come_null_check(head_prev_it_161, "./neo-c.h", 570, 1840)), "./neo-c.h", 570, 1841))->next=tail_it_162;
                    }
                    if(_if_conditional202=tail_it_162!=((void*)0),                    _if_conditional202) {
                        ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list_item$1sRightValueObjectph*)come_null_check(tail_it_162, "./neo-c.h", 573, 1842)), "./neo-c.h", 573, 1843))->prev=head_prev_it_161;
                    }
                }
            }
        }
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
                it_152=((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 426, 1787)), "./neo-c.h", 426, 1788))->head;
                while(_while_condtional21=it_152!=((void*)0),                _while_condtional21) {
                    prev_it_153=it_152;
                    it_152=((struct list_item$1sRightValueObjectph*)come_null_check(((struct list_item$1sRightValueObjectph*)come_null_check(it_152, "./neo-c.h", 429, 1789)), "./neo-c.h", 429, 1790))->next;
                    come_call_finalizer3(prev_it_153,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                ((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 433, 1791)), "./neo-c.h", 433, 1792))->head=((void*)0);
                ((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 434, 1793)), "./neo-c.h", 434, 1794))->tail=((void*)0);
                ((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 436, 1795)), "./neo-c.h", 436, 1796))->len=0;
                __result105__ = __result_obj__ = self;
                return __result105__;
}

char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional203;
void* right_value152;
char* __exception_result_var_b156;
char* __result107__;
struct sClass* klass_165;
void* right_value153;
char* __exception_result_var_b157;
char* type_name_166;
void* right_value154;
char* __exception_result_var_b158;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
right_value152 = (void*)0;
memset(&klass_165, 0, sizeof(struct sClass*));
right_value153 = (void*)0;
memset(&type_name_166, 0, sizeof(char*));
right_value154 = (void*)0;
    if(_if_conditional203=gComeGC||gComeC,    _if_conditional203) {
        __result107__ = __result_obj__ = (come_push_stackframe("04heap.c", 332, 1845),__exception_result_var_b156=((char*)(right_value152=__builtin_string(obj))), come_pop_stackframe(), __exception_result_var_b156);
        right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result107__;
    }
    klass_165=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 334, 1846)), "04heap.c", 334, 1847))->mClass;
    type_name_166=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 336, 1848),__exception_result_var_b157=((char*)(right_value153=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b157));
    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result108__ = __result_obj__ = (come_push_stackframe("04heap.c", 338, 1849),__exception_result_var_b158=((char*)(right_value154=xsprintf("(%s)come_increment_ref_count(%s)",type_name_166,obj))), come_pop_stackframe(), __exception_result_var_b158);
    type_name_166 = come_decrement_ref_count2(type_name_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result108__;
    type_name_166 = come_decrement_ref_count2(type_name_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_){
void* __result_obj__;
_Bool _if_conditional204;
struct list$1CVALUEph* stack_saved_167;
struct list$1sRightValueObjectph* right_value_objects_168;
struct sClass* klass_169;
void* right_value155;
char* __exception_result_var_b159;
char* name_171;
void* right_value156;
char* __exception_result_var_b160;
_Bool no_decrement_172;
_Bool no_free_173;
_Bool _if_conditional205;
void* right_value157;
char* __exception_result_var_b161;
char* c_value_174;
struct sClass* klass_175;
char* class_name_176;
char* fun_name_177;
struct sType* __exception_result_var_b162;
void* right_value158;
struct sType* type2_178;
void* right_value159;
char* __exception_result_var_b163;
char* fun_name2_179;
_Bool _if_conditional206;
struct sFun* finalizer_180;
int __exception_result_var_b164;
_Bool _if_conditional207;
struct sFun* __exception_result_var_b168;
_Bool _if_conditional227;
void* right_value160;
char* __exception_result_var_b169;
char* none_generics_name_184;
void* right_value161;
char* __exception_result_var_b170;
char* generics_fun_name_185;
struct sGenericsFun* __exception_result_var_b174;
struct sGenericsFun* generics_fun_186;
_Bool _if_conditional242;
_Bool __exception_result_var_b175;
_Bool _if_conditional243;
int __exception_result_var_b176;
struct sFun* __exception_result_var_b177;
int i_190;
void* right_value162;
char* __exception_result_var_b178;
char* new_fun_name_191;
struct sFun* __exception_result_var_b179;
_Bool _if_conditional244;
void* right_value163;
char* __exception_result_var_b180;
char* __dec_obj58;
_Bool _if_conditional245;
struct sFun* __exception_result_var_b181;
_Bool _if_conditional246;
void* right_value164;
struct tuple2$2sFunpcharph* __exception_result_var_b182;
struct tuple2$2sFunpcharph* multiple_assign_var1;
struct sFun* fun_192;
char* new_fun_name_193;
char* __dec_obj59;
_Bool _if_conditional248;
_Bool _if_conditional249;
void* right_value165;
char* __exception_result_var_b183;
char* type_name_194;
_Bool _if_conditional250;
_Bool _if_conditional251;
void* right_value166;
char* __exception_result_var_b184;
_Bool _if_conditional252;
void* right_value167;
char* __exception_result_var_b185;
char* type_name_195;
void* right_value168;
char* __exception_result_var_b186;
void* right_value169;
char* __exception_result_var_b187;
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
memset(&generics_fun_186, 0, sizeof(struct sGenericsFun*));
memset(&i_190, 0, sizeof(int));
right_value162 = (void*)0;
memset(&new_fun_name_191, 0, sizeof(char*));
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value165 = (void*)0;
memset(&type_name_194, 0, sizeof(char*));
right_value166 = (void*)0;
right_value167 = (void*)0;
memset(&type_name_195, 0, sizeof(char*));
right_value168 = (void*)0;
right_value169 = (void*)0;
    if(_if_conditional204=gComeGC||gComeC,    _if_conditional204) {
        return;
    }
    stack_saved_167=(struct list$1CVALUEph*)come_increment_ref_count(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 346, 1850)), "04heap.c", 346, 1851))->stack);
    right_value_objects_168=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 347, 1852)), "04heap.c", 347, 1853))->right_value_objects;
    klass_169=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 349, 1854)), "04heap.c", 349, 1855))->mClass;
    static int dec_num_170=0;
    name_171=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 353, 1856),__exception_result_var_b159=((char*)(right_value155=xsprintf("__dec_obj%d",++dec_num_170))), come_pop_stackframe(), __exception_result_var_b159));
    right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("04heap.c", 354,1858),add_come_code_at_function_head(info,"%s;\n",(come_push_stackframe("04heap.c", 354, 1857),__exception_result_var_b160=((char*)(right_value156=make_define_var(type,name_171,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b160)),come_pop_stackframe());
    right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("04heap.c", 356,1859),add_come_code(info,"%s=%s;\n",name_171,obj),come_pop_stackframe());
    obj=name_171;
    no_decrement_172=(_Bool)0;
    no_free_173=(_Bool)0;
    if(_if_conditional205=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 362, 1860)), "04heap.c", 362, 1861))->mPointerNum>0,    _if_conditional205) {
        c_value_174=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 363, 1862),__exception_result_var_b161=((char*)(right_value157=__builtin_string(obj))), come_pop_stackframe(), __exception_result_var_b161));
        right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        klass_175=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 365, 1863)), "04heap.c", 365, 1864))->mClass;
        class_name_176=((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_175, "04heap.c", 367, 1865)), "04heap.c", 367, 1866))->mName;
        fun_name_177="finalize";
        type2_178=(struct sType*)come_increment_ref_count(((struct sType*)(right_value158=(come_push_stackframe("04heap.c", 371, 1867),__exception_result_var_b162=sType_clone(type), come_pop_stackframe(), __exception_result_var_b162))));
        come_call_finalizer3(right_value158,sType_finalize, 0, 1, 0, 0, __result_obj__);
        ((struct sType*)come_null_check(((struct sType*)come_null_check(type2_178, "04heap.c", 372, 1868)), "04heap.c", 372, 1869))->mHeap=(_Bool)0;
        fun_name2_179=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 374, 1870),__exception_result_var_b163=((char*)(right_value159=create_method_name(type,(_Bool)0,fun_name_177,info,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b163));
        right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 376, 1871)), "04heap.c", 376, 1872))->mNoSolvedGenericsType, "04heap.c", 376, 1873)), "04heap.c", 376, 1874))->v1) {
            type=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 377, 1875)), "04heap.c", 377, 1876))->mNoSolvedGenericsType, "04heap.c", 377, 1877)), "04heap.c", 377, 1878))->v1;
        }
        finalizer_180=((void*)0);
        if(_if_conditional207=(come_push_stackframe("04heap.c", 381, 1883),__exception_result_var_b164=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 381, 1879)), "04heap.c", 381, 1880))->mGenericsTypes, "04heap.c", 381, 1881)), "04heap.c", 381, 1882))), come_pop_stackframe(), __exception_result_var_b164)>0,        _if_conditional207) {
            finalizer_180=(come_push_stackframe("04heap.c", 382, 1966),__exception_result_var_b168=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 382, 1884)), "04heap.c", 382, 1885))->funcs,fun_name2_179), come_pop_stackframe(), __exception_result_var_b168);
            if(_if_conditional227=finalizer_180==((void*)0),            _if_conditional227) {
                none_generics_name_184=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 385, 1971),__exception_result_var_b169=((char*)(right_value160=get_none_generics_name(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type2_178, "04heap.c", 385, 1967)), "04heap.c", 385, 1968))->mClass, "04heap.c", 385, 1969)), "04heap.c", 385, 1970))->mName))), come_pop_stackframe(), __exception_result_var_b169));
                right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                generics_fun_name_185=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 387, 1972),__exception_result_var_b170=((char*)(right_value161=xsprintf("%s_%s",none_generics_name_184,fun_name_177))), come_pop_stackframe(), __exception_result_var_b170));
                right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                generics_fun_186=(come_push_stackframe("04heap.c", 388, 2035),__exception_result_var_b174=map$2charphsGenericsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 388, 1973)), "04heap.c", 388, 1974))->generics_funcs,generics_fun_name_185), come_pop_stackframe(), __exception_result_var_b174);
                if(generics_fun_186) {
                    if(_if_conditional243=!(come_push_stackframe("04heap.c", 391, 2036),__exception_result_var_b175=create_generics_fun((char*)come_increment_ref_count(fun_name2_179),generics_fun_186,type,info), come_pop_stackframe(), __exception_result_var_b175),                    _if_conditional243) {
                        (come_push_stackframe("04heap.c", 393, 2041),__exception_result_var_b176=printf("%s %d: can't create generics finalizer\n",((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 393, 2037)), "04heap.c", 393, 2038))->sname,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 393, 2039)), "04heap.c", 393, 2040))->sline), come_pop_stackframe(), __exception_result_var_b176);
                        (come_push_stackframe("04heap.c", 394,2042),exit(2),come_pop_stackframe());
                    }
                    finalizer_180=(come_push_stackframe("04heap.c", 396, 2045),__exception_result_var_b177=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 396, 2043)), "04heap.c", 396, 2044))->funcs,fun_name2_179), come_pop_stackframe(), __exception_result_var_b177);
                }
                none_generics_name_184 = come_decrement_ref_count2(none_generics_name_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                generics_fun_name_185 = come_decrement_ref_count2(generics_fun_name_185, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            for(            i_190=128-1;            i_190>=1;            i_190--            ){
                new_fun_name_191=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 403, 2046),__exception_result_var_b178=((char*)(right_value162=xsprintf("%s_v%d",fun_name2_179,i_190))), come_pop_stackframe(), __exception_result_var_b178));
                right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                finalizer_180=(come_push_stackframe("04heap.c", 404, 2049),__exception_result_var_b179=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 404, 2047)), "04heap.c", 404, 2048))->funcs,new_fun_name_191), come_pop_stackframe(), __exception_result_var_b179);
                if(finalizer_180) {
                    __dec_obj58=fun_name2_179;
                    fun_name2_179=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 407, 2050),__exception_result_var_b180=((char*)(right_value163=__builtin_string(new_fun_name_191))), come_pop_stackframe(), __exception_result_var_b180));
                    __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    new_fun_name_191 = come_decrement_ref_count2(new_fun_name_191, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                new_fun_name_191 = come_decrement_ref_count2(new_fun_name_191, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional245=finalizer_180==((void*)0),            _if_conditional245) {
                finalizer_180=(come_push_stackframe("04heap.c", 413, 2053),__exception_result_var_b181=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 413, 2051)), "04heap.c", 413, 2052))->funcs,fun_name2_179), come_pop_stackframe(), __exception_result_var_b181);
            }
        }
        if(_if_conditional246=finalizer_180==((void*)0)&&!((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 417, 2054)), "04heap.c", 417, 2055))->mClass, "04heap.c", 417, 2056)), "04heap.c", 417, 2057))->mProtocol&&!((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 417, 2058)), "04heap.c", 417, 2059))->mClass, "04heap.c", 417, 2060)), "04heap.c", 417, 2061))->mNumber,        _if_conditional246) {
            multiple_assign_var1=(come_push_stackframe("04heap.c", 419, 2062),__exception_result_var_b182=((struct tuple2$2sFunpcharph*)(right_value164=create_finalizer_automatically(type,fun_name_177,info))), come_pop_stackframe(), __exception_result_var_b182);
            fun_192=multiple_assign_var1->v1;
            new_fun_name_193=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            come_call_finalizer3(right_value164,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            __dec_obj59=fun_name2_179;
            fun_name2_179=(char*)come_increment_ref_count(new_fun_name_193);
            __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
            finalizer_180=fun_192;
            new_fun_name_193 = come_decrement_ref_count2(new_fun_name_193, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional248=finalizer_180!=((void*)0),        _if_conditional248) {
            if(_if_conditional249=((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_175, "04heap.c", 427, 2067)), "04heap.c", 427, 2068))->mProtocol&&((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 427, 2069)), "04heap.c", 427, 2070))->mPointerNum==1,            _if_conditional249) {
                type_name_194=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 428, 2071),__exception_result_var_b183=((char*)(right_value165=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b183));
                right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(c_value_174) {
                    (come_push_stackframe("04heap.c", 430,2074),add_come_last_code2(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0);\n",fun_name2_179,c_value_174,type_name_194,c_value_174,type_name_194,c_value_174,((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 430, 2072)), "04heap.c", 430, 2073))->mAllocaValue,no_decrement_172,no_free_173,force_delete_),come_pop_stackframe());
                }
                type_name_194 = come_decrement_ref_count2(type_name_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(c_value_174) {
                    (come_push_stackframe("04heap.c", 435,2078),add_come_last_code2(info,(come_push_stackframe("04heap.c", 435, 2077),__exception_result_var_b184=((char*)(right_value166=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0);\n",c_value_174,fun_name2_179,((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 435, 2075)), "04heap.c", 435, 2076))->mAllocaValue,no_decrement_172,no_free_173,force_delete_))), come_pop_stackframe(), __exception_result_var_b184)),come_pop_stackframe());
                    right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else {
            if(_if_conditional252=((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_175, "04heap.c", 440, 2079)), "04heap.c", 440, 2080))->mProtocol&&((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 440, 2081)), "04heap.c", 440, 2082))->mPointerNum==1,            _if_conditional252) {
                type_name_195=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 441, 2083),__exception_result_var_b185=((char*)(right_value167=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b185));
                right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("04heap.c", 442,2085),add_come_last_code2(info,(come_push_stackframe("04heap.c", 442, 2084),__exception_result_var_b186=((char*)(right_value168=xsprintf("if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, 0,0,0, (void*)0); }\n",name_171,name_171,name_171,type_name_195,name_171,type_name_195,name_171))), come_pop_stackframe(), __exception_result_var_b186)),come_pop_stackframe());
                right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                type_name_195 = come_decrement_ref_count2(type_name_195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                (come_push_stackframe("04heap.c", 445,2087),add_come_last_code2(info,(come_push_stackframe("04heap.c", 445, 2086),__exception_result_var_b187=((char*)(right_value169=xsprintf("%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, 0,0,0, (void*)0);\n",name_171,name_171))), come_pop_stackframe(), __exception_result_var_b187)),come_pop_stackframe());
                right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        c_value_174 = come_decrement_ref_count2(c_value_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_178,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name2_179 = come_decrement_ref_count2(fun_name2_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj60=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 450, 2088)), "04heap.c", 450, 2089))->right_value_objects;
    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 450, 2088)), "04heap.c", 450, 2089))->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_168);
    come_call_finalizer3(__dec_obj60,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj61=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 451, 2094)), "04heap.c", 451, 2095))->stack;
    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 451, 2094)), "04heap.c", 451, 2095))->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_167);
    come_call_finalizer3(__dec_obj61,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_167,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    name_171 = come_decrement_ref_count2(name_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_181;
void* __exception_result_var_b165;
unsigned int __exception_result_var_b166;
unsigned int hash_182;
unsigned int it_183;
_Bool _while_condtional25;
_Bool _if_conditional208;
_Bool __exception_result_var_b167;
_Bool _if_conditional209;
struct sFun* __result109__;
_Bool _if_conditional225;
_Bool _if_conditional226;
struct sFun* __result110__;
struct sFun* __result111__;
struct sFun* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_181, 0, sizeof(struct sFun*));
memset(&hash_182, 0, sizeof(unsigned int));
memset(&it_183, 0, sizeof(unsigned int));
                (come_push_stackframe("./neo-c.h", 1526, 1886),__exception_result_var_b165=memset(&default_value_181,0,sizeof(struct sFun*)), come_pop_stackframe(), __exception_result_var_b165);
                hash_182=(come_push_stackframe("./neo-c.h", 1528, 1889),__exception_result_var_b166=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1528, 1887)), "./neo-c.h", 1528, 1888))), come_pop_stackframe(), __exception_result_var_b166)%((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1528, 1890)), "./neo-c.h", 1528, 1891))->size;
                it_183=hash_182;
                while(_while_condtional25=(_Bool)1,                _while_condtional25) {
                    if(_if_conditional208=((_Bool*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1532, 1892)), "./neo-c.h", 1532, 1893))->item_existance, "./neo-c.h", 1532, 1894))[it_183],                    _if_conditional208) {
                        if(_if_conditional209=(come_push_stackframe("./neo-c.h", 1534, 1900),__exception_result_var_b167=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1534, 1895)), "./neo-c.h", 1534, 1896))->keys, "./neo-c.h", 1534, 1897))[it_183], "./neo-c.h", 1534, 1898)), "./neo-c.h", 1534, 1899)),key), come_pop_stackframe(), __exception_result_var_b167),                        _if_conditional209) {
                            __result109__ = __result_obj__ = ((struct sFun**)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1536, 1901)), "./neo-c.h", 1536, 1902))->items, "./neo-c.h", 1536, 1903))[it_183];
                            come_call_finalizer3(default_value_181,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            return __result109__;
                        }
                        it_183++;
                        if(_if_conditional225=it_183>=((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1541, 1964)), "./neo-c.h", 1541, 1965))->size,                        _if_conditional225) {
                            it_183=0;
                        }
                        else {
                            if(_if_conditional226=it_183==hash_182,                            _if_conditional226) {
                                __result110__ = __result_obj__ = default_value_181;
                                come_call_finalizer3(default_value_181,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result110__;
                            }
                        }
                    }
                    else {
                        __result111__ = __result_obj__ = default_value_181;
                        come_call_finalizer3(default_value_181,sFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result111__;
                    }
                }
                __result112__ = __result_obj__ = default_value_181;
                come_call_finalizer3(default_value_181,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result112__;
                come_call_finalizer3(default_value_181,sFun_finalize, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional210;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional223;
_Bool _if_conditional224;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional210=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 0, 1904)), "sFun_finalize", 0, 1905))->mName!=((void*)0),                                _if_conditional210) {
                                    ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 0, 1906)), "sFun_finalize", 0, 1907))->mName = come_decrement_ref_count2(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 0, 1906)), "sFun_finalize", 0, 1907))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional211=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 1, 1908)), "sFun_finalize", 1, 1909))->mResultType!=((void*)0),                                _if_conditional211) {
                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 1, 1910)), "sFun_finalize", 1, 1911))->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional212=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 2, 1912)), "sFun_finalize", 2, 1913))->mParamTypes!=((void*)0),                                _if_conditional212) {
                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 2, 1914)), "sFun_finalize", 2, 1915))->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional213=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 3, 1916)), "sFun_finalize", 3, 1917))->mParamNames!=((void*)0),                                _if_conditional213) {
                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 3, 1918)), "sFun_finalize", 3, 1919))->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional214=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 4, 1920)), "sFun_finalize", 4, 1921))->mParamDefaultParametors!=((void*)0),                                _if_conditional214) {
                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 4, 1922)), "sFun_finalize", 4, 1923))->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional215=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 5, 1924)), "sFun_finalize", 5, 1925))->mLambdaType!=((void*)0),                                _if_conditional215) {
                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 5, 1926)), "sFun_finalize", 5, 1927))->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional216=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 6, 1928)), "sFun_finalize", 6, 1929))->mBlock!=((void*)0),                                _if_conditional216) {
                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 6, 1930)), "sFun_finalize", 6, 1931))->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional219=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 7, 1940)), "sFun_finalize", 7, 1941))->mSource!=((void*)0),                                _if_conditional219) {
                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 7, 1942)), "sFun_finalize", 7, 1943))->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional220=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 8, 1944)), "sFun_finalize", 8, 1945))->mSourceHead!=((void*)0),                                _if_conditional220) {
                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 8, 1946)), "sFun_finalize", 8, 1947))->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional221=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 9, 1948)), "sFun_finalize", 9, 1949))->mSourceHead2!=((void*)0),                                _if_conditional221) {
                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 9, 1950)), "sFun_finalize", 9, 1951))->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional222=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 10, 1952)), "sFun_finalize", 10, 1953))->mSourceDefer!=((void*)0),                                _if_conditional222) {
                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 10, 1954)), "sFun_finalize", 10, 1955))->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional223=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 11, 1956)), "sFun_finalize", 11, 1957))->mComeHeader!=((void*)0),                                _if_conditional223) {
                                    ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 11, 1958)), "sFun_finalize", 11, 1959))->mComeHeader = come_decrement_ref_count2(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 11, 1958)), "sFun_finalize", 11, 1959))->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional224=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 12, 1960)), "sFun_finalize", 12, 1961))->mDeclareSName!=((void*)0),                                _if_conditional224) {
                                    ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 12, 1962)), "sFun_finalize", 12, 1963))->mDeclareSName = come_decrement_ref_count2(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 12, 1962)), "sFun_finalize", 12, 1963))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional217;
_Bool _if_conditional218;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional217=self!=((void*)0)&&((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0, 1932)), "sBlock_finalize", 0, 1933))->mNodes!=((void*)0),                                        _if_conditional217) {
                                            come_call_finalizer3(((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0, 1934)), "sBlock_finalize", 0, 1935))->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional218=self!=((void*)0)&&((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1, 1936)), "sBlock_finalize", 1, 1937))->mVarTable!=((void*)0),                                        _if_conditional218) {
                                            come_call_finalizer3(((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1, 1938)), "sBlock_finalize", 1, 1939))->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key){
void* __result_obj__;
struct sGenericsFun* default_value_187;
void* __exception_result_var_b171;
unsigned int __exception_result_var_b172;
unsigned int hash_188;
unsigned int it_189;
_Bool _while_condtional26;
_Bool _if_conditional228;
_Bool __exception_result_var_b173;
_Bool _if_conditional229;
struct sGenericsFun* __result113__;
_Bool _if_conditional240;
_Bool _if_conditional241;
struct sGenericsFun* __result114__;
struct sGenericsFun* __result115__;
struct sGenericsFun* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_187, 0, sizeof(struct sGenericsFun*));
memset(&hash_188, 0, sizeof(unsigned int));
memset(&it_189, 0, sizeof(unsigned int));
                    (come_push_stackframe("./neo-c.h", 1526, 1975),__exception_result_var_b171=memset(&default_value_187,0,sizeof(struct sGenericsFun*)), come_pop_stackframe(), __exception_result_var_b171);
                    hash_188=(come_push_stackframe("./neo-c.h", 1528, 1978),__exception_result_var_b172=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1528, 1976)), "./neo-c.h", 1528, 1977))), come_pop_stackframe(), __exception_result_var_b172)%((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1528, 1979)), "./neo-c.h", 1528, 1980))->size;
                    it_189=hash_188;
                    while(_while_condtional26=(_Bool)1,                    _while_condtional26) {
                        if(_if_conditional228=((_Bool*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1532, 1981)), "./neo-c.h", 1532, 1982))->item_existance, "./neo-c.h", 1532, 1983))[it_189],                        _if_conditional228) {
                            if(_if_conditional229=(come_push_stackframe("./neo-c.h", 1534, 1989),__exception_result_var_b173=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1534, 1984)), "./neo-c.h", 1534, 1985))->keys, "./neo-c.h", 1534, 1986))[it_189], "./neo-c.h", 1534, 1987)), "./neo-c.h", 1534, 1988)),key), come_pop_stackframe(), __exception_result_var_b173),                            _if_conditional229) {
                                __result113__ = __result_obj__ = ((struct sGenericsFun**)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1536, 1990)), "./neo-c.h", 1536, 1991))->items, "./neo-c.h", 1536, 1992))[it_189];
                                come_call_finalizer3(default_value_187,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                                return __result113__;
                            }
                            it_189++;
                            if(_if_conditional240=it_189>=((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1541, 2033)), "./neo-c.h", 1541, 2034))->size,                            _if_conditional240) {
                                it_189=0;
                            }
                            else {
                                if(_if_conditional241=it_189==hash_188,                                _if_conditional241) {
                                    __result114__ = __result_obj__ = default_value_187;
                                    come_call_finalizer3(default_value_187,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result114__;
                                }
                            }
                        }
                        else {
                            __result115__ = __result_obj__ = default_value_187;
                            come_call_finalizer3(default_value_187,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result115__;
                        }
                    }
                    __result116__ = __result_obj__ = default_value_187;
                    come_call_finalizer3(default_value_187,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result116__;
                    come_call_finalizer3(default_value_187,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool _if_conditional230;
_Bool _if_conditional231;
_Bool _if_conditional232;
_Bool _if_conditional233;
_Bool _if_conditional234;
_Bool _if_conditional235;
_Bool _if_conditional236;
_Bool _if_conditional237;
_Bool _if_conditional238;
_Bool _if_conditional239;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional230=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0, 1993)), "sGenericsFun_finalize", 0, 1994))->mImplType!=((void*)0),                                    _if_conditional230) {
                                        come_call_finalizer3(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0, 1995)), "sGenericsFun_finalize", 0, 1996))->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional231=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1, 1997)), "sGenericsFun_finalize", 1, 1998))->mGenericsTypeNames!=((void*)0),                                    _if_conditional231) {
                                        come_call_finalizer3(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1, 1999)), "sGenericsFun_finalize", 1, 2000))->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional232=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2, 2001)), "sGenericsFun_finalize", 2, 2002))->mMethodGenericsTypeNames!=((void*)0),                                    _if_conditional232) {
                                        come_call_finalizer3(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2, 2003)), "sGenericsFun_finalize", 2, 2004))->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional233=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3, 2005)), "sGenericsFun_finalize", 3, 2006))->mName!=((void*)0),                                    _if_conditional233) {
                                        ((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3, 2007)), "sGenericsFun_finalize", 3, 2008))->mName = come_decrement_ref_count2(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3, 2007)), "sGenericsFun_finalize", 3, 2008))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional234=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4, 2009)), "sGenericsFun_finalize", 4, 2010))->mResultType!=((void*)0),                                    _if_conditional234) {
                                        come_call_finalizer3(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4, 2011)), "sGenericsFun_finalize", 4, 2012))->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional235=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5, 2013)), "sGenericsFun_finalize", 5, 2014))->mParamTypes!=((void*)0),                                    _if_conditional235) {
                                        come_call_finalizer3(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5, 2015)), "sGenericsFun_finalize", 5, 2016))->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional236=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6, 2017)), "sGenericsFun_finalize", 6, 2018))->mParamNames!=((void*)0),                                    _if_conditional236) {
                                        come_call_finalizer3(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6, 2019)), "sGenericsFun_finalize", 6, 2020))->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional237=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7, 2021)), "sGenericsFun_finalize", 7, 2022))->mParamDefaultParametors!=((void*)0),                                    _if_conditional237) {
                                        come_call_finalizer3(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7, 2023)), "sGenericsFun_finalize", 7, 2024))->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional238=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8, 2025)), "sGenericsFun_finalize", 8, 2026))->mBlock!=((void*)0),                                    _if_conditional238) {
                                        ((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8, 2027)), "sGenericsFun_finalize", 8, 2028))->mBlock = come_decrement_ref_count2(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8, 2027)), "sGenericsFun_finalize", 8, 2028))->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional239=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 9, 2029)), "sGenericsFun_finalize", 9, 2030))->mGenericsSName!=((void*)0),                                    _if_conditional239) {
                                        ((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 9, 2031)), "sGenericsFun_finalize", 9, 2032))->mGenericsSName = come_decrement_ref_count2(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 9, 2031)), "sGenericsFun_finalize", 9, 2032))->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool _if_conditional247;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional247=self!=((void*)0)&&((struct tuple2$2sFunpcharph*)come_null_check(((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0, 2063)), "tuple2$2sFunpcharphp_finalize", 0, 2064))->v2!=((void*)0),                _if_conditional247) {
                    ((struct tuple2$2sFunpcharph*)come_null_check(((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0, 2065)), "tuple2$2sFunpcharphp_finalize", 0, 2066))->v2 = come_decrement_ref_count2(((struct tuple2$2sFunpcharph*)come_null_check(((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0, 2065)), "tuple2$2sFunpcharphp_finalize", 0, 2066))->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        it_196=((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./neo-c.h", 120, 2090)), "./neo-c.h", 120, 2091))->head;
        while(_while_condtional27=it_196!=((void*)0),        _while_condtional27) {
            prev_it_197=it_196;
            it_196=((struct list_item$1sRightValueObjectph*)come_null_check(((struct list_item$1sRightValueObjectph*)come_null_check(it_196, "./neo-c.h", 123, 2092)), "./neo-c.h", 123, 2093))->next;
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
        it_198=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 120, 2096)), "./neo-c.h", 120, 2097))->head;
        while(_while_condtional28=it_198!=((void*)0),        _while_condtional28) {
            prev_it_199=it_198;
            it_198=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(it_198, "./neo-c.h", 123, 2098)), "./neo-c.h", 123, 2099))->next;
            come_call_finalizer3(prev_it_199,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional253;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional253=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0, 2100)), "list_item$1CVALUEphp_finalize", 0, 2101))->item!=((void*)0),                _if_conditional253) {
                    come_call_finalizer3(((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0, 2102)), "list_item$1CVALUEphp_finalize", 0, 2103))->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional254;
_Bool _if_conditional255;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional254=self!=((void*)0)&&((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0, 2104)), "CVALUE_finalize", 0, 2105))->c_value!=((void*)0),                        _if_conditional254) {
                            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0, 2106)), "CVALUE_finalize", 0, 2107))->c_value = come_decrement_ref_count2(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0, 2106)), "CVALUE_finalize", 0, 2107))->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional255=self!=((void*)0)&&((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1, 2108)), "CVALUE_finalize", 1, 2109))->type!=((void*)0),                        _if_conditional255) {
                            come_call_finalizer3(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1, 2110)), "CVALUE_finalize", 1, 2111))->type,sType_finalize, 0, 0, 0, 0, (void*)0);
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
        it_200=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 120, 2112)), "./neo-c.h", 120, 2113))->head;
        while(_while_condtional29=it_200!=((void*)0),        _while_condtional29) {
            prev_it_201=it_200;
            it_200=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(it_200, "./neo-c.h", 123, 2114)), "./neo-c.h", 123, 2115))->next;
            come_call_finalizer3(prev_it_201,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_){
void* __result_obj__;
_Bool _if_conditional256;
struct list$1CVALUEph* stack_saved_202;
struct list$1sRightValueObjectph* right_value_objects_203;
struct sType* type_before_204;
_Bool _if_conditional257;
int __exception_result_var_b188;
_Bool _if_conditional258;
_Bool _if_conditional259;
void* right_value170;
char* __exception_result_var_b189;
char* c_value_205;
struct sClass* klass_206;
char* class_name_207;
char* fun_name_208;
struct sType* __exception_result_var_b190;
void* right_value171;
struct sType* type2_209;
void* right_value172;
char* __exception_result_var_b191;
char* fun_name2_210;
struct sFun* finalizer_211;
int __exception_result_var_b192;
_Bool _if_conditional260;
struct sFun* __exception_result_var_b193;
_Bool _if_conditional261;
void* right_value173;
char* __exception_result_var_b194;
char* none_generics_name_212;
void* right_value174;
char* __exception_result_var_b195;
char* generics_fun_name_213;
struct sGenericsFun* __exception_result_var_b196;
struct sGenericsFun* generics_fun_214;
_Bool _if_conditional262;
_Bool __exception_result_var_b197;
_Bool _if_conditional263;
int __exception_result_var_b198;
struct sFun* __exception_result_var_b199;
int i_215;
void* right_value175;
char* __exception_result_var_b200;
char* new_fun_name_216;
struct sFun* __exception_result_var_b201;
_Bool _if_conditional264;
void* right_value176;
char* __exception_result_var_b202;
char* __dec_obj62;
_Bool _if_conditional265;
struct sFun* __exception_result_var_b203;
_Bool _if_conditional266;
void* right_value177;
struct tuple2$2sFunpcharph* __exception_result_var_b204;
struct tuple2$2sFunpcharph* multiple_assign_var2;
struct sFun* fun_217;
char* new_fun_name_218;
char* __dec_obj63;
_Bool _if_conditional267;
_Bool _if_conditional268;
void* right_value178;
char* __exception_result_var_b205;
char* type_name_219;
_Bool _if_conditional269;
_Bool _if_conditional270;
_Bool _if_conditional271;
_Bool _if_conditional272;
_Bool _if_conditional273;
_Bool _if_conditional274;
_Bool _if_conditional275;
void* right_value179;
char* __exception_result_var_b206;
void* right_value180;
char* __exception_result_var_b207;
_Bool _if_conditional276;
void* right_value181;
char* __exception_result_var_b208;
void* right_value182;
char* __exception_result_var_b209;
_Bool _if_conditional277;
struct list$1tuple2$2charphsTypephph* o2_saved_220;
struct tuple2$2charphsTypeph* __exception_result_var_b212;
struct tuple2$2charphsTypeph* it_223;
_Bool __exception_result_var_b213;
struct tuple2$2charphsTypeph* __exception_result_var_b216;
struct tuple2$2charphsTypeph* multiple_assign_var3;
char* name_226;
struct sType* field_type_227;
_Bool _if_conditional282;
void* right_value183;
char* __exception_result_var_b217;
void* right_value184;
char* __exception_result_var_b218;
char* obj_228;
_Bool _if_conditional286;
struct list$1tuple2$2charphsTypephph* o2_saved_231;
struct tuple2$2charphsTypeph* __exception_result_var_b219;
struct tuple2$2charphsTypeph* it_232;
_Bool __exception_result_var_b220;
struct tuple2$2charphsTypeph* __exception_result_var_b221;
struct tuple2$2charphsTypeph* multiple_assign_var4;
char* name_233;
struct sType* field_type_234;
_Bool _if_conditional287;
void* right_value185;
char* __exception_result_var_b222;
void* right_value186;
char* __exception_result_var_b223;
char* obj_235;
_Bool _if_conditional288;
_Bool _if_conditional289;
_Bool _if_conditional290;
void* right_value187;
char* __exception_result_var_b224;
char* type_name_236;
_Bool _if_conditional291;
_Bool _if_conditional292;
_Bool _if_conditional293;
_Bool _if_conditional294;
_Bool _if_conditional295;
_Bool _if_conditional296;
_Bool _if_conditional297;
void* right_value188;
char* __exception_result_var_b225;
char* c_value_237;
struct sClass* klass_238;
char* class_name_239;
char* fun_name_240;
struct sType* __exception_result_var_b226;
void* right_value189;
struct sType* type2_241;
void* right_value190;
char* __exception_result_var_b227;
char* fun_name2_242;
struct sFun* finalizer_243;
int __exception_result_var_b228;
_Bool _if_conditional298;
struct sFun* __exception_result_var_b229;
_Bool _if_conditional299;
void* right_value191;
char* __exception_result_var_b230;
char* none_generics_name_244;
void* right_value192;
char* __exception_result_var_b231;
char* generics_fun_name_245;
struct sGenericsFun* __exception_result_var_b232;
struct sGenericsFun* generics_fun_246;
_Bool _if_conditional300;
_Bool __exception_result_var_b233;
_Bool _if_conditional301;
int __exception_result_var_b234;
struct sFun* __exception_result_var_b235;
int i_247;
void* right_value193;
char* __exception_result_var_b236;
char* new_fun_name_248;
struct sFun* __exception_result_var_b237;
_Bool _if_conditional302;
void* right_value194;
char* __exception_result_var_b238;
char* __dec_obj64;
_Bool _if_conditional303;
struct sFun* __exception_result_var_b239;
_Bool _if_conditional304;
void* right_value195;
struct tuple2$2sFunpcharph* __exception_result_var_b240;
struct tuple2$2sFunpcharph* multiple_assign_var5;
struct sFun* fun_249;
char* new_fun_name_250;
char* __dec_obj65;
_Bool _if_conditional305;
_Bool _if_conditional306;
void* right_value196;
char* __exception_result_var_b241;
char* type_name_251;
_Bool _if_conditional307;
_Bool _if_conditional308;
_Bool _if_conditional309;
_Bool _if_conditional310;
_Bool _if_conditional311;
_Bool _if_conditional312;
_Bool _if_conditional313;
void* right_value197;
char* __exception_result_var_b242;
void* right_value198;
char* __exception_result_var_b243;
_Bool _if_conditional314;
void* right_value199;
char* __exception_result_var_b244;
void* right_value200;
char* __exception_result_var_b245;
_Bool _if_conditional315;
struct list$1tuple2$2charphsTypephph* o2_saved_252;
struct tuple2$2charphsTypeph* __exception_result_var_b246;
struct tuple2$2charphsTypeph* it_253;
_Bool __exception_result_var_b247;
struct tuple2$2charphsTypeph* __exception_result_var_b248;
struct tuple2$2charphsTypeph* multiple_assign_var6;
char* name_254;
struct sType* field_type_255;
_Bool _if_conditional316;
void* right_value201;
char* __exception_result_var_b249;
void* right_value202;
char* __exception_result_var_b250;
char* obj_256;
_Bool _if_conditional317;
struct list$1tuple2$2charphsTypephph* o2_saved_257;
struct tuple2$2charphsTypeph* __exception_result_var_b251;
struct tuple2$2charphsTypeph* it_258;
_Bool __exception_result_var_b252;
struct tuple2$2charphsTypeph* __exception_result_var_b253;
struct tuple2$2charphsTypeph* multiple_assign_var7;
char* name_259;
struct sType* field_type_260;
_Bool _if_conditional318;
void* right_value203;
char* __exception_result_var_b254;
void* right_value204;
char* __exception_result_var_b255;
char* obj_261;
_Bool _if_conditional319;
_Bool _if_conditional320;
_Bool _if_conditional321;
void* right_value205;
char* __exception_result_var_b256;
char* type_name_262;
_Bool _if_conditional322;
_Bool _if_conditional323;
_Bool _if_conditional324;
_Bool _if_conditional325;
_Bool _if_conditional326;
_Bool _if_conditional327;
_Bool _if_conditional328;
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
right_value178 = (void*)0;
memset(&type_name_219, 0, sizeof(char*));
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value182 = (void*)0;
memset(&o2_saved_220, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_223, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value183 = (void*)0;
right_value184 = (void*)0;
memset(&obj_228, 0, sizeof(char*));
memset(&o2_saved_231, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_232, 0, sizeof(struct tuple2$2charphsTypeph*));
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
right_value196 = (void*)0;
memset(&type_name_251, 0, sizeof(char*));
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value200 = (void*)0;
memset(&o2_saved_252, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_253, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value201 = (void*)0;
right_value202 = (void*)0;
memset(&obj_256, 0, sizeof(char*));
memset(&o2_saved_257, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_258, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value203 = (void*)0;
right_value204 = (void*)0;
memset(&obj_261, 0, sizeof(char*));
right_value205 = (void*)0;
memset(&type_name_262, 0, sizeof(char*));
    if(_if_conditional256=gComeGC||gComeC,    _if_conditional256) {
        return;
    }
    stack_saved_202=(struct list$1CVALUEph*)come_increment_ref_count(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 459, 2116)), "04heap.c", 459, 2117))->stack);
    right_value_objects_203=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 460, 2118)), "04heap.c", 460, 2119))->right_value_objects;
    type_before_204=type;
    if(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 465, 2120)), "04heap.c", 465, 2121))->mNoSolvedGenericsType, "04heap.c", 465, 2122)), "04heap.c", 465, 2123))->v1) {
        type=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 466, 2124)), "04heap.c", 466, 2125))->mNoSolvedGenericsType, "04heap.c", 466, 2126)), "04heap.c", 466, 2127))->v1;
    }
    if(_if_conditional258=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 469, 2128)), "04heap.c", 469, 2129))->mPointerNum>0||((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 469, 2130)), "04heap.c", 469, 2131))->mClass, "04heap.c", 469, 2132)), "04heap.c", 469, 2133))->mProtocol||(come_push_stackframe("04heap.c", 469, 2138),__exception_result_var_b188=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 469, 2134)), "04heap.c", 469, 2135))->mGenericsTypes, "04heap.c", 469, 2136)), "04heap.c", 469, 2137))), come_pop_stackframe(), __exception_result_var_b188)>0||(((struct sFun*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 469, 2139)), "04heap.c", 469, 2140))->come_fun, "04heap.c", 469, 2141)), "04heap.c", 469, 2142))->mCloner&&ret_value),    _if_conditional258) {
        if(force_delete_) {
            c_value_205=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 471, 2143),__exception_result_var_b189=((char*)(right_value170=__builtin_string(obj))), come_pop_stackframe(), __exception_result_var_b189));
            right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            klass_206=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 473, 2144)), "04heap.c", 473, 2145))->mClass;
            class_name_207=((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_206, "04heap.c", 475, 2146)), "04heap.c", 475, 2147))->mName;
            fun_name_208="force_finalize";
            type2_209=(struct sType*)come_increment_ref_count(((struct sType*)(right_value171=(come_push_stackframe("04heap.c", 479, 2148),__exception_result_var_b190=sType_clone(type), come_pop_stackframe(), __exception_result_var_b190))));
            come_call_finalizer3(right_value171,sType_finalize, 0, 1, 0, 0, __result_obj__);
            ((struct sType*)come_null_check(((struct sType*)come_null_check(type2_209, "04heap.c", 480, 2149)), "04heap.c", 480, 2150))->mHeap=(_Bool)0;
            fun_name2_210=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 482, 2151),__exception_result_var_b191=((char*)(right_value172=create_method_name(type,(_Bool)0,fun_name_208,info,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b191));
            right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            finalizer_211=((void*)0);
            if(_if_conditional260=(come_push_stackframe("04heap.c", 485, 2156),__exception_result_var_b192=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 485, 2152)), "04heap.c", 485, 2153))->mGenericsTypes, "04heap.c", 485, 2154)), "04heap.c", 485, 2155))), come_pop_stackframe(), __exception_result_var_b192)>0,            _if_conditional260) {
                finalizer_211=(come_push_stackframe("04heap.c", 486, 2159),__exception_result_var_b193=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 486, 2157)), "04heap.c", 486, 2158))->funcs,fun_name2_210), come_pop_stackframe(), __exception_result_var_b193);
                if(_if_conditional261=finalizer_211==((void*)0),                _if_conditional261) {
                    none_generics_name_212=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 489, 2164),__exception_result_var_b194=((char*)(right_value173=get_none_generics_name(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type2_209, "04heap.c", 489, 2160)), "04heap.c", 489, 2161))->mClass, "04heap.c", 489, 2162)), "04heap.c", 489, 2163))->mName))), come_pop_stackframe(), __exception_result_var_b194));
                    right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    generics_fun_name_213=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 491, 2165),__exception_result_var_b195=((char*)(right_value174=xsprintf("%s_%s",none_generics_name_212,fun_name_208))), come_pop_stackframe(), __exception_result_var_b195));
                    right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    generics_fun_214=(come_push_stackframe("04heap.c", 492, 2168),__exception_result_var_b196=map$2charphsGenericsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 492, 2166)), "04heap.c", 492, 2167))->generics_funcs,generics_fun_name_213), come_pop_stackframe(), __exception_result_var_b196);
                    if(generics_fun_214) {
                        if(_if_conditional263=!(come_push_stackframe("04heap.c", 495, 2169),__exception_result_var_b197=create_generics_fun((char*)come_increment_ref_count(fun_name2_210),generics_fun_214,type,info), come_pop_stackframe(), __exception_result_var_b197),                        _if_conditional263) {
                            (come_push_stackframe("04heap.c", 497, 2174),__exception_result_var_b198=printf("%s %d: can't create generics finalizer\n",((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 497, 2170)), "04heap.c", 497, 2171))->sname,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 497, 2172)), "04heap.c", 497, 2173))->sline), come_pop_stackframe(), __exception_result_var_b198);
                            (come_push_stackframe("04heap.c", 498,2175),exit(2),come_pop_stackframe());
                        }
                        finalizer_211=(come_push_stackframe("04heap.c", 500, 2178),__exception_result_var_b199=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 500, 2176)), "04heap.c", 500, 2177))->funcs,fun_name2_210), come_pop_stackframe(), __exception_result_var_b199);
                    }
                    none_generics_name_212 = come_decrement_ref_count2(none_generics_name_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    generics_fun_name_213 = come_decrement_ref_count2(generics_fun_name_213, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                for(                i_215=128-1;                i_215>=1;                i_215--                ){
                    new_fun_name_216=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 507, 2179),__exception_result_var_b200=((char*)(right_value175=xsprintf("%s_v%d",fun_name2_210,i_215))), come_pop_stackframe(), __exception_result_var_b200));
                    right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    finalizer_211=(come_push_stackframe("04heap.c", 508, 2182),__exception_result_var_b201=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 508, 2180)), "04heap.c", 508, 2181))->funcs,new_fun_name_216), come_pop_stackframe(), __exception_result_var_b201);
                    if(finalizer_211) {
                        __dec_obj62=fun_name2_210;
                        fun_name2_210=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 511, 2183),__exception_result_var_b202=((char*)(right_value176=__builtin_string(new_fun_name_216))), come_pop_stackframe(), __exception_result_var_b202));
                        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        new_fun_name_216 = come_decrement_ref_count2(new_fun_name_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    new_fun_name_216 = come_decrement_ref_count2(new_fun_name_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional265=finalizer_211==((void*)0),                _if_conditional265) {
                    finalizer_211=(come_push_stackframe("04heap.c", 517, 2186),__exception_result_var_b203=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 517, 2184)), "04heap.c", 517, 2185))->funcs,fun_name2_210), come_pop_stackframe(), __exception_result_var_b203);
                }
            }
            if(_if_conditional266=finalizer_211==((void*)0)&&!((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 521, 2187)), "04heap.c", 521, 2188))->mClass, "04heap.c", 521, 2189)), "04heap.c", 521, 2190))->mProtocol&&!((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 521, 2191)), "04heap.c", 521, 2192))->mClass, "04heap.c", 521, 2193)), "04heap.c", 521, 2194))->mNumber,            _if_conditional266) {
                multiple_assign_var2=(come_push_stackframe("04heap.c", 523, 2195),__exception_result_var_b204=((struct tuple2$2sFunpcharph*)(right_value177=create_force_finalizer_automatically(type,fun_name_208,info))), come_pop_stackframe(), __exception_result_var_b204);
                fun_217=multiple_assign_var2->v1;
                new_fun_name_218=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                come_call_finalizer3(right_value177,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                __dec_obj63=fun_name2_210;
                fun_name2_210=(char*)come_increment_ref_count(new_fun_name_218);
                __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                finalizer_211=fun_217;
                new_fun_name_218 = come_decrement_ref_count2(new_fun_name_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional267=finalizer_211!=((void*)0),            _if_conditional267) {
                if(_if_conditional268=((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_206, "04heap.c", 531, 2196)), "04heap.c", 531, 2197))->mProtocol&&((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 531, 2198)), "04heap.c", 531, 2199))->mPointerNum==1,                _if_conditional268) {
                    type_name_219=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 532, 2200),__exception_result_var_b205=((char*)(right_value178=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b205));
                    right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(c_value_205) {
                        if(no_decrement) {
                            if(comma) {
                                (come_push_stackframe("04heap.c", 536,2203),add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, __result_obj__),\n",fun_name2_210,c_value_205,type_name_219,c_value_205,type_name_219,c_value_205,((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 536, 2201)), "04heap.c", 536, 2202))->mAllocaValue,no_decrement,no_free,force_delete_),come_pop_stackframe());
                            }
                            else {
                                (come_push_stackframe("04heap.c", 539,2206),add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, __result_obj__);\n",fun_name2_210,c_value_205,type_name_219,c_value_205,type_name_219,c_value_205,((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 539, 2204)), "04heap.c", 539, 2205))->mAllocaValue,no_decrement,no_free,force_delete_),come_pop_stackframe());
                            }
                        }
                        else {
                            if(comma) {
                                (come_push_stackframe("04heap.c", 544,2209),add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0),\n",fun_name2_210,c_value_205,type_name_219,c_value_205,type_name_219,c_value_205,((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 544, 2207)), "04heap.c", 544, 2208))->mAllocaValue,no_decrement,no_free,force_delete_),come_pop_stackframe());
                            }
                            else {
                                (come_push_stackframe("04heap.c", 547,2212),add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0);\n",fun_name2_210,c_value_205,type_name_219,c_value_205,type_name_219,c_value_205,((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 547, 2210)), "04heap.c", 547, 2211))->mAllocaValue,no_decrement,no_free,force_delete_),come_pop_stackframe());
                            }
                        }
                    }
                    type_name_219 = come_decrement_ref_count2(type_name_219, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(c_value_205) {
                        if(no_decrement) {
                            if(comma) {
                                (come_push_stackframe("04heap.c", 556,2216),add_come_code(info,(come_push_stackframe("04heap.c", 556, 2215),__exception_result_var_b206=((char*)(right_value179=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, __result_obj__),\n",c_value_205,fun_name2_210,((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 556, 2213)), "04heap.c", 556, 2214))->mAllocaValue,no_decrement,no_free,force_delete_))), come_pop_stackframe(), __exception_result_var_b206)),come_pop_stackframe());
                                right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                (come_push_stackframe("04heap.c", 559,2220),add_come_code(info,(come_push_stackframe("04heap.c", 559, 2219),__exception_result_var_b207=((char*)(right_value180=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, __result_obj__);\n",c_value_205,fun_name2_210,((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 559, 2217)), "04heap.c", 559, 2218))->mAllocaValue,no_decrement,no_free,force_delete_))), come_pop_stackframe(), __exception_result_var_b207)),come_pop_stackframe());
                                right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                        else {
                            if(comma) {
                                (come_push_stackframe("04heap.c", 564,2224),add_come_code(info,(come_push_stackframe("04heap.c", 564, 2223),__exception_result_var_b208=((char*)(right_value181=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0),\n",c_value_205,fun_name2_210,((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 564, 2221)), "04heap.c", 564, 2222))->mAllocaValue,no_decrement,no_free,force_delete_))), come_pop_stackframe(), __exception_result_var_b208)),come_pop_stackframe());
                                right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                (come_push_stackframe("04heap.c", 567,2228),add_come_code(info,(come_push_stackframe("04heap.c", 567, 2227),__exception_result_var_b209=((char*)(right_value182=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0);\n",c_value_205,fun_name2_210,((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 567, 2225)), "04heap.c", 567, 2226))->mAllocaValue,no_decrement,no_free,force_delete_))), come_pop_stackframe(), __exception_result_var_b209)),come_pop_stackframe());
                                right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                }
            }
            else {
                if(_if_conditional277=((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_206, "04heap.c", 574, 2229)), "04heap.c", 574, 2230))->mStruct&&((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 574, 2231)), "04heap.c", 574, 2232))->mPointerNum==0,                _if_conditional277) {
                    for(                    o2_saved_220=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_206, "04heap.c", 576, 2233)), "04heap.c", 576, 2234))->mFields)),it_223=(come_push_stackframe("04heap.c", 576, 2249),__exception_result_var_b212=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_220), "04heap.c", 576, 2235)), "04heap.c", 576, 2236))), come_pop_stackframe(), __exception_result_var_b212);                    !(come_push_stackframe("04heap.c", 576, 2254),__exception_result_var_b213=list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_220), "04heap.c", 576, 2250)), "04heap.c", 576, 2251))), come_pop_stackframe(), __exception_result_var_b213);                    it_223=(come_push_stackframe("04heap.c", 576, 2273),__exception_result_var_b216=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_220), "04heap.c", 576, 2255)), "04heap.c", 576, 2256))), come_pop_stackframe(), __exception_result_var_b216)                    ){
                        multiple_assign_var3=it_223;
                        name_226=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                        field_type_227=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
                        if(_if_conditional282=((struct sType*)come_null_check(((struct sType*)come_null_check(field_type_227, "04heap.c", 579, 2274)), "04heap.c", 579, 2275))->mHeap&&((struct sType*)come_null_check(((struct sType*)come_null_check(field_type_227, "04heap.c", 579, 2276)), "04heap.c", 579, 2277))->mPointerNum>0,                        _if_conditional282) {
                            obj_228=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 580, 2279),__exception_result_var_b218=((char*)(right_value184=xsprintf("(((%s)%s).%s)",(come_push_stackframe("04heap.c", 580, 2278),__exception_result_var_b217=((char*)(right_value183=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b217),c_value_205,name_226))), come_pop_stackframe(), __exception_result_var_b218));
                            right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            (come_push_stackframe("04heap.c", 581,2280),free_object(field_type_227,obj_228,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0),come_pop_stackframe());
                            obj_228 = come_decrement_ref_count2(obj_228, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        name_226 = come_decrement_ref_count2(name_226, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(field_type_227,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_220,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional286=((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_206, "04heap.c", 585, 2297)), "04heap.c", 585, 2298))->mStruct&&((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 585, 2299)), "04heap.c", 585, 2300))->mPointerNum==1,                    _if_conditional286) {
                        for(                        o2_saved_231=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_206, "04heap.c", 587, 2301)), "04heap.c", 587, 2302))->mFields)),it_232=(come_push_stackframe("04heap.c", 587, 2305),__exception_result_var_b219=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_231), "04heap.c", 587, 2303)), "04heap.c", 587, 2304))), come_pop_stackframe(), __exception_result_var_b219);                        !(come_push_stackframe("04heap.c", 587, 2308),__exception_result_var_b220=list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_231), "04heap.c", 587, 2306)), "04heap.c", 587, 2307))), come_pop_stackframe(), __exception_result_var_b220);                        it_232=(come_push_stackframe("04heap.c", 587, 2311),__exception_result_var_b221=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_231), "04heap.c", 587, 2309)), "04heap.c", 587, 2310))), come_pop_stackframe(), __exception_result_var_b221)                        ){
                            multiple_assign_var4=it_232;
                            name_233=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                            field_type_234=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
                            if(_if_conditional287=((struct sType*)come_null_check(((struct sType*)come_null_check(field_type_234, "04heap.c", 590, 2312)), "04heap.c", 590, 2313))->mHeap&&((struct sType*)come_null_check(((struct sType*)come_null_check(field_type_234, "04heap.c", 590, 2314)), "04heap.c", 590, 2315))->mPointerNum>0,                            _if_conditional287) {
                                obj_235=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 591, 2317),__exception_result_var_b223=((char*)(right_value186=xsprintf("(((%s)%s)->%s)",(come_push_stackframe("04heap.c", 591, 2316),__exception_result_var_b222=((char*)(right_value185=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b222),c_value_205,name_233))), come_pop_stackframe(), __exception_result_var_b223));
                                right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                (come_push_stackframe("04heap.c", 592,2318),free_object(field_type_234,obj_235,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0),come_pop_stackframe());
                                obj_235 = come_decrement_ref_count2(obj_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            name_233 = come_decrement_ref_count2(name_233, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(field_type_234,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer3(o2_saved_231,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
                if(_if_conditional288=!((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 598, 2319)), "04heap.c", 598, 2320))->mAllocaValue,                _if_conditional288) {
                    if(_if_conditional289=((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_206, "04heap.c", 599, 2321)), "04heap.c", 599, 2322))->mProtocol&&((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 599, 2323)), "04heap.c", 599, 2324))->mPointerNum==1,                    _if_conditional289) {
                        if(c_value_205) {
                            type_name_236=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 601, 2325),__exception_result_var_b224=((char*)(right_value187=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b224));
                            right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(no_decrement) {
                                if(comma) {
                                    (come_push_stackframe("04heap.c", 604,2326),add_come_code(info,"(%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d, __result_obj__):0,\n",c_value_205,c_value_205,c_value_205,type_name_236,c_value_205,type_name_236,c_value_205,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                }
                                else {
                                    (come_push_stackframe("04heap.c", 607,2327),add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, __result_obj__); } \n",c_value_205,c_value_205,c_value_205,type_name_236,c_value_205,type_name_236,c_value_205,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                }
                            }
                            else {
                                if(comma) {
                                    (come_push_stackframe("04heap.c", 612,2328),add_come_code(info,"(%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0):0,\n",c_value_205,c_value_205,c_value_205,type_name_236,c_value_205,type_name_236,c_value_205,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                }
                                else {
                                    (come_push_stackframe("04heap.c", 615,2329),add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0); } \n",c_value_205,c_value_205,c_value_205,type_name_236,c_value_205,type_name_236,c_value_205,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                }
                            }
                            type_name_236 = come_decrement_ref_count2(type_name_236, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        if(c_value_205) {
                            if(no_decrement) {
                                if(comma) {
                                    (come_push_stackframe("04heap.c", 624,2330),add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, __result_obj__),\n",c_value_205,c_value_205,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                }
                                else {
                                    (come_push_stackframe("04heap.c", 627,2331),add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, __result_obj__);\n",c_value_205,c_value_205,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                }
                            }
                            else {
                                if(comma) {
                                    (come_push_stackframe("04heap.c", 632,2332),add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0),\n",c_value_205,c_value_205,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                }
                                else {
                                    (come_push_stackframe("04heap.c", 635,2333),add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0);\n",c_value_205,c_value_205,no_decrement,no_free,force_delete_),come_pop_stackframe());
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
            c_value_237=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 644, 2334),__exception_result_var_b225=((char*)(right_value188=__builtin_string(obj))), come_pop_stackframe(), __exception_result_var_b225));
            right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            klass_238=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 646, 2335)), "04heap.c", 646, 2336))->mClass;
            class_name_239=((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_238, "04heap.c", 648, 2337)), "04heap.c", 648, 2338))->mName;
            fun_name_240="finalize";
            type2_241=(struct sType*)come_increment_ref_count(((struct sType*)(right_value189=(come_push_stackframe("04heap.c", 652, 2339),__exception_result_var_b226=sType_clone(type), come_pop_stackframe(), __exception_result_var_b226))));
            come_call_finalizer3(right_value189,sType_finalize, 0, 1, 0, 0, __result_obj__);
            ((struct sType*)come_null_check(((struct sType*)come_null_check(type2_241, "04heap.c", 653, 2340)), "04heap.c", 653, 2341))->mHeap=(_Bool)0;
            fun_name2_242=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 655, 2342),__exception_result_var_b227=((char*)(right_value190=create_method_name(type,(_Bool)0,fun_name_240,info,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b227));
            right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            finalizer_243=((void*)0);
            if(_if_conditional298=(come_push_stackframe("04heap.c", 658, 2347),__exception_result_var_b228=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 658, 2343)), "04heap.c", 658, 2344))->mGenericsTypes, "04heap.c", 658, 2345)), "04heap.c", 658, 2346))), come_pop_stackframe(), __exception_result_var_b228)>0,            _if_conditional298) {
                finalizer_243=(come_push_stackframe("04heap.c", 659, 2350),__exception_result_var_b229=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 659, 2348)), "04heap.c", 659, 2349))->funcs,fun_name2_242), come_pop_stackframe(), __exception_result_var_b229);
                if(_if_conditional299=finalizer_243==((void*)0),                _if_conditional299) {
                    none_generics_name_244=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 662, 2355),__exception_result_var_b230=((char*)(right_value191=get_none_generics_name(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type2_241, "04heap.c", 662, 2351)), "04heap.c", 662, 2352))->mClass, "04heap.c", 662, 2353)), "04heap.c", 662, 2354))->mName))), come_pop_stackframe(), __exception_result_var_b230));
                    right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    generics_fun_name_245=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 664, 2356),__exception_result_var_b231=((char*)(right_value192=xsprintf("%s_%s",none_generics_name_244,fun_name_240))), come_pop_stackframe(), __exception_result_var_b231));
                    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    generics_fun_246=(come_push_stackframe("04heap.c", 665, 2359),__exception_result_var_b232=map$2charphsGenericsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 665, 2357)), "04heap.c", 665, 2358))->generics_funcs,generics_fun_name_245), come_pop_stackframe(), __exception_result_var_b232);
                    if(generics_fun_246) {
                        if(_if_conditional301=!(come_push_stackframe("04heap.c", 668, 2360),__exception_result_var_b233=create_generics_fun((char*)come_increment_ref_count(fun_name2_242),generics_fun_246,type,info), come_pop_stackframe(), __exception_result_var_b233),                        _if_conditional301) {
                            (come_push_stackframe("04heap.c", 670, 2365),__exception_result_var_b234=printf("%s %d: can't create generics finalizer\n",((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 670, 2361)), "04heap.c", 670, 2362))->sname,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 670, 2363)), "04heap.c", 670, 2364))->sline), come_pop_stackframe(), __exception_result_var_b234);
                            (come_push_stackframe("04heap.c", 671,2366),exit(2),come_pop_stackframe());
                        }
                        finalizer_243=(come_push_stackframe("04heap.c", 673, 2369),__exception_result_var_b235=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 673, 2367)), "04heap.c", 673, 2368))->funcs,fun_name2_242), come_pop_stackframe(), __exception_result_var_b235);
                    }
                    none_generics_name_244 = come_decrement_ref_count2(none_generics_name_244, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    generics_fun_name_245 = come_decrement_ref_count2(generics_fun_name_245, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                for(                i_247=128-1;                i_247>=1;                i_247--                ){
                    new_fun_name_248=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 680, 2370),__exception_result_var_b236=((char*)(right_value193=xsprintf("%s_v%d",fun_name2_242,i_247))), come_pop_stackframe(), __exception_result_var_b236));
                    right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    finalizer_243=(come_push_stackframe("04heap.c", 681, 2373),__exception_result_var_b237=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 681, 2371)), "04heap.c", 681, 2372))->funcs,new_fun_name_248), come_pop_stackframe(), __exception_result_var_b237);
                    if(finalizer_243) {
                        __dec_obj64=fun_name2_242;
                        fun_name2_242=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 684, 2374),__exception_result_var_b238=((char*)(right_value194=__builtin_string(new_fun_name_248))), come_pop_stackframe(), __exception_result_var_b238));
                        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        new_fun_name_248 = come_decrement_ref_count2(new_fun_name_248, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    new_fun_name_248 = come_decrement_ref_count2(new_fun_name_248, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional303=finalizer_243==((void*)0),                _if_conditional303) {
                    finalizer_243=(come_push_stackframe("04heap.c", 690, 2377),__exception_result_var_b239=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 690, 2375)), "04heap.c", 690, 2376))->funcs,fun_name2_242), come_pop_stackframe(), __exception_result_var_b239);
                }
            }
            if(_if_conditional304=finalizer_243==((void*)0)&&!((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 694, 2378)), "04heap.c", 694, 2379))->mClass, "04heap.c", 694, 2380)), "04heap.c", 694, 2381))->mProtocol&&!((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 694, 2382)), "04heap.c", 694, 2383))->mClass, "04heap.c", 694, 2384)), "04heap.c", 694, 2385))->mNumber,            _if_conditional304) {
                multiple_assign_var5=(come_push_stackframe("04heap.c", 696, 2386),__exception_result_var_b240=((struct tuple2$2sFunpcharph*)(right_value195=create_finalizer_automatically(type,fun_name_240,info))), come_pop_stackframe(), __exception_result_var_b240);
                fun_249=multiple_assign_var5->v1;
                new_fun_name_250=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                come_call_finalizer3(right_value195,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                __dec_obj65=fun_name2_242;
                fun_name2_242=(char*)come_increment_ref_count(new_fun_name_250);
                __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                finalizer_243=fun_249;
                new_fun_name_250 = come_decrement_ref_count2(new_fun_name_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional305=finalizer_243!=((void*)0),            _if_conditional305) {
                if(_if_conditional306=((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_238, "04heap.c", 704, 2387)), "04heap.c", 704, 2388))->mProtocol&&((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 704, 2389)), "04heap.c", 704, 2390))->mPointerNum==1,                _if_conditional306) {
                    type_name_251=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 705, 2391),__exception_result_var_b241=((char*)(right_value196=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b241));
                    right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(c_value_237) {
                        if(no_decrement) {
                            if(comma) {
                                (come_push_stackframe("04heap.c", 709,2394),add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, __result_obj__),\n",fun_name2_242,c_value_237,type_name_251,c_value_237,type_name_251,c_value_237,((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 709, 2392)), "04heap.c", 709, 2393))->mAllocaValue,no_decrement,no_free,force_delete_),come_pop_stackframe());
                            }
                            else {
                                (come_push_stackframe("04heap.c", 712,2397),add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, __result_obj__);\n",fun_name2_242,c_value_237,type_name_251,c_value_237,type_name_251,c_value_237,((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 712, 2395)), "04heap.c", 712, 2396))->mAllocaValue,no_decrement,no_free,force_delete_),come_pop_stackframe());
                            }
                        }
                        else {
                            if(comma) {
                                (come_push_stackframe("04heap.c", 717,2400),add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0),\n",fun_name2_242,c_value_237,type_name_251,c_value_237,type_name_251,c_value_237,((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 717, 2398)), "04heap.c", 717, 2399))->mAllocaValue,no_decrement,no_free,force_delete_),come_pop_stackframe());
                            }
                            else {
                                (come_push_stackframe("04heap.c", 720,2403),add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0);\n",fun_name2_242,c_value_237,type_name_251,c_value_237,type_name_251,c_value_237,((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 720, 2401)), "04heap.c", 720, 2402))->mAllocaValue,no_decrement,no_free,force_delete_),come_pop_stackframe());
                            }
                        }
                    }
                    type_name_251 = come_decrement_ref_count2(type_name_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(c_value_237) {
                        if(no_decrement) {
                            if(comma) {
                                (come_push_stackframe("04heap.c", 729,2407),add_come_code(info,(come_push_stackframe("04heap.c", 729, 2406),__exception_result_var_b242=((char*)(right_value197=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, __result_obj__),\n",c_value_237,fun_name2_242,((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 729, 2404)), "04heap.c", 729, 2405))->mAllocaValue,no_decrement,no_free,force_delete_))), come_pop_stackframe(), __exception_result_var_b242)),come_pop_stackframe());
                                right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                (come_push_stackframe("04heap.c", 732,2411),add_come_code(info,(come_push_stackframe("04heap.c", 732, 2410),__exception_result_var_b243=((char*)(right_value198=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, __result_obj__);\n",c_value_237,fun_name2_242,((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 732, 2408)), "04heap.c", 732, 2409))->mAllocaValue,no_decrement,no_free,force_delete_))), come_pop_stackframe(), __exception_result_var_b243)),come_pop_stackframe());
                                right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                        else {
                            if(comma) {
                                (come_push_stackframe("04heap.c", 737,2415),add_come_code(info,(come_push_stackframe("04heap.c", 737, 2414),__exception_result_var_b244=((char*)(right_value199=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0),\n",c_value_237,fun_name2_242,((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 737, 2412)), "04heap.c", 737, 2413))->mAllocaValue,no_decrement,no_free,force_delete_))), come_pop_stackframe(), __exception_result_var_b244)),come_pop_stackframe());
                                right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                (come_push_stackframe("04heap.c", 740,2419),add_come_code(info,(come_push_stackframe("04heap.c", 740, 2418),__exception_result_var_b245=((char*)(right_value200=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0);\n",c_value_237,fun_name2_242,((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 740, 2416)), "04heap.c", 740, 2417))->mAllocaValue,no_decrement,no_free,force_delete_))), come_pop_stackframe(), __exception_result_var_b245)),come_pop_stackframe());
                                right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                }
            }
            else {
                if(_if_conditional315=((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_238, "04heap.c", 747, 2420)), "04heap.c", 747, 2421))->mStruct&&((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 747, 2422)), "04heap.c", 747, 2423))->mPointerNum==0,                _if_conditional315) {
                    for(                    o2_saved_252=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_238, "04heap.c", 749, 2424)), "04heap.c", 749, 2425))->mFields)),it_253=(come_push_stackframe("04heap.c", 749, 2428),__exception_result_var_b246=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_252), "04heap.c", 749, 2426)), "04heap.c", 749, 2427))), come_pop_stackframe(), __exception_result_var_b246);                    !(come_push_stackframe("04heap.c", 749, 2431),__exception_result_var_b247=list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_252), "04heap.c", 749, 2429)), "04heap.c", 749, 2430))), come_pop_stackframe(), __exception_result_var_b247);                    it_253=(come_push_stackframe("04heap.c", 749, 2434),__exception_result_var_b248=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_252), "04heap.c", 749, 2432)), "04heap.c", 749, 2433))), come_pop_stackframe(), __exception_result_var_b248)                    ){
                        multiple_assign_var6=it_253;
                        name_254=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                        field_type_255=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
                        if(_if_conditional316=((struct sType*)come_null_check(((struct sType*)come_null_check(field_type_255, "04heap.c", 752, 2435)), "04heap.c", 752, 2436))->mHeap&&((struct sType*)come_null_check(((struct sType*)come_null_check(field_type_255, "04heap.c", 752, 2437)), "04heap.c", 752, 2438))->mPointerNum>0,                        _if_conditional316) {
                            obj_256=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 753, 2440),__exception_result_var_b250=((char*)(right_value202=xsprintf("(((%s)%s).%s)",(come_push_stackframe("04heap.c", 753, 2439),__exception_result_var_b249=((char*)(right_value201=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b249),c_value_237,name_254))), come_pop_stackframe(), __exception_result_var_b250));
                            right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            (come_push_stackframe("04heap.c", 754,2441),free_object(field_type_255,obj_256,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0),come_pop_stackframe());
                            obj_256 = come_decrement_ref_count2(obj_256, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        name_254 = come_decrement_ref_count2(name_254, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(field_type_255,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_252,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional317=((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_238, "04heap.c", 758, 2442)), "04heap.c", 758, 2443))->mStruct&&((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 758, 2444)), "04heap.c", 758, 2445))->mPointerNum==1,                    _if_conditional317) {
                        for(                        o2_saved_257=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_238, "04heap.c", 760, 2446)), "04heap.c", 760, 2447))->mFields)),it_258=(come_push_stackframe("04heap.c", 760, 2450),__exception_result_var_b251=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_257), "04heap.c", 760, 2448)), "04heap.c", 760, 2449))), come_pop_stackframe(), __exception_result_var_b251);                        !(come_push_stackframe("04heap.c", 760, 2453),__exception_result_var_b252=list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_257), "04heap.c", 760, 2451)), "04heap.c", 760, 2452))), come_pop_stackframe(), __exception_result_var_b252);                        it_258=(come_push_stackframe("04heap.c", 760, 2456),__exception_result_var_b253=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_257), "04heap.c", 760, 2454)), "04heap.c", 760, 2455))), come_pop_stackframe(), __exception_result_var_b253)                        ){
                            multiple_assign_var7=it_258;
                            name_259=(char*)come_increment_ref_count(multiple_assign_var7->v1);
                            field_type_260=(struct sType*)come_increment_ref_count(multiple_assign_var7->v2);
                            if(_if_conditional318=((struct sType*)come_null_check(((struct sType*)come_null_check(field_type_260, "04heap.c", 763, 2457)), "04heap.c", 763, 2458))->mHeap&&((struct sType*)come_null_check(((struct sType*)come_null_check(field_type_260, "04heap.c", 763, 2459)), "04heap.c", 763, 2460))->mPointerNum>0,                            _if_conditional318) {
                                obj_261=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 764, 2462),__exception_result_var_b255=((char*)(right_value204=xsprintf("(((%s)%s)->%s)",(come_push_stackframe("04heap.c", 764, 2461),__exception_result_var_b254=((char*)(right_value203=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b254),c_value_237,name_259))), come_pop_stackframe(), __exception_result_var_b255));
                                right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                (come_push_stackframe("04heap.c", 765,2463),free_object(field_type_260,obj_261,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0),come_pop_stackframe());
                                obj_261 = come_decrement_ref_count2(obj_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            name_259 = come_decrement_ref_count2(name_259, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(field_type_260,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer3(o2_saved_257,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
                if(_if_conditional319=!((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 771, 2464)), "04heap.c", 771, 2465))->mAllocaValue,                _if_conditional319) {
                    if(_if_conditional320=((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_238, "04heap.c", 772, 2466)), "04heap.c", 772, 2467))->mProtocol&&((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 772, 2468)), "04heap.c", 772, 2469))->mPointerNum==1,                    _if_conditional320) {
                        if(c_value_237) {
                            type_name_262=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 774, 2470),__exception_result_var_b256=((char*)(right_value205=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b256));
                            right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(no_decrement) {
                                if(comma) {
                                    (come_push_stackframe("04heap.c", 777,2471),add_come_code(info,"(%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d, __result_obj__):0,\n",c_value_237,c_value_237,c_value_237,type_name_262,c_value_237,type_name_262,c_value_237,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                }
                                else {
                                    (come_push_stackframe("04heap.c", 780,2472),add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, __result_obj__); } \n",c_value_237,c_value_237,c_value_237,type_name_262,c_value_237,type_name_262,c_value_237,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                }
                            }
                            else {
                                if(comma) {
                                    (come_push_stackframe("04heap.c", 785,2473),add_come_code(info,"(%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0):0,\n",c_value_237,c_value_237,c_value_237,type_name_262,c_value_237,type_name_262,c_value_237,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                }
                                else {
                                    (come_push_stackframe("04heap.c", 788,2474),add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0); } \n",c_value_237,c_value_237,c_value_237,type_name_262,c_value_237,type_name_262,c_value_237,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                }
                            }
                            type_name_262 = come_decrement_ref_count2(type_name_262, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        if(c_value_237) {
                            if(no_decrement) {
                                if(comma) {
                                    (come_push_stackframe("04heap.c", 797,2475),add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, __result_obj__),\n",c_value_237,c_value_237,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                }
                                else {
                                    (come_push_stackframe("04heap.c", 800,2476),add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, __result_obj__);\n",c_value_237,c_value_237,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                }
                            }
                            else {
                                if(comma) {
                                    (come_push_stackframe("04heap.c", 805,2477),add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0),\n",c_value_237,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                }
                                else {
                                    (come_push_stackframe("04heap.c", 808,2478),add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0);\n",c_value_237,c_value_237,no_decrement,no_free,force_delete_),come_pop_stackframe());
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
    __dec_obj66=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 818, 2479)), "04heap.c", 818, 2480))->right_value_objects;
    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 818, 2479)), "04heap.c", 818, 2480))->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_203);
    come_call_finalizer3(__dec_obj66,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj67=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 819, 2481)), "04heap.c", 819, 2482))->stack;
    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 819, 2481)), "04heap.c", 819, 2482))->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_202);
    come_call_finalizer3(__dec_obj67,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_202,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional278;
struct tuple2$2charphsTypeph* result_221;
void* __exception_result_var_b210;
struct tuple2$2charphsTypeph* __result117__;
_Bool _if_conditional279;
struct tuple2$2charphsTypeph* __result118__;
struct tuple2$2charphsTypeph* result_222;
void* __exception_result_var_b211;
struct tuple2$2charphsTypeph* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_221, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_222, 0, sizeof(struct tuple2$2charphsTypeph*));
                        if(_if_conditional278=self==((void*)0),                        _if_conditional278) {
                            (come_push_stackframe("./neo-c.h", 284, 2237),__exception_result_var_b210=memset(&result_221,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b210);
                            __result117__ = __result_obj__ = result_221;
                            return __result117__;
                        }
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 287, 2238)), "./neo-c.h", 287, 2239))->it=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 287, 2240)), "./neo-c.h", 287, 2241))->head;
                        if(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 289, 2242)), "./neo-c.h", 289, 2243))->it) {
                            __result118__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 290, 2244)), "./neo-c.h", 290, 2245))->it, "./neo-c.h", 290, 2246)), "./neo-c.h", 290, 2247))->item;
                            return __result118__;
                        }
                        (come_push_stackframe("./neo-c.h", 294, 2248),__exception_result_var_b211=memset(&result_222,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b211);
                        __result119__ = __result_obj__ = result_222;
                        return __result119__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result120__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result120__ = self==((void*)0)||((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 317, 2252)), "./neo-c.h", 317, 2253))->it==((void*)0);
                        return __result120__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional280;
struct tuple2$2charphsTypeph* result_224;
void* __exception_result_var_b214;
struct tuple2$2charphsTypeph* __result121__;
_Bool _if_conditional281;
struct tuple2$2charphsTypeph* __result122__;
struct tuple2$2charphsTypeph* result_225;
void* __exception_result_var_b215;
struct tuple2$2charphsTypeph* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_224, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_225, 0, sizeof(struct tuple2$2charphsTypeph*));
                        if(_if_conditional280=self==((void*)0)||((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 299, 2257)), "./neo-c.h", 299, 2258))->it==((void*)0),                        _if_conditional280) {
                            (come_push_stackframe("./neo-c.h", 301, 2259),__exception_result_var_b214=memset(&result_224,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b214);
                            __result121__ = __result_obj__ = result_224;
                            return __result121__;
                        }
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 305, 2260)), "./neo-c.h", 305, 2261))->it=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 305, 2262)), "./neo-c.h", 305, 2263))->it, "./neo-c.h", 305, 2264)), "./neo-c.h", 305, 2265))->next;
                        if(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 307, 2266)), "./neo-c.h", 307, 2267))->it) {
                            __result122__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 308, 2268)), "./neo-c.h", 308, 2269))->it, "./neo-c.h", 308, 2270)), "./neo-c.h", 308, 2271))->item;
                            return __result122__;
                        }
                        (come_push_stackframe("./neo-c.h", 312, 2272),__exception_result_var_b215=memset(&result_225,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b215);
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
                        it_229=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 120, 2281)), "./neo-c.h", 120, 2282))->head;
                        while(_while_condtional30=it_229!=((void*)0),                        _while_condtional30) {
                            prev_it_230=it_229;
                            it_229=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_229, "./neo-c.h", 123, 2283)), "./neo-c.h", 123, 2284))->next;
                            come_call_finalizer3(prev_it_230,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional283;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional283=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0, 2285)), "list_item$1tuple2$2charphsTypephphp_finalize", 0, 2286))->item!=((void*)0),                                _if_conditional283) {
                                    come_call_finalizer3(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0, 2287)), "list_item$1tuple2$2charphsTypephphp_finalize", 0, 2288))->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional284;
_Bool _if_conditional285;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional284=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0, 2289)), "tuple2$2charphsTypephp_finalize", 0, 2290))->v1!=((void*)0),                                        _if_conditional284) {
                                            ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0, 2291)), "tuple2$2charphsTypephp_finalize", 0, 2292))->v1 = come_decrement_ref_count2(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0, 2291)), "tuple2$2charphsTypephp_finalize", 0, 2292))->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional285=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1, 2293)), "tuple2$2charphsTypephp_finalize", 1, 2294))->v2!=((void*)0),                                        _if_conditional285) {
                                            come_call_finalizer3(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1, 2295)), "tuple2$2charphsTypephp_finalize", 1, 2296))->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__;
struct sType* __exception_result_var_b257;
void* right_value206;
struct sType* type2_263;
_Bool _if_conditional329;
char* __dec_obj68;
char* result_264;
struct sType* __dec_obj69;
struct sType* result_type_265;
struct list$1CVALUEph* stack_saved_266;
struct list$1sRightValueObjectph* right_value_objects_267;
void* right_value207;
char* __exception_result_var_b258;
char* c_value_268;
struct sClass* klass_269;
char* class_name_270;
char* fun_name_271;
struct sFun* cloner_272;
char* fun_name2_273;
int __exception_result_var_b259;
_Bool _if_conditional330;
void* right_value208;
char* __exception_result_var_b260;
char* none_generics_name_274;
void* right_value209;
struct sType* __exception_result_var_b261;
struct sType* obj_type_275;
void* right_value210;
char* __exception_result_var_b262;
char* __dec_obj70;
void* right_value211;
char* __exception_result_var_b263;
char* fun_name3_276;
struct sGenericsFun* __exception_result_var_b266;
struct sGenericsFun* generics_fun_277;
_Bool _if_conditional335;
void* right_value212;
char* __exception_result_var_b267;
_Bool __exception_result_var_b268;
_Bool _if_conditional336;
void* right_value213;
void* right_value214;
struct sType* __exception_result_var_b269;
void* right_value215;
char* __exception_result_var_b270;
void* right_value216;
void* right_value217;
struct tuple2$2sTypephcharph* __result129__;
struct sFun* __exception_result_var_b271;
void* right_value218;
char* __exception_result_var_b272;
char* __dec_obj73;
int i_280;
void* right_value219;
char* __exception_result_var_b273;
char* new_fun_name_281;
struct sFun* __exception_result_var_b274;
_Bool _if_conditional339;
void* right_value220;
char* __exception_result_var_b275;
char* __dec_obj74;
_Bool _if_conditional340;
struct sFun* __exception_result_var_b276;
_Bool _if_conditional341;
void* right_value221;
struct tuple2$2sFunpcharph* __exception_result_var_b277;
struct tuple2$2sFunpcharph* multiple_assign_var8;
struct sFun* fun_282;
char* new_fun_name_283;
char* __dec_obj75;
_Bool _if_conditional342;
struct sType* __dec_obj76;
void* right_value222;
struct sType* __exception_result_var_b278;
struct sType* __dec_obj77;
void* right_value223;
char* __exception_result_var_b279;
char* __dec_obj78;
_Bool _if_conditional343;
void* right_value224;
char* __exception_result_var_b280;
char* __dec_obj79;
struct sType* __exception_result_var_b281;
void* right_value225;
struct sType* __dec_obj80;
void* right_value226;
char* __exception_result_var_b282;
char* type_name_284;
void* right_value227;
char* __exception_result_var_b283;
char* __dec_obj81;
_Bool _if_conditional344;
void* right_value228;
char* __exception_result_var_b284;
char* __dec_obj82;
struct list$1sRightValueObjectph* __dec_obj83;
struct list$1CVALUEph* __dec_obj84;
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
memset(&generics_fun_277, 0, sizeof(struct sGenericsFun*));
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
    type2_263=(struct sType*)come_increment_ref_count(((struct sType*)(right_value206=(come_push_stackframe("04heap.c", 824, 2483),__exception_result_var_b257=sType_clone(type), come_pop_stackframe(), __exception_result_var_b257))));
    come_call_finalizer3(right_value206,sType_finalize, 0, 1, 0, 0, __result_obj__);
    if(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 825, 2484)), "04heap.c", 825, 2485))->mNoSolvedGenericsType, "04heap.c", 825, 2486)), "04heap.c", 825, 2487))->v1) {
        type=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 826, 2488)), "04heap.c", 826, 2489))->mNoSolvedGenericsType, "04heap.c", 826, 2490)), "04heap.c", 826, 2491))->v1;
    }
    __dec_obj68=result_264;
    result_264=((void*)0);
    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj69=result_type_265;
    result_type_265=((void*)0);
    come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 0, 0, (void*)0);
    stack_saved_266=(struct list$1CVALUEph*)come_increment_ref_count(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 831, 2492)), "04heap.c", 831, 2493))->stack);
    right_value_objects_267=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 832, 2494)), "04heap.c", 832, 2495))->right_value_objects;
    c_value_268=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 834, 2496),__exception_result_var_b258=((char*)(right_value207=__builtin_string(obj))), come_pop_stackframe(), __exception_result_var_b258));
    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    klass_269=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 836, 2497)), "04heap.c", 836, 2498))->mClass;
    class_name_270=((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_269, "04heap.c", 838, 2499)), "04heap.c", 838, 2500))->mName;
    fun_name_271="clone";
    cloner_272=((void*)0);
    if(_if_conditional330=(come_push_stackframe("04heap.c", 844, 2505),__exception_result_var_b259=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 844, 2501)), "04heap.c", 844, 2502))->mGenericsTypes, "04heap.c", 844, 2503)), "04heap.c", 844, 2504))), come_pop_stackframe(), __exception_result_var_b259)>0,    _if_conditional330) {
        none_generics_name_274=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 845, 2510),__exception_result_var_b260=((char*)(right_value208=get_none_generics_name(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 845, 2506)), "04heap.c", 845, 2507))->mClass, "04heap.c", 845, 2508)), "04heap.c", 845, 2509))->mName))), come_pop_stackframe(), __exception_result_var_b260));
        right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        obj_type_275=(struct sType*)come_increment_ref_count((come_push_stackframe("04heap.c", 847, 2513),__exception_result_var_b261=((struct sType*)(right_value209=solve_generics(type,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 847, 2511)), "04heap.c", 847, 2512))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b261));
        come_call_finalizer3(right_value209,sType_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj70=fun_name2_273;
        fun_name2_273=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 849, 2514),__exception_result_var_b262=((char*)(right_value210=create_method_name(obj_type_275,(_Bool)0,fun_name_271,info,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b262));
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_name3_276=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 850, 2515),__exception_result_var_b263=((char*)(right_value211=xsprintf("%s_%s",none_generics_name_274,fun_name_271))), come_pop_stackframe(), __exception_result_var_b263));
        right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        generics_fun_277=(come_push_stackframe("04heap.c", 852, 2539),__exception_result_var_b266=map$2charphsGenericsFunph_at(((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 852, 2516)), "04heap.c", 852, 2517))->generics_funcs, "04heap.c", 852, 2518)), "04heap.c", 852, 2519)),fun_name3_276,((void*)0)), come_pop_stackframe(), __exception_result_var_b266);
        if(generics_fun_277) {
            if(_if_conditional336=!(come_push_stackframe("04heap.c", 855, 2541),__exception_result_var_b268=create_generics_fun((char*)come_increment_ref_count((come_push_stackframe("04heap.c", 855, 2540),__exception_result_var_b267=((char*)(right_value212=__builtin_string(fun_name2_273))), come_pop_stackframe(), __exception_result_var_b267)),generics_fun_277,obj_type_275,info), come_pop_stackframe(), __exception_result_var_b268),            right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional336) {
                __result129__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value217=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value216=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 856, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count((come_push_stackframe("04heap.c", 856, 2543),__exception_result_var_b269=((struct sType*)(right_value214=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value213=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "04heap.c", 856, "sType"))), "04heap.c", 856, 2542))),"void",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b269)),(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 856, 2544),__exception_result_var_b270=((char*)(right_value215=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b270)))));
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
        cloner_272=(come_push_stackframe("04heap.c", 860, 2559),__exception_result_var_b271=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 860, 2557)), "04heap.c", 860, 2558))->funcs,fun_name2_273), come_pop_stackframe(), __exception_result_var_b271);
        none_generics_name_274 = come_decrement_ref_count2(none_generics_name_274, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_275,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_276 = come_decrement_ref_count2(fun_name3_276, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj73=fun_name2_273;
        fun_name2_273=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 863, 2560),__exception_result_var_b272=((char*)(right_value218=create_method_name(type,(_Bool)0,fun_name_271,info,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b272));
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        for(        i_280=128-1;        i_280>=1;        i_280--        ){
            new_fun_name_281=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 867, 2561),__exception_result_var_b273=((char*)(right_value219=xsprintf("%s_v%d",fun_name2_273,i_280))), come_pop_stackframe(), __exception_result_var_b273));
            right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            cloner_272=(come_push_stackframe("04heap.c", 868, 2564),__exception_result_var_b274=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 868, 2562)), "04heap.c", 868, 2563))->funcs,new_fun_name_281), come_pop_stackframe(), __exception_result_var_b274);
            if(cloner_272) {
                __dec_obj74=fun_name2_273;
                fun_name2_273=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 871, 2565),__exception_result_var_b275=((char*)(right_value220=__builtin_string(new_fun_name_281))), come_pop_stackframe(), __exception_result_var_b275));
                __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                new_fun_name_281 = come_decrement_ref_count2(new_fun_name_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_281 = come_decrement_ref_count2(new_fun_name_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional340=cloner_272==((void*)0),        _if_conditional340) {
            cloner_272=(come_push_stackframe("04heap.c", 877, 2568),__exception_result_var_b276=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 877, 2566)), "04heap.c", 877, 2567))->funcs,fun_name2_273), come_pop_stackframe(), __exception_result_var_b276);
        }
    }
    if(_if_conditional341=cloner_272==((void*)0)&&!((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 881, 2569)), "04heap.c", 881, 2570))->mClass, "04heap.c", 881, 2571)), "04heap.c", 881, 2572))->mNumber,    _if_conditional341) {
        multiple_assign_var8=(come_push_stackframe("04heap.c", 883, 2573),__exception_result_var_b277=((struct tuple2$2sFunpcharph*)(right_value221=create_cloner_automatically(type,fun_name_271,info))), come_pop_stackframe(), __exception_result_var_b277);
        fun_282=multiple_assign_var8->v1;
        new_fun_name_283=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        come_call_finalizer3(right_value221,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj75=fun_name2_273;
        fun_name2_273=(char*)come_increment_ref_count(new_fun_name_283);
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_272=fun_282;
        new_fun_name_283 = come_decrement_ref_count2(new_fun_name_283, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(_if_conditional342=cloner_272!=((void*)0),    _if_conditional342) {
        __dec_obj76=result_type_265;
        result_type_265=(struct sType*)come_increment_ref_count(((struct sFun*)come_null_check(((struct sFun*)come_null_check(cloner_272, "04heap.c", 891, 2574)), "04heap.c", 891, 2575))->mResultType);
        come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj77=result_type_265;
        result_type_265=(struct sType*)come_increment_ref_count((come_push_stackframe("04heap.c", 892, 2576),__exception_result_var_b278=((struct sType*)(right_value222=solve_generics(result_type_265,type,info))), come_pop_stackframe(), __exception_result_var_b278));
        come_call_finalizer3(__dec_obj77,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value222,sType_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj78=result_264;
        result_264=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 894, 2577),__exception_result_var_b279=((char*)(right_value223=xsprintf("%s(%s)",fun_name2_273,c_value_268))), come_pop_stackframe(), __exception_result_var_b279));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(gComeDebug) {
            __dec_obj79=result_264;
            result_264=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 897, 2578),__exception_result_var_b280=((char*)(right_value224=append_stackframe(result_264,result_type_265,info))), come_pop_stackframe(), __exception_result_var_b280));
            __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    else {
        __dec_obj80=result_type_265;
        result_type_265=(struct sType*)come_increment_ref_count(((struct sType*)(right_value225=(come_push_stackframe("04heap.c", 901, 2579),__exception_result_var_b281=sType_clone(type), come_pop_stackframe(), __exception_result_var_b281))));
        come_call_finalizer3(__dec_obj80,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value225,sType_finalize, 0, 1, 0, 0, __result_obj__);
        ((struct sType*)come_null_check(((struct sType*)come_null_check(type2_263, "04heap.c", 902, 2580)), "04heap.c", 902, 2581))->mHeap=(_Bool)1;
        type_name_284=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 903, 2582),__exception_result_var_b282=((char*)(right_value226=make_type_name_string(type2_263,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b282));
        right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj81=result_264;
        result_264=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 904, 2587),__exception_result_var_b283=((char*)(right_value227=xsprintf("(%s)come_memdup(%s, \"%s\", %d, \"%s\")",type_name_284,c_value_268,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 904, 2583)), "04heap.c", 904, 2584))->sname,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 904, 2585)), "04heap.c", 904, 2586))->sline,type_name_284))), come_pop_stackframe(), __exception_result_var_b283));
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(gComeDebug) {
            __dec_obj82=result_264;
            result_264=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 906, 2588),__exception_result_var_b284=((char*)(right_value228=append_stackframe(result_264,result_type_265,info))), come_pop_stackframe(), __exception_result_var_b284));
            __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        type_name_284 = come_decrement_ref_count2(type_name_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj83=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 910, 2589)), "04heap.c", 910, 2590))->right_value_objects;
    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 910, 2589)), "04heap.c", 910, 2590))->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_267);
    come_call_finalizer3(__dec_obj83,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj84=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 911, 2591)), "04heap.c", 911, 2592))->stack;
    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 911, 2591)), "04heap.c", 911, 2592))->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_266);
    come_call_finalizer3(__dec_obj84,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    __result130__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value230=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value229=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 913, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(result_type_265),(char*)come_increment_ref_count(result_264))));
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
unsigned int __exception_result_var_b264;
unsigned int hash_278;
unsigned int it_279;
_Bool _while_condtional31;
_Bool _if_conditional331;
_Bool __exception_result_var_b265;
_Bool _if_conditional332;
struct sGenericsFun* __result124__;
_Bool _if_conditional333;
_Bool _if_conditional334;
struct sGenericsFun* __result125__;
struct sGenericsFun* __result126__;
struct sGenericsFun* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_278, 0, sizeof(unsigned int));
memset(&it_279, 0, sizeof(unsigned int));
            hash_278=(come_push_stackframe("./neo-c.h", 1207, 2522),__exception_result_var_b264=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1207, 2520)), "./neo-c.h", 1207, 2521))), come_pop_stackframe(), __exception_result_var_b264)%((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1207, 2523)), "./neo-c.h", 1207, 2524))->size;
            it_279=hash_278;
            while(_while_condtional31=(_Bool)1,            _while_condtional31) {
                if(_if_conditional331=((_Bool*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1211, 2525)), "./neo-c.h", 1211, 2526))->item_existance, "./neo-c.h", 1211, 2527))[it_279],                _if_conditional331) {
                    if(_if_conditional332=(come_push_stackframe("./neo-c.h", 1213, 2533),__exception_result_var_b265=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1213, 2528)), "./neo-c.h", 1213, 2529))->keys, "./neo-c.h", 1213, 2530))[it_279], "./neo-c.h", 1213, 2531)), "./neo-c.h", 1213, 2532)),key), come_pop_stackframe(), __exception_result_var_b265),                    _if_conditional332) {
                        __result124__ = __result_obj__ = ((struct sGenericsFun**)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1215, 2534)), "./neo-c.h", 1215, 2535))->items, "./neo-c.h", 1215, 2536))[it_279];
                        come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result124__;
                    }
                    it_279++;
                    if(_if_conditional333=it_279>=((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1220, 2537)), "./neo-c.h", 1220, 2538))->size,                    _if_conditional333) {
                        it_279=0;
                    }
                    else {
                        if(_if_conditional334=it_279==hash_278,                        _if_conditional334) {
                            __result125__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result125__;
                        }
                    }
                }
                else {
                    __result126__ = __result_obj__ = default_value;
                    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result126__;
                }
            }
            __result127__ = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result127__;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
struct sType* __dec_obj71;
char* __dec_obj72;
struct tuple2$2sTypephcharph* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
                    __dec_obj71=((struct tuple2$2sTypephcharph*)come_null_check(((struct tuple2$2sTypephcharph*)come_null_check(self, "./neo-c.h", 1744, 2545)), "./neo-c.h", 1744, 2546))->v1;
                    ((struct tuple2$2sTypephcharph*)come_null_check(((struct tuple2$2sTypephcharph*)come_null_check(self, "./neo-c.h", 1744, 2545)), "./neo-c.h", 1744, 2546))->v1=(struct sType*)come_increment_ref_count(v1);
                    come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __dec_obj72=((struct tuple2$2sTypephcharph*)come_null_check(((struct tuple2$2sTypephcharph*)come_null_check(self, "./neo-c.h", 1745, 2547)), "./neo-c.h", 1745, 2548))->v2;
                    ((struct tuple2$2sTypephcharph*)come_null_check(((struct tuple2$2sTypephcharph*)come_null_check(self, "./neo-c.h", 1745, 2547)), "./neo-c.h", 1745, 2548))->v2=(char*)come_increment_ref_count(v2);
                    __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
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
_Bool _if_conditional337;
_Bool _if_conditional338;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional337=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0, 2549)), "tuple2$2sTypephcharphp_finalize", 0, 2550))->v1!=((void*)0),                        _if_conditional337) {
                            come_call_finalizer3(((struct tuple2$2sTypephcharph*)come_null_check(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0, 2551)), "tuple2$2sTypephcharphp_finalize", 0, 2552))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional338=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1, 2553)), "tuple2$2sTypephcharphp_finalize", 1, 2554))->v2!=((void*)0),                        _if_conditional338) {
                            ((struct tuple2$2sTypephcharph*)come_null_check(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1, 2555)), "tuple2$2sTypephcharphp_finalize", 1, 2556))->v2 = come_decrement_ref_count2(((struct tuple2$2sTypephcharph*)come_null_check(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1, 2555)), "tuple2$2sTypephcharphp_finalize", 1, 2556))->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

_Bool create_equals_method(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional345;
char* __dec_obj85;
char* result_285;
struct list$1CVALUEph* stack_saved_286;
struct list$1sRightValueObjectph* right_value_objects_287;
struct sClass* klass_288;
char* class_name_289;
char* fun_name_290;
struct sType* __exception_result_var_b285;
void* right_value231;
struct sType* type2_291;
struct sFun* cloner_292;
char* fun_name2_293;
int __exception_result_var_b286;
_Bool _if_conditional346;
void* right_value232;
char* __exception_result_var_b287;
char* none_generics_name_294;
void* right_value233;
struct sType* __exception_result_var_b288;
struct sType* obj_type_295;
void* right_value234;
char* __exception_result_var_b289;
char* __dec_obj86;
void* right_value235;
char* __exception_result_var_b290;
char* fun_name3_296;
struct sGenericsFun* __exception_result_var_b291;
struct sGenericsFun* generics_fun_297;
_Bool _if_conditional347;
void* right_value236;
char* __exception_result_var_b292;
_Bool __exception_result_var_b293;
_Bool _if_conditional348;
_Bool __result131__;
struct sFun* __exception_result_var_b294;
void* right_value237;
char* __exception_result_var_b295;
char* __dec_obj87;
int i_298;
void* right_value238;
char* __exception_result_var_b296;
char* new_fun_name_299;
struct sFun* __exception_result_var_b297;
_Bool _if_conditional349;
void* right_value239;
char* __exception_result_var_b298;
char* __dec_obj88;
_Bool _if_conditional350;
struct sFun* __exception_result_var_b299;
_Bool _if_conditional351;
void* right_value240;
struct tuple2$2sFunpcharph* __exception_result_var_b300;
struct tuple2$2sFunpcharph* multiple_assign_var9;
struct sFun* fun_300;
char* new_fun_name_301;
char* __dec_obj89;
struct list$1sRightValueObjectph* __dec_obj90;
struct list$1CVALUEph* __dec_obj91;
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
    if(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 918, 2593)), "04heap.c", 918, 2594))->mNoSolvedGenericsType, "04heap.c", 918, 2595)), "04heap.c", 918, 2596))->v1) {
        type=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 919, 2597)), "04heap.c", 919, 2598))->mNoSolvedGenericsType, "04heap.c", 919, 2599)), "04heap.c", 919, 2600))->v1;
    }
    __dec_obj85=result_285;
    result_285=((void*)0);
    __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    stack_saved_286=(struct list$1CVALUEph*)come_increment_ref_count(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 922, 2601)), "04heap.c", 922, 2602))->stack);
    right_value_objects_287=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 923, 2603)), "04heap.c", 923, 2604))->right_value_objects;
    klass_288=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 925, 2605)), "04heap.c", 925, 2606))->mClass;
    class_name_289=((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_288, "04heap.c", 927, 2607)), "04heap.c", 927, 2608))->mName;
    fun_name_290="equals";
    type2_291=(struct sType*)come_increment_ref_count(((struct sType*)(right_value231=(come_push_stackframe("04heap.c", 931, 2609),__exception_result_var_b285=sType_clone(type), come_pop_stackframe(), __exception_result_var_b285))));
    come_call_finalizer3(right_value231,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(type2_291, "04heap.c", 932, 2610)), "04heap.c", 932, 2611))->mHeap=(_Bool)0;
    cloner_292=((void*)0);
    if(_if_conditional346=(come_push_stackframe("04heap.c", 936, 2616),__exception_result_var_b286=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 936, 2612)), "04heap.c", 936, 2613))->mGenericsTypes, "04heap.c", 936, 2614)), "04heap.c", 936, 2615))), come_pop_stackframe(), __exception_result_var_b286)>0,    _if_conditional346) {
        none_generics_name_294=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 937, 2621),__exception_result_var_b287=((char*)(right_value232=get_none_generics_name(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 937, 2617)), "04heap.c", 937, 2618))->mClass, "04heap.c", 937, 2619)), "04heap.c", 937, 2620))->mName))), come_pop_stackframe(), __exception_result_var_b287));
        right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        obj_type_295=(struct sType*)come_increment_ref_count((come_push_stackframe("04heap.c", 939, 2624),__exception_result_var_b288=((struct sType*)(right_value233=solve_generics(type,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 939, 2622)), "04heap.c", 939, 2623))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b288));
        come_call_finalizer3(right_value233,sType_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj86=fun_name2_293;
        fun_name2_293=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 941, 2625),__exception_result_var_b289=((char*)(right_value234=create_method_name(obj_type_295,(_Bool)0,fun_name_290,info,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b289));
        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_name3_296=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 942, 2626),__exception_result_var_b290=((char*)(right_value235=xsprintf("%s_%s",none_generics_name_294,fun_name_290))), come_pop_stackframe(), __exception_result_var_b290));
        right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        generics_fun_297=(come_push_stackframe("04heap.c", 944, 2631),__exception_result_var_b291=map$2charphsGenericsFunph_at(((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 944, 2627)), "04heap.c", 944, 2628))->generics_funcs, "04heap.c", 944, 2629)), "04heap.c", 944, 2630)),fun_name3_296,((void*)0)), come_pop_stackframe(), __exception_result_var_b291);
        if(generics_fun_297) {
            if(_if_conditional348=!(come_push_stackframe("04heap.c", 947, 2633),__exception_result_var_b293=create_generics_fun((char*)come_increment_ref_count((come_push_stackframe("04heap.c", 947, 2632),__exception_result_var_b292=((char*)(right_value236=__builtin_string(fun_name2_293))), come_pop_stackframe(), __exception_result_var_b292)),generics_fun_297,obj_type_295,info), come_pop_stackframe(), __exception_result_var_b293),            right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional348) {
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
        cloner_292=(come_push_stackframe("04heap.c", 952, 2636),__exception_result_var_b294=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 952, 2634)), "04heap.c", 952, 2635))->funcs,fun_name2_293), come_pop_stackframe(), __exception_result_var_b294);
        none_generics_name_294 = come_decrement_ref_count2(none_generics_name_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_295,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_296 = come_decrement_ref_count2(fun_name3_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj87=fun_name2_293;
        fun_name2_293=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 955, 2637),__exception_result_var_b295=((char*)(right_value237=create_method_name(type,(_Bool)0,fun_name_290,info,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b295));
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        for(        i_298=128-1;        i_298>=1;        i_298--        ){
            new_fun_name_299=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 959, 2638),__exception_result_var_b296=((char*)(right_value238=xsprintf("%s_v%d",fun_name2_293,i_298))), come_pop_stackframe(), __exception_result_var_b296));
            right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            cloner_292=(come_push_stackframe("04heap.c", 960, 2641),__exception_result_var_b297=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 960, 2639)), "04heap.c", 960, 2640))->funcs,new_fun_name_299), come_pop_stackframe(), __exception_result_var_b297);
            if(cloner_292) {
                __dec_obj88=fun_name2_293;
                fun_name2_293=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 963, 2642),__exception_result_var_b298=((char*)(right_value239=__builtin_string(new_fun_name_299))), come_pop_stackframe(), __exception_result_var_b298));
                __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                new_fun_name_299 = come_decrement_ref_count2(new_fun_name_299, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_299 = come_decrement_ref_count2(new_fun_name_299, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional350=cloner_292==((void*)0),        _if_conditional350) {
            cloner_292=(come_push_stackframe("04heap.c", 969, 2645),__exception_result_var_b299=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 969, 2643)), "04heap.c", 969, 2644))->funcs,fun_name2_293), come_pop_stackframe(), __exception_result_var_b299);
        }
    }
    if(_if_conditional351=cloner_292==((void*)0)&&!((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 973, 2646)), "04heap.c", 973, 2647))->mClass, "04heap.c", 973, 2648)), "04heap.c", 973, 2649))->mProtocol&&!((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 973, 2650)), "04heap.c", 973, 2651))->mClass, "04heap.c", 973, 2652)), "04heap.c", 973, 2653))->mNumber,    _if_conditional351) {
        multiple_assign_var9=(come_push_stackframe("04heap.c", 975, 2654),__exception_result_var_b300=((struct tuple2$2sFunpcharph*)(right_value240=create_equals_automatically(type,fun_name_290,info))), come_pop_stackframe(), __exception_result_var_b300);
        fun_300=multiple_assign_var9->v1;
        new_fun_name_301=(char*)come_increment_ref_count(multiple_assign_var9->v2);
        come_call_finalizer3(right_value240,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj89=fun_name2_293;
        fun_name2_293=(char*)come_increment_ref_count(new_fun_name_301);
        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_292=fun_300;
        new_fun_name_301 = come_decrement_ref_count2(new_fun_name_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj90=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 981, 2655)), "04heap.c", 981, 2656))->right_value_objects;
    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 981, 2655)), "04heap.c", 981, 2656))->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_287);
    come_call_finalizer3(__dec_obj90,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj91=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 982, 2657)), "04heap.c", 982, 2658))->stack;
    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 982, 2657)), "04heap.c", 982, 2658))->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_286);
    come_call_finalizer3(__dec_obj91,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional352;
char* __dec_obj92;
char* result_302;
struct list$1CVALUEph* stack_saved_303;
struct list$1sRightValueObjectph* right_value_objects_304;
struct sClass* klass_305;
char* class_name_306;
char* fun_name_307;
struct sType* __exception_result_var_b301;
void* right_value241;
struct sType* type2_308;
struct sFun* cloner_309;
char* fun_name2_310;
int __exception_result_var_b302;
_Bool _if_conditional353;
void* right_value242;
char* __exception_result_var_b303;
char* none_generics_name_311;
void* right_value243;
struct sType* __exception_result_var_b304;
struct sType* obj_type_312;
void* right_value244;
char* __exception_result_var_b305;
char* __dec_obj93;
void* right_value245;
char* __exception_result_var_b306;
char* fun_name3_313;
struct sGenericsFun* __exception_result_var_b307;
struct sGenericsFun* generics_fun_314;
_Bool _if_conditional354;
void* right_value246;
char* __exception_result_var_b308;
_Bool __exception_result_var_b309;
_Bool _if_conditional355;
_Bool __result133__;
struct sFun* __exception_result_var_b310;
void* right_value247;
char* __exception_result_var_b311;
char* __dec_obj94;
int i_315;
void* right_value248;
char* __exception_result_var_b312;
char* new_fun_name_316;
struct sFun* __exception_result_var_b313;
_Bool _if_conditional356;
void* right_value249;
char* __exception_result_var_b314;
char* __dec_obj95;
_Bool _if_conditional357;
struct sFun* __exception_result_var_b315;
_Bool _if_conditional358;
void* right_value250;
struct tuple2$2sFunpcharph* __exception_result_var_b316;
struct tuple2$2sFunpcharph* multiple_assign_var10;
struct sFun* fun_317;
char* new_fun_name_318;
char* __dec_obj96;
struct list$1sRightValueObjectph* __dec_obj97;
struct list$1CVALUEph* __dec_obj98;
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
    if(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 989, 2659)), "04heap.c", 989, 2660))->mNoSolvedGenericsType, "04heap.c", 989, 2661)), "04heap.c", 989, 2662))->v1) {
        type=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 990, 2663)), "04heap.c", 990, 2664))->mNoSolvedGenericsType, "04heap.c", 990, 2665)), "04heap.c", 990, 2666))->v1;
    }
    __dec_obj92=result_302;
    result_302=((void*)0);
    __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    stack_saved_303=(struct list$1CVALUEph*)come_increment_ref_count(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 993, 2667)), "04heap.c", 993, 2668))->stack);
    right_value_objects_304=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 994, 2669)), "04heap.c", 994, 2670))->right_value_objects;
    klass_305=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 996, 2671)), "04heap.c", 996, 2672))->mClass;
    class_name_306=((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_305, "04heap.c", 998, 2673)), "04heap.c", 998, 2674))->mName;
    fun_name_307="operator_equals";
    type2_308=(struct sType*)come_increment_ref_count(((struct sType*)(right_value241=(come_push_stackframe("04heap.c", 1002, 2675),__exception_result_var_b301=sType_clone(type), come_pop_stackframe(), __exception_result_var_b301))));
    come_call_finalizer3(right_value241,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(type2_308, "04heap.c", 1003, 2676)), "04heap.c", 1003, 2677))->mHeap=(_Bool)0;
    cloner_309=((void*)0);
    if(_if_conditional353=(come_push_stackframe("04heap.c", 1007, 2682),__exception_result_var_b302=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 1007, 2678)), "04heap.c", 1007, 2679))->mGenericsTypes, "04heap.c", 1007, 2680)), "04heap.c", 1007, 2681))), come_pop_stackframe(), __exception_result_var_b302)>0,    _if_conditional353) {
        none_generics_name_311=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 1008, 2687),__exception_result_var_b303=((char*)(right_value242=get_none_generics_name(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 1008, 2683)), "04heap.c", 1008, 2684))->mClass, "04heap.c", 1008, 2685)), "04heap.c", 1008, 2686))->mName))), come_pop_stackframe(), __exception_result_var_b303));
        right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        obj_type_312=(struct sType*)come_increment_ref_count((come_push_stackframe("04heap.c", 1010, 2690),__exception_result_var_b304=((struct sType*)(right_value243=solve_generics(type,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1010, 2688)), "04heap.c", 1010, 2689))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b304));
        come_call_finalizer3(right_value243,sType_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj93=fun_name2_310;
        fun_name2_310=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 1012, 2691),__exception_result_var_b305=((char*)(right_value244=create_method_name(obj_type_312,(_Bool)0,fun_name_307,info,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b305));
        __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_name3_313=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 1013, 2692),__exception_result_var_b306=((char*)(right_value245=xsprintf("%s_%s",none_generics_name_311,fun_name_307))), come_pop_stackframe(), __exception_result_var_b306));
        right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        generics_fun_314=(come_push_stackframe("04heap.c", 1015, 2697),__exception_result_var_b307=map$2charphsGenericsFunph_at(((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1015, 2693)), "04heap.c", 1015, 2694))->generics_funcs, "04heap.c", 1015, 2695)), "04heap.c", 1015, 2696)),fun_name3_313,((void*)0)), come_pop_stackframe(), __exception_result_var_b307);
        if(generics_fun_314) {
            if(_if_conditional355=!(come_push_stackframe("04heap.c", 1018, 2699),__exception_result_var_b309=create_generics_fun((char*)come_increment_ref_count((come_push_stackframe("04heap.c", 1018, 2698),__exception_result_var_b308=((char*)(right_value246=__builtin_string(fun_name2_310))), come_pop_stackframe(), __exception_result_var_b308)),generics_fun_314,obj_type_312,info), come_pop_stackframe(), __exception_result_var_b309),            right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional355) {
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
        cloner_309=(come_push_stackframe("04heap.c", 1023, 2702),__exception_result_var_b310=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1023, 2700)), "04heap.c", 1023, 2701))->funcs,fun_name2_310), come_pop_stackframe(), __exception_result_var_b310);
        none_generics_name_311 = come_decrement_ref_count2(none_generics_name_311, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_312,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_313 = come_decrement_ref_count2(fun_name3_313, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj94=fun_name2_310;
        fun_name2_310=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 1026, 2703),__exception_result_var_b311=((char*)(right_value247=create_method_name(type,(_Bool)0,fun_name_307,info,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b311));
        __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        for(        i_315=128-1;        i_315>=1;        i_315--        ){
            new_fun_name_316=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 1030, 2704),__exception_result_var_b312=((char*)(right_value248=xsprintf("%s_v%d",fun_name2_310,i_315))), come_pop_stackframe(), __exception_result_var_b312));
            right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            cloner_309=(come_push_stackframe("04heap.c", 1031, 2707),__exception_result_var_b313=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1031, 2705)), "04heap.c", 1031, 2706))->funcs,new_fun_name_316), come_pop_stackframe(), __exception_result_var_b313);
            if(cloner_309) {
                __dec_obj95=fun_name2_310;
                fun_name2_310=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 1034, 2708),__exception_result_var_b314=((char*)(right_value249=__builtin_string(new_fun_name_316))), come_pop_stackframe(), __exception_result_var_b314));
                __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                new_fun_name_316 = come_decrement_ref_count2(new_fun_name_316, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_316 = come_decrement_ref_count2(new_fun_name_316, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional357=cloner_309==((void*)0),        _if_conditional357) {
            cloner_309=(come_push_stackframe("04heap.c", 1040, 2711),__exception_result_var_b315=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1040, 2709)), "04heap.c", 1040, 2710))->funcs,fun_name2_310), come_pop_stackframe(), __exception_result_var_b315);
        }
    }
    if(_if_conditional358=cloner_309==((void*)0)&&!((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 1044, 2712)), "04heap.c", 1044, 2713))->mClass, "04heap.c", 1044, 2714)), "04heap.c", 1044, 2715))->mProtocol&&!((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 1044, 2716)), "04heap.c", 1044, 2717))->mClass, "04heap.c", 1044, 2718)), "04heap.c", 1044, 2719))->mNumber,    _if_conditional358) {
        multiple_assign_var10=(come_push_stackframe("04heap.c", 1046, 2720),__exception_result_var_b316=((struct tuple2$2sFunpcharph*)(right_value250=create_operator_equals_automatically(type,fun_name_307,info))), come_pop_stackframe(), __exception_result_var_b316);
        fun_317=multiple_assign_var10->v1;
        new_fun_name_318=(char*)come_increment_ref_count(multiple_assign_var10->v2);
        come_call_finalizer3(right_value250,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj96=fun_name2_310;
        fun_name2_310=(char*)come_increment_ref_count(new_fun_name_318);
        __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_309=fun_317;
        new_fun_name_318 = come_decrement_ref_count2(new_fun_name_318, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj97=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1052, 2721)), "04heap.c", 1052, 2722))->right_value_objects;
    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1052, 2721)), "04heap.c", 1052, 2722))->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_304);
    come_call_finalizer3(__dec_obj97,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj98=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1053, 2723)), "04heap.c", 1053, 2724))->stack;
    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1053, 2723)), "04heap.c", 1053, 2724))->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_303);
    come_call_finalizer3(__dec_obj98,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional359;
char* __dec_obj99;
char* result_319;
struct list$1CVALUEph* stack_saved_320;
struct list$1sRightValueObjectph* right_value_objects_321;
struct sClass* klass_322;
char* class_name_323;
char* fun_name_324;
struct sType* __exception_result_var_b317;
void* right_value251;
struct sType* type2_325;
struct sFun* cloner_326;
char* fun_name2_327;
int __exception_result_var_b318;
_Bool _if_conditional360;
void* right_value252;
char* __exception_result_var_b319;
char* none_generics_name_328;
void* right_value253;
struct sType* __exception_result_var_b320;
struct sType* obj_type_329;
void* right_value254;
char* __exception_result_var_b321;
char* __dec_obj100;
void* right_value255;
char* __exception_result_var_b322;
char* fun_name3_330;
struct sGenericsFun* __exception_result_var_b323;
struct sGenericsFun* generics_fun_331;
_Bool _if_conditional361;
void* right_value256;
char* __exception_result_var_b324;
_Bool __exception_result_var_b325;
_Bool _if_conditional362;
_Bool __result135__;
struct sFun* __exception_result_var_b326;
void* right_value257;
char* __exception_result_var_b327;
char* __dec_obj101;
int i_332;
void* right_value258;
char* __exception_result_var_b328;
char* new_fun_name_333;
struct sFun* __exception_result_var_b329;
_Bool _if_conditional363;
void* right_value259;
char* __exception_result_var_b330;
char* __dec_obj102;
_Bool _if_conditional364;
struct sFun* __exception_result_var_b331;
_Bool _if_conditional365;
void* right_value260;
struct tuple2$2sFunpcharph* __exception_result_var_b332;
struct tuple2$2sFunpcharph* multiple_assign_var11;
struct sFun* fun_334;
char* new_fun_name_335;
char* __dec_obj103;
struct list$1sRightValueObjectph* __dec_obj104;
struct list$1CVALUEph* __dec_obj105;
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
    if(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 1060, 2725)), "04heap.c", 1060, 2726))->mNoSolvedGenericsType, "04heap.c", 1060, 2727)), "04heap.c", 1060, 2728))->v1) {
        type=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 1061, 2729)), "04heap.c", 1061, 2730))->mNoSolvedGenericsType, "04heap.c", 1061, 2731)), "04heap.c", 1061, 2732))->v1;
    }
    __dec_obj99=result_319;
    result_319=((void*)0);
    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    stack_saved_320=(struct list$1CVALUEph*)come_increment_ref_count(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1064, 2733)), "04heap.c", 1064, 2734))->stack);
    right_value_objects_321=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1065, 2735)), "04heap.c", 1065, 2736))->right_value_objects;
    klass_322=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 1067, 2737)), "04heap.c", 1067, 2738))->mClass;
    class_name_323=((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_322, "04heap.c", 1069, 2739)), "04heap.c", 1069, 2740))->mName;
    fun_name_324="operator_not_equals";
    type2_325=(struct sType*)come_increment_ref_count(((struct sType*)(right_value251=(come_push_stackframe("04heap.c", 1073, 2741),__exception_result_var_b317=sType_clone(type), come_pop_stackframe(), __exception_result_var_b317))));
    come_call_finalizer3(right_value251,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(type2_325, "04heap.c", 1074, 2742)), "04heap.c", 1074, 2743))->mHeap=(_Bool)0;
    cloner_326=((void*)0);
    if(_if_conditional360=(come_push_stackframe("04heap.c", 1078, 2748),__exception_result_var_b318=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 1078, 2744)), "04heap.c", 1078, 2745))->mGenericsTypes, "04heap.c", 1078, 2746)), "04heap.c", 1078, 2747))), come_pop_stackframe(), __exception_result_var_b318)>0,    _if_conditional360) {
        none_generics_name_328=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 1079, 2753),__exception_result_var_b319=((char*)(right_value252=get_none_generics_name(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 1079, 2749)), "04heap.c", 1079, 2750))->mClass, "04heap.c", 1079, 2751)), "04heap.c", 1079, 2752))->mName))), come_pop_stackframe(), __exception_result_var_b319));
        right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        obj_type_329=(struct sType*)come_increment_ref_count((come_push_stackframe("04heap.c", 1081, 2756),__exception_result_var_b320=((struct sType*)(right_value253=solve_generics(type,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1081, 2754)), "04heap.c", 1081, 2755))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b320));
        come_call_finalizer3(right_value253,sType_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj100=fun_name2_327;
        fun_name2_327=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 1083, 2757),__exception_result_var_b321=((char*)(right_value254=create_method_name(obj_type_329,(_Bool)0,fun_name_324,info,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b321));
        __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_name3_330=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 1084, 2758),__exception_result_var_b322=((char*)(right_value255=xsprintf("%s_%s",none_generics_name_328,fun_name_324))), come_pop_stackframe(), __exception_result_var_b322));
        right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        generics_fun_331=(come_push_stackframe("04heap.c", 1086, 2763),__exception_result_var_b323=map$2charphsGenericsFunph_at(((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1086, 2759)), "04heap.c", 1086, 2760))->generics_funcs, "04heap.c", 1086, 2761)), "04heap.c", 1086, 2762)),fun_name3_330,((void*)0)), come_pop_stackframe(), __exception_result_var_b323);
        if(generics_fun_331) {
            if(_if_conditional362=!(come_push_stackframe("04heap.c", 1089, 2765),__exception_result_var_b325=create_generics_fun((char*)come_increment_ref_count((come_push_stackframe("04heap.c", 1089, 2764),__exception_result_var_b324=((char*)(right_value256=__builtin_string(fun_name2_327))), come_pop_stackframe(), __exception_result_var_b324)),generics_fun_331,obj_type_329,info), come_pop_stackframe(), __exception_result_var_b325),            right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional362) {
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
        cloner_326=(come_push_stackframe("04heap.c", 1094, 2768),__exception_result_var_b326=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1094, 2766)), "04heap.c", 1094, 2767))->funcs,fun_name2_327), come_pop_stackframe(), __exception_result_var_b326);
        none_generics_name_328 = come_decrement_ref_count2(none_generics_name_328, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_329,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_330 = come_decrement_ref_count2(fun_name3_330, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj101=fun_name2_327;
        fun_name2_327=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 1097, 2769),__exception_result_var_b327=((char*)(right_value257=create_method_name(type,(_Bool)0,fun_name_324,info,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b327));
        __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        for(        i_332=128-1;        i_332>=1;        i_332--        ){
            new_fun_name_333=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 1101, 2770),__exception_result_var_b328=((char*)(right_value258=xsprintf("%s_v%d",fun_name2_327,i_332))), come_pop_stackframe(), __exception_result_var_b328));
            right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            cloner_326=(come_push_stackframe("04heap.c", 1102, 2773),__exception_result_var_b329=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1102, 2771)), "04heap.c", 1102, 2772))->funcs,new_fun_name_333), come_pop_stackframe(), __exception_result_var_b329);
            if(cloner_326) {
                __dec_obj102=fun_name2_327;
                fun_name2_327=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 1105, 2774),__exception_result_var_b330=((char*)(right_value259=__builtin_string(new_fun_name_333))), come_pop_stackframe(), __exception_result_var_b330));
                __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                new_fun_name_333 = come_decrement_ref_count2(new_fun_name_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_333 = come_decrement_ref_count2(new_fun_name_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional364=cloner_326==((void*)0),        _if_conditional364) {
            cloner_326=(come_push_stackframe("04heap.c", 1111, 2777),__exception_result_var_b331=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1111, 2775)), "04heap.c", 1111, 2776))->funcs,fun_name2_327), come_pop_stackframe(), __exception_result_var_b331);
        }
    }
    if(_if_conditional365=cloner_326==((void*)0)&&!((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 1115, 2778)), "04heap.c", 1115, 2779))->mClass, "04heap.c", 1115, 2780)), "04heap.c", 1115, 2781))->mProtocol&&!((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 1115, 2782)), "04heap.c", 1115, 2783))->mClass, "04heap.c", 1115, 2784)), "04heap.c", 1115, 2785))->mNumber,    _if_conditional365) {
        multiple_assign_var11=(come_push_stackframe("04heap.c", 1117, 2786),__exception_result_var_b332=((struct tuple2$2sFunpcharph*)(right_value260=create_operator_not_equals_automatically(type,fun_name_324,info))), come_pop_stackframe(), __exception_result_var_b332);
        fun_334=multiple_assign_var11->v1;
        new_fun_name_335=(char*)come_increment_ref_count(multiple_assign_var11->v2);
        come_call_finalizer3(right_value260,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj103=fun_name2_327;
        fun_name2_327=(char*)come_increment_ref_count(new_fun_name_335);
        __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_326=fun_334;
        new_fun_name_335 = come_decrement_ref_count2(new_fun_name_335, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj104=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1123, 2787)), "04heap.c", 1123, 2788))->right_value_objects;
    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1123, 2787)), "04heap.c", 1123, 2788))->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_321);
    come_call_finalizer3(__dec_obj104,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj105=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1124, 2789)), "04heap.c", 1124, 2790))->stack;
    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1124, 2789)), "04heap.c", 1124, 2790))->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_320);
    come_call_finalizer3(__dec_obj105,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional366;
_Bool __result137__;
struct list$1sRightValueObjectph* right_value_objects_336;
struct list$1sRightValueObjectph* o2_saved_337;
struct sRightValueObject* __exception_result_var_b333;
struct sRightValueObject* it_338;
_Bool __exception_result_var_b334;
struct sRightValueObject* __exception_result_var_b335;
_Bool _if_conditional367;
_Bool __exception_result_var_b336;
_Bool _if_conditional368;
_Bool __result138__;
_Bool __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&right_value_objects_336, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&o2_saved_337, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_338, 0, sizeof(struct sRightValueObject*));
    if(_if_conditional366=gComeGC||gComeC,    _if_conditional366) {
        __result137__ = (_Bool)0;
        return __result137__;
    }
    right_value_objects_336=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1134, 2791)), "04heap.c", 1134, 2792))->right_value_objects;
    for(    o2_saved_337=(right_value_objects_336),it_338=(come_push_stackframe("04heap.c", 1136, 2795),__exception_result_var_b333=list$1sRightValueObjectph_begin(((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_337), "04heap.c", 1136, 2793)), "04heap.c", 1136, 2794))), come_pop_stackframe(), __exception_result_var_b333);    !(come_push_stackframe("04heap.c", 1136, 2798),__exception_result_var_b334=list$1sRightValueObjectph_end(((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_337), "04heap.c", 1136, 2796)), "04heap.c", 1136, 2797))), come_pop_stackframe(), __exception_result_var_b334);    it_338=(come_push_stackframe("04heap.c", 1136, 2801),__exception_result_var_b335=list$1sRightValueObjectph_next(((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_337), "04heap.c", 1136, 2799)), "04heap.c", 1136, 2800))), come_pop_stackframe(), __exception_result_var_b335)    ){
        if(_if_conditional367=it_338&&!((struct sRightValueObject*)come_null_check(((struct sRightValueObject*)come_null_check(it_338, "04heap.c", 1137, 2802)), "04heap.c", 1137, 2803))->mFreed,        _if_conditional367) {
            if(_if_conditional368=(come_push_stackframe("04heap.c", 1138, 2810),__exception_result_var_b336=string_operator_equals(((struct sRightValueObject*)come_null_check(((struct sRightValueObject*)come_null_check(it_338, "04heap.c", 1138, 2804)), "04heap.c", 1138, 2805))->mFunName,((struct sFun*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1138, 2806)), "04heap.c", 1138, 2807))->come_fun, "04heap.c", 1138, 2808)), "04heap.c", 1138, 2809))->mName), come_pop_stackframe(), __exception_result_var_b336)&&((struct sRightValueObject*)come_null_check(((struct sRightValueObject*)come_null_check(it_338, "04heap.c", 1138, 2811)), "04heap.c", 1138, 2812))->mBlockLevel==((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1138, 2813)), "04heap.c", 1138, 2814))->block_level,            _if_conditional368) {
                __result138__ = (_Bool)1;
                return __result138__;
            }
        }
    }
    __result139__ = (_Bool)0;
    return __result139__;
}

void free_right_value_objects(struct sInfo* info, _Bool comma){
void* __result_obj__;
_Bool _if_conditional369;
_Bool free_right_value_339;
struct list$1sRightValueObjectph* right_value_objects_340;
int n_341;
struct list$1sRightValueObjectph* o2_saved_342;
struct sRightValueObject* __exception_result_var_b337;
struct sRightValueObject* it_343;
_Bool __exception_result_var_b338;
struct sRightValueObject* __exception_result_var_b339;
_Bool _if_conditional370;
_Bool __exception_result_var_b340;
_Bool _if_conditional371;
struct sType* __exception_result_var_b341;
void* right_value261;
struct sType* type_344;
void* right_value262;
struct sType* __exception_result_var_b342;
struct sType* __dec_obj106;
memset(&__result_obj__, 0, sizeof(void*));
memset(&free_right_value_339, 0, sizeof(_Bool));
memset(&right_value_objects_340, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&n_341, 0, sizeof(int));
memset(&o2_saved_342, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_343, 0, sizeof(struct sRightValueObject*));
right_value261 = (void*)0;
memset(&type_344, 0, sizeof(struct sType*));
right_value262 = (void*)0;
    if(_if_conditional369=gComeGC||gComeC,    _if_conditional369) {
        return;
    }
    free_right_value_339=(_Bool)0;
    right_value_objects_340=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1153, 2815)), "04heap.c", 1153, 2816))->right_value_objects;
    n_341=0;
    for(    o2_saved_342=(right_value_objects_340),it_343=(come_push_stackframe("04heap.c", 1156, 2819),__exception_result_var_b337=list$1sRightValueObjectph_begin(((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_342), "04heap.c", 1156, 2817)), "04heap.c", 1156, 2818))), come_pop_stackframe(), __exception_result_var_b337);    !(come_push_stackframe("04heap.c", 1156, 2822),__exception_result_var_b338=list$1sRightValueObjectph_end(((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_342), "04heap.c", 1156, 2820)), "04heap.c", 1156, 2821))), come_pop_stackframe(), __exception_result_var_b338);    it_343=(come_push_stackframe("04heap.c", 1156, 2825),__exception_result_var_b339=list$1sRightValueObjectph_next(((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_342), "04heap.c", 1156, 2823)), "04heap.c", 1156, 2824))), come_pop_stackframe(), __exception_result_var_b339)    ){
        if(_if_conditional370=it_343&&!((struct sRightValueObject*)come_null_check(((struct sRightValueObject*)come_null_check(it_343, "04heap.c", 1157, 2826)), "04heap.c", 1157, 2827))->mFreed,        _if_conditional370) {
            if(_if_conditional371=(come_push_stackframe("04heap.c", 1158, 2834),__exception_result_var_b340=string_operator_equals(((struct sRightValueObject*)come_null_check(((struct sRightValueObject*)come_null_check(it_343, "04heap.c", 1158, 2828)), "04heap.c", 1158, 2829))->mFunName,((struct sFun*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1158, 2830)), "04heap.c", 1158, 2831))->come_fun, "04heap.c", 1158, 2832)), "04heap.c", 1158, 2833))->mName), come_pop_stackframe(), __exception_result_var_b340)&&((struct sRightValueObject*)come_null_check(((struct sRightValueObject*)come_null_check(it_343, "04heap.c", 1158, 2835)), "04heap.c", 1158, 2836))->mBlockLevel==((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1158, 2837)), "04heap.c", 1158, 2838))->block_level,            _if_conditional371) {
                type_344=(struct sType*)come_increment_ref_count(((struct sType*)(right_value261=(come_push_stackframe("04heap.c", 1159, 2841),__exception_result_var_b341=sType_clone(((struct sRightValueObject*)come_null_check(((struct sRightValueObject*)come_null_check(it_343, "04heap.c", 1159, 2839)), "04heap.c", 1159, 2840))->mType), come_pop_stackframe(), __exception_result_var_b341))));
                come_call_finalizer3(right_value261,sType_finalize, 0, 1, 0, 0, __result_obj__);
                __dec_obj106=type_344;
                type_344=(struct sType*)come_increment_ref_count((come_push_stackframe("04heap.c", 1161, 2846),__exception_result_var_b342=((struct sType*)(right_value262=solve_type(type_344,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1161, 2842)), "04heap.c", 1161, 2843))->generics_type,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1161, 2844)), "04heap.c", 1161, 2845))->method_generics_types,info))), come_pop_stackframe(), __exception_result_var_b342));
                come_call_finalizer3(__dec_obj106,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value262,sType_finalize, 0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("04heap.c", 1164,2849),free_object(type_344,((struct sRightValueObject*)come_null_check(((struct sRightValueObject*)come_null_check(it_343, "04heap.c", 1164, 2847)), "04heap.c", 1164, 2848))->mVarName,(_Bool)1,(_Bool)0,info,comma,(_Bool)0,(_Bool)0),come_pop_stackframe());
                ((struct sRightValueObject*)come_null_check(((struct sRightValueObject*)come_null_check(it_343, "04heap.c", 1167, 2850)), "04heap.c", 1167, 2851))->mFreed=(_Bool)1;
                free_right_value_339=(_Bool)1;
                come_call_finalizer3(type_344,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        n_341++;
    }
}

_Bool is_right_values(int right_value_num, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional372;
_Bool __result140__;
struct list$1sRightValueObjectph* o2_saved_345;
struct sRightValueObject* __exception_result_var_b343;
struct sRightValueObject* it_346;
_Bool __exception_result_var_b344;
struct sRightValueObject* __exception_result_var_b345;
_Bool _if_conditional373;
_Bool __result141__;
_Bool __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&o2_saved_345, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_346, 0, sizeof(struct sRightValueObject*));
    if(_if_conditional372=gComeGC||gComeC,    _if_conditional372) {
        __result140__ = (_Bool)0;
        return __result140__;
    }
    for(    o2_saved_345=(struct list$1sRightValueObjectph*)come_increment_ref_count((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1181, 2852)), "04heap.c", 1181, 2853))->right_value_objects)),it_346=(come_push_stackframe("04heap.c", 1181, 2856),__exception_result_var_b343=list$1sRightValueObjectph_begin(((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_345), "04heap.c", 1181, 2854)), "04heap.c", 1181, 2855))), come_pop_stackframe(), __exception_result_var_b343);    !(come_push_stackframe("04heap.c", 1181, 2859),__exception_result_var_b344=list$1sRightValueObjectph_end(((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_345), "04heap.c", 1181, 2857)), "04heap.c", 1181, 2858))), come_pop_stackframe(), __exception_result_var_b344);    it_346=(come_push_stackframe("04heap.c", 1181, 2862),__exception_result_var_b345=list$1sRightValueObjectph_next(((struct list$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_345), "04heap.c", 1181, 2860)), "04heap.c", 1181, 2861))), come_pop_stackframe(), __exception_result_var_b345)    ){
        if(_if_conditional373=((struct sRightValueObject*)come_null_check(((struct sRightValueObject*)come_null_check(it_346, "04heap.c", 1182, 2863)), "04heap.c", 1182, 2864))->mID==right_value_num,        _if_conditional373) {
            __result141__ = (_Bool)1;
            come_call_finalizer3(o2_saved_345,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result141__;
        }
    }
    come_call_finalizer3(o2_saved_345,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    __result142__ = (_Bool)0;
    return __result142__;
}

struct sVar* get_variable_from_table(struct sVarTable* table, char* name){
void* __result_obj__;
struct sVarTable* it_347;
struct sVar* __exception_result_var_b349;
struct sVar* var__348;
_Bool _if_conditional382;
struct sVar* __result147__;
struct sVar* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_347, 0, sizeof(struct sVarTable*));
memset(&var__348, 0, sizeof(struct sVar*));
    it_347=table;
    while(it_347) {
        var__348=(come_push_stackframe("04heap.c", 1195, 2903),__exception_result_var_b349=map$2charphsVarphp_operator_load_element(((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(it_347, "04heap.c", 1195, 2865)), "04heap.c", 1195, 2866))->mVars,name), come_pop_stackframe(), __exception_result_var_b349);
        if(var__348) {
            __result147__ = __result_obj__ = var__348;
            return __result147__;
        }
        it_347=((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(it_347, "04heap.c", 1201, 2904)), "04heap.c", 1201, 2905))->mParent;
    }
    __result148__ = __result_obj__ = ((void*)0);
    return __result148__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
struct sVar* default_value_349;
void* __exception_result_var_b346;
unsigned int __exception_result_var_b347;
unsigned int hash_350;
unsigned int it_351;
_Bool _while_condtional32;
_Bool _if_conditional374;
_Bool __exception_result_var_b348;
_Bool _if_conditional375;
struct sVar* __result143__;
_Bool _if_conditional380;
_Bool _if_conditional381;
struct sVar* __result144__;
struct sVar* __result145__;
struct sVar* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_349, 0, sizeof(struct sVar*));
memset(&hash_350, 0, sizeof(unsigned int));
memset(&it_351, 0, sizeof(unsigned int));
            (come_push_stackframe("./neo-c.h", 1526, 2867),__exception_result_var_b346=memset(&default_value_349,0,sizeof(struct sVar*)), come_pop_stackframe(), __exception_result_var_b346);
            hash_350=(come_push_stackframe("./neo-c.h", 1528, 2870),__exception_result_var_b347=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1528, 2868)), "./neo-c.h", 1528, 2869))), come_pop_stackframe(), __exception_result_var_b347)%((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1528, 2871)), "./neo-c.h", 1528, 2872))->size;
            it_351=hash_350;
            while(_while_condtional32=(_Bool)1,            _while_condtional32) {
                if(_if_conditional374=((_Bool*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1532, 2873)), "./neo-c.h", 1532, 2874))->item_existance, "./neo-c.h", 1532, 2875))[it_351],                _if_conditional374) {
                    if(_if_conditional375=(come_push_stackframe("./neo-c.h", 1534, 2881),__exception_result_var_b348=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1534, 2876)), "./neo-c.h", 1534, 2877))->keys, "./neo-c.h", 1534, 2878))[it_351], "./neo-c.h", 1534, 2879)), "./neo-c.h", 1534, 2880)),key), come_pop_stackframe(), __exception_result_var_b348),                    _if_conditional375) {
                        __result143__ = __result_obj__ = ((struct sVar**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1536, 2882)), "./neo-c.h", 1536, 2883))->items, "./neo-c.h", 1536, 2884))[it_351];
                        come_call_finalizer3(default_value_349,sVar_finalize, 0, 0, 0, 0, (void*)0);
                        return __result143__;
                    }
                    it_351++;
                    if(_if_conditional380=it_351>=((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1541, 2901)), "./neo-c.h", 1541, 2902))->size,                    _if_conditional380) {
                        it_351=0;
                    }
                    else {
                        if(_if_conditional381=it_351==hash_350,                        _if_conditional381) {
                            __result144__ = __result_obj__ = default_value_349;
                            come_call_finalizer3(default_value_349,sVar_finalize, 0, 0, 1, 0, (void*)0);
                            return __result144__;
                        }
                    }
                }
                else {
                    __result145__ = __result_obj__ = default_value_349;
                    come_call_finalizer3(default_value_349,sVar_finalize, 0, 0, 1, 0, (void*)0);
                    return __result145__;
                }
            }
            __result146__ = __result_obj__ = default_value_349;
            come_call_finalizer3(default_value_349,sVar_finalize, 0, 0, 1, 0, (void*)0);
            return __result146__;
            come_call_finalizer3(default_value_349,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional376;
_Bool _if_conditional377;
_Bool _if_conditional378;
_Bool _if_conditional379;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional376=self!=((void*)0)&&((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 0, 2885)), "sVar_finalize", 0, 2886))->mName!=((void*)0),                            _if_conditional376) {
                                ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 0, 2887)), "sVar_finalize", 0, 2888))->mName = come_decrement_ref_count2(((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 0, 2887)), "sVar_finalize", 0, 2888))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional377=self!=((void*)0)&&((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 1, 2889)), "sVar_finalize", 1, 2890))->mCValueName!=((void*)0),                            _if_conditional377) {
                                ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 1, 2891)), "sVar_finalize", 1, 2892))->mCValueName = come_decrement_ref_count2(((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 1, 2891)), "sVar_finalize", 1, 2892))->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional378=self!=((void*)0)&&((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 2, 2893)), "sVar_finalize", 2, 2894))->mType!=((void*)0),                            _if_conditional378) {
                                come_call_finalizer3(((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 2, 2895)), "sVar_finalize", 2, 2896))->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional379=self!=((void*)0)&&((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 3, 2897)), "sVar_finalize", 3, 2898))->mFunName!=((void*)0),                            _if_conditional379) {
                                ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 3, 2899)), "sVar_finalize", 3, 2900))->mFunName = come_decrement_ref_count2(((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 3, 2899)), "sVar_finalize", 3, 2900))->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional383;
struct map$2charphsVarph* o2_saved_352;
char* __exception_result_var_b352;
char* it_355;
_Bool __exception_result_var_b353;
char* __exception_result_var_b356;
struct sVar* __exception_result_var_b357;
struct sVar* p_358;
struct sType* type_359;
struct sClass* klass_360;
_Bool __exception_result_var_b358;
_Bool _if_conditional388;
_Bool _if_conditional389;
_Bool _if_conditional390;
_Bool _if_conditional391;
void* right_value263;
char* __exception_result_var_b359;
char* c_value_361;
struct sType* __exception_result_var_b360;
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
    if(_if_conditional383=gComeGC||gComeC,    _if_conditional383) {
        return;
    }
    for(    o2_saved_352=(struct map$2charphsVarph*)come_increment_ref_count((((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(table, "04heap.c", 1212, 2906)), "04heap.c", 1212, 2907))->mVars)),it_355=(come_push_stackframe("04heap.c", 1212, 2930),__exception_result_var_b352=map$2charphsVarph_begin(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check((o2_saved_352), "04heap.c", 1212, 2908)), "04heap.c", 1212, 2909))), come_pop_stackframe(), __exception_result_var_b352);    !(come_push_stackframe("04heap.c", 1212, 2939),__exception_result_var_b353=map$2charphsVarph_end(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check((o2_saved_352), "04heap.c", 1212, 2931)), "04heap.c", 1212, 2932))), come_pop_stackframe(), __exception_result_var_b353);    it_355=(come_push_stackframe("04heap.c", 1212, 2968),__exception_result_var_b356=map$2charphsVarph_next(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check((o2_saved_352), "04heap.c", 1212, 2940)), "04heap.c", 1212, 2941))), come_pop_stackframe(), __exception_result_var_b356)    ){
        p_358=(come_push_stackframe("04heap.c", 1213, 2971),__exception_result_var_b357=map$2charphsVarphp_operator_load_element(((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(table, "04heap.c", 1213, 2969)), "04heap.c", 1213, 2970))->mVars,it_355), come_pop_stackframe(), __exception_result_var_b357);
        type_359=((struct sVar*)come_null_check(((struct sVar*)come_null_check(p_358, "04heap.c", 1214, 2972)), "04heap.c", 1214, 2973))->mType;
        klass_360=((struct sType*)come_null_check(((struct sType*)come_null_check(type_359, "04heap.c", 1215, 2974)), "04heap.c", 1215, 2975))->mClass;
        if(_if_conditional388=ret_value!=((void*)0)&&((struct sVar*)come_null_check(((struct sVar*)come_null_check(p_358, "04heap.c", 1217, 2976)), "04heap.c", 1217, 2977))->mCValueName!=((void*)0)&&(come_push_stackframe("04heap.c", 1217, 2982),__exception_result_var_b358=string_operator_equals(((struct sVar*)come_null_check(((struct sVar*)come_null_check(p_358, "04heap.c", 1217, 2978)), "04heap.c", 1217, 2979))->mCValueName,((struct sVar*)come_null_check(((struct sVar*)come_null_check(ret_value, "04heap.c", 1217, 2980)), "04heap.c", 1217, 2981))->mCValueName), come_pop_stackframe(), __exception_result_var_b358)&&((struct sType*)come_null_check(((struct sType*)come_null_check(type_359, "04heap.c", 1217, 2983)), "04heap.c", 1217, 2984))->mHeap,        _if_conditional388) {
            (come_push_stackframe("04heap.c", 1219,2989),free_object(((struct sVar*)come_null_check(((struct sVar*)come_null_check(p_358, "04heap.c", 1219, 2985)), "04heap.c", 1219, 2986))->mType,((struct sVar*)come_null_check(((struct sVar*)come_null_check(p_358, "04heap.c", 1219, 2987)), "04heap.c", 1219, 2988))->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)1,(_Bool)0),come_pop_stackframe());
        }
        else {
            if(_if_conditional389=((struct sType*)come_null_check(((struct sType*)come_null_check(type_359, "04heap.c", 1221, 2990)), "04heap.c", 1221, 2991))->mHeap&&((struct sVar*)come_null_check(((struct sVar*)come_null_check(p_358, "04heap.c", 1221, 2992)), "04heap.c", 1221, 2993))->mCValueName,            _if_conditional389) {
                if(((struct sType*)come_null_check(((struct sType*)come_null_check(type_359, "04heap.c", 1222, 2994)), "04heap.c", 1222, 2995))->mFunctionParam) {
                    (come_push_stackframe("04heap.c", 1223,3000),free_object(((struct sVar*)come_null_check(((struct sVar*)come_null_check(p_358, "04heap.c", 1223, 2996)), "04heap.c", 1223, 2997))->mType,((struct sVar*)come_null_check(((struct sVar*)come_null_check(p_358, "04heap.c", 1223, 2998)), "04heap.c", 1223, 2999))->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0),come_pop_stackframe());
                }
                else {
                    (come_push_stackframe("04heap.c", 1226,3005),free_object(((struct sVar*)come_null_check(((struct sVar*)come_null_check(p_358, "04heap.c", 1226, 3001)), "04heap.c", 1226, 3002))->mType,((struct sVar*)come_null_check(((struct sVar*)come_null_check(p_358, "04heap.c", 1226, 3003)), "04heap.c", 1226, 3004))->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0),come_pop_stackframe());
                }
            }
            else {
                if(_if_conditional391=((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_360, "04heap.c", 1229, 3006)), "04heap.c", 1229, 3007))->mStruct&&((struct sVar*)come_null_check(((struct sVar*)come_null_check(p_358, "04heap.c", 1229, 3008)), "04heap.c", 1229, 3009))->mCValueName&&((struct sType*)come_null_check(((struct sType*)come_null_check(type_359, "04heap.c", 1229, 3010)), "04heap.c", 1229, 3011))->mAllocaValue&&!((struct sType*)come_null_check(((struct sType*)come_null_check(type_359, "04heap.c", 1229, 3012)), "04heap.c", 1229, 3013))->mNoCallingDestructor,                _if_conditional391) {
                    c_value_361=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 1230, 3016),__exception_result_var_b359=((char*)(right_value263=xsprintf("(&%s)",((struct sVar*)come_null_check(((struct sVar*)come_null_check(p_358, "04heap.c", 1230, 3014)), "04heap.c", 1230, 3015))->mCValueName))), come_pop_stackframe(), __exception_result_var_b359));
                    right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    type2_362=(struct sType*)come_increment_ref_count(((struct sType*)(right_value264=(come_push_stackframe("04heap.c", 1231, 3017),__exception_result_var_b360=sType_clone(type_359), come_pop_stackframe(), __exception_result_var_b360))));
                    come_call_finalizer3(right_value264,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(type2_362, "04heap.c", 1232, 3018)), "04heap.c", 1232, 3019))->mPointerNum++;
                    (come_push_stackframe("04heap.c", 1233,3020),free_object(type2_362,c_value_361,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0),come_pop_stackframe());
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
_Bool _if_conditional384;
char* result_353;
void* __exception_result_var_b350;
char* __result149__;
_Bool _if_conditional385;
char* __result150__;
char* result_354;
void* __exception_result_var_b351;
char* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_353, 0, sizeof(char*));
memset(&result_354, 0, sizeof(char*));
        if(_if_conditional384=self==((void*)0),        _if_conditional384) {
            (come_push_stackframe("./neo-c.h", 1282, 2910),__exception_result_var_b350=memset(&result_353,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b350);
            __result149__ = __result_obj__ = result_353;
            return __result149__;
        }
        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1285, 2911)), "./neo-c.h", 1285, 2912))->key_list, "./neo-c.h", 1285, 2913)), "./neo-c.h", 1285, 2914))->it=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1285, 2915)), "./neo-c.h", 1285, 2916))->key_list, "./neo-c.h", 1285, 2917)), "./neo-c.h", 1285, 2918))->head;
        if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1287, 2919)), "./neo-c.h", 1287, 2920))->key_list, "./neo-c.h", 1287, 2921)), "./neo-c.h", 1287, 2922))->it) {
            __result150__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1288, 2923)), "./neo-c.h", 1288, 2924))->key_list, "./neo-c.h", 1288, 2925)), "./neo-c.h", 1288, 2926))->it, "./neo-c.h", 1288, 2927)), "./neo-c.h", 1288, 2928))->item;
            return __result150__;
        }
        (come_push_stackframe("./neo-c.h", 1292, 2929),__exception_result_var_b351=memset(&result_354,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b351);
        __result151__ = __result_obj__ = result_354;
        return __result151__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result152__;
memset(&__result_obj__, 0, sizeof(void*));
        __result152__ = self==((void*)0)||((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1314, 2933)), "./neo-c.h", 1314, 2934))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1314, 2935)), "./neo-c.h", 1314, 2936))->key_list, "./neo-c.h", 1314, 2937)), "./neo-c.h", 1314, 2938))->it==((void*)0);
        return __result152__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional386;
char* result_356;
void* __exception_result_var_b354;
char* __result153__;
_Bool _if_conditional387;
char* __result154__;
char* result_357;
void* __exception_result_var_b355;
char* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_356, 0, sizeof(char*));
memset(&result_357, 0, sizeof(char*));
        if(_if_conditional386=self==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1297, 2942)), "./neo-c.h", 1297, 2943))->key_list, "./neo-c.h", 1297, 2944)), "./neo-c.h", 1297, 2945))->it==((void*)0),        _if_conditional386) {
            (come_push_stackframe("./neo-c.h", 1299, 2946),__exception_result_var_b354=memset(&result_356,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b354);
            __result153__ = __result_obj__ = result_356;
            return __result153__;
        }
        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1302, 2947)), "./neo-c.h", 1302, 2948))->key_list, "./neo-c.h", 1302, 2949)), "./neo-c.h", 1302, 2950))->it=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1302, 2951)), "./neo-c.h", 1302, 2952))->key_list, "./neo-c.h", 1302, 2953)), "./neo-c.h", 1302, 2954))->it, "./neo-c.h", 1302, 2955)), "./neo-c.h", 1302, 2956))->next;
        if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1304, 2957)), "./neo-c.h", 1304, 2958))->key_list, "./neo-c.h", 1304, 2959)), "./neo-c.h", 1304, 2960))->it) {
            __result154__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1305, 2961)), "./neo-c.h", 1305, 2962))->key_list, "./neo-c.h", 1305, 2963)), "./neo-c.h", 1305, 2964))->it, "./neo-c.h", 1305, 2965)), "./neo-c.h", 1305, 2966))->item;
            return __result154__;
        }
        (come_push_stackframe("./neo-c.h", 1309, 2967),__exception_result_var_b355=memset(&result_357,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b355);
        __result155__ = __result_obj__ = result_357;
        return __result155__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_363;
_Bool _if_conditional392;
_Bool _if_conditional393;
int i_364;
_Bool _if_conditional394;
_Bool _if_conditional395;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_363, 0, sizeof(int));
memset(&i_364, 0, sizeof(int));
        for(        i_363=0;        i_363<((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1111, 3021)), "./neo-c.h", 1111, 3022))->size;        i_363++        ){
            if(_if_conditional392=((_Bool*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1112, 3023)), "./neo-c.h", 1112, 3024))->item_existance, "./neo-c.h", 1112, 3025))[i_363],            _if_conditional392) {
                if(_if_conditional393=1,                _if_conditional393) {
                    come_call_finalizer3(((struct sVar**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1114, 3026)), "./neo-c.h", 1114, 3027))->items, "./neo-c.h", 1114, 3028))[i_363],sVar_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
        }
        (come_push_stackframe("./neo-c.h", 1118,3031),come_free((char*)((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1118, 3029)), "./neo-c.h", 1118, 3030))->items),come_pop_stackframe());
        for(        i_364=0;        i_364<((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1120, 3032)), "./neo-c.h", 1120, 3033))->size;        i_364++        ){
            if(_if_conditional394=((_Bool*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1121, 3034)), "./neo-c.h", 1121, 3035))->item_existance, "./neo-c.h", 1121, 3036))[i_364],            _if_conditional394) {
                if(_if_conditional395=1,                _if_conditional395) {
                    ((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1123, 3037)), "./neo-c.h", 1123, 3038))->keys, "./neo-c.h", 1123, 3039))[i_364] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1123, 3037)), "./neo-c.h", 1123, 3038))->keys, "./neo-c.h", 1123, 3039))[i_364], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        (come_push_stackframe("./neo-c.h", 1127,3042),come_free((char*)((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1127, 3040)), "./neo-c.h", 1127, 3041))->keys),come_pop_stackframe());
        come_call_finalizer3(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1129, 3043)), "./neo-c.h", 1129, 3044))->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
        ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1131, 3049)), "./neo-c.h", 1131, 3050))->item_existance = come_decrement_ref_count2(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1131, 3049)), "./neo-c.h", 1131, 3050))->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_365;
_Bool _while_condtional33;
struct list_item$1charp* prev_it_366;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_365, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_366, 0, sizeof(struct list_item$1charp*));
            it_365=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 120, 3045)), "./neo-c.h", 120, 3046))->head;
            while(_while_condtional33=it_365!=((void*)0),            _while_condtional33) {
                prev_it_366=it_365;
                it_365=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_365, "./neo-c.h", 123, 3047)), "./neo-c.h", 123, 3048))->next;
                come_call_finalizer3(prev_it_366,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
void* __result_obj__;
_Bool _if_conditional396;
struct sVarTable* it_367;
_Bool _if_conditional397;
_Bool _while_condtional34;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_367, 0, sizeof(struct sVarTable*));
    if(_if_conditional396=gComeGC||gComeC,    _if_conditional396) {
        return;
    }
    it_367=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1243, 3051)), "04heap.c", 1243, 3052))->lv_table;
    if(_if_conditional397=it_367==((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1245, 3053)), "04heap.c", 1245, 3054))->come_fun, "04heap.c", 1245, 3055)), "04heap.c", 1245, 3056))->mBlock, "04heap.c", 1245, 3057)), "04heap.c", 1245, 3058))->mVarTable,    _if_conditional397) {
        (come_push_stackframe("04heap.c", 1246,3059),free_objects(it_367,ret_value,info),come_pop_stackframe());
    }
    else {
        while(_while_condtional34=it_367!=((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1249, 3060)), "04heap.c", 1249, 3061))->come_fun, "04heap.c", 1249, 3062)), "04heap.c", 1249, 3063))->mBlock, "04heap.c", 1249, 3064)), "04heap.c", 1249, 3065))->mVarTable,        _while_condtional34) {
            (come_push_stackframe("04heap.c", 1250,3066),free_objects(it_367,ret_value,info),come_pop_stackframe());
            it_367=((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(it_367, "04heap.c", 1252, 3067)), "04heap.c", 1252, 3068))->mParent;
        }
        (come_push_stackframe("04heap.c", 1254,3069),free_objects(it_367,ret_value,info),come_pop_stackframe());
    }
}

void free_objects_on_break(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional398;
struct sVar* ret_value_368;
struct sVarTable* current_loop_vtable_369;
_Bool _if_conditional399;
struct sVarTable* it_370;
_Bool _while_condtional35;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ret_value_368, 0, sizeof(struct sVar*));
memset(&current_loop_vtable_369, 0, sizeof(struct sVarTable*));
memset(&it_370, 0, sizeof(struct sVarTable*));
    if(_if_conditional398=gComeGC||gComeC,    _if_conditional398) {
        return;
    }
    ret_value_368=((void*)0);
    current_loop_vtable_369=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1265, 3070)), "04heap.c", 1265, 3071))->current_loop_vtable;
    if(_if_conditional399=current_loop_vtable_369!=((void*)0),    _if_conditional399) {
        it_370=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1268, 3072)), "04heap.c", 1268, 3073))->lv_table;
        while(_while_condtional35=it_370!=current_loop_vtable_369,        _while_condtional35) {
            (come_push_stackframe("04heap.c", 1270,3074),free_objects(it_370,ret_value_368,info),come_pop_stackframe());
            it_370=((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(it_370, "04heap.c", 1272, 3075)), "04heap.c", 1272, 3076))->mParent;
        }
        (come_push_stackframe("04heap.c", 1274,3077),free_objects(it_370,ret_value_368,info),come_pop_stackframe());
    }
}

char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __exception_result_var_b361;
_Bool _if_conditional400;
_Bool _if_conditional401;
void* right_value265;
void* right_value266;
void* right_value267;
void* right_value268;
void* right_value269;
char* __result156__;
_Bool _if_conditional402;
void* right_value270;
char* __exception_result_var_b362;
char* var_name_372;
void* right_value271;
char* __exception_result_var_b363;
void* right_value272;
void* right_value273;
void* right_value274;
void* right_value275;
void* right_value276;
void* right_value277;
void* right_value278;
char* __result157__;
void* right_value279;
char* __exception_result_var_b364;
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
    if(_if_conditional400=(come_push_stackframe("04heap.c", 1280, 3082),__exception_result_var_b361=string_operator_equals(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 1280, 3078)), "04heap.c", 1280, 3079))->mClass, "04heap.c", 1280, 3080)), "04heap.c", 1280, 3081))->mName,"void"), come_pop_stackframe(), __exception_result_var_b361)&&((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 1280, 3083)), "04heap.c", 1280, 3084))->mPointerNum==0,    _if_conditional400) {
        if(_if_conditional401=gComeDebug||((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 1281, 3085)), "04heap.c", 1281, 3086))->mRecord,        _if_conditional401) {
            __result156__ = __result_obj__ = ((char*)(right_value269=xsprintf("(come_push_stackframe(\"\%s\", \%s,\%s),\%s,come_pop_stackframe())",((char*)(right_value265=string_to_string(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1282, 3087)), "04heap.c", 1282, 3088))->sname))),((char*)(right_value266=int_to_string(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1282, 3089)), "04heap.c", 1282, 3090))->sline))),((char*)(right_value267=int_to_string(gComeDebugStackFrameID++))),((char*)(right_value268=charp_to_string(c_value))))));
            right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value269 = come_decrement_ref_count2(right_value269, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result156__;
        }
    }
    else {
        if(_if_conditional402=gComeDebug||((struct sType*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 1285, 3091)), "04heap.c", 1285, 3092))->mRecord,        _if_conditional402) {
            static int n_371=0;
            ++n_371;
            var_name_372=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 1289, 3093),__exception_result_var_b362=((char*)(right_value270=xsprintf("__exception_result_var_b%d",n_371))), come_pop_stackframe(), __exception_result_var_b362));
            right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("04heap.c", 1290,3095),add_come_code_at_function_head(info,"%s;\n",(come_push_stackframe("04heap.c", 1290, 3094),__exception_result_var_b363=((char*)(right_value271=make_define_var(type,var_name_372,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b363)),come_pop_stackframe());
            right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __result157__ = __result_obj__ = ((char*)(right_value278=xsprintf("(come_push_stackframe(\"\%s\", \%s, \%s),\%s=\%s, come_pop_stackframe(), \%s)",((char*)(right_value272=string_to_string(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1291, 3096)), "04heap.c", 1291, 3097))->sname))),((char*)(right_value273=int_to_string(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1291, 3098)), "04heap.c", 1291, 3099))->sline))),((char*)(right_value274=int_to_string(gComeDebugStackFrameID++))),((char*)(right_value275=string_to_string(var_name_372))),((char*)(right_value276=charp_to_string(c_value))),((char*)(right_value277=string_to_string(var_name_372))))));
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
    __result158__ = __result_obj__ = (come_push_stackframe("04heap.c", 1294, 3100),__exception_result_var_b364=((char*)(right_value279=__builtin_string(c_value))), come_pop_stackframe(), __exception_result_var_b364);
    right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result158__;
}

