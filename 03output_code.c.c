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

char* create_generics_name(struct sType* generics_type, struct sInfo* info);

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

char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
char* make_come_type_name_string(struct sType* type, struct sInfo* info);

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
void show_type(struct sType* type, struct sInfo* info);

static char* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info);
char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info);

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
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
struct sType* get_no_solved_type(struct sType* type);

static struct sType* list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
char* make_come_type_name_string_no_solved(struct sType* type, struct sInfo* info);

char* make_define_var_no_solved(struct sType* type, char* name, _Bool in_header, struct sInfo* info);

char* output_function(struct sFun* fun, struct sInfo* info);

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
char* header_function(struct sFun* fun, struct sInfo* info);

char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info);

void add_come_code(struct sInfo* info, const char* msg, ...);

static void va_list_finalize(va_list self);
void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...);

void add_come_code_at_source_head2(struct sInfo* info, const char* msg, ...);

void add_come_code_at_come_header(struct sInfo* info, const char* msg, ...);

int transpile_v3(struct sInfo* info);

_Bool output_source_file_v3(struct sInfo* info);

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static char* map$2charphsFunph_begin(struct map$2charphsFunph* self);
static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self);
static char* map$2charphsFunph_next(struct map$2charphsFunph* self);
static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
_Bool output_header_file(struct sInfo* info);

void add_come_code_at_function_head(struct sInfo* info, char* code, ...);

void add_come_code_at_function_head2(struct sInfo* info, char* code, ...);

void add_last_code_to_source(struct sInfo* info);

void add_last_code_to_source_with_comma(struct sInfo* info);

void add_come_last_code(struct sInfo* info, const char* msg, ...);

void add_come_last_code2(struct sInfo* info, const char* msg, ...);

void add_come_last_code3(struct sInfo* info, const char* msg, ...);

void dec_stack_ptr(int value, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEph_delete(struct list$1CVALUEph* self, int head, int tail);
static struct list$1CVALUEph* list$1CVALUEph_reset(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
void transpiler_clear_last_code(struct sInfo* info);

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










char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info){
void* __result_obj__;
void* right_value79;
void* right_value80;
struct buffer* __exception_result_var_b51;
struct buffer* buf_47;
char* class_name_48;
_Bool _if_conditional19;
_Bool __exception_result_var_b52;
_Bool _if_conditional20;
int __exception_result_var_b53;
void* right_value81;
char* __exception_result_var_b54;
char* __result52__;
void* right_value82;
struct CVALUE* __exception_result_var_b55;
struct CVALUE* come_value_49;
void* right_value83;
char* __exception_result_var_b56;
struct buffer* __exception_result_var_b57;
_Bool _if_conditional40;
struct buffer* __exception_result_var_b58;
_Bool _if_conditional41;
struct buffer* __exception_result_var_b59;
_Bool _if_conditional42;
struct buffer* __exception_result_var_b60;
_Bool _if_conditional43;
struct buffer* __exception_result_var_b61;
_Bool __exception_result_var_b62;
_Bool _if_conditional44;
struct buffer* __exception_result_var_b63;
_Bool __exception_result_var_b64;
_Bool _if_conditional45;
struct buffer* __exception_result_var_b65;
_Bool __exception_result_var_b66;
_Bool _if_conditional46;
_Bool _if_conditional47;
struct buffer* __exception_result_var_b67;
struct buffer* __exception_result_var_b68;
_Bool _if_conditional48;
struct buffer* __exception_result_var_b69;
struct buffer* __exception_result_var_b70;
_Bool _if_conditional49;
struct buffer* __exception_result_var_b71;
struct buffer* __exception_result_var_b72;
_Bool _if_conditional50;
struct buffer* __exception_result_var_b73;
struct buffer* __exception_result_var_b74;
_Bool _if_conditional51;
_Bool __exception_result_var_b75;
_Bool _if_conditional52;
struct buffer* __exception_result_var_b76;
_Bool __exception_result_var_b77;
_Bool _if_conditional53;
struct buffer* __exception_result_var_b78;
_Bool _if_conditional54;
_Bool __exception_result_var_b79;
_Bool _if_conditional55;
struct buffer* __exception_result_var_b80;
_Bool __exception_result_var_b81;
_Bool _if_conditional56;
struct buffer* __exception_result_var_b82;
_Bool __exception_result_var_b83;
_Bool _if_conditional57;
struct buffer* __exception_result_var_b84;
_Bool __exception_result_var_b85;
_Bool _if_conditional58;
struct buffer* __exception_result_var_b86;
_Bool __exception_result_var_b87;
_Bool _if_conditional59;
struct buffer* __exception_result_var_b88;
_Bool __exception_result_var_b89;
_Bool _if_conditional60;
struct buffer* __exception_result_var_b90;
_Bool __exception_result_var_b91;
_Bool _if_conditional61;
void* right_value84;
char* __exception_result_var_b92;
char* result_type_str_56;
struct buffer* __exception_result_var_b93;
struct buffer* __exception_result_var_b94;
int j_57;
struct list$1sTypeph* o2_saved_58;
struct sType* __exception_result_var_b97;
struct sType* it_61;
_Bool __exception_result_var_b98;
struct sType* __exception_result_var_b101;
void* right_value85;
char* __exception_result_var_b102;
char* param_type_str_64;
struct buffer* __exception_result_var_b103;
int __exception_result_var_b104;
_Bool _if_conditional67;
struct buffer* __exception_result_var_b105;
struct buffer* __exception_result_var_b106;
_Bool _if_conditional68;
void* right_value86;
char* __exception_result_var_b107;
char* __result62__;
struct buffer* __exception_result_var_b108;
_Bool __exception_result_var_b109;
_Bool __exception_result_var_b110;
_Bool __exception_result_var_b111;
_Bool _if_conditional69;
int i_65;
struct buffer* __exception_result_var_b112;
int __exception_result_var_b113;
_Bool __exception_result_var_b114;
_Bool __exception_result_var_b115;
_Bool _if_conditional71;
struct buffer* __exception_result_var_b116;
_Bool _if_conditional72;
struct buffer* __exception_result_var_b117;
void* right_value87;
char* __exception_result_var_b118;
char* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value80 = (void*)0;
memset(&buf_47, 0, sizeof(struct buffer*));
memset(&class_name_48, 0, sizeof(char*));
right_value81 = (void*)0;
right_value82 = (void*)0;
memset(&come_value_49, 0, sizeof(struct CVALUE*));
right_value83 = (void*)0;
right_value84 = (void*)0;
memset(&result_type_str_56, 0, sizeof(char*));
memset(&j_57, 0, sizeof(int));
memset(&o2_saved_58, 0, sizeof(struct list$1sTypeph*));
memset(&it_61, 0, sizeof(struct sType*));
right_value85 = (void*)0;
memset(&param_type_str_64, 0, sizeof(char*));
right_value86 = (void*)0;
memset(&i_65, 0, sizeof(int));
right_value87 = (void*)0;
    buf_47=(struct buffer*)come_increment_ref_count((come_push_stackframe("03output_code.c", 5, 574),__exception_result_var_b51=((struct buffer*)(right_value80=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value79=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 5, "buffer"))), "03output_code.c", 5, 573)))))), come_pop_stackframe(), __exception_result_var_b51));
    come_call_finalizer3(right_value79,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value80,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    class_name_48=((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 7, 575)), "03output_code.c", 7, 576))->mClass, "03output_code.c", 7, 577)), "03output_code.c", 7, 578))->mName;
    if(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 9, 579)), "03output_code.c", 9, 580))->mAlignas) {
        if(_if_conditional20=!(come_push_stackframe("03output_code.c", 10, 583),__exception_result_var_b52=node_compile(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 10, 581)), "03output_code.c", 10, 582))->mAlignas,info), come_pop_stackframe(), __exception_result_var_b52),        _if_conditional20) {
            (come_push_stackframe("03output_code.c", 11, 584),__exception_result_var_b53=printf("_Alignas error\n"), come_pop_stackframe(), __exception_result_var_b53);
            __result52__ = __result_obj__ = (come_push_stackframe("03output_code.c", 12, 585),__exception_result_var_b54=((char*)(right_value81=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b54);
            come_call_finalizer3(buf_47,buffer_finalize, 0, 0, 0, 0, (void*)0);
            right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result52__;
        }
        come_value_49=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("03output_code.c", 15, 586),__exception_result_var_b55=((struct CVALUE*)(right_value82=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b55));
        come_call_finalizer3(right_value82,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("03output_code.c", 16,675),dec_stack_ptr(1,info),come_pop_stackframe());
        (come_push_stackframe("03output_code.c", 18, 681),__exception_result_var_b57=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_47, "03output_code.c", 18, 676)), "03output_code.c", 18, 677)),(come_push_stackframe("03output_code.c", 18, 680),__exception_result_var_b56=((char*)(right_value83=xsprintf("_Alignas(%s) ",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_49, "03output_code.c", 18, 678)), "03output_code.c", 18, 679))->c_value))), come_pop_stackframe(), __exception_result_var_b56)), come_pop_stackframe(), __exception_result_var_b57);
        right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(come_value_49,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(_if_conditional40=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 21, 682)), "03output_code.c", 21, 683))->mStatic&&!((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 21, 684)), "03output_code.c", 21, 685))->mClass, "03output_code.c", 21, 686)), "03output_code.c", 21, 687))->mStruct&&!((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 21, 688)), "03output_code.c", 21, 689))->mClass, "03output_code.c", 21, 690)), "03output_code.c", 21, 691))->mUnion,    _if_conditional40) {
        (come_push_stackframe("03output_code.c", 22, 694),__exception_result_var_b58=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_47, "03output_code.c", 22, 692)), "03output_code.c", 22, 693)),"static "), come_pop_stackframe(), __exception_result_var_b58);
    }
    if(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 25, 695)), "03output_code.c", 25, 696))->mConstant) {
        (come_push_stackframe("03output_code.c", 26, 699),__exception_result_var_b59=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_47, "03output_code.c", 26, 697)), "03output_code.c", 26, 698)),"const "), come_pop_stackframe(), __exception_result_var_b59);
    }
    if(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 29, 700)), "03output_code.c", 29, 701))->mUnsigned) {
        (come_push_stackframe("03output_code.c", 30, 704),__exception_result_var_b60=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_47, "03output_code.c", 30, 702)), "03output_code.c", 30, 703)),"unsigned "), come_pop_stackframe(), __exception_result_var_b60);
    }
    if(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 34, 705)), "03output_code.c", 34, 706))->mShort) {
        (come_push_stackframe("03output_code.c", 35, 709),__exception_result_var_b61=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_47, "03output_code.c", 35, 707)), "03output_code.c", 35, 708)),"short "), come_pop_stackframe(), __exception_result_var_b61);
    }
    if(_if_conditional44=(come_push_stackframe("03output_code.c", 38, 712),__exception_result_var_b62=string_operator_equals(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 38, 710)), "03output_code.c", 38, 711))->mOriginalTypeName,"va_list"), come_pop_stackframe(), __exception_result_var_b62),    _if_conditional44) {
        (come_push_stackframe("03output_code.c", 39, 715),__exception_result_var_b63=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_47, "03output_code.c", 39, 713)), "03output_code.c", 39, 714)),"va_list"), come_pop_stackframe(), __exception_result_var_b63);
    }
    else {
        if(_if_conditional45=(come_push_stackframe("03output_code.c", 41, 718),__exception_result_var_b64=string_operator_equals(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 41, 716)), "03output_code.c", 41, 717))->mOriginalTypeName,"__builtin_va_list"), come_pop_stackframe(), __exception_result_var_b64),        _if_conditional45) {
            (come_push_stackframe("03output_code.c", 42, 721),__exception_result_var_b65=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_47, "03output_code.c", 42, 719)), "03output_code.c", 42, 720)),"__builtin_va_list"), come_pop_stackframe(), __exception_result_var_b65);
        }
        else {
            if(_if_conditional46=(come_push_stackframe("03output_code.c", 44, 722),__exception_result_var_b66=charp_operator_equals(class_name_48,"__builtin_va_list"), come_pop_stackframe(), __exception_result_var_b66),            _if_conditional46) {
                if(in_header) {
                    (come_push_stackframe("03output_code.c", 46, 725),__exception_result_var_b67=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_47, "03output_code.c", 46, 723)), "03output_code.c", 46, 724)),class_name_48), come_pop_stackframe(), __exception_result_var_b67);
                }
                else {
                    (come_push_stackframe("03output_code.c", 49, 728),__exception_result_var_b68=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_47, "03output_code.c", 49, 726)), "03output_code.c", 49, 727)),"va_list"), come_pop_stackframe(), __exception_result_var_b68);
                }
            }
            else {
                if(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 52, 729)), "03output_code.c", 52, 730))->mClass, "03output_code.c", 52, 731)), "03output_code.c", 52, 732))->mStruct) {
                    (come_push_stackframe("03output_code.c", 53, 735),__exception_result_var_b69=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_47, "03output_code.c", 53, 733)), "03output_code.c", 53, 734)),"struct "), come_pop_stackframe(), __exception_result_var_b69);
                    (come_push_stackframe("03output_code.c", 54, 738),__exception_result_var_b70=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_47, "03output_code.c", 54, 736)), "03output_code.c", 54, 737)),class_name_48), come_pop_stackframe(), __exception_result_var_b70);
                }
                else {
                    if(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 56, 739)), "03output_code.c", 56, 740))->mClass, "03output_code.c", 56, 741)), "03output_code.c", 56, 742))->mUnion) {
                        (come_push_stackframe("03output_code.c", 57, 745),__exception_result_var_b71=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_47, "03output_code.c", 57, 743)), "03output_code.c", 57, 744)),"union "), come_pop_stackframe(), __exception_result_var_b71);
                        (come_push_stackframe("03output_code.c", 58, 748),__exception_result_var_b72=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_47, "03output_code.c", 58, 746)), "03output_code.c", 58, 747)),class_name_48), come_pop_stackframe(), __exception_result_var_b72);
                    }
                    else {
                        if(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 60, 749)), "03output_code.c", 60, 750))->mClass, "03output_code.c", 60, 751)), "03output_code.c", 60, 752))->mEnum) {
                            (come_push_stackframe("03output_code.c", 61, 755),__exception_result_var_b73=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_47, "03output_code.c", 61, 753)), "03output_code.c", 61, 754)),"enum "), come_pop_stackframe(), __exception_result_var_b73);
                            (come_push_stackframe("03output_code.c", 62, 758),__exception_result_var_b74=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_47, "03output_code.c", 62, 756)), "03output_code.c", 62, 757)),class_name_48), come_pop_stackframe(), __exception_result_var_b74);
                        }
                        else {
                            if(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 64, 759)), "03output_code.c", 64, 760))->mLongLong) {
                                if(_if_conditional52=(come_push_stackframe("03output_code.c", 65, 761),__exception_result_var_b75=charp_operator_equals(class_name_48,"int"), come_pop_stackframe(), __exception_result_var_b75),                                _if_conditional52) {
                                    (come_push_stackframe("03output_code.c", 66, 764),__exception_result_var_b76=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_47, "03output_code.c", 66, 762)), "03output_code.c", 66, 763)),"long long int"), come_pop_stackframe(), __exception_result_var_b76);
                                }
                                else {
                                    if(_if_conditional53=(come_push_stackframe("03output_code.c", 68, 765),__exception_result_var_b77=charp_operator_equals(class_name_48,"long"), come_pop_stackframe(), __exception_result_var_b77),                                    _if_conditional53) {
                                        (come_push_stackframe("03output_code.c", 69, 768),__exception_result_var_b78=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_47, "03output_code.c", 69, 766)), "03output_code.c", 69, 767)),"long long"), come_pop_stackframe(), __exception_result_var_b78);
                                    }
                                }
                            }
                            else {
                                if(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 72, 769)), "03output_code.c", 72, 770))->mLong) {
                                    if(_if_conditional55=(come_push_stackframe("03output_code.c", 73, 771),__exception_result_var_b79=charp_operator_equals(class_name_48,"int"), come_pop_stackframe(), __exception_result_var_b79),                                    _if_conditional55) {
                                        (come_push_stackframe("03output_code.c", 74, 774),__exception_result_var_b80=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_47, "03output_code.c", 74, 772)), "03output_code.c", 74, 773)),"long int"), come_pop_stackframe(), __exception_result_var_b80);
                                    }
                                    else {
                                        if(_if_conditional56=(come_push_stackframe("03output_code.c", 76, 775),__exception_result_var_b81=charp_operator_equals(class_name_48,"long"), come_pop_stackframe(), __exception_result_var_b81),                                        _if_conditional56) {
                                            (come_push_stackframe("03output_code.c", 77, 778),__exception_result_var_b82=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_47, "03output_code.c", 77, 776)), "03output_code.c", 77, 777)),"long long"), come_pop_stackframe(), __exception_result_var_b82);
                                        }
                                        else {
                                            if(_if_conditional57=(come_push_stackframe("03output_code.c", 79, 779),__exception_result_var_b83=charp_operator_equals(class_name_48,"double"), come_pop_stackframe(), __exception_result_var_b83),                                            _if_conditional57) {
                                                (come_push_stackframe("03output_code.c", 80, 782),__exception_result_var_b84=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_47, "03output_code.c", 80, 780)), "03output_code.c", 80, 781)),"long double"), come_pop_stackframe(), __exception_result_var_b84);
                                            }
                                        }
                                    }
                                }
                                else {
                                    if(_if_conditional58=(come_push_stackframe("03output_code.c", 83, 783),__exception_result_var_b85=charp_operator_equals(class_name_48,"long"), come_pop_stackframe(), __exception_result_var_b85),                                    _if_conditional58) {
                                        (come_push_stackframe("03output_code.c", 84, 786),__exception_result_var_b86=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_47, "03output_code.c", 84, 784)), "03output_code.c", 84, 785)),"long"), come_pop_stackframe(), __exception_result_var_b86);
                                    }
                                    else {
                                        if(_if_conditional59=(come_push_stackframe("03output_code.c", 86, 787),__exception_result_var_b87=charp_operator_equals(class_name_48,"__uint128_t"), come_pop_stackframe(), __exception_result_var_b87),                                        _if_conditional59) {
                                            (come_push_stackframe("03output_code.c", 87, 790),__exception_result_var_b88=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_47, "03output_code.c", 87, 788)), "03output_code.c", 87, 789)),"__uint128_t"), come_pop_stackframe(), __exception_result_var_b88);
                                        }
                                        else {
                                            if(_if_conditional60=(come_push_stackframe("03output_code.c", 89, 791),__exception_result_var_b89=charp_operator_equals(class_name_48,"bool"), come_pop_stackframe(), __exception_result_var_b89),                                            _if_conditional60) {
                                                (come_push_stackframe("03output_code.c", 90, 794),__exception_result_var_b90=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_47, "03output_code.c", 90, 792)), "03output_code.c", 90, 793)),"_Bool"), come_pop_stackframe(), __exception_result_var_b90);
                                            }
                                            else {
                                                if(_if_conditional61=(come_push_stackframe("03output_code.c", 92, 795),__exception_result_var_b91=charp_operator_equals(class_name_48,"lambda"), come_pop_stackframe(), __exception_result_var_b91),                                                _if_conditional61) {
                                                    result_type_str_56=(char*)come_increment_ref_count((come_push_stackframe("03output_code.c", 93, 800),__exception_result_var_b92=((char*)(right_value84=make_type_name_string(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 93, 796)), "03output_code.c", 93, 797))->mResultType, "03output_code.c", 93, 798)), "03output_code.c", 93, 799))->v1,in_header,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b92));
                                                    right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    (come_push_stackframe("03output_code.c", 94, 803),__exception_result_var_b93=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_47, "03output_code.c", 94, 801)), "03output_code.c", 94, 802)),result_type_str_56), come_pop_stackframe(), __exception_result_var_b93);
                                                    (come_push_stackframe("03output_code.c", 95, 806),__exception_result_var_b94=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_47, "03output_code.c", 95, 804)), "03output_code.c", 95, 805))," (*)("), come_pop_stackframe(), __exception_result_var_b94);
                                                    j_57=0;
                                                    for(                                                    o2_saved_58=(struct list$1sTypeph*)come_increment_ref_count((((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 98, 807)), "03output_code.c", 98, 808))->mParamTypes)),it_61=(come_push_stackframe("03output_code.c", 98, 823),__exception_result_var_b97=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_58), "03output_code.c", 98, 809)), "03output_code.c", 98, 810))), come_pop_stackframe(), __exception_result_var_b97);                                                    !(come_push_stackframe("03output_code.c", 98, 828),__exception_result_var_b98=list$1sTypeph_end(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_58), "03output_code.c", 98, 824)), "03output_code.c", 98, 825))), come_pop_stackframe(), __exception_result_var_b98);                                                    it_61=(come_push_stackframe("03output_code.c", 98, 847),__exception_result_var_b101=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_58), "03output_code.c", 98, 829)), "03output_code.c", 98, 830))), come_pop_stackframe(), __exception_result_var_b101)                                                    ){
                                                        param_type_str_64=(char*)come_increment_ref_count((come_push_stackframe("03output_code.c", 99, 848),__exception_result_var_b102=((char*)(right_value85=make_type_name_string(it_61,in_header,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b102));
                                                        right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        (come_push_stackframe("03output_code.c", 101, 851),__exception_result_var_b103=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_47, "03output_code.c", 101, 849)), "03output_code.c", 101, 850)),param_type_str_64), come_pop_stackframe(), __exception_result_var_b103);
                                                        if(_if_conditional67=j_57!=(come_push_stackframe("03output_code.c", 103, 858),__exception_result_var_b104=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 103, 852)), "03output_code.c", 103, 853))->mParamTypes, "03output_code.c", 103, 854)), "03output_code.c", 103, 855))), come_pop_stackframe(), __exception_result_var_b104)-1,                                                        _if_conditional67) {
                                                            (come_push_stackframe("03output_code.c", 104, 861),__exception_result_var_b105=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_47, "03output_code.c", 104, 859)), "03output_code.c", 104, 860)),","), come_pop_stackframe(), __exception_result_var_b105);
                                                        }
                                                        j_57++;
                                                        param_type_str_64 = come_decrement_ref_count2(param_type_str_64, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
                                                    come_call_finalizer3(o2_saved_58,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    (come_push_stackframe("03output_code.c", 108, 864),__exception_result_var_b106=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_47, "03output_code.c", 108, 862)), "03output_code.c", 108, 863)),")"), come_pop_stackframe(), __exception_result_var_b106);
                                                    result_type_str_56 = come_decrement_ref_count2(result_type_str_56, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                else {
                                                    if(_if_conditional68=class_name_48==((void*)0),                                                    _if_conditional68) {
                                                        (come_push_stackframe("03output_code.c", 112,865),err_msg(info,"class name is null"),come_pop_stackframe());
                                                        __result62__ = __result_obj__ = (come_push_stackframe("03output_code.c", 113, 866),__exception_result_var_b107=((char*)(right_value86=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b107);
                                                        come_call_finalizer3(buf_47,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                        right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        return __result62__;
                                                    }
                                                    (come_push_stackframe("03output_code.c", 115, 869),__exception_result_var_b108=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_47, "03output_code.c", 115, 867)), "03output_code.c", 115, 868)),class_name_48), come_pop_stackframe(), __exception_result_var_b108);
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
    }
    if(_if_conditional69=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 118, 870)), "03output_code.c", 118, 871))->mNoArrayPointerNum==0&&(come_push_stackframe("03output_code.c", 118, 872),__exception_result_var_b109=charp_operator_not_equals(class_name_48,"lambda"), come_pop_stackframe(), __exception_result_var_b109)&&!no_pointer&&(come_push_stackframe("03output_code.c", 118, 875),__exception_result_var_b110=string_operator_not_equals(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 118, 873)), "03output_code.c", 118, 874))->mOriginalTypeName,"va_list"), come_pop_stackframe(), __exception_result_var_b110)&&(come_push_stackframe("03output_code.c", 118, 878),__exception_result_var_b111=string_operator_not_equals(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 118, 876)), "03output_code.c", 118, 877))->mOriginalTypeName,"__builtin_va_list"), come_pop_stackframe(), __exception_result_var_b111),    _if_conditional69) {
        for(        i_65=0;        i_65<((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 119, 879)), "03output_code.c", 119, 880))->mPointerNum;        i_65++        ){
            (come_push_stackframe("03output_code.c", 120, 883),__exception_result_var_b112=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_47, "03output_code.c", 120, 881)), "03output_code.c", 120, 882)),"*"), come_pop_stackframe(), __exception_result_var_b112);
        }
    }
    if(_if_conditional71=array_cast_pointer&&(come_push_stackframe("03output_code.c", 124, 890),__exception_result_var_b113=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 124, 884)), "03output_code.c", 124, 885))->mArrayNum, "03output_code.c", 124, 886)), "03output_code.c", 124, 887))), come_pop_stackframe(), __exception_result_var_b113)>0&&!no_pointer&&(come_push_stackframe("03output_code.c", 124, 893),__exception_result_var_b114=string_operator_not_equals(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 124, 891)), "03output_code.c", 124, 892))->mOriginalTypeName,"va_list"), come_pop_stackframe(), __exception_result_var_b114)&&(come_push_stackframe("03output_code.c", 124, 896),__exception_result_var_b115=string_operator_not_equals(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 124, 894)), "03output_code.c", 124, 895))->mOriginalTypeName,"__builtin_va_list"), come_pop_stackframe(), __exception_result_var_b115),    _if_conditional71) {
        (come_push_stackframe("03output_code.c", 125, 899),__exception_result_var_b116=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_47, "03output_code.c", 125, 897)), "03output_code.c", 125, 898)),"*"), come_pop_stackframe(), __exception_result_var_b116);
    }
    if(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 128, 900)), "03output_code.c", 128, 901))->mRestrict) {
        (come_push_stackframe("03output_code.c", 129, 904),__exception_result_var_b117=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_47, "03output_code.c", 129, 902)), "03output_code.c", 129, 903)),"restrict"), come_pop_stackframe(), __exception_result_var_b117);
    }
    __result65__ = __result_obj__ = (come_push_stackframe("03output_code.c", 132, 907),__exception_result_var_b118=((char*)(right_value87=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_47, "03output_code.c", 132, 905)), "03output_code.c", 132, 906))))), come_pop_stackframe(), __exception_result_var_b118);
    come_call_finalizer3(buf_47,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result65__;
    come_call_finalizer3(buf_47,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional21;
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional21=self!=((void*)0)&&((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0, 587)), "CVALUE_finalize", 0, 588))->c_value!=((void*)0),            _if_conditional21) {
                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0, 589)), "CVALUE_finalize", 0, 590))->c_value = come_decrement_ref_count2(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0, 589)), "CVALUE_finalize", 0, 590))->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional22=self!=((void*)0)&&((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1, 591)), "CVALUE_finalize", 1, 592))->type!=((void*)0),            _if_conditional22) {
                come_call_finalizer3(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1, 593)), "CVALUE_finalize", 1, 594))->type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional23;
_Bool _if_conditional25;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional29;
_Bool _if_conditional30;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional23=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 0, 595)), "sType_finalize", 0, 596))->mMultipleTypes!=((void*)0),                    _if_conditional23) {
                        come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 0, 597)), "sType_finalize", 0, 598))->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional25=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 1, 607)), "sType_finalize", 1, 608))->mNoSolvedGenericsType!=((void*)0),                    _if_conditional25) {
                        come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 1, 609)), "sType_finalize", 1, 610))->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional27=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 2, 615)), "sType_finalize", 2, 616))->mOriginalLoadVarType!=((void*)0),                    _if_conditional27) {
                        come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 2, 617)), "sType_finalize", 2, 618))->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional28=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 619)), "sType_finalize", 3, 620))->mGenericsName!=((void*)0),                    _if_conditional28) {
                        ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 621)), "sType_finalize", 3, 622))->mGenericsName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 621)), "sType_finalize", 3, 622))->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional29=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 4, 623)), "sType_finalize", 4, 624))->mGenericsTypes!=((void*)0),                    _if_conditional29) {
                        come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 4, 625)), "sType_finalize", 4, 626))->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional30=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 5, 627)), "sType_finalize", 5, 628))->mArrayNum!=((void*)0),                    _if_conditional30) {
                        come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 5, 629)), "sType_finalize", 5, 630))->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional32=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 6, 639)), "sType_finalize", 6, 640))->mParamTypes!=((void*)0),                    _if_conditional32) {
                        come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 6, 641)), "sType_finalize", 6, 642))->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional33=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 7, 643)), "sType_finalize", 7, 644))->mParamNames!=((void*)0),                    _if_conditional33) {
                        come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 7, 645)), "sType_finalize", 7, 646))->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional35=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 8, 655)), "sType_finalize", 8, 656))->mResultType!=((void*)0),                    _if_conditional35) {
                        come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 8, 657)), "sType_finalize", 8, 658))->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional36=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 659)), "sType_finalize", 9, 660))->mAlignas!=((void*)0),                    _if_conditional36) {
                        if(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 661)), "sType_finalize", 9, 662))->mAlignas) { ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 661)), "sType_finalize", 9, 662))->mAlignas = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 661)), "sType_finalize", 9, 662))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 661)), "sType_finalize", 9, 662))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 661)), "sType_finalize", 9, 662))->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional37=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 663)), "sType_finalize", 10, 664))->mSizeNum!=((void*)0),                    _if_conditional37) {
                        if(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 665)), "sType_finalize", 10, 666))->mSizeNum) { ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 665)), "sType_finalize", 10, 666))->mSizeNum = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 665)), "sType_finalize", 10, 666))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 665)), "sType_finalize", 10, 666))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 665)), "sType_finalize", 10, 666))->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional38=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 667)), "sType_finalize", 11, 668))->mOriginalTypeName!=((void*)0),                    _if_conditional38) {
                        ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 669)), "sType_finalize", 11, 670))->mOriginalTypeName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 669)), "sType_finalize", 11, 670))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional39=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 671)), "sType_finalize", 12, 672))->mAsmName!=((void*)0),                    _if_conditional39) {
                        ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 673)), "sType_finalize", 12, 674))->mAsmName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 673)), "sType_finalize", 12, 674))->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_50;
_Bool _while_condtional7;
struct list_item$1sTypeph* prev_it_51;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_50, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_51, 0, sizeof(struct list_item$1sTypeph*));
                            it_50=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 120, 599)), "./neo-c.h", 120, 600))->head;
                            while(_while_condtional7=it_50!=((void*)0),                            _while_condtional7) {
                                prev_it_51=it_50;
                                it_50=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_50, "./neo-c.h", 123, 601)), "./neo-c.h", 123, 602))->next;
                                come_call_finalizer3(prev_it_51,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional24=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0, 603)), "list_item$1sTypephp_finalize", 0, 604))->item!=((void*)0),                                    _if_conditional24) {
                                        come_call_finalizer3(((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0, 605)), "list_item$1sTypephp_finalize", 0, 606))->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional26;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional26=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0, 611)), "tuple1$1sTypephp_finalize", 0, 612))->v1!=((void*)0),                            _if_conditional26) {
                                come_call_finalizer3(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0, 613)), "tuple1$1sTypephp_finalize", 0, 614))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_52;
_Bool _while_condtional8;
struct list_item$1sNodeph* prev_it_53;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_52, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_53, 0, sizeof(struct list_item$1sNodeph*));
                            it_52=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 120, 631)), "./neo-c.h", 120, 632))->head;
                            while(_while_condtional8=it_52!=((void*)0),                            _while_condtional8) {
                                prev_it_53=it_52;
                                it_52=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_52, "./neo-c.h", 123, 633)), "./neo-c.h", 123, 634))->next;
                                come_call_finalizer3(prev_it_53,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional31;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional31=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 635)), "list_item$1sNodephp_finalize", 0, 636))->item!=((void*)0),                                    _if_conditional31) {
                                        if(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 637)), "list_item$1sNodephp_finalize", 0, 638))->item) { ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 637)), "list_item$1sNodephp_finalize", 0, 638))->item = come_decrement_ref_count2(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 637)), "list_item$1sNodephp_finalize", 0, 638))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 637)), "list_item$1sNodephp_finalize", 0, 638))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 637)), "list_item$1sNodephp_finalize", 0, 638))->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_54;
_Bool _while_condtional9;
struct list_item$1charph* prev_it_55;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_54, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_55, 0, sizeof(struct list_item$1charph*));
                            it_54=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 120, 647)), "./neo-c.h", 120, 648))->head;
                            while(_while_condtional9=it_54!=((void*)0),                            _while_condtional9) {
                                prev_it_55=it_54;
                                it_54=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_54, "./neo-c.h", 123, 649)), "./neo-c.h", 123, 650))->next;
                                come_call_finalizer3(prev_it_55,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional34;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional34=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 651)), "list_item$1charphp_finalize", 0, 652))->item!=((void*)0),                                    _if_conditional34) {
                                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 653)), "list_item$1charphp_finalize", 0, 654))->item = come_decrement_ref_count2(((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 653)), "list_item$1charphp_finalize", 0, 654))->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional62;
struct sType* result_59;
void* __exception_result_var_b95;
struct sType* __result53__;
_Bool _if_conditional63;
struct sType* __result54__;
struct sType* result_60;
void* __exception_result_var_b96;
struct sType* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_59, 0, sizeof(struct sType*));
memset(&result_60, 0, sizeof(struct sType*));
                                                        if(_if_conditional62=self==((void*)0),                                                        _if_conditional62) {
                                                            (come_push_stackframe("./neo-c.h", 284, 811),__exception_result_var_b95=memset(&result_59,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b95);
                                                            __result53__ = __result_obj__ = result_59;
                                                            return __result53__;
                                                        }
                                                        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 287, 812)), "./neo-c.h", 287, 813))->it=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 287, 814)), "./neo-c.h", 287, 815))->head;
                                                        if(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 289, 816)), "./neo-c.h", 289, 817))->it) {
                                                            __result54__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 290, 818)), "./neo-c.h", 290, 819))->it, "./neo-c.h", 290, 820)), "./neo-c.h", 290, 821))->item;
                                                            return __result54__;
                                                        }
                                                        (come_push_stackframe("./neo-c.h", 294, 822),__exception_result_var_b96=memset(&result_60,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b96);
                                                        __result55__ = __result_obj__ = result_60;
                                                        return __result55__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result56__;
memset(&__result_obj__, 0, sizeof(void*));
                                                        __result56__ = self==((void*)0)||((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 317, 826)), "./neo-c.h", 317, 827))->it==((void*)0);
                                                        return __result56__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional64;
struct sType* result_62;
void* __exception_result_var_b99;
struct sType* __result57__;
_Bool _if_conditional65;
struct sType* __result58__;
struct sType* result_63;
void* __exception_result_var_b100;
struct sType* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_62, 0, sizeof(struct sType*));
memset(&result_63, 0, sizeof(struct sType*));
                                                        if(_if_conditional64=self==((void*)0)||((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 299, 831)), "./neo-c.h", 299, 832))->it==((void*)0),                                                        _if_conditional64) {
                                                            (come_push_stackframe("./neo-c.h", 301, 833),__exception_result_var_b99=memset(&result_62,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b99);
                                                            __result57__ = __result_obj__ = result_62;
                                                            return __result57__;
                                                        }
                                                        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 305, 834)), "./neo-c.h", 305, 835))->it=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 305, 836)), "./neo-c.h", 305, 837))->it, "./neo-c.h", 305, 838)), "./neo-c.h", 305, 839))->next;
                                                        if(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 307, 840)), "./neo-c.h", 307, 841))->it) {
                                                            __result58__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 308, 842)), "./neo-c.h", 308, 843))->it, "./neo-c.h", 308, 844)), "./neo-c.h", 308, 845))->item;
                                                            return __result58__;
                                                        }
                                                        (come_push_stackframe("./neo-c.h", 312, 846),__exception_result_var_b100=memset(&result_63,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b100);
                                                        __result59__ = __result_obj__ = result_63;
                                                        return __result59__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional66;
int __result60__;
int __result61__;
memset(&__result_obj__, 0, sizeof(void*));
                                                            if(_if_conditional66=self==((void*)0),                                                            _if_conditional66) {
                                                                __result60__ = 0;
                                                                return __result60__;
                                                            }
                                                            __result61__ = ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 360, 856)), "./neo-c.h", 360, 857))->len;
                                                            return __result61__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional70;
int __result63__;
int __result64__;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional70=self==((void*)0),        _if_conditional70) {
            __result63__ = 0;
            return __result63__;
        }
        __result64__ = ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 360, 888)), "./neo-c.h", 360, 889))->len;
        return __result64__;
}

