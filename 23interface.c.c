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
struct sInterfaceNode
{
    int sline;
    char* sname;
    char* name;
    struct sClass* klass;
    _Bool mOutput;
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

struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);

struct sInterfaceNode* sInterfaceNode_initialize(struct sInterfaceNode* self, char* name, struct sClass* klass, _Bool output, struct sInfo* info);

_Bool sInterfaceNode_terminated(struct sInterfaceNode* self);

char* sInterfaceNode_kind(struct sInterfaceNode* self);

_Bool sInterfaceNode_compile(struct sInterfaceNode* self, struct sInfo* info);

static struct sClass* sClass_clone(struct sClass* self);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
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
static struct sNode* sNode_clone(struct sNode* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charph_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
struct tuple2$2sTypephcharph* parse_interface_function(struct sInfo* info);

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
static struct list$1sTypeph* list$1sTypeph_insert(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charph_insert(struct list$1charph* self, int position, char* item);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static void sInterfaceNode_finalize(struct sInterfaceNode* self);
static struct sInterfaceNode* sInterfaceNode_clone(struct sInterfaceNode* self);
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










struct sInterfaceNode* sInterfaceNode_initialize(struct sInterfaceNode* self, char* name, struct sClass* klass, _Bool output, struct sInfo* info){
void* __result_obj__;
void* right_value79;
char* __dec_obj12;
void* right_value133;
struct sClass* __dec_obj47;
void* right_value134;
char* __dec_obj48;
struct sInterfaceNode* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value133 = (void*)0;
right_value134 = (void*)0;
    # 11 "23interface.c"
    __dec_obj12=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value79=__builtin_string(name))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 12 "23interface.c"
    __dec_obj47=self->klass;
    self->klass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value133=sClass_clone(klass))));
    come_call_finalizer3(__dec_obj47,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value133,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 14 "23interface.c"
    self->sline=info->sline;
    # 15 "23interface.c"
    __dec_obj48=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value134=__builtin_string(info->sname))));
    __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 17 "23interface.c"
    self->mOutput=output;
    # 20 "23interface.c"
    __result82__ = __result_obj__ = self;
    come_call_finalizer3(self,sInterfaceNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(klass,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result82__;
    come_call_finalizer3(self,sInterfaceNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(klass,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sInterfaceNode_terminated(struct sInterfaceNode* self){
void* __result_obj__;
_Bool __result83__;
memset(&__result_obj__, 0, sizeof(void*));
    # 22 "23interface.c"
    __result83__ = (_Bool)0;
    return __result83__;
}

char* sInterfaceNode_kind(struct sInterfaceNode* self){
void* __result_obj__;
void* right_value135;
char* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value135 = (void*)0;
    # 27 "23interface.c"
    __result84__ = __result_obj__ = ((char*)(right_value135=__builtin_string("sInterfaceNode")));
    right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result84__;
}

_Bool sInterfaceNode_compile(struct sInterfaceNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value136;
char* name_90;
struct sClass* klass_91;
void* right_value137;
void* right_value138;
struct buffer* buf_92;
void* right_value139;
struct list$1tuple2$2charphsTypephph* o2_saved_93;
struct tuple2$2charphsTypeph* it_96;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* name_99;
struct sType* type_100;
void* right_value140;
_Bool _if_conditional160;
void* right_value141;
void* right_value148;
void* right_value149;
_Bool __result116__;
memset(&__result_obj__, 0, sizeof(void*));
right_value136 = (void*)0;
memset(&name_90, 0, sizeof(char*));
memset(&klass_91, 0, sizeof(struct sClass*));
right_value137 = (void*)0;
right_value138 = (void*)0;
memset(&buf_92, 0, sizeof(struct buffer*));
right_value139 = (void*)0;
memset(&o2_saved_93, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_96, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_99, 0, sizeof(char*));
memset(&type_100, 0, sizeof(struct sType*));
memset(&name_99, 0, sizeof(char*));
memset(&type_100, 0, sizeof(struct sType*));
right_value140 = (void*)0;
right_value141 = (void*)0;
right_value148 = (void*)0;
right_value149 = (void*)0;
    # 32 "23interface.c"
    name_90=(char*)come_increment_ref_count(((char*)(right_value136=__builtin_string(self->name))));
    right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 33 "23interface.c"
    klass_91=self->klass;
    # 34 "23interface.c"
    klass_91->mProtocol=(_Bool)1;
    # 36 "23interface.c"
    buf_92=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value138=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value137=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "23interface.c", 36, "buffer"))))))));
    come_call_finalizer3(right_value137,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value138,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 38 "23interface.c"
    buffer_append_str(buf_92,((char*)(right_value139=xsprintf("struct %s\n{\n",klass_91->mName))));
    right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 49 "23interface.c"
    for(    o2_saved_93=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_91->mFields)),it_96=list$1tuple2$2charphsTypephph_begin((o2_saved_93));    !list$1tuple2$2charphsTypephph_end((o2_saved_93));    it_96=list$1tuple2$2charphsTypephph_next((o2_saved_93))    ){
        # 42 "23interface.c"
        multiple_assign_var1=it_96;
        name_99=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        type_100=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        # 44 "23interface.c"
        buffer_append_str(buf_92,"    ");
        # 45 "23interface.c"
        buffer_append_str(buf_92,((char*)(right_value140=make_define_var(type_100,name_99,(_Bool)0,info))));
        right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 46 "23interface.c"
        buffer_append_str(buf_92,";\n");
        name_99 = come_decrement_ref_count2(name_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_100,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_93,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    # 49 "23interface.c"
    buffer_append_str(buf_92,"};\n");
    # 56 "23interface.c"
    # 51 "23interface.c"
    if(self->mOutput) {
        # 52 "23interface.c"
        add_come_code_at_source_head(info,"%s",((char*)(right_value141=buffer_to_string(buf_92))));
        right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 53 "23interface.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value148=__builtin_string(name_90)))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value149=sClass_clone(klass_91)))));
        right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value149,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    }
    # 56 "23interface.c"
    __result116__ = (_Bool)1;
    name_90 = come_decrement_ref_count2(name_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_92,buffer_finalize, 0, 0, 0, 0, (void*)0);
    return __result116__;
    name_90 = come_decrement_ref_count2(name_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_92,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional19;
struct sClass* __result52__;
void* right_value80;
struct sClass* result_47;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional49;
_Bool _if_conditional50;
_Bool _if_conditional51;
_Bool _if_conditional52;
void* right_value81;
char* __dec_obj13;
_Bool _if_conditional53;
_Bool _if_conditional54;
_Bool _if_conditional55;
void* right_value130;
struct list$1tuple2$2charphsTypephph* __dec_obj44;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
void* right_value131;
char* __dec_obj45;
_Bool _if_conditional151;
_Bool _if_conditional152;
void* right_value132;
char* __dec_obj46;
struct sClass* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
memset(&result_47, 0, sizeof(struct sClass*));
right_value81 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
right_value132 = (void*)0;
        # 3 "sClass_clone"
        # 2 "sClass_clone"
        if(_if_conditional19=self==(void*)0,        _if_conditional19) {
            # 2 "sClass_clone"
            __result52__ = __result_obj__ = (void*)0;
            return __result52__;
        }
        # 3 "sClass_clone"
        result_47=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value80=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "sClass"))));
        come_call_finalizer3(right_value80,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        # 5 "sClass_clone"
        # 4 "sClass_clone"
        if(_if_conditional44=self!=((void*)0),        _if_conditional44) {
            # 4 "sClass_clone"
            result_47->mStruct=self->mStruct;
        }
        # 6 "sClass_clone"
        # 5 "sClass_clone"
        if(_if_conditional45=self!=((void*)0),        _if_conditional45) {
            # 5 "sClass_clone"
            result_47->mFloat=self->mFloat;
        }
        # 7 "sClass_clone"
        # 6 "sClass_clone"
        if(_if_conditional46=self!=((void*)0),        _if_conditional46) {
            # 6 "sClass_clone"
            result_47->mUnion=self->mUnion;
        }
        # 8 "sClass_clone"
        # 7 "sClass_clone"
        if(_if_conditional47=self!=((void*)0),        _if_conditional47) {
            # 7 "sClass_clone"
            result_47->mGenerics=self->mGenerics;
        }
        # 9 "sClass_clone"
        # 8 "sClass_clone"
        if(_if_conditional48=self!=((void*)0),        _if_conditional48) {
            # 8 "sClass_clone"
            result_47->mMethodGenerics=self->mMethodGenerics;
        }
        # 10 "sClass_clone"
        # 9 "sClass_clone"
        if(_if_conditional49=self!=((void*)0),        _if_conditional49) {
            # 9 "sClass_clone"
            result_47->mEnum=self->mEnum;
        }
        # 11 "sClass_clone"
        # 10 "sClass_clone"
        if(_if_conditional50=self!=((void*)0),        _if_conditional50) {
            # 10 "sClass_clone"
            result_47->mProtocol=self->mProtocol;
        }
        # 12 "sClass_clone"
        # 11 "sClass_clone"
        if(_if_conditional51=self!=((void*)0),        _if_conditional51) {
            # 11 "sClass_clone"
            result_47->mNumber=self->mNumber;
        }
        # 13 "sClass_clone"
        # 12 "sClass_clone"
        if(_if_conditional52=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional52) {
            # 12 "sClass_clone"
            __dec_obj13=result_47->mName;
            result_47->mName=(char*)come_increment_ref_count(((char*)(right_value81=string_clone(self->mName))));
            __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 14 "sClass_clone"
        # 13 "sClass_clone"
        if(_if_conditional53=self!=((void*)0),        _if_conditional53) {
            # 13 "sClass_clone"
            result_47->mGenericsNum=self->mGenericsNum;
        }
        # 15 "sClass_clone"
        # 14 "sClass_clone"
        if(_if_conditional54=self!=((void*)0),        _if_conditional54) {
            # 14 "sClass_clone"
            result_47->mMethodGenericsNum=self->mMethodGenericsNum;
        }
        # 16 "sClass_clone"
        # 15 "sClass_clone"
        if(_if_conditional55=self!=((void*)0)&&self->mFields!=((void*)0),        _if_conditional55) {
            # 15 "sClass_clone"
            __dec_obj44=result_47->mFields;
            result_47->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value130=list$1tuple2$2charphsTypephphp_clone(self->mFields))));
            come_call_finalizer3(__dec_obj44,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value130,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 17 "sClass_clone"
        # 16 "sClass_clone"
        if(_if_conditional148=self!=((void*)0),        _if_conditional148) {
            # 16 "sClass_clone"
            result_47->mOutputed=self->mOutputed;
        }
        # 18 "sClass_clone"
        # 17 "sClass_clone"
        if(_if_conditional149=self!=((void*)0),        _if_conditional149) {
            # 17 "sClass_clone"
            result_47->mOutputed2=self->mOutputed2;
        }
        # 19 "sClass_clone"
        # 18 "sClass_clone"
        if(_if_conditional150=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional150) {
            # 18 "sClass_clone"
            __dec_obj45=result_47->mDeclareSName;
            result_47->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value131=string_clone(self->mDeclareSName))));
            __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 20 "sClass_clone"
        # 19 "sClass_clone"
        if(_if_conditional151=self!=((void*)0),        _if_conditional151) {
            # 19 "sClass_clone"
            result_47->mNobodyStruct=self->mNobodyStruct;
        }
        # 21 "sClass_clone"
        # 20 "sClass_clone"
        if(_if_conditional152=self!=((void*)0)&&self->mParentClassName!=((void*)0),        _if_conditional152) {
            # 20 "sClass_clone"
            __dec_obj46=result_47->mParentClassName;
            result_47->mParentClassName=(char*)come_increment_ref_count(((char*)(right_value132=string_clone(self->mParentClassName))));
            __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 21 "sClass_clone"
        __result81__ = __result_obj__ = result_47;
        come_call_finalizer3(result_47,sClass_finalize, 0, 0, 1, 0, (void*)0);
        return __result81__;
        come_call_finalizer3(result_47,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional42;
_Bool _if_conditional43;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sClass_finalize"
            # 0 "sClass_finalize"
            if(_if_conditional20=self!=((void*)0)&&self->mName!=((void*)0),            _if_conditional20) {
                # 0 "sClass_finalize"
                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 2 "sClass_finalize"
            # 1 "sClass_finalize"
            if(_if_conditional21=self!=((void*)0)&&self->mFields!=((void*)0),            _if_conditional21) {
                # 1 "sClass_finalize"
                come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 3 "sClass_finalize"
            # 2 "sClass_finalize"
            if(_if_conditional42=self!=((void*)0)&&self->mDeclareSName!=((void*)0),            _if_conditional42) {
                # 2 "sClass_finalize"
                self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 4 "sClass_finalize"
            # 3 "sClass_finalize"
            if(_if_conditional43=self!=((void*)0)&&self->mParentClassName!=((void*)0),            _if_conditional43) {
                # 3 "sClass_finalize"
                self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_48;
_Bool _while_condtional7;
struct list_item$1tuple2$2charphsTypephph* prev_it_49;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_48, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_49, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                    # 114 "./neo-c.h"
                    it_48=self->head;
                    # 120 "./neo-c.h"
                    while(_while_condtional7=it_48!=((void*)0),                    _while_condtional7) {
                        # 116 "./neo-c.h"
                        prev_it_49=it_48;
                        # 117 "./neo-c.h"
                        it_48=it_48->next;
                        # 118 "./neo-c.h"
                        come_call_finalizer3(prev_it_49,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                            # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                            if(_if_conditional22=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional22) {
                                # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional25;
_Bool _if_conditional27;
_Bool _if_conditional29;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional32;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
memset(&__result_obj__, 0, sizeof(void*));
                                            # 1 "sType_finalize"
                                            # 0 "sType_finalize"
                                            if(_if_conditional25=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                            _if_conditional25) {
                                                # 0 "sType_finalize"
                                                come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
                                            # 2 "sType_finalize"
                                            # 1 "sType_finalize"
                                            if(_if_conditional27=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                            _if_conditional27) {
                                                # 1 "sType_finalize"
                                                come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
                                            # 3 "sType_finalize"
                                            # 2 "sType_finalize"
                                            if(_if_conditional29=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                            _if_conditional29) {
                                                # 2 "sType_finalize"
                                                come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
                                            # 4 "sType_finalize"
                                            # 3 "sType_finalize"
                                            if(_if_conditional30=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                            _if_conditional30) {
                                                # 3 "sType_finalize"
                                                self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            # 5 "sType_finalize"
                                            # 4 "sType_finalize"
                                            if(_if_conditional31=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                            _if_conditional31) {
                                                # 4 "sType_finalize"
                                                come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
                                            # 6 "sType_finalize"
                                            # 5 "sType_finalize"
                                            if(_if_conditional32=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                            _if_conditional32) {
                                                # 5 "sType_finalize"
                                                come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
                                            # 7 "sType_finalize"
                                            # 6 "sType_finalize"
                                            if(_if_conditional34=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                            _if_conditional34) {
                                                # 6 "sType_finalize"
                                                come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
                                            # 8 "sType_finalize"
                                            # 7 "sType_finalize"
                                            if(_if_conditional35=self!=((void*)0)&&self->mParamNames!=((void*)0),                                            _if_conditional35) {
                                                # 7 "sType_finalize"
                                                come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
                                            # 9 "sType_finalize"
                                            # 8 "sType_finalize"
                                            if(_if_conditional37=self!=((void*)0)&&self->mResultType!=((void*)0),                                            _if_conditional37) {
                                                # 8 "sType_finalize"
                                                come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
                                            # 10 "sType_finalize"
                                            # 9 "sType_finalize"
                                            if(_if_conditional38=self!=((void*)0)&&self->mAlignas!=((void*)0),                                            _if_conditional38) {
                                                # 9 "sType_finalize"
                                                if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            # 11 "sType_finalize"
                                            # 10 "sType_finalize"
                                            if(_if_conditional39=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                            _if_conditional39) {
                                                # 10 "sType_finalize"
                                                if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            # 12 "sType_finalize"
                                            # 11 "sType_finalize"
                                            if(_if_conditional40=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                            _if_conditional40) {
                                                # 11 "sType_finalize"
                                                self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            # 13 "sType_finalize"
                                            # 12 "sType_finalize"
                                            if(_if_conditional41=self!=((void*)0)&&self->mAsmName!=((void*)0),                                            _if_conditional41) {
                                                # 12 "sType_finalize"
                                                self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_50;
_Bool _while_condtional8;
struct list_item$1sTypeph* prev_it_51;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_50, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_51, 0, sizeof(struct list_item$1sTypeph*));
                                                    # 114 "./neo-c.h"
                                                    it_50=self->head;
                                                    # 120 "./neo-c.h"
                                                    while(_while_condtional8=it_50!=((void*)0),                                                    _while_condtional8) {
                                                        # 116 "./neo-c.h"
                                                        prev_it_51=it_50;
                                                        # 117 "./neo-c.h"
                                                        it_50=it_50->next;
                                                        # 118 "./neo-c.h"
                                                        come_call_finalizer3(prev_it_51,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional26;
memset(&__result_obj__, 0, sizeof(void*));
                                                            # 1 "list_item$1sTypephp_finalize"
                                                            # 0 "list_item$1sTypephp_finalize"
                                                            if(_if_conditional26=self!=((void*)0)&&self->item!=((void*)0),                                                            _if_conditional26) {
                                                                # 0 "list_item$1sTypephp_finalize"
                                                                come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional28;
memset(&__result_obj__, 0, sizeof(void*));
                                                    # 1 "tuple1$1sTypephp_finalize"
                                                    # 0 "tuple1$1sTypephp_finalize"
                                                    if(_if_conditional28=self!=((void*)0)&&self->v1!=((void*)0),                                                    _if_conditional28) {
                                                        # 0 "tuple1$1sTypephp_finalize"
                                                        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_52;
_Bool _while_condtional9;
struct list_item$1sNodeph* prev_it_53;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_52, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_53, 0, sizeof(struct list_item$1sNodeph*));
                                                    # 114 "./neo-c.h"
                                                    it_52=self->head;
                                                    # 120 "./neo-c.h"
                                                    while(_while_condtional9=it_52!=((void*)0),                                                    _while_condtional9) {
                                                        # 116 "./neo-c.h"
                                                        prev_it_53=it_52;
                                                        # 117 "./neo-c.h"
                                                        it_52=it_52->next;
                                                        # 118 "./neo-c.h"
                                                        come_call_finalizer3(prev_it_53,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional33;
memset(&__result_obj__, 0, sizeof(void*));
                                                            # 1 "list_item$1sNodephp_finalize"
                                                            # 0 "list_item$1sNodephp_finalize"
                                                            if(_if_conditional33=self!=((void*)0)&&self->item!=((void*)0),                                                            _if_conditional33) {
                                                                # 0 "list_item$1sNodephp_finalize"
                                                                if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_54;
_Bool _while_condtional10;
struct list_item$1charph* prev_it_55;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_54, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_55, 0, sizeof(struct list_item$1charph*));
                                                    # 114 "./neo-c.h"
                                                    it_54=self->head;
                                                    # 120 "./neo-c.h"
                                                    while(_while_condtional10=it_54!=((void*)0),                                                    _while_condtional10) {
                                                        # 116 "./neo-c.h"
                                                        prev_it_55=it_54;
                                                        # 117 "./neo-c.h"
                                                        it_54=it_54->next;
                                                        # 118 "./neo-c.h"
                                                        come_call_finalizer3(prev_it_55,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional36;
memset(&__result_obj__, 0, sizeof(void*));
                                                            # 1 "list_item$1charphp_finalize"
                                                            # 0 "list_item$1charphp_finalize"
                                                            if(_if_conditional36=self!=((void*)0)&&self->item!=((void*)0),                                                            _if_conditional36) {
                                                                # 0 "list_item$1charphp_finalize"
                                                                self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional56;
struct list$1tuple2$2charphsTypephph* __result53__;
void* right_value82;
void* right_value83;
struct list$1tuple2$2charphsTypephph* result_56;
struct list_item$1tuple2$2charphsTypephph* it_57;
_Bool _while_condtional11;
void* right_value129;
struct list$1tuple2$2charphsTypephph* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
right_value83 = (void*)0;
memset(&result_56, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_57, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value129 = (void*)0;
                # 133 "./neo-c.h"
                # 130 "./neo-c.h"
                if(_if_conditional56=self==((void*)0),                _if_conditional56) {
                    # 131 "./neo-c.h"
                    __result53__ = __result_obj__ = ((void*)0);
                    return __result53__;
                }
                # 133 "./neo-c.h"
                result_56=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value83=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value82=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 133, "list$1tuple2$2charphsTypephph"))))))));
                come_call_finalizer3(right_value82,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value83,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 135 "./neo-c.h"
                it_57=self->head;
                # 142 "./neo-c.h"
                while(_while_condtional11=it_57!=((void*)0),                _while_condtional11) {
                    # 137 "./neo-c.h"
                    list$1tuple2$2charphsTypephph_add(result_56,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value129=tuple2$2charphsTypephp_clone(it_57->item)))));
                    come_call_finalizer3(right_value129,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 139 "./neo-c.h"
                    it_57=it_57->next;
                }
                # 142 "./neo-c.h"
                __result80__ = __result_obj__ = result_56;
                come_call_finalizer3(result_56,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result80__;
                come_call_finalizer3(result_56,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsTypephph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 95 "./neo-c.h"
                    self->head=((void*)0);
                    # 96 "./neo-c.h"
                    self->tail=((void*)0);
                    # 97 "./neo-c.h"
                    self->len=0;
                    # 99 "./neo-c.h"
                    __result54__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result54__;
                    come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional57;
void* right_value84;
struct list_item$1tuple2$2charphsTypephph* litem_58;
struct tuple2$2charphsTypeph* __dec_obj14;
_Bool _if_conditional60;
void* right_value85;
struct list_item$1tuple2$2charphsTypephph* litem_59;
struct tuple2$2charphsTypeph* __dec_obj15;
void* right_value86;
struct list_item$1tuple2$2charphsTypephph* litem_60;
struct tuple2$2charphsTypeph* __dec_obj16;
struct list$1tuple2$2charphsTypephph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value84 = (void*)0;
memset(&litem_58, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value85 = (void*)0;
memset(&litem_59, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value86 = (void*)0;
memset(&litem_60, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                        # 177 "./neo-c.h"
                        # 146 "./neo-c.h"
                        if(_if_conditional57=self->len==0,                        _if_conditional57) {
                            # 147 "./neo-c.h"
                            litem_58=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value84=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 147, "list_item$1tuple2$2charphsTypephph"))));
                            come_call_finalizer3(right_value84,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 149 "./neo-c.h"
                            litem_58->prev=((void*)0);
                            # 150 "./neo-c.h"
                            litem_58->next=((void*)0);
                            # 151 "./neo-c.h"
                            __dec_obj14=litem_58->item;
                            litem_58->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj14,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            # 153 "./neo-c.h"
                            self->tail=litem_58;
                            # 154 "./neo-c.h"
                            self->head=litem_58;
                        }
                        else {
                            # 177 "./neo-c.h"
                            # 156 "./neo-c.h"
                            if(_if_conditional60=self->len==1,                            _if_conditional60) {
                                # 157 "./neo-c.h"
                                litem_59=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value85=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 157, "list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer3(right_value85,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 159 "./neo-c.h"
                                litem_59->prev=self->head;
                                # 160 "./neo-c.h"
                                litem_59->next=((void*)0);
                                # 161 "./neo-c.h"
                                __dec_obj15=litem_59->item;
                                litem_59->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj15,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                # 163 "./neo-c.h"
                                self->tail=litem_59;
                                # 164 "./neo-c.h"
                                self->head->next=litem_59;
                            }
                            else {
                                # 167 "./neo-c.h"
                                litem_60=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value86=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 167, "list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer3(right_value86,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 169 "./neo-c.h"
                                litem_60->prev=self->tail;
                                # 170 "./neo-c.h"
                                litem_60->next=((void*)0);
                                # 171 "./neo-c.h"
                                __dec_obj16=litem_60->item;
                                litem_60->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj16,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                # 173 "./neo-c.h"
                                self->tail->next=litem_60;
                                # 174 "./neo-c.h"
                                self->tail=litem_60;
                            }
                        }
                        # 177 "./neo-c.h"
                        self->len++;
                        # 179 "./neo-c.h"
                        __result55__ = __result_obj__ = self;
                        come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result55__;
                        come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional63;
_Bool _if_conditional64;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "tuple2$2charphsTypephp_finalize"
                                    # 0 "tuple2$2charphsTypephp_finalize"
                                    if(_if_conditional63=self!=((void*)0)&&self->v1!=((void*)0),                                    _if_conditional63) {
                                        # 0 "tuple2$2charphsTypephp_finalize"
                                        self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 2 "tuple2$2charphsTypephp_finalize"
                                    # 1 "tuple2$2charphsTypephp_finalize"
                                    if(_if_conditional64=self!=((void*)0)&&self->v2!=((void*)0),                                    _if_conditional64) {
                                        # 1 "tuple2$2charphsTypephp_finalize"
                                        come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional65;
struct tuple2$2charphsTypeph* __result56__;
void* right_value87;
struct tuple2$2charphsTypeph* result_61;
_Bool _if_conditional68;
void* right_value88;
char* __dec_obj17;
_Bool _if_conditional69;
void* right_value128;
struct sType* __dec_obj43;
struct tuple2$2charphsTypeph* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value87 = (void*)0;
memset(&result_61, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value88 = (void*)0;
right_value128 = (void*)0;
                        # 3 "tuple2$2charphsTypephp_clone"
                        # 2 "tuple2$2charphsTypephp_clone"
                        if(_if_conditional65=self==(void*)0,                        _if_conditional65) {
                            # 2 "tuple2$2charphsTypephp_clone"
                            __result56__ = __result_obj__ = (void*)0;
                            return __result56__;
                        }
                        # 3 "tuple2$2charphsTypephp_clone"
                        result_61=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value87=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"))));
                        come_call_finalizer3(right_value87,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                        # 5 "tuple2$2charphsTypephp_clone"
                        # 4 "tuple2$2charphsTypephp_clone"
                        if(_if_conditional68=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional68) {
                            # 4 "tuple2$2charphsTypephp_clone"
                            __dec_obj17=result_61->v1;
                            result_61->v1=(char*)come_increment_ref_count(((char*)(right_value88=string_clone(self->v1))));
                            __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        # 6 "tuple2$2charphsTypephp_clone"
                        # 5 "tuple2$2charphsTypephp_clone"
                        if(_if_conditional69=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional69) {
                            # 5 "tuple2$2charphsTypephp_clone"
                            __dec_obj43=result_61->v2;
                            result_61->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value128=sType_clone(self->v2))));
                            come_call_finalizer3(__dec_obj43,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value128,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                        # 6 "tuple2$2charphsTypephp_clone"
                        __result79__ = __result_obj__ = result_61;
                        come_call_finalizer3(result_61,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
                        return __result79__;
                        come_call_finalizer3(result_61,tuple2$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional66;
_Bool _if_conditional67;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "tuple2$2charphsTypeph_finalize"
                            # 0 "tuple2$2charphsTypeph_finalize"
                            if(_if_conditional66=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional66) {
                                # 0 "tuple2$2charphsTypeph_finalize"
                                self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 2 "tuple2$2charphsTypeph_finalize"
                            # 1 "tuple2$2charphsTypeph_finalize"
                            if(_if_conditional67=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional67) {
                                # 1 "tuple2$2charphsTypeph_finalize"
                                come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional70;
struct sType* __result57__;
void* right_value89;
struct sType* result_62;
_Bool _if_conditional71;
_Bool _if_conditional72;
void* right_value96;
struct list$1sTypeph* __dec_obj21;
_Bool _if_conditional76;
void* right_value99;
struct tuple1$1sTypeph* __dec_obj23;
_Bool _if_conditional80;
void* right_value102;
struct tuple1$1sTypeph* __dec_obj25;
_Bool _if_conditional83;
void* right_value103;
char* __dec_obj26;
_Bool _if_conditional84;
void* right_value104;
struct list$1sTypeph* __dec_obj27;
_Bool _if_conditional85;
void* right_value112;
struct list$1sNodeph* __dec_obj31;
_Bool _if_conditional98;
_Bool _if_conditional99;
void* right_value113;
struct list$1sTypeph* __dec_obj32;
_Bool _if_conditional100;
void* right_value120;
struct list$1charph* __dec_obj36;
_Bool _if_conditional104;
void* right_value123;
struct tuple1$1sTypeph* __dec_obj38;
_Bool _if_conditional107;
_Bool _if_conditional108;
void* right_value124;
struct sNode* __dec_obj39;
_Bool _if_conditional109;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
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
void* right_value125;
struct sNode* __dec_obj40;
_Bool _if_conditional134;
_Bool _if_conditional135;
_Bool _if_conditional136;
void* right_value126;
char* __dec_obj41;
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
void* right_value127;
char* __dec_obj42;
_Bool _if_conditional147;
struct sType* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
memset(&result_62, 0, sizeof(struct sType*));
right_value96 = (void*)0;
right_value99 = (void*)0;
right_value102 = (void*)0;
right_value103 = (void*)0;
right_value104 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value120 = (void*)0;
right_value123 = (void*)0;
right_value124 = (void*)0;
right_value125 = (void*)0;
right_value126 = (void*)0;
right_value127 = (void*)0;
                                # 3 "sType_clone"
                                # 2 "sType_clone"
                                if(_if_conditional70=self==(void*)0,                                _if_conditional70) {
                                    # 2 "sType_clone"
                                    __result57__ = __result_obj__ = (void*)0;
                                    return __result57__;
                                }
                                # 3 "sType_clone"
                                result_62=(struct sType*)come_increment_ref_count(((struct sType*)(right_value89=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
                                come_call_finalizer3(right_value89,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                # 5 "sType_clone"
                                # 4 "sType_clone"
                                if(_if_conditional71=self!=((void*)0),                                _if_conditional71) {
                                    # 4 "sType_clone"
                                    result_62->mClass=self->mClass;
                                }
                                # 6 "sType_clone"
                                # 5 "sType_clone"
                                if(_if_conditional72=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                _if_conditional72) {
                                    # 5 "sType_clone"
                                    __dec_obj21=result_62->mMultipleTypes;
                                    result_62->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value96=list$1sTypeph_clone(self->mMultipleTypes))));
                                    come_call_finalizer3(__dec_obj21,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value96,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                }
                                # 7 "sType_clone"
                                # 6 "sType_clone"
                                if(_if_conditional76=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                _if_conditional76) {
                                    # 6 "sType_clone"
                                    __dec_obj23=result_62->mNoSolvedGenericsType;
                                    result_62->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value99=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                                    come_call_finalizer3(__dec_obj23,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value99,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                }
                                # 8 "sType_clone"
                                # 7 "sType_clone"
                                if(_if_conditional80=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                _if_conditional80) {
                                    # 7 "sType_clone"
                                    __dec_obj25=result_62->mOriginalLoadVarType;
                                    result_62->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value102=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                                    come_call_finalizer3(__dec_obj25,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value102,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                }
                                # 9 "sType_clone"
                                # 8 "sType_clone"
                                if(_if_conditional83=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                _if_conditional83) {
                                    # 8 "sType_clone"
                                    __dec_obj26=result_62->mGenericsName;
                                    result_62->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value103=string_clone(self->mGenericsName))));
                                    __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                # 10 "sType_clone"
                                # 9 "sType_clone"
                                if(_if_conditional84=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                _if_conditional84) {
                                    # 9 "sType_clone"
                                    __dec_obj27=result_62->mGenericsTypes;
                                    result_62->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value104=list$1sTypeph_clone(self->mGenericsTypes))));
                                    come_call_finalizer3(__dec_obj27,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value104,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                }
                                # 11 "sType_clone"
                                # 10 "sType_clone"
                                if(_if_conditional85=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                _if_conditional85) {
                                    # 10 "sType_clone"
                                    __dec_obj31=result_62->mArrayNum;
                                    result_62->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value112=list$1sNodeph_clone(self->mArrayNum))));
                                    come_call_finalizer3(__dec_obj31,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value112,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                }
                                # 12 "sType_clone"
                                # 11 "sType_clone"
                                if(_if_conditional98=self!=((void*)0),                                _if_conditional98) {
                                    # 11 "sType_clone"
                                    result_62->mOmitArrayNum=self->mOmitArrayNum;
                                }
                                # 13 "sType_clone"
                                # 12 "sType_clone"
                                if(_if_conditional99=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional99) {
                                    # 12 "sType_clone"
                                    __dec_obj32=result_62->mParamTypes;
                                    result_62->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value113=list$1sTypeph_clone(self->mParamTypes))));
                                    come_call_finalizer3(__dec_obj32,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value113,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                }
                                # 14 "sType_clone"
                                # 13 "sType_clone"
                                if(_if_conditional100=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional100) {
                                    # 13 "sType_clone"
                                    __dec_obj36=result_62->mParamNames;
                                    result_62->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value120=list$1charph_clone(self->mParamNames))));
                                    come_call_finalizer3(__dec_obj36,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value120,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                }
                                # 15 "sType_clone"
                                # 14 "sType_clone"
                                if(_if_conditional104=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional104) {
                                    # 14 "sType_clone"
                                    __dec_obj38=result_62->mResultType;
                                    result_62->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value123=tuple1$1sTypephp_clone(self->mResultType))));
                                    come_call_finalizer3(__dec_obj38,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value123,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                }
                                # 16 "sType_clone"
                                # 15 "sType_clone"
                                if(_if_conditional107=self!=((void*)0),                                _if_conditional107) {
                                    # 15 "sType_clone"
                                    result_62->mVarArgs=self->mVarArgs;
                                }
                                # 17 "sType_clone"
                                # 16 "sType_clone"
                                if(_if_conditional108=self!=((void*)0)&&self->mAlignas!=((void*)0),                                _if_conditional108) {
                                    # 16 "sType_clone"
                                    __dec_obj39=result_62->mAlignas;
                                    result_62->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value124=sNode_clone(self->mAlignas))));
                                    if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value124) { right_value124 = come_decrement_ref_count2(right_value124, ((struct sNode*)right_value124)->finalize, ((struct sNode*)right_value124)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                # 18 "sType_clone"
                                # 17 "sType_clone"
                                if(_if_conditional109=self!=((void*)0),                                _if_conditional109) {
                                    # 17 "sType_clone"
                                    result_62->mUnsigned=self->mUnsigned;
                                }
                                # 19 "sType_clone"
                                # 18 "sType_clone"
                                if(_if_conditional110=self!=((void*)0),                                _if_conditional110) {
                                    # 18 "sType_clone"
                                    result_62->mShort=self->mShort;
                                }
                                # 20 "sType_clone"
                                # 19 "sType_clone"
                                if(_if_conditional111=self!=((void*)0),                                _if_conditional111) {
                                    # 19 "sType_clone"
                                    result_62->mLong=self->mLong;
                                }
                                # 21 "sType_clone"
                                # 20 "sType_clone"
                                if(_if_conditional112=self!=((void*)0),                                _if_conditional112) {
                                    # 20 "sType_clone"
                                    result_62->mLongLong=self->mLongLong;
                                }
                                # 22 "sType_clone"
                                # 21 "sType_clone"
                                if(_if_conditional113=self!=((void*)0),                                _if_conditional113) {
                                    # 21 "sType_clone"
                                    result_62->mConstant=self->mConstant;
                                }
                                # 23 "sType_clone"
                                # 22 "sType_clone"
                                if(_if_conditional114=self!=((void*)0),                                _if_conditional114) {
                                    # 22 "sType_clone"
                                    result_62->mRegister=self->mRegister;
                                }
                                # 24 "sType_clone"
                                # 23 "sType_clone"
                                if(_if_conditional115=self!=((void*)0),                                _if_conditional115) {
                                    # 23 "sType_clone"
                                    result_62->mVolatile=self->mVolatile;
                                }
                                # 25 "sType_clone"
                                # 24 "sType_clone"
                                if(_if_conditional116=self!=((void*)0),                                _if_conditional116) {
                                    # 24 "sType_clone"
                                    result_62->mStatic=self->mStatic;
                                }
                                # 26 "sType_clone"
                                # 25 "sType_clone"
                                if(_if_conditional117=self!=((void*)0),                                _if_conditional117) {
                                    # 25 "sType_clone"
                                    result_62->mRecord=self->mRecord;
                                }
                                # 27 "sType_clone"
                                # 26 "sType_clone"
                                if(_if_conditional118=self!=((void*)0),                                _if_conditional118) {
                                    # 26 "sType_clone"
                                    result_62->mExtern=self->mExtern;
                                }
                                # 28 "sType_clone"
                                # 27 "sType_clone"
                                if(_if_conditional119=self!=((void*)0),                                _if_conditional119) {
                                    # 27 "sType_clone"
                                    result_62->mRestrict=self->mRestrict;
                                }
                                # 29 "sType_clone"
                                # 28 "sType_clone"
                                if(_if_conditional120=self!=((void*)0),                                _if_conditional120) {
                                    # 28 "sType_clone"
                                    result_62->mImmutable=self->mImmutable;
                                }
                                # 30 "sType_clone"
                                # 29 "sType_clone"
                                if(_if_conditional121=self!=((void*)0),                                _if_conditional121) {
                                    # 29 "sType_clone"
                                    result_62->mHeap=self->mHeap;
                                }
                                # 31 "sType_clone"
                                # 30 "sType_clone"
                                if(_if_conditional122=self!=((void*)0),                                _if_conditional122) {
                                    # 30 "sType_clone"
                                    result_62->mDummyHeap=self->mDummyHeap;
                                }
                                # 32 "sType_clone"
                                # 31 "sType_clone"
                                if(_if_conditional123=self!=((void*)0),                                _if_conditional123) {
                                    # 31 "sType_clone"
                                    result_62->mDelegate=self->mDelegate;
                                }
                                # 33 "sType_clone"
                                # 32 "sType_clone"
                                if(_if_conditional124=self!=((void*)0),                                _if_conditional124) {
                                    # 32 "sType_clone"
                                    result_62->mShare=self->mShare;
                                }
                                # 34 "sType_clone"
                                # 33 "sType_clone"
                                if(_if_conditional125=self!=((void*)0),                                _if_conditional125) {
                                    # 33 "sType_clone"
                                    result_62->mClone=self->mClone;
                                }
                                # 35 "sType_clone"
                                # 34 "sType_clone"
                                if(_if_conditional126=self!=((void*)0),                                _if_conditional126) {
                                    # 34 "sType_clone"
                                    result_62->mNoHeap=self->mNoHeap;
                                }
                                # 36 "sType_clone"
                                # 35 "sType_clone"
                                if(_if_conditional127=self!=((void*)0),                                _if_conditional127) {
                                    # 35 "sType_clone"
                                    result_62->mNoCallingDestructor=self->mNoCallingDestructor;
                                }
                                # 37 "sType_clone"
                                # 36 "sType_clone"
                                if(_if_conditional128=self!=((void*)0),                                _if_conditional128) {
                                    # 36 "sType_clone"
                                    result_62->mRefference=self->mRefference;
                                }
                                # 38 "sType_clone"
                                # 37 "sType_clone"
                                if(_if_conditional129=self!=((void*)0),                                _if_conditional129) {
                                    # 37 "sType_clone"
                                    result_62->mException=self->mException;
                                }
                                # 39 "sType_clone"
                                # 38 "sType_clone"
                                if(_if_conditional130=self!=((void*)0),                                _if_conditional130) {
                                    # 38 "sType_clone"
                                    result_62->mPointerNum=self->mPointerNum;
                                }
                                # 40 "sType_clone"
                                # 39 "sType_clone"
                                if(_if_conditional131=self!=((void*)0),                                _if_conditional131) {
                                    # 39 "sType_clone"
                                    result_62->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                                }
                                # 41 "sType_clone"
                                # 40 "sType_clone"
                                if(_if_conditional132=self!=((void*)0),                                _if_conditional132) {
                                    # 40 "sType_clone"
                                    result_62->mNoArrayPointerNum=self->mNoArrayPointerNum;
                                }
                                # 42 "sType_clone"
                                # 41 "sType_clone"
                                if(_if_conditional133=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                _if_conditional133) {
                                    # 41 "sType_clone"
                                    __dec_obj40=result_62->mSizeNum;
                                    result_62->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value125=sNode_clone(self->mSizeNum))));
                                    if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count2(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value125) { right_value125 = come_decrement_ref_count2(right_value125, ((struct sNode*)right_value125)->finalize, ((struct sNode*)right_value125)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                # 43 "sType_clone"
                                # 42 "sType_clone"
                                if(_if_conditional134=self!=((void*)0),                                _if_conditional134) {
                                    # 42 "sType_clone"
                                    result_62->mDynamicArrayNum=self->mDynamicArrayNum;
                                }
                                # 44 "sType_clone"
                                # 43 "sType_clone"
                                if(_if_conditional135=self!=((void*)0),                                _if_conditional135) {
                                    # 43 "sType_clone"
                                    result_62->mTypeOfExpression=self->mTypeOfExpression;
                                }
                                # 45 "sType_clone"
                                # 44 "sType_clone"
                                if(_if_conditional136=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                _if_conditional136) {
                                    # 44 "sType_clone"
                                    __dec_obj41=result_62->mOriginalTypeName;
                                    result_62->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value126=string_clone(self->mOriginalTypeName))));
                                    __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                # 46 "sType_clone"
                                # 45 "sType_clone"
                                if(_if_conditional137=self!=((void*)0),                                _if_conditional137) {
                                    # 45 "sType_clone"
                                    result_62->mOriginalPointerNum=self->mOriginalPointerNum;
                                }
                                # 47 "sType_clone"
                                # 46 "sType_clone"
                                if(_if_conditional138=self!=((void*)0),                                _if_conditional138) {
                                    # 46 "sType_clone"
                                    result_62->mFunctionParam=self->mFunctionParam;
                                }
                                # 48 "sType_clone"
                                # 47 "sType_clone"
                                if(_if_conditional139=self!=((void*)0),                                _if_conditional139) {
                                    # 47 "sType_clone"
                                    result_62->mAllocaValue=self->mAllocaValue;
                                }
                                # 49 "sType_clone"
                                # 48 "sType_clone"
                                if(_if_conditional140=self!=((void*)0),                                _if_conditional140) {
                                    # 48 "sType_clone"
                                    result_62->mGenericsStruct=self->mGenericsStruct;
                                }
                                # 50 "sType_clone"
                                # 49 "sType_clone"
                                if(_if_conditional141=self!=((void*)0),                                _if_conditional141) {
                                    # 49 "sType_clone"
                                    result_62->mSolvedGenericsName=self->mSolvedGenericsName;
                                }
                                # 51 "sType_clone"
                                # 50 "sType_clone"
                                if(_if_conditional142=self!=((void*)0),                                _if_conditional142) {
                                    # 50 "sType_clone"
                                    result_62->mComeMemCore=self->mComeMemCore;
                                }
                                # 52 "sType_clone"
                                # 51 "sType_clone"
                                if(_if_conditional143=self!=((void*)0),                                _if_conditional143) {
                                    # 51 "sType_clone"
                                    result_62->mInline=self->mInline;
                                }
                                # 53 "sType_clone"
                                # 52 "sType_clone"
                                if(_if_conditional144=self!=((void*)0),                                _if_conditional144) {
                                    # 52 "sType_clone"
                                    result_62->mNullValue=self->mNullValue;
                                }
                                # 54 "sType_clone"
                                # 53 "sType_clone"
                                if(_if_conditional145=self!=((void*)0),                                _if_conditional145) {
                                    # 53 "sType_clone"
                                    result_62->mGuardValue=self->mGuardValue;
                                }
                                # 55 "sType_clone"
                                # 54 "sType_clone"
                                if(_if_conditional146=self!=((void*)0)&&self->mAsmName!=((void*)0),                                _if_conditional146) {
                                    # 54 "sType_clone"
                                    __dec_obj42=result_62->mAsmName;
                                    result_62->mAsmName=(char*)come_increment_ref_count(((char*)(right_value127=string_clone(self->mAsmName))));
                                    __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                # 56 "sType_clone"
                                # 55 "sType_clone"
                                if(_if_conditional147=self!=((void*)0),                                _if_conditional147) {
                                    # 55 "sType_clone"
                                    result_62->mArrayPointerType=self->mArrayPointerType;
                                }
                                # 56 "sType_clone"
                                __result78__ = __result_obj__ = result_62;
                                come_call_finalizer3(result_62,sType_finalize, 0, 0, 1, 0, (void*)0);
                                return __result78__;
                                come_call_finalizer3(result_62,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional73;
struct list$1sTypeph* __result58__;
void* right_value90;
void* right_value91;
struct list$1sTypeph* result_63;
struct list_item$1sTypeph* it_64;
_Bool _while_condtional12;
void* right_value95;
struct list$1sTypeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
right_value91 = (void*)0;
memset(&result_63, 0, sizeof(struct list$1sTypeph*));
memset(&it_64, 0, sizeof(struct list_item$1sTypeph*));
right_value95 = (void*)0;
                                        # 133 "./neo-c.h"
                                        # 130 "./neo-c.h"
                                        if(_if_conditional73=self==((void*)0),                                        _if_conditional73) {
                                            # 131 "./neo-c.h"
                                            __result58__ = __result_obj__ = ((void*)0);
                                            return __result58__;
                                        }
                                        # 133 "./neo-c.h"
                                        result_63=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value91=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value90=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 133, "list$1sTypeph"))))))));
                                        come_call_finalizer3(right_value90,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value91,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 135 "./neo-c.h"
                                        it_64=self->head;
                                        # 142 "./neo-c.h"
                                        while(_while_condtional12=it_64!=((void*)0),                                        _while_condtional12) {
                                            # 137 "./neo-c.h"
                                            list$1sTypeph_add(result_63,(struct sType*)come_increment_ref_count(((struct sType*)(right_value95=sType_clone(it_64->item)))));
                                            come_call_finalizer3(right_value95,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                            # 139 "./neo-c.h"
                                            it_64=it_64->next;
                                        }
                                        # 142 "./neo-c.h"
                                        __result61__ = __result_obj__ = result_63;
                                        come_call_finalizer3(result_63,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result61__;
                                        come_call_finalizer3(result_63,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
                                            # 95 "./neo-c.h"
                                            self->head=((void*)0);
                                            # 96 "./neo-c.h"
                                            self->tail=((void*)0);
                                            # 97 "./neo-c.h"
                                            self->len=0;
                                            # 99 "./neo-c.h"
                                            __result59__ = __result_obj__ = self;
                                            come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result59__;
                                            come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional74;
void* right_value92;
struct list_item$1sTypeph* litem_65;
struct sType* __dec_obj18;
_Bool _if_conditional75;
void* right_value93;
struct list_item$1sTypeph* litem_66;
struct sType* __dec_obj19;
void* right_value94;
struct list_item$1sTypeph* litem_67;
struct sType* __dec_obj20;
struct list$1sTypeph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value92 = (void*)0;
memset(&litem_65, 0, sizeof(struct list_item$1sTypeph*));
right_value93 = (void*)0;
memset(&litem_66, 0, sizeof(struct list_item$1sTypeph*));
right_value94 = (void*)0;
memset(&litem_67, 0, sizeof(struct list_item$1sTypeph*));
                                                # 177 "./neo-c.h"
                                                # 146 "./neo-c.h"
                                                if(_if_conditional74=self->len==0,                                                _if_conditional74) {
                                                    # 147 "./neo-c.h"
                                                    litem_65=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value92=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 147, "list_item$1sTypeph"))));
                                                    come_call_finalizer3(right_value92,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                    # 149 "./neo-c.h"
                                                    litem_65->prev=((void*)0);
                                                    # 150 "./neo-c.h"
                                                    litem_65->next=((void*)0);
                                                    # 151 "./neo-c.h"
                                                    __dec_obj18=litem_65->item;
                                                    litem_65->item=(struct sType*)come_increment_ref_count(item);
                                                    come_call_finalizer3(__dec_obj18,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                    # 153 "./neo-c.h"
                                                    self->tail=litem_65;
                                                    # 154 "./neo-c.h"
                                                    self->head=litem_65;
                                                }
                                                else {
                                                    # 177 "./neo-c.h"
                                                    # 156 "./neo-c.h"
                                                    if(_if_conditional75=self->len==1,                                                    _if_conditional75) {
                                                        # 157 "./neo-c.h"
                                                        litem_66=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value93=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 157, "list_item$1sTypeph"))));
                                                        come_call_finalizer3(right_value93,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        # 159 "./neo-c.h"
                                                        litem_66->prev=self->head;
                                                        # 160 "./neo-c.h"
                                                        litem_66->next=((void*)0);
                                                        # 161 "./neo-c.h"
                                                        __dec_obj19=litem_66->item;
                                                        litem_66->item=(struct sType*)come_increment_ref_count(item);
                                                        come_call_finalizer3(__dec_obj19,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        # 163 "./neo-c.h"
                                                        self->tail=litem_66;
                                                        # 164 "./neo-c.h"
                                                        self->head->next=litem_66;
                                                    }
                                                    else {
                                                        # 167 "./neo-c.h"
                                                        litem_67=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value94=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 167, "list_item$1sTypeph"))));
                                                        come_call_finalizer3(right_value94,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        # 169 "./neo-c.h"
                                                        litem_67->prev=self->tail;
                                                        # 170 "./neo-c.h"
                                                        litem_67->next=((void*)0);
                                                        # 171 "./neo-c.h"
                                                        __dec_obj20=litem_67->item;
                                                        litem_67->item=(struct sType*)come_increment_ref_count(item);
                                                        come_call_finalizer3(__dec_obj20,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        # 173 "./neo-c.h"
                                                        self->tail->next=litem_67;
                                                        # 174 "./neo-c.h"
                                                        self->tail=litem_67;
                                                    }
                                                }
                                                # 177 "./neo-c.h"
                                                self->len++;
                                                # 179 "./neo-c.h"
                                                __result60__ = __result_obj__ = self;
                                                come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result60__;
                                                come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_68;
_Bool _while_condtional13;
struct list_item$1sTypeph* prev_it_69;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_68, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_69, 0, sizeof(struct list_item$1sTypeph*));
                                        # 114 "./neo-c.h"
                                        it_68=self->head;
                                        # 120 "./neo-c.h"
                                        while(_while_condtional13=it_68!=((void*)0),                                        _while_condtional13) {
                                            # 116 "./neo-c.h"
                                            prev_it_69=it_68;
                                            # 117 "./neo-c.h"
                                            it_68=it_68->next;
                                            # 118 "./neo-c.h"
                                            come_call_finalizer3(prev_it_69,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional78;
memset(&__result_obj__, 0, sizeof(void*));
                                            # 1 "tuple1$1sTypeph_finalize"
                                            # 0 "tuple1$1sTypeph_finalize"
                                            if(_if_conditional78=self!=((void*)0)&&self->v1!=((void*)0),                                            _if_conditional78) {
                                                # 0 "tuple1$1sTypeph_finalize"
                                                come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional86;
struct list$1sNodeph* __result66__;
void* right_value105;
void* right_value106;
struct list$1sNodeph* result_72;
struct list_item$1sNodeph* it_73;
_Bool _while_condtional14;
void* right_value111;
struct list$1sNodeph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value105 = (void*)0;
right_value106 = (void*)0;
memset(&result_72, 0, sizeof(struct list$1sNodeph*));
memset(&it_73, 0, sizeof(struct list_item$1sNodeph*));
right_value111 = (void*)0;
                                        # 133 "./neo-c.h"
                                        # 130 "./neo-c.h"
                                        if(_if_conditional86=self==((void*)0),                                        _if_conditional86) {
                                            # 131 "./neo-c.h"
                                            __result66__ = __result_obj__ = ((void*)0);
                                            return __result66__;
                                        }
                                        # 133 "./neo-c.h"
                                        result_72=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value106=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value105=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 133, "list$1sNodeph"))))))));
                                        come_call_finalizer3(right_value105,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value106,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 135 "./neo-c.h"
                                        it_73=self->head;
                                        # 142 "./neo-c.h"
                                        while(_while_condtional14=it_73!=((void*)0),                                        _while_condtional14) {
                                            # 137 "./neo-c.h"
                                            list$1sNodeph_add(result_72,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value111=sNode_clone(it_73->item)))));
                                            if(right_value111) { right_value111 = come_decrement_ref_count2(right_value111, ((struct sNode*)right_value111)->finalize, ((struct sNode*)right_value111)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            # 139 "./neo-c.h"
                                            it_73=it_73->next;
                                        }
                                        # 142 "./neo-c.h"
                                        __result71__ = __result_obj__ = result_72;
                                        come_call_finalizer3(result_72,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result71__;
                                        come_call_finalizer3(result_72,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
                                            # 95 "./neo-c.h"
                                            self->head=((void*)0);
                                            # 96 "./neo-c.h"
                                            self->tail=((void*)0);
                                            # 97 "./neo-c.h"
                                            self->len=0;
                                            # 99 "./neo-c.h"
                                            __result67__ = __result_obj__ = self;
                                            come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result67__;
                                            come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional87;
void* right_value107;
struct list_item$1sNodeph* litem_74;
struct sNode* __dec_obj28;
_Bool _if_conditional88;
void* right_value108;
struct list_item$1sNodeph* litem_75;
struct sNode* __dec_obj29;
void* right_value109;
struct list_item$1sNodeph* litem_76;
struct sNode* __dec_obj30;
struct list$1sNodeph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value107 = (void*)0;
memset(&litem_74, 0, sizeof(struct list_item$1sNodeph*));
right_value108 = (void*)0;
memset(&litem_75, 0, sizeof(struct list_item$1sNodeph*));
right_value109 = (void*)0;
memset(&litem_76, 0, sizeof(struct list_item$1sNodeph*));
                                                # 177 "./neo-c.h"
                                                # 146 "./neo-c.h"
                                                if(_if_conditional87=self->len==0,                                                _if_conditional87) {
                                                    # 147 "./neo-c.h"
                                                    litem_74=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value107=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 147, "list_item$1sNodeph"))));
                                                    come_call_finalizer3(right_value107,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                    # 149 "./neo-c.h"
                                                    litem_74->prev=((void*)0);
                                                    # 150 "./neo-c.h"
                                                    litem_74->next=((void*)0);
                                                    # 151 "./neo-c.h"
                                                    __dec_obj28=litem_74->item;
                                                    litem_74->item=(struct sNode*)come_increment_ref_count(item);
                                                    if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count2(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0,0, (void*)0); }
                                                    # 153 "./neo-c.h"
                                                    self->tail=litem_74;
                                                    # 154 "./neo-c.h"
                                                    self->head=litem_74;
                                                }
                                                else {
                                                    # 177 "./neo-c.h"
                                                    # 156 "./neo-c.h"
                                                    if(_if_conditional88=self->len==1,                                                    _if_conditional88) {
                                                        # 157 "./neo-c.h"
                                                        litem_75=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value108=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 157, "list_item$1sNodeph"))));
                                                        come_call_finalizer3(right_value108,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        # 159 "./neo-c.h"
                                                        litem_75->prev=self->head;
                                                        # 160 "./neo-c.h"
                                                        litem_75->next=((void*)0);
                                                        # 161 "./neo-c.h"
                                                        __dec_obj29=litem_75->item;
                                                        litem_75->item=(struct sNode*)come_increment_ref_count(item);
                                                        if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count2(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0,0,0, (void*)0); }
                                                        # 163 "./neo-c.h"
                                                        self->tail=litem_75;
                                                        # 164 "./neo-c.h"
                                                        self->head->next=litem_75;
                                                    }
                                                    else {
                                                        # 167 "./neo-c.h"
                                                        litem_76=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value109=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 167, "list_item$1sNodeph"))));
                                                        come_call_finalizer3(right_value109,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        # 169 "./neo-c.h"
                                                        litem_76->prev=self->tail;
                                                        # 170 "./neo-c.h"
                                                        litem_76->next=((void*)0);
                                                        # 171 "./neo-c.h"
                                                        __dec_obj30=litem_76->item;
                                                        litem_76->item=(struct sNode*)come_increment_ref_count(item);
                                                        if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count2(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0,0,0, (void*)0); }
                                                        # 173 "./neo-c.h"
                                                        self->tail->next=litem_76;
                                                        # 174 "./neo-c.h"
                                                        self->tail=litem_76;
                                                    }
                                                }
                                                # 177 "./neo-c.h"
                                                self->len++;
                                                # 179 "./neo-c.h"
                                                __result68__ = __result_obj__ = self;
                                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                return __result68__;
                                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional89;
