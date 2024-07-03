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

struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info);

_Bool sLambdaNode_terminated(struct sLambdaNode* self);

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

_Bool sFunNode_terminated(struct sFunNode* self);

char* sFunNode_kind(struct sFunNode* self);

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info);

static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline);

static void sGenericsFun_finalize(struct sGenericsFun* self);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last);

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
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










struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__;
char* __dec_obj12;
struct sLambdaNode* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
    # 9 "05function.c"
    self->mFun=fun;
    # 10 "05function.c"
    self->sline=info->sline;
    # 11 "05function.c"
    __dec_obj12=self->sname;
    self->sname=(char*)come_increment_ref_count(info->sname);
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 14 "05function.c"
    __result52__ = __result_obj__ = self;
    come_call_finalizer3(self,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result52__;
    come_call_finalizer3(self,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sLambdaNode_terminated(struct sLambdaNode* self){
void* __result_obj__;
_Bool __result53__;
memset(&__result_obj__, 0, sizeof(void*));
    # 16 "05function.c"
    __result53__ = (_Bool)0;
    return __result53__;
}

char* sLambdaNode_kind(struct sLambdaNode* self){
void* __result_obj__;
void* right_value79;
char* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
    # 21 "05function.c"
    __result54__ = __result_obj__ = ((char*)(right_value79=__builtin_string("sLambdaNode")));
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result54__;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
void* __result_obj__;
struct sFun* come_fun_47;
void* right_value80;
void* right_value81;
struct sType* result_type_48;
void* right_value82;
void* right_value83;
_Bool _if_conditional37;
void* right_value84;
struct CVALUE* come_value_55;
void* right_value85;
char* __dec_obj13;
void* right_value121;
struct sType* __dec_obj37;
_Bool __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_fun_47, 0, sizeof(struct sFun*));
right_value80 = (void*)0;
right_value81 = (void*)0;
memset(&result_type_48, 0, sizeof(struct sType*));
right_value82 = (void*)0;
right_value83 = (void*)0;
right_value84 = (void*)0;
memset(&come_value_55, 0, sizeof(struct CVALUE*));
right_value85 = (void*)0;
right_value121 = (void*)0;
    # 26 "05function.c"
    come_fun_47=info->come_fun;
    # 27 "05function.c"
    info->come_fun=self->mFun;
    # 29 "05function.c"
    result_type_48=(struct sType*)come_increment_ref_count(((struct sType*)(right_value81=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value80=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 29, "sType")))),"void*",(_Bool)0,info))));
    come_call_finalizer3(right_value80,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value81,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 31 "05function.c"
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value82=make_define_var(result_type_48,"__result_obj__",(_Bool)0,info))));
    right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 32 "05function.c"
    add_come_code_at_function_head2(info,"memset(&__result_obj__, 0, sizeof(%s));\n",((char*)(right_value83=make_type_name_string(result_type_48,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 38 "05function.c"
    # 34 "05function.c"
    if(self->mFun->mBlock) {
        # 35 "05function.c"
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0);
    }
    # 38 "05function.c"
    come_value_55=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value84=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 38, "CVALUE"))));
    come_call_finalizer3(right_value84,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 40 "05function.c"
    __dec_obj13=come_value_55->c_value;
    come_value_55->c_value=(char*)come_increment_ref_count(((char*)(right_value85=xsprintf("%s",self->mFun->mName))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 41 "05function.c"
    __dec_obj37=come_value_55->type;
    come_value_55->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value121=sType_clone(self->mFun->mLambdaType))));
    come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value121,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 42 "05function.c"
    come_value_55->var=((void*)0);
    # 44 "05function.c"
    add_come_last_code(info,"%s;\n",come_value_55->c_value);
    # 46 "05function.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_55));
    # 48 "05function.c"
    info->come_fun=come_fun_47;
    # 50 "05function.c"
    __result74__ = (_Bool)1;
    come_call_finalizer3(result_type_48,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_55,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result74__;
    come_call_finalizer3(result_type_48,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_55,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional20;
_Bool _if_conditional22;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional29;
_Bool _if_conditional30;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sType_finalize"
        # 0 "sType_finalize"
        if(_if_conditional20=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional20) {
            # 0 "sType_finalize"
            come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 2 "sType_finalize"
        # 1 "sType_finalize"
        if(_if_conditional22=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional22) {
            # 1 "sType_finalize"
            come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 3 "sType_finalize"
        # 2 "sType_finalize"
        if(_if_conditional24=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional24) {
            # 2 "sType_finalize"
            come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 4 "sType_finalize"
        # 3 "sType_finalize"
        if(_if_conditional25=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional25) {
            # 3 "sType_finalize"
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 5 "sType_finalize"
        # 4 "sType_finalize"
        if(_if_conditional26=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional26) {
            # 4 "sType_finalize"
            come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 6 "sType_finalize"
        # 5 "sType_finalize"
        if(_if_conditional27=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional27) {
            # 5 "sType_finalize"
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 7 "sType_finalize"
        # 6 "sType_finalize"
        if(_if_conditional29=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional29) {
            # 6 "sType_finalize"
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 8 "sType_finalize"
        # 7 "sType_finalize"
        if(_if_conditional30=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional30) {
            # 7 "sType_finalize"
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 9 "sType_finalize"
        # 8 "sType_finalize"
        if(_if_conditional32=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional32) {
            # 8 "sType_finalize"
            come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 10 "sType_finalize"
        # 9 "sType_finalize"
        if(_if_conditional33=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional33) {
            # 9 "sType_finalize"
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        # 11 "sType_finalize"
        # 10 "sType_finalize"
        if(_if_conditional34=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional34) {
            # 10 "sType_finalize"
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        # 12 "sType_finalize"
        # 11 "sType_finalize"
        if(_if_conditional35=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional35) {
            # 11 "sType_finalize"
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 13 "sType_finalize"
        # 12 "sType_finalize"
        if(_if_conditional36=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional36) {
            # 12 "sType_finalize"
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
                # 114 "./neo-c.h"
                it_49=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional7=it_49!=((void*)0),                _while_condtional7) {
                    # 116 "./neo-c.h"
                    prev_it_50=it_49;
                    # 117 "./neo-c.h"
                    it_49=it_49->next;
                    # 118 "./neo-c.h"
                    come_call_finalizer3(prev_it_50,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1sTypephp_finalize"
                        # 0 "list_item$1sTypephp_finalize"
                        if(_if_conditional21=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional21) {
                            # 0 "list_item$1sTypephp_finalize"
                            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional23;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "tuple1$1sTypephp_finalize"
                # 0 "tuple1$1sTypephp_finalize"
                if(_if_conditional23=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional23) {
                    # 0 "tuple1$1sTypephp_finalize"
                    come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
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
                # 114 "./neo-c.h"
                it_51=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional8=it_51!=((void*)0),                _while_condtional8) {
                    # 116 "./neo-c.h"
                    prev_it_52=it_51;
                    # 117 "./neo-c.h"
                    it_51=it_51->next;
                    # 118 "./neo-c.h"
                    come_call_finalizer3(prev_it_52,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional28;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1sNodephp_finalize"
                        # 0 "list_item$1sNodephp_finalize"
                        if(_if_conditional28=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional28) {
                            # 0 "list_item$1sNodephp_finalize"
                            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
                # 114 "./neo-c.h"
                it_53=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional9=it_53!=((void*)0),                _while_condtional9) {
                    # 116 "./neo-c.h"
                    prev_it_54=it_53;
                    # 117 "./neo-c.h"
                    it_53=it_53->next;
                    # 118 "./neo-c.h"
                    come_call_finalizer3(prev_it_54,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional31;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1charphp_finalize"
                        # 0 "list_item$1charphp_finalize"
                        if(_if_conditional31=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional31) {
                            # 0 "list_item$1charphp_finalize"
                            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional38;
_Bool _if_conditional39;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "CVALUE_finalize"
        # 0 "CVALUE_finalize"
        if(_if_conditional38=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional38) {
            # 0 "CVALUE_finalize"
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "CVALUE_finalize"
        # 1 "CVALUE_finalize"
        if(_if_conditional39=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional39) {
            # 1 "CVALUE_finalize"
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional40;
struct sType* __result55__;
void* right_value86;
struct sType* result_56;
_Bool _if_conditional41;
_Bool _if_conditional42;
void* right_value93;
struct list$1sTypeph* __dec_obj17;
_Bool _if_conditional46;
void* right_value96;
struct tuple1$1sTypeph* __dec_obj19;
_Bool _if_conditional50;
void* right_value97;
struct tuple1$1sTypeph* __dec_obj20;
_Bool _if_conditional51;
void* right_value98;
char* __dec_obj21;
_Bool _if_conditional52;
void* right_value99;
struct list$1sTypeph* __dec_obj22;
_Bool _if_conditional53;
void* right_value107;
struct list$1sNodeph* __dec_obj26;
_Bool _if_conditional66;
_Bool _if_conditional67;
void* right_value108;
struct list$1sTypeph* __dec_obj27;
_Bool _if_conditional68;
void* right_value115;
struct list$1charph* __dec_obj31;
_Bool _if_conditional72;
void* right_value116;
struct tuple1$1sTypeph* __dec_obj32;
_Bool _if_conditional73;
_Bool _if_conditional74;
void* right_value117;
struct sNode* __dec_obj33;
_Bool _if_conditional75;
_Bool _if_conditional76;
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
void* right_value118;
struct sNode* __dec_obj34;
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
void* right_value119;
char* __dec_obj35;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
void* right_value120;
char* __dec_obj36;
_Bool _if_conditional113;
struct sType* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
memset(&result_56, 0, sizeof(struct sType*));
right_value93 = (void*)0;
right_value96 = (void*)0;
right_value97 = (void*)0;
right_value98 = (void*)0;
right_value99 = (void*)0;
right_value107 = (void*)0;
right_value108 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value118 = (void*)0;
right_value119 = (void*)0;
right_value120 = (void*)0;
        # 3 "sType_clone"
        # 2 "sType_clone"
        if(_if_conditional40=self==(void*)0,        _if_conditional40) {
            # 2 "sType_clone"
            __result55__ = __result_obj__ = (void*)0;
            return __result55__;
        }
        # 3 "sType_clone"
        result_56=(struct sType*)come_increment_ref_count(((struct sType*)(right_value86=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer3(right_value86,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 5 "sType_clone"
        # 4 "sType_clone"
        if(_if_conditional41=self!=((void*)0),        _if_conditional41) {
            # 4 "sType_clone"
            result_56->mClass=self->mClass;
        }
        # 6 "sType_clone"
        # 5 "sType_clone"
        if(_if_conditional42=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional42) {
            # 5 "sType_clone"
            __dec_obj17=result_56->mMultipleTypes;
            result_56->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value93=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer3(__dec_obj17,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value93,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 7 "sType_clone"
        # 6 "sType_clone"
        if(_if_conditional46=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional46) {
            # 6 "sType_clone"
            __dec_obj19=result_56->mNoSolvedGenericsType;
            result_56->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value96=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer3(__dec_obj19,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value96,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 8 "sType_clone"
        # 7 "sType_clone"
        if(_if_conditional50=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional50) {
            # 7 "sType_clone"
            __dec_obj20=result_56->mOriginalLoadVarType;
            result_56->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value97=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer3(__dec_obj20,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value97,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 9 "sType_clone"
        # 8 "sType_clone"
        if(_if_conditional51=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional51) {
            # 8 "sType_clone"
            __dec_obj21=result_56->mGenericsName;
            result_56->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value98=string_clone(self->mGenericsName))));
            __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 10 "sType_clone"
        # 9 "sType_clone"
        if(_if_conditional52=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional52) {
            # 9 "sType_clone"
            __dec_obj22=result_56->mGenericsTypes;
            result_56->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value99=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer3(__dec_obj22,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value99,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 11 "sType_clone"
        # 10 "sType_clone"
        if(_if_conditional53=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional53) {
            # 10 "sType_clone"
            __dec_obj26=result_56->mArrayNum;
            result_56->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value107=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer3(__dec_obj26,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value107,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 12 "sType_clone"
        # 11 "sType_clone"
        if(_if_conditional66=self!=((void*)0),        _if_conditional66) {
            # 11 "sType_clone"
            result_56->mOmitArrayNum=self->mOmitArrayNum;
        }
        # 13 "sType_clone"
        # 12 "sType_clone"
        if(_if_conditional67=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional67) {
            # 12 "sType_clone"
            __dec_obj27=result_56->mParamTypes;
            result_56->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value108=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer3(__dec_obj27,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value108,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 14 "sType_clone"
        # 13 "sType_clone"
        if(_if_conditional68=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional68) {
            # 13 "sType_clone"
            __dec_obj31=result_56->mParamNames;
            result_56->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value115=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer3(__dec_obj31,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value115,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 15 "sType_clone"
        # 14 "sType_clone"
        if(_if_conditional72=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional72) {
            # 14 "sType_clone"
            __dec_obj32=result_56->mResultType;
            result_56->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value116=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer3(__dec_obj32,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value116,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 16 "sType_clone"
        # 15 "sType_clone"
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            # 15 "sType_clone"
            result_56->mVarArgs=self->mVarArgs;
        }
        # 17 "sType_clone"
        # 16 "sType_clone"
        if(_if_conditional74=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional74) {
            # 16 "sType_clone"
            __dec_obj33=result_56->mAlignas;
            result_56->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value117=sNode_clone(self->mAlignas))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value117) { right_value117 = come_decrement_ref_count2(right_value117, ((struct sNode*)right_value117)->finalize, ((struct sNode*)right_value117)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 18 "sType_clone"
        # 17 "sType_clone"
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            # 17 "sType_clone"
            result_56->mUnsigned=self->mUnsigned;
        }
        # 19 "sType_clone"
        # 18 "sType_clone"
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            # 18 "sType_clone"
            result_56->mShort=self->mShort;
        }
        # 20 "sType_clone"
        # 19 "sType_clone"
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            # 19 "sType_clone"
            result_56->mLong=self->mLong;
        }
        # 21 "sType_clone"
        # 20 "sType_clone"
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            # 20 "sType_clone"
            result_56->mLongLong=self->mLongLong;
        }
        # 22 "sType_clone"
        # 21 "sType_clone"
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            # 21 "sType_clone"
            result_56->mConstant=self->mConstant;
        }
        # 23 "sType_clone"
        # 22 "sType_clone"
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            # 22 "sType_clone"
            result_56->mRegister=self->mRegister;
        }
        # 24 "sType_clone"
        # 23 "sType_clone"
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            # 23 "sType_clone"
            result_56->mVolatile=self->mVolatile;
        }
        # 25 "sType_clone"
        # 24 "sType_clone"
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            # 24 "sType_clone"
            result_56->mStatic=self->mStatic;
        }
        # 26 "sType_clone"
        # 25 "sType_clone"
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            # 25 "sType_clone"
            result_56->mRecord=self->mRecord;
        }
        # 27 "sType_clone"
        # 26 "sType_clone"
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            # 26 "sType_clone"
            result_56->mExtern=self->mExtern;
        }
        # 28 "sType_clone"
        # 27 "sType_clone"
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            # 27 "sType_clone"
            result_56->mRestrict=self->mRestrict;
        }
        # 29 "sType_clone"
        # 28 "sType_clone"
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            # 28 "sType_clone"
            result_56->mImmutable=self->mImmutable;
        }
        # 30 "sType_clone"
        # 29 "sType_clone"
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            # 29 "sType_clone"
            result_56->mHeap=self->mHeap;
        }
        # 31 "sType_clone"
        # 30 "sType_clone"
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            # 30 "sType_clone"
            result_56->mDummyHeap=self->mDummyHeap;
        }
        # 32 "sType_clone"
        # 31 "sType_clone"
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            # 31 "sType_clone"
            result_56->mDelegate=self->mDelegate;
        }
        # 33 "sType_clone"
        # 32 "sType_clone"
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            # 32 "sType_clone"
            result_56->mShare=self->mShare;
        }
        # 34 "sType_clone"
        # 33 "sType_clone"
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            # 33 "sType_clone"
            result_56->mClone=self->mClone;
        }
        # 35 "sType_clone"
        # 34 "sType_clone"
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            # 34 "sType_clone"
            result_56->mNoHeap=self->mNoHeap;
        }
        # 36 "sType_clone"
        # 35 "sType_clone"
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            # 35 "sType_clone"
            result_56->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        # 37 "sType_clone"
        # 36 "sType_clone"
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            # 36 "sType_clone"
            result_56->mRefference=self->mRefference;
        }
        # 38 "sType_clone"
        # 37 "sType_clone"
        if(_if_conditional95=self!=((void*)0),        _if_conditional95) {
            # 37 "sType_clone"
            result_56->mException=self->mException;
        }
        # 39 "sType_clone"
        # 38 "sType_clone"
        if(_if_conditional96=self!=((void*)0),        _if_conditional96) {
            # 38 "sType_clone"
            result_56->mPointerNum=self->mPointerNum;
        }
        # 40 "sType_clone"
        # 39 "sType_clone"
        if(_if_conditional97=self!=((void*)0),        _if_conditional97) {
            # 39 "sType_clone"
            result_56->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        # 41 "sType_clone"
        # 40 "sType_clone"
        if(_if_conditional98=self!=((void*)0),        _if_conditional98) {
            # 40 "sType_clone"
            result_56->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        # 42 "sType_clone"
        # 41 "sType_clone"
        if(_if_conditional99=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional99) {
            # 41 "sType_clone"
            __dec_obj34=result_56->mSizeNum;
            result_56->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value118=sNode_clone(self->mSizeNum))));
            if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value118) { right_value118 = come_decrement_ref_count2(right_value118, ((struct sNode*)right_value118)->finalize, ((struct sNode*)right_value118)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 43 "sType_clone"
        # 42 "sType_clone"
        if(_if_conditional100=self!=((void*)0),        _if_conditional100) {
            # 42 "sType_clone"
            result_56->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        # 44 "sType_clone"
        # 43 "sType_clone"
        if(_if_conditional101=self!=((void*)0),        _if_conditional101) {
            # 43 "sType_clone"
            result_56->mTypeOfExpression=self->mTypeOfExpression;
        }
        # 45 "sType_clone"
        # 44 "sType_clone"
        if(_if_conditional102=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional102) {
            # 44 "sType_clone"
            __dec_obj35=result_56->mOriginalTypeName;
            result_56->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value119=string_clone(self->mOriginalTypeName))));
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 46 "sType_clone"
        # 45 "sType_clone"
        if(_if_conditional103=self!=((void*)0),        _if_conditional103) {
            # 45 "sType_clone"
            result_56->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        # 47 "sType_clone"
        # 46 "sType_clone"
        if(_if_conditional104=self!=((void*)0),        _if_conditional104) {
            # 46 "sType_clone"
            result_56->mFunctionParam=self->mFunctionParam;
        }
        # 48 "sType_clone"
        # 47 "sType_clone"
        if(_if_conditional105=self!=((void*)0),        _if_conditional105) {
            # 47 "sType_clone"
            result_56->mAllocaValue=self->mAllocaValue;
        }
        # 49 "sType_clone"
        # 48 "sType_clone"
        if(_if_conditional106=self!=((void*)0),        _if_conditional106) {
            # 48 "sType_clone"
            result_56->mGenericsStruct=self->mGenericsStruct;
        }
        # 50 "sType_clone"
        # 49 "sType_clone"
        if(_if_conditional107=self!=((void*)0),        _if_conditional107) {
            # 49 "sType_clone"
            result_56->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        # 51 "sType_clone"
        # 50 "sType_clone"
        if(_if_conditional108=self!=((void*)0),        _if_conditional108) {
            # 50 "sType_clone"
            result_56->mComeMemCore=self->mComeMemCore;
        }
        # 52 "sType_clone"
        # 51 "sType_clone"
        if(_if_conditional109=self!=((void*)0),        _if_conditional109) {
            # 51 "sType_clone"
            result_56->mInline=self->mInline;
        }
        # 53 "sType_clone"
        # 52 "sType_clone"
        if(_if_conditional110=self!=((void*)0),        _if_conditional110) {
            # 52 "sType_clone"
            result_56->mNullValue=self->mNullValue;
        }
        # 54 "sType_clone"
        # 53 "sType_clone"
        if(_if_conditional111=self!=((void*)0),        _if_conditional111) {
            # 53 "sType_clone"
            result_56->mGuardValue=self->mGuardValue;
        }
        # 55 "sType_clone"
        # 54 "sType_clone"
        if(_if_conditional112=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional112) {
            # 54 "sType_clone"
            __dec_obj36=result_56->mAsmName;
            result_56->mAsmName=(char*)come_increment_ref_count(((char*)(right_value120=string_clone(self->mAsmName))));
            __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 56 "sType_clone"
        # 55 "sType_clone"
        if(_if_conditional113=self!=((void*)0),        _if_conditional113) {
            # 55 "sType_clone"
            result_56->mArrayPointerType=self->mArrayPointerType;
        }
        # 56 "sType_clone"
        __result72__ = __result_obj__ = result_56;
        come_call_finalizer3(result_56,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result72__;
        come_call_finalizer3(result_56,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional43;
struct list$1sTypeph* __result56__;
void* right_value87;
void* right_value88;
struct list$1sTypeph* result_57;
struct list_item$1sTypeph* it_58;
_Bool _while_condtional10;
void* right_value92;
struct list$1sTypeph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
right_value87 = (void*)0;
right_value88 = (void*)0;
memset(&result_57, 0, sizeof(struct list$1sTypeph*));
memset(&it_58, 0, sizeof(struct list_item$1sTypeph*));
right_value92 = (void*)0;
                # 133 "./neo-c.h"
                # 130 "./neo-c.h"
                if(_if_conditional43=self==((void*)0),                _if_conditional43) {
                    # 131 "./neo-c.h"
                    __result56__ = __result_obj__ = ((void*)0);
                    return __result56__;
                }
                # 133 "./neo-c.h"
                result_57=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value88=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value87=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 133, "list$1sTypeph"))))))));
                come_call_finalizer3(right_value87,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value88,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                # 135 "./neo-c.h"
                it_58=self->head;
                # 142 "./neo-c.h"
                while(_while_condtional10=it_58!=((void*)0),                _while_condtional10) {
                    # 137 "./neo-c.h"
                    list$1sTypeph_add(result_57,(struct sType*)come_increment_ref_count(((struct sType*)(right_value92=sType_clone(it_58->item)))));
                    come_call_finalizer3(right_value92,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 139 "./neo-c.h"
                    it_58=it_58->next;
                }
                # 142 "./neo-c.h"
                __result59__ = __result_obj__ = result_57;
                come_call_finalizer3(result_57,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result59__;
                come_call_finalizer3(result_57,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 95 "./neo-c.h"
                    self->head=((void*)0);
                    # 96 "./neo-c.h"
                    self->tail=((void*)0);
                    # 97 "./neo-c.h"
                    self->len=0;
                    # 99 "./neo-c.h"
                    __result57__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result57__;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional44;
void* right_value89;
struct list_item$1sTypeph* litem_59;
struct sType* __dec_obj14;
_Bool _if_conditional45;
void* right_value90;
struct list_item$1sTypeph* litem_60;
struct sType* __dec_obj15;
void* right_value91;
struct list_item$1sTypeph* litem_61;
struct sType* __dec_obj16;
struct list$1sTypeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
memset(&litem_59, 0, sizeof(struct list_item$1sTypeph*));
right_value90 = (void*)0;
memset(&litem_60, 0, sizeof(struct list_item$1sTypeph*));
right_value91 = (void*)0;
memset(&litem_61, 0, sizeof(struct list_item$1sTypeph*));
                        # 177 "./neo-c.h"
                        # 146 "./neo-c.h"
                        if(_if_conditional44=self->len==0,                        _if_conditional44) {
                            # 147 "./neo-c.h"
                            litem_59=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value89=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 147, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value89,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 149 "./neo-c.h"
                            litem_59->prev=((void*)0);
                            # 150 "./neo-c.h"
                            litem_59->next=((void*)0);
                            # 151 "./neo-c.h"
                            __dec_obj14=litem_59->item;
                            litem_59->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
                            # 153 "./neo-c.h"
                            self->tail=litem_59;
                            # 154 "./neo-c.h"
                            self->head=litem_59;
                        }
                        else {
                            # 177 "./neo-c.h"
                            # 156 "./neo-c.h"
                            if(_if_conditional45=self->len==1,                            _if_conditional45) {
                                # 157 "./neo-c.h"
                                litem_60=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value90=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 157, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value90,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 159 "./neo-c.h"
                                litem_60->prev=self->head;
                                # 160 "./neo-c.h"
                                litem_60->next=((void*)0);
                                # 161 "./neo-c.h"
                                __dec_obj15=litem_60->item;
                                litem_60->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj15,sType_finalize, 0, 0, 0, 0, (void*)0);
                                # 163 "./neo-c.h"
                                self->tail=litem_60;
                                # 164 "./neo-c.h"
                                self->head->next=litem_60;
                            }
                            else {
                                # 167 "./neo-c.h"
                                litem_61=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value91=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 167, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value91,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 169 "./neo-c.h"
                                litem_61->prev=self->tail;
                                # 170 "./neo-c.h"
                                litem_61->next=((void*)0);
                                # 171 "./neo-c.h"
                                __dec_obj16=litem_61->item;
                                litem_61->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj16,sType_finalize, 0, 0, 0, 0, (void*)0);
                                # 173 "./neo-c.h"
                                self->tail->next=litem_61;
                                # 174 "./neo-c.h"
                                self->tail=litem_61;
                            }
                        }
                        # 177 "./neo-c.h"
                        self->len++;
                        # 179 "./neo-c.h"
                        __result58__ = __result_obj__ = self;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result58__;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_62;
_Bool _while_condtional11;
struct list_item$1sTypeph* prev_it_63;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_62, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_63, 0, sizeof(struct list_item$1sTypeph*));
                # 114 "./neo-c.h"
                it_62=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional11=it_62!=((void*)0),                _while_condtional11) {
                    # 116 "./neo-c.h"
                    prev_it_63=it_62;
                    # 117 "./neo-c.h"
                    it_62=it_62->next;
                    # 118 "./neo-c.h"
                    come_call_finalizer3(prev_it_63,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional47;
struct tuple1$1sTypeph* __result60__;
void* right_value94;
struct tuple1$1sTypeph* result_64;
_Bool _if_conditional49;
void* right_value95;
struct sType* __dec_obj18;
struct tuple1$1sTypeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
memset(&result_64, 0, sizeof(struct tuple1$1sTypeph*));
right_value95 = (void*)0;
                # 3 "tuple1$1sTypephp_clone"
                # 2 "tuple1$1sTypephp_clone"
                if(_if_conditional47=self==(void*)0,                _if_conditional47) {
                    # 2 "tuple1$1sTypephp_clone"
                    __result60__ = __result_obj__ = (void*)0;
                    return __result60__;
                }
                # 3 "tuple1$1sTypephp_clone"
                result_64=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value94=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer3(right_value94,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                # 5 "tuple1$1sTypephp_clone"
                # 4 "tuple1$1sTypephp_clone"
                if(_if_conditional49=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional49) {
                    # 4 "tuple1$1sTypephp_clone"
                    __dec_obj18=result_64->v1;
                    result_64->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value95=sType_clone(self->v1))));
                    come_call_finalizer3(__dec_obj18,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value95,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                # 5 "tuple1$1sTypephp_clone"
                __result61__ = __result_obj__ = result_64;
                come_call_finalizer3(result_64,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result61__;
                come_call_finalizer3(result_64,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional48;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple1$1sTypeph_finalize"
                    # 0 "tuple1$1sTypeph_finalize"
                    if(_if_conditional48=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional48) {
                        # 0 "tuple1$1sTypeph_finalize"
                        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional54;
struct list$1sNodeph* __result62__;
void* right_value100;
void* right_value101;
struct list$1sNodeph* result_65;
struct list_item$1sNodeph* it_66;
_Bool _while_condtional12;
void* right_value106;
struct list$1sNodeph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value100 = (void*)0;
right_value101 = (void*)0;
memset(&result_65, 0, sizeof(struct list$1sNodeph*));
memset(&it_66, 0, sizeof(struct list_item$1sNodeph*));
right_value106 = (void*)0;
                # 133 "./neo-c.h"
                # 130 "./neo-c.h"
                if(_if_conditional54=self==((void*)0),                _if_conditional54) {
                    # 131 "./neo-c.h"
                    __result62__ = __result_obj__ = ((void*)0);
                    return __result62__;
                }
                # 133 "./neo-c.h"
                result_65=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value101=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value100=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 133, "list$1sNodeph"))))))));
                come_call_finalizer3(right_value100,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value101,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                # 135 "./neo-c.h"
                it_66=self->head;
                # 142 "./neo-c.h"
                while(_while_condtional12=it_66!=((void*)0),                _while_condtional12) {
                    # 137 "./neo-c.h"
                    list$1sNodeph_add(result_65,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value106=sNode_clone(it_66->item)))));
                    if(right_value106) { right_value106 = come_decrement_ref_count2(right_value106, ((struct sNode*)right_value106)->finalize, ((struct sNode*)right_value106)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 139 "./neo-c.h"
                    it_66=it_66->next;
                }
                # 142 "./neo-c.h"
                __result67__ = __result_obj__ = result_65;
                come_call_finalizer3(result_65,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result67__;
                come_call_finalizer3(result_65,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 95 "./neo-c.h"
                    self->head=((void*)0);
                    # 96 "./neo-c.h"
                    self->tail=((void*)0);
                    # 97 "./neo-c.h"
                    self->len=0;
                    # 99 "./neo-c.h"
                    __result63__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result63__;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional55;
void* right_value102;
struct list_item$1sNodeph* litem_67;
struct sNode* __dec_obj23;
_Bool _if_conditional56;
void* right_value103;
struct list_item$1sNodeph* litem_68;
struct sNode* __dec_obj24;
void* right_value104;
struct list_item$1sNodeph* litem_69;
struct sNode* __dec_obj25;
struct list$1sNodeph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value102 = (void*)0;
memset(&litem_67, 0, sizeof(struct list_item$1sNodeph*));
right_value103 = (void*)0;
memset(&litem_68, 0, sizeof(struct list_item$1sNodeph*));
right_value104 = (void*)0;
memset(&litem_69, 0, sizeof(struct list_item$1sNodeph*));
                        # 177 "./neo-c.h"
                        # 146 "./neo-c.h"
                        if(_if_conditional55=self->len==0,                        _if_conditional55) {
                            # 147 "./neo-c.h"
                            litem_67=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value102=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 147, "list_item$1sNodeph"))));
                            come_call_finalizer3(right_value102,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 149 "./neo-c.h"
                            litem_67->prev=((void*)0);
                            # 150 "./neo-c.h"
                            litem_67->next=((void*)0);
                            # 151 "./neo-c.h"
                            __dec_obj23=litem_67->item;
                            litem_67->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                            # 153 "./neo-c.h"
                            self->tail=litem_67;
                            # 154 "./neo-c.h"
                            self->head=litem_67;
                        }
                        else {
                            # 177 "./neo-c.h"
                            # 156 "./neo-c.h"
                            if(_if_conditional56=self->len==1,                            _if_conditional56) {
                                # 157 "./neo-c.h"
                                litem_68=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value103=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 157, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value103,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 159 "./neo-c.h"
                                litem_68->prev=self->head;
                                # 160 "./neo-c.h"
                                litem_68->next=((void*)0);
                                # 161 "./neo-c.h"
                                __dec_obj24=litem_68->item;
                                litem_68->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
                                # 163 "./neo-c.h"
                                self->tail=litem_68;
                                # 164 "./neo-c.h"
                                self->head->next=litem_68;
                            }
                            else {
                                # 167 "./neo-c.h"
                                litem_69=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value104=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 167, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value104,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 169 "./neo-c.h"
                                litem_69->prev=self->tail;
                                # 170 "./neo-c.h"
                                litem_69->next=((void*)0);
                                # 171 "./neo-c.h"
                                __dec_obj25=litem_69->item;
                                litem_69->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count2(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0, (void*)0); }
                                # 173 "./neo-c.h"
                                self->tail->next=litem_69;
                                # 174 "./neo-c.h"
                                self->tail=litem_69;
                            }
                        }
                        # 177 "./neo-c.h"
                        self->len++;
                        # 179 "./neo-c.h"
                        __result64__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result64__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional57;
struct sNode* __result65__;
void* right_value105;
struct sNode* result_70;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional63;
_Bool _if_conditional64;
_Bool _if_conditional65;
struct sNode* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
right_value105 = (void*)0;
memset(&result_70, 0, sizeof(struct sNode*));
                        # 3 "sNode_clone"
                        # 2 "sNode_clone"
                        if(_if_conditional57=self==(void*)0,                        _if_conditional57) {
                            # 2 "sNode_clone"
                            __result65__ = __result_obj__ = (void*)0;
                            return __result65__;
                        }
                        # 3 "sNode_clone"
                        result_70=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value105=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value105) { right_value105 = come_decrement_ref_count2(right_value105, ((struct sNode*)right_value105)->finalize, ((struct sNode*)right_value105)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 5 "sNode_clone"
                        # 4 "sNode_clone"
                        if(_if_conditional58=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional58) {
                            # 4 "sNode_clone"
                            result_70->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        # 6 "sNode_clone"
                        # 5 "sNode_clone"
                        if(_if_conditional59=self!=((void*)0),                        _if_conditional59) {
                            # 5 "sNode_clone"
                            result_70->finalize=self->finalize;
                        }
                        # 7 "sNode_clone"
                        # 6 "sNode_clone"
                        if(_if_conditional60=self!=((void*)0),                        _if_conditional60) {
                            # 6 "sNode_clone"
                            result_70->clone=self->clone;
                        }
                        # 8 "sNode_clone"
                        # 7 "sNode_clone"
                        if(_if_conditional61=self!=((void*)0),                        _if_conditional61) {
                            # 7 "sNode_clone"
                            result_70->compile=self->compile;
                        }
                        # 9 "sNode_clone"
                        # 8 "sNode_clone"
                        if(_if_conditional62=self!=((void*)0),                        _if_conditional62) {
                            # 8 "sNode_clone"
                            result_70->sline=self->sline;
                        }
                        # 10 "sNode_clone"
                        # 9 "sNode_clone"
                        if(_if_conditional63=self!=((void*)0),                        _if_conditional63) {
                            # 9 "sNode_clone"
                            result_70->sname=self->sname;
                        }
                        # 11 "sNode_clone"
                        # 10 "sNode_clone"
                        if(_if_conditional64=self!=((void*)0),                        _if_conditional64) {
                            # 10 "sNode_clone"
                            result_70->terminated=self->terminated;
                        }
                        # 12 "sNode_clone"
                        # 11 "sNode_clone"
                        if(_if_conditional65=self!=((void*)0),                        _if_conditional65) {
                            # 11 "sNode_clone"
                            result_70->kind=self->kind;
                        }
                        # 12 "sNode_clone"
                        __result66__ = __result_obj__ = result_70;
                        if(result_70) { result_70 = come_decrement_ref_count2(result_70, ((struct sNode*)result_70)->finalize, ((struct sNode*)result_70)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result66__;
                        if(result_70) { result_70 = come_decrement_ref_count2(result_70, ((struct sNode*)result_70)->finalize, ((struct sNode*)result_70)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_71;
_Bool _while_condtional13;
struct list_item$1sNodeph* prev_it_72;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_71, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_72, 0, sizeof(struct list_item$1sNodeph*));
                # 114 "./neo-c.h"
                it_71=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional13=it_71!=((void*)0),                _while_condtional13) {
                    # 116 "./neo-c.h"
                    prev_it_72=it_71;
                    # 117 "./neo-c.h"
                    it_71=it_71->next;
                    # 118 "./neo-c.h"
                    come_call_finalizer3(prev_it_72,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional69;
struct list$1charph* __result68__;
void* right_value109;
void* right_value110;
struct list$1charph* result_73;
struct list_item$1charph* it_74;
_Bool _while_condtional14;
void* right_value114;
struct list$1charph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value109 = (void*)0;
right_value110 = (void*)0;
memset(&result_73, 0, sizeof(struct list$1charph*));
memset(&it_74, 0, sizeof(struct list_item$1charph*));
right_value114 = (void*)0;
                # 133 "./neo-c.h"
                # 130 "./neo-c.h"
                if(_if_conditional69=self==((void*)0),                _if_conditional69) {
                    # 131 "./neo-c.h"
                    __result68__ = __result_obj__ = ((void*)0);
                    return __result68__;
                }
                # 133 "./neo-c.h"
                result_73=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value110=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value109=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 133, "list$1charph"))))))));
                come_call_finalizer3(right_value109,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value110,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 135 "./neo-c.h"
                it_74=self->head;
                # 142 "./neo-c.h"
                while(_while_condtional14=it_74!=((void*)0),                _while_condtional14) {
                    # 137 "./neo-c.h"
                    list$1charph_add(result_73,(char*)come_increment_ref_count(((char*)(right_value114=string_clone(it_74->item)))));
                    right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 139 "./neo-c.h"
                    it_74=it_74->next;
                }
                # 142 "./neo-c.h"
                __result71__ = __result_obj__ = result_73;
                come_call_finalizer3(result_73,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result71__;
                come_call_finalizer3(result_73,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 95 "./neo-c.h"
                    self->head=((void*)0);
                    # 96 "./neo-c.h"
                    self->tail=((void*)0);
                    # 97 "./neo-c.h"
                    self->len=0;
                    # 99 "./neo-c.h"
                    __result69__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result69__;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional70;
void* right_value111;
struct list_item$1charph* litem_75;
char* __dec_obj28;
_Bool _if_conditional71;
void* right_value112;
struct list_item$1charph* litem_76;
char* __dec_obj29;
void* right_value113;
struct list_item$1charph* litem_77;
char* __dec_obj30;
struct list$1charph* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value111 = (void*)0;
memset(&litem_75, 0, sizeof(struct list_item$1charph*));
right_value112 = (void*)0;
memset(&litem_76, 0, sizeof(struct list_item$1charph*));
right_value113 = (void*)0;
memset(&litem_77, 0, sizeof(struct list_item$1charph*));
                        # 177 "./neo-c.h"
                        # 146 "./neo-c.h"
                        if(_if_conditional70=self->len==0,                        _if_conditional70) {
                            # 147 "./neo-c.h"
                            litem_75=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value111=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 147, "list_item$1charph"))));
                            come_call_finalizer3(right_value111,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 149 "./neo-c.h"
                            litem_75->prev=((void*)0);
                            # 150 "./neo-c.h"
                            litem_75->next=((void*)0);
                            # 151 "./neo-c.h"
                            __dec_obj28=litem_75->item;
                            litem_75->item=(char*)come_increment_ref_count(item);
                            __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                            # 153 "./neo-c.h"
                            self->tail=litem_75;
                            # 154 "./neo-c.h"
                            self->head=litem_75;
                        }
                        else {
                            # 177 "./neo-c.h"
                            # 156 "./neo-c.h"
                            if(_if_conditional71=self->len==1,                            _if_conditional71) {
                                # 157 "./neo-c.h"
                                litem_76=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value112=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 157, "list_item$1charph"))));
                                come_call_finalizer3(right_value112,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 159 "./neo-c.h"
                                litem_76->prev=self->head;
                                # 160 "./neo-c.h"
                                litem_76->next=((void*)0);
                                # 161 "./neo-c.h"
                                __dec_obj29=litem_76->item;
                                litem_76->item=(char*)come_increment_ref_count(item);
                                __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 163 "./neo-c.h"
                                self->tail=litem_76;
                                # 164 "./neo-c.h"
                                self->head->next=litem_76;
                            }
                            else {
                                # 167 "./neo-c.h"
                                litem_77=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value113=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 167, "list_item$1charph"))));
                                come_call_finalizer3(right_value113,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 169 "./neo-c.h"
                                litem_77->prev=self->tail;
                                # 170 "./neo-c.h"
                                litem_77->next=((void*)0);
                                # 171 "./neo-c.h"
                                __dec_obj30=litem_77->item;
                                litem_77->item=(char*)come_increment_ref_count(item);
                                __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 173 "./neo-c.h"
                                self->tail->next=litem_77;
                                # 174 "./neo-c.h"
                                self->tail=litem_77;
                            }
                        }
                        # 177 "./neo-c.h"
                        self->len++;
                        # 179 "./neo-c.h"
                        __result70__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result70__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_78;
_Bool _while_condtional15;
struct list_item$1charph* prev_it_79;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_78, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_79, 0, sizeof(struct list_item$1charph*));
                # 114 "./neo-c.h"
                it_78=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional15=it_78!=((void*)0),                _while_condtional15) {
                    # 116 "./neo-c.h"
                    prev_it_79=it_78;
                    # 117 "./neo-c.h"
                    it_78=it_78->next;
                    # 118 "./neo-c.h"
                    come_call_finalizer3(prev_it_79,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional114;
void* right_value122;
struct list_item$1CVALUEph* litem_80;
struct CVALUE* __dec_obj38;
_Bool _if_conditional116;
void* right_value123;
struct list_item$1CVALUEph* litem_81;
struct CVALUE* __dec_obj39;
void* right_value124;
struct list_item$1CVALUEph* litem_82;
struct CVALUE* __dec_obj40;
struct list$1CVALUEph* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value122 = (void*)0;
memset(&litem_80, 0, sizeof(struct list_item$1CVALUEph*));
right_value123 = (void*)0;
memset(&litem_81, 0, sizeof(struct list_item$1CVALUEph*));
right_value124 = (void*)0;
memset(&litem_82, 0, sizeof(struct list_item$1CVALUEph*));
        # 247 "./neo-c.h"
        # 216 "./neo-c.h"
        if(_if_conditional114=self->len==0,        _if_conditional114) {
            # 217 "./neo-c.h"
            litem_80=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value122=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 217, "list_item$1CVALUEph"))));
            come_call_finalizer3(right_value122,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            # 219 "./neo-c.h"
            litem_80->prev=((void*)0);
            # 220 "./neo-c.h"
            litem_80->next=((void*)0);
            # 221 "./neo-c.h"
            __dec_obj38=litem_80->item;
            litem_80->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj38,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            # 223 "./neo-c.h"
            self->tail=litem_80;
            # 224 "./neo-c.h"
            self->head=litem_80;
        }
        else {
            # 247 "./neo-c.h"
            # 226 "./neo-c.h"
            if(_if_conditional116=self->len==1,            _if_conditional116) {
                # 227 "./neo-c.h"
                litem_81=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value123=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 227, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value123,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 229 "./neo-c.h"
                litem_81->prev=self->head;
                # 230 "./neo-c.h"
                litem_81->next=((void*)0);
                # 231 "./neo-c.h"
                __dec_obj39=litem_81->item;
                litem_81->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj39,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                # 233 "./neo-c.h"
                self->tail=litem_81;
                # 234 "./neo-c.h"
                self->head->next=litem_81;
            }
            else {
                # 237 "./neo-c.h"
                litem_82=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value124=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 237, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value124,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 239 "./neo-c.h"
                litem_82->prev=self->tail;
                # 240 "./neo-c.h"
                litem_82->next=((void*)0);
                # 241 "./neo-c.h"
                __dec_obj40=litem_82->item;
                litem_82->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj40,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                # 243 "./neo-c.h"
                self->tail->next=litem_82;
                # 244 "./neo-c.h"
                self->tail=litem_82;
            }
        }
        # 247 "./neo-c.h"
        self->len++;
        # 249 "./neo-c.h"
        __result73__ = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        return __result73__;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional115;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "list_item$1CVALUEphp_finalize"
                # 0 "list_item$1CVALUEphp_finalize"
                if(_if_conditional115=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional115) {
                    # 0 "list_item$1CVALUEphp_finalize"
                    come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__;
struct sFun* __dec_obj41;
char* __dec_obj42;
struct sFunNode* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
    # 60 "05function.c"
    __dec_obj41=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer3(__dec_obj41,sFun_finalize, 0, 0, 0, 0, (void*)0);
    # 61 "05function.c"
    self->sline=info->sline;
    # 62 "05function.c"
    __dec_obj42=self->sname;
    self->sname=(char*)come_increment_ref_count(info->sname);
    __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 65 "05function.c"
    __result75__ = __result_obj__ = self;
    come_call_finalizer3(self,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(fun,sFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result75__;
    come_call_finalizer3(self,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(fun,sFun_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sFunNode_terminated(struct sFunNode* self){
void* __result_obj__;
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
    # 67 "05function.c"
    __result76__ = (_Bool)0;
    return __result76__;
}

char* sFunNode_kind(struct sFunNode* self){
void* __result_obj__;
void* right_value125;
char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value125 = (void*)0;
    # 72 "05function.c"
    __result77__ = __result_obj__ = ((char*)(right_value125=__builtin_string("sFunNode")));
    right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result77__;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
void* __result_obj__;
struct sFun* come_fun_83;
char* come_fun_name_84;
void* right_value126;
char* __dec_obj43;
_Bool _if_conditional134;
_Bool _if_conditional135;
void* right_value127;
void* right_value128;
struct sType* result_type_85;
void* right_value129;
void* right_value130;
_Bool _if_conditional136;
void* right_value131;
char* __dec_obj44;
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_fun_83, 0, sizeof(struct sFun*));
memset(&come_fun_name_84, 0, sizeof(char*));
right_value126 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
memset(&result_type_85, 0, sizeof(struct sType*));
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
    # 77 "05function.c"
    come_fun_83=info->come_fun;
    # 78 "05function.c"
    info->come_fun=self->mFun;
    # 80 "05function.c"
    come_fun_name_84=(char*)come_increment_ref_count(info->come_fun_name);
    # 81 "05function.c"
    __dec_obj43=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(((char*)(right_value126=__builtin_string(info->come_fun->mName))));
    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 100 "05function.c"
    # 83 "05function.c"
    if(self->mFun->mBlock) {
        # 88 "05function.c"
        # 84 "05function.c"
        if(_if_conditional135=string_operator_equals(info->come_fun->mName,"main"),        _if_conditional135) {
            # 85 "05function.c"
            add_come_code(info,"come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        # 88 "05function.c"
        result_type_85=(struct sType*)come_increment_ref_count(((struct sType*)(right_value128=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value127=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 88, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer3(right_value127,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value128,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 90 "05function.c"
        add_come_code_at_function_head(info,"%s;\n",((char*)(right_value129=make_define_var(result_type_85,"__result_obj__",(_Bool)0,info))));
        right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 91 "05function.c"
        add_come_code_at_function_head2(info,"memset(&__result_obj__, 0, sizeof(%s));\n",((char*)(right_value130=make_type_name_string(result_type_85,(_Bool)0,(_Bool)0,(_Bool)0,info))));
        right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 93 "05function.c"
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0);
        # 98 "05function.c"
        # 94 "05function.c"
        if(_if_conditional136=string_operator_equals(info->come_fun->mName,"main"),        _if_conditional136) {
            # 95 "05function.c"
            free_objects(info->gv_table,((void*)0),info);
            # 96 "05function.c"
            add_come_code(info,((char*)(right_value131=xsprintf("come_heap_final();\n"))));
            right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer3(result_type_85,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 100 "05function.c"
    info->come_fun=come_fun_83;
    # 101 "05function.c"
    __dec_obj44=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(come_fun_name_84);
    __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 103 "05function.c"
    __result78__ = (_Bool)1;
    come_fun_name_84 = come_decrement_ref_count2(come_fun_name_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result78__;
    come_fun_name_84 = come_decrement_ref_count2(come_fun_name_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sFun_finalize"
        # 0 "sFun_finalize"
        if(_if_conditional117=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional117) {
            # 0 "sFun_finalize"
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "sFun_finalize"
        # 1 "sFun_finalize"
        if(_if_conditional118=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional118) {
            # 1 "sFun_finalize"
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 3 "sFun_finalize"
        # 2 "sFun_finalize"
        if(_if_conditional119=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional119) {
            # 2 "sFun_finalize"
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 4 "sFun_finalize"
        # 3 "sFun_finalize"
        if(_if_conditional120=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional120) {
            # 3 "sFun_finalize"
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 5 "sFun_finalize"
        # 4 "sFun_finalize"
        if(_if_conditional121=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),        _if_conditional121) {
            # 4 "sFun_finalize"
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 6 "sFun_finalize"
        # 5 "sFun_finalize"
        if(_if_conditional122=self!=((void*)0)&&self->mLambdaType!=((void*)0),        _if_conditional122) {
            # 5 "sFun_finalize"
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 7 "sFun_finalize"
        # 6 "sFun_finalize"
        if(_if_conditional123=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional123) {
            # 6 "sFun_finalize"
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 8 "sFun_finalize"
        # 7 "sFun_finalize"
        if(_if_conditional126=self!=((void*)0)&&self->mSource!=((void*)0),        _if_conditional126) {
            # 7 "sFun_finalize"
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 9 "sFun_finalize"
        # 8 "sFun_finalize"
        if(_if_conditional127=self!=((void*)0)&&self->mSourceHead!=((void*)0),        _if_conditional127) {
            # 8 "sFun_finalize"
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 10 "sFun_finalize"
        # 9 "sFun_finalize"
        if(_if_conditional128=self!=((void*)0)&&self->mSourceHead2!=((void*)0),        _if_conditional128) {
            # 9 "sFun_finalize"
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 11 "sFun_finalize"
        # 10 "sFun_finalize"
        if(_if_conditional129=self!=((void*)0)&&self->mSourceDefer!=((void*)0),        _if_conditional129) {
            # 10 "sFun_finalize"
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 12 "sFun_finalize"
        # 11 "sFun_finalize"
        if(_if_conditional130=self!=((void*)0)&&self->mComeHeader!=((void*)0),        _if_conditional130) {
            # 11 "sFun_finalize"
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 13 "sFun_finalize"
        # 12 "sFun_finalize"
        if(_if_conditional131=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional131) {
            # 12 "sFun_finalize"
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional124;
_Bool _if_conditional125;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sBlock_finalize"
                # 0 "sBlock_finalize"
                if(_if_conditional124=self!=((void*)0)&&self->mNodes!=((void*)0),                _if_conditional124) {
                    # 0 "sBlock_finalize"
                    come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 2 "sBlock_finalize"
                # 1 "sBlock_finalize"
                if(_if_conditional125=self!=((void*)0)&&self->mVarTable!=((void*)0),                _if_conditional125) {
                    # 1 "sBlock_finalize"
                    come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                }
}

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info){
void* __result_obj__;
void* right_value132;
void* right_value133;
struct list$1sNodeph* __dec_obj45;
struct sBlock* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value132 = (void*)0;
right_value133 = (void*)0;
    # 109 "05function.c"
    __dec_obj45=self->mNodes;
    self->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value133=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value132=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05function.c", 109, "list$1sNodeph"))))))));
    come_call_finalizer3(__dec_obj45,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value132,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value133,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    # 111 "05function.c"
    __result79__ = __result_obj__ = self;
    come_call_finalizer3(self,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result79__;
    come_call_finalizer3(self,sBlock_finalize, 0, 0, 1, 0, (void*)0);
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline){
void* __result_obj__;
void* right_value134;
struct sType* __dec_obj46;
void* right_value135;
struct list$1charph* __dec_obj47;
void* right_value136;
struct list$1charph* __dec_obj48;
char* __dec_obj49;
struct sType* __dec_obj50;
struct list$1sTypeph* __dec_obj51;
struct list$1charph* __dec_obj52;
struct list$1charph* __dec_obj53;
char* __dec_obj54;
void* right_value137;
char* __dec_obj55;
struct sGenericsFun* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value136 = (void*)0;
right_value137 = (void*)0;
    # 116 "05function.c"
    __dec_obj46=self->mImplType;
    self->mImplType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value134=sType_clone(impl_type))));
    come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value134,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 117 "05function.c"
    __dec_obj47=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value135=list$1charphp_clone(generics_type_names))));
    come_call_finalizer3(__dec_obj47,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value135,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 118 "05function.c"
    __dec_obj48=self->mMethodGenericsTypeNames;
    self->mMethodGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value136=list$1charphp_clone(method_generics_type_names))));
    come_call_finalizer3(__dec_obj48,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value136,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 120 "05function.c"
    __dec_obj49=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 121 "05function.c"
    __dec_obj50=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer3(__dec_obj50,sType_finalize, 0, 0, 0, 0, (void*)0);
    # 122 "05function.c"
    __dec_obj51=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    come_call_finalizer3(__dec_obj51,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    # 123 "05function.c"
    __dec_obj52=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    come_call_finalizer3(__dec_obj52,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    # 124 "05function.c"
    __dec_obj53=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer3(__dec_obj53,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    # 125 "05function.c"
    self->mVarArgs=var_args;
    # 127 "05function.c"
    __dec_obj54=self->mBlock;
    self->mBlock=(char*)come_increment_ref_count(block);
    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 128 "05function.c"
    self->mSLine=info->sline;
    # 130 "05function.c"
    __dec_obj55=self->mGenericsSName;
    self->mGenericsSName=(char*)come_increment_ref_count(((char*)(right_value137=__builtin_string(generics_sname))));
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 131 "05function.c"
    self->mGenericsSLine=generics_sline;
    # 133 "05function.c"
    __result80__ = __result_obj__ = self;
    come_call_finalizer3(self,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(impl_type,sType_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(result_type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_types,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_names,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_default_parametors,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    block = come_decrement_ref_count2(block, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    generics_sname = come_decrement_ref_count2(generics_sname, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result80__;
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
void* __result_obj__;
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
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sGenericsFun_finalize"
        # 0 "sGenericsFun_finalize"
        if(_if_conditional137=self!=((void*)0)&&self->mImplType!=((void*)0),        _if_conditional137) {
            # 0 "sGenericsFun_finalize"
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 2 "sGenericsFun_finalize"
        # 1 "sGenericsFun_finalize"
        if(_if_conditional138=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),        _if_conditional138) {
            # 1 "sGenericsFun_finalize"
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 3 "sGenericsFun_finalize"
        # 2 "sGenericsFun_finalize"
        if(_if_conditional139=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),        _if_conditional139) {
            # 2 "sGenericsFun_finalize"
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 4 "sGenericsFun_finalize"
        # 3 "sGenericsFun_finalize"
        if(_if_conditional140=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional140) {
            # 3 "sGenericsFun_finalize"
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 5 "sGenericsFun_finalize"
        # 4 "sGenericsFun_finalize"
        if(_if_conditional141=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional141) {
            # 4 "sGenericsFun_finalize"
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 6 "sGenericsFun_finalize"
        # 5 "sGenericsFun_finalize"
        if(_if_conditional142=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional142) {
            # 5 "sGenericsFun_finalize"
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 7 "sGenericsFun_finalize"
        # 6 "sGenericsFun_finalize"
        if(_if_conditional143=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional143) {
            # 6 "sGenericsFun_finalize"
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 8 "sGenericsFun_finalize"
        # 7 "sGenericsFun_finalize"
        if(_if_conditional144=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),        _if_conditional144) {
            # 7 "sGenericsFun_finalize"
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 9 "sGenericsFun_finalize"
        # 8 "sGenericsFun_finalize"
        if(_if_conditional145=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional145) {
            # 8 "sGenericsFun_finalize"
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 10 "sGenericsFun_finalize"
        # 9 "sGenericsFun_finalize"
        if(_if_conditional146=self!=((void*)0)&&self->mGenericsSName!=((void*)0),        _if_conditional146) {
            # 9 "sGenericsFun_finalize"
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last){
void* __result_obj__;
void* right_value138;
void* right_value139;
struct sBlock* result_86;
int block_level_87;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _while_condtional16;
_Bool _if_conditional149;
int sline_88;
char* sname_89;
void* right_value140;
struct sNode* node_90;
void* right_value141;
char* __dec_obj56;
_Bool _if_conditional150;
_Bool _if_conditional153;
_Bool _while_condtional17;
_Bool _if_conditional154;
void* right_value145;
struct sNode* node_94;
_Bool _if_conditional155;
_Bool _if_conditional156;
char* p_95;
char* head_96;
void* right_value146;
char* source_97;
void* right_value147;
struct sNode* node_98;
_Bool _if_conditional157;
struct sBlock* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value138 = (void*)0;
right_value139 = (void*)0;
memset(&result_86, 0, sizeof(struct sBlock*));
memset(&block_level_87, 0, sizeof(int));
memset(&sline_88, 0, sizeof(int));
memset(&sname_89, 0, sizeof(char*));
right_value140 = (void*)0;
memset(&node_90, 0, sizeof(struct sNode*));
right_value141 = (void*)0;
right_value145 = (void*)0;
memset(&node_94, 0, sizeof(struct sNode*));
memset(&p_95, 0, sizeof(char*));
memset(&head_96, 0, sizeof(char*));
right_value146 = (void*)0;
memset(&source_97, 0, sizeof(char*));
right_value147 = (void*)0;
memset(&node_98, 0, sizeof(struct sNode*));
    # 139 "05function.c"
    result_86=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value139=sBlock_initialize((struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value138=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function.c", 139, "sBlock")))),info))));
    come_call_finalizer3(right_value138,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value139,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
    # 141 "05function.c"
    block_level_87=info->block_level;
    # 146 "05function.c"
    # 142 "05function.c"
    if(_if_conditional147=!no_block_level,    _if_conditional147) {
        # 143 "05function.c"
        info->block_level++;
    }
    # 210 "05function.c"
    # 146 "05function.c"
    if(_if_conditional148=*info->p==123,    _if_conditional148) {
        # 147 "05function.c"
        info->p++;
        # 148 "05function.c"
        skip_spaces_and_lf(info);
        # 196 "05function.c"
        while(_while_condtional16=(_Bool)1,        _while_condtional16) {
            # 150 "05function.c"
            parse_sharp_v5(info);
            # 157 "05function.c"
            # 151 "05function.c"
            if(_if_conditional149=*info->p==125,            _if_conditional149) {
                # 152 "05function.c"
                info->p++;
                # 153 "05function.c"
                skip_spaces_and_lf(info);
                # 154 "05function.c"
                break;
            }
            # 157 "05function.c"
            parse_sharp_v5(info);
            # 159 "05function.c"
            sline_88=info->sline;
            # 160 "05function.c"
            sname_89=info->sname;
            # 165 "05function.c"
            node_90=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value140=statment(info))));
            if(right_value140) { right_value140 = come_decrement_ref_count2(right_value140, ((struct sNode*)right_value140)->finalize, ((struct sNode*)right_value140)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 167 "05function.c"
            __dec_obj56=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value141=node_90->sname(node_90->_protocol_obj))));
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 168 "05function.c"
            info->sline=node_90->sline(node_90->_protocol_obj);
            # 176 "05function.c"
            # 171 "05function.c"
            if(_if_conditional150=node_90==((void*)0),            _if_conditional150) {
                # 172 "05function.c"
                err_msg(info,"Invalid expression");
                # 173 "05function.c"
                exit(1);
            }
            # 176 "05function.c"
            list$1sNodeph_push_back(result_86->mNodes,(struct sNode*)come_increment_ref_count(node_90));
            # 178 "05function.c"
            parse_sharp_v5(info);
            # 184 "05function.c"
            # 180 "05function.c"
            if(_if_conditional153=node_90->terminated(node_90->_protocol_obj),            _if_conditional153) {
                # 181 "05function.c"
                skip_spaces_and_lf(info);
            }
            # 188 "05function.c"
            while(_while_condtional17=*info->p==59,            _while_condtional17) {
                # 185 "05function.c"
                info->p++;
                # 186 "05function.c"
                skip_spaces_and_lf(info);
            }
            # 188 "05function.c"
            parse_sharp_v5(info);
            # 195 "05function.c"
            # 190 "05function.c"
            if(_if_conditional154=*info->p==125,            _if_conditional154) {
                # 191 "05function.c"
                info->p++;
                # 192 "05function.c"
                skip_spaces_and_lf(info);
                # 193 "05function.c"
                if(node_90) { node_90 = come_decrement_ref_count2(node_90, ((struct sNode*)node_90)->finalize, ((struct sNode*)node_90)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            if(node_90) { node_90 = come_decrement_ref_count2(node_90, ((struct sNode*)node_90)->finalize, ((struct sNode*)node_90)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else {
        # 198 "05function.c"
        parse_sharp_v5(info);
        # 199 "05function.c"
        node_94=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value145=expression_v13(info))));
        if(right_value145) { right_value145 = come_decrement_ref_count2(right_value145, ((struct sNode*)right_value145)->finalize, ((struct sNode*)right_value145)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 200 "05function.c"
        parse_sharp_v5(info);
        # 207 "05function.c"
        # 202 "05function.c"
        if(_if_conditional155=node_94==((void*)0),        _if_conditional155) {
            # 203 "05function.c"
            err_msg(info,"Invalid expression");
            # 204 "05function.c"
            exit(1);
        }
        # 207 "05function.c"
        list$1sNodeph_push_back(result_86->mNodes,(struct sNode*)come_increment_ref_count(node_94));
        if(node_94) { node_94 = come_decrement_ref_count2(node_94, ((struct sNode*)node_94)->finalize, ((struct sNode*)node_94)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 232 "05function.c"
    # 210 "05function.c"
    if(return_self_at_last) {
        # 211 "05function.c"
        p_95=info->p;
        # 212 "05function.c"
        head_96=info->head;
        # 214 "05function.c"
        source_97=(char*)come_increment_ref_count(((char*)(right_value146=__builtin_string("return self;"))));
        right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 216 "05function.c"
        info->p=source_97;
        # 217 "05function.c"
        info->head=source_97;
        # 219 "05function.c"
        node_98=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value147=expression_v13(info))));
        if(right_value147) { right_value147 = come_decrement_ref_count2(right_value147, ((struct sNode*)right_value147)->finalize, ((struct sNode*)right_value147)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 226 "05function.c"
        # 221 "05function.c"
        if(_if_conditional157=node_98==((void*)0),        _if_conditional157) {
            # 222 "05function.c"
            err_msg(info,"Invalid expression");
            # 223 "05function.c"
            exit(1);
        }
        # 226 "05function.c"
        list$1sNodeph_push_back(result_86->mNodes,(struct sNode*)come_increment_ref_count(node_98));
        # 228 "05function.c"
        info->p=p_95;
        # 229 "05function.c"
        info->head=head_96;
        source_97 = come_decrement_ref_count2(source_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_98) { node_98 = come_decrement_ref_count2(node_98, ((struct sNode*)node_98)->finalize, ((struct sNode*)node_98)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 232 "05function.c"
    info->block_level=block_level_87;
    # 234 "05function.c"
    __result82__ = __result_obj__ = result_86;
    come_call_finalizer3(result_86,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result82__;
    come_call_finalizer3(result_86,sBlock_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional151;
void* right_value142;
struct list_item$1sNodeph* litem_91;
struct sNode* __dec_obj57;
_Bool _if_conditional152;
void* right_value143;
struct list_item$1sNodeph* litem_92;
struct sNode* __dec_obj58;
void* right_value144;
struct list_item$1sNodeph* litem_93;
struct sNode* __dec_obj59;
struct list$1sNodeph* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
right_value142 = (void*)0;
memset(&litem_91, 0, sizeof(struct list_item$1sNodeph*));
right_value143 = (void*)0;
memset(&litem_92, 0, sizeof(struct list_item$1sNodeph*));
right_value144 = (void*)0;
memset(&litem_93, 0, sizeof(struct list_item$1sNodeph*));
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional151=self->len==0,                _if_conditional151) {
                    # 217 "./neo-c.h"
                    litem_91=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value142=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 217, "list_item$1sNodeph"))));
                    come_call_finalizer3(right_value142,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "./neo-c.h"
                    litem_91->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_91->next=((void*)0);
                    # 221 "./neo-c.h"
                    __dec_obj57=litem_91->item;
                    litem_91->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count2(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0, (void*)0); }
                    # 223 "./neo-c.h"
                    self->tail=litem_91;
                    # 224 "./neo-c.h"
                    self->head=litem_91;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional152=self->len==1,                    _if_conditional152) {
                        # 227 "./neo-c.h"
                        litem_92=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value143=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 227, "list_item$1sNodeph"))));
                        come_call_finalizer3(right_value143,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_92->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_92->next=((void*)0);
                        # 231 "./neo-c.h"
                        __dec_obj58=litem_92->item;
                        litem_92->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count2(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0, (void*)0); }
                        # 233 "./neo-c.h"
                        self->tail=litem_92;
                        # 234 "./neo-c.h"
                        self->head->next=litem_92;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_93=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value144=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 237, "list_item$1sNodeph"))));
                        come_call_finalizer3(right_value144,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_93->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_93->next=((void*)0);
                        # 241 "./neo-c.h"
                        __dec_obj59=litem_93->item;
                        litem_93->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); }
                        # 243 "./neo-c.h"
                        self->tail->next=litem_93;
                        # 244 "./neo-c.h"
                        self->tail=litem_93;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
                __result81__ = __result_obj__ = self;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result81__;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block){
void* __result_obj__;
_Bool _if_conditional158;
int __result83__;
struct sVarTable* old_table_99;
_Bool _if_conditional159;
void* right_value148;
void* right_value149;
struct sVarTable* __dec_obj60;
struct sVarTable* current_loop_vtable_100;
_Bool _if_conditional160;
struct list$1sTypeph* param_types__101;
struct list$1charph* param_names__102;
_Bool _if_conditional161;
int i_103;
struct list$1charph* o2_saved_104;
char* name_107;
void* right_value150;
struct sType* type_113;
void* right_value151;
int block_level_114;
_Bool _if_conditional168;
_Bool _if_conditional170;
int i_115;
struct list$1sNodeph* o2_saved_116;
struct sNode* node_119;
struct list$1sRightValueObjectph* right_value_objects_122;
void* right_value152;
void* right_value153;
struct list$1sRightValueObjectph* __dec_obj61;
char* __dec_obj62;
char* __dec_obj63;
char* __dec_obj64;
int stack_num_before_127;
int sline_128;
void* right_value154;
char* sname_129;
void* right_value155;
char* __dec_obj65;
_Bool _if_conditional180;
void* right_value156;
char* __dec_obj66;
struct list$1sRightValueObjectph* __dec_obj67;
_Bool _if_conditional181;
int __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&old_table_99, 0, sizeof(struct sVarTable*));
right_value148 = (void*)0;
right_value149 = (void*)0;
memset(&current_loop_vtable_100, 0, sizeof(struct sVarTable*));
memset(&param_types__101, 0, sizeof(struct list$1sTypeph*));
memset(&param_names__102, 0, sizeof(struct list$1charph*));
memset(&i_103, 0, sizeof(int));
memset(&o2_saved_104, 0, sizeof(struct list$1charph*));
memset(&name_107, 0, sizeof(char*));
right_value150 = (void*)0;
memset(&type_113, 0, sizeof(struct sType*));
right_value151 = (void*)0;
memset(&block_level_114, 0, sizeof(int));
memset(&i_115, 0, sizeof(int));
memset(&o2_saved_116, 0, sizeof(struct list$1sNodeph*));
memset(&node_119, 0, sizeof(struct sNode*));
memset(&right_value_objects_122, 0, sizeof(struct list$1sRightValueObjectph*));
right_value152 = (void*)0;
right_value153 = (void*)0;
memset(&stack_num_before_127, 0, sizeof(int));
memset(&sline_128, 0, sizeof(int));
right_value154 = (void*)0;
memset(&sname_129, 0, sizeof(char*));
right_value155 = (void*)0;
right_value156 = (void*)0;
    # 243 "05function.c"
    # 239 "05function.c"
    if(info->output_header_file) {
        # 240 "05function.c"
        __result83__ = 0;
        return __result83__;
    }
    # 243 "05function.c"
    old_table_99=info->lv_table;
    # 249 "05function.c"
    # 244 "05function.c"
    if(_if_conditional159=!no_var_table,    _if_conditional159) {
        # 245 "05function.c"
        __dec_obj60=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value149=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value148=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 245, "sVarTable")))),(_Bool)0,old_table_99))));
        come_call_finalizer3(__dec_obj60,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value148,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value149,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        # 246 "05function.c"
        info->lv_table=block->mVarTable;
    }
    # 249 "05function.c"
    current_loop_vtable_100=info->current_loop_vtable;
    # 254 "05function.c"
    # 250 "05function.c"
    if(loop_block) {
        # 251 "05function.c"
        info->current_loop_vtable=block->mVarTable;
    }
    # 254 "05function.c"
    param_types__101=info->param_types;
    # 255 "05function.c"
    param_names__102=info->param_names;
    # 257 "05function.c"
    info->param_types=param_types;
    # 258 "05function.c"
    info->param_names=param_names;
    # 271 "05function.c"
    # 260 "05function.c"
    if(_if_conditional161=param_types&&param_names,    _if_conditional161) {
        # 261 "05function.c"
        # 269 "05function.c"
        for(        o2_saved_104=(param_names),name_107=list$1charph_begin((o2_saved_104));        !list$1charph_end((o2_saved_104));        name_107=list$1charph_next((o2_saved_104))        ){
            # 263 "05function.c"
            type_113=(struct sType*)come_increment_ref_count(((struct sType*)(right_value150=sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types,i_103), "05function.c", 263, 0))))));
            come_call_finalizer3(right_value150,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 264 "05function.c"
            type_113->mFunctionParam=(_Bool)1;
            # 265 "05function.c"
            type_113->mAllocaValue=(_Bool)0;
            # 266 "05function.c"
            add_variable_to_table(name_107,(struct sType*)come_increment_ref_count(((struct sType*)(right_value151=sType_clone(type_113)))),info);
            come_call_finalizer3(right_value151,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 267 "05function.c"
            i_103++;
            come_call_finalizer3(type_113,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    # 271 "05function.c"
    block_level_114=info->block_level;
    # 276 "05function.c"
    # 272 "05function.c"
    if(_if_conditional168=!no_var_table,    _if_conditional168) {
        # 273 "05function.c"
        info->block_level++;
    }
    # 319 "05function.c"
    # 276 "05function.c"
    if(_if_conditional170=list$1sNodeph_length(block->mNodes)==0,    _if_conditional170) {
    }
    else {
        # 279 "05function.c"
        # 317 "05function.c"
        for(        o2_saved_116=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_119=list$1sNodeph_begin((o2_saved_116));        !list$1sNodeph_end((o2_saved_116));        node_119=list$1sNodeph_next((o2_saved_116))        ){
            # 281 "05function.c"
            right_value_objects_122=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
            # 282 "05function.c"
            __dec_obj61=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value153=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value152=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "05function.c", 282, "list$1sRightValueObjectph"))))))));
            come_call_finalizer3(__dec_obj61,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value152,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value153,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
            # 284 "05function.c"
            __dec_obj62=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
            # 285 "05function.c"
            __dec_obj63=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
            # 286 "05function.c"
            __dec_obj64=info->module->mLastCode3;
            info->module->mLastCode3=((void*)0);
            __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
            # 288 "05function.c"
            stack_num_before_127=list$1CVALUEph_length(info->stack);
            # 290 "05function.c"
            sline_128=info->sline;
            # 291 "05function.c"
            sname_129=(char*)come_increment_ref_count(((char*)(right_value154=__builtin_string(info->sname))));
            right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 293 "05function.c"
            info->last_statment_is_return=(_Bool)0;
            # 295 "05function.c"
            info->sline=node_119->sline(node_119->_protocol_obj);
            # 296 "05function.c"
            __dec_obj65=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value155=node_119->sname(node_119->_protocol_obj))));
            __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 298 "05function.c"
            info->writing_source_file_position=(_Bool)1;
            # 305 "05function.c"
            # 300 "05function.c"
            if(_if_conditional180=!node_compile(node_119,info),            _if_conditional180) {
                # 301 "05function.c"
                printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                # 302 "05function.c"
                exit(2);
            }
            # 305 "05function.c"
            info->sline=sline_128;
            # 306 "05function.c"
            __dec_obj66=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value156=__builtin_string(sname_129))));
            __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 308 "05function.c"
            add_last_code_to_source(info);
            # 310 "05function.c"
            arrange_stack(info,stack_num_before_127);
            # 312 "05function.c"
            free_right_value_objects(info,(_Bool)0);
            # 314 "05function.c"
            list$1sRightValueObjectph_reset(info->right_value_objects);
            # 315 "05function.c"
            __dec_obj67=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_122);
            come_call_finalizer3(__dec_obj67,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value_objects_122,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            sname_129 = come_decrement_ref_count2(sname_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_116,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 324 "05function.c"
    # 319 "05function.c"
    if(_if_conditional181=!no_var_table,    _if_conditional181) {
        # 321 "05function.c"
        free_objects(info->lv_table,((void*)0),info);
    }
    # 324 "05function.c"
    info->lv_table=old_table_99;
    # 325 "05function.c"
    info->block_level=block_level_114;
    # 327 "05function.c"
    info->param_types=param_types__101;
    # 328 "05function.c"
    info->param_names=param_names__102;
    # 330 "05function.c"
    info->current_loop_vtable=current_loop_vtable_100;
    # 332 "05function.c"
    __result106__ = 0;
    return __result106__;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional162;
char* result_105;
char* __result84__;
_Bool _if_conditional163;
char* __result85__;
char* result_106;
char* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_105, 0, sizeof(char*));
memset(&result_106, 0, sizeof(char*));
            # 281 "./neo-c.h"
            # 276 "./neo-c.h"
            if(_if_conditional162=self==((void*)0),            _if_conditional162) {
                # 277 "./neo-c.h"
                # 278 "./neo-c.h"
                memset(&result_105,0,sizeof(char*));
                # 279 "./neo-c.h"
                __result84__ = __result_obj__ = result_105;
                return __result84__;
            }
            # 281 "./neo-c.h"
            self->it=self->head;
            # 287 "./neo-c.h"
            # 283 "./neo-c.h"
            if(self->it) {
                # 284 "./neo-c.h"
                __result85__ = __result_obj__ = self->it->item;
                return __result85__;
            }
            # 287 "./neo-c.h"
            # 288 "./neo-c.h"
            memset(&result_106,0,sizeof(char*));
            # 289 "./neo-c.h"
            __result86__ = __result_obj__ = result_106;
            return __result86__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result87__;
memset(&__result_obj__, 0, sizeof(void*));
            # 311 "./neo-c.h"
            __result87__ = self==((void*)0)||self->it==((void*)0);
            return __result87__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional164;
char* result_108;
char* __result88__;
_Bool _if_conditional165;
char* __result89__;
char* result_109;
char* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_108, 0, sizeof(char*));
memset(&result_109, 0, sizeof(char*));
            # 299 "./neo-c.h"
            # 293 "./neo-c.h"
            if(_if_conditional164=self==((void*)0)||self->it==((void*)0),            _if_conditional164) {
                # 294 "./neo-c.h"
                # 295 "./neo-c.h"
                memset(&result_108,0,sizeof(char*));
                # 296 "./neo-c.h"
                __result88__ = __result_obj__ = result_108;
                return __result88__;
            }
            # 299 "./neo-c.h"
            self->it=self->it->next;
            # 305 "./neo-c.h"
            # 301 "./neo-c.h"
            if(self->it) {
                # 302 "./neo-c.h"
                __result89__ = __result_obj__ = self->it->item;
                return __result89__;
            }
            # 305 "./neo-c.h"
            # 306 "./neo-c.h"
            memset(&result_109,0,sizeof(char*));
            # 307 "./neo-c.h"
            __result90__ = __result_obj__ = result_109;
            return __result90__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional166;
struct list_item$1sTypeph* it_110;
int i_111;
_Bool _while_condtional18;
_Bool _if_conditional167;
struct sType* __result91__;
struct sType* default_value_112;
struct sType* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_110, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_111, 0, sizeof(int));
memset(&default_value_112, 0, sizeof(struct sType*));
                # 673 "./neo-c.h"
                # 669 "./neo-c.h"
                if(_if_conditional166=position<0,                _if_conditional166) {
                    # 670 "./neo-c.h"
                    position+=self->len;
                }
                # 673 "./neo-c.h"
                it_110=self->head;
                # 674 "./neo-c.h"
                i_111=0;
                # 681 "./neo-c.h"
                while(_while_condtional18=it_110!=((void*)0),                _while_condtional18) {
                    # 679 "./neo-c.h"
                    # 676 "./neo-c.h"
                    if(_if_conditional167=position==i_111,                    _if_conditional167) {
                        # 677 "./neo-c.h"
                        __result91__ = __result_obj__ = it_110->item;
                        return __result91__;
                    }
                    # 679 "./neo-c.h"
                    it_110=it_110->next;
                    # 680 "./neo-c.h"
                    i_111++;
                }
                # 683 "./neo-c.h"
                # 684 "./neo-c.h"
                memset(&default_value_112,0,sizeof(struct sType*));
                # 685 "./neo-c.h"
                __result92__ = __result_obj__ = default_value_112;
                come_call_finalizer3(default_value_112,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result92__;
                come_call_finalizer3(default_value_112,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional169;
int __result93__;
int __result94__;
memset(&__result_obj__, 0, sizeof(void*));
        # 354 "./neo-c.h"
        # 351 "./neo-c.h"
        if(_if_conditional169=self==((void*)0),        _if_conditional169) {
            # 352 "./neo-c.h"
            __result93__ = 0;
            return __result93__;
        }
        # 354 "./neo-c.h"
        __result94__ = self->len;
        return __result94__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional171;
struct sNode* result_117;
struct sNode* __result95__;
_Bool _if_conditional172;
struct sNode* __result96__;
struct sNode* result_118;
struct sNode* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_117, 0, sizeof(struct sNode*));
memset(&result_118, 0, sizeof(struct sNode*));
            # 281 "./neo-c.h"
            # 276 "./neo-c.h"
            if(_if_conditional171=self==((void*)0),            _if_conditional171) {
                # 277 "./neo-c.h"
                # 278 "./neo-c.h"
                memset(&result_117,0,sizeof(struct sNode*));
                # 279 "./neo-c.h"
                __result95__ = __result_obj__ = result_117;
                return __result95__;
            }
            # 281 "./neo-c.h"
            self->it=self->head;
            # 287 "./neo-c.h"
            # 283 "./neo-c.h"
            if(self->it) {
                # 284 "./neo-c.h"
                __result96__ = __result_obj__ = self->it->item;
                return __result96__;
            }
            # 287 "./neo-c.h"
            # 288 "./neo-c.h"
            memset(&result_118,0,sizeof(struct sNode*));
            # 289 "./neo-c.h"
            __result97__ = __result_obj__ = result_118;
            return __result97__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result98__;
memset(&__result_obj__, 0, sizeof(void*));
            # 311 "./neo-c.h"
            __result98__ = self==((void*)0)||self->it==((void*)0);
            return __result98__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional173;
struct sNode* result_120;
struct sNode* __result99__;
_Bool _if_conditional174;
struct sNode* __result100__;
struct sNode* result_121;
struct sNode* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_120, 0, sizeof(struct sNode*));
memset(&result_121, 0, sizeof(struct sNode*));
            # 299 "./neo-c.h"
            # 293 "./neo-c.h"
            if(_if_conditional173=self==((void*)0)||self->it==((void*)0),            _if_conditional173) {
                # 294 "./neo-c.h"
                # 295 "./neo-c.h"
                memset(&result_120,0,sizeof(struct sNode*));
                # 296 "./neo-c.h"
                __result99__ = __result_obj__ = result_120;
                return __result99__;
            }
            # 299 "./neo-c.h"
            self->it=self->it->next;
            # 305 "./neo-c.h"
            # 301 "./neo-c.h"
            if(self->it) {
                # 302 "./neo-c.h"
                __result100__ = __result_obj__ = self->it->item;
                return __result100__;
            }
            # 305 "./neo-c.h"
            # 306 "./neo-c.h"
            memset(&result_121,0,sizeof(struct sNode*));
            # 307 "./neo-c.h"
            __result101__ = __result_obj__ = result_121;
            return __result101__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list$1sRightValueObjectph* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
                # 95 "./neo-c.h"
                self->head=((void*)0);
                # 96 "./neo-c.h"
                self->tail=((void*)0);
                # 97 "./neo-c.h"
                self->len=0;
                # 99 "./neo-c.h"
                __result102__ = __result_obj__ = self;
                come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result102__;
                come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_123;
_Bool _while_condtional19;
struct list_item$1sRightValueObjectph* prev_it_124;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_123, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_124, 0, sizeof(struct list_item$1sRightValueObjectph*));
                    # 114 "./neo-c.h"
                    it_123=self->head;
                    # 120 "./neo-c.h"
                    while(_while_condtional19=it_123!=((void*)0),                    _while_condtional19) {
                        # 116 "./neo-c.h"
                        prev_it_124=it_123;
                        # 117 "./neo-c.h"
                        it_123=it_123->next;
                        # 118 "./neo-c.h"
                        come_call_finalizer3(prev_it_124,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional175;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1sRightValueObjectphp_finalize"
                            # 0 "list_item$1sRightValueObjectphp_finalize"
                            if(_if_conditional175=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional175) {
                                # 0 "list_item$1sRightValueObjectphp_finalize"
                                come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
void* __result_obj__;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sRightValueObject_finalize"
                                    # 0 "sRightValueObject_finalize"
                                    if(_if_conditional176=self!=((void*)0)&&self->mType!=((void*)0),                                    _if_conditional176) {
                                        # 0 "sRightValueObject_finalize"
                                        come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 2 "sRightValueObject_finalize"
                                    # 1 "sRightValueObject_finalize"
                                    if(_if_conditional177=self!=((void*)0)&&self->mVarName!=((void*)0),                                    _if_conditional177) {
                                        # 1 "sRightValueObject_finalize"
                                        self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 3 "sRightValueObject_finalize"
                                    # 2 "sRightValueObject_finalize"
                                    if(_if_conditional178=self!=((void*)0)&&self->mFunName!=((void*)0),                                    _if_conditional178) {
                                        # 2 "sRightValueObject_finalize"
                                        self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_125;
_Bool _while_condtional20;
struct list_item$1sRightValueObjectph* prev_it_126;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_125, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_126, 0, sizeof(struct list_item$1sRightValueObjectph*));
                # 114 "./neo-c.h"
                it_125=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional20=it_125!=((void*)0),                _while_condtional20) {
                    # 116 "./neo-c.h"
                    prev_it_126=it_125;
                    # 117 "./neo-c.h"
                    it_125=it_125->next;
                    # 118 "./neo-c.h"
                    come_call_finalizer3(prev_it_126,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional179;
int __result103__;
int __result104__;
memset(&__result_obj__, 0, sizeof(void*));
                # 354 "./neo-c.h"
                # 351 "./neo-c.h"
                if(_if_conditional179=self==((void*)0),                _if_conditional179) {
                    # 352 "./neo-c.h"
                    __result103__ = 0;
                    return __result103__;
                }
                # 354 "./neo-c.h"
                __result104__ = self->len;
                return __result104__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_130;
_Bool _while_condtional21;
struct list_item$1sRightValueObjectph* prev_it_131;
struct list$1sRightValueObjectph* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_130, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_131, 0, sizeof(struct list_item$1sRightValueObjectph*));
                # 420 "./neo-c.h"
                it_130=self->head;
                # 427 "./neo-c.h"
                while(_while_condtional21=it_130!=((void*)0),                _while_condtional21) {
                    # 422 "./neo-c.h"
                    prev_it_131=it_130;
                    # 423 "./neo-c.h"
                    it_130=it_130->next;
                    # 424 "./neo-c.h"
                    come_call_finalizer3(prev_it_131,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
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

void arrange_stack(struct sInfo* info, int top){
void* __result_obj__;
_Bool _if_conditional182;
_Bool _if_conditional183;
memset(&__result_obj__, 0, sizeof(void*));
    # 340 "05function.c"
    # 337 "05function.c"
    if(_if_conditional182=list$1CVALUEph_length(info->stack)>top,    _if_conditional182) {
        # 338 "05function.c"
        dec_stack_ptr(list$1CVALUEph_length(info->stack)-top,info);
    }
    # 344 "05function.c"
    # 340 "05function.c"
    if(_if_conditional183=list$1CVALUEph_length(info->stack)<top,    _if_conditional183) {
        # 341 "05function.c"
        printf("%s %d: unexpected stack value. The stack num is %d. top is %d\n",info->sname,info->sline,list$1CVALUEph_length(info->stack),top);
        # 342 "05function.c"
        exit(2);
    }
}

int expected_next_character(char c, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional184;
_Bool _if_conditional185;
int __result107__;
memset(&__result_obj__, 0, sizeof(void*));
    # 348 "05function.c"
    parse_sharp_v5(info);
    # 356 "05function.c"
    # 349 "05function.c"
    if(_if_conditional184=*info->p!=c,    _if_conditional184) {
        # 354 "05function.c"
        # 350 "05function.c"
        if(_if_conditional185=!info->no_output_err,        _if_conditional185) {
            # 351 "05function.c"
            err_msg(info,"expected next charaster is %c, but %c\n",c,*info->p);
            # 352 "05function.c"
            exit(2);
        }
    }
    # 356 "05function.c"
    info->p++;
    # 357 "05function.c"
    skip_spaces_and_lf(info);
    # 359 "05function.c"
    __result107__ = 0;
    return __result107__;
}

char* skip_block(struct sInfo* info){
void* __result_obj__;
char* head_132;
_Bool _if_conditional186;
_Bool dquort_133;
_Bool squort_134;
int sline_135;
int nest_136;
_Bool _while_condtional22;
_Bool _if_conditional187;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool _if_conditional193;
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
_Bool _if_conditional204;
_Bool _if_conditional205;
_Bool _if_conditional206;
_Bool _if_conditional207;
_Bool _if_conditional208;
_Bool _if_conditional209;
_Bool _if_conditional210;
char* tail_137;
void* right_value157;
char* buf_138;
void* right_value158;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_132, 0, sizeof(char*));
memset(&dquort_133, 0, sizeof(_Bool));
memset(&squort_134, 0, sizeof(_Bool));
memset(&sline_135, 0, sizeof(int));
memset(&nest_136, 0, sizeof(int));
memset(&tail_137, 0, sizeof(char*));
right_value157 = (void*)0;
memset(&buf_138, 0, sizeof(char*));
right_value158 = (void*)0;
    # 364 "05function.c"
    head_132=info->p;
    # 486 "05function.c"
    # 365 "05function.c"
    if(_if_conditional186=*info->p==123,    _if_conditional186) {
        # 366 "05function.c"
        info->p++;
        # 368 "05function.c"
        dquort_133=(_Bool)0;
        # 369 "05function.c"
        squort_134=(_Bool)0;
        # 370 "05function.c"
        sline_135=0;
        # 371 "05function.c"
        nest_136=0;
        # 481 "05function.c"
        while(_while_condtional22=1,        _while_condtional22) {
            # 480 "05function.c"
            # 373 "05function.c"
            if(dquort_133) {
                # 406 "05function.c"
                # 374 "05function.c"
                if(_if_conditional188=*info->p==92,                _if_conditional188) {
                    # 375 "05function.c"
                    info->p++;
                    # 380 "05function.c"
                    # 376 "05function.c"
                    if(_if_conditional189=*info->p==0,                    _if_conditional189) {
                        # 377 "05function.c"
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_135);
                        # 378 "05function.c"
                        exit(2);
                    }
                    # 383 "05function.c"
                    # 380 "05function.c"
                    if(_if_conditional190=*info->p==10,                    _if_conditional190) {
                        # 381 "05function.c"
                        info->p++;
                    }
                    # 383 "05function.c"
                    info->p++;
                }
                else {
                    # 406 "05function.c"
                    # 385 "05function.c"
                    if(_if_conditional191=*info->p==34,                    _if_conditional191) {
                        # 386 "05function.c"
                        info->p++;
                        # 387 "05function.c"
                        dquort_133=!dquort_133;
                    }
                    else {
                        # 406 "05function.c"
                        # 389 "05function.c"
                        if(_if_conditional192=*info->p==10,                        _if_conditional192) {
                            # 390 "05function.c"
                            info->p++;
                            # 391 "05function.c"
                            info->sline++;
                            # 397 "05function.c"
                            # 393 "05function.c"
                            if(_if_conditional193=*info->p==0,                            _if_conditional193) {
                                # 394 "05function.c"
                                err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_135);
                                # 395 "05function.c"
                                exit(2);
                            }
                        }
                        else {
                            # 399 "05function.c"
                            info->p++;
                            # 405 "05function.c"
                            # 401 "05function.c"
                            if(_if_conditional194=*info->p==0,                            _if_conditional194) {
                                # 402 "05function.c"
                                err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_135);
                                # 403 "05function.c"
                                exit(2);
                            }
                        }
                    }
                }
            }
            else {
                # 480 "05function.c"
                # 407 "05function.c"
                if(squort_134) {
                    # 440 "05function.c"
                    # 408 "05function.c"
                    if(_if_conditional196=*info->p==92,                    _if_conditional196) {
                        # 409 "05function.c"
                        info->p++;
                        # 414 "05function.c"
                        # 410 "05function.c"
                        if(_if_conditional197=*info->p==0,                        _if_conditional197) {
                            # 411 "05function.c"
                            err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_135);
                            # 412 "05function.c"
                            exit(2);
                        }
                        # 417 "05function.c"
                        # 414 "05function.c"
                        if(_if_conditional198=*info->p==10,                        _if_conditional198) {
                            # 415 "05function.c"
                            info->sline++;
                        }
                        # 417 "05function.c"
                        info->p++;
                    }
                    else {
                        # 440 "05function.c"
                        # 419 "05function.c"
                        if(_if_conditional199=*info->p==39,                        _if_conditional199) {
                            # 420 "05function.c"
                            info->p++;
                            # 421 "05function.c"
                            squort_134=!squort_134;
                        }
                        else {
                            # 440 "05function.c"
                            # 423 "05function.c"
                            if(_if_conditional200=*info->p==10,                            _if_conditional200) {
                                # 424 "05function.c"
                                info->p++;
                                # 425 "05function.c"
                                info->sline++;
                                # 431 "05function.c"
                                # 427 "05function.c"
                                if(_if_conditional201=*info->p==0,                                _if_conditional201) {
                                    # 428 "05function.c"
                                    err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_135);
                                    # 429 "05function.c"
                                    exit(2);
                                }
                            }
                            else {
                                # 433 "05function.c"
                                info->p++;
                                # 439 "05function.c"
                                # 435 "05function.c"
                                if(_if_conditional202=*info->p==0,                                _if_conditional202) {
                                    # 436 "05function.c"
                                    err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_135);
                                    # 437 "05function.c"
                                    exit(2);
                                }
                            }
                        }
                    }
                }
                else {
                    # 480 "05function.c"
                    # 441 "05function.c"
                    if(_if_conditional203=*info->p==39,                    _if_conditional203) {
                        # 442 "05function.c"
                        sline_135=info->sline;
                        # 443 "05function.c"
                        info->p++;
                        # 444 "05function.c"
                        squort_134=!squort_134;
                    }
                    else {
                        # 480 "05function.c"
                        # 446 "05function.c"
                        if(_if_conditional204=*info->p==34,                        _if_conditional204) {
                            # 447 "05function.c"
                            sline_135=info->sline;
                            # 448 "05function.c"
                            info->p++;
                            # 449 "05function.c"
                            dquort_133=!dquort_133;
                        }
                        else {
                            # 480 "05function.c"
                            # 451 "05function.c"
                            if(_if_conditional205=*info->p==35,                            _if_conditional205) {
                                # 452 "05function.c"
                                parse_sharp_v5(info);
                            }
                            else {
                                # 480 "05function.c"
                                # 454 "05function.c"
                                if(_if_conditional206=*info->p==123,                                _if_conditional206) {
                                    # 455 "05function.c"
                                    info->p++;
                                    # 457 "05function.c"
                                    nest_136++;
                                }
                                else {
                                    # 480 "05function.c"
                                    # 459 "05function.c"
                                    if(_if_conditional207=*info->p==125,                                    _if_conditional207) {
                                        # 460 "05function.c"
                                        info->p++;
                                        # 467 "05function.c"
                                        # 462 "05function.c"
                                        if(_if_conditional208=nest_136==0,                                        _if_conditional208) {
                                            # 463 "05function.c"
                                            skip_spaces_and_lf(info);
                                            # 464 "05function.c"
                                            break;
                                        }
                                        # 467 "05function.c"
                                        nest_136--;
                                    }
                                    else {
                                        # 480 "05function.c"
                                        # 469 "05function.c"
                                        if(_if_conditional209=*info->p==0,                                        _if_conditional209) {
                                            # 470 "05function.c"
                                            err_msg(info,"The block requires } character for closing block");
                                            # 471 "05function.c"
                                            exit(2);
                                        }
                                        else {
                                            # 480 "05function.c"
                                            # 473 "05function.c"
                                            if(_if_conditional210=*info->p==10,                                            _if_conditional210) {
                                                # 474 "05function.c"
                                                info->p++;
                                                # 475 "05function.c"
                                                info->sline++;
                                            }
                                            else {
                                                # 478 "05function.c"
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
        # 483 "05function.c"
        err_msg(info,"Require block. This is %c",*info->p);
    }
    # 486 "05function.c"
    tail_137=info->p;
    # 488 "05function.c"
    buf_138=(char*)come_increment_ref_count(((char*)(right_value157=(char*)come_calloc(1, sizeof(char)*(1*(tail_137-head_132+1)), "05function.c", 488, "char"))));
    right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 489 "05function.c"
    memcpy(buf_138,head_132,tail_137-head_132);
    # 490 "05function.c"
    buf_138[tail_137-head_132]=0;
    # 492 "05function.c"
    __result108__ = __result_obj__ = ((char*)(right_value158=__builtin_string(buf_138)));
    buf_138 = come_decrement_ref_count2(buf_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result108__;
    buf_138 = come_decrement_ref_count2(buf_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool strmemcmp(char* p, char* p2){
void* __result_obj__;
_Bool terminated_139;
char* p3_140;
int i_141;
_Bool _if_conditional211;
_Bool __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&terminated_139, 0, sizeof(_Bool));
memset(&p3_140, 0, sizeof(char*));
memset(&i_141, 0, sizeof(int));
    # 497 "05function.c"
    terminated_139=(_Bool)0;
    # 498 "05function.c"
    p3_140=p;
    # 506 "05function.c"
    for(    i_141=0;    i_141<strlen(p2);    i_141++    ){
        # 504 "05function.c"
        # 500 "05function.c"
        if(_if_conditional211=*p3_140==0,        _if_conditional211) {
            # 501 "05function.c"
            terminated_139=(_Bool)1;
            # 502 "05function.c"
            break;
        }
        # 504 "05function.c"
        p3_140++;
    }
    # 506 "05function.c"
    __result109__ = !terminated_139&&memcmp(p,p2,strlen(p2))==0;
    return __result109__;
}

char* parse_attribute(struct sInfo* info){
void* __result_obj__;
void* right_value159;
void* right_value160;
struct buffer* asm_fun_name_142;
_Bool _while_condtional23;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
int brace_num_143;
_Bool _while_condtional24;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
int len_144;
_Bool in_dquort_145;
int brace_num_146;
_Bool _while_condtional25;
_Bool _if_conditional222;
_Bool _if_conditional223;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool _if_conditional226;
_Bool _if_conditional227;
int brace_num_147;
_Bool _while_condtional26;
_Bool _if_conditional228;
_Bool _if_conditional229;
_Bool _if_conditional230;
void* right_value161;
char* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
right_value159 = (void*)0;
right_value160 = (void*)0;
memset(&asm_fun_name_142, 0, sizeof(struct buffer*));
memset(&brace_num_143, 0, sizeof(int));
memset(&len_144, 0, sizeof(int));
memset(&in_dquort_145, 0, sizeof(_Bool));
memset(&brace_num_146, 0, sizeof(int));
memset(&brace_num_147, 0, sizeof(int));
right_value161 = (void*)0;
    # 511 "05function.c"
    asm_fun_name_142=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value160=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value159=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 511, "buffer"))))))));
    come_call_finalizer3(right_value159,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value160,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 626 "05function.c"
    while(_while_condtional23=(_Bool)1,    _while_condtional23) {
        # 624 "05function.c"
        # 514 "05function.c"
        if(_if_conditional212=strmemcmp(info->p,"__attribute_pure__"),        _if_conditional212) {
            # 515 "05function.c"
            info->p+=strlen("__attribute_pure__");
            # 516 "05function.c"
            skip_spaces_and_lf(info);
        }
        else {
            # 624 "05function.c"
            # 518 "05function.c"
            if(_if_conditional213=strmemcmp(info->p,"__attribute_malloc__"),            _if_conditional213) {
                # 519 "05function.c"
                info->p+=strlen("__attribute_malloc__");
                # 520 "05function.c"
                skip_spaces_and_lf(info);
            }
            else {
                # 624 "05function.c"
                # 522 "05function.c"
                if(_if_conditional214=strmemcmp(info->p,"__attr_dealloc_fclose"),                _if_conditional214) {
                    # 523 "05function.c"
                    info->p+=strlen("__attr_dealloc_fclose");
                    # 524 "05function.c"
                    skip_spaces_and_lf(info);
                }
                else {
                    # 624 "05function.c"
                    # 526 "05function.c"
                    if(_if_conditional215=strmemcmp(info->p,"__wur"),                    _if_conditional215) {
                        # 527 "05function.c"
                        info->p+=strlen("__wur");
                        # 528 "05function.c"
                        skip_spaces_and_lf(info);
                    }
                    else {
                        # 624 "05function.c"
                        # 530 "05function.c"
                        if(_if_conditional216=strmemcmp(info->p,"__noreturn"),                        _if_conditional216) {
                            # 531 "05function.c"
                            info->p+=strlen("__noreturn");
                            # 532 "05function.c"
                            skip_spaces_and_lf(info);
                        }
                        else {
                            # 624 "05function.c"
                            # 534 "05function.c"
                            if(_if_conditional217=strmemcmp(info->p,"__attribute__"),                            _if_conditional217) {
                                # 535 "05function.c"
                                info->p+=strlen("__attribute__");
                                # 536 "05function.c"
                                skip_spaces_and_lf(info);
                                # 538 "05function.c"
                                brace_num_143=0;
                                # 557 "05function.c"
                                while(_while_condtional24=*info->p,                                _while_condtional24) {
                                    # 555 "05function.c"
                                    # 540 "05function.c"
                                    if(_if_conditional218=*info->p==40,                                    _if_conditional218) {
                                        # 541 "05function.c"
                                        info->p++;
                                        # 542 "05function.c"
                                        brace_num_143++;
                                    }
                                    else {
                                        # 555 "05function.c"
                                        # 544 "05function.c"
                                        if(_if_conditional219=*info->p==41,                                        _if_conditional219) {
                                            # 545 "05function.c"
                                            info->p++;
                                            # 546 "05function.c"
                                            brace_num_143--;
                                            # 551 "05function.c"
                                            # 548 "05function.c"
                                            if(_if_conditional220=brace_num_143==0,                                            _if_conditional220) {
                                                # 549 "05function.c"
                                                break;
                                            }
                                        }
                                        else {
                                            # 553 "05function.c"
                                            info->p++;
                                        }
                                    }
                                }
                                # 557 "05function.c"
                                skip_spaces_and_lf(info);
                            }
                            else {
                                # 624 "05function.c"
                                # 559 "05function.c"
                                if(_if_conditional221=strmemcmp(info->p,"__asm__"),                                _if_conditional221) {
                                    # 560 "05function.c"
                                    info->p+=strlen("__asm__");
                                    # 561 "05function.c"
                                    skip_spaces_and_lf(info);
                                    # 563 "05function.c"
                                    len_144=0;
                                    # 565 "05function.c"
                                    in_dquort_145=(_Bool)0;
                                    # 566 "05function.c"
                                    brace_num_146=0;
                                    # 594 "05function.c"
                                    while(_while_condtional25=*info->p,                                    _while_condtional25) {
                                        # 592 "05function.c"
                                        # 568 "05function.c"
                                        if(_if_conditional222=*info->p==34,                                        _if_conditional222) {
                                            # 569 "05function.c"
                                            info->p++;
                                            # 571 "05function.c"
                                            in_dquort_145=!in_dquort_145;
                                        }
                                        else {
                                            # 592 "05function.c"
                                            # 573 "05function.c"
                                            if(in_dquort_145) {
                                                # 574 "05function.c"
                                                buffer_append_char(asm_fun_name_142,*info->p);
                                                # 575 "05function.c"
                                                info->p++;
                                            }
                                            else {
                                                # 592 "05function.c"
                                                # 577 "05function.c"
                                                if(_if_conditional224=*info->p==40,                                                _if_conditional224) {
                                                    # 578 "05function.c"
                                                    info->p++;
                                                    # 579 "05function.c"
                                                    brace_num_146++;
                                                }
                                                else {
                                                    # 592 "05function.c"
                                                    # 581 "05function.c"
                                                    if(_if_conditional225=*info->p==41,                                                    _if_conditional225) {
                                                        # 582 "05function.c"
                                                        info->p++;
                                                        # 583 "05function.c"
                                                        brace_num_146--;
                                                        # 588 "05function.c"
                                                        # 585 "05function.c"
                                                        if(_if_conditional226=brace_num_146==0,                                                        _if_conditional226) {
                                                            # 586 "05function.c"
                                                            break;
                                                        }
                                                    }
                                                    else {
                                                        # 590 "05function.c"
                                                        info->p++;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    # 594 "05function.c"
                                    skip_spaces_and_lf(info);
                                }
                                else {
                                    # 624 "05function.c"
                                    # 596 "05function.c"
                                    if(_if_conditional227=strmemcmp(info->p,"__asm"),                                    _if_conditional227) {
                                        # 597 "05function.c"
                                        info->p+=strlen("__asm");
                                        # 598 "05function.c"
                                        skip_spaces_and_lf(info);
                                        # 600 "05function.c"
                                        brace_num_147=0;
                                        # 619 "05function.c"
                                        while(_while_condtional26=*info->p,                                        _while_condtional26) {
                                            # 617 "05function.c"
                                            # 602 "05function.c"
                                            if(_if_conditional228=*info->p==40,                                            _if_conditional228) {
                                                # 603 "05function.c"
                                                info->p++;
                                                # 604 "05function.c"
                                                brace_num_147++;
                                            }
                                            else {
                                                # 617 "05function.c"
                                                # 606 "05function.c"
                                                if(_if_conditional229=*info->p==41,                                                _if_conditional229) {
                                                    # 607 "05function.c"
                                                    info->p++;
                                                    # 608 "05function.c"
                                                    brace_num_147--;
                                                    # 613 "05function.c"
                                                    # 610 "05function.c"
                                                    if(_if_conditional230=brace_num_147==0,                                                    _if_conditional230) {
                                                        # 611 "05function.c"
                                                        break;
                                                    }
                                                }
                                                else {
                                                    # 615 "05function.c"
                                                    info->p++;
                                                }
                                            }
                                        }
                                        # 619 "05function.c"
                                        skip_spaces_and_lf(info);
                                    }
                                    else {
                                        # 622 "05function.c"
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
    # 626 "05function.c"
    __result110__ = __result_obj__ = ((char*)(right_value161=buffer_to_string(asm_fun_name_142)));
    come_call_finalizer3(asm_fun_name_142,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result110__;
    come_call_finalizer3(asm_fun_name_142,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __result_obj__;
_Bool _while_condtional27;
char* head_148;
int head_sline_149;
void* right_value162;
char* buf_150;
_Bool _if_conditional231;
void* right_value163;
struct sNode* node_151;
_Bool _while_condtional28;
_Bool _if_conditional232;
_Bool _if_conditional233;
_Bool _if_conditional234;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_148, 0, sizeof(char*));
memset(&head_sline_149, 0, sizeof(int));
right_value162 = (void*)0;
memset(&buf_150, 0, sizeof(char*));
right_value163 = (void*)0;
memset(&node_151, 0, sizeof(struct sNode*));
    # 671 "05function.c"
    while(_while_condtional27=*info->p,    _while_condtional27) {
        # 632 "05function.c"
        parse_sharp_v5(info);
        # 634 "05function.c"
        head_148=info->p;
        # 635 "05function.c"
        head_sline_149=info->sline;
        # 636 "05function.c"
        buf_150=(char*)come_increment_ref_count(((char*)(right_value162=parse_word(info))));
        right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 638 "05function.c"
        parse_sharp_v5(info);
        # 646 "05function.c"
        # 640 "05function.c"
        if(_if_conditional231=block&&*info->p==125,        _if_conditional231) {
            # 641 "05function.c"
            info->p++;
            # 642 "05function.c"
            skip_spaces_and_lf(info);
            # 643 "05function.c"
            buf_150 = come_decrement_ref_count2(buf_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        # 646 "05function.c"
        node_151=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value163=top_level_v99(buf_150,head_148,head_sline_149,info))));
        if(right_value163) { right_value163 = come_decrement_ref_count2(right_value163, ((struct sNode*)right_value163)->finalize, ((struct sNode*)right_value163)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 647 "05function.c"
        parse_sharp_v5(info);
        # 653 "05function.c"
        while(_while_condtional28=*info->p==59,        _while_condtional28) {
            # 650 "05function.c"
            info->p++;
            # 651 "05function.c"
            skip_spaces_and_lf(info);
        }
        # 653 "05function.c"
        parse_sharp_v5(info);
        # 661 "05function.c"
        # 655 "05function.c"
        if(_if_conditional232=node_151!=((void*)0),        _if_conditional232) {
            # 660 "05function.c"
            # 656 "05function.c"
            if(_if_conditional233=!node_compile(node_151,info),            _if_conditional233) {
                # 657 "05function.c"
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                # 658 "05function.c"
                exit(2);
            }
        }
        # 661 "05function.c"
        parse_sharp_v5(info);
        # 663 "05function.c"
        skip_spaces_and_lf(info);
        # 670 "05function.c"
        # 665 "05function.c"
        if(_if_conditional234=block&&*info->p==125,        _if_conditional234) {
            # 666 "05function.c"
            info->p++;
            # 667 "05function.c"
            skip_spaces_and_lf(info);
            # 668 "05function.c"
            buf_150 = come_decrement_ref_count2(buf_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_151) { node_151 = come_decrement_ref_count2(node_151, ((struct sNode*)node_151)->finalize, ((struct sNode*)node_151)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        buf_150 = come_decrement_ref_count2(buf_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_151) { node_151 = come_decrement_ref_count2(node_151, ((struct sNode*)node_151)->finalize, ((struct sNode*)node_151)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

int transpile_v5(struct sInfo* info){
void* __result_obj__;
void* right_value164;
char* name_152;
void* right_value165;
void* right_value166;
struct sType* result_type_153;
void* right_value167;
void* right_value168;
void* right_value169;
void* right_value170;
void* right_value171;
void* right_value172;
void* right_value173;
void* right_value174;
void* right_value175;
void* right_value176;
struct sType* __list_values1___154[5];
void* right_value180;
void* right_value181;
struct list$1sTypeph* param_types_159;
void* right_value182;
void* right_value183;
void* right_value184;
void* right_value185;
void* right_value186;
char* __list_values2___160[5];
void* right_value190;
void* right_value191;
struct list$1charph* param_names_165;
void* right_value192;
void* right_value193;
struct list$1charph* param_default_parametors_166;
void* right_value194;
void* right_value195;
void* right_value196;
void* right_value197;
void* right_value198;
void* right_value199;
void* right_value200;
struct sFun* main_fun_167;
void* right_value207;
void* right_value208;
char* name_212;
void* right_value209;
void* right_value210;
struct sType* result_type_213;
void* right_value211;
void* right_value212;
struct sType* __list_values3___214[1];
void* right_value213;
void* right_value214;
struct list$1sTypeph* param_types_215;
void* right_value215;
char* __list_values4___216[1];
void* right_value216;
void* right_value217;
struct list$1charph* param_names_217;
void* right_value218;
void* right_value219;
struct list$1charph* param_default_parametors_218;
void* right_value220;
void* right_value221;
void* right_value222;
void* right_value223;
struct sFun* main_fun_219;
void* right_value224;
void* right_value225;
char* name_220;
void* right_value226;
void* right_value227;
struct sType* result_type_221;
void* right_value228;
void* right_value229;
void* right_value230;
void* right_value231;
void* right_value232;
void* right_value233;
void* right_value234;
void* right_value235;
void* right_value236;
void* right_value237;
void* right_value238;
void* right_value239;
void* right_value240;
void* right_value241;
struct sType* __list_values5___222[7];
void* right_value242;
void* right_value243;
struct list$1sTypeph* param_types_223;
void* right_value244;
void* right_value245;
void* right_value246;
void* right_value247;
void* right_value248;
void* right_value249;
void* right_value250;
char* __list_values6___224[7];
void* right_value251;
void* right_value252;
struct list$1charph* param_names_225;
void* right_value253;
void* right_value254;
struct list$1charph* param_default_parametors_226;
void* right_value255;
void* right_value256;
void* right_value257;
void* right_value258;
struct sFun* main_fun_227;
void* right_value259;
void* right_value260;
char* name_228;
void* right_value261;
void* right_value262;
struct sType* result_type_229;
void* right_value263;
void* right_value264;
void* right_value265;
void* right_value266;
void* right_value267;
void* right_value268;
void* right_value269;
void* right_value270;
void* right_value271;
void* right_value272;
struct sType* __list_values7___230[5];
void* right_value273;
void* right_value274;
struct list$1sTypeph* param_types_231;
void* right_value275;
void* right_value276;
void* right_value277;
void* right_value278;
void* right_value279;
char* __list_values8___232[5];
void* right_value280;
void* right_value281;
struct list$1charph* param_names_233;
void* right_value282;
void* right_value283;
struct list$1charph* param_default_parametors_234;
void* right_value284;
void* right_value285;
void* right_value286;
void* right_value287;
struct sFun* main_fun_235;
void* right_value288;
void* right_value289;
char* name_236;
void* right_value290;
void* right_value291;
struct sType* result_type_237;
void* right_value292;
void* right_value293;
struct sType* __list_values9___238[1];
void* right_value294;
void* right_value295;
struct list$1sTypeph* param_types_239;
void* right_value296;
char* __list_values10___240[1];
void* right_value297;
void* right_value298;
struct list$1charph* param_names_241;
void* right_value299;
void* right_value300;
struct list$1charph* param_default_parametors_242;
void* right_value301;
void* right_value302;
void* right_value303;
void* right_value304;
struct sFun* main_fun_243;
void* right_value305;
void* right_value306;
char* name_244;
void* right_value307;
void* right_value308;
struct sType* result_type_245;
void* right_value309;
void* right_value310;
void* right_value311;
void* right_value312;
void* right_value313;
void* right_value314;
void* right_value315;
void* right_value316;
struct sType* __list_values11___246[4];
void* right_value317;
void* right_value318;
struct list$1sTypeph* param_types_247;
void* right_value319;
void* right_value320;
void* right_value321;
void* right_value322;
char* __list_values12___248[4];
void* right_value323;
void* right_value324;
struct list$1charph* param_names_249;
void* right_value325;
void* right_value326;
struct list$1charph* param_default_parametors_250;
void* right_value327;
void* right_value328;
void* right_value329;
void* right_value330;
void* right_value331;
void* right_value332;
void* right_value333;
struct sFun* main_fun_251;
void* right_value334;
void* right_value335;
char* name_252;
void* right_value336;
void* right_value337;
struct sType* result_type_253;
void* right_value338;
void* right_value339;
void* right_value340;
void* right_value341;
void* right_value342;
void* right_value343;
struct sType* __list_values13___254[3];
void* right_value344;
void* right_value345;
struct list$1sTypeph* param_types_255;
void* right_value346;
void* right_value347;
void* right_value348;
char* __list_values14___256[3];
void* right_value349;
void* right_value350;
struct list$1charph* param_names_257;
void* right_value351;
void* right_value352;
struct list$1charph* param_default_parametors_258;
void* right_value353;
void* right_value354;
void* right_value355;
void* right_value356;
struct sFun* main_fun_259;
void* right_value357;
void* right_value358;
char* name_260;
void* right_value359;
void* right_value360;
struct sType* result_type_261;
void* right_value361;
void* right_value362;
struct sType* __list_values15___262[1];
void* right_value363;
void* right_value364;
struct list$1sTypeph* param_types_263;
void* right_value365;
char* __list_values16___264[1];
void* right_value366;
void* right_value367;
struct list$1charph* param_names_265;
void* right_value368;
void* right_value369;
struct list$1charph* param_default_parametors_266;
void* right_value370;
void* right_value371;
void* right_value372;
void* right_value373;
struct sFun* main_fun_267;
void* right_value374;
void* right_value375;
char* name_268;
void* right_value376;
void* right_value377;
struct sType* result_type_269;
void* right_value378;
void* right_value379;
void* right_value380;
void* right_value381;
void* right_value382;
void* right_value383;
struct sType* __list_values17___270[3];
void* right_value384;
void* right_value385;
struct list$1sTypeph* param_types_271;
void* right_value386;
void* right_value387;
void* right_value388;
char* __list_values18___272[3];
void* right_value389;
void* right_value390;
struct list$1charph* param_names_273;
void* right_value391;
void* right_value392;
struct list$1charph* param_default_parametors_274;
void* right_value393;
void* right_value394;
void* right_value395;
void* right_value396;
struct sFun* main_fun_275;
void* right_value397;
void* right_value398;
char* name_276;
void* right_value399;
void* right_value400;
struct sType* result_type_277;
void* right_value401;
void* right_value402;
struct list$1sTypeph* param_types_278;
void* right_value403;
void* right_value404;
struct list$1charph* param_names_279;
void* right_value405;
void* right_value406;
struct list$1charph* param_default_parametors_280;
void* right_value407;
void* right_value408;
void* right_value409;
void* right_value410;
struct sFun* main_fun_281;
void* right_value411;
void* right_value412;
char* name_282;
void* right_value413;
void* right_value414;
struct sType* result_type_283;
void* right_value415;
void* right_value416;
void* right_value417;
void* right_value418;
void* right_value419;
void* right_value420;
void* right_value421;
void* right_value422;
struct sType* __list_values19___284[4];
void* right_value423;
void* right_value424;
struct list$1sTypeph* param_types_285;
void* right_value425;
void* right_value426;
void* right_value427;
void* right_value428;
char* __list_values20___286[4];
void* right_value429;
void* right_value430;
struct list$1charph* param_names_287;
void* right_value431;
void* right_value432;
struct list$1charph* param_default_parametors_288;
void* right_value433;
void* right_value434;
void* right_value435;
void* right_value436;
struct sFun* main_fun_289;
void* right_value437;
int __result139__;
memset(&__result_obj__, 0, sizeof(void*));
right_value164 = (void*)0;
memset(&name_152, 0, sizeof(char*));
right_value165 = (void*)0;
right_value166 = (void*)0;
memset(&result_type_153, 0, sizeof(struct sType*));
right_value167 = (void*)0;
right_value168 = (void*)0;
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value171 = (void*)0;
right_value172 = (void*)0;
right_value173 = (void*)0;
right_value174 = (void*)0;
right_value175 = (void*)0;
right_value176 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
memset(&param_types_159, 0, sizeof(struct list$1sTypeph*));
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value185 = (void*)0;
right_value186 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
memset(&param_names_165, 0, sizeof(struct list$1charph*));
right_value192 = (void*)0;
right_value193 = (void*)0;
memset(&param_default_parametors_166, 0, sizeof(struct list$1charph*));
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value200 = (void*)0;
memset(&main_fun_167, 0, sizeof(struct sFun*));
right_value207 = (void*)0;
right_value208 = (void*)0;
memset(&name_212, 0, sizeof(char*));
right_value209 = (void*)0;
right_value210 = (void*)0;
memset(&result_type_213, 0, sizeof(struct sType*));
right_value211 = (void*)0;
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
memset(&param_types_215, 0, sizeof(struct list$1sTypeph*));
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
memset(&param_names_217, 0, sizeof(struct list$1charph*));
right_value218 = (void*)0;
right_value219 = (void*)0;
memset(&param_default_parametors_218, 0, sizeof(struct list$1charph*));
right_value220 = (void*)0;
right_value221 = (void*)0;
right_value222 = (void*)0;
right_value223 = (void*)0;
memset(&main_fun_219, 0, sizeof(struct sFun*));
right_value224 = (void*)0;
right_value225 = (void*)0;
memset(&name_220, 0, sizeof(char*));
right_value226 = (void*)0;
right_value227 = (void*)0;
memset(&result_type_221, 0, sizeof(struct sType*));
right_value228 = (void*)0;
right_value229 = (void*)0;
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value232 = (void*)0;
right_value233 = (void*)0;
right_value234 = (void*)0;
right_value235 = (void*)0;
right_value236 = (void*)0;
right_value237 = (void*)0;
right_value238 = (void*)0;
right_value239 = (void*)0;
right_value240 = (void*)0;
right_value241 = (void*)0;
right_value242 = (void*)0;
right_value243 = (void*)0;
memset(&param_types_223, 0, sizeof(struct list$1sTypeph*));
right_value244 = (void*)0;
right_value245 = (void*)0;
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value248 = (void*)0;
right_value249 = (void*)0;
right_value250 = (void*)0;
right_value251 = (void*)0;
right_value252 = (void*)0;
memset(&param_names_225, 0, sizeof(struct list$1charph*));
right_value253 = (void*)0;
right_value254 = (void*)0;
memset(&param_default_parametors_226, 0, sizeof(struct list$1charph*));
right_value255 = (void*)0;
right_value256 = (void*)0;
right_value257 = (void*)0;
right_value258 = (void*)0;
memset(&main_fun_227, 0, sizeof(struct sFun*));
right_value259 = (void*)0;
right_value260 = (void*)0;
memset(&name_228, 0, sizeof(char*));
right_value261 = (void*)0;
right_value262 = (void*)0;
memset(&result_type_229, 0, sizeof(struct sType*));
right_value263 = (void*)0;
right_value264 = (void*)0;
right_value265 = (void*)0;
right_value266 = (void*)0;
right_value267 = (void*)0;
right_value268 = (void*)0;
right_value269 = (void*)0;
right_value270 = (void*)0;
right_value271 = (void*)0;
right_value272 = (void*)0;
right_value273 = (void*)0;
right_value274 = (void*)0;
memset(&param_types_231, 0, sizeof(struct list$1sTypeph*));
right_value275 = (void*)0;
right_value276 = (void*)0;
right_value277 = (void*)0;
right_value278 = (void*)0;
right_value279 = (void*)0;
right_value280 = (void*)0;
right_value281 = (void*)0;
memset(&param_names_233, 0, sizeof(struct list$1charph*));
right_value282 = (void*)0;
right_value283 = (void*)0;
memset(&param_default_parametors_234, 0, sizeof(struct list$1charph*));
right_value284 = (void*)0;
right_value285 = (void*)0;
right_value286 = (void*)0;
right_value287 = (void*)0;
memset(&main_fun_235, 0, sizeof(struct sFun*));
right_value288 = (void*)0;
right_value289 = (void*)0;
memset(&name_236, 0, sizeof(char*));
right_value290 = (void*)0;
right_value291 = (void*)0;
memset(&result_type_237, 0, sizeof(struct sType*));
right_value292 = (void*)0;
right_value293 = (void*)0;
right_value294 = (void*)0;
right_value295 = (void*)0;
memset(&param_types_239, 0, sizeof(struct list$1sTypeph*));
right_value296 = (void*)0;
right_value297 = (void*)0;
right_value298 = (void*)0;
memset(&param_names_241, 0, sizeof(struct list$1charph*));
right_value299 = (void*)0;
right_value300 = (void*)0;
memset(&param_default_parametors_242, 0, sizeof(struct list$1charph*));
right_value301 = (void*)0;
right_value302 = (void*)0;
right_value303 = (void*)0;
right_value304 = (void*)0;
memset(&main_fun_243, 0, sizeof(struct sFun*));
right_value305 = (void*)0;
right_value306 = (void*)0;
memset(&name_244, 0, sizeof(char*));
right_value307 = (void*)0;
right_value308 = (void*)0;
memset(&result_type_245, 0, sizeof(struct sType*));
right_value309 = (void*)0;
right_value310 = (void*)0;
right_value311 = (void*)0;
right_value312 = (void*)0;
right_value313 = (void*)0;
right_value314 = (void*)0;
right_value315 = (void*)0;
right_value316 = (void*)0;
right_value317 = (void*)0;
right_value318 = (void*)0;
memset(&param_types_247, 0, sizeof(struct list$1sTypeph*));
right_value319 = (void*)0;
right_value320 = (void*)0;
right_value321 = (void*)0;
right_value322 = (void*)0;
right_value323 = (void*)0;
right_value324 = (void*)0;
memset(&param_names_249, 0, sizeof(struct list$1charph*));
right_value325 = (void*)0;
right_value326 = (void*)0;
memset(&param_default_parametors_250, 0, sizeof(struct list$1charph*));
right_value327 = (void*)0;
right_value328 = (void*)0;
right_value329 = (void*)0;
right_value330 = (void*)0;
right_value331 = (void*)0;
right_value332 = (void*)0;
right_value333 = (void*)0;
memset(&main_fun_251, 0, sizeof(struct sFun*));
right_value334 = (void*)0;
right_value335 = (void*)0;
memset(&name_252, 0, sizeof(char*));
right_value336 = (void*)0;
right_value337 = (void*)0;
memset(&result_type_253, 0, sizeof(struct sType*));
right_value338 = (void*)0;
right_value339 = (void*)0;
right_value340 = (void*)0;
right_value341 = (void*)0;
right_value342 = (void*)0;
right_value343 = (void*)0;
right_value344 = (void*)0;
right_value345 = (void*)0;
memset(&param_types_255, 0, sizeof(struct list$1sTypeph*));
right_value346 = (void*)0;
right_value347 = (void*)0;
right_value348 = (void*)0;
right_value349 = (void*)0;
right_value350 = (void*)0;
memset(&param_names_257, 0, sizeof(struct list$1charph*));
right_value351 = (void*)0;
right_value352 = (void*)0;
memset(&param_default_parametors_258, 0, sizeof(struct list$1charph*));
right_value353 = (void*)0;
right_value354 = (void*)0;
right_value355 = (void*)0;
right_value356 = (void*)0;
memset(&main_fun_259, 0, sizeof(struct sFun*));
right_value357 = (void*)0;
right_value358 = (void*)0;
memset(&name_260, 0, sizeof(char*));
right_value359 = (void*)0;
right_value360 = (void*)0;
memset(&result_type_261, 0, sizeof(struct sType*));
right_value361 = (void*)0;
right_value362 = (void*)0;
right_value363 = (void*)0;
right_value364 = (void*)0;
memset(&param_types_263, 0, sizeof(struct list$1sTypeph*));
right_value365 = (void*)0;
right_value366 = (void*)0;
right_value367 = (void*)0;
memset(&param_names_265, 0, sizeof(struct list$1charph*));
right_value368 = (void*)0;
right_value369 = (void*)0;
memset(&param_default_parametors_266, 0, sizeof(struct list$1charph*));
right_value370 = (void*)0;
right_value371 = (void*)0;
right_value372 = (void*)0;
right_value373 = (void*)0;
memset(&main_fun_267, 0, sizeof(struct sFun*));
right_value374 = (void*)0;
right_value375 = (void*)0;
memset(&name_268, 0, sizeof(char*));
right_value376 = (void*)0;
right_value377 = (void*)0;
memset(&result_type_269, 0, sizeof(struct sType*));
right_value378 = (void*)0;
right_value379 = (void*)0;
right_value380 = (void*)0;
right_value381 = (void*)0;
right_value382 = (void*)0;
right_value383 = (void*)0;
right_value384 = (void*)0;
right_value385 = (void*)0;
memset(&param_types_271, 0, sizeof(struct list$1sTypeph*));
right_value386 = (void*)0;
right_value387 = (void*)0;
right_value388 = (void*)0;
right_value389 = (void*)0;
right_value390 = (void*)0;
memset(&param_names_273, 0, sizeof(struct list$1charph*));
right_value391 = (void*)0;
right_value392 = (void*)0;
memset(&param_default_parametors_274, 0, sizeof(struct list$1charph*));
right_value393 = (void*)0;
right_value394 = (void*)0;
right_value395 = (void*)0;
right_value396 = (void*)0;
memset(&main_fun_275, 0, sizeof(struct sFun*));
right_value397 = (void*)0;
right_value398 = (void*)0;
memset(&name_276, 0, sizeof(char*));
right_value399 = (void*)0;
right_value400 = (void*)0;
memset(&result_type_277, 0, sizeof(struct sType*));
right_value401 = (void*)0;
right_value402 = (void*)0;
memset(&param_types_278, 0, sizeof(struct list$1sTypeph*));
right_value403 = (void*)0;
right_value404 = (void*)0;
memset(&param_names_279, 0, sizeof(struct list$1charph*));
right_value405 = (void*)0;
right_value406 = (void*)0;
memset(&param_default_parametors_280, 0, sizeof(struct list$1charph*));
right_value407 = (void*)0;
right_value408 = (void*)0;
right_value409 = (void*)0;
right_value410 = (void*)0;
memset(&main_fun_281, 0, sizeof(struct sFun*));
right_value411 = (void*)0;
right_value412 = (void*)0;
memset(&name_282, 0, sizeof(char*));
right_value413 = (void*)0;
right_value414 = (void*)0;
memset(&result_type_283, 0, sizeof(struct sType*));
right_value415 = (void*)0;
right_value416 = (void*)0;
right_value417 = (void*)0;
right_value418 = (void*)0;
right_value419 = (void*)0;
right_value420 = (void*)0;
right_value421 = (void*)0;
right_value422 = (void*)0;
right_value423 = (void*)0;
right_value424 = (void*)0;
memset(&param_types_285, 0, sizeof(struct list$1sTypeph*));
right_value425 = (void*)0;
right_value426 = (void*)0;
right_value427 = (void*)0;
right_value428 = (void*)0;
right_value429 = (void*)0;
right_value430 = (void*)0;
memset(&param_names_287, 0, sizeof(struct list$1charph*));
right_value431 = (void*)0;
right_value432 = (void*)0;
memset(&param_default_parametors_288, 0, sizeof(struct list$1charph*));
right_value433 = (void*)0;
right_value434 = (void*)0;
right_value435 = (void*)0;
right_value436 = (void*)0;
memset(&main_fun_289, 0, sizeof(struct sFun*));
right_value437 = (void*)0;
    # 675 "05function.c"
    skip_spaces_and_lf(info);
    # 676 "05function.c"
    parse_sharp_v5(info);
    # 698 "05function.c"
    {
        # 679 "05function.c"
        name_152=(char*)come_increment_ref_count(((char*)(right_value164=__builtin_string("come_calloc"))));
        right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 680 "05function.c"
        result_type_153=(struct sType*)come_increment_ref_count(((struct sType*)(right_value166=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value165=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 680, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer3(right_value165,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value166,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 681 "05function.c"
        {__list_values1___154[0]=come_increment_ref_count(((struct sType*)(right_value168=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value167=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 681, "sType")))),"int",(_Bool)0,info))));
__list_values1___154[1]=come_increment_ref_count(((struct sType*)(right_value170=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value169=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 681, "sType")))),"int",(_Bool)0,info))));
__list_values1___154[2]=come_increment_ref_count(((struct sType*)(right_value172=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value171=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 681, "sType")))),"char*",(_Bool)0,info))));
__list_values1___154[3]=come_increment_ref_count(((struct sType*)(right_value174=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value173=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 681, "sType")))),"int",(_Bool)0,info))));
__list_values1___154[4]=come_increment_ref_count(((struct sType*)(right_value176=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value175=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 681, "sType")))),"char*",(_Bool)0,info))));
}        param_types_159=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value181=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value180=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 681, "struct list$1sTypeph")))),5,__list_values1___154))));
        come_call_finalizer3(right_value167,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value168,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value169,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value170,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value171,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value172,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value173,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value174,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value175,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value176,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value180,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value181,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 682 "05function.c"
        {__list_values2___160[0]=come_increment_ref_count(((char*)(right_value182=__builtin_string("count"))));
__list_values2___160[1]=come_increment_ref_count(((char*)(right_value183=__builtin_string("size"))));
__list_values2___160[2]=come_increment_ref_count(((char*)(right_value184=__builtin_string("sname"))));
__list_values2___160[3]=come_increment_ref_count(((char*)(right_value185=__builtin_string("sline"))));
__list_values2___160[4]=come_increment_ref_count(((char*)(right_value186=__builtin_string("class_name"))));
}        param_names_165=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value191=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value190=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 682, "struct list$1charph")))),5,__list_values2___160))));
        right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value190,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value191,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 683 "05function.c"
        param_default_parametors_166=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value193=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value192=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 683, "list$1charph"))))))));
        come_call_finalizer3(right_value192,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value193,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 684 "05function.c"
        list$1charph_push_back(param_default_parametors_166,((void*)0));
        # 685 "05function.c"
        list$1charph_push_back(param_default_parametors_166,((void*)0));
        # 686 "05function.c"
        list$1charph_push_back(param_default_parametors_166,(char*)come_increment_ref_count(((char*)(right_value194=__builtin_string("null")))));
        right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 687 "05function.c"
        list$1charph_push_back(param_default_parametors_166,(char*)come_increment_ref_count(((char*)(right_value195=__builtin_string("0")))));
        right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 688 "05function.c"
        list$1charph_push_back(param_default_parametors_166,(char*)come_increment_ref_count(((char*)(right_value196=__builtin_string("null")))));
        right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 694 "05function.c"
        main_fun_167=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value200=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value197=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 689, "sFun")))),(char*)come_increment_ref_count(name_152),(struct sType*)come_increment_ref_count(result_type_153),(struct list$1sTypeph*)come_increment_ref_count(param_types_159),(struct list$1charph*)come_increment_ref_count(param_names_165),(struct list$1charph*)come_increment_ref_count(param_default_parametors_166),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value198=__builtin_string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name)")))),(char*)come_increment_ref_count(((char*)(right_value199=__builtin_string("")))),info))));
        come_call_finalizer3(right_value197,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value200,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        # 696 "05function.c"
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value207=__builtin_string(name_152)))),(struct sFun*)come_increment_ref_count(main_fun_167));
        right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_152 = come_decrement_ref_count2(name_152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_153,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_159,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_165,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_166,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_167,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 713 "05function.c"
    {
        # 699 "05function.c"
        name_212=(char*)come_increment_ref_count(((char*)(right_value208=__builtin_string("come_increment_ref_count"))));
        right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 700 "05function.c"
        result_type_213=(struct sType*)come_increment_ref_count(((struct sType*)(right_value210=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value209=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 700, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer3(right_value209,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value210,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 701 "05function.c"
        {__list_values3___214[0]=come_increment_ref_count(((struct sType*)(right_value212=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value211=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 701, "sType")))),"void*",(_Bool)0,info))));
}        param_types_215=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value214=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value213=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 701, "struct list$1sTypeph")))),1,__list_values3___214))));
        come_call_finalizer3(right_value211,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value212,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value213,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value214,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 702 "05function.c"
        {__list_values4___216[0]=come_increment_ref_count(((char*)(right_value215=__builtin_string("mem"))));
}        param_names_217=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value217=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value216=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 702, "struct list$1charph")))),1,__list_values4___216))));
        right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value216,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value217,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 703 "05function.c"
        param_default_parametors_218=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value219=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value218=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 703, "list$1charph"))))))));
        come_call_finalizer3(right_value218,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value219,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 709 "05function.c"
        main_fun_219=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value223=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value220=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 704, "sFun")))),(char*)come_increment_ref_count(name_212),(struct sType*)come_increment_ref_count(result_type_213),(struct list$1sTypeph*)come_increment_ref_count(param_types_215),(struct list$1charph*)come_increment_ref_count(param_names_217),(struct list$1charph*)come_increment_ref_count(param_default_parametors_218),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value221=__builtin_string("void* come_increment_ref_count(void* mem)")))),(char*)come_increment_ref_count(((char*)(right_value222=__builtin_string("")))),info))));
        come_call_finalizer3(right_value220,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value223,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        # 711 "05function.c"
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value224=__builtin_string(name_212)))),(struct sFun*)come_increment_ref_count(main_fun_219));
        right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_212 = come_decrement_ref_count2(name_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_213,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_215,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_217,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_218,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_219,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 728 "05function.c"
    {
        # 714 "05function.c"
        name_220=(char*)come_increment_ref_count(((char*)(right_value225=__builtin_string("come_call_finalizer"))));
        right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 715 "05function.c"
        result_type_221=(struct sType*)come_increment_ref_count(((struct sType*)(right_value227=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value226=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 715, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer3(right_value226,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value227,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 716 "05function.c"
        {__list_values5___222[0]=come_increment_ref_count(((struct sType*)(right_value229=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value228=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 716, "sType")))),"void*",(_Bool)0,info))));
__list_values5___222[1]=come_increment_ref_count(((struct sType*)(right_value231=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value230=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 716, "sType")))),"void*",(_Bool)0,info))));
__list_values5___222[2]=come_increment_ref_count(((struct sType*)(right_value233=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value232=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 716, "sType")))),"void*",(_Bool)0,info))));
__list_values5___222[3]=come_increment_ref_count(((struct sType*)(right_value235=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value234=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 716, "sType")))),"void*",(_Bool)0,info))));
__list_values5___222[4]=come_increment_ref_count(((struct sType*)(right_value237=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value236=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 716, "sType")))),"int",(_Bool)0,info))));
__list_values5___222[5]=come_increment_ref_count(((struct sType*)(right_value239=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value238=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 716, "sType")))),"int",(_Bool)0,info))));
__list_values5___222[6]=come_increment_ref_count(((struct sType*)(right_value241=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value240=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 716, "sType")))),"int",(_Bool)0,info))));
}        param_types_223=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value243=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value242=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 716, "struct list$1sTypeph")))),7,__list_values5___222))));
        come_call_finalizer3(right_value228,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value229,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value230,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value231,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value232,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value233,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value234,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value235,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value236,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value237,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value238,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value239,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value240,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value241,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value242,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value243,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 717 "05function.c"
        {__list_values6___224[0]=come_increment_ref_count(((char*)(right_value244=__builtin_string("fun"))));
__list_values6___224[1]=come_increment_ref_count(((char*)(right_value245=__builtin_string("mem"))));
__list_values6___224[2]=come_increment_ref_count(((char*)(right_value246=__builtin_string("protocol_fun"))));
__list_values6___224[3]=come_increment_ref_count(((char*)(right_value247=__builtin_string("protocol_obj"))));
__list_values6___224[4]=come_increment_ref_count(((char*)(right_value248=__builtin_string("call_finalizer_only"))));
__list_values6___224[5]=come_increment_ref_count(((char*)(right_value249=__builtin_string("no_decrement"))));
__list_values6___224[6]=come_increment_ref_count(((char*)(right_value250=__builtin_string("no_free"))));
}        param_names_225=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value252=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value251=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 717, "struct list$1charph")))),7,__list_values6___224))));
        right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value251,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value252,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 718 "05function.c"
        param_default_parametors_226=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value254=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value253=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 718, "list$1charph"))))))));
        come_call_finalizer3(right_value253,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value254,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 724 "05function.c"
        main_fun_227=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value258=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value255=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 719, "sFun")))),(char*)come_increment_ref_count(name_220),(struct sType*)come_increment_ref_count(result_type_221),(struct list$1sTypeph*)come_increment_ref_count(param_types_223),(struct list$1charph*)come_increment_ref_count(param_names_225),(struct list$1charph*)come_increment_ref_count(param_default_parametors_226),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value256=__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")))),(char*)come_increment_ref_count(((char*)(right_value257=__builtin_string("")))),info))));
        come_call_finalizer3(right_value255,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value258,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        # 726 "05function.c"
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value259=__builtin_string(name_220)))),(struct sFun*)come_increment_ref_count(main_fun_227));
        right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_220 = come_decrement_ref_count2(name_220, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_221,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_223,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_225,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_226,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_227,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 743 "05function.c"
    {
        # 729 "05function.c"
        name_228=(char*)come_increment_ref_count(((char*)(right_value260=__builtin_string("come_decrement_ref_count"))));
        right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 730 "05function.c"
        result_type_229=(struct sType*)come_increment_ref_count(((struct sType*)(right_value262=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value261=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 730, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer3(right_value261,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value262,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 731 "05function.c"
        {__list_values7___230[0]=come_increment_ref_count(((struct sType*)(right_value264=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value263=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 731, "sType")))),"void*",(_Bool)0,info))));
__list_values7___230[1]=come_increment_ref_count(((struct sType*)(right_value266=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value265=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 731, "sType")))),"void*",(_Bool)0,info))));
__list_values7___230[2]=come_increment_ref_count(((struct sType*)(right_value268=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value267=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 731, "sType")))),"void*",(_Bool)0,info))));
__list_values7___230[3]=come_increment_ref_count(((struct sType*)(right_value270=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value269=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 731, "sType")))),"bool",(_Bool)0,info))));
__list_values7___230[4]=come_increment_ref_count(((struct sType*)(right_value272=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value271=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 731, "sType")))),"bool",(_Bool)0,info))));
}        param_types_231=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value274=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value273=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 731, "struct list$1sTypeph")))),5,__list_values7___230))));
        come_call_finalizer3(right_value263,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value264,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value265,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value266,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value267,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value268,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value269,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value270,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value271,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value272,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value273,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value274,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 732 "05function.c"
        {__list_values8___232[0]=come_increment_ref_count(((char*)(right_value275=__builtin_string("mem"))));
__list_values8___232[1]=come_increment_ref_count(((char*)(right_value276=__builtin_string("protocol_fun"))));
__list_values8___232[2]=come_increment_ref_count(((char*)(right_value277=__builtin_string("protocol_obj"))));
__list_values8___232[3]=come_increment_ref_count(((char*)(right_value278=__builtin_string("no_decrement"))));
__list_values8___232[4]=come_increment_ref_count(((char*)(right_value279=__builtin_string("no_free"))));
}        param_names_233=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value281=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value280=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 732, "struct list$1charph")))),5,__list_values8___232))));
        right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value280,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value281,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 733 "05function.c"
        param_default_parametors_234=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value283=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value282=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 733, "list$1charph"))))))));
        come_call_finalizer3(right_value282,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value283,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 739 "05function.c"
        main_fun_235=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value287=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value284=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 734, "sFun")))),(char*)come_increment_ref_count(name_228),(struct sType*)come_increment_ref_count(result_type_229),(struct list$1sTypeph*)come_increment_ref_count(param_types_231),(struct list$1charph*)come_increment_ref_count(param_names_233),(struct list$1charph*)come_increment_ref_count(param_default_parametors_234),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value285=__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")))),(char*)come_increment_ref_count(((char*)(right_value286=__builtin_string("")))),info))));
        come_call_finalizer3(right_value284,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value287,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        # 741 "05function.c"
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value288=__builtin_string(name_228)))),(struct sFun*)come_increment_ref_count(main_fun_235));
        right_value288 = come_decrement_ref_count2(right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_228 = come_decrement_ref_count2(name_228, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_229,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_231,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_233,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_234,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_235,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 758 "05function.c"
    {
        # 744 "05function.c"
        name_236=(char*)come_increment_ref_count(((char*)(right_value289=__builtin_string("come_free_object"))));
        right_value289 = come_decrement_ref_count2(right_value289, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 745 "05function.c"
        result_type_237=(struct sType*)come_increment_ref_count(((struct sType*)(right_value291=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value290=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 745, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer3(right_value290,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value291,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 746 "05function.c"
        {__list_values9___238[0]=come_increment_ref_count(((struct sType*)(right_value293=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value292=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 746, "sType")))),"void*",(_Bool)0,info))));
}        param_types_239=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value295=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value294=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 746, "struct list$1sTypeph")))),1,__list_values9___238))));
        come_call_finalizer3(right_value292,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value293,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value294,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value295,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 747 "05function.c"
        {__list_values10___240[0]=come_increment_ref_count(((char*)(right_value296=__builtin_string("mem"))));
}        param_names_241=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value298=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value297=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 747, "struct list$1charph")))),1,__list_values10___240))));
        right_value296 = come_decrement_ref_count2(right_value296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value297,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value298,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 748 "05function.c"
        param_default_parametors_242=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value300=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value299=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 748, "list$1charph"))))))));
        come_call_finalizer3(right_value299,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value300,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 754 "05function.c"
        main_fun_243=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value304=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value301=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 749, "sFun")))),(char*)come_increment_ref_count(name_236),(struct sType*)come_increment_ref_count(result_type_237),(struct list$1sTypeph*)come_increment_ref_count(param_types_239),(struct list$1charph*)come_increment_ref_count(param_names_241),(struct list$1charph*)come_increment_ref_count(param_default_parametors_242),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value302=__builtin_string("void come_free_object(void* mem)")))),(char*)come_increment_ref_count(((char*)(right_value303=__builtin_string("")))),info))));
        come_call_finalizer3(right_value301,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value302 = come_decrement_ref_count2(right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value303 = come_decrement_ref_count2(right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value304,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        # 756 "05function.c"
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value305=__builtin_string(name_236)))),(struct sFun*)come_increment_ref_count(main_fun_243));
        right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_236 = come_decrement_ref_count2(name_236, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_237,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_239,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_241,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_242,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_243,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 777 "05function.c"
    {
        # 759 "05function.c"
        name_244=(char*)come_increment_ref_count(((char*)(right_value306=__builtin_string("come_memdup"))));
        right_value306 = come_decrement_ref_count2(right_value306, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 760 "05function.c"
        result_type_245=(struct sType*)come_increment_ref_count(((struct sType*)(right_value308=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value307=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 760, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer3(right_value307,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value308,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 761 "05function.c"
        {__list_values11___246[0]=come_increment_ref_count(((struct sType*)(right_value310=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value309=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 761, "sType")))),"void*",(_Bool)0,info))));
__list_values11___246[1]=come_increment_ref_count(((struct sType*)(right_value312=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value311=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 761, "sType")))),"char*",(_Bool)0,info))));
__list_values11___246[2]=come_increment_ref_count(((struct sType*)(right_value314=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value313=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 761, "sType")))),"int",(_Bool)0,info))));
__list_values11___246[3]=come_increment_ref_count(((struct sType*)(right_value316=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value315=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 761, "sType")))),"char*",(_Bool)0,info))));
}        param_types_247=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value318=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value317=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 761, "struct list$1sTypeph")))),4,__list_values11___246))));
        come_call_finalizer3(right_value309,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value310,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value311,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value312,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value313,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value314,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value315,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value316,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value317,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value318,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 762 "05function.c"
        {__list_values12___248[0]=come_increment_ref_count(((char*)(right_value319=__builtin_string("block"))));
__list_values12___248[1]=come_increment_ref_count(((char*)(right_value320=__builtin_string("sname"))));
__list_values12___248[2]=come_increment_ref_count(((char*)(right_value321=__builtin_string("sline"))));
__list_values12___248[3]=come_increment_ref_count(((char*)(right_value322=__builtin_string("class_name"))));
}        param_names_249=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value324=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value323=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 762, "struct list$1charph")))),4,__list_values12___248))));
        right_value319 = come_decrement_ref_count2(right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value320 = come_decrement_ref_count2(right_value320, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value321 = come_decrement_ref_count2(right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value322 = come_decrement_ref_count2(right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value323,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value324,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 763 "05function.c"
        param_default_parametors_250=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value326=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value325=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 763, "list$1charph"))))))));
        come_call_finalizer3(right_value325,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value326,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 764 "05function.c"
        list$1charph_push_back(param_default_parametors_250,((void*)0));
        # 765 "05function.c"
        list$1charph_push_back(param_default_parametors_250,(char*)come_increment_ref_count(((char*)(right_value327=__builtin_string("null")))));
        right_value327 = come_decrement_ref_count2(right_value327, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 766 "05function.c"
        list$1charph_push_back(param_default_parametors_250,(char*)come_increment_ref_count(((char*)(right_value328=__builtin_string("0")))));
        right_value328 = come_decrement_ref_count2(right_value328, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 767 "05function.c"
        list$1charph_push_back(param_default_parametors_250,(char*)come_increment_ref_count(((char*)(right_value329=__builtin_string("null")))));
        right_value329 = come_decrement_ref_count2(right_value329, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 773 "05function.c"
        main_fun_251=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value333=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value330=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 768, "sFun")))),(char*)come_increment_ref_count(name_244),(struct sType*)come_increment_ref_count(result_type_245),(struct list$1sTypeph*)come_increment_ref_count(param_types_247),(struct list$1charph*)come_increment_ref_count(param_names_249),(struct list$1charph*)come_increment_ref_count(param_default_parametors_250),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value331=__builtin_string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")))),(char*)come_increment_ref_count(((char*)(right_value332=__builtin_string("")))),info))));
        come_call_finalizer3(right_value330,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value331 = come_decrement_ref_count2(right_value331, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value332 = come_decrement_ref_count2(right_value332, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value333,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        # 775 "05function.c"
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value334=__builtin_string(name_244)))),(struct sFun*)come_increment_ref_count(main_fun_251));
        right_value334 = come_decrement_ref_count2(right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_244 = come_decrement_ref_count2(name_244, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_247,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_249,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_250,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_251,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 792 "05function.c"
    {
        # 778 "05function.c"
        name_252=(char*)come_increment_ref_count(((char*)(right_value335=__builtin_string("memset"))));
        right_value335 = come_decrement_ref_count2(right_value335, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 779 "05function.c"
        result_type_253=(struct sType*)come_increment_ref_count(((struct sType*)(right_value337=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value336=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 779, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer3(right_value336,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value337,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 780 "05function.c"
        {__list_values13___254[0]=come_increment_ref_count(((struct sType*)(right_value339=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value338=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 780, "sType")))),"void*",(_Bool)0,info))));
__list_values13___254[1]=come_increment_ref_count(((struct sType*)(right_value341=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value340=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 780, "sType")))),"int",(_Bool)0,info))));
__list_values13___254[2]=come_increment_ref_count(((struct sType*)(right_value343=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value342=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 780, "sType")))),"long",(_Bool)0,info))));
}        param_types_255=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value345=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value344=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 780, "struct list$1sTypeph")))),3,__list_values13___254))));
        come_call_finalizer3(right_value338,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value339,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value340,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value341,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value342,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value343,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value344,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value345,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 781 "05function.c"
        {__list_values14___256[0]=come_increment_ref_count(((char*)(right_value346=__builtin_string("b"))));
__list_values14___256[1]=come_increment_ref_count(((char*)(right_value347=__builtin_string("c"))));
__list_values14___256[2]=come_increment_ref_count(((char*)(right_value348=__builtin_string("len"))));
}        param_names_257=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value350=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value349=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 781, "struct list$1charph")))),3,__list_values14___256))));
        right_value346 = come_decrement_ref_count2(right_value346, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value347 = come_decrement_ref_count2(right_value347, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value348 = come_decrement_ref_count2(right_value348, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value349,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value350,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 782 "05function.c"
        param_default_parametors_258=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value352=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value351=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 782, "list$1charph"))))))));
        come_call_finalizer3(right_value351,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value352,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 788 "05function.c"
        main_fun_259=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value356=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value353=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 783, "sFun")))),(char*)come_increment_ref_count(name_252),(struct sType*)come_increment_ref_count(result_type_253),(struct list$1sTypeph*)come_increment_ref_count(param_types_255),(struct list$1charph*)come_increment_ref_count(param_names_257),(struct list$1charph*)come_increment_ref_count(param_default_parametors_258),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value354=__builtin_string("void* memset(void* b, int c, size_t len)")))),(char*)come_increment_ref_count(((char*)(right_value355=__builtin_string("")))),info))));
        come_call_finalizer3(right_value353,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value354 = come_decrement_ref_count2(right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value355 = come_decrement_ref_count2(right_value355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value356,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        # 790 "05function.c"
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value357=__builtin_string(name_252)))),(struct sFun*)come_increment_ref_count(main_fun_259));
        right_value357 = come_decrement_ref_count2(right_value357, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_252 = come_decrement_ref_count2(name_252, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_253,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_255,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_257,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_258,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_259,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 807 "05function.c"
    {
        # 793 "05function.c"
        name_260=(char*)come_increment_ref_count(((char*)(right_value358=__builtin_string("__builtin_string"))));
        right_value358 = come_decrement_ref_count2(right_value358, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 794 "05function.c"
        result_type_261=(struct sType*)come_increment_ref_count(((struct sType*)(right_value360=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value359=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 794, "sType")))),"char*",(_Bool)0,info))));
        come_call_finalizer3(right_value359,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value360,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 795 "05function.c"
        {__list_values15___262[0]=come_increment_ref_count(((struct sType*)(right_value362=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value361=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 795, "sType")))),"char*",(_Bool)0,info))));
}        param_types_263=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value364=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value363=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 795, "struct list$1sTypeph")))),1,__list_values15___262))));
        come_call_finalizer3(right_value361,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value362,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value363,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value364,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 796 "05function.c"
        {__list_values16___264[0]=come_increment_ref_count(((char*)(right_value365=__builtin_string("str"))));
}        param_names_265=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value367=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value366=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 796, "struct list$1charph")))),1,__list_values16___264))));
        right_value365 = come_decrement_ref_count2(right_value365, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value366,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value367,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 797 "05function.c"
        param_default_parametors_266=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value369=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value368=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 797, "list$1charph"))))))));
        come_call_finalizer3(right_value368,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value369,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 803 "05function.c"
        main_fun_267=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value373=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value370=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 798, "sFun")))),(char*)come_increment_ref_count(name_260),(struct sType*)come_increment_ref_count(result_type_261),(struct list$1sTypeph*)come_increment_ref_count(param_types_263),(struct list$1charph*)come_increment_ref_count(param_names_265),(struct list$1charph*)come_increment_ref_count(param_default_parametors_266),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value371=__builtin_string("char* __builtin_string(char* str)")))),(char*)come_increment_ref_count(((char*)(right_value372=__builtin_string("")))),info))));
        come_call_finalizer3(right_value370,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value371 = come_decrement_ref_count2(right_value371, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value372 = come_decrement_ref_count2(right_value372, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value373,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        # 805 "05function.c"
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value374=__builtin_string(name_260)))),(struct sFun*)come_increment_ref_count(main_fun_267));
        right_value374 = come_decrement_ref_count2(right_value374, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_260 = come_decrement_ref_count2(name_260, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_261,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_263,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_265,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_266,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_267,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 823 "05function.c"
    {
        # 808 "05function.c"
        name_268=(char*)come_increment_ref_count(((char*)(right_value375=__builtin_string("come_heap_init"))));
        right_value375 = come_decrement_ref_count2(right_value375, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 809 "05function.c"
        result_type_269=(struct sType*)come_increment_ref_count(((struct sType*)(right_value377=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value376=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 809, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer3(right_value376,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value377,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 810 "05function.c"
        {__list_values17___270[0]=come_increment_ref_count(((struct sType*)(right_value379=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value378=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 810, "sType")))),"int",(_Bool)0,info))));
__list_values17___270[1]=come_increment_ref_count(((struct sType*)(right_value381=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value380=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 810, "sType")))),"int",(_Bool)0,info))));
__list_values17___270[2]=come_increment_ref_count(((struct sType*)(right_value383=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value382=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 810, "sType")))),"int",(_Bool)0,info))));
}        param_types_271=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value385=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value384=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 810, "struct list$1sTypeph")))),3,__list_values17___270))));
        come_call_finalizer3(right_value378,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value379,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value380,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value381,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value382,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value383,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value384,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value385,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 811 "05function.c"
        {__list_values18___272[0]=come_increment_ref_count(((char*)(right_value386=xsprintf("come_malloc"))));
__list_values18___272[1]=come_increment_ref_count(((char*)(right_value387=xsprintf("come_debug"))));
__list_values18___272[2]=come_increment_ref_count(((char*)(right_value388=xsprintf("come_gc"))));
}        param_names_273=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value390=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value389=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 811, "struct list$1charph")))),3,__list_values18___272))));
        right_value386 = come_decrement_ref_count2(right_value386, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value387 = come_decrement_ref_count2(right_value387, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value388 = come_decrement_ref_count2(right_value388, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value389,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value390,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 812 "05function.c"
        param_default_parametors_274=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value392=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value391=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 812, "list$1charph"))))))));
        come_call_finalizer3(right_value391,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value392,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 813 "05function.c"
        list$1charph_push_back(param_default_parametors_274,((void*)0));
        # 819 "05function.c"
        main_fun_275=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value396=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value393=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 814, "sFun")))),(char*)come_increment_ref_count(name_268),(struct sType*)come_increment_ref_count(result_type_269),(struct list$1sTypeph*)come_increment_ref_count(param_types_271),(struct list$1charph*)come_increment_ref_count(param_names_273),(struct list$1charph*)come_increment_ref_count(param_default_parametors_274),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value394=__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")))),(char*)come_increment_ref_count(((char*)(right_value395=__builtin_string("")))),info))));
        come_call_finalizer3(right_value393,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value394 = come_decrement_ref_count2(right_value394, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value395 = come_decrement_ref_count2(right_value395, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value396,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        # 821 "05function.c"
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value397=__builtin_string(name_268)))),(struct sFun*)come_increment_ref_count(main_fun_275));
        right_value397 = come_decrement_ref_count2(right_value397, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_268 = come_decrement_ref_count2(name_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_269,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_271,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_273,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_274,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_275,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 838 "05function.c"
    {
        # 824 "05function.c"
        name_276=(char*)come_increment_ref_count(((char*)(right_value398=__builtin_string("come_heap_final"))));
        right_value398 = come_decrement_ref_count2(right_value398, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 825 "05function.c"
        result_type_277=(struct sType*)come_increment_ref_count(((struct sType*)(right_value400=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value399=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 825, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer3(right_value399,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value400,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 826 "05function.c"
        param_types_278=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value402=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value401=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 826, "list$1sTypeph"))))))));
        come_call_finalizer3(right_value401,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value402,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 827 "05function.c"
        param_names_279=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value404=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value403=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 827, "list$1charph"))))))));
        come_call_finalizer3(right_value403,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value404,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 828 "05function.c"
        param_default_parametors_280=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value406=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value405=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 828, "list$1charph"))))))));
        come_call_finalizer3(right_value405,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value406,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 834 "05function.c"
        main_fun_281=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value410=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value407=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 829, "sFun")))),(char*)come_increment_ref_count(name_276),(struct sType*)come_increment_ref_count(result_type_277),(struct list$1sTypeph*)come_increment_ref_count(param_types_278),(struct list$1charph*)come_increment_ref_count(param_names_279),(struct list$1charph*)come_increment_ref_count(param_default_parametors_280),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value408=__builtin_string("void come_heap_final()")))),(char*)come_increment_ref_count(((char*)(right_value409=__builtin_string("")))),info))));
        come_call_finalizer3(right_value407,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value408 = come_decrement_ref_count2(right_value408, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value409 = come_decrement_ref_count2(right_value409, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value410,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        # 836 "05function.c"
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value411=__builtin_string(name_276)))),(struct sFun*)come_increment_ref_count(main_fun_281));
        right_value411 = come_decrement_ref_count2(right_value411, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_276 = come_decrement_ref_count2(name_276, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_277,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_278,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_279,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_280,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_281,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 854 "05function.c"
    {
        # 839 "05function.c"
        name_282=(char*)come_increment_ref_count(((char*)(right_value412=__builtin_string("come_null_check"))));
        right_value412 = come_decrement_ref_count2(right_value412, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 840 "05function.c"
        result_type_283=(struct sType*)come_increment_ref_count(((struct sType*)(right_value414=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value413=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 840, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer3(right_value413,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value414,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 841 "05function.c"
        {__list_values19___284[0]=come_increment_ref_count(((struct sType*)(right_value416=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value415=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 841, "sType")))),"void*",(_Bool)0,info))));
__list_values19___284[1]=come_increment_ref_count(((struct sType*)(right_value418=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value417=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 841, "sType")))),"char*",(_Bool)0,info))));
__list_values19___284[2]=come_increment_ref_count(((struct sType*)(right_value420=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value419=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 841, "sType")))),"int",(_Bool)0,info))));
__list_values19___284[3]=come_increment_ref_count(((struct sType*)(right_value422=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value421=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 841, "sType")))),"int",(_Bool)0,info))));
}        param_types_285=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value424=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value423=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 841, "struct list$1sTypeph")))),4,__list_values19___284))));
        come_call_finalizer3(right_value415,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value416,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value417,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value418,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value419,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value420,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value421,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value422,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value423,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value424,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 842 "05function.c"
        {__list_values20___286[0]=come_increment_ref_count(((char*)(right_value425=__builtin_string("mem"))));
__list_values20___286[1]=come_increment_ref_count(((char*)(right_value426=__builtin_string("sname"))));
__list_values20___286[2]=come_increment_ref_count(((char*)(right_value427=__builtin_string("sline"))));
__list_values20___286[3]=come_increment_ref_count(((char*)(right_value428=__builtin_string("id"))));
}        param_names_287=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value430=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value429=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 842, "struct list$1charph")))),4,__list_values20___286))));
        right_value425 = come_decrement_ref_count2(right_value425, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value426 = come_decrement_ref_count2(right_value426, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value427 = come_decrement_ref_count2(right_value427, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value428 = come_decrement_ref_count2(right_value428, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value429,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value430,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 843 "05function.c"
        param_default_parametors_288=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value432=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value431=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 843, "list$1charph"))))))));
        come_call_finalizer3(right_value431,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value432,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 849 "05function.c"
        main_fun_289=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value436=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value433=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 844, "sFun")))),(char*)come_increment_ref_count(name_282),(struct sType*)come_increment_ref_count(result_type_283),(struct list$1sTypeph*)come_increment_ref_count(param_types_285),(struct list$1charph*)come_increment_ref_count(param_names_287),(struct list$1charph*)come_increment_ref_count(param_default_parametors_288),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value434=__builtin_string("void* come_null_check(void* mem, char* sname, int sline, int id)")))),(char*)come_increment_ref_count(((char*)(right_value435=__builtin_string("")))),info))));
        come_call_finalizer3(right_value433,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value434 = come_decrement_ref_count2(right_value434, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value435 = come_decrement_ref_count2(right_value435, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value436,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        # 851 "05function.c"
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value437=__builtin_string(name_282)))),(struct sFun*)come_increment_ref_count(main_fun_289));
        right_value437 = come_decrement_ref_count2(right_value437, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_282 = come_decrement_ref_count2(name_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_283,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_285,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_287,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_288,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_289,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 854 "05function.c"
    (come_push_stackframe("05function.c", 854,1),transpile_toplevel((_Bool)0,info),come_pop_stackframe());
    # 856 "05function.c"
    __result139__ = 0;
    return __result139__;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__;
int i_155;
struct list$1sTypeph* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_155, 0, sizeof(int));
            # 103 "./neo-c.h"
            self->head=((void*)0);
            # 104 "./neo-c.h"
            self->tail=((void*)0);
            # 105 "./neo-c.h"
            self->len=0;
            # 111 "./neo-c.h"
            for(            i_155=0;            i_155<num_value;            i_155++            ){
                # 108 "./neo-c.h"
                list$1sTypeph_push_back(self,values[i_155]);
            }
            # 111 "./neo-c.h"
            __result112__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result112__;
            come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional235;
void* right_value177;
struct list_item$1sTypeph* litem_156;
struct sType* __dec_obj68;
_Bool _if_conditional236;
void* right_value178;
struct list_item$1sTypeph* litem_157;
struct sType* __dec_obj69;
void* right_value179;
struct list_item$1sTypeph* litem_158;
struct sType* __dec_obj70;
struct list$1sTypeph* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value177 = (void*)0;
memset(&litem_156, 0, sizeof(struct list_item$1sTypeph*));
right_value178 = (void*)0;
memset(&litem_157, 0, sizeof(struct list_item$1sTypeph*));
right_value179 = (void*)0;
memset(&litem_158, 0, sizeof(struct list_item$1sTypeph*));
                    # 247 "./neo-c.h"
                    # 216 "./neo-c.h"
                    if(_if_conditional235=self->len==0,                    _if_conditional235) {
                        # 217 "./neo-c.h"
                        litem_156=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value177=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 217, "list_item$1sTypeph"))));
                        come_call_finalizer3(right_value177,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 219 "./neo-c.h"
                        litem_156->prev=((void*)0);
                        # 220 "./neo-c.h"
                        litem_156->next=((void*)0);
                        # 221 "./neo-c.h"
                        __dec_obj68=litem_156->item;
                        litem_156->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj68,sType_finalize, 0, 0, 0, 0, (void*)0);
                        # 223 "./neo-c.h"
                        self->tail=litem_156;
                        # 224 "./neo-c.h"
                        self->head=litem_156;
                    }
                    else {
                        # 247 "./neo-c.h"
                        # 226 "./neo-c.h"
                        if(_if_conditional236=self->len==1,                        _if_conditional236) {
                            # 227 "./neo-c.h"
                            litem_157=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value178=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 227, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value178,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 229 "./neo-c.h"
                            litem_157->prev=self->head;
                            # 230 "./neo-c.h"
                            litem_157->next=((void*)0);
                            # 231 "./neo-c.h"
                            __dec_obj69=litem_157->item;
                            litem_157->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 0, 0, (void*)0);
                            # 233 "./neo-c.h"
                            self->tail=litem_157;
                            # 234 "./neo-c.h"
                            self->head->next=litem_157;
                        }
                        else {
                            # 237 "./neo-c.h"
                            litem_158=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value179=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 237, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value179,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 239 "./neo-c.h"
                            litem_158->prev=self->tail;
                            # 240 "./neo-c.h"
                            litem_158->next=((void*)0);
                            # 241 "./neo-c.h"
                            __dec_obj70=litem_158->item;
                            litem_158->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
                            # 243 "./neo-c.h"
                            self->tail->next=litem_158;
                            # 244 "./neo-c.h"
                            self->tail=litem_158;
                        }
                    }
                    # 247 "./neo-c.h"
                    self->len++;
                    # 249 "./neo-c.h"
                    __result111__ = __result_obj__ = self;
                    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                    return __result111__;
                    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__;
int i_161;
struct list$1charph* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_161, 0, sizeof(int));
            # 103 "./neo-c.h"
            self->head=((void*)0);
            # 104 "./neo-c.h"
            self->tail=((void*)0);
            # 105 "./neo-c.h"
            self->len=0;
            # 111 "./neo-c.h"
            for(            i_161=0;            i_161<num_value;            i_161++            ){
                # 108 "./neo-c.h"
                list$1charph_push_back(self,values[i_161]);
            }
            # 111 "./neo-c.h"
            __result114__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result114__;
            come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional237;
void* right_value187;
struct list_item$1charph* litem_162;
char* __dec_obj71;
_Bool _if_conditional238;
void* right_value188;
struct list_item$1charph* litem_163;
char* __dec_obj72;
void* right_value189;
struct list_item$1charph* litem_164;
char* __dec_obj73;
struct list$1charph* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
right_value187 = (void*)0;
memset(&litem_162, 0, sizeof(struct list_item$1charph*));
right_value188 = (void*)0;
memset(&litem_163, 0, sizeof(struct list_item$1charph*));
right_value189 = (void*)0;
memset(&litem_164, 0, sizeof(struct list_item$1charph*));
                    # 247 "./neo-c.h"
                    # 216 "./neo-c.h"
                    if(_if_conditional237=self->len==0,                    _if_conditional237) {
                        # 217 "./neo-c.h"
                        litem_162=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value187=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 217, "list_item$1charph"))));
                        come_call_finalizer3(right_value187,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 219 "./neo-c.h"
                        litem_162->prev=((void*)0);
                        # 220 "./neo-c.h"
                        litem_162->next=((void*)0);
                        # 221 "./neo-c.h"
                        __dec_obj71=litem_162->item;
                        litem_162->item=(char*)come_increment_ref_count(item);
                        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 223 "./neo-c.h"
                        self->tail=litem_162;
                        # 224 "./neo-c.h"
                        self->head=litem_162;
                    }
                    else {
                        # 247 "./neo-c.h"
                        # 226 "./neo-c.h"
                        if(_if_conditional238=self->len==1,                        _if_conditional238) {
                            # 227 "./neo-c.h"
                            litem_163=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value188=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 227, "list_item$1charph"))));
                            come_call_finalizer3(right_value188,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 229 "./neo-c.h"
                            litem_163->prev=self->head;
                            # 230 "./neo-c.h"
                            litem_163->next=((void*)0);
                            # 231 "./neo-c.h"
                            __dec_obj72=litem_163->item;
                            litem_163->item=(char*)come_increment_ref_count(item);
                            __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                            # 233 "./neo-c.h"
                            self->tail=litem_163;
                            # 234 "./neo-c.h"
                            self->head->next=litem_163;
                        }
                        else {
                            # 237 "./neo-c.h"
                            litem_164=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value189=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 237, "list_item$1charph"))));
                            come_call_finalizer3(right_value189,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 239 "./neo-c.h"
                            litem_164->prev=self->tail;
                            # 240 "./neo-c.h"
                            litem_164->next=((void*)0);
                            # 241 "./neo-c.h"
                            __dec_obj73=litem_164->item;
                            litem_164->item=(char*)come_increment_ref_count(item);
                            __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                            # 243 "./neo-c.h"
                            self->tail->next=litem_164;
                            # 244 "./neo-c.h"
                            self->tail=litem_164;
                        }
                    }
                    # 247 "./neo-c.h"
                    self->len++;
                    # 249 "./neo-c.h"
                    __result113__ = __result_obj__ = self;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result113__;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__;
_Bool _if_conditional239;
unsigned int hash_185;
unsigned int it_186;
_Bool _while_condtional31;
_Bool _if_conditional251;
_Bool _if_conditional252;
_Bool _if_conditional253;
_Bool _if_conditional273;
_Bool _if_conditional274;
_Bool _if_conditional275;
_Bool _if_conditional276;
_Bool _if_conditional277;
_Bool same_key_exist_203;
char* it2_206;
_Bool _if_conditional282;
_Bool _if_conditional283;
struct map$2charphsFunph* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_185, 0, sizeof(unsigned int));
memset(&it_186, 0, sizeof(unsigned int));
memset(&same_key_exist_203, 0, sizeof(_Bool));
memset(&it2_206, 0, sizeof(char*));
            # 1368 "./neo-c.h"
            # 1365 "./neo-c.h"
            if(_if_conditional239=self->len*10>=self->size,            _if_conditional239) {
                # 1366 "./neo-c.h"
                map$2charphsFunph_rehash(self);
            }
            # 1368 "./neo-c.h"
            hash_185=string_get_hash_key(key)%self->size;
            # 1369 "./neo-c.h"
            it_186=hash_185;
            # 1427 "./neo-c.h"
            while(_while_condtional31=(_Bool)1,            _while_condtional31) {
                # 1425 "./neo-c.h"
                # 1372 "./neo-c.h"
                if(_if_conditional251=self->item_existance[it_186],                _if_conditional251) {
                    # 1395 "./neo-c.h"
                    # 1374 "./neo-c.h"
                    if(_if_conditional252=string_equals(self->keys[it_186],key),                    _if_conditional252) {
                        # 1385 "./neo-c.h"
                        # 1376 "./neo-c.h"
                        if(_if_conditional253=1,                        _if_conditional253) {
                            # 1377 "./neo-c.h"
                            list$1charp_remove(self->key_list,self->keys[it_186]);
                            # 1378 "./neo-c.h"
                            self->keys[it_186] = come_decrement_ref_count2(self->keys[it_186], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            # 1379 "./neo-c.h"
                            self->keys[it_186]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            # 1382 "./neo-c.h"
                            list$1charp_remove(self->key_list,self->keys[it_186]);
                            # 1383 "./neo-c.h"
                            self->keys[it_186]=key;
                        }
                        # 1392 "./neo-c.h"
                        # 1385 "./neo-c.h"
                        if(_if_conditional273=1,                        _if_conditional273) {
                            # 1386 "./neo-c.h"
                            come_call_finalizer3(self->items[it_186],sFun_finalize, 0, 0, 0, 0, (void*)0);
                            # 1387 "./neo-c.h"
                            self->items[it_186]=(struct sFun*)come_increment_ref_count(item);
                        }
                        else {
                            # 1390 "./neo-c.h"
                            self->items[it_186]=item;
                        }
                        # 1392 "./neo-c.h"
                        break;
                    }
                    # 1395 "./neo-c.h"
                    it_186++;
                    # 1405 "./neo-c.h"
                    # 1397 "./neo-c.h"
                    if(_if_conditional274=it_186>=self->size,                    _if_conditional274) {
                        # 1398 "./neo-c.h"
                        it_186=0;
                    }
                    else {
                        # 1405 "./neo-c.h"
                        # 1400 "./neo-c.h"
                        if(_if_conditional275=it_186==hash_185,                        _if_conditional275) {
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
                    self->item_existance[it_186]=(_Bool)1;
                    # 1414 "./neo-c.h"
                    # 1408 "./neo-c.h"
                    if(_if_conditional276=1,                    _if_conditional276) {
                        # 1409 "./neo-c.h"
                        self->keys[it_186]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1412 "./neo-c.h"
                        self->keys[it_186]=key;
                    }
                    # 1421 "./neo-c.h"
                    # 1414 "./neo-c.h"
                    if(_if_conditional277=1,                    _if_conditional277) {
                        # 1415 "./neo-c.h"
                        self->items[it_186]=(struct sFun*)come_increment_ref_count(item);
                    }
                    else {
                        # 1418 "./neo-c.h"
                        self->items[it_186]=item;
                    }
                    # 1421 "./neo-c.h"
                    self->len++;
                    # 1423 "./neo-c.h"
                    break;
                }
            }
            # 1427 "./neo-c.h"
            same_key_exist_203=(_Bool)0;
            # 1435 "./neo-c.h"
            for(            it2_206=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_206=list$1charp_next(self->key_list)            ){
                # 1433 "./neo-c.h"
                # 1430 "./neo-c.h"
                if(_if_conditional282=string_equals(it2_206,key),                _if_conditional282) {
                    # 1431 "./neo-c.h"
                    same_key_exist_203=(_Bool)1;
                }
            }
            # 1439 "./neo-c.h"
            # 1435 "./neo-c.h"
            if(_if_conditional283=!same_key_exist_203,            _if_conditional283) {
                # 1436 "./neo-c.h"
                list$1charp_push_back(self->key_list,key);
            }
            # 1439 "./neo-c.h"
            __result138__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result138__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sFun_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
void* __result_obj__;
int size_168;
void* right_value201;
char** keys_169;
void* right_value202;
struct sFun** items_170;
void* right_value203;
_Bool* item_existance_171;
int len_172;
char* it_175;
struct sFun* default_value_178;
struct sFun* it2_181;
unsigned int hash_182;
int n_183;
_Bool _while_condtional30;
_Bool _if_conditional248;
_Bool _if_conditional249;
_Bool _if_conditional250;
struct sFun* default_value_184;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_168, 0, sizeof(int));
right_value201 = (void*)0;
memset(&keys_169, 0, sizeof(char**));
right_value202 = (void*)0;
memset(&items_170, 0, sizeof(struct sFun**));
right_value203 = (void*)0;
memset(&item_existance_171, 0, sizeof(_Bool*));
memset(&len_172, 0, sizeof(int));
memset(&it_175, 0, sizeof(char*));
memset(&default_value_178, 0, sizeof(struct sFun*));
memset(&it2_181, 0, sizeof(struct sFun*));
memset(&hash_182, 0, sizeof(unsigned int));
memset(&n_183, 0, sizeof(int));
memset(&default_value_184, 0, sizeof(struct sFun*));
                    # 1312 "./neo-c.h"
                    size_168=self->size*10;
                    # 1313 "./neo-c.h"
                    keys_169=(char**)come_increment_ref_count(((char**)(right_value201=(char**)come_calloc(1, sizeof(char*)*(1*(size_168)), "./neo-c.h", 1313, "char*%"))));
                    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1314 "./neo-c.h"
                    items_170=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value202=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_168)), "./neo-c.h", 1314, "sFun*%"))));
                    come_call_finalizer3(right_value202,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                    # 1315 "./neo-c.h"
                    item_existance_171=(_Bool*)come_increment_ref_count(((_Bool*)(right_value203=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_168)), "./neo-c.h", 1315, "bool"))));
                    right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1317 "./neo-c.h"
                    len_172=0;
                    # 1352 "./neo-c.h"
                    for(                    it_175=map$2charphsFunph_begin(self);                    !map$2charphsFunph_end(self);                    it_175=map$2charphsFunph_next(self)                    ){
                        # 1320 "./neo-c.h"
                        # 1321 "./neo-c.h"
                        memset(&default_value_178,0,sizeof(struct sFun*));
                        # 1322 "./neo-c.h"
                        it2_181=map$2charphsFunph_at(self,it_175,default_value_178);
                        # 1323 "./neo-c.h"
                        hash_182=string_get_hash_key(it_175)%size_168;
                        # 1324 "./neo-c.h"
                        n_183=hash_182;
                        # 1350 "./neo-c.h"
                        while(_while_condtional30=(_Bool)1,                        _while_condtional30) {
                            # 1349 "./neo-c.h"
                            # 1327 "./neo-c.h"
                            if(_if_conditional248=item_existance_171[n_183],                            _if_conditional248) {
                                # 1329 "./neo-c.h"
                                n_183++;
                                # 1339 "./neo-c.h"
                                # 1331 "./neo-c.h"
                                if(_if_conditional249=n_183>=size_168,                                _if_conditional249) {
                                    # 1332 "./neo-c.h"
                                    n_183=0;
                                }
                                else {
                                    # 1339 "./neo-c.h"
                                    # 1334 "./neo-c.h"
                                    if(_if_conditional250=n_183==hash_182,                                    _if_conditional250) {
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
                                item_existance_171[n_183]=(_Bool)1;
                                # 1342 "./neo-c.h"
                                keys_169[n_183]=it_175;
                                # 1343 "./neo-c.h"
                                # 1344 "./neo-c.h"
                                items_170[n_183]=map$2charphsFunph_at(self,it_175,default_value_184);
                                # 1346 "./neo-c.h"
                                len_172++;
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
                    self->keys=keys_169;
                    # 1357 "./neo-c.h"
                    self->items=items_170;
                    # 1358 "./neo-c.h"
                    self->item_existance=item_existance_171;
                    # 1360 "./neo-c.h"
                    self->size=size_168;
                    # 1361 "./neo-c.h"
                    self->len=len_172;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool _if_conditional240;
char* result_173;
char* __result115__;
_Bool _if_conditional241;
char* __result116__;
char* result_174;
char* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_173, 0, sizeof(char*));
memset(&result_174, 0, sizeof(char*));
                        # 1279 "./neo-c.h"
                        # 1274 "./neo-c.h"
                        if(_if_conditional240=self==((void*)0),                        _if_conditional240) {
                            # 1275 "./neo-c.h"
                            # 1276 "./neo-c.h"
                            memset(&result_173,0,sizeof(char*));
                            # 1277 "./neo-c.h"
                            __result115__ = __result_obj__ = result_173;
                            return __result115__;
                        }
                        # 1279 "./neo-c.h"
                        self->key_list->it=self->key_list->head;
                        # 1285 "./neo-c.h"
                        # 1281 "./neo-c.h"
                        if(self->key_list->it) {
                            # 1282 "./neo-c.h"
                            __result116__ = __result_obj__ = self->key_list->it->item;
                            return __result116__;
                        }
                        # 1285 "./neo-c.h"
                        # 1286 "./neo-c.h"
                        memset(&result_174,0,sizeof(char*));
                        # 1287 "./neo-c.h"
                        __result117__ = __result_obj__ = result_174;
                        return __result117__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __result118__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1308 "./neo-c.h"
                        __result118__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result118__;
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool _if_conditional242;
char* result_176;
char* __result119__;
_Bool _if_conditional243;
char* __result120__;
char* result_177;
char* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_176, 0, sizeof(char*));
memset(&result_177, 0, sizeof(char*));
                        # 1296 "./neo-c.h"
                        # 1291 "./neo-c.h"
                        if(_if_conditional242=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional242) {
                            # 1292 "./neo-c.h"
                            # 1293 "./neo-c.h"
                            memset(&result_176,0,sizeof(char*));
                            # 1294 "./neo-c.h"
                            __result119__ = __result_obj__ = result_176;
                            return __result119__;
                        }
                        # 1296 "./neo-c.h"
                        self->key_list->it=self->key_list->it->next;
                        # 1302 "./neo-c.h"
                        # 1298 "./neo-c.h"
                        if(self->key_list->it) {
                            # 1299 "./neo-c.h"
                            __result120__ = __result_obj__ = self->key_list->it->item;
                            return __result120__;
                        }
                        # 1302 "./neo-c.h"
                        # 1303 "./neo-c.h"
                        memset(&result_177,0,sizeof(char*));
                        # 1304 "./neo-c.h"
                        __result121__ = __result_obj__ = result_177;
                        return __result121__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_179;
unsigned int it_180;
_Bool _while_condtional29;
_Bool _if_conditional244;
_Bool _if_conditional245;
struct sFun* __result122__;
_Bool _if_conditional246;
_Bool _if_conditional247;
struct sFun* __result123__;
struct sFun* __result124__;
struct sFun* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_179, 0, sizeof(unsigned int));
memset(&it_180, 0, sizeof(unsigned int));
                            # 1201 "./neo-c.h"
                            hash_179=string_get_hash_key(((char*)key))%self->size;
                            # 1202 "./neo-c.h"
                            it_180=hash_179;
                            # 1226 "./neo-c.h"
                            while(_while_condtional29=(_Bool)1,                            _while_condtional29) {
                                # 1224 "./neo-c.h"
                                # 1205 "./neo-c.h"
                                if(_if_conditional244=self->item_existance[it_180],                                _if_conditional244) {
                                    # 1212 "./neo-c.h"
                                    # 1207 "./neo-c.h"
                                    if(_if_conditional245=string_equals(self->keys[it_180],key),                                    _if_conditional245) {
                                        # 1209 "./neo-c.h"
                                        __result122__ = __result_obj__ = self->items[it_180];
                                        come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result122__;
                                    }
                                    # 1212 "./neo-c.h"
                                    it_180++;
                                    # 1220 "./neo-c.h"
                                    # 1214 "./neo-c.h"
                                    if(_if_conditional246=it_180>=self->size,                                    _if_conditional246) {
                                        # 1215 "./neo-c.h"
                                        it_180=0;
                                    }
                                    else {
                                        # 1220 "./neo-c.h"
                                        # 1217 "./neo-c.h"
                                        if(_if_conditional247=it_180==hash_179,                                        _if_conditional247) {
                                            # 1218 "./neo-c.h"
                                            __result123__ = __result_obj__ = default_value;
                                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result123__;
                                        }
                                    }
                                }
                                else {
                                    # 1222 "./neo-c.h"
                                    __result124__ = __result_obj__ = default_value;
                                    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result124__;
                                }
                            }
                            # 1226 "./neo-c.h"
                            __result125__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result125__;
                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_187;
struct list_item$1charp* it_188;
_Bool _while_condtional32;
_Bool _if_conditional254;
struct list$1charp* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_187, 0, sizeof(int));
memset(&it_188, 0, sizeof(struct list_item$1charp*));
                                # 435 "./neo-c.h"
                                it2_187=0;
                                # 436 "./neo-c.h"
                                it_188=self->head;
                                # 447 "./neo-c.h"
                                while(_while_condtional32=it_188!=((void*)0),                                _while_condtional32) {
                                    # 442 "./neo-c.h"
                                    # 438 "./neo-c.h"
                                    if(_if_conditional254=string_equals(it_188->item,item),                                    _if_conditional254) {
                                        # 439 "./neo-c.h"
                                        list$1charp_delete(self,it2_187,it2_187+1);
                                        # 440 "./neo-c.h"
                                        break;
                                    }
                                    # 442 "./neo-c.h"
                                    it2_187++;
                                    # 444 "./neo-c.h"
                                    it_188=it_188->next;
                                }
                                # 447 "./neo-c.h"
                                __result129__ = __result_obj__ = self;
                                return __result129__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional255;
_Bool _if_conditional256;
_Bool _if_conditional257;
int tmp_189;
_Bool _if_conditional258;
_Bool _if_conditional259;
_Bool _if_conditional260;
struct list$1charp* __result126__;
_Bool _if_conditional261;
_Bool _if_conditional262;
struct list_item$1charp* it_192;
int i_193;
_Bool _while_condtional34;
_Bool _if_conditional263;
struct list_item$1charp* prev_it_194;
_Bool _if_conditional264;
_Bool _if_conditional265;
struct list_item$1charp* it_195;
int i_196;
_Bool _while_condtional35;
_Bool _if_conditional266;
_Bool _if_conditional267;
struct list_item$1charp* prev_it_197;
struct list_item$1charp* it_198;
struct list_item$1charp* head_prev_it_199;
struct list_item$1charp* tail_it_200;
int i_201;
_Bool _while_condtional36;
_Bool _if_conditional268;
_Bool _if_conditional269;
_Bool _if_conditional270;
struct list_item$1charp* prev_it_202;
_Bool _if_conditional271;
_Bool _if_conditional272;
struct list$1charp* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_189, 0, sizeof(int));
memset(&it_192, 0, sizeof(struct list_item$1charp*));
memset(&i_193, 0, sizeof(int));
memset(&prev_it_194, 0, sizeof(struct list_item$1charp*));
memset(&it_195, 0, sizeof(struct list_item$1charp*));
memset(&i_196, 0, sizeof(int));
memset(&prev_it_197, 0, sizeof(struct list_item$1charp*));
memset(&it_198, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_199, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_200, 0, sizeof(struct list_item$1charp*));
memset(&i_201, 0, sizeof(int));
memset(&prev_it_202, 0, sizeof(struct list_item$1charp*));
                                            # 454 "./neo-c.h"
                                            # 451 "./neo-c.h"
                                            if(_if_conditional255=head<0,                                            _if_conditional255) {
                                                # 452 "./neo-c.h"
                                                head+=self->len;
                                            }
                                            # 458 "./neo-c.h"
                                            # 454 "./neo-c.h"
                                            if(_if_conditional256=tail<0,                                            _if_conditional256) {
                                                # 455 "./neo-c.h"
                                                tail+=self->len+1;
                                            }
                                            # 464 "./neo-c.h"
                                            # 458 "./neo-c.h"
                                            if(_if_conditional257=head>tail,                                            _if_conditional257) {
                                                # 459 "./neo-c.h"
                                                tmp_189=tail;
                                                # 460 "./neo-c.h"
                                                tail=head;
                                                # 461 "./neo-c.h"
                                                head=tmp_189;
                                            }
                                            # 468 "./neo-c.h"
                                            # 464 "./neo-c.h"
                                            if(_if_conditional258=head<0,                                            _if_conditional258) {
                                                # 465 "./neo-c.h"
                                                head=0;
                                            }
                                            # 472 "./neo-c.h"
                                            # 468 "./neo-c.h"
                                            if(_if_conditional259=tail>self->len,                                            _if_conditional259) {
                                                # 469 "./neo-c.h"
                                                tail=self->len;
                                            }
                                            # 476 "./neo-c.h"
                                            # 472 "./neo-c.h"
                                            if(_if_conditional260=head==tail,                                            _if_conditional260) {
                                                # 473 "./neo-c.h"
                                                __result126__ = __result_obj__ = self;
                                                return __result126__;
                                            }
                                            # 571 "./neo-c.h"
                                            # 476 "./neo-c.h"
                                            if(_if_conditional261=head==0&&tail==self->len,                                            _if_conditional261) {
                                                # 478 "./neo-c.h"
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                # 571 "./neo-c.h"
                                                # 480 "./neo-c.h"
                                                if(_if_conditional262=head==0,                                                _if_conditional262) {
                                                    # 481 "./neo-c.h"
                                                    it_192=self->head;
                                                    # 482 "./neo-c.h"
                                                    i_193=0;
                                                    # 504 "./neo-c.h"
                                                    while(_while_condtional34=it_192!=((void*)0),                                                    _while_condtional34) {
                                                        # 503 "./neo-c.h"
                                                        # 484 "./neo-c.h"
                                                        if(_if_conditional263=i_193<tail,                                                        _if_conditional263) {
                                                            # 485 "./neo-c.h"
                                                            prev_it_194=it_192;
                                                            # 487 "./neo-c.h"
                                                            it_192=it_192->next;
                                                            # 488 "./neo-c.h"
                                                            i_193++;
                                                            # 490 "./neo-c.h"
                                                            come_call_finalizer3(prev_it_194,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            # 492 "./neo-c.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 503 "./neo-c.h"
                                                            # 494 "./neo-c.h"
                                                            if(_if_conditional264=i_193==tail,                                                            _if_conditional264) {
                                                                # 495 "./neo-c.h"
                                                                self->head=it_192;
                                                                # 496 "./neo-c.h"
                                                                self->head->prev=((void*)0);
                                                                # 497 "./neo-c.h"
                                                                break;
                                                            }
                                                            else {
                                                                # 500 "./neo-c.h"
                                                                it_192=it_192->next;
                                                                # 501 "./neo-c.h"
                                                                i_193++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 571 "./neo-c.h"
                                                    # 505 "./neo-c.h"
                                                    if(_if_conditional265=tail==self->len,                                                    _if_conditional265) {
                                                        # 506 "./neo-c.h"
                                                        it_195=self->head;
                                                        # 507 "./neo-c.h"
                                                        i_196=0;
                                                        # 529 "./neo-c.h"
                                                        while(_while_condtional35=it_195!=((void*)0),                                                        _while_condtional35) {
                                                            # 514 "./neo-c.h"
                                                            # 509 "./neo-c.h"
                                                            if(_if_conditional266=i_196==head,                                                            _if_conditional266) {
                                                                # 510 "./neo-c.h"
                                                                self->tail=it_195->prev;
                                                                # 511 "./neo-c.h"
                                                                self->tail->next=((void*)0);
                                                            }
                                                            # 528 "./neo-c.h"
                                                            # 514 "./neo-c.h"
                                                            if(_if_conditional267=i_196>=head,                                                            _if_conditional267) {
                                                                # 515 "./neo-c.h"
                                                                prev_it_197=it_195;
                                                                # 517 "./neo-c.h"
                                                                it_195=it_195->next;
                                                                # 518 "./neo-c.h"
                                                                i_196++;
                                                                # 520 "./neo-c.h"
                                                                come_call_finalizer3(prev_it_197,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                # 522 "./neo-c.h"
                                                                self->len--;
                                                            }
                                                            else {
                                                                # 525 "./neo-c.h"
                                                                it_195=it_195->next;
                                                                # 526 "./neo-c.h"
                                                                i_196++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        # 531 "./neo-c.h"
                                                        it_198=self->head;
                                                        # 533 "./neo-c.h"
                                                        head_prev_it_199=((void*)0);
                                                        # 534 "./neo-c.h"
                                                        tail_it_200=((void*)0);
                                                        # 537 "./neo-c.h"
                                                        i_201=0;
                                                        # 563 "./neo-c.h"
                                                        while(_while_condtional36=it_198!=((void*)0),                                                        _while_condtional36) {
                                                            # 542 "./neo-c.h"
                                                            # 539 "./neo-c.h"
                                                            if(_if_conditional268=i_201==head,                                                            _if_conditional268) {
                                                                # 540 "./neo-c.h"
                                                                head_prev_it_199=it_198->prev;
                                                            }
                                                            # 546 "./neo-c.h"
                                                            # 542 "./neo-c.h"
                                                            if(_if_conditional269=i_201==tail,                                                            _if_conditional269) {
                                                                # 543 "./neo-c.h"
                                                                tail_it_200=it_198;
                                                            }
                                                            # 561 "./neo-c.h"
                                                            # 546 "./neo-c.h"
                                                            if(_if_conditional270=i_201>=head&&i_201<tail,                                                            _if_conditional270) {
                                                                # 548 "./neo-c.h"
                                                                prev_it_202=it_198;
                                                                # 550 "./neo-c.h"
                                                                it_198=it_198->next;
                                                                # 551 "./neo-c.h"
                                                                i_201++;
                                                                # 553 "./neo-c.h"
                                                                come_call_finalizer3(prev_it_202,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                # 555 "./neo-c.h"
                                                                self->len--;
                                                            }
                                                            else {
                                                                # 558 "./neo-c.h"
                                                                it_198=it_198->next;
                                                                # 559 "./neo-c.h"
                                                                i_201++;
                                                            }
                                                        }
                                                        # 566 "./neo-c.h"
                                                        # 563 "./neo-c.h"
                                                        if(_if_conditional271=head_prev_it_199!=((void*)0),                                                        _if_conditional271) {
                                                            # 564 "./neo-c.h"
                                                            head_prev_it_199->next=tail_it_200;
                                                        }
                                                        # 569 "./neo-c.h"
                                                        # 566 "./neo-c.h"
                                                        if(_if_conditional272=tail_it_200!=((void*)0),                                                        _if_conditional272) {
                                                            # 567 "./neo-c.h"
                                                            tail_it_200->prev=head_prev_it_199;
                                                        }
                                                    }
                                                }
                                            }
                                            # 571 "./neo-c.h"
                                            __result128__ = __result_obj__ = self;
                                            return __result128__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_190;
_Bool _while_condtional33;
struct list_item$1charp* prev_it_191;
struct list$1charp* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_190, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_191, 0, sizeof(struct list_item$1charp*));
                                                    # 420 "./neo-c.h"
                                                    it_190=self->head;
                                                    # 427 "./neo-c.h"
                                                    while(_while_condtional33=it_190!=((void*)0),                                                    _while_condtional33) {
                                                        # 422 "./neo-c.h"
                                                        prev_it_191=it_190;
                                                        # 423 "./neo-c.h"
                                                        it_190=it_190->next;
                                                        # 424 "./neo-c.h"
                                                        come_call_finalizer3(prev_it_191,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 427 "./neo-c.h"
                                                    self->head=((void*)0);
                                                    # 428 "./neo-c.h"
                                                    self->tail=((void*)0);
                                                    # 430 "./neo-c.h"
                                                    self->len=0;
                                                    # 432 "./neo-c.h"
                                                    __result127__ = __result_obj__ = self;
                                                    return __result127__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional278;
char* result_204;
char* __result130__;
_Bool _if_conditional279;
char* __result131__;
char* result_205;
char* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_204, 0, sizeof(char*));
memset(&result_205, 0, sizeof(char*));
                # 281 "./neo-c.h"
                # 276 "./neo-c.h"
                if(_if_conditional278=self==((void*)0),                _if_conditional278) {
                    # 277 "./neo-c.h"
                    # 278 "./neo-c.h"
                    memset(&result_204,0,sizeof(char*));
                    # 279 "./neo-c.h"
                    __result130__ = __result_obj__ = result_204;
                    return __result130__;
                }
                # 281 "./neo-c.h"
                self->it=self->head;
                # 287 "./neo-c.h"
                # 283 "./neo-c.h"
                if(self->it) {
                    # 284 "./neo-c.h"
                    __result131__ = __result_obj__ = self->it->item;
                    return __result131__;
                }
                # 287 "./neo-c.h"
                # 288 "./neo-c.h"
                memset(&result_205,0,sizeof(char*));
                # 289 "./neo-c.h"
                __result132__ = __result_obj__ = result_205;
                return __result132__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result133__;
memset(&__result_obj__, 0, sizeof(void*));
                # 311 "./neo-c.h"
                __result133__ = self==((void*)0)||self->it==((void*)0);
                return __result133__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional280;
char* result_207;
char* __result134__;
_Bool _if_conditional281;
char* __result135__;
char* result_208;
char* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_207, 0, sizeof(char*));
memset(&result_208, 0, sizeof(char*));
                # 299 "./neo-c.h"
                # 293 "./neo-c.h"
                if(_if_conditional280=self==((void*)0)||self->it==((void*)0),                _if_conditional280) {
                    # 294 "./neo-c.h"
                    # 295 "./neo-c.h"
                    memset(&result_207,0,sizeof(char*));
                    # 296 "./neo-c.h"
                    __result134__ = __result_obj__ = result_207;
                    return __result134__;
                }
                # 299 "./neo-c.h"
                self->it=self->it->next;
                # 305 "./neo-c.h"
                # 301 "./neo-c.h"
                if(self->it) {
                    # 302 "./neo-c.h"
                    __result135__ = __result_obj__ = self->it->item;
                    return __result135__;
                }
                # 305 "./neo-c.h"
                # 306 "./neo-c.h"
                memset(&result_208,0,sizeof(char*));
                # 307 "./neo-c.h"
                __result136__ = __result_obj__ = result_208;
                return __result136__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional284;
void* right_value204;
struct list_item$1charp* litem_209;
_Bool _if_conditional285;
void* right_value205;
struct list_item$1charp* litem_210;
void* right_value206;
struct list_item$1charp* litem_211;
struct list$1charp* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
right_value204 = (void*)0;
memset(&litem_209, 0, sizeof(struct list_item$1charp*));
right_value205 = (void*)0;
memset(&litem_210, 0, sizeof(struct list_item$1charp*));
right_value206 = (void*)0;
memset(&litem_211, 0, sizeof(struct list_item$1charp*));
                    # 247 "./neo-c.h"
                    # 216 "./neo-c.h"
                    if(_if_conditional284=self->len==0,                    _if_conditional284) {
                        # 217 "./neo-c.h"
                        litem_209=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value204=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 217, "list_item$1charp"))));
                        come_call_finalizer3(right_value204,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 219 "./neo-c.h"
                        litem_209->prev=((void*)0);
                        # 220 "./neo-c.h"
                        litem_209->next=((void*)0);
                        # 221 "./neo-c.h"
                        litem_209->item=item;
                        # 223 "./neo-c.h"
                        self->tail=litem_209;
                        # 224 "./neo-c.h"
                        self->head=litem_209;
                    }
                    else {
                        # 247 "./neo-c.h"
                        # 226 "./neo-c.h"
                        if(_if_conditional285=self->len==1,                        _if_conditional285) {
                            # 227 "./neo-c.h"
                            litem_210=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value205=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 227, "list_item$1charp"))));
                            come_call_finalizer3(right_value205,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 229 "./neo-c.h"
                            litem_210->prev=self->head;
                            # 230 "./neo-c.h"
                            litem_210->next=((void*)0);
                            # 231 "./neo-c.h"
                            litem_210->item=item;
                            # 233 "./neo-c.h"
                            self->tail=litem_210;
                            # 234 "./neo-c.h"
                            self->head->next=litem_210;
                        }
                        else {
                            # 237 "./neo-c.h"
                            litem_211=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value206=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 237, "list_item$1charp"))));
                            come_call_finalizer3(right_value206,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 239 "./neo-c.h"
                            litem_211->prev=self->tail;
                            # 240 "./neo-c.h"
                            litem_211->next=((void*)0);
                            # 241 "./neo-c.h"
                            litem_211->item=item;
                            # 243 "./neo-c.h"
                            self->tail->next=litem_211;
                            # 244 "./neo-c.h"
                            self->tail=litem_211;
                        }
                    }
                    # 247 "./neo-c.h"
                    self->len++;
                    # 249 "./neo-c.h"
                    __result137__ = __result_obj__ = self;
                    return __result137__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
char* source_head_290;
_Bool is_type_name_flag_291;
int sline_292;
_Bool define_struct_nobody_293;
char* p_294;
int sline_295;
_Bool _if_conditional286;
_Bool _if_conditional287;
void* right_value438;
char* word_296;
_Bool _if_conditional288;
_Bool define_function_pointer_result_function_297;
_Bool define_variable_between_brace_298;
_Bool _if_conditional289;
char* p_299;
_Bool _if_conditional290;
void* right_value439;
struct tuple3$3sTypephcharphbool* multiple_assign_var1;
struct sType* result_type_300;
char* fun_name_301;
_Bool err_302;
_Bool _if_conditional293;
_Bool _if_conditional294;
_Bool _if_conditional295;
void* right_value440;
char* word_303;
_Bool _if_conditional296;
_Bool _if_conditional297;
_Bool define_function_flag_304;
_Bool _if_conditional298;
char* p_305;
_Bool _if_conditional299;
void* right_value441;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* result_type_306;
char* fun_name_307;
_Bool err_308;
_Bool _if_conditional300;
char* word_309;
_Bool _if_conditional301;
void* right_value442;
char* __dec_obj74;
_Bool _if_conditional302;
void* right_value443;
char* __dec_obj75;
char* __dec_obj76;
_Bool _if_conditional303;
_Bool _if_conditional304;
_Bool _while_condtional37;
_Bool _if_conditional305;
_Bool _if_conditional306;
_Bool _if_conditional307;
_Bool _if_conditional308;
void* right_value444;
char* __dec_obj77;
_Bool _if_conditional309;
_Bool _if_conditional310;
_Bool define_variable_310;
_Bool _if_conditional311;
char* p_311;
_Bool _if_conditional312;
_Bool _if_conditional313;
void* right_value445;
struct tuple3$3sTypephcharphbool* multiple_assign_var3;
struct sType* result_type_312;
char* fun_name_313;
_Bool err_314;
_Bool _if_conditional314;
_Bool _if_conditional315;
_Bool _if_conditional316;
void* right_value446;
char* word_315;
_Bool _if_conditional317;
_Bool _if_conditional318;
_Bool _if_conditional319;
void* right_value447;
char* word_316;
_Bool _if_conditional320;
_Bool _if_conditional321;
_Bool _if_conditional322;
_Bool _if_conditional323;
_Bool _if_conditional324;
_Bool _while_condtional38;
_Bool _if_conditional325;
char* p_317;
_Bool _if_conditional326;
_Bool _if_conditional327;
void* right_value448;
_Bool _if_conditional328;
void* right_value449;
char* word_318;
_Bool _if_conditional329;
void* right_value450;
char* __dec_obj78;
_Bool _if_conditional330;
_Bool _if_conditional331;
_Bool _if_conditional332;
_Bool _if_conditional333;
_Bool _while_condtional39;
_Bool _if_conditional334;
_Bool _if_conditional335;
void* right_value451;
char* word_319;
_Bool _if_conditional336;
_Bool _while_condtional41;
_Bool _if_conditional337;
_Bool _if_conditional338;
_Bool _if_conditional339;
void* right_value452;
char* word_322;
void* right_value453;
void* right_value454;
struct sNode* node_323;
struct sNode* __result141__;
_Bool _if_conditional340;
_Bool _if_conditional341;
void* right_value455;
struct sNode* __result142__;
_Bool _if_conditional342;
char* header_head_324;
void* right_value456;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* result_type_325;
char* fun_name_326;
_Bool err_327;
_Bool _if_conditional343;
void* right_value457;
void* right_value458;
struct list$1sTypeph* param_types_328;
void* right_value459;
void* right_value460;
struct list$1charph* param_names_329;
_Bool _if_conditional344;
_Bool _while_condtional42;
void* right_value461;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* param_type_330;
char* param_name_331;
_Bool err_332;
_Bool _if_conditional345;
static int num_function_pointer_result_var_name_a_333=0;
void* right_value462;
_Bool _if_conditional346;
_Bool _if_conditional347;
int __exception_result_var_b1;
_Bool _if_conditional348;
void* right_value463;
void* right_value464;
struct list$1sTypeph* param_types2_334;
void* right_value465;
void* right_value466;
struct list$1charph* param_names2_335;
_Bool _if_conditional349;
_Bool _while_condtional43;
void* right_value467;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* param_type_336;
char* param_name_337;
_Bool err_338;
_Bool _if_conditional350;
static int num_function_pointer_result_var_name_b_339=0;
void* right_value468;
_Bool _if_conditional351;
_Bool _if_conditional352;
char* header_tail_340;
void* right_value469;
void* right_value470;
struct sType* result_type2_341;
void* right_value471;
void* right_value472;
struct tuple1$1sTypeph* __dec_obj80;
void* right_value473;
struct list$1sTypeph* __dec_obj81;
void* right_value474;
struct list$1charph* __dec_obj82;
_Bool var_args_342;
void* right_value475;
void* right_value476;
struct buffer* header_buf_343;
void* right_value477;
void* right_value478;
struct list$1charph* param_default_parametors_344;
void* right_value479;
void* right_value480;
void* right_value481;
void* right_value482;
void* right_value483;
struct sFun* fun_345;
void* right_value484;
struct sFun* fun2_349;
_Bool _if_conditional357;
void* right_value485;
void* right_value486;
void* right_value487;
struct sNode* _inf_value1;
struct sFunNode* _inf_obj_value1;
void* right_value522;
struct sNode* __result172__;
_Bool _if_conditional425;
void* right_value523;
struct sNode* __result173__;
_Bool _if_conditional426;
void* right_value524;
struct sNode* node_386;
char* source_tail_387;
void* right_value525;
void* right_value526;
struct buffer* header_388;
void* right_value527;
struct sNode* __result174__;
void* right_value528;
char* buf2_389;
void* right_value529;
struct sNode* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&source_head_290, 0, sizeof(char*));
memset(&is_type_name_flag_291, 0, sizeof(_Bool));
memset(&sline_292, 0, sizeof(int));
memset(&define_struct_nobody_293, 0, sizeof(_Bool));
memset(&p_294, 0, sizeof(char*));
memset(&sline_295, 0, sizeof(int));
right_value438 = (void*)0;
memset(&word_296, 0, sizeof(char*));
memset(&define_function_pointer_result_function_297, 0, sizeof(_Bool));
memset(&define_variable_between_brace_298, 0, sizeof(_Bool));
memset(&p_299, 0, sizeof(char*));
right_value439 = (void*)0;
memset(&result_type_300, 0, sizeof(struct sType*));
memset(&fun_name_301, 0, sizeof(char*));
memset(&err_302, 0, sizeof(_Bool));
memset(&result_type_300, 0, sizeof(struct sType*));
memset(&fun_name_301, 0, sizeof(char*));
memset(&err_302, 0, sizeof(_Bool));
right_value440 = (void*)0;
memset(&word_303, 0, sizeof(char*));
memset(&define_function_flag_304, 0, sizeof(_Bool));
memset(&p_305, 0, sizeof(char*));
right_value441 = (void*)0;
memset(&result_type_306, 0, sizeof(struct sType*));
memset(&fun_name_307, 0, sizeof(char*));
memset(&err_308, 0, sizeof(_Bool));
memset(&result_type_306, 0, sizeof(struct sType*));
memset(&fun_name_307, 0, sizeof(char*));
memset(&err_308, 0, sizeof(_Bool));
memset(&word_309, 0, sizeof(char*));
right_value442 = (void*)0;
right_value443 = (void*)0;
right_value444 = (void*)0;
memset(&define_variable_310, 0, sizeof(_Bool));
memset(&p_311, 0, sizeof(char*));
right_value445 = (void*)0;
memset(&result_type_312, 0, sizeof(struct sType*));
memset(&fun_name_313, 0, sizeof(char*));
memset(&err_314, 0, sizeof(_Bool));
memset(&result_type_312, 0, sizeof(struct sType*));
memset(&fun_name_313, 0, sizeof(char*));
memset(&err_314, 0, sizeof(_Bool));
right_value446 = (void*)0;
memset(&word_315, 0, sizeof(char*));
right_value447 = (void*)0;
memset(&word_316, 0, sizeof(char*));
memset(&p_317, 0, sizeof(char*));
right_value448 = (void*)0;
right_value449 = (void*)0;
memset(&word_318, 0, sizeof(char*));
right_value450 = (void*)0;
right_value451 = (void*)0;
memset(&word_319, 0, sizeof(char*));
right_value452 = (void*)0;
memset(&word_322, 0, sizeof(char*));
right_value453 = (void*)0;
right_value454 = (void*)0;
memset(&node_323, 0, sizeof(struct sNode*));
right_value455 = (void*)0;
memset(&header_head_324, 0, sizeof(char*));
right_value456 = (void*)0;
memset(&result_type_325, 0, sizeof(struct sType*));
memset(&fun_name_326, 0, sizeof(char*));
memset(&err_327, 0, sizeof(_Bool));
memset(&result_type_325, 0, sizeof(struct sType*));
memset(&fun_name_326, 0, sizeof(char*));
memset(&err_327, 0, sizeof(_Bool));
right_value457 = (void*)0;
right_value458 = (void*)0;
memset(&param_types_328, 0, sizeof(struct list$1sTypeph*));
right_value459 = (void*)0;
right_value460 = (void*)0;
memset(&param_names_329, 0, sizeof(struct list$1charph*));
right_value461 = (void*)0;
memset(&param_type_330, 0, sizeof(struct sType*));
memset(&param_name_331, 0, sizeof(char*));
memset(&err_332, 0, sizeof(_Bool));
memset(&param_type_330, 0, sizeof(struct sType*));
memset(&param_name_331, 0, sizeof(char*));
memset(&err_332, 0, sizeof(_Bool));
right_value462 = (void*)0;
right_value463 = (void*)0;
right_value464 = (void*)0;
memset(&param_types2_334, 0, sizeof(struct list$1sTypeph*));
right_value465 = (void*)0;
right_value466 = (void*)0;
memset(&param_names2_335, 0, sizeof(struct list$1charph*));
right_value467 = (void*)0;
memset(&param_type_336, 0, sizeof(struct sType*));
memset(&param_name_337, 0, sizeof(char*));
memset(&err_338, 0, sizeof(_Bool));
memset(&param_type_336, 0, sizeof(struct sType*));
memset(&param_name_337, 0, sizeof(char*));
memset(&err_338, 0, sizeof(_Bool));
right_value468 = (void*)0;
memset(&header_tail_340, 0, sizeof(char*));
right_value469 = (void*)0;
right_value470 = (void*)0;
memset(&result_type2_341, 0, sizeof(struct sType*));
right_value471 = (void*)0;
right_value472 = (void*)0;
right_value473 = (void*)0;
right_value474 = (void*)0;
memset(&var_args_342, 0, sizeof(_Bool));
right_value475 = (void*)0;
right_value476 = (void*)0;
memset(&header_buf_343, 0, sizeof(struct buffer*));
right_value477 = (void*)0;
right_value478 = (void*)0;
memset(&param_default_parametors_344, 0, sizeof(struct list$1charph*));
right_value479 = (void*)0;
right_value480 = (void*)0;
right_value481 = (void*)0;
right_value482 = (void*)0;
right_value483 = (void*)0;
memset(&fun_345, 0, sizeof(struct sFun*));
right_value484 = (void*)0;
memset(&fun2_349, 0, sizeof(struct sFun*));
right_value485 = (void*)0;
right_value486 = (void*)0;
right_value487 = (void*)0;
right_value522 = (void*)0;
right_value523 = (void*)0;
right_value524 = (void*)0;
memset(&node_386, 0, sizeof(struct sNode*));
memset(&source_tail_387, 0, sizeof(char*));
right_value525 = (void*)0;
right_value526 = (void*)0;
memset(&header_388, 0, sizeof(struct buffer*));
right_value527 = (void*)0;
right_value528 = (void*)0;
memset(&buf2_389, 0, sizeof(char*));
right_value529 = (void*)0;
    # 861 "05function.c"
    source_head_290=info->p;
    # 863 "05function.c"
    is_type_name_flag_291=is_type_name(buf,info);
    # 864 "05function.c"
    sline_292=info->sline;
    # 867 "05function.c"
    define_struct_nobody_293=(_Bool)0;
    # 887 "05function.c"
    {
        # 869 "05function.c"
        p_294=info->p;
        # 870 "05function.c"
        sline_295=info->sline;
        # 882 "05function.c"
        # 872 "05function.c"
        if(_if_conditional286=charp_operator_equals(buf,"struct"),        _if_conditional286) {
            # 880 "05function.c"
            # 873 "05function.c"
            if(_if_conditional287=xisalpha(*info->p)||*info->p==95,            _if_conditional287) {
                # 874 "05function.c"
                word_296=(char*)come_increment_ref_count(((char*)(right_value438=parse_word(info))));
                right_value438 = come_decrement_ref_count2(right_value438, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 879 "05function.c"
                # 876 "05function.c"
                if(_if_conditional288=*info->p==59,                _if_conditional288) {
                    # 877 "05function.c"
                    define_struct_nobody_293=(_Bool)1;
                }
                word_296 = come_decrement_ref_count2(word_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        # 882 "05function.c"
        info->p=head;
        # 883 "05function.c"
        info->sline=sline_295;
    }
    # 887 "05function.c"
    define_function_pointer_result_function_297=(_Bool)0;
    # 888 "05function.c"
    define_variable_between_brace_298=(_Bool)0;
    # 931 "05function.c"
    # 889 "05function.c"
    if(is_type_name_flag_291) {
        # 891 "05function.c"
        p_299=info->p;
        # 892 "05function.c"
        info->p=head;
        # 926 "05function.c"
        # 894 "05function.c"
        if(_if_conditional290=xisalpha(*info->p)||*info->p==95,        _if_conditional290) {
            # 895 "05function.c"
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(right_value439=backtrace_parse_type((_Bool)0,info)));
            result_type_300=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_301=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_302=multiple_assign_var1->v3;
            come_call_finalizer3(right_value439,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            # 924 "05function.c"
            # 898 "05function.c"
            if(_if_conditional293=*info->p==40,            _if_conditional293) {
                # 899 "05function.c"
                info->p++;
                # 900 "05function.c"
                skip_spaces_and_lf(info);
                # 923 "05function.c"
                # 902 "05function.c"
                if(_if_conditional294=*info->p!=42,                _if_conditional294) {
                    # 903 "05function.c"
                    define_function_pointer_result_function_297=(_Bool)1;
                    # 922 "05function.c"
                    # 905 "05function.c"
                    if(_if_conditional295=xisalpha(*info->p)||*info->p==95,                    _if_conditional295) {
                        # 906 "05function.c"
                        info->p++;
                        # 907 "05function.c"
                        skip_spaces_and_lf(info);
                        # 909 "05function.c"
                        word_303=(char*)come_increment_ref_count(((char*)(right_value440=parse_word(info))));
                        right_value440 = come_decrement_ref_count2(right_value440, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 921 "05function.c"
                        # 911 "05function.c"
                        if(_if_conditional296=!is_type_name(word_303,info)&&*info->p==41,                        _if_conditional296) {
                            # 912 "05function.c"
                            info->p++;
                            # 913 "05function.c"
                            skip_spaces_and_lf(info);
                            # 920 "05function.c"
                            # 915 "05function.c"
                            if(_if_conditional297=*info->p==40,                            _if_conditional297) {
                            }
                            else {
                                # 918 "05function.c"
                                define_variable_between_brace_298=(_Bool)1;
                            }
                        }
                        word_303 = come_decrement_ref_count2(word_303, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer3(result_type_300,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_301 = come_decrement_ref_count2(fun_name_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 926 "05function.c"
        info->p=head;
        # 927 "05function.c"
        info->sline=sline_292;
    }
    # 931 "05function.c"
    define_function_flag_304=(_Bool)0;
    # 993 "05function.c"
    # 932 "05function.c"
    if(_if_conditional298=is_type_name_flag_291&&!define_function_pointer_result_function_297&&charp_operator_not_equals(buf,"__typeof__"),    _if_conditional298) {
        # 934 "05function.c"
        p_305=info->p;
        # 935 "05function.c"
        info->p=head;
        # 941 "05function.c"
        # 937 "05function.c"
        if(_if_conditional299=xisalpha(*info->p)||*info->p==95,        _if_conditional299) {
            # 938 "05function.c"
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(right_value441=backtrace_parse_type((_Bool)0,info)));
            result_type_306=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_307=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_308=multiple_assign_var2->v3;
            come_call_finalizer3(right_value441,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(result_type_306,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_307 = come_decrement_ref_count2(fun_name_307, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 988 "05function.c"
        # 941 "05function.c"
        if(_if_conditional300=!info->define_struct,        _if_conditional300) {
            # 942 "05function.c"
            info->define_struct=(_Bool)0;
            # 943 "05function.c"
            word_309=((void*)0);
            # 954 "05function.c"
            # 944 "05function.c"
            if(_if_conditional301=xisalnum(*info->p)||*info->p==95,            _if_conditional301) {
                # 945 "05function.c"
                __dec_obj74=word_309;
                word_309=(char*)come_increment_ref_count(((char*)(right_value442=parse_word(info))));
                __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value442 = come_decrement_ref_count2(right_value442, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 950 "05function.c"
                # 947 "05function.c"
                if(_if_conditional302=string_operator_equals(word_309,"extern"),                _if_conditional302) {
                    # 948 "05function.c"
                    __dec_obj75=word_309;
                    word_309=(char*)come_increment_ref_count(((char*)(right_value443=parse_word(info))));
                    __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value443 = come_decrement_ref_count2(right_value443, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            else {
                # 952 "05function.c"
                __dec_obj76=word_309;
                word_309=((void*)0);
                __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            # 954 "05function.c"
            info->no_output_err=(_Bool)0;
            # 986 "05function.c"
            # 956 "05function.c"
            if(word_309) {
                # 980 "05function.c"
                # 957 "05function.c"
                if(_if_conditional304=is_type_name(word_309,info),                _if_conditional304) {
                    # 962 "05function.c"
                    while(_while_condtional37=*info->p==42,                    _while_condtional37) {
                        # 959 "05function.c"
                        info->p++;
                        # 960 "05function.c"
                        skip_spaces_and_lf(info);
                    }
                    # 966 "05function.c"
                    # 962 "05function.c"
                    if(_if_conditional305=*info->p==91&&*(info->p+1)==93,                    _if_conditional305) {
                        # 963 "05function.c"
                        info->p+=2;
                        # 964 "05function.c"
                        skip_spaces_and_lf(info);
                    }
                    # 970 "05function.c"
                    # 966 "05function.c"
                    if(_if_conditional306=*info->p==58,                    _if_conditional306) {
                        # 967 "05function.c"
                        info->p++;
                        # 968 "05function.c"
                        skip_spaces_and_lf(info);
                    }
                    # 974 "05function.c"
                    # 970 "05function.c"
                    if(_if_conditional307=*info->p==58,                    _if_conditional307) {
                        # 971 "05function.c"
                        info->p++;
                        # 972 "05function.c"
                        skip_spaces_and_lf(info);
                    }
                    # 977 "05function.c"
                    # 974 "05function.c"
                    if(_if_conditional308=xisalnum(*info->p)||*info->p==95,                    _if_conditional308) {
                        # 975 "05function.c"
                        __dec_obj77=word_309;
                        word_309=(char*)come_increment_ref_count(((char*)(right_value444=parse_word(info))));
                        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value444 = come_decrement_ref_count2(right_value444, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                }
                # 985 "05function.c"
                # 980 "05function.c"
                if(_if_conditional309=strlen(word_309)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58)),                _if_conditional309) {
                    # 984 "05function.c"
                    # 981 "05function.c"
                    if(is_type_name_flag_291) {
                        # 982 "05function.c"
                        define_function_flag_304=(_Bool)1;
                    }
                }
            }
            word_309 = come_decrement_ref_count2(word_309, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 988 "05function.c"
        info->p=p_305;
        # 989 "05function.c"
        info->sline=sline_292;
    }
    # 993 "05function.c"
    define_variable_310=(_Bool)1;
    # 1071 "05function.c"
    # 994 "05function.c"
    if(_if_conditional311=is_type_name_flag_291&&!define_function_pointer_result_function_297,    _if_conditional311) {
        # 996 "05function.c"
        p_311=info->p;
        # 997 "05function.c"
        info->p=head;
        # 1003 "05function.c"
        # 999 "05function.c"
        if(_if_conditional312=!is_type_name_flag_291,        _if_conditional312) {
            # 1000 "05function.c"
            define_variable_310=(_Bool)0;
        }
        # 1042 "05function.c"
        # 1003 "05function.c"
        if(_if_conditional313=xisalpha(*info->p)||*info->p==95,        _if_conditional313) {
            # 1004 "05function.c"
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(right_value445=backtrace_parse_type((_Bool)0,info)));
            result_type_312=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_313=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_314=multiple_assign_var3->v3;
            come_call_finalizer3(right_value445,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            # 1040 "05function.c"
            # 1006 "05function.c"
            if(_if_conditional314=*info->p==40,            _if_conditional314) {
                # 1007 "05function.c"
                info->p++;
                # 1008 "05function.c"
                skip_spaces_and_lf(info);
                # 1039 "05function.c"
                # 1010 "05function.c"
                if(_if_conditional315=*info->p==42,                _if_conditional315) {
                    # 1011 "05function.c"
                    info->p++;
                    # 1012 "05function.c"
                    skip_spaces_and_lf(info);
                    # 1026 "05function.c"
                    # 1014 "05function.c"
                    if(_if_conditional316=xisalpha(*info->p)||*info->p==95,                    _if_conditional316) {
                        # 1015 "05function.c"
                        word_315=(char*)come_increment_ref_count(((char*)(right_value446=parse_word(info))));
                        right_value446 = come_decrement_ref_count2(right_value446, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1025 "05function.c"
                        # 1017 "05function.c"
                        if(_if_conditional317=*info->p==41,                        _if_conditional317) {
                            # 1018 "05function.c"
                            info->p++;
                            # 1019 "05function.c"
                            skip_spaces_and_lf(info);
                            # 1024 "05function.c"
                            # 1021 "05function.c"
                            if(_if_conditional318=*info->p==40,                            _if_conditional318) {
                                # 1022 "05function.c"
                                define_variable_310=(_Bool)1;
                            }
                        }
                        word_315 = come_decrement_ref_count2(word_315, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    # 1039 "05function.c"
                    # 1027 "05function.c"
                    if(_if_conditional319=xisalpha(*info->p)||*info->p==95,                    _if_conditional319) {
                        # 1028 "05function.c"
                        word_316=(char*)come_increment_ref_count(((char*)(right_value447=parse_word(info))));
                        right_value447 = come_decrement_ref_count2(right_value447, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1038 "05function.c"
                        # 1030 "05function.c"
                        if(_if_conditional320=*info->p==41,                        _if_conditional320) {
                            # 1031 "05function.c"
                            info->p++;
                            # 1032 "05function.c"
                            skip_spaces_and_lf(info);
                            # 1037 "05function.c"
                            # 1034 "05function.c"
                            if(_if_conditional321=!is_type_name(word_316,info)&&*info->p!=40,                            _if_conditional321) {
                                # 1035 "05function.c"
                                define_variable_310=(_Bool)1;
                            }
                        }
                        word_316 = come_decrement_ref_count2(word_316, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer3(result_type_312,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_313 = come_decrement_ref_count2(fun_name_313, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 1063 "05function.c"
        # 1042 "05function.c"
        if(info->define_struct) {
            # 1043 "05function.c"
            info->define_struct=(_Bool)0;
            # 1044 "05function.c"
            define_variable_310=(_Bool)0;
        }
        else {
            # 1063 "05function.c"
            # 1046 "05function.c"
            if(define_variable_310) {
            }
            else {
                # 1053 "05function.c"
                # 1049 "05function.c"
                if(_if_conditional324=!(xisalpha(*info->p)||*info->p==95),                _if_conditional324) {
                    # 1050 "05function.c"
                    define_variable_310=(_Bool)0;
                }
                # 1056 "05function.c"
                while(_while_condtional38=xisalpha(*info->p)||*info->p==95,                _while_condtional38) {
                    # 1054 "05function.c"
                    info->p++;
                }
                # 1056 "05function.c"
                skip_spaces_and_lf(info);
                # 1061 "05function.c"
                # 1058 "05function.c"
                if(_if_conditional325=*info->p==40||*info->p==58,                _if_conditional325) {
                    # 1059 "05function.c"
                    define_variable_310=(_Bool)0;
                }
            }
        }
        # 1063 "05function.c"
        info->p=p_311;
        # 1064 "05function.c"
        info->sline=sline_292;
    }
    else {
        # 1067 "05function.c"
        define_variable_310=(_Bool)0;
    }
    # 1116 "05function.c"
    {
        # 1072 "05function.c"
        p_317=info->p;
        # 1073 "05function.c"
        info->p=head;
        # 1091 "05function.c"
        # 1075 "05function.c"
        if(_if_conditional326=charp_operator_equals(buf,"struct"),        _if_conditional326) {
            # 1089 "05function.c"
            # 1076 "05function.c"
            if(_if_conditional327=xisalpha(*info->p)||*info->p==95,            _if_conditional327) {
                # 1077 "05function.c"
                ((char*)(right_value448=parse_word(info)));
                right_value448 = come_decrement_ref_count2(right_value448, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1088 "05function.c"
                # 1078 "05function.c"
                if(_if_conditional328=xisalpha(*info->p)||*info->p==95,                _if_conditional328) {
                    # 1079 "05function.c"
                    word_318=(char*)come_increment_ref_count(((char*)(right_value449=parse_word(info))));
                    right_value449 = come_decrement_ref_count2(right_value449, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1087 "05function.c"
                    # 1080 "05function.c"
                    if(_if_conditional329=xisalpha(*info->p)||*info->p==95,                    _if_conditional329) {
                        # 1081 "05function.c"
                        __dec_obj78=word_318;
                        word_318=(char*)come_increment_ref_count(((char*)(right_value450=parse_word(info))));
                        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value450 = come_decrement_ref_count2(right_value450, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1086 "05function.c"
                        # 1083 "05function.c"
                        if(_if_conditional330=string_operator_equals(word_318,"extends"),                        _if_conditional330) {
                            # 1084 "05function.c"
                            define_variable_310=(_Bool)0;
                        }
                    }
                    word_318 = come_decrement_ref_count2(word_318, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        # 1112 "05function.c"
        # 1091 "05function.c"
        if(info->define_struct) {
            # 1092 "05function.c"
            info->define_struct=(_Bool)0;
            # 1093 "05function.c"
            define_variable_310=(_Bool)0;
        }
        else {
            # 1112 "05function.c"
            # 1095 "05function.c"
            if(define_variable_310) {
            }
            else {
                # 1102 "05function.c"
                # 1098 "05function.c"
                if(_if_conditional333=!(xisalpha(*info->p)||*info->p==95),                _if_conditional333) {
                    # 1099 "05function.c"
                    define_variable_310=(_Bool)0;
                }
                # 1105 "05function.c"
                while(_while_condtional39=xisalpha(*info->p)||*info->p==95,                _while_condtional39) {
                    # 1103 "05function.c"
                    info->p++;
                }
                # 1105 "05function.c"
                skip_spaces_and_lf(info);
                # 1110 "05function.c"
                # 1107 "05function.c"
                if(_if_conditional334=*info->p==40||*info->p==58,                _if_conditional334) {
                    # 1108 "05function.c"
                    define_variable_310=(_Bool)0;
                }
            }
        }
        # 1112 "05function.c"
        info->p=p_317;
        # 1113 "05function.c"
        info->sline=sline_292;
    }
    # 1308 "05function.c"
    # 1116 "05function.c"
    if(_if_conditional335=charp_operator_equals(buf,"template"),    _if_conditional335) {
        # 1117 "05function.c"
        word_319=(char*)come_increment_ref_count(((char*)(right_value451=parse_word(info))));
        right_value451 = come_decrement_ref_count2(right_value451, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1151 "05function.c"
        # 1119 "05function.c"
        if(_if_conditional336=*info->p==60,        _if_conditional336) {
            # 1120 "05function.c"
            info->p++;
            # 1121 "05function.c"
            skip_spaces_and_lf(info);
            # 1123 "05function.c"
            list$1charph_reset(info->method_generics_type_names);
            # 1145 "05function.c"
            while(_while_condtional41=(_Bool)1,            _while_condtional41) {
                # 1143 "05function.c"
                # 1126 "05function.c"
                if(_if_conditional337=*info->p==62,                _if_conditional337) {
                    # 1127 "05function.c"
                    info->p++;
                    # 1128 "05function.c"
                    skip_spaces_and_lf(info);
                    # 1129 "05function.c"
                    break;
                }
                else {
                    # 1143 "05function.c"
                    # 1131 "05function.c"
                    if(_if_conditional338=*info->p==44,                    _if_conditional338) {
                        # 1132 "05function.c"
                        info->p++;
                        # 1133 "05function.c"
                        skip_spaces_and_lf(info);
                    }
                    else {
                        # 1143 "05function.c"
                        # 1135 "05function.c"
                        if(_if_conditional339=*info->p==0,                        _if_conditional339) {
                            # 1136 "05function.c"
                            err_msg(info,"unexpected source end");
                            # 1137 "05function.c"
                            exit(2);
                        }
                        else {
                            # 1140 "05function.c"
                            word_322=(char*)come_increment_ref_count(((char*)(right_value452=parse_word(info))));
                            right_value452 = come_decrement_ref_count2(right_value452, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1141 "05function.c"
                            list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value453=string_clone(word_322)))));
                            right_value453 = come_decrement_ref_count2(right_value453, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            word_322 = come_decrement_ref_count2(word_322, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
            # 1145 "05function.c"
            node_323=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value454=parse_function(info))));
            if(right_value454) { right_value454 = come_decrement_ref_count2(right_value454, ((struct sNode*)right_value454)->finalize, ((struct sNode*)right_value454)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 1147 "05function.c"
            list$1charph_reset(info->method_generics_type_names);
            # 1149 "05function.c"
            __result141__ = __result_obj__ = node_323;
            if(node_323) { node_323 = come_decrement_ref_count2(node_323, ((struct sNode*)node_323)->finalize, ((struct sNode*)node_323)->_protocol_obj, 0, 1, 0, (void*)0); } 
            word_319 = come_decrement_ref_count2(word_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result141__;
            if(node_323) { node_323 = come_decrement_ref_count2(node_323, ((struct sNode*)node_323)->finalize, ((struct sNode*)node_323)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        word_319 = come_decrement_ref_count2(word_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 1308 "05function.c"
        # 1152 "05function.c"
        if(define_struct_nobody_293) {
        }
        else {
            # 1308 "05function.c"
            # 1154 "05function.c"
            if(define_variable_between_brace_298) {
                # 1155 "05function.c"
                info->p=head;
                # 1156 "05function.c"
                info->sline=sline_292;
                # 1158 "05function.c"
                __result142__ = __result_obj__ = ((struct sNode*)(right_value455=parse_global_variable(info)));
                if(right_value455) { right_value455 = come_decrement_ref_count2(right_value455, ((struct sNode*)right_value455)->finalize, ((struct sNode*)right_value455)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result142__;
            }
            else {
                # 1308 "05function.c"
                # 1160 "05function.c"
                if(define_function_pointer_result_function_297) {
                    # 1161 "05function.c"
                    header_head_324=info->p;
                    # 1162 "05function.c"
                    multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value456=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                    result_type_325=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                    fun_name_326=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    err_327=multiple_assign_var4->v3;
                    come_call_finalizer3(right_value456,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 1285 "05function.c"
                    # 1164 "05function.c"
                    if(_if_conditional343=*info->p==40,                    _if_conditional343) {
                        # 1165 "05function.c"
                        info->p++;
                        # 1166 "05function.c"
                        skip_spaces_and_lf(info);
                        # 1168 "05function.c"
                        param_types_328=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value458=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value457=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1168, "list$1sTypeph"))))))));
                        come_call_finalizer3(right_value457,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value458,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 1169 "05function.c"
                        param_names_329=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value460=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value459=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1169, "list$1charph"))))))));
                        come_call_finalizer3(right_value459,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value460,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 1205 "05function.c"
                        # 1171 "05function.c"
                        if(_if_conditional344=*info->p==41,                        _if_conditional344) {
                            # 1172 "05function.c"
                            info->p++;
                            # 1173 "05function.c"
                            skip_spaces_and_lf(info);
                        }
                        else {
                            # 1203 "05function.c"
                            while(_while_condtional42=(_Bool)1,                            _while_condtional42) {
                                # 1177 "05function.c"
                                multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value461=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                param_type_330=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                                param_name_331=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                                err_332=multiple_assign_var5->v3;
                                come_call_finalizer3(right_value461,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 1184 "05function.c"
                                # 1179 "05function.c"
                                if(_if_conditional345=!err_332,                                _if_conditional345) {
                                    # 1180 "05function.c"
                                    err_msg(info,"parse_type is failed");
                                    # 1181 "05function.c"
                                    exit(2);
                                }
                                # 1184 "05function.c"
                                list$1sTypeph_push_back(param_types_328,(struct sType*)come_increment_ref_count(param_type_330));
                                # 1186 "05function.c"
                                # 1187 "05function.c"
                                list$1charph_push_back(param_names_329,(char*)come_increment_ref_count(((char*)(right_value462=xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_333)))));
                                right_value462 = come_decrement_ref_count2(right_value462, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 1202 "05function.c"
                                # 1189 "05function.c"
                                if(_if_conditional346=*info->p==44,                                _if_conditional346) {
                                    # 1190 "05function.c"
                                    info->p++;
                                    # 1191 "05function.c"
                                    skip_spaces_and_lf(info);
                                }
                                else {
                                    # 1202 "05function.c"
                                    # 1193 "05function.c"
                                    if(_if_conditional347=*info->p==41,                                    _if_conditional347) {
                                        # 1194 "05function.c"
                                        info->p++;
                                        # 1195 "05function.c"
                                        skip_spaces_and_lf(info);
                                        # 1196 "05function.c"
                                        come_call_finalizer3(param_type_330,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        param_name_331 = come_decrement_ref_count2(param_name_331, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        break;
                                    }
                                    else {
                                        # 1199 "05function.c"
                                        err_msg(info,"require , or )");
                                        # 1200 "05function.c"
                                        exit(2);
                                    }
                                }
                                come_call_finalizer3(param_type_330,sType_finalize, 0, 0, 0, 0, (void*)0);
                                param_name_331 = come_decrement_ref_count2(param_name_331, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        # 1205 "05function.c"
                        (come_push_stackframe("05function.c", 1205, 2),__exception_result_var_b1=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b1);
                        # 1284 "05function.c"
                        # 1207 "05function.c"
                        if(_if_conditional348=*info->p==40,                        _if_conditional348) {
                            # 1208 "05function.c"
                            info->p++;
                            # 1209 "05function.c"
                            skip_spaces_and_lf(info);
                            # 1211 "05function.c"
                            param_types2_334=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value464=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value463=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1211, "list$1sTypeph"))))))));
                            come_call_finalizer3(right_value463,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value464,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 1212 "05function.c"
                            param_names2_335=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value466=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value465=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1212, "list$1charph"))))))));
                            come_call_finalizer3(right_value465,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value466,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 1248 "05function.c"
                            # 1214 "05function.c"
                            if(_if_conditional349=*info->p==41,                            _if_conditional349) {
                                # 1215 "05function.c"
                                info->p++;
                                # 1216 "05function.c"
                                skip_spaces_and_lf(info);
                            }
                            else {
                                # 1246 "05function.c"
                                while(_while_condtional43=(_Bool)1,                                _while_condtional43) {
                                    # 1220 "05function.c"
                                    multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(right_value467=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                    param_type_336=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                                    param_name_337=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                                    err_338=multiple_assign_var6->v3;
                                    come_call_finalizer3(right_value467,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 1227 "05function.c"
                                    # 1222 "05function.c"
                                    if(_if_conditional350=!err_338,                                    _if_conditional350) {
                                        # 1223 "05function.c"
                                        err_msg(info,"parse_type is failed");
                                        # 1224 "05function.c"
                                        exit(2);
                                    }
                                    # 1227 "05function.c"
                                    list$1sTypeph_push_back(param_types2_334,(struct sType*)come_increment_ref_count(param_type_336));
                                    # 1229 "05function.c"
                                    # 1230 "05function.c"
                                    list$1charph_push_back(param_names2_335,(char*)come_increment_ref_count(((char*)(right_value468=xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_339)))));
                                    right_value468 = come_decrement_ref_count2(right_value468, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    # 1245 "05function.c"
                                    # 1232 "05function.c"
                                    if(_if_conditional351=*info->p==44,                                    _if_conditional351) {
                                        # 1233 "05function.c"
                                        info->p++;
                                        # 1234 "05function.c"
                                        skip_spaces_and_lf(info);
                                    }
                                    else {
                                        # 1245 "05function.c"
                                        # 1236 "05function.c"
                                        if(_if_conditional352=*info->p==41,                                        _if_conditional352) {
                                            # 1237 "05function.c"
                                            info->p++;
                                            # 1238 "05function.c"
                                            skip_spaces_and_lf(info);
                                            # 1239 "05function.c"
                                            come_call_finalizer3(param_type_336,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            param_name_337 = come_decrement_ref_count2(param_name_337, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            break;
                                        }
                                        else {
                                            # 1242 "05function.c"
                                            err_msg(info,"require , or )");
                                            # 1243 "05function.c"
                                            exit(2);
                                        }
                                    }
                                    come_call_finalizer3(param_type_336,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    param_name_337 = come_decrement_ref_count2(param_name_337, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                            }
                            # 1248 "05function.c"
                            header_tail_340=info->p;
                            # 1250 "05function.c"
                            result_type2_341=(struct sType*)come_increment_ref_count(((struct sType*)(right_value470=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value469=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1250, "sType")))),"lambda",(_Bool)0,info))));
                            come_call_finalizer3(right_value469,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value470,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            # 1252 "05function.c"
                            __dec_obj80=result_type2_341->mResultType;
                            result_type2_341->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value472=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value471=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function.c", 1252, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_325)))));
                            come_call_finalizer3(__dec_obj80,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value471,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value472,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 1253 "05function.c"
                            __dec_obj81=result_type2_341->mParamTypes;
                            result_type2_341->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value473=list$1sTypephp_clone(param_types2_334))));
                            come_call_finalizer3(__dec_obj81,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value473,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 1254 "05function.c"
                            __dec_obj82=result_type2_341->mParamNames;
                            result_type2_341->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value474=list$1charphp_clone(param_names2_335))));
                            come_call_finalizer3(__dec_obj82,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value474,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 1255 "05function.c"
                            result_type2_341->mVarArgs=(_Bool)0;
                            # 1256 "05function.c"
                            result_type2_341->mStatic=(_Bool)0;
                            # 1258 "05function.c"
                            var_args_342=(_Bool)0;
                            # 1260 "05function.c"
                            header_buf_343=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value476=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value475=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1260, "buffer"))))))));
                            come_call_finalizer3(right_value475,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value476,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            # 1261 "05function.c"
                            buffer_append(header_buf_343,header_head_324,header_tail_340-header_head_324);
                            # 1262 "05function.c"
                            buffer_append_char(header_buf_343,0);
                            # 1264 "05function.c"
                            param_default_parametors_344=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value478=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value477=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1264, "list$1charph"))))))));
                            come_call_finalizer3(right_value477,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value478,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 1270 "05function.c"
                            fun_345=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value483=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value479=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1266, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value480=__builtin_string(fun_name_326)))),(struct sType*)come_increment_ref_count(result_type2_341),(struct list$1sTypeph*)come_increment_ref_count(param_types_328),(struct list$1charph*)come_increment_ref_count(param_names_329),(struct list$1charph*)come_increment_ref_count(param_default_parametors_344),(_Bool)1,var_args_342,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value481=buffer_to_string(header_buf_343)))),(char*)come_increment_ref_count(((char*)(right_value482=__builtin_string(info->sname)))),info))));
                            come_call_finalizer3(right_value479,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                            right_value480 = come_decrement_ref_count2(right_value480, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value481 = come_decrement_ref_count2(right_value481, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value482 = come_decrement_ref_count2(right_value482, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value483,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                            # 1272 "05function.c"
                            fun2_349=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value484=__builtin_string(fun_name_326))));
                            right_value484 = come_decrement_ref_count2(right_value484, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1278 "05function.c"
                            # 1273 "05function.c"
                            if(_if_conditional357=fun2_349==((void*)0)||fun2_349->mExternal,                            _if_conditional357) {
                                # 1275 "05function.c"
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value485=string_clone(fun_name_326)))),(struct sFun*)come_increment_ref_count(fun_345));
                                right_value485 = come_decrement_ref_count2(right_value485, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 1278 "05function.c"
                            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1278, "struct sNode");
                            _inf_obj_value1=come_increment_ref_count(((struct sFunNode*)(right_value487=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value486=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1278, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_345),info))));
                            _inf_value1->_protocol_obj=_inf_obj_value1;
                            _inf_value1->finalize=(void*)sFunNode_finalize;
                            _inf_value1->clone=(void*)sFunNode_clone;
                            _inf_value1->compile=(void*)sFunNode_compile;
                            _inf_value1->sline=(void*)sNodeBase_sline;
                            _inf_value1->sname=(void*)sNodeBase_sname;
                            _inf_value1->terminated=(void*)sFunNode_terminated;
                            _inf_value1->kind=(void*)sFunNode_kind;
                            __result172__ = __result_obj__ = ((struct sNode*)(right_value522=_inf_value1));
                            come_call_finalizer3(param_types2_334,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_names2_335,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type2_341,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_buf_343,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_default_parametors_344,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(fun_345,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_328,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_names_329,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type_325,sType_finalize, 0, 0, 0, 0, (void*)0);
                            fun_name_326 = come_decrement_ref_count2(fun_name_326, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value486,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value487,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value522) { right_value522 = come_decrement_ref_count2(right_value522, ((struct sNode*)right_value522)->finalize, ((struct sNode*)right_value522)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result172__;
                            come_call_finalizer3(param_types2_334,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_names2_335,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type2_341,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_buf_343,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_default_parametors_344,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(fun_345,sFun_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            # 1281 "05function.c"
                            err_msg(info,"require (");
                            # 1282 "05function.c"
                            exit(2);
                        }
                        come_call_finalizer3(param_types_328,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_names_329,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(result_type_325,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_326 = come_decrement_ref_count2(fun_name_326, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    # 1308 "05function.c"
                    # 1286 "05function.c"
                    if(define_function_flag_304) {
                        # 1287 "05function.c"
                        info->p=head;
                        # 1288 "05function.c"
                        info->sline=sline_292;
                        # 1290 "05function.c"
                        __result173__ = __result_obj__ = ((struct sNode*)(right_value523=parse_function(info)));
                        if(right_value523) { right_value523 = come_decrement_ref_count2(right_value523, ((struct sNode*)right_value523)->finalize, ((struct sNode*)right_value523)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result173__;
                    }
                    else {
                        # 1308 "05function.c"
                        # 1292 "05function.c"
                        if(define_variable_310) {
                            # 1293 "05function.c"
                            info->p=head;
                            # 1294 "05function.c"
                            info->sline=sline_292;
                            # 1296 "05function.c"
                            node_386=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value524=parse_global_variable(info))));
                            if(right_value524) { right_value524 = come_decrement_ref_count2(right_value524, ((struct sNode*)right_value524)->finalize, ((struct sNode*)right_value524)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 1298 "05function.c"
                            source_tail_387=info->p;
                            # 1300 "05function.c"
                            header_388=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value526=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value525=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1300, "buffer"))))))));
                            come_call_finalizer3(right_value525,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value526,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            # 1301 "05function.c"
                            buffer_append(header_388,source_head_290,source_tail_387-source_head_290);
                            # 1303 "05function.c"
                            add_come_code_at_come_header(info,"%s %s;\n",buf,((char*)(right_value527=buffer_to_string(header_388))));
                            right_value527 = come_decrement_ref_count2(right_value527, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1305 "05function.c"
                            __result174__ = __result_obj__ = node_386;
                            if(node_386) { node_386 = come_decrement_ref_count2(node_386, ((struct sNode*)node_386)->finalize, ((struct sNode*)node_386)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            come_call_finalizer3(header_388,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            return __result174__;
                            if(node_386) { node_386 = come_decrement_ref_count2(node_386, ((struct sNode*)node_386)->finalize, ((struct sNode*)node_386)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(header_388,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
        }
    }
    # 1308 "05function.c"
    info->p=head;
    # 1309 "05function.c"
    info->sline=sline_292;
    # 1311 "05function.c"
    buf2_389=(char*)come_increment_ref_count(((char*)(right_value528=parse_word(info))));
    right_value528 = come_decrement_ref_count2(right_value528, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1313 "05function.c"
    __result175__ = __result_obj__ = ((struct sNode*)(right_value529=top_level_v98(buf2_389,head,head_sline,info)));
    buf2_389 = come_decrement_ref_count2(buf2_389, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(right_value529) { right_value529 = come_decrement_ref_count2(right_value529, ((struct sNode*)right_value529)->finalize, ((struct sNode*)right_value529)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result175__;
    buf2_389 = come_decrement_ref_count2(buf2_389, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional291;
_Bool _if_conditional292;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "tuple3$3sTypephcharphboolp_finalize"
                # 0 "tuple3$3sTypephcharphboolp_finalize"
                if(_if_conditional291=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional291) {
                    # 0 "tuple3$3sTypephcharphboolp_finalize"
                    come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 2 "tuple3$3sTypephcharphboolp_finalize"
                # 1 "tuple3$3sTypephcharphboolp_finalize"
                if(_if_conditional292=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional292) {
                    # 1 "tuple3$3sTypephcharphboolp_finalize"
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_320;
_Bool _while_condtional40;
struct list_item$1charph* prev_it_321;
struct list$1charph* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_320, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_321, 0, sizeof(struct list_item$1charph*));
                # 420 "./neo-c.h"
                it_320=self->head;
                # 427 "./neo-c.h"
                while(_while_condtional40=it_320!=((void*)0),                _while_condtional40) {
                    # 422 "./neo-c.h"
                    prev_it_321=it_320;
                    # 423 "./neo-c.h"
                    it_320=it_320->next;
                    # 424 "./neo-c.h"
                    come_call_finalizer3(prev_it_321,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 427 "./neo-c.h"
                self->head=((void*)0);
                # 428 "./neo-c.h"
                self->tail=((void*)0);
                # 430 "./neo-c.h"
                self->len=0;
                # 432 "./neo-c.h"
                __result140__ = __result_obj__ = self;
                return __result140__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj79;
struct tuple1$1sTypeph* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1710 "./neo-c.h"
                                __dec_obj79=self->v1;
                                self->v1=(struct sType*)come_increment_ref_count(v1);
                                come_call_finalizer3(__dec_obj79,sType_finalize, 0, 0, 0, 0, (void*)0);
                                # 1712 "./neo-c.h"
                                __result143__ = __result_obj__ = self;
                                come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                                come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                                return __result143__;
                                come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                                come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_346;
unsigned int hash_347;
unsigned int it_348;
_Bool _while_condtional44;
_Bool _if_conditional353;
_Bool _if_conditional354;
struct sFun* __result144__;
_Bool _if_conditional355;
_Bool _if_conditional356;
struct sFun* __result145__;
struct sFun* __result146__;
struct sFun* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_346, 0, sizeof(struct sFun*));
memset(&hash_347, 0, sizeof(unsigned int));
memset(&it_348, 0, sizeof(unsigned int));
                                # 1519 "./neo-c.h"
                                # 1520 "./neo-c.h"
                                memset(&default_value_346,0,sizeof(struct sFun*));
                                # 1522 "./neo-c.h"
                                hash_347=string_get_hash_key(((char*)key))%self->size;
                                # 1523 "./neo-c.h"
                                it_348=hash_347;
                                # 1547 "./neo-c.h"
                                while(_while_condtional44=(_Bool)1,                                _while_condtional44) {
                                    # 1545 "./neo-c.h"
                                    # 1526 "./neo-c.h"
                                    if(_if_conditional353=self->item_existance[it_348],                                    _if_conditional353) {
                                        # 1533 "./neo-c.h"
                                        # 1528 "./neo-c.h"
                                        if(_if_conditional354=string_equals(self->keys[it_348],key),                                        _if_conditional354) {
                                            # 1530 "./neo-c.h"
                                            __result144__ = __result_obj__ = self->items[it_348];
                                            come_call_finalizer3(default_value_346,sFun_finalize, 0, 0, 0, 0, (void*)0);
                                            return __result144__;
                                        }
                                        # 1533 "./neo-c.h"
                                        it_348++;
                                        # 1541 "./neo-c.h"
                                        # 1535 "./neo-c.h"
                                        if(_if_conditional355=it_348>=self->size,                                        _if_conditional355) {
                                            # 1536 "./neo-c.h"
                                            it_348=0;
                                        }
                                        else {
                                            # 1541 "./neo-c.h"
                                            # 1538 "./neo-c.h"
                                            if(_if_conditional356=it_348==hash_347,                                            _if_conditional356) {
                                                # 1539 "./neo-c.h"
                                                __result145__ = __result_obj__ = default_value_346;
                                                come_call_finalizer3(default_value_346,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result145__;
                                            }
                                        }
                                    }
                                    else {
                                        # 1543 "./neo-c.h"
                                        __result146__ = __result_obj__ = default_value_346;
                                        come_call_finalizer3(default_value_346,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result146__;
                                    }
                                }
                                # 1547 "./neo-c.h"
                                __result147__ = __result_obj__ = default_value_346;
                                come_call_finalizer3(default_value_346,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result147__;
                                come_call_finalizer3(default_value_346,sFun_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sFun* sFun_clone(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional364;
struct sFun* __result149__;
void* right_value490;
struct sFun* result_351;
_Bool _if_conditional365;
void* right_value491;
char* __dec_obj84;
_Bool _if_conditional366;
void* right_value492;
struct sType* __dec_obj85;
_Bool _if_conditional367;
void* right_value493;
struct list$1sTypeph* __dec_obj86;
_Bool _if_conditional368;
void* right_value494;
struct list$1charph* __dec_obj87;
_Bool _if_conditional369;
void* right_value495;
struct list$1charph* __dec_obj88;
_Bool _if_conditional370;
void* right_value496;
struct sType* __dec_obj89;
_Bool _if_conditional371;
void* right_value514;
struct sBlock* __dec_obj95;
_Bool _if_conditional415;
_Bool _if_conditional416;
_Bool _if_conditional417;
void* right_value515;
struct buffer* __dec_obj96;
_Bool _if_conditional418;
void* right_value516;
struct buffer* __dec_obj97;
_Bool _if_conditional419;
void* right_value517;
struct buffer* __dec_obj98;
_Bool _if_conditional420;
void* right_value518;
struct buffer* __dec_obj99;
_Bool _if_conditional421;
_Bool _if_conditional422;
void* right_value519;
char* __dec_obj100;
_Bool _if_conditional423;
_Bool _if_conditional424;
void* right_value520;
char* __dec_obj101;
struct sFun* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
right_value490 = (void*)0;
memset(&result_351, 0, sizeof(struct sFun*));
right_value491 = (void*)0;
right_value492 = (void*)0;
right_value493 = (void*)0;
right_value494 = (void*)0;
right_value495 = (void*)0;
right_value496 = (void*)0;
right_value514 = (void*)0;
right_value515 = (void*)0;
right_value516 = (void*)0;
right_value517 = (void*)0;
right_value518 = (void*)0;
right_value519 = (void*)0;
right_value520 = (void*)0;
                                        # 3 "sFun_clone"
                                        # 2 "sFun_clone"
                                        if(_if_conditional364=self==(void*)0,                                        _if_conditional364) {
                                            # 2 "sFun_clone"
                                            __result149__ = __result_obj__ = (void*)0;
                                            return __result149__;
                                        }
                                        # 3 "sFun_clone"
                                        result_351=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value490=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "sFun"))));
                                        come_call_finalizer3(right_value490,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 5 "sFun_clone"
                                        # 4 "sFun_clone"
                                        if(_if_conditional365=self!=((void*)0)&&self->mName!=((void*)0),                                        _if_conditional365) {
                                            # 4 "sFun_clone"
                                            __dec_obj84=result_351->mName;
                                            result_351->mName=(char*)come_increment_ref_count(((char*)(right_value491=string_clone(self->mName))));
                                            __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value491 = come_decrement_ref_count2(right_value491, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        # 6 "sFun_clone"
                                        # 5 "sFun_clone"
                                        if(_if_conditional366=self!=((void*)0)&&self->mResultType!=((void*)0),                                        _if_conditional366) {
                                            # 5 "sFun_clone"
                                            __dec_obj85=result_351->mResultType;
                                            result_351->mResultType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value492=sType_clone(self->mResultType))));
                                            come_call_finalizer3(__dec_obj85,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value492,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        # 7 "sFun_clone"
                                        # 6 "sFun_clone"
                                        if(_if_conditional367=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                        _if_conditional367) {
                                            # 6 "sFun_clone"
                                            __dec_obj86=result_351->mParamTypes;
                                            result_351->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value493=list$1sTypephp_clone(self->mParamTypes))));
                                            come_call_finalizer3(__dec_obj86,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value493,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        # 8 "sFun_clone"
                                        # 7 "sFun_clone"
                                        if(_if_conditional368=self!=((void*)0)&&self->mParamNames!=((void*)0),                                        _if_conditional368) {
                                            # 7 "sFun_clone"
                                            __dec_obj87=result_351->mParamNames;
                                            result_351->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value494=list$1charphp_clone(self->mParamNames))));
                                            come_call_finalizer3(__dec_obj87,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value494,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        # 9 "sFun_clone"
                                        # 8 "sFun_clone"
                                        if(_if_conditional369=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                        _if_conditional369) {
                                            # 8 "sFun_clone"
                                            __dec_obj88=result_351->mParamDefaultParametors;
                                            result_351->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value495=list$1charphp_clone(self->mParamDefaultParametors))));
                                            come_call_finalizer3(__dec_obj88,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value495,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        # 10 "sFun_clone"
                                        # 9 "sFun_clone"
                                        if(_if_conditional370=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                        _if_conditional370) {
                                            # 9 "sFun_clone"
                                            __dec_obj89=result_351->mLambdaType;
                                            result_351->mLambdaType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value496=sType_clone(self->mLambdaType))));
                                            come_call_finalizer3(__dec_obj89,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value496,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        # 11 "sFun_clone"
                                        # 10 "sFun_clone"
                                        if(_if_conditional371=self!=((void*)0)&&self->mBlock!=((void*)0),                                        _if_conditional371) {
                                            # 10 "sFun_clone"
                                            __dec_obj95=result_351->mBlock;
                                            result_351->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value514=sBlock_clone(self->mBlock))));
                                            come_call_finalizer3(__dec_obj95,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value514,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        # 12 "sFun_clone"
                                        # 11 "sFun_clone"
                                        if(_if_conditional415=self!=((void*)0),                                        _if_conditional415) {
                                            # 11 "sFun_clone"
                                            result_351->mExternal=self->mExternal;
                                        }
                                        # 13 "sFun_clone"
                                        # 12 "sFun_clone"
                                        if(_if_conditional416=self!=((void*)0),                                        _if_conditional416) {
                                            # 12 "sFun_clone"
                                            result_351->mVarArgs=self->mVarArgs;
                                        }
                                        # 14 "sFun_clone"
                                        # 13 "sFun_clone"
                                        if(_if_conditional417=self!=((void*)0)&&self->mSource!=((void*)0),                                        _if_conditional417) {
                                            # 13 "sFun_clone"
                                            __dec_obj96=result_351->mSource;
                                            result_351->mSource=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value515=buffer_clone(self->mSource))));
                                            come_call_finalizer3(__dec_obj96,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value515,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        # 15 "sFun_clone"
                                        # 14 "sFun_clone"
                                        if(_if_conditional418=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                        _if_conditional418) {
                                            # 14 "sFun_clone"
                                            __dec_obj97=result_351->mSourceHead;
                                            result_351->mSourceHead=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value516=buffer_clone(self->mSourceHead))));
                                            come_call_finalizer3(__dec_obj97,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value516,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        # 16 "sFun_clone"
                                        # 15 "sFun_clone"
                                        if(_if_conditional419=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                        _if_conditional419) {
                                            # 15 "sFun_clone"
                                            __dec_obj98=result_351->mSourceHead2;
                                            result_351->mSourceHead2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value517=buffer_clone(self->mSourceHead2))));
                                            come_call_finalizer3(__dec_obj98,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value517,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        # 17 "sFun_clone"
                                        # 16 "sFun_clone"
                                        if(_if_conditional420=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                        _if_conditional420) {
                                            # 16 "sFun_clone"
                                            __dec_obj99=result_351->mSourceDefer;
                                            result_351->mSourceDefer=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value518=buffer_clone(self->mSourceDefer))));
                                            come_call_finalizer3(__dec_obj99,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value518,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        # 18 "sFun_clone"
                                        # 17 "sFun_clone"
                                        if(_if_conditional421=self!=((void*)0),                                        _if_conditional421) {
                                            # 17 "sFun_clone"
                                            result_351->mStatic=self->mStatic;
                                        }
                                        # 19 "sFun_clone"
                                        # 18 "sFun_clone"
                                        if(_if_conditional422=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                        _if_conditional422) {
                                            # 18 "sFun_clone"
                                            __dec_obj100=result_351->mComeHeader;
                                            result_351->mComeHeader=(char*)come_increment_ref_count(((char*)(right_value519=string_clone(self->mComeHeader))));
                                            __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value519 = come_decrement_ref_count2(right_value519, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        # 20 "sFun_clone"
                                        # 19 "sFun_clone"
                                        if(_if_conditional423=self!=((void*)0),                                        _if_conditional423) {
                                            # 19 "sFun_clone"
                                            result_351->mCloner=self->mCloner;
                                        }
                                        # 21 "sFun_clone"
                                        # 20 "sFun_clone"
                                        if(_if_conditional424=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                        _if_conditional424) {
                                            # 20 "sFun_clone"
                                            __dec_obj101=result_351->mDeclareSName;
                                            result_351->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value520=string_clone(self->mDeclareSName))));
                                            __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value520 = come_decrement_ref_count2(right_value520, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        # 21 "sFun_clone"
                                        __result170__ = __result_obj__ = result_351;
                                        come_call_finalizer3(result_351,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result170__;
                                        come_call_finalizer3(result_351,sFun_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional372;
struct sBlock* __result150__;
void* right_value497;
struct sBlock* result_352;
_Bool _if_conditional373;
void* right_value498;
struct list$1sNodeph* __dec_obj90;
_Bool _if_conditional374;
void* right_value513;
struct sVarTable* __dec_obj94;
struct sBlock* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
right_value497 = (void*)0;
memset(&result_352, 0, sizeof(struct sBlock*));
right_value498 = (void*)0;
right_value513 = (void*)0;
                                                # 3 "sBlock_clone"
                                                # 2 "sBlock_clone"
                                                if(_if_conditional372=self==(void*)0,                                                _if_conditional372) {
                                                    # 2 "sBlock_clone"
                                                    __result150__ = __result_obj__ = (void*)0;
                                                    return __result150__;
                                                }
                                                # 3 "sBlock_clone"
                                                result_352=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value497=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"))));
                                                come_call_finalizer3(right_value497,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
                                                # 5 "sBlock_clone"
                                                # 4 "sBlock_clone"
                                                if(_if_conditional373=self!=((void*)0)&&self->mNodes!=((void*)0),                                                _if_conditional373) {
                                                    # 4 "sBlock_clone"
                                                    __dec_obj90=result_352->mNodes;
                                                    result_352->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value498=list$1sNodephp_clone(self->mNodes))));
                                                    come_call_finalizer3(__dec_obj90,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer3(right_value498,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                }
                                                # 6 "sBlock_clone"
                                                # 5 "sBlock_clone"
                                                if(_if_conditional374=self!=((void*)0)&&self->mVarTable!=((void*)0),                                                _if_conditional374) {
                                                    # 5 "sBlock_clone"
                                                    __dec_obj94=result_352->mVarTable;
                                                    result_352->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value513=sVarTable_clone(self->mVarTable))));
                                                    come_call_finalizer3(__dec_obj94,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer3(right_value513,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                                                }
                                                # 6 "sBlock_clone"
                                                __result169__ = __result_obj__ = result_352;
                                                come_call_finalizer3(result_352,sBlock_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result169__;
                                                come_call_finalizer3(result_352,sBlock_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool _if_conditional375;
struct sVarTable* __result151__;
void* right_value499;
struct sVarTable* result_353;
_Bool _if_conditional376;
void* right_value512;
struct map$2charphsVarph* __dec_obj93;
_Bool _if_conditional412;
_Bool _if_conditional413;
_Bool _if_conditional414;
struct sVarTable* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
right_value499 = (void*)0;
memset(&result_353, 0, sizeof(struct sVarTable*));
right_value512 = (void*)0;
                                                        # 3 "sVarTable_clone"
                                                        # 2 "sVarTable_clone"
                                                        if(_if_conditional375=self==(void*)0,                                                        _if_conditional375) {
                                                            # 2 "sVarTable_clone"
                                                            __result151__ = __result_obj__ = (void*)0;
                                                            return __result151__;
                                                        }
                                                        # 3 "sVarTable_clone"
                                                        result_353=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value499=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"))));
                                                        come_call_finalizer3(right_value499,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                                                        # 5 "sVarTable_clone"
                                                        # 4 "sVarTable_clone"
                                                        if(_if_conditional376=self!=((void*)0)&&self->mVars!=((void*)0),                                                        _if_conditional376) {
                                                            # 4 "sVarTable_clone"
                                                            __dec_obj93=result_353->mVars;
                                                            result_353->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value512=map$2charphsVarphp_clone(self->mVars))));
                                                            come_call_finalizer3(__dec_obj93,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer3(right_value512,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        }
                                                        # 6 "sVarTable_clone"
                                                        # 5 "sVarTable_clone"
                                                        if(_if_conditional412=self!=((void*)0),                                                        _if_conditional412) {
                                                            # 5 "sVarTable_clone"
                                                            result_353->mGlobal=self->mGlobal;
                                                        }
                                                        # 7 "sVarTable_clone"
                                                        # 6 "sVarTable_clone"
                                                        if(_if_conditional413=self!=((void*)0),                                                        _if_conditional413) {
                                                            # 6 "sVarTable_clone"
                                                            result_353->mParent=self->mParent;
                                                        }
                                                        # 8 "sVarTable_clone"
                                                        # 7 "sVarTable_clone"
                                                        if(_if_conditional414=self!=((void*)0),                                                        _if_conditional414) {
                                                            # 7 "sVarTable_clone"
                                                            result_353->mID=self->mID;
                                                        }
                                                        # 8 "sVarTable_clone"
                                                        __result168__ = __result_obj__ = result_353;
                                                        come_call_finalizer3(result_353,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
                                                        return __result168__;
                                                        come_call_finalizer3(result_353,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional377;
struct map$2charphsVarph* __result152__;
void* right_value500;
void* right_value506;
struct map$2charphsVarph* result_359;
void* right_value507;
void* right_value508;
struct list$1charp* __dec_obj92;
char* it_362;
struct sVar* default_value_365;
struct sVar* it2_368;
struct map$2charphsVarph* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
right_value500 = (void*)0;
right_value506 = (void*)0;
memset(&result_359, 0, sizeof(struct map$2charphsVarph*));
right_value507 = (void*)0;
right_value508 = (void*)0;
memset(&it_362, 0, sizeof(char*));
memset(&default_value_365, 0, sizeof(struct sVar*));
memset(&it2_368, 0, sizeof(struct sVar*));
                                                                # 1156 "./neo-c.h"
                                                                # 1152 "./neo-c.h"
                                                                if(_if_conditional377=self==((void*)0),                                                                _if_conditional377) {
                                                                    # 1153 "./neo-c.h"
                                                                    __result152__ = __result_obj__ = ((void*)0);
                                                                    return __result152__;
                                                                }
                                                                # 1156 "./neo-c.h"
                                                                result_359=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value506=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value500=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./neo-c.h", 1156, "map$2charphsVarph"))))))));
                                                                come_call_finalizer3(right_value500,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                come_call_finalizer3(right_value506,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                # 1158 "./neo-c.h"
                                                                __dec_obj92=result_359->key_list;
                                                                result_359->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value508=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value507=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1158, "list$1charp"))))))));
                                                                come_call_finalizer3(__dec_obj92,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer3(right_value507,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                come_call_finalizer3(right_value508,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                # 1169 "./neo-c.h"
                                                                for(                                                                it_362=map$2charphsVarph_begin(self);                                                                !map$2charphsVarph_end(self);                                                                it_362=map$2charphsVarph_next(self)                                                                ){
                                                                    # 1161 "./neo-c.h"
                                                                    # 1162 "./neo-c.h"
                                                                    memset(&default_value_365,0,sizeof(struct sVar*));
                                                                    # 1164 "./neo-c.h"
                                                                    it2_368=map$2charphsVarph_at(self,it_362,default_value_365);
                                                                    # 1166 "./neo-c.h"
                                                                    map$2charphsVarph_insert2(result_359,it_362,it2_368);
                                                                }
                                                                # 1169 "./neo-c.h"
                                                                __result167__ = __result_obj__ = result_359;
                                                                come_call_finalizer3(result_359,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
                                                                return __result167__;
                                                                come_call_finalizer3(result_359,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
void* right_value501;
void* right_value502;
void* right_value503;
int i_354;
void* right_value504;
void* right_value505;
struct list$1charp* __dec_obj91;
struct map$2charphsVarph* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
right_value501 = (void*)0;
right_value502 = (void*)0;
right_value503 = (void*)0;
memset(&i_354, 0, sizeof(int));
right_value504 = (void*)0;
right_value505 = (void*)0;
                                                                    # 1062 "./neo-c.h"
                                                                    self->keys=(char**)come_increment_ref_count(((char**)(right_value501=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1062, "char*%"))));
                                                                    right_value501 = come_decrement_ref_count2(right_value501, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    # 1063 "./neo-c.h"
                                                                    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value502=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./neo-c.h", 1063, "sVar*%"))));
                                                                    come_call_finalizer3(right_value502,sVar_finalize, 0, 1, 0, 0, __result_obj__);
                                                                    # 1064 "./neo-c.h"
                                                                    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value503=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1064, "bool"))));
                                                                    right_value503 = come_decrement_ref_count2(right_value503, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    # 1071 "./neo-c.h"
                                                                    for(                                                                    i_354=0;                                                                    i_354<128;                                                                    i_354++                                                                    ){
                                                                        # 1068 "./neo-c.h"
                                                                        self->item_existance[i_354]=(_Bool)0;
                                                                    }
                                                                    # 1071 "./neo-c.h"
                                                                    self->size=128;
                                                                    # 1072 "./neo-c.h"
                                                                    self->len=0;
                                                                    # 1074 "./neo-c.h"
                                                                    __dec_obj91=self->key_list;
                                                                    self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value505=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value504=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1074, "list$1charp"))))))));
                                                                    come_call_finalizer3(__dec_obj91,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
                                                                    come_call_finalizer3(right_value504,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                    come_call_finalizer3(right_value505,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                    # 1076 "./neo-c.h"
                                                                    self->it=0;
                                                                    # 1078 "./neo-c.h"
                                                                    __result154__ = __result_obj__ = self;
                                                                    come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
                                                                    return __result154__;
                                                                    come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional378;
_Bool _if_conditional379;
_Bool _if_conditional380;
_Bool _if_conditional381;
memset(&__result_obj__, 0, sizeof(void*));
                                                                        # 1 "sVar_finalize"
                                                                        # 0 "sVar_finalize"
                                                                        if(_if_conditional378=self!=((void*)0)&&self->mName!=((void*)0),                                                                        _if_conditional378) {
                                                                            # 0 "sVar_finalize"
                                                                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        # 2 "sVar_finalize"
                                                                        # 1 "sVar_finalize"
                                                                        if(_if_conditional379=self!=((void*)0)&&self->mCValueName!=((void*)0),                                                                        _if_conditional379) {
                                                                            # 1 "sVar_finalize"
                                                                            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        # 3 "sVar_finalize"
                                                                        # 2 "sVar_finalize"
                                                                        if(_if_conditional380=self!=((void*)0)&&self->mType!=((void*)0),                                                                        _if_conditional380) {
                                                                            # 2 "sVar_finalize"
                                                                            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        # 4 "sVar_finalize"
                                                                        # 3 "sVar_finalize"
                                                                        if(_if_conditional381=self!=((void*)0)&&self->mFunName!=((void*)0),                                                                        _if_conditional381) {
                                                                            # 3 "sVar_finalize"
                                                                            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
                                                                        # 95 "./neo-c.h"
                                                                        self->head=((void*)0);
                                                                        # 96 "./neo-c.h"
                                                                        self->tail=((void*)0);
                                                                        # 97 "./neo-c.h"
                                                                        self->len=0;
                                                                        # 99 "./neo-c.h"
                                                                        __result153__ = __result_obj__ = self;
                                                                        come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
                                                                        return __result153__;
                                                                        come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_355;
_Bool _while_condtional45;
struct list_item$1charp* prev_it_356;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_355, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_356, 0, sizeof(struct list_item$1charp*));
                                                                            # 114 "./neo-c.h"
                                                                            it_355=self->head;
                                                                            # 120 "./neo-c.h"
                                                                            while(_while_condtional45=it_355!=((void*)0),                                                                            _while_condtional45) {
                                                                                # 116 "./neo-c.h"
                                                                                prev_it_356=it_355;
                                                                                # 117 "./neo-c.h"
                                                                                it_355=it_355->next;
                                                                                # 118 "./neo-c.h"
                                                                                come_call_finalizer3(prev_it_356,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_357;
_Bool _if_conditional382;
_Bool _if_conditional383;
int i_358;
_Bool _if_conditional384;
_Bool _if_conditional385;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_357, 0, sizeof(int));
memset(&i_358, 0, sizeof(int));
                                                                        # 1112 "./neo-c.h"
                                                                        for(                                                                        i_357=0;                                                                        i_357<self->size;                                                                        i_357++                                                                        ){
                                                                            # 1111 "./neo-c.h"
                                                                            # 1106 "./neo-c.h"
                                                                            if(_if_conditional382=self->item_existance[i_357],                                                                            _if_conditional382) {
                                                                                # 1110 "./neo-c.h"
                                                                                # 1107 "./neo-c.h"
                                                                                if(_if_conditional383=1,                                                                                _if_conditional383) {
                                                                                    # 1108 "./neo-c.h"
                                                                                    come_call_finalizer3(self->items[i_357],sVar_finalize, 0, 0, 0, 0, (void*)0);
                                                                                }
                                                                            }
                                                                        }
                                                                        # 1112 "./neo-c.h"
                                                                        come_free((char*)self->items);
                                                                        # 1121 "./neo-c.h"
                                                                        for(                                                                        i_358=0;                                                                        i_358<self->size;                                                                        i_358++                                                                        ){
                                                                            # 1120 "./neo-c.h"
                                                                            # 1115 "./neo-c.h"
                                                                            if(_if_conditional384=self->item_existance[i_358],                                                                            _if_conditional384) {
                                                                                # 1119 "./neo-c.h"
                                                                                # 1116 "./neo-c.h"
                                                                                if(_if_conditional385=1,                                                                                _if_conditional385) {
                                                                                    # 1117 "./neo-c.h"
                                                                                    self->keys[i_358] = come_decrement_ref_count2(self->keys[i_358], (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional386;
char* result_360;
char* __result155__;
_Bool _if_conditional387;
char* __result156__;
char* result_361;
char* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_360, 0, sizeof(char*));
memset(&result_361, 0, sizeof(char*));
                                                                    # 1279 "./neo-c.h"
                                                                    # 1274 "./neo-c.h"
                                                                    if(_if_conditional386=self==((void*)0),                                                                    _if_conditional386) {
                                                                        # 1275 "./neo-c.h"
                                                                        # 1276 "./neo-c.h"
                                                                        memset(&result_360,0,sizeof(char*));
                                                                        # 1277 "./neo-c.h"
                                                                        __result155__ = __result_obj__ = result_360;
                                                                        return __result155__;
                                                                    }
                                                                    # 1279 "./neo-c.h"
                                                                    self->key_list->it=self->key_list->head;
                                                                    # 1285 "./neo-c.h"
                                                                    # 1281 "./neo-c.h"
                                                                    if(self->key_list->it) {
                                                                        # 1282 "./neo-c.h"
                                                                        __result156__ = __result_obj__ = self->key_list->it->item;
                                                                        return __result156__;
                                                                    }
                                                                    # 1285 "./neo-c.h"
                                                                    # 1286 "./neo-c.h"
                                                                    memset(&result_361,0,sizeof(char*));
                                                                    # 1287 "./neo-c.h"
                                                                    __result157__ = __result_obj__ = result_361;
                                                                    return __result157__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result158__;
memset(&__result_obj__, 0, sizeof(void*));
                                                                    # 1308 "./neo-c.h"
                                                                    __result158__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                                                                    return __result158__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional388;
char* result_363;
char* __result159__;
_Bool _if_conditional389;
char* __result160__;
char* result_364;
char* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_363, 0, sizeof(char*));
memset(&result_364, 0, sizeof(char*));
                                                                    # 1296 "./neo-c.h"
                                                                    # 1291 "./neo-c.h"
                                                                    if(_if_conditional388=self==((void*)0)||self->key_list->it==((void*)0),                                                                    _if_conditional388) {
                                                                        # 1292 "./neo-c.h"
                                                                        # 1293 "./neo-c.h"
                                                                        memset(&result_363,0,sizeof(char*));
                                                                        # 1294 "./neo-c.h"
                                                                        __result159__ = __result_obj__ = result_363;
                                                                        return __result159__;
                                                                    }
                                                                    # 1296 "./neo-c.h"
                                                                    self->key_list->it=self->key_list->it->next;
                                                                    # 1302 "./neo-c.h"
                                                                    # 1298 "./neo-c.h"
                                                                    if(self->key_list->it) {
                                                                        # 1299 "./neo-c.h"
                                                                        __result160__ = __result_obj__ = self->key_list->it->item;
                                                                        return __result160__;
                                                                    }
                                                                    # 1302 "./neo-c.h"
                                                                    # 1303 "./neo-c.h"
                                                                    memset(&result_364,0,sizeof(char*));
                                                                    # 1304 "./neo-c.h"
                                                                    __result161__ = __result_obj__ = result_364;
                                                                    return __result161__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_366;
unsigned int it_367;
_Bool _while_condtional46;
_Bool _if_conditional390;
_Bool _if_conditional391;
struct sVar* __result162__;
_Bool _if_conditional392;
_Bool _if_conditional393;
struct sVar* __result163__;
struct sVar* __result164__;
struct sVar* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_366, 0, sizeof(unsigned int));
memset(&it_367, 0, sizeof(unsigned int));
                                                                        # 1201 "./neo-c.h"
                                                                        hash_366=string_get_hash_key(((char*)key))%self->size;
                                                                        # 1202 "./neo-c.h"
                                                                        it_367=hash_366;
                                                                        # 1226 "./neo-c.h"
                                                                        while(_while_condtional46=(_Bool)1,                                                                        _while_condtional46) {
                                                                            # 1224 "./neo-c.h"
                                                                            # 1205 "./neo-c.h"
                                                                            if(_if_conditional390=self->item_existance[it_367],                                                                            _if_conditional390) {
                                                                                # 1212 "./neo-c.h"
                                                                                # 1207 "./neo-c.h"
                                                                                if(_if_conditional391=string_equals(self->keys[it_367],key),                                                                                _if_conditional391) {
                                                                                    # 1209 "./neo-c.h"
                                                                                    __result162__ = __result_obj__ = self->items[it_367];
                                                                                    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                                                                    return __result162__;
                                                                                }
                                                                                # 1212 "./neo-c.h"
                                                                                it_367++;
                                                                                # 1220 "./neo-c.h"
                                                                                # 1214 "./neo-c.h"
                                                                                if(_if_conditional392=it_367>=self->size,                                                                                _if_conditional392) {
                                                                                    # 1215 "./neo-c.h"
                                                                                    it_367=0;
                                                                                }
                                                                                else {
                                                                                    # 1220 "./neo-c.h"
                                                                                    # 1217 "./neo-c.h"
                                                                                    if(_if_conditional393=it_367==hash_366,                                                                                    _if_conditional393) {
                                                                                        # 1218 "./neo-c.h"
                                                                                        __result163__ = __result_obj__ = default_value;
                                                                                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                                                                        return __result163__;
                                                                                    }
                                                                                }
                                                                            }
                                                                            else {
                                                                                # 1222 "./neo-c.h"
                                                                                __result164__ = __result_obj__ = default_value;
                                                                                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                                                                return __result164__;
                                                                            }
                                                                        }
                                                                        # 1226 "./neo-c.h"
                                                                        __result165__ = __result_obj__ = default_value;
                                                                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                                                        return __result165__;
                                                                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool _if_conditional394;
unsigned int hash_380;
int it_381;
_Bool _while_condtional48;
_Bool _if_conditional398;
_Bool _if_conditional399;
_Bool _if_conditional400;
_Bool _if_conditional401;
_Bool _if_conditional402;
_Bool _if_conditional403;
_Bool _if_conditional404;
_Bool _if_conditional405;
_Bool same_key_exist_382;
char* it2_383;
_Bool _if_conditional406;
_Bool _if_conditional407;
struct map$2charphsVarph* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_380, 0, sizeof(unsigned int));
memset(&it_381, 0, sizeof(int));
memset(&same_key_exist_382, 0, sizeof(_Bool));
memset(&it2_383, 0, sizeof(char*));
                                                                        # 1445 "./neo-c.h"
                                                                        # 1442 "./neo-c.h"
                                                                        if(_if_conditional394=self->len*2>=self->size,                                                                        _if_conditional394) {
                                                                            # 1443 "./neo-c.h"
                                                                            map$2charphsVarph_rehash(self);
                                                                        }
                                                                        # 1445 "./neo-c.h"
                                                                        hash_380=string_get_hash_key(key)%self->size;
                                                                        # 1446 "./neo-c.h"
                                                                        it_381=hash_380;
                                                                        # 1504 "./neo-c.h"
                                                                        while(_while_condtional48=(_Bool)1,                                                                        _while_condtional48) {
                                                                            # 1502 "./neo-c.h"
                                                                            # 1449 "./neo-c.h"
                                                                            if(_if_conditional398=self->item_existance[it_381],                                                                            _if_conditional398) {
                                                                                # 1472 "./neo-c.h"
                                                                                # 1451 "./neo-c.h"
                                                                                if(_if_conditional399=string_equals(self->keys[it_381],key),                                                                                _if_conditional399) {
                                                                                    # 1462 "./neo-c.h"
                                                                                    # 1453 "./neo-c.h"
                                                                                    if(_if_conditional400=1,                                                                                    _if_conditional400) {
                                                                                        # 1454 "./neo-c.h"
                                                                                        self->keys[it_381] = come_decrement_ref_count2(self->keys[it_381], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        # 1455 "./neo-c.h"
                                                                                        list$1charp_remove(self->key_list,self->keys[it_381]);
                                                                                        # 1456 "./neo-c.h"
                                                                                        self->keys[it_381]=(char*)come_increment_ref_count(key);
                                                                                    }
                                                                                    else {
                                                                                        # 1459 "./neo-c.h"
                                                                                        list$1charp_remove(self->key_list,self->keys[it_381]);
                                                                                        # 1460 "./neo-c.h"
                                                                                        self->keys[it_381]=key;
                                                                                    }
                                                                                    # 1469 "./neo-c.h"
                                                                                    # 1462 "./neo-c.h"
                                                                                    if(_if_conditional401=1,                                                                                    _if_conditional401) {
                                                                                        # 1463 "./neo-c.h"
                                                                                        come_call_finalizer3(self->items[it_381],sVar_finalize, 0, 0, 0, 0, (void*)0);
                                                                                        # 1464 "./neo-c.h"
                                                                                        self->items[it_381]=(struct sVar*)come_increment_ref_count(item);
                                                                                    }
                                                                                    else {
                                                                                        # 1467 "./neo-c.h"
                                                                                        self->items[it_381]=item;
                                                                                    }
                                                                                    # 1469 "./neo-c.h"
                                                                                    break;
                                                                                }
                                                                                # 1472 "./neo-c.h"
                                                                                it_381++;
                                                                                # 1482 "./neo-c.h"
                                                                                # 1474 "./neo-c.h"
                                                                                if(_if_conditional402=it_381>=self->size,                                                                                _if_conditional402) {
                                                                                    # 1475 "./neo-c.h"
                                                                                    it_381=0;
                                                                                }
                                                                                else {
                                                                                    # 1482 "./neo-c.h"
                                                                                    # 1477 "./neo-c.h"
                                                                                    if(_if_conditional403=it_381==hash_380,                                                                                    _if_conditional403) {
                                                                                        # 1478 "./neo-c.h"
                                                                                        printf("unexpected error in map.insert\n");
                                                                                        # 1479 "./neo-c.h"
                                                                                        stackframe();
                                                                                        # 1480 "./neo-c.h"
                                                                                        exit(2);
                                                                                    }
                                                                                }
                                                                            }
                                                                            else {
                                                                                # 1484 "./neo-c.h"
                                                                                self->item_existance[it_381]=(_Bool)1;
                                                                                # 1491 "./neo-c.h"
                                                                                # 1485 "./neo-c.h"
                                                                                if(_if_conditional404=1,                                                                                _if_conditional404) {
                                                                                    # 1486 "./neo-c.h"
                                                                                    self->keys[it_381]=(char*)come_increment_ref_count(key);
                                                                                }
                                                                                else {
                                                                                    # 1489 "./neo-c.h"
                                                                                    self->keys[it_381]=key;
                                                                                }
                                                                                # 1498 "./neo-c.h"
                                                                                # 1491 "./neo-c.h"
                                                                                if(_if_conditional405=1,                                                                                _if_conditional405) {
                                                                                    # 1492 "./neo-c.h"
                                                                                    self->items[it_381]=(struct sVar*)come_increment_ref_count(item);
                                                                                }
                                                                                else {
                                                                                    # 1495 "./neo-c.h"
                                                                                    self->items[it_381]=item;
                                                                                }
                                                                                # 1498 "./neo-c.h"
                                                                                self->len++;
                                                                                # 1500 "./neo-c.h"
                                                                                break;
                                                                            }
                                                                        }
                                                                        # 1504 "./neo-c.h"
                                                                        same_key_exist_382=(_Bool)0;
                                                                        # 1512 "./neo-c.h"
                                                                        for(                                                                        it2_383=list$1charp_begin(self->key_list);                                                                        !list$1charp_end(self->key_list);                                                                        it2_383=list$1charp_next(self->key_list)                                                                        ){
                                                                            # 1510 "./neo-c.h"
                                                                            # 1507 "./neo-c.h"
                                                                            if(_if_conditional406=string_equals(it2_383,key),                                                                            _if_conditional406) {
                                                                                # 1508 "./neo-c.h"
                                                                                same_key_exist_382=(_Bool)1;
                                                                            }
                                                                        }
                                                                        # 1516 "./neo-c.h"
                                                                        # 1512 "./neo-c.h"
                                                                        if(_if_conditional407=!same_key_exist_382,                                                                        _if_conditional407) {
                                                                            # 1513 "./neo-c.h"
                                                                            list$1charp_push_back(self->key_list,key);
                                                                        }
                                                                        # 1516 "./neo-c.h"
                                                                        __result166__ = __result_obj__ = self;
                                                                        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                                        come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                                                        return __result166__;
                                                                        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                                        come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
int size_369;
void* right_value509;
char** keys_370;
void* right_value510;
struct sVar** items_371;
void* right_value511;
_Bool* item_existance_372;
int len_373;
char* it_374;
struct sVar* default_value_375;
struct sVar* it2_376;
unsigned int hash_377;
int n_378;
_Bool _while_condtional47;
_Bool _if_conditional395;
_Bool _if_conditional396;
_Bool _if_conditional397;
struct sVar* default_value_379;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_369, 0, sizeof(int));
right_value509 = (void*)0;
memset(&keys_370, 0, sizeof(char**));
right_value510 = (void*)0;
memset(&items_371, 0, sizeof(struct sVar**));
right_value511 = (void*)0;
memset(&item_existance_372, 0, sizeof(_Bool*));
memset(&len_373, 0, sizeof(int));
memset(&it_374, 0, sizeof(char*));
memset(&default_value_375, 0, sizeof(struct sVar*));
memset(&it2_376, 0, sizeof(struct sVar*));
memset(&hash_377, 0, sizeof(unsigned int));
memset(&n_378, 0, sizeof(int));
memset(&default_value_379, 0, sizeof(struct sVar*));
                                                                                # 1312 "./neo-c.h"
                                                                                size_369=self->size*10;
                                                                                # 1313 "./neo-c.h"
                                                                                keys_370=(char**)come_increment_ref_count(((char**)(right_value509=(char**)come_calloc(1, sizeof(char*)*(1*(size_369)), "./neo-c.h", 1313, "char*%"))));
                                                                                right_value509 = come_decrement_ref_count2(right_value509, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                # 1314 "./neo-c.h"
                                                                                items_371=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value510=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_369)), "./neo-c.h", 1314, "sVar*%"))));
                                                                                come_call_finalizer3(right_value510,sVar_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                # 1315 "./neo-c.h"
                                                                                item_existance_372=(_Bool*)come_increment_ref_count(((_Bool*)(right_value511=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_369)), "./neo-c.h", 1315, "bool"))));
                                                                                right_value511 = come_decrement_ref_count2(right_value511, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                # 1317 "./neo-c.h"
                                                                                len_373=0;
                                                                                # 1352 "./neo-c.h"
                                                                                for(                                                                                it_374=map$2charphsVarph_begin(self);                                                                                !map$2charphsVarph_end(self);                                                                                it_374=map$2charphsVarph_next(self)                                                                                ){
                                                                                    # 1320 "./neo-c.h"
                                                                                    # 1321 "./neo-c.h"
                                                                                    memset(&default_value_375,0,sizeof(struct sVar*));
                                                                                    # 1322 "./neo-c.h"
                                                                                    it2_376=map$2charphsVarph_at(self,it_374,default_value_375);
                                                                                    # 1323 "./neo-c.h"
                                                                                    hash_377=string_get_hash_key(it_374)%size_369;
                                                                                    # 1324 "./neo-c.h"
                                                                                    n_378=hash_377;
                                                                                    # 1350 "./neo-c.h"
                                                                                    while(_while_condtional47=(_Bool)1,                                                                                    _while_condtional47) {
                                                                                        # 1349 "./neo-c.h"
                                                                                        # 1327 "./neo-c.h"
                                                                                        if(_if_conditional395=item_existance_372[n_378],                                                                                        _if_conditional395) {
                                                                                            # 1329 "./neo-c.h"
                                                                                            n_378++;
                                                                                            # 1339 "./neo-c.h"
                                                                                            # 1331 "./neo-c.h"
                                                                                            if(_if_conditional396=n_378>=size_369,                                                                                            _if_conditional396) {
                                                                                                # 1332 "./neo-c.h"
                                                                                                n_378=0;
                                                                                            }
                                                                                            else {
                                                                                                # 1339 "./neo-c.h"
                                                                                                # 1334 "./neo-c.h"
                                                                                                if(_if_conditional397=n_378==hash_377,                                                                                                _if_conditional397) {
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
                                                                                            item_existance_372[n_378]=(_Bool)1;
                                                                                            # 1342 "./neo-c.h"
                                                                                            keys_370[n_378]=it_374;
                                                                                            # 1343 "./neo-c.h"
                                                                                            # 1344 "./neo-c.h"
                                                                                            items_371[n_378]=map$2charphsVarph_at(self,it_374,default_value_379);
                                                                                            # 1346 "./neo-c.h"
                                                                                            len_373++;
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
                                                                                self->keys=keys_370;
                                                                                # 1357 "./neo-c.h"
                                                                                self->items=items_371;
                                                                                # 1358 "./neo-c.h"
                                                                                self->item_existance=item_existance_372;
                                                                                # 1360 "./neo-c.h"
                                                                                self->size=size_369;
                                                                                # 1361 "./neo-c.h"
                                                                                self->len=len_373;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_384;
_Bool _if_conditional408;
_Bool _if_conditional409;
int i_385;
_Bool _if_conditional410;
_Bool _if_conditional411;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_384, 0, sizeof(int));
memset(&i_385, 0, sizeof(int));
                                                                # 1112 "./neo-c.h"
                                                                for(                                                                i_384=0;                                                                i_384<self->size;                                                                i_384++                                                                ){
                                                                    # 1111 "./neo-c.h"
                                                                    # 1106 "./neo-c.h"
                                                                    if(_if_conditional408=self->item_existance[i_384],                                                                    _if_conditional408) {
                                                                        # 1110 "./neo-c.h"
                                                                        # 1107 "./neo-c.h"
                                                                        if(_if_conditional409=1,                                                                        _if_conditional409) {
                                                                            # 1108 "./neo-c.h"
                                                                            come_call_finalizer3(self->items[i_384],sVar_finalize, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                    }
                                                                }
                                                                # 1112 "./neo-c.h"
                                                                come_free((char*)self->items);
                                                                # 1121 "./neo-c.h"
                                                                for(                                                                i_385=0;                                                                i_385<self->size;                                                                i_385++                                                                ){
                                                                    # 1120 "./neo-c.h"
                                                                    # 1115 "./neo-c.h"
                                                                    if(_if_conditional410=self->item_existance[i_385],                                                                    _if_conditional410) {
                                                                        # 1119 "./neo-c.h"
                                                                        # 1116 "./neo-c.h"
                                                                        if(_if_conditional411=1,                                                                        _if_conditional411) {
                                                                            # 1117 "./neo-c.h"
                                                                            self->keys[i_385] = come_decrement_ref_count2(self->keys[i_385], (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

_Bool is_type_name(char* buf, struct sInfo* info){
void* __result_obj__;
struct sClass* klass_395;
struct sType* type_399;
struct sClass* generics_class_400;
void* right_value530;
_Bool generics_type_name_402;
void* right_value531;
_Bool mgenerics_type_name_403;
_Bool __result186__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&klass_395, 0, sizeof(struct sClass*));
memset(&type_399, 0, sizeof(struct sType*));
memset(&generics_class_400, 0, sizeof(struct sClass*));
right_value530 = (void*)0;
memset(&generics_type_name_402, 0, sizeof(_Bool));
right_value531 = (void*)0;
memset(&mgenerics_type_name_403, 0, sizeof(_Bool));
    # 1318 "05function.c"
    klass_395=map$2charphsClassphp_operator_load_element(info->classes,buf);
    # 1319 "05function.c"
    type_399=map$2charphsTypephp_operator_load_element(info->types,buf);
    # 1320 "05function.c"
    generics_class_400=map$2charphsClassphp_operator_load_element(info->generics_classes,buf);
    # 1321 "05function.c"
    generics_type_name_402=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(((char*)(right_value530=__builtin_string(buf)))));
    right_value530 = come_decrement_ref_count2(right_value530, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1322 "05function.c"
    mgenerics_type_name_403=list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value531=__builtin_string(buf)))));
    right_value531 = come_decrement_ref_count2(right_value531, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1324 "05function.c"
    __result186__ = generics_class_400||generics_type_name_402||mgenerics_type_name_403||klass_395||type_399||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"record")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"immutable")||charp_operator_equals(buf,"mutable")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__typeof__");
    return __result186__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_390;
unsigned int hash_391;
unsigned int it_392;
_Bool _while_condtional49;
_Bool _if_conditional427;
_Bool _if_conditional428;
struct sClass* __result176__;
_Bool _if_conditional436;
_Bool _if_conditional437;
struct sClass* __result177__;
struct sClass* __result178__;
struct sClass* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_390, 0, sizeof(struct sClass*));
memset(&hash_391, 0, sizeof(unsigned int));
memset(&it_392, 0, sizeof(unsigned int));
        # 1519 "./neo-c.h"
        # 1520 "./neo-c.h"
        memset(&default_value_390,0,sizeof(struct sClass*));
        # 1522 "./neo-c.h"
        hash_391=string_get_hash_key(((char*)key))%self->size;
        # 1523 "./neo-c.h"
        it_392=hash_391;
        # 1547 "./neo-c.h"
        while(_while_condtional49=(_Bool)1,        _while_condtional49) {
            # 1545 "./neo-c.h"
            # 1526 "./neo-c.h"
            if(_if_conditional427=self->item_existance[it_392],            _if_conditional427) {
                # 1533 "./neo-c.h"
                # 1528 "./neo-c.h"
                if(_if_conditional428=string_equals(self->keys[it_392],key),                _if_conditional428) {
                    # 1530 "./neo-c.h"
                    __result176__ = __result_obj__ = self->items[it_392];
                    come_call_finalizer3(default_value_390,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    return __result176__;
                }
                # 1533 "./neo-c.h"
                it_392++;
                # 1541 "./neo-c.h"
                # 1535 "./neo-c.h"
                if(_if_conditional436=it_392>=self->size,                _if_conditional436) {
                    # 1536 "./neo-c.h"
                    it_392=0;
                }
                else {
                    # 1541 "./neo-c.h"
                    # 1538 "./neo-c.h"
                    if(_if_conditional437=it_392==hash_391,                    _if_conditional437) {
                        # 1539 "./neo-c.h"
                        __result177__ = __result_obj__ = default_value_390;
                        come_call_finalizer3(default_value_390,sClass_finalize, 0, 0, 1, 0, (void*)0);
                        return __result177__;
                    }
                }
            }
            else {
                # 1543 "./neo-c.h"
                __result178__ = __result_obj__ = default_value_390;
                come_call_finalizer3(default_value_390,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result178__;
            }
        }
        # 1547 "./neo-c.h"
        __result179__ = __result_obj__ = default_value_390;
        come_call_finalizer3(default_value_390,sClass_finalize, 0, 0, 1, 0, (void*)0);
        return __result179__;
        come_call_finalizer3(default_value_390,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional429;
_Bool _if_conditional430;
_Bool _if_conditional434;
_Bool _if_conditional435;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sClass_finalize"
                        # 0 "sClass_finalize"
                        if(_if_conditional429=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional429) {
                            # 0 "sClass_finalize"
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "sClass_finalize"
                        # 1 "sClass_finalize"
                        if(_if_conditional430=self!=((void*)0)&&self->mFields!=((void*)0),                        _if_conditional430) {
                            # 1 "sClass_finalize"
                            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        # 3 "sClass_finalize"
                        # 2 "sClass_finalize"
                        if(_if_conditional434=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                        _if_conditional434) {
                            # 2 "sClass_finalize"
                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 4 "sClass_finalize"
                        # 3 "sClass_finalize"
                        if(_if_conditional435=self!=((void*)0)&&self->mParentClassName!=((void*)0),                        _if_conditional435) {
                            # 3 "sClass_finalize"
                            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_393;
_Bool _while_condtional50;
struct list_item$1tuple2$2charphsTypephph* prev_it_394;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_393, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_394, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                # 114 "./neo-c.h"
                                it_393=self->head;
                                # 120 "./neo-c.h"
                                while(_while_condtional50=it_393!=((void*)0),                                _while_condtional50) {
                                    # 116 "./neo-c.h"
                                    prev_it_394=it_393;
                                    # 117 "./neo-c.h"
                                    it_393=it_393->next;
                                    # 118 "./neo-c.h"
                                    come_call_finalizer3(prev_it_394,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional431;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                                        # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                        if(_if_conditional431=self!=((void*)0)&&self->item!=((void*)0),                                        _if_conditional431) {
                                            # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional432;
_Bool _if_conditional433;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "tuple2$2charphsTypephp_finalize"
                                                # 0 "tuple2$2charphsTypephp_finalize"
                                                if(_if_conditional432=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional432) {
                                                    # 0 "tuple2$2charphsTypephp_finalize"
                                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                # 2 "tuple2$2charphsTypephp_finalize"
                                                # 1 "tuple2$2charphsTypephp_finalize"
                                                if(_if_conditional433=self!=((void*)0)&&self->v2!=((void*)0),                                                _if_conditional433) {
                                                    # 1 "tuple2$2charphsTypephp_finalize"
                                                    come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__;
struct sType* default_value_396;
unsigned int hash_397;
unsigned int it_398;
_Bool _while_condtional51;
_Bool _if_conditional438;
_Bool _if_conditional439;
struct sType* __result180__;
_Bool _if_conditional440;
_Bool _if_conditional441;
struct sType* __result181__;
struct sType* __result182__;
struct sType* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_396, 0, sizeof(struct sType*));
memset(&hash_397, 0, sizeof(unsigned int));
memset(&it_398, 0, sizeof(unsigned int));
        # 1519 "./neo-c.h"
        # 1520 "./neo-c.h"
        memset(&default_value_396,0,sizeof(struct sType*));
        # 1522 "./neo-c.h"
        hash_397=string_get_hash_key(((char*)key))%self->size;
        # 1523 "./neo-c.h"
        it_398=hash_397;
        # 1547 "./neo-c.h"
        while(_while_condtional51=(_Bool)1,        _while_condtional51) {
            # 1545 "./neo-c.h"
            # 1526 "./neo-c.h"
            if(_if_conditional438=self->item_existance[it_398],            _if_conditional438) {
                # 1533 "./neo-c.h"
                # 1528 "./neo-c.h"
                if(_if_conditional439=string_equals(self->keys[it_398],key),                _if_conditional439) {
                    # 1530 "./neo-c.h"
                    __result180__ = __result_obj__ = self->items[it_398];
                    come_call_finalizer3(default_value_396,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result180__;
                }
                # 1533 "./neo-c.h"
                it_398++;
                # 1541 "./neo-c.h"
                # 1535 "./neo-c.h"
                if(_if_conditional440=it_398>=self->size,                _if_conditional440) {
                    # 1536 "./neo-c.h"
                    it_398=0;
                }
                else {
                    # 1541 "./neo-c.h"
                    # 1538 "./neo-c.h"
                    if(_if_conditional441=it_398==hash_397,                    _if_conditional441) {
                        # 1539 "./neo-c.h"
                        __result181__ = __result_obj__ = default_value_396;
                        come_call_finalizer3(default_value_396,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result181__;
                    }
                }
            }
            else {
                # 1543 "./neo-c.h"
                __result182__ = __result_obj__ = default_value_396;
                come_call_finalizer3(default_value_396,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result182__;
            }
        }
        # 1547 "./neo-c.h"
        __result183__ = __result_obj__ = default_value_396;
        come_call_finalizer3(default_value_396,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result183__;
        come_call_finalizer3(default_value_396,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
void* __result_obj__;
char* it_401;
_Bool _if_conditional442;
_Bool __result184__;
_Bool __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_401, 0, sizeof(char*));
        # 733 "./neo-c.h"
        for(        it_401=list$1charph_begin(self);        !list$1charph_end(self);        it_401=list$1charph_next(self)        ){
            # 731 "./neo-c.h"
            # 728 "./neo-c.h"
            if(_if_conditional442=string_operator_equals(it_401,item),            _if_conditional442) {
                # 729 "./neo-c.h"
                __result184__ = (_Bool)1;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result184__;
            }
        }
        # 733 "./neo-c.h"
        __result185__ = (_Bool)0;
        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result185__;
        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
struct sFun* caller_fun_404;
int caller_line_405;
char* caller_sname_406;
char* last_code_407;
char* __dec_obj103;
char* last_code2_408;
char* __dec_obj104;
char* last_code3_409;
char* __dec_obj105;
void* right_value532;
char* sname_top_410;
int sline_top_411;
_Bool _if_conditional443;
struct sFun* funX_412;
_Bool _if_conditional444;
_Bool __result187__;
void* right_value533;
struct sType* result_type_413;
void* right_value534;
void* right_value535;
struct list$1sTypeph* param_types_414;
struct list$1sTypeph* o2_saved_415;
struct sType* it_418;
void* right_value536;
void* right_value537;
struct sType* param_type_421;
void* right_value538;
void* right_value539;
struct list$1charph* param_names_422;
void* right_value540;
struct list$1charph* param_default_parametors_423;
char* p_424;
int sline_425;
char* sname_426;
char* head_427;
struct buffer* source_428;
void* right_value541;
struct buffer* __dec_obj106;
struct sType* generics_type_saved_429;
void* right_value542;
struct sType* __dec_obj107;
struct list$1charph* method_generics_type_names_430;
void* right_value543;
void* right_value544;
struct list$1charph* __dec_obj108;
struct list$1charph* o2_saved_431;
char* it_432;
void* right_value545;
void* right_value546;
struct list$1charph* __dec_obj109;
char* __dec_obj110;
void* right_value547;
struct sBlock* block_433;
struct buffer* __dec_obj111;
char* __dec_obj112;
_Bool var_args_434;
void* right_value548;
void* right_value549;
void* right_value550;
void* right_value551;
void* right_value552;
struct sFun* fun_435;
void* right_value553;
void* right_value554;
void* right_value555;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* right_value559;
struct sNode* node_437;
_Bool _if_conditional455;
_Bool __result197__;
struct sType* __dec_obj115;
struct list$1charph* __dec_obj116;
struct list$1charph* __dec_obj117;
void* right_value560;
char* __dec_obj118;
char* __dec_obj119;
char* __dec_obj120;
char* __dec_obj121;
_Bool __result198__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&caller_fun_404, 0, sizeof(struct sFun*));
memset(&caller_line_405, 0, sizeof(int));
memset(&caller_sname_406, 0, sizeof(char*));
memset(&last_code_407, 0, sizeof(char*));
memset(&last_code2_408, 0, sizeof(char*));
memset(&last_code3_409, 0, sizeof(char*));
right_value532 = (void*)0;
memset(&sname_top_410, 0, sizeof(char*));
memset(&sline_top_411, 0, sizeof(int));
memset(&funX_412, 0, sizeof(struct sFun*));
right_value533 = (void*)0;
memset(&result_type_413, 0, sizeof(struct sType*));
right_value534 = (void*)0;
right_value535 = (void*)0;
memset(&param_types_414, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_415, 0, sizeof(struct list$1sTypeph*));
memset(&it_418, 0, sizeof(struct sType*));
right_value536 = (void*)0;
right_value537 = (void*)0;
memset(&param_type_421, 0, sizeof(struct sType*));
right_value538 = (void*)0;
right_value539 = (void*)0;
memset(&param_names_422, 0, sizeof(struct list$1charph*));
right_value540 = (void*)0;
memset(&param_default_parametors_423, 0, sizeof(struct list$1charph*));
memset(&p_424, 0, sizeof(char*));
memset(&sline_425, 0, sizeof(int));
memset(&sname_426, 0, sizeof(char*));
memset(&head_427, 0, sizeof(char*));
memset(&source_428, 0, sizeof(struct buffer*));
right_value541 = (void*)0;
memset(&generics_type_saved_429, 0, sizeof(struct sType*));
right_value542 = (void*)0;
memset(&method_generics_type_names_430, 0, sizeof(struct list$1charph*));
right_value543 = (void*)0;
right_value544 = (void*)0;
memset(&o2_saved_431, 0, sizeof(struct list$1charph*));
memset(&it_432, 0, sizeof(char*));
right_value545 = (void*)0;
right_value546 = (void*)0;
right_value547 = (void*)0;
memset(&block_433, 0, sizeof(struct sBlock*));
memset(&var_args_434, 0, sizeof(_Bool));
right_value548 = (void*)0;
right_value549 = (void*)0;
right_value550 = (void*)0;
right_value551 = (void*)0;
right_value552 = (void*)0;
memset(&fun_435, 0, sizeof(struct sFun*));
right_value553 = (void*)0;
right_value554 = (void*)0;
right_value555 = (void*)0;
right_value559 = (void*)0;
memset(&node_437, 0, sizeof(struct sNode*));
right_value560 = (void*)0;
    # 1329 "05function.c"
    caller_fun_404=info->caller_fun;
    # 1330 "05function.c"
    info->caller_fun=info->come_fun;
    # 1331 "05function.c"
    caller_line_405=info->caller_line;
    # 1332 "05function.c"
    info->caller_line=info->sline;
    # 1333 "05function.c"
    caller_sname_406=info->caller_sname;
    # 1334 "05function.c"
    info->caller_sname=info->sname;
    # 1336 "05function.c"
    last_code_407=(char*)come_increment_ref_count(info->module->mLastCode);
    # 1337 "05function.c"
    __dec_obj103=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1338 "05function.c"
    last_code2_408=(char*)come_increment_ref_count(info->module->mLastCode2);
    # 1339 "05function.c"
    __dec_obj104=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1340 "05function.c"
    last_code3_409=(char*)come_increment_ref_count(info->module->mLastCode3);
    # 1341 "05function.c"
    __dec_obj105=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1343 "05function.c"
    sname_top_410=(char*)come_increment_ref_count(((char*)(right_value532=__builtin_string(info->sname))));
    right_value532 = come_decrement_ref_count2(right_value532, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1344 "05function.c"
    sline_top_411=info->sline;
    # 1349 "05function.c"
    # 1346 "05function.c"
    if(generics_type->mNoSolvedGenericsType->v1) {
        # 1347 "05function.c"
        generics_type=generics_type->mNoSolvedGenericsType->v1;
    }
    # 1349 "05function.c"
    funX_412=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    # 1354 "05function.c"
    # 1350 "05function.c"
    if(funX_412) {
        # 1351 "05function.c"
        __result187__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_407 = come_decrement_ref_count2(last_code_407, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_408 = come_decrement_ref_count2(last_code2_408, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_409 = come_decrement_ref_count2(last_code3_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_410 = come_decrement_ref_count2(sname_top_410, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result187__;
    }
    # 1354 "05function.c"
    result_type_413=(struct sType*)come_increment_ref_count(((struct sType*)(right_value533=solve_generics(generics_fun->mResultType,generics_type,info))));
    come_call_finalizer3(right_value533,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 1356 "05function.c"
    param_types_414=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value535=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value534=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1356, "list$1sTypeph"))))))));
    come_call_finalizer3(right_value534,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value535,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1364 "05function.c"
    for(    o2_saved_415=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_418=list$1sTypeph_begin((o2_saved_415));    !list$1sTypeph_end((o2_saved_415));    it_418=list$1sTypeph_next((o2_saved_415))    ){
        # 1358 "05function.c"
        param_type_421=(struct sType*)come_increment_ref_count(((struct sType*)(right_value537=solve_generics(((struct sType*)(right_value536=sType_clone(it_418))),generics_type,info))));
        come_call_finalizer3(right_value536,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value537,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 1360 "05function.c"
        param_type_421->mFunctionParam=(_Bool)1;
        # 1362 "05function.c"
        list$1sTypeph_add(param_types_414,(struct sType*)come_increment_ref_count(((struct sType*)(right_value538=sType_clone(param_type_421)))));
        come_call_finalizer3(right_value538,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(param_type_421,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_415,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    # 1364 "05function.c"
    param_names_422=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value539=list$1charphp_clone(generics_fun->mParamNames))));
    come_call_finalizer3(right_value539,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1366 "05function.c"
    param_default_parametors_423=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value540=list$1charphp_clone(generics_fun->mParamDefaultParametors))));
    come_call_finalizer3(right_value540,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1368 "05function.c"
    p_424=info->p;
    # 1369 "05function.c"
    sline_425=info->sline;
    # 1370 "05function.c"
    sname_426=(char*)come_increment_ref_count(info->sname);
    # 1371 "05function.c"
    head_427=info->head;
    # 1372 "05function.c"
    source_428=(struct buffer*)come_increment_ref_count(info->source);
    # 1374 "05function.c"
    __dec_obj106=info->source;
    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value541=string_to_buffer(generics_fun->mBlock))));
    come_call_finalizer3(__dec_obj106,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value541,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1375 "05function.c"
    info->p=info->source->buf;
    # 1376 "05function.c"
    info->head=info->source->buf;
    # 1378 "05function.c"
    generics_type_saved_429=(struct sType*)come_increment_ref_count(info->generics_type);
    # 1379 "05function.c"
    __dec_obj107=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value542=sType_clone(generics_type))));
    come_call_finalizer3(__dec_obj107,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value542,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 1381 "05function.c"
    method_generics_type_names_430=info->method_generics_type_names;
    # 1383 "05function.c"
    __dec_obj108=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value544=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value543=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1383, "list$1charph"))))))));
    come_call_finalizer3(__dec_obj108,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value543,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value544,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1388 "05function.c"
    for(    o2_saved_431=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_432=list$1charph_begin((o2_saved_431));    !list$1charph_end((o2_saved_431));    it_432=list$1charph_next((o2_saved_431))    ){
        # 1385 "05function.c"
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value545=string_clone(it_432)))));
        right_value545 = come_decrement_ref_count2(right_value545, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    come_call_finalizer3(o2_saved_431,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    # 1388 "05function.c"
    list$1charph_reset(info->generics_type_names);
    # 1389 "05function.c"
    __dec_obj109=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value546=list$1charphp_clone(generics_fun->mGenericsTypeNames))));
    come_call_finalizer3(__dec_obj109,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value546,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1391 "05function.c"
    info->sline=generics_fun->mGenericsSLine;
    # 1392 "05function.c"
    __dec_obj110=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1394 "05function.c"
    block_433=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value547=parse_block(info,(_Bool)0,(_Bool)0))));
    come_call_finalizer3(right_value547,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
    # 1396 "05function.c"
    info->head=head_427;
    # 1397 "05function.c"
    __dec_obj111=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_428);
    come_call_finalizer3(__dec_obj111,buffer_finalize, 0, 0, 0, 0, (void*)0);
    # 1398 "05function.c"
    info->p=p_424;
    # 1399 "05function.c"
    info->sline=sline_425;
    # 1400 "05function.c"
    __dec_obj112=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_426);
    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1402 "05function.c"
    result_type_413->mInline=(_Bool)0;
    # 1404 "05function.c"
    var_args_434=generics_fun->mVarArgs;
    # 1408 "05function.c"
    fun_435=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value552=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value548=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1405, "sFun")))),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_413),(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value549=list$1sTypephp_clone(param_types_414)))),(struct list$1charph*)come_increment_ref_count(param_names_422),(struct list$1charph*)come_increment_ref_count(param_default_parametors_423),(_Bool)0,var_args_434,(struct sBlock*)come_increment_ref_count(block_433),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value550=__builtin_string("")))),(char*)come_increment_ref_count(((char*)(right_value551=__builtin_string("")))),info))));
    come_call_finalizer3(right_value548,sFun_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value549,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    right_value550 = come_decrement_ref_count2(right_value550, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value551 = come_decrement_ref_count2(right_value551, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value552,sFun_finalize, 0, 1, 0, 0, __result_obj__);
    # 1410 "05function.c"
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value553=string_clone(fun_name)))),(struct sFun*)come_increment_ref_count(fun_435));
    right_value553 = come_decrement_ref_count2(right_value553, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1412 "05function.c"
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1412, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sFunNode*)(right_value555=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value554=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1412, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_435),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sFunNode_finalize;
    _inf_value2->clone=(void*)sFunNode_clone;
    _inf_value2->compile=(void*)sFunNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sFunNode_terminated;
    _inf_value2->kind=(void*)sFunNode_kind;
    node_437=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value559=_inf_value2)));
    come_call_finalizer3(right_value554,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value555,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value559) { right_value559 = come_decrement_ref_count2(right_value559, ((struct sNode*)right_value559)->finalize, ((struct sNode*)right_value559)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1418 "05function.c"
    # 1414 "05function.c"
    if(_if_conditional455=!node_compile(node_437,info),    _if_conditional455) {
        # 1416 "05function.c"
        __result197__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_407 = come_decrement_ref_count2(last_code_407, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_408 = come_decrement_ref_count2(last_code2_408, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_409 = come_decrement_ref_count2(last_code3_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_410 = come_decrement_ref_count2(sname_top_410, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_413,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_414,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_422,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_423,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_426 = come_decrement_ref_count2(sname_426, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_428,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(generics_type_saved_429,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_433,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_435,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_437) { node_437 = come_decrement_ref_count2(node_437, ((struct sNode*)node_437)->finalize, ((struct sNode*)node_437)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result197__;
    }
    # 1418 "05function.c"
    __dec_obj115=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_429);
    come_call_finalizer3(__dec_obj115,sType_finalize, 0, 0, 0, 0, (void*)0);
    # 1419 "05function.c"
    come_call_finalizer3(info->method_generics_type_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    # 1420 "05function.c"
    __dec_obj116=method_generics_type_names_430;
    __dec_obj117=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_430);
    come_call_finalizer3(__dec_obj117,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    # 1422 "05function.c"
    list$1charph_reset(info->generics_type_names);
    # 1424 "05function.c"
    __dec_obj118=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value560=__builtin_string(sname_top_410))));
    __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value560 = come_decrement_ref_count2(right_value560, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1425 "05function.c"
    info->sline=sline_top_411;
    # 1427 "05function.c"
    __dec_obj119=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_407);
    __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1428 "05function.c"
    __dec_obj120=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_408);
    __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1429 "05function.c"
    __dec_obj121=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_409);
    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1431 "05function.c"
    info->caller_fun=caller_fun_404;
    # 1432 "05function.c"
    info->caller_line=caller_line_405;
    # 1433 "05function.c"
    info->caller_sname=caller_sname_406;
    # 1435 "05function.c"
    __result198__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_407 = come_decrement_ref_count2(last_code_407, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_408 = come_decrement_ref_count2(last_code2_408, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_409 = come_decrement_ref_count2(last_code3_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_410 = come_decrement_ref_count2(sname_top_410, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_413,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_414,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_422,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_423,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_426 = come_decrement_ref_count2(sname_426, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_428,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(generics_type_saved_429,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_433,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_435,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_437) { node_437 = come_decrement_ref_count2(node_437, ((struct sNode*)node_437)->finalize, ((struct sNode*)node_437)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result198__;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_407 = come_decrement_ref_count2(last_code_407, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_408 = come_decrement_ref_count2(last_code2_408, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_409 = come_decrement_ref_count2(last_code3_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_410 = come_decrement_ref_count2(sname_top_410, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_413,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_414,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_422,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_423,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_426 = come_decrement_ref_count2(sname_426, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_428,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(generics_type_saved_429,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_433,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_435,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_437) { node_437 = come_decrement_ref_count2(node_437, ((struct sNode*)node_437)->finalize, ((struct sNode*)node_437)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional445;
struct sType* result_416;
struct sType* __result188__;
_Bool _if_conditional446;
struct sType* __result189__;
struct sType* result_417;
struct sType* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_416, 0, sizeof(struct sType*));
memset(&result_417, 0, sizeof(struct sType*));
        # 281 "./neo-c.h"
        # 276 "./neo-c.h"
        if(_if_conditional445=self==((void*)0),        _if_conditional445) {
            # 277 "./neo-c.h"
            # 278 "./neo-c.h"
            memset(&result_416,0,sizeof(struct sType*));
            # 279 "./neo-c.h"
            __result188__ = __result_obj__ = result_416;
            return __result188__;
        }
        # 281 "./neo-c.h"
        self->it=self->head;
        # 287 "./neo-c.h"
        # 283 "./neo-c.h"
        if(self->it) {
            # 284 "./neo-c.h"
            __result189__ = __result_obj__ = self->it->item;
            return __result189__;
        }
        # 287 "./neo-c.h"
        # 288 "./neo-c.h"
        memset(&result_417,0,sizeof(struct sType*));
        # 289 "./neo-c.h"
        __result190__ = __result_obj__ = result_417;
        return __result190__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result191__;
memset(&__result_obj__, 0, sizeof(void*));
        # 311 "./neo-c.h"
        __result191__ = self==((void*)0)||self->it==((void*)0);
        return __result191__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional447;
struct sType* result_419;
struct sType* __result192__;
_Bool _if_conditional448;
struct sType* __result193__;
struct sType* result_420;
struct sType* __result194__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_419, 0, sizeof(struct sType*));
memset(&result_420, 0, sizeof(struct sType*));
        # 299 "./neo-c.h"
        # 293 "./neo-c.h"
        if(_if_conditional447=self==((void*)0)||self->it==((void*)0),        _if_conditional447) {
            # 294 "./neo-c.h"
            # 295 "./neo-c.h"
            memset(&result_419,0,sizeof(struct sType*));
            # 296 "./neo-c.h"
            __result192__ = __result_obj__ = result_419;
            return __result192__;
        }
        # 299 "./neo-c.h"
        self->it=self->it->next;
        # 305 "./neo-c.h"
        # 301 "./neo-c.h"
        if(self->it) {
            # 302 "./neo-c.h"
            __result193__ = __result_obj__ = self->it->item;
            return __result193__;
        }
        # 305 "./neo-c.h"
        # 306 "./neo-c.h"
        memset(&result_420,0,sizeof(struct sType*));
        # 307 "./neo-c.h"
        __result194__ = __result_obj__ = result_420;
        return __result194__;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
void* __result_obj__;
struct sFun* caller_fun_438;
int caller_line_439;
char* caller_sname_440;
char* last_code_441;
char* __dec_obj122;
char* last_code2_442;
char* __dec_obj123;
char* last_code3_443;
char* __dec_obj124;
void* right_value561;
char* sname_top_444;
int sline_top_445;
struct sFun* funX_446;
_Bool _if_conditional456;
_Bool __result199__;
void* right_value562;
struct sType* result_type_447;
void* right_value563;
void* right_value564;
struct list$1sTypeph* param_types_448;
struct list$1sTypeph* o2_saved_449;
struct sType* it_450;
void* right_value565;
void* right_value566;
struct sType* param_type_451;
void* right_value567;
void* right_value568;
struct list$1charph* param_names_452;
void* right_value569;
struct list$1charph* param_default_parametors_453;
char* p_454;
int sline_455;
char* sname_456;
char* head_457;
struct buffer* source_458;
void* right_value570;
struct buffer* __dec_obj125;
struct list$1charph* method_generics_type_names_459;
void* right_value571;
void* right_value572;
struct list$1charph* __dec_obj126;
struct list$1charph* o2_saved_460;
char* it_461;
void* right_value573;
void* right_value574;
struct list$1charph* __dec_obj127;
char* __dec_obj128;
void* right_value575;
struct sBlock* block_462;
struct buffer* __dec_obj129;
char* __dec_obj130;
_Bool var_args_463;
void* right_value576;
void* right_value577;
void* right_value578;
void* right_value579;
void* right_value580;
struct sFun* fun_464;
void* right_value581;
void* right_value582;
void* right_value583;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* right_value587;
struct sNode* node_466;
_Bool _if_conditional463;
_Bool __result202__;
struct list$1charph* __dec_obj133;
struct list$1charph* __dec_obj134;
void* right_value588;
char* __dec_obj135;
char* __dec_obj136;
char* __dec_obj137;
char* __dec_obj138;
_Bool __result203__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&caller_fun_438, 0, sizeof(struct sFun*));
memset(&caller_line_439, 0, sizeof(int));
memset(&caller_sname_440, 0, sizeof(char*));
memset(&last_code_441, 0, sizeof(char*));
memset(&last_code2_442, 0, sizeof(char*));
memset(&last_code3_443, 0, sizeof(char*));
right_value561 = (void*)0;
memset(&sname_top_444, 0, sizeof(char*));
memset(&sline_top_445, 0, sizeof(int));
memset(&funX_446, 0, sizeof(struct sFun*));
right_value562 = (void*)0;
memset(&result_type_447, 0, sizeof(struct sType*));
right_value563 = (void*)0;
right_value564 = (void*)0;
memset(&param_types_448, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_449, 0, sizeof(struct list$1sTypeph*));
memset(&it_450, 0, sizeof(struct sType*));
right_value565 = (void*)0;
right_value566 = (void*)0;
memset(&param_type_451, 0, sizeof(struct sType*));
right_value567 = (void*)0;
right_value568 = (void*)0;
memset(&param_names_452, 0, sizeof(struct list$1charph*));
right_value569 = (void*)0;
memset(&param_default_parametors_453, 0, sizeof(struct list$1charph*));
memset(&p_454, 0, sizeof(char*));
memset(&sline_455, 0, sizeof(int));
memset(&sname_456, 0, sizeof(char*));
memset(&head_457, 0, sizeof(char*));
memset(&source_458, 0, sizeof(struct buffer*));
right_value570 = (void*)0;
memset(&method_generics_type_names_459, 0, sizeof(struct list$1charph*));
right_value571 = (void*)0;
right_value572 = (void*)0;
memset(&o2_saved_460, 0, sizeof(struct list$1charph*));
memset(&it_461, 0, sizeof(char*));
right_value573 = (void*)0;
right_value574 = (void*)0;
right_value575 = (void*)0;
memset(&block_462, 0, sizeof(struct sBlock*));
memset(&var_args_463, 0, sizeof(_Bool));
right_value576 = (void*)0;
right_value577 = (void*)0;
right_value578 = (void*)0;
right_value579 = (void*)0;
right_value580 = (void*)0;
memset(&fun_464, 0, sizeof(struct sFun*));
right_value581 = (void*)0;
right_value582 = (void*)0;
right_value583 = (void*)0;
right_value587 = (void*)0;
memset(&node_466, 0, sizeof(struct sNode*));
right_value588 = (void*)0;
    # 1440 "05function.c"
    caller_fun_438=info->caller_fun;
    # 1441 "05function.c"
    info->caller_fun=info->come_fun;
    # 1442 "05function.c"
    caller_line_439=info->caller_line;
    # 1443 "05function.c"
    info->caller_line=info->sline;
    # 1444 "05function.c"
    caller_sname_440=info->caller_sname;
    # 1445 "05function.c"
    info->caller_sname=info->sname;
    # 1447 "05function.c"
    last_code_441=(char*)come_increment_ref_count(info->module->mLastCode);
    # 1448 "05function.c"
    __dec_obj122=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1449 "05function.c"
    last_code2_442=(char*)come_increment_ref_count(info->module->mLastCode2);
    # 1450 "05function.c"
    __dec_obj123=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1451 "05function.c"
    last_code3_443=(char*)come_increment_ref_count(info->module->mLastCode3);
    # 1452 "05function.c"
    __dec_obj124=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1454 "05function.c"
    sname_top_444=(char*)come_increment_ref_count(((char*)(right_value561=__builtin_string(info->sname))));
    right_value561 = come_decrement_ref_count2(right_value561, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1455 "05function.c"
    sline_top_445=info->sline;
    # 1457 "05function.c"
    funX_446=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    # 1462 "05function.c"
    # 1458 "05function.c"
    if(funX_446) {
        # 1459 "05function.c"
        __result199__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_441 = come_decrement_ref_count2(last_code_441, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_442 = come_decrement_ref_count2(last_code2_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_443 = come_decrement_ref_count2(last_code3_443, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_444 = come_decrement_ref_count2(sname_top_444, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result199__;
    }
    # 1462 "05function.c"
    result_type_447=(struct sType*)come_increment_ref_count(((struct sType*)(right_value562=solve_method_generics(generics_fun->mResultType,info))));
    come_call_finalizer3(right_value562,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 1464 "05function.c"
    param_types_448=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value564=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value563=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1464, "list$1sTypeph"))))))));
    come_call_finalizer3(right_value563,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value564,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1472 "05function.c"
    for(    o2_saved_449=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_450=list$1sTypeph_begin((o2_saved_449));    !list$1sTypeph_end((o2_saved_449));    it_450=list$1sTypeph_next((o2_saved_449))    ){
        # 1466 "05function.c"
        param_type_451=(struct sType*)come_increment_ref_count(((struct sType*)(right_value566=solve_method_generics(((struct sType*)(right_value565=sType_clone(it_450))),info))));
        come_call_finalizer3(right_value565,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value566,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 1468 "05function.c"
        param_type_451->mFunctionParam=(_Bool)1;
        # 1470 "05function.c"
        list$1sTypeph_add(param_types_448,(struct sType*)come_increment_ref_count(((struct sType*)(right_value567=sType_clone(param_type_451)))));
        come_call_finalizer3(right_value567,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(param_type_451,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_449,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    # 1472 "05function.c"
    param_names_452=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value568=list$1charphp_clone(generics_fun->mParamNames))));
    come_call_finalizer3(right_value568,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1474 "05function.c"
    param_default_parametors_453=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value569=list$1charphp_clone(generics_fun->mParamDefaultParametors))));
    come_call_finalizer3(right_value569,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1476 "05function.c"
    p_454=info->p;
    # 1477 "05function.c"
    sline_455=info->sline;
    # 1478 "05function.c"
    sname_456=(char*)come_increment_ref_count(info->sname);
    # 1479 "05function.c"
    head_457=info->head;
    # 1480 "05function.c"
    source_458=(struct buffer*)come_increment_ref_count(info->source);
    # 1482 "05function.c"
    __dec_obj125=info->source;
    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value570=string_to_buffer(generics_fun->mBlock))));
    come_call_finalizer3(__dec_obj125,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value570,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1483 "05function.c"
    info->p=info->source->buf;
    # 1484 "05function.c"
    info->head=info->source->buf;
    # 1486 "05function.c"
    method_generics_type_names_459=info->method_generics_type_names;
    # 1488 "05function.c"
    __dec_obj126=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value572=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value571=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1488, "list$1charph"))))))));
    come_call_finalizer3(__dec_obj126,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value571,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value572,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1493 "05function.c"
    for(    o2_saved_460=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_461=list$1charph_begin((o2_saved_460));    !list$1charph_end((o2_saved_460));    it_461=list$1charph_next((o2_saved_460))    ){
        # 1490 "05function.c"
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value573=string_clone(it_461)))));
        right_value573 = come_decrement_ref_count2(right_value573, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    come_call_finalizer3(o2_saved_460,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    # 1493 "05function.c"
    list$1charph_reset(info->generics_type_names);
    # 1494 "05function.c"
    __dec_obj127=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value574=list$1charphp_clone(generics_fun->mGenericsTypeNames))));
    come_call_finalizer3(__dec_obj127,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value574,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1496 "05function.c"
    info->sline=generics_fun->mGenericsSLine;
    # 1497 "05function.c"
    __dec_obj128=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1499 "05function.c"
    block_462=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value575=parse_block(info,(_Bool)0,(_Bool)0))));
    come_call_finalizer3(right_value575,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
    # 1501 "05function.c"
    info->head=head_457;
    # 1502 "05function.c"
    __dec_obj129=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_458);
    come_call_finalizer3(__dec_obj129,buffer_finalize, 0, 0, 0, 0, (void*)0);
    # 1503 "05function.c"
    info->p=p_454;
    # 1504 "05function.c"
    info->sline=sline_455;
    # 1505 "05function.c"
    __dec_obj130=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_456);
    __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1507 "05function.c"
    result_type_447->mInline=(_Bool)0;
    # 1509 "05function.c"
    var_args_463=generics_fun->mVarArgs;
    # 1513 "05function.c"
    fun_464=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value580=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value576=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1510, "sFun")))),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_447),(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value577=list$1sTypephp_clone(param_types_448)))),(struct list$1charph*)come_increment_ref_count(param_names_452),(struct list$1charph*)come_increment_ref_count(param_default_parametors_453),(_Bool)0,var_args_463,(struct sBlock*)come_increment_ref_count(block_462),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value578=__builtin_string("")))),(char*)come_increment_ref_count(((char*)(right_value579=__builtin_string("")))),info))));
    come_call_finalizer3(right_value576,sFun_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value577,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    right_value578 = come_decrement_ref_count2(right_value578, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value579 = come_decrement_ref_count2(right_value579, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value580,sFun_finalize, 0, 1, 0, 0, __result_obj__);
    # 1515 "05function.c"
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value581=string_clone(fun_name)))),(struct sFun*)come_increment_ref_count(fun_464));
    right_value581 = come_decrement_ref_count2(right_value581, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1517 "05function.c"
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1517, "struct sNode");
    _inf_obj_value3=come_increment_ref_count(((struct sFunNode*)(right_value583=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value582=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1517, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_464),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sFunNode_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_466=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value587=_inf_value3)));
    come_call_finalizer3(right_value582,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value583,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value587) { right_value587 = come_decrement_ref_count2(right_value587, ((struct sNode*)right_value587)->finalize, ((struct sNode*)right_value587)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1523 "05function.c"
    # 1519 "05function.c"
    if(_if_conditional463=!node_compile(node_466,info),    _if_conditional463) {
        # 1521 "05function.c"
        __result202__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_441 = come_decrement_ref_count2(last_code_441, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_442 = come_decrement_ref_count2(last_code2_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_443 = come_decrement_ref_count2(last_code3_443, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_444 = come_decrement_ref_count2(sname_top_444, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_447,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_448,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_452,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_453,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_456 = come_decrement_ref_count2(sname_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_458,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_462,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_464,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_466) { node_466 = come_decrement_ref_count2(node_466, ((struct sNode*)node_466)->finalize, ((struct sNode*)node_466)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result202__;
    }
    # 1523 "05function.c"
    come_call_finalizer3(info->method_generics_type_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    # 1524 "05function.c"
    __dec_obj133=method_generics_type_names_459;
    __dec_obj134=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_459);
    come_call_finalizer3(__dec_obj134,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    # 1526 "05function.c"
    list$1charph_reset(info->generics_type_names);
    # 1528 "05function.c"
    __dec_obj135=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value588=__builtin_string(sname_top_444))));
    __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value588 = come_decrement_ref_count2(right_value588, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1529 "05function.c"
    info->sline=sline_top_445;
    # 1531 "05function.c"
    __dec_obj136=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_441);
    __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1532 "05function.c"
    __dec_obj137=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_442);
    __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1533 "05function.c"
    __dec_obj138=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_443);
    __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1535 "05function.c"
    info->caller_fun=caller_fun_438;
    # 1536 "05function.c"
    info->caller_line=caller_line_439;
    # 1537 "05function.c"
    info->caller_sname=caller_sname_440;
    # 1539 "05function.c"
    __result203__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_441 = come_decrement_ref_count2(last_code_441, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_442 = come_decrement_ref_count2(last_code2_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_443 = come_decrement_ref_count2(last_code3_443, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_444 = come_decrement_ref_count2(sname_top_444, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_447,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_448,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_452,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_453,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_456 = come_decrement_ref_count2(sname_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_458,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_462,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_464,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_466) { node_466 = come_decrement_ref_count2(node_466, ((struct sNode*)node_466)->finalize, ((struct sNode*)node_466)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result203__;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_441 = come_decrement_ref_count2(last_code_441, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_442 = come_decrement_ref_count2(last_code2_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_443 = come_decrement_ref_count2(last_code3_443, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_444 = come_decrement_ref_count2(sname_top_444, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_447,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_448,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_452,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_453,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_456 = come_decrement_ref_count2(sname_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_458,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_462,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_464,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_466) { node_466 = come_decrement_ref_count2(node_466, ((struct sNode*)node_466)->finalize, ((struct sNode*)node_466)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__;
char* header_head_467;
char* source_head_468;
struct sType* result_type_469;
char* var_name_470;
_Bool constructor__471;
_Bool _if_conditional464;
void* right_value589;
void* right_value590;
struct sType* __dec_obj139;
void* right_value591;
struct tuple3$3sTypephcharphbool* multiple_assign_var7;
struct sType* result_type2_472;
char* var_name2_473;
_Bool err_474;
struct sType* __dec_obj140;
char* __dec_obj141;
_Bool _if_conditional465;
_Bool _if_conditional466;
_Bool method_definition_475;
char* p_476;
int sline_477;
void* right_value592;
void* right_value593;
struct buffer* buf2_478;
_Bool _while_condtional52;
_Bool _while_condtional53;
_Bool _while_condtional54;
_Bool _while_condtional55;
_Bool _if_conditional467;
char* fun_name_479;
char* base_fun_name_480;
_Bool _if_conditional468;
void* right_value594;
void* right_value595;
char* __dec_obj142;
_Bool _if_conditional469;
void* right_value596;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* obj_type_481;
char* name_482;
_Bool err_483;
_Bool _if_conditional470;
int __exception_result_var_b2;
int __exception_result_var_b3;
void* right_value597;
void* right_value598;
char* __dec_obj143;
_Bool _if_conditional471;
void* right_value599;
void* right_value600;
char* __dec_obj144;
void* right_value601;
char* __dec_obj145;
void* right_value602;
_Bool _if_conditional472;
void* right_value603;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var9;
struct list$1sTypeph* param_types_484;
struct list$1charph* param_names_485;
struct list$1charph* param_default_parametors_486;
_Bool var_args_487;
char* header_tail_488;
_Bool _if_conditional476;
void* right_value604;
void* right_value605;
struct buffer* header_buf_489;
int version_490;
_Bool _if_conditional477;
int n_491;
_Bool _while_condtional56;
_Bool _if_conditional478;
void* right_value606;
struct sBlock* block_492;
static int lambda_num_493=0;
void* right_value607;
char* fun_name_494;
void* right_value608;
void* right_value609;
void* right_value610;
void* right_value611;
void* right_value612;
struct sFun* fun_495;
void* right_value613;
struct sFun* fun2_496;
_Bool _if_conditional479;
void* right_value614;
void* right_value615;
void* right_value616;
struct sNode* _inf_value4;
struct sLambdaNode* _inf_obj_value4;
void* right_value619;
struct sNode* __result206__;
_Bool _if_conditional486;
void* right_value620;
char* none_generics_name_498;
void* right_value621;
char* generics_sname_499;
int generics_sline_500;
void* right_value622;
char* block_501;
void* right_value623;
void* right_value624;
void* right_value625;
void* right_value626;
void* right_value627;
void* right_value628;
struct sGenericsFun* fun_502;
void* right_value629;
char* fun_name3_503;
void* right_value633;
struct sNode* __result221__;
_Bool _if_conditional509;
void* right_value634;
char* generics_sname_525;
int generics_sline_526;
void* right_value635;
char* block_527;
void* right_value636;
void* right_value637;
void* right_value638;
void* right_value639;
void* right_value640;
void* right_value641;
struct sGenericsFun* fun_528;
void* right_value642;
char* fun_name3_529;
void* right_value643;
struct sNode* __result222__;
_Bool _if_conditional510;
char* source_tail_530;
void* right_value644;
void* right_value645;
struct buffer* header_531;
_Bool _if_conditional511;
_Bool _if_conditional513;
void* right_value646;
char* name_532;
void* right_value647;
void* right_value648;
char* name_533;
void* right_value649;
int i_534;
struct sType* param_type_535;
char* param_name_539;
char* default_parametor_540;
_Bool _if_conditional516;
void* right_value650;
void* right_value651;
void* right_value652;
void* right_value653;
_Bool _if_conditional517;
_Bool _if_conditional518;
_Bool _if_conditional519;
void* right_value654;
char* impl_name_541;
void* right_value655;
char* result_type_name_542;
void* right_value656;
void* right_value657;
char* impl_name_543;
void* right_value658;
char* result_type_name_544;
void* right_value659;
int i_545;
struct sType* param_type_546;
char* param_name_547;
char* default_parametor_548;
_Bool _if_conditional520;
void* right_value660;
void* right_value661;
void* right_value662;
void* right_value663;
_Bool _if_conditional521;
_Bool _if_conditional522;
void* right_value664;
void* right_value665;
struct sBlock* block_549;
_Bool static__550;
_Bool _if_conditional523;
_Bool _if_conditional524;
void* right_value666;
void* right_value667;
char* new_fun_name_551;
void* right_value668;
char* __dec_obj147;
void* right_value669;
void* right_value670;
void* right_value671;
void* right_value672;
void* right_value673;
void* right_value674;
struct sFun* fun_552;
_Bool _if_conditional525;
void* right_value675;
void* right_value676;
struct sFun* fun2_553;
_Bool _if_conditional526;
void* right_value677;
void* right_value678;
void* right_value679;
struct sNode* _inf_value5;
struct sFunNode* _inf_obj_value5;
void* right_value683;
struct sNode* __result229__;
_Bool _if_conditional533;
_Bool _if_conditional534;
void* right_value684;
char* new_fun_name_555;
void* right_value685;
char* __dec_obj150;
_Bool _if_conditional535;
void* right_value686;
void* right_value687;
void* right_value688;
void* right_value689;
void* right_value690;
struct sFun* fun_556;
void* right_value691;
struct sFun* fun2_557;
_Bool _if_conditional536;
void* right_value692;
char* source_tail_558;
void* right_value693;
void* right_value694;
struct buffer* header_559;
void* right_value695;
void* right_value696;
void* right_value697;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* right_value701;
struct sNode* __result232__;
void* right_value702;
char* asm_fun_561;
_Bool _if_conditional543;
void* right_value703;
char* __dec_obj153;
int __exception_result_var_b4;
void* right_value704;
void* right_value705;
void* right_value706;
void* right_value707;
void* right_value708;
struct sFun* fun_562;
void* right_value709;
struct sFun* fun2_563;
_Bool _if_conditional544;
void* right_value710;
char* source_tail_564;
void* right_value711;
void* right_value712;
struct buffer* header_565;
void* right_value713;
void* right_value714;
void* right_value715;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* right_value719;
struct sNode* __result235__;
struct sNode* __result236__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&header_head_467, 0, sizeof(char*));
memset(&source_head_468, 0, sizeof(char*));
memset(&result_type_469, 0, sizeof(struct sType*));
memset(&var_name_470, 0, sizeof(char*));
memset(&constructor__471, 0, sizeof(_Bool));
right_value589 = (void*)0;
right_value590 = (void*)0;
right_value591 = (void*)0;
memset(&result_type2_472, 0, sizeof(struct sType*));
memset(&var_name2_473, 0, sizeof(char*));
memset(&err_474, 0, sizeof(_Bool));
memset(&result_type2_472, 0, sizeof(struct sType*));
memset(&var_name2_473, 0, sizeof(char*));
memset(&err_474, 0, sizeof(_Bool));
memset(&method_definition_475, 0, sizeof(_Bool));
memset(&p_476, 0, sizeof(char*));
memset(&sline_477, 0, sizeof(int));
right_value592 = (void*)0;
right_value593 = (void*)0;
memset(&buf2_478, 0, sizeof(struct buffer*));
memset(&fun_name_479, 0, sizeof(char*));
memset(&base_fun_name_480, 0, sizeof(char*));
right_value594 = (void*)0;
right_value595 = (void*)0;
right_value596 = (void*)0;
memset(&obj_type_481, 0, sizeof(struct sType*));
memset(&name_482, 0, sizeof(char*));
memset(&err_483, 0, sizeof(_Bool));
memset(&obj_type_481, 0, sizeof(struct sType*));
memset(&name_482, 0, sizeof(char*));
memset(&err_483, 0, sizeof(_Bool));
right_value597 = (void*)0;
right_value598 = (void*)0;
right_value599 = (void*)0;
right_value600 = (void*)0;
right_value601 = (void*)0;
right_value602 = (void*)0;
right_value603 = (void*)0;
memset(&param_types_484, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_485, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_486, 0, sizeof(struct list$1charph*));
memset(&var_args_487, 0, sizeof(_Bool));
memset(&param_types_484, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_485, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_486, 0, sizeof(struct list$1charph*));
memset(&var_args_487, 0, sizeof(_Bool));
memset(&header_tail_488, 0, sizeof(char*));
right_value604 = (void*)0;
right_value605 = (void*)0;
memset(&header_buf_489, 0, sizeof(struct buffer*));
memset(&version_490, 0, sizeof(int));
memset(&n_491, 0, sizeof(int));
right_value606 = (void*)0;
memset(&block_492, 0, sizeof(struct sBlock*));
right_value607 = (void*)0;
memset(&fun_name_494, 0, sizeof(char*));
right_value608 = (void*)0;
right_value609 = (void*)0;
right_value610 = (void*)0;
right_value611 = (void*)0;
right_value612 = (void*)0;
memset(&fun_495, 0, sizeof(struct sFun*));
right_value613 = (void*)0;
memset(&fun2_496, 0, sizeof(struct sFun*));
right_value614 = (void*)0;
right_value615 = (void*)0;
right_value616 = (void*)0;
right_value619 = (void*)0;
right_value620 = (void*)0;
memset(&none_generics_name_498, 0, sizeof(char*));
right_value621 = (void*)0;
memset(&generics_sname_499, 0, sizeof(char*));
memset(&generics_sline_500, 0, sizeof(int));
right_value622 = (void*)0;
memset(&block_501, 0, sizeof(char*));
right_value623 = (void*)0;
right_value624 = (void*)0;
right_value625 = (void*)0;
right_value626 = (void*)0;
right_value627 = (void*)0;
right_value628 = (void*)0;
memset(&fun_502, 0, sizeof(struct sGenericsFun*));
right_value629 = (void*)0;
memset(&fun_name3_503, 0, sizeof(char*));
right_value633 = (void*)0;
right_value634 = (void*)0;
memset(&generics_sname_525, 0, sizeof(char*));
memset(&generics_sline_526, 0, sizeof(int));
right_value635 = (void*)0;
memset(&block_527, 0, sizeof(char*));
right_value636 = (void*)0;
right_value637 = (void*)0;
right_value638 = (void*)0;
right_value639 = (void*)0;
right_value640 = (void*)0;
right_value641 = (void*)0;
memset(&fun_528, 0, sizeof(struct sGenericsFun*));
right_value642 = (void*)0;
memset(&fun_name3_529, 0, sizeof(char*));
right_value643 = (void*)0;
memset(&source_tail_530, 0, sizeof(char*));
right_value644 = (void*)0;
right_value645 = (void*)0;
memset(&header_531, 0, sizeof(struct buffer*));
right_value646 = (void*)0;
memset(&name_532, 0, sizeof(char*));
right_value647 = (void*)0;
right_value648 = (void*)0;
memset(&name_533, 0, sizeof(char*));
right_value649 = (void*)0;
memset(&i_534, 0, sizeof(int));
memset(&param_type_535, 0, sizeof(struct sType*));
memset(&param_name_539, 0, sizeof(char*));
memset(&default_parametor_540, 0, sizeof(char*));
right_value650 = (void*)0;
right_value651 = (void*)0;
right_value652 = (void*)0;
right_value653 = (void*)0;
right_value654 = (void*)0;
memset(&impl_name_541, 0, sizeof(char*));
right_value655 = (void*)0;
memset(&result_type_name_542, 0, sizeof(char*));
right_value656 = (void*)0;
right_value657 = (void*)0;
memset(&impl_name_543, 0, sizeof(char*));
right_value658 = (void*)0;
memset(&result_type_name_544, 0, sizeof(char*));
right_value659 = (void*)0;
memset(&i_545, 0, sizeof(int));
memset(&param_type_546, 0, sizeof(struct sType*));
memset(&param_name_547, 0, sizeof(char*));
memset(&default_parametor_548, 0, sizeof(char*));
right_value660 = (void*)0;
right_value661 = (void*)0;
right_value662 = (void*)0;
right_value663 = (void*)0;
right_value664 = (void*)0;
right_value665 = (void*)0;
memset(&block_549, 0, sizeof(struct sBlock*));
memset(&static__550, 0, sizeof(_Bool));
right_value666 = (void*)0;
right_value667 = (void*)0;
memset(&new_fun_name_551, 0, sizeof(char*));
right_value668 = (void*)0;
right_value669 = (void*)0;
right_value670 = (void*)0;
right_value671 = (void*)0;
right_value672 = (void*)0;
right_value673 = (void*)0;
right_value674 = (void*)0;
memset(&fun_552, 0, sizeof(struct sFun*));
right_value675 = (void*)0;
right_value676 = (void*)0;
memset(&fun2_553, 0, sizeof(struct sFun*));
right_value677 = (void*)0;
right_value678 = (void*)0;
right_value679 = (void*)0;
right_value683 = (void*)0;
right_value684 = (void*)0;
memset(&new_fun_name_555, 0, sizeof(char*));
right_value685 = (void*)0;
right_value686 = (void*)0;
right_value687 = (void*)0;
right_value688 = (void*)0;
right_value689 = (void*)0;
right_value690 = (void*)0;
memset(&fun_556, 0, sizeof(struct sFun*));
right_value691 = (void*)0;
memset(&fun2_557, 0, sizeof(struct sFun*));
right_value692 = (void*)0;
memset(&source_tail_558, 0, sizeof(char*));
right_value693 = (void*)0;
right_value694 = (void*)0;
memset(&header_559, 0, sizeof(struct buffer*));
right_value695 = (void*)0;
right_value696 = (void*)0;
right_value697 = (void*)0;
right_value701 = (void*)0;
right_value702 = (void*)0;
memset(&asm_fun_561, 0, sizeof(char*));
right_value703 = (void*)0;
right_value704 = (void*)0;
right_value705 = (void*)0;
right_value706 = (void*)0;
right_value707 = (void*)0;
right_value708 = (void*)0;
memset(&fun_562, 0, sizeof(struct sFun*));
right_value709 = (void*)0;
memset(&fun2_563, 0, sizeof(struct sFun*));
right_value710 = (void*)0;
memset(&source_tail_564, 0, sizeof(char*));
right_value711 = (void*)0;
right_value712 = (void*)0;
memset(&header_565, 0, sizeof(struct buffer*));
right_value713 = (void*)0;
right_value714 = (void*)0;
right_value715 = (void*)0;
right_value719 = (void*)0;
    # 1544 "05function.c"
    header_head_467=info->p;
    # 1545 "05function.c"
    source_head_468=info->p;
    # 1547 "05function.c"
    result_type_469=((void*)0);
    # 1548 "05function.c"
    var_name_470=((void*)0);
    # 1549 "05function.c"
    constructor__471=(_Bool)0;
    # 1575 "05function.c"
    # 1551 "05function.c"
    if(_if_conditional464=info->in_class&&memcmp(info->p,"new(",4)==0,    _if_conditional464) {
        # 1552 "05function.c"
        ((char*)(right_value589=parse_word(info)));
        right_value589 = come_decrement_ref_count2(right_value589, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1553 "05function.c"
        __dec_obj139=result_type_469;
        result_type_469=(struct sType*)come_increment_ref_count(((struct sType*)(right_value590=sType_clone(info->impl_type))));
        come_call_finalizer3(__dec_obj139,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value590,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 1554 "05function.c"
        result_type_469->mHeap=(_Bool)1;
        # 1556 "05function.c"
        constructor__471=(_Bool)1;
    }
    else {
        # 1559 "05function.c"
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(right_value591=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_472=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2_473=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_474=multiple_assign_var7->v3;
        come_call_finalizer3(right_value591,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        # 1561 "05function.c"
        __dec_obj140=result_type_469;
        result_type_469=(struct sType*)come_increment_ref_count(result_type2_472);
        come_call_finalizer3(__dec_obj140,sType_finalize, 0, 0, 0, 0, (void*)0);
        # 1562 "05function.c"
        __dec_obj141=var_name_470;
        var_name_470=(char*)come_increment_ref_count(var_name2_473);
        __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
        # 1568 "05function.c"
        # 1564 "05function.c"
        if(info->in_class) {
        }
        # 1572 "05function.c"
        # 1568 "05function.c"
        if(_if_conditional466=!err_474,        _if_conditional466) {
            # 1569 "05function.c"
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            # 1570 "05function.c"
            exit(2);
        }
        come_call_finalizer3(result_type2_472,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name2_473 = come_decrement_ref_count2(var_name2_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 1575 "05function.c"
    method_definition_475=(_Bool)0;
    # 1608 "05function.c"
    {
        # 1577 "05function.c"
        p_476=info->p;
        # 1578 "05function.c"
        sline_477=info->sline;
        # 1580 "05function.c"
        buf2_478=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value593=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value592=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1580, "buffer"))))))));
        come_call_finalizer3(right_value592,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value593,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 1585 "05function.c"
        while(_while_condtional52=xisalnum(*info->p)||*info->p==95,        _while_condtional52) {
            # 1582 "05function.c"
            buffer_append_char(buf2_478,*info->p);
            # 1583 "05function.c"
            info->p++;
        }
        # 1585 "05function.c"
        skip_spaces_and_lf(info);
        # 1591 "05function.c"
        while(_while_condtional53=*info->p==91&&*(info->p+1)==93,        _while_condtional53) {
            # 1588 "05function.c"
            info->p+=2;
            # 1589 "05function.c"
            skip_spaces_and_lf(info);
        }
        # 1595 "05function.c"
        while(_while_condtional54=*info->p==42,        _while_condtional54) {
            # 1592 "05function.c"
            info->p++;
            # 1593 "05function.c"
            skip_spaces_and_lf(info);
        }
        # 1600 "05function.c"
        while(_while_condtional55=*info->p==37,        _while_condtional55) {
            # 1596 "05function.c"
            info->p++;
            # 1597 "05function.c"
            skip_spaces_and_lf(info);
        }
        # 1604 "05function.c"
        # 1600 "05function.c"
        if(_if_conditional467=buffer_length(buf2_478)>0&&*info->p==58&&*(info->p+1)==58,        _if_conditional467) {
            # 1601 "05function.c"
            method_definition_475=(_Bool)1;
        }
        # 1604 "05function.c"
        info->p=p_476;
        # 1605 "05function.c"
        info->sline=sline_477;
        come_call_finalizer3(buf2_478,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 1608 "05function.c"
    # 1609 "05function.c"
    base_fun_name_480=((void*)0);
    # 1638 "05function.c"
    # 1610 "05function.c"
    if(constructor__471) {
        # 1611 "05function.c"
        base_fun_name_480=(char*)come_increment_ref_count(((char*)(right_value594=__builtin_string("initialize"))));
        right_value594 = come_decrement_ref_count2(right_value594, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1612 "05function.c"
        __dec_obj142=fun_name_479;
        fun_name_479=(char*)come_increment_ref_count(((char*)(right_value595=create_method_name(info->impl_type,(_Bool)0,base_fun_name_480,info,(_Bool)1))));
        __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value595 = come_decrement_ref_count2(right_value595, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        # 1638 "05function.c"
        # 1614 "05function.c"
        if(method_definition_475) {
            # 1615 "05function.c"
            multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(right_value596=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            obj_type_481=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
            name_482=(char*)come_increment_ref_count(multiple_assign_var8->v2);
            err_483=multiple_assign_var8->v3;
            come_call_finalizer3(right_value596,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            # 1622 "05function.c"
            # 1617 "05function.c"
            if(_if_conditional470=!err_483,            _if_conditional470) {
                # 1618 "05function.c"
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                # 1619 "05function.c"
                exit(2);
            }
            # 1622 "05function.c"
            (come_push_stackframe("05function.c", 1622, 3),__exception_result_var_b2=expected_next_character(58,info), come_pop_stackframe(), __exception_result_var_b2);
            # 1623 "05function.c"
            (come_push_stackframe("05function.c", 1623, 4),__exception_result_var_b3=expected_next_character(58,info), come_pop_stackframe(), __exception_result_var_b3);
            # 1625 "05function.c"
            base_fun_name_480=(char*)come_increment_ref_count(((char*)(right_value597=parse_word(info))));
            right_value597 = come_decrement_ref_count2(right_value597, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1626 "05function.c"
            __dec_obj143=fun_name_479;
            fun_name_479=(char*)come_increment_ref_count(((char*)(right_value598=create_method_name(obj_type_481,(_Bool)0,base_fun_name_480,info,(_Bool)1))));
            __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value598 = come_decrement_ref_count2(right_value598, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(obj_type_481,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_482 = come_decrement_ref_count2(name_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            # 1638 "05function.c"
            # 1628 "05function.c"
            if(info->impl_type) {
                # 1629 "05function.c"
                base_fun_name_480=(char*)come_increment_ref_count(((char*)(right_value599=parse_word(info))));
                right_value599 = come_decrement_ref_count2(right_value599, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1631 "05function.c"
                __dec_obj144=fun_name_479;
                fun_name_479=(char*)come_increment_ref_count(((char*)(right_value600=create_method_name(info->impl_type,(_Bool)0,base_fun_name_480,info,(_Bool)1))));
                __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value600 = come_decrement_ref_count2(right_value600, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                # 1634 "05function.c"
                __dec_obj145=fun_name_479;
                fun_name_479=(char*)come_increment_ref_count(((char*)(right_value601=parse_word(info))));
                __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value601 = come_decrement_ref_count2(right_value601, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1635 "05function.c"
                base_fun_name_480=(char*)come_increment_ref_count(((char*)(right_value602=__builtin_string(fun_name_479))));
                right_value602 = come_decrement_ref_count2(right_value602, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
    }
    # 1641 "05function.c"
    # 1638 "05function.c"
    if(_if_conditional472=info->in_class&&charp_operator_equals(base_fun_name_480,"initialize"),    _if_conditional472) {
        # 1639 "05function.c"
        info->in_class=(_Bool)0;
    }
    # 1641 "05function.c"
    multiple_assign_var9=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value603=parse_params(info,constructor__471)));
    param_types_484=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_485=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_486=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_487=multiple_assign_var9->v4;
    come_call_finalizer3(right_value603,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1642 "05function.c"
    header_tail_488=info->p;
    # 1647 "05function.c"
    # 1643 "05function.c"
    if(_if_conditional476=info->in_class&&charp_operator_equals(base_fun_name_480,"initialize"),    _if_conditional476) {
        # 1644 "05function.c"
        info->in_class=(_Bool)1;
    }
    # 1647 "05function.c"
    header_buf_489=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value605=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value604=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1647, "buffer"))))))));
    come_call_finalizer3(right_value604,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value605,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1649 "05function.c"
    buffer_append(header_buf_489,header_head_467,header_tail_488-header_head_467);
    # 1650 "05function.c"
    buffer_append_char(header_buf_489,0);
    # 1652 "05function.c"
    version_490=0;
    # 1667 "05function.c"
    # 1653 "05function.c"
    if(_if_conditional477=strmemcmp(info->p,"version"),    _if_conditional477) {
        # 1654 "05function.c"
        info->p+=strlen("version");
        # 1655 "05function.c"
        skip_spaces_and_lf(info);
        # 1657 "05function.c"
        n_491=0;
        # 1662 "05function.c"
        while(_while_condtional56=xisdigit(*info->p),        _while_condtional56) {
            # 1659 "05function.c"
            n_491=n_491*10+(*info->p-48);
            # 1660 "05function.c"
            info->p++;
        }
        # 1662 "05function.c"
        skip_spaces_and_lf(info);
        # 1664 "05function.c"
        version_490=n_491;
    }
    # 1911 "05function.c"
    # 1667 "05function.c"
    if(_if_conditional478=charp_operator_equals(base_fun_name_480,"lambda"),    _if_conditional478) {
        # 1668 "05function.c"
        block_492=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value606=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer3(right_value606,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        # 1670 "05function.c"
        # 1671 "05function.c"
        lambda_num_493++;
        # 1673 "05function.c"
        fun_name_494=(char*)come_increment_ref_count(((char*)(right_value607=xsprintf("lambda%d",lambda_num_493))));
        right_value607 = come_decrement_ref_count2(right_value607, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1675 "05function.c"
        result_type_469->mStatic=(_Bool)0;
        # 1680 "05function.c"
        fun_495=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value612=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value608=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1677, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value609=__builtin_string(fun_name_494)))),(struct sType*)come_increment_ref_count(result_type_469),(struct list$1sTypeph*)come_increment_ref_count(param_types_484),(struct list$1charph*)come_increment_ref_count(param_names_485),(struct list$1charph*)come_increment_ref_count(param_default_parametors_486),(_Bool)0,var_args_487,(struct sBlock*)come_increment_ref_count(block_492),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value610=buffer_to_string(header_buf_489)))),(char*)come_increment_ref_count(((char*)(right_value611=__builtin_string("")))),info))));
        come_call_finalizer3(right_value608,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value609 = come_decrement_ref_count2(right_value609, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value610 = come_decrement_ref_count2(right_value610, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value611 = come_decrement_ref_count2(right_value611, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value612,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        # 1682 "05function.c"
        fun2_496=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value613=__builtin_string(fun_name_494))));
        right_value613 = come_decrement_ref_count2(right_value613, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1688 "05function.c"
        # 1683 "05function.c"
        if(_if_conditional479=fun2_496==((void*)0)||fun2_496->mExternal,        _if_conditional479) {
            # 1685 "05function.c"
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value614=string_clone(fun_name_494)))),(struct sFun*)come_increment_ref_count(fun_495));
            right_value614 = come_decrement_ref_count2(right_value614, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 1688 "05function.c"
        base_fun_name_480 = come_decrement_ref_count2(base_fun_name_480, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        # 1689 "05function.c"
        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1689, "struct sNode");
        _inf_obj_value4=come_increment_ref_count(((struct sLambdaNode*)(right_value616=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(right_value615=(struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 1689, "sLambdaNode")))),fun_495,info))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sLambdaNode_finalize;
        _inf_value4->clone=(void*)sLambdaNode_clone;
        _inf_value4->compile=(void*)sLambdaNode_compile;
        _inf_value4->sline=(void*)sNodeBase_sline;
        _inf_value4->sname=(void*)sNodeBase_sname;
        _inf_value4->terminated=(void*)sLambdaNode_terminated;
        _inf_value4->kind=(void*)sLambdaNode_kind;
        __result206__ = __result_obj__ = ((struct sNode*)(right_value619=_inf_value4));
        come_call_finalizer3(block_492,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_494 = come_decrement_ref_count2(fun_name_494, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_495,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_469,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_470 = come_decrement_ref_count2(var_name_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_479 = come_decrement_ref_count2(fun_name_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_484,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_485,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_486,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_489,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value615,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value616,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value619) { right_value619 = come_decrement_ref_count2(right_value619, ((struct sNode*)right_value619)->finalize, ((struct sNode*)right_value619)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result206__;
        come_call_finalizer3(block_492,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_494 = come_decrement_ref_count2(fun_name_494, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_495,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 1911 "05function.c"
        # 1691 "05function.c"
        if(_if_conditional486=info->impl_type&&list$1charph_length(info->generics_type_names)>0,        _if_conditional486) {
            # 1692 "05function.c"
            none_generics_name_498=(char*)come_increment_ref_count(((char*)(right_value620=get_none_generics_name(info->impl_type->mClass->mName))));
            right_value620 = come_decrement_ref_count2(right_value620, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1694 "05function.c"
            generics_sname_499=(char*)come_increment_ref_count(((char*)(right_value621=__builtin_string(info->sname))));
            right_value621 = come_decrement_ref_count2(right_value621, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1695 "05function.c"
            generics_sline_500=info->sline;
            # 1697 "05function.c"
            block_501=(char*)come_increment_ref_count(((char*)(right_value622=skip_block(info))));
            right_value622 = come_decrement_ref_count2(right_value622, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1699 "05function.c"
            fun_502=(struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value628=sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value623=(struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 1699, "sGenericsFun")))),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(right_value624=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(right_value625=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(((char*)(right_value626=__builtin_string(fun_name_479)))),(struct sType*)come_increment_ref_count(result_type_469),(struct list$1sTypeph*)come_increment_ref_count(param_types_484),(struct list$1charph*)come_increment_ref_count(param_names_485),(struct list$1charph*)come_increment_ref_count(param_default_parametors_486),var_args_487,(char*)come_increment_ref_count(block_501),info,(char*)come_increment_ref_count(((char*)(right_value627=__builtin_string(generics_sname_499)))),generics_sline_500))));
            come_call_finalizer3(right_value623,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value624,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value625,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            right_value626 = come_decrement_ref_count2(right_value626, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value627 = come_decrement_ref_count2(right_value627, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value628,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
            # 1701 "05function.c"
            fun_name3_503=(char*)come_increment_ref_count(((char*)(right_value629=xsprintf("%s_%s",none_generics_name_498,base_fun_name_480))));
            right_value629 = come_decrement_ref_count2(right_value629, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1703 "05function.c"
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(((char*)(right_value633=__builtin_string(fun_name3_503)))),(struct sGenericsFun*)come_increment_ref_count(fun_502));
            right_value633 = come_decrement_ref_count2(right_value633, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1705 "05function.c"
            base_fun_name_480 = come_decrement_ref_count2(base_fun_name_480, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            # 1707 "05function.c"
            __result221__ = __result_obj__ = (struct sNode*)((void*)0);
            none_generics_name_498 = come_decrement_ref_count2(none_generics_name_498, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_sname_499 = come_decrement_ref_count2(generics_sname_499, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_501 = come_decrement_ref_count2(block_501, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_502,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            fun_name3_503 = come_decrement_ref_count2(fun_name3_503, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_469,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_470 = come_decrement_ref_count2(var_name_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_479 = come_decrement_ref_count2(fun_name_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_484,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_485,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_486,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_489,buffer_finalize, 0, 0, 0, 0, (void*)0);
            return __result221__;
            none_generics_name_498 = come_decrement_ref_count2(none_generics_name_498, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_sname_499 = come_decrement_ref_count2(generics_sname_499, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_501 = come_decrement_ref_count2(block_501, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_502,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            fun_name3_503 = come_decrement_ref_count2(fun_name3_503, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            # 1911 "05function.c"
            # 1709 "05function.c"
            if(_if_conditional509=list$1charph_length(info->method_generics_type_names)>0,            _if_conditional509) {
                # 1710 "05function.c"
                generics_sname_525=(char*)come_increment_ref_count(((char*)(right_value634=__builtin_string(info->sname))));
                right_value634 = come_decrement_ref_count2(right_value634, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1711 "05function.c"
                generics_sline_526=info->sline;
                # 1713 "05function.c"
                block_527=(char*)come_increment_ref_count(((char*)(right_value635=skip_block(info))));
                right_value635 = come_decrement_ref_count2(right_value635, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1715 "05function.c"
                fun_528=(struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value641=sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value636=(struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 1715, "sGenericsFun")))),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(right_value637=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(right_value638=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(((char*)(right_value639=__builtin_string(fun_name_479)))),(struct sType*)come_increment_ref_count(result_type_469),(struct list$1sTypeph*)come_increment_ref_count(param_types_484),(struct list$1charph*)come_increment_ref_count(param_names_485),(struct list$1charph*)come_increment_ref_count(param_default_parametors_486),var_args_487,(char*)come_increment_ref_count(block_527),info,(char*)come_increment_ref_count(((char*)(right_value640=__builtin_string(generics_sname_525)))),generics_sline_526))));
                come_call_finalizer3(right_value636,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value637,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value638,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                right_value639 = come_decrement_ref_count2(right_value639, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value640 = come_decrement_ref_count2(right_value640, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value641,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
                # 1717 "05function.c"
                fun_name3_529=(char*)come_increment_ref_count(((char*)(right_value642=charp_clone(base_fun_name_480))));
                right_value642 = come_decrement_ref_count2(right_value642, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1719 "05function.c"
                map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(((char*)(right_value643=__builtin_string(fun_name3_529)))),(struct sGenericsFun*)come_increment_ref_count(fun_528));
                right_value643 = come_decrement_ref_count2(right_value643, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1721 "05function.c"
                base_fun_name_480 = come_decrement_ref_count2(base_fun_name_480, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                # 1723 "05function.c"
                __result222__ = __result_obj__ = (struct sNode*)((void*)0);
                generics_sname_525 = come_decrement_ref_count2(generics_sname_525, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_527 = come_decrement_ref_count2(block_527, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_528,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_529 = come_decrement_ref_count2(fun_name3_529, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_469,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_470 = come_decrement_ref_count2(var_name_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name_479 = come_decrement_ref_count2(fun_name_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_484,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_485,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_486,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_buf_489,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result222__;
                generics_sname_525 = come_decrement_ref_count2(generics_sname_525, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_527 = come_decrement_ref_count2(block_527, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_528,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_529 = come_decrement_ref_count2(fun_name3_529, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                # 1911 "05function.c"
                # 1725 "05function.c"
                if(_if_conditional510=*info->p==123,                _if_conditional510) {
                    # 1726 "05function.c"
                    source_tail_530=info->p-1;
                    # 1728 "05function.c"
                    header_531=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value645=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value644=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1728, "buffer"))))))));
                    come_call_finalizer3(right_value644,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value645,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                    # 1795 "05function.c"
                    # 1730 "05function.c"
                    if(constructor__471) {
                        # 1758 "05function.c"
                        # 1731 "05function.c"
                        if(_if_conditional513=list$1sTypeph_length(param_types_484)==1,                        _if_conditional513) {
                            # 1732 "05function.c"
                            name_532=(char*)come_increment_ref_count(((char*)(right_value646=string_clone(info->impl_type->mClass->mName))));
                            right_value646 = come_decrement_ref_count2(right_value646, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1733 "05function.c"
                            buffer_append_str(header_531,((char*)(right_value647=xsprintf("extern %s*%% %s*::initialize(%s*%% self);\n",name_532,name_532,name_532))));
                            right_value647 = come_decrement_ref_count2(right_value647, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            name_532 = come_decrement_ref_count2(name_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        else {
                            # 1736 "05function.c"
                            name_533=(char*)come_increment_ref_count(((char*)(right_value648=string_clone(info->impl_type->mClass->mName))));
                            right_value648 = come_decrement_ref_count2(right_value648, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1737 "05function.c"
                            buffer_append_str(header_531,((char*)(right_value649=xsprintf("extern %s*%% %s*::initialize(%s*%% self, ",name_533,name_533,name_533))));
                            right_value649 = come_decrement_ref_count2(right_value649, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1756 "05function.c"
                            for(                            i_534=1;                            i_534<list$1sTypeph_length(param_types_484);                            i_534++                            ){
                                # 1740 "05function.c"
                                param_type_535=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_484,i_534), "05function.c", 1740, 5));
                                # 1741 "05function.c"
                                param_name_539=((char*)come_null_check(list$1charphp_operator_load_element(param_names_485,i_534), "05function.c", 1741, 6));
                                # 1742 "05function.c"
                                default_parametor_540=list$1charphp_operator_load_element(param_default_parametors_486,i_534);
                                # 1751 "05function.c"
                                # 1744 "05function.c"
                                if(default_parametor_540) {
                                    # 1745 "05function.c"
                                    buffer_append_str(header_531,((char*)(right_value651=xsprintf("extern %s %s=%s",((char*)(right_value650=make_come_type_name_string_no_solved(param_type_535,info))),param_name_539,default_parametor_540))));
                                    right_value650 = come_decrement_ref_count2(right_value650, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    right_value651 = come_decrement_ref_count2(right_value651, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    # 1748 "05function.c"
                                    buffer_append_str(header_531,((char*)(right_value653=xsprintf("extern %s %s",((char*)(right_value652=make_come_type_name_string_no_solved(param_type_535,info))),param_name_539))));
                                    right_value652 = come_decrement_ref_count2(right_value652, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    right_value653 = come_decrement_ref_count2(right_value653, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                # 1754 "05function.c"
                                # 1751 "05function.c"
                                if(_if_conditional517=i_534!=list$1sTypeph_length(param_types_484)-1,                                _if_conditional517) {
                                    # 1752 "05function.c"
                                    buffer_append_str(header_531,",");
                                }
                            }
                            # 1756 "05function.c"
                            buffer_append_str(header_531,");\n");
                            name_533 = come_decrement_ref_count2(name_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        # 1795 "05function.c"
                        # 1759 "05function.c"
                        if(_if_conditional518=info->in_class&&info->impl_type,                        _if_conditional518) {
                            # 1789 "05function.c"
                            # 1760 "05function.c"
                            if(_if_conditional519=list$1sTypeph_length(param_types_484)==1,                            _if_conditional519) {
                                # 1761 "05function.c"
                                impl_name_541=(char*)come_increment_ref_count(((char*)(right_value654=string_clone(info->impl_type->mClass->mName))));
                                right_value654 = come_decrement_ref_count2(right_value654, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 1762 "05function.c"
                                result_type_name_542=(char*)come_increment_ref_count(((char*)(right_value655=make_come_type_name_string_no_solved(result_type_469,info))));
                                right_value655 = come_decrement_ref_count2(right_value655, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 1763 "05function.c"
                                buffer_append_str(header_531,((char*)(right_value656=xsprintf("extern %s %s*::%s(%s* self);\n",result_type_name_542,impl_name_541,base_fun_name_480,impl_name_541))));
                                right_value656 = come_decrement_ref_count2(right_value656, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                impl_name_541 = come_decrement_ref_count2(impl_name_541, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                result_type_name_542 = come_decrement_ref_count2(result_type_name_542, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                # 1766 "05function.c"
                                impl_name_543=(char*)come_increment_ref_count(((char*)(right_value657=string_clone(info->impl_type->mClass->mName))));
                                right_value657 = come_decrement_ref_count2(right_value657, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 1767 "05function.c"
                                result_type_name_544=(char*)come_increment_ref_count(((char*)(right_value658=make_come_type_name_string_no_solved(result_type_469,info))));
                                right_value658 = come_decrement_ref_count2(right_value658, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 1768 "05function.c"
                                buffer_append_str(header_531,((char*)(right_value659=xsprintf("extern %s %s*::%s(%s* self, ",result_type_name_544,impl_name_543,base_fun_name_480,impl_name_543))));
                                right_value659 = come_decrement_ref_count2(right_value659, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 1787 "05function.c"
                                for(                                i_545=1;                                i_545<list$1sTypeph_length(param_types_484);                                i_545++                                ){
                                    # 1771 "05function.c"
                                    param_type_546=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_484,i_545), "05function.c", 1771, 7));
                                    # 1772 "05function.c"
                                    param_name_547=((char*)come_null_check(list$1charphp_operator_load_element(param_names_485,i_545), "05function.c", 1772, 8));
                                    # 1773 "05function.c"
                                    default_parametor_548=list$1charphp_operator_load_element(param_default_parametors_486,i_545);
                                    # 1782 "05function.c"
                                    # 1775 "05function.c"
                                    if(default_parametor_548) {
                                        # 1776 "05function.c"
                                        buffer_append_str(header_531,((char*)(right_value661=xsprintf("extern %s %s=%s",((char*)(right_value660=make_come_type_name_string_no_solved(param_type_546,info))),param_name_547,default_parametor_548))));
                                        right_value660 = come_decrement_ref_count2(right_value660, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value661 = come_decrement_ref_count2(right_value661, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    else {
                                        # 1779 "05function.c"
                                        buffer_append_str(header_531,((char*)(right_value663=xsprintf("extern %s %s",((char*)(right_value662=make_come_type_name_string_no_solved(param_type_546,info))),param_name_547))));
                                        right_value662 = come_decrement_ref_count2(right_value662, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value663 = come_decrement_ref_count2(right_value663, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 1785 "05function.c"
                                    # 1782 "05function.c"
                                    if(_if_conditional521=i_545!=list$1sTypeph_length(param_types_484)-1,                                    _if_conditional521) {
                                        # 1783 "05function.c"
                                        buffer_append_str(header_531,",");
                                    }
                                }
                                # 1787 "05function.c"
                                buffer_append_str(header_531,");\n");
                                impl_name_543 = come_decrement_ref_count2(impl_name_543, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                result_type_name_544 = come_decrement_ref_count2(result_type_name_544, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        else {
                            # 1791 "05function.c"
                            buffer_append(header_531,source_head_468,source_tail_530-source_head_468);
                            # 1792 "05function.c"
                            buffer_append_str(header_531,";\n");
                        }
                    }
                    # 1799 "05function.c"
                    # 1795 "05function.c"
                    if(_if_conditional522=!result_type_469->mStatic,                    _if_conditional522) {
                        # 1796 "05function.c"
                        add_come_code_at_come_header(info,"%s",((char*)(right_value664=buffer_to_string(header_531))));
                        right_value664 = come_decrement_ref_count2(right_value664, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 1799 "05function.c"
                    block_549=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value665=parse_block(info,(_Bool)0,constructor__471))));
                    come_call_finalizer3(right_value665,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
                    # 1801 "05function.c"
                    static__550=(_Bool)0;
                    # 1807 "05function.c"
                    # 1802 "05function.c"
                    if(result_type_469->mStatic) {
                        # 1803 "05function.c"
                        result_type_469->mStatic=(_Bool)0;
                        # 1804 "05function.c"
                        static__550=(_Bool)1;
                    }
                    # 1812 "05function.c"
                    # 1807 "05function.c"
                    if(_if_conditional524=version_490>0,                    _if_conditional524) {
                        # 1808 "05function.c"
                        new_fun_name_551=(char*)come_increment_ref_count(((char*)(right_value667=xsprintf("%s_v%d",((char*)(right_value666=__builtin_string(fun_name_479))),version_490))));
                        right_value666 = come_decrement_ref_count2(right_value666, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value667 = come_decrement_ref_count2(right_value667, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1809 "05function.c"
                        __dec_obj147=fun_name_479;
                        fun_name_479=(char*)come_increment_ref_count(((char*)(right_value668=__builtin_string(new_fun_name_551))));
                        __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value668 = come_decrement_ref_count2(right_value668, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        new_fun_name_551 = come_decrement_ref_count2(new_fun_name_551, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 1819 "05function.c"
                    fun_552=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value674=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value669=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1812, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value670=__builtin_string(fun_name_479)))),(struct sType*)come_increment_ref_count(result_type_469),(struct list$1sTypeph*)come_increment_ref_count(param_types_484),(struct list$1charph*)come_increment_ref_count(param_names_485),(struct list$1charph*)come_increment_ref_count(param_default_parametors_486),(_Bool)0,var_args_487,(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value671=sBlock_clone(block_549)))),static__550,(char*)come_increment_ref_count(((char*)(right_value672=buffer_to_string(header_buf_489)))),(char*)come_increment_ref_count(((char*)(right_value673=__builtin_string(info->sname)))),info))));
                    come_call_finalizer3(right_value669,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                    right_value670 = come_decrement_ref_count2(right_value670, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value671,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
                    right_value672 = come_decrement_ref_count2(right_value672, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value673 = come_decrement_ref_count2(right_value673, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value674,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                    # 1833 "05function.c"
                    # 1821 "05function.c"
                    if(info->in_class) {
                        # 1822 "05function.c"
                        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value675=string_clone(fun_name_479)))),(struct sFun*)come_increment_ref_count(fun_552));
                        right_value675 = come_decrement_ref_count2(right_value675, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        # 1825 "05function.c"
                        fun2_553=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value676=__builtin_string(fun_name_479))));
                        right_value676 = come_decrement_ref_count2(right_value676, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1830 "05function.c"
                        # 1826 "05function.c"
                        if(_if_conditional526=fun2_553==((void*)0)||fun2_553->mExternal,                        _if_conditional526) {
                            # 1828 "05function.c"
                            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value677=string_clone(fun_name_479)))),(struct sFun*)come_increment_ref_count(fun_552));
                            right_value677 = come_decrement_ref_count2(right_value677, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                    }
                    # 1833 "05function.c"
                    base_fun_name_480 = come_decrement_ref_count2(base_fun_name_480, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    # 1834 "05function.c"
                    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1834, "struct sNode");
                    _inf_obj_value5=come_increment_ref_count(((struct sFunNode*)(right_value679=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value678=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1834, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_552),info))));
                    _inf_value5->_protocol_obj=_inf_obj_value5;
                    _inf_value5->finalize=(void*)sFunNode_finalize;
                    _inf_value5->clone=(void*)sFunNode_clone;
                    _inf_value5->compile=(void*)sFunNode_compile;
                    _inf_value5->sline=(void*)sNodeBase_sline;
                    _inf_value5->sname=(void*)sNodeBase_sname;
                    _inf_value5->terminated=(void*)sFunNode_terminated;
                    _inf_value5->kind=(void*)sFunNode_kind;
                    __result229__ = __result_obj__ = ((struct sNode*)(right_value683=_inf_value5));
                    come_call_finalizer3(header_531,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(block_549,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(fun_552,sFun_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_469,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_470 = come_decrement_ref_count2(var_name_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_479 = come_decrement_ref_count2(fun_name_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_484,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_names_485,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_default_parametors_486,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(header_buf_489,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value678,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value679,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value683) { right_value683 = come_decrement_ref_count2(right_value683, ((struct sNode*)right_value683)->finalize, ((struct sNode*)right_value683)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result229__;
                    come_call_finalizer3(header_531,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(block_549,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(fun_552,sFun_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    # 1911 "05function.c"
                    # 1836 "05function.c"
                    if(_if_conditional533=xisalpha(*info->p)||*info->p==95||*info->p==59,                    _if_conditional533) {
                        # 1842 "05function.c"
                        # 1837 "05function.c"
                        if(_if_conditional534=version_490>0,                        _if_conditional534) {
                            # 1838 "05function.c"
                            new_fun_name_555=(char*)come_increment_ref_count(((char*)(right_value684=xsprintf("%s_v%d",fun_name_479,version_490))));
                            right_value684 = come_decrement_ref_count2(right_value684, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1839 "05function.c"
                            __dec_obj150=fun_name_479;
                            fun_name_479=(char*)come_increment_ref_count(((char*)(right_value685=__builtin_string(new_fun_name_555))));
                            __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value685 = come_decrement_ref_count2(right_value685, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            new_fun_name_555 = come_decrement_ref_count2(new_fun_name_555, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 1905 "05function.c"
                        # 1842 "05function.c"
                        if(_if_conditional535=*info->p==59,                        _if_conditional535) {
                            # 1843 "05function.c"
                            info->p++;
                            # 1844 "05function.c"
                            skip_spaces_and_lf(info);
                            # 1846 "05function.c"
                            result_type_469->mStatic=(_Bool)0;
                            # 1852 "05function.c"
                            fun_556=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value690=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value686=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1848, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value687=__builtin_string(fun_name_479)))),(struct sType*)come_increment_ref_count(result_type_469),(struct list$1sTypeph*)come_increment_ref_count(param_types_484),(struct list$1charph*)come_increment_ref_count(param_names_485),(struct list$1charph*)come_increment_ref_count(param_default_parametors_486),(_Bool)1,var_args_487,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value688=buffer_to_string(header_buf_489)))),(char*)come_increment_ref_count(((char*)(right_value689=__builtin_string(info->sname)))),info))));
                            come_call_finalizer3(right_value686,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                            right_value687 = come_decrement_ref_count2(right_value687, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value688 = come_decrement_ref_count2(right_value688, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value689 = come_decrement_ref_count2(right_value689, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value690,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                            # 1854 "05function.c"
                            fun2_557=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value691=__builtin_string(fun_name_479))));
                            right_value691 = come_decrement_ref_count2(right_value691, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1860 "05function.c"
                            # 1855 "05function.c"
                            if(_if_conditional536=fun2_557==((void*)0)||fun2_557->mExternal,                            _if_conditional536) {
                                # 1857 "05function.c"
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value692=string_clone(fun_name_479)))),(struct sFun*)come_increment_ref_count(fun_556));
                                right_value692 = come_decrement_ref_count2(right_value692, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 1860 "05function.c"
                            base_fun_name_480 = come_decrement_ref_count2(base_fun_name_480, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            # 1862 "05function.c"
                            source_tail_558=info->p;
                            # 1864 "05function.c"
                            header_559=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value694=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value693=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1864, "buffer"))))))));
                            come_call_finalizer3(right_value693,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value694,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            # 1865 "05function.c"
                            buffer_append(header_559,source_head_468,source_tail_558-source_head_468);
                            # 1867 "05function.c"
                            add_come_code_at_come_header(info,"%s",((char*)(right_value695=buffer_to_string(header_559))));
                            right_value695 = come_decrement_ref_count2(right_value695, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1869 "05function.c"
                            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1869, "struct sNode");
                            _inf_obj_value6=come_increment_ref_count(((struct sFunNode*)(right_value697=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value696=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1869, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_556),info))));
                            _inf_value6->_protocol_obj=_inf_obj_value6;
                            _inf_value6->finalize=(void*)sFunNode_finalize;
                            _inf_value6->clone=(void*)sFunNode_clone;
                            _inf_value6->compile=(void*)sFunNode_compile;
                            _inf_value6->sline=(void*)sNodeBase_sline;
                            _inf_value6->sname=(void*)sNodeBase_sname;
                            _inf_value6->terminated=(void*)sFunNode_terminated;
                            _inf_value6->kind=(void*)sFunNode_kind;
                            __result232__ = __result_obj__ = ((struct sNode*)(right_value701=_inf_value6));
                            come_call_finalizer3(fun_556,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_559,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type_469,sType_finalize, 0, 0, 0, 0, (void*)0);
                            var_name_470 = come_decrement_ref_count2(var_name_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            fun_name_479 = come_decrement_ref_count2(fun_name_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_484,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_names_485,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_default_parametors_486,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_buf_489,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value696,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value697,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value701) { right_value701 = come_decrement_ref_count2(right_value701, ((struct sNode*)right_value701)->finalize, ((struct sNode*)right_value701)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result232__;
                            come_call_finalizer3(fun_556,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_559,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            # 1872 "05function.c"
                            asm_fun_561=(char*)come_increment_ref_count(((char*)(right_value702=parse_attribute(info))));
                            right_value702 = come_decrement_ref_count2(right_value702, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1878 "05function.c"
                            # 1874 "05function.c"
                            if(_if_conditional543=string_operator_not_equals(asm_fun_561,""),                            _if_conditional543) {
                                # 1875 "05function.c"
                                __dec_obj153=fun_name_479;
                                fun_name_479=(char*)come_increment_ref_count(((char*)(right_value703=__builtin_string(asm_fun_561))));
                                __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value703 = come_decrement_ref_count2(right_value703, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 1878 "05function.c"
                            (come_push_stackframe("05function.c", 1878, 9),__exception_result_var_b4=expected_next_character(59,info), come_pop_stackframe(), __exception_result_var_b4);
                            # 1880 "05function.c"
                            result_type_469->mStatic=(_Bool)0;
                            # 1886 "05function.c"
                            fun_562=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value708=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value704=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1882, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value705=__builtin_string(fun_name_479)))),(struct sType*)come_increment_ref_count(result_type_469),(struct list$1sTypeph*)come_increment_ref_count(param_types_484),(struct list$1charph*)come_increment_ref_count(param_names_485),(struct list$1charph*)come_increment_ref_count(param_default_parametors_486),(_Bool)1,var_args_487,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value706=buffer_to_string(header_buf_489)))),(char*)come_increment_ref_count(((char*)(right_value707=__builtin_string(info->sname)))),info))));
                            come_call_finalizer3(right_value704,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                            right_value705 = come_decrement_ref_count2(right_value705, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value706 = come_decrement_ref_count2(right_value706, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value707 = come_decrement_ref_count2(right_value707, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value708,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                            # 1888 "05function.c"
                            fun2_563=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value709=__builtin_string(fun_name_479))));
                            right_value709 = come_decrement_ref_count2(right_value709, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1894 "05function.c"
                            # 1889 "05function.c"
                            if(_if_conditional544=fun2_563==((void*)0)||fun2_563->mExternal,                            _if_conditional544) {
                                # 1891 "05function.c"
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value710=string_clone(fun_name_479)))),(struct sFun*)come_increment_ref_count(fun_562));
                                right_value710 = come_decrement_ref_count2(right_value710, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 1894 "05function.c"
                            base_fun_name_480 = come_decrement_ref_count2(base_fun_name_480, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            # 1896 "05function.c"
                            source_tail_564=info->p;
                            # 1898 "05function.c"
                            header_565=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value712=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value711=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1898, "buffer"))))))));
                            come_call_finalizer3(right_value711,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value712,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            # 1899 "05function.c"
                            buffer_append(header_565,source_head_468,source_tail_564-source_head_468);
                            # 1901 "05function.c"
                            add_come_code_at_come_header(info,"%s",((char*)(right_value713=buffer_to_string(header_565))));
                            right_value713 = come_decrement_ref_count2(right_value713, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1903 "05function.c"
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1903, "struct sNode");
                            _inf_obj_value7=come_increment_ref_count(((struct sFunNode*)(right_value715=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value714=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1903, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_562),info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sFunNode_finalize;
                            _inf_value7->clone=(void*)sFunNode_clone;
                            _inf_value7->compile=(void*)sFunNode_compile;
                            _inf_value7->sline=(void*)sNodeBase_sline;
                            _inf_value7->sname=(void*)sNodeBase_sname;
                            _inf_value7->terminated=(void*)sFunNode_terminated;
                            _inf_value7->kind=(void*)sFunNode_kind;
                            __result235__ = __result_obj__ = ((struct sNode*)(right_value719=_inf_value7));
                            asm_fun_561 = come_decrement_ref_count2(asm_fun_561, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(fun_562,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_565,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type_469,sType_finalize, 0, 0, 0, 0, (void*)0);
                            var_name_470 = come_decrement_ref_count2(var_name_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            fun_name_479 = come_decrement_ref_count2(fun_name_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_484,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_names_485,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_default_parametors_486,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_buf_489,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value714,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value715,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value719) { right_value719 = come_decrement_ref_count2(right_value719, ((struct sNode*)right_value719)->finalize, ((struct sNode*)right_value719)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result235__;
                            asm_fun_561 = come_decrement_ref_count2(asm_fun_561, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(fun_562,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_565,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        # 1907 "05function.c"
                        err_msg(info,"invalid character(%c)(2)\n",*info->p);
                        # 1908 "05function.c"
                        exit(2);
                    }
                }
            }
        }
    }
    # 1911 "05function.c"
    base_fun_name_480 = come_decrement_ref_count2(base_fun_name_480, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    # 1912 "05function.c"
    __result236__ = __result_obj__ = (struct sNode*)((void*)0);
    come_call_finalizer3(result_type_469,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_470 = come_decrement_ref_count2(var_name_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_479 = come_decrement_ref_count2(fun_name_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_484,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_485,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_486,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(header_buf_489,buffer_finalize, 0, 0, 0, 0, (void*)0);
    return __result236__;
    come_call_finalizer3(result_type_469,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_470 = come_decrement_ref_count2(var_name_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_479 = come_decrement_ref_count2(fun_name_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_484,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_485,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_486,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(header_buf_489,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
void* __result_obj__;
_Bool _if_conditional473;
_Bool _if_conditional474;
_Bool _if_conditional475;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
        # 0 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
        if(_if_conditional473=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional473) {
            # 0 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            come_call_finalizer3(self->v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 2 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
        # 1 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
        if(_if_conditional474=self!=((void*)0)&&self->v2!=((void*)0),        _if_conditional474) {
            # 1 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 3 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
        # 2 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
        if(_if_conditional475=self!=((void*)0)&&self->v3!=((void*)0),        _if_conditional475) {
            # 2 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
void* __result_obj__;
_Bool _if_conditional480;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sLambdaNode_finalize"
            # 0 "sLambdaNode_finalize"
            if(_if_conditional480=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional480) {
                # 0 "sLambdaNode_finalize"
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* __result_obj__;
_Bool _if_conditional481;
struct sLambdaNode* __result204__;
void* right_value617;
struct sLambdaNode* result_497;
_Bool _if_conditional482;
_Bool _if_conditional483;
void* right_value618;
char* __dec_obj146;
_Bool _if_conditional484;
struct sLambdaNode* __result205__;
memset(&__result_obj__, 0, sizeof(void*));
right_value617 = (void*)0;
memset(&result_497, 0, sizeof(struct sLambdaNode*));
right_value618 = (void*)0;
            # 3 "sLambdaNode_clone"
            # 2 "sLambdaNode_clone"
            if(_if_conditional481=self==(void*)0,            _if_conditional481) {
                # 2 "sLambdaNode_clone"
                __result204__ = __result_obj__ = (void*)0;
                return __result204__;
            }
            # 3 "sLambdaNode_clone"
            result_497=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(right_value617=(struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "sLambdaNode"))));
            come_call_finalizer3(right_value617,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
            # 5 "sLambdaNode_clone"
            # 4 "sLambdaNode_clone"
            if(_if_conditional482=self!=((void*)0),            _if_conditional482) {
                # 4 "sLambdaNode_clone"
                result_497->sline=self->sline;
            }
            # 6 "sLambdaNode_clone"
            # 5 "sLambdaNode_clone"
            if(_if_conditional483=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional483) {
                # 5 "sLambdaNode_clone"
                __dec_obj146=result_497->sname;
                result_497->sname=(char*)come_increment_ref_count(((char*)(right_value618=string_clone(self->sname))));
                __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value618 = come_decrement_ref_count2(right_value618, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 7 "sLambdaNode_clone"
            # 6 "sLambdaNode_clone"
            if(_if_conditional484=self!=((void*)0),            _if_conditional484) {
                # 6 "sLambdaNode_clone"
                result_497->mFun=self->mFun;
            }
            # 7 "sLambdaNode_clone"
            __result205__ = __result_obj__ = result_497;
            come_call_finalizer3(result_497,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
            return __result205__;
            come_call_finalizer3(result_497,sLambdaNode_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional485;
int __result207__;
int __result208__;
memset(&__result_obj__, 0, sizeof(void*));
            # 354 "./neo-c.h"
            # 351 "./neo-c.h"
            if(_if_conditional485=self==((void*)0),            _if_conditional485) {
                # 352 "./neo-c.h"
                __result207__ = 0;
                return __result207__;
            }
            # 354 "./neo-c.h"
            __result208__ = self->len;
            return __result208__;
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
void* __result_obj__;
_Bool _if_conditional487;
unsigned int hash_521;
unsigned int it_522;
_Bool _while_condtional59;
_Bool _if_conditional499;
_Bool _if_conditional500;
_Bool _if_conditional501;
_Bool _if_conditional502;
_Bool _if_conditional503;
_Bool _if_conditional504;
_Bool _if_conditional505;
_Bool _if_conditional506;
_Bool same_key_exist_523;
char* it2_524;
_Bool _if_conditional507;
_Bool _if_conditional508;
struct map$2charphsGenericsFunph* __result220__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_521, 0, sizeof(unsigned int));
memset(&it_522, 0, sizeof(unsigned int));
memset(&same_key_exist_523, 0, sizeof(_Bool));
memset(&it2_524, 0, sizeof(char*));
                # 1368 "./neo-c.h"
                # 1365 "./neo-c.h"
                if(_if_conditional487=self->len*10>=self->size,                _if_conditional487) {
                    # 1366 "./neo-c.h"
                    map$2charphsGenericsFunph_rehash(self);
                }
                # 1368 "./neo-c.h"
                hash_521=string_get_hash_key(key)%self->size;
                # 1369 "./neo-c.h"
                it_522=hash_521;
                # 1427 "./neo-c.h"
                while(_while_condtional59=(_Bool)1,                _while_condtional59) {
                    # 1425 "./neo-c.h"
                    # 1372 "./neo-c.h"
                    if(_if_conditional499=self->item_existance[it_522],                    _if_conditional499) {
                        # 1395 "./neo-c.h"
                        # 1374 "./neo-c.h"
                        if(_if_conditional500=string_equals(self->keys[it_522],key),                        _if_conditional500) {
                            # 1385 "./neo-c.h"
                            # 1376 "./neo-c.h"
                            if(_if_conditional501=1,                            _if_conditional501) {
                                # 1377 "./neo-c.h"
                                list$1charp_remove(self->key_list,self->keys[it_522]);
                                # 1378 "./neo-c.h"
                                self->keys[it_522] = come_decrement_ref_count2(self->keys[it_522], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                # 1379 "./neo-c.h"
                                self->keys[it_522]=(char*)come_increment_ref_count(key);
                            }
                            else {
                                # 1382 "./neo-c.h"
                                list$1charp_remove(self->key_list,self->keys[it_522]);
                                # 1383 "./neo-c.h"
                                self->keys[it_522]=key;
                            }
                            # 1392 "./neo-c.h"
                            # 1385 "./neo-c.h"
                            if(_if_conditional502=1,                            _if_conditional502) {
                                # 1386 "./neo-c.h"
                                come_call_finalizer3(self->items[it_522],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                                # 1387 "./neo-c.h"
                                self->items[it_522]=(struct sGenericsFun*)come_increment_ref_count(item);
                            }
                            else {
                                # 1390 "./neo-c.h"
                                self->items[it_522]=item;
                            }
                            # 1392 "./neo-c.h"
                            break;
                        }
                        # 1395 "./neo-c.h"
                        it_522++;
                        # 1405 "./neo-c.h"
                        # 1397 "./neo-c.h"
                        if(_if_conditional503=it_522>=self->size,                        _if_conditional503) {
                            # 1398 "./neo-c.h"
                            it_522=0;
                        }
                        else {
                            # 1405 "./neo-c.h"
                            # 1400 "./neo-c.h"
                            if(_if_conditional504=it_522==hash_521,                            _if_conditional504) {
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
                        self->item_existance[it_522]=(_Bool)1;
                        # 1414 "./neo-c.h"
                        # 1408 "./neo-c.h"
                        if(_if_conditional505=1,                        _if_conditional505) {
                            # 1409 "./neo-c.h"
                            self->keys[it_522]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            # 1412 "./neo-c.h"
                            self->keys[it_522]=key;
                        }
                        # 1421 "./neo-c.h"
                        # 1414 "./neo-c.h"
                        if(_if_conditional506=1,                        _if_conditional506) {
                            # 1415 "./neo-c.h"
                            self->items[it_522]=(struct sGenericsFun*)come_increment_ref_count(item);
                        }
                        else {
                            # 1418 "./neo-c.h"
                            self->items[it_522]=item;
                        }
                        # 1421 "./neo-c.h"
                        self->len++;
                        # 1423 "./neo-c.h"
                        break;
                    }
                }
                # 1427 "./neo-c.h"
                same_key_exist_523=(_Bool)0;
                # 1435 "./neo-c.h"
                for(                it2_524=list$1charp_begin(self->key_list);                !list$1charp_end(self->key_list);                it2_524=list$1charp_next(self->key_list)                ){
                    # 1433 "./neo-c.h"
                    # 1430 "./neo-c.h"
                    if(_if_conditional507=string_equals(it2_524,key),                    _if_conditional507) {
                        # 1431 "./neo-c.h"
                        same_key_exist_523=(_Bool)1;
                    }
                }
                # 1439 "./neo-c.h"
                # 1435 "./neo-c.h"
                if(_if_conditional508=!same_key_exist_523,                _if_conditional508) {
                    # 1436 "./neo-c.h"
                    list$1charp_push_back(self->key_list,key);
                }
                # 1439 "./neo-c.h"
                __result220__ = __result_obj__ = self;
                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer3(item,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result220__;
                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer3(item,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
int size_504;
void* right_value630;
char** keys_505;
void* right_value631;
struct sGenericsFun** items_506;
void* right_value632;
_Bool* item_existance_507;
int len_508;
char* it_511;
struct sGenericsFun* default_value_514;
struct sGenericsFun* it2_517;
unsigned int hash_518;
int n_519;
_Bool _while_condtional58;
_Bool _if_conditional496;
_Bool _if_conditional497;
_Bool _if_conditional498;
struct sGenericsFun* default_value_520;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_504, 0, sizeof(int));
right_value630 = (void*)0;
memset(&keys_505, 0, sizeof(char**));
right_value631 = (void*)0;
memset(&items_506, 0, sizeof(struct sGenericsFun**));
right_value632 = (void*)0;
memset(&item_existance_507, 0, sizeof(_Bool*));
memset(&len_508, 0, sizeof(int));
memset(&it_511, 0, sizeof(char*));
memset(&default_value_514, 0, sizeof(struct sGenericsFun*));
memset(&it2_517, 0, sizeof(struct sGenericsFun*));
memset(&hash_518, 0, sizeof(unsigned int));
memset(&n_519, 0, sizeof(int));
memset(&default_value_520, 0, sizeof(struct sGenericsFun*));
                        # 1312 "./neo-c.h"
                        size_504=self->size*10;
                        # 1313 "./neo-c.h"
                        keys_505=(char**)come_increment_ref_count(((char**)(right_value630=(char**)come_calloc(1, sizeof(char*)*(1*(size_504)), "./neo-c.h", 1313, "char*%"))));
                        right_value630 = come_decrement_ref_count2(right_value630, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1314 "./neo-c.h"
                        items_506=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(right_value631=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_504)), "./neo-c.h", 1314, "sGenericsFun*%"))));
                        come_call_finalizer3(right_value631,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
                        # 1315 "./neo-c.h"
                        item_existance_507=(_Bool*)come_increment_ref_count(((_Bool*)(right_value632=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_504)), "./neo-c.h", 1315, "bool"))));
                        right_value632 = come_decrement_ref_count2(right_value632, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1317 "./neo-c.h"
                        len_508=0;
                        # 1352 "./neo-c.h"
                        for(                        it_511=map$2charphsGenericsFunph_begin(self);                        !map$2charphsGenericsFunph_end(self);                        it_511=map$2charphsGenericsFunph_next(self)                        ){
                            # 1320 "./neo-c.h"
                            # 1321 "./neo-c.h"
                            memset(&default_value_514,0,sizeof(struct sGenericsFun*));
                            # 1322 "./neo-c.h"
                            it2_517=map$2charphsGenericsFunph_at(self,it_511,default_value_514);
                            # 1323 "./neo-c.h"
                            hash_518=string_get_hash_key(it_511)%size_504;
                            # 1324 "./neo-c.h"
                            n_519=hash_518;
                            # 1350 "./neo-c.h"
                            while(_while_condtional58=(_Bool)1,                            _while_condtional58) {
                                # 1349 "./neo-c.h"
                                # 1327 "./neo-c.h"
                                if(_if_conditional496=item_existance_507[n_519],                                _if_conditional496) {
                                    # 1329 "./neo-c.h"
                                    n_519++;
                                    # 1339 "./neo-c.h"
                                    # 1331 "./neo-c.h"
                                    if(_if_conditional497=n_519>=size_504,                                    _if_conditional497) {
                                        # 1332 "./neo-c.h"
                                        n_519=0;
                                    }
                                    else {
                                        # 1339 "./neo-c.h"
                                        # 1334 "./neo-c.h"
                                        if(_if_conditional498=n_519==hash_518,                                        _if_conditional498) {
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
                                    item_existance_507[n_519]=(_Bool)1;
                                    # 1342 "./neo-c.h"
                                    keys_505[n_519]=it_511;
                                    # 1343 "./neo-c.h"
                                    # 1344 "./neo-c.h"
                                    items_506[n_519]=map$2charphsGenericsFunph_at(self,it_511,default_value_520);
                                    # 1346 "./neo-c.h"
                                    len_508++;
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
                        self->keys=keys_505;
                        # 1357 "./neo-c.h"
                        self->items=items_506;
                        # 1358 "./neo-c.h"
                        self->item_existance=item_existance_507;
                        # 1360 "./neo-c.h"
                        self->size=size_504;
                        # 1361 "./neo-c.h"
                        self->len=len_508;
}

static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool _if_conditional488;
char* result_509;
char* __result209__;
_Bool _if_conditional489;
char* __result210__;
char* result_510;
char* __result211__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_509, 0, sizeof(char*));
memset(&result_510, 0, sizeof(char*));
                            # 1279 "./neo-c.h"
                            # 1274 "./neo-c.h"
                            if(_if_conditional488=self==((void*)0),                            _if_conditional488) {
                                # 1275 "./neo-c.h"
                                # 1276 "./neo-c.h"
                                memset(&result_509,0,sizeof(char*));
                                # 1277 "./neo-c.h"
                                __result209__ = __result_obj__ = result_509;
                                return __result209__;
                            }
                            # 1279 "./neo-c.h"
                            self->key_list->it=self->key_list->head;
                            # 1285 "./neo-c.h"
                            # 1281 "./neo-c.h"
                            if(self->key_list->it) {
                                # 1282 "./neo-c.h"
                                __result210__ = __result_obj__ = self->key_list->it->item;
                                return __result210__;
                            }
                            # 1285 "./neo-c.h"
                            # 1286 "./neo-c.h"
                            memset(&result_510,0,sizeof(char*));
                            # 1287 "./neo-c.h"
                            __result211__ = __result_obj__ = result_510;
                            return __result211__;
}

static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool __result212__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1308 "./neo-c.h"
                            __result212__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                            return __result212__;
}

static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool _if_conditional490;
char* result_512;
char* __result213__;
_Bool _if_conditional491;
char* __result214__;
char* result_513;
char* __result215__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_512, 0, sizeof(char*));
memset(&result_513, 0, sizeof(char*));
                            # 1296 "./neo-c.h"
                            # 1291 "./neo-c.h"
                            if(_if_conditional490=self==((void*)0)||self->key_list->it==((void*)0),                            _if_conditional490) {
                                # 1292 "./neo-c.h"
                                # 1293 "./neo-c.h"
                                memset(&result_512,0,sizeof(char*));
                                # 1294 "./neo-c.h"
                                __result213__ = __result_obj__ = result_512;
                                return __result213__;
                            }
                            # 1296 "./neo-c.h"
                            self->key_list->it=self->key_list->it->next;
                            # 1302 "./neo-c.h"
                            # 1298 "./neo-c.h"
                            if(self->key_list->it) {
                                # 1299 "./neo-c.h"
                                __result214__ = __result_obj__ = self->key_list->it->item;
                                return __result214__;
                            }
                            # 1302 "./neo-c.h"
                            # 1303 "./neo-c.h"
                            memset(&result_513,0,sizeof(char*));
                            # 1304 "./neo-c.h"
                            __result215__ = __result_obj__ = result_513;
                            return __result215__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_515;
unsigned int it_516;
_Bool _while_condtional57;
_Bool _if_conditional492;
_Bool _if_conditional493;
struct sGenericsFun* __result216__;
_Bool _if_conditional494;
_Bool _if_conditional495;
struct sGenericsFun* __result217__;
struct sGenericsFun* __result218__;
struct sGenericsFun* __result219__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_515, 0, sizeof(unsigned int));
memset(&it_516, 0, sizeof(unsigned int));
                                # 1201 "./neo-c.h"
                                hash_515=string_get_hash_key(((char*)key))%self->size;
                                # 1202 "./neo-c.h"
                                it_516=hash_515;
                                # 1226 "./neo-c.h"
                                while(_while_condtional57=(_Bool)1,                                _while_condtional57) {
                                    # 1224 "./neo-c.h"
                                    # 1205 "./neo-c.h"
                                    if(_if_conditional492=self->item_existance[it_516],                                    _if_conditional492) {
                                        # 1212 "./neo-c.h"
                                        # 1207 "./neo-c.h"
                                        if(_if_conditional493=string_equals(self->keys[it_516],key),                                        _if_conditional493) {
                                            # 1209 "./neo-c.h"
                                            __result216__ = __result_obj__ = self->items[it_516];
                                            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result216__;
                                        }
                                        # 1212 "./neo-c.h"
                                        it_516++;
                                        # 1220 "./neo-c.h"
                                        # 1214 "./neo-c.h"
                                        if(_if_conditional494=it_516>=self->size,                                        _if_conditional494) {
                                            # 1215 "./neo-c.h"
                                            it_516=0;
                                        }
                                        else {
                                            # 1220 "./neo-c.h"
                                            # 1217 "./neo-c.h"
                                            if(_if_conditional495=it_516==hash_515,                                            _if_conditional495) {
                                                # 1218 "./neo-c.h"
                                                __result217__ = __result_obj__ = default_value;
                                                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result217__;
                                            }
                                        }
                                    }
                                    else {
                                        # 1222 "./neo-c.h"
                                        __result218__ = __result_obj__ = default_value;
                                        come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result218__;
                                    }
                                }
                                # 1226 "./neo-c.h"
                                __result219__ = __result_obj__ = default_value;
                                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result219__;
                                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional512;
int __result223__;
int __result224__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 354 "./neo-c.h"
                            # 351 "./neo-c.h"
                            if(_if_conditional512=self==((void*)0),                            _if_conditional512) {
                                # 352 "./neo-c.h"
                                __result223__ = 0;
                                return __result223__;
                            }
                            # 354 "./neo-c.h"
                            __result224__ = self->len;
                            return __result224__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional514;
struct list_item$1charph* it_536;
int i_537;
_Bool _while_condtional60;
_Bool _if_conditional515;
char* __result225__;
char* default_value_538;
char* __result226__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_536, 0, sizeof(struct list_item$1charph*));
memset(&i_537, 0, sizeof(int));
memset(&default_value_538, 0, sizeof(char*));
                                    # 673 "./neo-c.h"
                                    # 669 "./neo-c.h"
                                    if(_if_conditional514=position<0,                                    _if_conditional514) {
                                        # 670 "./neo-c.h"
                                        position+=self->len;
                                    }
                                    # 673 "./neo-c.h"
                                    it_536=self->head;
                                    # 674 "./neo-c.h"
                                    i_537=0;
                                    # 681 "./neo-c.h"
                                    while(_while_condtional60=it_536!=((void*)0),                                    _while_condtional60) {
                                        # 679 "./neo-c.h"
                                        # 676 "./neo-c.h"
                                        if(_if_conditional515=position==i_537,                                        _if_conditional515) {
                                            # 677 "./neo-c.h"
                                            __result225__ = __result_obj__ = it_536->item;
                                            return __result225__;
                                        }
                                        # 679 "./neo-c.h"
                                        it_536=it_536->next;
                                        # 680 "./neo-c.h"
                                        i_537++;
                                    }
                                    # 683 "./neo-c.h"
                                    # 684 "./neo-c.h"
                                    memset(&default_value_538,0,sizeof(char*));
                                    # 685 "./neo-c.h"
                                    __result226__ = __result_obj__ = default_value_538;
                                    default_value_538 = come_decrement_ref_count2(default_value_538, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                    return __result226__;
                                    default_value_538 = come_decrement_ref_count2(default_value_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_567;
char* __dec_obj156;
char* last_code2_568;
char* __dec_obj157;
char* last_code3_569;
char* __dec_obj158;
struct sClass* current_stack_frame_struct_570;
struct sFun* finalizer_571;
void* right_value720;
char* real_fun_name_572;
void* right_value721;
struct sType* type2_573;
struct sClass* klass_574;
_Bool _if_conditional551;
void* right_value722;
void* right_value723;
struct buffer* source_575;
struct list$1tuple2$2charphsTypephph* o2_saved_576;
struct tuple2$2charphsTypeph* it_579;
struct tuple2$2charphsTypeph* multiple_assign_var10;
char* name_582;
struct sType* field_type_583;
_Bool _if_conditional556;
_Bool _if_conditional557;
char* p_585;
int sline_586;
char* sname_587;
char* head_588;
struct buffer* source3_589;
struct buffer* __dec_obj159;
void* right_value724;
char* __dec_obj160;
void* right_value725;
struct sBlock* block_590;
void* right_value726;
void* right_value727;
struct sType* result_type_591;
void* right_value728;
char* name_592;
void* right_value729;
struct sType* self_type_593;
_Bool _if_conditional558;
struct sType* __list_values21___594[1];
void* right_value730;
void* right_value731;
struct list$1sTypeph* param_types_595;
void* right_value732;
char* __list_values22___596[1];
void* right_value733;
void* right_value734;
struct list$1charph* param_names_597;
void* right_value735;
void* right_value736;
struct list$1charph* param_default_parametors_598;
void* right_value737;
void* right_value738;
struct buffer* header_buf_599;
void* right_value739;
int i_600;
struct sType* param_type_601;
char* param_name_602;
void* right_value740;
_Bool _if_conditional559;
void* right_value741;
void* right_value742;
void* right_value743;
void* right_value744;
struct sFun* fun_603;
void* right_value745;
struct sFun* fun2_604;
_Bool _if_conditional560;
void* right_value746;
void* right_value747;
void* right_value748;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* right_value752;
struct sNode* node_606;
_Bool _if_conditional567;
struct buffer* __dec_obj163;
char* __dec_obj164;
char* __dec_obj165;
char* __dec_obj166;
char* __dec_obj167;
void* right_value753;
void* right_value754;
struct tuple2$2sFunpcharph* __result247__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_567, 0, sizeof(char*));
memset(&last_code2_568, 0, sizeof(char*));
memset(&last_code3_569, 0, sizeof(char*));
memset(&current_stack_frame_struct_570, 0, sizeof(struct sClass*));
memset(&finalizer_571, 0, sizeof(struct sFun*));
right_value720 = (void*)0;
memset(&real_fun_name_572, 0, sizeof(char*));
right_value721 = (void*)0;
memset(&type2_573, 0, sizeof(struct sType*));
memset(&klass_574, 0, sizeof(struct sClass*));
right_value722 = (void*)0;
right_value723 = (void*)0;
memset(&source_575, 0, sizeof(struct buffer*));
memset(&o2_saved_576, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_579, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_582, 0, sizeof(char*));
memset(&field_type_583, 0, sizeof(struct sType*));
memset(&name_582, 0, sizeof(char*));
memset(&field_type_583, 0, sizeof(struct sType*));
memset(&p_585, 0, sizeof(char*));
memset(&sline_586, 0, sizeof(int));
memset(&sname_587, 0, sizeof(char*));
memset(&head_588, 0, sizeof(char*));
memset(&source3_589, 0, sizeof(struct buffer*));
right_value724 = (void*)0;
right_value725 = (void*)0;
memset(&block_590, 0, sizeof(struct sBlock*));
right_value726 = (void*)0;
right_value727 = (void*)0;
memset(&result_type_591, 0, sizeof(struct sType*));
right_value728 = (void*)0;
memset(&name_592, 0, sizeof(char*));
right_value729 = (void*)0;
memset(&self_type_593, 0, sizeof(struct sType*));
right_value730 = (void*)0;
right_value731 = (void*)0;
memset(&param_types_595, 0, sizeof(struct list$1sTypeph*));
right_value732 = (void*)0;
right_value733 = (void*)0;
right_value734 = (void*)0;
memset(&param_names_597, 0, sizeof(struct list$1charph*));
right_value735 = (void*)0;
right_value736 = (void*)0;
memset(&param_default_parametors_598, 0, sizeof(struct list$1charph*));
right_value737 = (void*)0;
right_value738 = (void*)0;
memset(&header_buf_599, 0, sizeof(struct buffer*));
right_value739 = (void*)0;
memset(&i_600, 0, sizeof(int));
memset(&param_type_601, 0, sizeof(struct sType*));
memset(&param_name_602, 0, sizeof(char*));
right_value740 = (void*)0;
right_value741 = (void*)0;
right_value742 = (void*)0;
right_value743 = (void*)0;
right_value744 = (void*)0;
memset(&fun_603, 0, sizeof(struct sFun*));
right_value745 = (void*)0;
memset(&fun2_604, 0, sizeof(struct sFun*));
right_value746 = (void*)0;
right_value747 = (void*)0;
right_value748 = (void*)0;
right_value752 = (void*)0;
memset(&node_606, 0, sizeof(struct sNode*));
right_value753 = (void*)0;
right_value754 = (void*)0;
    # 1917 "05function.c"
    last_code_567=(char*)come_increment_ref_count(info->module->mLastCode);
    # 1918 "05function.c"
    __dec_obj156=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1919 "05function.c"
    last_code2_568=(char*)come_increment_ref_count(info->module->mLastCode2);
    # 1920 "05function.c"
    __dec_obj157=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1921 "05function.c"
    last_code3_569=(char*)come_increment_ref_count(info->module->mLastCode3);
    # 1923 "05function.c"
    __dec_obj158=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 1925 "05function.c"
    current_stack_frame_struct_570=info->current_stack_frame_struct;
    # 1926 "05function.c"
    info->current_stack_frame_struct=((void*)0);
    # 1928 "05function.c"
    finalizer_571=((void*)0);
    # 1930 "05function.c"
    real_fun_name_572=(char*)come_increment_ref_count(((char*)(right_value720=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value720 = come_decrement_ref_count2(right_value720, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1932 "05function.c"
    type2_573=(struct sType*)come_increment_ref_count(((struct sType*)(right_value721=solve_generics(type,type,info))));
    come_call_finalizer3(right_value721,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 1934 "05function.c"
    type=type2_573;
    # 1936 "05function.c"
    klass_574=type->mClass;
    # 2043 "05function.c"
    # 1938 "05function.c"
    if(_if_conditional551=type->mPointerNum>0&&klass_574->mStruct,    _if_conditional551) {
        # 1939 "05function.c"
        source_575=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value723=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value722=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1939, "buffer"))))))));
        come_call_finalizer3(right_value722,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value723,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 1941 "05function.c"
        buffer_append_char(source_575,123);
        # 1943 "05function.c"
        klass_574=map$2charphsClassphp_operator_load_element(info->classes,klass_574->mName);
        # 1961 "05function.c"
        for(        o2_saved_576=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_574->mFields)),it_579=list$1tuple2$2charphsTypephph_begin((o2_saved_576));        !list$1tuple2$2charphsTypephph_end((o2_saved_576));        it_579=list$1tuple2$2charphsTypephph_next((o2_saved_576))        ){
            # 1945 "05function.c"
            multiple_assign_var10=it_579;
            name_582=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            field_type_583=(struct sType*)come_increment_ref_count(multiple_assign_var10->v2);
            # 1953 "05function.c"
            # 1947 "05function.c"
            if(_if_conditional556=string_operator_equals(type->mClass->mName,field_type_583->mClass->mName)&&type->mPointerNum==field_type_583->mPointerNum&&field_type_583->mHeap,            _if_conditional556) {
                # 1949 "05function.c"
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                # 1950 "05function.c"
                exit(2);
            }
            # 1959 "05function.c"
            # 1953 "05function.c"
            if(field_type_583->mHeap) {
                # 1954 "05function.c"
                char source2_584[1024];
                memset(&source2_584, 0, sizeof(char)                *(1024)                );
                # 1955 "05function.c"
                snprintf(source2_584,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n",name_582,name_582);
                # 1957 "05function.c"
                buffer_append_str(source_575,source2_584);
            }
            name_582 = come_decrement_ref_count2(name_582, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_583,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_576,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        # 1961 "05function.c"
        buffer_append_char(source_575,125);
        # 1963 "05function.c"
        p_585=info->p;
        # 1964 "05function.c"
        sline_586=info->sline;
        # 1965 "05function.c"
        sname_587=(char*)come_increment_ref_count(info->sname);
        # 1966 "05function.c"
        head_588=info->head;
        # 1967 "05function.c"
        source3_589=(struct buffer*)come_increment_ref_count(info->source);
        # 1969 "05function.c"
        __dec_obj159=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_575);
        come_call_finalizer3(__dec_obj159,buffer_finalize, 0, 0, 0, 0, (void*)0);
        # 1970 "05function.c"
        info->p=source_575->buf;
        # 1971 "05function.c"
        info->head=source_575->buf;
        # 1973 "05function.c"
        __dec_obj160=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value724=__builtin_string(real_fun_name_572))));
        __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value724 = come_decrement_ref_count2(right_value724, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1974 "05function.c"
        info->sline=0;
        # 1976 "05function.c"
        block_590=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value725=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer3(right_value725,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        # 1978 "05function.c"
        result_type_591=(struct sType*)come_increment_ref_count(((struct sType*)(right_value727=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value726=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1978, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer3(right_value726,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value727,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 1979 "05function.c"
        name_592=(char*)come_increment_ref_count(((char*)(right_value728=string_clone(real_fun_name_572))));
        right_value728 = come_decrement_ref_count2(right_value728, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1980 "05function.c"
        self_type_593=(struct sType*)come_increment_ref_count(((struct sType*)(right_value729=sType_clone(type))));
        come_call_finalizer3(right_value729,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 1981 "05function.c"
        self_type_593->mHeap=(_Bool)0;
        # 1985 "05function.c"
        # 1982 "05function.c"
        if(_if_conditional558=self_type_593->mPointerNum>1,        _if_conditional558) {
            # 1983 "05function.c"
            self_type_593->mPointerNum=1;
        }
        # 1985 "05function.c"
        {__list_values21___594[0]=come_increment_ref_count(self_type_593);
}        param_types_595=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value731=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value730=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1985, "struct list$1sTypeph")))),1,__list_values21___594))));
        come_call_finalizer3(right_value730,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value731,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 1986 "05function.c"
        {__list_values22___596[0]=come_increment_ref_count(((char*)(right_value732=__builtin_string("self"))));
}        param_names_597=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value734=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value733=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1986, "struct list$1charph")))),1,__list_values22___596))));
        right_value732 = come_decrement_ref_count2(right_value732, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value733,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value734,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 1987 "05function.c"
        param_default_parametors_598=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value736=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value735=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1987, "list$1charph"))))))));
        come_call_finalizer3(right_value735,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value736,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 1988 "05function.c"
        list$1charph_push_back(param_default_parametors_598,((void*)0));
        # 1990 "05function.c"
        header_buf_599=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value738=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value737=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1990, "buffer"))))))));
        come_call_finalizer3(right_value737,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value738,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 1992 "05function.c"
        buffer_append_str(header_buf_599,((char*)(right_value739=make_come_type_name_string(result_type_591,info))));
        right_value739 = come_decrement_ref_count2(right_value739, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1993 "05function.c"
        buffer_append_str(header_buf_599," ");
        # 1994 "05function.c"
        buffer_append_str(header_buf_599,real_fun_name_572);
        # 1995 "05function.c"
        buffer_append_str(header_buf_599,"(");
        # 2009 "05function.c"
        for(        i_600=0;        i_600<list$1sTypeph_length(param_types_595);        i_600++        ){
            # 1998 "05function.c"
            param_type_601=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_595,i_600), "05function.c", 1998, 10));
            # 1999 "05function.c"
            param_name_602=((char*)come_null_check(list$1charphp_operator_load_element(param_names_597,i_600), "05function.c", 1999, 11));
            # 2001 "05function.c"
            buffer_append_str(header_buf_599,((char*)(right_value740=make_come_type_name_string(param_type_601,info))));
            right_value740 = come_decrement_ref_count2(right_value740, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 2002 "05function.c"
            buffer_append_str(header_buf_599," ");
            # 2003 "05function.c"
            buffer_append_str(header_buf_599,param_name_602);
            # 2008 "05function.c"
            # 2005 "05function.c"
            if(_if_conditional559=i_600!=list$1sTypeph_length(param_types_595)-1,            _if_conditional559) {
                # 2006 "05function.c"
                buffer_append_str(header_buf_599,",");
            }
        }
        # 2009 "05function.c"
        buffer_append_str(header_buf_599,")");
        # 2011 "05function.c"
        result_type_591->mStatic=(_Bool)0;
        # 2019 "05function.c"
        fun_603=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value744=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value741=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2013, "sFun")))),(char*)come_increment_ref_count(name_592),(struct sType*)come_increment_ref_count(result_type_591),(struct list$1sTypeph*)come_increment_ref_count(param_types_595),(struct list$1charph*)come_increment_ref_count(param_names_597),(struct list$1charph*)come_increment_ref_count(param_default_parametors_598),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_590),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value742=buffer_to_string(header_buf_599)))),(char*)come_increment_ref_count(((char*)(right_value743=__builtin_string("")))),info))));
        come_call_finalizer3(right_value741,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value742 = come_decrement_ref_count2(right_value742, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value743 = come_decrement_ref_count2(right_value743, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value744,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        # 2021 "05function.c"
        fun2_604=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value745=__builtin_string(fun_name))));
        right_value745 = come_decrement_ref_count2(right_value745, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2027 "05function.c"
        # 2022 "05function.c"
        if(_if_conditional560=fun2_604==((void*)0)||fun2_604->mExternal,        _if_conditional560) {
            # 2024 "05function.c"
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value746=string_clone(name_592)))),(struct sFun*)come_increment_ref_count(fun_603));
            right_value746 = come_decrement_ref_count2(right_value746, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 2027 "05function.c"
        finalizer_571=fun_603;
        # 2029 "05function.c"
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2029, "struct sNode");
        _inf_obj_value8=come_increment_ref_count(((struct sFunNode*)(right_value748=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value747=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2029, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_603),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sFunNode_finalize;
        _inf_value8->clone=(void*)sFunNode_clone;
        _inf_value8->compile=(void*)sFunNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sFunNode_terminated;
        _inf_value8->kind=(void*)sFunNode_kind;
        node_606=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value752=_inf_value8)));
        come_call_finalizer3(right_value747,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value748,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value752) { right_value752 = come_decrement_ref_count2(right_value752, ((struct sNode*)right_value752)->finalize, ((struct sNode*)right_value752)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 2036 "05function.c"
        # 2031 "05function.c"
        if(_if_conditional567=!node_compile(node_606,info),        _if_conditional567) {
            # 2032 "05function.c"
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            # 2033 "05function.c"
            exit(2);
        }
        # 2036 "05function.c"
        __dec_obj163=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_589);
        come_call_finalizer3(__dec_obj163,buffer_finalize, 0, 0, 0, 0, (void*)0);
        # 2037 "05function.c"
        info->p=p_585;
        # 2038 "05function.c"
        info->head=head_588;
        # 2039 "05function.c"
        info->sline=sline_586;
        # 2040 "05function.c"
        __dec_obj164=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_587);
        __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_575,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_587 = come_decrement_ref_count2(sname_587, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_589,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_590,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_591,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_592 = come_decrement_ref_count2(name_592, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_593,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_595,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_597,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_598,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_599,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_603,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_606) { node_606 = come_decrement_ref_count2(node_606, ((struct sNode*)node_606)->finalize, ((struct sNode*)node_606)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 2043 "05function.c"
    info->current_stack_frame_struct=current_stack_frame_struct_570;
    # 2045 "05function.c"
    __dec_obj165=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_567);
    __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2046 "05function.c"
    __dec_obj166=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_568);
    __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2047 "05function.c"
    __dec_obj167=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_569);
    __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2049 "05function.c"
    __result247__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value754=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value753=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2049, "struct tuple2$2sFunpcharph")))),finalizer_571,(char*)come_increment_ref_count(real_fun_name_572))));
    last_code_567 = come_decrement_ref_count2(last_code_567, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_568 = come_decrement_ref_count2(last_code2_568, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_569 = come_decrement_ref_count2(last_code3_569, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_572 = come_decrement_ref_count2(real_fun_name_572, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_573,sType_finalize, 0, 0, 0, 0, (void*)0);
    right_value753 = come_decrement_ref_count2(right_value753, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value754,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result247__;
    last_code_567 = come_decrement_ref_count2(last_code_567, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_568 = come_decrement_ref_count2(last_code2_568, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_569 = come_decrement_ref_count2(last_code3_569, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_572 = come_decrement_ref_count2(real_fun_name_572, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_573,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional552;
struct tuple2$2charphsTypeph* result_577;
struct tuple2$2charphsTypeph* __result237__;
_Bool _if_conditional553;
struct tuple2$2charphsTypeph* __result238__;
struct tuple2$2charphsTypeph* result_578;
struct tuple2$2charphsTypeph* __result239__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_577, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_578, 0, sizeof(struct tuple2$2charphsTypeph*));
            # 281 "./neo-c.h"
            # 276 "./neo-c.h"
            if(_if_conditional552=self==((void*)0),            _if_conditional552) {
                # 277 "./neo-c.h"
                # 278 "./neo-c.h"
                memset(&result_577,0,sizeof(struct tuple2$2charphsTypeph*));
                # 279 "./neo-c.h"
                __result237__ = __result_obj__ = result_577;
                return __result237__;
            }
            # 281 "./neo-c.h"
            self->it=self->head;
            # 287 "./neo-c.h"
            # 283 "./neo-c.h"
            if(self->it) {
                # 284 "./neo-c.h"
                __result238__ = __result_obj__ = self->it->item;
                return __result238__;
            }
            # 287 "./neo-c.h"
            # 288 "./neo-c.h"
            memset(&result_578,0,sizeof(struct tuple2$2charphsTypeph*));
            # 289 "./neo-c.h"
            __result239__ = __result_obj__ = result_578;
            return __result239__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result240__;
memset(&__result_obj__, 0, sizeof(void*));
            # 311 "./neo-c.h"
            __result240__ = self==((void*)0)||self->it==((void*)0);
            return __result240__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional554;
struct tuple2$2charphsTypeph* result_580;
struct tuple2$2charphsTypeph* __result241__;
_Bool _if_conditional555;
struct tuple2$2charphsTypeph* __result242__;
struct tuple2$2charphsTypeph* result_581;
struct tuple2$2charphsTypeph* __result243__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_580, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_581, 0, sizeof(struct tuple2$2charphsTypeph*));
            # 299 "./neo-c.h"
            # 293 "./neo-c.h"
            if(_if_conditional554=self==((void*)0)||self->it==((void*)0),            _if_conditional554) {
                # 294 "./neo-c.h"
                # 295 "./neo-c.h"
                memset(&result_580,0,sizeof(struct tuple2$2charphsTypeph*));
                # 296 "./neo-c.h"
                __result241__ = __result_obj__ = result_580;
                return __result241__;
            }
            # 299 "./neo-c.h"
            self->it=self->it->next;
            # 305 "./neo-c.h"
            # 301 "./neo-c.h"
            if(self->it) {
                # 302 "./neo-c.h"
                __result242__ = __result_obj__ = self->it->item;
                return __result242__;
            }
            # 305 "./neo-c.h"
            # 306 "./neo-c.h"
            memset(&result_581,0,sizeof(struct tuple2$2charphsTypeph*));
            # 307 "./neo-c.h"
            __result243__ = __result_obj__ = result_581;
            return __result243__;
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
void* __result_obj__;
char* __dec_obj168;
struct tuple2$2sFunpcharph* __result246__;
memset(&__result_obj__, 0, sizeof(void*));
        # 1738 "./neo-c.h"
        self->v1=v1;
        # 1739 "./neo-c.h"
        __dec_obj168=self->v2;
        self->v2=(char*)come_increment_ref_count(v2);
        __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
        # 1741 "./neo-c.h"
        __result246__ = __result_obj__ = self;
        come_call_finalizer3(self,tuple2$2sFunpcharphp_finalize, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result246__;
        come_call_finalizer3(self,tuple2$2sFunpcharphp_finalize, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool _if_conditional568;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "tuple2$2sFunpcharphp_finalize"
            # 0 "tuple2$2sFunpcharphp_finalize"
            if(_if_conditional568=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional568) {
                # 0 "tuple2$2sFunpcharphp_finalize"
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_607;
char* __dec_obj169;
char* last_code2_608;
char* __dec_obj170;
char* last_code3_609;
char* __dec_obj171;
struct sClass* current_stack_frame_struct_610;
struct sFun* finalizer_611;
void* right_value755;
char* real_fun_name_612;
void* right_value756;
struct sType* type2_613;
struct sClass* klass_614;
_Bool _if_conditional569;
void* right_value757;
void* right_value758;
struct buffer* source_615;
struct list$1tuple2$2charphsTypephph* o2_saved_616;
struct tuple2$2charphsTypeph* it_617;
struct tuple2$2charphsTypeph* multiple_assign_var11;
char* name_618;
struct sType* field_type_619;
_Bool _if_conditional570;
_Bool _if_conditional571;
char* p_621;
int sline_622;
char* sname_623;
char* head_624;
struct buffer* source3_625;
struct buffer* __dec_obj172;
void* right_value759;
char* __dec_obj173;
void* right_value760;
struct sBlock* block_626;
void* right_value761;
void* right_value762;
struct sType* result_type_627;
void* right_value763;
char* name_628;
void* right_value764;
struct sType* self_type_629;
_Bool _if_conditional572;
struct sType* __list_values23___630[1];
void* right_value765;
void* right_value766;
struct list$1sTypeph* param_types_631;
void* right_value767;
char* __list_values24___632[1];
void* right_value768;
void* right_value769;
struct list$1charph* param_names_633;
void* right_value770;
void* right_value771;
struct list$1charph* param_default_parametors_634;
void* right_value772;
void* right_value773;
struct buffer* header_buf_635;
void* right_value774;
int i_636;
struct sType* param_type_637;
char* param_name_638;
void* right_value775;
_Bool _if_conditional573;
void* right_value776;
void* right_value777;
void* right_value778;
void* right_value779;
struct sFun* fun_639;
void* right_value780;
struct sFun* fun2_640;
_Bool _if_conditional574;
void* right_value781;
void* right_value782;
void* right_value783;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* right_value787;
struct sNode* node_642;
_Bool _if_conditional581;
struct buffer* __dec_obj176;
char* __dec_obj177;
char* __dec_obj178;
char* __dec_obj179;
char* __dec_obj180;
void* right_value788;
void* right_value789;
struct tuple2$2sFunpcharph* __result250__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_607, 0, sizeof(char*));
memset(&last_code2_608, 0, sizeof(char*));
memset(&last_code3_609, 0, sizeof(char*));
memset(&current_stack_frame_struct_610, 0, sizeof(struct sClass*));
memset(&finalizer_611, 0, sizeof(struct sFun*));
right_value755 = (void*)0;
memset(&real_fun_name_612, 0, sizeof(char*));
right_value756 = (void*)0;
memset(&type2_613, 0, sizeof(struct sType*));
memset(&klass_614, 0, sizeof(struct sClass*));
right_value757 = (void*)0;
right_value758 = (void*)0;
memset(&source_615, 0, sizeof(struct buffer*));
memset(&o2_saved_616, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_617, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_618, 0, sizeof(char*));
memset(&field_type_619, 0, sizeof(struct sType*));
memset(&name_618, 0, sizeof(char*));
memset(&field_type_619, 0, sizeof(struct sType*));
memset(&p_621, 0, sizeof(char*));
memset(&sline_622, 0, sizeof(int));
memset(&sname_623, 0, sizeof(char*));
memset(&head_624, 0, sizeof(char*));
memset(&source3_625, 0, sizeof(struct buffer*));
right_value759 = (void*)0;
right_value760 = (void*)0;
memset(&block_626, 0, sizeof(struct sBlock*));
right_value761 = (void*)0;
right_value762 = (void*)0;
memset(&result_type_627, 0, sizeof(struct sType*));
right_value763 = (void*)0;
memset(&name_628, 0, sizeof(char*));
right_value764 = (void*)0;
memset(&self_type_629, 0, sizeof(struct sType*));
right_value765 = (void*)0;
right_value766 = (void*)0;
memset(&param_types_631, 0, sizeof(struct list$1sTypeph*));
right_value767 = (void*)0;
right_value768 = (void*)0;
right_value769 = (void*)0;
memset(&param_names_633, 0, sizeof(struct list$1charph*));
right_value770 = (void*)0;
right_value771 = (void*)0;
memset(&param_default_parametors_634, 0, sizeof(struct list$1charph*));
right_value772 = (void*)0;
right_value773 = (void*)0;
memset(&header_buf_635, 0, sizeof(struct buffer*));
right_value774 = (void*)0;
memset(&i_636, 0, sizeof(int));
memset(&param_type_637, 0, sizeof(struct sType*));
memset(&param_name_638, 0, sizeof(char*));
right_value775 = (void*)0;
right_value776 = (void*)0;
right_value777 = (void*)0;
right_value778 = (void*)0;
right_value779 = (void*)0;
memset(&fun_639, 0, sizeof(struct sFun*));
right_value780 = (void*)0;
memset(&fun2_640, 0, sizeof(struct sFun*));
right_value781 = (void*)0;
right_value782 = (void*)0;
right_value783 = (void*)0;
right_value787 = (void*)0;
memset(&node_642, 0, sizeof(struct sNode*));
right_value788 = (void*)0;
right_value789 = (void*)0;
    # 2054 "05function.c"
    last_code_607=(char*)come_increment_ref_count(info->module->mLastCode);
    # 2055 "05function.c"
    __dec_obj169=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2056 "05function.c"
    last_code2_608=(char*)come_increment_ref_count(info->module->mLastCode2);
    # 2057 "05function.c"
    __dec_obj170=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2058 "05function.c"
    last_code3_609=(char*)come_increment_ref_count(info->module->mLastCode3);
    # 2060 "05function.c"
    __dec_obj171=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2062 "05function.c"
    current_stack_frame_struct_610=info->current_stack_frame_struct;
    # 2063 "05function.c"
    info->current_stack_frame_struct=((void*)0);
    # 2065 "05function.c"
    finalizer_611=((void*)0);
    # 2067 "05function.c"
    real_fun_name_612=(char*)come_increment_ref_count(((char*)(right_value755=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value755 = come_decrement_ref_count2(right_value755, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 2069 "05function.c"
    type2_613=(struct sType*)come_increment_ref_count(((struct sType*)(right_value756=solve_generics(type,type,info))));
    come_call_finalizer3(right_value756,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 2071 "05function.c"
    type=type2_613;
    # 2073 "05function.c"
    klass_614=type->mClass;
    # 2180 "05function.c"
    # 2075 "05function.c"
    if(_if_conditional569=type->mPointerNum>0&&klass_614->mStruct,    _if_conditional569) {
        # 2076 "05function.c"
        source_615=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value758=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value757=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2076, "buffer"))))))));
        come_call_finalizer3(right_value757,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value758,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2078 "05function.c"
        buffer_append_char(source_615,123);
        # 2080 "05function.c"
        klass_614=map$2charphsClassphp_operator_load_element(info->classes,klass_614->mName);
        # 2098 "05function.c"
        for(        o2_saved_616=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_614->mFields)),it_617=list$1tuple2$2charphsTypephph_begin((o2_saved_616));        !list$1tuple2$2charphsTypephph_end((o2_saved_616));        it_617=list$1tuple2$2charphsTypephph_next((o2_saved_616))        ){
            # 2082 "05function.c"
            multiple_assign_var11=it_617;
            name_618=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            field_type_619=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
            # 2090 "05function.c"
            # 2084 "05function.c"
            if(_if_conditional570=string_operator_equals(type->mClass->mName,field_type_619->mClass->mName)&&type->mPointerNum==field_type_619->mPointerNum&&field_type_619->mHeap,            _if_conditional570) {
                # 2086 "05function.c"
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                # 2087 "05function.c"
                exit(2);
            }
            # 2096 "05function.c"
            # 2090 "05function.c"
            if(field_type_619->mHeap) {
                # 2091 "05function.c"
                char source2_620[1024];
                memset(&source2_620, 0, sizeof(char)                *(1024)                );
                # 2092 "05function.c"
                snprintf(source2_620,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { force_delete borrow self.%s; }\n",name_618,name_618);
                # 2094 "05function.c"
                buffer_append_str(source_615,source2_620);
            }
            name_618 = come_decrement_ref_count2(name_618, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_619,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_616,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        # 2098 "05function.c"
        buffer_append_char(source_615,125);
        # 2100 "05function.c"
        p_621=info->p;
        # 2101 "05function.c"
        sline_622=info->sline;
        # 2102 "05function.c"
        sname_623=(char*)come_increment_ref_count(info->sname);
        # 2103 "05function.c"
        head_624=info->head;
        # 2104 "05function.c"
        source3_625=(struct buffer*)come_increment_ref_count(info->source);
        # 2106 "05function.c"
        __dec_obj172=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_615);
        come_call_finalizer3(__dec_obj172,buffer_finalize, 0, 0, 0, 0, (void*)0);
        # 2107 "05function.c"
        info->p=source_615->buf;
        # 2108 "05function.c"
        info->head=source_615->buf;
        # 2110 "05function.c"
        __dec_obj173=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value759=__builtin_string(real_fun_name_612))));
        __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value759 = come_decrement_ref_count2(right_value759, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2111 "05function.c"
        info->sline=0;
        # 2113 "05function.c"
        block_626=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value760=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer3(right_value760,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        # 2115 "05function.c"
        result_type_627=(struct sType*)come_increment_ref_count(((struct sType*)(right_value762=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value761=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2115, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer3(right_value761,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value762,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 2116 "05function.c"
        name_628=(char*)come_increment_ref_count(((char*)(right_value763=string_clone(real_fun_name_612))));
        right_value763 = come_decrement_ref_count2(right_value763, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2117 "05function.c"
        self_type_629=(struct sType*)come_increment_ref_count(((struct sType*)(right_value764=sType_clone(type))));
        come_call_finalizer3(right_value764,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 2118 "05function.c"
        self_type_629->mHeap=(_Bool)0;
        # 2122 "05function.c"
        # 2119 "05function.c"
        if(_if_conditional572=self_type_629->mPointerNum>1,        _if_conditional572) {
            # 2120 "05function.c"
            self_type_629->mPointerNum=1;
        }
        # 2122 "05function.c"
        {__list_values23___630[0]=come_increment_ref_count(self_type_629);
}        param_types_631=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value766=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value765=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2122, "struct list$1sTypeph")))),1,__list_values23___630))));
        come_call_finalizer3(right_value765,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value766,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 2123 "05function.c"
        {__list_values24___632[0]=come_increment_ref_count(((char*)(right_value767=__builtin_string("self"))));
}        param_names_633=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value769=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value768=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2123, "struct list$1charph")))),1,__list_values24___632))));
        right_value767 = come_decrement_ref_count2(right_value767, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value768,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value769,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 2124 "05function.c"
        param_default_parametors_634=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value771=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value770=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2124, "list$1charph"))))))));
        come_call_finalizer3(right_value770,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value771,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 2125 "05function.c"
        list$1charph_push_back(param_default_parametors_634,((void*)0));
        # 2127 "05function.c"
        header_buf_635=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value773=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value772=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2127, "buffer"))))))));
        come_call_finalizer3(right_value772,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value773,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2129 "05function.c"
        buffer_append_str(header_buf_635,((char*)(right_value774=make_come_type_name_string(result_type_627,info))));
        right_value774 = come_decrement_ref_count2(right_value774, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2130 "05function.c"
        buffer_append_str(header_buf_635," ");
        # 2131 "05function.c"
        buffer_append_str(header_buf_635,real_fun_name_612);
        # 2132 "05function.c"
        buffer_append_str(header_buf_635,"(");
        # 2146 "05function.c"
        for(        i_636=0;        i_636<list$1sTypeph_length(param_types_631);        i_636++        ){
            # 2135 "05function.c"
            param_type_637=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_631,i_636), "05function.c", 2135, 12));
            # 2136 "05function.c"
            param_name_638=((char*)come_null_check(list$1charphp_operator_load_element(param_names_633,i_636), "05function.c", 2136, 13));
            # 2138 "05function.c"
            buffer_append_str(header_buf_635,((char*)(right_value775=make_come_type_name_string(param_type_637,info))));
            right_value775 = come_decrement_ref_count2(right_value775, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 2139 "05function.c"
            buffer_append_str(header_buf_635," ");
            # 2140 "05function.c"
            buffer_append_str(header_buf_635,param_name_638);
            # 2145 "05function.c"
            # 2142 "05function.c"
            if(_if_conditional573=i_636!=list$1sTypeph_length(param_types_631)-1,            _if_conditional573) {
                # 2143 "05function.c"
                buffer_append_str(header_buf_635,",");
            }
        }
        # 2146 "05function.c"
        buffer_append_str(header_buf_635,")");
        # 2148 "05function.c"
        result_type_627->mStatic=(_Bool)0;
        # 2156 "05function.c"
        fun_639=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value779=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value776=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2150, "sFun")))),(char*)come_increment_ref_count(name_628),(struct sType*)come_increment_ref_count(result_type_627),(struct list$1sTypeph*)come_increment_ref_count(param_types_631),(struct list$1charph*)come_increment_ref_count(param_names_633),(struct list$1charph*)come_increment_ref_count(param_default_parametors_634),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_626),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value777=buffer_to_string(header_buf_635)))),(char*)come_increment_ref_count(((char*)(right_value778=__builtin_string("")))),info))));
        come_call_finalizer3(right_value776,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value777 = come_decrement_ref_count2(right_value777, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value778 = come_decrement_ref_count2(right_value778, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value779,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        # 2158 "05function.c"
        fun2_640=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value780=__builtin_string(fun_name))));
        right_value780 = come_decrement_ref_count2(right_value780, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2164 "05function.c"
        # 2159 "05function.c"
        if(_if_conditional574=fun2_640==((void*)0)||fun2_640->mExternal,        _if_conditional574) {
            # 2161 "05function.c"
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value781=string_clone(name_628)))),(struct sFun*)come_increment_ref_count(fun_639));
            right_value781 = come_decrement_ref_count2(right_value781, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 2164 "05function.c"
        finalizer_611=fun_639;
        # 2166 "05function.c"
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2166, "struct sNode");
        _inf_obj_value9=come_increment_ref_count(((struct sFunNode*)(right_value783=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value782=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2166, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_639),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sFunNode_finalize;
        _inf_value9->clone=(void*)sFunNode_clone;
        _inf_value9->compile=(void*)sFunNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sFunNode_terminated;
        _inf_value9->kind=(void*)sFunNode_kind;
        node_642=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value787=_inf_value9)));
        come_call_finalizer3(right_value782,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value783,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value787) { right_value787 = come_decrement_ref_count2(right_value787, ((struct sNode*)right_value787)->finalize, ((struct sNode*)right_value787)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 2173 "05function.c"
        # 2168 "05function.c"
        if(_if_conditional581=!node_compile(node_642,info),        _if_conditional581) {
            # 2169 "05function.c"
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            # 2170 "05function.c"
            exit(2);
        }
        # 2173 "05function.c"
        __dec_obj176=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_625);
        come_call_finalizer3(__dec_obj176,buffer_finalize, 0, 0, 0, 0, (void*)0);
        # 2174 "05function.c"
        info->p=p_621;
        # 2175 "05function.c"
        info->head=head_624;
        # 2176 "05function.c"
        info->sline=sline_622;
        # 2177 "05function.c"
        __dec_obj177=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_623);
        __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_615,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_623 = come_decrement_ref_count2(sname_623, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_625,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_626,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_627,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_628 = come_decrement_ref_count2(name_628, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_629,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_631,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_633,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_634,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_635,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_639,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_642) { node_642 = come_decrement_ref_count2(node_642, ((struct sNode*)node_642)->finalize, ((struct sNode*)node_642)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 2180 "05function.c"
    info->current_stack_frame_struct=current_stack_frame_struct_610;
    # 2182 "05function.c"
    __dec_obj178=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_607);
    __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2183 "05function.c"
    __dec_obj179=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_608);
    __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2184 "05function.c"
    __dec_obj180=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_609);
    __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2186 "05function.c"
    __result250__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value789=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value788=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2186, "struct tuple2$2sFunpcharph")))),finalizer_611,(char*)come_increment_ref_count(real_fun_name_612))));
    last_code_607 = come_decrement_ref_count2(last_code_607, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_608 = come_decrement_ref_count2(last_code2_608, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_609 = come_decrement_ref_count2(last_code3_609, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_612 = come_decrement_ref_count2(real_fun_name_612, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_613,sType_finalize, 0, 0, 0, 0, (void*)0);
    right_value788 = come_decrement_ref_count2(right_value788, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value789,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result250__;
    last_code_607 = come_decrement_ref_count2(last_code_607, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_608 = come_decrement_ref_count2(last_code2_608, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_609 = come_decrement_ref_count2(last_code3_609, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_612 = come_decrement_ref_count2(real_fun_name_612, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_613,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_643;
char* __dec_obj181;
char* last_code2_644;
char* __dec_obj182;
char* last_code3_645;
char* __dec_obj183;
struct sClass* current_stack_frame_struct_646;
struct sFun* equaler_647;
void* right_value790;
char* real_fun_name_648;
void* right_value791;
struct sType* type2_649;
struct sClass* klass_650;
_Bool _if_conditional582;
void* right_value792;
void* right_value793;
struct buffer* source_651;
_Bool _if_conditional583;
char* name_652;
struct list$1tuple2$2charphsTypephph* o2_saved_654;
struct tuple2$2charphsTypeph* it_655;
struct tuple2$2charphsTypeph* multiple_assign_var12;
char* name_656;
struct sType* field_type_657;
_Bool _if_conditional584;
char* p_659;
int sline_660;
char* sname_661;
char* head_662;
struct buffer* source3_663;
struct buffer* __dec_obj184;
void* right_value794;
char* __dec_obj185;
void* right_value795;
struct sBlock* block_664;
void* right_value796;
void* right_value797;
struct sType* result_type_665;
void* right_value798;
char* name_666;
void* right_value799;
struct sType* left_type_667;
void* right_value800;
struct sType* right_type_668;
struct sType* __list_values25___669[2];
void* right_value801;
void* right_value802;
struct list$1sTypeph* param_types_670;
void* right_value803;
void* right_value804;
char* __list_values26___671[2];
void* right_value805;
void* right_value806;
struct list$1charph* param_names_672;
void* right_value807;
void* right_value808;
struct list$1charph* param_default_parametors_673;
void* right_value809;
void* right_value810;
struct buffer* header_buf_674;
void* right_value811;
int i_675;
struct sType* param_type_676;
char* param_name_677;
void* right_value812;
_Bool _if_conditional585;
void* right_value813;
void* right_value814;
void* right_value815;
void* right_value816;
struct sFun* fun_678;
void* right_value817;
struct sFun* fun2_679;
_Bool _if_conditional586;
void* right_value818;
void* right_value819;
void* right_value820;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* right_value824;
struct sNode* node_681;
_Bool _if_conditional593;
struct buffer* __dec_obj188;
char* __dec_obj189;
char* __dec_obj190;
char* __dec_obj191;
char* __dec_obj192;
void* right_value825;
void* right_value826;
struct tuple2$2sFunpcharph* __result253__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_643, 0, sizeof(char*));
memset(&last_code2_644, 0, sizeof(char*));
memset(&last_code3_645, 0, sizeof(char*));
memset(&current_stack_frame_struct_646, 0, sizeof(struct sClass*));
memset(&equaler_647, 0, sizeof(struct sFun*));
right_value790 = (void*)0;
memset(&real_fun_name_648, 0, sizeof(char*));
right_value791 = (void*)0;
memset(&type2_649, 0, sizeof(struct sType*));
memset(&klass_650, 0, sizeof(struct sClass*));
right_value792 = (void*)0;
right_value793 = (void*)0;
memset(&source_651, 0, sizeof(struct buffer*));
memset(&name_652, 0, sizeof(char*));
memset(&o2_saved_654, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_655, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_656, 0, sizeof(char*));
memset(&field_type_657, 0, sizeof(struct sType*));
memset(&name_656, 0, sizeof(char*));
memset(&field_type_657, 0, sizeof(struct sType*));
memset(&p_659, 0, sizeof(char*));
memset(&sline_660, 0, sizeof(int));
memset(&sname_661, 0, sizeof(char*));
memset(&head_662, 0, sizeof(char*));
memset(&source3_663, 0, sizeof(struct buffer*));
right_value794 = (void*)0;
right_value795 = (void*)0;
memset(&block_664, 0, sizeof(struct sBlock*));
right_value796 = (void*)0;
right_value797 = (void*)0;
memset(&result_type_665, 0, sizeof(struct sType*));
right_value798 = (void*)0;
memset(&name_666, 0, sizeof(char*));
right_value799 = (void*)0;
memset(&left_type_667, 0, sizeof(struct sType*));
right_value800 = (void*)0;
memset(&right_type_668, 0, sizeof(struct sType*));
right_value801 = (void*)0;
right_value802 = (void*)0;
memset(&param_types_670, 0, sizeof(struct list$1sTypeph*));
right_value803 = (void*)0;
right_value804 = (void*)0;
right_value805 = (void*)0;
right_value806 = (void*)0;
memset(&param_names_672, 0, sizeof(struct list$1charph*));
right_value807 = (void*)0;
right_value808 = (void*)0;
memset(&param_default_parametors_673, 0, sizeof(struct list$1charph*));
right_value809 = (void*)0;
right_value810 = (void*)0;
memset(&header_buf_674, 0, sizeof(struct buffer*));
right_value811 = (void*)0;
memset(&i_675, 0, sizeof(int));
memset(&param_type_676, 0, sizeof(struct sType*));
memset(&param_name_677, 0, sizeof(char*));
right_value812 = (void*)0;
right_value813 = (void*)0;
right_value814 = (void*)0;
right_value815 = (void*)0;
right_value816 = (void*)0;
memset(&fun_678, 0, sizeof(struct sFun*));
right_value817 = (void*)0;
memset(&fun2_679, 0, sizeof(struct sFun*));
right_value818 = (void*)0;
right_value819 = (void*)0;
right_value820 = (void*)0;
right_value824 = (void*)0;
memset(&node_681, 0, sizeof(struct sNode*));
right_value825 = (void*)0;
right_value826 = (void*)0;
    # 2191 "05function.c"
    last_code_643=(char*)come_increment_ref_count(info->module->mLastCode);
    # 2192 "05function.c"
    __dec_obj181=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2193 "05function.c"
    last_code2_644=(char*)come_increment_ref_count(info->module->mLastCode2);
    # 2194 "05function.c"
    __dec_obj182=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2195 "05function.c"
    last_code3_645=(char*)come_increment_ref_count(info->module->mLastCode3);
    # 2196 "05function.c"
    __dec_obj183=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2198 "05function.c"
    current_stack_frame_struct_646=info->current_stack_frame_struct;
    # 2199 "05function.c"
    info->current_stack_frame_struct=((void*)0);
    # 2200 "05function.c"
    equaler_647=((void*)0);
    # 2202 "05function.c"
    real_fun_name_648=(char*)come_increment_ref_count(((char*)(right_value790=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value790 = come_decrement_ref_count2(right_value790, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 2204 "05function.c"
    type2_649=(struct sType*)come_increment_ref_count(((struct sType*)(right_value791=solve_generics(type,type,info))));
    come_call_finalizer3(right_value791,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 2206 "05function.c"
    type=type2_649;
    # 2208 "05function.c"
    klass_650=type->mClass;
    # 2322 "05function.c"
    # 2210 "05function.c"
    if(_if_conditional582=type->mPointerNum>0&&!klass_650->mNumber,    _if_conditional582) {
        # 2211 "05function.c"
        source_651=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value793=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value792=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2211, "buffer"))))))));
        come_call_finalizer3(right_value792,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value793,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2213 "05function.c"
        buffer_append_char(source_651,123);
        # 2239 "05function.c"
        # 2215 "05function.c"
        if(klass_650->mProtocol) {
            # 2216 "05function.c"
            name_652="_protocol_obj";
            # 2217 "05function.c"
            char source2_653[1024];
            memset(&source2_653, 0, sizeof(char)            *(1024)            );
            # 2218 "05function.c"
            snprintf(source2_653,1024,"return left.%s.equals(right.%s);\n",name_652,name_652);
            # 2219 "05function.c"
            buffer_append_str(source_651,source2_653);
        }
        else {
            # 2222 "05function.c"
            klass_650=map$2charphsClassphp_operator_load_element(info->classes,klass_650->mName);
            # 2237 "05function.c"
            for(            o2_saved_654=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_650->mFields)),it_655=list$1tuple2$2charphsTypephph_begin((o2_saved_654));            !list$1tuple2$2charphsTypephph_end((o2_saved_654));            it_655=list$1tuple2$2charphsTypephph_next((o2_saved_654))            ){
                # 2224 "05function.c"
                multiple_assign_var12=it_655;
                name_656=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_657=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                # 2232 "05function.c"
                # 2226 "05function.c"
                if(_if_conditional584=string_operator_equals(type->mClass->mName,field_type_657->mClass->mName)&&type->mPointerNum==field_type_657->mPointerNum&&field_type_657->mHeap,                _if_conditional584) {
                    # 2228 "05function.c"
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    # 2229 "05function.c"
                    exit(2);
                }
                # 2232 "05function.c"
                char source2_658[1024];
                memset(&source2_658, 0, sizeof(char)                *(1024)                );
                # 2233 "05function.c"
                snprintf(source2_658,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_656,name_656);
                # 2235 "05function.c"
                buffer_append_str(source_651,source2_658);
                name_656 = come_decrement_ref_count2(name_656, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_657,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_654,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 2239 "05function.c"
        buffer_append_str(source_651,"return true;");
        # 2240 "05function.c"
        buffer_append_char(source_651,125);
        # 2242 "05function.c"
        p_659=info->p;
        # 2243 "05function.c"
        sline_660=info->sline;
        # 2244 "05function.c"
        sname_661=(char*)come_increment_ref_count(info->sname);
        # 2245 "05function.c"
        head_662=info->head;
        # 2246 "05function.c"
        source3_663=(struct buffer*)come_increment_ref_count(info->source);
        # 2248 "05function.c"
        __dec_obj184=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_651);
        come_call_finalizer3(__dec_obj184,buffer_finalize, 0, 0, 0, 0, (void*)0);
        # 2249 "05function.c"
        info->p=source_651->buf;
        # 2250 "05function.c"
        info->head=source_651->buf;
        # 2252 "05function.c"
        __dec_obj185=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value794=__builtin_string(real_fun_name_648))));
        __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value794 = come_decrement_ref_count2(right_value794, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2253 "05function.c"
        info->sline=0;
        # 2255 "05function.c"
        block_664=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value795=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer3(right_value795,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        # 2257 "05function.c"
        result_type_665=(struct sType*)come_increment_ref_count(((struct sType*)(right_value797=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value796=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2257, "sType")))),"bool",(_Bool)0,info))));
        come_call_finalizer3(right_value796,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value797,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 2258 "05function.c"
        name_666=(char*)come_increment_ref_count(((char*)(right_value798=string_clone(real_fun_name_648))));
        right_value798 = come_decrement_ref_count2(right_value798, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2259 "05function.c"
        left_type_667=(struct sType*)come_increment_ref_count(((struct sType*)(right_value799=sType_clone(type))));
        come_call_finalizer3(right_value799,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 2260 "05function.c"
        left_type_667->mHeap=(_Bool)0;
        # 2261 "05function.c"
        right_type_668=(struct sType*)come_increment_ref_count(((struct sType*)(right_value800=sType_clone(type))));
        come_call_finalizer3(right_value800,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 2262 "05function.c"
        right_type_668->mHeap=(_Bool)0;
        # 2263 "05function.c"
        {__list_values25___669[0]=come_increment_ref_count(left_type_667);
__list_values25___669[1]=come_increment_ref_count(right_type_668);
}        param_types_670=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value802=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value801=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2263, "struct list$1sTypeph")))),2,__list_values25___669))));
        come_call_finalizer3(right_value801,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value802,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 2264 "05function.c"
        {__list_values26___671[0]=come_increment_ref_count(((char*)(right_value803=__builtin_string("left"))));
__list_values26___671[1]=come_increment_ref_count(((char*)(right_value804=__builtin_string("right"))));
}        param_names_672=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value806=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value805=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2264, "struct list$1charph")))),2,__list_values26___671))));
        right_value803 = come_decrement_ref_count2(right_value803, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value804 = come_decrement_ref_count2(right_value804, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value805,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value806,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 2265 "05function.c"
        param_default_parametors_673=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value808=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value807=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2265, "list$1charph"))))))));
        come_call_finalizer3(right_value807,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value808,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 2266 "05function.c"
        list$1charph_push_back(param_default_parametors_673,((void*)0));
        # 2267 "05function.c"
        list$1charph_push_back(param_default_parametors_673,((void*)0));
        # 2269 "05function.c"
        header_buf_674=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value810=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value809=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2269, "buffer"))))))));
        come_call_finalizer3(right_value809,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value810,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2271 "05function.c"
        buffer_append_str(header_buf_674,((char*)(right_value811=make_come_type_name_string(result_type_665,info))));
        right_value811 = come_decrement_ref_count2(right_value811, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2272 "05function.c"
        buffer_append_str(header_buf_674," ");
        # 2273 "05function.c"
        buffer_append_str(header_buf_674,real_fun_name_648);
        # 2274 "05function.c"
        buffer_append_str(header_buf_674,"(");
        # 2288 "05function.c"
        for(        i_675=0;        i_675<list$1sTypeph_length(param_types_670);        i_675++        ){
            # 2277 "05function.c"
            param_type_676=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_670,i_675), "05function.c", 2277, 14));
            # 2278 "05function.c"
            param_name_677=((char*)come_null_check(list$1charphp_operator_load_element(param_names_672,i_675), "05function.c", 2278, 15));
            # 2280 "05function.c"
            buffer_append_str(header_buf_674,((char*)(right_value812=make_come_type_name_string(param_type_676,info))));
            right_value812 = come_decrement_ref_count2(right_value812, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 2281 "05function.c"
            buffer_append_str(header_buf_674," ");
            # 2282 "05function.c"
            buffer_append_str(header_buf_674,param_name_677);
            # 2287 "05function.c"
            # 2284 "05function.c"
            if(_if_conditional585=i_675!=list$1sTypeph_length(param_types_670)-1,            _if_conditional585) {
                # 2285 "05function.c"
                buffer_append_str(header_buf_674,",");
            }
        }
        # 2288 "05function.c"
        buffer_append_str(header_buf_674,")");
        # 2290 "05function.c"
        result_type_665->mStatic=(_Bool)0;
        # 2298 "05function.c"
        fun_678=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value816=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value813=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2292, "sFun")))),(char*)come_increment_ref_count(name_666),(struct sType*)come_increment_ref_count(result_type_665),(struct list$1sTypeph*)come_increment_ref_count(param_types_670),(struct list$1charph*)come_increment_ref_count(param_names_672),(struct list$1charph*)come_increment_ref_count(param_default_parametors_673),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_664),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value814=buffer_to_string(header_buf_674)))),(char*)come_increment_ref_count(((char*)(right_value815=__builtin_string("")))),info))));
        come_call_finalizer3(right_value813,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value814 = come_decrement_ref_count2(right_value814, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value815 = come_decrement_ref_count2(right_value815, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value816,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        # 2300 "05function.c"
        fun2_679=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value817=__builtin_string(fun_name))));
        right_value817 = come_decrement_ref_count2(right_value817, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2306 "05function.c"
        # 2301 "05function.c"
        if(_if_conditional586=fun2_679==((void*)0)||fun2_679->mExternal,        _if_conditional586) {
            # 2303 "05function.c"
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value818=string_clone(name_666)))),(struct sFun*)come_increment_ref_count(fun_678));
            right_value818 = come_decrement_ref_count2(right_value818, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 2306 "05function.c"
        equaler_647=fun_678;
        # 2308 "05function.c"
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2308, "struct sNode");
        _inf_obj_value10=come_increment_ref_count(((struct sFunNode*)(right_value820=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value819=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2308, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_678),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sFunNode_finalize;
        _inf_value10->clone=(void*)sFunNode_clone;
        _inf_value10->compile=(void*)sFunNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sFunNode_terminated;
        _inf_value10->kind=(void*)sFunNode_kind;
        node_681=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value824=_inf_value10)));
        come_call_finalizer3(right_value819,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value820,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value824) { right_value824 = come_decrement_ref_count2(right_value824, ((struct sNode*)right_value824)->finalize, ((struct sNode*)right_value824)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 2315 "05function.c"
        # 2310 "05function.c"
        if(_if_conditional593=!node_compile(node_681,info),        _if_conditional593) {
            # 2311 "05function.c"
            err_msg(info,"compiling error");
            # 2312 "05function.c"
            exit(2);
        }
        # 2315 "05function.c"
        __dec_obj188=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_663);
        come_call_finalizer3(__dec_obj188,buffer_finalize, 0, 0, 0, 0, (void*)0);
        # 2316 "05function.c"
        info->p=p_659;
        # 2317 "05function.c"
        info->head=head_662;
        # 2318 "05function.c"
        info->sline=sline_660;
        # 2319 "05function.c"
        __dec_obj189=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_661);
        __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_651,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_661 = come_decrement_ref_count2(sname_661, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_663,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_664,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_665,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_666 = come_decrement_ref_count2(name_666, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_667,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_668,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_670,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_672,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_673,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_674,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_678,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_681) { node_681 = come_decrement_ref_count2(node_681, ((struct sNode*)node_681)->finalize, ((struct sNode*)node_681)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 2322 "05function.c"
    info->current_stack_frame_struct=current_stack_frame_struct_646;
    # 2324 "05function.c"
    __dec_obj190=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_643);
    __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2325 "05function.c"
    __dec_obj191=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_644);
    __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2326 "05function.c"
    __dec_obj192=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_645);
    __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2328 "05function.c"
    __result253__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value826=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value825=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2328, "struct tuple2$2sFunpcharph")))),equaler_647,(char*)come_increment_ref_count(real_fun_name_648))));
    last_code_643 = come_decrement_ref_count2(last_code_643, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_644 = come_decrement_ref_count2(last_code2_644, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_645 = come_decrement_ref_count2(last_code3_645, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_648 = come_decrement_ref_count2(real_fun_name_648, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_649,sType_finalize, 0, 0, 0, 0, (void*)0);
    right_value825 = come_decrement_ref_count2(right_value825, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value826,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result253__;
    last_code_643 = come_decrement_ref_count2(last_code_643, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_644 = come_decrement_ref_count2(last_code2_644, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_645 = come_decrement_ref_count2(last_code3_645, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_648 = come_decrement_ref_count2(real_fun_name_648, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_649,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_682;
char* __dec_obj193;
char* last_code2_683;
char* __dec_obj194;
char* last_code3_684;
char* __dec_obj195;
struct sClass* current_stack_frame_struct_685;
struct sFun* equaler_686;
void* right_value827;
char* real_fun_name_687;
void* right_value828;
struct sType* type2_688;
struct sClass* klass_689;
_Bool _if_conditional594;
void* right_value829;
void* right_value830;
struct buffer* source_690;
_Bool _if_conditional595;
char* name_691;
int i_694;
struct list$1tuple2$2charphsTypephph* o2_saved_695;
struct tuple2$2charphsTypeph* it_696;
struct tuple2$2charphsTypeph* multiple_assign_var13;
char* name_697;
struct sType* field_type_698;
_Bool _if_conditional596;
_Bool _if_conditional598;
char* p_702;
int sline_703;
char* sname_704;
char* head_705;
struct buffer* source3_706;
struct buffer* __dec_obj196;
void* right_value831;
char* __dec_obj197;
void* right_value832;
struct sBlock* block_707;
void* right_value833;
void* right_value834;
struct sType* result_type_708;
void* right_value835;
char* name_709;
void* right_value836;
struct sType* left_type_710;
void* right_value837;
struct sType* right_type_711;
struct sType* __list_values27___712[2];
void* right_value838;
void* right_value839;
struct list$1sTypeph* param_types_713;
void* right_value840;
void* right_value841;
char* __list_values28___714[2];
void* right_value842;
void* right_value843;
struct list$1charph* param_names_715;
void* right_value844;
void* right_value845;
struct list$1charph* param_default_parametors_716;
void* right_value846;
void* right_value847;
struct buffer* header_buf_717;
void* right_value848;
int i_718;
struct sType* param_type_719;
char* param_name_720;
void* right_value849;
_Bool _if_conditional599;
void* right_value850;
void* right_value851;
void* right_value852;
void* right_value853;
struct sFun* fun_721;
void* right_value854;
struct sFun* fun2_722;
_Bool _if_conditional600;
void* right_value855;
void* right_value856;
void* right_value857;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* right_value861;
struct sNode* node_724;
_Bool _if_conditional607;
struct buffer* __dec_obj200;
char* __dec_obj201;
char* __dec_obj202;
char* __dec_obj203;
char* __dec_obj204;
void* right_value862;
void* right_value863;
struct tuple2$2sFunpcharph* __result258__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_682, 0, sizeof(char*));
memset(&last_code2_683, 0, sizeof(char*));
memset(&last_code3_684, 0, sizeof(char*));
memset(&current_stack_frame_struct_685, 0, sizeof(struct sClass*));
memset(&equaler_686, 0, sizeof(struct sFun*));
right_value827 = (void*)0;
memset(&real_fun_name_687, 0, sizeof(char*));
right_value828 = (void*)0;
memset(&type2_688, 0, sizeof(struct sType*));
memset(&klass_689, 0, sizeof(struct sClass*));
right_value829 = (void*)0;
right_value830 = (void*)0;
memset(&source_690, 0, sizeof(struct buffer*));
memset(&name_691, 0, sizeof(char*));
memset(&i_694, 0, sizeof(int));
memset(&o2_saved_695, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_696, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_697, 0, sizeof(char*));
memset(&field_type_698, 0, sizeof(struct sType*));
memset(&name_697, 0, sizeof(char*));
memset(&field_type_698, 0, sizeof(struct sType*));
memset(&p_702, 0, sizeof(char*));
memset(&sline_703, 0, sizeof(int));
memset(&sname_704, 0, sizeof(char*));
memset(&head_705, 0, sizeof(char*));
memset(&source3_706, 0, sizeof(struct buffer*));
right_value831 = (void*)0;
right_value832 = (void*)0;
memset(&block_707, 0, sizeof(struct sBlock*));
right_value833 = (void*)0;
right_value834 = (void*)0;
memset(&result_type_708, 0, sizeof(struct sType*));
right_value835 = (void*)0;
memset(&name_709, 0, sizeof(char*));
right_value836 = (void*)0;
memset(&left_type_710, 0, sizeof(struct sType*));
right_value837 = (void*)0;
memset(&right_type_711, 0, sizeof(struct sType*));
right_value838 = (void*)0;
right_value839 = (void*)0;
memset(&param_types_713, 0, sizeof(struct list$1sTypeph*));
right_value840 = (void*)0;
right_value841 = (void*)0;
right_value842 = (void*)0;
right_value843 = (void*)0;
memset(&param_names_715, 0, sizeof(struct list$1charph*));
right_value844 = (void*)0;
right_value845 = (void*)0;
memset(&param_default_parametors_716, 0, sizeof(struct list$1charph*));
right_value846 = (void*)0;
right_value847 = (void*)0;
memset(&header_buf_717, 0, sizeof(struct buffer*));
right_value848 = (void*)0;
memset(&i_718, 0, sizeof(int));
memset(&param_type_719, 0, sizeof(struct sType*));
memset(&param_name_720, 0, sizeof(char*));
right_value849 = (void*)0;
right_value850 = (void*)0;
right_value851 = (void*)0;
right_value852 = (void*)0;
right_value853 = (void*)0;
memset(&fun_721, 0, sizeof(struct sFun*));
right_value854 = (void*)0;
memset(&fun2_722, 0, sizeof(struct sFun*));
right_value855 = (void*)0;
right_value856 = (void*)0;
right_value857 = (void*)0;
right_value861 = (void*)0;
memset(&node_724, 0, sizeof(struct sNode*));
right_value862 = (void*)0;
right_value863 = (void*)0;
    # 2333 "05function.c"
    last_code_682=(char*)come_increment_ref_count(info->module->mLastCode);
    # 2334 "05function.c"
    __dec_obj193=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2335 "05function.c"
    last_code2_683=(char*)come_increment_ref_count(info->module->mLastCode2);
    # 2336 "05function.c"
    __dec_obj194=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2337 "05function.c"
    last_code3_684=(char*)come_increment_ref_count(info->module->mLastCode3);
    # 2338 "05function.c"
    __dec_obj195=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2340 "05function.c"
    current_stack_frame_struct_685=info->current_stack_frame_struct;
    # 2341 "05function.c"
    info->current_stack_frame_struct=((void*)0);
    # 2342 "05function.c"
    equaler_686=((void*)0);
    # 2344 "05function.c"
    real_fun_name_687=(char*)come_increment_ref_count(((char*)(right_value827=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value827 = come_decrement_ref_count2(right_value827, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 2346 "05function.c"
    type2_688=(struct sType*)come_increment_ref_count(((struct sType*)(right_value828=solve_generics(type,type,info))));
    come_call_finalizer3(right_value828,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 2348 "05function.c"
    type=type2_688;
    # 2350 "05function.c"
    klass_689=type->mClass;
    # 2481 "05function.c"
    # 2352 "05function.c"
    if(_if_conditional594=type->mPointerNum>0&&!klass_689->mNumber,    _if_conditional594) {
        # 2353 "05function.c"
        source_690=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value830=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value829=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2353, "buffer"))))))));
        come_call_finalizer3(right_value829,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value830,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2355 "05function.c"
        buffer_append_char(source_690,123);
        # 2399 "05function.c"
        # 2357 "05function.c"
        if(klass_689->mProtocol) {
            # 2358 "05function.c"
            name_691="_protocol_obj";
            # 2359 "05function.c"
            char source2_692[1024];
            memset(&source2_692, 0, sizeof(char)            *(1024)            );
            # 2360 "05function.c"
            snprintf(source2_692,1024,"return !left.%s.equals(right.%s);\n",name_691,name_691);
            # 2361 "05function.c"
            buffer_append_str(source_690,source2_692);
        }
        else {
            # 2364 "05function.c"
            char source2_693[1024];
            memset(&source2_693, 0, sizeof(char)            *(1024)            );
            # 2365 "05function.c"
            snprintf(source2_693,1024,"return !(");
            # 2367 "05function.c"
            buffer_append_str(source_690,source2_693);
            # 2369 "05function.c"
            i_694=0;
            # 2370 "05function.c"
            klass_689=map$2charphsClassphp_operator_load_element(info->classes,klass_689->mName);
            # 2397 "05function.c"
            for(            o2_saved_695=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_689->mFields)),it_696=list$1tuple2$2charphsTypephph_begin((o2_saved_695));            !list$1tuple2$2charphsTypephph_end((o2_saved_695));            it_696=list$1tuple2$2charphsTypephph_next((o2_saved_695))            ){
                # 2372 "05function.c"
                multiple_assign_var13=it_696;
                name_697=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_698=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                # 2380 "05function.c"
                # 2374 "05function.c"
                if(_if_conditional596=string_operator_equals(type->mClass->mName,field_type_698->mClass->mName)&&type->mPointerNum==field_type_698->mPointerNum&&field_type_698->mHeap,                _if_conditional596) {
                    # 2376 "05function.c"
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    # 2377 "05function.c"
                    exit(2);
                }
                # 2380 "05function.c"
                char source2_699[1024];
                memset(&source2_699, 0, sizeof(char)                *(1024)                );
                # 2381 "05function.c"
                snprintf(source2_699,1024,"left.%s.equals(right.%s)",name_697,name_697);
                # 2382 "05function.c"
                buffer_append_str(source_690,source2_699);
                # 2395 "05function.c"
                # 2384 "05function.c"
                if(_if_conditional598=i_694==list$1tuple2$2charphsTypephph_length(klass_689->mFields)-1,                _if_conditional598) {
                    # 2385 "05function.c"
                    char source2_700[1024];
                    memset(&source2_700, 0, sizeof(char)                    *(1024)                    );
                    # 2386 "05function.c"
                    snprintf(source2_700,1024,");");
                    # 2387 "05function.c"
                    buffer_append_str(source_690,source2_700);
                }
                else {
                    # 2390 "05function.c"
                    char source2_701[1024];
                    memset(&source2_701, 0, sizeof(char)                    *(1024)                    );
                    # 2391 "05function.c"
                    snprintf(source2_701,1024," && ");
                    # 2392 "05function.c"
                    buffer_append_str(source_690,source2_701);
                }
                # 2395 "05function.c"
                i_694++;
                name_697 = come_decrement_ref_count2(name_697, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_698,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_695,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 2399 "05function.c"
        buffer_append_char(source_690,125);
        # 2401 "05function.c"
        p_702=info->p;
        # 2402 "05function.c"
        sline_703=info->sline;
        # 2403 "05function.c"
        sname_704=(char*)come_increment_ref_count(info->sname);
        # 2404 "05function.c"
        head_705=info->head;
        # 2405 "05function.c"
        source3_706=(struct buffer*)come_increment_ref_count(info->source);
        # 2407 "05function.c"
        __dec_obj196=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_690);
        come_call_finalizer3(__dec_obj196,buffer_finalize, 0, 0, 0, 0, (void*)0);
        # 2408 "05function.c"
        info->p=source_690->buf;
        # 2409 "05function.c"
        info->head=source_690->buf;
        # 2411 "05function.c"
        __dec_obj197=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value831=__builtin_string(real_fun_name_687))));
        __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value831 = come_decrement_ref_count2(right_value831, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2412 "05function.c"
        info->sline=0;
        # 2414 "05function.c"
        block_707=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value832=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer3(right_value832,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        # 2416 "05function.c"
        result_type_708=(struct sType*)come_increment_ref_count(((struct sType*)(right_value834=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value833=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2416, "sType")))),"bool",(_Bool)0,info))));
        come_call_finalizer3(right_value833,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value834,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 2417 "05function.c"
        name_709=(char*)come_increment_ref_count(((char*)(right_value835=string_clone(real_fun_name_687))));
        right_value835 = come_decrement_ref_count2(right_value835, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2418 "05function.c"
        left_type_710=(struct sType*)come_increment_ref_count(((struct sType*)(right_value836=sType_clone(type))));
        come_call_finalizer3(right_value836,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 2419 "05function.c"
        left_type_710->mHeap=(_Bool)0;
        # 2420 "05function.c"
        right_type_711=(struct sType*)come_increment_ref_count(((struct sType*)(right_value837=sType_clone(type))));
        come_call_finalizer3(right_value837,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 2421 "05function.c"
        right_type_711->mHeap=(_Bool)0;
        # 2422 "05function.c"
        {__list_values27___712[0]=come_increment_ref_count(left_type_710);
__list_values27___712[1]=come_increment_ref_count(right_type_711);
}        param_types_713=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value839=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value838=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2422, "struct list$1sTypeph")))),2,__list_values27___712))));
        come_call_finalizer3(right_value838,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value839,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 2423 "05function.c"
        {__list_values28___714[0]=come_increment_ref_count(((char*)(right_value840=__builtin_string("left"))));
__list_values28___714[1]=come_increment_ref_count(((char*)(right_value841=__builtin_string("right"))));
}        param_names_715=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value843=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value842=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2423, "struct list$1charph")))),2,__list_values28___714))));
        right_value840 = come_decrement_ref_count2(right_value840, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value841 = come_decrement_ref_count2(right_value841, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value842,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value843,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 2424 "05function.c"
        param_default_parametors_716=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value845=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value844=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2424, "list$1charph"))))))));
        come_call_finalizer3(right_value844,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value845,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 2425 "05function.c"
        list$1charph_push_back(param_default_parametors_716,((void*)0));
        # 2426 "05function.c"
        list$1charph_push_back(param_default_parametors_716,((void*)0));
        # 2428 "05function.c"
        header_buf_717=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value847=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value846=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2428, "buffer"))))))));
        come_call_finalizer3(right_value846,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value847,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2430 "05function.c"
        buffer_append_str(header_buf_717,((char*)(right_value848=make_come_type_name_string(result_type_708,info))));
        right_value848 = come_decrement_ref_count2(right_value848, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2431 "05function.c"
        buffer_append_str(header_buf_717," ");
        # 2432 "05function.c"
        buffer_append_str(header_buf_717,real_fun_name_687);
        # 2433 "05function.c"
        buffer_append_str(header_buf_717,"(");
        # 2447 "05function.c"
        for(        i_718=0;        i_718<list$1sTypeph_length(param_types_713);        i_718++        ){
            # 2436 "05function.c"
            param_type_719=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_713,i_718), "05function.c", 2436, 16));
            # 2437 "05function.c"
            param_name_720=((char*)come_null_check(list$1charphp_operator_load_element(param_names_715,i_718), "05function.c", 2437, 17));
            # 2439 "05function.c"
            buffer_append_str(header_buf_717,((char*)(right_value849=make_come_type_name_string(param_type_719,info))));
            right_value849 = come_decrement_ref_count2(right_value849, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 2440 "05function.c"
            buffer_append_str(header_buf_717," ");
            # 2441 "05function.c"
            buffer_append_str(header_buf_717,param_name_720);
            # 2446 "05function.c"
            # 2443 "05function.c"
            if(_if_conditional599=i_718!=list$1sTypeph_length(param_types_713)-1,            _if_conditional599) {
                # 2444 "05function.c"
                buffer_append_str(header_buf_717,",");
            }
        }
        # 2447 "05function.c"
        buffer_append_str(header_buf_717,")");
        # 2449 "05function.c"
        result_type_708->mStatic=(_Bool)0;
        # 2457 "05function.c"
        fun_721=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value853=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value850=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2451, "sFun")))),(char*)come_increment_ref_count(name_709),(struct sType*)come_increment_ref_count(result_type_708),(struct list$1sTypeph*)come_increment_ref_count(param_types_713),(struct list$1charph*)come_increment_ref_count(param_names_715),(struct list$1charph*)come_increment_ref_count(param_default_parametors_716),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_707),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value851=buffer_to_string(header_buf_717)))),(char*)come_increment_ref_count(((char*)(right_value852=__builtin_string("")))),info))));
        come_call_finalizer3(right_value850,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value851 = come_decrement_ref_count2(right_value851, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value852 = come_decrement_ref_count2(right_value852, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value853,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        # 2459 "05function.c"
        fun2_722=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value854=__builtin_string(fun_name))));
        right_value854 = come_decrement_ref_count2(right_value854, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2465 "05function.c"
        # 2460 "05function.c"
        if(_if_conditional600=fun2_722==((void*)0)||fun2_722->mExternal,        _if_conditional600) {
            # 2462 "05function.c"
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value855=string_clone(name_709)))),(struct sFun*)come_increment_ref_count(fun_721));
            right_value855 = come_decrement_ref_count2(right_value855, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 2465 "05function.c"
        equaler_686=fun_721;
        # 2467 "05function.c"
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2467, "struct sNode");
        _inf_obj_value11=come_increment_ref_count(((struct sFunNode*)(right_value857=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value856=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2467, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_721),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sFunNode_finalize;
        _inf_value11->clone=(void*)sFunNode_clone;
        _inf_value11->compile=(void*)sFunNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sFunNode_terminated;
        _inf_value11->kind=(void*)sFunNode_kind;
        node_724=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value861=_inf_value11)));
        come_call_finalizer3(right_value856,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value857,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value861) { right_value861 = come_decrement_ref_count2(right_value861, ((struct sNode*)right_value861)->finalize, ((struct sNode*)right_value861)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 2474 "05function.c"
        # 2469 "05function.c"
        if(_if_conditional607=!node_compile(node_724,info),        _if_conditional607) {
            # 2470 "05function.c"
            err_msg(info,"compiling error");
            # 2471 "05function.c"
            exit(2);
        }
        # 2474 "05function.c"
        __dec_obj200=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_706);
        come_call_finalizer3(__dec_obj200,buffer_finalize, 0, 0, 0, 0, (void*)0);
        # 2475 "05function.c"
        info->p=p_702;
        # 2476 "05function.c"
        info->head=head_705;
        # 2477 "05function.c"
        info->sline=sline_703;
        # 2478 "05function.c"
        __dec_obj201=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_704);
        __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_690,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_704 = come_decrement_ref_count2(sname_704, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_706,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_707,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_708,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_709 = come_decrement_ref_count2(name_709, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_710,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_711,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_713,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_715,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_716,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_717,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_721,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_724) { node_724 = come_decrement_ref_count2(node_724, ((struct sNode*)node_724)->finalize, ((struct sNode*)node_724)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 2481 "05function.c"
    info->current_stack_frame_struct=current_stack_frame_struct_685;
    # 2483 "05function.c"
    __dec_obj202=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_682);
    __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2484 "05function.c"
    __dec_obj203=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_683);
    __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2485 "05function.c"
    __dec_obj204=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_684);
    __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2487 "05function.c"
    __result258__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value863=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value862=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2487, "struct tuple2$2sFunpcharph")))),equaler_686,(char*)come_increment_ref_count(real_fun_name_687))));
    last_code_682 = come_decrement_ref_count2(last_code_682, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_683 = come_decrement_ref_count2(last_code2_683, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_684 = come_decrement_ref_count2(last_code3_684, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_687 = come_decrement_ref_count2(real_fun_name_687, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_688,sType_finalize, 0, 0, 0, 0, (void*)0);
    right_value862 = come_decrement_ref_count2(right_value862, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value863,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result258__;
    last_code_682 = come_decrement_ref_count2(last_code_682, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_683 = come_decrement_ref_count2(last_code2_683, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_684 = come_decrement_ref_count2(last_code3_684, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_687 = come_decrement_ref_count2(real_fun_name_687, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_688,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional597;
int __result254__;
int __result255__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 354 "./neo-c.h"
                    # 351 "./neo-c.h"
                    if(_if_conditional597=self==((void*)0),                    _if_conditional597) {
                        # 352 "./neo-c.h"
                        __result254__ = 0;
                        return __result254__;
                    }
                    # 354 "./neo-c.h"
                    __result255__ = self->len;
                    return __result255__;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_725;
char* __dec_obj205;
char* last_code2_726;
char* __dec_obj206;
char* last_code3_727;
char* __dec_obj207;
struct sClass* current_stack_frame_struct_728;
struct sFun* equaler_729;
void* right_value864;
char* real_fun_name_730;
void* right_value865;
struct sType* type2_731;
struct sClass* klass_732;
_Bool _if_conditional608;
void* right_value866;
void* right_value867;
struct buffer* source_733;
_Bool _if_conditional609;
char* name_734;
struct list$1tuple2$2charphsTypephph* o2_saved_736;
struct tuple2$2charphsTypeph* it_737;
struct tuple2$2charphsTypeph* multiple_assign_var14;
char* name_738;
struct sType* field_type_739;
_Bool _if_conditional610;
char* p_741;
int sline_742;
char* sname_743;
char* head_744;
struct buffer* source3_745;
struct buffer* __dec_obj208;
void* right_value868;
char* __dec_obj209;
void* right_value869;
struct sBlock* block_746;
void* right_value870;
void* right_value871;
struct sType* result_type_747;
void* right_value872;
char* name_748;
void* right_value873;
struct sType* left_type_749;
void* right_value874;
struct sType* right_type_750;
struct sType* __list_values29___751[2];
void* right_value875;
void* right_value876;
struct list$1sTypeph* param_types_752;
void* right_value877;
void* right_value878;
char* __list_values30___753[2];
void* right_value879;
void* right_value880;
struct list$1charph* param_names_754;
void* right_value881;
void* right_value882;
struct list$1charph* param_default_parametors_755;
void* right_value883;
void* right_value884;
struct buffer* header_buf_756;
void* right_value885;
int i_757;
struct sType* param_type_758;
char* param_name_759;
void* right_value886;
_Bool _if_conditional611;
void* right_value887;
void* right_value888;
void* right_value889;
void* right_value890;
struct sFun* fun_760;
void* right_value891;
struct sFun* fun2_761;
_Bool _if_conditional612;
void* right_value892;
void* right_value893;
void* right_value894;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* right_value898;
struct sNode* node_763;
_Bool _if_conditional619;
struct buffer* __dec_obj212;
char* __dec_obj213;
char* __dec_obj214;
char* __dec_obj215;
char* __dec_obj216;
void* right_value899;
void* right_value900;
struct tuple2$2sFunpcharph* __result261__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_725, 0, sizeof(char*));
memset(&last_code2_726, 0, sizeof(char*));
memset(&last_code3_727, 0, sizeof(char*));
memset(&current_stack_frame_struct_728, 0, sizeof(struct sClass*));
memset(&equaler_729, 0, sizeof(struct sFun*));
right_value864 = (void*)0;
memset(&real_fun_name_730, 0, sizeof(char*));
right_value865 = (void*)0;
memset(&type2_731, 0, sizeof(struct sType*));
memset(&klass_732, 0, sizeof(struct sClass*));
right_value866 = (void*)0;
right_value867 = (void*)0;
memset(&source_733, 0, sizeof(struct buffer*));
memset(&name_734, 0, sizeof(char*));
memset(&o2_saved_736, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_737, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_738, 0, sizeof(char*));
memset(&field_type_739, 0, sizeof(struct sType*));
memset(&name_738, 0, sizeof(char*));
memset(&field_type_739, 0, sizeof(struct sType*));
memset(&p_741, 0, sizeof(char*));
memset(&sline_742, 0, sizeof(int));
memset(&sname_743, 0, sizeof(char*));
memset(&head_744, 0, sizeof(char*));
memset(&source3_745, 0, sizeof(struct buffer*));
right_value868 = (void*)0;
right_value869 = (void*)0;
memset(&block_746, 0, sizeof(struct sBlock*));
right_value870 = (void*)0;
right_value871 = (void*)0;
memset(&result_type_747, 0, sizeof(struct sType*));
right_value872 = (void*)0;
memset(&name_748, 0, sizeof(char*));
right_value873 = (void*)0;
memset(&left_type_749, 0, sizeof(struct sType*));
right_value874 = (void*)0;
memset(&right_type_750, 0, sizeof(struct sType*));
right_value875 = (void*)0;
right_value876 = (void*)0;
memset(&param_types_752, 0, sizeof(struct list$1sTypeph*));
right_value877 = (void*)0;
right_value878 = (void*)0;
right_value879 = (void*)0;
right_value880 = (void*)0;
memset(&param_names_754, 0, sizeof(struct list$1charph*));
right_value881 = (void*)0;
right_value882 = (void*)0;
memset(&param_default_parametors_755, 0, sizeof(struct list$1charph*));
right_value883 = (void*)0;
right_value884 = (void*)0;
memset(&header_buf_756, 0, sizeof(struct buffer*));
right_value885 = (void*)0;
memset(&i_757, 0, sizeof(int));
memset(&param_type_758, 0, sizeof(struct sType*));
memset(&param_name_759, 0, sizeof(char*));
right_value886 = (void*)0;
right_value887 = (void*)0;
right_value888 = (void*)0;
right_value889 = (void*)0;
right_value890 = (void*)0;
memset(&fun_760, 0, sizeof(struct sFun*));
right_value891 = (void*)0;
memset(&fun2_761, 0, sizeof(struct sFun*));
right_value892 = (void*)0;
right_value893 = (void*)0;
right_value894 = (void*)0;
right_value898 = (void*)0;
memset(&node_763, 0, sizeof(struct sNode*));
right_value899 = (void*)0;
right_value900 = (void*)0;
    # 2492 "05function.c"
    last_code_725=(char*)come_increment_ref_count(info->module->mLastCode);
    # 2493 "05function.c"
    __dec_obj205=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2494 "05function.c"
    last_code2_726=(char*)come_increment_ref_count(info->module->mLastCode2);
    # 2495 "05function.c"
    __dec_obj206=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2496 "05function.c"
    last_code3_727=(char*)come_increment_ref_count(info->module->mLastCode3);
    # 2497 "05function.c"
    __dec_obj207=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2499 "05function.c"
    current_stack_frame_struct_728=info->current_stack_frame_struct;
    # 2500 "05function.c"
    info->current_stack_frame_struct=((void*)0);
    # 2501 "05function.c"
    equaler_729=((void*)0);
    # 2503 "05function.c"
    real_fun_name_730=(char*)come_increment_ref_count(((char*)(right_value864=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value864 = come_decrement_ref_count2(right_value864, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 2505 "05function.c"
    type2_731=(struct sType*)come_increment_ref_count(((struct sType*)(right_value865=solve_generics(type,type,info))));
    come_call_finalizer3(right_value865,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 2507 "05function.c"
    type=type2_731;
    # 2509 "05function.c"
    klass_732=type->mClass;
    # 2623 "05function.c"
    # 2511 "05function.c"
    if(_if_conditional608=type->mPointerNum>0&&!klass_732->mNumber,    _if_conditional608) {
        # 2512 "05function.c"
        source_733=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value867=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value866=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2512, "buffer"))))))));
        come_call_finalizer3(right_value866,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value867,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2514 "05function.c"
        buffer_append_char(source_733,123);
        # 2540 "05function.c"
        # 2516 "05function.c"
        if(klass_732->mProtocol) {
            # 2517 "05function.c"
            name_734="_protocol_obj";
            # 2518 "05function.c"
            char source2_735[1024];
            memset(&source2_735, 0, sizeof(char)            *(1024)            );
            # 2519 "05function.c"
            snprintf(source2_735,1024,"return left.%s.equals(right.%s);\n",name_734,name_734);
            # 2520 "05function.c"
            buffer_append_str(source_733,source2_735);
        }
        else {
            # 2523 "05function.c"
            klass_732=map$2charphsClassphp_operator_load_element(info->classes,klass_732->mName);
            # 2538 "05function.c"
            for(            o2_saved_736=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_732->mFields)),it_737=list$1tuple2$2charphsTypephph_begin((o2_saved_736));            !list$1tuple2$2charphsTypephph_end((o2_saved_736));            it_737=list$1tuple2$2charphsTypephph_next((o2_saved_736))            ){
                # 2525 "05function.c"
                multiple_assign_var14=it_737;
                name_738=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_739=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                # 2533 "05function.c"
                # 2527 "05function.c"
                if(_if_conditional610=string_operator_equals(type->mClass->mName,field_type_739->mClass->mName)&&type->mPointerNum==field_type_739->mPointerNum&&field_type_739->mHeap,                _if_conditional610) {
                    # 2529 "05function.c"
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    # 2530 "05function.c"
                    exit(2);
                }
                # 2533 "05function.c"
                char source2_740[1024];
                memset(&source2_740, 0, sizeof(char)                *(1024)                );
                # 2534 "05function.c"
                snprintf(source2_740,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_738,name_738);
                # 2536 "05function.c"
                buffer_append_str(source_733,source2_740);
                name_738 = come_decrement_ref_count2(name_738, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_739,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_736,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 2540 "05function.c"
        buffer_append_str(source_733,"return true;\n");
        # 2541 "05function.c"
        buffer_append_char(source_733,125);
        # 2543 "05function.c"
        p_741=info->p;
        # 2544 "05function.c"
        sline_742=info->sline;
        # 2545 "05function.c"
        sname_743=(char*)come_increment_ref_count(info->sname);
        # 2546 "05function.c"
        head_744=info->head;
        # 2547 "05function.c"
        source3_745=(struct buffer*)come_increment_ref_count(info->source);
        # 2549 "05function.c"
        __dec_obj208=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_733);
        come_call_finalizer3(__dec_obj208,buffer_finalize, 0, 0, 0, 0, (void*)0);
        # 2550 "05function.c"
        info->p=source_733->buf;
        # 2551 "05function.c"
        info->head=source_733->buf;
        # 2553 "05function.c"
        __dec_obj209=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value868=__builtin_string(real_fun_name_730))));
        __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value868 = come_decrement_ref_count2(right_value868, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2554 "05function.c"
        info->sline=0;
        # 2556 "05function.c"
        block_746=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value869=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer3(right_value869,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        # 2558 "05function.c"
        result_type_747=(struct sType*)come_increment_ref_count(((struct sType*)(right_value871=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value870=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2558, "sType")))),"bool",(_Bool)0,info))));
        come_call_finalizer3(right_value870,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value871,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 2559 "05function.c"
        name_748=(char*)come_increment_ref_count(((char*)(right_value872=string_clone(real_fun_name_730))));
        right_value872 = come_decrement_ref_count2(right_value872, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2560 "05function.c"
        left_type_749=(struct sType*)come_increment_ref_count(((struct sType*)(right_value873=sType_clone(type))));
        come_call_finalizer3(right_value873,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 2561 "05function.c"
        left_type_749->mHeap=(_Bool)0;
        # 2562 "05function.c"
        right_type_750=(struct sType*)come_increment_ref_count(((struct sType*)(right_value874=sType_clone(type))));
        come_call_finalizer3(right_value874,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 2563 "05function.c"
        right_type_750->mHeap=(_Bool)0;
        # 2564 "05function.c"
        {__list_values29___751[0]=come_increment_ref_count(left_type_749);
__list_values29___751[1]=come_increment_ref_count(right_type_750);
}        param_types_752=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value876=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value875=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2564, "struct list$1sTypeph")))),2,__list_values29___751))));
        come_call_finalizer3(right_value875,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value876,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 2565 "05function.c"
        {__list_values30___753[0]=come_increment_ref_count(((char*)(right_value877=__builtin_string("left"))));
__list_values30___753[1]=come_increment_ref_count(((char*)(right_value878=__builtin_string("right"))));
}        param_names_754=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value880=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value879=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2565, "struct list$1charph")))),2,__list_values30___753))));
        right_value877 = come_decrement_ref_count2(right_value877, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value878 = come_decrement_ref_count2(right_value878, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value879,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value880,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 2566 "05function.c"
        param_default_parametors_755=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value882=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value881=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2566, "list$1charph"))))))));
        come_call_finalizer3(right_value881,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value882,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 2567 "05function.c"
        list$1charph_push_back(param_default_parametors_755,((void*)0));
        # 2568 "05function.c"
        list$1charph_push_back(param_default_parametors_755,((void*)0));
        # 2570 "05function.c"
        header_buf_756=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value884=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value883=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2570, "buffer"))))))));
        come_call_finalizer3(right_value883,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value884,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2572 "05function.c"
        buffer_append_str(header_buf_756,((char*)(right_value885=make_come_type_name_string(result_type_747,info))));
        right_value885 = come_decrement_ref_count2(right_value885, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2573 "05function.c"
        buffer_append_str(header_buf_756," ");
        # 2574 "05function.c"
        buffer_append_str(header_buf_756,real_fun_name_730);
        # 2575 "05function.c"
        buffer_append_str(header_buf_756,"(");
        # 2589 "05function.c"
        for(        i_757=0;        i_757<list$1sTypeph_length(param_types_752);        i_757++        ){
            # 2578 "05function.c"
            param_type_758=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_752,i_757), "05function.c", 2578, 18));
            # 2579 "05function.c"
            param_name_759=((char*)come_null_check(list$1charphp_operator_load_element(param_names_754,i_757), "05function.c", 2579, 19));
            # 2581 "05function.c"
            buffer_append_str(header_buf_756,((char*)(right_value886=make_come_type_name_string(param_type_758,info))));
            right_value886 = come_decrement_ref_count2(right_value886, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 2582 "05function.c"
            buffer_append_str(header_buf_756," ");
            # 2583 "05function.c"
            buffer_append_str(header_buf_756,param_name_759);
            # 2588 "05function.c"
            # 2585 "05function.c"
            if(_if_conditional611=i_757!=list$1sTypeph_length(param_types_752)-1,            _if_conditional611) {
                # 2586 "05function.c"
                buffer_append_str(header_buf_756,",");
            }
        }
        # 2589 "05function.c"
        buffer_append_str(header_buf_756,")");
        # 2591 "05function.c"
        result_type_747->mStatic=(_Bool)0;
        # 2599 "05function.c"
        fun_760=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value890=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value887=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2593, "sFun")))),(char*)come_increment_ref_count(name_748),(struct sType*)come_increment_ref_count(result_type_747),(struct list$1sTypeph*)come_increment_ref_count(param_types_752),(struct list$1charph*)come_increment_ref_count(param_names_754),(struct list$1charph*)come_increment_ref_count(param_default_parametors_755),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_746),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value888=buffer_to_string(header_buf_756)))),(char*)come_increment_ref_count(((char*)(right_value889=__builtin_string("")))),info))));
        come_call_finalizer3(right_value887,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value888 = come_decrement_ref_count2(right_value888, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value889 = come_decrement_ref_count2(right_value889, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value890,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        # 2601 "05function.c"
        fun2_761=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value891=__builtin_string(fun_name))));
        right_value891 = come_decrement_ref_count2(right_value891, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2607 "05function.c"
        # 2602 "05function.c"
        if(_if_conditional612=fun2_761==((void*)0)||fun2_761->mExternal,        _if_conditional612) {
            # 2604 "05function.c"
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value892=string_clone(name_748)))),(struct sFun*)come_increment_ref_count(fun_760));
            right_value892 = come_decrement_ref_count2(right_value892, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 2607 "05function.c"
        equaler_729=fun_760;
        # 2609 "05function.c"
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2609, "struct sNode");
        _inf_obj_value12=come_increment_ref_count(((struct sFunNode*)(right_value894=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value893=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2609, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_760),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sFunNode_finalize;
        _inf_value12->clone=(void*)sFunNode_clone;
        _inf_value12->compile=(void*)sFunNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sFunNode_terminated;
        _inf_value12->kind=(void*)sFunNode_kind;
        node_763=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value898=_inf_value12)));
        come_call_finalizer3(right_value893,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value894,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value898) { right_value898 = come_decrement_ref_count2(right_value898, ((struct sNode*)right_value898)->finalize, ((struct sNode*)right_value898)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 2616 "05function.c"
        # 2611 "05function.c"
        if(_if_conditional619=!node_compile(node_763,info),        _if_conditional619) {
            # 2612 "05function.c"
            err_msg(info,"compiling error(X)");
            # 2613 "05function.c"
            exit(2);
        }
        # 2616 "05function.c"
        __dec_obj212=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_745);
        come_call_finalizer3(__dec_obj212,buffer_finalize, 0, 0, 0, 0, (void*)0);
        # 2617 "05function.c"
        info->p=p_741;
        # 2618 "05function.c"
        info->head=head_744;
        # 2619 "05function.c"
        info->sline=sline_742;
        # 2620 "05function.c"
        __dec_obj213=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_743);
        __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_733,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_743 = come_decrement_ref_count2(sname_743, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_745,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_746,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_747,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_748 = come_decrement_ref_count2(name_748, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_749,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_750,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_752,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_754,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_755,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_756,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_760,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_763) { node_763 = come_decrement_ref_count2(node_763, ((struct sNode*)node_763)->finalize, ((struct sNode*)node_763)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 2623 "05function.c"
    info->current_stack_frame_struct=current_stack_frame_struct_728;
    # 2625 "05function.c"
    __dec_obj214=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_725);
    __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2626 "05function.c"
    __dec_obj215=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_726);
    __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2627 "05function.c"
    __dec_obj216=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_727);
    __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2629 "05function.c"
    __result261__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value900=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value899=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2629, "struct tuple2$2sFunpcharph")))),equaler_729,(char*)come_increment_ref_count(real_fun_name_730))));
    last_code_725 = come_decrement_ref_count2(last_code_725, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_726 = come_decrement_ref_count2(last_code2_726, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_727 = come_decrement_ref_count2(last_code3_727, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_730 = come_decrement_ref_count2(real_fun_name_730, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_731,sType_finalize, 0, 0, 0, 0, (void*)0);
    right_value899 = come_decrement_ref_count2(right_value899, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value900,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result261__;
    last_code_725 = come_decrement_ref_count2(last_code_725, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_726 = come_decrement_ref_count2(last_code2_726, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_727 = come_decrement_ref_count2(last_code3_727, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_730 = come_decrement_ref_count2(real_fun_name_730, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_731,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_764;
char* __dec_obj217;
char* last_code2_765;
char* __dec_obj218;
char* last_code3_766;
char* __dec_obj219;
struct sClass* current_stack_frame_struct_767;
struct sFun* cloner_768;
void* right_value901;
char* real_fun_name_769;
void* right_value902;
struct sType* type2_770;
struct sClass* klass_771;
_Bool _if_conditional620;
void* right_value903;
void* right_value904;
struct buffer* source_772;
void* right_value905;
void* right_value906;
_Bool _if_conditional621;
char* name_773;
struct list$1tuple2$2charphsTypephph* o2_saved_775;
struct tuple2$2charphsTypeph* it_776;
struct tuple2$2charphsTypeph* multiple_assign_var15;
char* name_777;
struct sType* field_type_778;
_Bool _if_conditional622;
_Bool _if_conditional623;
_Bool _if_conditional624;
struct list$1tuple2$2charphsTypephph* o2_saved_781;
struct tuple2$2charphsTypeph* it_782;
struct tuple2$2charphsTypeph* multiple_assign_var16;
char* name_783;
struct sType* field_type_784;
_Bool _if_conditional625;
_Bool _if_conditional626;
_Bool _if_conditional627;
void* right_value907;
char* p_788;
int sline_789;
char* sname_790;
struct buffer* source3_791;
char* head_792;
struct buffer* __dec_obj220;
void* right_value908;
char* __dec_obj221;
void* right_value909;
struct sBlock* block_793;
void* right_value910;
struct sType* result_type_794;
void* right_value911;
char* name_795;
void* right_value912;
struct sType* self_type_796;
struct sType* __list_values31___797[1];
void* right_value913;
void* right_value914;
struct list$1sTypeph* param_types_798;
void* right_value915;
char* __list_values32___799[1];
void* right_value916;
void* right_value917;
struct list$1charph* param_names_800;
void* right_value918;
void* right_value919;
struct list$1charph* param_default_parametors_801;
void* right_value920;
void* right_value921;
struct buffer* header_buf_802;
void* right_value922;
int i_803;
struct sType* param_type_804;
char* param_name_805;
void* right_value923;
_Bool _if_conditional628;
void* right_value924;
void* right_value925;
void* right_value926;
void* right_value927;
struct sFun* fun_806;
void* right_value928;
struct sFun* fun2_807;
_Bool _if_conditional629;
void* right_value929;
void* right_value930;
void* right_value931;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* right_value935;
struct sNode* node_809;
_Bool _if_conditional636;
char* __dec_obj224;
struct buffer* __dec_obj225;
char* __dec_obj226;
char* __dec_obj227;
char* __dec_obj228;
void* right_value936;
void* right_value937;
struct tuple2$2sFunpcharph* __result264__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_764, 0, sizeof(char*));
memset(&last_code2_765, 0, sizeof(char*));
memset(&last_code3_766, 0, sizeof(char*));
memset(&current_stack_frame_struct_767, 0, sizeof(struct sClass*));
memset(&cloner_768, 0, sizeof(struct sFun*));
right_value901 = (void*)0;
memset(&real_fun_name_769, 0, sizeof(char*));
right_value902 = (void*)0;
memset(&type2_770, 0, sizeof(struct sType*));
memset(&klass_771, 0, sizeof(struct sClass*));
right_value903 = (void*)0;
right_value904 = (void*)0;
memset(&source_772, 0, sizeof(struct buffer*));
right_value905 = (void*)0;
right_value906 = (void*)0;
memset(&name_773, 0, sizeof(char*));
memset(&o2_saved_775, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_776, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_777, 0, sizeof(char*));
memset(&field_type_778, 0, sizeof(struct sType*));
memset(&name_777, 0, sizeof(char*));
memset(&field_type_778, 0, sizeof(struct sType*));
memset(&o2_saved_781, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_782, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_783, 0, sizeof(char*));
memset(&field_type_784, 0, sizeof(struct sType*));
memset(&name_783, 0, sizeof(char*));
memset(&field_type_784, 0, sizeof(struct sType*));
right_value907 = (void*)0;
memset(&p_788, 0, sizeof(char*));
memset(&sline_789, 0, sizeof(int));
memset(&sname_790, 0, sizeof(char*));
memset(&source3_791, 0, sizeof(struct buffer*));
memset(&head_792, 0, sizeof(char*));
right_value908 = (void*)0;
right_value909 = (void*)0;
memset(&block_793, 0, sizeof(struct sBlock*));
right_value910 = (void*)0;
memset(&result_type_794, 0, sizeof(struct sType*));
right_value911 = (void*)0;
memset(&name_795, 0, sizeof(char*));
right_value912 = (void*)0;
memset(&self_type_796, 0, sizeof(struct sType*));
right_value913 = (void*)0;
right_value914 = (void*)0;
memset(&param_types_798, 0, sizeof(struct list$1sTypeph*));
right_value915 = (void*)0;
right_value916 = (void*)0;
right_value917 = (void*)0;
memset(&param_names_800, 0, sizeof(struct list$1charph*));
right_value918 = (void*)0;
right_value919 = (void*)0;
memset(&param_default_parametors_801, 0, sizeof(struct list$1charph*));
right_value920 = (void*)0;
right_value921 = (void*)0;
memset(&header_buf_802, 0, sizeof(struct buffer*));
right_value922 = (void*)0;
memset(&i_803, 0, sizeof(int));
memset(&param_type_804, 0, sizeof(struct sType*));
memset(&param_name_805, 0, sizeof(char*));
right_value923 = (void*)0;
right_value924 = (void*)0;
right_value925 = (void*)0;
right_value926 = (void*)0;
right_value927 = (void*)0;
memset(&fun_806, 0, sizeof(struct sFun*));
right_value928 = (void*)0;
memset(&fun2_807, 0, sizeof(struct sFun*));
right_value929 = (void*)0;
right_value930 = (void*)0;
right_value931 = (void*)0;
right_value935 = (void*)0;
memset(&node_809, 0, sizeof(struct sNode*));
right_value936 = (void*)0;
right_value937 = (void*)0;
    # 2634 "05function.c"
    last_code_764=(char*)come_increment_ref_count(info->module->mLastCode);
    # 2635 "05function.c"
    __dec_obj217=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2636 "05function.c"
    last_code2_765=(char*)come_increment_ref_count(info->module->mLastCode2);
    # 2637 "05function.c"
    __dec_obj218=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2638 "05function.c"
    last_code3_766=(char*)come_increment_ref_count(info->module->mLastCode3);
    # 2639 "05function.c"
    __dec_obj219=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2641 "05function.c"
    current_stack_frame_struct_767=info->current_stack_frame_struct;
    # 2642 "05function.c"
    info->current_stack_frame_struct=((void*)0);
    # 2643 "05function.c"
    cloner_768=((void*)0);
    # 2645 "05function.c"
    real_fun_name_769=(char*)come_increment_ref_count(((char*)(right_value901=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value901 = come_decrement_ref_count2(right_value901, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 2647 "05function.c"
    type2_770=(struct sType*)come_increment_ref_count(((struct sType*)(right_value902=solve_generics(type,type,info))));
    come_call_finalizer3(right_value902,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 2649 "05function.c"
    type=type2_770;
    # 2651 "05function.c"
    klass_771=type->mClass;
    # 2809 "05function.c"
    # 2653 "05function.c"
    if(_if_conditional620=type->mPointerNum>0&&!klass_771->mNumber,    _if_conditional620) {
        # 2654 "05function.c"
        source_772=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value904=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value903=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2654, "buffer"))))))));
        come_call_finalizer3(right_value903,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value904,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2656 "05function.c"
        buffer_append_str(source_772,"{\n");
        # 2657 "05function.c"
        buffer_append_str(source_772,"if(self == (void*)0) { return (void*)0; }\n");
        # 2658 "05function.c"
        buffer_append_str(source_772,((char*)(right_value906=xsprintf("var result = new %s;\n",((char*)(right_value905=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info)))))));
        right_value905 = come_decrement_ref_count2(right_value905, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value906 = come_decrement_ref_count2(right_value906, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2726 "05function.c"
        # 2661 "05function.c"
        if(klass_771->mProtocol) {
            # 2662 "05function.c"
            name_773="_protocol_obj";
            # 2663 "05function.c"
            char source2_774[1024];
            memset(&source2_774, 0, sizeof(char)            *(1024)            );
            # 2664 "05function.c"
            snprintf(source2_774,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            # 2666 "05function.c"
            buffer_append_str(source_772,source2_774);
            # 2668 "05function.c"
            klass_771=map$2charphsClassphp_operator_load_element(info->classes,klass_771->mName);
            # 2693 "05function.c"
            for(            o2_saved_775=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_771->mFields)),it_776=list$1tuple2$2charphsTypephph_begin((o2_saved_775));            !list$1tuple2$2charphsTypephph_end((o2_saved_775));            it_776=list$1tuple2$2charphsTypephph_next((o2_saved_775))            ){
                # 2670 "05function.c"
                multiple_assign_var15=it_776;
                name_777=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_778=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                # 2678 "05function.c"
                # 2672 "05function.c"
                if(_if_conditional622=string_operator_equals(type->mClass->mName,field_type_778->mClass->mName)&&type->mPointerNum==field_type_778->mPointerNum&&field_type_778->mHeap,                _if_conditional622) {
                    # 2674 "05function.c"
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    # 2675 "05function.c"
                    exit(2);
                }
                # 2692 "05function.c"
                # 2678 "05function.c"
                if(_if_conditional623=string_operator_equals(name_777,"_protocol_obj"),                _if_conditional623) {
                }
                else {
                    # 2692 "05function.c"
                    # 2680 "05function.c"
                    if(_if_conditional624=list$1sNodeph_length(field_type_778->mArrayNum)>0,                    _if_conditional624) {
                        # 2681 "05function.c"
                        char source2_779[1024];
                        memset(&source2_779, 0, sizeof(char)                        *(1024)                        );
                        # 2682 "05function.c"
                        snprintf(source2_779,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_777,name_777,name_777);
                        # 2684 "05function.c"
                        buffer_append_str(source_772,source2_779);
                    }
                    else {
                        # 2687 "05function.c"
                        char source2_780[1024];
                        memset(&source2_780, 0, sizeof(char)                        *(1024)                        );
                        # 2688 "05function.c"
                        snprintf(source2_780,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_777,name_777);
                        # 2690 "05function.c"
                        buffer_append_str(source_772,source2_780);
                    }
                }
                name_777 = come_decrement_ref_count2(name_777, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_778,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_775,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 2695 "05function.c"
            klass_771=map$2charphsClassphp_operator_load_element(info->classes,klass_771->mName);
            # 2724 "05function.c"
            for(            o2_saved_781=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_771->mFields)),it_782=list$1tuple2$2charphsTypephph_begin((o2_saved_781));            !list$1tuple2$2charphsTypephph_end((o2_saved_781));            it_782=list$1tuple2$2charphsTypephph_next((o2_saved_781))            ){
                # 2697 "05function.c"
                multiple_assign_var16=it_782;
                name_783=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_784=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                # 2705 "05function.c"
                # 2699 "05function.c"
                if(_if_conditional625=string_operator_equals(type->mClass->mName,field_type_784->mClass->mName)&&type->mPointerNum==field_type_784->mPointerNum&&field_type_784->mHeap,                _if_conditional625) {
                    # 2701 "05function.c"
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    # 2702 "05function.c"
                    exit(2);
                }
                # 2723 "05function.c"
                # 2705 "05function.c"
                if(field_type_784->mHeap) {
                    # 2706 "05function.c"
                    char source2_785[1024];
                    memset(&source2_785, 0, sizeof(char)                    *(1024)                    );
                    # 2707 "05function.c"
                    snprintf(source2_785,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_783,name_783,name_783);
                    # 2709 "05function.c"
                    buffer_append_str(source_772,source2_785);
                }
                else {
                    # 2723 "05function.c"
                    # 2711 "05function.c"
                    if(_if_conditional627=list$1sNodeph_length(field_type_784->mArrayNum)>0,                    _if_conditional627) {
                        # 2712 "05function.c"
                        char source2_786[1024];
                        memset(&source2_786, 0, sizeof(char)                        *(1024)                        );
                        # 2713 "05function.c"
                        snprintf(source2_786,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_783,name_783,name_783);
                        # 2715 "05function.c"
                        buffer_append_str(source_772,source2_786);
                    }
                    else {
                        # 2718 "05function.c"
                        char source2_787[1024];
                        memset(&source2_787, 0, sizeof(char)                        *(1024)                        );
                        # 2719 "05function.c"
                        snprintf(source2_787,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_783,name_783);
                        # 2721 "05function.c"
                        buffer_append_str(source_772,source2_787);
                    }
                }
                name_783 = come_decrement_ref_count2(name_783, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_784,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_781,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 2726 "05function.c"
        buffer_append_str(source_772,((char*)(right_value907=xsprintf("return result;"))));
        right_value907 = come_decrement_ref_count2(right_value907, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2727 "05function.c"
        buffer_append_char(source_772,125);
        # 2729 "05function.c"
        p_788=info->p;
        # 2730 "05function.c"
        sline_789=info->sline;
        # 2731 "05function.c"
        sname_790=(char*)come_increment_ref_count(info->sname);
        # 2732 "05function.c"
        source3_791=(struct buffer*)come_increment_ref_count(info->source);
        # 2733 "05function.c"
        head_792=info->head;
        # 2735 "05function.c"
        __dec_obj220=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_772);
        come_call_finalizer3(__dec_obj220,buffer_finalize, 0, 0, 0, 0, (void*)0);
        # 2736 "05function.c"
        info->p=info->source->buf;
        # 2737 "05function.c"
        info->head=info->source->buf;
        # 2739 "05function.c"
        __dec_obj221=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value908=__builtin_string(real_fun_name_769))));
        __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value908 = come_decrement_ref_count2(right_value908, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2740 "05function.c"
        info->sline=1;
        # 2742 "05function.c"
        block_793=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value909=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer3(right_value909,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        # 2744 "05function.c"
        result_type_794=(struct sType*)come_increment_ref_count(((struct sType*)(right_value910=sType_clone(type))));
        come_call_finalizer3(right_value910,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 2745 "05function.c"
        name_795=(char*)come_increment_ref_count(((char*)(right_value911=string_clone(real_fun_name_769))));
        right_value911 = come_decrement_ref_count2(right_value911, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2746 "05function.c"
        self_type_796=(struct sType*)come_increment_ref_count(((struct sType*)(right_value912=sType_clone(type))));
        come_call_finalizer3(right_value912,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 2747 "05function.c"
        self_type_796->mHeap=(_Bool)0;
        # 2748 "05function.c"
        {__list_values31___797[0]=come_increment_ref_count(self_type_796);
}        param_types_798=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value914=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value913=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2748, "struct list$1sTypeph")))),1,__list_values31___797))));
        come_call_finalizer3(right_value913,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value914,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 2749 "05function.c"
        {__list_values32___799[0]=come_increment_ref_count(((char*)(right_value915=__builtin_string("self"))));
}        param_names_800=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value917=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value916=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2749, "struct list$1charph")))),1,__list_values32___799))));
        right_value915 = come_decrement_ref_count2(right_value915, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value916,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value917,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 2750 "05function.c"
        param_default_parametors_801=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value919=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value918=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2750, "list$1charph"))))))));
        come_call_finalizer3(right_value918,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value919,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 2751 "05function.c"
        list$1charph_push_back(param_default_parametors_801,((void*)0));
        # 2753 "05function.c"
        header_buf_802=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value921=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value920=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2753, "buffer"))))))));
        come_call_finalizer3(right_value920,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value921,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2755 "05function.c"
        buffer_append_str(header_buf_802,((char*)(right_value922=make_come_type_name_string(result_type_794,info))));
        right_value922 = come_decrement_ref_count2(right_value922, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2756 "05function.c"
        buffer_append_str(header_buf_802," ");
        # 2757 "05function.c"
        buffer_append_str(header_buf_802,real_fun_name_769);
        # 2758 "05function.c"
        buffer_append_str(header_buf_802,"(");
        # 2772 "05function.c"
        for(        i_803=0;        i_803<list$1sTypeph_length(param_types_798);        i_803++        ){
            # 2761 "05function.c"
            param_type_804=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_798,i_803), "05function.c", 2761, 20));
            # 2762 "05function.c"
            param_name_805=((char*)come_null_check(list$1charphp_operator_load_element(param_names_800,i_803), "05function.c", 2762, 21));
            # 2764 "05function.c"
            buffer_append_str(header_buf_802,((char*)(right_value923=make_come_type_name_string(param_type_804,info))));
            right_value923 = come_decrement_ref_count2(right_value923, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 2765 "05function.c"
            buffer_append_str(header_buf_802," ");
            # 2766 "05function.c"
            buffer_append_str(header_buf_802,param_name_805);
            # 2771 "05function.c"
            # 2768 "05function.c"
            if(_if_conditional628=i_803!=list$1sTypeph_length(param_types_798)-1,            _if_conditional628) {
                # 2769 "05function.c"
                buffer_append_str(header_buf_802,",");
            }
        }
        # 2772 "05function.c"
        buffer_append_str(header_buf_802,")");
        # 2774 "05function.c"
        result_type_794->mStatic=(_Bool)0;
        # 2782 "05function.c"
        fun_806=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value927=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value924=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2776, "sFun")))),(char*)come_increment_ref_count(name_795),(struct sType*)come_increment_ref_count(result_type_794),(struct list$1sTypeph*)come_increment_ref_count(param_types_798),(struct list$1charph*)come_increment_ref_count(param_names_800),(struct list$1charph*)come_increment_ref_count(param_default_parametors_801),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_793),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value925=buffer_to_string(header_buf_802)))),(char*)come_increment_ref_count(((char*)(right_value926=__builtin_string("")))),info))));
        come_call_finalizer3(right_value924,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value925 = come_decrement_ref_count2(right_value925, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value926 = come_decrement_ref_count2(right_value926, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value927,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        # 2784 "05function.c"
        fun_806->mCloner=(_Bool)1;
        # 2786 "05function.c"
        fun2_807=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value928=__builtin_string(fun_name))));
        right_value928 = come_decrement_ref_count2(right_value928, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2791 "05function.c"
        # 2787 "05function.c"
        if(_if_conditional629=fun2_807==((void*)0)||fun2_807->mExternal,        _if_conditional629) {
            # 2788 "05function.c"
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value929=string_clone(name_795)))),(struct sFun*)come_increment_ref_count(fun_806));
            right_value929 = come_decrement_ref_count2(right_value929, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 2791 "05function.c"
        cloner_768=fun_806;
        # 2793 "05function.c"
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2793, "struct sNode");
        _inf_obj_value13=come_increment_ref_count(((struct sFunNode*)(right_value931=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value930=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2793, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_806),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sFunNode_finalize;
        _inf_value13->clone=(void*)sFunNode_clone;
        _inf_value13->compile=(void*)sFunNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sFunNode_terminated;
        _inf_value13->kind=(void*)sFunNode_kind;
        node_809=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value935=_inf_value13)));
        come_call_finalizer3(right_value930,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value931,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value935) { right_value935 = come_decrement_ref_count2(right_value935, ((struct sNode*)right_value935)->finalize, ((struct sNode*)right_value935)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 2800 "05function.c"
        # 2795 "05function.c"
        if(_if_conditional636=!node_compile(node_809,info),        _if_conditional636) {
            # 2796 "05function.c"
            err_msg(info,"compiling error(Y)");
            # 2797 "05function.c"
            exit(2);
        }
        # 2800 "05function.c"
        __dec_obj224=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_790);
        __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
        # 2801 "05function.c"
        info->sline=sline_789;
        # 2803 "05function.c"
        __dec_obj225=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_791);
        come_call_finalizer3(__dec_obj225,buffer_finalize, 0, 0, 0, 0, (void*)0);
        # 2804 "05function.c"
        info->p=p_788;
        # 2805 "05function.c"
        info->head=head_792;
        # 2806 "05function.c"
        info->sline=sline_789;
        come_call_finalizer3(source_772,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_790 = come_decrement_ref_count2(sname_790, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_791,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_793,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_794,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_795 = come_decrement_ref_count2(name_795, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_796,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_798,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_800,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_801,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_802,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_806,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_809) { node_809 = come_decrement_ref_count2(node_809, ((struct sNode*)node_809)->finalize, ((struct sNode*)node_809)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 2809 "05function.c"
    info->current_stack_frame_struct=current_stack_frame_struct_767;
    # 2811 "05function.c"
    __dec_obj226=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_764);
    __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2812 "05function.c"
    __dec_obj227=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_765);
    __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2813 "05function.c"
    __dec_obj228=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_766);
    __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2815 "05function.c"
    __result264__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value937=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value936=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2815, "struct tuple2$2sFunpcharph")))),cloner_768,(char*)come_increment_ref_count(real_fun_name_769))));
    last_code_764 = come_decrement_ref_count2(last_code_764, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_765 = come_decrement_ref_count2(last_code2_765, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_766 = come_decrement_ref_count2(last_code3_766, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_769 = come_decrement_ref_count2(real_fun_name_769, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_770,sType_finalize, 0, 0, 0, 0, (void*)0);
    right_value936 = come_decrement_ref_count2(right_value936, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value937,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result264__;
    last_code_764 = come_decrement_ref_count2(last_code_764, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_765 = come_decrement_ref_count2(last_code2_765, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_766 = come_decrement_ref_count2(last_code3_766, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_769 = come_decrement_ref_count2(real_fun_name_769, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_770,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static void sFunNode_finalize(struct sFunNode* self){
void* __result_obj__;
_Bool _if_conditional630;
_Bool _if_conditional631;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sFunNode_finalize"
            # 0 "sFunNode_finalize"
            if(_if_conditional630=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional630) {
                # 0 "sFunNode_finalize"
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 2 "sFunNode_finalize"
            # 1 "sFunNode_finalize"
            if(_if_conditional631=self!=((void*)0)&&self->mFun!=((void*)0),            _if_conditional631) {
                # 1 "sFunNode_finalize"
                come_call_finalizer3(self->mFun,sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__;
_Bool _if_conditional632;
struct sFunNode* __result262__;
void* right_value932;
struct sFunNode* result_808;
_Bool _if_conditional633;
_Bool _if_conditional634;
void* right_value933;
char* __dec_obj222;
_Bool _if_conditional635;
void* right_value934;
struct sFun* __dec_obj223;
struct sFunNode* __result263__;
memset(&__result_obj__, 0, sizeof(void*));
right_value932 = (void*)0;
memset(&result_808, 0, sizeof(struct sFunNode*));
right_value933 = (void*)0;
right_value934 = (void*)0;
            # 3 "sFunNode_clone"
            # 2 "sFunNode_clone"
            if(_if_conditional632=self==(void*)0,            _if_conditional632) {
                # 2 "sFunNode_clone"
                __result262__ = __result_obj__ = (void*)0;
                return __result262__;
            }
            # 3 "sFunNode_clone"
            result_808=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value932=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "sFunNode"))));
            come_call_finalizer3(right_value932,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            # 5 "sFunNode_clone"
            # 4 "sFunNode_clone"
            if(_if_conditional633=self!=((void*)0),            _if_conditional633) {
                # 4 "sFunNode_clone"
                result_808->sline=self->sline;
            }
            # 6 "sFunNode_clone"
            # 5 "sFunNode_clone"
            if(_if_conditional634=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional634) {
                # 5 "sFunNode_clone"
                __dec_obj222=result_808->sname;
                result_808->sname=(char*)come_increment_ref_count(((char*)(right_value933=string_clone(self->sname))));
                __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value933 = come_decrement_ref_count2(right_value933, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 7 "sFunNode_clone"
            # 6 "sFunNode_clone"
            if(_if_conditional635=self!=((void*)0)&&self->mFun!=((void*)0),            _if_conditional635) {
                # 6 "sFunNode_clone"
                __dec_obj223=result_808->mFun;
                result_808->mFun=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value934=sFun_clone(self->mFun))));
                come_call_finalizer3(__dec_obj223,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value934,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 7 "sFunNode_clone"
            __result263__ = __result_obj__ = result_808;
            come_call_finalizer3(result_808,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
            return __result263__;
            come_call_finalizer3(result_808,sFunNode_finalize, 0, 0, 0, 0, (void*)0);
}