char* make_come_type_name_string(struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value88;
void* right_value89;
struct buffer* __exception_result_var_b119;
struct buffer* buf_66;
char* class_name_67;
struct buffer* __exception_result_var_b120;
int __exception_result_var_b121;
_Bool _if_conditional73;
struct buffer* __exception_result_var_b122;
int i_68;
int __exception_result_var_b123;
struct sType* __exception_result_var_b125;
struct sType* gtype_69;
void* right_value90;
char* __exception_result_var_b126;
struct buffer* __exception_result_var_b127;
int __exception_result_var_b128;
_Bool _if_conditional76;
struct buffer* __exception_result_var_b129;
struct buffer* __exception_result_var_b130;
_Bool __exception_result_var_b131;
_Bool _if_conditional77;
int i_73;
struct buffer* __exception_result_var_b132;
int __exception_result_var_b133;
_Bool _if_conditional78;
int i_74;
int __exception_result_var_b134;
struct buffer* __exception_result_var_b135;
_Bool _if_conditional79;
struct buffer* __exception_result_var_b136;
void* right_value91;
char* __exception_result_var_b137;
char* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
right_value89 = (void*)0;
memset(&buf_66, 0, sizeof(struct buffer*));
memset(&class_name_67, 0, sizeof(char*));
memset(&i_68, 0, sizeof(int));
memset(&gtype_69, 0, sizeof(struct sType*));
right_value90 = (void*)0;
memset(&i_73, 0, sizeof(int));
memset(&i_74, 0, sizeof(int));
right_value91 = (void*)0;
    buf_66=(struct buffer*)come_increment_ref_count((come_push_stackframe("03output_code.c", 137, 909),__exception_result_var_b119=((struct buffer*)(right_value89=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value88=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 137, "buffer"))), "03output_code.c", 137, 908)))))), come_pop_stackframe(), __exception_result_var_b119));
    come_call_finalizer3(right_value88,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value89,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    class_name_67=((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 139, 910)), "03output_code.c", 139, 911))->mClass, "03output_code.c", 139, 912)), "03output_code.c", 139, 913))->mName;
    (come_push_stackframe("03output_code.c", 141, 916),__exception_result_var_b120=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_66, "03output_code.c", 141, 914)), "03output_code.c", 141, 915)),class_name_67), come_pop_stackframe(), __exception_result_var_b120);
    if(_if_conditional73=(come_push_stackframe("03output_code.c", 143, 921),__exception_result_var_b121=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 143, 917)), "03output_code.c", 143, 918))->mGenericsTypes, "03output_code.c", 143, 919)), "03output_code.c", 143, 920))), come_pop_stackframe(), __exception_result_var_b121)>0,    _if_conditional73) {
        (come_push_stackframe("03output_code.c", 144, 924),__exception_result_var_b122=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_66, "03output_code.c", 144, 922)), "03output_code.c", 144, 923)),"<"), come_pop_stackframe(), __exception_result_var_b122);
        for(        i_68=0;        i_68<(come_push_stackframe("03output_code.c", 145, 929),__exception_result_var_b123=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 145, 925)), "03output_code.c", 145, 926))->mGenericsTypes, "03output_code.c", 145, 927)), "03output_code.c", 145, 928))), come_pop_stackframe(), __exception_result_var_b123);        i_68++        ){
            gtype_69=(come_push_stackframe("03output_code.c", 146, 943),__exception_result_var_b125=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 146, 930)), "03output_code.c", 146, 931))->mGenericsTypes, "03output_code.c", 146, 932)),i_68), "03output_code.c", 146, 942)), come_pop_stackframe(), __exception_result_var_b125);
            (come_push_stackframe("03output_code.c", 148, 947),__exception_result_var_b127=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_66, "03output_code.c", 148, 944)), "03output_code.c", 148, 945)),(come_push_stackframe("03output_code.c", 148, 946),__exception_result_var_b126=((char*)(right_value90=make_come_type_name_string(gtype_69,info))), come_pop_stackframe(), __exception_result_var_b126)), come_pop_stackframe(), __exception_result_var_b127);
            right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional76=i_68!=(come_push_stackframe("03output_code.c", 150, 952),__exception_result_var_b128=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 150, 948)), "03output_code.c", 150, 949))->mGenericsTypes, "03output_code.c", 150, 950)), "03output_code.c", 150, 951))), come_pop_stackframe(), __exception_result_var_b128)-1,            _if_conditional76) {
                (come_push_stackframe("03output_code.c", 151, 955),__exception_result_var_b129=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_66, "03output_code.c", 151, 953)), "03output_code.c", 151, 954)),","), come_pop_stackframe(), __exception_result_var_b129);
            }
        }
        (come_push_stackframe("03output_code.c", 155, 958),__exception_result_var_b130=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_66, "03output_code.c", 155, 956)), "03output_code.c", 155, 957)),">"), come_pop_stackframe(), __exception_result_var_b130);
    }
    if(_if_conditional77=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 158, 959)), "03output_code.c", 158, 960))->mNoArrayPointerNum==0&&(come_push_stackframe("03output_code.c", 158, 961),__exception_result_var_b131=charp_operator_not_equals(class_name_67,"lambda"), come_pop_stackframe(), __exception_result_var_b131),    _if_conditional77) {
        for(        i_73=0;        i_73<((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 159, 962)), "03output_code.c", 159, 963))->mPointerNum;        i_73++        ){
            (come_push_stackframe("03output_code.c", 160, 966),__exception_result_var_b132=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_66, "03output_code.c", 160, 964)), "03output_code.c", 160, 965)),"*"), come_pop_stackframe(), __exception_result_var_b132);
        }
    }
    if(_if_conditional78=(come_push_stackframe("03output_code.c", 164, 971),__exception_result_var_b133=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 164, 967)), "03output_code.c", 164, 968))->mArrayNum, "03output_code.c", 164, 969)), "03output_code.c", 164, 970))), come_pop_stackframe(), __exception_result_var_b133)>0,    _if_conditional78) {
        for(        i_74=0;        i_74<(come_push_stackframe("03output_code.c", 165, 976),__exception_result_var_b134=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 165, 972)), "03output_code.c", 165, 973))->mArrayNum, "03output_code.c", 165, 974)), "03output_code.c", 165, 975))), come_pop_stackframe(), __exception_result_var_b134);        i_74++        ){
            (come_push_stackframe("03output_code.c", 166, 979),__exception_result_var_b135=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_66, "03output_code.c", 166, 977)), "03output_code.c", 166, 978)),"[]"), come_pop_stackframe(), __exception_result_var_b135);
        }
    }
    if(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 170, 980)), "03output_code.c", 170, 981))->mHeap) {
        (come_push_stackframe("03output_code.c", 171, 984),__exception_result_var_b136=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_66, "03output_code.c", 171, 982)), "03output_code.c", 171, 983)),"%"), come_pop_stackframe(), __exception_result_var_b136);
    }
    __result68__ = __result_obj__ = (come_push_stackframe("03output_code.c", 174, 987),__exception_result_var_b137=((char*)(right_value91=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_66, "03output_code.c", 174, 985)), "03output_code.c", 174, 986))))), come_pop_stackframe(), __exception_result_var_b137);
    come_call_finalizer3(buf_66,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result68__;
    come_call_finalizer3(buf_66,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional74;
struct list_item$1sTypeph* it_70;
int i_71;
_Bool _while_condtional10;
_Bool _if_conditional75;
struct sType* __result66__;
struct sType* default_value_72;
void* __exception_result_var_b124;
struct sType* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_70, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_71, 0, sizeof(int));
memset(&default_value_72, 0, sizeof(struct sType*));
                if(_if_conditional74=position<0,                _if_conditional74) {
                    position+=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 676, 933)), "./neo-c.h", 676, 934))->len;
                }
                it_70=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 679, 935)), "./neo-c.h", 679, 936))->head;
                i_71=0;
                while(_while_condtional10=it_70!=((void*)0),                _while_condtional10) {
                    if(_if_conditional75=position==i_71,                    _if_conditional75) {
                        __result66__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_70, "./neo-c.h", 683, 937)), "./neo-c.h", 683, 938))->item;
                        return __result66__;
                    }
                    it_70=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_70, "./neo-c.h", 685, 939)), "./neo-c.h", 685, 940))->next;
                    i_71++;
                }
                (come_push_stackframe("./neo-c.h", 690, 941),__exception_result_var_b124=memset(&default_value_72,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b124);
                __result67__ = __result_obj__ = default_value_72;
                come_call_finalizer3(default_value_72,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result67__;
                come_call_finalizer3(default_value_72,sType_finalize, 0, 0, 0, 0, (void*)0);
}

void show_type(struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value92;
char* __exception_result_var_b138;
int __exception_result_var_b139;
memset(&__result_obj__, 0, sizeof(void*));
right_value92 = (void*)0;
    (come_push_stackframe("03output_code.c", 179, 989),__exception_result_var_b139=puts((come_push_stackframe("03output_code.c", 179, 988),__exception_result_var_b138=((char*)(right_value92=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b138)), come_pop_stackframe(), __exception_result_var_b139);
    right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
}

static char* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info){
void* __result_obj__;
void* right_value93;
void* right_value94;
struct buffer* __exception_result_var_b140;
struct buffer* buf_75;
_Bool _if_conditional80;
void* right_value95;
char* __exception_result_var_b141;
char* __result69__;
_Bool __exception_result_var_b142;
_Bool _if_conditional81;
void* right_value96;
char* __exception_result_var_b143;
struct buffer* __exception_result_var_b144;
int i_76;
struct list$1sTypeph* o2_saved_77;
struct sType* __exception_result_var_b145;
struct sType* it_78;
_Bool __exception_result_var_b146;
struct sType* __exception_result_var_b147;
void* right_value97;
char* __exception_result_var_b148;
struct buffer* __exception_result_var_b149;
int __exception_result_var_b150;
_Bool _if_conditional82;
struct buffer* __exception_result_var_b151;
struct buffer* __exception_result_var_b152;
void* right_value98;
char* __exception_result_var_b153;
void* right_value99;
char* __exception_result_var_b154;
char* __result70__;
_Bool _if_conditional83;
void* right_value100;
char* __exception_result_var_b155;
void* right_value101;
char* __exception_result_var_b156;
struct buffer* __exception_result_var_b157;
void* right_value102;
char* __exception_result_var_b158;
void* right_value103;
char* __exception_result_var_b159;
struct buffer* __exception_result_var_b160;
int i_79;
struct list$1sTypeph* o2_saved_80;
struct sType* __exception_result_var_b161;
struct sType* it_81;
_Bool __exception_result_var_b162;
struct sType* __exception_result_var_b163;
void* right_value104;
char* __exception_result_var_b164;
struct buffer* __exception_result_var_b165;
int __exception_result_var_b166;
_Bool _if_conditional84;
struct buffer* __exception_result_var_b167;
struct buffer* __exception_result_var_b168;
void* right_value105;
char* __exception_result_var_b169;
char* __result71__;
void* right_value106;
char* __exception_result_var_b170;
char* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
right_value94 = (void*)0;
memset(&buf_75, 0, sizeof(struct buffer*));
right_value95 = (void*)0;
right_value96 = (void*)0;
memset(&i_76, 0, sizeof(int));
memset(&o2_saved_77, 0, sizeof(struct list$1sTypeph*));
memset(&it_78, 0, sizeof(struct sType*));
right_value97 = (void*)0;
right_value98 = (void*)0;
right_value99 = (void*)0;
right_value100 = (void*)0;
right_value101 = (void*)0;
right_value102 = (void*)0;
right_value103 = (void*)0;
memset(&i_79, 0, sizeof(int));
memset(&o2_saved_80, 0, sizeof(struct list$1sTypeph*));
memset(&it_81, 0, sizeof(struct sType*));
right_value104 = (void*)0;
right_value105 = (void*)0;
right_value106 = (void*)0;
    buf_75=(struct buffer*)come_increment_ref_count((come_push_stackframe("03output_code.c", 184, 991),__exception_result_var_b140=((struct buffer*)(right_value94=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value93=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 184, "buffer"))), "03output_code.c", 184, 990)))))), come_pop_stackframe(), __exception_result_var_b140));
    come_call_finalizer3(right_value93,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value94,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional80=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 185, 992)), "03output_code.c", 185, 993))->mResultType==((void*)0),    _if_conditional80) {
        (come_push_stackframe("03output_code.c", 186,994),err_msg(info,"invalid lambda type"),come_pop_stackframe());
        __result69__ = __result_obj__ = (come_push_stackframe("03output_code.c", 187, 995),__exception_result_var_b141=((char*)(right_value95=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b141);
        come_call_finalizer3(buf_75,buffer_finalize, 0, 0, 0, 0, (void*)0);
        right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result69__;
    }
    if(_if_conditional81=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 190, 996)), "03output_code.c", 190, 997))->mResultType, "03output_code.c", 190, 998)), "03output_code.c", 190, 999))->v1&&(come_push_stackframe("03output_code.c", 190, 1008),__exception_result_var_b142=string_operator_equals(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 190, 1000)), "03output_code.c", 190, 1001))->mResultType, "03output_code.c", 190, 1002)), "03output_code.c", 190, 1003))->v1, "03output_code.c", 190, 1004)), "03output_code.c", 190, 1005))->mClass, "03output_code.c", 190, 1006)), "03output_code.c", 190, 1007))->mName,"lambda"), come_pop_stackframe(), __exception_result_var_b142),    _if_conditional81) {
        (come_push_stackframe("03output_code.c", 192, 1012),__exception_result_var_b144=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_75, "03output_code.c", 192, 1009)), "03output_code.c", 192, 1010)),(come_push_stackframe("03output_code.c", 192, 1011),__exception_result_var_b143=((char*)(right_value96=xsprintf("(*%s)(",var_name))), come_pop_stackframe(), __exception_result_var_b143)), come_pop_stackframe(), __exception_result_var_b144);
        right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        i_76=0;
        for(        o2_saved_77=(struct list$1sTypeph*)come_increment_ref_count((((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 195, 1013)), "03output_code.c", 195, 1014))->mParamTypes)),it_78=(come_push_stackframe("03output_code.c", 195, 1017),__exception_result_var_b145=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_77), "03output_code.c", 195, 1015)), "03output_code.c", 195, 1016))), come_pop_stackframe(), __exception_result_var_b145);        !(come_push_stackframe("03output_code.c", 195, 1020),__exception_result_var_b146=list$1sTypeph_end(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_77), "03output_code.c", 195, 1018)), "03output_code.c", 195, 1019))), come_pop_stackframe(), __exception_result_var_b146);        it_78=(come_push_stackframe("03output_code.c", 195, 1023),__exception_result_var_b147=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_77), "03output_code.c", 195, 1021)), "03output_code.c", 195, 1022))), come_pop_stackframe(), __exception_result_var_b147)        ){
            (come_push_stackframe("03output_code.c", 196, 1027),__exception_result_var_b149=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_75, "03output_code.c", 196, 1024)), "03output_code.c", 196, 1025)),(come_push_stackframe("03output_code.c", 196, 1026),__exception_result_var_b148=((char*)(right_value97=make_type_name_string(it_78,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b148)), come_pop_stackframe(), __exception_result_var_b149);
            right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional82=i_76!=(come_push_stackframe("03output_code.c", 197, 1032),__exception_result_var_b150=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 197, 1028)), "03output_code.c", 197, 1029))->mParamTypes, "03output_code.c", 197, 1030)), "03output_code.c", 197, 1031))), come_pop_stackframe(), __exception_result_var_b150)-1,            _if_conditional82) {
                (come_push_stackframe("03output_code.c", 198, 1035),__exception_result_var_b151=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_75, "03output_code.c", 198, 1033)), "03output_code.c", 198, 1034)),","), come_pop_stackframe(), __exception_result_var_b151);
            }
            i_76++;
        }
        come_call_finalizer3(o2_saved_77,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        (come_push_stackframe("03output_code.c", 204, 1038),__exception_result_var_b152=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_75, "03output_code.c", 204, 1036)), "03output_code.c", 204, 1037)),")"), come_pop_stackframe(), __exception_result_var_b152);
        __result70__ = __result_obj__ = (come_push_stackframe("03output_code.c", 206, 1046),__exception_result_var_b154=((char*)(right_value99=make_lambda_type_name_string(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 206, 1039)), "03output_code.c", 206, 1040))->mResultType, "03output_code.c", 206, 1041)), "03output_code.c", 206, 1042))->v1,(come_push_stackframe("03output_code.c", 206, 1045),__exception_result_var_b153=((char*)(right_value98=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_75, "03output_code.c", 206, 1043)), "03output_code.c", 206, 1044))))), come_pop_stackframe(), __exception_result_var_b153),info))), come_pop_stackframe(), __exception_result_var_b154);
        come_call_finalizer3(buf_75,buffer_finalize, 0, 0, 0, 0, (void*)0);
        right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result70__;
    }
    else {
        if(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 209, 1047)), "03output_code.c", 209, 1048))->mLambdaArray) {
            (come_push_stackframe("03output_code.c", 210, 1057),__exception_result_var_b157=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_75, "03output_code.c", 210, 1049)), "03output_code.c", 210, 1050)),(come_push_stackframe("03output_code.c", 210, 1056),__exception_result_var_b156=((char*)(right_value101=xsprintf("%s (*%s[])(",(come_push_stackframe("03output_code.c", 210, 1055),__exception_result_var_b155=((char*)(right_value100=make_type_name_string(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 210, 1051)), "03output_code.c", 210, 1052))->mResultType, "03output_code.c", 210, 1053)), "03output_code.c", 210, 1054))->v1,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b155),var_name))), come_pop_stackframe(), __exception_result_var_b156)), come_pop_stackframe(), __exception_result_var_b157);
            right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            (come_push_stackframe("03output_code.c", 213, 1066),__exception_result_var_b160=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_75, "03output_code.c", 213, 1058)), "03output_code.c", 213, 1059)),(come_push_stackframe("03output_code.c", 213, 1065),__exception_result_var_b159=((char*)(right_value103=xsprintf("%s (*%s)(",(come_push_stackframe("03output_code.c", 213, 1064),__exception_result_var_b158=((char*)(right_value102=make_type_name_string(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 213, 1060)), "03output_code.c", 213, 1061))->mResultType, "03output_code.c", 213, 1062)), "03output_code.c", 213, 1063))->v1,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b158),var_name))), come_pop_stackframe(), __exception_result_var_b159)), come_pop_stackframe(), __exception_result_var_b160);
            right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        i_79=0;
        for(        o2_saved_80=(struct list$1sTypeph*)come_increment_ref_count((((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 217, 1067)), "03output_code.c", 217, 1068))->mParamTypes)),it_81=(come_push_stackframe("03output_code.c", 217, 1071),__exception_result_var_b161=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_80), "03output_code.c", 217, 1069)), "03output_code.c", 217, 1070))), come_pop_stackframe(), __exception_result_var_b161);        !(come_push_stackframe("03output_code.c", 217, 1074),__exception_result_var_b162=list$1sTypeph_end(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_80), "03output_code.c", 217, 1072)), "03output_code.c", 217, 1073))), come_pop_stackframe(), __exception_result_var_b162);        it_81=(come_push_stackframe("03output_code.c", 217, 1077),__exception_result_var_b163=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_80), "03output_code.c", 217, 1075)), "03output_code.c", 217, 1076))), come_pop_stackframe(), __exception_result_var_b163)        ){
            (come_push_stackframe("03output_code.c", 218, 1081),__exception_result_var_b165=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_75, "03output_code.c", 218, 1078)), "03output_code.c", 218, 1079)),(come_push_stackframe("03output_code.c", 218, 1080),__exception_result_var_b164=((char*)(right_value104=make_type_name_string(it_81,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b164)), come_pop_stackframe(), __exception_result_var_b165);
            right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional84=i_79!=(come_push_stackframe("03output_code.c", 219, 1086),__exception_result_var_b166=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 219, 1082)), "03output_code.c", 219, 1083))->mParamTypes, "03output_code.c", 219, 1084)), "03output_code.c", 219, 1085))), come_pop_stackframe(), __exception_result_var_b166)-1,            _if_conditional84) {
                (come_push_stackframe("03output_code.c", 220, 1089),__exception_result_var_b167=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_75, "03output_code.c", 220, 1087)), "03output_code.c", 220, 1088)),","), come_pop_stackframe(), __exception_result_var_b167);
            }
            i_79++;
        }
        come_call_finalizer3(o2_saved_80,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        (come_push_stackframe("03output_code.c", 226, 1092),__exception_result_var_b168=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_75, "03output_code.c", 226, 1090)), "03output_code.c", 226, 1091)),")"), come_pop_stackframe(), __exception_result_var_b168);
        __result71__ = __result_obj__ = (come_push_stackframe("03output_code.c", 228, 1095),__exception_result_var_b169=((char*)(right_value105=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_75, "03output_code.c", 228, 1093)), "03output_code.c", 228, 1094))))), come_pop_stackframe(), __exception_result_var_b169);
        come_call_finalizer3(buf_75,buffer_finalize, 0, 0, 0, 0, (void*)0);
        right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result71__;
    }
    __result72__ = __result_obj__ = (come_push_stackframe("03output_code.c", 231, 1098),__exception_result_var_b170=((char*)(right_value106=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_75, "03output_code.c", 231, 1096)), "03output_code.c", 231, 1097))))), come_pop_stackframe(), __exception_result_var_b170);
    come_call_finalizer3(buf_75,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result72__;
    come_call_finalizer3(buf_75,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info){
void* __result_obj__;
void* right_value107;
void* right_value108;
struct buffer* __exception_result_var_b171;
struct buffer* buf_82;
struct sType* __exception_result_var_b195;
void* right_value144;
struct sType* type2_83;
_Bool _if_conditional163;
_Bool __exception_result_var_b196;
_Bool __exception_result_var_b197;
_Bool _if_conditional164;
void* right_value145;
char* __exception_result_var_b198;
char* str_108;
struct buffer* __exception_result_var_b199;
_Bool __exception_result_var_b200;
_Bool _if_conditional165;
void* right_value146;
char* __exception_result_var_b201;
char* str_109;
struct buffer* __exception_result_var_b202;
_Bool _if_conditional166;
_Bool __exception_result_var_b203;
_Bool _if_conditional167;
void* right_value147;
char* __exception_result_var_b204;
char* __result91__;
void* right_value148;
struct CVALUE* __exception_result_var_b205;
struct CVALUE* come_value_110;
void* right_value149;
char* __exception_result_var_b206;
char* type_str_111;
void* right_value150;
char* __exception_result_var_b207;
struct buffer* __exception_result_var_b208;
void* right_value151;
char* __exception_result_var_b209;
struct buffer* __exception_result_var_b210;
_Bool __exception_result_var_b211;
_Bool _if_conditional168;
void* right_value152;
char* __exception_result_var_b212;
struct buffer* __exception_result_var_b213;
_Bool __exception_result_var_b214;
_Bool _if_conditional169;
void* right_value153;
char* __exception_result_var_b215;
struct buffer* __exception_result_var_b216;
_Bool _if_conditional170;
void* right_value154;
char* __exception_result_var_b217;
char* type_str_112;
struct buffer* __exception_result_var_b218;
struct buffer* __exception_result_var_b219;
struct buffer* __exception_result_var_b220;
struct buffer* __exception_result_var_b221;
_Bool __exception_result_var_b222;
_Bool _if_conditional171;
void* right_value155;
char* __exception_result_var_b223;
struct buffer* __exception_result_var_b224;
int __exception_result_var_b225;
_Bool _if_conditional172;
void* right_value156;
char* __exception_result_var_b226;
char* type_str_113;
struct buffer* __exception_result_var_b227;
struct buffer* __exception_result_var_b228;
_Bool _if_conditional173;
struct buffer* __exception_result_var_b229;
struct buffer* __exception_result_var_b230;
_Bool _if_conditional174;
struct buffer* __exception_result_var_b231;
struct list$1sNodeph* o2_saved_114;
struct sNode* __exception_result_var_b234;
struct sNode* it_117;
_Bool __exception_result_var_b235;
struct sNode* __exception_result_var_b238;
_Bool __exception_result_var_b239;
_Bool _if_conditional179;
void* right_value157;
char* __exception_result_var_b240;
char* __result99__;
void* right_value158;
struct CVALUE* __exception_result_var_b241;
struct CVALUE* cvalue_120;
void* right_value159;
char* __exception_result_var_b242;
struct buffer* __exception_result_var_b243;
_Bool _if_conditional180;
struct buffer* __exception_result_var_b244;
_Bool __exception_result_var_b245;
_Bool _if_conditional181;
void* right_value160;
char* __exception_result_var_b246;
struct buffer* __exception_result_var_b247;
void* right_value161;
char* __exception_result_var_b248;
char* type_str_121;
_Bool __exception_result_var_b249;
_Bool _if_conditional182;
void* right_value162;
char* __exception_result_var_b250;
char* __result100__;
struct buffer* __exception_result_var_b251;
struct buffer* __exception_result_var_b252;
_Bool _if_conditional183;
struct buffer* __exception_result_var_b253;
struct buffer* __exception_result_var_b254;
_Bool _if_conditional184;
struct buffer* __exception_result_var_b255;
_Bool _if_conditional185;
struct buffer* __exception_result_var_b256;
_Bool __exception_result_var_b257;
_Bool _if_conditional186;
void* right_value163;
char* __exception_result_var_b258;
struct buffer* __exception_result_var_b259;
void* right_value164;
char* __exception_result_var_b260;
char* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value107 = (void*)0;
right_value108 = (void*)0;
memset(&buf_82, 0, sizeof(struct buffer*));
right_value144 = (void*)0;
memset(&type2_83, 0, sizeof(struct sType*));
right_value145 = (void*)0;
memset(&str_108, 0, sizeof(char*));
right_value146 = (void*)0;
memset(&str_109, 0, sizeof(char*));
right_value147 = (void*)0;
right_value148 = (void*)0;
memset(&come_value_110, 0, sizeof(struct CVALUE*));
right_value149 = (void*)0;
memset(&type_str_111, 0, sizeof(char*));
right_value150 = (void*)0;
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
memset(&type_str_112, 0, sizeof(char*));
right_value155 = (void*)0;
right_value156 = (void*)0;
memset(&type_str_113, 0, sizeof(char*));
memset(&o2_saved_114, 0, sizeof(struct list$1sNodeph*));
memset(&it_117, 0, sizeof(struct sNode*));
right_value157 = (void*)0;
right_value158 = (void*)0;
memset(&cvalue_120, 0, sizeof(struct CVALUE*));
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value161 = (void*)0;
memset(&type_str_121, 0, sizeof(char*));
right_value162 = (void*)0;
right_value163 = (void*)0;
right_value164 = (void*)0;
    buf_82=(struct buffer*)come_increment_ref_count((come_push_stackframe("03output_code.c", 238, 1100),__exception_result_var_b171=((struct buffer*)(right_value108=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value107=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 238, "buffer"))), "03output_code.c", 238, 1099)))))), come_pop_stackframe(), __exception_result_var_b171));
    come_call_finalizer3(right_value107,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value108,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    type2_83=(struct sType*)come_increment_ref_count(((struct sType*)(right_value144=(come_push_stackframe("03output_code.c", 240, 1610),__exception_result_var_b195=sType_clone(type), come_pop_stackframe(), __exception_result_var_b195))));
    come_call_finalizer3(right_value144,sType_finalize, 0, 1, 0, 0, __result_obj__);
    if(((struct sType*)come_null_check(((struct sType*)come_null_check(type2_83, "03output_code.c", 241, 1611)), "03output_code.c", 241, 1612))->mArrayPointerType) {
        ((struct sType*)come_null_check(((struct sType*)come_null_check(type2_83, "03output_code.c", 242, 1613)), "03output_code.c", 242, 1614))->mPointerNum--;
    }
    if(_if_conditional164=(come_push_stackframe("03output_code.c", 245, 1619),__exception_result_var_b196=string_operator_equals(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type2_83, "03output_code.c", 245, 1615)), "03output_code.c", 245, 1616))->mClass, "03output_code.c", 245, 1617)), "03output_code.c", 245, 1618))->mName,"lambda"), come_pop_stackframe(), __exception_result_var_b196)&&((struct sType*)come_null_check(((struct sType*)come_null_check(type2_83, "03output_code.c", 245, 1620)), "03output_code.c", 245, 1621))->mAsmName!=((void*)0)&&(come_push_stackframe("03output_code.c", 245, 1624),__exception_result_var_b197=string_operator_not_equals(((struct sType*)come_null_check(((struct sType*)come_null_check(type2_83, "03output_code.c", 245, 1622)), "03output_code.c", 245, 1623))->mAsmName,""), come_pop_stackframe(), __exception_result_var_b197),    _if_conditional164) {
        str_108=(char*)come_increment_ref_count((come_push_stackframe("03output_code.c", 246, 1627),__exception_result_var_b198=((char*)(right_value145=header_lambda(type2_83,(char*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)come_null_check(type2_83, "03output_code.c", 246, 1625)), "03output_code.c", 246, 1626))->mAsmName),info))), come_pop_stackframe(), __exception_result_var_b198));
        right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("03output_code.c", 248, 1630),__exception_result_var_b199=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_82, "03output_code.c", 248, 1628)), "03output_code.c", 248, 1629)),str_108), come_pop_stackframe(), __exception_result_var_b199);
        str_108 = come_decrement_ref_count2(str_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional165=(come_push_stackframe("03output_code.c", 250, 1635),__exception_result_var_b200=string_operator_equals(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type2_83, "03output_code.c", 250, 1631)), "03output_code.c", 250, 1632))->mClass, "03output_code.c", 250, 1633)), "03output_code.c", 250, 1634))->mName,"lambda"), come_pop_stackframe(), __exception_result_var_b200),        _if_conditional165) {
            str_109=(char*)come_increment_ref_count((come_push_stackframe("03output_code.c", 251, 1636),__exception_result_var_b201=((char*)(right_value146=make_lambda_type_name_string(type2_83,name,info))), come_pop_stackframe(), __exception_result_var_b201));
            right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("03output_code.c", 253, 1639),__exception_result_var_b202=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_82, "03output_code.c", 253, 1637)), "03output_code.c", 253, 1638)),str_109), come_pop_stackframe(), __exception_result_var_b202);
            str_109 = come_decrement_ref_count2(str_109, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional166=((struct sType*)come_null_check(((struct sType*)come_null_check(type2_83, "03output_code.c", 255, 1640)), "03output_code.c", 255, 1641))->mSizeNum!=((void*)0),            _if_conditional166) {
                if(_if_conditional167=!(come_push_stackframe("03output_code.c", 256, 1644),__exception_result_var_b203=node_compile(((struct sType*)come_null_check(((struct sType*)come_null_check(type2_83, "03output_code.c", 256, 1642)), "03output_code.c", 256, 1643))->mSizeNum,info), come_pop_stackframe(), __exception_result_var_b203),                _if_conditional167) {
                    (come_push_stackframe("03output_code.c", 257,1645),err_msg(info,"invalid bit field number"),come_pop_stackframe());
                    __result91__ = __result_obj__ = (come_push_stackframe("03output_code.c", 258, 1646),__exception_result_var_b204=((char*)(right_value147=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b204);
                    come_call_finalizer3(buf_82,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type2_83,sType_finalize, 0, 0, 0, 0, (void*)0);
                    right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    return __result91__;
                }
                come_value_110=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("03output_code.c", 261, 1647),__exception_result_var_b205=((struct CVALUE*)(right_value148=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b205));
                come_call_finalizer3(right_value148,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("03output_code.c", 262,1648),dec_stack_ptr(1,info),come_pop_stackframe());
                type_str_111=(char*)come_increment_ref_count((come_push_stackframe("03output_code.c", 264, 1649),__exception_result_var_b206=((char*)(right_value149=make_type_name_string(type2_83,in_header,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b206));
                right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("03output_code.c", 265, 1653),__exception_result_var_b208=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_82, "03output_code.c", 265, 1650)), "03output_code.c", 265, 1651)),(come_push_stackframe("03output_code.c", 265, 1652),__exception_result_var_b207=((char*)(right_value150=xsprintf("%s ",type_str_111))), come_pop_stackframe(), __exception_result_var_b207)), come_pop_stackframe(), __exception_result_var_b208);
                right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("03output_code.c", 266, 1659),__exception_result_var_b210=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_82, "03output_code.c", 266, 1654)), "03output_code.c", 266, 1655)),(come_push_stackframe("03output_code.c", 266, 1658),__exception_result_var_b209=((char*)(right_value151=xsprintf("%s:%s",name,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_110, "03output_code.c", 266, 1656)), "03output_code.c", 266, 1657))->c_value))), come_pop_stackframe(), __exception_result_var_b209)), come_pop_stackframe(), __exception_result_var_b210);
                right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional168=((struct sType*)come_null_check(((struct sType*)come_null_check(type2_83, "03output_code.c", 268, 1660)), "03output_code.c", 268, 1661))->mAsmName!=((void*)0)&&(come_push_stackframe("03output_code.c", 268, 1664),__exception_result_var_b211=string_operator_not_equals(((struct sType*)come_null_check(((struct sType*)come_null_check(type2_83, "03output_code.c", 268, 1662)), "03output_code.c", 268, 1663))->mAsmName,""), come_pop_stackframe(), __exception_result_var_b211),                _if_conditional168) {
                    (come_push_stackframe("03output_code.c", 269, 1670),__exception_result_var_b213=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_82, "03output_code.c", 269, 1665)), "03output_code.c", 269, 1666)),(come_push_stackframe("03output_code.c", 269, 1669),__exception_result_var_b212=((char*)(right_value152=xsprintf(" __asm__(\"%s\")",((struct sType*)come_null_check(((struct sType*)come_null_check(type2_83, "03output_code.c", 269, 1667)), "03output_code.c", 269, 1668))->mAsmName))), come_pop_stackframe(), __exception_result_var_b212)), come_pop_stackframe(), __exception_result_var_b213);
                    right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional169=((struct sType*)come_null_check(((struct sType*)come_null_check(type2_83, "03output_code.c", 272, 1671)), "03output_code.c", 272, 1672))->mAsmName!=((void*)0)&&(come_push_stackframe("03output_code.c", 272, 1675),__exception_result_var_b214=string_operator_not_equals(((struct sType*)come_null_check(((struct sType*)come_null_check(type2_83, "03output_code.c", 272, 1673)), "03output_code.c", 272, 1674))->mAsmName,""), come_pop_stackframe(), __exception_result_var_b214),                _if_conditional169) {
                    (come_push_stackframe("03output_code.c", 273, 1681),__exception_result_var_b216=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_82, "03output_code.c", 273, 1676)), "03output_code.c", 273, 1677)),(come_push_stackframe("03output_code.c", 273, 1680),__exception_result_var_b215=((char*)(right_value153=xsprintf(" __asm__(\"%s\")",((struct sType*)come_null_check(((struct sType*)come_null_check(type2_83, "03output_code.c", 273, 1678)), "03output_code.c", 273, 1679))->mAsmName))), come_pop_stackframe(), __exception_result_var_b215)), come_pop_stackframe(), __exception_result_var_b216);
                    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                come_call_finalizer3(come_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                type_str_111 = come_decrement_ref_count2(type_str_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(((struct sType*)come_null_check(((struct sType*)come_null_check(type2_83, "03output_code.c", 276, 1682)), "03output_code.c", 276, 1683))->mOmitArrayNum) {
                    type_str_112=(char*)come_increment_ref_count((come_push_stackframe("03output_code.c", 277, 1684),__exception_result_var_b217=((char*)(right_value154=make_type_name_string(type2_83,in_header,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b217));
                    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    (come_push_stackframe("03output_code.c", 279, 1687),__exception_result_var_b218=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_82, "03output_code.c", 279, 1685)), "03output_code.c", 279, 1686)),type_str_112), come_pop_stackframe(), __exception_result_var_b218);
                    (come_push_stackframe("03output_code.c", 281, 1690),__exception_result_var_b219=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_82, "03output_code.c", 281, 1688)), "03output_code.c", 281, 1689))," "), come_pop_stackframe(), __exception_result_var_b219);
                    (come_push_stackframe("03output_code.c", 282, 1693),__exception_result_var_b220=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_82, "03output_code.c", 282, 1691)), "03output_code.c", 282, 1692)),name), come_pop_stackframe(), __exception_result_var_b220);
                    (come_push_stackframe("03output_code.c", 284, 1696),__exception_result_var_b221=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_82, "03output_code.c", 284, 1694)), "03output_code.c", 284, 1695)),"[]"), come_pop_stackframe(), __exception_result_var_b221);
                    if(_if_conditional171=((struct sType*)come_null_check(((struct sType*)come_null_check(type2_83, "03output_code.c", 286, 1697)), "03output_code.c", 286, 1698))->mAsmName!=((void*)0)&&(come_push_stackframe("03output_code.c", 286, 1701),__exception_result_var_b222=string_operator_not_equals(((struct sType*)come_null_check(((struct sType*)come_null_check(type2_83, "03output_code.c", 286, 1699)), "03output_code.c", 286, 1700))->mAsmName,""), come_pop_stackframe(), __exception_result_var_b222),                    _if_conditional171) {
                        (come_push_stackframe("03output_code.c", 287, 1707),__exception_result_var_b224=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_82, "03output_code.c", 287, 1702)), "03output_code.c", 287, 1703)),(come_push_stackframe("03output_code.c", 287, 1706),__exception_result_var_b223=((char*)(right_value155=xsprintf(" __asm__(\"%s\")",((struct sType*)come_null_check(((struct sType*)come_null_check(type2_83, "03output_code.c", 287, 1704)), "03output_code.c", 287, 1705))->mAsmName))), come_pop_stackframe(), __exception_result_var_b223)), come_pop_stackframe(), __exception_result_var_b224);
                        right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    type_str_112 = come_decrement_ref_count2(type_str_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional172=(come_push_stackframe("03output_code.c", 290, 1712),__exception_result_var_b225=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type2_83, "03output_code.c", 290, 1708)), "03output_code.c", 290, 1709))->mArrayNum, "03output_code.c", 290, 1710)), "03output_code.c", 290, 1711))), come_pop_stackframe(), __exception_result_var_b225)>0,                    _if_conditional172) {
                        type_str_113=(char*)come_increment_ref_count((come_push_stackframe("03output_code.c", 291, 1713),__exception_result_var_b226=((char*)(right_value156=make_type_name_string(type2_83,in_header,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b226));
                        right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        (come_push_stackframe("03output_code.c", 293, 1716),__exception_result_var_b227=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_82, "03output_code.c", 293, 1714)), "03output_code.c", 293, 1715)),type_str_113), come_pop_stackframe(), __exception_result_var_b227);
                        (come_push_stackframe("03output_code.c", 295, 1719),__exception_result_var_b228=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_82, "03output_code.c", 295, 1717)), "03output_code.c", 295, 1718))," "), come_pop_stackframe(), __exception_result_var_b228);
                        if(_if_conditional173=((struct sType*)come_null_check(((struct sType*)come_null_check(type2_83, "03output_code.c", 296, 1720)), "03output_code.c", 296, 1721))->mNoArrayPointerNum>0,                        _if_conditional173) {
                            (come_push_stackframe("03output_code.c", 297, 1724),__exception_result_var_b229=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_82, "03output_code.c", 297, 1722)), "03output_code.c", 297, 1723)),"(*"), come_pop_stackframe(), __exception_result_var_b229);
                        }
                        (come_push_stackframe("03output_code.c", 299, 1727),__exception_result_var_b230=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_82, "03output_code.c", 299, 1725)), "03output_code.c", 299, 1726)),name), come_pop_stackframe(), __exception_result_var_b230);
                        if(_if_conditional174=((struct sType*)come_null_check(((struct sType*)come_null_check(type2_83, "03output_code.c", 300, 1728)), "03output_code.c", 300, 1729))->mNoArrayPointerNum>0,                        _if_conditional174) {
                            (come_push_stackframe("03output_code.c", 301, 1732),__exception_result_var_b231=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_82, "03output_code.c", 301, 1730)), "03output_code.c", 301, 1731)),")"), come_pop_stackframe(), __exception_result_var_b231);
                        }
                        for(                        o2_saved_114=(struct list$1sNodeph*)come_increment_ref_count((((struct sType*)come_null_check(((struct sType*)come_null_check(type2_83, "03output_code.c", 304, 1733)), "03output_code.c", 304, 1734))->mArrayNum)),it_117=(come_push_stackframe("03output_code.c", 304, 1749),__exception_result_var_b234=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_114), "03output_code.c", 304, 1735)), "03output_code.c", 304, 1736))), come_pop_stackframe(), __exception_result_var_b234);                        !(come_push_stackframe("03output_code.c", 304, 1754),__exception_result_var_b235=list$1sNodeph_end(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_114), "03output_code.c", 304, 1750)), "03output_code.c", 304, 1751))), come_pop_stackframe(), __exception_result_var_b235);                        it_117=(come_push_stackframe("03output_code.c", 304, 1773),__exception_result_var_b238=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_114), "03output_code.c", 304, 1755)), "03output_code.c", 304, 1756))), come_pop_stackframe(), __exception_result_var_b238)                        ){
                            if(_if_conditional179=!(come_push_stackframe("03output_code.c", 305, 1774),__exception_result_var_b239=node_compile(it_117,info), come_pop_stackframe(), __exception_result_var_b239),                            _if_conditional179) {
                                (come_push_stackframe("03output_code.c", 306,1775),err_msg(info,"invalid array number"),come_pop_stackframe());
                                __result99__ = __result_obj__ = (come_push_stackframe("03output_code.c", 307, 1776),__exception_result_var_b240=((char*)(right_value157=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b240);
                                come_call_finalizer3(o2_saved_114,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                type_str_113 = come_decrement_ref_count2(type_str_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(buf_82,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type2_83,sType_finalize, 0, 0, 0, 0, (void*)0);
                                right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                return __result99__;
                            }
                            cvalue_120=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("03output_code.c", 309, 1777),__exception_result_var_b241=((struct CVALUE*)(right_value158=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b241));
                            come_call_finalizer3(right_value158,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                            (come_push_stackframe("03output_code.c", 310,1778),dec_stack_ptr(1,info),come_pop_stackframe());
                            (come_push_stackframe("03output_code.c", 312, 1784),__exception_result_var_b243=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_82, "03output_code.c", 312, 1779)), "03output_code.c", 312, 1780)),(come_push_stackframe("03output_code.c", 312, 1783),__exception_result_var_b242=((char*)(right_value159=xsprintf("[%s]",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(cvalue_120, "03output_code.c", 312, 1781)), "03output_code.c", 312, 1782))->c_value))), come_pop_stackframe(), __exception_result_var_b242)), come_pop_stackframe(), __exception_result_var_b243);
                            right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(cvalue_120,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer3(o2_saved_114,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        if(((struct sType*)come_null_check(((struct sType*)come_null_check(type2_83, "03output_code.c", 315, 1785)), "03output_code.c", 315, 1786))->mArrayPointerType) {
                            (come_push_stackframe("03output_code.c", 316, 1789),__exception_result_var_b244=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_82, "03output_code.c", 316, 1787)), "03output_code.c", 316, 1788)),"[]"), come_pop_stackframe(), __exception_result_var_b244);
                        }
                        if(_if_conditional181=((struct sType*)come_null_check(((struct sType*)come_null_check(type2_83, "03output_code.c", 319, 1790)), "03output_code.c", 319, 1791))->mAsmName!=((void*)0)&&(come_push_stackframe("03output_code.c", 319, 1794),__exception_result_var_b245=string_operator_not_equals(((struct sType*)come_null_check(((struct sType*)come_null_check(type2_83, "03output_code.c", 319, 1792)), "03output_code.c", 319, 1793))->mAsmName,""), come_pop_stackframe(), __exception_result_var_b245),                        _if_conditional181) {
                            (come_push_stackframe("03output_code.c", 320, 1800),__exception_result_var_b247=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_82, "03output_code.c", 320, 1795)), "03output_code.c", 320, 1796)),(come_push_stackframe("03output_code.c", 320, 1799),__exception_result_var_b246=((char*)(right_value160=xsprintf(" __asm__(\"%s\")",((struct sType*)come_null_check(((struct sType*)come_null_check(type2_83, "03output_code.c", 320, 1797)), "03output_code.c", 320, 1798))->mAsmName))), come_pop_stackframe(), __exception_result_var_b246)), come_pop_stackframe(), __exception_result_var_b247);
                            right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        type_str_113 = come_decrement_ref_count2(type_str_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        type_str_121=(char*)come_increment_ref_count((come_push_stackframe("03output_code.c", 324, 1801),__exception_result_var_b248=((char*)(right_value161=make_type_name_string(type2_83,in_header,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b248));
                        right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional182=(come_push_stackframe("03output_code.c", 326, 1802),__exception_result_var_b249=string_operator_equals(type_str_121,""), come_pop_stackframe(), __exception_result_var_b249),                        _if_conditional182) {
                            __result100__ = __result_obj__ = (come_push_stackframe("03output_code.c", 327, 1803),__exception_result_var_b250=((char*)(right_value162=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b250);
                            type_str_121 = come_decrement_ref_count2(type_str_121, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(buf_82,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(type2_83,sType_finalize, 0, 0, 0, 0, (void*)0);
                            right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            return __result100__;
                        }
                        (come_push_stackframe("03output_code.c", 330, 1806),__exception_result_var_b251=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_82, "03output_code.c", 330, 1804)), "03output_code.c", 330, 1805)),type_str_121), come_pop_stackframe(), __exception_result_var_b251);
                        (come_push_stackframe("03output_code.c", 332, 1809),__exception_result_var_b252=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_82, "03output_code.c", 332, 1807)), "03output_code.c", 332, 1808))," "), come_pop_stackframe(), __exception_result_var_b252);
                        if(_if_conditional183=((struct sType*)come_null_check(((struct sType*)come_null_check(type2_83, "03output_code.c", 333, 1810)), "03output_code.c", 333, 1811))->mNoArrayPointerNum>0,                        _if_conditional183) {
                            (come_push_stackframe("03output_code.c", 334, 1814),__exception_result_var_b253=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_82, "03output_code.c", 334, 1812)), "03output_code.c", 334, 1813)),"(*"), come_pop_stackframe(), __exception_result_var_b253);
                        }
                        (come_push_stackframe("03output_code.c", 336, 1817),__exception_result_var_b254=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_82, "03output_code.c", 336, 1815)), "03output_code.c", 336, 1816)),name), come_pop_stackframe(), __exception_result_var_b254);
                        if(_if_conditional184=((struct sType*)come_null_check(((struct sType*)come_null_check(type2_83, "03output_code.c", 337, 1818)), "03output_code.c", 337, 1819))->mNoArrayPointerNum>0,                        _if_conditional184) {
                            (come_push_stackframe("03output_code.c", 338, 1822),__exception_result_var_b255=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_82, "03output_code.c", 338, 1820)), "03output_code.c", 338, 1821)),")"), come_pop_stackframe(), __exception_result_var_b255);
                        }
                        if(((struct sType*)come_null_check(((struct sType*)come_null_check(type2_83, "03output_code.c", 341, 1823)), "03output_code.c", 341, 1824))->mArrayPointerType) {
                            (come_push_stackframe("03output_code.c", 342, 1827),__exception_result_var_b256=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_82, "03output_code.c", 342, 1825)), "03output_code.c", 342, 1826)),"[]"), come_pop_stackframe(), __exception_result_var_b256);
                        }
                        if(_if_conditional186=((struct sType*)come_null_check(((struct sType*)come_null_check(type2_83, "03output_code.c", 345, 1828)), "03output_code.c", 345, 1829))->mAsmName!=((void*)0)&&(come_push_stackframe("03output_code.c", 345, 1832),__exception_result_var_b257=string_operator_not_equals(((struct sType*)come_null_check(((struct sType*)come_null_check(type2_83, "03output_code.c", 345, 1830)), "03output_code.c", 345, 1831))->mAsmName,""), come_pop_stackframe(), __exception_result_var_b257),                        _if_conditional186) {
                            (come_push_stackframe("03output_code.c", 346, 1838),__exception_result_var_b259=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_82, "03output_code.c", 346, 1833)), "03output_code.c", 346, 1834)),(come_push_stackframe("03output_code.c", 346, 1837),__exception_result_var_b258=((char*)(right_value163=xsprintf(" __asm__(\"%s\")",((struct sType*)come_null_check(((struct sType*)come_null_check(type2_83, "03output_code.c", 346, 1835)), "03output_code.c", 346, 1836))->mAsmName))), come_pop_stackframe(), __exception_result_var_b258)), come_pop_stackframe(), __exception_result_var_b259);
                            right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        type_str_121 = come_decrement_ref_count2(type_str_121, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
    }
    __result101__ = __result_obj__ = (come_push_stackframe("03output_code.c", 350, 1841),__exception_result_var_b260=((char*)(right_value164=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_82, "03output_code.c", 350, 1839)), "03output_code.c", 350, 1840))))), come_pop_stackframe(), __exception_result_var_b260);
    come_call_finalizer3(buf_82,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_83,sType_finalize, 0, 0, 0, 0, (void*)0);
    right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result101__;
    come_call_finalizer3(buf_82,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_83,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional85;
struct sType* __result73__;
void* right_value109;
struct sType* result_84;
_Bool _if_conditional86;
_Bool _if_conditional87;
struct list$1sTypeph* __exception_result_var_b175;
void* right_value116;
struct list$1sTypeph* __dec_obj15;
_Bool _if_conditional91;
struct tuple1$1sTypeph* __exception_result_var_b177;
void* right_value119;
struct tuple1$1sTypeph* __dec_obj17;
_Bool _if_conditional95;
struct tuple1$1sTypeph* __exception_result_var_b178;
void* right_value120;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional96;
char* __exception_result_var_b179;
void* right_value121;
char* __dec_obj19;
_Bool _if_conditional97;
struct list$1sTypeph* __exception_result_var_b180;
void* right_value122;
struct list$1sTypeph* __dec_obj20;
_Bool _if_conditional98;
struct list$1sNodeph* __exception_result_var_b184;
void* right_value130;
struct list$1sNodeph* __dec_obj24;
_Bool _if_conditional111;
_Bool _if_conditional112;
struct list$1sTypeph* __exception_result_var_b185;
void* right_value131;
struct list$1sTypeph* __dec_obj25;
_Bool _if_conditional113;
struct list$1charph* __exception_result_var_b189;
void* right_value138;
struct list$1charph* __dec_obj29;
_Bool _if_conditional117;
struct tuple1$1sTypeph* __exception_result_var_b190;
void* right_value139;
struct tuple1$1sTypeph* __dec_obj30;
_Bool _if_conditional118;
_Bool _if_conditional119;
struct sNode* __exception_result_var_b191;
void* right_value140;
struct sNode* __dec_obj31;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional139;
_Bool _if_conditional140;
_Bool _if_conditional141;
_Bool _if_conditional142;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
struct sNode* __exception_result_var_b192;
void* right_value141;
struct sNode* __dec_obj32;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
char* __exception_result_var_b193;
void* right_value142;
char* __dec_obj33;
_Bool _if_conditional150;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
_Bool _if_conditional154;
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
char* __exception_result_var_b194;
void* right_value143;
char* __dec_obj34;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool _if_conditional162;
struct sType* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value109 = (void*)0;
memset(&result_84, 0, sizeof(struct sType*));
right_value116 = (void*)0;
right_value119 = (void*)0;
right_value120 = (void*)0;
right_value121 = (void*)0;
right_value122 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
right_value140 = (void*)0;
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
        if(_if_conditional85=self==(void*)0,        _if_conditional85) {
            __result73__ = __result_obj__ = (void*)0;
            return __result73__;
        }
        result_84=(struct sType*)come_increment_ref_count(((struct sType*)(right_value109=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer3(right_value109,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 4, 1101)), "sType_clone", 4, 1102))->mClass=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 4, 1103)), "sType_clone", 4, 1104))->mClass;
        }
        if(_if_conditional87=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 5, 1105)), "sType_clone", 5, 1106))->mMultipleTypes!=((void*)0),        _if_conditional87) {
            __dec_obj15=((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 5, 1107)), "sType_clone", 5, 1108))->mMultipleTypes;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 5, 1107)), "sType_clone", 5, 1108))->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value116=(come_push_stackframe("sType_clone", 5, 1174),__exception_result_var_b175=list$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 5, 1109)), "sType_clone", 5, 1110))->mMultipleTypes), come_pop_stackframe(), __exception_result_var_b175))));
            come_call_finalizer3(__dec_obj15,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value116,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional91=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 6, 1179)), "sType_clone", 6, 1180))->mNoSolvedGenericsType!=((void*)0),        _if_conditional91) {
            __dec_obj17=((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 6, 1181)), "sType_clone", 6, 1182))->mNoSolvedGenericsType;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 6, 1181)), "sType_clone", 6, 1182))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value119=(come_push_stackframe("sType_clone", 6, 1196),__exception_result_var_b177=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 6, 1183)), "sType_clone", 6, 1184))->mNoSolvedGenericsType), come_pop_stackframe(), __exception_result_var_b177))));
            come_call_finalizer3(__dec_obj17,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value119,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional95=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 7, 1197)), "sType_clone", 7, 1198))->mOriginalLoadVarType!=((void*)0),        _if_conditional95) {
            __dec_obj18=((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 7, 1199)), "sType_clone", 7, 1200))->mOriginalLoadVarType;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 7, 1199)), "sType_clone", 7, 1200))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value120=(come_push_stackframe("sType_clone", 7, 1203),__exception_result_var_b178=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 7, 1201)), "sType_clone", 7, 1202))->mOriginalLoadVarType), come_pop_stackframe(), __exception_result_var_b178))));
            come_call_finalizer3(__dec_obj18,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value120,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional96=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 8, 1204)), "sType_clone", 8, 1205))->mGenericsName!=((void*)0),        _if_conditional96) {
            __dec_obj19=((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 8, 1206)), "sType_clone", 8, 1207))->mGenericsName;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 8, 1206)), "sType_clone", 8, 1207))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value121=(come_push_stackframe("sType_clone", 8, 1210),__exception_result_var_b179=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 8, 1208)), "sType_clone", 8, 1209))->mGenericsName), come_pop_stackframe(), __exception_result_var_b179))));
            __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional97=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 9, 1211)), "sType_clone", 9, 1212))->mGenericsTypes!=((void*)0),        _if_conditional97) {
            __dec_obj20=((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 9, 1213)), "sType_clone", 9, 1214))->mGenericsTypes;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 9, 1213)), "sType_clone", 9, 1214))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value122=(come_push_stackframe("sType_clone", 9, 1217),__exception_result_var_b180=list$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 9, 1215)), "sType_clone", 9, 1216))->mGenericsTypes), come_pop_stackframe(), __exception_result_var_b180))));
            come_call_finalizer3(__dec_obj20,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value122,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional98=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 10, 1218)), "sType_clone", 10, 1219))->mArrayNum!=((void*)0),        _if_conditional98) {
            __dec_obj24=((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 10, 1220)), "sType_clone", 10, 1221))->mArrayNum;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 10, 1220)), "sType_clone", 10, 1221))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value130=(come_push_stackframe("sType_clone", 10, 1321),__exception_result_var_b184=list$1sNodephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 10, 1222)), "sType_clone", 10, 1223))->mArrayNum), come_pop_stackframe(), __exception_result_var_b184))));
            come_call_finalizer3(__dec_obj24,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value130,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional111=self!=((void*)0),        _if_conditional111) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 11, 1326)), "sType_clone", 11, 1327))->mOmitArrayNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 11, 1328)), "sType_clone", 11, 1329))->mOmitArrayNum;
        }
        if(_if_conditional112=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 12, 1330)), "sType_clone", 12, 1331))->mParamTypes!=((void*)0),        _if_conditional112) {
            __dec_obj25=((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 12, 1332)), "sType_clone", 12, 1333))->mParamTypes;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 12, 1332)), "sType_clone", 12, 1333))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value131=(come_push_stackframe("sType_clone", 12, 1336),__exception_result_var_b185=list$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 12, 1334)), "sType_clone", 12, 1335))->mParamTypes), come_pop_stackframe(), __exception_result_var_b185))));
            come_call_finalizer3(__dec_obj25,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value131,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional113=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 13, 1337)), "sType_clone", 13, 1338))->mParamNames!=((void*)0),        _if_conditional113) {
            __dec_obj29=((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 13, 1339)), "sType_clone", 13, 1340))->mParamNames;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 13, 1339)), "sType_clone", 13, 1340))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value138=(come_push_stackframe("sType_clone", 13, 1406),__exception_result_var_b189=list$1charphp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 13, 1341)), "sType_clone", 13, 1342))->mParamNames), come_pop_stackframe(), __exception_result_var_b189))));
            come_call_finalizer3(__dec_obj29,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value138,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional117=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 14, 1411)), "sType_clone", 14, 1412))->mResultType!=((void*)0),        _if_conditional117) {
            __dec_obj30=((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 14, 1413)), "sType_clone", 14, 1414))->mResultType;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 14, 1413)), "sType_clone", 14, 1414))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value139=(come_push_stackframe("sType_clone", 14, 1417),__exception_result_var_b190=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 14, 1415)), "sType_clone", 14, 1416))->mResultType), come_pop_stackframe(), __exception_result_var_b190))));
            come_call_finalizer3(__dec_obj30,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value139,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional118=self!=((void*)0),        _if_conditional118) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 15, 1418)), "sType_clone", 15, 1419))->mVarArgs=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 15, 1420)), "sType_clone", 15, 1421))->mVarArgs;
        }
        if(_if_conditional119=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 16, 1422)), "sType_clone", 16, 1423))->mAlignas!=((void*)0),        _if_conditional119) {
            __dec_obj31=((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 16, 1424)), "sType_clone", 16, 1425))->mAlignas;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 16, 1424)), "sType_clone", 16, 1425))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value140=(come_push_stackframe("sType_clone", 16, 1428),__exception_result_var_b191=sNode_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 16, 1426)), "sType_clone", 16, 1427))->mAlignas), come_pop_stackframe(), __exception_result_var_b191))));
            if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value140) { right_value140 = come_decrement_ref_count2(right_value140, ((struct sNode*)right_value140)->finalize, ((struct sNode*)right_value140)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional120=self!=((void*)0),        _if_conditional120) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 17, 1429)), "sType_clone", 17, 1430))->mUnsigned=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 17, 1431)), "sType_clone", 17, 1432))->mUnsigned;
        }
        if(_if_conditional121=self!=((void*)0),        _if_conditional121) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 18, 1433)), "sType_clone", 18, 1434))->mShort=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 18, 1435)), "sType_clone", 18, 1436))->mShort;
        }
        if(_if_conditional122=self!=((void*)0),        _if_conditional122) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 19, 1437)), "sType_clone", 19, 1438))->mLong=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 19, 1439)), "sType_clone", 19, 1440))->mLong;
        }
        if(_if_conditional123=self!=((void*)0),        _if_conditional123) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 20, 1441)), "sType_clone", 20, 1442))->mLongLong=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 20, 1443)), "sType_clone", 20, 1444))->mLongLong;
        }
        if(_if_conditional124=self!=((void*)0),        _if_conditional124) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 21, 1445)), "sType_clone", 21, 1446))->mConstant=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 21, 1447)), "sType_clone", 21, 1448))->mConstant;
        }
        if(_if_conditional125=self!=((void*)0),        _if_conditional125) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 22, 1449)), "sType_clone", 22, 1450))->mRegister=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 22, 1451)), "sType_clone", 22, 1452))->mRegister;
        }
        if(_if_conditional126=self!=((void*)0),        _if_conditional126) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 23, 1453)), "sType_clone", 23, 1454))->mVolatile=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 23, 1455)), "sType_clone", 23, 1456))->mVolatile;
        }
        if(_if_conditional127=self!=((void*)0),        _if_conditional127) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 24, 1457)), "sType_clone", 24, 1458))->mStatic=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 24, 1459)), "sType_clone", 24, 1460))->mStatic;
        }
        if(_if_conditional128=self!=((void*)0),        _if_conditional128) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 25, 1461)), "sType_clone", 25, 1462))->mUniq=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 25, 1463)), "sType_clone", 25, 1464))->mUniq;
        }
        if(_if_conditional129=self!=((void*)0),        _if_conditional129) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 26, 1465)), "sType_clone", 26, 1466))->mRecord=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 26, 1467)), "sType_clone", 26, 1468))->mRecord;
        }
        if(_if_conditional130=self!=((void*)0),        _if_conditional130) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 27, 1469)), "sType_clone", 27, 1470))->mExtern=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 27, 1471)), "sType_clone", 27, 1472))->mExtern;
        }
        if(_if_conditional131=self!=((void*)0),        _if_conditional131) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 28, 1473)), "sType_clone", 28, 1474))->mRestrict=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 28, 1475)), "sType_clone", 28, 1476))->mRestrict;
        }
        if(_if_conditional132=self!=((void*)0),        _if_conditional132) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 29, 1477)), "sType_clone", 29, 1478))->mImmutable=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 29, 1479)), "sType_clone", 29, 1480))->mImmutable;
        }
        if(_if_conditional133=self!=((void*)0),        _if_conditional133) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 30, 1481)), "sType_clone", 30, 1482))->mHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 30, 1483)), "sType_clone", 30, 1484))->mHeap;
        }
        if(_if_conditional134=self!=((void*)0),        _if_conditional134) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 31, 1485)), "sType_clone", 31, 1486))->mDummyHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 31, 1487)), "sType_clone", 31, 1488))->mDummyHeap;
        }
        if(_if_conditional135=self!=((void*)0),        _if_conditional135) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 32, 1489)), "sType_clone", 32, 1490))->mDelegate=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 32, 1491)), "sType_clone", 32, 1492))->mDelegate;
        }
        if(_if_conditional136=self!=((void*)0),        _if_conditional136) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 33, 1493)), "sType_clone", 33, 1494))->mShare=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 33, 1495)), "sType_clone", 33, 1496))->mShare;
        }
        if(_if_conditional137=self!=((void*)0),        _if_conditional137) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 34, 1497)), "sType_clone", 34, 1498))->mClone=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 34, 1499)), "sType_clone", 34, 1500))->mClone;
        }
        if(_if_conditional138=self!=((void*)0),        _if_conditional138) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 35, 1501)), "sType_clone", 35, 1502))->mNoHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 35, 1503)), "sType_clone", 35, 1504))->mNoHeap;
        }
        if(_if_conditional139=self!=((void*)0),        _if_conditional139) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 36, 1505)), "sType_clone", 36, 1506))->mNoCallingDestructor=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 36, 1507)), "sType_clone", 36, 1508))->mNoCallingDestructor;
        }
        if(_if_conditional140=self!=((void*)0),        _if_conditional140) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 37, 1509)), "sType_clone", 37, 1510))->mRefference=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 37, 1511)), "sType_clone", 37, 1512))->mRefference;
        }
        if(_if_conditional141=self!=((void*)0),        _if_conditional141) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 38, 1513)), "sType_clone", 38, 1514))->mException=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 38, 1515)), "sType_clone", 38, 1516))->mException;
        }
        if(_if_conditional142=self!=((void*)0),        _if_conditional142) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 39, 1517)), "sType_clone", 39, 1518))->mPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 39, 1519)), "sType_clone", 39, 1520))->mPointerNum;
        }
        if(_if_conditional143=self!=((void*)0),        _if_conditional143) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 40, 1521)), "sType_clone", 40, 1522))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 40, 1523)), "sType_clone", 40, 1524))->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional144=self!=((void*)0),        _if_conditional144) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 41, 1525)), "sType_clone", 41, 1526))->mNoArrayPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 41, 1527)), "sType_clone", 41, 1528))->mNoArrayPointerNum;
        }
        if(_if_conditional145=self!=((void*)0),        _if_conditional145) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 42, 1529)), "sType_clone", 42, 1530))->mTypedefOriginalPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 42, 1531)), "sType_clone", 42, 1532))->mTypedefOriginalPointerNum;
        }
        if(_if_conditional146=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 43, 1533)), "sType_clone", 43, 1534))->mSizeNum!=((void*)0),        _if_conditional146) {
            __dec_obj32=((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 43, 1535)), "sType_clone", 43, 1536))->mSizeNum;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 43, 1535)), "sType_clone", 43, 1536))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value141=(come_push_stackframe("sType_clone", 43, 1539),__exception_result_var_b192=sNode_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 43, 1537)), "sType_clone", 43, 1538))->mSizeNum), come_pop_stackframe(), __exception_result_var_b192))));
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value141) { right_value141 = come_decrement_ref_count2(right_value141, ((struct sNode*)right_value141)->finalize, ((struct sNode*)right_value141)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional147=self!=((void*)0),        _if_conditional147) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 44, 1540)), "sType_clone", 44, 1541))->mDynamicArrayNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 44, 1542)), "sType_clone", 44, 1543))->mDynamicArrayNum;
        }
        if(_if_conditional148=self!=((void*)0),        _if_conditional148) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 45, 1544)), "sType_clone", 45, 1545))->mTypeOfExpression=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 45, 1546)), "sType_clone", 45, 1547))->mTypeOfExpression;
        }
        if(_if_conditional149=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 46, 1548)), "sType_clone", 46, 1549))->mOriginalTypeName!=((void*)0),        _if_conditional149) {
            __dec_obj33=((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 46, 1550)), "sType_clone", 46, 1551))->mOriginalTypeName;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 46, 1550)), "sType_clone", 46, 1551))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value142=(come_push_stackframe("sType_clone", 46, 1554),__exception_result_var_b193=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 46, 1552)), "sType_clone", 46, 1553))->mOriginalTypeName), come_pop_stackframe(), __exception_result_var_b193))));
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional150=self!=((void*)0),        _if_conditional150) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 47, 1555)), "sType_clone", 47, 1556))->mOriginalPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 47, 1557)), "sType_clone", 47, 1558))->mOriginalPointerNum;
        }
        if(_if_conditional151=self!=((void*)0),        _if_conditional151) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 48, 1559)), "sType_clone", 48, 1560))->mFunctionParam=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 48, 1561)), "sType_clone", 48, 1562))->mFunctionParam;
        }
        if(_if_conditional152=self!=((void*)0),        _if_conditional152) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 49, 1563)), "sType_clone", 49, 1564))->mAllocaValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 49, 1565)), "sType_clone", 49, 1566))->mAllocaValue;
        }
        if(_if_conditional153=self!=((void*)0),        _if_conditional153) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 50, 1567)), "sType_clone", 50, 1568))->mGenericsStruct=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 50, 1569)), "sType_clone", 50, 1570))->mGenericsStruct;
        }
        if(_if_conditional154=self!=((void*)0),        _if_conditional154) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 51, 1571)), "sType_clone", 51, 1572))->mSolvedGenericsName=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 51, 1573)), "sType_clone", 51, 1574))->mSolvedGenericsName;
        }
        if(_if_conditional155=self!=((void*)0),        _if_conditional155) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 52, 1575)), "sType_clone", 52, 1576))->mComeMemCore=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 52, 1577)), "sType_clone", 52, 1578))->mComeMemCore;
        }
        if(_if_conditional156=self!=((void*)0),        _if_conditional156) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 53, 1579)), "sType_clone", 53, 1580))->mInline=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 53, 1581)), "sType_clone", 53, 1582))->mInline;
        }
        if(_if_conditional157=self!=((void*)0),        _if_conditional157) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 54, 1583)), "sType_clone", 54, 1584))->mNullValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 54, 1585)), "sType_clone", 54, 1586))->mNullValue;
        }
        if(_if_conditional158=self!=((void*)0),        _if_conditional158) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 55, 1587)), "sType_clone", 55, 1588))->mGuardValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 55, 1589)), "sType_clone", 55, 1590))->mGuardValue;
        }
        if(_if_conditional159=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 56, 1591)), "sType_clone", 56, 1592))->mAsmName!=((void*)0),        _if_conditional159) {
            __dec_obj34=((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 56, 1593)), "sType_clone", 56, 1594))->mAsmName;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 56, 1593)), "sType_clone", 56, 1594))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value143=(come_push_stackframe("sType_clone", 56, 1597),__exception_result_var_b194=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 56, 1595)), "sType_clone", 56, 1596))->mAsmName), come_pop_stackframe(), __exception_result_var_b194))));
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional160=self!=((void*)0),        _if_conditional160) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 57, 1598)), "sType_clone", 57, 1599))->mArrayPointerType=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 57, 1600)), "sType_clone", 57, 1601))->mArrayPointerType;
        }
        if(_if_conditional161=self!=((void*)0),        _if_conditional161) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 58, 1602)), "sType_clone", 58, 1603))->mLambdaArray=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 58, 1604)), "sType_clone", 58, 1605))->mLambdaArray;
        }
        if(_if_conditional162=self!=((void*)0),        _if_conditional162) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_84, "sType_clone", 59, 1606)), "sType_clone", 59, 1607))->mNoNumberArray=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 59, 1608)), "sType_clone", 59, 1609))->mNoNumberArray;
        }
        __result90__ = __result_obj__ = result_84;
        come_call_finalizer3(result_84,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result90__;
        come_call_finalizer3(result_84,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional88;
struct list$1sTypeph* __result74__;
void* right_value110;
void* right_value111;
struct list$1sTypeph* __exception_result_var_b172;
struct list$1sTypeph* result_85;
struct list_item$1sTypeph* it_86;
_Bool _while_condtional11;
struct sType* __exception_result_var_b173;
void* right_value115;
struct list$1sTypeph* __exception_result_var_b174;
struct list$1sTypeph* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value110 = (void*)0;
right_value111 = (void*)0;
memset(&result_85, 0, sizeof(struct list$1sTypeph*));
memset(&it_86, 0, sizeof(struct list_item$1sTypeph*));
right_value115 = (void*)0;
                if(_if_conditional88=self==((void*)0),                _if_conditional88) {
                    __result74__ = __result_obj__ = ((void*)0);
                    return __result74__;
                }
                result_85=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 1119),__exception_result_var_b172=((struct list$1sTypeph*)(right_value111=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value110=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 139, "list$1sTypeph"))), "./neo-c.h", 139, 1111)), "./neo-c.h", 139, 1112)))))), come_pop_stackframe(), __exception_result_var_b172));
                come_call_finalizer3(right_value110,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value111,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_86=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 141, 1120)), "./neo-c.h", 141, 1121))->head;
                while(_while_condtional11=it_86!=((void*)0),                _while_condtional11) {
                    (come_push_stackframe("./neo-c.h", 143, 1171),__exception_result_var_b174=list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(result_85, "./neo-c.h", 143, 1122)), "./neo-c.h", 143, 1123)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value115=(come_push_stackframe("./neo-c.h", 143, 1170),__exception_result_var_b173=sType_clone(((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_86, "./neo-c.h", 143, 1168)), "./neo-c.h", 143, 1169))->item), come_pop_stackframe(), __exception_result_var_b173))))), come_pop_stackframe(), __exception_result_var_b174);
                    come_call_finalizer3(right_value115,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    it_86=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_86, "./neo-c.h", 145, 1172)), "./neo-c.h", 145, 1173))->next;
                }
                __result77__ = __result_obj__ = result_85;
                come_call_finalizer3(result_85,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result77__;
                come_call_finalizer3(result_85,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 101, 1113)), "./neo-c.h", 101, 1114))->head=((void*)0);
                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 102, 1115)), "./neo-c.h", 102, 1116))->tail=((void*)0);
                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 103, 1117)), "./neo-c.h", 103, 1118))->len=0;
                    __result75__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result75__;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional89;