struct sNode* __result69__;
void* right_value110;
struct sNode* result_77;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool _if_conditional95;
_Bool _if_conditional96;
_Bool _if_conditional97;
struct sNode* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value110 = (void*)0;
memset(&result_77, 0, sizeof(struct sNode*));
                                                # 3 "sNode_clone"
                                                # 2 "sNode_clone"
                                                if(_if_conditional89=self==(void*)0,                                                _if_conditional89) {
                                                    # 2 "sNode_clone"
                                                    __result69__ = __result_obj__ = (void*)0;
                                                    return __result69__;
                                                }
                                                # 3 "sNode_clone"
                                                result_77=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value110=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                                                if(right_value110) { right_value110 = come_decrement_ref_count2(right_value110, ((struct sNode*)right_value110)->finalize, ((struct sNode*)right_value110)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                # 5 "sNode_clone"
                                                # 4 "sNode_clone"
                                                if(_if_conditional90=self!=((void*)0)&&self->clone!=((void*)0),                                                _if_conditional90) {
                                                    # 4 "sNode_clone"
                                                    result_77->_protocol_obj=self->clone(self->_protocol_obj);
                                                }
                                                # 6 "sNode_clone"
                                                # 5 "sNode_clone"
                                                if(_if_conditional91=self!=((void*)0),                                                _if_conditional91) {
                                                    # 5 "sNode_clone"
                                                    result_77->finalize=self->finalize;
                                                }
                                                # 7 "sNode_clone"
                                                # 6 "sNode_clone"
                                                if(_if_conditional92=self!=((void*)0),                                                _if_conditional92) {
                                                    # 6 "sNode_clone"
                                                    result_77->clone=self->clone;
                                                }
                                                # 8 "sNode_clone"
                                                # 7 "sNode_clone"
                                                if(_if_conditional93=self!=((void*)0),                                                _if_conditional93) {
                                                    # 7 "sNode_clone"
                                                    result_77->compile=self->compile;
                                                }
                                                # 9 "sNode_clone"
                                                # 8 "sNode_clone"
                                                if(_if_conditional94=self!=((void*)0),                                                _if_conditional94) {
                                                    # 8 "sNode_clone"
                                                    result_77->sline=self->sline;
                                                }
                                                # 10 "sNode_clone"
                                                # 9 "sNode_clone"
                                                if(_if_conditional95=self!=((void*)0),                                                _if_conditional95) {
                                                    # 9 "sNode_clone"
                                                    result_77->sname=self->sname;
                                                }
                                                # 11 "sNode_clone"
                                                # 10 "sNode_clone"
                                                if(_if_conditional96=self!=((void*)0),                                                _if_conditional96) {
                                                    # 10 "sNode_clone"
                                                    result_77->terminated=self->terminated;
                                                }
                                                # 12 "sNode_clone"
                                                # 11 "sNode_clone"
                                                if(_if_conditional97=self!=((void*)0),                                                _if_conditional97) {
                                                    # 11 "sNode_clone"
                                                    result_77->kind=self->kind;
                                                }
                                                # 12 "sNode_clone"
                                                __result70__ = __result_obj__ = result_77;
                                                if(result_77) { result_77 = come_decrement_ref_count2(result_77, ((struct sNode*)result_77)->finalize, ((struct sNode*)result_77)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                return __result70__;
                                                if(result_77) { result_77 = come_decrement_ref_count2(result_77, ((struct sNode*)result_77)->finalize, ((struct sNode*)result_77)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_78;
_Bool _while_condtional15;
struct list_item$1sNodeph* prev_it_79;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_78, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_79, 0, sizeof(struct list_item$1sNodeph*));
                                        # 114 "./neo-c.h"
                                        it_78=self->head;
                                        # 120 "./neo-c.h"
                                        while(_while_condtional15=it_78!=((void*)0),                                        _while_condtional15) {
                                            # 116 "./neo-c.h"
                                            prev_it_79=it_78;
                                            # 117 "./neo-c.h"
                                            it_78=it_78->next;
                                            # 118 "./neo-c.h"
                                            come_call_finalizer3(prev_it_79,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional101;
struct list$1charph* __result72__;
void* right_value114;
void* right_value115;
struct list$1charph* result_80;
struct list_item$1charph* it_81;
_Bool _while_condtional16;
void* right_value119;
struct list$1charph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value114 = (void*)0;
right_value115 = (void*)0;
memset(&result_80, 0, sizeof(struct list$1charph*));
memset(&it_81, 0, sizeof(struct list_item$1charph*));
right_value119 = (void*)0;
                                        # 133 "./neo-c.h"
                                        # 130 "./neo-c.h"
                                        if(_if_conditional101=self==((void*)0),                                        _if_conditional101) {
                                            # 131 "./neo-c.h"
                                            __result72__ = __result_obj__ = ((void*)0);
                                            return __result72__;
                                        }
                                        # 133 "./neo-c.h"
                                        result_80=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value115=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value114=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 133, "list$1charph"))))))));
                                        come_call_finalizer3(right_value114,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value115,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 135 "./neo-c.h"
                                        it_81=self->head;
                                        # 142 "./neo-c.h"
                                        while(_while_condtional16=it_81!=((void*)0),                                        _while_condtional16) {
                                            # 137 "./neo-c.h"
                                            list$1charph_add(result_80,(char*)come_increment_ref_count(((char*)(right_value119=string_clone(it_81->item)))));
                                            right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            # 139 "./neo-c.h"
                                            it_81=it_81->next;
                                        }
                                        # 142 "./neo-c.h"
                                        __result75__ = __result_obj__ = result_80;
                                        come_call_finalizer3(result_80,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result75__;
                                        come_call_finalizer3(result_80,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
                                            # 95 "./neo-c.h"
                                            self->head=((void*)0);
                                            # 96 "./neo-c.h"
                                            self->tail=((void*)0);
                                            # 97 "./neo-c.h"
                                            self->len=0;
                                            # 99 "./neo-c.h"
                                            __result73__ = __result_obj__ = self;
                                            come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result73__;
                                            come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional102;
void* right_value116;
struct list_item$1charph* litem_82;
char* __dec_obj33;
_Bool _if_conditional103;
void* right_value117;
struct list_item$1charph* litem_83;
char* __dec_obj34;
void* right_value118;
struct list_item$1charph* litem_84;
char* __dec_obj35;
struct list$1charph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value116 = (void*)0;
memset(&litem_82, 0, sizeof(struct list_item$1charph*));
right_value117 = (void*)0;
memset(&litem_83, 0, sizeof(struct list_item$1charph*));
right_value118 = (void*)0;
memset(&litem_84, 0, sizeof(struct list_item$1charph*));
                                                # 177 "./neo-c.h"
                                                # 146 "./neo-c.h"
                                                if(_if_conditional102=self->len==0,                                                _if_conditional102) {
                                                    # 147 "./neo-c.h"
                                                    litem_82=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value116=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 147, "list_item$1charph"))));
                                                    come_call_finalizer3(right_value116,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                    # 149 "./neo-c.h"
                                                    litem_82->prev=((void*)0);
                                                    # 150 "./neo-c.h"
                                                    litem_82->next=((void*)0);
                                                    # 151 "./neo-c.h"
                                                    __dec_obj33=litem_82->item;
                                                    litem_82->item=(char*)come_increment_ref_count(item);
                                                    __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    # 153 "./neo-c.h"
                                                    self->tail=litem_82;
                                                    # 154 "./neo-c.h"
                                                    self->head=litem_82;
                                                }
                                                else {
                                                    # 177 "./neo-c.h"
                                                    # 156 "./neo-c.h"
                                                    if(_if_conditional103=self->len==1,                                                    _if_conditional103) {
                                                        # 157 "./neo-c.h"
                                                        litem_83=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value117=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 157, "list_item$1charph"))));
                                                        come_call_finalizer3(right_value117,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        # 159 "./neo-c.h"
                                                        litem_83->prev=self->head;
                                                        # 160 "./neo-c.h"
                                                        litem_83->next=((void*)0);
                                                        # 161 "./neo-c.h"
                                                        __dec_obj34=litem_83->item;
                                                        litem_83->item=(char*)come_increment_ref_count(item);
                                                        __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        # 163 "./neo-c.h"
                                                        self->tail=litem_83;
                                                        # 164 "./neo-c.h"
                                                        self->head->next=litem_83;
                                                    }
                                                    else {
                                                        # 167 "./neo-c.h"
                                                        litem_84=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value118=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 167, "list_item$1charph"))));
                                                        come_call_finalizer3(right_value118,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        # 169 "./neo-c.h"
                                                        litem_84->prev=self->tail;
                                                        # 170 "./neo-c.h"
                                                        litem_84->next=((void*)0);
                                                        # 171 "./neo-c.h"
                                                        __dec_obj35=litem_84->item;
                                                        litem_84->item=(char*)come_increment_ref_count(item);
                                                        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        # 173 "./neo-c.h"
                                                        self->tail->next=litem_84;
                                                        # 174 "./neo-c.h"
                                                        self->tail=litem_84;
                                                    }
                                                }
                                                # 177 "./neo-c.h"
                                                self->len++;
                                                # 179 "./neo-c.h"
                                                __result74__ = __result_obj__ = self;
                                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                return __result74__;
                                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_85;
