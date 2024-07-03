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
struct sForNode
{
    int sline;
    char* sname;
    struct sNode* mExpressionNode;
    struct sNode* mExpressionNode2;
    struct sNode* mExpressionNode3;
    struct sBlock* mBlock;
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

struct sForNode* sForNode_initialize(struct sForNode* self, struct sNode* expression_node, struct sNode* expression_node2, struct sNode* expression_node3, struct sBlock* block, struct sInfo* info);

_Bool sForNode_terminated(struct sForNode* self);

char* sForNode_kind(struct sForNode* self);

_Bool sForNode_compile(struct sForNode* self, struct sInfo* info);

static struct sNode* sNode_clone(struct sNode* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static void sBlock_finalize(struct sBlock* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
static void CVALUE_finalize(struct CVALUE* self);
struct sNode* string_node_v11(char* buf, char* head, int head_sline, struct sInfo* info);

static void sForNode_finalize(struct sForNode* self);
static struct sForNode* sForNode_clone(struct sForNode* self);
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










struct sForNode* sForNode_initialize(struct sForNode* self, struct sNode* expression_node, struct sNode* expression_node2, struct sNode* expression_node3, struct sBlock* block, struct sInfo* info){
void* __result_obj__;
void* right_value79;
char* __dec_obj12;
_Bool _if_conditional19;
void* right_value81;
struct sNode* __dec_obj13;
struct sNode* __dec_obj14;
_Bool _if_conditional29;
void* right_value82;
struct sNode* __dec_obj15;
struct sNode* __dec_obj16;
_Bool _if_conditional30;
void* right_value83;
struct sNode* __dec_obj17;
struct sNode* __dec_obj18;
void* right_value110;
struct sBlock* __dec_obj27;
struct sForNode* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value81 = (void*)0;
right_value82 = (void*)0;
right_value83 = (void*)0;
right_value110 = (void*)0;
    # 12 "11for.c"
    self->sline=info->sline;
    # 13 "11for.c"
    __dec_obj12=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value79=__builtin_string(info->sname))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 21 "11for.c"
    # 15 "11for.c"
    if(expression_node) {
        # 16 "11for.c"
        __dec_obj13=self->mExpressionNode;
        self->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value81=sNode_clone(expression_node))));
        if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count2(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0,0,0, (void*)0); }
        if(right_value81) { right_value81 = come_decrement_ref_count2(right_value81, ((struct sNode*)right_value81)->finalize, ((struct sNode*)right_value81)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    }
    else {
        # 19 "11for.c"
        __dec_obj14=self->mExpressionNode;
        self->mExpressionNode=((void*)0);
        if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count2(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0,0,0, (void*)0); }
    }
    # 27 "11for.c"
    # 21 "11for.c"
    if(expression_node2) {
        # 22 "11for.c"
        __dec_obj15=self->mExpressionNode2;
        self->mExpressionNode2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value82=sNode_clone(expression_node2))));
        if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count2(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0, (void*)0); }
        if(right_value82) { right_value82 = come_decrement_ref_count2(right_value82, ((struct sNode*)right_value82)->finalize, ((struct sNode*)right_value82)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    }
    else {
        # 25 "11for.c"
        __dec_obj16=self->mExpressionNode2;
        self->mExpressionNode2=((void*)0);
        if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count2(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0, (void*)0); }
    }
    # 33 "11for.c"
    # 27 "11for.c"
    if(expression_node3) {
        # 28 "11for.c"
        __dec_obj17=self->mExpressionNode3;
        self->mExpressionNode3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value83=sNode_clone(expression_node3))));
        if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count2(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0,0, (void*)0); }
        if(right_value83) { right_value83 = come_decrement_ref_count2(right_value83, ((struct sNode*)right_value83)->finalize, ((struct sNode*)right_value83)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    }
    else {
        # 31 "11for.c"
        __dec_obj18=self->mExpressionNode3;
        self->mExpressionNode3=((void*)0);
        if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count2(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0,0, (void*)0); }
    }
    # 33 "11for.c"
    __dec_obj27=self->mBlock;
    self->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value110=sBlock_clone(block))));
    come_call_finalizer3(__dec_obj27,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value110,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
    # 36 "11for.c"
    __result90__ = __result_obj__ = self;
    come_call_finalizer3(self,sForNode_finalize, 0, 0, 1, 0, (void*)0);
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(expression_node2) { expression_node2 = come_decrement_ref_count2(expression_node2, ((struct sNode*)expression_node2)->finalize, ((struct sNode*)expression_node2)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(expression_node3) { expression_node3 = come_decrement_ref_count2(expression_node3, ((struct sNode*)expression_node3)->finalize, ((struct sNode*)expression_node3)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result90__;
    come_call_finalizer3(self,sForNode_finalize, 0, 0, 1, 0, (void*)0);
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(expression_node2) { expression_node2 = come_decrement_ref_count2(expression_node2, ((struct sNode*)expression_node2)->finalize, ((struct sNode*)expression_node2)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(expression_node3) { expression_node3 = come_decrement_ref_count2(expression_node3, ((struct sNode*)expression_node3)->finalize, ((struct sNode*)expression_node3)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sForNode_terminated(struct sForNode* self){
void* __result_obj__;
_Bool __result91__;
memset(&__result_obj__, 0, sizeof(void*));
    # 38 "11for.c"
    __result91__ = (_Bool)1;
    return __result91__;
}

char* sForNode_kind(struct sForNode* self){
void* __result_obj__;
void* right_value111;
char* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value111 = (void*)0;
    # 43 "11for.c"
    __result92__ = __result_obj__ = ((char*)(right_value111=__builtin_string("sForNode")));
    right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result92__;
}

_Bool sForNode_compile(struct sForNode* self, struct sInfo* info){
void* __result_obj__;
_Bool in_loop_118;
struct sBlock* block_119;
struct sVarTable* lv_table_120;
void* right_value112;
void* right_value113;
struct sVarTable* for_var_table_121;
struct sNode* expression_node_122;
struct CVALUE* conditional_value_123;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool __result93__;
_Bool normal_if_124;
_Bool _if_conditional130;
_Bool _if_conditional131;
void* right_value114;
struct CVALUE* __dec_obj28;
void* right_value115;
struct CVALUE* __dec_obj29;
struct sNode* expression_node2_125;
struct CVALUE* conditional_value2_126;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool __result94__;
_Bool normal_if_127;
_Bool _if_conditional134;
_Bool _if_conditional135;
void* right_value116;
struct CVALUE* __dec_obj30;
static int num_for_condtionalA_128=0;
int num_for_conditionalA_stack_129;
void* right_value117;
struct CVALUE* __dec_obj31;
struct sNode* expression_node3_130;
struct CVALUE* conditional_value3_131;
_Bool _if_conditional136;
_Bool _if_conditional137;
_Bool __result95__;
_Bool normal_if_132;
_Bool _if_conditional138;
_Bool _if_conditional139;
void* right_value118;
struct CVALUE* conditional_value3_133;
void* right_value119;
struct CVALUE* conditional_value3_134;
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&in_loop_118, 0, sizeof(_Bool));
memset(&block_119, 0, sizeof(struct sBlock*));
memset(&lv_table_120, 0, sizeof(struct sVarTable*));
right_value112 = (void*)0;
right_value113 = (void*)0;
memset(&for_var_table_121, 0, sizeof(struct sVarTable*));
memset(&expression_node_122, 0, sizeof(struct sNode*));
memset(&conditional_value_123, 0, sizeof(struct CVALUE*));
memset(&normal_if_124, 0, sizeof(_Bool));
right_value114 = (void*)0;
right_value115 = (void*)0;
memset(&expression_node2_125, 0, sizeof(struct sNode*));
memset(&conditional_value2_126, 0, sizeof(struct CVALUE*));
memset(&normal_if_127, 0, sizeof(_Bool));
right_value116 = (void*)0;
memset(&num_for_conditionalA_stack_129, 0, sizeof(int));
right_value117 = (void*)0;
memset(&expression_node3_130, 0, sizeof(struct sNode*));
memset(&conditional_value3_131, 0, sizeof(struct CVALUE*));
memset(&normal_if_132, 0, sizeof(_Bool));
right_value118 = (void*)0;
memset(&conditional_value3_133, 0, sizeof(struct CVALUE*));
right_value119 = (void*)0;
memset(&conditional_value3_134, 0, sizeof(struct CVALUE*));
    # 48 "11for.c"
    in_loop_118=info->in_loop;
    # 49 "11for.c"
    info->in_loop=(_Bool)1;
    # 51 "11for.c"
    block_119=self->mBlock;
    # 53 "11for.c"
    lv_table_120=info->lv_table;
    # 54 "11for.c"
    for_var_table_121=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value113=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value112=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "11for.c", 54, "sVarTable")))),(_Bool)0,lv_table_120))));
    come_call_finalizer3(right_value112,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value113,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
    # 55 "11for.c"
    info->lv_table=for_var_table_121;
    # 57 "11for.c"
    add_come_code(info,"for(");
    # 60 "11for.c"
    expression_node_122=self->mExpressionNode;
    # 62 "11for.c"
    conditional_value_123=((void*)0);
    # 96 "11for.c"
    # 63 "11for.c"
    if(expression_node_122) {
        # 64 "11for.c"
        info->without_semicolon=(_Bool)1;
        # 69 "11for.c"
        # 65 "11for.c"
        if(_if_conditional127=!node_compile(expression_node_122,info),        _if_conditional127) {
            # 66 "11for.c"
            __result93__ = (_Bool)0;
            come_call_finalizer3(for_var_table_121,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(conditional_value_123,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result93__;
        }
        # 69 "11for.c"
        normal_if_124=(_Bool)1;
        # 74 "11for.c"
        # 70 "11for.c"
        if(_if_conditional130=existance_free_right_value_objects(info),        _if_conditional130) {
            # 71 "11for.c"
            normal_if_124=(_Bool)0;
        }
        # 90 "11for.c"
        # 74 "11for.c"
        if(normal_if_124) {
            # 75 "11for.c"
            __dec_obj28=conditional_value_123;
            conditional_value_123=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value114=get_value_from_stack(-1,info))));
            come_call_finalizer3(__dec_obj28,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value114,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            # 76 "11for.c"
            dec_stack_ptr(1,info);
            # 77 "11for.c"
            add_come_code(info,"%s;",conditional_value_123->c_value);
        }
        else {
            # 80 "11for.c"
            info->without_semicolon=(_Bool)0;
            # 81 "11for.c"
            add_last_code_to_source_with_comma(info);
            # 83 "11for.c"
            __dec_obj29=conditional_value_123;
            conditional_value_123=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value115=get_value_from_stack(-1,info))));
            come_call_finalizer3(__dec_obj29,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value115,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            # 84 "11for.c"
            dec_stack_ptr(1,info);
            # 86 "11for.c"
            free_right_value_objects(info,(_Bool)1);
            # 88 "11for.c"
            add_come_code(info,"0;");
        }
    }
    else {
        # 92 "11for.c"
        add_come_code(info,";");
    }
    # 96 "11for.c"
    expression_node2_125=self->mExpressionNode2;
    # 98 "11for.c"
    conditional_value2_126=((void*)0);
    # 138 "11for.c"
    # 99 "11for.c"
    if(expression_node2_125) {
        # 100 "11for.c"
        info->without_semicolon=(_Bool)1;
        # 104 "11for.c"
        # 101 "11for.c"
        if(_if_conditional133=!node_compile(expression_node2_125,info),        _if_conditional133) {
            # 102 "11for.c"
            __result94__ = (_Bool)0;
            come_call_finalizer3(for_var_table_121,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(conditional_value_123,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(conditional_value2_126,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result94__;
        }
        # 104 "11for.c"
        info->without_semicolon=(_Bool)0;
        # 106 "11for.c"
        normal_if_127=(_Bool)1;
        # 111 "11for.c"
        # 107 "11for.c"
        if(_if_conditional134=existance_free_right_value_objects(info),        _if_conditional134) {
            # 108 "11for.c"
            normal_if_127=(_Bool)0;
        }
        # 133 "11for.c"
        # 111 "11for.c"
        if(normal_if_127) {
            # 112 "11for.c"
            __dec_obj30=conditional_value2_126;
            conditional_value2_126=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value116=get_value_from_stack(-1,info))));
            come_call_finalizer3(__dec_obj30,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value116,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            # 113 "11for.c"
            dec_stack_ptr(1,info);
            # 115 "11for.c"
            add_come_code(info,"%s;",conditional_value2_126->c_value);
        }
        else {
            # 118 "11for.c"
            # 119 "11for.c"
            add_come_code_at_function_head(info,"_Bool _for_condtionalA%d;\n",++num_for_condtionalA_128);
            # 120 "11for.c"
            num_for_conditionalA_stack_129=num_for_condtionalA_128;
            # 122 "11for.c"
            __dec_obj31=conditional_value2_126;
            conditional_value2_126=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value117=get_value_from_stack(-1,info))));
            come_call_finalizer3(__dec_obj31,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value117,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            # 123 "11for.c"
            dec_stack_ptr(1,info);
            # 125 "11for.c"
            add_come_code(info,"_for_condtionalA%d=%s, ",num_for_condtionalA_128,conditional_value2_126->c_value);
            # 127 "11for.c"
            add_last_code_to_source_with_comma(info);
            # 129 "11for.c"
            free_right_value_objects(info,(_Bool)1);
            # 131 "11for.c"
            add_come_code(info,"_for_condtionalA%d;",num_for_conditionalA_stack_129);
        }
    }
    else {
        # 135 "11for.c"
        add_come_code(info,";");
    }
    # 138 "11for.c"
    expression_node3_130=self->mExpressionNode3;
    # 140 "11for.c"
    # 170 "11for.c"
    # 141 "11for.c"
    if(expression_node3_130) {
        # 142 "11for.c"
        info->without_semicolon=(_Bool)1;
        # 146 "11for.c"
        # 143 "11for.c"
        if(_if_conditional137=!node_compile(expression_node3_130,info),        _if_conditional137) {
            # 144 "11for.c"
            __result95__ = (_Bool)0;
            come_call_finalizer3(for_var_table_121,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(conditional_value_123,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(conditional_value2_126,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(conditional_value3_131,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result95__;
        }
        # 146 "11for.c"
        info->without_semicolon=(_Bool)0;
        # 148 "11for.c"
        normal_if_132=(_Bool)1;
        # 153 "11for.c"
        # 149 "11for.c"
        if(_if_conditional138=existance_free_right_value_objects(info),        _if_conditional138) {
            # 150 "11for.c"
            normal_if_132=(_Bool)0;
        }
        # 168 "11for.c"
        # 153 "11for.c"
        if(normal_if_132) {
            # 154 "11for.c"
            conditional_value3_133=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value118=get_value_from_stack(-1,info))));
            come_call_finalizer3(right_value118,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            # 155 "11for.c"
            dec_stack_ptr(1,info);
            # 156 "11for.c"
            add_come_code(info,"%s",conditional_value3_133->c_value);
            come_call_finalizer3(conditional_value3_133,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 159 "11for.c"
            add_last_code_to_source_with_comma(info);
            # 161 "11for.c"
            conditional_value3_134=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value119=get_value_from_stack(-1,info))));
            come_call_finalizer3(right_value119,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            # 162 "11for.c"
            dec_stack_ptr(1,info);
            # 164 "11for.c"
            free_right_value_objects(info,(_Bool)1);
            # 166 "11for.c"
            add_come_code(info,"0");
            come_call_finalizer3(conditional_value3_134,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    # 170 "11for.c"
    add_come_code(info,"){\n");
    # 172 "11for.c"
    transpile_block(block_119,((void*)0),((void*)0),info,(_Bool)0,(_Bool)1);
    # 174 "11for.c"
    add_come_code(info,"}\n");
    # 176 "11for.c"
    free_objects(for_var_table_121,((void*)0),info);
    # 178 "11for.c"
    transpiler_clear_last_code(info);
    # 179 "11for.c"
    info->lv_table=lv_table_120;
    # 181 "11for.c"
    info->in_loop=in_loop_118;
    # 183 "11for.c"
    __result96__ = (_Bool)1;
    come_call_finalizer3(for_var_table_121,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(conditional_value_123,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(conditional_value2_126,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(conditional_value3_131,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result96__;
    come_call_finalizer3(for_var_table_121,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(conditional_value_123,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(conditional_value2_126,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(conditional_value3_131,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional20;
struct sNode* __result52__;
void* right_value80;
struct sNode* result_47;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
struct sNode* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
memset(&result_47, 0, sizeof(struct sNode*));
            # 3 "sNode_clone"
            # 2 "sNode_clone"
            if(_if_conditional20=self==(void*)0,            _if_conditional20) {
                # 2 "sNode_clone"
                __result52__ = __result_obj__ = (void*)0;
                return __result52__;
            }
            # 3 "sNode_clone"
            result_47=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value80=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
            if(right_value80) { right_value80 = come_decrement_ref_count2(right_value80, ((struct sNode*)right_value80)->finalize, ((struct sNode*)right_value80)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 5 "sNode_clone"
            # 4 "sNode_clone"
            if(_if_conditional21=self!=((void*)0)&&self->clone!=((void*)0),            _if_conditional21) {
                # 4 "sNode_clone"
                result_47->_protocol_obj=self->clone(self->_protocol_obj);
            }
            # 6 "sNode_clone"
            # 5 "sNode_clone"
            if(_if_conditional22=self!=((void*)0),            _if_conditional22) {
                # 5 "sNode_clone"
                result_47->finalize=self->finalize;
            }
            # 7 "sNode_clone"
            # 6 "sNode_clone"
            if(_if_conditional23=self!=((void*)0),            _if_conditional23) {
                # 6 "sNode_clone"
                result_47->clone=self->clone;
            }
            # 8 "sNode_clone"
            # 7 "sNode_clone"
            if(_if_conditional24=self!=((void*)0),            _if_conditional24) {
                # 7 "sNode_clone"
                result_47->compile=self->compile;
            }
            # 9 "sNode_clone"
            # 8 "sNode_clone"
            if(_if_conditional25=self!=((void*)0),            _if_conditional25) {
                # 8 "sNode_clone"
                result_47->sline=self->sline;
            }
            # 10 "sNode_clone"
            # 9 "sNode_clone"
            if(_if_conditional26=self!=((void*)0),            _if_conditional26) {
                # 9 "sNode_clone"
                result_47->sname=self->sname;
            }
            # 11 "sNode_clone"
            # 10 "sNode_clone"
            if(_if_conditional27=self!=((void*)0),            _if_conditional27) {
                # 10 "sNode_clone"
                result_47->terminated=self->terminated;
            }
            # 12 "sNode_clone"
            # 11 "sNode_clone"
            if(_if_conditional28=self!=((void*)0),            _if_conditional28) {
                # 11 "sNode_clone"
                result_47->kind=self->kind;
            }
            # 12 "sNode_clone"
            __result53__ = __result_obj__ = result_47;
            if(result_47) { result_47 = come_decrement_ref_count2(result_47, ((struct sNode*)result_47)->finalize, ((struct sNode*)result_47)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result53__;
            if(result_47) { result_47 = come_decrement_ref_count2(result_47, ((struct sNode*)result_47)->finalize, ((struct sNode*)result_47)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional31;
struct sBlock* __result54__;
void* right_value84;
struct sBlock* result_48;
_Bool _if_conditional35;
void* right_value91;
struct list$1sNodeph* __dec_obj22;
_Bool _if_conditional39;
void* right_value109;
struct sVarTable* __dec_obj26;
struct sBlock* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
right_value84 = (void*)0;
memset(&result_48, 0, sizeof(struct sBlock*));
right_value91 = (void*)0;
right_value109 = (void*)0;
        # 3 "sBlock_clone"
        # 2 "sBlock_clone"
        if(_if_conditional31=self==(void*)0,        _if_conditional31) {
            # 2 "sBlock_clone"
            __result54__ = __result_obj__ = (void*)0;
            return __result54__;
        }
        # 3 "sBlock_clone"
        result_48=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value84=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"))));
        come_call_finalizer3(right_value84,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        # 5 "sBlock_clone"
        # 4 "sBlock_clone"
        if(_if_conditional35=self!=((void*)0)&&self->mNodes!=((void*)0),        _if_conditional35) {
            # 4 "sBlock_clone"
            __dec_obj22=result_48->mNodes;
            result_48->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value91=list$1sNodephp_clone(self->mNodes))));
            come_call_finalizer3(__dec_obj22,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value91,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 6 "sBlock_clone"
        # 5 "sBlock_clone"
        if(_if_conditional39=self!=((void*)0)&&self->mVarTable!=((void*)0),        _if_conditional39) {
            # 5 "sBlock_clone"
            __dec_obj26=result_48->mVarTable;
            result_48->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value109=sVarTable_clone(self->mVarTable))));
            come_call_finalizer3(__dec_obj26,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value109,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 6 "sBlock_clone"
        __result89__ = __result_obj__ = result_48;
        come_call_finalizer3(result_48,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        return __result89__;
        come_call_finalizer3(result_48,sBlock_finalize, 0, 0, 0, 0, (void*)0);
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional32;
_Bool _if_conditional34;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sBlock_finalize"
            # 0 "sBlock_finalize"
            if(_if_conditional32=self!=((void*)0)&&self->mNodes!=((void*)0),            _if_conditional32) {
                # 0 "sBlock_finalize"
                come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 2 "sBlock_finalize"
            # 1 "sBlock_finalize"
            if(_if_conditional34=self!=((void*)0)&&self->mVarTable!=((void*)0),            _if_conditional34) {
                # 1 "sBlock_finalize"
                come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_49;
_Bool _while_condtional7;
struct list_item$1sNodeph* prev_it_50;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_49, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_50, 0, sizeof(struct list_item$1sNodeph*));
                    # 114 "./neo-c.h"
                    it_49=self->head;
                    # 120 "./neo-c.h"
                    while(_while_condtional7=it_49!=((void*)0),                    _while_condtional7) {
                        # 116 "./neo-c.h"
                        prev_it_50=it_49;
                        # 117 "./neo-c.h"
                        it_49=it_49->next;
                        # 118 "./neo-c.h"
                        come_call_finalizer3(prev_it_50,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional33;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1sNodephp_finalize"
                            # 0 "list_item$1sNodephp_finalize"
                            if(_if_conditional33=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional33) {
                                # 0 "list_item$1sNodephp_finalize"
                                if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional36;
struct list$1sNodeph* __result55__;
void* right_value85;
void* right_value86;
struct list$1sNodeph* result_51;
struct list_item$1sNodeph* it_52;
_Bool _while_condtional8;
void* right_value90;
struct list$1sNodeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value85 = (void*)0;
right_value86 = (void*)0;
memset(&result_51, 0, sizeof(struct list$1sNodeph*));
memset(&it_52, 0, sizeof(struct list_item$1sNodeph*));
right_value90 = (void*)0;
                # 133 "./neo-c.h"
                # 130 "./neo-c.h"
                if(_if_conditional36=self==((void*)0),                _if_conditional36) {
                    # 131 "./neo-c.h"
                    __result55__ = __result_obj__ = ((void*)0);
                    return __result55__;
                }
                # 133 "./neo-c.h"
                result_51=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value86=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value85=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 133, "list$1sNodeph"))))))));
                come_call_finalizer3(right_value85,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value86,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                # 135 "./neo-c.h"
                it_52=self->head;
                # 142 "./neo-c.h"
                while(_while_condtional8=it_52!=((void*)0),                _while_condtional8) {
                    # 137 "./neo-c.h"
                    list$1sNodeph_add(result_51,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value90=sNode_clone(it_52->item)))));
                    if(right_value90) { right_value90 = come_decrement_ref_count2(right_value90, ((struct sNode*)right_value90)->finalize, ((struct sNode*)right_value90)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 139 "./neo-c.h"
                    it_52=it_52->next;
                }
                # 142 "./neo-c.h"
                __result58__ = __result_obj__ = result_51;
                come_call_finalizer3(result_51,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result58__;
                come_call_finalizer3(result_51,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 95 "./neo-c.h"
                    self->head=((void*)0);
                    # 96 "./neo-c.h"
                    self->tail=((void*)0);
                    # 97 "./neo-c.h"
                    self->len=0;
                    # 99 "./neo-c.h"
                    __result56__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result56__;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional37;
void* right_value87;
struct list_item$1sNodeph* litem_53;
struct sNode* __dec_obj19;
_Bool _if_conditional38;
void* right_value88;
struct list_item$1sNodeph* litem_54;
struct sNode* __dec_obj20;
void* right_value89;
struct list_item$1sNodeph* litem_55;
struct sNode* __dec_obj21;
struct list$1sNodeph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
right_value87 = (void*)0;
memset(&litem_53, 0, sizeof(struct list_item$1sNodeph*));
right_value88 = (void*)0;
memset(&litem_54, 0, sizeof(struct list_item$1sNodeph*));
right_value89 = (void*)0;
memset(&litem_55, 0, sizeof(struct list_item$1sNodeph*));
                        # 177 "./neo-c.h"
                        # 146 "./neo-c.h"
                        if(_if_conditional37=self->len==0,                        _if_conditional37) {
                            # 147 "./neo-c.h"
                            litem_53=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value87=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 147, "list_item$1sNodeph"))));
                            come_call_finalizer3(right_value87,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 149 "./neo-c.h"
                            litem_53->prev=((void*)0);
                            # 150 "./neo-c.h"
                            litem_53->next=((void*)0);
                            # 151 "./neo-c.h"
                            __dec_obj19=litem_53->item;
                            litem_53->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count2(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0,0, (void*)0); }
                            # 153 "./neo-c.h"
                            self->tail=litem_53;
                            # 154 "./neo-c.h"
                            self->head=litem_53;
                        }
                        else {
                            # 177 "./neo-c.h"
                            # 156 "./neo-c.h"
                            if(_if_conditional38=self->len==1,                            _if_conditional38) {
                                # 157 "./neo-c.h"
                                litem_54=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value88=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 157, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value88,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 159 "./neo-c.h"
                                litem_54->prev=self->head;
                                # 160 "./neo-c.h"
                                litem_54->next=((void*)0);
                                # 161 "./neo-c.h"
                                __dec_obj20=litem_54->item;
                                litem_54->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count2(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0,0, (void*)0); }
                                # 163 "./neo-c.h"
                                self->tail=litem_54;
                                # 164 "./neo-c.h"
                                self->head->next=litem_54;
                            }
                            else {
                                # 167 "./neo-c.h"
                                litem_55=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value89=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 167, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value89,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 169 "./neo-c.h"
                                litem_55->prev=self->tail;
                                # 170 "./neo-c.h"
                                litem_55->next=((void*)0);
                                # 171 "./neo-c.h"
                                __dec_obj21=litem_55->item;
                                litem_55->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
                                # 173 "./neo-c.h"
                                self->tail->next=litem_55;
                                # 174 "./neo-c.h"
                                self->tail=litem_55;
                            }
                        }
                        # 177 "./neo-c.h"
                        self->len++;
                        # 179 "./neo-c.h"
                        __result57__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result57__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_56;
_Bool _while_condtional9;
struct list_item$1sNodeph* prev_it_57;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_56, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_57, 0, sizeof(struct list_item$1sNodeph*));
                # 114 "./neo-c.h"
                it_56=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional9=it_56!=((void*)0),                _while_condtional9) {
                    # 116 "./neo-c.h"
                    prev_it_57=it_56;
                    # 117 "./neo-c.h"
                    it_56=it_56->next;
                    # 118 "./neo-c.h"
                    come_call_finalizer3(prev_it_57,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool _if_conditional40;
struct sVarTable* __result59__;
void* right_value92;
struct sVarTable* result_58;
_Bool _if_conditional41;
void* right_value108;
struct map$2charphsVarph* __dec_obj25;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
struct sVarTable* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value92 = (void*)0;
memset(&result_58, 0, sizeof(struct sVarTable*));
right_value108 = (void*)0;
                # 3 "sVarTable_clone"
                # 2 "sVarTable_clone"
                if(_if_conditional40=self==(void*)0,                _if_conditional40) {
                    # 2 "sVarTable_clone"
                    __result59__ = __result_obj__ = (void*)0;
                    return __result59__;
                }
                # 3 "sVarTable_clone"
                result_58=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value92=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"))));
                come_call_finalizer3(right_value92,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                # 5 "sVarTable_clone"
                # 4 "sVarTable_clone"
                if(_if_conditional41=self!=((void*)0)&&self->mVars!=((void*)0),                _if_conditional41) {
                    # 4 "sVarTable_clone"
                    __dec_obj25=result_58->mVars;
                    result_58->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value108=map$2charphsVarphp_clone(self->mVars))));
                    come_call_finalizer3(__dec_obj25,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value108,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                # 6 "sVarTable_clone"
                # 5 "sVarTable_clone"
                if(_if_conditional118=self!=((void*)0),                _if_conditional118) {
                    # 5 "sVarTable_clone"
                    result_58->mGlobal=self->mGlobal;
                }
                # 7 "sVarTable_clone"
                # 6 "sVarTable_clone"
                if(_if_conditional119=self!=((void*)0),                _if_conditional119) {
                    # 6 "sVarTable_clone"
                    result_58->mParent=self->mParent;
                }
                # 8 "sVarTable_clone"
                # 7 "sVarTable_clone"
                if(_if_conditional120=self!=((void*)0),                _if_conditional120) {
                    # 7 "sVarTable_clone"
                    result_58->mID=self->mID;
                }
                # 8 "sVarTable_clone"
                __result88__ = __result_obj__ = result_58;
                come_call_finalizer3(result_58,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
                return __result88__;
                come_call_finalizer3(result_58,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional42;
struct map$2charphsVarph* __result60__;
void* right_value93;
void* right_value99;
struct map$2charphsVarph* result_68;
void* right_value100;
void* right_value101;
struct list$1charp* __dec_obj24;
char* it_71;
struct sVar* default_value_74;
struct sVar* it2_77;
struct map$2charphsVarph* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
right_value99 = (void*)0;
memset(&result_68, 0, sizeof(struct map$2charphsVarph*));
right_value100 = (void*)0;
right_value101 = (void*)0;
memset(&it_71, 0, sizeof(char*));
memset(&default_value_74, 0, sizeof(struct sVar*));
memset(&it2_77, 0, sizeof(struct sVar*));
                        # 1156 "./neo-c.h"
                        # 1152 "./neo-c.h"
                        if(_if_conditional42=self==((void*)0),                        _if_conditional42) {
                            # 1153 "./neo-c.h"
                            __result60__ = __result_obj__ = ((void*)0);
                            return __result60__;
                        }
                        # 1156 "./neo-c.h"
                        result_68=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value99=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value93=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./neo-c.h", 1156, "map$2charphsVarph"))))))));
                        come_call_finalizer3(right_value93,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value99,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 1158 "./neo-c.h"
                        __dec_obj24=result_68->key_list;
                        result_68->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value101=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value100=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1158, "list$1charp"))))))));
                        come_call_finalizer3(__dec_obj24,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value100,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value101,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 1169 "./neo-c.h"
                        for(                        it_71=map$2charphsVarph_begin(self);                        !map$2charphsVarph_end(self);                        it_71=map$2charphsVarph_next(self)                        ){
                            # 1161 "./neo-c.h"
                            # 1162 "./neo-c.h"
                            memset(&default_value_74,0,sizeof(struct sVar*));
                            # 1164 "./neo-c.h"
                            it2_77=map$2charphsVarph_at(self,it_71,default_value_74);
                            # 1166 "./neo-c.h"
                            map$2charphsVarph_insert2(result_68,it_71,it2_77);
                        }
                        # 1169 "./neo-c.h"
                        __result87__ = __result_obj__ = result_68;
                        come_call_finalizer3(result_68,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result87__;
                        come_call_finalizer3(result_68,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
void* right_value94;
void* right_value95;
void* right_value96;
int i_63;
void* right_value97;
void* right_value98;
struct list$1charp* __dec_obj23;
struct map$2charphsVarph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
right_value95 = (void*)0;
right_value96 = (void*)0;
memset(&i_63, 0, sizeof(int));
right_value97 = (void*)0;
right_value98 = (void*)0;
                            # 1062 "./neo-c.h"
                            self->keys=(char**)come_increment_ref_count(((char**)(right_value94=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1062, "char*%"))));
                            right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1063 "./neo-c.h"
                            self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value95=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./neo-c.h", 1063, "sVar*%"))));
                            come_call_finalizer3(right_value95,sVar_finalize, 0, 1, 0, 0, __result_obj__);
                            # 1064 "./neo-c.h"
                            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value96=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1064, "bool"))));
                            right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1071 "./neo-c.h"
                            for(                            i_63=0;                            i_63<128;                            i_63++                            ){
                                # 1068 "./neo-c.h"
                                self->item_existance[i_63]=(_Bool)0;
                            }
                            # 1071 "./neo-c.h"
                            self->size=128;
                            # 1072 "./neo-c.h"
                            self->len=0;
                            # 1074 "./neo-c.h"
                            __dec_obj23=self->key_list;
                            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value98=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value97=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1074, "list$1charp"))))))));
                            come_call_finalizer3(__dec_obj23,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value97,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value98,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 1076 "./neo-c.h"
                            self->it=0;
                            # 1078 "./neo-c.h"
                            __result62__ = __result_obj__ = self;
                            come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
                            return __result62__;
                            come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional62;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sVar_finalize"
                                # 0 "sVar_finalize"
                                if(_if_conditional43=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional43) {
                                    # 0 "sVar_finalize"
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sVar_finalize"
                                # 1 "sVar_finalize"
                                if(_if_conditional44=self!=((void*)0)&&self->mCValueName!=((void*)0),                                _if_conditional44) {
                                    # 1 "sVar_finalize"
                                    self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 3 "sVar_finalize"
                                # 2 "sVar_finalize"
                                if(_if_conditional45=self!=((void*)0)&&self->mType!=((void*)0),                                _if_conditional45) {
                                    # 2 "sVar_finalize"
                                    come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 4 "sVar_finalize"
                                # 3 "sVar_finalize"
                                if(_if_conditional62=self!=((void*)0)&&self->mFunName!=((void*)0),                                _if_conditional62) {
                                    # 3 "sVar_finalize"
                                    self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional46;
_Bool _if_conditional48;
_Bool _if_conditional50;
_Bool _if_conditional51;
_Bool _if_conditional52;
_Bool _if_conditional53;
_Bool _if_conditional54;
_Bool _if_conditional55;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "sType_finalize"
                                        # 0 "sType_finalize"
                                        if(_if_conditional46=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                        _if_conditional46) {
                                            # 0 "sType_finalize"
                                            come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "sType_finalize"
                                        # 1 "sType_finalize"
                                        if(_if_conditional48=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                        _if_conditional48) {
                                            # 1 "sType_finalize"
                                            come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 3 "sType_finalize"
                                        # 2 "sType_finalize"
                                        if(_if_conditional50=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                        _if_conditional50) {
                                            # 2 "sType_finalize"
                                            come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 4 "sType_finalize"
                                        # 3 "sType_finalize"
                                        if(_if_conditional51=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                        _if_conditional51) {
                                            # 3 "sType_finalize"
                                            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        # 5 "sType_finalize"
                                        # 4 "sType_finalize"
                                        if(_if_conditional52=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                        _if_conditional52) {
                                            # 4 "sType_finalize"
                                            come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 6 "sType_finalize"
                                        # 5 "sType_finalize"
                                        if(_if_conditional53=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                        _if_conditional53) {
                                            # 5 "sType_finalize"
                                            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 7 "sType_finalize"
                                        # 6 "sType_finalize"
                                        if(_if_conditional54=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                        _if_conditional54) {
                                            # 6 "sType_finalize"
                                            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 8 "sType_finalize"
                                        # 7 "sType_finalize"
                                        if(_if_conditional55=self!=((void*)0)&&self->mParamNames!=((void*)0),                                        _if_conditional55) {
                                            # 7 "sType_finalize"
                                            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 9 "sType_finalize"
                                        # 8 "sType_finalize"
                                        if(_if_conditional57=self!=((void*)0)&&self->mResultType!=((void*)0),                                        _if_conditional57) {
                                            # 8 "sType_finalize"
                                            come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 10 "sType_finalize"
                                        # 9 "sType_finalize"
                                        if(_if_conditional58=self!=((void*)0)&&self->mAlignas!=((void*)0),                                        _if_conditional58) {
                                            # 9 "sType_finalize"
                                            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        # 11 "sType_finalize"
                                        # 10 "sType_finalize"
                                        if(_if_conditional59=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                        _if_conditional59) {
                                            # 10 "sType_finalize"
                                            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        # 12 "sType_finalize"
                                        # 11 "sType_finalize"
                                        if(_if_conditional60=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                        _if_conditional60) {
                                            # 11 "sType_finalize"
                                            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        # 13 "sType_finalize"
                                        # 12 "sType_finalize"
                                        if(_if_conditional61=self!=((void*)0)&&self->mAsmName!=((void*)0),                                        _if_conditional61) {
                                            # 12 "sType_finalize"
                                            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_59;
_Bool _while_condtional10;
struct list_item$1sTypeph* prev_it_60;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_59, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_60, 0, sizeof(struct list_item$1sTypeph*));
                                                # 114 "./neo-c.h"
                                                it_59=self->head;
                                                # 120 "./neo-c.h"
                                                while(_while_condtional10=it_59!=((void*)0),                                                _while_condtional10) {
                                                    # 116 "./neo-c.h"
                                                    prev_it_60=it_59;
                                                    # 117 "./neo-c.h"
                                                    it_59=it_59->next;
                                                    # 118 "./neo-c.h"
                                                    come_call_finalizer3(prev_it_60,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional47;
memset(&__result_obj__, 0, sizeof(void*));
                                                        # 1 "list_item$1sTypephp_finalize"
                                                        # 0 "list_item$1sTypephp_finalize"
                                                        if(_if_conditional47=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional47) {
                                                            # 0 "list_item$1sTypephp_finalize"
                                                            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional49;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "tuple1$1sTypephp_finalize"
                                                # 0 "tuple1$1sTypephp_finalize"
                                                if(_if_conditional49=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional49) {
                                                    # 0 "tuple1$1sTypephp_finalize"
                                                    come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_61;
_Bool _while_condtional11;
struct list_item$1charph* prev_it_62;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_61, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_62, 0, sizeof(struct list_item$1charph*));
                                                # 114 "./neo-c.h"
                                                it_61=self->head;
                                                # 120 "./neo-c.h"
                                                while(_while_condtional11=it_61!=((void*)0),                                                _while_condtional11) {
                                                    # 116 "./neo-c.h"
                                                    prev_it_62=it_61;
                                                    # 117 "./neo-c.h"
                                                    it_61=it_61->next;
                                                    # 118 "./neo-c.h"
                                                    come_call_finalizer3(prev_it_62,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional56;
memset(&__result_obj__, 0, sizeof(void*));
                                                        # 1 "list_item$1charphp_finalize"
                                                        # 0 "list_item$1charphp_finalize"
                                                        if(_if_conditional56=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional56) {
                                                            # 0 "list_item$1charphp_finalize"
                                                            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
                                # 95 "./neo-c.h"
                                self->head=((void*)0);
                                # 96 "./neo-c.h"
                                self->tail=((void*)0);
                                # 97 "./neo-c.h"
                                self->len=0;
                                # 99 "./neo-c.h"
                                __result61__ = __result_obj__ = self;
                                come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
                                return __result61__;
                                come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_64;
_Bool _while_condtional12;
struct list_item$1charp* prev_it_65;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_64, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_65, 0, sizeof(struct list_item$1charp*));
                                    # 114 "./neo-c.h"
                                    it_64=self->head;
                                    # 120 "./neo-c.h"
                                    while(_while_condtional12=it_64!=((void*)0),                                    _while_condtional12) {
                                        # 116 "./neo-c.h"
                                        prev_it_65=it_64;
                                        # 117 "./neo-c.h"
                                        it_64=it_64->next;
                                        # 118 "./neo-c.h"
                                        come_call_finalizer3(prev_it_65,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_66;
_Bool _if_conditional63;
_Bool _if_conditional64;
int i_67;
_Bool _if_conditional65;
_Bool _if_conditional66;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_66, 0, sizeof(int));
memset(&i_67, 0, sizeof(int));
                                # 1112 "./neo-c.h"
                                for(                                i_66=0;                                i_66<self->size;                                i_66++                                ){
                                    # 1111 "./neo-c.h"
                                    # 1106 "./neo-c.h"
                                    if(_if_conditional63=self->item_existance[i_66],                                    _if_conditional63) {
                                        # 1110 "./neo-c.h"
                                        # 1107 "./neo-c.h"
                                        if(_if_conditional64=1,                                        _if_conditional64) {
                                            # 1108 "./neo-c.h"
                                            come_call_finalizer3(self->items[i_66],sVar_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                }
                                # 1112 "./neo-c.h"
                                come_free((char*)self->items);
                                # 1121 "./neo-c.h"
                                for(                                i_67=0;                                i_67<self->size;                                i_67++                                ){
                                    # 1120 "./neo-c.h"
                                    # 1115 "./neo-c.h"
                                    if(_if_conditional65=self->item_existance[i_67],                                    _if_conditional65) {
                                        # 1119 "./neo-c.h"
                                        # 1116 "./neo-c.h"
                                        if(_if_conditional66=1,                                        _if_conditional66) {
                                            # 1117 "./neo-c.h"
                                            self->keys[i_67] = come_decrement_ref_count2(self->keys[i_67], (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional67;
char* result_69;
char* __result63__;
_Bool _if_conditional68;
char* __result64__;
char* result_70;
char* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_69, 0, sizeof(char*));
memset(&result_70, 0, sizeof(char*));
                            # 1279 "./neo-c.h"
                            # 1274 "./neo-c.h"
                            if(_if_conditional67=self==((void*)0),                            _if_conditional67) {
                                # 1275 "./neo-c.h"
                                # 1276 "./neo-c.h"
                                memset(&result_69,0,sizeof(char*));
                                # 1277 "./neo-c.h"
                                __result63__ = __result_obj__ = result_69;
                                return __result63__;
                            }
                            # 1279 "./neo-c.h"
                            self->key_list->it=self->key_list->head;
                            # 1285 "./neo-c.h"
                            # 1281 "./neo-c.h"
                            if(self->key_list->it) {
                                # 1282 "./neo-c.h"
                                __result64__ = __result_obj__ = self->key_list->it->item;
                                return __result64__;
                            }
                            # 1285 "./neo-c.h"
                            # 1286 "./neo-c.h"
                            memset(&result_70,0,sizeof(char*));
                            # 1287 "./neo-c.h"
                            __result65__ = __result_obj__ = result_70;
                            return __result65__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result66__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1308 "./neo-c.h"
                            __result66__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                            return __result66__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional69;
char* result_72;
char* __result67__;
_Bool _if_conditional70;
char* __result68__;
char* result_73;
char* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_72, 0, sizeof(char*));
memset(&result_73, 0, sizeof(char*));
                            # 1296 "./neo-c.h"
                            # 1291 "./neo-c.h"
                            if(_if_conditional69=self==((void*)0)||self->key_list->it==((void*)0),                            _if_conditional69) {
                                # 1292 "./neo-c.h"
                                # 1293 "./neo-c.h"
                                memset(&result_72,0,sizeof(char*));
                                # 1294 "./neo-c.h"
                                __result67__ = __result_obj__ = result_72;
                                return __result67__;
                            }
                            # 1296 "./neo-c.h"
                            self->key_list->it=self->key_list->it->next;
                            # 1302 "./neo-c.h"
                            # 1298 "./neo-c.h"
                            if(self->key_list->it) {
                                # 1299 "./neo-c.h"
                                __result68__ = __result_obj__ = self->key_list->it->item;
                                return __result68__;
                            }
                            # 1302 "./neo-c.h"
                            # 1303 "./neo-c.h"
                            memset(&result_73,0,sizeof(char*));
                            # 1304 "./neo-c.h"
                            __result69__ = __result_obj__ = result_73;
                            return __result69__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_75;
unsigned int it_76;
_Bool _while_condtional13;
_Bool _if_conditional71;
_Bool _if_conditional72;
struct sVar* __result70__;
_Bool _if_conditional73;
_Bool _if_conditional74;
struct sVar* __result71__;
struct sVar* __result72__;
struct sVar* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_75, 0, sizeof(unsigned int));
memset(&it_76, 0, sizeof(unsigned int));
                                # 1201 "./neo-c.h"
                                hash_75=string_get_hash_key(((char*)key))%self->size;
                                # 1202 "./neo-c.h"
                                it_76=hash_75;
                                # 1226 "./neo-c.h"
                                while(_while_condtional13=(_Bool)1,                                _while_condtional13) {
                                    # 1224 "./neo-c.h"
                                    # 1205 "./neo-c.h"
                                    if(_if_conditional71=self->item_existance[it_76],                                    _if_conditional71) {
                                        # 1212 "./neo-c.h"
                                        # 1207 "./neo-c.h"
                                        if(_if_conditional72=string_equals(self->keys[it_76],key),                                        _if_conditional72) {
                                            # 1209 "./neo-c.h"
                                            __result70__ = __result_obj__ = self->items[it_76];
                                            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result70__;
                                        }
                                        # 1212 "./neo-c.h"
                                        it_76++;
                                        # 1220 "./neo-c.h"
                                        # 1214 "./neo-c.h"
                                        if(_if_conditional73=it_76>=self->size,                                        _if_conditional73) {
                                            # 1215 "./neo-c.h"
                                            it_76=0;
                                        }
                                        else {
                                            # 1220 "./neo-c.h"
                                            # 1217 "./neo-c.h"
                                            if(_if_conditional74=it_76==hash_75,                                            _if_conditional74) {
                                                # 1218 "./neo-c.h"
                                                __result71__ = __result_obj__ = default_value;
                                                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result71__;
                                            }
                                        }
                                    }
                                    else {
                                        # 1222 "./neo-c.h"
                                        __result72__ = __result_obj__ = default_value;
                                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result72__;
                                    }
                                }
                                # 1226 "./neo-c.h"
                                __result73__ = __result_obj__ = default_value;
                                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                return __result73__;
                                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool _if_conditional75;
unsigned int hash_89;
int it_90;
_Bool _while_condtional15;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool same_key_exist_107;
char* it2_110;
_Bool _if_conditional110;
_Bool _if_conditional111;
struct map$2charphsVarph* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_89, 0, sizeof(unsigned int));
memset(&it_90, 0, sizeof(int));
memset(&same_key_exist_107, 0, sizeof(_Bool));
memset(&it2_110, 0, sizeof(char*));
                                # 1445 "./neo-c.h"
                                # 1442 "./neo-c.h"
                                if(_if_conditional75=self->len*2>=self->size,                                _if_conditional75) {
                                    # 1443 "./neo-c.h"
                                    map$2charphsVarph_rehash(self);
                                }
                                # 1445 "./neo-c.h"
                                hash_89=string_get_hash_key(key)%self->size;
                                # 1446 "./neo-c.h"
                                it_90=hash_89;
                                # 1504 "./neo-c.h"
                                while(_while_condtional15=(_Bool)1,                                _while_condtional15) {
                                    # 1502 "./neo-c.h"
                                    # 1449 "./neo-c.h"
                                    if(_if_conditional79=self->item_existance[it_90],                                    _if_conditional79) {
                                        # 1472 "./neo-c.h"
                                        # 1451 "./neo-c.h"
                                        if(_if_conditional80=string_equals(self->keys[it_90],key),                                        _if_conditional80) {
                                            # 1462 "./neo-c.h"
                                            # 1453 "./neo-c.h"
                                            if(_if_conditional81=1,                                            _if_conditional81) {
                                                # 1454 "./neo-c.h"
                                                self->keys[it_90] = come_decrement_ref_count2(self->keys[it_90], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                # 1455 "./neo-c.h"
                                                list$1charp_remove(self->key_list,self->keys[it_90]);
                                                # 1456 "./neo-c.h"
                                                self->keys[it_90]=(char*)come_increment_ref_count(key);
                                            }
                                            else {
                                                # 1459 "./neo-c.h"
                                                list$1charp_remove(self->key_list,self->keys[it_90]);
                                                # 1460 "./neo-c.h"
                                                self->keys[it_90]=key;
                                            }
                                            # 1469 "./neo-c.h"
                                            # 1462 "./neo-c.h"
                                            if(_if_conditional101=1,                                            _if_conditional101) {
                                                # 1463 "./neo-c.h"
                                                come_call_finalizer3(self->items[it_90],sVar_finalize, 0, 0, 0, 0, (void*)0);
                                                # 1464 "./neo-c.h"
                                                self->items[it_90]=(struct sVar*)come_increment_ref_count(item);
                                            }
                                            else {
                                                # 1467 "./neo-c.h"
                                                self->items[it_90]=item;
                                            }
                                            # 1469 "./neo-c.h"
                                            break;
                                        }
                                        # 1472 "./neo-c.h"
                                        it_90++;
                                        # 1482 "./neo-c.h"
                                        # 1474 "./neo-c.h"
                                        if(_if_conditional102=it_90>=self->size,                                        _if_conditional102) {
                                            # 1475 "./neo-c.h"
                                            it_90=0;
                                        }
                                        else {
                                            # 1482 "./neo-c.h"
                                            # 1477 "./neo-c.h"
                                            if(_if_conditional103=it_90==hash_89,                                            _if_conditional103) {
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
                                        self->item_existance[it_90]=(_Bool)1;
                                        # 1491 "./neo-c.h"
                                        # 1485 "./neo-c.h"
                                        if(_if_conditional104=1,                                        _if_conditional104) {
                                            # 1486 "./neo-c.h"
                                            self->keys[it_90]=(char*)come_increment_ref_count(key);
                                        }
                                        else {
                                            # 1489 "./neo-c.h"
                                            self->keys[it_90]=key;
                                        }
                                        # 1498 "./neo-c.h"
                                        # 1491 "./neo-c.h"
                                        if(_if_conditional105=1,                                        _if_conditional105) {
                                            # 1492 "./neo-c.h"
                                            self->items[it_90]=(struct sVar*)come_increment_ref_count(item);
                                        }
                                        else {
                                            # 1495 "./neo-c.h"
                                            self->items[it_90]=item;
                                        }
                                        # 1498 "./neo-c.h"
                                        self->len++;
                                        # 1500 "./neo-c.h"
                                        break;
                                    }
                                }
                                # 1504 "./neo-c.h"
                                same_key_exist_107=(_Bool)0;
                                # 1512 "./neo-c.h"
                                for(                                it2_110=list$1charp_begin(self->key_list);                                !list$1charp_end(self->key_list);                                it2_110=list$1charp_next(self->key_list)                                ){
                                    # 1510 "./neo-c.h"
                                    # 1507 "./neo-c.h"
                                    if(_if_conditional110=string_equals(it2_110,key),                                    _if_conditional110) {
                                        # 1508 "./neo-c.h"
                                        same_key_exist_107=(_Bool)1;
                                    }
                                }
                                # 1516 "./neo-c.h"
                                # 1512 "./neo-c.h"
                                if(_if_conditional111=!same_key_exist_107,                                _if_conditional111) {
                                    # 1513 "./neo-c.h"
                                    list$1charp_push_back(self->key_list,key);
                                }
                                # 1516 "./neo-c.h"
                                __result86__ = __result_obj__ = self;
                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                return __result86__;
                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
int size_78;
void* right_value102;
char** keys_79;
void* right_value103;
struct sVar** items_80;
void* right_value104;
_Bool* item_existance_81;
int len_82;
char* it_83;
struct sVar* default_value_84;
struct sVar* it2_85;
unsigned int hash_86;
int n_87;
_Bool _while_condtional14;
_Bool _if_conditional76;
_Bool _if_conditional77;
_Bool _if_conditional78;
struct sVar* default_value_88;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_78, 0, sizeof(int));
right_value102 = (void*)0;
memset(&keys_79, 0, sizeof(char**));
right_value103 = (void*)0;
memset(&items_80, 0, sizeof(struct sVar**));
right_value104 = (void*)0;
memset(&item_existance_81, 0, sizeof(_Bool*));
memset(&len_82, 0, sizeof(int));
memset(&it_83, 0, sizeof(char*));
memset(&default_value_84, 0, sizeof(struct sVar*));
memset(&it2_85, 0, sizeof(struct sVar*));
memset(&hash_86, 0, sizeof(unsigned int));
memset(&n_87, 0, sizeof(int));
memset(&default_value_88, 0, sizeof(struct sVar*));
                                        # 1312 "./neo-c.h"
                                        size_78=self->size*10;
                                        # 1313 "./neo-c.h"
                                        keys_79=(char**)come_increment_ref_count(((char**)(right_value102=(char**)come_calloc(1, sizeof(char*)*(1*(size_78)), "./neo-c.h", 1313, "char*%"))));
                                        right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 1314 "./neo-c.h"
                                        items_80=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value103=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_78)), "./neo-c.h", 1314, "sVar*%"))));
                                        come_call_finalizer3(right_value103,sVar_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 1315 "./neo-c.h"
                                        item_existance_81=(_Bool*)come_increment_ref_count(((_Bool*)(right_value104=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_78)), "./neo-c.h", 1315, "bool"))));
                                        right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 1317 "./neo-c.h"
                                        len_82=0;
                                        # 1352 "./neo-c.h"
                                        for(                                        it_83=map$2charphsVarph_begin(self);                                        !map$2charphsVarph_end(self);                                        it_83=map$2charphsVarph_next(self)                                        ){
                                            # 1320 "./neo-c.h"
                                            # 1321 "./neo-c.h"
                                            memset(&default_value_84,0,sizeof(struct sVar*));
                                            # 1322 "./neo-c.h"
                                            it2_85=map$2charphsVarph_at(self,it_83,default_value_84);
                                            # 1323 "./neo-c.h"
                                            hash_86=string_get_hash_key(it_83)%size_78;
                                            # 1324 "./neo-c.h"
                                            n_87=hash_86;
                                            # 1350 "./neo-c.h"
                                            while(_while_condtional14=(_Bool)1,                                            _while_condtional14) {
                                                # 1349 "./neo-c.h"
                                                # 1327 "./neo-c.h"
                                                if(_if_conditional76=item_existance_81[n_87],                                                _if_conditional76) {
                                                    # 1329 "./neo-c.h"
                                                    n_87++;
                                                    # 1339 "./neo-c.h"
                                                    # 1331 "./neo-c.h"
                                                    if(_if_conditional77=n_87>=size_78,                                                    _if_conditional77) {
                                                        # 1332 "./neo-c.h"
                                                        n_87=0;
                                                    }
                                                    else {
                                                        # 1339 "./neo-c.h"
                                                        # 1334 "./neo-c.h"
                                                        if(_if_conditional78=n_87==hash_86,                                                        _if_conditional78) {
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
                                                    item_existance_81[n_87]=(_Bool)1;
                                                    # 1342 "./neo-c.h"
                                                    keys_79[n_87]=it_83;
                                                    # 1343 "./neo-c.h"
                                                    # 1344 "./neo-c.h"
                                                    items_80[n_87]=map$2charphsVarph_at(self,it_83,default_value_88);
                                                    # 1346 "./neo-c.h"
                                                    len_82++;
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
                                        self->keys=keys_79;
                                        # 1357 "./neo-c.h"
                                        self->items=items_80;
                                        # 1358 "./neo-c.h"
                                        self->item_existance=item_existance_81;
                                        # 1360 "./neo-c.h"
                                        self->size=size_78;
                                        # 1361 "./neo-c.h"
                                        self->len=len_82;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_91;
struct list_item$1charp* it_92;
_Bool _while_condtional16;
_Bool _if_conditional82;
struct list$1charp* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_91, 0, sizeof(int));
memset(&it_92, 0, sizeof(struct list_item$1charp*));
                                                    # 435 "./neo-c.h"
                                                    it2_91=0;
                                                    # 436 "./neo-c.h"
                                                    it_92=self->head;
                                                    # 447 "./neo-c.h"
                                                    while(_while_condtional16=it_92!=((void*)0),                                                    _while_condtional16) {
                                                        # 442 "./neo-c.h"
                                                        # 438 "./neo-c.h"
                                                        if(_if_conditional82=string_equals(it_92->item,item),                                                        _if_conditional82) {
                                                            # 439 "./neo-c.h"
                                                            list$1charp_delete(self,it2_91,it2_91+1);
                                                            # 440 "./neo-c.h"
                                                            break;
                                                        }
                                                        # 442 "./neo-c.h"
                                                        it2_91++;
                                                        # 444 "./neo-c.h"
                                                        it_92=it_92->next;
                                                    }
                                                    # 447 "./neo-c.h"
                                                    __result77__ = __result_obj__ = self;
                                                    return __result77__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
int tmp_93;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
struct list$1charp* __result74__;
_Bool _if_conditional89;
_Bool _if_conditional90;
struct list_item$1charp* it_96;
int i_97;
_Bool _while_condtional18;
_Bool _if_conditional91;
struct list_item$1charp* prev_it_98;
_Bool _if_conditional92;
_Bool _if_conditional93;
struct list_item$1charp* it_99;
int i_100;
_Bool _while_condtional19;
_Bool _if_conditional94;
_Bool _if_conditional95;
struct list_item$1charp* prev_it_101;
struct list_item$1charp* it_102;
struct list_item$1charp* head_prev_it_103;
struct list_item$1charp* tail_it_104;
int i_105;
_Bool _while_condtional20;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
struct list_item$1charp* prev_it_106;
_Bool _if_conditional99;
_Bool _if_conditional100;
struct list$1charp* __result76__;
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
                                                                # 454 "./neo-c.h"
                                                                # 451 "./neo-c.h"
                                                                if(_if_conditional83=head<0,                                                                _if_conditional83) {
                                                                    # 452 "./neo-c.h"
                                                                    head+=self->len;
                                                                }
                                                                # 458 "./neo-c.h"
                                                                # 454 "./neo-c.h"
                                                                if(_if_conditional84=tail<0,                                                                _if_conditional84) {
                                                                    # 455 "./neo-c.h"
                                                                    tail+=self->len+1;
                                                                }
                                                                # 464 "./neo-c.h"
                                                                # 458 "./neo-c.h"
                                                                if(_if_conditional85=head>tail,                                                                _if_conditional85) {
                                                                    # 459 "./neo-c.h"
                                                                    tmp_93=tail;
                                                                    # 460 "./neo-c.h"
                                                                    tail=head;
                                                                    # 461 "./neo-c.h"
                                                                    head=tmp_93;
                                                                }
                                                                # 468 "./neo-c.h"
                                                                # 464 "./neo-c.h"
                                                                if(_if_conditional86=head<0,                                                                _if_conditional86) {
                                                                    # 465 "./neo-c.h"
                                                                    head=0;
                                                                }
                                                                # 472 "./neo-c.h"
                                                                # 468 "./neo-c.h"
                                                                if(_if_conditional87=tail>self->len,                                                                _if_conditional87) {
                                                                    # 469 "./neo-c.h"
                                                                    tail=self->len;
                                                                }
                                                                # 476 "./neo-c.h"
                                                                # 472 "./neo-c.h"
                                                                if(_if_conditional88=head==tail,                                                                _if_conditional88) {
                                                                    # 473 "./neo-c.h"
                                                                    __result74__ = __result_obj__ = self;
                                                                    return __result74__;
                                                                }
                                                                # 571 "./neo-c.h"
                                                                # 476 "./neo-c.h"
                                                                if(_if_conditional89=head==0&&tail==self->len,                                                                _if_conditional89) {
                                                                    # 478 "./neo-c.h"
                                                                    list$1charp_reset(self);
                                                                }
                                                                else {
                                                                    # 571 "./neo-c.h"
                                                                    # 480 "./neo-c.h"
                                                                    if(_if_conditional90=head==0,                                                                    _if_conditional90) {
                                                                        # 481 "./neo-c.h"
                                                                        it_96=self->head;
                                                                        # 482 "./neo-c.h"
                                                                        i_97=0;
                                                                        # 504 "./neo-c.h"
                                                                        while(_while_condtional18=it_96!=((void*)0),                                                                        _while_condtional18) {
                                                                            # 503 "./neo-c.h"
                                                                            # 484 "./neo-c.h"
                                                                            if(_if_conditional91=i_97<tail,                                                                            _if_conditional91) {
                                                                                # 485 "./neo-c.h"
                                                                                prev_it_98=it_96;
                                                                                # 487 "./neo-c.h"
                                                                                it_96=it_96->next;
                                                                                # 488 "./neo-c.h"
                                                                                i_97++;
                                                                                # 490 "./neo-c.h"
                                                                                come_call_finalizer3(prev_it_98,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                # 492 "./neo-c.h"
                                                                                self->len--;
                                                                            }
                                                                            else {
                                                                                # 503 "./neo-c.h"
                                                                                # 494 "./neo-c.h"
                                                                                if(_if_conditional92=i_97==tail,                                                                                _if_conditional92) {
                                                                                    # 495 "./neo-c.h"
                                                                                    self->head=it_96;
                                                                                    # 496 "./neo-c.h"
                                                                                    self->head->prev=((void*)0);
                                                                                    # 497 "./neo-c.h"
                                                                                    break;
                                                                                }
                                                                                else {
                                                                                    # 500 "./neo-c.h"
                                                                                    it_96=it_96->next;
                                                                                    # 501 "./neo-c.h"
                                                                                    i_97++;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    else {
                                                                        # 571 "./neo-c.h"
                                                                        # 505 "./neo-c.h"
                                                                        if(_if_conditional93=tail==self->len,                                                                        _if_conditional93) {
                                                                            # 506 "./neo-c.h"
                                                                            it_99=self->head;
                                                                            # 507 "./neo-c.h"
                                                                            i_100=0;
                                                                            # 529 "./neo-c.h"
                                                                            while(_while_condtional19=it_99!=((void*)0),                                                                            _while_condtional19) {
                                                                                # 514 "./neo-c.h"
                                                                                # 509 "./neo-c.h"
                                                                                if(_if_conditional94=i_100==head,                                                                                _if_conditional94) {
                                                                                    # 510 "./neo-c.h"
                                                                                    self->tail=it_99->prev;
                                                                                    # 511 "./neo-c.h"
                                                                                    self->tail->next=((void*)0);
                                                                                }
                                                                                # 528 "./neo-c.h"
                                                                                # 514 "./neo-c.h"
                                                                                if(_if_conditional95=i_100>=head,                                                                                _if_conditional95) {
                                                                                    # 515 "./neo-c.h"
                                                                                    prev_it_101=it_99;
                                                                                    # 517 "./neo-c.h"
                                                                                    it_99=it_99->next;
                                                                                    # 518 "./neo-c.h"
                                                                                    i_100++;
                                                                                    # 520 "./neo-c.h"
                                                                                    come_call_finalizer3(prev_it_101,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                    # 522 "./neo-c.h"
                                                                                    self->len--;
                                                                                }
                                                                                else {
                                                                                    # 525 "./neo-c.h"
                                                                                    it_99=it_99->next;
                                                                                    # 526 "./neo-c.h"
                                                                                    i_100++;
                                                                                }
                                                                            }
                                                                        }
                                                                        else {
                                                                            # 531 "./neo-c.h"
                                                                            it_102=self->head;
                                                                            # 533 "./neo-c.h"
                                                                            head_prev_it_103=((void*)0);
                                                                            # 534 "./neo-c.h"
                                                                            tail_it_104=((void*)0);
                                                                            # 537 "./neo-c.h"
                                                                            i_105=0;
                                                                            # 563 "./neo-c.h"
                                                                            while(_while_condtional20=it_102!=((void*)0),                                                                            _while_condtional20) {
                                                                                # 542 "./neo-c.h"
                                                                                # 539 "./neo-c.h"
                                                                                if(_if_conditional96=i_105==head,                                                                                _if_conditional96) {
                                                                                    # 540 "./neo-c.h"
                                                                                    head_prev_it_103=it_102->prev;
                                                                                }
                                                                                # 546 "./neo-c.h"
                                                                                # 542 "./neo-c.h"
                                                                                if(_if_conditional97=i_105==tail,                                                                                _if_conditional97) {
                                                                                    # 543 "./neo-c.h"
                                                                                    tail_it_104=it_102;
                                                                                }
                                                                                # 561 "./neo-c.h"
                                                                                # 546 "./neo-c.h"
                                                                                if(_if_conditional98=i_105>=head&&i_105<tail,                                                                                _if_conditional98) {
                                                                                    # 548 "./neo-c.h"
                                                                                    prev_it_106=it_102;
                                                                                    # 550 "./neo-c.h"
                                                                                    it_102=it_102->next;
                                                                                    # 551 "./neo-c.h"
                                                                                    i_105++;
                                                                                    # 553 "./neo-c.h"
                                                                                    come_call_finalizer3(prev_it_106,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                    # 555 "./neo-c.h"
                                                                                    self->len--;
                                                                                }
                                                                                else {
                                                                                    # 558 "./neo-c.h"
                                                                                    it_102=it_102->next;
                                                                                    # 559 "./neo-c.h"
                                                                                    i_105++;
                                                                                }
                                                                            }
                                                                            # 566 "./neo-c.h"
                                                                            # 563 "./neo-c.h"
                                                                            if(_if_conditional99=head_prev_it_103!=((void*)0),                                                                            _if_conditional99) {
                                                                                # 564 "./neo-c.h"
                                                                                head_prev_it_103->next=tail_it_104;
                                                                            }
                                                                            # 569 "./neo-c.h"
                                                                            # 566 "./neo-c.h"
                                                                            if(_if_conditional100=tail_it_104!=((void*)0),                                                                            _if_conditional100) {
                                                                                # 567 "./neo-c.h"
                                                                                tail_it_104->prev=head_prev_it_103;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                # 571 "./neo-c.h"
                                                                __result76__ = __result_obj__ = self;
                                                                return __result76__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_94;
_Bool _while_condtional17;
struct list_item$1charp* prev_it_95;
struct list$1charp* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_94, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_95, 0, sizeof(struct list_item$1charp*));
                                                                        # 420 "./neo-c.h"
                                                                        it_94=self->head;
                                                                        # 427 "./neo-c.h"
                                                                        while(_while_condtional17=it_94!=((void*)0),                                                                        _while_condtional17) {
                                                                            # 422 "./neo-c.h"
                                                                            prev_it_95=it_94;
                                                                            # 423 "./neo-c.h"
                                                                            it_94=it_94->next;
                                                                            # 424 "./neo-c.h"
                                                                            come_call_finalizer3(prev_it_95,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
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

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional106;
char* result_108;
char* __result78__;
_Bool _if_conditional107;
char* __result79__;
char* result_109;
char* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_108, 0, sizeof(char*));
memset(&result_109, 0, sizeof(char*));
                                    # 281 "./neo-c.h"
                                    # 276 "./neo-c.h"
                                    if(_if_conditional106=self==((void*)0),                                    _if_conditional106) {
                                        # 277 "./neo-c.h"
                                        # 278 "./neo-c.h"
                                        memset(&result_108,0,sizeof(char*));
                                        # 279 "./neo-c.h"
                                        __result78__ = __result_obj__ = result_108;
                                        return __result78__;
                                    }
                                    # 281 "./neo-c.h"
                                    self->it=self->head;
                                    # 287 "./neo-c.h"
                                    # 283 "./neo-c.h"
                                    if(self->it) {
                                        # 284 "./neo-c.h"
                                        __result79__ = __result_obj__ = self->it->item;
                                        return __result79__;
                                    }
                                    # 287 "./neo-c.h"
                                    # 288 "./neo-c.h"
                                    memset(&result_109,0,sizeof(char*));
                                    # 289 "./neo-c.h"
                                    __result80__ = __result_obj__ = result_109;
                                    return __result80__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result81__;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 311 "./neo-c.h"
                                    __result81__ = self==((void*)0)||self->it==((void*)0);
                                    return __result81__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional108;
char* result_111;
char* __result82__;
_Bool _if_conditional109;
char* __result83__;
char* result_112;
char* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_111, 0, sizeof(char*));
memset(&result_112, 0, sizeof(char*));
                                    # 299 "./neo-c.h"
                                    # 293 "./neo-c.h"
                                    if(_if_conditional108=self==((void*)0)||self->it==((void*)0),                                    _if_conditional108) {
                                        # 294 "./neo-c.h"
                                        # 295 "./neo-c.h"
                                        memset(&result_111,0,sizeof(char*));
                                        # 296 "./neo-c.h"
                                        __result82__ = __result_obj__ = result_111;
                                        return __result82__;
                                    }
                                    # 299 "./neo-c.h"
                                    self->it=self->it->next;
                                    # 305 "./neo-c.h"
                                    # 301 "./neo-c.h"
                                    if(self->it) {
                                        # 302 "./neo-c.h"
                                        __result83__ = __result_obj__ = self->it->item;
                                        return __result83__;
                                    }
                                    # 305 "./neo-c.h"
                                    # 306 "./neo-c.h"
                                    memset(&result_112,0,sizeof(char*));
                                    # 307 "./neo-c.h"
                                    __result84__ = __result_obj__ = result_112;
                                    return __result84__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional112;
void* right_value105;
struct list_item$1charp* litem_113;
_Bool _if_conditional113;
void* right_value106;
struct list_item$1charp* litem_114;
void* right_value107;
struct list_item$1charp* litem_115;
struct list$1charp* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value105 = (void*)0;
memset(&litem_113, 0, sizeof(struct list_item$1charp*));
right_value106 = (void*)0;
memset(&litem_114, 0, sizeof(struct list_item$1charp*));
right_value107 = (void*)0;
memset(&litem_115, 0, sizeof(struct list_item$1charp*));
                                        # 247 "./neo-c.h"
                                        # 216 "./neo-c.h"
                                        if(_if_conditional112=self->len==0,                                        _if_conditional112) {
                                            # 217 "./neo-c.h"
                                            litem_113=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value105=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 217, "list_item$1charp"))));
                                            come_call_finalizer3(right_value105,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                            # 219 "./neo-c.h"
                                            litem_113->prev=((void*)0);
                                            # 220 "./neo-c.h"
                                            litem_113->next=((void*)0);
                                            # 221 "./neo-c.h"
                                            litem_113->item=item;
                                            # 223 "./neo-c.h"
                                            self->tail=litem_113;
                                            # 224 "./neo-c.h"
                                            self->head=litem_113;
                                        }
                                        else {
                                            # 247 "./neo-c.h"
                                            # 226 "./neo-c.h"
                                            if(_if_conditional113=self->len==1,                                            _if_conditional113) {
                                                # 227 "./neo-c.h"
                                                litem_114=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value106=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 227, "list_item$1charp"))));
                                                come_call_finalizer3(right_value106,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                # 229 "./neo-c.h"
                                                litem_114->prev=self->head;
                                                # 230 "./neo-c.h"
                                                litem_114->next=((void*)0);
                                                # 231 "./neo-c.h"
                                                litem_114->item=item;
                                                # 233 "./neo-c.h"
                                                self->tail=litem_114;
                                                # 234 "./neo-c.h"
                                                self->head->next=litem_114;
                                            }
                                            else {
                                                # 237 "./neo-c.h"
                                                litem_115=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value107=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 237, "list_item$1charp"))));
                                                come_call_finalizer3(right_value107,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                # 239 "./neo-c.h"
                                                litem_115->prev=self->tail;
                                                # 240 "./neo-c.h"
                                                litem_115->next=((void*)0);
                                                # 241 "./neo-c.h"
                                                litem_115->item=item;
                                                # 243 "./neo-c.h"
                                                self->tail->next=litem_115;
                                                # 244 "./neo-c.h"
                                                self->tail=litem_115;
                                            }
                                        }
                                        # 247 "./neo-c.h"
                                        self->len++;
                                        # 249 "./neo-c.h"
                                        __result85__ = __result_obj__ = self;
                                        return __result85__;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_116;
_Bool _if_conditional114;
_Bool _if_conditional115;
int i_117;
_Bool _if_conditional116;
_Bool _if_conditional117;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_116, 0, sizeof(int));
memset(&i_117, 0, sizeof(int));
                        # 1112 "./neo-c.h"
                        for(                        i_116=0;                        i_116<self->size;                        i_116++                        ){
                            # 1111 "./neo-c.h"
                            # 1106 "./neo-c.h"
                            if(_if_conditional114=self->item_existance[i_116],                            _if_conditional114) {
                                # 1110 "./neo-c.h"
                                # 1107 "./neo-c.h"
                                if(_if_conditional115=1,                                _if_conditional115) {
                                    # 1108 "./neo-c.h"
                                    come_call_finalizer3(self->items[i_116],sVar_finalize, 0, 0, 0, 0, (void*)0);
                                }
                            }
                        }
                        # 1112 "./neo-c.h"
                        come_free((char*)self->items);
                        # 1121 "./neo-c.h"
                        for(                        i_117=0;                        i_117<self->size;                        i_117++                        ){
                            # 1120 "./neo-c.h"
                            # 1115 "./neo-c.h"
                            if(_if_conditional116=self->item_existance[i_117],                            _if_conditional116) {
                                # 1119 "./neo-c.h"
                                # 1116 "./neo-c.h"
                                if(_if_conditional117=1,                                _if_conditional117) {
                                    # 1117 "./neo-c.h"
                                    self->keys[i_117] = come_decrement_ref_count2(self->keys[i_117], (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional128;
_Bool _if_conditional129;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "CVALUE_finalize"
                # 0 "CVALUE_finalize"
                if(_if_conditional128=self!=((void*)0)&&self->c_value!=((void*)0),                _if_conditional128) {
                    # 0 "CVALUE_finalize"
                    self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 2 "CVALUE_finalize"
                # 1 "CVALUE_finalize"
                if(_if_conditional129=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional129) {
                    # 1 "CVALUE_finalize"
                    come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
}

struct sNode* string_node_v11(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional140;
int __exception_result_var_b1;
struct sNode* expression_node_135;
_Bool _if_conditional141;
struct sNode* __dec_obj32;
void* right_value120;
struct sNode* __dec_obj33;
int __exception_result_var_b2;
struct sNode* expression_node2_136;
_Bool _if_conditional142;
struct sNode* __dec_obj34;
void* right_value121;
struct sNode* __dec_obj35;
int __exception_result_var_b3;
struct sNode* expression_node3_137;
_Bool _if_conditional143;
struct sNode* __dec_obj36;
void* right_value122;
struct sNode* __dec_obj37;
int __exception_result_var_b4;
void* right_value123;
struct sBlock* block_138;
void* right_value124;
void* right_value125;
struct sNode* _inf_value1;
struct sForNode* _inf_obj_value1;
void* right_value132;
struct sNode* __result99__;
void* right_value133;
struct sNode* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&expression_node_135, 0, sizeof(struct sNode*));
right_value120 = (void*)0;
memset(&expression_node2_136, 0, sizeof(struct sNode*));
right_value121 = (void*)0;
memset(&expression_node3_137, 0, sizeof(struct sNode*));
right_value122 = (void*)0;
right_value123 = (void*)0;
memset(&block_138, 0, sizeof(struct sBlock*));
right_value124 = (void*)0;
right_value125 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
    # 230 "11for.c"
    # 189 "11for.c"
    if(_if_conditional140=charp_operator_equals(buf,"for"),    _if_conditional140) {
        # 190 "11for.c"
        (come_push_stackframe("11for.c", 190, 0),__exception_result_var_b1=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b1);
        # 193 "11for.c"
        parse_sharp_v5(info);
        # 194 "11for.c"
        # 201 "11for.c"
        # 195 "11for.c"
        if(_if_conditional141=*info->p==59,        _if_conditional141) {
            # 196 "11for.c"
            __dec_obj32=expression_node_135;
            expression_node_135=((void*)0);
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            # 199 "11for.c"
            __dec_obj33=expression_node_135;
            expression_node_135=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value120=expression_v13(info))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value120) { right_value120 = come_decrement_ref_count2(right_value120, ((struct sNode*)right_value120)->finalize, ((struct sNode*)right_value120)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 201 "11for.c"
        parse_sharp_v5(info);
        # 202 "11for.c"
        (come_push_stackframe("11for.c", 202, 1),__exception_result_var_b2=expected_next_character(59,info), come_pop_stackframe(), __exception_result_var_b2);
        # 203 "11for.c"
        parse_sharp_v5(info);
        # 204 "11for.c"
        # 211 "11for.c"
        # 205 "11for.c"
        if(_if_conditional142=*info->p==59,        _if_conditional142) {
            # 206 "11for.c"
            __dec_obj34=expression_node2_136;
            expression_node2_136=((void*)0);
            if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            # 209 "11for.c"
            __dec_obj35=expression_node2_136;
            expression_node2_136=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value121=expression_v13(info))));
            if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count2(__dec_obj35, ((struct sNode*)__dec_obj35)->finalize, ((struct sNode*)__dec_obj35)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value121) { right_value121 = come_decrement_ref_count2(right_value121, ((struct sNode*)right_value121)->finalize, ((struct sNode*)right_value121)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 211 "11for.c"
        parse_sharp_v5(info);
        # 212 "11for.c"
        (come_push_stackframe("11for.c", 212, 2),__exception_result_var_b3=expected_next_character(59,info), come_pop_stackframe(), __exception_result_var_b3);
        # 213 "11for.c"
        parse_sharp_v5(info);
        # 214 "11for.c"
        # 221 "11for.c"
        # 215 "11for.c"
        if(_if_conditional143=*info->p==41,        _if_conditional143) {
            # 216 "11for.c"
            __dec_obj36=expression_node3_137;
            expression_node3_137=((void*)0);
            if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count2(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            # 219 "11for.c"
            __dec_obj37=expression_node3_137;
            expression_node3_137=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value122=expression_v13(info))));
            if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value122) { right_value122 = come_decrement_ref_count2(right_value122, ((struct sNode*)right_value122)->finalize, ((struct sNode*)right_value122)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 221 "11for.c"
        parse_sharp_v5(info);
        # 222 "11for.c"
        (come_push_stackframe("11for.c", 222, 3),__exception_result_var_b4=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b4);
        # 223 "11for.c"
        parse_sharp_v5(info);
        # 225 "11for.c"
        block_138=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value123=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer3(right_value123,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        # 227 "11for.c"
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "11for.c", 227, "struct sNode");
        _inf_obj_value1=come_increment_ref_count(((struct sForNode*)(right_value125=sForNode_initialize((struct sForNode*)come_increment_ref_count(((struct sForNode*)(right_value124=(struct sForNode*)come_calloc(1, sizeof(struct sForNode)*(1), "11for.c", 227, "sForNode")))),(struct sNode*)come_increment_ref_count(expression_node_135),(struct sNode*)come_increment_ref_count(expression_node2_136),(struct sNode*)come_increment_ref_count(expression_node3_137),block_138,info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sForNode_finalize;
        _inf_value1->clone=(void*)sForNode_clone;
        _inf_value1->compile=(void*)sForNode_compile;
        _inf_value1->sline=(void*)sNodeBase_sline;
        _inf_value1->sname=(void*)sNodeBase_sname;
        _inf_value1->terminated=(void*)sForNode_terminated;
        _inf_value1->kind=(void*)sForNode_kind;
        __result99__ = __result_obj__ = ((struct sNode*)(right_value132=_inf_value1));
        if(expression_node_135) { expression_node_135 = come_decrement_ref_count2(expression_node_135, ((struct sNode*)expression_node_135)->finalize, ((struct sNode*)expression_node_135)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(expression_node2_136) { expression_node2_136 = come_decrement_ref_count2(expression_node2_136, ((struct sNode*)expression_node2_136)->finalize, ((struct sNode*)expression_node2_136)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(expression_node3_137) { expression_node3_137 = come_decrement_ref_count2(expression_node3_137, ((struct sNode*)expression_node3_137)->finalize, ((struct sNode*)expression_node3_137)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(block_138,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value124,sForNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value125,sForNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value132) { right_value132 = come_decrement_ref_count2(right_value132, ((struct sNode*)right_value132)->finalize, ((struct sNode*)right_value132)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result99__;
        if(expression_node_135) { expression_node_135 = come_decrement_ref_count2(expression_node_135, ((struct sNode*)expression_node_135)->finalize, ((struct sNode*)expression_node_135)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(expression_node2_136) { expression_node2_136 = come_decrement_ref_count2(expression_node2_136, ((struct sNode*)expression_node2_136)->finalize, ((struct sNode*)expression_node2_136)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(expression_node3_137) { expression_node3_137 = come_decrement_ref_count2(expression_node3_137, ((struct sNode*)expression_node3_137)->finalize, ((struct sNode*)expression_node3_137)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(block_138,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 230 "11for.c"
    __result100__ = __result_obj__ = ((struct sNode*)(right_value133=string_node_v10(buf,head,head_sline,info)));
    if(right_value133) { right_value133 = come_decrement_ref_count2(right_value133, ((struct sNode*)right_value133)->finalize, ((struct sNode*)right_value133)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result100__;
}

static void sForNode_finalize(struct sForNode* self){
void* __result_obj__;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sForNode_finalize"
            # 0 "sForNode_finalize"
            if(_if_conditional144=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional144) {
                # 0 "sForNode_finalize"
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 2 "sForNode_finalize"
            # 1 "sForNode_finalize"
            if(_if_conditional145=self!=((void*)0)&&self->mExpressionNode!=((void*)0),            _if_conditional145) {
                # 1 "sForNode_finalize"
                if(self->mExpressionNode) { self->mExpressionNode = come_decrement_ref_count2(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 3 "sForNode_finalize"
            # 2 "sForNode_finalize"
            if(_if_conditional146=self!=((void*)0)&&self->mExpressionNode2!=((void*)0),            _if_conditional146) {
                # 2 "sForNode_finalize"
                if(self->mExpressionNode2) { self->mExpressionNode2 = come_decrement_ref_count2(self->mExpressionNode2, ((struct sNode*)self->mExpressionNode2)->finalize, ((struct sNode*)self->mExpressionNode2)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 4 "sForNode_finalize"
            # 3 "sForNode_finalize"
            if(_if_conditional147=self!=((void*)0)&&self->mExpressionNode3!=((void*)0),            _if_conditional147) {
                # 3 "sForNode_finalize"
                if(self->mExpressionNode3) { self->mExpressionNode3 = come_decrement_ref_count2(self->mExpressionNode3, ((struct sNode*)self->mExpressionNode3)->finalize, ((struct sNode*)self->mExpressionNode3)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 5 "sForNode_finalize"
            # 4 "sForNode_finalize"
            if(_if_conditional148=self!=((void*)0)&&self->mBlock!=((void*)0),            _if_conditional148) {
                # 4 "sForNode_finalize"
                come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sForNode* sForNode_clone(struct sForNode* self){
void* __result_obj__;
_Bool _if_conditional149;
struct sForNode* __result97__;
void* right_value126;
struct sForNode* result_139;
_Bool _if_conditional150;
_Bool _if_conditional151;
void* right_value127;
char* __dec_obj38;
_Bool _if_conditional152;
void* right_value128;
struct sNode* __dec_obj39;
_Bool _if_conditional153;
void* right_value129;
struct sNode* __dec_obj40;
_Bool _if_conditional154;
void* right_value130;
struct sNode* __dec_obj41;
_Bool _if_conditional155;
void* right_value131;
struct sBlock* __dec_obj42;
struct sForNode* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
right_value126 = (void*)0;
memset(&result_139, 0, sizeof(struct sForNode*));
right_value127 = (void*)0;
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
            # 3 "sForNode_clone"
            # 2 "sForNode_clone"
            if(_if_conditional149=self==(void*)0,            _if_conditional149) {
                # 2 "sForNode_clone"
                __result97__ = __result_obj__ = (void*)0;
                return __result97__;
            }
            # 3 "sForNode_clone"
            result_139=(struct sForNode*)come_increment_ref_count(((struct sForNode*)(right_value126=(struct sForNode*)come_calloc(1, sizeof(struct sForNode)*(1), "sForNode_clone", 3, "sForNode"))));
            come_call_finalizer3(right_value126,sForNode_finalize, 0, 1, 0, 0, __result_obj__);
            # 5 "sForNode_clone"
            # 4 "sForNode_clone"
            if(_if_conditional150=self!=((void*)0),            _if_conditional150) {
                # 4 "sForNode_clone"
                result_139->sline=self->sline;
            }
            # 6 "sForNode_clone"
            # 5 "sForNode_clone"
            if(_if_conditional151=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional151) {
                # 5 "sForNode_clone"
                __dec_obj38=result_139->sname;
                result_139->sname=(char*)come_increment_ref_count(((char*)(right_value127=string_clone(self->sname))));
                __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 7 "sForNode_clone"
            # 6 "sForNode_clone"
            if(_if_conditional152=self!=((void*)0)&&self->mExpressionNode!=((void*)0),            _if_conditional152) {
                # 6 "sForNode_clone"
                __dec_obj39=result_139->mExpressionNode;
                result_139->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value128=sNode_clone(self->mExpressionNode))));
                if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value128) { right_value128 = come_decrement_ref_count2(right_value128, ((struct sNode*)right_value128)->finalize, ((struct sNode*)right_value128)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            # 8 "sForNode_clone"
            # 7 "sForNode_clone"
            if(_if_conditional153=self!=((void*)0)&&self->mExpressionNode2!=((void*)0),            _if_conditional153) {
                # 7 "sForNode_clone"
                __dec_obj40=result_139->mExpressionNode2;
                result_139->mExpressionNode2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value129=sNode_clone(self->mExpressionNode2))));
                if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count2(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value129) { right_value129 = come_decrement_ref_count2(right_value129, ((struct sNode*)right_value129)->finalize, ((struct sNode*)right_value129)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            # 9 "sForNode_clone"
            # 8 "sForNode_clone"
            if(_if_conditional154=self!=((void*)0)&&self->mExpressionNode3!=((void*)0),            _if_conditional154) {
                # 8 "sForNode_clone"
                __dec_obj41=result_139->mExpressionNode3;
                result_139->mExpressionNode3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value130=sNode_clone(self->mExpressionNode3))));
                if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count2(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value130) { right_value130 = come_decrement_ref_count2(right_value130, ((struct sNode*)right_value130)->finalize, ((struct sNode*)right_value130)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            # 10 "sForNode_clone"
            # 9 "sForNode_clone"
            if(_if_conditional155=self!=((void*)0)&&self->mBlock!=((void*)0),            _if_conditional155) {
                # 9 "sForNode_clone"
                __dec_obj42=result_139->mBlock;
                result_139->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value131=sBlock_clone(self->mBlock))));
                come_call_finalizer3(__dec_obj42,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value131,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 10 "sForNode_clone"
            __result98__ = __result_obj__ = result_139;
            come_call_finalizer3(result_139,sForNode_finalize, 0, 0, 1, 0, (void*)0);
            return __result98__;
            come_call_finalizer3(result_139,sForNode_finalize, 0, 0, 0, 0, (void*)0);
}