void* right_value112;
struct list_item$1sTypeph* litem_87;
struct sType* __dec_obj12;
_Bool _if_conditional90;
void* right_value113;
struct list_item$1sTypeph* litem_88;
struct sType* __dec_obj13;
void* right_value114;
struct list_item$1sTypeph* litem_89;
struct sType* __dec_obj14;
struct list$1sTypeph* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value112 = (void*)0;
memset(&litem_87, 0, sizeof(struct list_item$1sTypeph*));
right_value113 = (void*)0;
memset(&litem_88, 0, sizeof(struct list_item$1sTypeph*));
right_value114 = (void*)0;
memset(&litem_89, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional89=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 152, 1124)), "./neo-c.h", 152, 1125))->len==0,                        _if_conditional89) {
                            litem_87=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value112=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 153, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value112,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_87, "./neo-c.h", 155, 1126)), "./neo-c.h", 155, 1127))->prev=((void*)0);
                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_87, "./neo-c.h", 156, 1128)), "./neo-c.h", 156, 1129))->next=((void*)0);
                            __dec_obj12=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_87, "./neo-c.h", 157, 1130)), "./neo-c.h", 157, 1131))->item;
                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_87, "./neo-c.h", 157, 1130)), "./neo-c.h", 157, 1131))->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj12,sType_finalize, 0, 0, 0, 0, (void*)0);
                            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 159, 1132)), "./neo-c.h", 159, 1133))->tail=litem_87;
                            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 160, 1134)), "./neo-c.h", 160, 1135))->head=litem_87;
                        }
                        else {
                            if(_if_conditional90=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 162, 1136)), "./neo-c.h", 162, 1137))->len==1,                            _if_conditional90) {
                                litem_88=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value113=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 163, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value113,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_88, "./neo-c.h", 165, 1138)), "./neo-c.h", 165, 1139))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 165, 1140)), "./neo-c.h", 165, 1141))->head;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_88, "./neo-c.h", 166, 1142)), "./neo-c.h", 166, 1143))->next=((void*)0);
                                __dec_obj13=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_88, "./neo-c.h", 167, 1144)), "./neo-c.h", 167, 1145))->item;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_88, "./neo-c.h", 167, 1144)), "./neo-c.h", 167, 1145))->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj13,sType_finalize, 0, 0, 0, 0, (void*)0);
                                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 169, 1146)), "./neo-c.h", 169, 1147))->tail=litem_88;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 170, 1148)), "./neo-c.h", 170, 1149))->head, "./neo-c.h", 170, 1150)), "./neo-c.h", 170, 1151))->next=litem_88;
                            }
                            else {
                                litem_89=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value114=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 173, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value114,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_89, "./neo-c.h", 175, 1152)), "./neo-c.h", 175, 1153))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 175, 1154)), "./neo-c.h", 175, 1155))->tail;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_89, "./neo-c.h", 176, 1156)), "./neo-c.h", 176, 1157))->next=((void*)0);
                                __dec_obj14=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_89, "./neo-c.h", 177, 1158)), "./neo-c.h", 177, 1159))->item;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_89, "./neo-c.h", 177, 1158)), "./neo-c.h", 177, 1159))->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 179, 1160)), "./neo-c.h", 179, 1161))->tail, "./neo-c.h", 179, 1162)), "./neo-c.h", 179, 1163))->next=litem_89;
                                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 180, 1164)), "./neo-c.h", 180, 1165))->tail=litem_89;
                            }
                        }
                        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 183, 1166)), "./neo-c.h", 183, 1167))->len++;
                        __result76__ = __result_obj__ = self;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result76__;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_90;