_Bool _while_condtional17;
struct list_item$1charph* prev_it_86;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_85, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_86, 0, sizeof(struct list_item$1charph*));
                                        # 114 "./neo-c.h"
                                        it_85=self->head;
                                        # 120 "./neo-c.h"
                                        while(_while_condtional17=it_85!=((void*)0),                                        _while_condtional17) {
                                            # 116 "./neo-c.h"
                                            prev_it_86=it_85;
                                            # 117 "./neo-c.h"
                                            it_85=it_85->next;
                                            # 118 "./neo-c.h"
                                            come_call_finalizer3(prev_it_86,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional105;
struct tuple1$1sTypeph* __result76__;
void* right_value121;
struct tuple1$1sTypeph* result_87;
_Bool _if_conditional106;
void* right_value122;
struct sType* __dec_obj37;
struct tuple1$1sTypeph* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value121 = (void*)0;
memset(&result_87, 0, sizeof(struct tuple1$1sTypeph*));
right_value122 = (void*)0;
                                        # 3 "tuple1$1sTypephp_clone"
                                        # 2 "tuple1$1sTypephp_clone"
                                        if(_if_conditional105=self==(void*)0,                                        _if_conditional105) {
                                            # 2 "tuple1$1sTypephp_clone"
                                            __result76__ = __result_obj__ = (void*)0;
                                            return __result76__;
                                        }
                                        # 3 "tuple1$1sTypephp_clone"
                                        result_87=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value121=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                                        come_call_finalizer3(right_value121,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 5 "tuple1$1sTypephp_clone"
                                        # 4 "tuple1$1sTypephp_clone"
                                        if(_if_conditional106=self!=((void*)0)&&self->v1!=((void*)0),                                        _if_conditional106) {
                                            # 4 "tuple1$1sTypephp_clone"
                                            __dec_obj37=result_87->v1;
                                            result_87->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value122=sType_clone(self->v1))));
                                            come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value122,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        # 5 "tuple1$1sTypephp_clone"
                                        __result77__ = __result_obj__ = result_87;
                                        come_call_finalizer3(result_87,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result77__;
                                        come_call_finalizer3(result_87,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_88;
_Bool _while_condtional18;
struct list_item$1tuple2$2charphsTypephph* prev_it_89;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_88, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_89, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                # 114 "./neo-c.h"
                it_88=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional18=it_88!=((void*)0),                _while_condtional18) {
                    # 116 "./neo-c.h"
                    prev_it_89=it_88;
                    # 117 "./neo-c.h"
                    it_88=it_88->next;
                    # 118 "./neo-c.h"
                    come_call_finalizer3(prev_it_89,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional156;
struct tuple2$2charphsTypeph* result_94;
struct tuple2$2charphsTypeph* __result85__;
_Bool _if_conditional157;
struct tuple2$2charphsTypeph* __result86__;
struct tuple2$2charphsTypeph* result_95;
struct tuple2$2charphsTypeph* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_94, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_95, 0, sizeof(struct tuple2$2charphsTypeph*));
        # 281 "./neo-c.h"
        # 276 "./neo-c.h"
        if(_if_conditional156=self==((void*)0),        _if_conditional156) {
            # 277 "./neo-c.h"
            # 278 "./neo-c.h"
            memset(&result_94,0,sizeof(struct tuple2$2charphsTypeph*));
            # 279 "./neo-c.h"
            __result85__ = __result_obj__ = result_94;
            return __result85__;
        }
        # 281 "./neo-c.h"
        self->it=self->head;
        # 287 "./neo-c.h"
        # 283 "./neo-c.h"
        if(self->it) {
            # 284 "./neo-c.h"
            __result86__ = __result_obj__ = self->it->item;
            return __result86__;
        }
        # 287 "./neo-c.h"
        # 288 "./neo-c.h"
        memset(&result_95,0,sizeof(struct tuple2$2charphsTypeph*));
        # 289 "./neo-c.h"
        __result87__ = __result_obj__ = result_95;
        return __result87__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result88__;
memset(&__result_obj__, 0, sizeof(void*));
        # 311 "./neo-c.h"
        __result88__ = self==((void*)0)||self->it==((void*)0);
        return __result88__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional158;
struct tuple2$2charphsTypeph* result_97;
struct tuple2$2charphsTypeph* __result89__;
_Bool _if_conditional159;
struct tuple2$2charphsTypeph* __result90__;
struct tuple2$2charphsTypeph* result_98;
struct tuple2$2charphsTypeph* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_97, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_98, 0, sizeof(struct tuple2$2charphsTypeph*));
        # 299 "./neo-c.h"
        # 293 "./neo-c.h"
        if(_if_conditional158=self==((void*)0)||self->it==((void*)0),        _if_conditional158) {
            # 294 "./neo-c.h"
            # 295 "./neo-c.h"
            memset(&result_97,0,sizeof(struct tuple2$2charphsTypeph*));
            # 296 "./neo-c.h"
            __result89__ = __result_obj__ = result_97;
            return __result89__;
        }
        # 299 "./neo-c.h"
        self->it=self->it->next;
        # 305 "./neo-c.h"
        # 301 "./neo-c.h"
        if(self->it) {
            # 302 "./neo-c.h"
            __result90__ = __result_obj__ = self->it->item;
            return __result90__;
        }
        # 305 "./neo-c.h"
        # 306 "./neo-c.h"
        memset(&result_98,0,sizeof(struct tuple2$2charphsTypeph*));
        # 307 "./neo-c.h"
        __result91__ = __result_obj__ = result_98;
        return __result91__;
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional161;
unsigned int hash_118;
unsigned int it_119;
_Bool _while_condtional21;
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool same_key_exist_136;
char* it2_139;
_Bool _if_conditional204;
_Bool _if_conditional205;
struct map$2charphsClassph* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_118, 0, sizeof(unsigned int));
memset(&it_119, 0, sizeof(unsigned int));
memset(&same_key_exist_136, 0, sizeof(_Bool));
memset(&it2_139, 0, sizeof(char*));
            # 1368 "./neo-c.h"
            # 1365 "./neo-c.h"
            if(_if_conditional161=self->len*10>=self->size,            _if_conditional161) {
                # 1366 "./neo-c.h"
                map$2charphsClassph_rehash(self);
            }
            # 1368 "./neo-c.h"
            hash_118=string_get_hash_key(key)%self->size;
            # 1369 "./neo-c.h"
            it_119=hash_118;
            # 1427 "./neo-c.h"
            while(_while_condtional21=(_Bool)1,            _while_condtional21) {
                # 1425 "./neo-c.h"
                # 1372 "./neo-c.h"
                if(_if_conditional173=self->item_existance[it_119],                _if_conditional173) {
                    # 1395 "./neo-c.h"
                    # 1374 "./neo-c.h"
                    if(_if_conditional174=string_equals(self->keys[it_119],key),                    _if_conditional174) {
                        # 1385 "./neo-c.h"
                        # 1376 "./neo-c.h"
                        if(_if_conditional175=1,                        _if_conditional175) {
                            # 1377 "./neo-c.h"
                            list$1charp_remove(self->key_list,self->keys[it_119]);
                            # 1378 "./neo-c.h"
                            self->keys[it_119] = come_decrement_ref_count2(self->keys[it_119], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            # 1379 "./neo-c.h"
                            self->keys[it_119]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            # 1382 "./neo-c.h"
                            list$1charp_remove(self->key_list,self->keys[it_119]);
                            # 1383 "./neo-c.h"
                            self->keys[it_119]=key;
                        }
                        # 1392 "./neo-c.h"
                        # 1385 "./neo-c.h"
                        if(_if_conditional195=1,                        _if_conditional195) {
                            # 1386 "./neo-c.h"
                            come_call_finalizer3(self->items[it_119],sClass_finalize, 0, 0, 0, 0, (void*)0);
                            # 1387 "./neo-c.h"
                            self->items[it_119]=(struct sClass*)come_increment_ref_count(item);
                        }
                        else {
                            # 1390 "./neo-c.h"
                            self->items[it_119]=item;
                        }
                        # 1392 "./neo-c.h"
                        break;
                    }
                    # 1395 "./neo-c.h"
                    it_119++;
                    # 1405 "./neo-c.h"
                    # 1397 "./neo-c.h"
                    if(_if_conditional196=it_119>=self->size,                    _if_conditional196) {
                        # 1398 "./neo-c.h"
                        it_119=0;
                    }
                    else {
                        # 1405 "./neo-c.h"
                        # 1400 "./neo-c.h"
                        if(_if_conditional197=it_119==hash_118,                        _if_conditional197) {
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
                    self->item_existance[it_119]=(_Bool)1;
                    # 1414 "./neo-c.h"
                    # 1408 "./neo-c.h"
                    if(_if_conditional198=1,                    _if_conditional198) {
                        # 1409 "./neo-c.h"
                        self->keys[it_119]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1412 "./neo-c.h"
                        self->keys[it_119]=key;
                    }
                    # 1421 "./neo-c.h"
                    # 1414 "./neo-c.h"
                    if(_if_conditional199=1,                    _if_conditional199) {
                        # 1415 "./neo-c.h"
                        self->items[it_119]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        # 1418 "./neo-c.h"
                        self->items[it_119]=item;
                    }
                    # 1421 "./neo-c.h"
                    self->len++;
                    # 1423 "./neo-c.h"
                    break;
                }
            }
            # 1427 "./neo-c.h"
            same_key_exist_136=(_Bool)0;
            # 1435 "./neo-c.h"
            for(            it2_139=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_139=list$1charp_next(self->key_list)            ){
                # 1433 "./neo-c.h"
                # 1430 "./neo-c.h"
                if(_if_conditional204=string_equals(it2_139,key),                _if_conditional204) {
                    # 1431 "./neo-c.h"
                    same_key_exist_136=(_Bool)1;
                }
            }
            # 1439 "./neo-c.h"
            # 1435 "./neo-c.h"
            if(_if_conditional205=!same_key_exist_136,            _if_conditional205) {
                # 1436 "./neo-c.h"
                list$1charp_push_back(self->key_list,key);
            }
            # 1439 "./neo-c.h"
            __result115__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result115__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_101;
void* right_value142;
char** keys_102;
void* right_value143;
struct sClass** items_103;
void* right_value144;
_Bool* item_existance_104;
int len_105;
char* it_108;
struct sClass* default_value_111;
struct sClass* it2_114;
unsigned int hash_115;
int n_116;
_Bool _while_condtional20;
_Bool _if_conditional170;
_Bool _if_conditional171;
_Bool _if_conditional172;
struct sClass* default_value_117;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_101, 0, sizeof(int));
right_value142 = (void*)0;
memset(&keys_102, 0, sizeof(char**));
right_value143 = (void*)0;
memset(&items_103, 0, sizeof(struct sClass**));
right_value144 = (void*)0;
memset(&item_existance_104, 0, sizeof(_Bool*));
memset(&len_105, 0, sizeof(int));
memset(&it_108, 0, sizeof(char*));
memset(&default_value_111, 0, sizeof(struct sClass*));
memset(&it2_114, 0, sizeof(struct sClass*));
memset(&hash_115, 0, sizeof(unsigned int));
memset(&n_116, 0, sizeof(int));
memset(&default_value_117, 0, sizeof(struct sClass*));
                    # 1312 "./neo-c.h"
                    size_101=self->size*10;
                    # 1313 "./neo-c.h"
                    keys_102=(char**)come_increment_ref_count(((char**)(right_value142=(char**)come_calloc(1, sizeof(char*)*(1*(size_101)), "./neo-c.h", 1313, "char*%"))));
                    right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1314 "./neo-c.h"
                    items_103=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value143=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_101)), "./neo-c.h", 1314, "sClass*%"))));
                    come_call_finalizer3(right_value143,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                    # 1315 "./neo-c.h"
                    item_existance_104=(_Bool*)come_increment_ref_count(((_Bool*)(right_value144=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_101)), "./neo-c.h", 1315, "bool"))));
                    right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1317 "./neo-c.h"
                    len_105=0;
                    # 1352 "./neo-c.h"
                    for(                    it_108=map$2charphsClassph_begin(self);                    !map$2charphsClassph_end(self);                    it_108=map$2charphsClassph_next(self)                    ){
                        # 1320 "./neo-c.h"
                        # 1321 "./neo-c.h"
                        memset(&default_value_111,0,sizeof(struct sClass*));
                        # 1322 "./neo-c.h"
                        it2_114=map$2charphsClassph_at(self,it_108,default_value_111);
                        # 1323 "./neo-c.h"
                        hash_115=string_get_hash_key(it_108)%size_101;
                        # 1324 "./neo-c.h"
                        n_116=hash_115;
                        # 1350 "./neo-c.h"
                        while(_while_condtional20=(_Bool)1,                        _while_condtional20) {
                            # 1349 "./neo-c.h"
                            # 1327 "./neo-c.h"
                            if(_if_conditional170=item_existance_104[n_116],                            _if_conditional170) {
                                # 1329 "./neo-c.h"
                                n_116++;
                                # 1339 "./neo-c.h"
                                # 1331 "./neo-c.h"
                                if(_if_conditional171=n_116>=size_101,                                _if_conditional171) {
                                    # 1332 "./neo-c.h"
                                    n_116=0;
                                }
                                else {
                                    # 1339 "./neo-c.h"
                                    # 1334 "./neo-c.h"
                                    if(_if_conditional172=n_116==hash_115,                                    _if_conditional172) {
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
                                item_existance_104[n_116]=(_Bool)1;
                                # 1342 "./neo-c.h"
                                keys_102[n_116]=it_108;
                                # 1343 "./neo-c.h"
                                # 1344 "./neo-c.h"
                                items_103[n_116]=map$2charphsClassph_at(self,it_108,default_value_117);
                                # 1346 "./neo-c.h"
                                len_105++;
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
                    self->keys=keys_102;
                    # 1357 "./neo-c.h"
                    self->items=items_103;
                    # 1358 "./neo-c.h"
                    self->item_existance=item_existance_104;
                    # 1360 "./neo-c.h"
                    self->size=size_101;
                    # 1361 "./neo-c.h"
                    self->len=len_105;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional162;
char* result_106;
char* __result92__;
_Bool _if_conditional163;
char* __result93__;
char* result_107;
char* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_106, 0, sizeof(char*));
memset(&result_107, 0, sizeof(char*));
                        # 1279 "./neo-c.h"
                        # 1274 "./neo-c.h"
                        if(_if_conditional162=self==((void*)0),                        _if_conditional162) {
                            # 1275 "./neo-c.h"
                            # 1276 "./neo-c.h"
                            memset(&result_106,0,sizeof(char*));
                            # 1277 "./neo-c.h"
                            __result92__ = __result_obj__ = result_106;
                            return __result92__;
                        }
                        # 1279 "./neo-c.h"
                        self->key_list->it=self->key_list->head;
                        # 1285 "./neo-c.h"
                        # 1281 "./neo-c.h"
                        if(self->key_list->it) {
                            # 1282 "./neo-c.h"
                            __result93__ = __result_obj__ = self->key_list->it->item;
                            return __result93__;
                        }
                        # 1285 "./neo-c.h"
                        # 1286 "./neo-c.h"
                        memset(&result_107,0,sizeof(char*));
                        # 1287 "./neo-c.h"
                        __result94__ = __result_obj__ = result_107;
                        return __result94__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result95__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1308 "./neo-c.h"
                        __result95__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result95__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional164;
char* result_109;
char* __result96__;
_Bool _if_conditional165;
char* __result97__;
char* result_110;
char* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_109, 0, sizeof(char*));
memset(&result_110, 0, sizeof(char*));
                        # 1296 "./neo-c.h"
                        # 1291 "./neo-c.h"
                        if(_if_conditional164=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional164) {
                            # 1292 "./neo-c.h"
                            # 1293 "./neo-c.h"
                            memset(&result_109,0,sizeof(char*));
                            # 1294 "./neo-c.h"
                            __result96__ = __result_obj__ = result_109;
                            return __result96__;
                        }
                        # 1296 "./neo-c.h"
                        self->key_list->it=self->key_list->it->next;
                        # 1302 "./neo-c.h"
                        # 1298 "./neo-c.h"
                        if(self->key_list->it) {
                            # 1299 "./neo-c.h"
                            __result97__ = __result_obj__ = self->key_list->it->item;
                            return __result97__;
                        }
                        # 1302 "./neo-c.h"
                        # 1303 "./neo-c.h"
                        memset(&result_110,0,sizeof(char*));
                        # 1304 "./neo-c.h"
                        __result98__ = __result_obj__ = result_110;
                        return __result98__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_112;
unsigned int it_113;
_Bool _while_condtional19;
_Bool _if_conditional166;
_Bool _if_conditional167;
struct sClass* __result99__;
_Bool _if_conditional168;
_Bool _if_conditional169;
struct sClass* __result100__;
struct sClass* __result101__;
struct sClass* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_112, 0, sizeof(unsigned int));
memset(&it_113, 0, sizeof(unsigned int));
                            # 1201 "./neo-c.h"
                            hash_112=string_get_hash_key(((char*)key))%self->size;
                            # 1202 "./neo-c.h"
                            it_113=hash_112;
                            # 1226 "./neo-c.h"
                            while(_while_condtional19=(_Bool)1,                            _while_condtional19) {
                                # 1224 "./neo-c.h"
                                # 1205 "./neo-c.h"
                                if(_if_conditional166=self->item_existance[it_113],                                _if_conditional166) {
                                    # 1212 "./neo-c.h"
                                    # 1207 "./neo-c.h"
                                    if(_if_conditional167=string_equals(self->keys[it_113],key),                                    _if_conditional167) {
                                        # 1209 "./neo-c.h"
                                        __result99__ = __result_obj__ = self->items[it_113];
                                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result99__;
                                    }
                                    # 1212 "./neo-c.h"
                                    it_113++;
                                    # 1220 "./neo-c.h"
                                    # 1214 "./neo-c.h"
                                    if(_if_conditional168=it_113>=self->size,                                    _if_conditional168) {
                                        # 1215 "./neo-c.h"
                                        it_113=0;
                                    }
                                    else {
                                        # 1220 "./neo-c.h"
                                        # 1217 "./neo-c.h"
                                        if(_if_conditional169=it_113==hash_112,                                        _if_conditional169) {
                                            # 1218 "./neo-c.h"
                                            __result100__ = __result_obj__ = default_value;
                                            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result100__;
                                        }
                                    }
                                }
                                else {
                                    # 1222 "./neo-c.h"
                                    __result101__ = __result_obj__ = default_value;
                                    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result101__;
                                }
                            }
                            # 1226 "./neo-c.h"
                            __result102__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                            return __result102__;
                            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_120;
struct list_item$1charp* it_121;
_Bool _while_condtional22;
_Bool _if_conditional176;
struct list$1charp* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_120, 0, sizeof(int));
memset(&it_121, 0, sizeof(struct list_item$1charp*));
                                # 435 "./neo-c.h"
                                it2_120=0;
                                # 436 "./neo-c.h"
                                it_121=self->head;
                                # 447 "./neo-c.h"
                                while(_while_condtional22=it_121!=((void*)0),                                _while_condtional22) {
                                    # 442 "./neo-c.h"
                                    # 438 "./neo-c.h"
                                    if(_if_conditional176=string_equals(it_121->item,item),                                    _if_conditional176) {
                                        # 439 "./neo-c.h"
                                        list$1charp_delete(self,it2_120,it2_120+1);
                                        # 440 "./neo-c.h"
                                        break;
                                    }
                                    # 442 "./neo-c.h"
                                    it2_120++;
                                    # 444 "./neo-c.h"
                                    it_121=it_121->next;
                                }
                                # 447 "./neo-c.h"
                                __result106__ = __result_obj__ = self;
                                return __result106__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
int tmp_122;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
struct list$1charp* __result103__;
_Bool _if_conditional183;
_Bool _if_conditional184;
struct list_item$1charp* it_125;
int i_126;
_Bool _while_condtional24;
_Bool _if_conditional185;
struct list_item$1charp* prev_it_127;
_Bool _if_conditional186;
_Bool _if_conditional187;
struct list_item$1charp* it_128;
int i_129;
_Bool _while_condtional25;
_Bool _if_conditional188;
_Bool _if_conditional189;
struct list_item$1charp* prev_it_130;
struct list_item$1charp* it_131;
struct list_item$1charp* head_prev_it_132;
struct list_item$1charp* tail_it_133;
int i_134;
_Bool _while_condtional26;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool _if_conditional192;
struct list_item$1charp* prev_it_135;
_Bool _if_conditional193;
_Bool _if_conditional194;
struct list$1charp* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_122, 0, sizeof(int));
memset(&it_125, 0, sizeof(struct list_item$1charp*));
memset(&i_126, 0, sizeof(int));
memset(&prev_it_127, 0, sizeof(struct list_item$1charp*));
memset(&it_128, 0, sizeof(struct list_item$1charp*));
memset(&i_129, 0, sizeof(int));
memset(&prev_it_130, 0, sizeof(struct list_item$1charp*));
memset(&it_131, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_132, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_133, 0, sizeof(struct list_item$1charp*));
memset(&i_134, 0, sizeof(int));
memset(&prev_it_135, 0, sizeof(struct list_item$1charp*));
                                            # 454 "./neo-c.h"
                                            # 451 "./neo-c.h"
                                            if(_if_conditional177=head<0,                                            _if_conditional177) {
                                                # 452 "./neo-c.h"
                                                head+=self->len;
                                            }
                                            # 458 "./neo-c.h"
                                            # 454 "./neo-c.h"
                                            if(_if_conditional178=tail<0,                                            _if_conditional178) {
                                                # 455 "./neo-c.h"
                                                tail+=self->len+1;
                                            }
                                            # 464 "./neo-c.h"
                                            # 458 "./neo-c.h"
                                            if(_if_conditional179=head>tail,                                            _if_conditional179) {
                                                # 459 "./neo-c.h"
                                                tmp_122=tail;
                                                # 460 "./neo-c.h"
                                                tail=head;
                                                # 461 "./neo-c.h"
                                                head=tmp_122;
                                            }
                                            # 468 "./neo-c.h"
                                            # 464 "./neo-c.h"
                                            if(_if_conditional180=head<0,                                            _if_conditional180) {
                                                # 465 "./neo-c.h"
                                                head=0;
                                            }
                                            # 472 "./neo-c.h"
                                            # 468 "./neo-c.h"
                                            if(_if_conditional181=tail>self->len,                                            _if_conditional181) {
                                                # 469 "./neo-c.h"
                                                tail=self->len;
                                            }
                                            # 476 "./neo-c.h"
                                            # 472 "./neo-c.h"
                                            if(_if_conditional182=head==tail,                                            _if_conditional182) {
                                                # 473 "./neo-c.h"
                                                __result103__ = __result_obj__ = self;
                                                return __result103__;
                                            }
                                            # 571 "./neo-c.h"
                                            # 476 "./neo-c.h"
                                            if(_if_conditional183=head==0&&tail==self->len,                                            _if_conditional183) {
                                                # 478 "./neo-c.h"
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                # 571 "./neo-c.h"
                                                # 480 "./neo-c.h"
                                                if(_if_conditional184=head==0,                                                _if_conditional184) {
                                                    # 481 "./neo-c.h"
                                                    it_125=self->head;
                                                    # 482 "./neo-c.h"
                                                    i_126=0;
                                                    # 504 "./neo-c.h"
                                                    while(_while_condtional24=it_125!=((void*)0),                                                    _while_condtional24) {
                                                        # 503 "./neo-c.h"
                                                        # 484 "./neo-c.h"
                                                        if(_if_conditional185=i_126<tail,                                                        _if_conditional185) {
                                                            # 485 "./neo-c.h"
                                                            prev_it_127=it_125;
                                                            # 487 "./neo-c.h"
                                                            it_125=it_125->next;
                                                            # 488 "./neo-c.h"
                                                            i_126++;
                                                            # 490 "./neo-c.h"
                                                            come_call_finalizer3(prev_it_127,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            # 492 "./neo-c.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 503 "./neo-c.h"
                                                            # 494 "./neo-c.h"
                                                            if(_if_conditional186=i_126==tail,                                                            _if_conditional186) {
                                                                # 495 "./neo-c.h"
                                                                self->head=it_125;
                                                                # 496 "./neo-c.h"
                                                                self->head->prev=((void*)0);
                                                                # 497 "./neo-c.h"
                                                                break;
                                                            }
                                                            else {
                                                                # 500 "./neo-c.h"
                                                                it_125=it_125->next;
                                                                # 501 "./neo-c.h"
                                                                i_126++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 571 "./neo-c.h"
                                                    # 505 "./neo-c.h"
                                                    if(_if_conditional187=tail==self->len,                                                    _if_conditional187) {
                                                        # 506 "./neo-c.h"
                                                        it_128=self->head;
                                                        # 507 "./neo-c.h"
                                                        i_129=0;
                                                        # 529 "./neo-c.h"
                                                        while(_while_condtional25=it_128!=((void*)0),                                                        _while_condtional25) {
                                                            # 514 "./neo-c.h"
                                                            # 509 "./neo-c.h"
                                                            if(_if_conditional188=i_129==head,                                                            _if_conditional188) {
                                                                # 510 "./neo-c.h"
                                                                self->tail=it_128->prev;
                                                                # 511 "./neo-c.h"
                                                                self->tail->next=((void*)0);
                                                            }
                                                            # 528 "./neo-c.h"
                                                            # 514 "./neo-c.h"
                                                            if(_if_conditional189=i_129>=head,                                                            _if_conditional189) {
                                                                # 515 "./neo-c.h"
                                                                prev_it_130=it_128;
                                                                # 517 "./neo-c.h"
                                                                it_128=it_128->next;
                                                                # 518 "./neo-c.h"
                                                                i_129++;
                                                                # 520 "./neo-c.h"
                                                                come_call_finalizer3(prev_it_130,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                # 522 "./neo-c.h"
                                                                self->len--;
                                                            }
                                                            else {
                                                                # 525 "./neo-c.h"
                                                                it_128=it_128->next;
                                                                # 526 "./neo-c.h"
                                                                i_129++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        # 531 "./neo-c.h"
                                                        it_131=self->head;
                                                        # 533 "./neo-c.h"
                                                        head_prev_it_132=((void*)0);
                                                        # 534 "./neo-c.h"
                                                        tail_it_133=((void*)0);
                                                        # 537 "./neo-c.h"
                                                        i_134=0;
                                                        # 563 "./neo-c.h"
                                                        while(_while_condtional26=it_131!=((void*)0),                                                        _while_condtional26) {
                                                            # 542 "./neo-c.h"
                                                            # 539 "./neo-c.h"
                                                            if(_if_conditional190=i_134==head,                                                            _if_conditional190) {
                                                                # 540 "./neo-c.h"
                                                                head_prev_it_132=it_131->prev;
                                                            }
                                                            # 546 "./neo-c.h"
                                                            # 542 "./neo-c.h"
                                                            if(_if_conditional191=i_134==tail,                                                            _if_conditional191) {
                                                                # 543 "./neo-c.h"
                                                                tail_it_133=it_131;
                                                            }
                                                            # 561 "./neo-c.h"
                                                            # 546 "./neo-c.h"
                                                            if(_if_conditional192=i_134>=head&&i_134<tail,                                                            _if_conditional192) {
                                                                # 548 "./neo-c.h"
                                                                prev_it_135=it_131;
                                                                # 550 "./neo-c.h"
                                                                it_131=it_131->next;
                                                                # 551 "./neo-c.h"
                                                                i_134++;
                                                                # 553 "./neo-c.h"
                                                                come_call_finalizer3(prev_it_135,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                # 555 "./neo-c.h"
                                                                self->len--;
                                                            }
                                                            else {
                                                                # 558 "./neo-c.h"
                                                                it_131=it_131->next;
                                                                # 559 "./neo-c.h"
                                                                i_134++;
                                                            }
                                                        }
                                                        # 566 "./neo-c.h"
                                                        # 563 "./neo-c.h"
                                                        if(_if_conditional193=head_prev_it_132!=((void*)0),                                                        _if_conditional193) {
                                                            # 564 "./neo-c.h"
                                                            head_prev_it_132->next=tail_it_133;
                                                        }
                                                        # 569 "./neo-c.h"
                                                        # 566 "./neo-c.h"
                                                        if(_if_conditional194=tail_it_133!=((void*)0),                                                        _if_conditional194) {
                                                            # 567 "./neo-c.h"
                                                            tail_it_133->prev=head_prev_it_132;
                                                        }
                                                    }
                                                }
                                            }
                                            # 571 "./neo-c.h"
                                            __result105__ = __result_obj__ = self;
                                            return __result105__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_123;
_Bool _while_condtional23;
struct list_item$1charp* prev_it_124;
struct list$1charp* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_123, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_124, 0, sizeof(struct list_item$1charp*));
                                                    # 420 "./neo-c.h"
                                                    it_123=self->head;
                                                    # 427 "./neo-c.h"
                                                    while(_while_condtional23=it_123!=((void*)0),                                                    _while_condtional23) {
                                                        # 422 "./neo-c.h"
                                                        prev_it_124=it_123;
                                                        # 423 "./neo-c.h"
                                                        it_123=it_123->next;
                                                        # 424 "./neo-c.h"
                                                        come_call_finalizer3(prev_it_124,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 427 "./neo-c.h"
                                                    self->head=((void*)0);
                                                    # 428 "./neo-c.h"
                                                    self->tail=((void*)0);
                                                    # 430 "./neo-c.h"
                                                    self->len=0;
                                                    # 432 "./neo-c.h"
                                                    __result104__ = __result_obj__ = self;
                                                    return __result104__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional200;
char* result_137;
char* __result107__;
_Bool _if_conditional201;
char* __result108__;
char* result_138;
char* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_137, 0, sizeof(char*));
memset(&result_138, 0, sizeof(char*));
                # 281 "./neo-c.h"
                # 276 "./neo-c.h"
                if(_if_conditional200=self==((void*)0),                _if_conditional200) {
                    # 277 "./neo-c.h"
                    # 278 "./neo-c.h"
                    memset(&result_137,0,sizeof(char*));
                    # 279 "./neo-c.h"
                    __result107__ = __result_obj__ = result_137;
                    return __result107__;
                }
                # 281 "./neo-c.h"
                self->it=self->head;
                # 287 "./neo-c.h"
                # 283 "./neo-c.h"
                if(self->it) {
                    # 284 "./neo-c.h"
                    __result108__ = __result_obj__ = self->it->item;
                    return __result108__;
                }
                # 287 "./neo-c.h"
                # 288 "./neo-c.h"
                memset(&result_138,0,sizeof(char*));
                # 289 "./neo-c.h"
                __result109__ = __result_obj__ = result_138;
                return __result109__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result110__;
memset(&__result_obj__, 0, sizeof(void*));
                # 311 "./neo-c.h"
                __result110__ = self==((void*)0)||self->it==((void*)0);
                return __result110__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional202;
char* result_140;
char* __result111__;
_Bool _if_conditional203;
char* __result112__;
char* result_141;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_140, 0, sizeof(char*));
memset(&result_141, 0, sizeof(char*));
                # 299 "./neo-c.h"
                # 293 "./neo-c.h"
                if(_if_conditional202=self==((void*)0)||self->it==((void*)0),                _if_conditional202) {
                    # 294 "./neo-c.h"
                    # 295 "./neo-c.h"
                    memset(&result_140,0,sizeof(char*));
                    # 296 "./neo-c.h"
                    __result111__ = __result_obj__ = result_140;
                    return __result111__;
                }
                # 299 "./neo-c.h"
                self->it=self->it->next;
                # 305 "./neo-c.h"
                # 301 "./neo-c.h"
                if(self->it) {
                    # 302 "./neo-c.h"
                    __result112__ = __result_obj__ = self->it->item;
                    return __result112__;
                }
                # 305 "./neo-c.h"
                # 306 "./neo-c.h"
                memset(&result_141,0,sizeof(char*));
                # 307 "./neo-c.h"
                __result113__ = __result_obj__ = result_141;
                return __result113__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional206;
void* right_value145;
struct list_item$1charp* litem_142;
_Bool _if_conditional207;
void* right_value146;
struct list_item$1charp* litem_143;
void* right_value147;
struct list_item$1charp* litem_144;
struct list$1charp* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
right_value145 = (void*)0;
memset(&litem_142, 0, sizeof(struct list_item$1charp*));
right_value146 = (void*)0;
memset(&litem_143, 0, sizeof(struct list_item$1charp*));
right_value147 = (void*)0;
memset(&litem_144, 0, sizeof(struct list_item$1charp*));
                    # 247 "./neo-c.h"
                    # 216 "./neo-c.h"
                    if(_if_conditional206=self->len==0,                    _if_conditional206) {
                        # 217 "./neo-c.h"
                        litem_142=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value145=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 217, "list_item$1charp"))));
                        come_call_finalizer3(right_value145,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 219 "./neo-c.h"
                        litem_142->prev=((void*)0);
                        # 220 "./neo-c.h"
                        litem_142->next=((void*)0);
                        # 221 "./neo-c.h"
                        litem_142->item=item;
                        # 223 "./neo-c.h"
                        self->tail=litem_142;
                        # 224 "./neo-c.h"
                        self->head=litem_142;
                    }
                    else {
                        # 247 "./neo-c.h"
                        # 226 "./neo-c.h"
                        if(_if_conditional207=self->len==1,                        _if_conditional207) {
                            # 227 "./neo-c.h"
                            litem_143=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value146=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 227, "list_item$1charp"))));
                            come_call_finalizer3(right_value146,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 229 "./neo-c.h"
                            litem_143->prev=self->head;
                            # 230 "./neo-c.h"
                            litem_143->next=((void*)0);
                            # 231 "./neo-c.h"
                            litem_143->item=item;
                            # 233 "./neo-c.h"
                            self->tail=litem_143;
                            # 234 "./neo-c.h"
                            self->head->next=litem_143;
                        }
                        else {
                            # 237 "./neo-c.h"
                            litem_144=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value147=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 237, "list_item$1charp"))));
                            come_call_finalizer3(right_value147,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 239 "./neo-c.h"
                            litem_144->prev=self->tail;
                            # 240 "./neo-c.h"
                            litem_144->next=((void*)0);
                            # 241 "./neo-c.h"
                            litem_144->item=item;
                            # 243 "./neo-c.h"
                            self->tail->next=litem_144;
                            # 244 "./neo-c.h"
                            self->tail=litem_144;
                        }
                    }
                    # 247 "./neo-c.h"
                    self->len++;
                    # 249 "./neo-c.h"
                    __result114__ = __result_obj__ = self;
                    return __result114__;
}