_Bool _while_condtional12;
struct list_item$1sTypeph* prev_it_91;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_90, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_91, 0, sizeof(struct list_item$1sTypeph*));
                it_90=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 120, 1175)), "./neo-c.h", 120, 1176))->head;
                while(_while_condtional12=it_90!=((void*)0),                _while_condtional12) {
                    prev_it_91=it_90;
                    it_90=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_90, "./neo-c.h", 123, 1177)), "./neo-c.h", 123, 1178))->next;
                    come_call_finalizer3(prev_it_91,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional92;
struct tuple1$1sTypeph* __result78__;
void* right_value117;
struct tuple1$1sTypeph* result_92;
_Bool _if_conditional94;
struct sType* __exception_result_var_b176;
void* right_value118;
struct sType* __dec_obj16;
struct tuple1$1sTypeph* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value117 = (void*)0;
memset(&result_92, 0, sizeof(struct tuple1$1sTypeph*));
right_value118 = (void*)0;
                if(_if_conditional92=self==(void*)0,                _if_conditional92) {
                    __result78__ = __result_obj__ = (void*)0;
                    return __result78__;
                }
                result_92=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value117=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer3(right_value117,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional94=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4, 1189)), "tuple1$1sTypephp_clone", 4, 1190))->v1!=((void*)0),                _if_conditional94) {
                    __dec_obj16=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(result_92, "tuple1$1sTypephp_clone", 4, 1191)), "tuple1$1sTypephp_clone", 4, 1192))->v1;
                    ((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(result_92, "tuple1$1sTypephp_clone", 4, 1191)), "tuple1$1sTypephp_clone", 4, 1192))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value118=(come_push_stackframe("tuple1$1sTypephp_clone", 4, 1195),__exception_result_var_b176=sType_clone(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4, 1193)), "tuple1$1sTypephp_clone", 4, 1194))->v1), come_pop_stackframe(), __exception_result_var_b176))));
                    come_call_finalizer3(__dec_obj16,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value118,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                __result79__ = __result_obj__ = result_92;
                come_call_finalizer3(result_92,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result79__;
                come_call_finalizer3(result_92,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional93;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional93=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0, 1185)), "tuple1$1sTypeph_finalize", 0, 1186))->v1!=((void*)0),                    _if_conditional93) {
                        come_call_finalizer3(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0, 1187)), "tuple1$1sTypeph_finalize", 0, 1188))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional99;
struct list$1sNodeph* __result80__;
void* right_value123;
void* right_value124;
struct list$1sNodeph* __exception_result_var_b181;
struct list$1sNodeph* result_93;
struct list_item$1sNodeph* it_94;
_Bool _while_condtional13;
struct sNode* __exception_result_var_b182;
void* right_value129;
struct list$1sNodeph* __exception_result_var_b183;
struct list$1sNodeph* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
right_value124 = (void*)0;
memset(&result_93, 0, sizeof(struct list$1sNodeph*));
memset(&it_94, 0, sizeof(struct list_item$1sNodeph*));
right_value129 = (void*)0;
                if(_if_conditional99=self==((void*)0),                _if_conditional99) {
                    __result80__ = __result_obj__ = ((void*)0);
                    return __result80__;
                }
                result_93=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 1232),__exception_result_var_b181=((struct list$1sNodeph*)(right_value124=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value123=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 139, "list$1sNodeph"))), "./neo-c.h", 139, 1224)), "./neo-c.h", 139, 1225)))))), come_pop_stackframe(), __exception_result_var_b181));
                come_call_finalizer3(right_value123,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value124,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_94=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 141, 1233)), "./neo-c.h", 141, 1234))->head;
                while(_while_condtional13=it_94!=((void*)0),                _while_condtional13) {
                    (come_push_stackframe("./neo-c.h", 143, 1318),__exception_result_var_b183=list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(result_93, "./neo-c.h", 143, 1235)), "./neo-c.h", 143, 1236)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value129=(come_push_stackframe("./neo-c.h", 143, 1317),__exception_result_var_b182=sNode_clone(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_94, "./neo-c.h", 143, 1281)), "./neo-c.h", 143, 1282))->item), come_pop_stackframe(), __exception_result_var_b182))))), come_pop_stackframe(), __exception_result_var_b183);
                    if(right_value129) { right_value129 = come_decrement_ref_count2(right_value129, ((struct sNode*)right_value129)->finalize, ((struct sNode*)right_value129)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    it_94=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_94, "./neo-c.h", 145, 1319)), "./neo-c.h", 145, 1320))->next;
                }
                __result85__ = __result_obj__ = result_93;
                come_call_finalizer3(result_93,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result85__;
                come_call_finalizer3(result_93,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 101, 1226)), "./neo-c.h", 101, 1227))->head=((void*)0);
                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 102, 1228)), "./neo-c.h", 102, 1229))->tail=((void*)0);
                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 103, 1230)), "./neo-c.h", 103, 1231))->len=0;
                    __result81__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result81__;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional100;
void* right_value125;
struct list_item$1sNodeph* litem_95;
struct sNode* __dec_obj21;
_Bool _if_conditional101;
void* right_value126;
struct list_item$1sNodeph* litem_96;
struct sNode* __dec_obj22;
void* right_value127;
struct list_item$1sNodeph* litem_97;
struct sNode* __dec_obj23;
struct list$1sNodeph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value125 = (void*)0;
memset(&litem_95, 0, sizeof(struct list_item$1sNodeph*));
right_value126 = (void*)0;
memset(&litem_96, 0, sizeof(struct list_item$1sNodeph*));
right_value127 = (void*)0;
memset(&litem_97, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional100=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 152, 1237)), "./neo-c.h", 152, 1238))->len==0,                        _if_conditional100) {
                            litem_95=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value125=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 153, "list_item$1sNodeph"))));
                            come_call_finalizer3(right_value125,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_95, "./neo-c.h", 155, 1239)), "./neo-c.h", 155, 1240))->prev=((void*)0);
                            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_95, "./neo-c.h", 156, 1241)), "./neo-c.h", 156, 1242))->next=((void*)0);
                            __dec_obj21=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_95, "./neo-c.h", 157, 1243)), "./neo-c.h", 157, 1244))->item;
                            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_95, "./neo-c.h", 157, 1243)), "./neo-c.h", 157, 1244))->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
                            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 159, 1245)), "./neo-c.h", 159, 1246))->tail=litem_95;
                            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 160, 1247)), "./neo-c.h", 160, 1248))->head=litem_95;
                        }
                        else {
                            if(_if_conditional101=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 162, 1249)), "./neo-c.h", 162, 1250))->len==1,                            _if_conditional101) {
                                litem_96=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value126=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 163, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value126,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_96, "./neo-c.h", 165, 1251)), "./neo-c.h", 165, 1252))->prev=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 165, 1253)), "./neo-c.h", 165, 1254))->head;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_96, "./neo-c.h", 166, 1255)), "./neo-c.h", 166, 1256))->next=((void*)0);
                                __dec_obj22=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_96, "./neo-c.h", 167, 1257)), "./neo-c.h", 167, 1258))->item;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_96, "./neo-c.h", 167, 1257)), "./neo-c.h", 167, 1258))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                                ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 169, 1259)), "./neo-c.h", 169, 1260))->tail=litem_96;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 170, 1261)), "./neo-c.h", 170, 1262))->head, "./neo-c.h", 170, 1263)), "./neo-c.h", 170, 1264))->next=litem_96;
                            }
                            else {
                                litem_97=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value127=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 173, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value127,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_97, "./neo-c.h", 175, 1265)), "./neo-c.h", 175, 1266))->prev=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 175, 1267)), "./neo-c.h", 175, 1268))->tail;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_97, "./neo-c.h", 176, 1269)), "./neo-c.h", 176, 1270))->next=((void*)0);
                                __dec_obj23=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_97, "./neo-c.h", 177, 1271)), "./neo-c.h", 177, 1272))->item;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_97, "./neo-c.h", 177, 1271)), "./neo-c.h", 177, 1272))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 179, 1273)), "./neo-c.h", 179, 1274))->tail, "./neo-c.h", 179, 1275)), "./neo-c.h", 179, 1276))->next=litem_97;
                                ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 180, 1277)), "./neo-c.h", 180, 1278))->tail=litem_97;
                            }
                        }
                        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 183, 1279)), "./neo-c.h", 183, 1280))->len++;
                        __result82__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result82__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional102;
struct sNode* __result83__;
void* right_value128;
struct sNode* result_98;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
struct sNode* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value128 = (void*)0;
memset(&result_98, 0, sizeof(struct sNode*));
                        if(_if_conditional102=self==(void*)0,                        _if_conditional102) {
                            __result83__ = __result_obj__ = (void*)0;
                            return __result83__;
                        }
                        result_98=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value128=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value128) { right_value128 = come_decrement_ref_count2(right_value128, ((struct sNode*)right_value128)->finalize, ((struct sNode*)right_value128)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        if(_if_conditional103=self!=((void*)0)&&((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 1283)), "sNode_clone", 4, 1284))->clone!=((void*)0),                        _if_conditional103) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_98, "sNode_clone", 4, 1285)), "sNode_clone", 4, 1286))->_protocol_obj=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 1287)), "sNode_clone", 4, 1288))->clone(((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 1287)), "sNode_clone", 4, 1288))->_protocol_obj);
                        }
                        if(_if_conditional104=self!=((void*)0),                        _if_conditional104) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_98, "sNode_clone", 5, 1289)), "sNode_clone", 5, 1290))->finalize=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 5, 1291)), "sNode_clone", 5, 1292))->finalize;
                        }
                        if(_if_conditional105=self!=((void*)0),                        _if_conditional105) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_98, "sNode_clone", 6, 1293)), "sNode_clone", 6, 1294))->clone=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 6, 1295)), "sNode_clone", 6, 1296))->clone;
                        }
                        if(_if_conditional106=self!=((void*)0),                        _if_conditional106) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_98, "sNode_clone", 7, 1297)), "sNode_clone", 7, 1298))->compile=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 7, 1299)), "sNode_clone", 7, 1300))->compile;
                        }
                        if(_if_conditional107=self!=((void*)0),                        _if_conditional107) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_98, "sNode_clone", 8, 1301)), "sNode_clone", 8, 1302))->sline=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 8, 1303)), "sNode_clone", 8, 1304))->sline;
                        }
                        if(_if_conditional108=self!=((void*)0),                        _if_conditional108) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_98, "sNode_clone", 9, 1305)), "sNode_clone", 9, 1306))->sname=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 9, 1307)), "sNode_clone", 9, 1308))->sname;
                        }
                        if(_if_conditional109=self!=((void*)0),                        _if_conditional109) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_98, "sNode_clone", 10, 1309)), "sNode_clone", 10, 1310))->terminated=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 10, 1311)), "sNode_clone", 10, 1312))->terminated;
                        }
                        if(_if_conditional110=self!=((void*)0),                        _if_conditional110) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_98, "sNode_clone", 11, 1313)), "sNode_clone", 11, 1314))->kind=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 11, 1315)), "sNode_clone", 11, 1316))->kind;
                        }
                        __result84__ = __result_obj__ = result_98;
                        if(result_98) { result_98 = come_decrement_ref_count2(result_98, ((struct sNode*)result_98)->finalize, ((struct sNode*)result_98)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result84__;
                        if(result_98) { result_98 = come_decrement_ref_count2(result_98, ((struct sNode*)result_98)->finalize, ((struct sNode*)result_98)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_99;
_Bool _while_condtional14;
struct list_item$1sNodeph* prev_it_100;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_99, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_100, 0, sizeof(struct list_item$1sNodeph*));
                it_99=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 120, 1322)), "./neo-c.h", 120, 1323))->head;
                while(_while_condtional14=it_99!=((void*)0),                _while_condtional14) {
                    prev_it_100=it_99;
                    it_99=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_99, "./neo-c.h", 123, 1324)), "./neo-c.h", 123, 1325))->next;
                    come_call_finalizer3(prev_it_100,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional114;
struct list$1charph* __result86__;
void* right_value132;
void* right_value133;
struct list$1charph* __exception_result_var_b186;
struct list$1charph* result_101;
struct list_item$1charph* it_102;
_Bool _while_condtional15;
char* __exception_result_var_b187;
void* right_value137;
struct list$1charph* __exception_result_var_b188;
struct list$1charph* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
right_value132 = (void*)0;
right_value133 = (void*)0;
memset(&result_101, 0, sizeof(struct list$1charph*));
memset(&it_102, 0, sizeof(struct list_item$1charph*));
right_value137 = (void*)0;
                if(_if_conditional114=self==((void*)0),                _if_conditional114) {
                    __result86__ = __result_obj__ = ((void*)0);
                    return __result86__;
                }
                result_101=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 1351),__exception_result_var_b186=((struct list$1charph*)(right_value133=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value132=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 139, "list$1charph"))), "./neo-c.h", 139, 1343)), "./neo-c.h", 139, 1344)))))), come_pop_stackframe(), __exception_result_var_b186));
                come_call_finalizer3(right_value132,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value133,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                it_102=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 141, 1352)), "./neo-c.h", 141, 1353))->head;
                while(_while_condtional15=it_102!=((void*)0),                _while_condtional15) {
                    (come_push_stackframe("./neo-c.h", 143, 1403),__exception_result_var_b188=list$1charph_add(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_101, "./neo-c.h", 143, 1354)), "./neo-c.h", 143, 1355)),(char*)come_increment_ref_count(((char*)(right_value137=(come_push_stackframe("./neo-c.h", 143, 1402),__exception_result_var_b187=string_clone(((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_102, "./neo-c.h", 143, 1400)), "./neo-c.h", 143, 1401))->item), come_pop_stackframe(), __exception_result_var_b187))))), come_pop_stackframe(), __exception_result_var_b188);
                    right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    it_102=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_102, "./neo-c.h", 145, 1404)), "./neo-c.h", 145, 1405))->next;
                }
                __result89__ = __result_obj__ = result_101;
                come_call_finalizer3(result_101,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result89__;
                come_call_finalizer3(result_101,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 101, 1345)), "./neo-c.h", 101, 1346))->head=((void*)0);
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 102, 1347)), "./neo-c.h", 102, 1348))->tail=((void*)0);
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 103, 1349)), "./neo-c.h", 103, 1350))->len=0;
                    __result87__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result87__;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional115;
void* right_value134;
struct list_item$1charph* litem_103;
char* __dec_obj26;
_Bool _if_conditional116;
void* right_value135;
struct list_item$1charph* litem_104;
char* __dec_obj27;
void* right_value136;
struct list_item$1charph* litem_105;
char* __dec_obj28;
struct list$1charph* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value134 = (void*)0;
memset(&litem_103, 0, sizeof(struct list_item$1charph*));
right_value135 = (void*)0;
memset(&litem_104, 0, sizeof(struct list_item$1charph*));
right_value136 = (void*)0;
memset(&litem_105, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional115=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 152, 1356)), "./neo-c.h", 152, 1357))->len==0,                        _if_conditional115) {
                            litem_103=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value134=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 153, "list_item$1charph"))));
                            come_call_finalizer3(right_value134,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_103, "./neo-c.h", 155, 1358)), "./neo-c.h", 155, 1359))->prev=((void*)0);
                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_103, "./neo-c.h", 156, 1360)), "./neo-c.h", 156, 1361))->next=((void*)0);
                            __dec_obj26=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_103, "./neo-c.h", 157, 1362)), "./neo-c.h", 157, 1363))->item;
                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_103, "./neo-c.h", 157, 1362)), "./neo-c.h", 157, 1363))->item=(char*)come_increment_ref_count(item);
                            __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 159, 1364)), "./neo-c.h", 159, 1365))->tail=litem_103;
                            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 160, 1366)), "./neo-c.h", 160, 1367))->head=litem_103;
                        }
                        else {
                            if(_if_conditional116=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 162, 1368)), "./neo-c.h", 162, 1369))->len==1,                            _if_conditional116) {
                                litem_104=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value135=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 163, "list_item$1charph"))));
                                come_call_finalizer3(right_value135,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_104, "./neo-c.h", 165, 1370)), "./neo-c.h", 165, 1371))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 165, 1372)), "./neo-c.h", 165, 1373))->head;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_104, "./neo-c.h", 166, 1374)), "./neo-c.h", 166, 1375))->next=((void*)0);
                                __dec_obj27=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_104, "./neo-c.h", 167, 1376)), "./neo-c.h", 167, 1377))->item;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_104, "./neo-c.h", 167, 1376)), "./neo-c.h", 167, 1377))->item=(char*)come_increment_ref_count(item);
                                __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 169, 1378)), "./neo-c.h", 169, 1379))->tail=litem_104;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 170, 1380)), "./neo-c.h", 170, 1381))->head, "./neo-c.h", 170, 1382)), "./neo-c.h", 170, 1383))->next=litem_104;
                            }
                            else {
                                litem_105=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value136=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 173, "list_item$1charph"))));
                                come_call_finalizer3(right_value136,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_105, "./neo-c.h", 175, 1384)), "./neo-c.h", 175, 1385))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 175, 1386)), "./neo-c.h", 175, 1387))->tail;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_105, "./neo-c.h", 176, 1388)), "./neo-c.h", 176, 1389))->next=((void*)0);
                                __dec_obj28=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_105, "./neo-c.h", 177, 1390)), "./neo-c.h", 177, 1391))->item;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_105, "./neo-c.h", 177, 1390)), "./neo-c.h", 177, 1391))->item=(char*)come_increment_ref_count(item);
                                __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 179, 1392)), "./neo-c.h", 179, 1393))->tail, "./neo-c.h", 179, 1394)), "./neo-c.h", 179, 1395))->next=litem_105;
                                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 180, 1396)), "./neo-c.h", 180, 1397))->tail=litem_105;
                            }
                        }
                        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 183, 1398)), "./neo-c.h", 183, 1399))->len++;
                        __result88__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result88__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_106;
_Bool _while_condtional16;
struct list_item$1charph* prev_it_107;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_106, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_107, 0, sizeof(struct list_item$1charph*));
                it_106=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 120, 1407)), "./neo-c.h", 120, 1408))->head;
                while(_while_condtional16=it_106!=((void*)0),                _while_condtional16) {
                    prev_it_107=it_106;
                    it_106=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_106, "./neo-c.h", 123, 1409)), "./neo-c.h", 123, 1410))->next;
                    come_call_finalizer3(prev_it_107,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional175;
struct sNode* result_115;
void* __exception_result_var_b232;
struct sNode* __result92__;
_Bool _if_conditional176;
struct sNode* __result93__;
struct sNode* result_116;
void* __exception_result_var_b233;
struct sNode* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_115, 0, sizeof(struct sNode*));
memset(&result_116, 0, sizeof(struct sNode*));
                            if(_if_conditional175=self==((void*)0),                            _if_conditional175) {
                                (come_push_stackframe("./neo-c.h", 284, 1737),__exception_result_var_b232=memset(&result_115,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b232);
                                __result92__ = __result_obj__ = result_115;
                                return __result92__;
                            }
                            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 287, 1738)), "./neo-c.h", 287, 1739))->it=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 287, 1740)), "./neo-c.h", 287, 1741))->head;
                            if(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 289, 1742)), "./neo-c.h", 289, 1743))->it) {
                                __result93__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 290, 1744)), "./neo-c.h", 290, 1745))->it, "./neo-c.h", 290, 1746)), "./neo-c.h", 290, 1747))->item;
                                return __result93__;
                            }
                            (come_push_stackframe("./neo-c.h", 294, 1748),__exception_result_var_b233=memset(&result_116,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b233);
                            __result94__ = __result_obj__ = result_116;
                            return __result94__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result95__;
memset(&__result_obj__, 0, sizeof(void*));
                            __result95__ = self==((void*)0)||((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 317, 1752)), "./neo-c.h", 317, 1753))->it==((void*)0);
                            return __result95__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional177;
struct sNode* result_118;
void* __exception_result_var_b236;
struct sNode* __result96__;
_Bool _if_conditional178;
struct sNode* __result97__;
struct sNode* result_119;
void* __exception_result_var_b237;
struct sNode* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_118, 0, sizeof(struct sNode*));
memset(&result_119, 0, sizeof(struct sNode*));
                            if(_if_conditional177=self==((void*)0)||((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 299, 1757)), "./neo-c.h", 299, 1758))->it==((void*)0),                            _if_conditional177) {
                                (come_push_stackframe("./neo-c.h", 301, 1759),__exception_result_var_b236=memset(&result_118,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b236);
                                __result96__ = __result_obj__ = result_118;
                                return __result96__;
                            }
                            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 305, 1760)), "./neo-c.h", 305, 1761))->it=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 305, 1762)), "./neo-c.h", 305, 1763))->it, "./neo-c.h", 305, 1764)), "./neo-c.h", 305, 1765))->next;
                            if(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 307, 1766)), "./neo-c.h", 307, 1767))->it) {
                                __result97__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 308, 1768)), "./neo-c.h", 308, 1769))->it, "./neo-c.h", 308, 1770)), "./neo-c.h", 308, 1771))->item;
                                return __result97__;
                            }
                            (come_push_stackframe("./neo-c.h", 312, 1772),__exception_result_var_b237=memset(&result_119,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b237);
                            __result98__ = __result_obj__ = result_119;
                            return __result98__;
}

struct sType* get_no_solved_type(struct sType* type){
void* __result_obj__;
struct sType* result_122;
_Bool _if_conditional187;
struct sType* __exception_result_var_b261;
void* right_value165;
struct sType* __dec_obj35;
struct sType* __exception_result_var_b262;
void* right_value166;
struct sType* __dec_obj36;
int i_123;
struct list$1sTypeph* o2_saved_124;
struct sType* __exception_result_var_b263;
struct sType* it_125;
_Bool __exception_result_var_b264;
struct sType* __exception_result_var_b265;
void* right_value167;
struct sType* __exception_result_var_b266;
struct sType* __exception_result_var_b269;
struct sType* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_122, 0, sizeof(struct sType*));
right_value165 = (void*)0;
right_value166 = (void*)0;
memset(&i_123, 0, sizeof(int));
memset(&o2_saved_124, 0, sizeof(struct list$1sTypeph*));
memset(&it_125, 0, sizeof(struct sType*));
right_value167 = (void*)0;
    if(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 356, 1842)), "03output_code.c", 356, 1843))->mNoSolvedGenericsType, "03output_code.c", 356, 1844)), "03output_code.c", 356, 1845))->v1) {
        __dec_obj35=result_122;
        result_122=(struct sType*)come_increment_ref_count(((struct sType*)(right_value165=(come_push_stackframe("03output_code.c", 357, 1850),__exception_result_var_b261=sType_clone(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 357, 1846)), "03output_code.c", 357, 1847))->mNoSolvedGenericsType, "03output_code.c", 357, 1848)), "03output_code.c", 357, 1849))->v1), come_pop_stackframe(), __exception_result_var_b261))));
        come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value165,sType_finalize, 0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj36=result_122;
        result_122=(struct sType*)come_increment_ref_count(((struct sType*)(right_value166=(come_push_stackframe("03output_code.c", 360, 1851),__exception_result_var_b262=sType_clone(type), come_pop_stackframe(), __exception_result_var_b262))));
        come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value166,sType_finalize, 0, 1, 0, 0, __result_obj__);
    }
    i_123=0;
    for(    o2_saved_124=(struct list$1sTypeph*)come_increment_ref_count((((struct sType*)come_null_check(((struct sType*)come_null_check(type, "03output_code.c", 364, 1852)), "03output_code.c", 364, 1853))->mGenericsTypes)),it_125=(come_push_stackframe("03output_code.c", 364, 1856),__exception_result_var_b263=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_124), "03output_code.c", 364, 1854)), "03output_code.c", 364, 1855))), come_pop_stackframe(), __exception_result_var_b263);    !(come_push_stackframe("03output_code.c", 364, 1859),__exception_result_var_b264=list$1sTypeph_end(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_124), "03output_code.c", 364, 1857)), "03output_code.c", 364, 1858))), come_pop_stackframe(), __exception_result_var_b264);    it_125=(come_push_stackframe("03output_code.c", 364, 1862),__exception_result_var_b265=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_124), "03output_code.c", 364, 1860)), "03output_code.c", 364, 1861))), come_pop_stackframe(), __exception_result_var_b265)    ){
        (come_push_stackframe("03output_code.c", 365, 1927),__exception_result_var_b269=list$1sTypephp_operator_store_element(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_122, "03output_code.c", 365, 1863)), "03output_code.c", 365, 1864))->mGenericsTypes, "03output_code.c", 365, 1865)),i_123,(struct sType*)come_increment_ref_count((come_push_stackframe("03output_code.c", 365, 1866),__exception_result_var_b266=((struct sType*)(right_value167=get_no_solved_type(it_125))), come_pop_stackframe(), __exception_result_var_b266))), come_pop_stackframe(), __exception_result_var_b269);
        come_call_finalizer3(right_value167,sType_finalize, 0, 1, 0, 0, __result_obj__);
        i_123++;
    }
    come_call_finalizer3(o2_saved_124,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    __result106__ = __result_obj__ = result_122;
    come_call_finalizer3(result_122,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result106__;
    come_call_finalizer3(result_122,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sType* list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__;
struct list$1sTypeph* __exception_result_var_b268;
struct sType* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
            (come_push_stackframe("./neo-c.h", 670, 1926),__exception_result_var_b268=list$1sTypeph_replace(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 670, 1867)), "./neo-c.h", 670, 1868)),position,(struct sType*)come_increment_ref_count(item)), come_pop_stackframe(), __exception_result_var_b268);
            __result105__ = __result_obj__ = item;
            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result105__;
            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__;
_Bool _if_conditional188;
_Bool _if_conditional189;
struct list$1sTypeph* __exception_result_var_b267;
struct list$1sTypeph* __result103__;
struct list_item$1sTypeph* it_129;
int i_130;
_Bool _while_condtional17;
_Bool _if_conditional192;
struct sType* __dec_obj40;
struct list$1sTypeph* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_129, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_130, 0, sizeof(int));
                if(_if_conditional188=position<0,                _if_conditional188) {
                    position+=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 582, 1869)), "./neo-c.h", 582, 1870))->len;
                }
                if(_if_conditional189=position>=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 585, 1871)), "./neo-c.h", 585, 1872))->len,                _if_conditional189) {
                    (come_push_stackframe("./neo-c.h", 586, 1919),__exception_result_var_b267=list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 586, 1873)), "./neo-c.h", 586, 1874)),(struct sType*)come_increment_ref_count(item)), come_pop_stackframe(), __exception_result_var_b267);
                    __result103__ = __result_obj__ = self;
                    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                    return __result103__;
                }
                it_129=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 590, 1920)), "./neo-c.h", 590, 1921))->head;
                i_130=0;
                while(_while_condtional17=it_129!=((void*)0),                _while_condtional17) {
                    if(_if_conditional192=position==i_130,                    _if_conditional192) {
                        __dec_obj40=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_129, "./neo-c.h", 594, 1922)), "./neo-c.h", 594, 1923))->item;
                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_129, "./neo-c.h", 594, 1922)), "./neo-c.h", 594, 1923))->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj40,sType_finalize, 0, 0, 0, 0, (void*)0);
                        break;
                    }
                    it_129=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_129, "./neo-c.h", 597, 1924)), "./neo-c.h", 597, 1925))->next;
                    i_130++;
                }
                __result104__ = __result_obj__ = self;
                come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result104__;
                come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional190;
void* right_value168;
struct list_item$1sTypeph* litem_126;
struct sType* __dec_obj37;
_Bool _if_conditional191;
void* right_value169;
struct list_item$1sTypeph* litem_127;
struct sType* __dec_obj38;
void* right_value170;
struct list_item$1sTypeph* litem_128;
struct sType* __dec_obj39;
struct list$1sTypeph* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
right_value168 = (void*)0;
memset(&litem_126, 0, sizeof(struct list_item$1sTypeph*));
right_value169 = (void*)0;
memset(&litem_127, 0, sizeof(struct list_item$1sTypeph*));
right_value170 = (void*)0;
memset(&litem_128, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional190=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 222, 1875)), "./neo-c.h", 222, 1876))->len==0,                        _if_conditional190) {
                            litem_126=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value168=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 223, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value168,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_126, "./neo-c.h", 225, 1877)), "./neo-c.h", 225, 1878))->prev=((void*)0);
                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_126, "./neo-c.h", 226, 1879)), "./neo-c.h", 226, 1880))->next=((void*)0);
                            __dec_obj37=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_126, "./neo-c.h", 227, 1881)), "./neo-c.h", 227, 1882))->item;
                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_126, "./neo-c.h", 227, 1881)), "./neo-c.h", 227, 1882))->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 0, 0, (void*)0);
                            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 229, 1883)), "./neo-c.h", 229, 1884))->tail=litem_126;
                            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 230, 1885)), "./neo-c.h", 230, 1886))->head=litem_126;
                        }
                        else {
                            if(_if_conditional191=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 232, 1887)), "./neo-c.h", 232, 1888))->len==1,                            _if_conditional191) {
                                litem_127=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value169=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 233, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value169,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_127, "./neo-c.h", 235, 1889)), "./neo-c.h", 235, 1890))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 235, 1891)), "./neo-c.h", 235, 1892))->head;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_127, "./neo-c.h", 236, 1893)), "./neo-c.h", 236, 1894))->next=((void*)0);
                                __dec_obj38=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_127, "./neo-c.h", 237, 1895)), "./neo-c.h", 237, 1896))->item;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_127, "./neo-c.h", 237, 1895)), "./neo-c.h", 237, 1896))->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj38,sType_finalize, 0, 0, 0, 0, (void*)0);
                                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 239, 1897)), "./neo-c.h", 239, 1898))->tail=litem_127;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 240, 1899)), "./neo-c.h", 240, 1900))->head, "./neo-c.h", 240, 1901)), "./neo-c.h", 240, 1902))->next=litem_127;
                            }
                            else {
                                litem_128=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value170=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 243, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value170,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_128, "./neo-c.h", 245, 1903)), "./neo-c.h", 245, 1904))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 245, 1905)), "./neo-c.h", 245, 1906))->tail;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_128, "./neo-c.h", 246, 1907)), "./neo-c.h", 246, 1908))->next=((void*)0);
                                __dec_obj39=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_128, "./neo-c.h", 247, 1909)), "./neo-c.h", 247, 1910))->item;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_128, "./neo-c.h", 247, 1909)), "./neo-c.h", 247, 1910))->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj39,sType_finalize, 0, 0, 0, 0, (void*)0);
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 249, 1911)), "./neo-c.h", 249, 1912))->tail, "./neo-c.h", 249, 1913)), "./neo-c.h", 249, 1914))->next=litem_128;
                                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 250, 1915)), "./neo-c.h", 250, 1916))->tail=litem_128;
                            }
                        }
                        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 253, 1917)), "./neo-c.h", 253, 1918))->len++;
                        __result102__ = __result_obj__ = self;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result102__;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

char* make_come_type_name_string_no_solved(struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value171;
struct sType* __exception_result_var_b270;
struct sType* no_solved_type_131;
void* right_value172;
void* right_value173;
struct buffer* __exception_result_var_b271;
struct buffer* buf_132;
char* class_name_133;
struct buffer* __exception_result_var_b272;
int __exception_result_var_b273;
_Bool _if_conditional193;
struct buffer* __exception_result_var_b274;
int i_134;
int __exception_result_var_b275;
struct sType* __exception_result_var_b276;
struct sType* gtype_135;
void* right_value174;
char* __exception_result_var_b277;
struct buffer* __exception_result_var_b278;
int __exception_result_var_b279;
_Bool _if_conditional194;
struct buffer* __exception_result_var_b280;
struct buffer* __exception_result_var_b281;
_Bool __exception_result_var_b282;
_Bool _if_conditional195;
int i_136;
struct buffer* __exception_result_var_b283;
int __exception_result_var_b284;
_Bool _if_conditional196;
int i_137;
int __exception_result_var_b285;
struct buffer* __exception_result_var_b286;
_Bool _if_conditional197;
struct buffer* __exception_result_var_b287;
void* right_value175;
char* __exception_result_var_b288;
char* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
right_value171 = (void*)0;
memset(&no_solved_type_131, 0, sizeof(struct sType*));
right_value172 = (void*)0;
right_value173 = (void*)0;
memset(&buf_132, 0, sizeof(struct buffer*));
memset(&class_name_133, 0, sizeof(char*));
memset(&i_134, 0, sizeof(int));
memset(&gtype_135, 0, sizeof(struct sType*));
right_value174 = (void*)0;
memset(&i_136, 0, sizeof(int));
memset(&i_137, 0, sizeof(int));
right_value175 = (void*)0;
    no_solved_type_131=(struct sType*)come_increment_ref_count((come_push_stackframe("03output_code.c", 374, 1928),__exception_result_var_b270=((struct sType*)(right_value171=get_no_solved_type(type))), come_pop_stackframe(), __exception_result_var_b270));
    come_call_finalizer3(right_value171,sType_finalize, 0, 1, 0, 0, __result_obj__);
    buf_132=(struct buffer*)come_increment_ref_count((come_push_stackframe("03output_code.c", 376, 1930),__exception_result_var_b271=((struct buffer*)(right_value173=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value172=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 376, "buffer"))), "03output_code.c", 376, 1929)))))), come_pop_stackframe(), __exception_result_var_b271));
    come_call_finalizer3(right_value172,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value173,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    class_name_133=((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(no_solved_type_131, "03output_code.c", 378, 1931)), "03output_code.c", 378, 1932))->mClass, "03output_code.c", 378, 1933)), "03output_code.c", 378, 1934))->mName;
    (come_push_stackframe("03output_code.c", 380, 1937),__exception_result_var_b272=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_132, "03output_code.c", 380, 1935)), "03output_code.c", 380, 1936)),class_name_133), come_pop_stackframe(), __exception_result_var_b272);
    if(_if_conditional193=(come_push_stackframe("03output_code.c", 382, 1942),__exception_result_var_b273=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(no_solved_type_131, "03output_code.c", 382, 1938)), "03output_code.c", 382, 1939))->mGenericsTypes, "03output_code.c", 382, 1940)), "03output_code.c", 382, 1941))), come_pop_stackframe(), __exception_result_var_b273)>0,    _if_conditional193) {
        (come_push_stackframe("03output_code.c", 383, 1945),__exception_result_var_b274=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_132, "03output_code.c", 383, 1943)), "03output_code.c", 383, 1944)),"<"), come_pop_stackframe(), __exception_result_var_b274);
        for(        i_134=0;        i_134<(come_push_stackframe("03output_code.c", 384, 1950),__exception_result_var_b275=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(no_solved_type_131, "03output_code.c", 384, 1946)), "03output_code.c", 384, 1947))->mGenericsTypes, "03output_code.c", 384, 1948)), "03output_code.c", 384, 1949))), come_pop_stackframe(), __exception_result_var_b275);        i_134++        ){
            gtype_135=(come_push_stackframe("03output_code.c", 385, 1955),__exception_result_var_b276=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(no_solved_type_131, "03output_code.c", 385, 1951)), "03output_code.c", 385, 1952))->mGenericsTypes, "03output_code.c", 385, 1953)),i_134), "03output_code.c", 385, 1954)), come_pop_stackframe(), __exception_result_var_b276);
            (come_push_stackframe("03output_code.c", 387, 1959),__exception_result_var_b278=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_132, "03output_code.c", 387, 1956)), "03output_code.c", 387, 1957)),(come_push_stackframe("03output_code.c", 387, 1958),__exception_result_var_b277=((char*)(right_value174=make_come_type_name_string_no_solved(gtype_135,info))), come_pop_stackframe(), __exception_result_var_b277)), come_pop_stackframe(), __exception_result_var_b278);
            right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional194=i_134!=(come_push_stackframe("03output_code.c", 389, 1964),__exception_result_var_b279=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(no_solved_type_131, "03output_code.c", 389, 1960)), "03output_code.c", 389, 1961))->mGenericsTypes, "03output_code.c", 389, 1962)), "03output_code.c", 389, 1963))), come_pop_stackframe(), __exception_result_var_b279)-1,            _if_conditional194) {
                (come_push_stackframe("03output_code.c", 390, 1967),__exception_result_var_b280=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_132, "03output_code.c", 390, 1965)), "03output_code.c", 390, 1966)),","), come_pop_stackframe(), __exception_result_var_b280);
            }
        }
        (come_push_stackframe("03output_code.c", 394, 1970),__exception_result_var_b281=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_132, "03output_code.c", 394, 1968)), "03output_code.c", 394, 1969)),">"), come_pop_stackframe(), __exception_result_var_b281);
    }
    if(_if_conditional195=((struct sType*)come_null_check(((struct sType*)come_null_check(no_solved_type_131, "03output_code.c", 397, 1971)), "03output_code.c", 397, 1972))->mNoArrayPointerNum==0&&(come_push_stackframe("03output_code.c", 397, 1973),__exception_result_var_b282=charp_operator_not_equals(class_name_133,"lambda"), come_pop_stackframe(), __exception_result_var_b282),    _if_conditional195) {
        for(        i_136=0;        i_136<((struct sType*)come_null_check(((struct sType*)come_null_check(no_solved_type_131, "03output_code.c", 398, 1974)), "03output_code.c", 398, 1975))->mPointerNum;        i_136++        ){
            (come_push_stackframe("03output_code.c", 399, 1978),__exception_result_var_b283=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_132, "03output_code.c", 399, 1976)), "03output_code.c", 399, 1977)),"*"), come_pop_stackframe(), __exception_result_var_b283);
        }
    }
    if(_if_conditional196=(come_push_stackframe("03output_code.c", 403, 1983),__exception_result_var_b284=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(no_solved_type_131, "03output_code.c", 403, 1979)), "03output_code.c", 403, 1980))->mArrayNum, "03output_code.c", 403, 1981)), "03output_code.c", 403, 1982))), come_pop_stackframe(), __exception_result_var_b284)>0,    _if_conditional196) {
        for(        i_137=0;        i_137<(come_push_stackframe("03output_code.c", 404, 1988),__exception_result_var_b285=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(no_solved_type_131, "03output_code.c", 404, 1984)), "03output_code.c", 404, 1985))->mArrayNum, "03output_code.c", 404, 1986)), "03output_code.c", 404, 1987))), come_pop_stackframe(), __exception_result_var_b285);        i_137++        ){
            (come_push_stackframe("03output_code.c", 405, 1991),__exception_result_var_b286=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_132, "03output_code.c", 405, 1989)), "03output_code.c", 405, 1990)),"[]"), come_pop_stackframe(), __exception_result_var_b286);
        }
    }
    if(((struct sType*)come_null_check(((struct sType*)come_null_check(no_solved_type_131, "03output_code.c", 409, 1992)), "03output_code.c", 409, 1993))->mHeap) {
        (come_push_stackframe("03output_code.c", 410, 1996),__exception_result_var_b287=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_132, "03output_code.c", 410, 1994)), "03output_code.c", 410, 1995)),"%"), come_pop_stackframe(), __exception_result_var_b287);
    }
    __result107__ = __result_obj__ = (come_push_stackframe("03output_code.c", 413, 1999),__exception_result_var_b288=((char*)(right_value175=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_132, "03output_code.c", 413, 1997)), "03output_code.c", 413, 1998))))), come_pop_stackframe(), __exception_result_var_b288);
    come_call_finalizer3(no_solved_type_131,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_132,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result107__;
    come_call_finalizer3(no_solved_type_131,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_132,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

char* make_define_var_no_solved(struct sType* type, char* name, _Bool in_header, struct sInfo* info){
void* __result_obj__;
void* right_value176;
char* __exception_result_var_b289;
char* type_name_138;
void* right_value177;
char* __exception_result_var_b290;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
right_value176 = (void*)0;
memset(&type_name_138, 0, sizeof(char*));
right_value177 = (void*)0;
    type_name_138=(char*)come_increment_ref_count((come_push_stackframe("03output_code.c", 418, 2000),__exception_result_var_b289=((char*)(right_value176=make_come_type_name_string_no_solved(type,info))), come_pop_stackframe(), __exception_result_var_b289));
    right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result108__ = __result_obj__ = (come_push_stackframe("03output_code.c", 420, 2001),__exception_result_var_b290=((char*)(right_value177=xsprintf("%s %s",type_name_138,name))), come_pop_stackframe(), __exception_result_var_b290);
    type_name_138 = come_decrement_ref_count2(type_name_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result108__;
    type_name_138 = come_decrement_ref_count2(type_name_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* output_function(struct sFun* fun, struct sInfo* info){
void* __result_obj__;
void* right_value178;
void* right_value179;
struct buffer* __exception_result_var_b291;
struct buffer* output_139;
_Bool _if_conditional198;
void* right_value180;
void* right_value181;
struct buffer* __exception_result_var_b292;
struct buffer* output2_140;
struct buffer* __exception_result_var_b293;
struct buffer* __exception_result_var_b294;
int i_141;
struct list$1sTypeph* o2_saved_142;
struct sType* __exception_result_var_b295;
struct sType* it_143;
_Bool __exception_result_var_b296;
struct sType* __exception_result_var_b297;
char* __exception_result_var_b299;
char* name_144;
void* right_value182;
char* __exception_result_var_b300;
char* str_148;
struct buffer* __exception_result_var_b301;
int __exception_result_var_b302;
_Bool _if_conditional201;
_Bool _if_conditional202;
struct buffer* __exception_result_var_b303;
struct buffer* __exception_result_var_b304;
struct buffer* __exception_result_var_b305;
void* right_value183;
char* __exception_result_var_b306;
void* right_value184;
char* __exception_result_var_b307;
char* str_149;
struct buffer* __exception_result_var_b308;
void* right_value185;
char* __exception_result_var_b309;
struct buffer* __exception_result_var_b310;
struct buffer* __exception_result_var_b311;
int __exception_result_var_b312;
_Bool _if_conditional203;
struct sType* __exception_result_var_b313;
void* right_value186;
struct sType* base_result_type_150;
void* right_value187;
void* right_value188;
struct list$1sNodeph* __exception_result_var_b314;
struct list$1sNodeph* __dec_obj41;
void* right_value189;
char* __exception_result_var_b315;
char* result_type_str_151;
struct buffer* __exception_result_var_b316;
struct buffer* __exception_result_var_b317;
struct buffer* __exception_result_var_b318;
struct buffer* __exception_result_var_b319;
int i_152;
struct list$1sTypeph* o2_saved_153;
struct sType* __exception_result_var_b320;
struct sType* it_154;
_Bool __exception_result_var_b321;
struct sType* __exception_result_var_b322;
char* __exception_result_var_b323;
char* name_155;
void* right_value190;
char* __exception_result_var_b324;
char* str_156;
struct buffer* __exception_result_var_b325;
int __exception_result_var_b326;
_Bool _if_conditional204;
_Bool _if_conditional205;
struct buffer* __exception_result_var_b327;
struct buffer* __exception_result_var_b328;
struct sNode* __exception_result_var_b330;
struct sNode* node_157;
_Bool __exception_result_var_b331;
_Bool _if_conditional208;
void* right_value191;
char* __exception_result_var_b332;
char* __result113__;
void* right_value192;
struct CVALUE* __exception_result_var_b333;
struct CVALUE* cvalue_161;
void* right_value193;
char* __exception_result_var_b334;
struct buffer* __exception_result_var_b335;
void* right_value194;
char* __exception_result_var_b336;
struct buffer* __exception_result_var_b337;
struct buffer* __exception_result_var_b338;
void* right_value195;
char* __exception_result_var_b339;
char* result_type_str_162;
struct buffer* __exception_result_var_b340;
struct buffer* __exception_result_var_b341;
struct buffer* __exception_result_var_b342;
struct buffer* __exception_result_var_b343;
int i_163;
struct list$1sTypeph* o2_saved_164;
struct sType* __exception_result_var_b344;
struct sType* it_165;
_Bool __exception_result_var_b345;
struct sType* __exception_result_var_b346;
char* __exception_result_var_b347;
char* name_166;
void* right_value196;
char* __exception_result_var_b348;
char* str_167;
struct buffer* __exception_result_var_b349;
int __exception_result_var_b350;
_Bool _if_conditional209;
_Bool _if_conditional210;
struct buffer* __exception_result_var_b351;
struct buffer* __exception_result_var_b352;
struct buffer* __exception_result_var_b353;
void* right_value197;
char* __exception_result_var_b354;
struct buffer* __exception_result_var_b355;
struct buffer* __exception_result_var_b356;
struct buffer* __exception_result_var_b357;
void* right_value198;
char* __exception_result_var_b358;
struct buffer* __exception_result_var_b359;
void* right_value199;
char* __exception_result_var_b360;
struct buffer* __exception_result_var_b361;
void* right_value200;
char* __exception_result_var_b362;
struct buffer* __exception_result_var_b363;
struct buffer* __exception_result_var_b364;
void* right_value201;
char* __exception_result_var_b365;
char* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
right_value178 = (void*)0;
right_value179 = (void*)0;
memset(&output_139, 0, sizeof(struct buffer*));
right_value180 = (void*)0;
right_value181 = (void*)0;
memset(&output2_140, 0, sizeof(struct buffer*));
memset(&i_141, 0, sizeof(int));
memset(&o2_saved_142, 0, sizeof(struct list$1sTypeph*));
memset(&it_143, 0, sizeof(struct sType*));
memset(&name_144, 0, sizeof(char*));
right_value182 = (void*)0;
memset(&str_148, 0, sizeof(char*));
right_value183 = (void*)0;
right_value184 = (void*)0;
memset(&str_149, 0, sizeof(char*));
right_value185 = (void*)0;
right_value186 = (void*)0;
memset(&base_result_type_150, 0, sizeof(struct sType*));
right_value187 = (void*)0;
right_value188 = (void*)0;
right_value189 = (void*)0;
memset(&result_type_str_151, 0, sizeof(char*));
memset(&i_152, 0, sizeof(int));
memset(&o2_saved_153, 0, sizeof(struct list$1sTypeph*));
memset(&it_154, 0, sizeof(struct sType*));
memset(&name_155, 0, sizeof(char*));
right_value190 = (void*)0;
memset(&str_156, 0, sizeof(char*));
memset(&node_157, 0, sizeof(struct sNode*));
right_value191 = (void*)0;
right_value192 = (void*)0;
memset(&cvalue_161, 0, sizeof(struct CVALUE*));
right_value193 = (void*)0;
right_value194 = (void*)0;
right_value195 = (void*)0;
memset(&result_type_str_162, 0, sizeof(char*));
memset(&i_163, 0, sizeof(int));
memset(&o2_saved_164, 0, sizeof(struct list$1sTypeph*));
memset(&it_165, 0, sizeof(struct sType*));
memset(&name_166, 0, sizeof(char*));
right_value196 = (void*)0;
memset(&str_167, 0, sizeof(char*));
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value200 = (void*)0;
right_value201 = (void*)0;
    output_139=(struct buffer*)come_increment_ref_count((come_push_stackframe("03output_code.c", 425, 2003),__exception_result_var_b291=((struct buffer*)(right_value179=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value178=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 425, "buffer"))), "03output_code.c", 425, 2002)))))), come_pop_stackframe(), __exception_result_var_b291));
    come_call_finalizer3(right_value178,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value179,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    if(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 426, 2004)), "03output_code.c", 426, 2005))->mResultType, "03output_code.c", 426, 2006)), "03output_code.c", 426, 2007))->mResultType) {
        output2_140=(struct buffer*)come_increment_ref_count((come_push_stackframe("03output_code.c", 427, 2009),__exception_result_var_b292=((struct buffer*)(right_value181=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value180=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 427, "buffer"))), "03output_code.c", 427, 2008)))))), come_pop_stackframe(), __exception_result_var_b292));
        come_call_finalizer3(right_value180,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value181,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("03output_code.c", 429, 2014),__exception_result_var_b293=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output2_140, "03output_code.c", 429, 2010)), "03output_code.c", 429, 2011)),((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 429, 2012)), "03output_code.c", 429, 2013))->mName), come_pop_stackframe(), __exception_result_var_b293);
        (come_push_stackframe("03output_code.c", 430, 2017),__exception_result_var_b294=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output2_140, "03output_code.c", 430, 2015)), "03output_code.c", 430, 2016)),"("), come_pop_stackframe(), __exception_result_var_b294);
        i_141=0;
        for(        o2_saved_142=(struct list$1sTypeph*)come_increment_ref_count((((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 433, 2018)), "03output_code.c", 433, 2019))->mParamTypes)),it_143=(come_push_stackframe("03output_code.c", 433, 2022),__exception_result_var_b295=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_142), "03output_code.c", 433, 2020)), "03output_code.c", 433, 2021))), come_pop_stackframe(), __exception_result_var_b295);        !(come_push_stackframe("03output_code.c", 433, 2025),__exception_result_var_b296=list$1sTypeph_end(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_142), "03output_code.c", 433, 2023)), "03output_code.c", 433, 2024))), come_pop_stackframe(), __exception_result_var_b296);        it_143=(come_push_stackframe("03output_code.c", 433, 2028),__exception_result_var_b297=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_142), "03output_code.c", 433, 2026)), "03output_code.c", 433, 2027))), come_pop_stackframe(), __exception_result_var_b297)        ){
            name_144=(come_push_stackframe("03output_code.c", 434, 2042),__exception_result_var_b299=((char*)come_null_check(list$1charphp_operator_load_element(((struct list$1charph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 434, 2029)), "03output_code.c", 434, 2030))->mParamNames, "03output_code.c", 434, 2031)),i_141), "03output_code.c", 434, 2041)), come_pop_stackframe(), __exception_result_var_b299);
            str_148=(char*)come_increment_ref_count((come_push_stackframe("03output_code.c", 436, 2043),__exception_result_var_b300=((char*)(right_value182=make_define_var(it_143,name_144,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b300));
            right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("03output_code.c", 437, 2046),__exception_result_var_b301=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output2_140, "03output_code.c", 437, 2044)), "03output_code.c", 437, 2045)),str_148), come_pop_stackframe(), __exception_result_var_b301);
            if(_if_conditional201=i_141==(come_push_stackframe("03output_code.c", 439, 2051),__exception_result_var_b302=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 439, 2047)), "03output_code.c", 439, 2048))->mParamTypes, "03output_code.c", 439, 2049)), "03output_code.c", 439, 2050))), come_pop_stackframe(), __exception_result_var_b302)-1,            _if_conditional201) {
                if(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 440, 2052)), "03output_code.c", 440, 2053))->mVarArgs) {
                    (come_push_stackframe("03output_code.c", 441, 2056),__exception_result_var_b303=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output2_140, "03output_code.c", 441, 2054)), "03output_code.c", 441, 2055)),", ..."), come_pop_stackframe(), __exception_result_var_b303);
                }
            }
            else {
                (come_push_stackframe("03output_code.c", 445, 2059),__exception_result_var_b304=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output2_140, "03output_code.c", 445, 2057)), "03output_code.c", 445, 2058)),", "), come_pop_stackframe(), __exception_result_var_b304);
            }
            i_141++;
            str_148 = come_decrement_ref_count2(str_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_142,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        (come_push_stackframe("03output_code.c", 450, 2062),__exception_result_var_b305=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output2_140, "03output_code.c", 450, 2060)), "03output_code.c", 450, 2061)),")"), come_pop_stackframe(), __exception_result_var_b305);
        str_149=(char*)come_increment_ref_count((come_push_stackframe("03output_code.c", 452, 2068),__exception_result_var_b307=((char*)(right_value184=make_lambda_type_name_string(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 452, 2063)), "03output_code.c", 452, 2064))->mResultType,(come_push_stackframe("03output_code.c", 452, 2067),__exception_result_var_b306=((char*)(right_value183=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output2_140, "03output_code.c", 452, 2065)), "03output_code.c", 452, 2066))))), come_pop_stackframe(), __exception_result_var_b306),info))), come_pop_stackframe(), __exception_result_var_b307));
        right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("03output_code.c", 454, 2071),__exception_result_var_b308=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_139, "03output_code.c", 454, 2069)), "03output_code.c", 454, 2070)),str_149), come_pop_stackframe(), __exception_result_var_b308);
        (come_push_stackframe("03output_code.c", 458, 2081),__exception_result_var_b310=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 458, 2072)), "03output_code.c", 458, 2073))->module, "03output_code.c", 458, 2074)), "03output_code.c", 458, 2075))->mSourceHead, "03output_code.c", 458, 2076)), "03output_code.c", 458, 2077)),(come_push_stackframe("03output_code.c", 458, 2080),__exception_result_var_b309=((char*)(right_value185=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_139, "03output_code.c", 458, 2078)), "03output_code.c", 458, 2079))))), come_pop_stackframe(), __exception_result_var_b309)), come_pop_stackframe(), __exception_result_var_b310);
        right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("03output_code.c", 459, 2088),__exception_result_var_b311=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 459, 2082)), "03output_code.c", 459, 2083))->module, "03output_code.c", 459, 2084)), "03output_code.c", 459, 2085))->mSourceHead, "03output_code.c", 459, 2086)), "03output_code.c", 459, 2087)),";\n"), come_pop_stackframe(), __exception_result_var_b311);
        come_call_finalizer3(output2_140,buffer_finalize, 0, 0, 0, 0, (void*)0);
        str_149 = come_decrement_ref_count2(str_149, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional203=(come_push_stackframe("03output_code.c", 461, 2095),__exception_result_var_b312=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 461, 2089)), "03output_code.c", 461, 2090))->mResultType, "03output_code.c", 461, 2091)), "03output_code.c", 461, 2092))->mArrayNum, "03output_code.c", 461, 2093)), "03output_code.c", 461, 2094))), come_pop_stackframe(), __exception_result_var_b312)>0,        _if_conditional203) {
            base_result_type_150=(struct sType*)come_increment_ref_count(((struct sType*)(right_value186=(come_push_stackframe("03output_code.c", 462, 2098),__exception_result_var_b313=sType_clone(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 462, 2096)), "03output_code.c", 462, 2097))->mResultType), come_pop_stackframe(), __exception_result_var_b313))));
            come_call_finalizer3(right_value186,sType_finalize, 0, 1, 0, 0, __result_obj__);
            __dec_obj41=((struct sType*)come_null_check(((struct sType*)come_null_check(base_result_type_150, "03output_code.c", 463, 2099)), "03output_code.c", 463, 2100))->mArrayNum;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(base_result_type_150, "03output_code.c", 463, 2099)), "03output_code.c", 463, 2100))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("03output_code.c", 463, 2102),__exception_result_var_b314=((struct list$1sNodeph*)(right_value188=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value187=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "03output_code.c", 463, "list$1sNodeph"))), "03output_code.c", 463, 2101)))))), come_pop_stackframe(), __exception_result_var_b314));
            come_call_finalizer3(__dec_obj41,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value187,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value188,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            result_type_str_151=(char*)come_increment_ref_count((come_push_stackframe("03output_code.c", 465, 2103),__exception_result_var_b315=((char*)(right_value189=make_type_name_string(base_result_type_150,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b315));
            right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("03output_code.c", 467, 2106),__exception_result_var_b316=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_139, "03output_code.c", 467, 2104)), "03output_code.c", 467, 2105)),result_type_str_151), come_pop_stackframe(), __exception_result_var_b316);
            (come_push_stackframe("03output_code.c", 468, 2109),__exception_result_var_b317=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_139, "03output_code.c", 468, 2107)), "03output_code.c", 468, 2108))," (*"), come_pop_stackframe(), __exception_result_var_b317);
            (come_push_stackframe("03output_code.c", 470, 2114),__exception_result_var_b318=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_139, "03output_code.c", 470, 2110)), "03output_code.c", 470, 2111)),((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 470, 2112)), "03output_code.c", 470, 2113))->mName), come_pop_stackframe(), __exception_result_var_b318);
            (come_push_stackframe("03output_code.c", 471, 2117),__exception_result_var_b319=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_139, "03output_code.c", 471, 2115)), "03output_code.c", 471, 2116)),"("), come_pop_stackframe(), __exception_result_var_b319);
            i_152=0;
            for(            o2_saved_153=(struct list$1sTypeph*)come_increment_ref_count((((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 474, 2118)), "03output_code.c", 474, 2119))->mParamTypes)),it_154=(come_push_stackframe("03output_code.c", 474, 2122),__exception_result_var_b320=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_153), "03output_code.c", 474, 2120)), "03output_code.c", 474, 2121))), come_pop_stackframe(), __exception_result_var_b320);            !(come_push_stackframe("03output_code.c", 474, 2125),__exception_result_var_b321=list$1sTypeph_end(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_153), "03output_code.c", 474, 2123)), "03output_code.c", 474, 2124))), come_pop_stackframe(), __exception_result_var_b321);            it_154=(come_push_stackframe("03output_code.c", 474, 2128),__exception_result_var_b322=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_153), "03output_code.c", 474, 2126)), "03output_code.c", 474, 2127))), come_pop_stackframe(), __exception_result_var_b322)            ){
                name_155=(come_push_stackframe("03output_code.c", 475, 2133),__exception_result_var_b323=((char*)come_null_check(list$1charphp_operator_load_element(((struct list$1charph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 475, 2129)), "03output_code.c", 475, 2130))->mParamNames, "03output_code.c", 475, 2131)),i_152), "03output_code.c", 475, 2132)), come_pop_stackframe(), __exception_result_var_b323);
                str_156=(char*)come_increment_ref_count((come_push_stackframe("03output_code.c", 477, 2134),__exception_result_var_b324=((char*)(right_value190=make_define_var(it_154,name_155,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b324));
                right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("03output_code.c", 478, 2137),__exception_result_var_b325=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_139, "03output_code.c", 478, 2135)), "03output_code.c", 478, 2136)),str_156), come_pop_stackframe(), __exception_result_var_b325);
                if(_if_conditional204=i_152==(come_push_stackframe("03output_code.c", 480, 2142),__exception_result_var_b326=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 480, 2138)), "03output_code.c", 480, 2139))->mParamTypes, "03output_code.c", 480, 2140)), "03output_code.c", 480, 2141))), come_pop_stackframe(), __exception_result_var_b326)-1,                _if_conditional204) {
                    if(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 481, 2143)), "03output_code.c", 481, 2144))->mVarArgs) {
                        (come_push_stackframe("03output_code.c", 482, 2147),__exception_result_var_b327=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_139, "03output_code.c", 482, 2145)), "03output_code.c", 482, 2146)),", ..."), come_pop_stackframe(), __exception_result_var_b327);
                    }
                }
                else {
                    (come_push_stackframe("03output_code.c", 486, 2150),__exception_result_var_b328=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_139, "03output_code.c", 486, 2148)), "03output_code.c", 486, 2149)),", "), come_pop_stackframe(), __exception_result_var_b328);
                }
                i_152++;
                str_156 = come_decrement_ref_count2(str_156, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_153,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            node_157=(come_push_stackframe("03output_code.c", 492, 2166),__exception_result_var_b330=((struct sNode*)come_null_check(list$1sNodephp_operator_load_element(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 492, 2151)), "03output_code.c", 492, 2152))->mResultType, "03output_code.c", 492, 2153)), "03output_code.c", 492, 2154))->mArrayNum, "03output_code.c", 492, 2155)),0), "03output_code.c", 492, 2165)), come_pop_stackframe(), __exception_result_var_b330);
            if(_if_conditional208=!(come_push_stackframe("03output_code.c", 494, 2167),__exception_result_var_b331=node_compile(node_157,info), come_pop_stackframe(), __exception_result_var_b331),            _if_conditional208) {
                (come_push_stackframe("03output_code.c", 495,2168),err_msg(info,"invalid array number"),come_pop_stackframe());
                __result113__ = __result_obj__ = (come_push_stackframe("03output_code.c", 496, 2169),__exception_result_var_b332=((char*)(right_value191=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b332);
                come_call_finalizer3(base_result_type_150,sType_finalize, 0, 0, 0, 0, (void*)0);
                result_type_str_151 = come_decrement_ref_count2(result_type_str_151, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(output_139,buffer_finalize, 0, 0, 0, 0, (void*)0);
                right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result113__;
            }
            cvalue_161=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("03output_code.c", 498, 2170),__exception_result_var_b333=((struct CVALUE*)(right_value192=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b333));
            come_call_finalizer3(right_value192,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("03output_code.c", 499,2171),dec_stack_ptr(1,info),come_pop_stackframe());
            (come_push_stackframe("03output_code.c", 501, 2177),__exception_result_var_b335=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_139, "03output_code.c", 501, 2172)), "03output_code.c", 501, 2173)),(come_push_stackframe("03output_code.c", 501, 2176),__exception_result_var_b334=((char*)(right_value193=xsprintf("))[%s]",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(cvalue_161, "03output_code.c", 501, 2174)), "03output_code.c", 501, 2175))->c_value))), come_pop_stackframe(), __exception_result_var_b334)), come_pop_stackframe(), __exception_result_var_b335);
            right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("03output_code.c", 503, 2187),__exception_result_var_b337=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 503, 2178)), "03output_code.c", 503, 2179))->module, "03output_code.c", 503, 2180)), "03output_code.c", 503, 2181))->mSourceHead, "03output_code.c", 503, 2182)), "03output_code.c", 503, 2183)),(come_push_stackframe("03output_code.c", 503, 2186),__exception_result_var_b336=((char*)(right_value194=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_139, "03output_code.c", 503, 2184)), "03output_code.c", 503, 2185))))), come_pop_stackframe(), __exception_result_var_b336)), come_pop_stackframe(), __exception_result_var_b337);
            right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("03output_code.c", 504, 2194),__exception_result_var_b338=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 504, 2188)), "03output_code.c", 504, 2189))->module, "03output_code.c", 504, 2190)), "03output_code.c", 504, 2191))->mSourceHead, "03output_code.c", 504, 2192)), "03output_code.c", 504, 2193)),";\n"), come_pop_stackframe(), __exception_result_var_b338);
            come_call_finalizer3(base_result_type_150,sType_finalize, 0, 0, 0, 0, (void*)0);
            result_type_str_151 = come_decrement_ref_count2(result_type_str_151, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(cvalue_161,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            result_type_str_162=(char*)come_increment_ref_count((come_push_stackframe("03output_code.c", 507, 2197),__exception_result_var_b339=((char*)(right_value195=make_type_name_string(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 507, 2195)), "03output_code.c", 507, 2196))->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b339));
            right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("03output_code.c", 509, 2200),__exception_result_var_b340=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_139, "03output_code.c", 509, 2198)), "03output_code.c", 509, 2199)),result_type_str_162), come_pop_stackframe(), __exception_result_var_b340);
            (come_push_stackframe("03output_code.c", 510, 2203),__exception_result_var_b341=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_139, "03output_code.c", 510, 2201)), "03output_code.c", 510, 2202))," "), come_pop_stackframe(), __exception_result_var_b341);
            (come_push_stackframe("03output_code.c", 512, 2208),__exception_result_var_b342=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_139, "03output_code.c", 512, 2204)), "03output_code.c", 512, 2205)),((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 512, 2206)), "03output_code.c", 512, 2207))->mName), come_pop_stackframe(), __exception_result_var_b342);
            (come_push_stackframe("03output_code.c", 513, 2211),__exception_result_var_b343=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_139, "03output_code.c", 513, 2209)), "03output_code.c", 513, 2210)),"("), come_pop_stackframe(), __exception_result_var_b343);
            i_163=0;
            for(            o2_saved_164=(struct list$1sTypeph*)come_increment_ref_count((((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 516, 2212)), "03output_code.c", 516, 2213))->mParamTypes)),it_165=(come_push_stackframe("03output_code.c", 516, 2216),__exception_result_var_b344=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_164), "03output_code.c", 516, 2214)), "03output_code.c", 516, 2215))), come_pop_stackframe(), __exception_result_var_b344);            !(come_push_stackframe("03output_code.c", 516, 2219),__exception_result_var_b345=list$1sTypeph_end(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_164), "03output_code.c", 516, 2217)), "03output_code.c", 516, 2218))), come_pop_stackframe(), __exception_result_var_b345);            it_165=(come_push_stackframe("03output_code.c", 516, 2222),__exception_result_var_b346=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_164), "03output_code.c", 516, 2220)), "03output_code.c", 516, 2221))), come_pop_stackframe(), __exception_result_var_b346)            ){
                name_166=(come_push_stackframe("03output_code.c", 517, 2227),__exception_result_var_b347=((char*)come_null_check(list$1charphp_operator_load_element(((struct list$1charph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 517, 2223)), "03output_code.c", 517, 2224))->mParamNames, "03output_code.c", 517, 2225)),i_163), "03output_code.c", 517, 2226)), come_pop_stackframe(), __exception_result_var_b347);
                str_167=(char*)come_increment_ref_count((come_push_stackframe("03output_code.c", 519, 2228),__exception_result_var_b348=((char*)(right_value196=make_define_var(it_165,name_166,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b348));
                right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("03output_code.c", 520, 2231),__exception_result_var_b349=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_139, "03output_code.c", 520, 2229)), "03output_code.c", 520, 2230)),str_167), come_pop_stackframe(), __exception_result_var_b349);
                if(_if_conditional209=i_163==(come_push_stackframe("03output_code.c", 522, 2236),__exception_result_var_b350=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 522, 2232)), "03output_code.c", 522, 2233))->mParamTypes, "03output_code.c", 522, 2234)), "03output_code.c", 522, 2235))), come_pop_stackframe(), __exception_result_var_b350)-1,                _if_conditional209) {
                    if(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 523, 2237)), "03output_code.c", 523, 2238))->mVarArgs) {
                        (come_push_stackframe("03output_code.c", 524, 2241),__exception_result_var_b351=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_139, "03output_code.c", 524, 2239)), "03output_code.c", 524, 2240)),", ..."), come_pop_stackframe(), __exception_result_var_b351);
                    }
                }
                else {
                    (come_push_stackframe("03output_code.c", 528, 2244),__exception_result_var_b352=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_139, "03output_code.c", 528, 2242)), "03output_code.c", 528, 2243)),", "), come_pop_stackframe(), __exception_result_var_b352);
                }
                i_163++;
                str_167 = come_decrement_ref_count2(str_167, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_164,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            (come_push_stackframe("03output_code.c", 533, 2247),__exception_result_var_b353=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_139, "03output_code.c", 533, 2245)), "03output_code.c", 533, 2246)),")"), come_pop_stackframe(), __exception_result_var_b353);
            (come_push_stackframe("03output_code.c", 535, 2257),__exception_result_var_b355=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 535, 2248)), "03output_code.c", 535, 2249))->module, "03output_code.c", 535, 2250)), "03output_code.c", 535, 2251))->mSourceHead, "03output_code.c", 535, 2252)), "03output_code.c", 535, 2253)),(come_push_stackframe("03output_code.c", 535, 2256),__exception_result_var_b354=((char*)(right_value197=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_139, "03output_code.c", 535, 2254)), "03output_code.c", 535, 2255))))), come_pop_stackframe(), __exception_result_var_b354)), come_pop_stackframe(), __exception_result_var_b355);
            right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("03output_code.c", 536, 2264),__exception_result_var_b356=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 536, 2258)), "03output_code.c", 536, 2259))->module, "03output_code.c", 536, 2260)), "03output_code.c", 536, 2261))->mSourceHead, "03output_code.c", 536, 2262)), "03output_code.c", 536, 2263)),";\n"), come_pop_stackframe(), __exception_result_var_b356);
            result_type_str_162 = come_decrement_ref_count2(result_type_str_162, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    (come_push_stackframe("03output_code.c", 539, 2267),__exception_result_var_b357=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_139, "03output_code.c", 539, 2265)), "03output_code.c", 539, 2266)),"{\n"), come_pop_stackframe(), __exception_result_var_b357);
    (come_push_stackframe("03output_code.c", 541, 2275),__exception_result_var_b359=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_139, "03output_code.c", 541, 2268)), "03output_code.c", 541, 2269)),(come_push_stackframe("03output_code.c", 541, 2274),__exception_result_var_b358=((char*)(right_value198=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 541, 2270)), "03output_code.c", 541, 2271))->mSourceHead, "03output_code.c", 541, 2272)), "03output_code.c", 541, 2273))))), come_pop_stackframe(), __exception_result_var_b358)), come_pop_stackframe(), __exception_result_var_b359);
    right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("03output_code.c", 542, 2283),__exception_result_var_b361=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_139, "03output_code.c", 542, 2276)), "03output_code.c", 542, 2277)),(come_push_stackframe("03output_code.c", 542, 2282),__exception_result_var_b360=((char*)(right_value199=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 542, 2278)), "03output_code.c", 542, 2279))->mSourceHead2, "03output_code.c", 542, 2280)), "03output_code.c", 542, 2281))))), come_pop_stackframe(), __exception_result_var_b360)), come_pop_stackframe(), __exception_result_var_b361);
    right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("03output_code.c", 543, 2291),__exception_result_var_b363=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_139, "03output_code.c", 543, 2284)), "03output_code.c", 543, 2285)),(come_push_stackframe("03output_code.c", 543, 2290),__exception_result_var_b362=((char*)(right_value200=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 543, 2286)), "03output_code.c", 543, 2287))->mSource, "03output_code.c", 543, 2288)), "03output_code.c", 543, 2289))))), come_pop_stackframe(), __exception_result_var_b362)), come_pop_stackframe(), __exception_result_var_b363);
    right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("03output_code.c", 545, 2294),__exception_result_var_b364=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_139, "03output_code.c", 545, 2292)), "03output_code.c", 545, 2293)),"}\n"), come_pop_stackframe(), __exception_result_var_b364);
    __result114__ = __result_obj__ = (come_push_stackframe("03output_code.c", 547, 2297),__exception_result_var_b365=((char*)(right_value201=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_139, "03output_code.c", 547, 2295)), "03output_code.c", 547, 2296))))), come_pop_stackframe(), __exception_result_var_b365);
    come_call_finalizer3(output_139,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result114__;
    come_call_finalizer3(output_139,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional199;
struct list_item$1charph* it_145;
int i_146;
_Bool _while_condtional18;
_Bool _if_conditional200;
char* __result109__;
char* default_value_147;
void* __exception_result_var_b298;
char* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_145, 0, sizeof(struct list_item$1charph*));
memset(&i_146, 0, sizeof(int));
memset(&default_value_147, 0, sizeof(char*));
                if(_if_conditional199=position<0,                _if_conditional199) {
                    position+=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 676, 2032)), "./neo-c.h", 676, 2033))->len;
                }
                it_145=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 679, 2034)), "./neo-c.h", 679, 2035))->head;
                i_146=0;
                while(_while_condtional18=it_145!=((void*)0),                _while_condtional18) {
                    if(_if_conditional200=position==i_146,                    _if_conditional200) {
                        __result109__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_145, "./neo-c.h", 683, 2036)), "./neo-c.h", 683, 2037))->item;
                        return __result109__;
                    }
                    it_145=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_145, "./neo-c.h", 685, 2038)), "./neo-c.h", 685, 2039))->next;
                    i_146++;
                }
                (come_push_stackframe("./neo-c.h", 690, 2040),__exception_result_var_b298=memset(&default_value_147,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b298);
                __result110__ = __result_obj__ = default_value_147;
                default_value_147 = come_decrement_ref_count2(default_value_147, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result110__;
                default_value_147 = come_decrement_ref_count2(default_value_147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__;
_Bool _if_conditional206;
struct list_item$1sNodeph* it_158;
int i_159;
_Bool _while_condtional19;
_Bool _if_conditional207;
struct sNode* __result111__;
struct sNode* default_value_160;
void* __exception_result_var_b329;
struct sNode* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_158, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_159, 0, sizeof(int));
memset(&default_value_160, 0, sizeof(struct sNode*));
                if(_if_conditional206=position<0,                _if_conditional206) {
                    position+=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 676, 2156)), "./neo-c.h", 676, 2157))->len;
                }
                it_158=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 679, 2158)), "./neo-c.h", 679, 2159))->head;
                i_159=0;
                while(_while_condtional19=it_158!=((void*)0),                _while_condtional19) {
                    if(_if_conditional207=position==i_159,                    _if_conditional207) {
                        __result111__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_158, "./neo-c.h", 683, 2160)), "./neo-c.h", 683, 2161))->item;
                        return __result111__;
                    }
                    it_158=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_158, "./neo-c.h", 685, 2162)), "./neo-c.h", 685, 2163))->next;
                    i_159++;
                }
                (come_push_stackframe("./neo-c.h", 690, 2164),__exception_result_var_b329=memset(&default_value_160,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b329);
                __result112__ = __result_obj__ = default_value_160;
                if(default_value_160) { default_value_160 = come_decrement_ref_count2(default_value_160, ((struct sNode*)default_value_160)->finalize, ((struct sNode*)default_value_160)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result112__;
                if(default_value_160) { default_value_160 = come_decrement_ref_count2(default_value_160, ((struct sNode*)default_value_160)->finalize, ((struct sNode*)default_value_160)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

char* header_function(struct sFun* fun, struct sInfo* info){
void* __result_obj__;
void* right_value202;
void* right_value203;
struct buffer* __exception_result_var_b366;
struct buffer* output_168;
_Bool _if_conditional211;
void* right_value204;
void* right_value205;
struct buffer* __exception_result_var_b367;
struct buffer* output2_169;
struct buffer* __exception_result_var_b368;
struct buffer* __exception_result_var_b369;
int i_170;
struct list$1sTypeph* o2_saved_171;
struct sType* __exception_result_var_b370;
struct sType* it_172;
_Bool __exception_result_var_b371;
struct sType* __exception_result_var_b372;
char* __exception_result_var_b373;
char* name_173;
void* right_value206;
char* __exception_result_var_b374;
char* str_174;
struct buffer* __exception_result_var_b375;
int __exception_result_var_b376;
_Bool _if_conditional212;
struct buffer* __exception_result_var_b377;
struct buffer* __exception_result_var_b378;
void* right_value207;
char* __exception_result_var_b379;
void* right_value208;
char* __exception_result_var_b380;
char* str_175;
struct buffer* __exception_result_var_b381;
struct buffer* __exception_result_var_b382;
int __exception_result_var_b383;
_Bool _if_conditional213;
struct sType* __exception_result_var_b384;
void* right_value209;
struct sType* base_result_type_176;
void* right_value210;
void* right_value211;
struct list$1sNodeph* __exception_result_var_b385;
struct list$1sNodeph* __dec_obj42;
void* right_value212;
char* __exception_result_var_b386;
char* result_type_str_177;
struct buffer* __exception_result_var_b387;
struct buffer* __exception_result_var_b388;
struct buffer* __exception_result_var_b389;
struct buffer* __exception_result_var_b390;
int i_178;
struct list$1sTypeph* o2_saved_179;
struct sType* __exception_result_var_b391;
struct sType* it_180;
_Bool __exception_result_var_b392;
struct sType* __exception_result_var_b393;
char* __exception_result_var_b394;
char* name_181;
void* right_value213;
char* __exception_result_var_b395;
char* str_182;
struct buffer* __exception_result_var_b396;
int __exception_result_var_b397;
_Bool _if_conditional214;
_Bool _if_conditional215;
struct buffer* __exception_result_var_b398;
struct buffer* __exception_result_var_b399;
struct sNode* __exception_result_var_b400;
struct sNode* node_183;
_Bool __exception_result_var_b401;
_Bool _if_conditional216;
void* right_value214;
char* __exception_result_var_b402;
char* __result115__;
void* right_value215;
struct CVALUE* __exception_result_var_b403;
struct CVALUE* cvalue_184;
void* right_value216;
char* __exception_result_var_b404;
struct buffer* __exception_result_var_b405;
void* right_value217;
char* __exception_result_var_b406;
char* result_type_str_185;
struct buffer* __exception_result_var_b407;
struct buffer* __exception_result_var_b408;
struct buffer* __exception_result_var_b409;
struct buffer* __exception_result_var_b410;
int i_186;
struct list$1sTypeph* o2_saved_187;
struct sType* __exception_result_var_b411;
struct sType* it_188;
_Bool __exception_result_var_b412;
struct sType* __exception_result_var_b413;
char* __exception_result_var_b414;
char* name_189;
void* right_value218;
char* __exception_result_var_b415;
char* str_190;
struct buffer* __exception_result_var_b416;
int __exception_result_var_b417;
_Bool _if_conditional217;
_Bool _if_conditional218;
struct buffer* __exception_result_var_b418;
struct buffer* __exception_result_var_b419;
struct buffer* __exception_result_var_b420;
void* right_value219;
char* __exception_result_var_b421;
char* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
right_value202 = (void*)0;
right_value203 = (void*)0;
memset(&output_168, 0, sizeof(struct buffer*));
right_value204 = (void*)0;
right_value205 = (void*)0;
memset(&output2_169, 0, sizeof(struct buffer*));
memset(&i_170, 0, sizeof(int));
memset(&o2_saved_171, 0, sizeof(struct list$1sTypeph*));
memset(&it_172, 0, sizeof(struct sType*));
memset(&name_173, 0, sizeof(char*));
right_value206 = (void*)0;
memset(&str_174, 0, sizeof(char*));
right_value207 = (void*)0;
right_value208 = (void*)0;
memset(&str_175, 0, sizeof(char*));
right_value209 = (void*)0;
memset(&base_result_type_176, 0, sizeof(struct sType*));
right_value210 = (void*)0;
right_value211 = (void*)0;
right_value212 = (void*)0;
memset(&result_type_str_177, 0, sizeof(char*));
memset(&i_178, 0, sizeof(int));
memset(&o2_saved_179, 0, sizeof(struct list$1sTypeph*));
memset(&it_180, 0, sizeof(struct sType*));
memset(&name_181, 0, sizeof(char*));
right_value213 = (void*)0;
memset(&str_182, 0, sizeof(char*));
memset(&node_183, 0, sizeof(struct sNode*));
right_value214 = (void*)0;
right_value215 = (void*)0;
memset(&cvalue_184, 0, sizeof(struct CVALUE*));
right_value216 = (void*)0;
right_value217 = (void*)0;
memset(&result_type_str_185, 0, sizeof(char*));
memset(&i_186, 0, sizeof(int));
memset(&o2_saved_187, 0, sizeof(struct list$1sTypeph*));
memset(&it_188, 0, sizeof(struct sType*));
memset(&name_189, 0, sizeof(char*));
right_value218 = (void*)0;
memset(&str_190, 0, sizeof(char*));
right_value219 = (void*)0;
    output_168=(struct buffer*)come_increment_ref_count((come_push_stackframe("03output_code.c", 552, 2299),__exception_result_var_b366=((struct buffer*)(right_value203=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value202=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 552, "buffer"))), "03output_code.c", 552, 2298)))))), come_pop_stackframe(), __exception_result_var_b366));
    come_call_finalizer3(right_value202,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value203,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    if(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 554, 2300)), "03output_code.c", 554, 2301))->mResultType, "03output_code.c", 554, 2302)), "03output_code.c", 554, 2303))->mResultType) {
        output2_169=(struct buffer*)come_increment_ref_count((come_push_stackframe("03output_code.c", 555, 2305),__exception_result_var_b367=((struct buffer*)(right_value205=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value204=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 555, "buffer"))), "03output_code.c", 555, 2304)))))), come_pop_stackframe(), __exception_result_var_b367));
        come_call_finalizer3(right_value204,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value205,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("03output_code.c", 557, 2310),__exception_result_var_b368=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output2_169, "03output_code.c", 557, 2306)), "03output_code.c", 557, 2307)),((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 557, 2308)), "03output_code.c", 557, 2309))->mName), come_pop_stackframe(), __exception_result_var_b368);
        (come_push_stackframe("03output_code.c", 558, 2313),__exception_result_var_b369=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output2_169, "03output_code.c", 558, 2311)), "03output_code.c", 558, 2312)),"("), come_pop_stackframe(), __exception_result_var_b369);
        i_170=0;
        for(        o2_saved_171=(struct list$1sTypeph*)come_increment_ref_count((((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 561, 2314)), "03output_code.c", 561, 2315))->mParamTypes)),it_172=(come_push_stackframe("03output_code.c", 561, 2318),__exception_result_var_b370=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_171), "03output_code.c", 561, 2316)), "03output_code.c", 561, 2317))), come_pop_stackframe(), __exception_result_var_b370);        !(come_push_stackframe("03output_code.c", 561, 2321),__exception_result_var_b371=list$1sTypeph_end(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_171), "03output_code.c", 561, 2319)), "03output_code.c", 561, 2320))), come_pop_stackframe(), __exception_result_var_b371);        it_172=(come_push_stackframe("03output_code.c", 561, 2324),__exception_result_var_b372=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_171), "03output_code.c", 561, 2322)), "03output_code.c", 561, 2323))), come_pop_stackframe(), __exception_result_var_b372)        ){
            name_173=(come_push_stackframe("03output_code.c", 562, 2329),__exception_result_var_b373=((char*)come_null_check(list$1charphp_operator_load_element(((struct list$1charph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 562, 2325)), "03output_code.c", 562, 2326))->mParamNames, "03output_code.c", 562, 2327)),i_170), "03output_code.c", 562, 2328)), come_pop_stackframe(), __exception_result_var_b373);
            str_174=(char*)come_increment_ref_count((come_push_stackframe("03output_code.c", 564, 2330),__exception_result_var_b374=((char*)(right_value206=make_define_var(it_172,name_173,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b374));
            right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("03output_code.c", 565, 2333),__exception_result_var_b375=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output2_169, "03output_code.c", 565, 2331)), "03output_code.c", 565, 2332)),str_174), come_pop_stackframe(), __exception_result_var_b375);
            if(_if_conditional212=i_170!=(come_push_stackframe("03output_code.c", 567, 2338),__exception_result_var_b376=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 567, 2334)), "03output_code.c", 567, 2335))->mParamTypes, "03output_code.c", 567, 2336)), "03output_code.c", 567, 2337))), come_pop_stackframe(), __exception_result_var_b376)-1,            _if_conditional212) {
                (come_push_stackframe("03output_code.c", 568, 2341),__exception_result_var_b377=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output2_169, "03output_code.c", 568, 2339)), "03output_code.c", 568, 2340)),", "), come_pop_stackframe(), __exception_result_var_b377);
            }
            i_170++;
            str_174 = come_decrement_ref_count2(str_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_171,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        (come_push_stackframe("03output_code.c", 572, 2344),__exception_result_var_b378=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output2_169, "03output_code.c", 572, 2342)), "03output_code.c", 572, 2343)),")"), come_pop_stackframe(), __exception_result_var_b378);
        str_175=(char*)come_increment_ref_count((come_push_stackframe("03output_code.c", 574, 2350),__exception_result_var_b380=((char*)(right_value208=make_lambda_type_name_string(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 574, 2345)), "03output_code.c", 574, 2346))->mResultType,(come_push_stackframe("03output_code.c", 574, 2349),__exception_result_var_b379=((char*)(right_value207=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output2_169, "03output_code.c", 574, 2347)), "03output_code.c", 574, 2348))))), come_pop_stackframe(), __exception_result_var_b379),info))), come_pop_stackframe(), __exception_result_var_b380));
        right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("03output_code.c", 576, 2353),__exception_result_var_b381=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_168, "03output_code.c", 576, 2351)), "03output_code.c", 576, 2352)),str_175), come_pop_stackframe(), __exception_result_var_b381);
        (come_push_stackframe("03output_code.c", 577, 2356),__exception_result_var_b382=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_168, "03output_code.c", 577, 2354)), "03output_code.c", 577, 2355)),";\n"), come_pop_stackframe(), __exception_result_var_b382);
        come_call_finalizer3(output2_169,buffer_finalize, 0, 0, 0, 0, (void*)0);
        str_175 = come_decrement_ref_count2(str_175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional213=(come_push_stackframe("03output_code.c", 579, 2363),__exception_result_var_b383=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 579, 2357)), "03output_code.c", 579, 2358))->mResultType, "03output_code.c", 579, 2359)), "03output_code.c", 579, 2360))->mArrayNum, "03output_code.c", 579, 2361)), "03output_code.c", 579, 2362))), come_pop_stackframe(), __exception_result_var_b383)>0,        _if_conditional213) {
            base_result_type_176=(struct sType*)come_increment_ref_count(((struct sType*)(right_value209=(come_push_stackframe("03output_code.c", 580, 2366),__exception_result_var_b384=sType_clone(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 580, 2364)), "03output_code.c", 580, 2365))->mResultType), come_pop_stackframe(), __exception_result_var_b384))));
            come_call_finalizer3(right_value209,sType_finalize, 0, 1, 0, 0, __result_obj__);
            __dec_obj42=((struct sType*)come_null_check(((struct sType*)come_null_check(base_result_type_176, "03output_code.c", 581, 2367)), "03output_code.c", 581, 2368))->mArrayNum;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(base_result_type_176, "03output_code.c", 581, 2367)), "03output_code.c", 581, 2368))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("03output_code.c", 581, 2370),__exception_result_var_b385=((struct list$1sNodeph*)(right_value211=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value210=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "03output_code.c", 581, "list$1sNodeph"))), "03output_code.c", 581, 2369)))))), come_pop_stackframe(), __exception_result_var_b385));
            come_call_finalizer3(__dec_obj42,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value210,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value211,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            result_type_str_177=(char*)come_increment_ref_count((come_push_stackframe("03output_code.c", 583, 2371),__exception_result_var_b386=((char*)(right_value212=make_type_name_string(base_result_type_176,(_Bool)1,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b386));
            right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("03output_code.c", 585, 2374),__exception_result_var_b387=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_168, "03output_code.c", 585, 2372)), "03output_code.c", 585, 2373)),result_type_str_177), come_pop_stackframe(), __exception_result_var_b387);
            (come_push_stackframe("03output_code.c", 586, 2377),__exception_result_var_b388=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_168, "03output_code.c", 586, 2375)), "03output_code.c", 586, 2376))," (*"), come_pop_stackframe(), __exception_result_var_b388);
            (come_push_stackframe("03output_code.c", 588, 2382),__exception_result_var_b389=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_168, "03output_code.c", 588, 2378)), "03output_code.c", 588, 2379)),((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 588, 2380)), "03output_code.c", 588, 2381))->mName), come_pop_stackframe(), __exception_result_var_b389);
            (come_push_stackframe("03output_code.c", 589, 2385),__exception_result_var_b390=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_168, "03output_code.c", 589, 2383)), "03output_code.c", 589, 2384)),"("), come_pop_stackframe(), __exception_result_var_b390);
            i_178=0;
            for(            o2_saved_179=(struct list$1sTypeph*)come_increment_ref_count((((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 592, 2386)), "03output_code.c", 592, 2387))->mParamTypes)),it_180=(come_push_stackframe("03output_code.c", 592, 2390),__exception_result_var_b391=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_179), "03output_code.c", 592, 2388)), "03output_code.c", 592, 2389))), come_pop_stackframe(), __exception_result_var_b391);            !(come_push_stackframe("03output_code.c", 592, 2393),__exception_result_var_b392=list$1sTypeph_end(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_179), "03output_code.c", 592, 2391)), "03output_code.c", 592, 2392))), come_pop_stackframe(), __exception_result_var_b392);            it_180=(come_push_stackframe("03output_code.c", 592, 2396),__exception_result_var_b393=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_179), "03output_code.c", 592, 2394)), "03output_code.c", 592, 2395))), come_pop_stackframe(), __exception_result_var_b393)            ){
                name_181=(come_push_stackframe("03output_code.c", 593, 2401),__exception_result_var_b394=((char*)come_null_check(list$1charphp_operator_load_element(((struct list$1charph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 593, 2397)), "03output_code.c", 593, 2398))->mParamNames, "03output_code.c", 593, 2399)),i_178), "03output_code.c", 593, 2400)), come_pop_stackframe(), __exception_result_var_b394);
                str_182=(char*)come_increment_ref_count((come_push_stackframe("03output_code.c", 595, 2402),__exception_result_var_b395=((char*)(right_value213=make_define_var(it_180,name_181,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b395));
                right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("03output_code.c", 596, 2405),__exception_result_var_b396=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_168, "03output_code.c", 596, 2403)), "03output_code.c", 596, 2404)),str_182), come_pop_stackframe(), __exception_result_var_b396);
                if(_if_conditional214=i_178==(come_push_stackframe("03output_code.c", 598, 2410),__exception_result_var_b397=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 598, 2406)), "03output_code.c", 598, 2407))->mParamTypes, "03output_code.c", 598, 2408)), "03output_code.c", 598, 2409))), come_pop_stackframe(), __exception_result_var_b397)-1,                _if_conditional214) {
                    if(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 599, 2411)), "03output_code.c", 599, 2412))->mVarArgs) {
                        (come_push_stackframe("03output_code.c", 600, 2415),__exception_result_var_b398=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_168, "03output_code.c", 600, 2413)), "03output_code.c", 600, 2414)),", ..."), come_pop_stackframe(), __exception_result_var_b398);
                    }
                }
                else {
                    (come_push_stackframe("03output_code.c", 604, 2418),__exception_result_var_b399=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_168, "03output_code.c", 604, 2416)), "03output_code.c", 604, 2417)),", "), come_pop_stackframe(), __exception_result_var_b399);
                }
                i_178++;
                str_182 = come_decrement_ref_count2(str_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_179,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            node_183=(come_push_stackframe("03output_code.c", 609, 2425),__exception_result_var_b400=((struct sNode*)come_null_check(list$1sNodephp_operator_load_element(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 609, 2419)), "03output_code.c", 609, 2420))->mResultType, "03output_code.c", 609, 2421)), "03output_code.c", 609, 2422))->mArrayNum, "03output_code.c", 609, 2423)),0), "03output_code.c", 609, 2424)), come_pop_stackframe(), __exception_result_var_b400);
            if(_if_conditional216=!(come_push_stackframe("03output_code.c", 610, 2426),__exception_result_var_b401=node_compile(node_183,info), come_pop_stackframe(), __exception_result_var_b401),            _if_conditional216) {
                (come_push_stackframe("03output_code.c", 611,2427),err_msg(info,"invalid array number"),come_pop_stackframe());
                __result115__ = __result_obj__ = (come_push_stackframe("03output_code.c", 612, 2428),__exception_result_var_b402=((char*)(right_value214=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b402);
                come_call_finalizer3(base_result_type_176,sType_finalize, 0, 0, 0, 0, (void*)0);
                result_type_str_177 = come_decrement_ref_count2(result_type_str_177, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(output_168,buffer_finalize, 0, 0, 0, 0, (void*)0);
                right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result115__;
            }
            cvalue_184=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("03output_code.c", 614, 2429),__exception_result_var_b403=((struct CVALUE*)(right_value215=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b403));
            come_call_finalizer3(right_value215,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("03output_code.c", 615,2430),dec_stack_ptr(1,info),come_pop_stackframe());
            (come_push_stackframe("03output_code.c", 617, 2436),__exception_result_var_b405=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_168, "03output_code.c", 617, 2431)), "03output_code.c", 617, 2432)),(come_push_stackframe("03output_code.c", 617, 2435),__exception_result_var_b404=((char*)(right_value216=xsprintf("))[%s];\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(cvalue_184, "03output_code.c", 617, 2433)), "03output_code.c", 617, 2434))->c_value))), come_pop_stackframe(), __exception_result_var_b404)), come_pop_stackframe(), __exception_result_var_b405);
            right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(base_result_type_176,sType_finalize, 0, 0, 0, 0, (void*)0);
            result_type_str_177 = come_decrement_ref_count2(result_type_str_177, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(cvalue_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            result_type_str_185=(char*)come_increment_ref_count((come_push_stackframe("03output_code.c", 620, 2439),__exception_result_var_b406=((char*)(right_value217=make_type_name_string(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 620, 2437)), "03output_code.c", 620, 2438))->mResultType,(_Bool)1,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b406));
            right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("03output_code.c", 622, 2442),__exception_result_var_b407=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_168, "03output_code.c", 622, 2440)), "03output_code.c", 622, 2441)),result_type_str_185), come_pop_stackframe(), __exception_result_var_b407);
            (come_push_stackframe("03output_code.c", 623, 2445),__exception_result_var_b408=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_168, "03output_code.c", 623, 2443)), "03output_code.c", 623, 2444))," "), come_pop_stackframe(), __exception_result_var_b408);
            (come_push_stackframe("03output_code.c", 625, 2450),__exception_result_var_b409=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_168, "03output_code.c", 625, 2446)), "03output_code.c", 625, 2447)),((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 625, 2448)), "03output_code.c", 625, 2449))->mName), come_pop_stackframe(), __exception_result_var_b409);
            (come_push_stackframe("03output_code.c", 626, 2453),__exception_result_var_b410=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_168, "03output_code.c", 626, 2451)), "03output_code.c", 626, 2452)),"("), come_pop_stackframe(), __exception_result_var_b410);
            i_186=0;
            for(            o2_saved_187=(struct list$1sTypeph*)come_increment_ref_count((((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 629, 2454)), "03output_code.c", 629, 2455))->mParamTypes)),it_188=(come_push_stackframe("03output_code.c", 629, 2458),__exception_result_var_b411=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_187), "03output_code.c", 629, 2456)), "03output_code.c", 629, 2457))), come_pop_stackframe(), __exception_result_var_b411);            !(come_push_stackframe("03output_code.c", 629, 2461),__exception_result_var_b412=list$1sTypeph_end(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_187), "03output_code.c", 629, 2459)), "03output_code.c", 629, 2460))), come_pop_stackframe(), __exception_result_var_b412);            it_188=(come_push_stackframe("03output_code.c", 629, 2464),__exception_result_var_b413=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_187), "03output_code.c", 629, 2462)), "03output_code.c", 629, 2463))), come_pop_stackframe(), __exception_result_var_b413)            ){
                name_189=(come_push_stackframe("03output_code.c", 630, 2469),__exception_result_var_b414=((char*)come_null_check(list$1charphp_operator_load_element(((struct list$1charph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 630, 2465)), "03output_code.c", 630, 2466))->mParamNames, "03output_code.c", 630, 2467)),i_186), "03output_code.c", 630, 2468)), come_pop_stackframe(), __exception_result_var_b414);
                str_190=(char*)come_increment_ref_count((come_push_stackframe("03output_code.c", 632, 2470),__exception_result_var_b415=((char*)(right_value218=make_define_var(it_188,name_189,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b415));
                right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("03output_code.c", 633, 2473),__exception_result_var_b416=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_168, "03output_code.c", 633, 2471)), "03output_code.c", 633, 2472)),str_190), come_pop_stackframe(), __exception_result_var_b416);
                if(_if_conditional217=i_186==(come_push_stackframe("03output_code.c", 635, 2478),__exception_result_var_b417=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 635, 2474)), "03output_code.c", 635, 2475))->mParamTypes, "03output_code.c", 635, 2476)), "03output_code.c", 635, 2477))), come_pop_stackframe(), __exception_result_var_b417)-1,                _if_conditional217) {
                    if(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun, "03output_code.c", 636, 2479)), "03output_code.c", 636, 2480))->mVarArgs) {
                        (come_push_stackframe("03output_code.c", 637, 2483),__exception_result_var_b418=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_168, "03output_code.c", 637, 2481)), "03output_code.c", 637, 2482)),", ..."), come_pop_stackframe(), __exception_result_var_b418);
                    }
                }
                else {
                    (come_push_stackframe("03output_code.c", 641, 2486),__exception_result_var_b419=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_168, "03output_code.c", 641, 2484)), "03output_code.c", 641, 2485)),", "), come_pop_stackframe(), __exception_result_var_b419);
                }
                i_186++;
                str_190 = come_decrement_ref_count2(str_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_187,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            (come_push_stackframe("03output_code.c", 646, 2489),__exception_result_var_b420=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_168, "03output_code.c", 646, 2487)), "03output_code.c", 646, 2488)),");\n"), come_pop_stackframe(), __exception_result_var_b420);
            result_type_str_185 = come_decrement_ref_count2(result_type_str_185, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result116__ = __result_obj__ = (come_push_stackframe("03output_code.c", 649, 2492),__exception_result_var_b421=((char*)(right_value219=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_168, "03output_code.c", 649, 2490)), "03output_code.c", 649, 2491))))), come_pop_stackframe(), __exception_result_var_b421);
    come_call_finalizer3(output_168,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result116__;
    come_call_finalizer3(output_168,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value220;
void* right_value221;
struct buffer* __exception_result_var_b422;
struct buffer* output_191;
void* right_value222;
char* __exception_result_var_b423;
char* result_type_str_192;
struct buffer* __exception_result_var_b424;
struct buffer* __exception_result_var_b425;
struct buffer* __exception_result_var_b426;
struct buffer* __exception_result_var_b427;
int i_193;
struct list$1sTypeph* o2_saved_194;
struct sType* __exception_result_var_b428;
struct sType* it_195;
_Bool __exception_result_var_b429;
struct sType* __exception_result_var_b430;
char* __exception_result_var_b431;
char* name_196;
void* right_value223;
char* __exception_result_var_b432;
char* str_197;
struct buffer* __exception_result_var_b433;
int __exception_result_var_b434;
_Bool _if_conditional219;
_Bool _if_conditional220;
struct buffer* __exception_result_var_b435;
struct buffer* __exception_result_var_b436;
struct buffer* __exception_result_var_b437;
void* right_value224;
char* __exception_result_var_b438;
char* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value220 = (void*)0;
right_value221 = (void*)0;
memset(&output_191, 0, sizeof(struct buffer*));
right_value222 = (void*)0;
memset(&result_type_str_192, 0, sizeof(char*));
memset(&i_193, 0, sizeof(int));
memset(&o2_saved_194, 0, sizeof(struct list$1sTypeph*));
memset(&it_195, 0, sizeof(struct sType*));
memset(&name_196, 0, sizeof(char*));
right_value223 = (void*)0;
memset(&str_197, 0, sizeof(char*));
right_value224 = (void*)0;
    output_191=(struct buffer*)come_increment_ref_count((come_push_stackframe("03output_code.c", 654, 2494),__exception_result_var_b422=((struct buffer*)(right_value221=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value220=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 654, "buffer"))), "03output_code.c", 654, 2493)))))), come_pop_stackframe(), __exception_result_var_b422));
    come_call_finalizer3(right_value220,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value221,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    result_type_str_192=(char*)come_increment_ref_count((come_push_stackframe("03output_code.c", 656, 2499),__exception_result_var_b423=((char*)(right_value222=make_type_name_string(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(lambda_type, "03output_code.c", 656, 2495)), "03output_code.c", 656, 2496))->mResultType, "03output_code.c", 656, 2497)), "03output_code.c", 656, 2498))->v1,(_Bool)1,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b423));
    right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("03output_code.c", 658, 2502),__exception_result_var_b424=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_191, "03output_code.c", 658, 2500)), "03output_code.c", 658, 2501)),result_type_str_192), come_pop_stackframe(), __exception_result_var_b424);
    (come_push_stackframe("03output_code.c", 659, 2505),__exception_result_var_b425=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_191, "03output_code.c", 659, 2503)), "03output_code.c", 659, 2504))," "), come_pop_stackframe(), __exception_result_var_b425);
    (come_push_stackframe("03output_code.c", 661, 2508),__exception_result_var_b426=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_191, "03output_code.c", 661, 2506)), "03output_code.c", 661, 2507)),name), come_pop_stackframe(), __exception_result_var_b426);
    (come_push_stackframe("03output_code.c", 662, 2511),__exception_result_var_b427=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_191, "03output_code.c", 662, 2509)), "03output_code.c", 662, 2510)),"("), come_pop_stackframe(), __exception_result_var_b427);
    i_193=0;
    for(    o2_saved_194=(struct list$1sTypeph*)come_increment_ref_count((((struct sType*)come_null_check(((struct sType*)come_null_check(lambda_type, "03output_code.c", 665, 2512)), "03output_code.c", 665, 2513))->mParamTypes)),it_195=(come_push_stackframe("03output_code.c", 665, 2516),__exception_result_var_b428=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_194), "03output_code.c", 665, 2514)), "03output_code.c", 665, 2515))), come_pop_stackframe(), __exception_result_var_b428);    !(come_push_stackframe("03output_code.c", 665, 2519),__exception_result_var_b429=list$1sTypeph_end(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_194), "03output_code.c", 665, 2517)), "03output_code.c", 665, 2518))), come_pop_stackframe(), __exception_result_var_b429);    it_195=(come_push_stackframe("03output_code.c", 665, 2522),__exception_result_var_b430=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_194), "03output_code.c", 665, 2520)), "03output_code.c", 665, 2521))), come_pop_stackframe(), __exception_result_var_b430)    ){
        name_196=(come_push_stackframe("03output_code.c", 666, 2527),__exception_result_var_b431=((char*)come_null_check(list$1charphp_operator_load_element(((struct list$1charph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(lambda_type, "03output_code.c", 666, 2523)), "03output_code.c", 666, 2524))->mParamNames, "03output_code.c", 666, 2525)),i_193), "03output_code.c", 666, 2526)), come_pop_stackframe(), __exception_result_var_b431);
        str_197=(char*)come_increment_ref_count((come_push_stackframe("03output_code.c", 668, 2528),__exception_result_var_b432=((char*)(right_value223=make_define_var(it_195,name_196,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b432));
        right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("03output_code.c", 669, 2531),__exception_result_var_b433=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_191, "03output_code.c", 669, 2529)), "03output_code.c", 669, 2530)),str_197), come_pop_stackframe(), __exception_result_var_b433);
        if(_if_conditional219=i_193==(come_push_stackframe("03output_code.c", 671, 2536),__exception_result_var_b434=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(lambda_type, "03output_code.c", 671, 2532)), "03output_code.c", 671, 2533))->mParamTypes, "03output_code.c", 671, 2534)), "03output_code.c", 671, 2535))), come_pop_stackframe(), __exception_result_var_b434)-1,        _if_conditional219) {
            if(((struct sType*)come_null_check(((struct sType*)come_null_check(lambda_type, "03output_code.c", 672, 2537)), "03output_code.c", 672, 2538))->mVarArgs) {
                (come_push_stackframe("03output_code.c", 673, 2541),__exception_result_var_b435=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_191, "03output_code.c", 673, 2539)), "03output_code.c", 673, 2540)),", ..."), come_pop_stackframe(), __exception_result_var_b435);
            }
        }
        else {
            (come_push_stackframe("03output_code.c", 677, 2544),__exception_result_var_b436=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_191, "03output_code.c", 677, 2542)), "03output_code.c", 677, 2543)),", "), come_pop_stackframe(), __exception_result_var_b436);
        }
        i_193++;
        str_197 = come_decrement_ref_count2(str_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_194,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    (come_push_stackframe("03output_code.c", 682, 2547),__exception_result_var_b437=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_191, "03output_code.c", 682, 2545)), "03output_code.c", 682, 2546)),");\n"), come_pop_stackframe(), __exception_result_var_b437);
    __result117__ = __result_obj__ = (come_push_stackframe("03output_code.c", 684, 2550),__exception_result_var_b438=((char*)(right_value224=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(output_191, "03output_code.c", 684, 2548)), "03output_code.c", 684, 2549))))), come_pop_stackframe(), __exception_result_var_b438);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(output_191,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_type_str_192 = come_decrement_ref_count2(result_type_str_192, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result117__;
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(output_191,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_type_str_192 = come_decrement_ref_count2(result_type_str_192, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void add_come_code(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional221;
char* msg2_198;
va_list args_199;
int __exception_result_var_b439;
int len_200;
_Bool _if_conditional222;
int i_201;
struct buffer* __exception_result_var_b440;
void* right_value225;
char* __exception_result_var_b441;
struct buffer* __exception_result_var_b442;
void* right_value226;
char* __exception_result_var_b443;
struct buffer* __exception_result_var_b444;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_198, 0, sizeof(char*));
memset(&args_199, 0, sizeof(va_list));
memset(&len_200, 0, sizeof(int));
memset(&i_201, 0, sizeof(int));
right_value225 = (void*)0;
right_value226 = (void*)0;
    if(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 690, 2551)), "03output_code.c", 690, 2552))->no_output_come_code) {
        return;
    }
    (come_push_stackframe("03output_code.c", 696,2553),__builtin_va_start(args_199,msg),come_pop_stackframe());
    len_200=(come_push_stackframe("03output_code.c", 697, 2554),__exception_result_var_b439=vasprintf(&msg2_198,msg,args_199), come_pop_stackframe(), __exception_result_var_b439);
    (come_push_stackframe("03output_code.c", 698,2555),__builtin_va_end(args_199),come_pop_stackframe());
    if(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 700, 2556)), "03output_code.c", 700, 2557))->come_fun) {
        for(        i_201=0;        i_201<((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 702, 2558)), "03output_code.c", 702, 2559))->block_level;        i_201++        ){
            (come_push_stackframe("03output_code.c", 703, 2566),__exception_result_var_b440=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 703, 2560)), "03output_code.c", 703, 2561))->come_fun, "03output_code.c", 703, 2562)), "03output_code.c", 703, 2563))->mSource, "03output_code.c", 703, 2564)), "03output_code.c", 703, 2565)),"    "), come_pop_stackframe(), __exception_result_var_b440);
        }
        (come_push_stackframe("03output_code.c", 706, 2574),__exception_result_var_b442=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 706, 2567)), "03output_code.c", 706, 2568))->come_fun, "03output_code.c", 706, 2569)), "03output_code.c", 706, 2570))->mSource, "03output_code.c", 706, 2571)), "03output_code.c", 706, 2572)),(come_push_stackframe("03output_code.c", 706, 2573),__exception_result_var_b441=((char*)(right_value225=xsprintf("%s",msg2_198))), come_pop_stackframe(), __exception_result_var_b441)), come_pop_stackframe(), __exception_result_var_b442);
        right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        (come_push_stackframe("03output_code.c", 709, 2582),__exception_result_var_b444=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 709, 2575)), "03output_code.c", 709, 2576))->module, "03output_code.c", 709, 2577)), "03output_code.c", 709, 2578))->mSourceHead, "03output_code.c", 709, 2579)), "03output_code.c", 709, 2580)),(come_push_stackframe("03output_code.c", 709, 2581),__exception_result_var_b443=((char*)(right_value226=xsprintf("%s",msg2_198))), come_pop_stackframe(), __exception_result_var_b443)), come_pop_stackframe(), __exception_result_var_b444);
        right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    (come_push_stackframe("03output_code.c", 712,2583),free(msg2_198),come_pop_stackframe());
    come_call_finalizer3((&args_199),va_list_finalize, 1, 0, 0, 0, (void*)0);
}