struct tuple2$2sTypephcharph* parse_interface_function(struct sInfo* info){
void* __result_obj__;
void* right_value150;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* result_type_145;
char* var_name_146;
_Bool err_147;
_Bool _if_conditional210;
void* right_value151;
char* fun_name_148;
void* right_value152;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var3;
struct list$1sTypeph* param_types_149;
struct list$1charph* param_names_150;
struct list$1charph* param_default_parametors_151;
_Bool var_args_152;
void* right_value159;
void* right_value160;
void* right_value167;
void* right_value168;
void* right_value169;
struct sType* type_169;
void* right_value173;
struct list$1sTypeph* __dec_obj61;
void* right_value177;
struct list$1charph* __dec_obj62;
void* right_value178;
void* right_value179;
void* right_value180;
struct tuple1$1sTypeph* __dec_obj64;
void* right_value181;
void* right_value182;
struct tuple2$2sTypephcharph* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value150 = (void*)0;
memset(&result_type_145, 0, sizeof(struct sType*));
memset(&var_name_146, 0, sizeof(char*));
memset(&err_147, 0, sizeof(_Bool));
memset(&result_type_145, 0, sizeof(struct sType*));
memset(&var_name_146, 0, sizeof(char*));
memset(&err_147, 0, sizeof(_Bool));
right_value151 = (void*)0;
memset(&fun_name_148, 0, sizeof(char*));
right_value152 = (void*)0;
memset(&param_types_149, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_150, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_151, 0, sizeof(struct list$1charph*));
memset(&var_args_152, 0, sizeof(_Bool));
memset(&param_types_149, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_150, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_151, 0, sizeof(struct list$1charph*));
memset(&var_args_152, 0, sizeof(_Bool));
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value167 = (void*)0;
right_value168 = (void*)0;
right_value169 = (void*)0;
memset(&type_169, 0, sizeof(struct sType*));
right_value173 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value182 = (void*)0;
    # 62 "23interface.c"
    multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(right_value150=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
    result_type_145=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
    var_name_146=(char*)come_increment_ref_count(multiple_assign_var2->v2);
    err_147=multiple_assign_var2->v3;
    come_call_finalizer3(right_value150,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    # 68 "23interface.c"
    # 63 "23interface.c"
    if(_if_conditional210=!err_147,    _if_conditional210) {
        # 64 "23interface.c"
        printf("%s %d: parse_type failed\n",info->sname,info->sline);
        # 65 "23interface.c"
        exit(2);
    }
    # 68 "23interface.c"
    fun_name_148=(char*)come_increment_ref_count(((char*)(right_value151=parse_word(info))));
    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 70 "23interface.c"
    multiple_assign_var3=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value152=parse_params(info,(_Bool)0)));
    param_types_149=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var3->v1);
    param_names_150=(struct list$1charph*)come_increment_ref_count(multiple_assign_var3->v2);
    param_default_parametors_151=(struct list$1charph*)come_increment_ref_count(multiple_assign_var3->v3);
    var_args_152=multiple_assign_var3->v4;
    come_call_finalizer3(right_value152,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    # 72 "23interface.c"
    list$1sTypeph_insert(param_types_149,0,(struct sType*)come_increment_ref_count(((struct sType*)(right_value160=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value159=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 72, "sType")))),"void*",(_Bool)0,info)))));
    come_call_finalizer3(right_value159,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value160,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 73 "23interface.c"
    list$1charph_insert(param_names_150,0,(char*)come_increment_ref_count(((char*)(right_value167=__builtin_string("self")))));
    right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 75 "23interface.c"
    type_169=(struct sType*)come_increment_ref_count(((struct sType*)(right_value169=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value168=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 75, "sType")))),"lambda",(_Bool)0,info))));
    come_call_finalizer3(right_value168,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value169,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 77 "23interface.c"
    __dec_obj61=type_169->mParamTypes;
    type_169->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value173=list$1sTypephp_clone(param_types_149))));
    come_call_finalizer3(__dec_obj61,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value173,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    # 78 "23interface.c"
    __dec_obj62=type_169->mParamNames;
    type_169->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value177=list$1charphp_clone(param_names_150))));
    come_call_finalizer3(__dec_obj62,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value177,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 79 "23interface.c"
    type_169->mVarArgs=var_args_152;
    # 80 "23interface.c"
    __dec_obj64=type_169->mResultType;
    type_169->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value180=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value178=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "23interface.c", 80, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value179=sType_clone(result_type_145))))))));
    come_call_finalizer3(__dec_obj64,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value178,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value179,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value180,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    # 82 "23interface.c"
    __result129__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value182=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value181=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "23interface.c", 82, "tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(type_169),(char*)come_increment_ref_count(fun_name_148))));
    come_call_finalizer3(result_type_145,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_146 = come_decrement_ref_count2(var_name_146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_148 = come_decrement_ref_count2(fun_name_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_149,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_150,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_151,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_169,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value181,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value182,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result129__;
    come_call_finalizer3(result_type_145,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_146 = come_decrement_ref_count2(var_name_146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_148 = come_decrement_ref_count2(fun_name_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_149,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_150,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_151,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_169,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional208;
_Bool _if_conditional209;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "tuple3$3sTypephcharphboolp_finalize"
        # 0 "tuple3$3sTypephcharphboolp_finalize"
        if(_if_conditional208=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional208) {
            # 0 "tuple3$3sTypephcharphboolp_finalize"
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 2 "tuple3$3sTypephcharphboolp_finalize"
        # 1 "tuple3$3sTypephcharphboolp_finalize"
        if(_if_conditional209=self!=((void*)0)&&self->v2!=((void*)0),        _if_conditional209) {
            # 1 "tuple3$3sTypephcharphboolp_finalize"
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
void* __result_obj__;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
        # 0 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
        if(_if_conditional211=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional211) {
            # 0 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            come_call_finalizer3(self->v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 2 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
        # 1 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
        if(_if_conditional212=self!=((void*)0)&&self->v2!=((void*)0),        _if_conditional212) {
            # 1 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 3 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
        # 2 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
        if(_if_conditional213=self!=((void*)0)&&self->v3!=((void*)0),        _if_conditional213) {
            # 2 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct list$1sTypeph* list$1sTypeph_insert(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
struct list$1sTypeph* __result118__;
_Bool _if_conditional219;
void* right_value156;
struct list_item$1sTypeph* litem_156;
struct sType* __dec_obj52;
_Bool _if_conditional220;
void* right_value157;
struct list_item$1sTypeph* litem_157;
struct sType* __dec_obj53;
struct list_item$1sTypeph* it_158;
int i_159;
_Bool _while_condtional27;
_Bool _if_conditional221;
void* right_value158;
struct list_item$1sTypeph* litem_160;
struct sType* __dec_obj54;
struct list$1sTypeph* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
right_value156 = (void*)0;
memset(&litem_156, 0, sizeof(struct list_item$1sTypeph*));
right_value157 = (void*)0;
memset(&litem_157, 0, sizeof(struct list_item$1sTypeph*));
memset(&it_158, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_159, 0, sizeof(int));
right_value158 = (void*)0;
memset(&litem_160, 0, sizeof(struct list_item$1sTypeph*));
        # 362 "./neo-c.h"
        # 359 "./neo-c.h"
        if(_if_conditional214=position<0,        _if_conditional214) {
            # 360 "./neo-c.h"
            position+=self->len+1;
        }
        # 365 "./neo-c.h"
        # 362 "./neo-c.h"
        if(_if_conditional215=position<0,        _if_conditional215) {
            # 363 "./neo-c.h"
            position=0;
        }
        # 371 "./neo-c.h"
        # 365 "./neo-c.h"
        if(_if_conditional216=self->len==0||position>=self->len,        _if_conditional216) {
            # 367 "./neo-c.h"
            list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(item));
            # 368 "./neo-c.h"
            __result118__ = __result_obj__ = self;
            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result118__;
        }
        # 417 "./neo-c.h"
        # 371 "./neo-c.h"
        if(_if_conditional219=position==0,        _if_conditional219) {
            # 372 "./neo-c.h"
            litem_156=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value156=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 372, "list_item$1sTypeph"))));
            come_call_finalizer3(right_value156,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            # 374 "./neo-c.h"
            litem_156->prev=((void*)0);
            # 375 "./neo-c.h"
            litem_156->next=self->head;
            # 376 "./neo-c.h"
            __dec_obj52=litem_156->item;
            litem_156->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj52,sType_finalize, 0, 0, 0, 0, (void*)0);
            # 378 "./neo-c.h"
            self->head->prev=litem_156;
            # 379 "./neo-c.h"
            self->head=litem_156;
            # 381 "./neo-c.h"
            self->len++;
        }
        else {
            # 417 "./neo-c.h"
            # 383 "./neo-c.h"
            if(_if_conditional220=self->len==1,            _if_conditional220) {
                # 384 "./neo-c.h"
                litem_157=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value157=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 384, "list_item$1sTypeph"))));
                come_call_finalizer3(right_value157,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                # 386 "./neo-c.h"
                litem_157->prev=self->head;
                # 387 "./neo-c.h"
                litem_157->next=self->tail;
                # 388 "./neo-c.h"
                __dec_obj53=litem_157->item;
                litem_157->item=(struct sType*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 0, 0, (void*)0);
                # 390 "./neo-c.h"
                self->tail->prev=litem_157;
                # 391 "./neo-c.h"
                self->head->next=litem_157;
                # 393 "./neo-c.h"
                self->len++;
            }
            else {
                # 396 "./neo-c.h"
                it_158=self->head;
                # 397 "./neo-c.h"
                i_159=0;
                # 415 "./neo-c.h"
                while(_while_condtional27=it_158!=((void*)0),                _while_condtional27) {
                    # 412 "./neo-c.h"
                    # 399 "./neo-c.h"
                    if(_if_conditional221=position==i_159,                    _if_conditional221) {
                        # 400 "./neo-c.h"
                        litem_160=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value158=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 400, "list_item$1sTypeph"))));
                        come_call_finalizer3(right_value158,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 402 "./neo-c.h"
                        litem_160->prev=it_158->prev;
                        # 403 "./neo-c.h"
                        litem_160->next=it_158;
                        # 404 "./neo-c.h"
                        __dec_obj54=litem_160->item;
                        litem_160->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj54,sType_finalize, 0, 0, 0, 0, (void*)0);
                        # 406 "./neo-c.h"
                        it_158->prev->next=litem_160;
                        # 407 "./neo-c.h"
                        it_158->prev=litem_160;
                        # 409 "./neo-c.h"
                        self->len++;
                    }
                    # 412 "./neo-c.h"
                    it_158=it_158->next;
                    # 413 "./neo-c.h"
                    i_159++;
                }
            }
        }
        # 417 "./neo-c.h"
        __result119__ = __result_obj__ = self;
        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result119__;
        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional217;