static void va_list_finalize(va_list self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional223;
char* msg2_202;
va_list args_203;
int __exception_result_var_b445;
int len_204;
void* right_value227;
char* __exception_result_var_b446;
struct buffer* __exception_result_var_b447;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_202, 0, sizeof(char*));
memset(&args_203, 0, sizeof(va_list));
memset(&len_204, 0, sizeof(int));
right_value227 = (void*)0;
    if(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 717, 2584)), "03output_code.c", 717, 2585))->no_output_come_code) {
        return;
    }
    (come_push_stackframe("03output_code.c", 723,2586),__builtin_va_start(args_203,msg),come_pop_stackframe());
    len_204=(come_push_stackframe("03output_code.c", 724, 2587),__exception_result_var_b445=vasprintf(&msg2_202,msg,args_203), come_pop_stackframe(), __exception_result_var_b445);
    (come_push_stackframe("03output_code.c", 725,2588),__builtin_va_end(args_203),come_pop_stackframe());
    (come_push_stackframe("03output_code.c", 727, 2596),__exception_result_var_b447=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 727, 2589)), "03output_code.c", 727, 2590))->module, "03output_code.c", 727, 2591)), "03output_code.c", 727, 2592))->mSourceHead, "03output_code.c", 727, 2593)), "03output_code.c", 727, 2594)),(come_push_stackframe("03output_code.c", 727, 2595),__exception_result_var_b446=((char*)(right_value227=xsprintf("%s",msg2_202))), come_pop_stackframe(), __exception_result_var_b446)), come_pop_stackframe(), __exception_result_var_b447);
    right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("03output_code.c", 729,2597),free(msg2_202),come_pop_stackframe());
    come_call_finalizer3((&args_203),va_list_finalize, 1, 0, 0, 0, (void*)0);
}

void add_come_code_at_source_head2(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional224;
char* msg2_205;
va_list args_206;
int __exception_result_var_b448;
int len_207;
void* right_value228;
char* __exception_result_var_b449;
struct buffer* __exception_result_var_b450;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_205, 0, sizeof(char*));
memset(&args_206, 0, sizeof(va_list));
memset(&len_207, 0, sizeof(int));
right_value228 = (void*)0;
    if(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 734, 2598)), "03output_code.c", 734, 2599))->no_output_come_code) {
        return;
    }
    (come_push_stackframe("03output_code.c", 740,2600),__builtin_va_start(args_206,msg),come_pop_stackframe());
    len_207=(come_push_stackframe("03output_code.c", 741, 2601),__exception_result_var_b448=vasprintf(&msg2_205,msg,args_206), come_pop_stackframe(), __exception_result_var_b448);
    (come_push_stackframe("03output_code.c", 742,2602),__builtin_va_end(args_206),come_pop_stackframe());
    (come_push_stackframe("03output_code.c", 744, 2610),__exception_result_var_b450=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 744, 2603)), "03output_code.c", 744, 2604))->module, "03output_code.c", 744, 2605)), "03output_code.c", 744, 2606))->mSourceHead2, "03output_code.c", 744, 2607)), "03output_code.c", 744, 2608)),(come_push_stackframe("03output_code.c", 744, 2609),__exception_result_var_b449=((char*)(right_value228=xsprintf("%s",msg2_205))), come_pop_stackframe(), __exception_result_var_b449)), come_pop_stackframe(), __exception_result_var_b450);
    right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("03output_code.c", 746,2611),free(msg2_205),come_pop_stackframe());
    come_call_finalizer3((&args_206),va_list_finalize, 1, 0, 0, 0, (void*)0);
}

void add_come_code_at_come_header(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional225;
_Bool __exception_result_var_b451;
_Bool _if_conditional226;
char* msg2_208;
va_list args_209;
int __exception_result_var_b452;
int len_210;
void* right_value229;
char* __exception_result_var_b453;
struct buffer* __exception_result_var_b454;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_208, 0, sizeof(char*));
memset(&args_209, 0, sizeof(va_list));
memset(&len_210, 0, sizeof(int));
right_value229 = (void*)0;
    if(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 751, 2612)), "03output_code.c", 751, 2613))->no_output_come_code) {
        return;
    }
    if(_if_conditional226=(come_push_stackframe("03output_code.c", 754, 2618),__exception_result_var_b451=string_operator_equals(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 754, 2614)), "03output_code.c", 754, 2615))->sname,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 754, 2616)), "03output_code.c", 754, 2617))->base_sname), come_pop_stackframe(), __exception_result_var_b451),    _if_conditional226) {
        (come_push_stackframe("03output_code.c", 758,2619),__builtin_va_start(args_209,msg),come_pop_stackframe());
        len_210=(come_push_stackframe("03output_code.c", 759, 2620),__exception_result_var_b452=vasprintf(&msg2_208,msg,args_209), come_pop_stackframe(), __exception_result_var_b452);
        (come_push_stackframe("03output_code.c", 760,2621),__builtin_va_end(args_209),come_pop_stackframe());
        (come_push_stackframe("03output_code.c", 762, 2629),__exception_result_var_b454=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 762, 2622)), "03output_code.c", 762, 2623))->module, "03output_code.c", 762, 2624)), "03output_code.c", 762, 2625))->mHeader, "03output_code.c", 762, 2626)), "03output_code.c", 762, 2627)),(come_push_stackframe("03output_code.c", 762, 2628),__exception_result_var_b453=((char*)(right_value229=xsprintf("%s",msg2_208))), come_pop_stackframe(), __exception_result_var_b453)), come_pop_stackframe(), __exception_result_var_b454);
        right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("03output_code.c", 764,2630),free(msg2_208),come_pop_stackframe());
        come_call_finalizer3((&args_209),va_list_finalize, 1, 0, 0, 0, (void*)0);
    }
}

int transpile_v3(struct sInfo* info){
void* __result_obj__;
int __result118__;
memset(&__result_obj__, 0, sizeof(void*));
    __result118__ = 0;
    return __result118__;
}

_Bool output_source_file_v3(struct sInfo* info){
void* __result_obj__;
void* right_value230;
struct sFun* __exception_result_var_b458;
_Bool main_module_211;
void* right_value231;
char* __exception_result_var_b459;
char* output_file_name_215;
struct _IO_FILE* __exception_result_var_b460;
struct _IO_FILE* f_216;
_Bool _and_conditional1;
_Bool __exception_result_var_b461;
int __exception_result_var_b462;
void* right_value232;
char* __exception_result_var_b463;
int __exception_result_var_b464;
int __exception_result_var_b465;
_Bool _if_conditional246;
void* right_value233;
char* __exception_result_var_b466;
int __exception_result_var_b467;
int __exception_result_var_b468;
struct map$2charphsFunph* o2_saved_217;
char* __exception_result_var_b471;
char* it_220;
_Bool __exception_result_var_b472;
char* __exception_result_var_b475;
void* right_value234;
char* __exception_result_var_b476;
struct sFun* __exception_result_var_b477;
struct sFun* it2_223;
void* right_value235;
char* __exception_result_var_b478;
char* header_224;
_Bool _if_conditional251;
int __exception_result_var_b479;
_Bool _if_conditional252;
_Bool _if_conditional253;
int __exception_result_var_b480;
_Bool _if_conditional254;
_Bool __exception_result_var_b481;
_Bool __exception_result_var_b482;
_Bool _if_conditional255;
int __exception_result_var_b483;
int __exception_result_var_b484;
struct map$2charphsFunph* o2_saved_229;
char* __exception_result_var_b485;
char* it_230;
_Bool __exception_result_var_b486;
char* __exception_result_var_b487;
void* right_value236;
char* __exception_result_var_b488;
struct sFun* __exception_result_var_b489;
struct sFun* it2_231;
void* right_value237;
char* __exception_result_var_b490;
char* header_232;
_Bool _if_conditional260;
void* right_value238;
char* __exception_result_var_b491;
char* output_233;
int __exception_result_var_b492;
_Bool _if_conditional261;
void* right_value239;
char* __exception_result_var_b493;
char* output_234;
int __exception_result_var_b494;
_Bool _if_conditional262;
_Bool __exception_result_var_b495;
_Bool __exception_result_var_b496;
_Bool _if_conditional263;
int __exception_result_var_b497;
int __exception_result_var_b498;
struct map$2charphsFunph* o2_saved_235;
char* __exception_result_var_b499;
char* it_236;
_Bool __exception_result_var_b500;
char* __exception_result_var_b501;
struct sFun* __exception_result_var_b502;
struct sFun* it2_237;
_Bool _if_conditional264;
void* right_value240;
char* __exception_result_var_b503;
char* output_238;
_Bool _if_conditional265;
_Bool _if_conditional266;
int __exception_result_var_b504;
_Bool _if_conditional267;
_Bool _if_conditional268;
int __exception_result_var_b505;
int __exception_result_var_b506;
int __exception_result_var_b507;
_Bool __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value230 = (void*)0;
memset(&main_module_211, 0, sizeof(_Bool));
right_value231 = (void*)0;
memset(&output_file_name_215, 0, sizeof(char*));
memset(&f_216, 0, sizeof(struct _IO_FILE*));
right_value232 = (void*)0;
right_value233 = (void*)0;
memset(&o2_saved_217, 0, sizeof(struct map$2charphsFunph*));
memset(&it_220, 0, sizeof(char*));
right_value234 = (void*)0;
memset(&it2_223, 0, sizeof(struct sFun*));
right_value235 = (void*)0;
memset(&header_224, 0, sizeof(char*));
memset(&o2_saved_229, 0, sizeof(struct map$2charphsFunph*));
memset(&it_230, 0, sizeof(char*));
right_value236 = (void*)0;
memset(&it2_231, 0, sizeof(struct sFun*));
right_value237 = (void*)0;
memset(&header_232, 0, sizeof(char*));
right_value238 = (void*)0;
memset(&output_233, 0, sizeof(char*));
right_value239 = (void*)0;
memset(&output_234, 0, sizeof(char*));
memset(&o2_saved_235, 0, sizeof(struct map$2charphsFunph*));
memset(&it_236, 0, sizeof(char*));
memset(&it2_237, 0, sizeof(struct sFun*));
right_value240 = (void*)0;
memset(&output_238, 0, sizeof(char*));
    main_module_211=(come_push_stackframe("03output_code.c", 800, 2713),__exception_result_var_b458=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 800, 2631)), "03output_code.c", 800, 2632))->funcs,((char*)(right_value230=xsprintf("main")))), come_pop_stackframe(), __exception_result_var_b458)!=((void*)0);
    right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    output_file_name_215=(char*)come_increment_ref_count((come_push_stackframe("03output_code.c", 803, 2716),__exception_result_var_b459=((char*)(right_value231=xsprintf("%s.c",((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 803, 2714)), "03output_code.c", 803, 2715))->sname))), come_pop_stackframe(), __exception_result_var_b459));
    right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_and_conditional1=f_216=(come_push_stackframe("03output_code.c", 805, 2717),__exception_result_var_b460=fopen(output_file_name_215,"w"), come_pop_stackframe(), __exception_result_var_b460),    _and_conditional1 == 0) {
        (come_push_stackframe("03output_code.c", 805, 2718),__exception_result_var_b461=die("fopen"), come_pop_stackframe(), __exception_result_var_b461);
    }
    (come_push_stackframe("03output_code.c", 807, 2719),__exception_result_var_b462=fprintf(f_216,"// source head\n"), come_pop_stackframe(), __exception_result_var_b462);
    (come_push_stackframe("03output_code.c", 808, 2727),__exception_result_var_b464=fprintf(f_216,"%s\n",(come_push_stackframe("03output_code.c", 808, 2726),__exception_result_var_b463=((char*)(right_value232=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 808, 2720)), "03output_code.c", 808, 2721))->module, "03output_code.c", 808, 2722)), "03output_code.c", 808, 2723))->mSourceHead, "03output_code.c", 808, 2724)), "03output_code.c", 808, 2725))))), come_pop_stackframe(), __exception_result_var_b463)), come_pop_stackframe(), __exception_result_var_b464);
    right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("03output_code.c", 810, 2728),__exception_result_var_b465=fprintf(f_216,"// uniq global variable\n"), come_pop_stackframe(), __exception_result_var_b465);
    if(main_module_211) {
        (come_push_stackframe("03output_code.c", 812, 2736),__exception_result_var_b467=fprintf(f_216,"%s\n",(come_push_stackframe("03output_code.c", 812, 2735),__exception_result_var_b466=((char*)(right_value233=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 812, 2729)), "03output_code.c", 812, 2730))->module, "03output_code.c", 812, 2731)), "03output_code.c", 812, 2732))->mSourceHead2, "03output_code.c", 812, 2733)), "03output_code.c", 812, 2734))))), come_pop_stackframe(), __exception_result_var_b466)), come_pop_stackframe(), __exception_result_var_b467);
        right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    (come_push_stackframe("03output_code.c", 815, 2737),__exception_result_var_b468=fprintf(f_216,"// header function\n"), come_pop_stackframe(), __exception_result_var_b468);
    for(    o2_saved_217=(struct map$2charphsFunph*)come_increment_ref_count((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 816, 2738)), "03output_code.c", 816, 2739))->funcs)),it_220=(come_push_stackframe("03output_code.c", 816, 2762),__exception_result_var_b471=map$2charphsFunph_begin(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check((o2_saved_217), "03output_code.c", 816, 2740)), "03output_code.c", 816, 2741))), come_pop_stackframe(), __exception_result_var_b471);    !(come_push_stackframe("03output_code.c", 816, 2771),__exception_result_var_b472=map$2charphsFunph_end(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check((o2_saved_217), "03output_code.c", 816, 2763)), "03output_code.c", 816, 2764))), come_pop_stackframe(), __exception_result_var_b472);    it_220=(come_push_stackframe("03output_code.c", 816, 2800),__exception_result_var_b475=map$2charphsFunph_next(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check((o2_saved_217), "03output_code.c", 816, 2772)), "03output_code.c", 816, 2773))), come_pop_stackframe(), __exception_result_var_b475)    ){
        it2_223=(come_push_stackframe("03output_code.c", 817, 2804),__exception_result_var_b477=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 817, 2801)), "03output_code.c", 817, 2802))->funcs,(come_push_stackframe("03output_code.c", 817, 2803),__exception_result_var_b476=((char*)(right_value234=__builtin_string(it_220))), come_pop_stackframe(), __exception_result_var_b476)), come_pop_stackframe(), __exception_result_var_b477);
        right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        header_224=(char*)come_increment_ref_count((come_push_stackframe("03output_code.c", 819, 2805),__exception_result_var_b478=((char*)(right_value235=header_function(it2_223,info))), come_pop_stackframe(), __exception_result_var_b478));
        right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(it2_223, "03output_code.c", 821, 2806)), "03output_code.c", 821, 2807))->mResultType, "03output_code.c", 821, 2808)), "03output_code.c", 821, 2809))->mUniq) {
            (come_push_stackframe("03output_code.c", 822, 2810),__exception_result_var_b479=fprintf(f_216,"%s",header_224), come_pop_stackframe(), __exception_result_var_b479);
        }
        else {
            if(_if_conditional252=((struct sFun*)come_null_check(((struct sFun*)come_null_check(it2_223, "03output_code.c", 824, 2811)), "03output_code.c", 824, 2812))->mStatic&&((struct sType*)come_null_check(((struct sType*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(it2_223, "03output_code.c", 824, 2813)), "03output_code.c", 824, 2814))->mResultType, "03output_code.c", 824, 2815)), "03output_code.c", 824, 2816))->mInline,            _if_conditional252) {
            }
            else {
                if(((struct sFun*)come_null_check(((struct sFun*)come_null_check(it2_223, "03output_code.c", 826, 2817)), "03output_code.c", 826, 2818))->mStatic) {
                    (come_push_stackframe("03output_code.c", 827, 2819),__exception_result_var_b480=fprintf(f_216,"static %s",header_224), come_pop_stackframe(), __exception_result_var_b480);
                }
                else {
                    if(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(it2_223, "03output_code.c", 829, 2820)), "03output_code.c", 829, 2821))->mResultType, "03output_code.c", 829, 2822)), "03output_code.c", 829, 2823))->mInline) {
                    }
                    else {
                        if(_if_conditional255=(come_push_stackframe("03output_code.c", 831, 2824),__exception_result_var_b481=string_operator_not_equals(it_220,"__builtin_va_start"), come_pop_stackframe(), __exception_result_var_b481)&&(come_push_stackframe("03output_code.c", 831, 2825),__exception_result_var_b482=string_operator_not_equals(it_220,"__builtin_va_end"), come_pop_stackframe(), __exception_result_var_b482),                        _if_conditional255) {
                            (come_push_stackframe("03output_code.c", 832, 2826),__exception_result_var_b483=fprintf(f_216,"%s\n",header_224,it_220), come_pop_stackframe(), __exception_result_var_b483);
                        }
                    }
                }
            }
        }
        header_224 = come_decrement_ref_count2(header_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_217,map$2charphsFunphp_finalize, 0, 0, 0, 0, (void*)0);
    (come_push_stackframe("03output_code.c", 836, 2857),__exception_result_var_b484=fprintf(f_216,"// inline function\n"), come_pop_stackframe(), __exception_result_var_b484);
    for(    o2_saved_229=(struct map$2charphsFunph*)come_increment_ref_count((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 837, 2858)), "03output_code.c", 837, 2859))->funcs)),it_230=(come_push_stackframe("03output_code.c", 837, 2862),__exception_result_var_b485=map$2charphsFunph_begin(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check((o2_saved_229), "03output_code.c", 837, 2860)), "03output_code.c", 837, 2861))), come_pop_stackframe(), __exception_result_var_b485);    !(come_push_stackframe("03output_code.c", 837, 2865),__exception_result_var_b486=map$2charphsFunph_end(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check((o2_saved_229), "03output_code.c", 837, 2863)), "03output_code.c", 837, 2864))), come_pop_stackframe(), __exception_result_var_b486);    it_230=(come_push_stackframe("03output_code.c", 837, 2868),__exception_result_var_b487=map$2charphsFunph_next(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check((o2_saved_229), "03output_code.c", 837, 2866)), "03output_code.c", 837, 2867))), come_pop_stackframe(), __exception_result_var_b487)    ){
        it2_231=(come_push_stackframe("03output_code.c", 838, 2872),__exception_result_var_b489=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 838, 2869)), "03output_code.c", 838, 2870))->funcs,(come_push_stackframe("03output_code.c", 838, 2871),__exception_result_var_b488=((char*)(right_value236=__builtin_string(it_230))), come_pop_stackframe(), __exception_result_var_b488)), come_pop_stackframe(), __exception_result_var_b489);
        right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        header_232=(char*)come_increment_ref_count((come_push_stackframe("03output_code.c", 840, 2873),__exception_result_var_b490=((char*)(right_value237=header_function(it2_231,info))), come_pop_stackframe(), __exception_result_var_b490));
        right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional260=((struct sFun*)come_null_check(((struct sFun*)come_null_check(it2_231, "03output_code.c", 842, 2874)), "03output_code.c", 842, 2875))->mStatic&&((struct sType*)come_null_check(((struct sType*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(it2_231, "03output_code.c", 842, 2876)), "03output_code.c", 842, 2877))->mResultType, "03output_code.c", 842, 2878)), "03output_code.c", 842, 2879))->mInline,        _if_conditional260) {
            output_233=(char*)come_increment_ref_count((come_push_stackframe("03output_code.c", 843, 2880),__exception_result_var_b491=((char*)(right_value238=output_function(it2_231,info))), come_pop_stackframe(), __exception_result_var_b491));
            right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("03output_code.c", 844, 2881),__exception_result_var_b492=fprintf(f_216,"static inline %s",output_233), come_pop_stackframe(), __exception_result_var_b492);
            output_233 = come_decrement_ref_count2(output_233, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(it2_231, "03output_code.c", 846, 2882)), "03output_code.c", 846, 2883))->mResultType, "03output_code.c", 846, 2884)), "03output_code.c", 846, 2885))->mInline) {
                output_234=(char*)come_increment_ref_count((come_push_stackframe("03output_code.c", 847, 2886),__exception_result_var_b493=((char*)(right_value239=output_function(it2_231,info))), come_pop_stackframe(), __exception_result_var_b493));
                right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("03output_code.c", 848, 2887),__exception_result_var_b494=fprintf(f_216,"static inline %s",output_234), come_pop_stackframe(), __exception_result_var_b494);
                output_234 = come_decrement_ref_count2(output_234, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(((struct sFun*)come_null_check(((struct sFun*)come_null_check(it2_231, "03output_code.c", 850, 2888)), "03output_code.c", 850, 2889))->mStatic) {
                }
                else {
                    if(_if_conditional263=(come_push_stackframe("03output_code.c", 852, 2890),__exception_result_var_b495=string_operator_not_equals(it_230,"__builtin_va_start"), come_pop_stackframe(), __exception_result_var_b495)&&(come_push_stackframe("03output_code.c", 852, 2891),__exception_result_var_b496=string_operator_not_equals(it_230,"__builtin_va_end"), come_pop_stackframe(), __exception_result_var_b496),                    _if_conditional263) {
                    }
                }
            }
        }
        header_232 = come_decrement_ref_count2(header_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_229,map$2charphsFunphp_finalize, 0, 0, 0, 0, (void*)0);
    (come_push_stackframe("03output_code.c", 856, 2892),__exception_result_var_b497=fprintf(f_216,"\n"), come_pop_stackframe(), __exception_result_var_b497);
    (come_push_stackframe("03output_code.c", 858, 2893),__exception_result_var_b498=fprintf(f_216,"// body function\n"), come_pop_stackframe(), __exception_result_var_b498);
    for(    o2_saved_235=(struct map$2charphsFunph*)come_increment_ref_count((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 859, 2894)), "03output_code.c", 859, 2895))->funcs)),it_236=(come_push_stackframe("03output_code.c", 859, 2898),__exception_result_var_b499=map$2charphsFunph_begin(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check((o2_saved_235), "03output_code.c", 859, 2896)), "03output_code.c", 859, 2897))), come_pop_stackframe(), __exception_result_var_b499);    !(come_push_stackframe("03output_code.c", 859, 2901),__exception_result_var_b500=map$2charphsFunph_end(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check((o2_saved_235), "03output_code.c", 859, 2899)), "03output_code.c", 859, 2900))), come_pop_stackframe(), __exception_result_var_b500);    it_236=(come_push_stackframe("03output_code.c", 859, 2904),__exception_result_var_b501=map$2charphsFunph_next(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check((o2_saved_235), "03output_code.c", 859, 2902)), "03output_code.c", 859, 2903))), come_pop_stackframe(), __exception_result_var_b501)    ){
        it2_237=(come_push_stackframe("03output_code.c", 860, 2907),__exception_result_var_b502=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 860, 2905)), "03output_code.c", 860, 2906))->funcs,it_236), come_pop_stackframe(), __exception_result_var_b502);
        if(_if_conditional264=!((struct sFun*)come_null_check(((struct sFun*)come_null_check(it2_237, "03output_code.c", 862, 2908)), "03output_code.c", 862, 2909))->mExternal,        _if_conditional264) {
            output_238=(char*)come_increment_ref_count((come_push_stackframe("03output_code.c", 863, 2910),__exception_result_var_b503=((char*)(right_value240=output_function(it2_237,info))), come_pop_stackframe(), __exception_result_var_b503));
            right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional265=((struct sFun*)come_null_check(((struct sFun*)come_null_check(it2_237, "03output_code.c", 865, 2911)), "03output_code.c", 865, 2912))->mStatic&&((struct sType*)come_null_check(((struct sType*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(it2_237, "03output_code.c", 865, 2913)), "03output_code.c", 865, 2914))->mResultType, "03output_code.c", 865, 2915)), "03output_code.c", 865, 2916))->mInline,            _if_conditional265) {
            }
            else {
                if(((struct sFun*)come_null_check(((struct sFun*)come_null_check(it2_237, "03output_code.c", 867, 2917)), "03output_code.c", 867, 2918))->mStatic) {
                    (come_push_stackframe("03output_code.c", 868, 2919),__exception_result_var_b504=fprintf(f_216,"static %s",output_238), come_pop_stackframe(), __exception_result_var_b504);
                }
                else {
                    if(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(it2_237, "03output_code.c", 870, 2920)), "03output_code.c", 870, 2921))->mResultType, "03output_code.c", 870, 2922)), "03output_code.c", 870, 2923))->mInline) {
                    }
                    else {
                        if(_if_conditional268=!main_module_211&&((struct sType*)come_null_check(((struct sType*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(it2_237, "03output_code.c", 872, 2924)), "03output_code.c", 872, 2925))->mResultType, "03output_code.c", 872, 2926)), "03output_code.c", 872, 2927))->mUniq,                        _if_conditional268) {
                        }
                        else {
                            (come_push_stackframe("03output_code.c", 875, 2928),__exception_result_var_b505=fprintf(f_216,"%s",output_238), come_pop_stackframe(), __exception_result_var_b505);
                        }
                    }
                }
            }
            (come_push_stackframe("03output_code.c", 878, 2929),__exception_result_var_b506=fprintf(f_216,"\n"), come_pop_stackframe(), __exception_result_var_b506);
            output_238 = come_decrement_ref_count2(output_238, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    come_call_finalizer3(o2_saved_235,map$2charphsFunphp_finalize, 0, 0, 0, 0, (void*)0);
    (come_push_stackframe("03output_code.c", 882, 2930),__exception_result_var_b507=fclose(f_216), come_pop_stackframe(), __exception_result_var_b507);
    __result130__ = (_Bool)1;
    output_file_name_215 = come_decrement_ref_count2(output_file_name_215, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result130__;
    output_file_name_215 = come_decrement_ref_count2(output_file_name_215, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_212;
void* __exception_result_var_b455;
unsigned int __exception_result_var_b456;
unsigned int hash_213;
unsigned int it_214;
_Bool _while_condtional20;
_Bool _if_conditional227;
_Bool __exception_result_var_b457;
_Bool _if_conditional228;
struct sFun* __result119__;
_Bool _if_conditional244;
_Bool _if_conditional245;
struct sFun* __result120__;
struct sFun* __result121__;
struct sFun* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_212, 0, sizeof(struct sFun*));
memset(&hash_213, 0, sizeof(unsigned int));
memset(&it_214, 0, sizeof(unsigned int));
        (come_push_stackframe("./neo-c.h", 1526, 2633),__exception_result_var_b455=memset(&default_value_212,0,sizeof(struct sFun*)), come_pop_stackframe(), __exception_result_var_b455);
        hash_213=(come_push_stackframe("./neo-c.h", 1528, 2636),__exception_result_var_b456=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1528, 2634)), "./neo-c.h", 1528, 2635))), come_pop_stackframe(), __exception_result_var_b456)%((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1528, 2637)), "./neo-c.h", 1528, 2638))->size;
        it_214=hash_213;
        while(_while_condtional20=(_Bool)1,        _while_condtional20) {
            if(_if_conditional227=((_Bool*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1532, 2639)), "./neo-c.h", 1532, 2640))->item_existance, "./neo-c.h", 1532, 2641))[it_214],            _if_conditional227) {
                if(_if_conditional228=(come_push_stackframe("./neo-c.h", 1534, 2647),__exception_result_var_b457=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1534, 2642)), "./neo-c.h", 1534, 2643))->keys, "./neo-c.h", 1534, 2644))[it_214], "./neo-c.h", 1534, 2645)), "./neo-c.h", 1534, 2646)),key), come_pop_stackframe(), __exception_result_var_b457),                _if_conditional228) {
                    __result119__ = __result_obj__ = ((struct sFun**)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1536, 2648)), "./neo-c.h", 1536, 2649))->items, "./neo-c.h", 1536, 2650))[it_214];
                    come_call_finalizer3(default_value_212,sFun_finalize, 0, 0, 0, 0, (void*)0);
                    return __result119__;
                }
                it_214++;
                if(_if_conditional244=it_214>=((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1541, 2711)), "./neo-c.h", 1541, 2712))->size,                _if_conditional244) {
                    it_214=0;
                }
                else {
                    if(_if_conditional245=it_214==hash_213,                    _if_conditional245) {
                        __result120__ = __result_obj__ = default_value_212;
                        come_call_finalizer3(default_value_212,sFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result120__;
                    }
                }
            }
            else {
                __result121__ = __result_obj__ = default_value_212;
                come_call_finalizer3(default_value_212,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result121__;
            }
        }
        __result122__ = __result_obj__ = default_value_212;
        come_call_finalizer3(default_value_212,sFun_finalize, 0, 0, 1, 0, (void*)0);
        return __result122__;
        come_call_finalizer3(default_value_212,sFun_finalize, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional229;
_Bool _if_conditional230;
_Bool _if_conditional231;
_Bool _if_conditional232;
_Bool _if_conditional233;
_Bool _if_conditional234;
_Bool _if_conditional235;
_Bool _if_conditional238;
_Bool _if_conditional239;
_Bool _if_conditional240;
_Bool _if_conditional241;
_Bool _if_conditional242;
_Bool _if_conditional243;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional229=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 0, 2651)), "sFun_finalize", 0, 2652))->mName!=((void*)0),                        _if_conditional229) {
                            ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 0, 2653)), "sFun_finalize", 0, 2654))->mName = come_decrement_ref_count2(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 0, 2653)), "sFun_finalize", 0, 2654))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional230=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 1, 2655)), "sFun_finalize", 1, 2656))->mResultType!=((void*)0),                        _if_conditional230) {
                            come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 1, 2657)), "sFun_finalize", 1, 2658))->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional231=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 2, 2659)), "sFun_finalize", 2, 2660))->mParamTypes!=((void*)0),                        _if_conditional231) {
                            come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 2, 2661)), "sFun_finalize", 2, 2662))->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional232=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 3, 2663)), "sFun_finalize", 3, 2664))->mParamNames!=((void*)0),                        _if_conditional232) {
                            come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 3, 2665)), "sFun_finalize", 3, 2666))->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional233=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 4, 2667)), "sFun_finalize", 4, 2668))->mParamDefaultParametors!=((void*)0),                        _if_conditional233) {
                            come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 4, 2669)), "sFun_finalize", 4, 2670))->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional234=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 5, 2671)), "sFun_finalize", 5, 2672))->mLambdaType!=((void*)0),                        _if_conditional234) {
                            come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 5, 2673)), "sFun_finalize", 5, 2674))->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional235=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 6, 2675)), "sFun_finalize", 6, 2676))->mBlock!=((void*)0),                        _if_conditional235) {
                            come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 6, 2677)), "sFun_finalize", 6, 2678))->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional238=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 7, 2687)), "sFun_finalize", 7, 2688))->mSource!=((void*)0),                        _if_conditional238) {
                            come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 7, 2689)), "sFun_finalize", 7, 2690))->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional239=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 8, 2691)), "sFun_finalize", 8, 2692))->mSourceHead!=((void*)0),                        _if_conditional239) {
                            come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 8, 2693)), "sFun_finalize", 8, 2694))->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional240=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 9, 2695)), "sFun_finalize", 9, 2696))->mSourceHead2!=((void*)0),                        _if_conditional240) {
                            come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 9, 2697)), "sFun_finalize", 9, 2698))->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional241=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 10, 2699)), "sFun_finalize", 10, 2700))->mSourceDefer!=((void*)0),                        _if_conditional241) {
                            come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 10, 2701)), "sFun_finalize", 10, 2702))->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional242=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 11, 2703)), "sFun_finalize", 11, 2704))->mComeHeader!=((void*)0),                        _if_conditional242) {
                            ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 11, 2705)), "sFun_finalize", 11, 2706))->mComeHeader = come_decrement_ref_count2(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 11, 2705)), "sFun_finalize", 11, 2706))->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional243=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 12, 2707)), "sFun_finalize", 12, 2708))->mDeclareSName!=((void*)0),                        _if_conditional243) {
                            ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 12, 2709)), "sFun_finalize", 12, 2710))->mDeclareSName = come_decrement_ref_count2(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 12, 2709)), "sFun_finalize", 12, 2710))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional236;
_Bool _if_conditional237;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional236=self!=((void*)0)&&((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0, 2679)), "sBlock_finalize", 0, 2680))->mNodes!=((void*)0),                                _if_conditional236) {
                                    come_call_finalizer3(((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0, 2681)), "sBlock_finalize", 0, 2682))->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional237=self!=((void*)0)&&((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1, 2683)), "sBlock_finalize", 1, 2684))->mVarTable!=((void*)0),                                _if_conditional237) {
                                    come_call_finalizer3(((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1, 2685)), "sBlock_finalize", 1, 2686))->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool _if_conditional247;
char* result_218;
void* __exception_result_var_b469;
char* __result123__;
_Bool _if_conditional248;
char* __result124__;
char* result_219;
void* __exception_result_var_b470;
char* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_218, 0, sizeof(char*));
memset(&result_219, 0, sizeof(char*));
        if(_if_conditional247=self==((void*)0),        _if_conditional247) {
            (come_push_stackframe("./neo-c.h", 1282, 2742),__exception_result_var_b469=memset(&result_218,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b469);
            __result123__ = __result_obj__ = result_218;
            return __result123__;
        }
        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1285, 2743)), "./neo-c.h", 1285, 2744))->key_list, "./neo-c.h", 1285, 2745)), "./neo-c.h", 1285, 2746))->it=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1285, 2747)), "./neo-c.h", 1285, 2748))->key_list, "./neo-c.h", 1285, 2749)), "./neo-c.h", 1285, 2750))->head;
        if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1287, 2751)), "./neo-c.h", 1287, 2752))->key_list, "./neo-c.h", 1287, 2753)), "./neo-c.h", 1287, 2754))->it) {
            __result124__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1288, 2755)), "./neo-c.h", 1288, 2756))->key_list, "./neo-c.h", 1288, 2757)), "./neo-c.h", 1288, 2758))->it, "./neo-c.h", 1288, 2759)), "./neo-c.h", 1288, 2760))->item;
            return __result124__;
        }
        (come_push_stackframe("./neo-c.h", 1292, 2761),__exception_result_var_b470=memset(&result_219,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b470);
        __result125__ = __result_obj__ = result_219;
        return __result125__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __result126__;
memset(&__result_obj__, 0, sizeof(void*));
        __result126__ = self==((void*)0)||((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1314, 2765)), "./neo-c.h", 1314, 2766))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1314, 2767)), "./neo-c.h", 1314, 2768))->key_list, "./neo-c.h", 1314, 2769)), "./neo-c.h", 1314, 2770))->it==((void*)0);
        return __result126__;
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool _if_conditional249;
char* result_221;
void* __exception_result_var_b473;
char* __result127__;
_Bool _if_conditional250;
char* __result128__;
char* result_222;
void* __exception_result_var_b474;
char* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_221, 0, sizeof(char*));
memset(&result_222, 0, sizeof(char*));
        if(_if_conditional249=self==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1297, 2774)), "./neo-c.h", 1297, 2775))->key_list, "./neo-c.h", 1297, 2776)), "./neo-c.h", 1297, 2777))->it==((void*)0),        _if_conditional249) {
            (come_push_stackframe("./neo-c.h", 1299, 2778),__exception_result_var_b473=memset(&result_221,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b473);
            __result127__ = __result_obj__ = result_221;
            return __result127__;
        }
        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1302, 2779)), "./neo-c.h", 1302, 2780))->key_list, "./neo-c.h", 1302, 2781)), "./neo-c.h", 1302, 2782))->it=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1302, 2783)), "./neo-c.h", 1302, 2784))->key_list, "./neo-c.h", 1302, 2785)), "./neo-c.h", 1302, 2786))->it, "./neo-c.h", 1302, 2787)), "./neo-c.h", 1302, 2788))->next;
        if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1304, 2789)), "./neo-c.h", 1304, 2790))->key_list, "./neo-c.h", 1304, 2791)), "./neo-c.h", 1304, 2792))->it) {
            __result128__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1305, 2793)), "./neo-c.h", 1305, 2794))->key_list, "./neo-c.h", 1305, 2795)), "./neo-c.h", 1305, 2796))->it, "./neo-c.h", 1305, 2797)), "./neo-c.h", 1305, 2798))->item;
            return __result128__;
        }
        (come_push_stackframe("./neo-c.h", 1309, 2799),__exception_result_var_b474=memset(&result_222,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b474);
        __result129__ = __result_obj__ = result_222;
        return __result129__;
}

static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
int i_225;
_Bool _if_conditional256;
_Bool _if_conditional257;
int i_226;
_Bool _if_conditional258;
_Bool _if_conditional259;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_225, 0, sizeof(int));
memset(&i_226, 0, sizeof(int));
        for(        i_225=0;        i_225<((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1111, 2827)), "./neo-c.h", 1111, 2828))->size;        i_225++        ){
            if(_if_conditional256=((_Bool*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1112, 2829)), "./neo-c.h", 1112, 2830))->item_existance, "./neo-c.h", 1112, 2831))[i_225],            _if_conditional256) {
                if(_if_conditional257=1,                _if_conditional257) {
                    come_call_finalizer3(((struct sFun**)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1114, 2832)), "./neo-c.h", 1114, 2833))->items, "./neo-c.h", 1114, 2834))[i_225],sFun_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
        }
        (come_push_stackframe("./neo-c.h", 1118,2837),come_free((char*)((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1118, 2835)), "./neo-c.h", 1118, 2836))->items),come_pop_stackframe());
        for(        i_226=0;        i_226<((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1120, 2838)), "./neo-c.h", 1120, 2839))->size;        i_226++        ){
            if(_if_conditional258=((_Bool*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1121, 2840)), "./neo-c.h", 1121, 2841))->item_existance, "./neo-c.h", 1121, 2842))[i_226],            _if_conditional258) {
                if(_if_conditional259=1,                _if_conditional259) {
                    ((char**)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1123, 2843)), "./neo-c.h", 1123, 2844))->keys, "./neo-c.h", 1123, 2845))[i_226] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1123, 2843)), "./neo-c.h", 1123, 2844))->keys, "./neo-c.h", 1123, 2845))[i_226], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        (come_push_stackframe("./neo-c.h", 1127,2848),come_free((char*)((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1127, 2846)), "./neo-c.h", 1127, 2847))->keys),come_pop_stackframe());
        come_call_finalizer3(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1129, 2849)), "./neo-c.h", 1129, 2850))->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
        ((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1131, 2855)), "./neo-c.h", 1131, 2856))->item_existance = come_decrement_ref_count2(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1131, 2855)), "./neo-c.h", 1131, 2856))->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_227;