void* right_value153;
struct list_item$1sTypeph* litem_153;
struct sType* __dec_obj49;
_Bool _if_conditional218;
void* right_value154;
struct list_item$1sTypeph* litem_154;
struct sType* __dec_obj50;
void* right_value155;
struct list_item$1sTypeph* litem_155;
struct sType* __dec_obj51;
struct list$1sTypeph* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value153 = (void*)0;
memset(&litem_153, 0, sizeof(struct list_item$1sTypeph*));
right_value154 = (void*)0;
memset(&litem_154, 0, sizeof(struct list_item$1sTypeph*));
right_value155 = (void*)0;
memset(&litem_155, 0, sizeof(struct list_item$1sTypeph*));
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional217=self->len==0,                _if_conditional217) {
                    # 217 "./neo-c.h"
                    litem_153=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value153=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 217, "list_item$1sTypeph"))));
                    come_call_finalizer3(right_value153,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "./neo-c.h"
                    litem_153->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_153->next=((void*)0);
                    # 221 "./neo-c.h"
                    __dec_obj49=litem_153->item;
                    litem_153->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj49,sType_finalize, 0, 0, 0, 0, (void*)0);
                    # 223 "./neo-c.h"
                    self->tail=litem_153;
                    # 224 "./neo-c.h"
                    self->head=litem_153;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional218=self->len==1,                    _if_conditional218) {
                        # 227 "./neo-c.h"
                        litem_154=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value154=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 227, "list_item$1sTypeph"))));
                        come_call_finalizer3(right_value154,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_154->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_154->next=((void*)0);
                        # 231 "./neo-c.h"
                        __dec_obj50=litem_154->item;
                        litem_154->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj50,sType_finalize, 0, 0, 0, 0, (void*)0);
                        # 233 "./neo-c.h"
                        self->tail=litem_154;
                        # 234 "./neo-c.h"
                        self->head->next=litem_154;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_155=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value155=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 237, "list_item$1sTypeph"))));
                        come_call_finalizer3(right_value155,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_155->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_155->next=((void*)0);
                        # 241 "./neo-c.h"
                        __dec_obj51=litem_155->item;
                        litem_155->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 0, 0, (void*)0);
                        # 243 "./neo-c.h"
                        self->tail->next=litem_155;
                        # 244 "./neo-c.h"
                        self->tail=litem_155;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
                __result117__ = __result_obj__ = self;
                come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result117__;
                come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_insert(struct list$1charph* self, int position, char* item){
void* __result_obj__;
_Bool _if_conditional222;
_Bool _if_conditional223;
_Bool _if_conditional224;
struct list$1charph* __result121__;
_Bool _if_conditional227;
void* right_value164;
struct list_item$1charph* litem_164;
char* __dec_obj58;
_Bool _if_conditional228;
void* right_value165;
struct list_item$1charph* litem_165;
char* __dec_obj59;
struct list_item$1charph* it_166;
int i_167;
_Bool _while_condtional28;
_Bool _if_conditional229;
void* right_value166;
struct list_item$1charph* litem_168;
char* __dec_obj60;
struct list$1charph* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
right_value164 = (void*)0;
memset(&litem_164, 0, sizeof(struct list_item$1charph*));
right_value165 = (void*)0;
memset(&litem_165, 0, sizeof(struct list_item$1charph*));
memset(&it_166, 0, sizeof(struct list_item$1charph*));
memset(&i_167, 0, sizeof(int));
right_value166 = (void*)0;
memset(&litem_168, 0, sizeof(struct list_item$1charph*));
        # 362 "./neo-c.h"
        # 359 "./neo-c.h"
        if(_if_conditional222=position<0,        _if_conditional222) {
            # 360 "./neo-c.h"
            position+=self->len+1;
        }
        # 365 "./neo-c.h"
        # 362 "./neo-c.h"
        if(_if_conditional223=position<0,        _if_conditional223) {
            # 363 "./neo-c.h"
            position=0;
        }
        # 371 "./neo-c.h"
        # 365 "./neo-c.h"
        if(_if_conditional224=self->len==0||position>=self->len,        _if_conditional224) {
            # 367 "./neo-c.h"
            list$1charph_push_back(self,(char*)come_increment_ref_count(item));
            # 368 "./neo-c.h"
            __result121__ = __result_obj__ = self;
            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            return __result121__;
        }
        # 417 "./neo-c.h"
        # 371 "./neo-c.h"
        if(_if_conditional227=position==0,        _if_conditional227) {
            # 372 "./neo-c.h"
            litem_164=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value164=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 372, "list_item$1charph"))));
            come_call_finalizer3(right_value164,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            # 374 "./neo-c.h"
            litem_164->prev=((void*)0);
            # 375 "./neo-c.h"
            litem_164->next=self->head;
            # 376 "./neo-c.h"
            __dec_obj58=litem_164->item;
            litem_164->item=(char*)come_increment_ref_count(item);
            __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
            # 378 "./neo-c.h"
            self->head->prev=litem_164;
            # 379 "./neo-c.h"
            self->head=litem_164;
            # 381 "./neo-c.h"
            self->len++;
        }
        else {
            # 417 "./neo-c.h"
            # 383 "./neo-c.h"
            if(_if_conditional228=self->len==1,            _if_conditional228) {
                # 384 "./neo-c.h"
                litem_165=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value165=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 384, "list_item$1charph"))));
                come_call_finalizer3(right_value165,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 386 "./neo-c.h"
                litem_165->prev=self->head;
                # 387 "./neo-c.h"
                litem_165->next=self->tail;
                # 388 "./neo-c.h"
                __dec_obj59=litem_165->item;
                litem_165->item=(char*)come_increment_ref_count(item);
                __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
                # 390 "./neo-c.h"
                self->tail->prev=litem_165;
                # 391 "./neo-c.h"
                self->head->next=litem_165;
                # 393 "./neo-c.h"
                self->len++;
            }
            else {
                # 396 "./neo-c.h"
                it_166=self->head;
                # 397 "./neo-c.h"
                i_167=0;
                # 415 "./neo-c.h"
                while(_while_condtional28=it_166!=((void*)0),                _while_condtional28) {
                    # 412 "./neo-c.h"
                    # 399 "./neo-c.h"
                    if(_if_conditional229=position==i_167,                    _if_conditional229) {
                        # 400 "./neo-c.h"
                        litem_168=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value166=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 400, "list_item$1charph"))));
                        come_call_finalizer3(right_value166,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 402 "./neo-c.h"
                        litem_168->prev=it_166->prev;
                        # 403 "./neo-c.h"
                        litem_168->next=it_166;
                        # 404 "./neo-c.h"
                        __dec_obj60=litem_168->item;
                        litem_168->item=(char*)come_increment_ref_count(item);
                        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 406 "./neo-c.h"
                        it_166->prev->next=litem_168;
                        # 407 "./neo-c.h"
                        it_166->prev=litem_168;
                        # 409 "./neo-c.h"
                        self->len++;
                    }
                    # 412 "./neo-c.h"
                    it_166=it_166->next;
                    # 413 "./neo-c.h"
                    i_167++;
                }
            }
        }
        # 417 "./neo-c.h"
        __result122__ = __result_obj__ = self;
        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result122__;
        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional225;