_Bool _while_condtional21;
struct list_item$1charp* prev_it_228;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_227, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_228, 0, sizeof(struct list_item$1charp*));
            it_227=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 120, 2851)), "./neo-c.h", 120, 2852))->head;
            while(_while_condtional21=it_227!=((void*)0),            _while_condtional21) {
                prev_it_228=it_227;
                it_227=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_227, "./neo-c.h", 123, 2853)), "./neo-c.h", 123, 2854))->next;
                come_call_finalizer3(prev_it_228,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

_Bool output_header_file(struct sInfo* info){
void* __result_obj__;
char* output_file_name_239;
struct _IO_FILE* __exception_result_var_b508;
struct _IO_FILE* f_240;
_Bool __exception_result_var_b509;
_Bool _if_conditional269;
int __exception_result_var_b510;
int __exception_result_var_b511;
int __exception_result_var_b512;
void* right_value241;
char* __exception_result_var_b513;
int __exception_result_var_b514;
int __exception_result_var_b515;
_Bool __exception_result_var_b516;
_Bool _if_conditional270;
int __exception_result_var_b517;
int __exception_result_var_b518;
_Bool __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&output_file_name_239, 0, sizeof(char*));
memset(&f_240, 0, sizeof(struct _IO_FILE*));
right_value241 = (void*)0;
    output_file_name_239=(char*)come_increment_ref_count(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 890, 2931)), "03output_code.c", 890, 2932))->output_file_name);
    f_240=(come_push_stackframe("03output_code.c", 892, 2933),__exception_result_var_b508=fopen(output_file_name_239,"a"), come_pop_stackframe(), __exception_result_var_b508);
    if(_if_conditional269=(come_push_stackframe("03output_code.c", 894, 2936),__exception_result_var_b509=string_operator_equals(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 894, 2934)), "03output_code.c", 894, 2935))->output_file_name,"common.h"), come_pop_stackframe(), __exception_result_var_b509),    _if_conditional269) {
        (come_push_stackframe("03output_code.c", 895, 2937),__exception_result_var_b510=fprintf(f_240,"#ifndef __COMMON_H__\n"), come_pop_stackframe(), __exception_result_var_b510);
        (come_push_stackframe("03output_code.c", 896, 2938),__exception_result_var_b511=fprintf(f_240,"#define __COMMON_H__\n"), come_pop_stackframe(), __exception_result_var_b511);
        (come_push_stackframe("03output_code.c", 897, 2939),__exception_result_var_b512=fprintf(f_240,"#include <neo-c.h>\n"), come_pop_stackframe(), __exception_result_var_b512);
    }
    (come_push_stackframe("03output_code.c", 900, 2947),__exception_result_var_b514=fprintf(f_240,"%s\n",(come_push_stackframe("03output_code.c", 900, 2946),__exception_result_var_b513=((char*)(right_value241=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 900, 2940)), "03output_code.c", 900, 2941))->module, "03output_code.c", 900, 2942)), "03output_code.c", 900, 2943))->mHeader, "03output_code.c", 900, 2944)), "03output_code.c", 900, 2945))))), come_pop_stackframe(), __exception_result_var_b513)), come_pop_stackframe(), __exception_result_var_b514);
    right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("03output_code.c", 902, 2948),__exception_result_var_b515=fprintf(f_240,"\n"), come_pop_stackframe(), __exception_result_var_b515);
    if(_if_conditional270=(come_push_stackframe("03output_code.c", 904, 2951),__exception_result_var_b516=string_operator_equals(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 904, 2949)), "03output_code.c", 904, 2950))->output_file_name,"common.h"), come_pop_stackframe(), __exception_result_var_b516),    _if_conditional270) {
        (come_push_stackframe("03output_code.c", 905, 2952),__exception_result_var_b517=fprintf(f_240,"#endif\n"), come_pop_stackframe(), __exception_result_var_b517);
    }
    (come_push_stackframe("03output_code.c", 908, 2953),__exception_result_var_b518=fclose(f_240), come_pop_stackframe(), __exception_result_var_b518);
    __result131__ = (_Bool)1;
    output_file_name_239 = come_decrement_ref_count2(output_file_name_239, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result131__;
    output_file_name_239 = come_decrement_ref_count2(output_file_name_239, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void add_come_code_at_function_head(struct sInfo* info, char* code, ...){
void* __result_obj__;
_Bool _if_conditional271;
char* msg2_241;
va_list args_242;
int __exception_result_var_b519;
int len_243;
_Bool _if_conditional272;
struct buffer* __exception_result_var_b520;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_241, 0, sizeof(char*));
memset(&args_242, 0, sizeof(va_list));
memset(&len_243, 0, sizeof(int));
    if(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 915, 2954)), "03output_code.c", 915, 2955))->no_output_come_code) {
        return;
    }
    (come_push_stackframe("03output_code.c", 921,2956),__builtin_va_start(args_242,code),come_pop_stackframe());
    len_243=(come_push_stackframe("03output_code.c", 922, 2957),__exception_result_var_b519=vasprintf(&msg2_241,code,args_242), come_pop_stackframe(), __exception_result_var_b519);
    (come_push_stackframe("03output_code.c", 923,2958),__builtin_va_end(args_242),come_pop_stackframe());
    if(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 925, 2959)), "03output_code.c", 925, 2960))->come_fun) {
        (come_push_stackframe("03output_code.c", 926, 2967),__exception_result_var_b520=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 926, 2961)), "03output_code.c", 926, 2962))->come_fun, "03output_code.c", 926, 2963)), "03output_code.c", 926, 2964))->mSourceHead, "03output_code.c", 926, 2965)), "03output_code.c", 926, 2966)),msg2_241), come_pop_stackframe(), __exception_result_var_b520);
    }
    (come_push_stackframe("03output_code.c", 929,2968),free(msg2_241),come_pop_stackframe());
    come_call_finalizer3((&args_242),va_list_finalize, 1, 0, 0, 0, (void*)0);
}

void add_come_code_at_function_head2(struct sInfo* info, char* code, ...){
void* __result_obj__;
_Bool _if_conditional273;
char* msg2_244;
va_list args_245;
int __exception_result_var_b521;
int len_246;
_Bool _if_conditional274;
struct buffer* __exception_result_var_b522;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_244, 0, sizeof(char*));
memset(&args_245, 0, sizeof(va_list));
memset(&len_246, 0, sizeof(int));
    if(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 934, 2969)), "03output_code.c", 934, 2970))->no_output_come_code) {
        return;
    }
    (come_push_stackframe("03output_code.c", 940,2971),__builtin_va_start(args_245,code),come_pop_stackframe());
    len_246=(come_push_stackframe("03output_code.c", 941, 2972),__exception_result_var_b521=vasprintf(&msg2_244,code,args_245), come_pop_stackframe(), __exception_result_var_b521);
    (come_push_stackframe("03output_code.c", 942,2973),__builtin_va_end(args_245),come_pop_stackframe());
    if(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 944, 2974)), "03output_code.c", 944, 2975))->come_fun) {
        (come_push_stackframe("03output_code.c", 945, 2982),__exception_result_var_b522=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 945, 2976)), "03output_code.c", 945, 2977))->come_fun, "03output_code.c", 945, 2978)), "03output_code.c", 945, 2979))->mSourceHead2, "03output_code.c", 945, 2980)), "03output_code.c", 945, 2981)),msg2_244), come_pop_stackframe(), __exception_result_var_b522);
    }
    (come_push_stackframe("03output_code.c", 948,2983),free(msg2_244),come_pop_stackframe());
    come_call_finalizer3((&args_245),va_list_finalize, 1, 0, 0, 0, (void*)0);
}

void add_last_code_to_source(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional275;
_Bool _if_conditional276;
char* __dec_obj43;
_Bool _if_conditional277;
char* __dec_obj44;
_Bool _if_conditional278;
char* __dec_obj45;
memset(&__result_obj__, 0, sizeof(void*));
    if(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 953, 2984)), "03output_code.c", 953, 2985))->no_output_come_code) {
        return;
    }
    if(((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 956, 2986)), "03output_code.c", 956, 2987))->module, "03output_code.c", 956, 2988)), "03output_code.c", 956, 2989))->mLastCode) {
        (come_push_stackframe("03output_code.c", 957,2994),add_come_code(info,"%s",((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 957, 2990)), "03output_code.c", 957, 2991))->module, "03output_code.c", 957, 2992)), "03output_code.c", 957, 2993))->mLastCode),come_pop_stackframe());
        __dec_obj43=((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 958, 2995)), "03output_code.c", 958, 2996))->module, "03output_code.c", 958, 2997)), "03output_code.c", 958, 2998))->mLastCode;
        ((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 958, 2995)), "03output_code.c", 958, 2996))->module, "03output_code.c", 958, 2997)), "03output_code.c", 958, 2998))->mLastCode=((void*)0);
        __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 960, 2999)), "03output_code.c", 960, 3000))->module, "03output_code.c", 960, 3001)), "03output_code.c", 960, 3002))->mLastCode2) {
        (come_push_stackframe("03output_code.c", 961,3007),add_come_code(info,"%s",((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 961, 3003)), "03output_code.c", 961, 3004))->module, "03output_code.c", 961, 3005)), "03output_code.c", 961, 3006))->mLastCode2),come_pop_stackframe());
        __dec_obj44=((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 962, 3008)), "03output_code.c", 962, 3009))->module, "03output_code.c", 962, 3010)), "03output_code.c", 962, 3011))->mLastCode2;
        ((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 962, 3008)), "03output_code.c", 962, 3009))->module, "03output_code.c", 962, 3010)), "03output_code.c", 962, 3011))->mLastCode2=((void*)0);
        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 964, 3012)), "03output_code.c", 964, 3013))->module, "03output_code.c", 964, 3014)), "03output_code.c", 964, 3015))->mLastCode3) {
        (come_push_stackframe("03output_code.c", 965,3020),add_come_code(info,"%s",((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 965, 3016)), "03output_code.c", 965, 3017))->module, "03output_code.c", 965, 3018)), "03output_code.c", 965, 3019))->mLastCode3),come_pop_stackframe());
        __dec_obj45=((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 966, 3021)), "03output_code.c", 966, 3022))->module, "03output_code.c", 966, 3023)), "03output_code.c", 966, 3024))->mLastCode3;
        ((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 966, 3021)), "03output_code.c", 966, 3022))->module, "03output_code.c", 966, 3023)), "03output_code.c", 966, 3024))->mLastCode3=((void*)0);
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
}

void add_last_code_to_source_with_comma(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional279;
_Bool _if_conditional280;
void* right_value242;
char* __exception_result_var_b523;
char* __dec_obj46;
_Bool _if_conditional281;
void* right_value243;
char* __exception_result_var_b524;
char* __dec_obj47;
_Bool _if_conditional282;
void* right_value244;
char* __exception_result_var_b525;
char* __dec_obj48;
memset(&__result_obj__, 0, sizeof(void*));
right_value242 = (void*)0;
right_value243 = (void*)0;
right_value244 = (void*)0;
    if(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 972, 3025)), "03output_code.c", 972, 3026))->no_output_come_code) {
        return;
    }
    if(((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 975, 3027)), "03output_code.c", 975, 3028))->module, "03output_code.c", 975, 3029)), "03output_code.c", 975, 3030))->mLastCode) {
        (come_push_stackframe("03output_code.c", 976,3038),add_come_code(info,"%s ,",(come_push_stackframe("03output_code.c", 976, 3037),__exception_result_var_b523=((char*)(right_value242=string_substring(((char*)come_null_check(((char*)come_null_check(((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 976, 3031)), "03output_code.c", 976, 3032))->module, "03output_code.c", 976, 3033)), "03output_code.c", 976, 3034))->mLastCode, "03output_code.c", 976, 3035)), "03output_code.c", 976, 3036)),0,-3))), come_pop_stackframe(), __exception_result_var_b523)),come_pop_stackframe());
        right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj46=((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 977, 3039)), "03output_code.c", 977, 3040))->module, "03output_code.c", 977, 3041)), "03output_code.c", 977, 3042))->mLastCode;
        ((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 977, 3039)), "03output_code.c", 977, 3040))->module, "03output_code.c", 977, 3041)), "03output_code.c", 977, 3042))->mLastCode=((void*)0);
        __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 979, 3043)), "03output_code.c", 979, 3044))->module, "03output_code.c", 979, 3045)), "03output_code.c", 979, 3046))->mLastCode2) {
        (come_push_stackframe("03output_code.c", 980,3054),add_come_code(info,"%s ,",(come_push_stackframe("03output_code.c", 980, 3053),__exception_result_var_b524=((char*)(right_value243=string_substring(((char*)come_null_check(((char*)come_null_check(((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 980, 3047)), "03output_code.c", 980, 3048))->module, "03output_code.c", 980, 3049)), "03output_code.c", 980, 3050))->mLastCode2, "03output_code.c", 980, 3051)), "03output_code.c", 980, 3052)),0,-3))), come_pop_stackframe(), __exception_result_var_b524)),come_pop_stackframe());
        right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj47=((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 981, 3055)), "03output_code.c", 981, 3056))->module, "03output_code.c", 981, 3057)), "03output_code.c", 981, 3058))->mLastCode2;
        ((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 981, 3055)), "03output_code.c", 981, 3056))->module, "03output_code.c", 981, 3057)), "03output_code.c", 981, 3058))->mLastCode2=((void*)0);
        __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 983, 3059)), "03output_code.c", 983, 3060))->module, "03output_code.c", 983, 3061)), "03output_code.c", 983, 3062))->mLastCode3) {
        (come_push_stackframe("03output_code.c", 984,3070),add_come_code(info,"%s ,",(come_push_stackframe("03output_code.c", 984, 3069),__exception_result_var_b525=((char*)(right_value244=string_substring(((char*)come_null_check(((char*)come_null_check(((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 984, 3063)), "03output_code.c", 984, 3064))->module, "03output_code.c", 984, 3065)), "03output_code.c", 984, 3066))->mLastCode3, "03output_code.c", 984, 3067)), "03output_code.c", 984, 3068)),0,-3))), come_pop_stackframe(), __exception_result_var_b525)),come_pop_stackframe());
        right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj48=((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 985, 3071)), "03output_code.c", 985, 3072))->module, "03output_code.c", 985, 3073)), "03output_code.c", 985, 3074))->mLastCode3;
        ((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 985, 3071)), "03output_code.c", 985, 3072))->module, "03output_code.c", 985, 3073)), "03output_code.c", 985, 3074))->mLastCode3=((void*)0);
        __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
}

void add_come_last_code(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional283;
char* msg2_247;
va_list args_248;
int __exception_result_var_b526;
int len_249;
void* right_value245;
char* __exception_result_var_b527;
char* __dec_obj49;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_247, 0, sizeof(char*));
memset(&args_248, 0, sizeof(va_list));
memset(&len_249, 0, sizeof(int));
right_value245 = (void*)0;
    if(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 991, 3075)), "03output_code.c", 991, 3076))->no_output_come_code) {
        return;
    }
    (come_push_stackframe("03output_code.c", 997,3077),__builtin_va_start(args_248,msg),come_pop_stackframe());
    len_249=(come_push_stackframe("03output_code.c", 998, 3078),__exception_result_var_b526=vasprintf(&msg2_247,msg,args_248), come_pop_stackframe(), __exception_result_var_b526);
    (come_push_stackframe("03output_code.c", 999,3079),__builtin_va_end(args_248),come_pop_stackframe());
    __dec_obj49=((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 1001, 3080)), "03output_code.c", 1001, 3081))->module, "03output_code.c", 1001, 3082)), "03output_code.c", 1001, 3083))->mLastCode;
    ((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 1001, 3080)), "03output_code.c", 1001, 3081))->module, "03output_code.c", 1001, 3082)), "03output_code.c", 1001, 3083))->mLastCode=(char*)come_increment_ref_count((come_push_stackframe("03output_code.c", 1001, 3084),__exception_result_var_b527=((char*)(right_value245=xsprintf("%s",msg2_247))), come_pop_stackframe(), __exception_result_var_b527));
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("03output_code.c", 1003,3085),free(msg2_247),come_pop_stackframe());
    come_call_finalizer3((&args_248),va_list_finalize, 1, 0, 0, 0, (void*)0);
}

void add_come_last_code2(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional284;
char* msg2_250;
va_list args_251;
int __exception_result_var_b528;
int len_252;
void* right_value246;
char* __exception_result_var_b529;
char* __dec_obj50;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_250, 0, sizeof(char*));
memset(&args_251, 0, sizeof(va_list));
memset(&len_252, 0, sizeof(int));
right_value246 = (void*)0;
    if(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 1008, 3086)), "03output_code.c", 1008, 3087))->no_output_come_code) {
        return;
    }
    (come_push_stackframe("03output_code.c", 1014,3088),__builtin_va_start(args_251,msg),come_pop_stackframe());
    len_252=(come_push_stackframe("03output_code.c", 1015, 3089),__exception_result_var_b528=vasprintf(&msg2_250,msg,args_251), come_pop_stackframe(), __exception_result_var_b528);
    (come_push_stackframe("03output_code.c", 1016,3090),__builtin_va_end(args_251),come_pop_stackframe());
    __dec_obj50=((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 1018, 3091)), "03output_code.c", 1018, 3092))->module, "03output_code.c", 1018, 3093)), "03output_code.c", 1018, 3094))->mLastCode2;
    ((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 1018, 3091)), "03output_code.c", 1018, 3092))->module, "03output_code.c", 1018, 3093)), "03output_code.c", 1018, 3094))->mLastCode2=(char*)come_increment_ref_count((come_push_stackframe("03output_code.c", 1018, 3095),__exception_result_var_b529=((char*)(right_value246=xsprintf("%s",msg2_250))), come_pop_stackframe(), __exception_result_var_b529));
    __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("03output_code.c", 1020,3096),free(msg2_250),come_pop_stackframe());
    come_call_finalizer3((&args_251),va_list_finalize, 1, 0, 0, 0, (void*)0);
}

void add_come_last_code3(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional285;
char* msg2_253;
va_list args_254;
int __exception_result_var_b530;
int len_255;
void* right_value247;
char* __exception_result_var_b531;
char* __dec_obj51;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_253, 0, sizeof(char*));
memset(&args_254, 0, sizeof(va_list));
memset(&len_255, 0, sizeof(int));
right_value247 = (void*)0;
    if(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 1025, 3097)), "03output_code.c", 1025, 3098))->no_output_come_code) {
        return;
    }
    (come_push_stackframe("03output_code.c", 1031,3099),__builtin_va_start(args_254,msg),come_pop_stackframe());
    len_255=(come_push_stackframe("03output_code.c", 1032, 3100),__exception_result_var_b530=vasprintf(&msg2_253,msg,args_254), come_pop_stackframe(), __exception_result_var_b530);
    (come_push_stackframe("03output_code.c", 1033,3101),__builtin_va_end(args_254),come_pop_stackframe());
    __dec_obj51=((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 1035, 3102)), "03output_code.c", 1035, 3103))->module, "03output_code.c", 1035, 3104)), "03output_code.c", 1035, 3105))->mLastCode3;
    ((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 1035, 3102)), "03output_code.c", 1035, 3103))->module, "03output_code.c", 1035, 3104)), "03output_code.c", 1035, 3105))->mLastCode3=(char*)come_increment_ref_count((come_push_stackframe("03output_code.c", 1035, 3106),__exception_result_var_b531=((char*)(right_value247=xsprintf("%s",msg2_253))), come_pop_stackframe(), __exception_result_var_b531));
    __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("03output_code.c", 1037,3107),free(msg2_253),come_pop_stackframe());
    come_call_finalizer3((&args_254),va_list_finalize, 1, 0, 0, 0, (void*)0);
}

void dec_stack_ptr(int value, struct sInfo* info){
void* __result_obj__;
struct list$1CVALUEph* __exception_result_var_b533;
memset(&__result_obj__, 0, sizeof(void*));
    (come_push_stackframe("03output_code.c", 1042, 3185),__exception_result_var_b533=list$1CVALUEph_delete(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 1042, 3108)), "03output_code.c", 1042, 3109))->stack, "03output_code.c", 1042, 3110)), "03output_code.c", 1042, 3111)),-value,-1), come_pop_stackframe(), __exception_result_var_b533);
}

static struct list$1CVALUEph* list$1CVALUEph_delete(struct list$1CVALUEph* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional286;
_Bool _if_conditional287;
_Bool _if_conditional288;
int tmp_256;
_Bool _if_conditional289;
_Bool _if_conditional290;
_Bool _if_conditional291;
struct list$1CVALUEph* __result132__;
_Bool _if_conditional292;
struct list$1CVALUEph* __exception_result_var_b532;
_Bool _if_conditional294;
struct list_item$1CVALUEph* it_259;
int i_260;
_Bool _while_condtional23;
_Bool _if_conditional295;
struct list_item$1CVALUEph* prev_it_261;
_Bool _if_conditional296;
_Bool _if_conditional297;
struct list_item$1CVALUEph* it_262;
int i_263;
_Bool _while_condtional24;
_Bool _if_conditional298;
_Bool _if_conditional299;
struct list_item$1CVALUEph* prev_it_264;
struct list_item$1CVALUEph* it_265;
struct list_item$1CVALUEph* head_prev_it_266;
struct list_item$1CVALUEph* tail_it_267;
int i_268;
_Bool _while_condtional25;
_Bool _if_conditional300;
_Bool _if_conditional301;
_Bool _if_conditional302;
struct list_item$1CVALUEph* prev_it_269;
_Bool _if_conditional303;
_Bool _if_conditional304;
struct list$1CVALUEph* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_256, 0, sizeof(int));
memset(&it_259, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_260, 0, sizeof(int));
memset(&prev_it_261, 0, sizeof(struct list_item$1CVALUEph*));
memset(&it_262, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_263, 0, sizeof(int));
memset(&prev_it_264, 0, sizeof(struct list_item$1CVALUEph*));
memset(&it_265, 0, sizeof(struct list_item$1CVALUEph*));
memset(&head_prev_it_266, 0, sizeof(struct list_item$1CVALUEph*));
memset(&tail_it_267, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_268, 0, sizeof(int));
memset(&prev_it_269, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional286=head<0,        _if_conditional286) {
            head+=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 458, 3112)), "./neo-c.h", 458, 3113))->len;
        }
        if(_if_conditional287=tail<0,        _if_conditional287) {
            tail+=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 461, 3114)), "./neo-c.h", 461, 3115))->len+1;
        }
        if(_if_conditional288=head>tail,        _if_conditional288) {
            tmp_256=tail;
            tail=head;
            head=tmp_256;
        }
        if(_if_conditional289=head<0,        _if_conditional289) {
            head=0;
        }
        if(_if_conditional290=tail>((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 474, 3116)), "./neo-c.h", 474, 3117))->len,        _if_conditional290) {
            tail=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 475, 3118)), "./neo-c.h", 475, 3119))->len;
        }
        if(_if_conditional291=head==tail,        _if_conditional291) {
            __result132__ = __result_obj__ = self;
            return __result132__;
        }
        if(_if_conditional292=head==0&&tail==((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 482, 3120)), "./neo-c.h", 482, 3121))->len,        _if_conditional292) {
            (come_push_stackframe("./neo-c.h", 484, 3138),__exception_result_var_b532=list$1CVALUEph_reset(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 484, 3122)), "./neo-c.h", 484, 3123))), come_pop_stackframe(), __exception_result_var_b532);
        }
        else {
            if(_if_conditional294=head==0,            _if_conditional294) {
                it_259=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 487, 3139)), "./neo-c.h", 487, 3140))->head;
                i_260=0;
                while(_while_condtional23=it_259!=((void*)0),                _while_condtional23) {
                    if(_if_conditional295=i_260<tail,                    _if_conditional295) {
                        prev_it_261=it_259;
                        it_259=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(it_259, "./neo-c.h", 493, 3141)), "./neo-c.h", 493, 3142))->next;
                        i_260++;
                        come_call_finalizer3(prev_it_261,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 498, 3143)), "./neo-c.h", 498, 3144))->len--;
                    }
                    else {
                        if(_if_conditional296=i_260==tail,                        _if_conditional296) {
                            ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 501, 3145)), "./neo-c.h", 501, 3146))->head=it_259;
                            ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 502, 3147)), "./neo-c.h", 502, 3148))->head, "./neo-c.h", 502, 3149)), "./neo-c.h", 502, 3150))->prev=((void*)0);
                            break;
                        }
                        else {
                            it_259=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(it_259, "./neo-c.h", 506, 3151)), "./neo-c.h", 506, 3152))->next;
                            i_260++;
                        }
                    }
                }
            }
            else {
                if(_if_conditional297=tail==((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 511, 3153)), "./neo-c.h", 511, 3154))->len,                _if_conditional297) {
                    it_262=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 512, 3155)), "./neo-c.h", 512, 3156))->head;
                    i_263=0;
                    while(_while_condtional24=it_262!=((void*)0),                    _while_condtional24) {
                        if(_if_conditional298=i_263==head,                        _if_conditional298) {
                            ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 516, 3157)), "./neo-c.h", 516, 3158))->tail=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(it_262, "./neo-c.h", 516, 3159)), "./neo-c.h", 516, 3160))->prev;
                            ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 517, 3161)), "./neo-c.h", 517, 3162))->tail, "./neo-c.h", 517, 3163)), "./neo-c.h", 517, 3164))->next=((void*)0);
                        }
                        if(_if_conditional299=i_263>=head,                        _if_conditional299) {
                            prev_it_264=it_262;
                            it_262=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(it_262, "./neo-c.h", 523, 3165)), "./neo-c.h", 523, 3166))->next;
                            i_263++;
                            come_call_finalizer3(prev_it_264,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                            ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 528, 3167)), "./neo-c.h", 528, 3168))->len--;
                        }
                        else {
                            it_262=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(it_262, "./neo-c.h", 531, 3169)), "./neo-c.h", 531, 3170))->next;
                            i_263++;
                        }
                    }
                }
                else {
                    it_265=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 537, 3171)), "./neo-c.h", 537, 3172))->head;
                    head_prev_it_266=((void*)0);
                    tail_it_267=((void*)0);
                    i_268=0;
                    while(_while_condtional25=it_265!=((void*)0),                    _while_condtional25) {
                        if(_if_conditional300=i_268==head,                        _if_conditional300) {
                            head_prev_it_266=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(it_265, "./neo-c.h", 546, 3173)), "./neo-c.h", 546, 3174))->prev;
                        }
                        if(_if_conditional301=i_268==tail,                        _if_conditional301) {
                            tail_it_267=it_265;
                        }
                        if(_if_conditional302=i_268>=head&&i_268<tail,                        _if_conditional302) {
                            prev_it_269=it_265;
                            it_265=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(it_265, "./neo-c.h", 556, 3175)), "./neo-c.h", 556, 3176))->next;
                            i_268++;
                            come_call_finalizer3(prev_it_269,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                            ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 561, 3177)), "./neo-c.h", 561, 3178))->len--;
                        }
                        else {
                            it_265=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(it_265, "./neo-c.h", 564, 3179)), "./neo-c.h", 564, 3180))->next;
                            i_268++;
                        }
                    }
                    if(_if_conditional303=head_prev_it_266!=((void*)0),                    _if_conditional303) {
                        ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(head_prev_it_266, "./neo-c.h", 570, 3181)), "./neo-c.h", 570, 3182))->next=tail_it_267;
                    }
                    if(_if_conditional304=tail_it_267!=((void*)0),                    _if_conditional304) {
                        ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(tail_it_267, "./neo-c.h", 573, 3183)), "./neo-c.h", 573, 3184))->prev=head_prev_it_266;
                    }
                }
            }
        }
        __result134__ = __result_obj__ = self;
        return __result134__;
}

static struct list$1CVALUEph* list$1CVALUEph_reset(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_257;
_Bool _while_condtional22;
struct list_item$1CVALUEph* prev_it_258;
struct list$1CVALUEph* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_257, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_258, 0, sizeof(struct list_item$1CVALUEph*));
                it_257=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 426, 3124)), "./neo-c.h", 426, 3125))->head;
                while(_while_condtional22=it_257!=((void*)0),                _while_condtional22) {
                    prev_it_258=it_257;
                    it_257=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(it_257, "./neo-c.h", 429, 3126)), "./neo-c.h", 429, 3127))->next;
                    come_call_finalizer3(prev_it_258,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 433, 3132)), "./neo-c.h", 433, 3133))->head=((void*)0);
                ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 434, 3134)), "./neo-c.h", 434, 3135))->tail=((void*)0);
                ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 436, 3136)), "./neo-c.h", 436, 3137))->len=0;
                __result133__ = __result_obj__ = self;
                return __result133__;
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional293;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional293=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0, 3128)), "list_item$1CVALUEphp_finalize", 0, 3129))->item!=((void*)0),                        _if_conditional293) {
                            come_call_finalizer3(((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0, 3130)), "list_item$1CVALUEphp_finalize", 0, 3131))->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

struct CVALUE* get_value_from_stack(int offset, struct sInfo* info){
void* __result_obj__;
char* __dec_obj52;
struct CVALUE* __exception_result_var_b535;
struct CVALUE* __exception_result_var_b538;
void* right_value251;
struct CVALUE* result_270;
_Bool _if_conditional311;
struct CVALUE* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
right_value251 = (void*)0;
memset(&result_270, 0, sizeof(struct CVALUE*));
    __dec_obj52=((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 1047, 3186)), "03output_code.c", 1047, 3187))->module, "03output_code.c", 1047, 3188)), "03output_code.c", 1047, 3189))->mLastCode;
    ((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 1047, 3186)), "03output_code.c", 1047, 3187))->module, "03output_code.c", 1047, 3188)), "03output_code.c", 1047, 3189))->mLastCode=((void*)0);
    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_270=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value251=(come_push_stackframe("03output_code.c", 1050, 3220),__exception_result_var_b538=CVALUE_clone((come_push_stackframe("03output_code.c", 1050, 3201),__exception_result_var_b535=list$1CVALUEphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 1050, 3190)), "03output_code.c", 1050, 3191))->stack,offset), come_pop_stackframe(), __exception_result_var_b535)), come_pop_stackframe(), __exception_result_var_b538))));
    come_call_finalizer3(right_value251,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional311=result_270==((void*)0),    _if_conditional311) {
        (come_push_stackframe("03output_code.c", 1053,3221),err_msg(info,"invalid stack value"),come_pop_stackframe());
        (come_push_stackframe("03output_code.c", 1054,3222),exit(2),come_pop_stackframe());
    }
    __result139__ = __result_obj__ = result_270;
    come_call_finalizer3(result_270,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    return __result139__;
    come_call_finalizer3(result_270,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool _if_conditional305;
struct list_item$1CVALUEph* it_271;
int i_272;
_Bool _while_condtional26;
_Bool _if_conditional306;
struct CVALUE* __result135__;
struct CVALUE* default_value_273;
void* __exception_result_var_b534;
struct CVALUE* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_271, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_272, 0, sizeof(int));
memset(&default_value_273, 0, sizeof(struct CVALUE*));
        if(_if_conditional305=position<0,        _if_conditional305) {
            position+=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 676, 3192)), "./neo-c.h", 676, 3193))->len;
        }
        it_271=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 679, 3194)), "./neo-c.h", 679, 3195))->head;
        i_272=0;
        while(_while_condtional26=it_271!=((void*)0),        _while_condtional26) {
            if(_if_conditional306=position==i_272,            _if_conditional306) {
                __result135__ = __result_obj__ = ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(it_271, "./neo-c.h", 683, 3196)), "./neo-c.h", 683, 3197))->item;
                return __result135__;
            }
            it_271=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(it_271, "./neo-c.h", 685, 3198)), "./neo-c.h", 685, 3199))->next;
            i_272++;
        }
        (come_push_stackframe("./neo-c.h", 690, 3200),__exception_result_var_b534=memset(&default_value_273,0,sizeof(struct CVALUE*)), come_pop_stackframe(), __exception_result_var_b534);
        __result136__ = __result_obj__ = default_value_273;
        come_call_finalizer3(default_value_273,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        return __result136__;
        come_call_finalizer3(default_value_273,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional307;
struct CVALUE* __result137__;
void* right_value248;
struct CVALUE* result_274;
_Bool _if_conditional308;
char* __exception_result_var_b536;
void* right_value249;
char* __dec_obj53;
_Bool _if_conditional309;
struct sType* __exception_result_var_b537;
void* right_value250;
struct sType* __dec_obj54;
_Bool _if_conditional310;
struct CVALUE* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
right_value248 = (void*)0;
memset(&result_274, 0, sizeof(struct CVALUE*));
right_value249 = (void*)0;
right_value250 = (void*)0;
        if(_if_conditional307=self==(void*)0,        _if_conditional307) {
            __result137__ = __result_obj__ = (void*)0;
            return __result137__;
        }
        result_274=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value248=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"))));
        come_call_finalizer3(right_value248,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional308=self!=((void*)0)&&((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_clone", 4, 3202)), "CVALUE_clone", 4, 3203))->c_value!=((void*)0),        _if_conditional308) {
            __dec_obj53=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(result_274, "CVALUE_clone", 4, 3204)), "CVALUE_clone", 4, 3205))->c_value;
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(result_274, "CVALUE_clone", 4, 3204)), "CVALUE_clone", 4, 3205))->c_value=(char*)come_increment_ref_count(((char*)(right_value249=(come_push_stackframe("CVALUE_clone", 4, 3208),__exception_result_var_b536=string_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_clone", 4, 3206)), "CVALUE_clone", 4, 3207))->c_value), come_pop_stackframe(), __exception_result_var_b536))));
            __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional309=self!=((void*)0)&&((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_clone", 5, 3209)), "CVALUE_clone", 5, 3210))->type!=((void*)0),        _if_conditional309) {
            __dec_obj54=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(result_274, "CVALUE_clone", 5, 3211)), "CVALUE_clone", 5, 3212))->type;
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(result_274, "CVALUE_clone", 5, 3211)), "CVALUE_clone", 5, 3212))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value250=(come_push_stackframe("CVALUE_clone", 5, 3215),__exception_result_var_b537=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_clone", 5, 3213)), "CVALUE_clone", 5, 3214))->type), come_pop_stackframe(), __exception_result_var_b537))));
            come_call_finalizer3(__dec_obj54,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value250,sType_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional310=self!=((void*)0),        _if_conditional310) {
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(result_274, "CVALUE_clone", 6, 3216)), "CVALUE_clone", 6, 3217))->var=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_clone", 6, 3218)), "CVALUE_clone", 6, 3219))->var;
        }
        __result138__ = __result_obj__ = result_274;
        come_call_finalizer3(result_274,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        return __result138__;
        come_call_finalizer3(result_274,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

void transpiler_clear_last_code(struct sInfo* info){
void* __result_obj__;
char* __dec_obj55;
char* __dec_obj56;
char* __dec_obj57;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj55=((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 1062, 3223)), "03output_code.c", 1062, 3224))->module, "03output_code.c", 1062, 3225)), "03output_code.c", 1062, 3226))->mLastCode;
    ((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 1062, 3223)), "03output_code.c", 1062, 3224))->module, "03output_code.c", 1062, 3225)), "03output_code.c", 1062, 3226))->mLastCode=((void*)0);
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj56=((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 1063, 3227)), "03output_code.c", 1063, 3228))->module, "03output_code.c", 1063, 3229)), "03output_code.c", 1063, 3230))->mLastCode2;
    ((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 1063, 3227)), "03output_code.c", 1063, 3228))->module, "03output_code.c", 1063, 3229)), "03output_code.c", 1063, 3230))->mLastCode2=((void*)0);
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj57=((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 1064, 3231)), "03output_code.c", 1064, 3232))->module, "03output_code.c", 1064, 3233)), "03output_code.c", 1064, 3234))->mLastCode3;
    ((struct sModule*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "03output_code.c", 1064, 3231)), "03output_code.c", 1064, 3232))->module, "03output_code.c", 1064, 3233)), "03output_code.c", 1064, 3234))->mLastCode3=((void*)0);
    __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
}