void* right_value161;
struct list_item$1charph* litem_161;
char* __dec_obj55;
_Bool _if_conditional226;
void* right_value162;
struct list_item$1charph* litem_162;
char* __dec_obj56;
void* right_value163;
struct list_item$1charph* litem_163;
char* __dec_obj57;
struct list$1charph* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
right_value161 = (void*)0;
memset(&litem_161, 0, sizeof(struct list_item$1charph*));
right_value162 = (void*)0;
memset(&litem_162, 0, sizeof(struct list_item$1charph*));
right_value163 = (void*)0;
memset(&litem_163, 0, sizeof(struct list_item$1charph*));
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional225=self->len==0,                _if_conditional225) {
                    # 217 "./neo-c.h"
                    litem_161=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value161=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 217, "list_item$1charph"))));
                    come_call_finalizer3(right_value161,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "./neo-c.h"
                    litem_161->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_161->next=((void*)0);
                    # 221 "./neo-c.h"
                    __dec_obj55=litem_161->item;
                    litem_161->item=(char*)come_increment_ref_count(item);
                    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
                    # 223 "./neo-c.h"
                    self->tail=litem_161;
                    # 224 "./neo-c.h"
                    self->head=litem_161;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional226=self->len==1,                    _if_conditional226) {
                        # 227 "./neo-c.h"
                        litem_162=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value162=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 227, "list_item$1charph"))));
                        come_call_finalizer3(right_value162,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_162->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_162->next=((void*)0);
                        # 231 "./neo-c.h"
                        __dec_obj56=litem_162->item;
                        litem_162->item=(char*)come_increment_ref_count(item);
                        __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 233 "./neo-c.h"
                        self->tail=litem_162;
                        # 234 "./neo-c.h"
                        self->head->next=litem_162;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_163=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value163=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 237, "list_item$1charph"))));
                        come_call_finalizer3(right_value163,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_163->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_163->next=((void*)0);
                        # 241 "./neo-c.h"
                        __dec_obj57=litem_163->item;
                        litem_163->item=(char*)come_increment_ref_count(item);
                        __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 243 "./neo-c.h"
                        self->tail->next=litem_163;
                        # 244 "./neo-c.h"
                        self->tail=litem_163;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
                __result120__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result120__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional230;
struct list$1sTypeph* __result123__;
void* right_value170;
void* right_value171;
struct list$1sTypeph* result_170;
struct list_item$1sTypeph* it_171;
_Bool _while_condtional29;
void* right_value172;
struct list$1sTypeph* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
right_value170 = (void*)0;
right_value171 = (void*)0;
memset(&result_170, 0, sizeof(struct list$1sTypeph*));
memset(&it_171, 0, sizeof(struct list_item$1sTypeph*));
right_value172 = (void*)0;
        # 133 "./neo-c.h"
        # 130 "./neo-c.h"
        if(_if_conditional230=self==((void*)0),        _if_conditional230) {
            # 131 "./neo-c.h"
            __result123__ = __result_obj__ = ((void*)0);
            return __result123__;
        }
        # 133 "./neo-c.h"
        result_170=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value171=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value170=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 133, "list$1sTypeph"))))))));
        come_call_finalizer3(right_value170,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value171,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 135 "./neo-c.h"
        it_171=self->head;
        # 142 "./neo-c.h"
        while(_while_condtional29=it_171!=((void*)0),        _while_condtional29) {
            # 137 "./neo-c.h"
            list$1sTypeph_add(result_170,(struct sType*)come_increment_ref_count(((struct sType*)(right_value172=sType_clone(it_171->item)))));
            come_call_finalizer3(right_value172,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 139 "./neo-c.h"
            it_171=it_171->next;
        }
        # 142 "./neo-c.h"
        __result124__ = __result_obj__ = result_170;
        come_call_finalizer3(result_170,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        return __result124__;
        come_call_finalizer3(result_170,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional231;
struct list$1charph* __result125__;
void* right_value174;
void* right_value175;
struct list$1charph* result_172;
struct list_item$1charph* it_173;
_Bool _while_condtional30;
void* right_value176;
struct list$1charph* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value174 = (void*)0;
right_value175 = (void*)0;
memset(&result_172, 0, sizeof(struct list$1charph*));
memset(&it_173, 0, sizeof(struct list_item$1charph*));
right_value176 = (void*)0;
        # 133 "./neo-c.h"
        # 130 "./neo-c.h"
        if(_if_conditional231=self==((void*)0),        _if_conditional231) {
            # 131 "./neo-c.h"
            __result125__ = __result_obj__ = ((void*)0);
            return __result125__;
        }
        # 133 "./neo-c.h"
        result_172=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value175=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value174=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 133, "list$1charph"))))))));
        come_call_finalizer3(right_value174,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value175,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 135 "./neo-c.h"
        it_173=self->head;
        # 142 "./neo-c.h"
        while(_while_condtional30=it_173!=((void*)0),        _while_condtional30) {
            # 137 "./neo-c.h"
            list$1charph_add(result_172,(char*)come_increment_ref_count(((char*)(right_value176=string_clone(it_173->item)))));
            right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 139 "./neo-c.h"
            it_173=it_173->next;
        }
        # 142 "./neo-c.h"
        __result126__ = __result_obj__ = result_172;
        come_call_finalizer3(result_172,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result126__;
        come_call_finalizer3(result_172,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj63;
struct tuple1$1sTypeph* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
        # 1710 "./neo-c.h"
        __dec_obj63=self->v1;
        self->v1=(struct sType*)come_increment_ref_count(v1);
        come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
        # 1712 "./neo-c.h"
        __result127__ = __result_obj__ = self;
        come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result127__;
        come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
struct sType* __dec_obj65;
char* __dec_obj66;
struct tuple2$2sTypephcharph* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
        # 1738 "./neo-c.h"
        __dec_obj65=self->v1;
        self->v1=(struct sType*)come_increment_ref_count(v1);
        come_call_finalizer3(__dec_obj65,sType_finalize, 0, 0, 0, 0, (void*)0);
        # 1739 "./neo-c.h"
        __dec_obj66=self->v2;
        self->v2=(char*)come_increment_ref_count(v2);
        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
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
_Bool _if_conditional232;
_Bool _if_conditional233;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "tuple2$2sTypephcharphp_finalize"
            # 0 "tuple2$2sTypephcharphp_finalize"
            if(_if_conditional232=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional232) {
                # 0 "tuple2$2sTypephcharphp_finalize"
                come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 2 "tuple2$2sTypephcharphp_finalize"
            # 1 "tuple2$2sTypephcharphp_finalize"
            if(_if_conditional233=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional233) {
                # 1 "tuple2$2sTypephcharphp_finalize"
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional234;
char* source_head_174;
_Bool output_175;
void* right_value183;
char* type_name_176;
struct sClass* klass_177;
_Bool _if_conditional235;
void* right_value184;
void* right_value185;
struct sClass* __dec_obj67;
void* right_value186;
struct sClass* __dec_obj68;
_Bool _if_conditional237;
int __exception_result_var_b1;
void* right_value187;
void* right_value188;
struct sType* voidp_178;
void* right_value192;
void* right_value193;
void* right_value194;
void* right_value195;
void* right_value196;
struct sType* finalizer_182;
void* right_value197;
struct sType* __list_values1___183[1];
void* right_value198;
void* right_value199;
struct list$1sTypeph* __dec_obj74;
void* right_value200;
char* __list_values2___185[1];
void* right_value201;
void* right_value202;
struct list$1charph* __dec_obj75;
void* right_value203;
void* right_value204;
void* right_value205;
void* right_value206;
struct tuple1$1sTypeph* __dec_obj76;
void* right_value207;
void* right_value208;
void* right_value209;
void* right_value210;
void* right_value211;
struct sType* cloner_187;
void* right_value212;
struct sType* __list_values3___188[1];
void* right_value213;
void* right_value214;
struct list$1sTypeph* __dec_obj77;
void* right_value215;
char* __list_values4___189[1];
void* right_value216;
void* right_value217;
struct list$1charph* __dec_obj78;
void* right_value218;
void* right_value219;
void* right_value220;
struct tuple1$1sTypeph* __dec_obj79;
void* right_value221;
void* right_value222;
void* right_value223;
_Bool _while_condtional31;
void* right_value224;
struct tuple2$2sTypephcharph* multiple_assign_var4;
struct sType* type2_190;
char* name_191;
int __exception_result_var_b2;
void* right_value225;
void* right_value226;
_Bool _if_conditional240;
char* source_tail_192;
void* right_value227;
void* right_value228;
struct buffer* header_193;
void* right_value229;
void* right_value230;
void* right_value231;
void* right_value232;
struct sNode* _inf_value1;
struct sInterfaceNode* _inf_obj_value1;
void* right_value237;
struct sNode* __result138__;
void* right_value238;
struct sNode* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&source_head_174, 0, sizeof(char*));
memset(&output_175, 0, sizeof(_Bool));
right_value183 = (void*)0;
memset(&type_name_176, 0, sizeof(char*));
memset(&klass_177, 0, sizeof(struct sClass*));
right_value184 = (void*)0;
right_value185 = (void*)0;
right_value186 = (void*)0;
right_value187 = (void*)0;
right_value188 = (void*)0;
memset(&voidp_178, 0, sizeof(struct sType*));
right_value192 = (void*)0;
right_value193 = (void*)0;
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
memset(&finalizer_182, 0, sizeof(struct sType*));
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value200 = (void*)0;
right_value201 = (void*)0;
right_value202 = (void*)0;
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
right_value210 = (void*)0;
right_value211 = (void*)0;
memset(&cloner_187, 0, sizeof(struct sType*));
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
right_value219 = (void*)0;
right_value220 = (void*)0;
right_value221 = (void*)0;
right_value222 = (void*)0;
right_value223 = (void*)0;
right_value224 = (void*)0;
memset(&type2_190, 0, sizeof(struct sType*));
memset(&name_191, 0, sizeof(char*));
memset(&type2_190, 0, sizeof(struct sType*));
memset(&name_191, 0, sizeof(char*));
right_value225 = (void*)0;
right_value226 = (void*)0;
memset(&source_tail_192, 0, sizeof(char*));
right_value227 = (void*)0;
right_value228 = (void*)0;
memset(&header_193, 0, sizeof(struct buffer*));
right_value229 = (void*)0;
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value232 = (void*)0;
right_value237 = (void*)0;
right_value238 = (void*)0;
    # 159 "23interface.c"
    # 87 "23interface.c"
    if(_if_conditional234=charp_operator_equals(buf,"interface")||charp_operator_equals(buf,"protocol"),    _if_conditional234) {
        # 88 "23interface.c"
        source_head_174=info->p;
        # 90 "23interface.c"
        output_175=(_Bool)1;
        # 92 "23interface.c"
        type_name_176=(char*)come_increment_ref_count(((char*)(right_value183=parse_word(info))));
        right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 94 "23interface.c"
        # 106 "23interface.c"
        # 95 "23interface.c"
        if(_if_conditional235=map$2charphsClassph_at(info->classes,type_name_176,((void*)0))==((void*)0),        _if_conditional235) {
            # 96 "23interface.c"
            __dec_obj67=klass_177;
            klass_177=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value185=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value184=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "23interface.c", 96, "sClass")))),type_name_176,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
            come_call_finalizer3(__dec_obj67,sClass_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value184,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value185,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        }
        else {
            # 99 "23interface.c"
            __dec_obj68=klass_177;
            klass_177=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value186=sClass_clone(map$2charphsClassph_at(info->classes,type_name_176,((void*)0))))));
            come_call_finalizer3(__dec_obj68,sClass_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value186,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            # 104 "23interface.c"
            # 101 "23interface.c"
            if(_if_conditional237=list$1tuple2$2charphsTypephph_length(klass_177->mFields)>0,            _if_conditional237) {
                # 102 "23interface.c"
                output_175=(_Bool)0;
            }
        }
        # 106 "23interface.c"
        (come_push_stackframe("23interface.c", 106, 0),__exception_result_var_b1=expected_next_character(123,info), come_pop_stackframe(), __exception_result_var_b1);
        # 108 "23interface.c"
        voidp_178=(struct sType*)come_increment_ref_count(((struct sType*)(right_value188=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value187=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 108, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer3(right_value187,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value188,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 109 "23interface.c"
        voidp_178->mPointerNum++;
        # 111 "23interface.c"
        list$1tuple2$2charphsTypephph_push_back(klass_177->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value194=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value192=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "23interface.c", 111, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value193=__builtin_string("_protocol_obj")))),(struct sType*)come_increment_ref_count(voidp_178))))));
        come_call_finalizer3(right_value192,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value194,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 113 "23interface.c"
        finalizer_182=(struct sType*)come_increment_ref_count(((struct sType*)(right_value196=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value195=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 113, "sType")))),"lambda",(_Bool)0,info))));
        come_call_finalizer3(right_value195,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value196,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 115 "23interface.c"
        {__list_values1___183[0]=come_increment_ref_count(((struct sType*)(right_value197=sType_clone(voidp_178))));
}        __dec_obj74=finalizer_182->mParamTypes;
        finalizer_182->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value199=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value198=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "23interface.c", 115, "struct list$1sTypeph")))),1,__list_values1___183))));
        come_call_finalizer3(__dec_obj74,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value197,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value198,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value199,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 116 "23interface.c"
        {__list_values2___185[0]=come_increment_ref_count(((char*)(right_value200=__builtin_string("self"))));
}        __dec_obj75=finalizer_182->mParamNames;
        finalizer_182->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value202=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value201=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "23interface.c", 116, "struct list$1charph")))),1,__list_values2___185))));
        come_call_finalizer3(__dec_obj75,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value201,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value202,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 117 "23interface.c"
        finalizer_182->mVarArgs=(_Bool)0;
        # 118 "23interface.c"
        __dec_obj76=finalizer_182->mResultType;
        finalizer_182->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value206=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value203=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "23interface.c", 118, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value205=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value204=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 118, "sType")))),"void",(_Bool)0,info))))))));
        come_call_finalizer3(__dec_obj76,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value203,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value204,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value205,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value206,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 120 "23interface.c"
        list$1tuple2$2charphsTypephph_push_back(klass_177->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value209=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value207=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "23interface.c", 120, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value208=__builtin_string("finalize")))),(struct sType*)come_increment_ref_count(finalizer_182))))));
        come_call_finalizer3(right_value207,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value209,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 122 "23interface.c"
        cloner_187=(struct sType*)come_increment_ref_count(((struct sType*)(right_value211=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value210=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 122, "sType")))),"lambda",(_Bool)0,info))));
        come_call_finalizer3(right_value210,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value211,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 124 "23interface.c"
        {__list_values3___188[0]=come_increment_ref_count(((struct sType*)(right_value212=sType_clone(voidp_178))));
}        __dec_obj77=cloner_187->mParamTypes;
        cloner_187->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value214=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value213=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "23interface.c", 124, "struct list$1sTypeph")))),1,__list_values3___188))));
        come_call_finalizer3(__dec_obj77,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value212,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value213,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value214,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 125 "23interface.c"
        {__list_values4___189[0]=come_increment_ref_count(((char*)(right_value215=__builtin_string("self"))));
}        __dec_obj78=cloner_187->mParamNames;
        cloner_187->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value217=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value216=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "23interface.c", 125, "struct list$1charph")))),1,__list_values4___189))));
        come_call_finalizer3(__dec_obj78,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value216,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value217,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 126 "23interface.c"
        cloner_187->mVarArgs=(_Bool)0;
        # 127 "23interface.c"
        __dec_obj79=cloner_187->mResultType;
        cloner_187->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value220=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value218=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "23interface.c", 127, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value219=sType_clone(voidp_178))))))));
        come_call_finalizer3(__dec_obj79,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value218,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value219,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value220,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 129 "23interface.c"
        list$1tuple2$2charphsTypephph_push_back(klass_177->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value223=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value221=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "23interface.c", 129, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value222=__builtin_string("clone")))),(struct sType*)come_increment_ref_count(cloner_187))))));
        come_call_finalizer3(right_value221,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value223,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 148 "23interface.c"
        while(_while_condtional31=(_Bool)1,        _while_condtional31) {
            # 132 "23interface.c"
            parse_sharp_v5(info);
            # 133 "23interface.c"
            multiple_assign_var4=((struct tuple2$2sTypephcharph*)(right_value224=parse_interface_function(info)));
            type2_190=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
            name_191=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            come_call_finalizer3(right_value224,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            # 134 "23interface.c"
            (come_push_stackframe("23interface.c", 134, 1),__exception_result_var_b2=expected_next_character(59,info), come_pop_stackframe(), __exception_result_var_b2);
            # 136 "23interface.c"
            list$1tuple2$2charphsTypephph_push_back(klass_177->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value226=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value225=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "23interface.c", 136, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_191),(struct sType*)come_increment_ref_count(type2_190))))));
            come_call_finalizer3(right_value225,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value226,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            # 138 "23interface.c"
            parse_sharp_v5(info);
            # 145 "23interface.c"
            # 140 "23interface.c"
            if(_if_conditional240=*info->p==125,            _if_conditional240) {
                # 141 "23interface.c"
                info->p++;
                # 142 "23interface.c"
                skip_spaces_and_lf(info);
                # 143 "23interface.c"
                come_call_finalizer3(type2_190,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_191 = come_decrement_ref_count2(name_191, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            # 145 "23interface.c"
            parse_sharp_v5(info);
            come_call_finalizer3(type2_190,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_191 = come_decrement_ref_count2(name_191, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 148 "23interface.c"
        source_tail_192=info->p;
        # 150 "23interface.c"
        header_193=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value228=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value227=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "23interface.c", 150, "buffer"))))))));
        come_call_finalizer3(right_value227,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value228,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 151 "23interface.c"
        buffer_append_str(header_193,"interface ");
        # 152 "23interface.c"
        buffer_append(header_193,source_head_174,source_tail_192-source_head_174);
        # 154 "23interface.c"
        add_come_code_at_come_header(info,"%s\n",((char*)(right_value229=buffer_to_string(header_193))));
        right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 156 "23interface.c"
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "23interface.c", 156, "struct sNode");
        _inf_obj_value1=come_increment_ref_count(((struct sInterfaceNode*)(right_value232=sInterfaceNode_initialize((struct sInterfaceNode*)come_increment_ref_count(((struct sInterfaceNode*)(right_value230=(struct sInterfaceNode*)come_calloc(1, sizeof(struct sInterfaceNode)*(1), "23interface.c", 156, "sInterfaceNode")))),(char*)come_increment_ref_count(((char*)(right_value231=__builtin_string(type_name_176)))),(struct sClass*)come_increment_ref_count(klass_177),output_175,info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sInterfaceNode_finalize;
        _inf_value1->clone=(void*)sInterfaceNode_clone;
        _inf_value1->compile=(void*)sInterfaceNode_compile;
        _inf_value1->sline=(void*)sNodeBase_sline;
        _inf_value1->sname=(void*)sNodeBase_sname;
        _inf_value1->terminated=(void*)sInterfaceNode_terminated;
        _inf_value1->kind=(void*)sInterfaceNode_kind;
        __result138__ = __result_obj__ = ((struct sNode*)(right_value237=_inf_value1));
        type_name_176 = come_decrement_ref_count2(type_name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(klass_177,sClass_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(voidp_178,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(finalizer_182,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(cloner_187,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_193,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value230,sInterfaceNode_finalize, 0, 1, 0, 0, __result_obj__);
        right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value232,sInterfaceNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value237) { right_value237 = come_decrement_ref_count2(right_value237, ((struct sNode*)right_value237)->finalize, ((struct sNode*)right_value237)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result138__;
        type_name_176 = come_decrement_ref_count2(type_name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(klass_177,sClass_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(voidp_178,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(finalizer_182,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(cloner_187,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_193,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 159 "23interface.c"
    __result139__ = __result_obj__ = ((struct sNode*)(right_value238=top_level_v91(buf,head,head_sline,info)));
    if(right_value238) { right_value238 = come_decrement_ref_count2(right_value238, ((struct sNode*)right_value238)->finalize, ((struct sNode*)right_value238)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result139__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional236;
int __result130__;
int __result131__;
memset(&__result_obj__, 0, sizeof(void*));
                # 354 "./neo-c.h"
                # 351 "./neo-c.h"
                if(_if_conditional236=self==((void*)0),                _if_conditional236) {
                    # 352 "./neo-c.h"
                    __result130__ = 0;
                    return __result130__;
                }
                # 354 "./neo-c.h"
                __result131__ = self->len;
                return __result131__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional238;
void* right_value189;
struct list_item$1tuple2$2charphsTypephph* litem_179;
struct tuple2$2charphsTypeph* __dec_obj69;
_Bool _if_conditional239;
void* right_value190;
struct list_item$1tuple2$2charphsTypephph* litem_180;
struct tuple2$2charphsTypeph* __dec_obj70;
void* right_value191;
struct list_item$1tuple2$2charphsTypephph* litem_181;
struct tuple2$2charphsTypeph* __dec_obj71;
struct list$1tuple2$2charphsTypephph* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
right_value189 = (void*)0;
memset(&litem_179, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value190 = (void*)0;
memset(&litem_180, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value191 = (void*)0;
memset(&litem_181, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
            # 247 "./neo-c.h"
            # 216 "./neo-c.h"
            if(_if_conditional238=self->len==0,            _if_conditional238) {
                # 217 "./neo-c.h"
                litem_179=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value189=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 217, "list_item$1tuple2$2charphsTypephph"))));
                come_call_finalizer3(right_value189,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 219 "./neo-c.h"
                litem_179->prev=((void*)0);
                # 220 "./neo-c.h"
                litem_179->next=((void*)0);
                # 221 "./neo-c.h"
                __dec_obj69=litem_179->item;
                litem_179->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj69,tuple2$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
                # 223 "./neo-c.h"
                self->tail=litem_179;
                # 224 "./neo-c.h"
                self->head=litem_179;
            }
            else {
                # 247 "./neo-c.h"
                # 226 "./neo-c.h"
                if(_if_conditional239=self->len==1,                _if_conditional239) {
                    # 227 "./neo-c.h"
                    litem_180=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value190=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 227, "list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer3(right_value190,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 229 "./neo-c.h"
                    litem_180->prev=self->head;
                    # 230 "./neo-c.h"
                    litem_180->next=((void*)0);
                    # 231 "./neo-c.h"
                    __dec_obj70=litem_180->item;
                    litem_180->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj70,tuple2$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
                    # 233 "./neo-c.h"
                    self->tail=litem_180;
                    # 234 "./neo-c.h"
                    self->head->next=litem_180;
                }
                else {
                    # 237 "./neo-c.h"
                    litem_181=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value191=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 237, "list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer3(right_value191,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 239 "./neo-c.h"
                    litem_181->prev=self->tail;
                    # 240 "./neo-c.h"
                    litem_181->next=((void*)0);
                    # 241 "./neo-c.h"
                    __dec_obj71=litem_181->item;
                    litem_181->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj71,tuple2$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
                    # 243 "./neo-c.h"
                    self->tail->next=litem_181;
                    # 244 "./neo-c.h"
                    self->tail=litem_181;
                }
            }
            # 247 "./neo-c.h"
            self->len++;
            # 249 "./neo-c.h"
            __result132__ = __result_obj__ = self;
            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result132__;
            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
char* __dec_obj72;
struct sType* __dec_obj73;
struct tuple2$2charphsTypeph* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
            # 1738 "./neo-c.h"
            __dec_obj72=self->v1;
            self->v1=(char*)come_increment_ref_count(v1);
            __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
            # 1739 "./neo-c.h"
            __dec_obj73=self->v2;
            self->v2=(struct sType*)come_increment_ref_count(v2);
            come_call_finalizer3(__dec_obj73,sType_finalize, 0, 0, 0, 0, (void*)0);
            # 1741 "./neo-c.h"
            __result133__ = __result_obj__ = self;
            come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(v2,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result133__;
            come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(v2,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__;
int i_184;
struct list$1sTypeph* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_184, 0, sizeof(int));
            # 103 "./neo-c.h"
            self->head=((void*)0);
            # 104 "./neo-c.h"
            self->tail=((void*)0);
            # 105 "./neo-c.h"
            self->len=0;
            # 111 "./neo-c.h"
            for(            i_184=0;            i_184<num_value;            i_184++            ){
                # 108 "./neo-c.h"
                list$1sTypeph_push_back(self,values[i_184]);
            }
            # 111 "./neo-c.h"
            __result134__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result134__;
            come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__;
int i_186;
struct list$1charph* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_186, 0, sizeof(int));
            # 103 "./neo-c.h"
            self->head=((void*)0);
            # 104 "./neo-c.h"
            self->tail=((void*)0);
            # 105 "./neo-c.h"
            self->len=0;
            # 111 "./neo-c.h"
            for(            i_186=0;            i_186<num_value;            i_186++            ){
                # 108 "./neo-c.h"
                list$1charph_push_back(self,values[i_186]);
            }
            # 111 "./neo-c.h"
            __result135__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result135__;
            come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void sInterfaceNode_finalize(struct sInterfaceNode* self){
void* __result_obj__;
_Bool _if_conditional241;
_Bool _if_conditional242;
_Bool _if_conditional243;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sInterfaceNode_finalize"
            # 0 "sInterfaceNode_finalize"
            if(_if_conditional241=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional241) {
                # 0 "sInterfaceNode_finalize"
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 2 "sInterfaceNode_finalize"
            # 1 "sInterfaceNode_finalize"
            if(_if_conditional242=self!=((void*)0)&&self->name!=((void*)0),            _if_conditional242) {
                # 1 "sInterfaceNode_finalize"
                self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 3 "sInterfaceNode_finalize"
            # 2 "sInterfaceNode_finalize"
            if(_if_conditional243=self!=((void*)0)&&self->klass!=((void*)0),            _if_conditional243) {
                # 2 "sInterfaceNode_finalize"
                come_call_finalizer3(self->klass,sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sInterfaceNode* sInterfaceNode_clone(struct sInterfaceNode* self){
void* __result_obj__;
_Bool _if_conditional244;
struct sInterfaceNode* __result136__;
void* right_value233;
struct sInterfaceNode* result_194;
_Bool _if_conditional245;
_Bool _if_conditional246;
void* right_value234;
char* __dec_obj80;
_Bool _if_conditional247;
void* right_value235;
char* __dec_obj81;
_Bool _if_conditional248;
void* right_value236;
struct sClass* __dec_obj82;
_Bool _if_conditional249;
struct sInterfaceNode* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
right_value233 = (void*)0;
memset(&result_194, 0, sizeof(struct sInterfaceNode*));
right_value234 = (void*)0;
right_value235 = (void*)0;
right_value236 = (void*)0;
            # 3 "sInterfaceNode_clone"
            # 2 "sInterfaceNode_clone"
            if(_if_conditional244=self==(void*)0,            _if_conditional244) {
                # 2 "sInterfaceNode_clone"
                __result136__ = __result_obj__ = (void*)0;
                return __result136__;
            }
            # 3 "sInterfaceNode_clone"
            result_194=(struct sInterfaceNode*)come_increment_ref_count(((struct sInterfaceNode*)(right_value233=(struct sInterfaceNode*)come_calloc(1, sizeof(struct sInterfaceNode)*(1), "sInterfaceNode_clone", 3, "sInterfaceNode"))));
            come_call_finalizer3(right_value233,sInterfaceNode_finalize, 0, 1, 0, 0, __result_obj__);
            # 5 "sInterfaceNode_clone"
            # 4 "sInterfaceNode_clone"
            if(_if_conditional245=self!=((void*)0),            _if_conditional245) {
                # 4 "sInterfaceNode_clone"
                result_194->sline=self->sline;
            }
            # 6 "sInterfaceNode_clone"
            # 5 "sInterfaceNode_clone"
            if(_if_conditional246=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional246) {
                # 5 "sInterfaceNode_clone"
                __dec_obj80=result_194->sname;
                result_194->sname=(char*)come_increment_ref_count(((char*)(right_value234=string_clone(self->sname))));
                __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 7 "sInterfaceNode_clone"
            # 6 "sInterfaceNode_clone"
            if(_if_conditional247=self!=((void*)0)&&self->name!=((void*)0),            _if_conditional247) {
                # 6 "sInterfaceNode_clone"
                __dec_obj81=result_194->name;
                result_194->name=(char*)come_increment_ref_count(((char*)(right_value235=string_clone(self->name))));
                __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 8 "sInterfaceNode_clone"
            # 7 "sInterfaceNode_clone"
            if(_if_conditional248=self!=((void*)0)&&self->klass!=((void*)0),            _if_conditional248) {
                # 7 "sInterfaceNode_clone"
                __dec_obj82=result_194->klass;
                result_194->klass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value236=sClass_clone(self->klass))));
                come_call_finalizer3(__dec_obj82,sClass_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value236,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 9 "sInterfaceNode_clone"
            # 8 "sInterfaceNode_clone"
            if(_if_conditional249=self!=((void*)0),            _if_conditional249) {
                # 8 "sInterfaceNode_clone"
                result_194->mOutput=self->mOutput;
            }
            # 9 "sInterfaceNode_clone"
            __result137__ = __result_obj__ = result_194;
            come_call_finalizer3(result_194,sInterfaceNode_finalize, 0, 0, 1, 0, (void*)0);
            return __result137__;
            come_call_finalizer3(result_194,sInterfaceNode_finalize, 0, 0, 0, 0, (void*)0);
}

